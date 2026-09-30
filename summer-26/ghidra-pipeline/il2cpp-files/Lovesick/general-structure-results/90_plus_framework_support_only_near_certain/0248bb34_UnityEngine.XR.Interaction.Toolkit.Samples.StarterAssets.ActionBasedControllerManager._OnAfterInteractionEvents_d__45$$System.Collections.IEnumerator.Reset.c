/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager.<OnAfterInteractionEvents>d__45$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 0248bb34
PROGRAM: Lovesick-libil2cpp.so
SCORE: 141
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_21;validity_or_gating_hits_21;weak_vector_component_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager_<OnAfterInteractionEvents>d__45__System_Collections_IEnumerator_Reset
               (void)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  undefined2 uVar4;
  bool bVar5;
  bool bVar6;
  double __x;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  int *piVar19;
  ulong uVar20;
  undefined1 uVar21;
  char cVar22;
  long lVar23;
  undefined4 *puVar24;
  long lVar25;
  uint uVar26;
  long *plVar27;
  float *pfVar28;
  code *pcVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  long lVar33;
  float *pfVar34;
  long lVar35;
  uint uVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long *unaff_x19;
  uint unaff_w20;
  int iVar40;
  long unaff_x21;
  uint unaff_w22;
  long lVar41;
  long *unaff_x25;
  long *plVar42;
  uint *unaff_x26;
  uint uVar43;
  long *unaff_x27;
  long *plVar44;
  undefined8 *unaff_x28;
  uint unaff_w29;
  float fVar45;
  float fVar46;
  double dVar47;
  float in_s3;
  float fVar48;
  undefined4 uVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float unaff_s10;
  float fVar54;
  float fVar55;
  float fVar56;
  float unaff_s13;
  float fVar57;
  float fVar58;
  undefined4 uVar59;
  float unaff_s14;
  float fVar60;
  float unaff_s15;
  undefined8 in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  uint uStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  undefined8 in_stack_00000040;
  float fStack0000000000000048;
  float fStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  byte bStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined8 in_stack_00000068;
  long in_stack_00000070;
  undefined8 in_stack_00000078;
  float fStack0000000000000080;
  float fStack0000000000000084;
  float *in_stack_00000088;
  float fStack0000000000000090;
  undefined4 uStack0000000000000094;
  float fStack0000000000000098;
  float in_stack_000000a0;
  int iStack00000000000000a4;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  float in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  float fStack00000000000000c8;
  float fStack00000000000000cc;
  float in_stack_000000d0;
  undefined8 in_stack_000000d8;
  float fStack00000000000000e0;
  float fStack00000000000000e4;
  float fStack00000000000000e8;
  float fStack00000000000000ec;
  float in_stack_00000100;
  undefined8 in_stack_00000110;
  float in_stack_00000120;
  float in_stack_00000128;
  undefined8 in_stack_00000130;
  float in_stack_00000138;
  undefined8 in_stack_00000140;
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
  undefined4 in_stack_00000890;
  undefined4 in_stack_00000bf8;
  undefined4 in_stack_00000bfc;
  undefined8 in_stack_00000c00;
  long in_stack_000016d8;
  uint in_stack_0000176c;
  uint in_stack_00001788;
  undefined8 in_stack_00001790;
  undefined8 in_stack_00001798;
  float in_stack_000017a0;
  undefined8 in_stack_000017a8;
  float in_stack_000017b8;
  uint uVar61;
  uint in_stack_000017bc;
  
  do {
    fVar50 = unaff_s13;
    fStack00000000000000e8 = unaff_s15;
    fVar45 = in_s3;
    if ((unaff_w22 == 0) && ((*(byte *)((long)unaff_x19 + 0x254) >> 1 & 1) != 0)) {
      fVar46 = (float)(int)unaff_x19[0xbd] * fStack000000000000004c;
      fVar45 = (float)FUN_026fd46c(&stack0x00001770,0);
      fVar51 = fVar46 * unaff_s13 * (in_stack_00000110._4_4_ + in_stack_00000130._4_4_ + fVar45);
      fVar45 = (float)FUN_026fd46c(&stack0x00001770,0);
      fVar48 = (float)FUN_026fd45c(&stack0x00001770,0);
      unaff_s14 = unaff_s14 + 0.0;
      unaff_s10 = unaff_s10 + 0.0;
      fVar46 = fVar46 * unaff_s13 *
                        (((fVar45 - fVar48) - in_stack_00000130._4_4_) - in_stack_00000110._4_4_);
      fVar48 = in_s3 + fVar51;
      fVar45 = unaff_s15 + fVar51;
      fVar51 = (fVar51 - fVar46) * 0.5;
      unaff_s15 = (unaff_s15 + fVar46) - fVar51;
      in_s3 = (in_s3 + fVar46) - fVar51;
      fStack00000000000000e8 = fVar45 - fVar51;
      fVar45 = fVar48 - fVar51;
    }
    do {
      if (*(char *)((long)unaff_x19 + 0x46c) == '\0') {
        fVar51 = 0.0;
        fVar52 = 0.0;
        fStack00000000000000e0 = 0.0;
        fStack00000000000000e4 = 0.0;
        fVar46 = unaff_s10;
        fVar48 = unaff_s14;
        fStack00000000000000ec = unaff_s15;
      }
      else {
                    /* try { // try from 0248bb54 to 0258bb67 has its CatchHandler @ 0248bbdc */
        thunk_FUN_026935f0(_uStack0000000000000060,0);
                    /* catch() { ... } // from try @ 0248b6b4 with catch @ 0248bb68
                       try { // try from 0248bb68 to 0258bb83 has its CatchHandler @ 0248b32c */
        fVar55 = (fVar45 + unaff_s15) * 0.5;
        fVar57 = (unaff_s10 + unaff_s14) * 0.5;
        fVar51 = unaff_s14 - fVar57;
        fStack00000000000000e4 = 0.0;
        fVar48 = fVar51;
        fStack00000000000000e8 =
             (float)FUN_02692df0(fStack00000000000000e8 - fVar55,_uStack0000000000000060,0);
        fStack00000000000000e8 = fVar55 + fStack00000000000000e8;
        fStack00000000000000e4 = fStack00000000000000e4 + 0.0;
        fVar54 = unaff_s10 - fVar57;
        fStack00000000000000e0 = 0.0;
        fVar46 = fVar54;
        fStack00000000000000ec = (float)FUN_02692df0(unaff_s15 - fVar55,_uStack0000000000000060,0);
        fStack00000000000000ec = fVar55 + fStack00000000000000ec;
        fStack00000000000000e0 = fStack00000000000000e0 + 0.0;
        fVar52 = 0.0;
        fVar45 = (float)FUN_02692df0(fVar45 - fVar55,_uStack0000000000000060,0);
        fVar45 = fVar55 + fVar45;
        unaff_s14 = fVar57 + fVar51;
        fVar52 = fVar52 + 0.0;
        fVar51 = 0.0;
        in_s3 = (float)FUN_02692df0(in_s3 - fVar55,_uStack0000000000000060,0);
        in_s3 = fVar55 + in_s3;
        unaff_s10 = fVar57 + fVar54;
        fVar51 = fVar51 + 0.0;
        fVar46 = fVar57 + fVar46;
        fVar48 = fVar57 + fVar48;
      }
      if (*unaff_x25 == 0) goto LAB_02491464;
      lVar23 = *(long *)(*unaff_x25 + 0x38);
      uVar16 = (ulong)(uint)fVar50;
      if (lVar23 == 0) goto LAB_02491464;
      if (*(uint *)(lVar23 + 0x18) <= *unaff_x26)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar23 = lVar23 + (int)*unaff_x26 * unaff_x21;
      *(float *)(lVar23 + 0x120) = fVar46;
      *(float *)(lVar23 + 0x11c) = fStack00000000000000ec;
      *(float *)(lVar23 + 0x124) = fStack00000000000000e0;
      if ((*unaff_x25 == 0) || (lVar23 = *(long *)(*unaff_x25 + 0x38), lVar23 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar23 + 0x18) <= *unaff_x26)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar23 = lVar23 + (int)*unaff_x26 * unaff_x21;
      *(float *)(lVar23 + 0x114) = fVar48;
      *(float *)(lVar23 + 0x110) = fStack00000000000000e8;
      *(float *)(lVar23 + 0x118) = fStack00000000000000e4;
      if ((*unaff_x25 == 0) || (lVar23 = *(long *)(*unaff_x25 + 0x38), lVar23 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar23 + 0x18) <= *unaff_x26)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar23 = lVar23 + (int)*unaff_x26 * unaff_x21;
      *(float *)(lVar23 + 0x128) = fVar45;
      *(float *)(lVar23 + 300) = unaff_s14;
      *(float *)(lVar23 + 0x130) = fVar52;
      if ((*unaff_x25 == 0) || (lVar23 = *(long *)(*unaff_x25 + 0x38), lVar23 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar23 + 0x18) <= *unaff_x26)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar23 = lVar23 + (int)*unaff_x26 * unaff_x21;
      *(float *)(lVar23 + 0x134) = in_s3;
      *(float *)(lVar23 + 0x138) = unaff_s10;
      *(float *)(lVar23 + 0x13c) = fVar51;
      if ((*unaff_x25 == 0) || (lVar23 = *(long *)(*unaff_x25 + 0x38), lVar23 == 0))
      goto LAB_02491464;
      uVar11 = *unaff_x26;
      lVar41 = (long)(int)uVar11;
      if (*(uint *)(lVar23 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar33 = lVar23 + lVar41 * unaff_x21;
      *(int *)(lVar33 + 0x140) = (int)unaff_x19[199];
      fVar52 = *(float *)(unaff_x19 + 0x9a);
      uVar17 = (ulong)(uint)fVar52;
      fVar51 = *(float *)((long)unaff_x19 + 0x614);
      *(float *)(lVar33 + 0x15c) = (fVar45 - fStack00000000000000ec) / (fVar48 - fVar46);
      *(float *)(lVar33 + 0x14c) = (in_stack_00000138 - fVar52) + fVar51;
      in_stack_00000128 = in_stack_00000128 * fVar50;
      if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
        in_stack_00000128 = in_stack_00000128 / in_stack_00000100;
        in_stack_00000120 = (in_stack_00000120 * fVar50) / in_stack_00000100;
      }
      else {
        in_stack_00000120 = in_stack_00000120 * fVar50;
      }
      uVar26 = *(uint *)(unaff_x19 + 0x92);
      bVar8 = unaff_w29 != 0;
      in_stack_00000128 = fVar51 + in_stack_00000128;
      bVar9 = uVar11 != uVar26;
      if (bVar9 && bVar8) {
        fVar45 = *(float *)(unaff_x19 + 0x98);
        lVar23 = lVar23 + lVar41 * unaff_x21;
        *(float *)(lVar23 + 0x154) = fVar45;
        in_stack_00000120 = *(float *)((long)unaff_x19 + 0x4c4);
        *(float *)(lVar23 + 0x148) = fVar45 - fVar52;
        *(float *)(lVar23 + 0x158) = in_stack_00000120;
        *(float *)(unaff_x19 + 0x97) = fVar45 - fVar52;
        in_stack_00000120 = in_stack_00000120 - fVar52;
        *(float *)(lVar23 + 0x150) = in_stack_00000120;
      }
      else {
        in_stack_00000120 = fVar51 + in_stack_00000120;
        fVar48 = in_stack_00000128;
        fVar46 = in_stack_00000120;
        if (fVar51 != 0.0) {
          fVar48 = (in_stack_00000128 - fVar51) / *(float *)((long)unaff_x19 + 0x3fc);
          fVar46 = (in_stack_00000120 - fVar51) / *(float *)((long)unaff_x19 + 0x3fc);
          if (fVar48 <= in_stack_00000128) {
            fVar48 = in_stack_00000128;
          }
          if (in_stack_00000120 <= fVar46) {
            fVar46 = in_stack_00000120;
          }
        }
        lVar23 = lVar23 + lVar41 * unaff_x21;
        fVar45 = fVar48;
        if (fVar48 <= *(float *)(unaff_x19 + 0x98)) {
          fVar45 = *(float *)(unaff_x19 + 0x98);
        }
        fVar51 = fVar46;
        if (*(float *)((long)unaff_x19 + 0x4c4) <= fVar46) {
          fVar51 = *(float *)((long)unaff_x19 + 0x4c4);
        }
        *(float *)((long)unaff_x19 + 0x4c4) = fVar51;
        in_stack_00000120 = in_stack_00000120 - fVar52;
        *(float *)(unaff_x19 + 0x98) = fVar45;
        *(float *)(lVar23 + 0x154) = fVar48;
        *(float *)(lVar23 + 0x158) = fVar46;
        *(float *)(lVar23 + 0x148) = in_stack_00000128 - fVar52;
        *(float *)(unaff_x19 + 0x97) = in_stack_00000128 - fVar52;
        *(float *)(lVar23 + 0x150) = in_stack_00000120;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = in_stack_00000120;
      if (((int)unaff_x19[0x94] == 0) || (*(char *)((long)unaff_x19 + 0x334) != '\0')) {
        if (!bVar9 || !bVar8) {
          *(float *)(unaff_x19 + 0x96) = fVar45;
          if (unaff_x19[0x1f] != 0) {
            fVar45 = *(float *)((long)unaff_x19 + 0x4b4);
            fVar48 = (float)FUN_026fd150(unaff_x19[0x1f] + 0x50,0);
            in_stack_00000100 = (fVar50 * fVar48) / in_stack_00000100;
            uVar17 = (ulong)*(uint *)(unaff_x19 + 0x9a);
            if (fVar45 <= in_stack_00000100) {
              fVar45 = in_stack_00000100;
            }
            *(float *)((long)unaff_x19 + 0x4b4) = fVar45;
            goto LAB_0248bef4;
          }
          goto LAB_02491464;
        }
      }
      else {
LAB_0248bef4:
        if ((!bVar9 || !bVar8) && (float)uVar17 == 0.0) {
          fVar45 = *(float *)(in_stack_00000070 + 0x208);
          if (*(float *)(in_stack_00000070 + 0x208) <= in_stack_00000128) {
            fVar45 = in_stack_00000128;
          }
          *(float *)(in_stack_00000070 + 0x208) = fVar45;
        }
      }
      lVar23 = *unaff_x25;
      if ((lVar23 == 0) || (lVar41 = *(long *)(lVar23 + 0x38), lVar41 == 0)) goto LAB_02491464;
      uVar31 = *unaff_x26;
      if (*(uint *)(lVar41 + 0x18) <= uVar31)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar41 = lVar41 + (int)uVar31 * unaff_x21;
      *(undefined1 *)(lVar41 + 0x194) = 0;
      uVar30 = *(uint *)(unaff_x19 + 0x4e);
      iVar40 = (int)unaff_x21;
      uVar61 = in_stack_000017bc;
      if (((in_stack_000017bc == 9) ||
          ((((unaff_w29 == 0 && (in_stack_000017bc != 3)) && (in_stack_000017bc != 0x200b)) &&
           (in_stack_000017bc != 0xad)))) ||
         (((in_stack_000017bc == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) != 0 ||
          (*(int *)((long)unaff_x19 + 0x63c) == 1)))) {
        *(undefined1 *)(lVar41 + 0x194) = 1;
        pfVar28 = in_stack_00000088;
        pfVar34 = _fStack0000000000000098;
        if (unaff_w20 != 0) {
          lVar23 = *(long *)(lVar23 + 0x50);
          if (lVar23 == 0) goto LAB_02491464;
          if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
          pfVar34 = (float *)(lVar23 + 0x60);
          pfVar28 = (float *)(lVar23 + 100);
        }
        fVar48 = *pfVar34;
        fVar46 = *pfVar28;
        fVar45 = *(float *)(unaff_x19 + 0x6b);
        fVar51 = *(float *)(unaff_x19 + 199);
        in_stack_000000d8._4_4_ = (fStack0000000000000090 - fVar48) - fVar46;
        bVar8 = true;
        if ((fVar45 <= in_stack_000000d8._4_4_) && (bVar8 = false, !NAN(fVar45))) {
          bVar8 = fVar45 == -1.0;
        }
        if (!bVar8) {
          in_stack_000000d8._4_4_ = fVar45;
        }
        fVar45 = 0.0;
        if ((char)unaff_x19[0x1d] == '\0') {
          fVar45 = (float)FUN_026fd474(&stack0x00001770,0);
          uVar17 = (ulong)*(uint *)(unaff_x19 + 0x9a);
        }
        fVar55 = *(float *)((long)unaff_x19 + 0x4c4);
        fVar52 = *(float *)((long)unaff_x19 + 0x2cc);
        fVar54 = (float)uVar17;
        if (in_stack_000017bc != 0xad) {
          in_stack_000000d0 = fVar50;
        }
        fVar57 = 0.0;
        if ((0.0 < fVar54) && (fVar57 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
          fVar57 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
        }
        fVar57 = (*(float *)(unaff_x19 + 0x96) - (fVar55 - fVar54)) + fVar57;
        uVar31 = *in_stack_00000148;
        if (fVar57 <= in_stack_000000a0) {
switchD_0248c274_caseD_2:
          plVar27 = (long *)System_Threading_Mutex_TypeInfo;
          fVar54 = 1.0 - fVar52;
          uVar17 = (ulong)(uint)fVar54;
          fVar51 = ABS(fVar51) + fVar45 * fVar54 * in_stack_000000d0;
          fVar45 = _DAT_0294c6e8;
          if ((uVar30 & 0x18) == 0) {
            fVar45 = 1.0;
          }
          if (fVar51 <= fVar45 * in_stack_000000d8._4_4_) {
LAB_0248cf18:
            if (in_stack_000017bc == 0xad) {
              if ((*in_stack_00000150 != 0) &&
                 (lVar23 = *(long *)(*in_stack_00000150 + 0x38), lVar23 != 0)) {
                if (*in_stack_00000148 < *(uint *)(lVar23 + 0x18)) {
                  *(undefined1 *)(lVar23 + (int)*in_stack_00000148 * unaff_x21 + 0x194) = 0;
                  goto FUN_0248d088;
                }
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              }
              goto LAB_02491464;
            }
            if (in_stack_000017bc != 9) {
              if (*(int *)((long)unaff_x19 + 0x63c) == 1) {
                (**(code **)(*unaff_x19 + 0x8c8))();
              }
              else if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
                (**(code **)(*unaff_x19 + 0x8b8))(in_stack_00000130._4_4_,in_stack_00000110._4_4_);
              }
              uVar31 = *in_stack_00000148;
              if (((uint)fStack0000000000000058 & 1) != 0) {
                *(uint *)(in_stack_00000070 + 0x1f0) = uVar31;
              }
              *(uint *)((long)unaff_x19 + 0x49c) = uVar31;
              *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
              if ((unaff_x19[0x6c] != 0) &&
                 (lVar23 = *(long *)(unaff_x19[0x6c] + 0x50), lVar23 != 0)) {
                if (*(uint *)(unaff_x19 + 0x94) < *(uint *)(lVar23 + 0x18)) {
                  lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                  fStack0000000000000058 = 0.0;
                  *(float *)(lVar23 + 0x60) = fVar48;
                  *(float *)(lVar23 + 100) = fVar46;
                  goto FUN_0248d088;
                }
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              }
              goto LAB_02491464;
            }
            lVar23 = *in_stack_00000150;
            if ((lVar23 == 0) || (lVar41 = *(long *)(lVar23 + 0x38), lVar41 == 0))
            goto LAB_02491464;
            uVar31 = *in_stack_00000148;
            if (uVar31 < *(uint *)(lVar41 + 0x18)) {
              *(undefined1 *)(lVar41 + (int)uVar31 * unaff_x21 + 0x194) = 0;
              *(uint *)((long)unaff_x19 + 0x49c) = uVar31;
              lVar41 = *(long *)(lVar23 + 0x50);
              if (lVar41 != 0) {
                if (*(uint *)(unaff_x19 + 0x94) < *(uint *)(lVar41 + 0x18)) {
                  lVar41 = lVar41 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                  *(int *)(lVar41 + 0x2c) = *(int *)(lVar41 + 0x2c) + 1;
                  goto LAB_0248cf8c;
                }
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              }
              goto LAB_02491464;
            }
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          }
          if (((char)unaff_x19[0x5a] == '\0') || (uVar31 == *(uint *)(unaff_x19 + 0x92))) {
            if (((char)unaff_x19[0x46] != '\0') &&
               (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
              fVar55 = *(float *)(unaff_x19 + 0x59) / 100.0;
              if (fVar52 < fVar55) {
                fVar50 = fVar51 / fVar54;
                if (fVar52 <= 0.0) {
                  fVar50 = fVar51;
                }
                fVar52 = fVar52 + (fVar51 - fVar45 * (in_stack_000000d8._4_4_ + DAT_02958218)) /
                                  fVar50;
                goto LAB_0249154c;
              }
              fVar54 = *(float *)((long)unaff_x19 + 0x1dc);
              uVar17 = (ulong)(uint)fVar54;
              fVar52 = *(float *)(unaff_x19 + 0x49);
              if (fVar54 <= fVar52) goto LAB_0248c3dc;
LAB_024914c0:
              fVar50 = (fVar54 - *(float *)(unaff_x19 + 0x47)) * 0.5;
              if (fVar50 <= DAT_028aa298) {
                fVar50 = DAT_028aa298;
              }
              *(float *)((long)unaff_x19 + 0x234) = fVar54;
              fVar45 = (fVar54 - fVar50) * 20.0 + 0.5;
              fVar50 = DAT_02958220;
              if (fVar45 != INFINITY) {
                fVar50 = (float)(int)fVar45 / 20.0;
              }
              if (fVar50 <= fVar52) {
                fVar50 = fVar52;
              }
LAB_0248e598:
              *(float *)((long)unaff_x19 + 0x1dc) = fVar50;
              return;
            }
LAB_0248c3dc:
            iVar10 = (int)unaff_x19[0x5b];
            if (iVar10 == 1) {
              lVar23 = *(long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(lVar23 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar23 = *plVar27;
              }
              plVar44 = (long *)StringLiteral_302;
              lVar41 = *(long *)(lVar23 + 0xb8);
              lVar23 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
              if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                lVar23 = FUN_00d5941c(lVar23);
              }
              lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 8);
              if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                lVar23 = FUN_00d5941c();
              }
              piVar19 = (int *)thunk_FUN_00d32ed4(lVar41 + 0x11f0,*(long *)(lVar23 + 0x80) + 0xa0);
              if (*piVar19 == 0) goto LAB_0248e4bc;
              lVar23 = *plVar27;
              if (*(int *)(lVar23 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar23 = *plVar27;
              }
              FUN_013b8de4(*(long *)(lVar23 + 0xb8) + 0x11f0,&stack0x00000880,
                           *(undefined8 *)
                            Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                          );
              memcpy(&stack0x00000c70,&stack0x00000880,0x378);
              goto LAB_0248c8f4;
            }
            if (iVar10 != 6) {
              if (iVar10 == 3) {
                if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                goto LAB_0248c524;
              }
              goto LAB_0248cf18;
            }
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            plVar44 = (long *)StringLiteral_302;
            in_stack_00001788 = FUN_024d66ec();
            lVar23 = unaff_x19[0x5c];
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)
                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                );
            }
            uVar16 = FUN_02681b9c(lVar23,0,0);
            if ((uVar16 & 1) != 0) {
              plVar42 = (long *)unaff_x19[0x5c];
              uVar18 = (**(code **)(*unaff_x19 + 0x548))();
              if (plVar42 == (long *)0x0) goto LAB_02491464;
              (**(code **)(*plVar42 + 0x558))(plVar42,uVar18,*(undefined8 *)(*plVar42 + 0x560));
              lVar23 = unaff_x19[0x5c];
              if (lVar23 == 0) goto LAB_02491464;
              *(int *)(lVar23 + 0x3f8) = (int)unaff_x19[0x7f];
              FUN_024c910c(lVar23,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
              plVar42 = (long *)unaff_x19[0x5c];
              if (plVar42 == (long *)0x0) goto LAB_02491464;
              (**(code **)(*plVar42 + 0x7d8))(plVar42,0,0,*(undefined8 *)(*plVar42 + 0x7e0));
              *(undefined1 *)(unaff_x19 + 0x5e) = 1;
            }
LAB_0248ca1c:
            uVar16 = uVar17;
            in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
          }
          else {
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            in_stack_00001788 = FUN_024d66ec();
            if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
              lVar23 = *in_stack_00000150;
              if ((lVar23 == 0) || (lVar41 = *(long *)(lVar23 + 0x38), lVar41 == 0))
              goto LAB_02491464;
              if (*(uint *)(lVar41 + 0x18) <= *in_stack_00000148)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              fVar52 = *(float *)(unaff_x19 + 0x9a);
              fVar54 = 0.0;
              if ((0.0 < fVar52) && (fVar54 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
                fVar54 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
              }
              fVar54 = fStack00000000000000c8 * *(float *)(unaff_x19 + 0x56) +
                       *(float *)(lVar41 + (int)*in_stack_00000148 * unaff_x21 + 0x154) +
                       (fVar54 - *(float *)((long)unaff_x19 + 0x4c4)) +
                       fStack0000000000000054 *
                       (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4));
            }
            else {
              lVar23 = unaff_x19[0x6c];
              *(undefined1 *)((long)unaff_x19 + 700) = 1;
              if (lVar23 == 0) goto LAB_02491464;
              fVar52 = *(float *)(unaff_x19 + 0x9a);
              fVar54 = *(float *)(unaff_x19 + 0x57) +
                       fStack00000000000000c8 * *(float *)(unaff_x19 + 0x56);
            }
            puVar7 = System_Threading_Mutex_TypeInfo;
            lVar23 = *(long *)(lVar23 + 0x38);
            if (lVar23 == 0) goto LAB_02491464;
            uVar36 = *(uint *)((long)unaff_x19 + 0x48c);
            if ((*(uint *)(lVar23 + 0x18) <= uVar36) ||
               (uVar43 = uVar36 - 1, *(uint *)(lVar23 + 0x18) <= uVar43))
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            uVar17 = (ulong)(uint)(fVar54 + *(float *)(unaff_x19 + 0x96));
            fVar57 = (fVar54 + *(float *)(unaff_x19 + 0x96) + fVar52) -
                     *(float *)(lVar23 + (int)uVar36 * unaff_x21 + 0x158);
            if (((in_stack_00000068._4_1_ & 1) != 0 ||
                 *(short *)(lVar23 + (long)(int)uVar43 * (long)iVar40 + 0x20) != 0xad) ||
               ((in_stack_000000a0 <= fVar57 && ((int)unaff_x19[0x5b] != 0)))) {
              if (*(short *)(lVar23 + (int)uVar36 * unaff_x21 + 0x20) == 0xad) {
                in_stack_00000068._4_1_ = 1;
                plVar27 = (long *)System_Threading_Mutex_TypeInfo;
                plVar44 = (long *)StringLiteral_302;
                uVar16 = uVar17;
              }
              else {
                if ((bStack000000000000005c & *(byte *)(unaff_x19 + 0x46) & 1) != 0) {
                  fVar52 = *(float *)((long)unaff_x19 + 0x2cc);
                  fVar55 = *(float *)(unaff_x19 + 0x59) / 100.0;
                  if ((fVar55 <= fVar52) ||
                     ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c))) {
                    fVar54 = *(float *)((long)unaff_x19 + 0x1dc);
                    uVar17 = (ulong)(uint)fVar54;
                    fVar52 = *(float *)(unaff_x19 + 0x49);
                    if ((fVar52 < fVar54) &&
                       (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
                    goto LAB_024914c0;
                    goto LAB_0248cc70;
                  }
LAB_0249155c:
                  fVar50 = fVar51;
                  if (0.0 < fVar52) {
                    fVar50 = fVar51 / (1.0 - fVar52);
                  }
                  fVar52 = fVar52 + (fVar51 - fVar45 * (in_stack_000000d8._4_4_ + DAT_02958218)) /
                                    fVar50;
LAB_0249154c:
                  if (fVar55 <= fVar52) {
                    fVar52 = fVar55;
                  }
                  *(float *)((long)unaff_x19 + 0x2cc) = fVar52;
                  return;
                }
LAB_0248cc70:
                lVar23 = *(long *)System_Threading_Mutex_TypeInfo;
                if (*(int *)(lVar23 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar23 = *(long *)puVar7;
                }
                iVar10 = *(int *)(*(long *)(lVar23 + 0xb8) + 0xe78);
                if ((((float)iVar10 != fStack0000000000000034) && (iVar10 != -1)) &&
                   (((bStack000000000000005c ^ 1) & 1) == 0)) {
                  if (*(int *)(lVar23 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  in_stack_00001788 = FUN_024d66ec();
                  if ((unaff_x19[0x6c] == 0) ||
                     (lVar23 = *(long *)(unaff_x19[0x6c] + 0x38), lVar23 == 0)) goto LAB_02491464;
                  uVar36 = *in_stack_00000148 - 1;
                  if (*(uint *)(lVar23 + 0x18) <= uVar36)
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                  fStack0000000000000034 = (float)iVar10;
                  if (*(short *)(lVar23 + (long)(int)uVar36 * (long)iVar40 + 0x20) == 0xad) {
                    in_stack_00000068._4_1_ = 0;
                    in_stack_000017a8 = CONCAT44(0x2d,uVar36);
                    *in_stack_00000148 = uVar36;
                    plVar27 = (long *)System_Threading_Mutex_TypeInfo;
                    plVar44 = (long *)StringLiteral_302;
                    uVar16 = uVar17;
                    in_stack_00001788 = in_stack_00001788 - 1;
                    goto LAB_0248ab98;
                  }
                }
                if (in_stack_000000a0 < fVar57) {
                  if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
                    *(undefined4 *)((long)unaff_x19 + 0x2dc) =
                         *(undefined4 *)((long)unaff_x19 + 0x48c);
                  }
                  plVar44 = (long *)StringLiteral_302;
                  plVar27 = (long *)System_Threading_Mutex_TypeInfo;
                  if ((char)unaff_x19[0x46] != '\0') {
                    fVar52 = *(float *)(unaff_x19 + 0x58);
                    if ((fVar52 < *(float *)((long)unaff_x19 + 0x2b4)) &&
                       (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                      fVar50 = *(float *)((long)unaff_x19 + 0x2b4) +
                               ((in_stack_00000018._4_4_ - fVar57) /
                               (float)((int)unaff_x19[0x94] + 1)) / fStack0000000000000054;
                      if (fVar50 <= fVar52) {
                        fVar50 = fVar52;
                      }
LAB_0248ea5c:
                      *(float *)((long)unaff_x19 + 0x2b4) = fVar50;
                      return;
                    }
                    fVar52 = *(float *)((long)unaff_x19 + 0x2cc);
                    fVar55 = *(float *)(unaff_x19 + 0x59) / 100.0;
                    if ((fVar52 < fVar55) &&
                       (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
                    goto LAB_0249155c;
                    fVar54 = *(float *)((long)unaff_x19 + 0x1dc);
                    uVar17 = (ulong)(uint)fVar54;
                    fVar52 = *(float *)(unaff_x19 + 0x49);
                    if ((fVar52 < fVar54) &&
                       (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
                    goto LAB_024914c0;
                  }
                  switch((int)unaff_x19[0x5b]) {
                  case 0:
                  case 2:
                  case 4:
                    FUN_024d7014(fStack0000000000000054,uVar16,fStack00000000000000c8,
                                 *(undefined4 *)((long)unaff_x19 + 0x2f4),in_stack_000000c0._4_4_,
                                 fStack00000000000000cc,in_stack_000000d8._4_4_,
                                 fStack0000000000000048);
                    break;
                  case 1:
                    lVar23 = *(long *)System_Threading_Mutex_TypeInfo;
                    if (*(int *)(lVar23 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                      lVar23 = *plVar27;
                    }
                    lVar41 = *(long *)(lVar23 + 0xb8);
                    lVar23 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
                    if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                      lVar23 = FUN_00d5941c(lVar23);
                    }
                    lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 8);
                    if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                      lVar23 = FUN_00d5941c();
                    }
                    piVar19 = (int *)thunk_FUN_00d32ed4(lVar41 + 0x11f0,
                                                        *(long *)(lVar23 + 0x80) + 0xa0);
                    if (*piVar19 == 0) {
                      in_stack_00000068._4_1_ = 0;
                      goto LAB_0248e4bc;
                    }
                    lVar23 = *plVar27;
                    if (*(int *)(lVar23 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                      lVar23 = *plVar27;
                    }
                    FUN_013b8de4(*(long *)(lVar23 + 0xb8) + 0x11f0,&stack0x00000880,
                                 *(undefined8 *)
                                  Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                                );
                    memcpy(&stack0x00000fe8,&stack0x00000880,0x378);
                    iVar10 = FUN_024d66ec();
                    in_stack_00000068._4_1_ = 0;
                    goto LAB_0248c900;
                  case 3:
                    if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    in_stack_00001788 = FUN_024d66ec();
                    in_stack_00000068._4_1_ = 0;
                    goto LAB_0248c628;
                  case 5:
                    *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
                    FUN_024d7014(fStack0000000000000054,uVar16,fStack00000000000000c8,
                                 *(undefined4 *)((long)unaff_x19 + 0x2f4),in_stack_000000c0._4_4_,
                                 fStack00000000000000cc,in_stack_000000d8._4_4_,
                                 fStack0000000000000048);
                    *(undefined4 *)(unaff_x19 + 0x99) = 0;
                    *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                    *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
                    *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
                    break;
                  case 6:
                    lVar23 = unaff_x19[0x5c];
                    if (*(int *)(*(long *)
                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar16 = FUN_02681b9c(lVar23,0,0);
                    if ((uVar16 & 1) != 0) {
                      plVar42 = (long *)unaff_x19[0x5c];
                      uVar18 = (**(code **)(*unaff_x19 + 0x548))();
                      if (plVar42 == (long *)0x0) goto LAB_02491464;
                      (**(code **)(*plVar42 + 0x558))
                                (plVar42,uVar18,*(undefined8 *)(*plVar42 + 0x560));
                      lVar23 = unaff_x19[0x5c];
                      if (lVar23 == 0) goto LAB_02491464;
                      *(int *)(lVar23 + 0x3f8) = (int)unaff_x19[0x7f];
                      FUN_024c910c(lVar23,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
                      plVar42 = (long *)unaff_x19[0x5c];
                      if (plVar42 == (long *)0x0) goto LAB_02491464;
                      (**(code **)(*plVar42 + 0x7d8))(plVar42,0,0,*(undefined8 *)(*plVar42 + 0x7e0))
                      ;
                      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                    }
                    in_stack_00000068._4_1_ = 0;
                    goto LAB_0248ca1c;
                  default:
                    in_stack_00000068._4_1_ = 0;
                    goto LAB_0248cf18;
                  }
                  in_stack_00000068._4_1_ = 0;
                  bStack000000000000005c = 1;
                  fStack0000000000000058 = 1.4013e-45;
                  plVar27 = (long *)System_Threading_Mutex_TypeInfo;
                  plVar44 = (long *)StringLiteral_302;
                }
                else {
                  FUN_024d7014(fStack0000000000000054,uVar16,fStack00000000000000c8,
                               *(undefined4 *)((long)unaff_x19 + 0x2f4),in_stack_000000c0._4_4_,
                               fStack00000000000000cc,in_stack_000000d8._4_4_,fStack0000000000000048
                              );
                  bStack000000000000005c = 1;
                  in_stack_00000068._4_1_ = 0;
                  fStack0000000000000058 = 1.4013e-45;
                  plVar27 = (long *)System_Threading_Mutex_TypeInfo;
                  plVar44 = (long *)StringLiteral_302;
                }
              }
            }
            else {
              in_stack_00000068._4_1_ = 0;
              in_stack_000017a8 = CONCAT44(0x2d,uVar43);
              *in_stack_00000148 = uVar43;
              plVar27 = (long *)System_Threading_Mutex_TypeInfo;
              plVar44 = (long *)StringLiteral_302;
              uVar16 = uVar17;
              in_stack_00001788 = in_stack_00001788 - 1;
            }
          }
        }
        else {
          if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
            *(uint *)((long)unaff_x19 + 0x2dc) = uVar31;
          }
          plVar44 = (long *)StringLiteral_302;
          plVar27 = (long *)System_Threading_Mutex_TypeInfo;
          uVar18 = DAT_02941c08;
          if ((char)unaff_x19[0x46] != '\0') {
            fVar53 = *(float *)(unaff_x19 + 0x58);
            if (((fVar53 < *(float *)((long)unaff_x19 + 0x2b4)) && (0.0 < fVar54)) &&
               (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
              fVar50 = *(float *)((long)unaff_x19 + 0x2b4) +
                       ((in_stack_00000018._4_4_ - fVar57) / (float)(int)unaff_x19[0x94]) /
                       fStack0000000000000054;
              if (fVar50 <= fVar53) {
                fVar50 = fVar53;
              }
              goto LAB_0248ea5c;
            }
            fVar57 = *(float *)((long)unaff_x19 + 0x1dc);
            fVar54 = *(float *)(unaff_x19 + 0x49);
            uVar17 = (ulong)(uint)fVar54;
            if ((fVar54 < fVar57) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
              fVar50 = (fVar57 - *(float *)(unaff_x19 + 0x47)) * 0.5;
              if (fVar50 <= DAT_028aa298) {
                fVar50 = DAT_028aa298;
              }
              fVar45 = (fVar57 - fVar50) * 20.0 + 0.5;
              fVar50 = DAT_02958220;
              if (fVar45 != INFINITY) {
                fVar50 = (float)(int)fVar45 / 20.0;
              }
              if (fVar50 <= fVar54) {
                fVar50 = fVar54;
              }
              *(float *)((long)unaff_x19 + 0x234) = fVar57;
              goto LAB_0248e598;
            }
          }
          switch((int)unaff_x19[0x5b]) {
          case 1:
            lVar23 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar23 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar23 = *plVar27;
            }
            lVar41 = *(long *)(lVar23 + 0xb8);
            lVar23 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
            if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
              lVar23 = FUN_00d5941c(lVar23);
            }
            plVar44 = (long *)StringLiteral_302;
            lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 8);
            if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
              lVar23 = FUN_00d5941c();
            }
            piVar19 = (int *)thunk_FUN_00d32ed4(lVar41 + 0x11f0,*(long *)(lVar23 + 0x80) + 0xa0);
            if (*piVar19 == 0) {
LAB_0248e4bc:
              in_stack_000017a8 = DAT_02941c08;
              in_stack_00000148[0] = 0;
              in_stack_00000148[1] = 0;
              uVar16 = uVar17;
              in_stack_00001788 = 0xffffffff;
            }
            else {
              lVar23 = *plVar27;
              if (*(int *)(lVar23 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar23 = *plVar27;
              }
              FUN_013b8de4(*(long *)(lVar23 + 0xb8) + 0x11f0,&stack0x00000880,
                           *(undefined8 *)
                            Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                          );
              memcpy(&stack0x00001360,&stack0x00000880,0x378);
LAB_0248c8f4:
              iVar10 = FUN_024d66ec();
LAB_0248c900:
              iVar12 = *(int *)((long)unaff_x19 + 0x48c) + -1;
              *(int *)((long)unaff_x19 + 0x48c) = iVar12;
              in_stack_00000140._4_4_ = in_stack_00000140._4_4_ + 1;
              uVar16 = uVar17;
              in_stack_00001788 = iVar10 - 1;
              in_stack_000017a8 = CONCAT44(0x2026,iVar12);
            }
            goto LAB_0248ab98;
          default:
            goto switchD_0248c274_caseD_2;
          case 3:
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
LAB_0248c524:
            plVar44 = (long *)StringLiteral_302;
            in_stack_00001788 = FUN_024d66ec();
            break;
          case 5:
            if ((uVar31 == 0) || ((int)in_stack_00001788 < 0)) {
              *in_stack_00000148 = 0;
              plVar27 = (long *)System_Threading_Mutex_TypeInfo;
              plVar44 = (long *)StringLiteral_302;
              uVar16 = uVar17;
              in_stack_00001788 = 0xffffffff;
              in_stack_000017a8 = uVar18;
            }
            else {
              fVar45 = *(float *)(unaff_x19 + 0x98);
              if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              in_stack_00001788 = FUN_024d66ec();
              if (in_stack_000000a0 < fVar45 - fVar55) break;
              *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
              *(undefined4 *)(unaff_x19 + 0x92) = *(undefined4 *)((long)unaff_x19 + 0x48c);
              uVar16 = *(ulong *)(*(long *)(*plVar27 + 0xb8) + 0x15a8);
              *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
              *(undefined4 *)(unaff_x19 + 0x99) = 0;
              lVar23 = NEON_rev64(uVar16,4);
              unaff_x19[0x98] = lVar23;
              *(undefined4 *)(unaff_x19 + 0x9a) = 0;
              *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
              *(int *)(unaff_x19 + 0x94) = (int)unaff_x19[0x94] + 1;
              *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
            }
            goto LAB_0248ab98;
          case 6:
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            in_stack_00001788 = FUN_024d66ec();
            plVar44 = (long *)StringLiteral_302;
            lVar23 = unaff_x19[0x5c];
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)
                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                );
            }
            uVar16 = FUN_02681b9c(lVar23,0,0);
            if ((uVar16 & 1) != 0) {
              plVar42 = (long *)unaff_x19[0x5c];
              uVar18 = (**(code **)(*unaff_x19 + 0x548))();
              if (plVar42 == (long *)0x0) goto LAB_02491464;
              (**(code **)(*plVar42 + 0x558))(plVar42,uVar18,*(undefined8 *)(*plVar42 + 0x560));
              lVar23 = unaff_x19[0x5c];
              if (lVar23 == 0) goto LAB_02491464;
              *(int *)(lVar23 + 0x3f8) = (int)unaff_x19[0x7f];
              FUN_024c910c(lVar23,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
              plVar42 = (long *)unaff_x19[0x5c];
              if (plVar42 == (long *)0x0) goto LAB_02491464;
              (**(code **)(*plVar42 + 0x7d8))(plVar42,0,0,*(undefined8 *)(*plVar42 + 0x7e0));
              *(undefined1 *)(unaff_x19 + 0x5e) = 1;
            }
          }
LAB_0248c628:
          uVar16 = uVar17;
          in_stack_000017a8 = CONCAT44(3,uVar31);
        }
      }
      else {
        if (((in_stack_000017bc & 0xfffffffe) == 10) && ((int)unaff_x19[0x5b] == 6)) {
          fVar45 = 0.0;
          if ((0.0 < (float)uVar17) && (fVar45 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
            fVar45 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
          }
          uVar16 = (ulong)(uint)in_stack_000000a0;
          if (in_stack_000000a0 <
              (*(float *)(unaff_x19 + 0x96) - (*(float *)((long)unaff_x19 + 0x4c4) - (float)uVar17))
              + fVar45) {
            if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
              *(uint *)((long)unaff_x19 + 0x2dc) = uVar31;
            }
            plVar44 = (long *)StringLiteral_302;
            plVar27 = (long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            in_stack_00001788 = FUN_024d66ec();
            lVar23 = unaff_x19[0x5c];
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)
                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                );
            }
            uVar17 = FUN_02681b9c(lVar23,0,0);
            if ((uVar17 & 1) != 0) {
              plVar42 = (long *)unaff_x19[0x5c];
              uVar18 = (**(code **)(*unaff_x19 + 0x548))();
              if (plVar42 == (long *)0x0) goto LAB_02491464;
              (**(code **)(*plVar42 + 0x558))(plVar42,uVar18,*(undefined8 *)(*plVar42 + 0x560));
              lVar23 = unaff_x19[0x5c];
              if (lVar23 == 0) goto LAB_02491464;
              *(int *)(lVar23 + 0x3f8) = (int)unaff_x19[0x7f];
              FUN_024c910c(lVar23,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
              plVar42 = (long *)unaff_x19[0x5c];
              if (plVar42 == (long *)0x0) goto LAB_02491464;
              (**(code **)(*plVar42 + 0x7d8))(plVar42,0,0,*(undefined8 *)(*plVar42 + 0x7e0));
              *(undefined1 *)(unaff_x19 + 0x5e) = 1;
            }
            in_stack_000017a8 = CONCAT44(3,uVar31);
            goto LAB_0248ab98;
          }
        }
        if ((((in_stack_000017bc - 0x2007 < 0x23) &&
             ((1L << ((ulong)(in_stack_000017bc - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
            (in_stack_000017bc - 10 < 2)) || (in_stack_000017bc == 0xa0)) {
UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ObjectSpawner__get_objectPrefabs:
          if (((in_stack_000017bc != 0xad) && (in_stack_000017bc != 0x200b)) &&
             (in_stack_000017bc != 0x2060)) {
            lVar23 = *in_stack_00000150;
            if ((lVar23 == 0) || (lVar41 = *(long *)(lVar23 + 0x50), lVar41 == 0))
            goto LAB_02491464;
            if (*(uint *)(lVar41 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            lVar41 = lVar41 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
            *(int *)(lVar41 + 0x2c) = *(int *)(lVar41 + 0x2c) + 1;
            *(int *)(lVar23 + 0x20) = *(int *)(lVar23 + 0x20) + 1;
          }
        }
        else {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar16 = FUN_016fa418(in_stack_000017bc,0);
          if ((uVar16 & 1) != 0)
          goto 
          UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ObjectSpawner__get_objectPrefabs;
        }
        if (in_stack_000017bc == 0xa0) {
          if ((*in_stack_00000150 == 0) ||
             (lVar23 = *(long *)(*in_stack_00000150 + 0x50), lVar23 == 0)) goto LAB_02491464;
          if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
LAB_0248cf8c:
          *(int *)(lVar23 + 0x20) = *(int *)(lVar23 + 0x20) + 1;
        }
FUN_0248d088:
        if (((int)unaff_x19[0x5b] == 1) && ((in_stack_000017bc == 0x2d || (unaff_w20 != 1)))) {
          if (unaff_x19[0xca] == 0) goto LAB_02491464;
          fVar45 = *(float *)(unaff_x19 + 0x3c);
          iVar10 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
          if (unaff_x19[0xca] == 0) goto LAB_02491464;
          fVar46 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
          lVar23 = unaff_x19[0xc9];
          fVar48 = fStack0000000000000084;
          if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
            fVar48 = 1.0;
          }
          if ((lVar23 == 0) || (*(long *)(lVar23 + 0x20) == 0)) goto LAB_02491464;
          fVar52 = *(float *)((long)unaff_x19 + 0x3fc);
          fVar55 = *(float *)(lVar23 + 0x2c);
          fVar51 = (float)FUN_026fd668(*(long *)(lVar23 + 0x20),0);
          fVar54 = *_fStack0000000000000098;
          fVar51 = fVar52 * (fVar45 / (float)iVar10) * fVar46 * fVar48 * fVar55 * fVar51;
          fVar45 = *in_stack_00000088;
          if ((in_stack_000017bc == 10) &&
             (*(int *)((long)unaff_x19 + 0x48c) != (int)unaff_x19[0x92])) {
            if ((*in_stack_00000150 == 0) ||
               (lVar23 = *(long *)(*in_stack_00000150 + 0x38), lVar23 == 0)) goto LAB_02491464;
            uVar31 = *(int *)((long)unaff_x19 + 0x48c) - 1;
            if (*(uint *)(lVar23 + 0x18) <= uVar31)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            if (unaff_x19[0xca] == 0) goto LAB_02491464;
            fVar48 = *(float *)(lVar23 + (long)(int)uVar31 * (long)iVar40 + 0x60);
            iVar10 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
            if (unaff_x19[0xca] == 0) goto LAB_02491464;
            fVar52 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
            lVar23 = unaff_x19[0xc9];
            fVar46 = fStack0000000000000084;
            if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
              fVar46 = 1.0;
            }
            if ((lVar23 == 0) || (*(long *)(lVar23 + 0x20) == 0)) goto LAB_02491464;
            fVar55 = *(float *)((long)unaff_x19 + 0x3fc);
            fVar57 = *(float *)(lVar23 + 0x2c);
            fVar51 = (float)FUN_026fd668(*(long *)(lVar23 + 0x20),0);
            if ((*in_stack_00000150 == 0) ||
               (lVar23 = *(long *)(*in_stack_00000150 + 0x50), lVar23 == 0)) goto LAB_02491464;
            if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
            fVar54 = *(float *)(lVar23 + 0x60);
            fVar45 = *(float *)(lVar23 + 100);
            fVar51 = fVar55 * (fVar48 / (float)iVar10) * fVar52 * fVar46 * fVar57 * fVar51;
          }
          fVar55 = *(float *)(unaff_x19 + 0x9a);
          fVar46 = *(float *)(unaff_x19 + 0x96);
          fVar57 = *(float *)((long)unaff_x19 + 0x4c4);
          fVar48 = 0.0;
          fVar52 = 0.0;
          if ((0.0 < fVar55) && (fVar52 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
            fVar52 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
          }
          fVar53 = *(float *)(unaff_x19 + 199);
          if ((char)unaff_x19[0x1d] == '\0') {
            if ((unaff_x19[0xc9] == 0) || (lVar23 = *(long *)(unaff_x19[0xc9] + 0x20), lVar23 == 0))
            goto LAB_02491464;
            FUN_026fd62c(&stack0x00000880,lVar23,0);
            unaff_x28[0x1cd] = unaff_x28[1];
            unaff_x28[0x1cc] = *unaff_x28;
            fVar48 = (float)FUN_026fd474(&stack0x000016e0,0);
          }
          puVar7 = System_Threading_Mutex_TypeInfo;
          fVar56 = *(float *)(unaff_x19 + 0x6b);
          fVar45 = (fStack0000000000000090 - fVar54) - fVar45;
          bVar8 = true;
          if ((fVar56 <= fVar45) && (bVar8 = false, !NAN(fVar56))) {
            bVar8 = fVar56 == -1.0;
          }
          if (!bVar8) {
            fVar45 = fVar56;
          }
          fVar54 = _DAT_0294c6e8;
          if ((uVar30 & 0x18) == 0) {
            fVar54 = 1.0;
          }
          if (((fVar46 - (fVar57 - fVar55)) + fVar52 < in_stack_000000a0) &&
             (ABS(fVar53) + fVar51 * fVar48 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) <
              fVar54 * fVar45)) {
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_024d69d4();
            lVar23 = *(long *)(*(long *)puVar7 + 0xb8);
            memcpy(&stack0x00000508,(void *)(lVar23 + 0x788),0x378);
            FUN_013b86dc(lVar23 + 0x11f0,&stack0x00000508,
                         *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__
                        );
          }
        }
        fVar45 = 1.0;
        lVar23 = *in_stack_00000150;
        if ((lVar23 == 0) || (lVar41 = *(long *)(lVar23 + 0x38), lVar41 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar41 + 0x18) <= *in_stack_00000148)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        uVar31 = *(uint *)(unaff_x19 + 0x94);
        lVar41 = lVar41 + (int)*in_stack_00000148 * unaff_x21;
        *(uint *)(lVar41 + 100) = uVar31;
        *(int *)(lVar41 + 0x68) = (int)unaff_x19[0x95];
        if (((unaff_w20 & 1) == 0) &&
           ((0xd < in_stack_000017bc || ((1 << (ulong)(in_stack_000017bc & 0x1f) & 0x2c00U) == 0))))
        {
          lVar23 = *(long *)(lVar23 + 0x50);
          if (lVar23 == 0) goto LAB_02491464;
LAB_0248d42c:
          if (*(uint *)(lVar23 + 0x18) <= uVar31)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          *(int *)(lVar23 + (long)(int)uVar31 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
        }
        else {
          lVar23 = *(long *)(lVar23 + 0x50);
          if (lVar23 == 0) goto LAB_02491464;
          if (*(uint *)(lVar23 + 0x18) <= uVar31)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          if (*(int *)(lVar23 + (long)(int)uVar31 * 0x5c + 0x24) == 1) goto LAB_0248d42c;
        }
        if (in_stack_000017bc == 9) {
          if (*unaff_x27 == 0) goto LAB_02491464;
          fVar45 = (float)FUN_026fd208(*unaff_x27 + 0x50,0);
          if (*unaff_x27 == 0) goto LAB_02491464;
          fVar51 = *(float *)(unaff_x19 + 199);
          fVar48 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x27 + 0x1b9));
          fVar45 = fVar50 * fVar45 * fVar48;
          fVar46 = fVar45 * (float)(int)(fVar51 / fVar45);
          uVar16 = (ulong)(uint)fVar46;
          if (fVar46 <= fVar51) {
            fVar46 = fVar51 + fVar45;
          }
LAB_0248d614:
          *(float *)(unaff_x19 + 199) = fVar46;
        }
        else if (*(float *)(unaff_x19 + 0x55) == 0.0) {
          if ((char)unaff_x19[0x1d] == '\0') {
            if (*(char *)((long)unaff_x19 + 0x46c) != '\0') {
              fVar45 = (float)thunk_FUN_026935f0(_uStack0000000000000060,0);
            }
            fVar46 = *(float *)(unaff_x19 + 199);
            fVar51 = (float)FUN_026fd474(&stack0x00001770,0);
            if (unaff_x19[0x1f] != 0) {
              fVar48 = 1.0 - *(float *)((long)unaff_x19 + 0x2cc);
              fVar46 = fVar46 + fVar48 * (*(float *)((long)unaff_x19 + 0x2a4) +
                                         fVar50 * (in_stack_000000b0 + fVar45 * fVar51) +
                                         fStack00000000000000c8 *
                                         (in_stack_000000c0._4_4_ +
                                         fStack00000000000000cc +
                                         *(float *)(unaff_x19[0x1f] + 0x1ac)));
              *(float *)(unaff_x19 + 199) = fVar46;
              goto joined_r0x0248d568;
            }
            goto LAB_02491464;
          }
          if (*unaff_x27 == 0) goto LAB_02491464;
          fVar46 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                   (*(float *)((long)unaff_x19 + 0x2a4) +
                   fVar50 * in_stack_000000b0 +
                   fStack00000000000000c8 *
                   (in_stack_000000c0._4_4_ +
                   fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac)));
          uVar16 = (ulong)(uint)fVar46;
          fVar46 = *(float *)(unaff_x19 + 199) - fVar46;
          *(float *)(unaff_x19 + 199) = fVar46;
          if ((unaff_w29 != 0) || (in_stack_000017bc == 0x200b)) {
            fVar45 = fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
            uVar16 = (ulong)(uint)fVar45;
            fVar46 = fVar46 - fVar45;
            goto LAB_0248d614;
          }
        }
        else {
          if (*unaff_x27 == 0) goto LAB_02491464;
          fVar48 = *(float *)(unaff_x19 + 199);
          fVar46 = fVar48 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                            (*(float *)((long)unaff_x19 + 0x2a4) +
                            (*(float *)(unaff_x19 + 0x55) - fStack0000000000000080) +
                            fStack00000000000000c8 *
                            (fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac)));
          *(float *)(unaff_x19 + 199) = fVar46;
joined_r0x0248d568:
          if ((unaff_w29 != 0) || (uVar16 = (ulong)(uint)fVar48, in_stack_000017bc == 0x200b)) {
            fVar45 = fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
            uVar16 = (ulong)(uint)fVar45;
            fVar46 = fVar46 + fVar45;
            goto LAB_0248d614;
          }
        }
        lVar23 = *in_stack_00000150;
        if ((lVar23 == 0) || (lVar41 = *(long *)(lVar23 + 0x38), lVar41 == 0)) goto LAB_02491464;
        uVar31 = *in_stack_00000148;
        uVar30 = (uint)*(undefined8 *)(lVar41 + 0x18);
        if (uVar30 <= uVar31)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        *(float *)(lVar41 + (int)uVar31 * unaff_x21 + 0x144) = fVar46;
        uVar36 = in_stack_000017bc;
        if ((int)in_stack_000017bc < 0xd) {
          if ((in_stack_000017bc - 10 < 2) || (in_stack_000017bc == 3)) goto LAB_0248d6b8;
LAB_0248d69c:
          if (((unaff_w20 & in_stack_000017bc == 0x2d) != 0) ||
             ((float)uVar31 == in_stack_00000078._4_4_)) goto LAB_0248d6b8;
        }
        else {
          if (1 < in_stack_000017bc - 0x2028) {
            if (in_stack_000017bc != 0xd) goto LAB_0248d69c;
            uVar16 = 0;
            *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
            if ((float)uVar31 != in_stack_00000078._4_4_) goto LAB_0248dc08;
          }
LAB_0248d6b8:
          if (0.0 < *(float *)(unaff_x19 + 0x9a)) {
            fVar45 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
            if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            if (((fStack000000000000004c < ABS(fVar45)) &&
                (*(char *)((long)unaff_x19 + 700) == '\0')) &&
               (*(char *)((long)unaff_x19 + 0x334) == '\0')) {
              FUN_024d6ca8(fVar45);
              *(float *)((long)unaff_x19 + 0x4bc) = *(float *)((long)unaff_x19 + 0x4bc) - fVar45;
              *(float *)(unaff_x19 + 0x9a) = fVar45 + *(float *)(unaff_x19 + 0x9a);
              puVar7 = System_Threading_Mutex_TypeInfo;
              lVar23 = *(long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(lVar23 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar23 = *(long *)puVar7;
              }
              lVar41 = *(long *)(lVar23 + 0xb8);
              if (*(int *)(lVar41 + 0x7ac) == (int)unaff_x19[0x94]) {
                if (*(int *)(lVar23 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar41 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
                }
                FUN_013b8de4(lVar41 + 0x11f0,&stack0x00000880,
                             *(undefined8 *)
                              Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                            );
                lVar23 = *(long *)System_Threading_Mutex_TypeInfo;
                memcpy((void *)(*(long *)(lVar23 + 0xb8) + 0x788),&stack0x00000880,0x378);
                lVar23 = *(long *)(lVar23 + 0xb8);
                *(float *)(lVar23 + 0x7bc) = fVar45 + *(float *)(lVar23 + 0x7bc);
                *(float *)(lVar23 + 0x800) = fVar45 + *(float *)(lVar23 + 0x800);
                memcpy(&stack0x00000190,(void *)(lVar23 + 0x788),0x378);
                FUN_013b86dc(lVar23 + 0x11f0,&stack0x00000190,
                             *(undefined8 *)
                              Method_System_Collections_Generic_List<TextStyle>_get_Item__);
              }
            }
          }
          fVar46 = *(float *)(unaff_x19 + 0x9a);
          *(undefined1 *)((long)unaff_x19 + 0x334) = 0;
          fVar48 = *(float *)((long)unaff_x19 + 0x4c4) - fVar46;
          fVar45 = *(float *)((long)unaff_x19 + 0x4bc);
          if (fVar48 <= *(float *)((long)unaff_x19 + 0x4bc)) {
            fVar45 = fVar48;
          }
          *(float *)((long)unaff_x19 + 0x4bc) = fVar45;
          fVar51 = *(float *)(unaff_x19 + 0x98);
          if (*(char *)((long)unaff_x28 + 0xf34) == '\0') {
            in_stack_000017b8 = fVar45;
          }
          if ((*(char *)((long)unaff_x19 + 0x32c) != '\0') &&
             (((int)unaff_x19[100] <= *(int *)((long)unaff_x19 + 0x48c) ||
              ((int)unaff_x19[0x65] <= (int)unaff_x19[0x94])))) {
            *(undefined1 *)((long)unaff_x28 + 0xf34) = 1;
          }
          lVar23 = *in_stack_00000150;
          if ((lVar23 == 0) || (lVar41 = *(long *)(lVar23 + 0x50), lVar41 == 0)) goto LAB_02491464;
          uVar31 = *(uint *)(unaff_x19 + 0x94);
          if (*(uint *)(lVar41 + 0x18) <= uVar31)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          lVar33 = lVar41 + (long)(int)uVar31 * 0x5c;
          *(int *)(lVar33 + 0x34) = (int)unaff_x19[0x92];
          iVar10 = (int)unaff_x19[0x92];
          if ((int)unaff_x19[0x92] <= *(int *)((long)unaff_x19 + 0x494)) {
            iVar10 = *(int *)((long)unaff_x19 + 0x494);
          }
          *(int *)((long)unaff_x19 + 0x494) = iVar10;
          *(int *)(lVar33 + 0x38) = iVar10;
          *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x48c);
          *(undefined4 *)(lVar33 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x48c);
          iVar10 = *(int *)((long)unaff_x19 + 0x494);
          if (*(int *)((long)unaff_x19 + 0x494) <= *(int *)((long)unaff_x19 + 0x49c)) {
            iVar10 = *(int *)((long)unaff_x19 + 0x49c);
          }
          *(int *)((long)unaff_x19 + 0x49c) = iVar10;
          *(int *)(lVar33 + 0x40) = iVar10;
          *(int *)(lVar33 + 0x24) = (*(int *)(lVar33 + 0x3c) - *(int *)(lVar33 + 0x34)) + 1;
          *(undefined4 *)(lVar33 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
          lVar23 = *(long *)(lVar23 + 0x38);
          if (lVar23 == 0) goto LAB_02491464;
          if (*(uint *)(lVar23 + 0x18) <= *(uint *)((long)unaff_x19 + 0x494))
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          uVar59 = *(undefined4 *)
                    (lVar23 + (int)*(uint *)((long)unaff_x19 + 0x494) * unaff_x21 + 0x11c);
          lVar41 = lVar41 + (long)(int)uVar31 * 0x5c;
          *(float *)(lVar41 + 0x70) = fVar48;
          *(undefined4 *)(lVar41 + 0x6c) = uVar59;
          lVar23 = *in_stack_00000150;
          if ((lVar23 == 0) || (lVar41 = *(long *)(lVar23 + 0x50), lVar41 == 0)) goto LAB_02491464;
          if (*(uint *)(lVar41 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          lVar23 = *(long *)(lVar23 + 0x38);
          if (lVar23 == 0) goto LAB_02491464;
          if (*(uint *)(lVar23 + 0x18) <= *(uint *)((long)unaff_x19 + 0x49c))
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          fVar51 = fVar51 - fVar46;
          lVar41 = lVar41 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
          *(undefined4 *)(lVar41 + 0x74) =
               *(undefined4 *)(lVar23 + (int)*(uint *)((long)unaff_x19 + 0x49c) * unaff_x21 + 0x128)
          ;
          *(float *)(lVar41 + 0x78) = fVar51;
          lVar23 = *in_stack_00000150;
          if ((lVar23 == 0) || (lVar33 = *(long *)(lVar23 + 0x50), lVar33 == 0)) goto LAB_02491464;
          lVar15 = (long)(int)*(uint *)(unaff_x19 + 0x94);
          if (*(uint *)(lVar33 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          lVar41 = lVar33 + lVar15 * 0x5c;
          *(float *)(lVar41 + 0x44) = *(float *)(lVar41 + 0x74) - fVar50 * in_stack_00000130._4_4_;
          *(float *)(lVar41 + 0x5c) = in_stack_000000d8._4_4_;
          if (*(int *)(lVar41 + 0x24) == 1) {
            *(int *)(lVar33 + lVar15 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
          }
          if ((*unaff_x27 == 0) || (lVar41 = *(long *)(lVar23 + 0x38), lVar41 == 0))
          goto LAB_02491464;
          lVar35 = (long)(int)*(uint *)((long)unaff_x19 + 0x49c);
          uVar30 = (uint)*(undefined8 *)(lVar41 + 0x18);
          if (uVar30 <= *(uint *)((long)unaff_x19 + 0x49c))
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          if ((*(char *)(lVar41 + lVar35 * unaff_x21 + 0x194) == '\0') &&
             (lVar35 = (long)(int)*(uint *)(unaff_x19 + 0x93), uVar30 <= *(uint *)(unaff_x19 + 0x93)
             )) goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          fVar46 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                   (fStack00000000000000c8 *
                    (in_stack_000000c0._4_4_ +
                    fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac)) -
                   *(float *)((long)unaff_x19 + 0x2a4));
          fVar45 = -fVar46;
          if ((char)unaff_x19[0x1d] != '\0') {
            fVar45 = fVar46;
          }
          lVar33 = lVar33 + lVar15 * 0x5c;
          *(float *)(lVar33 + 0x58) = *(float *)(lVar41 + lVar35 * unaff_x21 + 0x144) + fVar45;
          fVar45 = *(float *)(unaff_x19 + 0x9a);
          *(float *)(lVar33 + 0x48) = fStack0000000000000050 + (fVar51 - fVar48);
          *(float *)(lVar33 + 0x4c) = fVar51;
          uVar16 = (ulong)(uint)(0.0 - fVar45);
          *(float *)(lVar33 + 0x50) = 0.0 - fVar45;
          *(float *)(lVar33 + 0x54) = fVar48;
          plVar27 = (long *)System_Threading_Mutex_TypeInfo;
          if ((int)in_stack_000017bc < 0x2d) {
            if (in_stack_000017bc - 10 < 2) {
LAB_0248dad8:
              if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              plVar44 = (long *)StringLiteral_302;
              FUN_024d69d4();
              lVar23 = unaff_x19[0x6c];
              *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
              iVar10 = (int)unaff_x19[0x94] + 1;
              *(int *)(unaff_x19 + 0x94) = iVar10;
              *(int *)(unaff_x19 + 0x92) = *(int *)((long)unaff_x19 + 0x48c) + 1;
              if ((lVar23 != 0) && (*(long *)(lVar23 + 0x50) != 0)) {
                if (*(int *)(*(long *)(lVar23 + 0x50) + 0x18) <= iVar10) {
                  FUN_024d6e60();
                  lVar23 = unaff_x19[0x6c];
                  if (lVar23 == 0) goto LAB_02491464;
                }
                lVar23 = *(long *)(lVar23 + 0x38);
                if (lVar23 != 0) {
                  if (*in_stack_00000148 < *(uint *)(lVar23 + 0x18)) {
                    fVar45 = *(float *)(lVar23 + (int)*in_stack_00000148 * unaff_x21 + 0x154);
                    if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
                      fVar48 = 0.0;
                      if ((in_stack_000017bc == 0x2029) || (in_stack_000017bc == 10)) {
                        fVar48 = *(float *)((long)unaff_x19 + 0x2c4);
                      }
                      uVar21 = 0;
                      fVar48 = *(float *)(unaff_x19 + 0x9a) +
                               fVar45 + (0.0 - *(float *)((long)unaff_x19 + 0x4c4)) +
                               fStack0000000000000054 *
                               (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4)) +
                               fStack00000000000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar48);
                    }
                    else {
                      if ((in_stack_000017bc == 0x2029) || (fVar48 = 0.0, in_stack_000017bc == 10))
                      {
                        fVar48 = *(float *)((long)unaff_x19 + 0x2c4);
                      }
                      uVar21 = 1;
                      fVar48 = *(float *)(unaff_x19 + 0x9a) +
                               *(float *)(unaff_x19 + 0x57) +
                               fStack00000000000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar48);
                    }
                    *(float *)(unaff_x19 + 0x9a) = fVar48;
                    *(undefined1 *)((long)unaff_x19 + 700) = uVar21;
                    lVar23 = *plVar27;
                    if (*(int *)(lVar23 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                      lVar23 = *plVar27;
                    }
                    uVar18 = *(undefined8 *)(*(long *)(lVar23 + 0xb8) + 0x15a8);
                    *(float *)(unaff_x19 + 0x99) = fVar45;
                    uVar16 = NEON_rev64(uVar18,4);
                    unaff_x19[0x98] = uVar16;
                    *(float *)(unaff_x19 + 199) =
                         *(float *)(unaff_x19 + 0x80) + 0.0 + *(float *)((long)unaff_x19 + 0x404);
                    FUN_024d69d4();
                    FUN_024d69d4();
                    *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
                    fStack0000000000000058 = 1.4013e-45;
                    bStack000000000000005c = 1;
                    goto LAB_0248ab98;
                  }
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                }
              }
              goto LAB_02491464;
            }
            if (in_stack_000017bc == 3) {
              if (unaff_x19[0x8e] == 0) goto LAB_02491464;
              in_stack_00001788 = (uint)*(undefined8 *)(unaff_x19[0x8e] + 0x18);
              uVar36 = 3;
            }
          }
          else if ((in_stack_000017bc - 0x2028 < 2) || (in_stack_000017bc == 0x2d))
          goto LAB_0248dad8;
        }
LAB_0248dc08:
        uVar31 = *in_stack_00000148;
        if (uVar30 <= uVar31)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        if (*(char *)(lVar41 + (int)uVar31 * unaff_x21 + 0x194) != '\0') {
          lVar41 = lVar41 + (int)uVar31 * unaff_x21;
          uVar17 = *(ulong *)(lVar41 + 0x11c);
          uVar16 = *(ulong *)(in_stack_00000070 + 0x230);
          *(ulong *)(in_stack_00000070 + 0x230) =
               uVar17 ^ (uVar17 ^ uVar16) &
                        CONCAT44(-(uint)((float)(uVar16 >> 0x20) < (float)(uVar17 >> 0x20)),
                                 -(uint)((float)uVar16 < (float)uVar17));
          uVar17 = *(ulong *)(in_stack_00000070 + 0x238);
          uVar16 = *(ulong *)(lVar41 + 0x128);
          *(ulong *)(in_stack_00000070 + 0x238) =
               uVar16 ^ (uVar16 ^ uVar17) &
                        CONCAT44(-(uint)((float)(uVar16 >> 0x20) < (float)(uVar17 >> 0x20)),
                                 -(uint)((float)uVar16 < (float)uVar17));
        }
        if (((int)unaff_x19[0x5b] == 5) &&
           ((0xd < uVar36 || ((1 << (ulong)(uVar36 & 0x1f) & 0x2c00U) == 0)))) {
          lVar41 = *(long *)(lVar23 + 0x58);
          if (lVar41 == 0) goto LAB_02491464;
          iVar10 = (int)unaff_x19[0x95] + 1;
          if (*(int *)(lVar41 + 0x18) < iVar10) {
            if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_01147c08((long *)(lVar23 + 0x58),iVar10,1,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerMove__);
            lVar23 = *in_stack_00000150;
            if (lVar23 == 0) goto LAB_02491464;
          }
          lVar41 = *(long *)(lVar23 + 0x58);
          if (lVar41 == 0) goto LAB_02491464;
          uVar30 = *(uint *)(unaff_x19 + 0x95);
          lVar33 = (long)(int)uVar30;
          uVar31 = *(uint *)(lVar41 + 0x18);
          if (uVar31 <= uVar30)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          lVar15 = lVar41 + lVar33 * 0x14;
          fVar48 = *(float *)(lVar15 + 0x30);
          uVar16 = (ulong)(uint)fVar48;
          *(undefined4 *)(lVar15 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
          fVar45 = *(float *)((long)unaff_x19 + 0x4bc);
          if (fVar48 <= *(float *)((long)unaff_x19 + 0x4bc)) {
            fVar45 = fVar48;
          }
          *(float *)(lVar15 + 0x30) = fVar45;
          uVar36 = *(uint *)((long)unaff_x19 + 0x48c);
          if (uVar36 == 0 && uVar30 == 0) {
            *(uint *)(lVar41 + lVar33 * 0x14 + 0x20) = uVar36;
          }
          else {
            uVar43 = uVar36 - 1;
            if (0 < (int)uVar36) {
              lVar23 = *(long *)(lVar23 + 0x38);
              if (lVar23 == 0) goto LAB_02491464;
              if (*(uint *)(lVar23 + 0x18) <= uVar43)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              if (uVar30 != *(uint *)(lVar23 + (long)(int)uVar43 * (long)iVar40 + 0x68)) {
                if (uVar30 - 1 < uVar31) {
                  *(uint *)(lVar41 + 0x20 + (long)(int)(uVar30 - 1) * 0x14 + 4) = uVar43;
                  *(uint *)(lVar41 + 0x20 + lVar33 * 0x14) = uVar36;
                  goto LAB_0248dc84;
                }
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              }
            }
            if ((float)uVar36 == in_stack_00000078._4_4_) {
              *(float *)(lVar41 + lVar33 * 0x14 + 0x24) = in_stack_00000078._4_4_;
            }
          }
        }
LAB_0248dc84:
        plVar27 = (long *)System_Threading_Mutex_TypeInfo;
        if (((char)unaff_x19[0x5a] != '\0') ||
           ((*(uint *)(unaff_x19 + 0x5b) < 7 &&
            ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5b) & 0x1f) & 0x4aU) != 0)))) {
          if ((unaff_w29 == 0) &&
             (((in_stack_000017bc != 0x2d && (in_stack_000017bc != 0x200b)) &&
              (in_stack_000017bc != 0xad)))) {
            if (*(char *)((long)unaff_x19 + 0x2d2) == '\0') {
LAB_0248de4c:
              if (((((0x2bfd < in_stack_000017bc - 0xac01) && (0x1d < in_stack_000017bc - 0xa961))
                   && (0xfd < in_stack_000017bc - 0x1101)) ||
                  (uVar17 = FUN_024e95f0(0), (uVar17 & 1) != 0)) &&
                 ((((0xed < in_stack_000017bc - 0xff01 && (0x1d < in_stack_000017bc - 0xfe31)) &&
                   (0x717d < in_stack_000017bc - 0x2e81)) && (0x1fd < in_stack_000017bc - 0xf901))))
              goto LAB_0248ded4;
              lVar23 = FUN_024e94b0(0);
              if ((lVar23 == 0) || (*(long *)(lVar23 + 0x10) == 0)) goto LAB_02491464;
              uVar17 = FUN_0129aa60(*(long *)(lVar23 + 0x10),&stack0x00000880,
                                    *(undefined8 *)
                                     System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                                   );
              if ((int)*in_stack_00000148 < (int)in_stack_00000078._4_4_) {
                lVar23 = FUN_024e94b0(0);
                if (((lVar23 == 0) || (*in_stack_00000150 == 0)) ||
                   (lVar41 = *(long *)(*in_stack_00000150 + 0x38), lVar41 == 0)) goto LAB_02491464;
                if (*(uint *)(lVar41 + 0x18) <= *in_stack_00000148 + 1)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                if (*(long *)(lVar23 + 0x18) == 0) goto LAB_02491464;
                in_stack_00000880 =
                     (uint)*(ushort *)
                            (lVar41 + (long)(int)(*in_stack_00000148 + 1) * (long)iVar40 + 0x20);
                uVar20 = FUN_0129aa60(*(long *)(lVar23 + 0x18),&stack0x00000880,
                                      *(undefined8 *)
                                       System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                                     );
                if ((uVar17 & 1) != 0) goto LAB_0248e0dc;
                if ((uVar20 & 1) == 0) goto LAB_0248e1b0;
                plVar27 = (long *)System_Threading_Mutex_TypeInfo;
                if ((bStack000000000000005c & 1) == 0) {
                  bStack000000000000005c = 0;
                  goto LAB_0248e168;
                }
              }
              else {
                in_stack_00000880 = in_stack_000017bc;
                if ((uVar17 & 1) == 0) {
LAB_0248e1b0:
                  plVar27 = (long *)System_Threading_Mutex_TypeInfo;
                  if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  FUN_024d69d4();
                  bStack000000000000005c = 0;
                  goto LAB_0248e168;
                }
LAB_0248e0dc:
                plVar27 = (long *)System_Threading_Mutex_TypeInfo;
                if (uVar11 != uVar26 || ((bStack000000000000005c ^ 0xff) & 1) != 0)
                goto LAB_0248e168;
              }
joined_r0x0248e0fc:
              System_Threading_Mutex_TypeInfo = (undefined *)plVar27;
              if (unaff_w29 != 0) {
LAB_0248e100:
                plVar27 = (long *)System_Threading_Mutex_TypeInfo;
                if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_024d69d4();
              }
              if (*(int *)(*plVar27 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_024d69d4();
              bStack000000000000005c = 1;
            }
            else {
LAB_0248ded4:
              plVar27 = (long *)System_Threading_Mutex_TypeInfo;
              if ((bStack000000000000005c & 1) != 0) {
                if ((in_stack_000017bc == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) == 0)
                goto joined_r0x0248e0fc;
                goto LAB_0248e100;
              }
              bStack000000000000005c = 0;
            }
          }
          else {
            if (*(char *)((long)unaff_x19 + 0x2d2) == '\x01') goto LAB_0248ded4;
            if (((in_stack_000017bc - 0x2007 < 0x29) &&
                ((1L << ((ulong)(in_stack_000017bc - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
               ((in_stack_000017bc == 0xa0 || (in_stack_000017bc == 0x2060)))) goto LAB_0248de4c;
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_024d69d4();
            bStack000000000000005c = 0;
            *(undefined4 *)(*(long *)(*plVar27 + 0xb8) + 0xe78) = 0xffffffff;
          }
        }
LAB_0248e168:
        if (*(int *)(*plVar27 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar44 = (long *)StringLiteral_302;
        FUN_024d69d4();
        *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
      }
LAB_0248ab98:
      do {
        fVar45 = 1.0;
        in_stack_00001788 = in_stack_00001788 + 1;
        lVar23 = unaff_x19[0x8e];
        if (lVar23 == 0) goto LAB_02491464;
        if ((int)*(uint *)(lVar23 + 0x18) <= (int)in_stack_00001788) {
LAB_0248e4dc:
          fVar50 = (float)uVar16;
          if (((char)unaff_x19[0x46] != '\0') &&
             (fVar50 = DAT_02956ccc,
             DAT_02956ccc < *(float *)((long)unaff_x19 + 0x234) - *(float *)(unaff_x19 + 0x47))) {
            fVar50 = *(float *)((long)unaff_x19 + 0x1dc);
            fVar45 = *(float *)((long)unaff_x19 + 0x24c);
            if ((fVar50 < fVar45) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
              if (*(float *)((long)unaff_x19 + 0x2cc) < *(float *)(unaff_x19 + 0x59) / 100.0) {
                *(undefined4 *)((long)unaff_x19 + 0x2cc) = 0;
              }
              fVar48 = (*(float *)((long)unaff_x19 + 0x234) - fVar50) * 0.5;
              if (fVar48 <= DAT_028aa298) {
                fVar48 = DAT_028aa298;
              }
              *(float *)(unaff_x19 + 0x47) = fVar50;
              fVar48 = (fVar50 + fVar48) * 20.0 + 0.5;
              fVar50 = DAT_02958220;
              if (fVar48 != INFINITY) {
                fVar50 = (float)(int)fVar48 / 20.0;
              }
              if (fVar45 <= fVar50) {
                fVar50 = fVar45;
              }
              goto LAB_0248e598;
            }
          }
          *(undefined1 *)((long)unaff_x19 + 0x244) = 1;
          if ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c)) {
            uVar18 = FUN_0176eb1c(_fStack0000000000000038,0);
            uVar14 = FUN_017840ac(in_stack_00000040,0);
            uVar18 = FUN_0160073c(*(undefined8 *)
                                   Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlah_s16__,uVar18,
                                  *(undefined8 *)
                                   Method_UnityEngine_GameObject_GetComponents<Component>__,uVar14,0
                                 );
            if (*(int *)(*plVar44 + 0xe0) == 0) {
              thunk_FUN_00d32864(*plVar44);
            }
            FUN_02660dac(uVar18,0);
          }
          puVar7 = Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__;
          if ((*in_stack_00000148 == 0) || ((*in_stack_00000148 == 1 && (uVar61 == 3)))) {
            (**(code **)(*unaff_x19 + 0x958))();
            lVar23 = *(long *)puVar7;
            goto LAB_02491474;
          }
          lVar23 = *plVar27;
          if (*(int *)(lVar23 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar23 = *plVar27;
          }
          plVar27 = (long *)PTR_DAT_033ed410;
          lVar23 = **(long **)(lVar23 + 0xb8);
          if (lVar23 == 0) goto LAB_02491464;
          if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0xd0))
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          iVar40 = *(int *)(lVar23 + (long)(int)*(uint *)(unaff_x19 + 0xd0) * 0x38 + 0x54) << 2;
          if ((*in_stack_00000150 == 0) ||
             (lVar23 = *(long *)(*in_stack_00000150 + 0x60), lVar23 == 0)) goto LAB_02491464;
          if (*(int *)(*(long *)PTR_DAT_033ed410 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (*(int *)(lVar23 + 0x18) == 0)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          FUN_024e7d94(lVar23 + 0x20,0,0);
          if (DAT_03774d76 == '\0') {
            thunk_FUN_00d48444(
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              );
            DAT_03774d76 = '\x01';
          }
          iVar10 = (int)unaff_x19[0x4d];
          in_stack_000000c0._4_4_ =
               **(float **)
                 (*(long *)
                   Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
                 0xb8);
          in_stack_000000b8 =
               *(undefined8 *)
                (*(float **)
                  (*(long *)
                    Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                  + 0xb8) + 1);
          lVar23 = unaff_x19[0xea];
          in_stack_00000088 = (float *)in_stack_000000b8;
          fStack0000000000000090 = in_stack_000000c0._4_4_;
          if (iVar10 < 0x401) {
            if (iVar10 == 0x100) {
              if (lVar23 == 0) goto LAB_02491464;
              if (*(uint *)(lVar23 + 0x18) < 2)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              uVar18 = *(undefined8 *)(lVar23 + 0x30);
              if ((int)unaff_x19[0x5b] == 5) {
                if ((*in_stack_00000150 == 0) ||
                   (lVar41 = *(long *)(*in_stack_00000150 + 0x58), lVar41 == 0)) goto LAB_02491464;
                if (*(uint *)(lVar41 + 0x18) <= uStack0000000000000030)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                fVar50 = *(float *)(lVar41 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
              }
              else {
                fVar50 = *(float *)(unaff_x19 + 0x96);
              }
              fStack0000000000000090 = fStack000000000000002c + 0.0 + *(float *)(lVar23 + 0x2c);
              fVar50 = (0.0 - fVar50) - fStack0000000000000020;
            }
            else if (iVar10 == 0x200) {
              if (lVar23 == 0) goto LAB_02491464;
              if ((*(int *)(lVar23 + 0x18) == 1) || (*(int *)(lVar23 + 0x18) == 0))
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              fStack0000000000000090 = (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5
              ;
              uVar18 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20)) * 0.5,
                                ((float)*(undefined8 *)(lVar23 + 0x24) +
                                (float)*(undefined8 *)(lVar23 + 0x30)) * 0.5);
              if ((int)unaff_x19[0x5b] == 5) {
                if ((*in_stack_00000150 == 0) ||
                   (lVar23 = *(long *)(*in_stack_00000150 + 0x58), lVar23 == 0)) goto LAB_02491464;
                if (*(uint *)(lVar23 + 0x18) <= uStack0000000000000030)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                lVar23 = lVar23 + (long)(int)uStack0000000000000030 * 0x14;
                fStack0000000000000090 = fStack000000000000002c + 0.0 + fStack0000000000000090;
                fVar50 = ((fStack0000000000000020 + *(float *)(lVar23 + 0x28) +
                          *(float *)(lVar23 + 0x30)) - fStack0000000000000024) * -0.5 + 0.0;
              }
              else {
                fStack0000000000000090 = fStack000000000000002c + 0.0 + fStack0000000000000090;
                fVar50 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x96) + in_stack_000017b8
                          ) - fStack0000000000000024) * -0.5 + 0.0;
              }
            }
            else {
              if (iVar10 != 0x400) goto LAB_0248eb64;
              if (lVar23 == 0) goto LAB_02491464;
              if (*(int *)(lVar23 + 0x18) == 0)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              uVar18 = *(undefined8 *)(lVar23 + 0x24);
              if ((int)unaff_x19[0x5b] == 5) {
                if ((*in_stack_00000150 == 0) ||
                   (lVar41 = *(long *)(*in_stack_00000150 + 0x58), lVar41 == 0)) goto LAB_02491464;
                if (*(uint *)(lVar41 + 0x18) <= uStack0000000000000030)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                in_stack_000017b8 =
                     *(float *)(lVar41 + (long)(int)uStack0000000000000030 * 0x14 + 0x30);
              }
              fStack0000000000000090 = fStack000000000000002c + 0.0 + *(float *)(lVar23 + 0x20);
              fVar50 = fStack0000000000000024 + (0.0 - in_stack_000017b8);
            }
            in_stack_00000088 =
                 (float *)CONCAT44((float)((ulong)uVar18 >> 0x20) + 0.0,(float)uVar18 + fVar50);
          }
          else if (iVar10 == 0x800) {
            if (lVar23 == 0) goto LAB_02491464;
            if ((*(int *)(lVar23 + 0x18) == 1) || (*(int *)(lVar23 + 0x18) == 0))
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            fVar50 = ((float)*(undefined8 *)(lVar23 + 0x24) + (float)*(undefined8 *)(lVar23 + 0x30))
                     * 0.5;
            fStack0000000000000090 =
                 fStack000000000000002c + 0.0 +
                 (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5;
            in_stack_00000088 =
                 (float *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20) +
                                   (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20)) * 0.5 +
                                   0.0,fVar50 + 0.0);
          }
          else {
            if (iVar10 == 0x1000) {
              if (lVar23 == 0) goto LAB_02491464;
              if ((*(int *)(lVar23 + 0x18) == 1) || (*(int *)(lVar23 + 0x18) == 0))
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              fVar50 = (float)*(undefined8 *)(lVar23 + 0x24) + (float)*(undefined8 *)(lVar23 + 0x30)
              ;
              fVar45 = (float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20) +
                       (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20);
              fStack0000000000000020 =
                   fStack0000000000000020 + *(float *)(unaff_x19 + 0x9c) +
                   *(float *)(unaff_x19 + 0x9b);
              fStack0000000000000090 =
                   fStack000000000000002c + 0.0 +
                   (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5;
            }
            else {
              if (iVar10 != 0x2000) goto LAB_0248eb64;
              if (lVar23 == 0) goto LAB_02491464;
              if ((*(int *)(lVar23 + 0x18) == 1) || (*(int *)(lVar23 + 0x18) == 0))
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              fVar50 = (float)*(undefined8 *)(lVar23 + 0x24) + (float)*(undefined8 *)(lVar23 + 0x30)
              ;
              fVar45 = (float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20) +
                       (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20);
              fStack0000000000000020 = *(float *)((long)unaff_x19 + 0x4b4) - fStack0000000000000020;
              fStack0000000000000090 =
                   fStack000000000000002c + 0.0 +
                   (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5;
            }
            fVar50 = fVar50 * 0.5;
            in_stack_00000088 =
                 (float *)CONCAT44(fVar45 * 0.5 + 0.0,
                                   fVar50 + (0.0 - (fStack0000000000000020 - fStack0000000000000024)
                                                   * 0.5));
          }
LAB_0248eb64:
          lVar23 = FUN_0249b7f8();
          if (lVar23 == 0) goto LAB_02491464;
          FUN_026a125c(lVar23,0);
          __x = DAT_028aa048;
          *(float *)((long)unaff_x19 + 0x6dc) = fVar50;
          dVar47 = modf(__x,(double *)&stack0x00000880);
          puVar7 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
          if (dVar47 == 0.5) {
            fVar45 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
            if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
              fVar45 = fVar45 + 1.0;
            }
          }
          else {
            fVar45 = 255.0;
          }
          dVar47 = modf(__x,(double *)&stack0x00000880);
          if (dVar47 == 0.5) {
            fVar48 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
            if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
              fVar48 = fVar48 + 1.0;
            }
          }
          else {
            fVar48 = 255.0;
          }
          dVar47 = modf(__x,(double *)&stack0x00000880);
          if (dVar47 == 0.5) {
            fVar46 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
            if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
              fVar46 = fVar46 + 1.0;
            }
          }
          else {
            fVar46 = 255.0;
          }
          dVar47 = modf(__x,(double *)&stack0x00000880);
          if (dVar47 == 0.5) {
            fVar51 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
            if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
              fVar51 = fVar51 + 1.0;
            }
          }
          else {
            fVar51 = 255.0;
          }
          modf(__x,(double *)&stack0x00000880);
          modf(__x,(double *)&stack0x00000880);
          modf(__x,(double *)&stack0x00000880);
          modf(__x,(double *)&stack0x00000880);
          if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (DAT_037825d3 == '\0') {
            thunk_FUN_00d48444(Unity_AI_Navigation_NavMeshLink_TypeInfo);
            DAT_037825d3 = '\x01';
          }
          puVar7 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
          lVar23 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
          if (*(int *)(lVar23 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar23 = *(long *)puVar7;
          }
          puVar24 = *(undefined4 **)(lVar23 + 0xb8);
          UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
                    (*puVar24,puVar24[1],puVar24[2],puVar24[3],&stack0x00001790,0x4000ffff,0);
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar23 = *in_stack_00000150;
          if (lVar23 == 0) goto LAB_02491464;
          uVar11 = *in_stack_00000148;
          if ((int)uVar11 < 1) {
            iStack00000000000000a4 = 0;
            iVar40 = 0;
            plVar44 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
            ;
            goto LAB_02491068;
          }
          lVar23 = *(long *)(lVar23 + 0x38);
          if (lVar23 == 0) goto LAB_02491464;
          iVar10 = 0;
          bVar6 = false;
          bVar5 = false;
          bVar9 = false;
          iStack00000000000000a4 = 0;
          fStack0000000000000024 = 0.0;
          bVar8 = false;
          in_stack_00000110._4_4_ = 0.0;
          fStack0000000000000048 = 0.0;
          fStack00000000000000cc =
               *(float *)(*(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8) + 0x15a8);
          fStack00000000000000c8 = 0.0;
          fStack0000000000000054 = fStack00000000000000a8;
          fStack0000000000000058 = 0.0;
          fStack0000000000000038 = 0.0;
          fStack0000000000000084 = 0.0;
          fStack0000000000000034 = 0.0;
          _bStack000000000000005c =
               (int)fVar45 & 0xffU | ((int)fVar48 & 0xffU) << 8 | ((int)fVar46 & 0xffU) << 0x10 |
               (int)fVar51 << 0x18;
          fVar48 = 0.0;
          fVar45 = 0.0;
          _in_stack_00000128 = 0x2e0;
          fStack0000000000000098 = fStack00000000000000a8;
          in_stack_000000a0 = fStack00000000000000ac;
          fStack000000000000004c = fStack00000000000000ac;
          fStack0000000000000050 = (float)uStack0000000000000094;
          in_stack_00000078._4_4_ = fStack00000000000000a8;
          in_stack_00000068._4_4_ = fStack00000000000000ac;
          uStack0000000000000060 = uStack0000000000000094;
          uVar26 = 0;
          uVar31 = 1;
          goto LAB_0248ef74;
        }
        if (*(uint *)(lVar23 + 0x18) <= in_stack_00001788)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        in_stack_000017bc = *(uint *)(lVar23 + (long)(int)in_stack_00001788 * 0xc + 0x20);
        if (in_stack_000017bc == 0) goto LAB_0248e4dc;
        if (5 < in_stack_00000140._4_4_) {
          uVar18 = FUN_0176eb1c(&stack0x000017bc,0);
          uVar14 = FUN_0176eb1c(&stack0x00001788,0);
          uVar18 = FUN_0160073c(*(undefined8 *)
                                 UnityEngine_Rendering_Universal_DebugValidationMode_var,uVar18,
                                *(undefined8 *)
                                 Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                                ,uVar14,0);
          if (*(int *)(*plVar44 + 0xe0) == 0) {
            thunk_FUN_00d32864(*plVar44);
          }
          FUN_026610e4(uVar18,0);
          in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
        }
        if ((*(char *)((long)unaff_x19 + 0x2fa) == '\0') || (in_stack_000017bc != 0x3c)) {
          if ((*in_stack_00000150 == 0) ||
             (lVar23 = *(long *)(*in_stack_00000150 + 0x38), lVar23 == 0)) goto LAB_02491464;
          if (*(uint *)(lVar23 + 0x18) <= *in_stack_00000148)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          lVar23 = lVar23 + (int)*in_stack_00000148 * unaff_x21;
          *(undefined4 *)((long)unaff_x19 + 0x63c) = *(undefined4 *)(lVar23 + 0x2c);
          *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar23 + 0x58);
          unaff_x19[0x1f] = *(long *)(lVar23 + 0x38);
        }
        else {
          *(undefined1 *)((long)unaff_x19 + 0x429) = 1;
          *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
          uVar17 = FUN_024d0688();
          if (((uVar17 & 1) != 0) &&
             (in_stack_00001788 = in_stack_0000176c, uVar61 = in_stack_000017bc,
             *(int *)((long)unaff_x19 + 0x63c) == 0)) goto LAB_0248ab98;
        }
        if ((unaff_x19[0x6c] == 0) || (lVar23 = *(long *)(unaff_x19[0x6c] + 0x38), lVar23 == 0))
        goto LAB_02491464;
        uVar11 = *in_stack_00000148;
        if (*(uint *)(lVar23 + 0x18) <= uVar11)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar33 = (long)(int)uVar11;
        bVar3 = *(byte *)(lVar23 + lVar33 * unaff_x21 + 0x5c);
        unaff_w22 = (uint)bVar3;
        *(undefined1 *)((long)unaff_x19 + 0x429) = 0;
        lVar41 = unaff_x19[0x23];
        if ((uint)in_stack_000017a8 == uVar11) {
          in_stack_000017bc = (uint)((ulong)in_stack_000017a8 >> 0x20);
          unaff_w20 = 1;
          *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
          if (in_stack_000017bc == 0x2026) {
            lVar15 = unaff_x19[0xc9];
            lVar23 = lVar23 + lVar33 * unaff_x21;
            *(undefined4 *)(lVar23 + 0x2c) = 0;
            *(long *)(lVar23 + 0x30) = lVar15;
            *(long *)(lVar23 + 0x38) = unaff_x19[0xca];
            *(long *)(lVar23 + 0x50) = unaff_x19[0xcb];
            *(int *)(lVar23 + 0x58) = (int)unaff_x19[0xcc];
            *(undefined1 *)(unaff_x19 + 0x5e) = 1;
            in_stack_000017a8 = CONCAT44(3,uVar11 + 1);
          }
          else if (in_stack_000017bc == 3) {
            if ((*unaff_x27 == 0) || (lVar15 = FUN_024b11ac(*unaff_x27,0), lVar15 == 0))
            goto LAB_02491464;
            in_stack_00000bf8 = 3;
            FUN_01299bc0(lVar15,&stack0x00000bf8,&stack0x00000880,*(undefined8 *)PTR_DAT_033ef3c8);
            if (*(uint *)(lVar23 + 0x18) <= uVar11)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            unaff_w20 = 1;
            *(ulong *)(lVar23 + lVar33 * unaff_x21 + 0x30) =
                 CONCAT44(in_stack_00000884,in_stack_00000880);
            uVar11 = *(uint *)((long)unaff_x19 + 0x48c);
            *(undefined1 *)(unaff_x19 + 0x5e) = 1;
          }
        }
        else {
          unaff_w20 = 0;
        }
        plVar27 = (long *)System_Threading_Mutex_TypeInfo;
        if (((int)uVar11 < *(int *)((long)unaff_x19 + 0x31c)) && (in_stack_000017bc != 3)) {
          if ((*in_stack_00000150 == 0) ||
             (lVar23 = *(long *)(*in_stack_00000150 + 0x38), lVar23 == 0)) goto LAB_02491464;
          if (*(uint *)(lVar23 + 0x18) <= uVar11)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          lVar23 = lVar23 + (long)(int)uVar11 * (long)iVar40;
          *(undefined1 *)(lVar23 + 0x194) = 0;
          *(undefined2 *)(lVar23 + 0x20) = 0x200b;
          *(undefined4 *)(lVar23 + 100) = 0;
          *in_stack_00000148 = uVar11 + 1;
          uVar61 = in_stack_000017bc;
          goto LAB_0248ab98;
        }
        iVar10 = *(int *)((long)unaff_x19 + 0x63c);
        in_stack_00000100 = fVar45;
        if (iVar10 == 0) {
          uVar11 = *(uint *)((long)unaff_x19 + 0x254);
          if ((uVar11 >> 4 & 1) == 0) {
            if ((uVar11 >> 3 & 1) == 0) {
              if ((uVar11 >> 5 & 1) != 0) {
                if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar17 = FUN_016f92d4(in_stack_000017bc,0);
                if ((uVar17 & 1) != 0) {
                  if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar11 = FUN_016f95a8(in_stack_000017bc,0);
                  in_stack_000017bc = uVar11 & 0xffff;
                  in_stack_00000100 = fStack0000000000000028;
                }
              }
            }
            else {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar17 = FUN_016f9218(in_stack_000017bc,0);
              if ((uVar17 & 1) != 0) {
                if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar11 = FUN_016f9724(in_stack_000017bc,0);
                goto LAB_0248af70;
              }
            }
          }
          else {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar17 = FUN_016f92d4(in_stack_000017bc,0);
            in_stack_00000100 = 1.0;
            if ((uVar17 & 1) != 0) {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar11 = FUN_016f95a8(in_stack_000017bc,0);
LAB_0248af70:
              in_stack_000017bc = uVar11 & 0xffff;
              in_stack_00000100 = 1.0;
            }
          }
          iVar10 = *(int *)((long)unaff_x19 + 0x63c);
          if (iVar10 == 0) goto LAB_0248af84;
LAB_0248abc8:
          if (iVar10 != 1) {
            lVar23 = *in_stack_00000150;
            unaff_s13 = 0.0;
            if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
              unaff_s13 = fVar50;
            }
            in_stack_00000138 = 0.0;
            if (lVar23 == 0) goto LAB_02491464;
            in_stack_00000128 = 0.0;
            in_stack_00000120 = 0.0;
            in_stack_000000d0 = fVar50;
            goto LAB_0248b39c;
          }
          if ((*in_stack_00000150 == 0) ||
             (lVar23 = *(long *)(*in_stack_00000150 + 0x38), lVar23 == 0)) goto LAB_02491464;
          if (*(uint *)(lVar23 + 0x18) <= *in_stack_00000148)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          lVar23 = lVar23 + (int)*in_stack_00000148 * unaff_x21;
          lVar33 = *(long *)(lVar23 + 0x40);
          unaff_x19[0xd2] = lVar33;
          *(undefined4 *)((long)unaff_x19 + 0x69c) = *(undefined4 *)(lVar23 + 0x48);
          if ((lVar33 == 0) || (lVar23 = FUN_024ebfa0(lVar33,0), lVar23 == 0)) goto LAB_02491464;
          FUN_0132138c(lVar23,*(undefined4 *)((long)unaff_x19 + 0x69c),&stack0x00000880,
                       *(undefined8 *)System_Func<KeyValuePair<int,_int>,_int>_TypeInfo);
          puVar7 = System_Threading_Mutex_TypeInfo;
          lVar33 = CONCAT44(in_stack_00000884,in_stack_00000880);
          plVar27 = (long *)System_Threading_Mutex_TypeInfo;
          uVar61 = in_stack_000017bc;
          if (lVar33 != 0) {
            if (in_stack_000017bc == 0x3c) {
              in_stack_000017bc = *(int *)((long)unaff_x19 + 0x69c) + 0xe000;
            }
            else {
              lVar23 = *(long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(lVar23 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar23 = *(long *)puVar7;
              }
              *(undefined4 *)((long)unaff_x19 + 0x1b4) =
                   *(undefined4 *)(*(long *)(lVar23 + 0xb8) + 0x68);
            }
            if (unaff_x19[0x1f] == 0) goto LAB_02491464;
            fVar50 = *(float *)(unaff_x19 + 0x3c);
            memmove(&stack0x00001700,(void *)(unaff_x19[0x1f] + 0x50),0x60);
            iVar10 = FUN_026fd110(&stack0x00001700,0);
            if (*unaff_x27 == 0) goto LAB_02491464;
            memmove(&stack0x00001700,(void *)(*unaff_x27 + 0x50),0x60);
            fVar46 = (float)FUN_026fd120(&stack0x00001700,0);
            fVar48 = fStack0000000000000084;
            if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
              fVar48 = 1.0;
            }
            if (unaff_x19[0xd2] == 0) goto LAB_02491464;
            fVar48 = (fVar50 / (float)iVar10) * fVar46 * fVar48;
            iVar10 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
            fVar50 = *(float *)(unaff_x19 + 0x3c);
            if (iVar10 < 1) {
              if (*unaff_x27 == 0) goto LAB_02491464;
              iVar10 = FUN_026fd110(*unaff_x27 + 0x50,0);
              if (*unaff_x27 == 0) goto LAB_02491464;
              fVar46 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
              in_stack_00000120 = fStack0000000000000084;
              if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
                in_stack_00000120 = fVar45;
              }
              if (unaff_x19[0x1f] == 0) goto LAB_02491464;
              fVar45 = (float)FUN_026fd140(unaff_x19[0x1f] + 0x50,0);
              if (*(long *)(lVar33 + 0x20) == 0) goto LAB_02491464;
              FUN_026fd62c(&stack0x00000880,*(long *)(lVar33 + 0x20),0);
              unaff_x28[0x1cd] = unaff_x28[1];
              unaff_x28[0x1cc] = *unaff_x28;
              fVar51 = (float)FUN_026fd45c(&stack0x000016e0,0);
              if (*(long *)(lVar33 + 0x20) == 0) goto LAB_02491464;
              fVar52 = *(float *)(lVar33 + 0x2c);
              fVar54 = (float)FUN_026fd668(*(long *)(lVar33 + 0x20),0);
              if (*unaff_x27 == 0) goto LAB_02491464;
              in_stack_00000128 = (float)FUN_026fd140(*unaff_x27 + 0x50,0);
              if (*unaff_x27 == 0) goto LAB_02491464;
              fVar55 = (float)FUN_026fd170(*unaff_x27 + 0x50,0);
              if (*unaff_x27 == 0) goto LAB_02491464;
              fVar57 = *(float *)((long)unaff_x19 + 0x3fc);
              in_stack_00000138 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
              if (unaff_x19[0x1f] == 0) goto LAB_02491464;
              in_stack_00000138 = fVar48 * fVar55 * fVar57 * in_stack_00000138;
              in_stack_00000120 = (fVar50 / (float)iVar10) * fVar46 * in_stack_00000120;
              in_stack_000000d0 = in_stack_00000120 * (fVar45 / fVar51) * fVar52 * fVar54;
              in_stack_00000120 = in_stack_00000120 / in_stack_000000d0;
              in_stack_00000128 = in_stack_00000120 * in_stack_00000128;
              fVar50 = (float)FUN_026fd180(unaff_x19[0x1f] + 0x50,0);
              in_stack_00000120 = in_stack_00000120 * fVar50;
            }
            else {
              if (unaff_x19[0xd2] == 0) goto LAB_02491464;
              iVar10 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
              if (unaff_x19[0xd2] == 0) goto LAB_02491464;
              fVar45 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
              if (*(long *)(lVar33 + 0x20) == 0) goto LAB_02491464;
              fVar51 = *(float *)(lVar33 + 0x2c);
              fVar46 = fStack0000000000000084;
              if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
                fVar46 = 1.0;
              }
              fVar52 = (float)FUN_026fd668(*(long *)(lVar33 + 0x20),0);
              if (unaff_x19[0xd2] == 0) goto LAB_02491464;
              in_stack_00000128 = (float)FUN_026fd140(unaff_x19[0xd2] + 0x48,0);
              if (unaff_x19[0xd2] == 0) goto LAB_02491464;
              fVar54 = (float)FUN_026fd170(unaff_x19[0xd2] + 0x48,0);
              if (unaff_x19[0xd2] == 0) goto LAB_02491464;
              fVar55 = *(float *)((long)unaff_x19 + 0x3fc);
              in_stack_00000138 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
              if (unaff_x19[0xd2] == 0) goto LAB_02491464;
              in_stack_00000138 = fVar48 * fVar54 * fVar55 * in_stack_00000138;
              in_stack_000000d0 = (fVar50 / (float)iVar10) * fVar45 * fVar46 * fVar51 * fVar52;
              in_stack_00000120 = (float)FUN_026fd180(unaff_x19[0xd2] + 0x48,0);
            }
            lVar23 = unaff_x19[0x6c];
            unaff_x19[200] = lVar33;
            if ((lVar23 == 0) || (lVar33 = *(long *)(lVar23 + 0x38), lVar33 == 0))
            goto LAB_02491464;
            if (*(uint *)(lVar33 + 0x18) <= *in_stack_00000148)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            lVar33 = lVar33 + (int)*in_stack_00000148 * unaff_x21;
            *(undefined4 *)(lVar33 + 0x2c) = 1;
            *(float *)(lVar33 + 0x160) = in_stack_000000d0;
            in_stack_00000130._4_4_ = 0.0;
            *(long *)(lVar33 + 0x40) = unaff_x19[0xd2];
            *(long *)(lVar33 + 0x38) = unaff_x19[0x1f];
            *(int *)(lVar33 + 0x58) = (int)unaff_x19[0x23];
            *(int *)(unaff_x19 + 0x23) = (int)lVar41;
            goto LAB_0248b384;
          }
          goto LAB_0248ab98;
        }
        if (iVar10 != 0) goto LAB_0248abc8;
LAB_0248af84:
        if ((*in_stack_00000150 == 0) ||
           (lVar23 = *(long *)(*in_stack_00000150 + 0x38), lVar23 == 0)) goto LAB_02491464;
        uVar26 = *in_stack_00000148;
        uVar11 = *(uint *)(lVar23 + 0x18);
        if (uVar11 <= uVar26)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar41 = *(long *)(lVar23 + (int)uVar26 * unaff_x21 + 0x30);
        unaff_x19[200] = lVar41;
        plVar27 = (long *)System_Threading_Mutex_TypeInfo;
        uVar61 = in_stack_000017bc;
      } while (lVar41 == 0);
      lVar33 = lVar23 + (int)uVar26 * unaff_x21;
      lVar41 = *(long *)(lVar33 + 0x38);
      unaff_x19[0x1f] = lVar41;
      unaff_x19[0x22] = *(long *)(lVar33 + 0x50);
      *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar33 + 0x58);
      if (unaff_w20 == 0) {
LAB_0248b014:
        if (lVar41 == 0) goto LAB_02491464;
        fVar50 = *(float *)(unaff_x19 + 0x3c);
        iVar10 = FUN_026fd110(lVar41 + 0x50,0);
        lVar23 = unaff_x19[0x1f];
      }
      else {
        lVar33 = unaff_x19[0x8e];
        if (lVar33 == 0) goto LAB_02491464;
        if (*(uint *)(lVar33 + 0x18) <= in_stack_00001788)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        if ((*(int *)(lVar33 + (long)(int)in_stack_00001788 * 0xc + 0x20) != 10) ||
           (uVar26 == *(uint *)(unaff_x19 + 0x92))) goto LAB_0248b014;
        if (uVar11 <= uVar26 - 1)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        if (lVar41 == 0) goto LAB_02491464;
        fVar50 = *(float *)(lVar23 + (long)(int)(uVar26 - 1) * (long)iVar40 + 0x60);
        iVar10 = FUN_026fd110(lVar41 + 0x50,0);
        lVar23 = *unaff_x27;
      }
      if (lVar23 == 0) goto LAB_02491464;
      fVar46 = (float)FUN_026fd120(lVar23 + 0x50,0);
      fVar48 = fStack0000000000000084;
      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
        fVar48 = fVar45;
      }
      in_stack_00000120 = 0.0;
      in_stack_00000128 = 0.0;
      if ((unaff_w20 & in_stack_000017bc == 0x2026) == 0) {
        if (*unaff_x27 == 0) goto LAB_02491464;
        in_stack_00000128 = (float)FUN_026fd140(*unaff_x27 + 0x50,0);
        if (*unaff_x27 == 0) goto LAB_02491464;
        in_stack_00000120 = (float)FUN_026fd180(*unaff_x27 + 0x50,0);
      }
      lVar23 = unaff_x19[200];
      if ((lVar23 == 0) || (*(long *)(lVar23 + 0x20) == 0)) goto LAB_02491464;
      fVar45 = *(float *)((long)unaff_x19 + 0x3fc);
      fVar51 = *(float *)(lVar23 + 0x2c);
      in_stack_000000d0 = (float)FUN_026fd668(*(long *)(lVar23 + 0x20),0);
      if (*unaff_x27 == 0) goto LAB_02491464;
      fVar52 = (float)FUN_026fd170(*unaff_x27 + 0x50,0);
      if (*unaff_x27 == 0) goto LAB_02491464;
      fVar54 = *(float *)((long)unaff_x19 + 0x3fc);
      in_stack_00000138 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
      lVar23 = unaff_x19[0x6c];
      if ((lVar23 == 0) || (lVar41 = *(long *)(lVar23 + 0x38), lVar41 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar41 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar41 = lVar41 + (int)*in_stack_00000148 * unaff_x21;
      *(undefined4 *)(lVar41 + 0x2c) = 0;
      fVar48 = ((in_stack_00000100 * fVar50) / (float)iVar10) * fVar46 * fVar48;
      in_stack_000000d0 = fVar48 * fVar45 * fVar51 * in_stack_000000d0;
      *(float *)(lVar41 + 0x160) = in_stack_000000d0;
      uVar11 = *(uint *)(unaff_x19 + 0x23);
      in_stack_00000138 = fVar48 * fVar52 * fVar54 * in_stack_00000138;
      if (uVar11 == 0) {
        in_stack_00000130._4_4_ = *(float *)(unaff_x19 + 0xc2);
      }
      else {
        lVar41 = unaff_x19[0xe0];
        if (lVar41 == 0) goto LAB_02491464;
        if (*(uint *)(lVar41 + 0x18) <= uVar11)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar41 = *(long *)(lVar41 + (long)(int)uVar11 * 8 + 0x20);
        if (lVar41 == 0) goto LAB_02491464;
        in_stack_00000130._4_4_ = *(float *)(lVar41 + 0x4c);
      }
LAB_0248b384:
      unaff_s13 = 0.0;
      if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
        unaff_s13 = in_stack_000000d0;
      }
LAB_0248b39c:
      lVar23 = *(long *)(lVar23 + 0x38);
      if (lVar23 == 0) goto LAB_02491464;
      if (*(uint *)(lVar23 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar23 = lVar23 + (int)*in_stack_00000148 * unaff_x21;
      *(short *)(lVar23 + 0x20) = (short)in_stack_000017bc;
      *(int *)(lVar23 + 0x60) = (int)unaff_x19[0x3c];
      *(undefined4 *)(lVar23 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4e4);
      if ((unaff_x19[0x6c] == 0) || (lVar23 = *(long *)(unaff_x19[0x6c] + 0x38), lVar23 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar23 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      *(int *)(lVar23 + (int)*in_stack_00000148 * unaff_x21 + 0x168) = (int)unaff_x19[0x2a];
      if ((unaff_x19[0x6c] == 0) || (lVar23 = *(long *)(unaff_x19[0x6c] + 0x38), lVar23 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar23 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      *(undefined4 *)(lVar23 + (int)*in_stack_00000148 * unaff_x21 + 0x170) =
           *(undefined4 *)((long)unaff_x19 + 0x154);
      if ((unaff_x19[0x6c] == 0) || (lVar23 = *(long *)(unaff_x19[0x6c] + 0x38), lVar23 == 0))
      goto LAB_02491464;
      uVar11 = *in_stack_00000148;
      FUN_013b78b8(in_stack_000000b8,&stack0x00000880,
                   *(undefined8 *)TMPro_TMP_Dropdown_OptionData_TypeInfo);
      if (*(uint *)(lVar23 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar14 = unaff_x28[1];
      uVar18 = *unaff_x28;
      lVar23 = lVar23 + (int)uVar11 * unaff_x21;
      *(undefined4 *)(lVar23 + 0x18c) = in_stack_00000890;
      *(undefined8 *)(lVar23 + 0x184) = uVar14;
      *(undefined8 *)(lVar23 + 0x17c) = uVar18;
      if ((*in_stack_00000150 == 0) || (lVar23 = *(long *)(*in_stack_00000150 + 0x38), lVar23 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar23 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      *(undefined4 *)(lVar23 + (int)*in_stack_00000148 * unaff_x21 + 400) =
           *(undefined4 *)((long)unaff_x19 + 0x254);
      if ((unaff_x19[200] == 0) || (lVar23 = *(long *)(unaff_x19[200] + 0x20), lVar23 == 0))
      goto LAB_02491464;
      FUN_026fd62c(&stack0x00000bf8,lVar23,0);
      unaff_x28[0x1df] = in_stack_00000c00;
      unaff_x28[0x1de] = CONCAT44(in_stack_00000bfc,in_stack_00000bf8);
      if ((int)in_stack_000017bc < 0x10000) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar11 = FUN_016f68bc(in_stack_000017bc,0);
        unaff_w29 = uVar11 & 1;
      }
      else {
        unaff_w29 = 0;
      }
      fStack00000000000000cc = *(float *)(unaff_x19 + 0x54);
      *(undefined4 *)((long)unaff_x19 + 0x2f4) = 0;
      if (*(char *)((long)unaff_x19 + 0x2f1) == '\0') {
        in_stack_000000b0 = 0.0;
        fVar45 = 0.0;
        fVar50 = 0.0;
      }
      else {
        if (unaff_x19[200] == 0) goto LAB_02491464;
        uVar26 = *in_stack_00000148;
        uVar11 = *(uint *)(unaff_x19[200] + 0x28);
        if ((int)uVar26 < (int)in_stack_00000078._4_4_) {
          if ((*in_stack_00000150 == 0) ||
             (lVar23 = *(long *)(*in_stack_00000150 + 0x38), lVar23 == 0)) goto LAB_02491464;
          if (*(uint *)(lVar23 + 0x18) <= uVar26 + 1)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          lVar23 = *(long *)(lVar23 + (long)(int)(uVar26 + 1) * (long)iVar40 + 0x30);
          if ((((lVar23 == 0) || (*unaff_x27 == 0)) ||
              (lVar41 = *(long *)(*unaff_x27 + 0x128), lVar41 == 0)) ||
             (lVar41 = *(long *)(lVar41 + 0x18), lVar41 == 0)) goto LAB_02491464;
          in_stack_00000880 = uVar11 | *(int *)(lVar23 + 0x28) << 0x10;
          uVar16 = FUN_0129eff4(lVar41,&stack0x00000880,&stack0x000016d8,
                                *(undefined8 *)
                                 Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                               );
          uVar59 = 0;
          if ((uVar16 & 1) == 0) {
            in_stack_000000b0 = 0.0;
            fVar45 = 0.0;
            fVar50 = 0.0;
          }
          else {
            if (in_stack_000016d8 == 0) goto LAB_02491464;
            fVar50 = *(float *)(in_stack_000016d8 + 0x14);
            fVar45 = *(float *)(in_stack_000016d8 + 0x18);
            in_stack_000000b0 = *(float *)(in_stack_000016d8 + 0x1c);
            uVar59 = *(undefined4 *)(in_stack_000016d8 + 0x20);
            if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
              fStack00000000000000cc = 0.0;
            }
          }
          uVar26 = *in_stack_00000148;
        }
        else {
          uVar59 = 0;
          in_stack_000000b0 = 0.0;
          fVar45 = 0.0;
          fVar50 = 0.0;
        }
        if (0 < (int)uVar26) {
          if ((*in_stack_00000150 == 0) ||
             (lVar23 = *(long *)(*in_stack_00000150 + 0x38), lVar23 == 0)) goto LAB_02491464;
          if (*(uint *)(lVar23 + 0x18) <= (uint)((long)(int)uVar26 + -1))
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          lVar23 = *(long *)(lVar23 + ((long)(int)uVar26 + -1) * unaff_x21 + 0x30);
          if (((lVar23 == 0) || (*unaff_x27 == 0)) ||
             ((lVar41 = *(long *)(*unaff_x27 + 0x128), lVar41 == 0 ||
              (lVar41 = *(long *)(lVar41 + 0x18), lVar41 == 0)))) goto LAB_02491464;
          in_stack_00000880 = *(uint *)(lVar23 + 0x28) | uVar11 << 0x10;
          uVar16 = FUN_0129eff4(lVar41,&stack0x00000880,&stack0x000016d8,
                                *(undefined8 *)
                                 Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                               );
          if ((uVar16 & 1) != 0) {
            if ((in_stack_000016d8 == 0) ||
               (fVar50 = (float)FUN_024bb1bc(fVar50,fVar45,in_stack_000000b0,uVar59,
                                             *(undefined4 *)(in_stack_000016d8 + 0x28),
                                             *(undefined4 *)(in_stack_000016d8 + 0x2c),
                                             *(undefined4 *)(in_stack_000016d8 + 0x30),
                                             *(undefined4 *)(in_stack_000016d8 + 0x34),0),
               in_stack_000016d8 == 0)) goto LAB_02491464;
            if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
              fStack00000000000000cc = 0.0;
            }
          }
        }
        *(float *)((long)unaff_x19 + 0x2f4) = in_stack_000000b0;
      }
      if ((char)unaff_x19[0x1d] != '\0') {
        fVar46 = *(float *)(unaff_x19 + 199);
        fVar48 = (float)FUN_026fd474(&stack0x00001770,0);
        fVar46 = fVar46 - unaff_s13 * fVar48 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
        *(float *)(unaff_x19 + 199) = fVar46;
        if ((unaff_w29 != 0) || (in_stack_000017bc == 0x200b)) {
          *(float *)(unaff_x19 + 199) =
               fVar46 - fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
        }
      }
      fVar48 = *(float *)(unaff_x19 + 0x55);
      fStack0000000000000080 = 0.0;
      if (fVar48 != 0.0) {
        fVar46 = (float)FUN_026fd454(&stack0x00001770,0);
        fVar51 = (float)FUN_026fd464(&stack0x00001770,0);
        fStack0000000000000080 =
             (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (fVar48 * 0.5 - unaff_s13 * (fVar46 * 0.5 + fVar51));
        *(float *)(unaff_x19 + 199) = *(float *)(unaff_x19 + 199) + fStack0000000000000080;
      }
      if (((bVar3 == 0) && (*(int *)((long)unaff_x19 + 0x63c) == 0)) &&
         ((*(byte *)((long)unaff_x19 + 0x254) & 1) != 0)) {
        lVar23 = unaff_x19[0x22];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar16 = FUN_02681b9c(lVar23,0,0);
        in_stack_00000110._4_4_ = 0.0;
        if ((uVar16 & 1) != 0) {
          lVar23 = unaff_x19[0x22];
          if (*(int *)(*(long *)
                        Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                      + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          plVar27 = (long *)
                    Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
          ;
          if (lVar23 == 0) goto LAB_02491464;
          uVar16 = FUN_0267e1d8(lVar23,*(undefined4 *)
                                        (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                  + 0xb8) + 0x54),0);
          if ((uVar16 & 1) != 0) {
            lVar23 = unaff_x19[0x22];
            if (*(int *)(*plVar27 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              plVar27 = (long *)
                        Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
              ;
            }
            if (lVar23 == 0) goto LAB_02491464;
            fVar48 = (float)FUN_0267f610(lVar23,*(undefined4 *)(*(long *)(*plVar27 + 0xb8) + 0x54),0
                                        );
            if ((*unaff_x27 == 0) || (unaff_x19[0x22] == 0)) goto LAB_02491464;
            fVar46 = *(float *)(*unaff_x27 + 0x1b0);
            in_stack_00000110._4_4_ =
                 (float)FUN_0267f610(unaff_x19[0x22],
                                     *(undefined4 *)
                                      (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                + 0xb8) + 0xcc),0);
            in_stack_00000110._4_4_ = in_stack_00000110._4_4_ * fVar48 * fVar46 * 0.25;
            if (fVar48 < in_stack_00000130._4_4_ + in_stack_00000110._4_4_) {
              in_stack_00000130._4_4_ = fVar48 - in_stack_00000110._4_4_;
            }
          }
        }
        if (*unaff_x27 == 0) goto LAB_02491464;
        in_stack_000000c0._4_4_ = *(float *)(*unaff_x27 + 0x1b4);
      }
      else {
        lVar23 = unaff_x19[0x22];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar16 = FUN_02681b9c(lVar23,0,0);
        in_stack_000000c0._4_4_ = 0.0;
        if ((uVar16 & 1) != 0) {
          lVar23 = unaff_x19[0x22];
          if (*(int *)(*(long *)
                        Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                      + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          plVar27 = (long *)
                    Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
          ;
          if (lVar23 == 0) goto LAB_02491464;
          uVar16 = FUN_0267e1d8(lVar23,*(undefined4 *)
                                        (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                  + 0xb8) + 0x54),0);
          if ((uVar16 & 1) != 0) {
            lVar23 = unaff_x19[0x22];
            if (*(int *)(*plVar27 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              plVar27 = (long *)
                        Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
              ;
            }
            if (lVar23 == 0) goto LAB_02491464;
            uVar16 = FUN_0267e1d8(lVar23,*(undefined4 *)(*(long *)(*plVar27 + 0xb8) + 0xcc),0);
            if ((uVar16 & 1) != 0) {
              lVar23 = unaff_x19[0x22];
              if (*(int *)(*plVar27 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                plVar27 = (long *)
                          Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                ;
              }
              if (lVar23 != 0) {
                fVar48 = (float)FUN_0267f610(lVar23,*(undefined4 *)
                                                     (*(long *)(*plVar27 + 0xb8) + 0x54),0);
                if ((*unaff_x27 != 0) && (unaff_x19[0x22] != 0)) {
                  fVar46 = *(float *)(*unaff_x27 + 0x1a8);
                  in_stack_00000110._4_4_ =
                       (float)FUN_0267f610(unaff_x19[0x22],
                                           *(undefined4 *)
                                            (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                  + 0xb8) + 0xcc),0);
                  in_stack_00000110._4_4_ = in_stack_00000110._4_4_ * fVar48 * fVar46 * 0.25;
                  if (fVar48 < in_stack_00000130._4_4_ + in_stack_00000110._4_4_) {
                    in_stack_00000130._4_4_ = fVar48 - in_stack_00000110._4_4_;
                  }
                  goto LAB_0248ba68;
                }
              }
              goto LAB_02491464;
            }
          }
        }
        in_stack_00000110._4_4_ = 0.0;
      }
LAB_0248ba68:
      fVar46 = *(float *)(unaff_x19 + 199);
      fVar48 = (float)FUN_026fd464(&stack0x00001770,0);
      unaff_s15 = fVar46 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                           unaff_s13 *
                           (fVar50 + ((fVar48 - in_stack_00000130._4_4_) - in_stack_00000110._4_4_))
      ;
      fVar50 = (float)FUN_026fd46c(&stack0x00001770,0);
      unaff_s14 = *(float *)((long)unaff_x19 + 0x614) +
                  ((in_stack_00000138 + unaff_s13 * (fVar45 + in_stack_00000130._4_4_ + fVar50)) -
                  *(float *)(unaff_x19 + 0x9a));
      fVar50 = (float)FUN_026fd45c(&stack0x00001770,0);
      unaff_s10 = unaff_s14 -
                  unaff_s13 * (in_stack_00000130._4_4_ + in_stack_00000130._4_4_ + fVar50);
      fVar50 = (float)FUN_026fd454(&stack0x00001770,0);
      in_s3 = unaff_s15 +
              (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
              unaff_s13 *
              (in_stack_00000110._4_4_ + in_stack_00000110._4_4_ +
              in_stack_00000130._4_4_ + in_stack_00000130._4_4_ + fVar50);
      unaff_x25 = in_stack_00000150;
      unaff_x26 = in_stack_00000148;
      fVar50 = unaff_s13;
      fStack00000000000000e8 = unaff_s15;
      fVar45 = in_s3;
    } while (*(int *)((long)unaff_x19 + 0x63c) != 0);
  } while( true );
LAB_0248ef74:
  uVar11 = uVar31 - 1;
  if (*(uint *)(lVar23 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*in_stack_00000150 == 0) || (lVar41 = *(long *)(*in_stack_00000150 + 0x50), lVar41 == 0))
  goto LAB_02491464;
  lVar15 = (long)(int)uVar11;
  lVar33 = lVar23 + lVar15 * 0x178;
  uVar30 = *(uint *)(lVar33 + 100);
  if (*(uint *)(lVar41 + 0x18) <= uVar30)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar37 = *(long *)(lVar33 + 0x38);
  uVar32 = (uint)*(ushort *)(lVar33 + 0x20);
  lVar35 = (long)(int)uVar30;
  lVar41 = lVar41 + lVar35 * 0x5c;
  uVar61 = *(uint *)(lVar41 + 0x3c);
  uVar36 = *(uint *)(lVar41 + 0x40);
  lVar33 = (long)(int)uVar36;
  iVar12 = *(int *)(lVar41 + 0x28);
  iVar13 = *(int *)(lVar41 + 0x2c);
  uVar43 = *(uint *)(lVar41 + 0x68);
  fVar56 = *(float *)(lVar41 + 0x5c);
  fVar58 = *(float *)(lVar41 + 0x60);
  iVar2 = *(int *)(lVar41 + 0x20);
  fVar52 = *(float *)(lVar41 + 0x4c);
  fVar55 = *(float *)(lVar41 + 0x54);
  fVar46 = *(float *)(lVar41 + 0x58);
  fVar53 = *(float *)(lVar41 + 0x6c);
  fVar57 = *(float *)(lVar41 + 0x70);
  fVar51 = *(float *)(lVar41 + 0x74);
  fVar54 = *(float *)(lVar41 + 0x78);
  fVar60 = fVar56 + fVar58;
  if ((int)uVar43 < 9) {
    switch(uVar43) {
    case 1:
      if ((char)unaff_x19[0x1d] == '\0') {
        in_stack_000000c0._4_4_ = fVar58 + 0.0;
      }
      else {
        in_stack_000000c0._4_4_ = 0.0 - fVar46;
      }
      break;
    case 2:
LAB_0248f124:
      in_stack_000000c0._4_4_ = (fVar58 + fVar56 * 0.5) - fVar46 * 0.5;
      break;
    default:
      goto switchD_0248f070_caseD_3;
    case 4:
      in_stack_000000c0._4_4_ = fVar60 - fVar46;
      if ((char)unaff_x19[0x1d] != '\0') {
        in_stack_000000c0._4_4_ = fVar60;
      }
      break;
    case 8:
      goto switchD_0248f070_caseD_8;
    }
LAB_0248f194:
    in_stack_000000b8 = 0;
  }
  else if (uVar43 == 0x10) {
switchD_0248f070_caseD_8:
    if (uVar32 < 0xad) {
      if ((uVar32 != 3) && (uVar32 != 10)) goto LAB_0248f0c8;
    }
    else if ((uVar32 != 0xad) && ((uVar32 != 0x200b && (uVar32 != 0x2060)))) {
LAB_0248f0c8:
      if (*(uint *)(lVar23 + 0x18) <= uVar61)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar4 = *(undefined2 *)(lVar23 + (long)(int)uVar61 * 0x178 + 0x20);
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar16 = FUN_016f9f84(uVar4,0);
      if ((uVar16 & 1) == 0) {
        bVar1 = (int)uVar30 < (int)unaff_x19[0x94];
      }
      else {
        bVar1 = false;
      }
      if ((fVar46 <= fVar56) && (!bVar1 && (uVar43 >> 4 & 1) == 0)) {
        in_stack_000000c0._4_4_ = fVar58;
        if ((char)unaff_x19[0x1d] != '\0') {
          in_stack_000000c0._4_4_ = fVar60;
        }
        goto LAB_0248f194;
      }
      if (((uVar31 == 1) || (uVar30 != uVar26)) || (uVar11 == *(uint *)((long)unaff_x19 + 0x31c))) {
        in_stack_000000c0._4_4_ = fVar58;
        if ((char)unaff_x19[0x1d] != '\0') {
          in_stack_000000c0._4_4_ = fVar60;
        }
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        fStack0000000000000024 = (float)FUN_016fa418(uVar32,0);
        in_stack_000000b8 = 0;
      }
      else {
        cVar22 = (char)unaff_x19[0x1d];
        fVar58 = -fVar46;
        if (cVar22 != '\0') {
          fVar58 = fVar46;
        }
        if (*(uint *)(lVar23 + 0x18) <= uVar61)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fVar46 = 1.0;
        iVar13 = (int)*(char *)(lVar23 + (long)(int)uVar61 * 0x178 + 0x194) +
                 (-iVar2 - ((uint)fStack0000000000000024 & 1)) + iVar13 + -1;
        if (0 < iVar13) {
          fVar46 = *(float *)((long)unaff_x19 + 0x2d4);
        }
        if (iVar13 < 1) {
          iVar13 = 1;
        }
        if (uVar32 == 9) {
LAB_02490fe0:
          fVar46 = 1.0 - fVar46;
        }
        else {
          if (uVar32 != 0xa0) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar16 = FUN_016fa418(uVar32,0);
            cVar22 = (char)unaff_x19[0x1d];
            if ((uVar16 & 1) != 0) goto LAB_02490fe0;
          }
          iVar13 = (iVar2 - (~(uint)fStack0000000000000024 & 1)) + iVar12;
        }
        fVar46 = ((fVar56 + fVar58) * fVar46) / (float)iVar13;
        if (cVar22 == '\0') {
          in_stack_000000c0._4_4_ = in_stack_000000c0._4_4_ + fVar46;
          in_stack_000000b8 =
               CONCAT44((float)((ulong)in_stack_000000b8 >> 0x20) + 0.0,
                        (float)in_stack_000000b8 + 0.0);
        }
        else {
          in_stack_000000c0._4_4_ = in_stack_000000c0._4_4_ - fVar46;
        }
      }
    }
  }
  else if (uVar43 == 0x20) {
    fVar46 = fVar53 + fVar51;
    goto LAB_0248f124;
  }
switchD_0248f070_caseD_3:
  uVar43 = (uint)*(undefined8 *)(lVar23 + 0x18);
  if (uVar43 <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar41 = lVar23 + lVar15 * 0x178;
  fVar58 = fStack0000000000000090 + in_stack_000000c0._4_4_;
  fVar46 = SUB84(in_stack_00000088,0) + (float)in_stack_000000b8;
  fVar56 = (float)((ulong)in_stack_00000088 >> 0x20) + (float)((ulong)in_stack_000000b8 >> 0x20);
  plVar44 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(char *)(lVar41 + 0x194) == '\0') goto LAB_0248fabc;
  iVar12 = *(int *)(lVar23 + lVar15 * 0x178 + 0x2c);
  if (iVar12 != 0) goto LAB_0248f808;
  fVar48 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)uVar30,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
  case 0:
    lVar25 = lVar23 + lVar15 * 0x178;
    *(undefined4 *)(lVar25 + 0x84) = 0;
    *(undefined4 *)(lVar25 + 0xac) = 0;
    *(undefined4 *)(lVar25 + 0xd4) = 0x3f800000;
    fVar48 = 1.0;
    break;
  case 1:
    fVar54 = *(float *)(lVar23 + lVar15 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
      lVar25 = lVar23 + lVar15 * 0x178;
      fVar51 = (in_stack_000000c0._4_4_ + fVar54) - *(float *)(in_stack_00000070 + 0x230);
      fVar54 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
      goto LAB_0248f2dc;
    }
    lVar25 = lVar23 + lVar15 * 0x178;
    fVar51 = fVar51 - fVar53;
    *(float *)(lVar25 + 0x84) = fVar48 + (fVar54 - fVar53) / fVar51;
    *(float *)(lVar25 + 0xac) = fVar48 + (*(float *)(lVar25 + 0x98) - fVar53) / fVar51;
    *(float *)(lVar25 + 0xd4) = fVar48 + (*(float *)(lVar25 + 0xc0) - fVar53) / fVar51;
    fVar48 = fVar48 + (*(float *)(lVar25 + 0xe8) - fVar53) / fVar51;
    break;
  case 2:
    lVar25 = lVar23 + lVar15 * 0x178;
    fVar54 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
    fVar51 = (in_stack_000000c0._4_4_ + *(float *)(lVar25 + 0x70)) -
             *(float *)(in_stack_00000070 + 0x230);
LAB_0248f2dc:
    *(float *)(lVar25 + 0x84) = fVar48 + fVar51 / fVar54;
    *(float *)(lVar25 + 0xac) =
         fVar48 + ((in_stack_000000c0._4_4_ + *(float *)(lVar25 + 0x98)) -
                  *(float *)(in_stack_00000070 + 0x230)) /
                  (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
    *(float *)(lVar25 + 0xd4) =
         fVar48 + ((in_stack_000000c0._4_4_ + *(float *)(lVar25 + 0xc0)) -
                  *(float *)(in_stack_00000070 + 0x230)) /
                  (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
    fVar48 = fVar48 + ((in_stack_000000c0._4_4_ + *(float *)(lVar25 + 0xe8)) -
                      *(float *)(in_stack_00000070 + 0x230)) /
                      (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x61]) {
    case 0:
      lVar25 = lVar23 + lVar15 * 0x178;
      *(undefined4 *)(lVar25 + 0x88) = 0;
      *(undefined4 *)(lVar25 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar25 + 0xd8) = 0;
      *(undefined4 *)(lVar25 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar25 = lVar23 + lVar15 * 0x178;
      fVar54 = fVar54 - fVar57;
      fVar51 = fVar48 + (*(float *)(lVar25 + 0x74) - fVar57) / fVar54;
      fVar54 = fVar48 + (*(float *)(lVar25 + 0x9c) - fVar57) / fVar54;
      *(float *)(lVar25 + 0x88) = fVar51;
      *(float *)(lVar25 + 0xb0) = fVar54;
      *(float *)(lVar25 + 0xd8) = fVar51;
      *(float *)(lVar25 + 0x100) = fVar54;
      break;
    case 2:
      lVar25 = lVar23 + lVar15 * 0x178;
      fVar51 = fVar48 + (*(float *)(lVar25 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                        (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
      *(float *)(lVar25 + 0x88) = fVar51;
      fVar54 = *(float *)(unaff_x19 + 0x9b);
      fVar57 = *(float *)(unaff_x19 + 0x9c);
      *(float *)(lVar25 + 0xd8) = fVar51;
      fVar51 = fVar48 + (*(float *)(lVar25 + 0x9c) - fVar54) / (fVar57 - fVar54);
      *(float *)(lVar25 + 0xb0) = fVar51;
      *(float *)(lVar25 + 0x100) = fVar51;
      break;
    case 3:
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
      uVar43 = (uint)*(undefined8 *)(lVar23 + 0x18);
    }
    if (uVar43 <= uVar11)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar25 = lVar23 + lVar15 * 0x178;
    fVar51 = *(float *)(lVar25 + 0x15c);
    fVar54 = (1.0 - (*(float *)(lVar25 + 0x88) + *(float *)(lVar25 + 0xb0)) * fVar51) * 0.5;
    fVar57 = fVar48 + *(float *)(lVar25 + 0x88) * fVar51 + fVar54;
    fVar48 = fVar48 + fVar54 + *(float *)(lVar25 + 0xb0) * fVar51;
    *(float *)(lVar25 + 0x84) = fVar57;
    *(float *)(lVar25 + 0xac) = fVar57;
    *(float *)(lVar25 + 0xd4) = fVar48;
    break;
  default:
    goto switchD_0248f240_default;
  }
  *(float *)(lVar23 + lVar15 * 0x178 + 0xfc) = fVar48;
switchD_0248f240_default:
  switch((int)unaff_x19[0x61]) {
  case 0:
    if (uVar43 <= uVar11)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar25 = lVar23 + lVar15 * 0x178;
    *(undefined4 *)(lVar25 + 0x88) = 0;
    *(undefined4 *)(lVar25 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar25 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar25 + 0x100) = 0;
    break;
  case 1:
    if (uVar11 < uVar43) {
      lVar25 = lVar23 + lVar15 * 0x178;
      fVar52 = fVar52 - fVar55;
      fVar48 = (*(float *)(lVar25 + 0x74) - fVar55) / fVar52;
      fVar52 = (*(float *)(lVar25 + 0x9c) - fVar55) / fVar52;
      *(float *)(lVar25 + 0x88) = fVar48;
      goto LAB_0248f644;
    }
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  case 2:
    if (uVar43 <= uVar11)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar25 = lVar23 + lVar15 * 0x178;
    fVar48 = (*(float *)(lVar25 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
             (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
    *(float *)(lVar25 + 0x88) = fVar48;
    fVar52 = (*(float *)(lVar25 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
             (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
LAB_0248f644:
    *(float *)(lVar25 + 0xb0) = fVar52;
    *(float *)(lVar25 + 0xd8) = fVar52;
    *(float *)(lVar25 + 0x100) = fVar48;
    break;
  case 3:
    if (uVar43 <= uVar11)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar25 = lVar23 + lVar15 * 0x178;
    fVar52 = *(float *)(lVar25 + 0x15c);
    fVar51 = (1.0 - (*(float *)(lVar25 + 0x84) + *(float *)(lVar25 + 0xd4)) / fVar52) * 0.5;
    fVar48 = *(float *)(lVar25 + 0x84) / fVar52 + fVar51;
    fVar51 = fVar51 + *(float *)(lVar25 + 0xd4) / fVar52;
    *(float *)(lVar25 + 0x88) = fVar48;
    *(float *)(lVar25 + 0xb0) = fVar51;
    *(float *)(lVar25 + 0x100) = fVar48;
    *(float *)(lVar25 + 0xd8) = fVar51;
  }
  if (uVar43 <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar25 = lVar23 + lVar15 * 0x178;
  fVar48 = ABS(fVar50) * *(float *)(lVar25 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
  if ((*(char *)(lVar25 + 0x5c) == '\0') && ((*(byte *)(lVar23 + lVar15 * 0x178 + 400) & 1) != 0)) {
    fVar48 = -fVar48;
  }
  lVar25 = lVar23 + lVar15 * 0x178;
  fVar52 = *(float *)(lVar25 + 0x88);
  fVar54 = *(float *)(lVar25 + 0x84);
  fVar51 = -2.1474836e+09;
  if (fVar54 != INFINITY) {
    fVar51 = (float)(int)fVar54;
  }
  fVar57 = *(float *)(lVar25 + 0xd4);
  fVar53 = *(float *)(lVar25 + 0xd8);
  fVar55 = -2.1474836e+09;
  if (fVar52 != INFINITY) {
    fVar55 = (float)(int)fVar52;
  }
  uVar59 = FUN_024e0374(fVar54 - fVar51,fVar52 - fVar55);
  *(undefined4 *)(lVar25 + 0x84) = uVar59;
  if (*(uint *)(lVar23 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  fVar53 = fVar53 - fVar55;
  *(float *)(lVar25 + 0x88) = fVar48;
  uVar59 = FUN_024e0374(fVar54 - fVar51,fVar53);
  *(undefined4 *)(lVar23 + lVar15 * 0x178 + 0xac) = uVar59;
  if (*(uint *)(lVar23 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  fVar57 = fVar57 - fVar51;
  *(float *)(lVar23 + lVar15 * 0x178 + 0xb0) = fVar48;
  fVar51 = (float)FUN_024e0374(fVar57,fVar53);
  *(float *)(lVar25 + 0xd4) = fVar51;
  if (*(uint *)(lVar23 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar25 + 0xd8) = fVar48;
  uVar59 = FUN_024e0374(fVar57,fVar52 - fVar55);
  *(undefined4 *)(lVar23 + lVar15 * 0x178 + 0xfc) = uVar59;
  uVar43 = (uint)*(undefined8 *)(lVar23 + 0x18);
  if (uVar43 <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar23 + lVar15 * 0x178 + 0x100) = fVar48;
LAB_0248f808:
  if (((int)uVar11 < (int)unaff_x19[100]) &&
     (iStack00000000000000a4 < *(int *)((long)unaff_x19 + 0x324))) {
    if (((int)uVar30 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] != 5)) {
      if (uVar43 <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar41 = lVar23 + lVar15 * 0x178;
      *(ulong *)(lVar41 + 0x70) =
           CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar41 + 0x70) >> 0x20),
                    fVar58 + (float)*(undefined8 *)(lVar41 + 0x70));
      *(float *)(lVar41 + 0x78) = fVar56 + *(float *)(lVar41 + 0x78);
      plVar44 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      if (*(uint *)(lVar23 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar41 = lVar23 + lVar15 * 0x178;
      *(ulong *)(lVar41 + 0x98) =
           CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar41 + 0x98) >> 0x20),
                    fVar58 + (float)*(undefined8 *)(lVar41 + 0x98));
      *(float *)(lVar41 + 0xa0) = fVar56 + *(float *)(lVar41 + 0xa0);
      uVar43 = *(uint *)(lVar23 + 0x18);
LAB_0248fa4c:
      if (uVar43 <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar41 = lVar23 + lVar15 * 0x178;
      *(ulong *)(lVar41 + 0xc0) =
           CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar41 + 0xc0) >> 0x20),
                    fVar58 + (float)*(undefined8 *)(lVar41 + 0xc0));
      *(float *)(lVar41 + 200) = fVar56 + *(float *)(lVar41 + 200);
      if (*(uint *)(lVar23 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar41 = lVar23 + lVar15 * 0x178;
      *(ulong *)(lVar41 + 0xe8) =
           CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar41 + 0xe8) >> 0x20),
                    fVar58 + (float)*(undefined8 *)(lVar41 + 0xe8));
      *(float *)(lVar41 + 0xf0) = fVar56 + *(float *)(lVar41 + 0xf0);
      if (iVar12 != 0) goto LAB_0248f9d0;
LAB_0248fa9c:
      pcVar29 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0248faa8:
      (*pcVar29)();
      goto LAB_0248fabc;
    }
    if (((int)uVar30 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] == 5)) {
      if (uVar11 < uVar43) {
        if (*(uint *)(lVar23 + lVar15 * 0x178 + 0x68) != uStack0000000000000030) goto LAB_0248f8d8;
        lVar41 = lVar23 + lVar15 * 0x178;
        *(ulong *)(lVar41 + 0x70) =
             CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar41 + 0x70) >> 0x20),
                      fVar58 + (float)*(undefined8 *)(lVar41 + 0x70));
        *(float *)(lVar41 + 0x78) = fVar56 + *(float *)(lVar41 + 0x78);
        if (uVar11 < *(uint *)(lVar23 + 0x18)) {
          lVar41 = lVar23 + lVar15 * 0x178;
          *(ulong *)(lVar41 + 0x98) =
               CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar41 + 0x98) >> 0x20),
                        fVar58 + (float)*(undefined8 *)(lVar41 + 0x98));
          *(float *)(lVar41 + 0xa0) = fVar56 + *(float *)(lVar41 + 0xa0);
          uVar43 = *(uint *)(lVar23 + 0x18);
          plVar44 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
          goto LAB_0248fa4c;
        }
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    }
  }
LAB_0248f8d8:
  if (uVar43 <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if (DAT_03774d76 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03774d76 = '\x01';
  }
  puVar7 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  lVar25 = lVar23 + lVar15 * 0x178;
  uVar59 = *(undefined4 *)
            (*(undefined8 **)
              (*(long *)
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
              0xb8) + 1);
  *(undefined8 *)(lVar25 + 0x70) =
       **(undefined8 **)
         (*(long *)Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
         0xb8);
  *(undefined4 *)(lVar25 + 0x78) = uVar59;
  plVar44 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(uint *)(lVar23 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar25 = lVar23 + lVar15 * 0x178;
  uVar59 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar25 + 0x98) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar25 + 0xa0) = uVar59;
  if (*(uint *)(lVar23 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar25 = lVar23 + lVar15 * 0x178;
  uVar59 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar25 + 0xc0) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar25 + 200) = uVar59;
  if (*(uint *)(lVar23 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar25 = lVar23 + lVar15 * 0x178;
  uVar59 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar25 + 0xe8) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar25 + 0xf0) = uVar59;
  if (*(uint *)(lVar23 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(undefined1 *)(lVar41 + 0x194) = 0;
  if (iVar12 == 0) goto LAB_0248fa9c;
LAB_0248f9d0:
  if (iVar12 == 1) {
    pcVar29 = *(code **)(*unaff_x19 + 0x8f8);
    goto LAB_0248faa8;
  }
LAB_0248fabc:
  if ((*in_stack_00000150 == 0) || (lVar41 = *(long *)(*in_stack_00000150 + 0x38), lVar41 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar41 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar41 = lVar41 + lVar15 * 0x178;
  uVar18 = *(undefined8 *)(lVar41 + 0x11c);
  *(undefined8 *)(lVar41 + 0x11c) =
       CONCAT44(fVar46 + (float)((ulong)uVar18 >> 0x20),fVar58 + (float)uVar18);
  *(float *)(lVar41 + 0x124) = fVar56 + *(float *)(lVar41 + 0x124);
  if ((*in_stack_00000150 == 0) || (lVar41 = *(long *)(*in_stack_00000150 + 0x38), lVar41 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar41 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar41 = lVar41 + lVar15 * 0x178;
  *(ulong *)(lVar41 + 0x110) =
       CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar41 + 0x110) >> 0x20),
                fVar58 + (float)*(undefined8 *)(lVar41 + 0x110));
  *(float *)(lVar41 + 0x118) = fVar56 + *(float *)(lVar41 + 0x118);
  if ((*in_stack_00000150 == 0) || (lVar41 = *(long *)(*in_stack_00000150 + 0x38), lVar41 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar41 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar41 = lVar41 + lVar15 * 0x178;
  *(ulong *)(lVar41 + 0x128) =
       CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar41 + 0x128) >> 0x20),
                fVar58 + (float)*(undefined8 *)(lVar41 + 0x128));
  *(float *)(lVar41 + 0x130) = fVar56 + *(float *)(lVar41 + 0x130);
  if ((*in_stack_00000150 == 0) || (lVar41 = *(long *)(*in_stack_00000150 + 0x38), lVar41 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar41 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar41 = lVar41 + lVar15 * 0x178;
  *(float *)(lVar41 + 0x134) = fVar58 + *(float *)(lVar41 + 0x134);
  *(ulong *)(lVar41 + 0x138) =
       CONCAT44(fVar56 + (float)((ulong)*(undefined8 *)(lVar41 + 0x138) >> 0x20),
                fVar46 + (float)*(undefined8 *)(lVar41 + 0x138));
  lVar41 = *in_stack_00000150;
  if ((lVar41 == 0) || (lVar25 = *(long *)(lVar41 + 0x38), lVar25 == 0)) goto LAB_02491464;
  uVar43 = *(uint *)(lVar25 + 0x18);
  if (uVar43 <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar38 = lVar25 + lVar15 * 0x178;
  *(ulong *)(lVar38 + 0x140) =
       CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar38 + 0x140) >> 0x20),
                fVar58 + (float)*(undefined8 *)(lVar38 + 0x140));
  *(ulong *)(lVar38 + 0x148) =
       CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar38 + 0x148) >> 0x20),
                fVar46 + (float)*(undefined8 *)(lVar38 + 0x148));
  *(float *)(lVar38 + 0x150) = fVar46 + *(float *)(lVar38 + 0x150);
  if (uVar30 == uVar26) {
    uVar26 = *in_stack_00000148 - 1;
    if (uVar11 == uVar26) goto LAB_0248fccc;
  }
  else {
    lVar41 = *(long *)(lVar41 + 0x50);
    if (lVar41 == 0) goto LAB_02491464;
    if (*(uint *)(lVar41 + 0x18) <= uVar26)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar38 = (long)(int)uVar26;
    lVar39 = lVar41 + lVar38 * 0x5c;
    fVar51 = fVar46 + *(float *)(lVar39 + 0x54);
    *(ulong *)(lVar39 + 0x4c) =
         CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar39 + 0x4c) >> 0x20),
                  fVar46 + (float)*(undefined8 *)(lVar39 + 0x4c));
    *(float *)(lVar39 + 0x54) = fVar51;
    *(float *)(lVar39 + 0x58) = fVar58 + *(float *)(lVar39 + 0x58);
    if (uVar43 <= *(uint *)(lVar39 + 0x34))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    uVar59 = *(undefined4 *)(lVar25 + (long)(int)*(uint *)(lVar39 + 0x34) * 0x178 + 0x11c);
    lVar41 = lVar41 + lVar38 * 0x5c;
    *(float *)(lVar41 + 0x70) = fVar51;
    *(undefined4 *)(lVar41 + 0x6c) = uVar59;
    lVar41 = *in_stack_00000150;
    if ((lVar41 == 0) || (lVar25 = *(long *)(lVar41 + 0x50), lVar25 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar25 + 0x18) <= uVar26)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar41 = *(long *)(lVar41 + 0x38);
    if (lVar41 == 0) goto LAB_02491464;
    uVar26 = *(uint *)(lVar25 + lVar38 * 0x5c + 0x40);
    if (*(uint *)(lVar41 + 0x18) <= uVar26)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar25 = lVar25 + lVar38 * 0x5c;
    *(undefined4 *)(lVar25 + 0x74) = *(undefined4 *)(lVar41 + (long)(int)uVar26 * 0x178 + 0x128);
    *(undefined4 *)(lVar25 + 0x78) = *(undefined4 *)(lVar25 + 0x4c);
    uVar26 = *in_stack_00000148 - 1;
LAB_0248fccc:
    if (uVar11 == uVar26) {
      lVar41 = *in_stack_00000150;
      if ((lVar41 == 0) || (lVar25 = *(long *)(lVar41 + 0x50), lVar25 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar25 + 0x18) <= uVar30)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar38 = lVar25 + lVar35 * 0x5c;
      fVar51 = fVar46 + *(float *)(lVar38 + 0x54);
      *(ulong *)(lVar38 + 0x4c) =
           CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar38 + 0x4c) >> 0x20),
                    fVar46 + (float)*(undefined8 *)(lVar38 + 0x4c));
      *(float *)(lVar38 + 0x54) = fVar51;
      *(float *)(lVar38 + 0x58) = fVar58 + *(float *)(lVar38 + 0x58);
      lVar41 = *(long *)(lVar41 + 0x38);
      if (lVar41 == 0) goto LAB_02491464;
      if (*(uint *)(lVar41 + 0x18) <= *(uint *)(lVar38 + 0x34))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar59 = *(undefined4 *)(lVar41 + (long)(int)*(uint *)(lVar38 + 0x34) * 0x178 + 0x11c);
      lVar25 = lVar25 + lVar35 * 0x5c;
      *(float *)(lVar25 + 0x70) = fVar51;
      *(undefined4 *)(lVar25 + 0x6c) = uVar59;
      lVar41 = *in_stack_00000150;
      if ((lVar41 == 0) || (lVar25 = *(long *)(lVar41 + 0x50), lVar25 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar25 + 0x18) <= uVar30)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar41 = *(long *)(lVar41 + 0x38);
      if (lVar41 == 0) goto LAB_02491464;
      uVar26 = *(uint *)(lVar25 + lVar35 * 0x5c + 0x40);
      if (*(uint *)(lVar41 + 0x18) <= uVar26)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar25 = lVar25 + lVar35 * 0x5c;
      *(undefined4 *)(lVar25 + 0x74) = *(undefined4 *)(lVar41 + (long)(int)uVar26 * 0x178 + 0x128);
      *(undefined4 *)(lVar25 + 0x78) = *(undefined4 *)(lVar25 + 0x4c);
    }
  }
  if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar16 = FUN_016f9468(uVar32,0);
  if (((((uVar16 & 1) == 0) && (1 < uVar32 - 0x2010)) && (uVar32 != 0xad)) && (uVar32 != 0x2d)) {
    if (bVar8) {
      if (((uVar31 != 1) && ((int)uVar11 < (int)(*(uint *)(lVar23 + 0x18) - 1))) &&
         (((int)uVar11 < (int)*in_stack_00000148 && ((uVar32 == 0x2019 || (uVar32 == 0x27)))))) {
        if (*(uint *)(lVar23 + 0x18) <= uVar31 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        uVar4 = *(undefined2 *)(lVar23 + _in_stack_00000128 + -0x438);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar16 = FUN_016f9468(uVar4,0);
        if ((uVar16 & 1) != 0) {
          if (*(uint *)(lVar23 + 0x18) <= uVar31)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          uVar4 = *(undefined2 *)(lVar23 + _in_stack_00000128 + -0x148);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar16 = FUN_016f9468(uVar4,0);
          if ((uVar16 & 1) != 0) goto LAB_0248fee0;
        }
      }
    }
    else {
      if (uVar31 != 1) {
LAB_024909a0:
        bVar8 = false;
        goto LAB_0248fee8;
      }
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar16 = FUN_016f93a0(uVar32,0);
      if ((uVar16 & 1) != 0) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar16 = FUN_016f68bc(uVar32,0);
        if (((uVar32 != 0x200b) && ((uVar16 & 1) == 0)) && (*in_stack_00000148 != 1))
        goto LAB_024909a0;
      }
    }
    if (uVar11 == *in_stack_00000148 - 1) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar16 = FUN_016f9468(uVar32,0);
      iVar12 = iVar10;
      if ((uVar16 & 1) == 0) goto LAB_02490204;
    }
    else {
LAB_02490204:
      iVar12 = uVar31 - 2;
    }
    lVar41 = *in_stack_00000150;
    if (lVar41 == 0) goto LAB_02491464;
    lVar25 = *(long *)(lVar41 + 0x40);
    if (lVar25 == 0) goto LAB_02491464;
    uVar26 = *(uint *)(lVar41 + 0x24);
    iVar13 = *(int *)(lVar25 + 0x18);
    if (iVar13 < (int)(uVar26 + 1)) {
      if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01147b84((long *)(lVar41 + 0x40),iVar13 + 1,
                   *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
      lVar41 = *in_stack_00000150;
      if (lVar41 == 0) goto LAB_02491464;
    }
    lVar25 = *(long *)(lVar41 + 0x40);
    if (lVar25 == 0) goto LAB_02491464;
    if (*(uint *)(lVar25 + 0x18) <= uVar26)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar25 = lVar25 + (long)(int)uVar26 * 0x18;
    *(long **)(lVar25 + 0x20) = unaff_x19;
    *(float *)(lVar25 + 0x28) = in_stack_00000110._4_4_;
    *(int *)(lVar25 + 0x2c) = iVar12;
    *(int *)(lVar25 + 0x30) = (iVar12 - (int)in_stack_00000110._4_4_) + 1;
    lVar25 = *(long *)(lVar41 + 0x50);
    *(int *)(lVar41 + 0x24) = *(int *)(lVar41 + 0x24) + 1;
    if (lVar25 == 0) goto LAB_02491464;
    if (*(uint *)(lVar25 + 0x18) <= uVar30)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar25 = lVar25 + lVar35 * 0x5c;
    bVar8 = false;
    iStack00000000000000a4 = iStack00000000000000a4 + 1;
    *(int *)(lVar25 + 0x30) = *(int *)(lVar25 + 0x30) + 1;
  }
  else {
    if (!bVar8) {
      in_stack_00000110._4_4_ = (float)uVar11;
    }
    if (uVar11 == *in_stack_00000148 - 1) {
      lVar41 = *in_stack_00000150;
      if (lVar41 == 0) goto LAB_02491464;
      lVar25 = *(long *)(lVar41 + 0x40);
      if (lVar25 == 0) goto LAB_02491464;
      uVar26 = *(uint *)(lVar41 + 0x24);
      iVar12 = *(int *)(lVar25 + 0x18);
      if (iVar12 < (int)(uVar26 + 1)) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147b84((long *)(lVar41 + 0x40),iVar12 + 1,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
        lVar41 = *in_stack_00000150;
        if (lVar41 == 0) goto LAB_02491464;
      }
      lVar25 = *(long *)(lVar41 + 0x40);
      if (lVar25 == 0) goto LAB_02491464;
      if (*(uint *)(lVar25 + 0x18) <= uVar26)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar25 = lVar25 + (long)(int)uVar26 * 0x18;
      *(long **)(lVar25 + 0x20) = unaff_x19;
      *(float *)(lVar25 + 0x28) = in_stack_00000110._4_4_;
      *(uint *)(lVar25 + 0x2c) = uVar11;
      *(uint *)(lVar25 + 0x30) = uVar31 - (int)in_stack_00000110._4_4_;
      lVar25 = *(long *)(lVar41 + 0x50);
      *(int *)(lVar41 + 0x24) = *(int *)(lVar41 + 0x24) + 1;
      if (lVar25 == 0) goto LAB_02491464;
      if (*(uint *)(lVar25 + 0x18) <= uVar30)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar25 = lVar25 + lVar35 * 0x5c;
      iStack00000000000000a4 = iStack00000000000000a4 + 1;
      *(int *)(lVar25 + 0x30) = *(int *)(lVar25 + 0x30) + 1;
    }
LAB_0248fee0:
    bVar8 = true;
  }
LAB_0248fee8:
  if ((*in_stack_00000150 == 0) || (lVar41 = *(long *)(*in_stack_00000150 + 0x38), lVar41 == 0))
  goto LAB_02491464;
  uVar26 = *(uint *)(lVar41 + 0x18);
  if (uVar26 <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*(byte *)(lVar41 + lVar15 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar9) {
LAB_0248ff18:
      if (uVar26 <= uVar31 - 2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar35 = *unaff_x19;
      uVar59 = *(undefined4 *)(lVar41 + _in_stack_00000128 + -0x330);
      uVar49 = *(undefined4 *)(lVar41 + _in_stack_00000128 + -0x2f8);
LAB_02490474:
      pcVar29 = *(code **)(lVar35 + 0x908);
LAB_0249047c:
      (*pcVar29)(fStack0000000000000054,fStack000000000000004c,fStack0000000000000050,uVar59,
                 fStack00000000000000cc,0,fStack0000000000000058,uVar49);
      puVar7 = System_Threading_Mutex_TypeInfo;
      lVar41 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar41 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar41 = *(long *)puVar7;
      }
LAB_024904cc:
      bVar9 = false;
      fVar45 = 0.0;
      fStack00000000000000cc = *(float *)(*(long *)(lVar41 + 0xb8) + 0x15a8);
      fStack00000000000000c8 = 0.0;
    }
    else {
LAB_024903d8:
      bVar9 = false;
    }
  }
  else {
    lVar41 = lVar41 + lVar15 * 0x178;
    iVar12 = *(int *)(lVar41 + 0x68);
    *(int *)(lVar41 + 0x16c) = iVar40;
    if ((((int)unaff_x19[100] < (int)uVar11) || ((int)unaff_x19[0x65] < (int)uVar30)) ||
       (((int)unaff_x19[0x5b] == 5 && (iVar12 + 1 != (int)unaff_x19[0x66])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar16 = FUN_016f68bc(uVar32,0);
    if ((uVar32 != 0x200b) && ((uVar16 & 1) == 0)) {
      lVar41 = *in_stack_00000150;
      if ((lVar41 == 0) || (lVar35 = *(long *)(lVar41 + 0x38), lVar35 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar35 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      fVar51 = *(float *)(lVar35 + lVar15 * 0x178 + 0x160);
      if (fVar45 <= fVar51) {
        fVar45 = fVar51;
      }
      if (fStack00000000000000c8 <= ABS(fVar48)) {
        fStack00000000000000c8 = ABS(fVar48);
      }
      if ((float)iVar12 != fStack0000000000000048) {
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar41 = *in_stack_00000150;
          if (lVar41 == 0) goto LAB_02491464;
          lVar35 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
        }
        else {
          lVar35 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
        }
        fStack00000000000000cc = *(float *)(lVar35 + 0x15a8);
      }
      lVar41 = *(long *)(lVar41 + 0x38);
      if (lVar41 == 0) goto LAB_02491464;
      if (*(uint *)(lVar41 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (unaff_x19[0x1e] == 0) goto LAB_02491464;
      fVar52 = *(float *)(lVar41 + lVar15 * 0x178 + 0x14c);
      fVar51 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
      fVar52 = fVar52 + fVar45 * fVar51;
      fStack0000000000000048 = (float)iVar12;
      if (fVar52 <= fStack00000000000000cc) {
        fStack00000000000000cc = fVar52;
      }
    }
    if (!bVar9) {
      bVar9 = false;
      if ((((uVar32 == 0xd) || ((uVar32 | 1) == 0xb)) || ((int)uVar36 < (int)uVar11)) || (!bVar1))
      goto LAB_024904e8;
      if (uVar11 == uVar36) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar16 = FUN_016fa418(uVar32,0);
        if ((uVar16 & 1) != 0) goto LAB_024903d8;
      }
      if ((*in_stack_00000150 == 0) || (lVar41 = *(long *)(*in_stack_00000150 + 0x38), lVar41 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar41 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar41 = lVar41 + lVar15 * 0x178;
      fStack0000000000000058 = *(float *)(lVar41 + 0x160);
      fStack0000000000000054 = *(float *)(lVar41 + 0x11c);
      bVar9 = fVar45 != 0.0;
      fVar51 = fStack0000000000000058;
      if (bVar9) {
        fVar51 = fVar45;
      }
      fVar45 = fVar51;
      _bStack000000000000005c = *(uint *)(lVar41 + 0x168);
      fStack0000000000000050 = 0.0;
      fVar51 = fVar48;
      if (bVar9) {
        fVar51 = fStack00000000000000c8;
      }
      fStack000000000000004c = fStack00000000000000cc;
      fStack00000000000000c8 = fVar51;
    }
    if (*in_stack_00000148 == 1) {
      if ((*in_stack_00000150 != 0) && (lVar41 = *(long *)(*in_stack_00000150 + 0x38), lVar41 != 0))
      {
        if (uVar11 < *(uint *)(lVar41 + 0x18)) {
          lVar41 = lVar41 + lVar15 * 0x178;
          lVar35 = *unaff_x19;
          uVar59 = *(undefined4 *)(lVar41 + 0x128);
          uVar49 = *(undefined4 *)(lVar41 + 0x160);
          goto LAB_02490474;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
    if ((uVar11 == uVar61) || ((int)uVar36 <= (int)uVar11)) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar16 = FUN_016f68bc(uVar32,0);
      if ((*in_stack_00000150 != 0) && (lVar41 = *(long *)(*in_stack_00000150 + 0x38), lVar41 != 0))
      {
        if (uVar32 == 0x200b || (uVar16 & 1) != 0) {
          lVar35 = lVar33;
          if (*(uint *)(lVar41 + 0x18) <= uVar36)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        else {
          lVar35 = lVar15;
          if (*(uint *)(lVar41 + 0x18) <= uVar11)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        lVar41 = lVar41 + lVar35 * 0x178;
        uVar59 = *(undefined4 *)(lVar41 + 0x128);
        uVar49 = *(undefined4 *)(lVar41 + 0x160);
        pcVar29 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_0249047c;
      }
      goto LAB_02491464;
    }
    if (!bVar1) {
      if ((*in_stack_00000150 != 0) && (lVar41 = *(long *)(*in_stack_00000150 + 0x38), lVar41 != 0))
      {
        uVar26 = *(uint *)(lVar41 + 0x18);
        goto LAB_0248ff18;
      }
      goto LAB_02491464;
    }
    if ((int)uVar11 < (int)(*in_stack_00000148 - 1)) {
      if ((*in_stack_00000150 == 0) || (lVar41 = *(long *)(*in_stack_00000150 + 0x38), lVar41 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar41 + 0x18) <= uVar31)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar16 = FUN_024a9e4c(_bStack000000000000005c,*(undefined4 *)(lVar41 + _in_stack_00000128),0);
      if ((uVar16 & 1) == 0) {
        if ((*in_stack_00000150 != 0) &&
           (lVar41 = *(long *)(*in_stack_00000150 + 0x38), lVar41 != 0)) {
          if (uVar11 < *(uint *)(lVar41 + 0x18)) {
            lVar41 = lVar41 + lVar15 * 0x178;
            (**(code **)(*unaff_x19 + 0x908))
                      (fStack0000000000000054,fStack000000000000004c,fStack0000000000000050,
                       *(undefined4 *)(lVar41 + 0x128),fStack00000000000000cc,0,
                       fStack0000000000000058,*(undefined4 *)(lVar41 + 0x160));
            puVar7 = System_Threading_Mutex_TypeInfo;
            lVar41 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar41 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar41 = *(long *)puVar7;
            }
            goto LAB_024904cc;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        goto LAB_02491464;
      }
    }
    bVar9 = true;
  }
LAB_024904e8:
  if ((*in_stack_00000150 == 0) || (lVar41 = *(long *)(*in_stack_00000150 + 0x38), lVar41 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar41 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if (lVar37 == 0) goto LAB_02491464;
  uVar26 = *(uint *)(lVar41 + lVar15 * 0x178 + 400);
  fVar51 = (float)FUN_026fd1f0(lVar37 + 0x50,0);
  if ((uVar26 >> 6 & 1) == 0) {
    if (bVar5) {
      if ((*in_stack_00000150 == 0) || (lVar41 = *(long *)(*in_stack_00000150 + 0x38), lVar41 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar41 + 0x18) <= uVar31 - 2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar59 = *(undefined4 *)(lVar41 + _in_stack_00000128 + -0x330);
      pcVar29 = *(code **)(*unaff_x19 + 0x908);
      fVar46 = fStack0000000000000084 * fVar51 + *(float *)(lVar41 + _in_stack_00000128 + -0x30c);
LAB_02490a68:
      (*pcVar29)(in_stack_00000078._4_4_,in_stack_00000068._4_4_,uStack0000000000000060,uVar59,
                 fVar46,0,fStack0000000000000084,fStack0000000000000084);
    }
LAB_02490a9c:
    bVar5 = false;
  }
  else {
    lVar41 = *in_stack_00000150;
    if ((lVar41 == 0) || (lVar35 = *(long *)(lVar41 + 0x38), lVar35 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar35 + 0x18) <= uVar11)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(int *)(lVar35 + lVar15 * 0x178 + 0x174) = iVar40;
    if ((((int)unaff_x19[100] < (int)uVar11) || ((int)unaff_x19[0x65] < (int)uVar30)) ||
       (((int)unaff_x19[0x5b] == 5 &&
        (*(int *)(lVar35 + lVar15 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar32 == 0xd) || ((uVar32 | 1) == 0xb)) || ((int)uVar36 < (int)uVar11)) ||
       (bVar5 || !bVar1)) {
LAB_02490668:
      if (!bVar5) goto LAB_02490a9c;
    }
    else {
      if (uVar11 == uVar36) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar16 = FUN_016fa418(uVar32,0);
        if ((uVar16 & 1) != 0) goto LAB_02490668;
        lVar41 = *in_stack_00000150;
        if (lVar41 == 0) goto LAB_02491464;
      }
      lVar41 = *(long *)(lVar41 + 0x38);
      if (lVar41 == 0) goto LAB_02491464;
      if (*(uint *)(lVar41 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar41 = lVar41 + lVar15 * 0x178;
      fStack0000000000000038 = *(float *)(lVar41 + 0x60);
      fStack0000000000000084 = *(float *)(lVar41 + 0x160);
      fStack0000000000000034 = *(float *)(lVar41 + 0x14c);
      in_stack_00000078._4_4_ = *(float *)(lVar41 + 0x11c);
      in_stack_00000068._4_4_ = fVar51 * fStack0000000000000084 + fStack0000000000000034;
      uStack0000000000000060 = 0;
    }
    uVar26 = *in_stack_00000148;
    if (uVar26 == 1) {
      if (*in_stack_00000150 != 0) {
        lVar41 = *(long *)(*in_stack_00000150 + 0x38);
joined_r0x024907c8:
        if (lVar41 != 0) {
          if (uVar11 < *(uint *)(lVar41 + 0x18)) {
            lVar41 = lVar41 + lVar15 * 0x178;
            lVar33 = *unaff_x19;
            uVar59 = *(undefined4 *)(lVar41 + 0x128);
            fVar46 = *(float *)(lVar41 + 0x14c);
LAB_024907e8:
            pcVar29 = *(code **)(lVar33 + 0x908);
LAB_02490a64:
            fVar46 = fVar51 * fStack0000000000000084 + fVar46;
            goto LAB_02490a68;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
      }
      goto LAB_02491464;
    }
    if (uVar11 == uVar61) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar16 = FUN_016f68bc(uVar32,0);
      if ((*in_stack_00000150 != 0) && (lVar41 = *(long *)(*in_stack_00000150 + 0x38), lVar41 != 0))
      {
        uVar26 = *(uint *)(lVar41 + 0x18);
        if (uVar32 == 0x200b || (uVar16 & 1) != 0) {
          if (uVar26 <= uVar36)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        else {
LAB_02490a40:
          lVar33 = lVar15;
          if (uVar26 <= uVar11)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
LAB_02490a48:
        lVar41 = lVar41 + lVar33 * 0x178;
        fVar46 = *(float *)(lVar41 + 0x14c);
        uVar59 = *(undefined4 *)(lVar41 + 0x128);
        pcVar29 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_02490a64;
      }
      goto LAB_02491464;
    }
    if ((int)uVar11 < (int)uVar26) {
      lVar41 = *in_stack_00000150;
      if ((lVar41 != 0) && (lVar35 = *(long *)(lVar41 + 0x38), lVar35 != 0)) {
        if (uVar31 < *(uint *)(lVar35 + 0x18)) {
          if (*(float *)(lVar35 + _in_stack_00000128 + -0x108) == fStack0000000000000038) {
            fVar52 = *(float *)(lVar35 + _in_stack_00000128 + -0x1c);
            if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar16 = FUN_024aa280(fVar46 + fVar52,fStack0000000000000034,0);
            if ((uVar16 & 1) != 0) {
              uVar26 = *in_stack_00000148;
              goto LAB_024908ec;
            }
            lVar41 = *in_stack_00000150;
            if (lVar41 == 0) goto LAB_02491464;
          }
          lVar41 = *(long *)(lVar41 + 0x38);
          if (lVar41 != 0) {
            uVar26 = *(uint *)(lVar41 + 0x18);
            if ((int)uVar11 <= (int)uVar36) goto LAB_02490a40;
            if (uVar36 < uVar26) goto LAB_02490a48;
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          }
          goto LAB_02491464;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
LAB_024908ec:
    if ((int)uVar11 < (int)uVar26) {
      iVar12 = FUN_02681c0c(lVar37,0);
      if (*(uint *)(lVar23 + 0x18) <= uVar31)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar41 = *(long *)(lVar23 + _in_stack_00000128 + -0x130);
      if (lVar41 == 0) goto LAB_02491464;
      iVar13 = FUN_02681c0c(lVar41,0);
      if (iVar12 != iVar13) {
        if (*in_stack_00000150 != 0) {
          lVar41 = *(long *)(*in_stack_00000150 + 0x38);
          goto joined_r0x024907c8;
        }
        goto LAB_02491464;
      }
    }
    if (!bVar1) {
      if ((*in_stack_00000150 != 0) && (lVar41 = *(long *)(*in_stack_00000150 + 0x38), lVar41 != 0))
      {
        if (uVar31 - 2 < *(uint *)(lVar41 + 0x18)) {
          lVar33 = *unaff_x19;
          uVar59 = *(undefined4 *)(lVar41 + _in_stack_00000128 + -0x330);
          fVar46 = *(float *)(lVar41 + _in_stack_00000128 + -0x30c);
          goto LAB_024907e8;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
    bVar5 = true;
  }
  if ((*in_stack_00000150 == 0) || (lVar41 = *(long *)(*in_stack_00000150 + 0x38), lVar41 == 0))
  goto LAB_02491464;
  uVar26 = (uint)*(undefined8 *)(lVar41 + 0x18);
  if (uVar26 <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*(byte *)(lVar41 + lVar15 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar6) {
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,
                 fStack0000000000000098,in_stack_000000a0,uStack0000000000000094);
    }
LAB_02490b04:
    bVar6 = false;
  }
  else {
    if ((((int)unaff_x19[100] < (int)uVar11) || ((int)unaff_x19[0x65] < (int)uVar30)) ||
       (((int)unaff_x19[0x5b] == 5 &&
        (*(int *)(lVar41 + lVar15 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar6) {
      if ((((uVar32 == 0xd) || ((uVar32 | 1) == 0xb)) || ((int)uVar36 < (int)uVar11)) || (!bVar1))
      goto LAB_02490b04;
      if (uVar11 == uVar36) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar16 = FUN_016fa418(uVar32,0);
        if ((uVar16 & 1) != 0) goto LAB_02490b04;
      }
      puVar7 = System_Threading_Mutex_TypeInfo;
      lVar33 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar33 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar33 = *(long *)puVar7;
      }
      if ((*in_stack_00000150 == 0) || (lVar41 = *(long *)(*in_stack_00000150 + 0x38), lVar41 == 0))
      goto LAB_02491464;
      uVar26 = (uint)*(undefined8 *)(lVar41 + 0x18);
      if (uVar26 <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar33 = *(long *)(lVar33 + 0xb8);
      lVar35 = lVar41 + lVar15 * 0x178;
      in_stack_00001798 = *(undefined8 *)(lVar35 + 0x184);
      in_stack_00001790 = *(undefined8 *)(lVar35 + 0x17c);
      fStack00000000000000a8 = *(float *)(lVar33 + 0x1598);
      in_stack_000017a0 = *(float *)(lVar35 + 0x18c);
      fStack00000000000000ac = *(float *)(lVar33 + 0x159c);
      fStack0000000000000098 = *(float *)(lVar33 + 0x15a0);
      in_stack_000000a0 = *(float *)(lVar33 + 0x15a4);
      uStack0000000000000094 = 0;
    }
    if (uVar26 <= uVar11)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar41 = lVar41 + lVar15 * 0x178;
    fVar51 = *(float *)(lVar41 + 0x128);
    fVar55 = *(float *)(lVar41 + 0x188);
    uVar14 = *(undefined8 *)(lVar41 + 0x17c);
    fVar53 = *(float *)(lVar41 + 0x184);
    uVar18 = *(undefined8 *)(lVar41 + 0x184);
    fVar57 = *(float *)(lVar41 + 0x18c);
    fVar46 = *(float *)(lVar41 + 0x11c);
    fVar52 = *(float *)(lVar41 + 0x148);
    fVar54 = *(float *)(lVar41 + 0x150);
    in_stack_00000158 = uVar14;
    fStack0000000000000160 = fVar53;
    fStack0000000000000164 = fVar55;
    in_stack_00000168 = fVar57;
    in_stack_00000170 = in_stack_00001790;
    in_stack_00000178 = in_stack_00001798;
    in_stack_00000180 = in_stack_000017a0;
    uVar16 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
    lVar41 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
    if ((uVar16 & 1) == 0) {
      if (*(int *)(lVar41 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar41);
      }
      fVar51 = fVar51 + (float)in_stack_00001798;
      fVar46 = fVar46 - (float)((ulong)in_stack_00001790 >> 0x20);
      fVar52 = fVar52 + (float)((ulong)in_stack_00001798 >> 0x20);
      if (fVar46 <= fStack00000000000000a8) {
        fStack00000000000000a8 = fVar46;
      }
      if (fVar54 - in_stack_000017a0 <= fStack00000000000000ac) {
        fStack00000000000000ac = fVar54 - in_stack_000017a0;
      }
      if (fStack0000000000000098 <= fVar51) {
        fStack0000000000000098 = fVar51;
      }
      if (in_stack_000000a0 <= fVar52) {
        in_stack_000000a0 = fVar52;
      }
    }
    else {
      if (*(int *)(lVar41 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar41);
      }
      fVar46 = (fVar46 + (fStack0000000000000098 - (float)in_stack_00001798)) * 0.5;
      if (fVar54 <= fStack00000000000000ac) {
        fStack00000000000000ac = fVar54;
      }
      if (in_stack_000000a0 <= fVar52) {
        in_stack_000000a0 = fVar52;
      }
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,fVar46,
                 in_stack_000000a0,uStack0000000000000094);
      fStack00000000000000ac = fVar54 - fVar57;
      fStack0000000000000098 = fVar51 + fVar53;
      uStack0000000000000094 = 0;
      in_stack_000000a0 = fVar52 + fVar55;
      fStack00000000000000a8 = fVar46;
      in_stack_00001790 = uVar14;
      in_stack_00001798 = uVar18;
      in_stack_000017a0 = fVar57;
    }
    if (((*in_stack_00000148 == 1) || (uVar11 == uVar61)) ||
       (((int)uVar36 <= (int)uVar11 || (!bVar1)))) {
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,
                 fStack0000000000000098,in_stack_000000a0,uStack0000000000000094);
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
  }
  uVar11 = *in_stack_00000148;
  iVar10 = iVar10 + 1;
  _in_stack_00000128 = _in_stack_00000128 + 0x178;
  bVar1 = (int)uVar11 <= (int)uVar31;
  uVar26 = uVar30;
  uVar31 = uVar31 + 1;
  if (bVar1) goto LAB_02491038;
  goto LAB_0248ef74;
LAB_02491038:
  lVar23 = *in_stack_00000150;
  if (lVar23 != 0) {
    iVar40 = uVar30 + 1;
    plVar27 = (long *)PTR_DAT_033ed410;
LAB_02491068:
    *(uint *)(lVar23 + 0x18) = uVar11;
    lVar41 = unaff_x19[0xd3];
    *(int *)(lVar23 + 0x2c) = iVar40;
    iVar40 = iStack00000000000000a4;
    if ((int)uVar11 < 1) {
      iVar40 = 1;
    }
    if (iStack00000000000000a4 == 0) {
      iVar40 = 1;
    }
    *(int *)(lVar23 + 0x1c) = (int)lVar41;
    *(int *)(lVar23 + 0x24) = iVar40;
    *(int *)(lVar23 + 0x30) = (int)unaff_x19[0x95] + 1;
    if (((int)unaff_x19[0x62] != 0xff) ||
       (uVar16 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar16 & 1) == 0)) {
LAB_02491468:
      lVar23 = *(long *)Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__;
LAB_02491474:
      if (*(int *)(lVar23 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_024a942c();
      return;
    }
    lVar23 = unaff_x19[0xda];
    if (lVar23 != 0) {
      (**(code **)(lVar23 + 0x18))
                (*(undefined8 *)(lVar23 + 0x40),*in_stack_00000150,*(undefined8 *)(lVar23 + 0x28));
    }
    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
      if ((*in_stack_00000150 == 0) || (lVar23 = *(long *)(*in_stack_00000150 + 0x60), lVar23 == 0))
      goto LAB_02491464;
      if (*(int *)(*plVar27 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(int *)(lVar23 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      FUN_024e8000(lVar23 + 0x20,1,0);
    }
    if (unaff_x19[0x73] != 0) {
      UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
                (unaff_x19[0x73],0);
      if ((unaff_x19[0x6c] != 0) && (lVar23 = *(long *)(unaff_x19[0x6c] + 0x60), lVar23 != 0)) {
        if (*(int *)(lVar23 + 0x18) == 0) {
UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (unaff_x19[0x73] != 0) {
          FUN_0266b9c4(unaff_x19[0x73],*(undefined8 *)(lVar23 + 0x30),0);
          if ((unaff_x19[0x6c] != 0) && (lVar23 = *(long *)(unaff_x19[0x6c] + 0x60), lVar23 != 0)) {
            if (*(int *)(lVar23 + 0x18) == 0)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            if (unaff_x19[0x73] != 0) {
              FUN_0266bbc8(unaff_x19[0x73],*(undefined8 *)(lVar23 + 0x48),0);
              if ((unaff_x19[0x6c] != 0) &&
                 (lVar23 = *(long *)(unaff_x19[0x6c] + 0x60), lVar23 != 0)) {
                if (*(int *)(lVar23 + 0x18) == 0)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                if (unaff_x19[0x73] != 0) {
                  FUN_0266bc74(unaff_x19[0x73],*(undefined8 *)(lVar23 + 0x50),0);
                  if ((unaff_x19[0x6c] != 0) &&
                     (lVar23 = *(long *)(unaff_x19[0x6c] + 0x60), lVar23 != 0)) {
                    if (*(int *)(lVar23 + 0x18) == 0)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    if (unaff_x19[0x73] != 0) {
                      FUN_0266c1dc(unaff_x19[0x73],*(undefined8 *)(lVar23 + 0x58),0);
                      if (unaff_x19[0x73] != 0) {
                        FUN_0266ed90(unaff_x19[0x73],0);
                        lVar23 = *in_stack_00000150;
                        if (lVar23 != 0) {
                          lVar33 = 0;
                          lVar41 = 0;
                          do {
                            uVar16 = lVar41 + 1;
                            if ((long)*(int *)(lVar23 + 0x34) <= (long)uVar16) goto LAB_02491468;
                            lVar23 = *(long *)(lVar23 + 0x60);
                            if (lVar23 == 0) break;
                            if (*(int *)(*plVar27 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            if (*(uint *)(lVar23 + 0x18) <= uVar16)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            FUN_024e7ecc(lVar23 + lVar33 + 0x70,0);
                            lVar23 = unaff_x19[0xe0];
                            if (lVar23 == 0) break;
                            if (*(uint *)(lVar23 + 0x18) <= uVar16)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            uVar18 = *(undefined8 *)(lVar23 + lVar41 * 8 + 0x28);
                            if (*(int *)(*plVar44 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar17 = FUN_0268b4e0(uVar18,0,0);
                            if ((uVar17 & 1) == 0) {
                              if (*(int *)((long)unaff_x19 + 0x314) != 0) {
                                if ((*in_stack_00000150 == 0) ||
                                   (lVar23 = *(long *)(*in_stack_00000150 + 0x60), lVar23 == 0))
                                break;
                                if (*(int *)(*plVar27 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                if (*(uint *)(lVar23 + 0x18) <= uVar16)
                                goto 
                                UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                                ;
                                FUN_024e8000(lVar23 + lVar33 + 0x70,1,0);
                              }
                              lVar23 = unaff_x19[0xe0];
                              if (lVar23 == 0) break;
                              if (*(uint *)(lVar23 + 0x18) <= uVar16)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar23 = *(long *)(lVar23 + lVar41 * 8 + 0x28);
                              if (lVar23 == 0) break;
                              lVar23 = FUN_024eefa0(lVar23,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar15 = *(long *)(*in_stack_00000150 + 0x60), lVar15 == 0))
                              break;
                              if (*(uint *)(lVar15 + 0x18) <= uVar16)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar23 == 0) break;
                              FUN_0266b9c4(lVar23,*(undefined8 *)(lVar15 + lVar33 + 0x80),0);
                              lVar23 = unaff_x19[0xe0];
                              if (lVar23 == 0) break;
                              if (*(uint *)(lVar23 + 0x18) <= uVar16)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar23 = *(long *)(lVar23 + lVar41 * 8 + 0x28);
                              if (lVar23 == 0) break;
                              lVar23 = FUN_024eefa0(lVar23,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar15 = *(long *)(*in_stack_00000150 + 0x60), lVar15 == 0))
                              break;
                              if (*(uint *)(lVar15 + 0x18) <= uVar16)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar23 == 0) break;
                              FUN_0266bbc8(lVar23,*(undefined8 *)(lVar15 + lVar33 + 0x98),0);
                              lVar23 = unaff_x19[0xe0];
                              if (lVar23 == 0) break;
                              if (*(uint *)(lVar23 + 0x18) <= uVar16)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar23 = *(long *)(lVar23 + lVar41 * 8 + 0x28);
                              if (lVar23 == 0) break;
                              lVar23 = FUN_024eefa0(lVar23,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar15 = *(long *)(*in_stack_00000150 + 0x60), lVar15 == 0))
                              break;
                              if (*(uint *)(lVar15 + 0x18) <= uVar16)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar23 == 0) break;
                              FUN_0266bc74(lVar23,*(undefined8 *)(lVar15 + lVar33 + 0xa0),0);
                              lVar23 = unaff_x19[0xe0];
                              if (lVar23 == 0) break;
                              if (*(uint *)(lVar23 + 0x18) <= uVar16)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar23 = *(long *)(lVar23 + lVar41 * 8 + 0x28);
                              if (lVar23 == 0) break;
                              lVar23 = FUN_024eefa0(lVar23,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar15 = *(long *)(*in_stack_00000150 + 0x60), lVar15 == 0))
                              break;
                              if (*(uint *)(lVar15 + 0x18) <= uVar16)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar23 == 0) break;
                              FUN_0266c1dc(lVar23,*(undefined8 *)(lVar15 + lVar33 + 0xa8),0);
                              lVar23 = unaff_x19[0xe0];
                              if (lVar23 == 0) break;
                              if (*(uint *)(lVar23 + 0x18) <= uVar16)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar23 = *(long *)(lVar23 + lVar41 * 8 + 0x28);
                              if ((lVar23 == 0) || (lVar23 = FUN_024eefa0(lVar23,0), lVar23 == 0))
                              break;
                              FUN_0266ed90(lVar23,0);
                            }
                            lVar23 = *in_stack_00000150;
                            lVar41 = lVar41 + 1;
                            lVar33 = lVar33 + 0x50;
                          } while (lVar23 != 0);
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
LAB_02491464:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


