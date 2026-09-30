/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider$$set_rightControllerTransform
ENTRY_POINT: 0248bc40
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

void UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_DynamicMoveProvider__set_rightControllerTransform
               (undefined1 param_1 [16],float param_2,undefined1 param_3 [16],float param_4)

{
  bool bVar1;
  int iVar2;
  undefined2 uVar3;
  double __x;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  int *piVar16;
  ulong uVar17;
  undefined1 uVar18;
  char cVar19;
  long lVar20;
  undefined4 *puVar21;
  long lVar22;
  uint uVar23;
  long *plVar24;
  float *pfVar25;
  code *pcVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  long lVar30;
  float *pfVar31;
  long lVar32;
  uint uVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long *unaff_x19;
  uint unaff_w20;
  int iVar37;
  long unaff_x21;
  long lVar38;
  long *unaff_x25;
  long *plVar39;
  uint *unaff_x26;
  uint uVar40;
  long *unaff_x27;
  long *plVar41;
  undefined8 *unaff_x28;
  uint unaff_w29;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  double dVar46;
  float fVar47;
  float fVar48;
  undefined4 uVar49;
  float fVar50;
  float unaff_s8;
  float unaff_s9;
  float fVar51;
  float fVar52;
  float unaff_s10;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined4 uVar56;
  float unaff_s14;
  float fVar57;
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
  float in_stack_000000e0;
  float fStack00000000000000e4;
  float fStack00000000000000e8;
  float fStack00000000000000ec;
  float in_stack_00000100;
  undefined8 in_stack_00000110;
  float fStack0000000000000118;
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
  uint uVar58;
  uint in_stack_000017bc;
  
code_r0x0248bc40:
  fVar44 = 0.0;
  fVar47 = 0.0;
  fVar48 = unaff_s10;
  fStack00000000000000e8 = unaff_s9;
  fStack00000000000000ec = unaff_s15;
  fStack00000000000000e4 = param_2;
  fVar51 = unaff_s14;
  do {
    if (*unaff_x25 == 0) goto LAB_02491464;
    lVar20 = *(long *)(*unaff_x25 + 0x38);
    uVar13 = _fStack0000000000000118 & 0xffffffff;
    if (lVar20 == 0) goto LAB_02491464;
    if (*(uint *)(lVar20 + 0x18) <= *unaff_x26)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar20 = lVar20 + (int)*unaff_x26 * unaff_x21;
    *(float *)(lVar20 + 0x120) = fVar48;
    *(float *)(lVar20 + 0x11c) = fStack00000000000000ec;
    *(float *)(lVar20 + 0x124) = in_stack_000000e0;
    if ((*unaff_x25 == 0) || (lVar20 = *(long *)(*unaff_x25 + 0x38), lVar20 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar20 + 0x18) <= *unaff_x26)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar20 = lVar20 + (int)*unaff_x26 * unaff_x21;
    *(float *)(lVar20 + 0x114) = fVar51;
    *(float *)(lVar20 + 0x110) = fStack00000000000000e8;
    *(float *)(lVar20 + 0x118) = fStack00000000000000e4;
    if ((*unaff_x25 == 0) || (lVar20 = *(long *)(*unaff_x25 + 0x38), lVar20 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar20 + 0x18) <= *unaff_x26)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar20 = lVar20 + (int)*unaff_x26 * unaff_x21;
    *(float *)(lVar20 + 0x128) = unaff_s8;
    *(float *)(lVar20 + 300) = unaff_s14;
    *(float *)(lVar20 + 0x130) = fVar47;
    if ((*unaff_x25 == 0) || (lVar20 = *(long *)(*unaff_x25 + 0x38), lVar20 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar20 + 0x18) <= *unaff_x26)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar20 = lVar20 + (int)*unaff_x26 * unaff_x21;
    *(float *)(lVar20 + 0x134) = param_4;
    *(float *)(lVar20 + 0x138) = unaff_s10;
    *(float *)(lVar20 + 0x13c) = fVar44;
    if ((*unaff_x25 == 0) || (lVar20 = *(long *)(*unaff_x25 + 0x38), lVar20 == 0))
    goto LAB_02491464;
    uVar9 = *unaff_x26;
    lVar38 = (long)(int)uVar9;
    if (*(uint *)(lVar20 + 0x18) <= uVar9)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar30 = lVar20 + lVar38 * unaff_x21;
    *(int *)(lVar30 + 0x140) = (int)unaff_x19[199];
    fVar47 = *(float *)(unaff_x19 + 0x9a);
    uVar14 = (ulong)(uint)fVar47;
    fVar44 = *(float *)((long)unaff_x19 + 0x614);
    *(float *)(lVar30 + 0x15c) = (unaff_s8 - fStack00000000000000ec) / (fVar51 - fVar48);
    *(float *)(lVar30 + 0x14c) = (in_stack_00000138 - fVar47) + fVar44;
    in_stack_00000128 = in_stack_00000128 * fStack0000000000000118;
    if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
      in_stack_00000128 = in_stack_00000128 / in_stack_00000100;
      in_stack_00000120 = (in_stack_00000120 * fStack0000000000000118) / in_stack_00000100;
    }
    else {
      in_stack_00000120 = in_stack_00000120 * fStack0000000000000118;
    }
    uVar23 = *(uint *)(unaff_x19 + 0x92);
    bVar6 = unaff_w29 != 0;
    in_stack_00000128 = fVar44 + in_stack_00000128;
    bVar7 = uVar9 != uVar23;
    if (bVar7 && bVar6) {
      fVar51 = *(float *)(unaff_x19 + 0x98);
      lVar20 = lVar20 + lVar38 * unaff_x21;
      *(float *)(lVar20 + 0x154) = fVar51;
      in_stack_00000120 = *(float *)((long)unaff_x19 + 0x4c4);
      *(float *)(lVar20 + 0x148) = fVar51 - fVar47;
      *(float *)(lVar20 + 0x158) = in_stack_00000120;
      *(float *)(unaff_x19 + 0x97) = fVar51 - fVar47;
      in_stack_00000120 = in_stack_00000120 - fVar47;
      *(float *)(lVar20 + 0x150) = in_stack_00000120;
    }
    else {
      in_stack_00000120 = fVar44 + in_stack_00000120;
      fVar48 = in_stack_00000128;
      fVar45 = in_stack_00000120;
      if (fVar44 != 0.0) {
        fVar48 = (in_stack_00000128 - fVar44) / *(float *)((long)unaff_x19 + 0x3fc);
        fVar45 = (in_stack_00000120 - fVar44) / *(float *)((long)unaff_x19 + 0x3fc);
        if (fVar48 <= in_stack_00000128) {
          fVar48 = in_stack_00000128;
        }
        if (in_stack_00000120 <= fVar45) {
          fVar45 = in_stack_00000120;
        }
      }
      lVar20 = lVar20 + lVar38 * unaff_x21;
      fVar51 = fVar48;
      if (fVar48 <= *(float *)(unaff_x19 + 0x98)) {
        fVar51 = *(float *)(unaff_x19 + 0x98);
      }
      fVar44 = fVar45;
      if (*(float *)((long)unaff_x19 + 0x4c4) <= fVar45) {
        fVar44 = *(float *)((long)unaff_x19 + 0x4c4);
      }
      *(float *)((long)unaff_x19 + 0x4c4) = fVar44;
      in_stack_00000120 = in_stack_00000120 - fVar47;
      *(float *)(unaff_x19 + 0x98) = fVar51;
      *(float *)(lVar20 + 0x154) = fVar48;
      *(float *)(lVar20 + 0x158) = fVar45;
      *(float *)(lVar20 + 0x148) = in_stack_00000128 - fVar47;
      *(float *)(unaff_x19 + 0x97) = in_stack_00000128 - fVar47;
      *(float *)(lVar20 + 0x150) = in_stack_00000120;
    }
    *(float *)((long)unaff_x19 + 0x4bc) = in_stack_00000120;
    if (((int)unaff_x19[0x94] == 0) || (*(char *)((long)unaff_x19 + 0x334) != '\0')) {
      if (!bVar7 || !bVar6) {
        *(float *)(unaff_x19 + 0x96) = fVar51;
        if (unaff_x19[0x1f] != 0) {
          fVar51 = *(float *)((long)unaff_x19 + 0x4b4);
          fVar48 = (float)FUN_026fd150(unaff_x19[0x1f] + 0x50,0);
          in_stack_00000100 = (fStack0000000000000118 * fVar48) / in_stack_00000100;
          uVar14 = (ulong)*(uint *)(unaff_x19 + 0x9a);
          if (fVar51 <= in_stack_00000100) {
            fVar51 = in_stack_00000100;
          }
          *(float *)((long)unaff_x19 + 0x4b4) = fVar51;
          goto LAB_0248bef4;
        }
        goto LAB_02491464;
      }
    }
    else {
LAB_0248bef4:
      if ((!bVar7 || !bVar6) && (float)uVar14 == 0.0) {
        fVar51 = *(float *)(in_stack_00000070 + 0x208);
        if (*(float *)(in_stack_00000070 + 0x208) <= in_stack_00000128) {
          fVar51 = in_stack_00000128;
        }
        *(float *)(in_stack_00000070 + 0x208) = fVar51;
      }
    }
    lVar20 = *unaff_x25;
    if ((lVar20 == 0) || (lVar38 = *(long *)(lVar20 + 0x38), lVar38 == 0)) goto LAB_02491464;
    uVar28 = *unaff_x26;
    if (*(uint *)(lVar38 + 0x18) <= uVar28)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar38 = lVar38 + (int)uVar28 * unaff_x21;
    *(undefined1 *)(lVar38 + 0x194) = 0;
    uVar27 = *(uint *)(unaff_x19 + 0x4e);
    iVar37 = (int)unaff_x21;
    uVar58 = in_stack_000017bc;
    if ((in_stack_000017bc == 9) ||
       (((((unaff_w29 == 0 && (in_stack_000017bc != 3)) && (in_stack_000017bc != 0x200b)) &&
         (in_stack_000017bc != 0xad)) ||
        (((in_stack_000017bc == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) != 0 ||
         (*(int *)((long)unaff_x19 + 0x63c) == 1)))))) {
      *(undefined1 *)(lVar38 + 0x194) = 1;
      pfVar25 = in_stack_00000088;
      pfVar31 = _fStack0000000000000098;
      if (unaff_w20 != 0) {
        lVar20 = *(long *)(lVar20 + 0x50);
        if (lVar20 == 0) goto LAB_02491464;
        if (*(uint *)(lVar20 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar20 = lVar20 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
        pfVar31 = (float *)(lVar20 + 0x60);
        pfVar25 = (float *)(lVar20 + 100);
      }
      fVar48 = *pfVar31;
      fVar44 = *pfVar25;
      fVar51 = *(float *)(unaff_x19 + 0x6b);
      fVar47 = *(float *)(unaff_x19 + 199);
      in_stack_000000d8._4_4_ = (fStack0000000000000090 - fVar48) - fVar44;
      bVar6 = true;
      if ((fVar51 <= in_stack_000000d8._4_4_) && (bVar6 = false, !NAN(fVar51))) {
        bVar6 = fVar51 == -1.0;
      }
      if (!bVar6) {
        in_stack_000000d8._4_4_ = fVar51;
      }
      fVar51 = 0.0;
      if ((char)unaff_x19[0x1d] == '\0') {
        fVar51 = (float)FUN_026fd474(&stack0x00001770,0);
        uVar14 = (ulong)*(uint *)(unaff_x19 + 0x9a);
      }
      fVar43 = *(float *)((long)unaff_x19 + 0x4c4);
      fVar45 = *(float *)((long)unaff_x19 + 0x2cc);
      fVar42 = (float)uVar14;
      if (in_stack_000017bc != 0xad) {
        in_stack_000000d0 = fStack0000000000000118;
      }
      fVar54 = 0.0;
      if ((0.0 < fVar42) && (fVar54 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
        fVar54 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
      }
      fVar54 = (*(float *)(unaff_x19 + 0x96) - (fVar43 - fVar42)) + fVar54;
      uVar28 = *in_stack_00000148;
      if (fVar54 <= in_stack_000000a0) {
switchD_0248c274_caseD_2:
        plVar24 = (long *)System_Threading_Mutex_TypeInfo;
        fVar42 = 1.0 - fVar45;
        uVar14 = (ulong)(uint)fVar42;
        fVar47 = ABS(fVar47) + fVar51 * fVar42 * in_stack_000000d0;
        fVar51 = _DAT_0294c6e8;
        if ((uVar27 & 0x18) == 0) {
          fVar51 = 1.0;
        }
        if (fVar47 <= fVar51 * in_stack_000000d8._4_4_) {
LAB_0248cf18:
          if (in_stack_000017bc == 0xad) {
            if ((*in_stack_00000150 != 0) &&
               (lVar20 = *(long *)(*in_stack_00000150 + 0x38), lVar20 != 0)) {
              if (*in_stack_00000148 < *(uint *)(lVar20 + 0x18)) {
                *(undefined1 *)(lVar20 + (int)*in_stack_00000148 * unaff_x21 + 0x194) = 0;
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
            uVar28 = *in_stack_00000148;
            if (((uint)fStack0000000000000058 & 1) != 0) {
              *(uint *)(in_stack_00000070 + 0x1f0) = uVar28;
            }
            *(uint *)((long)unaff_x19 + 0x49c) = uVar28;
            *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
            if ((unaff_x19[0x6c] != 0) && (lVar20 = *(long *)(unaff_x19[0x6c] + 0x50), lVar20 != 0))
            {
              if (*(uint *)(unaff_x19 + 0x94) < *(uint *)(lVar20 + 0x18)) {
                lVar20 = lVar20 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                fStack0000000000000058 = 0.0;
                *(float *)(lVar20 + 0x60) = fVar48;
                *(float *)(lVar20 + 100) = fVar44;
                goto FUN_0248d088;
              }
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            }
            goto LAB_02491464;
          }
          lVar20 = *in_stack_00000150;
          if ((lVar20 == 0) || (lVar38 = *(long *)(lVar20 + 0x38), lVar38 == 0)) goto LAB_02491464;
          uVar28 = *in_stack_00000148;
          if (uVar28 < *(uint *)(lVar38 + 0x18)) {
            *(undefined1 *)(lVar38 + (int)uVar28 * unaff_x21 + 0x194) = 0;
            *(uint *)((long)unaff_x19 + 0x49c) = uVar28;
            lVar38 = *(long *)(lVar20 + 0x50);
            if (lVar38 != 0) {
              if (*(uint *)(unaff_x19 + 0x94) < *(uint *)(lVar38 + 0x18)) {
                lVar38 = lVar38 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                *(int *)(lVar38 + 0x2c) = *(int *)(lVar38 + 0x2c) + 1;
                goto LAB_0248cf8c;
              }
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            }
            goto LAB_02491464;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        if (((char)unaff_x19[0x5a] == '\0') || (uVar28 == *(uint *)(unaff_x19 + 0x92))) {
          if (((char)unaff_x19[0x46] != '\0') &&
             (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
            fVar43 = *(float *)(unaff_x19 + 0x59) / 100.0;
            if (fVar45 < fVar43) {
              fVar48 = fVar47 / fVar42;
              if (fVar45 <= 0.0) {
                fVar48 = fVar47;
              }
              fVar45 = fVar45 + (fVar47 - fVar51 * (in_stack_000000d8._4_4_ + DAT_02958218)) /
                                fVar48;
              goto LAB_0249154c;
            }
            fVar42 = *(float *)((long)unaff_x19 + 0x1dc);
            uVar14 = (ulong)(uint)fVar42;
            fVar45 = *(float *)(unaff_x19 + 0x49);
            if (fVar42 <= fVar45) goto LAB_0248c3dc;
LAB_024914c0:
            fVar51 = (fVar42 - *(float *)(unaff_x19 + 0x47)) * 0.5;
            if (fVar51 <= DAT_028aa298) {
              fVar51 = DAT_028aa298;
            }
            *(float *)((long)unaff_x19 + 0x234) = fVar42;
            fVar48 = (fVar42 - fVar51) * 20.0 + 0.5;
            fVar51 = DAT_02958220;
            if (fVar48 != INFINITY) {
              fVar51 = (float)(int)fVar48 / 20.0;
            }
            if (fVar51 <= fVar45) {
              fVar51 = fVar45;
            }
LAB_0248e598:
            *(float *)((long)unaff_x19 + 0x1dc) = fVar51;
            return;
          }
LAB_0248c3dc:
          iVar8 = (int)unaff_x19[0x5b];
          if (iVar8 == 1) {
            lVar20 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar20 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar20 = *plVar24;
            }
            plVar41 = (long *)StringLiteral_302;
            lVar38 = *(long *)(lVar20 + 0xb8);
            lVar20 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
            if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
              lVar20 = FUN_00d5941c(lVar20);
            }
            lVar20 = *(long *)(*(long *)(lVar20 + 0xc0) + 8);
            if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
              lVar20 = FUN_00d5941c();
            }
            piVar16 = (int *)thunk_FUN_00d32ed4(lVar38 + 0x11f0,*(long *)(lVar20 + 0x80) + 0xa0);
            if (*piVar16 == 0) goto LAB_0248e4bc;
            lVar20 = *plVar24;
            if (*(int *)(lVar20 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar20 = *plVar24;
            }
            FUN_013b8de4(*(long *)(lVar20 + 0xb8) + 0x11f0,&stack0x00000880,
                         *(undefined8 *)
                          Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                        );
            memcpy(&stack0x00000c70,&stack0x00000880,0x378);
            goto LAB_0248c8f4;
          }
          if (iVar8 != 6) {
            if (iVar8 == 3) {
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
          plVar41 = (long *)StringLiteral_302;
          in_stack_00001788 = FUN_024d66ec();
          lVar20 = unaff_x19[0x5c];
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              );
          }
          uVar13 = FUN_02681b9c(lVar20,0,0);
          if ((uVar13 & 1) != 0) {
            plVar39 = (long *)unaff_x19[0x5c];
            uVar15 = (**(code **)(*unaff_x19 + 0x548))();
            if (plVar39 == (long *)0x0) goto LAB_02491464;
            (**(code **)(*plVar39 + 0x558))(plVar39,uVar15,*(undefined8 *)(*plVar39 + 0x560));
            lVar20 = unaff_x19[0x5c];
            if (lVar20 == 0) goto LAB_02491464;
            *(int *)(lVar20 + 0x3f8) = (int)unaff_x19[0x7f];
            FUN_024c910c(lVar20,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
            plVar39 = (long *)unaff_x19[0x5c];
            if (plVar39 == (long *)0x0) goto LAB_02491464;
            (**(code **)(*plVar39 + 0x7d8))(plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7e0));
            *(undefined1 *)(unaff_x19 + 0x5e) = 1;
          }
LAB_0248ca1c:
          uVar13 = uVar14;
          in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
        }
        else {
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          in_stack_00001788 = FUN_024d66ec();
          if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
            lVar20 = *in_stack_00000150;
            if ((lVar20 == 0) || (lVar38 = *(long *)(lVar20 + 0x38), lVar38 == 0))
            goto LAB_02491464;
            if (*(uint *)(lVar38 + 0x18) <= *in_stack_00000148)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            fVar45 = *(float *)(unaff_x19 + 0x9a);
            fVar42 = 0.0;
            if ((0.0 < fVar45) && (fVar42 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
              fVar42 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
            }
            fVar42 = fStack00000000000000c8 * *(float *)(unaff_x19 + 0x56) +
                     *(float *)(lVar38 + (int)*in_stack_00000148 * unaff_x21 + 0x154) +
                     (fVar42 - *(float *)((long)unaff_x19 + 0x4c4)) +
                     fStack0000000000000054 *
                     (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4));
          }
          else {
            lVar20 = unaff_x19[0x6c];
            *(undefined1 *)((long)unaff_x19 + 700) = 1;
            if (lVar20 == 0) goto LAB_02491464;
            fVar45 = *(float *)(unaff_x19 + 0x9a);
            fVar42 = *(float *)(unaff_x19 + 0x57) +
                     fStack00000000000000c8 * *(float *)(unaff_x19 + 0x56);
          }
          puVar4 = System_Threading_Mutex_TypeInfo;
          lVar20 = *(long *)(lVar20 + 0x38);
          if (lVar20 == 0) goto LAB_02491464;
          uVar33 = *(uint *)((long)unaff_x19 + 0x48c);
          if ((*(uint *)(lVar20 + 0x18) <= uVar33) ||
             (uVar40 = uVar33 - 1, *(uint *)(lVar20 + 0x18) <= uVar40))
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          uVar14 = (ulong)(uint)(fVar42 + *(float *)(unaff_x19 + 0x96));
          fVar54 = (fVar42 + *(float *)(unaff_x19 + 0x96) + fVar45) -
                   *(float *)(lVar20 + (int)uVar33 * unaff_x21 + 0x158);
          if (((in_stack_00000068._4_1_ & 1) != 0 ||
               *(short *)(lVar20 + (long)(int)uVar40 * (long)iVar37 + 0x20) != 0xad) ||
             ((in_stack_000000a0 <= fVar54 && ((int)unaff_x19[0x5b] != 0)))) {
            if (*(short *)(lVar20 + (int)uVar33 * unaff_x21 + 0x20) == 0xad) {
              in_stack_00000068._4_1_ = 1;
              plVar24 = (long *)System_Threading_Mutex_TypeInfo;
              plVar41 = (long *)StringLiteral_302;
              uVar13 = uVar14;
            }
            else {
              if ((bStack000000000000005c & *(byte *)(unaff_x19 + 0x46) & 1) != 0) {
                fVar45 = *(float *)((long)unaff_x19 + 0x2cc);
                fVar43 = *(float *)(unaff_x19 + 0x59) / 100.0;
                if ((fVar43 <= fVar45) ||
                   ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c))) {
                  fVar42 = *(float *)((long)unaff_x19 + 0x1dc);
                  uVar14 = (ulong)(uint)fVar42;
                  fVar45 = *(float *)(unaff_x19 + 0x49);
                  if ((fVar45 < fVar42) &&
                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) goto LAB_024914c0;
                  goto LAB_0248cc70;
                }
LAB_0249155c:
                fVar48 = fVar47;
                if (0.0 < fVar45) {
                  fVar48 = fVar47 / (1.0 - fVar45);
                }
                fVar45 = fVar45 + (fVar47 - fVar51 * (in_stack_000000d8._4_4_ + DAT_02958218)) /
                                  fVar48;
LAB_0249154c:
                if (fVar43 <= fVar45) {
                  fVar45 = fVar43;
                }
                *(float *)((long)unaff_x19 + 0x2cc) = fVar45;
                return;
              }
LAB_0248cc70:
              lVar20 = *(long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(lVar20 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar20 = *(long *)puVar4;
              }
              iVar8 = *(int *)(*(long *)(lVar20 + 0xb8) + 0xe78);
              if ((((float)iVar8 != fStack0000000000000034) && (iVar8 != -1)) &&
                 (((bStack000000000000005c ^ 1) & 1) == 0)) {
                if (*(int *)(lVar20 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                in_stack_00001788 = FUN_024d66ec();
                if ((unaff_x19[0x6c] == 0) ||
                   (lVar20 = *(long *)(unaff_x19[0x6c] + 0x38), lVar20 == 0)) goto LAB_02491464;
                uVar33 = *in_stack_00000148 - 1;
                if (*(uint *)(lVar20 + 0x18) <= uVar33)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                fStack0000000000000034 = (float)iVar8;
                if (*(short *)(lVar20 + (long)(int)uVar33 * (long)iVar37 + 0x20) == 0xad) {
                  in_stack_00000068._4_1_ = 0;
                  in_stack_000017a8 = CONCAT44(0x2d,uVar33);
                  *in_stack_00000148 = uVar33;
                  plVar24 = (long *)System_Threading_Mutex_TypeInfo;
                  plVar41 = (long *)StringLiteral_302;
                  uVar13 = uVar14;
                  in_stack_00001788 = in_stack_00001788 - 1;
                  goto LAB_0248ab98;
                }
              }
              if (in_stack_000000a0 < fVar54) {
                if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
                  *(undefined4 *)((long)unaff_x19 + 0x2dc) =
                       *(undefined4 *)((long)unaff_x19 + 0x48c);
                }
                plVar41 = (long *)StringLiteral_302;
                plVar24 = (long *)System_Threading_Mutex_TypeInfo;
                if ((char)unaff_x19[0x46] != '\0') {
                  fVar45 = *(float *)(unaff_x19 + 0x58);
                  if ((fVar45 < *(float *)((long)unaff_x19 + 0x2b4)) &&
                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                    fVar51 = *(float *)((long)unaff_x19 + 0x2b4) +
                             ((in_stack_00000018._4_4_ - fVar54) / (float)((int)unaff_x19[0x94] + 1)
                             ) / fStack0000000000000054;
                    if (fVar51 <= fVar45) {
                      fVar51 = fVar45;
                    }
LAB_0248ea5c:
                    *(float *)((long)unaff_x19 + 0x2b4) = fVar51;
                    return;
                  }
                  fVar45 = *(float *)((long)unaff_x19 + 0x2cc);
                  fVar43 = *(float *)(unaff_x19 + 0x59) / 100.0;
                  if ((fVar45 < fVar43) &&
                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) goto LAB_0249155c;
                  fVar42 = *(float *)((long)unaff_x19 + 0x1dc);
                  uVar14 = (ulong)(uint)fVar42;
                  fVar45 = *(float *)(unaff_x19 + 0x49);
                  if ((fVar45 < fVar42) &&
                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) goto LAB_024914c0;
                }
                switch((int)unaff_x19[0x5b]) {
                case 0:
                case 2:
                case 4:
                  FUN_024d7014(fStack0000000000000054,uVar13,fStack00000000000000c8,
                               *(undefined4 *)((long)unaff_x19 + 0x2f4),in_stack_000000c0._4_4_,
                               fStack00000000000000cc,in_stack_000000d8._4_4_,fStack0000000000000048
                              );
                  break;
                case 1:
                  lVar20 = *(long *)System_Threading_Mutex_TypeInfo;
                  if (*(int *)(lVar20 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar20 = *plVar24;
                  }
                  lVar38 = *(long *)(lVar20 + 0xb8);
                  lVar20 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
                  if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
                    lVar20 = FUN_00d5941c(lVar20);
                  }
                  lVar20 = *(long *)(*(long *)(lVar20 + 0xc0) + 8);
                  if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
                    lVar20 = FUN_00d5941c();
                  }
                  piVar16 = (int *)thunk_FUN_00d32ed4(lVar38 + 0x11f0,
                                                      *(long *)(lVar20 + 0x80) + 0xa0);
                  if (*piVar16 == 0) {
                    in_stack_00000068._4_1_ = 0;
                    goto LAB_0248e4bc;
                  }
                  lVar20 = *plVar24;
                  if (*(int *)(lVar20 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar20 = *plVar24;
                  }
                  FUN_013b8de4(*(long *)(lVar20 + 0xb8) + 0x11f0,&stack0x00000880,
                               *(undefined8 *)
                                Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                              );
                  memcpy(&stack0x00000fe8,&stack0x00000880,0x378);
                  iVar8 = FUN_024d66ec();
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
                  FUN_024d7014(fStack0000000000000054,uVar13,fStack00000000000000c8,
                               *(undefined4 *)((long)unaff_x19 + 0x2f4),in_stack_000000c0._4_4_,
                               fStack00000000000000cc,in_stack_000000d8._4_4_,fStack0000000000000048
                              );
                  *(undefined4 *)(unaff_x19 + 0x99) = 0;
                  *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                  *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
                  *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
                  break;
                case 6:
                  lVar20 = unaff_x19[0x5c];
                  if (*(int *)(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar13 = FUN_02681b9c(lVar20,0,0);
                  if ((uVar13 & 1) != 0) {
                    plVar39 = (long *)unaff_x19[0x5c];
                    uVar15 = (**(code **)(*unaff_x19 + 0x548))();
                    if (plVar39 == (long *)0x0) goto LAB_02491464;
                    (**(code **)(*plVar39 + 0x558))
                              (plVar39,uVar15,*(undefined8 *)(*plVar39 + 0x560));
                    lVar20 = unaff_x19[0x5c];
                    if (lVar20 == 0) goto LAB_02491464;
                    *(int *)(lVar20 + 0x3f8) = (int)unaff_x19[0x7f];
                    FUN_024c910c(lVar20,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
                    plVar39 = (long *)unaff_x19[0x5c];
                    if (plVar39 == (long *)0x0) goto LAB_02491464;
                    (**(code **)(*plVar39 + 0x7d8))(plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7e0));
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
                plVar24 = (long *)System_Threading_Mutex_TypeInfo;
                plVar41 = (long *)StringLiteral_302;
              }
              else {
                FUN_024d7014(fStack0000000000000054,uVar13,fStack00000000000000c8,
                             *(undefined4 *)((long)unaff_x19 + 0x2f4),in_stack_000000c0._4_4_,
                             fStack00000000000000cc,in_stack_000000d8._4_4_,fStack0000000000000048);
                bStack000000000000005c = 1;
                in_stack_00000068._4_1_ = 0;
                fStack0000000000000058 = 1.4013e-45;
                plVar24 = (long *)System_Threading_Mutex_TypeInfo;
                plVar41 = (long *)StringLiteral_302;
              }
            }
          }
          else {
            in_stack_00000068._4_1_ = 0;
            in_stack_000017a8 = CONCAT44(0x2d,uVar40);
            *in_stack_00000148 = uVar40;
            plVar24 = (long *)System_Threading_Mutex_TypeInfo;
            plVar41 = (long *)StringLiteral_302;
            uVar13 = uVar14;
            in_stack_00001788 = in_stack_00001788 - 1;
          }
        }
      }
      else {
        if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
          *(uint *)((long)unaff_x19 + 0x2dc) = uVar28;
        }
        plVar41 = (long *)StringLiteral_302;
        plVar24 = (long *)System_Threading_Mutex_TypeInfo;
        uVar15 = DAT_02941c08;
        if ((char)unaff_x19[0x46] != '\0') {
          fVar50 = *(float *)(unaff_x19 + 0x58);
          if (((fVar50 < *(float *)((long)unaff_x19 + 0x2b4)) && (0.0 < fVar42)) &&
             (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
            fVar51 = *(float *)((long)unaff_x19 + 0x2b4) +
                     ((in_stack_00000018._4_4_ - fVar54) / (float)(int)unaff_x19[0x94]) /
                     fStack0000000000000054;
            if (fVar51 <= fVar50) {
              fVar51 = fVar50;
            }
            goto LAB_0248ea5c;
          }
          fVar54 = *(float *)((long)unaff_x19 + 0x1dc);
          fVar42 = *(float *)(unaff_x19 + 0x49);
          uVar14 = (ulong)(uint)fVar42;
          if ((fVar42 < fVar54) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
            fVar51 = (fVar54 - *(float *)(unaff_x19 + 0x47)) * 0.5;
            if (fVar51 <= DAT_028aa298) {
              fVar51 = DAT_028aa298;
            }
            fVar48 = (fVar54 - fVar51) * 20.0 + 0.5;
            fVar51 = DAT_02958220;
            if (fVar48 != INFINITY) {
              fVar51 = (float)(int)fVar48 / 20.0;
            }
            if (fVar51 <= fVar42) {
              fVar51 = fVar42;
            }
            *(float *)((long)unaff_x19 + 0x234) = fVar54;
            goto LAB_0248e598;
          }
        }
        switch((int)unaff_x19[0x5b]) {
        case 1:
          lVar20 = *(long *)System_Threading_Mutex_TypeInfo;
          if (*(int *)(lVar20 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar20 = *plVar24;
          }
          lVar38 = *(long *)(lVar20 + 0xb8);
          lVar20 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
          if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
            lVar20 = FUN_00d5941c(lVar20);
          }
          plVar41 = (long *)StringLiteral_302;
          lVar20 = *(long *)(*(long *)(lVar20 + 0xc0) + 8);
          if ((*(byte *)(lVar20 + 0x132) & 1) == 0) {
            lVar20 = FUN_00d5941c();
          }
          piVar16 = (int *)thunk_FUN_00d32ed4(lVar38 + 0x11f0,*(long *)(lVar20 + 0x80) + 0xa0);
          if (*piVar16 == 0) {
LAB_0248e4bc:
            in_stack_000017a8 = DAT_02941c08;
            in_stack_00000148[0] = 0;
            in_stack_00000148[1] = 0;
            uVar13 = uVar14;
            in_stack_00001788 = 0xffffffff;
          }
          else {
            lVar20 = *plVar24;
            if (*(int *)(lVar20 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar20 = *plVar24;
            }
            FUN_013b8de4(*(long *)(lVar20 + 0xb8) + 0x11f0,&stack0x00000880,
                         *(undefined8 *)
                          Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                        );
            memcpy(&stack0x00001360,&stack0x00000880,0x378);
LAB_0248c8f4:
            iVar8 = FUN_024d66ec();
LAB_0248c900:
            iVar10 = *(int *)((long)unaff_x19 + 0x48c) + -1;
            *(int *)((long)unaff_x19 + 0x48c) = iVar10;
            in_stack_00000140._4_4_ = in_stack_00000140._4_4_ + 1;
            uVar13 = uVar14;
            in_stack_00001788 = iVar8 - 1;
            in_stack_000017a8 = CONCAT44(0x2026,iVar10);
          }
          goto LAB_0248ab98;
        default:
          goto switchD_0248c274_caseD_2;
        case 3:
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
LAB_0248c524:
          plVar41 = (long *)StringLiteral_302;
          in_stack_00001788 = FUN_024d66ec();
          break;
        case 5:
          if ((uVar28 == 0) || ((int)in_stack_00001788 < 0)) {
            *in_stack_00000148 = 0;
            plVar24 = (long *)System_Threading_Mutex_TypeInfo;
            plVar41 = (long *)StringLiteral_302;
            uVar13 = uVar14;
            in_stack_00001788 = 0xffffffff;
            in_stack_000017a8 = uVar15;
          }
          else {
            fVar51 = *(float *)(unaff_x19 + 0x98);
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            in_stack_00001788 = FUN_024d66ec();
            if (in_stack_000000a0 < fVar51 - fVar43) break;
            *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
            *(undefined4 *)(unaff_x19 + 0x92) = *(undefined4 *)((long)unaff_x19 + 0x48c);
            uVar13 = *(ulong *)(*(long *)(*plVar24 + 0xb8) + 0x15a8);
            *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
            *(undefined4 *)(unaff_x19 + 0x99) = 0;
            lVar20 = NEON_rev64(uVar13,4);
            unaff_x19[0x98] = lVar20;
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
          plVar41 = (long *)StringLiteral_302;
          lVar20 = unaff_x19[0x5c];
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              );
          }
          uVar13 = FUN_02681b9c(lVar20,0,0);
          if ((uVar13 & 1) != 0) {
            plVar39 = (long *)unaff_x19[0x5c];
            uVar15 = (**(code **)(*unaff_x19 + 0x548))();
            if (plVar39 == (long *)0x0) goto LAB_02491464;
            (**(code **)(*plVar39 + 0x558))(plVar39,uVar15,*(undefined8 *)(*plVar39 + 0x560));
            lVar20 = unaff_x19[0x5c];
            if (lVar20 == 0) goto LAB_02491464;
            *(int *)(lVar20 + 0x3f8) = (int)unaff_x19[0x7f];
            FUN_024c910c(lVar20,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
            plVar39 = (long *)unaff_x19[0x5c];
            if (plVar39 == (long *)0x0) goto LAB_02491464;
            (**(code **)(*plVar39 + 0x7d8))(plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7e0));
            *(undefined1 *)(unaff_x19 + 0x5e) = 1;
          }
        }
LAB_0248c628:
        uVar13 = uVar14;
        in_stack_000017a8 = CONCAT44(3,uVar28);
      }
    }
    else {
      if (((in_stack_000017bc & 0xfffffffe) == 10) && ((int)unaff_x19[0x5b] == 6)) {
        fVar51 = 0.0;
        if ((0.0 < (float)uVar14) && (fVar51 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
          fVar51 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
        }
        uVar13 = (ulong)(uint)in_stack_000000a0;
        if (in_stack_000000a0 <
            (*(float *)(unaff_x19 + 0x96) - (*(float *)((long)unaff_x19 + 0x4c4) - (float)uVar14)) +
            fVar51) {
          if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
            *(uint *)((long)unaff_x19 + 0x2dc) = uVar28;
          }
          plVar41 = (long *)StringLiteral_302;
          plVar24 = (long *)System_Threading_Mutex_TypeInfo;
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          in_stack_00001788 = FUN_024d66ec();
          lVar20 = unaff_x19[0x5c];
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              );
          }
          uVar14 = FUN_02681b9c(lVar20,0,0);
          if ((uVar14 & 1) != 0) {
            plVar39 = (long *)unaff_x19[0x5c];
            uVar15 = (**(code **)(*unaff_x19 + 0x548))();
            if (plVar39 == (long *)0x0) goto LAB_02491464;
            (**(code **)(*plVar39 + 0x558))(plVar39,uVar15,*(undefined8 *)(*plVar39 + 0x560));
            lVar20 = unaff_x19[0x5c];
            if (lVar20 == 0) goto LAB_02491464;
            *(int *)(lVar20 + 0x3f8) = (int)unaff_x19[0x7f];
            FUN_024c910c(lVar20,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
            plVar39 = (long *)unaff_x19[0x5c];
            if (plVar39 == (long *)0x0) goto LAB_02491464;
            (**(code **)(*plVar39 + 0x7d8))(plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7e0));
            *(undefined1 *)(unaff_x19 + 0x5e) = 1;
          }
          in_stack_000017a8 = CONCAT44(3,uVar28);
          goto LAB_0248ab98;
        }
      }
      if ((((in_stack_000017bc - 0x2007 < 0x23) &&
           ((1L << ((ulong)(in_stack_000017bc - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
          (in_stack_000017bc - 10 < 2)) || (in_stack_000017bc == 0xa0)) {
UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ObjectSpawner__get_objectPrefabs:
        if (((in_stack_000017bc != 0xad) && (in_stack_000017bc != 0x200b)) &&
           (in_stack_000017bc != 0x2060)) {
          lVar20 = *in_stack_00000150;
          if ((lVar20 == 0) || (lVar38 = *(long *)(lVar20 + 0x50), lVar38 == 0)) goto LAB_02491464;
          if (*(uint *)(lVar38 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          lVar38 = lVar38 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
          *(int *)(lVar38 + 0x2c) = *(int *)(lVar38 + 0x2c) + 1;
          *(int *)(lVar20 + 0x20) = *(int *)(lVar20 + 0x20) + 1;
        }
      }
      else {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar13 = FUN_016fa418(in_stack_000017bc,0);
        if ((uVar13 & 1) != 0)
        goto 
        UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ObjectSpawner__get_objectPrefabs;
      }
      if (in_stack_000017bc == 0xa0) {
        if ((*in_stack_00000150 == 0) ||
           (lVar20 = *(long *)(*in_stack_00000150 + 0x50), lVar20 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar20 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar20 = lVar20 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
LAB_0248cf8c:
        *(int *)(lVar20 + 0x20) = *(int *)(lVar20 + 0x20) + 1;
      }
FUN_0248d088:
      if (((int)unaff_x19[0x5b] == 1) && ((in_stack_000017bc == 0x2d || (unaff_w20 != 1)))) {
        if (unaff_x19[0xca] == 0) goto LAB_02491464;
        fVar51 = *(float *)(unaff_x19 + 0x3c);
        iVar8 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
        if (unaff_x19[0xca] == 0) goto LAB_02491464;
        fVar44 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
        lVar20 = unaff_x19[0xc9];
        fVar48 = fStack0000000000000084;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar48 = 1.0;
        }
        if ((lVar20 == 0) || (*(long *)(lVar20 + 0x20) == 0)) goto LAB_02491464;
        fVar45 = *(float *)((long)unaff_x19 + 0x3fc);
        fVar43 = *(float *)(lVar20 + 0x2c);
        fVar47 = (float)FUN_026fd668(*(long *)(lVar20 + 0x20),0);
        fVar42 = *_fStack0000000000000098;
        fVar47 = fVar45 * (fVar51 / (float)iVar8) * fVar44 * fVar48 * fVar43 * fVar47;
        fVar51 = *in_stack_00000088;
        if ((in_stack_000017bc == 10) && (*(int *)((long)unaff_x19 + 0x48c) != (int)unaff_x19[0x92])
           ) {
          if ((*in_stack_00000150 == 0) ||
             (lVar20 = *(long *)(*in_stack_00000150 + 0x38), lVar20 == 0)) goto LAB_02491464;
          uVar28 = *(int *)((long)unaff_x19 + 0x48c) - 1;
          if (*(uint *)(lVar20 + 0x18) <= uVar28)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          if (unaff_x19[0xca] == 0) goto LAB_02491464;
          fVar48 = *(float *)(lVar20 + (long)(int)uVar28 * (long)iVar37 + 0x60);
          iVar8 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
          if (unaff_x19[0xca] == 0) goto LAB_02491464;
          fVar45 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
          lVar20 = unaff_x19[0xc9];
          fVar44 = fStack0000000000000084;
          if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
            fVar44 = 1.0;
          }
          if ((lVar20 == 0) || (*(long *)(lVar20 + 0x20) == 0)) goto LAB_02491464;
          fVar43 = *(float *)((long)unaff_x19 + 0x3fc);
          fVar54 = *(float *)(lVar20 + 0x2c);
          fVar47 = (float)FUN_026fd668(*(long *)(lVar20 + 0x20),0);
          if ((*in_stack_00000150 == 0) ||
             (lVar20 = *(long *)(*in_stack_00000150 + 0x50), lVar20 == 0)) goto LAB_02491464;
          if (*(uint *)(lVar20 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          lVar20 = lVar20 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
          fVar42 = *(float *)(lVar20 + 0x60);
          fVar51 = *(float *)(lVar20 + 100);
          fVar47 = fVar43 * (fVar48 / (float)iVar8) * fVar45 * fVar44 * fVar54 * fVar47;
        }
        fVar43 = *(float *)(unaff_x19 + 0x9a);
        fVar44 = *(float *)(unaff_x19 + 0x96);
        fVar54 = *(float *)((long)unaff_x19 + 0x4c4);
        fVar48 = 0.0;
        fVar45 = 0.0;
        if ((0.0 < fVar43) && (fVar45 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
          fVar45 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
        }
        fVar50 = *(float *)(unaff_x19 + 199);
        if ((char)unaff_x19[0x1d] == '\0') {
          if ((unaff_x19[0xc9] == 0) || (lVar20 = *(long *)(unaff_x19[0xc9] + 0x20), lVar20 == 0))
          goto LAB_02491464;
          FUN_026fd62c(&stack0x00000880,lVar20,0);
          unaff_x28[0x1cd] = unaff_x28[1];
          unaff_x28[0x1cc] = *unaff_x28;
          fVar48 = (float)FUN_026fd474(&stack0x000016e0,0);
        }
        puVar4 = System_Threading_Mutex_TypeInfo;
        fVar52 = *(float *)(unaff_x19 + 0x6b);
        fVar51 = (fStack0000000000000090 - fVar42) - fVar51;
        bVar6 = true;
        if ((fVar52 <= fVar51) && (bVar6 = false, !NAN(fVar52))) {
          bVar6 = fVar52 == -1.0;
        }
        if (!bVar6) {
          fVar51 = fVar52;
        }
        fVar42 = _DAT_0294c6e8;
        if ((uVar27 & 0x18) == 0) {
          fVar42 = 1.0;
        }
        if (((fVar44 - (fVar54 - fVar43)) + fVar45 < in_stack_000000a0) &&
           (ABS(fVar50) + fVar47 * fVar48 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) <
            fVar42 * fVar51)) {
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_024d69d4();
          lVar20 = *(long *)(*(long *)puVar4 + 0xb8);
          memcpy(&stack0x00000508,(void *)(lVar20 + 0x788),0x378);
          FUN_013b86dc(lVar20 + 0x11f0,&stack0x00000508,
                       *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__);
        }
      }
      fVar51 = 1.0;
      lVar20 = *in_stack_00000150;
      if ((lVar20 == 0) || (lVar38 = *(long *)(lVar20 + 0x38), lVar38 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar38 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar28 = *(uint *)(unaff_x19 + 0x94);
      lVar38 = lVar38 + (int)*in_stack_00000148 * unaff_x21;
      *(uint *)(lVar38 + 100) = uVar28;
      *(int *)(lVar38 + 0x68) = (int)unaff_x19[0x95];
      if (((unaff_w20 & 1) == 0) &&
         ((0xd < in_stack_000017bc || ((1 << (ulong)(in_stack_000017bc & 0x1f) & 0x2c00U) == 0)))) {
        lVar20 = *(long *)(lVar20 + 0x50);
        if (lVar20 == 0) goto LAB_02491464;
LAB_0248d42c:
        if (*(uint *)(lVar20 + 0x18) <= uVar28)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        *(int *)(lVar20 + (long)(int)uVar28 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
      }
      else {
        lVar20 = *(long *)(lVar20 + 0x50);
        if (lVar20 == 0) goto LAB_02491464;
        if (*(uint *)(lVar20 + 0x18) <= uVar28)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        if (*(int *)(lVar20 + (long)(int)uVar28 * 0x5c + 0x24) == 1) goto LAB_0248d42c;
      }
      if (in_stack_000017bc == 9) {
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar51 = (float)FUN_026fd208(*unaff_x27 + 0x50,0);
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar47 = *(float *)(unaff_x19 + 199);
        fVar48 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x27 + 0x1b9));
        fVar51 = fStack0000000000000118 * fVar51 * fVar48;
        fVar44 = fVar51 * (float)(int)(fVar47 / fVar51);
        uVar13 = (ulong)(uint)fVar44;
        if (fVar44 <= fVar47) {
          fVar44 = fVar47 + fVar51;
        }
LAB_0248d614:
        *(float *)(unaff_x19 + 199) = fVar44;
      }
      else if (*(float *)(unaff_x19 + 0x55) == 0.0) {
        if ((char)unaff_x19[0x1d] == '\0') {
          if (*(char *)((long)unaff_x19 + 0x46c) != '\0') {
            fVar51 = (float)thunk_FUN_026935f0(_uStack0000000000000060,0);
          }
          fVar44 = *(float *)(unaff_x19 + 199);
          fVar47 = (float)FUN_026fd474(&stack0x00001770,0);
          if (unaff_x19[0x1f] != 0) {
            fVar48 = 1.0 - *(float *)((long)unaff_x19 + 0x2cc);
            fVar44 = fVar44 + fVar48 * (*(float *)((long)unaff_x19 + 0x2a4) +
                                       fStack0000000000000118 *
                                       (in_stack_000000b0 + fVar51 * fVar47) +
                                       fStack00000000000000c8 *
                                       (in_stack_000000c0._4_4_ +
                                       fStack00000000000000cc + *(float *)(unaff_x19[0x1f] + 0x1ac))
                                       );
            *(float *)(unaff_x19 + 199) = fVar44;
            goto joined_r0x0248d568;
          }
          goto LAB_02491464;
        }
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar44 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                 (*(float *)((long)unaff_x19 + 0x2a4) +
                 fStack0000000000000118 * in_stack_000000b0 +
                 fStack00000000000000c8 *
                 (in_stack_000000c0._4_4_ + fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac))
                 );
        uVar13 = (ulong)(uint)fVar44;
        fVar44 = *(float *)(unaff_x19 + 199) - fVar44;
        *(float *)(unaff_x19 + 199) = fVar44;
        if ((unaff_w29 != 0) || (in_stack_000017bc == 0x200b)) {
          fVar51 = fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
          uVar13 = (ulong)(uint)fVar51;
          fVar44 = fVar44 - fVar51;
          goto LAB_0248d614;
        }
      }
      else {
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar48 = *(float *)(unaff_x19 + 199);
        fVar44 = fVar48 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                          (*(float *)((long)unaff_x19 + 0x2a4) +
                          (*(float *)(unaff_x19 + 0x55) - fStack0000000000000080) +
                          fStack00000000000000c8 *
                          (fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac)));
        *(float *)(unaff_x19 + 199) = fVar44;
joined_r0x0248d568:
        if ((unaff_w29 != 0) || (uVar13 = (ulong)(uint)fVar48, in_stack_000017bc == 0x200b)) {
          fVar51 = fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
          uVar13 = (ulong)(uint)fVar51;
          fVar44 = fVar44 + fVar51;
          goto LAB_0248d614;
        }
      }
      lVar20 = *in_stack_00000150;
      if ((lVar20 == 0) || (lVar38 = *(long *)(lVar20 + 0x38), lVar38 == 0)) goto LAB_02491464;
      uVar28 = *in_stack_00000148;
      uVar27 = (uint)*(undefined8 *)(lVar38 + 0x18);
      if (uVar27 <= uVar28)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      *(float *)(lVar38 + (int)uVar28 * unaff_x21 + 0x144) = fVar44;
      uVar33 = in_stack_000017bc;
      if ((int)in_stack_000017bc < 0xd) {
        if ((in_stack_000017bc - 10 < 2) || (in_stack_000017bc == 3)) goto LAB_0248d6b8;
LAB_0248d69c:
        if (((unaff_w20 & in_stack_000017bc == 0x2d) != 0) ||
           ((float)uVar28 == in_stack_00000078._4_4_)) goto LAB_0248d6b8;
      }
      else {
        if (1 < in_stack_000017bc - 0x2028) {
          if (in_stack_000017bc != 0xd) goto LAB_0248d69c;
          uVar13 = 0;
          *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
          if ((float)uVar28 != in_stack_00000078._4_4_) goto LAB_0248dc08;
        }
LAB_0248d6b8:
        if (0.0 < *(float *)(unaff_x19 + 0x9a)) {
          fVar51 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
          if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (((fStack000000000000004c < ABS(fVar51)) && (*(char *)((long)unaff_x19 + 700) == '\0'))
             && (*(char *)((long)unaff_x19 + 0x334) == '\0')) {
            FUN_024d6ca8(fVar51);
            *(float *)((long)unaff_x19 + 0x4bc) = *(float *)((long)unaff_x19 + 0x4bc) - fVar51;
            *(float *)(unaff_x19 + 0x9a) = fVar51 + *(float *)(unaff_x19 + 0x9a);
            puVar4 = System_Threading_Mutex_TypeInfo;
            lVar20 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar20 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar20 = *(long *)puVar4;
            }
            lVar38 = *(long *)(lVar20 + 0xb8);
            if (*(int *)(lVar38 + 0x7ac) == (int)unaff_x19[0x94]) {
              if (*(int *)(lVar20 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar38 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
              }
              FUN_013b8de4(lVar38 + 0x11f0,&stack0x00000880,
                           *(undefined8 *)
                            Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                          );
              lVar20 = *(long *)System_Threading_Mutex_TypeInfo;
              memcpy((void *)(*(long *)(lVar20 + 0xb8) + 0x788),&stack0x00000880,0x378);
              lVar20 = *(long *)(lVar20 + 0xb8);
              *(float *)(lVar20 + 0x7bc) = fVar51 + *(float *)(lVar20 + 0x7bc);
              *(float *)(lVar20 + 0x800) = fVar51 + *(float *)(lVar20 + 0x800);
              memcpy(&stack0x00000190,(void *)(lVar20 + 0x788),0x378);
              FUN_013b86dc(lVar20 + 0x11f0,&stack0x00000190,
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<TextStyle>_get_Item__);
            }
          }
        }
        fVar44 = *(float *)(unaff_x19 + 0x9a);
        *(undefined1 *)((long)unaff_x19 + 0x334) = 0;
        fVar48 = *(float *)((long)unaff_x19 + 0x4c4) - fVar44;
        fVar51 = *(float *)((long)unaff_x19 + 0x4bc);
        if (fVar48 <= *(float *)((long)unaff_x19 + 0x4bc)) {
          fVar51 = fVar48;
        }
        *(float *)((long)unaff_x19 + 0x4bc) = fVar51;
        fVar47 = *(float *)(unaff_x19 + 0x98);
        if (*(char *)((long)unaff_x28 + 0xf34) == '\0') {
          in_stack_000017b8 = fVar51;
        }
        if ((*(char *)((long)unaff_x19 + 0x32c) != '\0') &&
           (((int)unaff_x19[100] <= *(int *)((long)unaff_x19 + 0x48c) ||
            ((int)unaff_x19[0x65] <= (int)unaff_x19[0x94])))) {
          *(undefined1 *)((long)unaff_x28 + 0xf34) = 1;
        }
        lVar20 = *in_stack_00000150;
        if ((lVar20 == 0) || (lVar38 = *(long *)(lVar20 + 0x50), lVar38 == 0)) goto LAB_02491464;
        uVar28 = *(uint *)(unaff_x19 + 0x94);
        if (*(uint *)(lVar38 + 0x18) <= uVar28)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar30 = lVar38 + (long)(int)uVar28 * 0x5c;
        *(int *)(lVar30 + 0x34) = (int)unaff_x19[0x92];
        iVar8 = (int)unaff_x19[0x92];
        if ((int)unaff_x19[0x92] <= *(int *)((long)unaff_x19 + 0x494)) {
          iVar8 = *(int *)((long)unaff_x19 + 0x494);
        }
        *(int *)((long)unaff_x19 + 0x494) = iVar8;
        *(int *)(lVar30 + 0x38) = iVar8;
        *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x48c);
        *(undefined4 *)(lVar30 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x48c);
        iVar8 = *(int *)((long)unaff_x19 + 0x494);
        if (*(int *)((long)unaff_x19 + 0x494) <= *(int *)((long)unaff_x19 + 0x49c)) {
          iVar8 = *(int *)((long)unaff_x19 + 0x49c);
        }
        *(int *)((long)unaff_x19 + 0x49c) = iVar8;
        *(int *)(lVar30 + 0x40) = iVar8;
        *(int *)(lVar30 + 0x24) = (*(int *)(lVar30 + 0x3c) - *(int *)(lVar30 + 0x34)) + 1;
        *(undefined4 *)(lVar30 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
        lVar20 = *(long *)(lVar20 + 0x38);
        if (lVar20 == 0) goto LAB_02491464;
        if (*(uint *)(lVar20 + 0x18) <= *(uint *)((long)unaff_x19 + 0x494))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        uVar56 = *(undefined4 *)
                  (lVar20 + (int)*(uint *)((long)unaff_x19 + 0x494) * unaff_x21 + 0x11c);
        lVar38 = lVar38 + (long)(int)uVar28 * 0x5c;
        *(float *)(lVar38 + 0x70) = fVar48;
        *(undefined4 *)(lVar38 + 0x6c) = uVar56;
        lVar20 = *in_stack_00000150;
        if ((lVar20 == 0) || (lVar38 = *(long *)(lVar20 + 0x50), lVar38 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar38 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar20 = *(long *)(lVar20 + 0x38);
        if (lVar20 == 0) goto LAB_02491464;
        if (*(uint *)(lVar20 + 0x18) <= *(uint *)((long)unaff_x19 + 0x49c))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fVar47 = fVar47 - fVar44;
        lVar38 = lVar38 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
        *(undefined4 *)(lVar38 + 0x74) =
             *(undefined4 *)(lVar20 + (int)*(uint *)((long)unaff_x19 + 0x49c) * unaff_x21 + 0x128);
        *(float *)(lVar38 + 0x78) = fVar47;
        lVar20 = *in_stack_00000150;
        if ((lVar20 == 0) || (lVar30 = *(long *)(lVar20 + 0x50), lVar30 == 0)) goto LAB_02491464;
        lVar12 = (long)(int)*(uint *)(unaff_x19 + 0x94);
        if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar38 = lVar30 + lVar12 * 0x5c;
        *(float *)(lVar38 + 0x44) =
             *(float *)(lVar38 + 0x74) - fStack0000000000000118 * in_stack_00000130._4_4_;
        *(float *)(lVar38 + 0x5c) = in_stack_000000d8._4_4_;
        if (*(int *)(lVar38 + 0x24) == 1) {
          *(int *)(lVar30 + lVar12 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
        }
        if ((*unaff_x27 == 0) || (lVar38 = *(long *)(lVar20 + 0x38), lVar38 == 0))
        goto LAB_02491464;
        lVar32 = (long)(int)*(uint *)((long)unaff_x19 + 0x49c);
        uVar27 = (uint)*(undefined8 *)(lVar38 + 0x18);
        if (uVar27 <= *(uint *)((long)unaff_x19 + 0x49c))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        if ((*(char *)(lVar38 + lVar32 * unaff_x21 + 0x194) == '\0') &&
           (lVar32 = (long)(int)*(uint *)(unaff_x19 + 0x93), uVar27 <= *(uint *)(unaff_x19 + 0x93)))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fVar44 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                 (fStack00000000000000c8 *
                  (in_stack_000000c0._4_4_ + fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac)
                  ) - *(float *)((long)unaff_x19 + 0x2a4));
        fVar51 = -fVar44;
        if ((char)unaff_x19[0x1d] != '\0') {
          fVar51 = fVar44;
        }
        lVar30 = lVar30 + lVar12 * 0x5c;
        *(float *)(lVar30 + 0x58) = *(float *)(lVar38 + lVar32 * unaff_x21 + 0x144) + fVar51;
        fVar51 = *(float *)(unaff_x19 + 0x9a);
        *(float *)(lVar30 + 0x48) = fStack0000000000000050 + (fVar47 - fVar48);
        *(float *)(lVar30 + 0x4c) = fVar47;
        uVar13 = (ulong)(uint)(0.0 - fVar51);
        *(float *)(lVar30 + 0x50) = 0.0 - fVar51;
        *(float *)(lVar30 + 0x54) = fVar48;
        plVar24 = (long *)System_Threading_Mutex_TypeInfo;
        if ((int)in_stack_000017bc < 0x2d) {
          if (in_stack_000017bc - 10 < 2) {
LAB_0248dad8:
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            plVar41 = (long *)StringLiteral_302;
            FUN_024d69d4();
            lVar20 = unaff_x19[0x6c];
            *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
            iVar8 = (int)unaff_x19[0x94] + 1;
            *(int *)(unaff_x19 + 0x94) = iVar8;
            *(int *)(unaff_x19 + 0x92) = *(int *)((long)unaff_x19 + 0x48c) + 1;
            if ((lVar20 != 0) && (*(long *)(lVar20 + 0x50) != 0)) {
              if (*(int *)(*(long *)(lVar20 + 0x50) + 0x18) <= iVar8) {
                FUN_024d6e60();
                lVar20 = unaff_x19[0x6c];
                if (lVar20 == 0) goto LAB_02491464;
              }
              lVar20 = *(long *)(lVar20 + 0x38);
              if (lVar20 != 0) {
                if (*in_stack_00000148 < *(uint *)(lVar20 + 0x18)) {
                  fVar51 = *(float *)(lVar20 + (int)*in_stack_00000148 * unaff_x21 + 0x154);
                  if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
                    fVar48 = 0.0;
                    if ((in_stack_000017bc == 0x2029) || (in_stack_000017bc == 10)) {
                      fVar48 = *(float *)((long)unaff_x19 + 0x2c4);
                    }
                    uVar18 = 0;
                    fVar48 = *(float *)(unaff_x19 + 0x9a) +
                             fVar51 + (0.0 - *(float *)((long)unaff_x19 + 0x4c4)) +
                             fStack0000000000000054 *
                             (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4)) +
                             fStack00000000000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar48);
                  }
                  else {
                    if ((in_stack_000017bc == 0x2029) || (fVar48 = 0.0, in_stack_000017bc == 10)) {
                      fVar48 = *(float *)((long)unaff_x19 + 0x2c4);
                    }
                    uVar18 = 1;
                    fVar48 = *(float *)(unaff_x19 + 0x9a) +
                             *(float *)(unaff_x19 + 0x57) +
                             fStack00000000000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar48);
                  }
                  *(float *)(unaff_x19 + 0x9a) = fVar48;
                  *(undefined1 *)((long)unaff_x19 + 700) = uVar18;
                  lVar20 = *plVar24;
                  if (*(int *)(lVar20 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar20 = *plVar24;
                  }
                  uVar15 = *(undefined8 *)(*(long *)(lVar20 + 0xb8) + 0x15a8);
                  *(float *)(unaff_x19 + 0x99) = fVar51;
                  uVar13 = NEON_rev64(uVar15,4);
                  unaff_x19[0x98] = uVar13;
                  *(float *)(unaff_x19 + 199) =
                       *(float *)(unaff_x19 + 0x80) + 0.0 + *(float *)((long)unaff_x19 + 0x404);
                  FUN_024d69d4();
                  FUN_024d69d4();
                  *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
                  fStack0000000000000058 = 1.4013e-45;
                  bStack000000000000005c = 1;
                  goto LAB_0248ab98;
                }
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              }
            }
            goto LAB_02491464;
          }
          if (in_stack_000017bc == 3) {
            if (unaff_x19[0x8e] == 0) goto LAB_02491464;
            in_stack_00001788 = (uint)*(undefined8 *)(unaff_x19[0x8e] + 0x18);
            uVar33 = 3;
          }
        }
        else if ((in_stack_000017bc - 0x2028 < 2) || (in_stack_000017bc == 0x2d)) goto LAB_0248dad8;
      }
LAB_0248dc08:
      uVar28 = *in_stack_00000148;
      if (uVar27 <= uVar28)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (*(char *)(lVar38 + (int)uVar28 * unaff_x21 + 0x194) != '\0') {
        lVar38 = lVar38 + (int)uVar28 * unaff_x21;
        uVar14 = *(ulong *)(lVar38 + 0x11c);
        uVar13 = *(ulong *)(in_stack_00000070 + 0x230);
        *(ulong *)(in_stack_00000070 + 0x230) =
             uVar14 ^ (uVar14 ^ uVar13) &
                      CONCAT44(-(uint)((float)(uVar13 >> 0x20) < (float)(uVar14 >> 0x20)),
                               -(uint)((float)uVar13 < (float)uVar14));
        uVar14 = *(ulong *)(in_stack_00000070 + 0x238);
        uVar13 = *(ulong *)(lVar38 + 0x128);
        *(ulong *)(in_stack_00000070 + 0x238) =
             uVar13 ^ (uVar13 ^ uVar14) &
                      CONCAT44(-(uint)((float)(uVar13 >> 0x20) < (float)(uVar14 >> 0x20)),
                               -(uint)((float)uVar13 < (float)uVar14));
      }
      if (((int)unaff_x19[0x5b] == 5) &&
         ((0xd < uVar33 || ((1 << (ulong)(uVar33 & 0x1f) & 0x2c00U) == 0)))) {
        lVar38 = *(long *)(lVar20 + 0x58);
        if (lVar38 == 0) goto LAB_02491464;
        iVar8 = (int)unaff_x19[0x95] + 1;
        if (*(int *)(lVar38 + 0x18) < iVar8) {
          if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01147c08((long *)(lVar20 + 0x58),iVar8,1,
                       *(undefined8 *)
                        Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerMove__);
          lVar20 = *in_stack_00000150;
          if (lVar20 == 0) goto LAB_02491464;
        }
        lVar38 = *(long *)(lVar20 + 0x58);
        if (lVar38 == 0) goto LAB_02491464;
        uVar27 = *(uint *)(unaff_x19 + 0x95);
        lVar30 = (long)(int)uVar27;
        uVar28 = *(uint *)(lVar38 + 0x18);
        if (uVar28 <= uVar27)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar12 = lVar38 + lVar30 * 0x14;
        fVar48 = *(float *)(lVar12 + 0x30);
        uVar13 = (ulong)(uint)fVar48;
        *(undefined4 *)(lVar12 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
        fVar51 = *(float *)((long)unaff_x19 + 0x4bc);
        if (fVar48 <= *(float *)((long)unaff_x19 + 0x4bc)) {
          fVar51 = fVar48;
        }
        *(float *)(lVar12 + 0x30) = fVar51;
        uVar33 = *(uint *)((long)unaff_x19 + 0x48c);
        if (uVar33 == 0 && uVar27 == 0) {
          *(uint *)(lVar38 + lVar30 * 0x14 + 0x20) = uVar33;
        }
        else {
          uVar40 = uVar33 - 1;
          if (0 < (int)uVar33) {
            lVar20 = *(long *)(lVar20 + 0x38);
            if (lVar20 == 0) goto LAB_02491464;
            if (*(uint *)(lVar20 + 0x18) <= uVar40)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            if (uVar27 != *(uint *)(lVar20 + (long)(int)uVar40 * (long)iVar37 + 0x68)) {
              if (uVar27 - 1 < uVar28) {
                *(uint *)(lVar38 + 0x20 + (long)(int)(uVar27 - 1) * 0x14 + 4) = uVar40;
                *(uint *)(lVar38 + 0x20 + lVar30 * 0x14) = uVar33;
                goto LAB_0248dc84;
              }
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            }
          }
          if ((float)uVar33 == in_stack_00000078._4_4_) {
            *(float *)(lVar38 + lVar30 * 0x14 + 0x24) = in_stack_00000078._4_4_;
          }
        }
      }
LAB_0248dc84:
      plVar24 = (long *)System_Threading_Mutex_TypeInfo;
      if (((char)unaff_x19[0x5a] != '\0') ||
         ((*(uint *)(unaff_x19 + 0x5b) < 7 &&
          ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5b) & 0x1f) & 0x4aU) != 0)))) {
        if ((unaff_w29 == 0) &&
           (((in_stack_000017bc != 0x2d && (in_stack_000017bc != 0x200b)) &&
            (in_stack_000017bc != 0xad)))) {
          if (*(char *)((long)unaff_x19 + 0x2d2) == '\0') {
LAB_0248de4c:
            if (((((0x2bfd < in_stack_000017bc - 0xac01) && (0x1d < in_stack_000017bc - 0xa961)) &&
                 (0xfd < in_stack_000017bc - 0x1101)) ||
                (uVar14 = FUN_024e95f0(0), (uVar14 & 1) != 0)) &&
               ((((0xed < in_stack_000017bc - 0xff01 && (0x1d < in_stack_000017bc - 0xfe31)) &&
                 (0x717d < in_stack_000017bc - 0x2e81)) && (0x1fd < in_stack_000017bc - 0xf901))))
            goto LAB_0248ded4;
            lVar20 = FUN_024e94b0(0);
            if ((lVar20 == 0) || (*(long *)(lVar20 + 0x10) == 0)) goto LAB_02491464;
            uVar14 = FUN_0129aa60(*(long *)(lVar20 + 0x10),&stack0x00000880,
                                  *(undefined8 *)
                                   System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                                 );
            if ((int)*in_stack_00000148 < (int)in_stack_00000078._4_4_) {
              lVar20 = FUN_024e94b0(0);
              if (((lVar20 == 0) || (*in_stack_00000150 == 0)) ||
                 (lVar38 = *(long *)(*in_stack_00000150 + 0x38), lVar38 == 0)) goto LAB_02491464;
              if (*(uint *)(lVar38 + 0x18) <= *in_stack_00000148 + 1)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              if (*(long *)(lVar20 + 0x18) == 0) goto LAB_02491464;
              in_stack_00000880 =
                   (uint)*(ushort *)
                          (lVar38 + (long)(int)(*in_stack_00000148 + 1) * (long)iVar37 + 0x20);
              uVar17 = FUN_0129aa60(*(long *)(lVar20 + 0x18),&stack0x00000880,
                                    *(undefined8 *)
                                     System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                                   );
              if ((uVar14 & 1) != 0) goto LAB_0248e0dc;
              if ((uVar17 & 1) == 0) goto LAB_0248e1b0;
              plVar24 = (long *)System_Threading_Mutex_TypeInfo;
              if ((bStack000000000000005c & 1) == 0) {
                bStack000000000000005c = 0;
                goto LAB_0248e168;
              }
            }
            else {
              in_stack_00000880 = in_stack_000017bc;
              if ((uVar14 & 1) == 0) {
LAB_0248e1b0:
                plVar24 = (long *)System_Threading_Mutex_TypeInfo;
                if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_024d69d4();
                bStack000000000000005c = 0;
                goto LAB_0248e168;
              }
LAB_0248e0dc:
              plVar24 = (long *)System_Threading_Mutex_TypeInfo;
              if (uVar9 != uVar23 || ((bStack000000000000005c ^ 0xff) & 1) != 0) goto LAB_0248e168;
            }
joined_r0x0248e0fc:
            System_Threading_Mutex_TypeInfo = (undefined *)plVar24;
            if (unaff_w29 != 0) {
LAB_0248e100:
              plVar24 = (long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_024d69d4();
            }
            if (*(int *)(*plVar24 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_024d69d4();
            bStack000000000000005c = 1;
          }
          else {
LAB_0248ded4:
            plVar24 = (long *)System_Threading_Mutex_TypeInfo;
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
          *(undefined4 *)(*(long *)(*plVar24 + 0xb8) + 0xe78) = 0xffffffff;
        }
      }
LAB_0248e168:
      if (*(int *)(*plVar24 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar41 = (long *)StringLiteral_302;
      FUN_024d69d4();
      *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
    }
LAB_0248ab98:
    do {
      fVar51 = 1.0;
      in_stack_00001788 = in_stack_00001788 + 1;
      lVar20 = unaff_x19[0x8e];
      if (lVar20 == 0) goto LAB_02491464;
      if ((int)*(uint *)(lVar20 + 0x18) <= (int)in_stack_00001788) {
LAB_0248e4dc:
        fVar51 = (float)uVar13;
        if (((char)unaff_x19[0x46] != '\0') &&
           (fVar51 = DAT_02956ccc,
           DAT_02956ccc < *(float *)((long)unaff_x19 + 0x234) - *(float *)(unaff_x19 + 0x47))) {
          fVar51 = *(float *)((long)unaff_x19 + 0x1dc);
          fVar48 = *(float *)((long)unaff_x19 + 0x24c);
          if ((fVar51 < fVar48) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
            if (*(float *)((long)unaff_x19 + 0x2cc) < *(float *)(unaff_x19 + 0x59) / 100.0) {
              *(undefined4 *)((long)unaff_x19 + 0x2cc) = 0;
            }
            fVar44 = (*(float *)((long)unaff_x19 + 0x234) - fVar51) * 0.5;
            if (fVar44 <= DAT_028aa298) {
              fVar44 = DAT_028aa298;
            }
            *(float *)(unaff_x19 + 0x47) = fVar51;
            fVar44 = (fVar51 + fVar44) * 20.0 + 0.5;
            fVar51 = DAT_02958220;
            if (fVar44 != INFINITY) {
              fVar51 = (float)(int)fVar44 / 20.0;
            }
            if (fVar48 <= fVar51) {
              fVar51 = fVar48;
            }
            goto LAB_0248e598;
          }
        }
        *(undefined1 *)((long)unaff_x19 + 0x244) = 1;
        if ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c)) {
          uVar15 = FUN_0176eb1c(_fStack0000000000000038,0);
          uVar11 = FUN_017840ac(in_stack_00000040,0);
          uVar15 = FUN_0160073c(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlah_s16__
                                ,uVar15,*(undefined8 *)
                                         Method_UnityEngine_GameObject_GetComponents<Component>__,
                                uVar11,0);
          if (*(int *)(*plVar41 + 0xe0) == 0) {
            thunk_FUN_00d32864(*plVar41);
          }
          FUN_02660dac(uVar15,0);
        }
        puVar4 = Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__;
        if ((*in_stack_00000148 == 0) || ((*in_stack_00000148 == 1 && (uVar58 == 3)))) {
          (**(code **)(*unaff_x19 + 0x958))();
          lVar20 = *(long *)puVar4;
          goto LAB_02491474;
        }
        lVar20 = *plVar24;
        if (*(int *)(lVar20 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar20 = *plVar24;
        }
        plVar24 = (long *)PTR_DAT_033ed410;
        lVar20 = **(long **)(lVar20 + 0xb8);
        if (lVar20 == 0) goto LAB_02491464;
        if (*(uint *)(lVar20 + 0x18) <= *(uint *)(unaff_x19 + 0xd0))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        iVar37 = *(int *)(lVar20 + (long)(int)*(uint *)(unaff_x19 + 0xd0) * 0x38 + 0x54) << 2;
        if ((*in_stack_00000150 == 0) ||
           (lVar20 = *(long *)(*in_stack_00000150 + 0x60), lVar20 == 0)) goto LAB_02491464;
        if (*(int *)(*(long *)PTR_DAT_033ed410 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (*(int *)(lVar20 + 0x18) == 0)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        FUN_024e7d94(lVar20 + 0x20,0,0);
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        iVar8 = (int)unaff_x19[0x4d];
        in_stack_000000c0._4_4_ =
             **(float **)
               (*(long *)
                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
               0xb8);
        in_stack_000000b8 =
             *(undefined8 *)
              (*(float **)
                (*(long *)
                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
                0xb8) + 1);
        lVar20 = unaff_x19[0xea];
        in_stack_00000088 = (float *)in_stack_000000b8;
        fStack0000000000000090 = in_stack_000000c0._4_4_;
        if (iVar8 < 0x401) {
          if (iVar8 == 0x100) {
            if (lVar20 == 0) goto LAB_02491464;
            if (*(uint *)(lVar20 + 0x18) < 2)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            uVar15 = *(undefined8 *)(lVar20 + 0x30);
            if ((int)unaff_x19[0x5b] == 5) {
              if ((*in_stack_00000150 == 0) ||
                 (lVar38 = *(long *)(*in_stack_00000150 + 0x58), lVar38 == 0)) goto LAB_02491464;
              if (*(uint *)(lVar38 + 0x18) <= uStack0000000000000030)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              fVar51 = *(float *)(lVar38 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
            }
            else {
              fVar51 = *(float *)(unaff_x19 + 0x96);
            }
            fStack0000000000000090 = fStack000000000000002c + 0.0 + *(float *)(lVar20 + 0x2c);
            fVar51 = (0.0 - fVar51) - fStack0000000000000020;
          }
          else if (iVar8 == 0x200) {
            if (lVar20 == 0) goto LAB_02491464;
            if ((*(int *)(lVar20 + 0x18) == 1) || (*(int *)(lVar20 + 0x18) == 0))
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            fStack0000000000000090 = (*(float *)(lVar20 + 0x20) + *(float *)(lVar20 + 0x2c)) * 0.5;
            uVar15 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar20 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar20 + 0x30) >> 0x20)) * 0.5,
                              ((float)*(undefined8 *)(lVar20 + 0x24) +
                              (float)*(undefined8 *)(lVar20 + 0x30)) * 0.5);
            if ((int)unaff_x19[0x5b] == 5) {
              if ((*in_stack_00000150 == 0) ||
                 (lVar20 = *(long *)(*in_stack_00000150 + 0x58), lVar20 == 0)) goto LAB_02491464;
              if (*(uint *)(lVar20 + 0x18) <= uStack0000000000000030)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              lVar20 = lVar20 + (long)(int)uStack0000000000000030 * 0x14;
              fStack0000000000000090 = fStack000000000000002c + 0.0 + fStack0000000000000090;
              fVar51 = ((fStack0000000000000020 + *(float *)(lVar20 + 0x28) +
                        *(float *)(lVar20 + 0x30)) - fStack0000000000000024) * -0.5 + 0.0;
            }
            else {
              fStack0000000000000090 = fStack000000000000002c + 0.0 + fStack0000000000000090;
              fVar51 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x96) + in_stack_000017b8)
                       - fStack0000000000000024) * -0.5 + 0.0;
            }
          }
          else {
            if (iVar8 != 0x400) goto LAB_0248eb64;
            if (lVar20 == 0) goto LAB_02491464;
            if (*(int *)(lVar20 + 0x18) == 0)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            uVar15 = *(undefined8 *)(lVar20 + 0x24);
            if ((int)unaff_x19[0x5b] == 5) {
              if ((*in_stack_00000150 == 0) ||
                 (lVar38 = *(long *)(*in_stack_00000150 + 0x58), lVar38 == 0)) goto LAB_02491464;
              if (*(uint *)(lVar38 + 0x18) <= uStack0000000000000030)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              in_stack_000017b8 =
                   *(float *)(lVar38 + (long)(int)uStack0000000000000030 * 0x14 + 0x30);
            }
            fStack0000000000000090 = fStack000000000000002c + 0.0 + *(float *)(lVar20 + 0x20);
            fVar51 = fStack0000000000000024 + (0.0 - in_stack_000017b8);
          }
          in_stack_00000088 =
               (float *)CONCAT44((float)((ulong)uVar15 >> 0x20) + 0.0,(float)uVar15 + fVar51);
        }
        else if (iVar8 == 0x800) {
          if (lVar20 == 0) goto LAB_02491464;
          if ((*(int *)(lVar20 + 0x18) == 1) || (*(int *)(lVar20 + 0x18) == 0))
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          fVar51 = ((float)*(undefined8 *)(lVar20 + 0x24) + (float)*(undefined8 *)(lVar20 + 0x30)) *
                   0.5;
          fStack0000000000000090 =
               fStack000000000000002c + 0.0 +
               (*(float *)(lVar20 + 0x20) + *(float *)(lVar20 + 0x2c)) * 0.5;
          in_stack_00000088 =
               (float *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar20 + 0x24) >> 0x20) +
                                 (float)((ulong)*(undefined8 *)(lVar20 + 0x30) >> 0x20)) * 0.5 + 0.0
                                 ,fVar51 + 0.0);
        }
        else {
          if (iVar8 == 0x1000) {
            if (lVar20 == 0) goto LAB_02491464;
            if ((*(int *)(lVar20 + 0x18) == 1) || (*(int *)(lVar20 + 0x18) == 0))
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            fVar51 = (float)*(undefined8 *)(lVar20 + 0x24) + (float)*(undefined8 *)(lVar20 + 0x30);
            fVar48 = (float)((ulong)*(undefined8 *)(lVar20 + 0x24) >> 0x20) +
                     (float)((ulong)*(undefined8 *)(lVar20 + 0x30) >> 0x20);
            fStack0000000000000020 =
                 fStack0000000000000020 + *(float *)(unaff_x19 + 0x9c) +
                 *(float *)(unaff_x19 + 0x9b);
            fStack0000000000000090 =
                 fStack000000000000002c + 0.0 +
                 (*(float *)(lVar20 + 0x20) + *(float *)(lVar20 + 0x2c)) * 0.5;
          }
          else {
            if (iVar8 != 0x2000) goto LAB_0248eb64;
            if (lVar20 == 0) goto LAB_02491464;
            if ((*(int *)(lVar20 + 0x18) == 1) || (*(int *)(lVar20 + 0x18) == 0))
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            fVar51 = (float)*(undefined8 *)(lVar20 + 0x24) + (float)*(undefined8 *)(lVar20 + 0x30);
            fVar48 = (float)((ulong)*(undefined8 *)(lVar20 + 0x24) >> 0x20) +
                     (float)((ulong)*(undefined8 *)(lVar20 + 0x30) >> 0x20);
            fStack0000000000000020 = *(float *)((long)unaff_x19 + 0x4b4) - fStack0000000000000020;
            fStack0000000000000090 =
                 fStack000000000000002c + 0.0 +
                 (*(float *)(lVar20 + 0x20) + *(float *)(lVar20 + 0x2c)) * 0.5;
          }
          fVar51 = fVar51 * 0.5;
          in_stack_00000088 =
               (float *)CONCAT44(fVar48 * 0.5 + 0.0,
                                 fVar51 + (0.0 - (fStack0000000000000020 - fStack0000000000000024) *
                                                 0.5));
        }
LAB_0248eb64:
        lVar20 = FUN_0249b7f8();
        if (lVar20 == 0) goto LAB_02491464;
        FUN_026a125c(lVar20,0);
        __x = DAT_028aa048;
        *(float *)((long)unaff_x19 + 0x6dc) = fVar51;
        dVar46 = modf(__x,(double *)&stack0x00000880);
        puVar4 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
        if (dVar46 == 0.5) {
          fVar48 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
          if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
            fVar48 = fVar48 + 1.0;
          }
        }
        else {
          fVar48 = 255.0;
        }
        dVar46 = modf(__x,(double *)&stack0x00000880);
        if (dVar46 == 0.5) {
          fVar44 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
          if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
            fVar44 = fVar44 + 1.0;
          }
        }
        else {
          fVar44 = 255.0;
        }
        dVar46 = modf(__x,(double *)&stack0x00000880);
        if (dVar46 == 0.5) {
          fVar47 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
          if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
            fVar47 = fVar47 + 1.0;
          }
        }
        else {
          fVar47 = 255.0;
        }
        dVar46 = modf(__x,(double *)&stack0x00000880);
        if (dVar46 == 0.5) {
          fVar45 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
          if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
            fVar45 = fVar45 + 1.0;
          }
        }
        else {
          fVar45 = 255.0;
        }
        modf(__x,(double *)&stack0x00000880);
        modf(__x,(double *)&stack0x00000880);
        modf(__x,(double *)&stack0x00000880);
        modf(__x,(double *)&stack0x00000880);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (DAT_037825d3 == '\0') {
          thunk_FUN_00d48444(Unity_AI_Navigation_NavMeshLink_TypeInfo);
          DAT_037825d3 = '\x01';
        }
        puVar4 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
        lVar20 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
        if (*(int *)(lVar20 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar20 = *(long *)puVar4;
        }
        puVar21 = *(undefined4 **)(lVar20 + 0xb8);
        UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
                  (*puVar21,puVar21[1],puVar21[2],puVar21[3],&stack0x00001790,0x4000ffff,0);
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar20 = *in_stack_00000150;
        if (lVar20 == 0) goto LAB_02491464;
        uVar9 = *in_stack_00000148;
        if ((int)uVar9 < 1) {
          iStack00000000000000a4 = 0;
          iVar37 = 0;
          plVar41 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
          goto LAB_02491068;
        }
        lVar20 = *(long *)(lVar20 + 0x38);
        if (lVar20 == 0) goto LAB_02491464;
        bVar7 = false;
        fStack00000000000000e4 = 0.0;
        fStack00000000000000e8 = 0.0;
        fStack00000000000000ec = 0.0;
        iStack00000000000000a4 = 0;
        fStack0000000000000024 = 0.0;
        bVar6 = false;
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
             (int)fVar48 & 0xffU | ((int)fVar44 & 0xffU) << 8 | ((int)fVar47 & 0xffU) << 0x10 |
             (int)fVar45 << 0x18;
        fVar44 = 0.0;
        fVar48 = 0.0;
        _in_stack_00000128 = 0x2e0;
        fStack0000000000000098 = fStack00000000000000a8;
        in_stack_000000a0 = fStack00000000000000ac;
        fStack000000000000004c = fStack00000000000000ac;
        fStack0000000000000050 = (float)uStack0000000000000094;
        in_stack_00000078._4_4_ = fStack00000000000000a8;
        in_stack_00000068._4_4_ = fStack00000000000000ac;
        uStack0000000000000060 = uStack0000000000000094;
        uVar23 = 0;
        uVar28 = 1;
        goto LAB_0248ef74;
      }
      if (*(uint *)(lVar20 + 0x18) <= in_stack_00001788)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      in_stack_000017bc = *(uint *)(lVar20 + (long)(int)in_stack_00001788 * 0xc + 0x20);
      if (in_stack_000017bc == 0) goto LAB_0248e4dc;
      if (5 < in_stack_00000140._4_4_) {
        uVar15 = FUN_0176eb1c(&stack0x000017bc,0);
        uVar11 = FUN_0176eb1c(&stack0x00001788,0);
        uVar15 = FUN_0160073c(*(undefined8 *)UnityEngine_Rendering_Universal_DebugValidationMode_var
                              ,uVar15,*(undefined8 *)
                                       Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                              ,uVar11,0);
        if (*(int *)(*plVar41 + 0xe0) == 0) {
          thunk_FUN_00d32864(*plVar41);
        }
        FUN_026610e4(uVar15,0);
        in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
      }
      if ((*(char *)((long)unaff_x19 + 0x2fa) == '\0') || (in_stack_000017bc != 0x3c)) {
        if ((*in_stack_00000150 == 0) ||
           (lVar20 = *(long *)(*in_stack_00000150 + 0x38), lVar20 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar20 + 0x18) <= *in_stack_00000148)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar20 = lVar20 + (int)*in_stack_00000148 * unaff_x21;
        *(undefined4 *)((long)unaff_x19 + 0x63c) = *(undefined4 *)(lVar20 + 0x2c);
        *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar20 + 0x58);
        unaff_x19[0x1f] = *(long *)(lVar20 + 0x38);
      }
      else {
        *(undefined1 *)((long)unaff_x19 + 0x429) = 1;
        *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
        uVar14 = FUN_024d0688();
        if (((uVar14 & 1) != 0) &&
           (in_stack_00001788 = in_stack_0000176c, uVar58 = in_stack_000017bc,
           *(int *)((long)unaff_x19 + 0x63c) == 0)) goto LAB_0248ab98;
      }
      if ((unaff_x19[0x6c] == 0) || (lVar20 = *(long *)(unaff_x19[0x6c] + 0x38), lVar20 == 0))
      goto LAB_02491464;
      uVar9 = *in_stack_00000148;
      if (*(uint *)(lVar20 + 0x18) <= uVar9)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar30 = (long)(int)uVar9;
      cVar19 = *(char *)(lVar20 + lVar30 * unaff_x21 + 0x5c);
      *(undefined1 *)((long)unaff_x19 + 0x429) = 0;
      lVar38 = unaff_x19[0x23];
      if ((uint)in_stack_000017a8 == uVar9) {
        in_stack_000017bc = (uint)((ulong)in_stack_000017a8 >> 0x20);
        unaff_w20 = 1;
        *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
        if (in_stack_000017bc == 0x2026) {
          lVar12 = unaff_x19[0xc9];
          lVar20 = lVar20 + lVar30 * unaff_x21;
          *(undefined4 *)(lVar20 + 0x2c) = 0;
          *(long *)(lVar20 + 0x30) = lVar12;
          *(long *)(lVar20 + 0x38) = unaff_x19[0xca];
          *(long *)(lVar20 + 0x50) = unaff_x19[0xcb];
          *(int *)(lVar20 + 0x58) = (int)unaff_x19[0xcc];
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
          in_stack_000017a8 = CONCAT44(3,uVar9 + 1);
        }
        else if (in_stack_000017bc == 3) {
          if ((*unaff_x27 == 0) || (lVar12 = FUN_024b11ac(*unaff_x27,0), lVar12 == 0))
          goto LAB_02491464;
          in_stack_00000bf8 = 3;
          FUN_01299bc0(lVar12,&stack0x00000bf8,&stack0x00000880,*(undefined8 *)PTR_DAT_033ef3c8);
          if (*(uint *)(lVar20 + 0x18) <= uVar9)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          unaff_w20 = 1;
          *(ulong *)(lVar20 + lVar30 * unaff_x21 + 0x30) =
               CONCAT44(in_stack_00000884,in_stack_00000880);
          uVar9 = *(uint *)((long)unaff_x19 + 0x48c);
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        }
      }
      else {
        unaff_w20 = 0;
      }
      plVar24 = (long *)System_Threading_Mutex_TypeInfo;
      if (((int)uVar9 < *(int *)((long)unaff_x19 + 0x31c)) && (in_stack_000017bc != 3)) {
        if ((*in_stack_00000150 == 0) ||
           (lVar20 = *(long *)(*in_stack_00000150 + 0x38), lVar20 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar20 + 0x18) <= uVar9)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar20 = lVar20 + (long)(int)uVar9 * (long)iVar37;
        *(undefined1 *)(lVar20 + 0x194) = 0;
        *(undefined2 *)(lVar20 + 0x20) = 0x200b;
        *(undefined4 *)(lVar20 + 100) = 0;
        *in_stack_00000148 = uVar9 + 1;
        uVar58 = in_stack_000017bc;
        goto LAB_0248ab98;
      }
      iVar8 = *(int *)((long)unaff_x19 + 0x63c);
      in_stack_00000100 = fVar51;
      if (iVar8 == 0) {
        uVar9 = *(uint *)((long)unaff_x19 + 0x254);
        if ((uVar9 >> 4 & 1) == 0) {
          if ((uVar9 >> 3 & 1) == 0) {
            if ((uVar9 >> 5 & 1) != 0) {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar14 = FUN_016f92d4(in_stack_000017bc,0);
              if ((uVar14 & 1) != 0) {
                if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar9 = FUN_016f95a8(in_stack_000017bc,0);
                in_stack_000017bc = uVar9 & 0xffff;
                in_stack_00000100 = fStack0000000000000028;
              }
            }
          }
          else {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar14 = FUN_016f9218(in_stack_000017bc,0);
            if ((uVar14 & 1) != 0) {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar9 = FUN_016f9724(in_stack_000017bc,0);
              goto LAB_0248af70;
            }
          }
        }
        else {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar14 = FUN_016f92d4(in_stack_000017bc,0);
          in_stack_00000100 = 1.0;
          if ((uVar14 & 1) != 0) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar9 = FUN_016f95a8(in_stack_000017bc,0);
LAB_0248af70:
            in_stack_000017bc = uVar9 & 0xffff;
            in_stack_00000100 = 1.0;
          }
        }
        iVar8 = *(int *)((long)unaff_x19 + 0x63c);
        if (iVar8 == 0) goto LAB_0248af84;
LAB_0248abc8:
        if (iVar8 != 1) {
          lVar20 = *in_stack_00000150;
          fVar51 = 0.0;
          if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
            fVar51 = fStack0000000000000118;
          }
          in_stack_00000138 = 0.0;
          if (lVar20 == 0) goto LAB_02491464;
          in_stack_00000128 = 0.0;
          in_stack_00000120 = 0.0;
          in_stack_000000d0 = fStack0000000000000118;
          goto LAB_0248b39c;
        }
        if ((*in_stack_00000150 == 0) ||
           (lVar20 = *(long *)(*in_stack_00000150 + 0x38), lVar20 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar20 + 0x18) <= *in_stack_00000148)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar20 = lVar20 + (int)*in_stack_00000148 * unaff_x21;
        lVar30 = *(long *)(lVar20 + 0x40);
        unaff_x19[0xd2] = lVar30;
        *(undefined4 *)((long)unaff_x19 + 0x69c) = *(undefined4 *)(lVar20 + 0x48);
        if ((lVar30 == 0) || (lVar20 = FUN_024ebfa0(lVar30,0), lVar20 == 0)) goto LAB_02491464;
        FUN_0132138c(lVar20,*(undefined4 *)((long)unaff_x19 + 0x69c),&stack0x00000880,
                     *(undefined8 *)System_Func<KeyValuePair<int,_int>,_int>_TypeInfo);
        puVar4 = System_Threading_Mutex_TypeInfo;
        lVar30 = CONCAT44(in_stack_00000884,in_stack_00000880);
        plVar24 = (long *)System_Threading_Mutex_TypeInfo;
        uVar58 = in_stack_000017bc;
        if (lVar30 != 0) {
          if (in_stack_000017bc == 0x3c) {
            in_stack_000017bc = *(int *)((long)unaff_x19 + 0x69c) + 0xe000;
          }
          else {
            lVar20 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar20 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar20 = *(long *)puVar4;
            }
            *(undefined4 *)((long)unaff_x19 + 0x1b4) =
                 *(undefined4 *)(*(long *)(lVar20 + 0xb8) + 0x68);
          }
          if (unaff_x19[0x1f] == 0) goto LAB_02491464;
          fVar48 = *(float *)(unaff_x19 + 0x3c);
          memmove(&stack0x00001700,(void *)(unaff_x19[0x1f] + 0x50),0x60);
          iVar8 = FUN_026fd110(&stack0x00001700,0);
          if (*unaff_x27 == 0) goto LAB_02491464;
          memmove(&stack0x00001700,(void *)(*unaff_x27 + 0x50),0x60);
          fVar47 = (float)FUN_026fd120(&stack0x00001700,0);
          fVar44 = fStack0000000000000084;
          if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
            fVar44 = 1.0;
          }
          if (unaff_x19[0xd2] == 0) goto LAB_02491464;
          fVar44 = (fVar48 / (float)iVar8) * fVar47 * fVar44;
          iVar8 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
          fVar48 = *(float *)(unaff_x19 + 0x3c);
          if (iVar8 < 1) {
            if (*unaff_x27 == 0) goto LAB_02491464;
            iVar8 = FUN_026fd110(*unaff_x27 + 0x50,0);
            if (*unaff_x27 == 0) goto LAB_02491464;
            fVar47 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
            in_stack_00000120 = fStack0000000000000084;
            if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
              in_stack_00000120 = fVar51;
            }
            if (unaff_x19[0x1f] == 0) goto LAB_02491464;
            fVar51 = (float)FUN_026fd140(unaff_x19[0x1f] + 0x50,0);
            if (*(long *)(lVar30 + 0x20) == 0) goto LAB_02491464;
            FUN_026fd62c(&stack0x00000880,*(long *)(lVar30 + 0x20),0);
            unaff_x28[0x1cd] = unaff_x28[1];
            unaff_x28[0x1cc] = *unaff_x28;
            fVar45 = (float)FUN_026fd45c(&stack0x000016e0,0);
            if (*(long *)(lVar30 + 0x20) == 0) goto LAB_02491464;
            fVar42 = *(float *)(lVar30 + 0x2c);
            fVar43 = (float)FUN_026fd668(*(long *)(lVar30 + 0x20),0);
            if (*unaff_x27 == 0) goto LAB_02491464;
            in_stack_00000128 = (float)FUN_026fd140(*unaff_x27 + 0x50,0);
            if (*unaff_x27 == 0) goto LAB_02491464;
            fVar54 = (float)FUN_026fd170(*unaff_x27 + 0x50,0);
            if (*unaff_x27 == 0) goto LAB_02491464;
            fVar50 = *(float *)((long)unaff_x19 + 0x3fc);
            in_stack_00000138 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
            if (unaff_x19[0x1f] == 0) goto LAB_02491464;
            in_stack_00000138 = fVar44 * fVar54 * fVar50 * in_stack_00000138;
            in_stack_00000120 = (fVar48 / (float)iVar8) * fVar47 * in_stack_00000120;
            in_stack_000000d0 = in_stack_00000120 * (fVar51 / fVar45) * fVar42 * fVar43;
            in_stack_00000120 = in_stack_00000120 / in_stack_000000d0;
            in_stack_00000128 = in_stack_00000120 * in_stack_00000128;
            fVar51 = (float)FUN_026fd180(unaff_x19[0x1f] + 0x50,0);
            in_stack_00000120 = in_stack_00000120 * fVar51;
          }
          else {
            if (unaff_x19[0xd2] == 0) goto LAB_02491464;
            iVar8 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
            if (unaff_x19[0xd2] == 0) goto LAB_02491464;
            fVar51 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
            if (*(long *)(lVar30 + 0x20) == 0) goto LAB_02491464;
            fVar45 = *(float *)(lVar30 + 0x2c);
            fVar47 = fStack0000000000000084;
            if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
              fVar47 = 1.0;
            }
            fVar42 = (float)FUN_026fd668(*(long *)(lVar30 + 0x20),0);
            if (unaff_x19[0xd2] == 0) goto LAB_02491464;
            in_stack_00000128 = (float)FUN_026fd140(unaff_x19[0xd2] + 0x48,0);
            if (unaff_x19[0xd2] == 0) goto LAB_02491464;
            fVar43 = (float)FUN_026fd170(unaff_x19[0xd2] + 0x48,0);
            if (unaff_x19[0xd2] == 0) goto LAB_02491464;
            fVar54 = *(float *)((long)unaff_x19 + 0x3fc);
            in_stack_00000138 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
            if (unaff_x19[0xd2] == 0) goto LAB_02491464;
            in_stack_00000138 = fVar44 * fVar43 * fVar54 * in_stack_00000138;
            in_stack_000000d0 = (fVar48 / (float)iVar8) * fVar51 * fVar47 * fVar45 * fVar42;
            in_stack_00000120 = (float)FUN_026fd180(unaff_x19[0xd2] + 0x48,0);
          }
          lVar20 = unaff_x19[0x6c];
          unaff_x19[200] = lVar30;
          if ((lVar20 == 0) || (lVar30 = *(long *)(lVar20 + 0x38), lVar30 == 0)) goto LAB_02491464;
          if (*(uint *)(lVar30 + 0x18) <= *in_stack_00000148)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          lVar30 = lVar30 + (int)*in_stack_00000148 * unaff_x21;
          *(undefined4 *)(lVar30 + 0x2c) = 1;
          *(float *)(lVar30 + 0x160) = in_stack_000000d0;
          in_stack_00000130._4_4_ = 0.0;
          *(long *)(lVar30 + 0x40) = unaff_x19[0xd2];
          *(long *)(lVar30 + 0x38) = unaff_x19[0x1f];
          *(int *)(lVar30 + 0x58) = (int)unaff_x19[0x23];
          *(int *)(unaff_x19 + 0x23) = (int)lVar38;
          goto LAB_0248b384;
        }
        goto LAB_0248ab98;
      }
      if (iVar8 != 0) goto LAB_0248abc8;
LAB_0248af84:
      if ((*in_stack_00000150 == 0) || (lVar20 = *(long *)(*in_stack_00000150 + 0x38), lVar20 == 0))
      goto LAB_02491464;
      uVar23 = *in_stack_00000148;
      uVar9 = *(uint *)(lVar20 + 0x18);
      if (uVar9 <= uVar23)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar38 = *(long *)(lVar20 + (int)uVar23 * unaff_x21 + 0x30);
      unaff_x19[200] = lVar38;
      plVar24 = (long *)System_Threading_Mutex_TypeInfo;
      uVar58 = in_stack_000017bc;
    } while (lVar38 == 0);
    lVar30 = lVar20 + (int)uVar23 * unaff_x21;
    lVar38 = *(long *)(lVar30 + 0x38);
    unaff_x19[0x1f] = lVar38;
    unaff_x19[0x22] = *(long *)(lVar30 + 0x50);
    *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar30 + 0x58);
    if (unaff_w20 == 0) {
LAB_0248b014:
      if (lVar38 == 0) goto LAB_02491464;
      fVar48 = *(float *)(unaff_x19 + 0x3c);
      iVar8 = FUN_026fd110(lVar38 + 0x50,0);
      lVar20 = unaff_x19[0x1f];
    }
    else {
      lVar30 = unaff_x19[0x8e];
      if (lVar30 == 0) goto LAB_02491464;
      if (*(uint *)(lVar30 + 0x18) <= in_stack_00001788)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if ((*(int *)(lVar30 + (long)(int)in_stack_00001788 * 0xc + 0x20) != 10) ||
         (uVar23 == *(uint *)(unaff_x19 + 0x92))) goto LAB_0248b014;
      if (uVar9 <= uVar23 - 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (lVar38 == 0) goto LAB_02491464;
      fVar48 = *(float *)(lVar20 + (long)(int)(uVar23 - 1) * (long)iVar37 + 0x60);
      iVar8 = FUN_026fd110(lVar38 + 0x50,0);
      lVar20 = *unaff_x27;
    }
    if (lVar20 == 0) goto LAB_02491464;
    fVar47 = (float)FUN_026fd120(lVar20 + 0x50,0);
    fVar44 = fStack0000000000000084;
    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
      fVar44 = fVar51;
    }
    in_stack_00000120 = 0.0;
    in_stack_00000128 = 0.0;
    if ((unaff_w20 & in_stack_000017bc == 0x2026) == 0) {
      if (*unaff_x27 == 0) goto LAB_02491464;
      in_stack_00000128 = (float)FUN_026fd140(*unaff_x27 + 0x50,0);
      if (*unaff_x27 == 0) goto LAB_02491464;
      in_stack_00000120 = (float)FUN_026fd180(*unaff_x27 + 0x50,0);
    }
    lVar20 = unaff_x19[200];
    if ((lVar20 == 0) || (*(long *)(lVar20 + 0x20) == 0)) goto LAB_02491464;
    fVar51 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar45 = *(float *)(lVar20 + 0x2c);
    in_stack_000000d0 = (float)FUN_026fd668(*(long *)(lVar20 + 0x20),0);
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar42 = (float)FUN_026fd170(*unaff_x27 + 0x50,0);
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar43 = *(float *)((long)unaff_x19 + 0x3fc);
    in_stack_00000138 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
    lVar20 = unaff_x19[0x6c];
    if ((lVar20 == 0) || (lVar38 = *(long *)(lVar20 + 0x38), lVar38 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar38 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar38 = lVar38 + (int)*in_stack_00000148 * unaff_x21;
    *(undefined4 *)(lVar38 + 0x2c) = 0;
    fVar44 = ((in_stack_00000100 * fVar48) / (float)iVar8) * fVar47 * fVar44;
    in_stack_000000d0 = fVar44 * fVar51 * fVar45 * in_stack_000000d0;
    *(float *)(lVar38 + 0x160) = in_stack_000000d0;
    uVar9 = *(uint *)(unaff_x19 + 0x23);
    in_stack_00000138 = fVar44 * fVar42 * fVar43 * in_stack_00000138;
    if (uVar9 == 0) {
      in_stack_00000130._4_4_ = *(float *)(unaff_x19 + 0xc2);
    }
    else {
      lVar38 = unaff_x19[0xe0];
      if (lVar38 == 0) goto LAB_02491464;
      if (*(uint *)(lVar38 + 0x18) <= uVar9)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar38 = *(long *)(lVar38 + (long)(int)uVar9 * 8 + 0x20);
      if (lVar38 == 0) goto LAB_02491464;
      in_stack_00000130._4_4_ = *(float *)(lVar38 + 0x4c);
    }
LAB_0248b384:
    fVar51 = 0.0;
    if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
      fVar51 = in_stack_000000d0;
    }
LAB_0248b39c:
    lVar20 = *(long *)(lVar20 + 0x38);
    if (lVar20 == 0) goto LAB_02491464;
    if (*(uint *)(lVar20 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar20 = lVar20 + (int)*in_stack_00000148 * unaff_x21;
    *(short *)(lVar20 + 0x20) = (short)in_stack_000017bc;
    *(int *)(lVar20 + 0x60) = (int)unaff_x19[0x3c];
    *(undefined4 *)(lVar20 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4e4);
    if ((unaff_x19[0x6c] == 0) || (lVar20 = *(long *)(unaff_x19[0x6c] + 0x38), lVar20 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar20 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(int *)(lVar20 + (int)*in_stack_00000148 * unaff_x21 + 0x168) = (int)unaff_x19[0x2a];
    if ((unaff_x19[0x6c] == 0) || (lVar20 = *(long *)(unaff_x19[0x6c] + 0x38), lVar20 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar20 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(undefined4 *)(lVar20 + (int)*in_stack_00000148 * unaff_x21 + 0x170) =
         *(undefined4 *)((long)unaff_x19 + 0x154);
    if ((unaff_x19[0x6c] == 0) || (lVar20 = *(long *)(unaff_x19[0x6c] + 0x38), lVar20 == 0))
    goto LAB_02491464;
    uVar9 = *in_stack_00000148;
    FUN_013b78b8(in_stack_000000b8,&stack0x00000880,
                 *(undefined8 *)TMPro_TMP_Dropdown_OptionData_TypeInfo);
    if (*(uint *)(lVar20 + 0x18) <= uVar9)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    uVar11 = unaff_x28[1];
    uVar15 = *unaff_x28;
    lVar20 = lVar20 + (int)uVar9 * unaff_x21;
    *(undefined4 *)(lVar20 + 0x18c) = in_stack_00000890;
    *(undefined8 *)(lVar20 + 0x184) = uVar11;
    *(undefined8 *)(lVar20 + 0x17c) = uVar15;
    if ((*in_stack_00000150 == 0) || (lVar20 = *(long *)(*in_stack_00000150 + 0x38), lVar20 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar20 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(undefined4 *)(lVar20 + (int)*in_stack_00000148 * unaff_x21 + 400) =
         *(undefined4 *)((long)unaff_x19 + 0x254);
    if ((unaff_x19[200] == 0) || (lVar20 = *(long *)(unaff_x19[200] + 0x20), lVar20 == 0))
    goto LAB_02491464;
    FUN_026fd62c(&stack0x00000bf8,lVar20,0);
    unaff_x28[0x1df] = in_stack_00000c00;
    unaff_x28[0x1de] = CONCAT44(in_stack_00000bfc,in_stack_00000bf8);
    if ((int)in_stack_000017bc < 0x10000) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar9 = FUN_016f68bc(in_stack_000017bc,0);
      unaff_w29 = uVar9 & 1;
    }
    else {
      unaff_w29 = 0;
    }
    fStack00000000000000cc = *(float *)(unaff_x19 + 0x54);
    *(undefined4 *)((long)unaff_x19 + 0x2f4) = 0;
    if (*(char *)((long)unaff_x19 + 0x2f1) == '\0') {
      in_stack_000000b0 = 0.0;
      fVar44 = 0.0;
      fVar48 = 0.0;
    }
    else {
      if (unaff_x19[200] == 0) goto LAB_02491464;
      uVar23 = *in_stack_00000148;
      uVar9 = *(uint *)(unaff_x19[200] + 0x28);
      if ((int)uVar23 < (int)in_stack_00000078._4_4_) {
        if ((*in_stack_00000150 == 0) ||
           (lVar20 = *(long *)(*in_stack_00000150 + 0x38), lVar20 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar20 + 0x18) <= uVar23 + 1)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar20 = *(long *)(lVar20 + (long)(int)(uVar23 + 1) * (long)iVar37 + 0x30);
        if ((((lVar20 == 0) || (*unaff_x27 == 0)) ||
            (lVar38 = *(long *)(*unaff_x27 + 0x128), lVar38 == 0)) ||
           (lVar38 = *(long *)(lVar38 + 0x18), lVar38 == 0)) goto LAB_02491464;
        in_stack_00000880 = uVar9 | *(int *)(lVar20 + 0x28) << 0x10;
        uVar13 = FUN_0129eff4(lVar38,&stack0x00000880,&stack0x000016d8,
                              *(undefined8 *)
                               Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                             );
        uVar56 = 0;
        if ((uVar13 & 1) == 0) {
          in_stack_000000b0 = 0.0;
          fVar44 = 0.0;
          fVar48 = 0.0;
        }
        else {
          if (in_stack_000016d8 == 0) goto LAB_02491464;
          fVar48 = *(float *)(in_stack_000016d8 + 0x14);
          fVar44 = *(float *)(in_stack_000016d8 + 0x18);
          in_stack_000000b0 = *(float *)(in_stack_000016d8 + 0x1c);
          uVar56 = *(undefined4 *)(in_stack_000016d8 + 0x20);
          if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
            fStack00000000000000cc = 0.0;
          }
        }
        uVar23 = *in_stack_00000148;
      }
      else {
        uVar56 = 0;
        in_stack_000000b0 = 0.0;
        fVar44 = 0.0;
        fVar48 = 0.0;
      }
      if (0 < (int)uVar23) {
        if ((*in_stack_00000150 == 0) ||
           (lVar20 = *(long *)(*in_stack_00000150 + 0x38), lVar20 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar20 + 0x18) <= (uint)((long)(int)uVar23 + -1))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar20 = *(long *)(lVar20 + ((long)(int)uVar23 + -1) * unaff_x21 + 0x30);
        if (((lVar20 == 0) || (*unaff_x27 == 0)) ||
           ((lVar38 = *(long *)(*unaff_x27 + 0x128), lVar38 == 0 ||
            (lVar38 = *(long *)(lVar38 + 0x18), lVar38 == 0)))) goto LAB_02491464;
        in_stack_00000880 = *(uint *)(lVar20 + 0x28) | uVar9 << 0x10;
        uVar13 = FUN_0129eff4(lVar38,&stack0x00000880,&stack0x000016d8,
                              *(undefined8 *)
                               Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                             );
        if ((uVar13 & 1) != 0) {
          if ((in_stack_000016d8 == 0) ||
             (fVar48 = (float)FUN_024bb1bc(fVar48,fVar44,in_stack_000000b0,uVar56,
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
      fVar45 = *(float *)(unaff_x19 + 199);
      fVar47 = (float)FUN_026fd474(&stack0x00001770,0);
      fVar45 = fVar45 - fVar51 * fVar47 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
      *(float *)(unaff_x19 + 199) = fVar45;
      if ((unaff_w29 != 0) || (in_stack_000017bc == 0x200b)) {
        *(float *)(unaff_x19 + 199) =
             fVar45 - fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
      }
    }
    fVar47 = *(float *)(unaff_x19 + 0x55);
    fStack0000000000000080 = 0.0;
    if (fVar47 != 0.0) {
      fVar45 = (float)FUN_026fd454(&stack0x00001770,0);
      fVar42 = (float)FUN_026fd464(&stack0x00001770,0);
      fStack0000000000000080 =
           (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
           (fVar47 * 0.5 - fVar51 * (fVar45 * 0.5 + fVar42));
      *(float *)(unaff_x19 + 199) = *(float *)(unaff_x19 + 199) + fStack0000000000000080;
    }
    if (((cVar19 == '\0') && (*(int *)((long)unaff_x19 + 0x63c) == 0)) &&
       ((*(byte *)((long)unaff_x19 + 0x254) & 1) != 0)) {
      lVar20 = unaff_x19[0x22];
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar13 = FUN_02681b9c(lVar20,0,0);
      in_stack_00000110._4_4_ = 0.0;
      if ((uVar13 & 1) != 0) {
        lVar20 = unaff_x19[0x22];
        if (*(int *)(*(long *)
                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar24 = (long *)
                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
        ;
        if (lVar20 == 0) goto LAB_02491464;
        uVar13 = FUN_0267e1d8(lVar20,*(undefined4 *)
                                      (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                + 0xb8) + 0x54),0);
        if ((uVar13 & 1) != 0) {
          lVar20 = unaff_x19[0x22];
          if (*(int *)(*plVar24 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            plVar24 = (long *)
                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
            ;
          }
          if (lVar20 == 0) goto LAB_02491464;
          fVar47 = (float)FUN_0267f610(lVar20,*(undefined4 *)(*(long *)(*plVar24 + 0xb8) + 0x54),0);
          if ((*unaff_x27 == 0) || (unaff_x19[0x22] == 0)) goto LAB_02491464;
          fVar45 = *(float *)(*unaff_x27 + 0x1b0);
          in_stack_00000110._4_4_ =
               (float)FUN_0267f610(unaff_x19[0x22],
                                   *(undefined4 *)
                                    (*(long *)(*(long *)
                                                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                              + 0xb8) + 0xcc),0);
          in_stack_00000110._4_4_ = in_stack_00000110._4_4_ * fVar47 * fVar45 * 0.25;
          if (fVar47 < in_stack_00000130._4_4_ + in_stack_00000110._4_4_) {
            in_stack_00000130._4_4_ = fVar47 - in_stack_00000110._4_4_;
          }
        }
      }
      if (*unaff_x27 == 0) goto LAB_02491464;
      in_stack_000000c0._4_4_ = *(float *)(*unaff_x27 + 0x1b4);
    }
    else {
      lVar20 = unaff_x19[0x22];
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar13 = FUN_02681b9c(lVar20,0,0);
      in_stack_000000c0._4_4_ = 0.0;
      if ((uVar13 & 1) != 0) {
        lVar20 = unaff_x19[0x22];
        if (*(int *)(*(long *)
                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar24 = (long *)
                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
        ;
        if (lVar20 == 0) goto LAB_02491464;
        uVar13 = FUN_0267e1d8(lVar20,*(undefined4 *)
                                      (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                + 0xb8) + 0x54),0);
        if ((uVar13 & 1) != 0) {
          lVar20 = unaff_x19[0x22];
          if (*(int *)(*plVar24 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            plVar24 = (long *)
                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
            ;
          }
          if (lVar20 == 0) goto LAB_02491464;
          uVar13 = FUN_0267e1d8(lVar20,*(undefined4 *)(*(long *)(*plVar24 + 0xb8) + 0xcc),0);
          if ((uVar13 & 1) != 0) {
            lVar20 = unaff_x19[0x22];
            if (*(int *)(*plVar24 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              plVar24 = (long *)
                        Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
              ;
            }
            if (lVar20 != 0) {
              fVar47 = (float)FUN_0267f610(lVar20,*(undefined4 *)(*(long *)(*plVar24 + 0xb8) + 0x54)
                                           ,0);
              if ((*unaff_x27 != 0) && (unaff_x19[0x22] != 0)) {
                fVar45 = *(float *)(*unaff_x27 + 0x1a8);
                in_stack_00000110._4_4_ =
                     (float)FUN_0267f610(unaff_x19[0x22],
                                         *(undefined4 *)
                                          (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                  + 0xb8) + 0xcc),0);
                in_stack_00000110._4_4_ = in_stack_00000110._4_4_ * fVar47 * fVar45 * 0.25;
                if (fVar47 < in_stack_00000130._4_4_ + in_stack_00000110._4_4_) {
                  in_stack_00000130._4_4_ = fVar47 - in_stack_00000110._4_4_;
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
    fVar45 = *(float *)(unaff_x19 + 199);
    fVar47 = (float)FUN_026fd464(&stack0x00001770,0);
    unaff_s15 = fVar45 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                         fVar51 * (fVar48 + ((fVar47 - in_stack_00000130._4_4_) -
                                            in_stack_00000110._4_4_));
    fVar48 = (float)FUN_026fd46c(&stack0x00001770,0);
    unaff_s14 = *(float *)((long)unaff_x19 + 0x614) +
                ((in_stack_00000138 + fVar51 * (fVar44 + in_stack_00000130._4_4_ + fVar48)) -
                *(float *)(unaff_x19 + 0x9a));
    fVar48 = (float)FUN_026fd45c(&stack0x00001770,0);
    unaff_s10 = unaff_s14 - fVar51 * (in_stack_00000130._4_4_ + in_stack_00000130._4_4_ + fVar48);
    fVar48 = (float)FUN_026fd454(&stack0x00001770,0);
    param_4 = unaff_s15 +
              (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
              fVar51 * (in_stack_00000110._4_4_ + in_stack_00000110._4_4_ +
                       in_stack_00000130._4_4_ + in_stack_00000130._4_4_ + fVar48);
    unaff_s9 = unaff_s15;
    unaff_s8 = param_4;
    if (((*(int *)((long)unaff_x19 + 0x63c) == 0) && (cVar19 == '\0')) &&
       ((*(byte *)((long)unaff_x19 + 0x254) >> 1 & 1) != 0)) {
      fVar47 = (float)(int)unaff_x19[0xbd] * fStack000000000000004c;
      fVar48 = (float)FUN_026fd46c(&stack0x00001770,0);
      fVar45 = fVar47 * fVar51 * (in_stack_00000110._4_4_ + in_stack_00000130._4_4_ + fVar48);
      fVar48 = (float)FUN_026fd46c(&stack0x00001770,0);
      fVar44 = (float)FUN_026fd45c(&stack0x00001770,0);
      unaff_s14 = unaff_s14 + 0.0;
      unaff_s10 = unaff_s10 + 0.0;
      fVar47 = fVar47 * fVar51 * (((fVar48 - fVar44) - in_stack_00000130._4_4_) -
                                 in_stack_00000110._4_4_);
      fVar44 = param_4 + fVar45;
      fVar48 = unaff_s15 + fVar45;
      fVar45 = (fVar45 - fVar47) * 0.5;
      unaff_s15 = (unaff_s15 + fVar47) - fVar45;
      param_4 = (param_4 + fVar47) - fVar45;
      unaff_s9 = fVar48 - fVar45;
      unaff_s8 = fVar44 - fVar45;
    }
    _fStack0000000000000118 = (ulong)(uint)fVar51;
    unaff_x25 = in_stack_00000150;
    unaff_x26 = in_stack_00000148;
    if (*(char *)((long)unaff_x19 + 0x46c) == '\0') goto LAB_0248bc34;
    thunk_FUN_026935f0(_uStack0000000000000060,0);
    fVar43 = (unaff_s8 + unaff_s15) * 0.5;
    fVar54 = (unaff_s10 + unaff_s14) * 0.5;
    fVar45 = unaff_s14 - fVar54;
    fStack00000000000000e4 = 0.0;
    fVar51 = fVar45;
    fVar48 = (float)FUN_02692df0(unaff_s9 - fVar43,_uStack0000000000000060,0);
    _fStack00000000000000e8 = CONCAT44(fStack00000000000000ec,fVar43 + fVar48);
    fVar51 = fVar54 + fVar51;
    fStack00000000000000e4 = fStack00000000000000e4 + 0.0;
    fVar42 = unaff_s10 - fVar54;
    in_stack_000000e0 = 0.0;
    fVar48 = fVar42;
    fVar44 = (float)FUN_02692df0(unaff_s15 - fVar43,_uStack0000000000000060,0);
    in_stack_000000e0 = in_stack_000000e0 + 0.0;
    fVar48 = fVar54 + fVar48;
    fVar47 = 0.0;
    fStack00000000000000ec = fVar43 + fVar44;
    fVar44 = (float)FUN_02692df0(unaff_s8 - fVar43,_uStack0000000000000060,0);
    unaff_s8 = fVar43 + fVar44;
    unaff_s14 = fVar54 + fVar45;
    fVar47 = fVar47 + 0.0;
    fVar44 = 0.0;
    param_4 = (float)FUN_02692df0(param_4 - fVar43,_uStack0000000000000060,0);
    param_4 = fVar43 + param_4;
    unaff_s10 = fVar54 + fVar42;
    fVar44 = fVar44 + 0.0;
  } while( true );
LAB_0248ef74:
  uVar9 = uVar28 - 1;
  if (*(uint *)(lVar20 + 0x18) <= uVar9)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*in_stack_00000150 == 0) || (lVar38 = *(long *)(*in_stack_00000150 + 0x50), lVar38 == 0))
  goto LAB_02491464;
  lVar12 = (long)(int)uVar9;
  lVar30 = lVar20 + lVar12 * 0x178;
  uVar27 = *(uint *)(lVar30 + 100);
  if (*(uint *)(lVar38 + 0x18) <= uVar27)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar34 = *(long *)(lVar30 + 0x38);
  uVar29 = (uint)*(ushort *)(lVar30 + 0x20);
  lVar32 = (long)(int)uVar27;
  lVar38 = lVar38 + lVar32 * 0x5c;
  uVar58 = *(uint *)(lVar38 + 0x3c);
  uVar33 = *(uint *)(lVar38 + 0x40);
  lVar30 = (long)(int)uVar33;
  iVar8 = *(int *)(lVar38 + 0x28);
  iVar10 = *(int *)(lVar38 + 0x2c);
  uVar40 = *(uint *)(lVar38 + 0x68);
  fVar53 = *(float *)(lVar38 + 0x5c);
  fVar55 = *(float *)(lVar38 + 0x60);
  iVar2 = *(int *)(lVar38 + 0x20);
  fVar42 = *(float *)(lVar38 + 0x4c);
  fVar54 = *(float *)(lVar38 + 0x54);
  fVar47 = *(float *)(lVar38 + 0x58);
  fVar52 = *(float *)(lVar38 + 0x6c);
  fVar50 = *(float *)(lVar38 + 0x70);
  fVar45 = *(float *)(lVar38 + 0x74);
  fVar43 = *(float *)(lVar38 + 0x78);
  fVar57 = fVar53 + fVar55;
  if ((int)uVar40 < 9) {
    switch(uVar40) {
    case 1:
      if ((char)unaff_x19[0x1d] == '\0') {
        in_stack_000000c0._4_4_ = fVar55 + 0.0;
      }
      else {
        in_stack_000000c0._4_4_ = 0.0 - fVar47;
      }
      break;
    case 2:
LAB_0248f124:
      in_stack_000000c0._4_4_ = (fVar55 + fVar53 * 0.5) - fVar47 * 0.5;
      break;
    default:
      goto switchD_0248f070_caseD_3;
    case 4:
      in_stack_000000c0._4_4_ = fVar57 - fVar47;
      if ((char)unaff_x19[0x1d] != '\0') {
        in_stack_000000c0._4_4_ = fVar57;
      }
      break;
    case 8:
      goto switchD_0248f070_caseD_8;
    }
LAB_0248f194:
    in_stack_000000b8 = 0;
  }
  else if (uVar40 == 0x10) {
switchD_0248f070_caseD_8:
    if (uVar29 < 0xad) {
      if ((uVar29 != 3) && (uVar29 != 10)) goto LAB_0248f0c8;
    }
    else if ((uVar29 != 0xad) && ((uVar29 != 0x200b && (uVar29 != 0x2060)))) {
LAB_0248f0c8:
      if (*(uint *)(lVar20 + 0x18) <= uVar58)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar3 = *(undefined2 *)(lVar20 + (long)(int)uVar58 * 0x178 + 0x20);
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar13 = FUN_016f9f84(uVar3,0);
      if ((uVar13 & 1) == 0) {
        bVar1 = (int)uVar27 < (int)unaff_x19[0x94];
      }
      else {
        bVar1 = false;
      }
      if ((fVar47 <= fVar53) && (!bVar1 && (uVar40 >> 4 & 1) == 0)) {
        in_stack_000000c0._4_4_ = fVar55;
        if ((char)unaff_x19[0x1d] != '\0') {
          in_stack_000000c0._4_4_ = fVar57;
        }
        goto LAB_0248f194;
      }
      if (((uVar28 == 1) || (uVar27 != uVar23)) || (uVar9 == *(uint *)((long)unaff_x19 + 0x31c))) {
        in_stack_000000c0._4_4_ = fVar55;
        if ((char)unaff_x19[0x1d] != '\0') {
          in_stack_000000c0._4_4_ = fVar57;
        }
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        fStack0000000000000024 = (float)FUN_016fa418(uVar29,0);
        in_stack_000000b8 = 0;
      }
      else {
        cVar19 = (char)unaff_x19[0x1d];
        fVar55 = -fVar47;
        if (cVar19 != '\0') {
          fVar55 = fVar47;
        }
        if (*(uint *)(lVar20 + 0x18) <= uVar58)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fVar47 = 1.0;
        iVar10 = (int)*(char *)(lVar20 + (long)(int)uVar58 * 0x178 + 0x194) +
                 (-iVar2 - ((uint)fStack0000000000000024 & 1)) + iVar10 + -1;
        if (0 < iVar10) {
          fVar47 = *(float *)((long)unaff_x19 + 0x2d4);
        }
        if (iVar10 < 1) {
          iVar10 = 1;
        }
        if (uVar29 == 9) {
LAB_02490fe0:
          fVar47 = 1.0 - fVar47;
        }
        else {
          if (uVar29 != 0xa0) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar13 = FUN_016fa418(uVar29,0);
            cVar19 = (char)unaff_x19[0x1d];
            if ((uVar13 & 1) != 0) goto LAB_02490fe0;
          }
          iVar10 = (iVar2 - (~(uint)fStack0000000000000024 & 1)) + iVar8;
        }
        fVar47 = ((fVar53 + fVar55) * fVar47) / (float)iVar10;
        if (cVar19 == '\0') {
          in_stack_000000c0._4_4_ = in_stack_000000c0._4_4_ + fVar47;
          in_stack_000000b8 =
               CONCAT44((float)((ulong)in_stack_000000b8 >> 0x20) + 0.0,
                        (float)in_stack_000000b8 + 0.0);
        }
        else {
          in_stack_000000c0._4_4_ = in_stack_000000c0._4_4_ - fVar47;
        }
      }
    }
  }
  else if (uVar40 == 0x20) {
    fVar47 = fVar52 + fVar45;
    goto LAB_0248f124;
  }
switchD_0248f070_caseD_3:
  uVar40 = (uint)*(undefined8 *)(lVar20 + 0x18);
  if (uVar40 <= uVar9)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar38 = lVar20 + lVar12 * 0x178;
  fVar55 = fStack0000000000000090 + in_stack_000000c0._4_4_;
  fVar47 = SUB84(in_stack_00000088,0) + (float)in_stack_000000b8;
  fVar53 = (float)((ulong)in_stack_00000088 >> 0x20) + (float)((ulong)in_stack_000000b8 >> 0x20);
  plVar41 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(char *)(lVar38 + 0x194) == '\0') goto LAB_0248fabc;
  iVar8 = *(int *)(lVar20 + lVar12 * 0x178 + 0x2c);
  if (iVar8 != 0) goto LAB_0248f808;
  fVar44 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)uVar27,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
  case 0:
    lVar22 = lVar20 + lVar12 * 0x178;
    *(undefined4 *)(lVar22 + 0x84) = 0;
    *(undefined4 *)(lVar22 + 0xac) = 0;
    *(undefined4 *)(lVar22 + 0xd4) = 0x3f800000;
    fVar44 = 1.0;
    break;
  case 1:
    fVar43 = *(float *)(lVar20 + lVar12 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
      lVar22 = lVar20 + lVar12 * 0x178;
      fVar45 = (in_stack_000000c0._4_4_ + fVar43) - *(float *)(in_stack_00000070 + 0x230);
      fVar43 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
      goto LAB_0248f2dc;
    }
    lVar22 = lVar20 + lVar12 * 0x178;
    fVar45 = fVar45 - fVar52;
    *(float *)(lVar22 + 0x84) = fVar44 + (fVar43 - fVar52) / fVar45;
    *(float *)(lVar22 + 0xac) = fVar44 + (*(float *)(lVar22 + 0x98) - fVar52) / fVar45;
    *(float *)(lVar22 + 0xd4) = fVar44 + (*(float *)(lVar22 + 0xc0) - fVar52) / fVar45;
    fVar44 = fVar44 + (*(float *)(lVar22 + 0xe8) - fVar52) / fVar45;
    break;
  case 2:
    lVar22 = lVar20 + lVar12 * 0x178;
    fVar43 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
    fVar45 = (in_stack_000000c0._4_4_ + *(float *)(lVar22 + 0x70)) -
             *(float *)(in_stack_00000070 + 0x230);
LAB_0248f2dc:
    *(float *)(lVar22 + 0x84) = fVar44 + fVar45 / fVar43;
    *(float *)(lVar22 + 0xac) =
         fVar44 + ((in_stack_000000c0._4_4_ + *(float *)(lVar22 + 0x98)) -
                  *(float *)(in_stack_00000070 + 0x230)) /
                  (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
    *(float *)(lVar22 + 0xd4) =
         fVar44 + ((in_stack_000000c0._4_4_ + *(float *)(lVar22 + 0xc0)) -
                  *(float *)(in_stack_00000070 + 0x230)) /
                  (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
    fVar44 = fVar44 + ((in_stack_000000c0._4_4_ + *(float *)(lVar22 + 0xe8)) -
                      *(float *)(in_stack_00000070 + 0x230)) /
                      (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x61]) {
    case 0:
      lVar22 = lVar20 + lVar12 * 0x178;
      *(undefined4 *)(lVar22 + 0x88) = 0;
      *(undefined4 *)(lVar22 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar22 + 0xd8) = 0;
      *(undefined4 *)(lVar22 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar22 = lVar20 + lVar12 * 0x178;
      fVar43 = fVar43 - fVar50;
      fVar45 = fVar44 + (*(float *)(lVar22 + 0x74) - fVar50) / fVar43;
      fVar43 = fVar44 + (*(float *)(lVar22 + 0x9c) - fVar50) / fVar43;
      *(float *)(lVar22 + 0x88) = fVar45;
      *(float *)(lVar22 + 0xb0) = fVar43;
      *(float *)(lVar22 + 0xd8) = fVar45;
      *(float *)(lVar22 + 0x100) = fVar43;
      break;
    case 2:
      lVar22 = lVar20 + lVar12 * 0x178;
      fVar45 = fVar44 + (*(float *)(lVar22 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                        (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
      *(float *)(lVar22 + 0x88) = fVar45;
      fVar43 = *(float *)(unaff_x19 + 0x9b);
      fVar50 = *(float *)(unaff_x19 + 0x9c);
      *(float *)(lVar22 + 0xd8) = fVar45;
      fVar45 = fVar44 + (*(float *)(lVar22 + 0x9c) - fVar43) / (fVar50 - fVar43);
      *(float *)(lVar22 + 0xb0) = fVar45;
      *(float *)(lVar22 + 0x100) = fVar45;
      break;
    case 3:
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
      uVar40 = (uint)*(undefined8 *)(lVar20 + 0x18);
    }
    if (uVar40 <= uVar9)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar22 = lVar20 + lVar12 * 0x178;
    fVar45 = *(float *)(lVar22 + 0x15c);
    fVar43 = (1.0 - (*(float *)(lVar22 + 0x88) + *(float *)(lVar22 + 0xb0)) * fVar45) * 0.5;
    fVar50 = fVar44 + *(float *)(lVar22 + 0x88) * fVar45 + fVar43;
    fVar44 = fVar44 + fVar43 + *(float *)(lVar22 + 0xb0) * fVar45;
    *(float *)(lVar22 + 0x84) = fVar50;
    *(float *)(lVar22 + 0xac) = fVar50;
    *(float *)(lVar22 + 0xd4) = fVar44;
    break;
  default:
    goto switchD_0248f240_default;
  }
  *(float *)(lVar20 + lVar12 * 0x178 + 0xfc) = fVar44;
switchD_0248f240_default:
  switch((int)unaff_x19[0x61]) {
  case 0:
    if (uVar40 <= uVar9)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar22 = lVar20 + lVar12 * 0x178;
    *(undefined4 *)(lVar22 + 0x88) = 0;
    *(undefined4 *)(lVar22 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar22 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar22 + 0x100) = 0;
    break;
  case 1:
    if (uVar9 < uVar40) {
      lVar22 = lVar20 + lVar12 * 0x178;
      fVar42 = fVar42 - fVar54;
      fVar44 = (*(float *)(lVar22 + 0x74) - fVar54) / fVar42;
      fVar42 = (*(float *)(lVar22 + 0x9c) - fVar54) / fVar42;
      *(float *)(lVar22 + 0x88) = fVar44;
      goto LAB_0248f644;
    }
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  case 2:
    if (uVar40 <= uVar9)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar22 = lVar20 + lVar12 * 0x178;
    fVar44 = (*(float *)(lVar22 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
             (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
    *(float *)(lVar22 + 0x88) = fVar44;
    fVar42 = (*(float *)(lVar22 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
             (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
LAB_0248f644:
    *(float *)(lVar22 + 0xb0) = fVar42;
    *(float *)(lVar22 + 0xd8) = fVar42;
    *(float *)(lVar22 + 0x100) = fVar44;
    break;
  case 3:
    if (uVar40 <= uVar9)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar22 = lVar20 + lVar12 * 0x178;
    fVar42 = *(float *)(lVar22 + 0x15c);
    fVar45 = (1.0 - (*(float *)(lVar22 + 0x84) + *(float *)(lVar22 + 0xd4)) / fVar42) * 0.5;
    fVar44 = *(float *)(lVar22 + 0x84) / fVar42 + fVar45;
    fVar45 = fVar45 + *(float *)(lVar22 + 0xd4) / fVar42;
    *(float *)(lVar22 + 0x88) = fVar44;
    *(float *)(lVar22 + 0xb0) = fVar45;
    *(float *)(lVar22 + 0x100) = fVar44;
    *(float *)(lVar22 + 0xd8) = fVar45;
  }
  if (uVar40 <= uVar9)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar22 = lVar20 + lVar12 * 0x178;
  fVar44 = ABS(fVar51) * *(float *)(lVar22 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
  if ((*(char *)(lVar22 + 0x5c) == '\0') && ((*(byte *)(lVar20 + lVar12 * 0x178 + 400) & 1) != 0)) {
    fVar44 = -fVar44;
  }
  lVar22 = lVar20 + lVar12 * 0x178;
  fVar42 = *(float *)(lVar22 + 0x88);
  fVar43 = *(float *)(lVar22 + 0x84);
  fVar45 = -2.1474836e+09;
  if (fVar43 != INFINITY) {
    fVar45 = (float)(int)fVar43;
  }
  fVar50 = *(float *)(lVar22 + 0xd4);
  fVar52 = *(float *)(lVar22 + 0xd8);
  fVar54 = -2.1474836e+09;
  if (fVar42 != INFINITY) {
    fVar54 = (float)(int)fVar42;
  }
  uVar56 = FUN_024e0374(fVar43 - fVar45,fVar42 - fVar54);
  *(undefined4 *)(lVar22 + 0x84) = uVar56;
  if (*(uint *)(lVar20 + 0x18) <= uVar9)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  fVar52 = fVar52 - fVar54;
  *(float *)(lVar22 + 0x88) = fVar44;
  uVar56 = FUN_024e0374(fVar43 - fVar45,fVar52);
  *(undefined4 *)(lVar20 + lVar12 * 0x178 + 0xac) = uVar56;
  if (*(uint *)(lVar20 + 0x18) <= uVar9)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  fVar50 = fVar50 - fVar45;
  *(float *)(lVar20 + lVar12 * 0x178 + 0xb0) = fVar44;
  fVar45 = (float)FUN_024e0374(fVar50,fVar52);
  *(float *)(lVar22 + 0xd4) = fVar45;
  if (*(uint *)(lVar20 + 0x18) <= uVar9)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar22 + 0xd8) = fVar44;
  uVar56 = FUN_024e0374(fVar50,fVar42 - fVar54);
  *(undefined4 *)(lVar20 + lVar12 * 0x178 + 0xfc) = uVar56;
  uVar40 = (uint)*(undefined8 *)(lVar20 + 0x18);
  if (uVar40 <= uVar9)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar20 + lVar12 * 0x178 + 0x100) = fVar44;
LAB_0248f808:
  if (((int)uVar9 < (int)unaff_x19[100]) &&
     (iStack00000000000000a4 < *(int *)((long)unaff_x19 + 0x324))) {
    if (((int)uVar27 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] != 5)) {
      if (uVar40 <= uVar9)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar38 = lVar20 + lVar12 * 0x178;
      *(ulong *)(lVar38 + 0x70) =
           CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar38 + 0x70) >> 0x20),
                    fVar55 + (float)*(undefined8 *)(lVar38 + 0x70));
      *(float *)(lVar38 + 0x78) = fVar53 + *(float *)(lVar38 + 0x78);
      plVar41 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      if (*(uint *)(lVar20 + 0x18) <= uVar9)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar38 = lVar20 + lVar12 * 0x178;
      *(ulong *)(lVar38 + 0x98) =
           CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar38 + 0x98) >> 0x20),
                    fVar55 + (float)*(undefined8 *)(lVar38 + 0x98));
      *(float *)(lVar38 + 0xa0) = fVar53 + *(float *)(lVar38 + 0xa0);
      uVar40 = *(uint *)(lVar20 + 0x18);
LAB_0248fa4c:
      if (uVar40 <= uVar9)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar38 = lVar20 + lVar12 * 0x178;
      *(ulong *)(lVar38 + 0xc0) =
           CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar38 + 0xc0) >> 0x20),
                    fVar55 + (float)*(undefined8 *)(lVar38 + 0xc0));
      *(float *)(lVar38 + 200) = fVar53 + *(float *)(lVar38 + 200);
      if (*(uint *)(lVar20 + 0x18) <= uVar9)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar38 = lVar20 + lVar12 * 0x178;
      *(ulong *)(lVar38 + 0xe8) =
           CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar38 + 0xe8) >> 0x20),
                    fVar55 + (float)*(undefined8 *)(lVar38 + 0xe8));
      *(float *)(lVar38 + 0xf0) = fVar53 + *(float *)(lVar38 + 0xf0);
      if (iVar8 != 0) goto LAB_0248f9d0;
LAB_0248fa9c:
      pcVar26 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0248faa8:
      (*pcVar26)();
      goto LAB_0248fabc;
    }
    if (((int)uVar27 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] == 5)) {
      if (uVar9 < uVar40) {
        if (*(uint *)(lVar20 + lVar12 * 0x178 + 0x68) != uStack0000000000000030) goto LAB_0248f8d8;
        lVar38 = lVar20 + lVar12 * 0x178;
        *(ulong *)(lVar38 + 0x70) =
             CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar38 + 0x70) >> 0x20),
                      fVar55 + (float)*(undefined8 *)(lVar38 + 0x70));
        *(float *)(lVar38 + 0x78) = fVar53 + *(float *)(lVar38 + 0x78);
        if (uVar9 < *(uint *)(lVar20 + 0x18)) {
          lVar38 = lVar20 + lVar12 * 0x178;
          *(ulong *)(lVar38 + 0x98) =
               CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar38 + 0x98) >> 0x20),
                        fVar55 + (float)*(undefined8 *)(lVar38 + 0x98));
          *(float *)(lVar38 + 0xa0) = fVar53 + *(float *)(lVar38 + 0xa0);
          uVar40 = *(uint *)(lVar20 + 0x18);
          plVar41 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
          goto LAB_0248fa4c;
        }
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    }
  }
LAB_0248f8d8:
  if (uVar40 <= uVar9)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if (DAT_03774d76 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03774d76 = '\x01';
  }
  puVar4 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  lVar22 = lVar20 + lVar12 * 0x178;
  uVar56 = *(undefined4 *)
            (*(undefined8 **)
              (*(long *)
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
              0xb8) + 1);
  *(undefined8 *)(lVar22 + 0x70) =
       **(undefined8 **)
         (*(long *)Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
         0xb8);
  *(undefined4 *)(lVar22 + 0x78) = uVar56;
  plVar41 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(uint *)(lVar20 + 0x18) <= uVar9)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar22 = lVar20 + lVar12 * 0x178;
  uVar56 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar4 + 0xb8) + 1);
  *(undefined8 *)(lVar22 + 0x98) = **(undefined8 **)(*(long *)puVar4 + 0xb8);
  *(undefined4 *)(lVar22 + 0xa0) = uVar56;
  if (*(uint *)(lVar20 + 0x18) <= uVar9)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar22 = lVar20 + lVar12 * 0x178;
  uVar56 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar4 + 0xb8) + 1);
  *(undefined8 *)(lVar22 + 0xc0) = **(undefined8 **)(*(long *)puVar4 + 0xb8);
  *(undefined4 *)(lVar22 + 200) = uVar56;
  if (*(uint *)(lVar20 + 0x18) <= uVar9)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar22 = lVar20 + lVar12 * 0x178;
  uVar56 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar4 + 0xb8) + 1);
  *(undefined8 *)(lVar22 + 0xe8) = **(undefined8 **)(*(long *)puVar4 + 0xb8);
  *(undefined4 *)(lVar22 + 0xf0) = uVar56;
  if (*(uint *)(lVar20 + 0x18) <= uVar9)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(undefined1 *)(lVar38 + 0x194) = 0;
  if (iVar8 == 0) goto LAB_0248fa9c;
LAB_0248f9d0:
  if (iVar8 == 1) {
    pcVar26 = *(code **)(*unaff_x19 + 0x8f8);
    goto LAB_0248faa8;
  }
LAB_0248fabc:
  if ((*in_stack_00000150 == 0) || (lVar38 = *(long *)(*in_stack_00000150 + 0x38), lVar38 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar38 + 0x18) <= uVar9)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar38 = lVar38 + lVar12 * 0x178;
  uVar15 = *(undefined8 *)(lVar38 + 0x11c);
  *(undefined8 *)(lVar38 + 0x11c) =
       CONCAT44(fVar47 + (float)((ulong)uVar15 >> 0x20),fVar55 + (float)uVar15);
  *(float *)(lVar38 + 0x124) = fVar53 + *(float *)(lVar38 + 0x124);
  if ((*in_stack_00000150 == 0) || (lVar38 = *(long *)(*in_stack_00000150 + 0x38), lVar38 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar38 + 0x18) <= uVar9)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar38 = lVar38 + lVar12 * 0x178;
  *(ulong *)(lVar38 + 0x110) =
       CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar38 + 0x110) >> 0x20),
                fVar55 + (float)*(undefined8 *)(lVar38 + 0x110));
  *(float *)(lVar38 + 0x118) = fVar53 + *(float *)(lVar38 + 0x118);
  if ((*in_stack_00000150 == 0) || (lVar38 = *(long *)(*in_stack_00000150 + 0x38), lVar38 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar38 + 0x18) <= uVar9)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar38 = lVar38 + lVar12 * 0x178;
  *(ulong *)(lVar38 + 0x128) =
       CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar38 + 0x128) >> 0x20),
                fVar55 + (float)*(undefined8 *)(lVar38 + 0x128));
  *(float *)(lVar38 + 0x130) = fVar53 + *(float *)(lVar38 + 0x130);
  if ((*in_stack_00000150 == 0) || (lVar38 = *(long *)(*in_stack_00000150 + 0x38), lVar38 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar38 + 0x18) <= uVar9)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar38 = lVar38 + lVar12 * 0x178;
  *(float *)(lVar38 + 0x134) = fVar55 + *(float *)(lVar38 + 0x134);
  *(ulong *)(lVar38 + 0x138) =
       CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar38 + 0x138) >> 0x20),
                fVar47 + (float)*(undefined8 *)(lVar38 + 0x138));
  lVar38 = *in_stack_00000150;
  if ((lVar38 == 0) || (lVar22 = *(long *)(lVar38 + 0x38), lVar22 == 0)) goto LAB_02491464;
  uVar40 = *(uint *)(lVar22 + 0x18);
  if (uVar40 <= uVar9)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar35 = lVar22 + lVar12 * 0x178;
  *(ulong *)(lVar35 + 0x140) =
       CONCAT44(fVar55 + (float)((ulong)*(undefined8 *)(lVar35 + 0x140) >> 0x20),
                fVar55 + (float)*(undefined8 *)(lVar35 + 0x140));
  *(ulong *)(lVar35 + 0x148) =
       CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar35 + 0x148) >> 0x20),
                fVar47 + (float)*(undefined8 *)(lVar35 + 0x148));
  *(float *)(lVar35 + 0x150) = fVar47 + *(float *)(lVar35 + 0x150);
  if (uVar27 == uVar23) {
    uVar23 = *in_stack_00000148 - 1;
    if (uVar9 == uVar23) goto LAB_0248fccc;
  }
  else {
    lVar38 = *(long *)(lVar38 + 0x50);
    if (lVar38 == 0) goto LAB_02491464;
    if (*(uint *)(lVar38 + 0x18) <= uVar23)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar35 = (long)(int)uVar23;
    lVar36 = lVar38 + lVar35 * 0x5c;
    fVar45 = fVar47 + *(float *)(lVar36 + 0x54);
    *(ulong *)(lVar36 + 0x4c) =
         CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar36 + 0x4c) >> 0x20),
                  fVar47 + (float)*(undefined8 *)(lVar36 + 0x4c));
    *(float *)(lVar36 + 0x54) = fVar45;
    *(float *)(lVar36 + 0x58) = fVar55 + *(float *)(lVar36 + 0x58);
    if (uVar40 <= *(uint *)(lVar36 + 0x34))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    uVar56 = *(undefined4 *)(lVar22 + (long)(int)*(uint *)(lVar36 + 0x34) * 0x178 + 0x11c);
    lVar38 = lVar38 + lVar35 * 0x5c;
    *(float *)(lVar38 + 0x70) = fVar45;
    *(undefined4 *)(lVar38 + 0x6c) = uVar56;
    lVar38 = *in_stack_00000150;
    if ((lVar38 == 0) || (lVar22 = *(long *)(lVar38 + 0x50), lVar22 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar22 + 0x18) <= uVar23)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar38 = *(long *)(lVar38 + 0x38);
    if (lVar38 == 0) goto LAB_02491464;
    uVar23 = *(uint *)(lVar22 + lVar35 * 0x5c + 0x40);
    if (*(uint *)(lVar38 + 0x18) <= uVar23)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar22 = lVar22 + lVar35 * 0x5c;
    *(undefined4 *)(lVar22 + 0x74) = *(undefined4 *)(lVar38 + (long)(int)uVar23 * 0x178 + 0x128);
    *(undefined4 *)(lVar22 + 0x78) = *(undefined4 *)(lVar22 + 0x4c);
    uVar23 = *in_stack_00000148 - 1;
LAB_0248fccc:
    if (uVar9 == uVar23) {
      lVar38 = *in_stack_00000150;
      if ((lVar38 == 0) || (lVar22 = *(long *)(lVar38 + 0x50), lVar22 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar22 + 0x18) <= uVar27)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar35 = lVar22 + lVar32 * 0x5c;
      fVar45 = fVar47 + *(float *)(lVar35 + 0x54);
      *(ulong *)(lVar35 + 0x4c) =
           CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar35 + 0x4c) >> 0x20),
                    fVar47 + (float)*(undefined8 *)(lVar35 + 0x4c));
      *(float *)(lVar35 + 0x54) = fVar45;
      *(float *)(lVar35 + 0x58) = fVar55 + *(float *)(lVar35 + 0x58);
      lVar38 = *(long *)(lVar38 + 0x38);
      if (lVar38 == 0) goto LAB_02491464;
      if (*(uint *)(lVar38 + 0x18) <= *(uint *)(lVar35 + 0x34))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar56 = *(undefined4 *)(lVar38 + (long)(int)*(uint *)(lVar35 + 0x34) * 0x178 + 0x11c);
      lVar22 = lVar22 + lVar32 * 0x5c;
      *(float *)(lVar22 + 0x70) = fVar45;
      *(undefined4 *)(lVar22 + 0x6c) = uVar56;
      lVar38 = *in_stack_00000150;
      if ((lVar38 == 0) || (lVar22 = *(long *)(lVar38 + 0x50), lVar22 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar22 + 0x18) <= uVar27)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar38 = *(long *)(lVar38 + 0x38);
      if (lVar38 == 0) goto LAB_02491464;
      uVar23 = *(uint *)(lVar22 + lVar32 * 0x5c + 0x40);
      if (*(uint *)(lVar38 + 0x18) <= uVar23)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar22 = lVar22 + lVar32 * 0x5c;
      *(undefined4 *)(lVar22 + 0x74) = *(undefined4 *)(lVar38 + (long)(int)uVar23 * 0x178 + 0x128);
      *(undefined4 *)(lVar22 + 0x78) = *(undefined4 *)(lVar22 + 0x4c);
    }
  }
  if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar13 = FUN_016f9468(uVar29,0);
  if (((((uVar13 & 1) == 0) && (1 < uVar29 - 0x2010)) && (uVar29 != 0xad)) && (uVar29 != 0x2d)) {
    if (bVar6) {
      if (((uVar28 != 1) && ((int)uVar9 < (int)(*(uint *)(lVar20 + 0x18) - 1))) &&
         (((int)uVar9 < (int)*in_stack_00000148 && ((uVar29 == 0x2019 || (uVar29 == 0x27)))))) {
        if (*(uint *)(lVar20 + 0x18) <= uVar28 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        uVar3 = *(undefined2 *)(lVar20 + _in_stack_00000128 + -0x438);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar13 = FUN_016f9468(uVar3,0);
        if ((uVar13 & 1) != 0) {
          if (*(uint *)(lVar20 + 0x18) <= uVar28)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          uVar3 = *(undefined2 *)(lVar20 + _in_stack_00000128 + -0x148);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar13 = FUN_016f9468(uVar3,0);
          if ((uVar13 & 1) != 0) goto LAB_0248fee0;
        }
      }
    }
    else {
      if (uVar28 != 1) {
LAB_024909a0:
        bVar6 = false;
        goto LAB_0248fee8;
      }
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar13 = FUN_016f93a0(uVar29,0);
      if ((uVar13 & 1) != 0) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar13 = FUN_016f68bc(uVar29,0);
        if (((uVar29 != 0x200b) && ((uVar13 & 1) == 0)) && (*in_stack_00000148 != 1))
        goto LAB_024909a0;
      }
    }
    if (uVar9 == *in_stack_00000148 - 1) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar13 = FUN_016f9468(uVar29,0);
      iVar8 = (int)fStack00000000000000e4;
      if ((uVar13 & 1) == 0) goto LAB_02490204;
    }
    else {
LAB_02490204:
      iVar8 = uVar28 - 2;
    }
    lVar38 = *in_stack_00000150;
    if (lVar38 == 0) goto LAB_02491464;
    lVar22 = *(long *)(lVar38 + 0x40);
    if (lVar22 == 0) goto LAB_02491464;
    uVar23 = *(uint *)(lVar38 + 0x24);
    iVar10 = *(int *)(lVar22 + 0x18);
    if (iVar10 < (int)(uVar23 + 1)) {
      if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01147b84((long *)(lVar38 + 0x40),iVar10 + 1,
                   *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
      lVar38 = *in_stack_00000150;
      if (lVar38 == 0) goto LAB_02491464;
    }
    lVar22 = *(long *)(lVar38 + 0x40);
    if (lVar22 == 0) goto LAB_02491464;
    if (*(uint *)(lVar22 + 0x18) <= uVar23)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar22 = lVar22 + (long)(int)uVar23 * 0x18;
    *(long **)(lVar22 + 0x20) = unaff_x19;
    *(float *)(lVar22 + 0x28) = in_stack_00000110._4_4_;
    *(int *)(lVar22 + 0x2c) = iVar8;
    *(int *)(lVar22 + 0x30) = (iVar8 - (int)in_stack_00000110._4_4_) + 1;
    lVar22 = *(long *)(lVar38 + 0x50);
    *(int *)(lVar38 + 0x24) = *(int *)(lVar38 + 0x24) + 1;
    if (lVar22 == 0) goto LAB_02491464;
    if (*(uint *)(lVar22 + 0x18) <= uVar27)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar22 = lVar22 + lVar32 * 0x5c;
    bVar6 = false;
    iStack00000000000000a4 = iStack00000000000000a4 + 1;
    *(int *)(lVar22 + 0x30) = *(int *)(lVar22 + 0x30) + 1;
  }
  else {
    if (!bVar6) {
      in_stack_00000110._4_4_ = (float)uVar9;
    }
    if (uVar9 == *in_stack_00000148 - 1) {
      lVar38 = *in_stack_00000150;
      if (lVar38 == 0) goto LAB_02491464;
      lVar22 = *(long *)(lVar38 + 0x40);
      if (lVar22 == 0) goto LAB_02491464;
      uVar23 = *(uint *)(lVar38 + 0x24);
      iVar8 = *(int *)(lVar22 + 0x18);
      if (iVar8 < (int)(uVar23 + 1)) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147b84((long *)(lVar38 + 0x40),iVar8 + 1,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
        lVar38 = *in_stack_00000150;
        if (lVar38 == 0) goto LAB_02491464;
      }
      lVar22 = *(long *)(lVar38 + 0x40);
      if (lVar22 == 0) goto LAB_02491464;
      if (*(uint *)(lVar22 + 0x18) <= uVar23)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar22 = lVar22 + (long)(int)uVar23 * 0x18;
      *(long **)(lVar22 + 0x20) = unaff_x19;
      *(float *)(lVar22 + 0x28) = in_stack_00000110._4_4_;
      *(uint *)(lVar22 + 0x2c) = uVar9;
      *(uint *)(lVar22 + 0x30) = uVar28 - (int)in_stack_00000110._4_4_;
      lVar22 = *(long *)(lVar38 + 0x50);
      *(int *)(lVar38 + 0x24) = *(int *)(lVar38 + 0x24) + 1;
      if (lVar22 == 0) goto LAB_02491464;
      if (*(uint *)(lVar22 + 0x18) <= uVar27)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar22 = lVar22 + lVar32 * 0x5c;
      iStack00000000000000a4 = iStack00000000000000a4 + 1;
      *(int *)(lVar22 + 0x30) = *(int *)(lVar22 + 0x30) + 1;
    }
LAB_0248fee0:
    bVar6 = true;
  }
LAB_0248fee8:
  if ((*in_stack_00000150 == 0) || (lVar38 = *(long *)(*in_stack_00000150 + 0x38), lVar38 == 0))
  goto LAB_02491464;
  uVar23 = *(uint *)(lVar38 + 0x18);
  if (uVar23 <= uVar9)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*(byte *)(lVar38 + lVar12 * 0x178 + 400) >> 2 & 1) == 0) {
    if (((uint)fStack00000000000000ec & 1) == 0) {
LAB_024903d8:
      fStack00000000000000ec = 0.0;
    }
    else {
LAB_0248ff18:
      if (uVar23 <= uVar28 - 2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar32 = *unaff_x19;
      uVar56 = *(undefined4 *)(lVar38 + _in_stack_00000128 + -0x330);
      uVar49 = *(undefined4 *)(lVar38 + _in_stack_00000128 + -0x2f8);
LAB_02490474:
      pcVar26 = *(code **)(lVar32 + 0x908);
LAB_0249047c:
      (*pcVar26)(fStack0000000000000054,fStack000000000000004c,fStack0000000000000050,uVar56,
                 fStack00000000000000cc,0,fStack0000000000000058,uVar49);
      puVar4 = System_Threading_Mutex_TypeInfo;
      lVar38 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar38 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar38 = *(long *)puVar4;
      }
LAB_024904cc:
      fStack00000000000000ec = 0.0;
      fVar48 = 0.0;
      fStack00000000000000cc = *(float *)(*(long *)(lVar38 + 0xb8) + 0x15a8);
      fStack00000000000000c8 = 0.0;
    }
  }
  else {
    lVar38 = lVar38 + lVar12 * 0x178;
    iVar8 = *(int *)(lVar38 + 0x68);
    *(int *)(lVar38 + 0x16c) = iVar37;
    if ((((int)unaff_x19[100] < (int)uVar9) || ((int)unaff_x19[0x65] < (int)uVar27)) ||
       (((int)unaff_x19[0x5b] == 5 && (iVar8 + 1 != (int)unaff_x19[0x66])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar13 = FUN_016f68bc(uVar29,0);
    if ((uVar29 != 0x200b) && ((uVar13 & 1) == 0)) {
      lVar38 = *in_stack_00000150;
      if ((lVar38 == 0) || (lVar32 = *(long *)(lVar38 + 0x38), lVar32 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar32 + 0x18) <= uVar9)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      fVar45 = *(float *)(lVar32 + lVar12 * 0x178 + 0x160);
      if (fVar48 <= fVar45) {
        fVar48 = fVar45;
      }
      if (fStack00000000000000c8 <= ABS(fVar44)) {
        fStack00000000000000c8 = ABS(fVar44);
      }
      if ((float)iVar8 != fStack0000000000000048) {
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar38 = *in_stack_00000150;
          if (lVar38 == 0) goto LAB_02491464;
          lVar32 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
        }
        else {
          lVar32 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
        }
        fStack00000000000000cc = *(float *)(lVar32 + 0x15a8);
      }
      lVar38 = *(long *)(lVar38 + 0x38);
      if (lVar38 == 0) goto LAB_02491464;
      if (*(uint *)(lVar38 + 0x18) <= uVar9)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (unaff_x19[0x1e] == 0) goto LAB_02491464;
      fVar42 = *(float *)(lVar38 + lVar12 * 0x178 + 0x14c);
      fVar45 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
      fVar42 = fVar42 + fVar48 * fVar45;
      fStack0000000000000048 = (float)iVar8;
      if (fVar42 <= fStack00000000000000cc) {
        fStack00000000000000cc = fVar42;
      }
    }
    if (((uint)fStack00000000000000ec & 1) == 0) {
      fStack00000000000000ec = 0.0;
      if ((((uVar29 == 0xd) || ((uVar29 | 1) == 0xb)) || ((int)uVar33 < (int)uVar9)) || (!bVar1))
      goto LAB_024904e8;
      if (uVar9 == uVar33) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar13 = FUN_016fa418(uVar29,0);
        if ((uVar13 & 1) != 0) goto LAB_024903d8;
      }
      if ((*in_stack_00000150 == 0) || (lVar38 = *(long *)(*in_stack_00000150 + 0x38), lVar38 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar38 + 0x18) <= uVar9)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar38 = lVar38 + lVar12 * 0x178;
      fStack0000000000000058 = *(float *)(lVar38 + 0x160);
      fStack0000000000000054 = *(float *)(lVar38 + 0x11c);
      bVar5 = fVar48 != 0.0;
      fVar45 = fStack0000000000000058;
      if (bVar5) {
        fVar45 = fVar48;
      }
      fVar48 = fVar45;
      _bStack000000000000005c = *(uint *)(lVar38 + 0x168);
      fStack0000000000000050 = 0.0;
      fVar45 = fVar44;
      if (bVar5) {
        fVar45 = fStack00000000000000c8;
      }
      fStack000000000000004c = fStack00000000000000cc;
      fStack00000000000000c8 = fVar45;
    }
    if (*in_stack_00000148 == 1) {
      if ((*in_stack_00000150 != 0) && (lVar38 = *(long *)(*in_stack_00000150 + 0x38), lVar38 != 0))
      {
        if (uVar9 < *(uint *)(lVar38 + 0x18)) {
          lVar38 = lVar38 + lVar12 * 0x178;
          lVar32 = *unaff_x19;
          uVar56 = *(undefined4 *)(lVar38 + 0x128);
          uVar49 = *(undefined4 *)(lVar38 + 0x160);
          goto LAB_02490474;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
    if ((uVar9 == uVar58) || ((int)uVar33 <= (int)uVar9)) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar13 = FUN_016f68bc(uVar29,0);
      if ((*in_stack_00000150 != 0) && (lVar38 = *(long *)(*in_stack_00000150 + 0x38), lVar38 != 0))
      {
        if (uVar29 == 0x200b || (uVar13 & 1) != 0) {
          lVar32 = lVar30;
          if (*(uint *)(lVar38 + 0x18) <= uVar33)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        else {
          lVar32 = lVar12;
          if (*(uint *)(lVar38 + 0x18) <= uVar9)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        lVar38 = lVar38 + lVar32 * 0x178;
        uVar56 = *(undefined4 *)(lVar38 + 0x128);
        uVar49 = *(undefined4 *)(lVar38 + 0x160);
        pcVar26 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_0249047c;
      }
      goto LAB_02491464;
    }
    if (!bVar1) {
      if ((*in_stack_00000150 != 0) && (lVar38 = *(long *)(*in_stack_00000150 + 0x38), lVar38 != 0))
      {
        uVar23 = *(uint *)(lVar38 + 0x18);
        goto LAB_0248ff18;
      }
      goto LAB_02491464;
    }
    if ((int)uVar9 < (int)(*in_stack_00000148 - 1)) {
      if ((*in_stack_00000150 == 0) || (lVar38 = *(long *)(*in_stack_00000150 + 0x38), lVar38 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar38 + 0x18) <= uVar28)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar13 = FUN_024a9e4c(_bStack000000000000005c,*(undefined4 *)(lVar38 + _in_stack_00000128),0);
      if ((uVar13 & 1) == 0) {
        if ((*in_stack_00000150 != 0) &&
           (lVar38 = *(long *)(*in_stack_00000150 + 0x38), lVar38 != 0)) {
          if (uVar9 < *(uint *)(lVar38 + 0x18)) {
            lVar38 = lVar38 + lVar12 * 0x178;
            (**(code **)(*unaff_x19 + 0x908))
                      (fStack0000000000000054,fStack000000000000004c,fStack0000000000000050,
                       *(undefined4 *)(lVar38 + 0x128),fStack00000000000000cc,0,
                       fStack0000000000000058,*(undefined4 *)(lVar38 + 0x160));
            puVar4 = System_Threading_Mutex_TypeInfo;
            lVar38 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar38 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar38 = *(long *)puVar4;
            }
            goto LAB_024904cc;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        goto LAB_02491464;
      }
    }
    fStack00000000000000ec = 1.4013e-45;
  }
LAB_024904e8:
  if ((*in_stack_00000150 == 0) || (lVar38 = *(long *)(*in_stack_00000150 + 0x38), lVar38 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar38 + 0x18) <= uVar9)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if (lVar34 == 0) goto LAB_02491464;
  uVar23 = *(uint *)(lVar38 + lVar12 * 0x178 + 400);
  fVar45 = (float)FUN_026fd1f0(lVar34 + 0x50,0);
  if ((uVar23 >> 6 & 1) == 0) {
    if (((uint)fStack00000000000000e8 & 1) != 0) {
      if ((*in_stack_00000150 == 0) || (lVar38 = *(long *)(*in_stack_00000150 + 0x38), lVar38 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar38 + 0x18) <= uVar28 - 2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar56 = *(undefined4 *)(lVar38 + _in_stack_00000128 + -0x330);
      pcVar26 = *(code **)(*unaff_x19 + 0x908);
      fVar47 = fStack0000000000000084 * fVar45 + *(float *)(lVar38 + _in_stack_00000128 + -0x30c);
LAB_02490a68:
      (*pcVar26)(in_stack_00000078._4_4_,in_stack_00000068._4_4_,uStack0000000000000060,uVar56,
                 fVar47,0,fStack0000000000000084,fStack0000000000000084);
    }
LAB_02490a9c:
    fStack00000000000000e8 = 0.0;
  }
  else {
    lVar38 = *in_stack_00000150;
    if ((lVar38 == 0) || (lVar32 = *(long *)(lVar38 + 0x38), lVar32 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar32 + 0x18) <= uVar9)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(int *)(lVar32 + lVar12 * 0x178 + 0x174) = iVar37;
    if ((((int)unaff_x19[100] < (int)uVar9) || ((int)unaff_x19[0x65] < (int)uVar27)) ||
       (((int)unaff_x19[0x5b] == 5 &&
        (*(int *)(lVar32 + lVar12 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar29 == 0xd) || ((uVar29 | 1) == 0xb)) || ((int)uVar33 < (int)uVar9)) ||
       (((uint)fStack00000000000000e8 & 1) != 0 || !bVar1)) {
LAB_02490668:
      if (((uint)fStack00000000000000e8 & 1) == 0) goto LAB_02490a9c;
    }
    else {
      if (uVar9 == uVar33) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar13 = FUN_016fa418(uVar29,0);
        if ((uVar13 & 1) != 0) goto LAB_02490668;
        lVar38 = *in_stack_00000150;
        if (lVar38 == 0) goto LAB_02491464;
      }
      lVar38 = *(long *)(lVar38 + 0x38);
      if (lVar38 == 0) goto LAB_02491464;
      if (*(uint *)(lVar38 + 0x18) <= uVar9)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar38 = lVar38 + lVar12 * 0x178;
      fStack0000000000000038 = *(float *)(lVar38 + 0x60);
      fStack0000000000000084 = *(float *)(lVar38 + 0x160);
      fStack0000000000000034 = *(float *)(lVar38 + 0x14c);
      in_stack_00000078._4_4_ = *(float *)(lVar38 + 0x11c);
      in_stack_00000068._4_4_ = fVar45 * fStack0000000000000084 + fStack0000000000000034;
      uStack0000000000000060 = 0;
    }
    uVar23 = *in_stack_00000148;
    if (uVar23 == 1) {
      if (*in_stack_00000150 != 0) {
        lVar38 = *(long *)(*in_stack_00000150 + 0x38);
joined_r0x024907c8:
        if (lVar38 != 0) {
          if (uVar9 < *(uint *)(lVar38 + 0x18)) {
            lVar38 = lVar38 + lVar12 * 0x178;
            lVar30 = *unaff_x19;
            uVar56 = *(undefined4 *)(lVar38 + 0x128);
            fVar47 = *(float *)(lVar38 + 0x14c);
LAB_024907e8:
            pcVar26 = *(code **)(lVar30 + 0x908);
LAB_02490a64:
            fVar47 = fVar45 * fStack0000000000000084 + fVar47;
            goto LAB_02490a68;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
      }
      goto LAB_02491464;
    }
    if (uVar9 == uVar58) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar13 = FUN_016f68bc(uVar29,0);
      if ((*in_stack_00000150 != 0) && (lVar38 = *(long *)(*in_stack_00000150 + 0x38), lVar38 != 0))
      {
        uVar23 = *(uint *)(lVar38 + 0x18);
        if (uVar29 == 0x200b || (uVar13 & 1) != 0) {
          if (uVar23 <= uVar33)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        else {
LAB_02490a40:
          lVar30 = lVar12;
          if (uVar23 <= uVar9)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
LAB_02490a48:
        lVar38 = lVar38 + lVar30 * 0x178;
        fVar47 = *(float *)(lVar38 + 0x14c);
        uVar56 = *(undefined4 *)(lVar38 + 0x128);
        pcVar26 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_02490a64;
      }
      goto LAB_02491464;
    }
    if ((int)uVar9 < (int)uVar23) {
      lVar38 = *in_stack_00000150;
      if ((lVar38 != 0) && (lVar32 = *(long *)(lVar38 + 0x38), lVar32 != 0)) {
        if (uVar28 < *(uint *)(lVar32 + 0x18)) {
          if (*(float *)(lVar32 + _in_stack_00000128 + -0x108) == fStack0000000000000038) {
            fVar42 = *(float *)(lVar32 + _in_stack_00000128 + -0x1c);
            if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar13 = FUN_024aa280(fVar47 + fVar42,fStack0000000000000034,0);
            if ((uVar13 & 1) != 0) {
              uVar23 = *in_stack_00000148;
              goto LAB_024908ec;
            }
            lVar38 = *in_stack_00000150;
            if (lVar38 == 0) goto LAB_02491464;
          }
          lVar38 = *(long *)(lVar38 + 0x38);
          if (lVar38 != 0) {
            uVar23 = *(uint *)(lVar38 + 0x18);
            if ((int)uVar9 <= (int)uVar33) goto LAB_02490a40;
            if (uVar33 < uVar23) goto LAB_02490a48;
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          }
          goto LAB_02491464;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
LAB_024908ec:
    if ((int)uVar9 < (int)uVar23) {
      iVar8 = FUN_02681c0c(lVar34,0);
      if (*(uint *)(lVar20 + 0x18) <= uVar28)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar38 = *(long *)(lVar20 + _in_stack_00000128 + -0x130);
      if (lVar38 == 0) goto LAB_02491464;
      iVar10 = FUN_02681c0c(lVar38,0);
      if (iVar8 != iVar10) {
        if (*in_stack_00000150 != 0) {
          lVar38 = *(long *)(*in_stack_00000150 + 0x38);
          goto joined_r0x024907c8;
        }
        goto LAB_02491464;
      }
    }
    if (!bVar1) {
      if ((*in_stack_00000150 != 0) && (lVar38 = *(long *)(*in_stack_00000150 + 0x38), lVar38 != 0))
      {
        if (uVar28 - 2 < *(uint *)(lVar38 + 0x18)) {
          lVar30 = *unaff_x19;
          uVar56 = *(undefined4 *)(lVar38 + _in_stack_00000128 + -0x330);
          fVar47 = *(float *)(lVar38 + _in_stack_00000128 + -0x30c);
          goto LAB_024907e8;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
    fStack00000000000000e8 = 1.4013e-45;
  }
  if ((*in_stack_00000150 == 0) || (lVar38 = *(long *)(*in_stack_00000150 + 0x38), lVar38 == 0))
  goto LAB_02491464;
  uVar23 = (uint)*(undefined8 *)(lVar38 + 0x18);
  if (uVar23 <= uVar9)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*(byte *)(lVar38 + lVar12 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar7) {
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,
                 fStack0000000000000098,in_stack_000000a0,uStack0000000000000094);
    }
LAB_02490b04:
    bVar7 = false;
  }
  else {
    if ((((int)unaff_x19[100] < (int)uVar9) || ((int)unaff_x19[0x65] < (int)uVar27)) ||
       (((int)unaff_x19[0x5b] == 5 &&
        (*(int *)(lVar38 + lVar12 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar7) {
      if ((((uVar29 == 0xd) || ((uVar29 | 1) == 0xb)) || ((int)uVar33 < (int)uVar9)) || (!bVar1))
      goto LAB_02490b04;
      if (uVar9 == uVar33) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar13 = FUN_016fa418(uVar29,0);
        if ((uVar13 & 1) != 0) goto LAB_02490b04;
      }
      puVar4 = System_Threading_Mutex_TypeInfo;
      lVar30 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar30 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar30 = *(long *)puVar4;
      }
      if ((*in_stack_00000150 == 0) || (lVar38 = *(long *)(*in_stack_00000150 + 0x38), lVar38 == 0))
      goto LAB_02491464;
      uVar23 = (uint)*(undefined8 *)(lVar38 + 0x18);
      if (uVar23 <= uVar9)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar30 = *(long *)(lVar30 + 0xb8);
      lVar32 = lVar38 + lVar12 * 0x178;
      in_stack_00001798 = *(undefined8 *)(lVar32 + 0x184);
      in_stack_00001790 = *(undefined8 *)(lVar32 + 0x17c);
      fStack00000000000000a8 = *(float *)(lVar30 + 0x1598);
      in_stack_000017a0 = *(float *)(lVar32 + 0x18c);
      fStack00000000000000ac = *(float *)(lVar30 + 0x159c);
      fStack0000000000000098 = *(float *)(lVar30 + 0x15a0);
      in_stack_000000a0 = *(float *)(lVar30 + 0x15a4);
      uStack0000000000000094 = 0;
    }
    if (uVar23 <= uVar9)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar38 = lVar38 + lVar12 * 0x178;
    fVar45 = *(float *)(lVar38 + 0x128);
    fVar54 = *(float *)(lVar38 + 0x188);
    uVar11 = *(undefined8 *)(lVar38 + 0x17c);
    fVar52 = *(float *)(lVar38 + 0x184);
    uVar15 = *(undefined8 *)(lVar38 + 0x184);
    fVar50 = *(float *)(lVar38 + 0x18c);
    fVar47 = *(float *)(lVar38 + 0x11c);
    fVar42 = *(float *)(lVar38 + 0x148);
    fVar43 = *(float *)(lVar38 + 0x150);
    in_stack_00000158 = uVar11;
    fStack0000000000000160 = fVar52;
    fStack0000000000000164 = fVar54;
    in_stack_00000168 = fVar50;
    in_stack_00000170 = in_stack_00001790;
    in_stack_00000178 = in_stack_00001798;
    in_stack_00000180 = in_stack_000017a0;
    uVar13 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
    lVar38 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
    if ((uVar13 & 1) == 0) {
      if (*(int *)(lVar38 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar38);
      }
      fVar45 = fVar45 + (float)in_stack_00001798;
      fVar47 = fVar47 - (float)((ulong)in_stack_00001790 >> 0x20);
      fVar42 = fVar42 + (float)((ulong)in_stack_00001798 >> 0x20);
      if (fVar47 <= fStack00000000000000a8) {
        fStack00000000000000a8 = fVar47;
      }
      if (fVar43 - in_stack_000017a0 <= fStack00000000000000ac) {
        fStack00000000000000ac = fVar43 - in_stack_000017a0;
      }
      if (fStack0000000000000098 <= fVar45) {
        fStack0000000000000098 = fVar45;
      }
      if (in_stack_000000a0 <= fVar42) {
        in_stack_000000a0 = fVar42;
      }
    }
    else {
      if (*(int *)(lVar38 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar38);
      }
      fVar47 = (fVar47 + (fStack0000000000000098 - (float)in_stack_00001798)) * 0.5;
      if (fVar43 <= fStack00000000000000ac) {
        fStack00000000000000ac = fVar43;
      }
      if (in_stack_000000a0 <= fVar42) {
        in_stack_000000a0 = fVar42;
      }
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,fVar47,
                 in_stack_000000a0,uStack0000000000000094);
      fStack00000000000000ac = fVar43 - fVar50;
      fStack0000000000000098 = fVar45 + fVar52;
      uStack0000000000000094 = 0;
      in_stack_000000a0 = fVar42 + fVar54;
      fStack00000000000000a8 = fVar47;
      in_stack_00001790 = uVar11;
      in_stack_00001798 = uVar15;
      in_stack_000017a0 = fVar50;
    }
    if (((*in_stack_00000148 == 1) || (uVar9 == uVar58)) ||
       (((int)uVar33 <= (int)uVar9 || (!bVar1)))) {
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,
                 fStack0000000000000098,in_stack_000000a0,uStack0000000000000094);
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
  }
  uVar9 = *in_stack_00000148;
  fStack00000000000000e4 = (float)((int)fStack00000000000000e4 + 1);
  _in_stack_00000128 = _in_stack_00000128 + 0x178;
  bVar1 = (int)uVar9 <= (int)uVar28;
  uVar23 = uVar27;
  uVar28 = uVar28 + 1;
  if (bVar1) goto LAB_02491038;
  goto LAB_0248ef74;
LAB_0248bc34:
  in_stack_000000e0 = 0.0;
  param_2 = 0.0;
  goto code_r0x0248bc40;
LAB_02491038:
  lVar20 = *in_stack_00000150;
  if (lVar20 != 0) {
    iVar37 = uVar27 + 1;
    plVar24 = (long *)PTR_DAT_033ed410;
LAB_02491068:
    *(uint *)(lVar20 + 0x18) = uVar9;
    lVar38 = unaff_x19[0xd3];
    *(int *)(lVar20 + 0x2c) = iVar37;
    iVar37 = iStack00000000000000a4;
    if ((int)uVar9 < 1) {
      iVar37 = 1;
    }
    if (iStack00000000000000a4 == 0) {
      iVar37 = 1;
    }
    *(int *)(lVar20 + 0x1c) = (int)lVar38;
    *(int *)(lVar20 + 0x24) = iVar37;
    *(int *)(lVar20 + 0x30) = (int)unaff_x19[0x95] + 1;
    if (((int)unaff_x19[0x62] != 0xff) ||
       (uVar13 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar13 & 1) == 0)) {
LAB_02491468:
      lVar20 = *(long *)Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__;
LAB_02491474:
      if (*(int *)(lVar20 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_024a942c();
      return;
    }
    lVar20 = unaff_x19[0xda];
    if (lVar20 != 0) {
      (**(code **)(lVar20 + 0x18))
                (*(undefined8 *)(lVar20 + 0x40),*in_stack_00000150,*(undefined8 *)(lVar20 + 0x28));
    }
    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
      if ((*in_stack_00000150 == 0) || (lVar20 = *(long *)(*in_stack_00000150 + 0x60), lVar20 == 0))
      goto LAB_02491464;
      if (*(int *)(*plVar24 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(int *)(lVar20 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      FUN_024e8000(lVar20 + 0x20,1,0);
    }
    if (unaff_x19[0x73] != 0) {
      UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
                (unaff_x19[0x73],0);
      if ((unaff_x19[0x6c] != 0) && (lVar20 = *(long *)(unaff_x19[0x6c] + 0x60), lVar20 != 0)) {
        if (*(int *)(lVar20 + 0x18) == 0) {
UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (unaff_x19[0x73] != 0) {
          FUN_0266b9c4(unaff_x19[0x73],*(undefined8 *)(lVar20 + 0x30),0);
          if ((unaff_x19[0x6c] != 0) && (lVar20 = *(long *)(unaff_x19[0x6c] + 0x60), lVar20 != 0)) {
            if (*(int *)(lVar20 + 0x18) == 0)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            if (unaff_x19[0x73] != 0) {
              FUN_0266bbc8(unaff_x19[0x73],*(undefined8 *)(lVar20 + 0x48),0);
              if ((unaff_x19[0x6c] != 0) &&
                 (lVar20 = *(long *)(unaff_x19[0x6c] + 0x60), lVar20 != 0)) {
                if (*(int *)(lVar20 + 0x18) == 0)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                if (unaff_x19[0x73] != 0) {
                  FUN_0266bc74(unaff_x19[0x73],*(undefined8 *)(lVar20 + 0x50),0);
                  if ((unaff_x19[0x6c] != 0) &&
                     (lVar20 = *(long *)(unaff_x19[0x6c] + 0x60), lVar20 != 0)) {
                    if (*(int *)(lVar20 + 0x18) == 0)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    if (unaff_x19[0x73] != 0) {
                      FUN_0266c1dc(unaff_x19[0x73],*(undefined8 *)(lVar20 + 0x58),0);
                      if (unaff_x19[0x73] != 0) {
                        FUN_0266ed90(unaff_x19[0x73],0);
                        lVar20 = *in_stack_00000150;
                        if (lVar20 != 0) {
                          lVar30 = 0;
                          lVar38 = 0;
                          do {
                            uVar13 = lVar38 + 1;
                            if ((long)*(int *)(lVar20 + 0x34) <= (long)uVar13) goto LAB_02491468;
                            lVar20 = *(long *)(lVar20 + 0x60);
                            if (lVar20 == 0) break;
                            if (*(int *)(*plVar24 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            if (*(uint *)(lVar20 + 0x18) <= uVar13)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            FUN_024e7ecc(lVar20 + lVar30 + 0x70,0);
                            lVar20 = unaff_x19[0xe0];
                            if (lVar20 == 0) break;
                            if (*(uint *)(lVar20 + 0x18) <= uVar13)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            uVar15 = *(undefined8 *)(lVar20 + lVar38 * 8 + 0x28);
                            if (*(int *)(*plVar41 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar14 = FUN_0268b4e0(uVar15,0,0);
                            if ((uVar14 & 1) == 0) {
                              if (*(int *)((long)unaff_x19 + 0x314) != 0) {
                                if ((*in_stack_00000150 == 0) ||
                                   (lVar20 = *(long *)(*in_stack_00000150 + 0x60), lVar20 == 0))
                                break;
                                if (*(int *)(*plVar24 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                if (*(uint *)(lVar20 + 0x18) <= uVar13)
                                goto 
                                UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                                ;
                                FUN_024e8000(lVar20 + lVar30 + 0x70,1,0);
                              }
                              lVar20 = unaff_x19[0xe0];
                              if (lVar20 == 0) break;
                              if (*(uint *)(lVar20 + 0x18) <= uVar13)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar20 = *(long *)(lVar20 + lVar38 * 8 + 0x28);
                              if (lVar20 == 0) break;
                              lVar20 = FUN_024eefa0(lVar20,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar12 = *(long *)(*in_stack_00000150 + 0x60), lVar12 == 0))
                              break;
                              if (*(uint *)(lVar12 + 0x18) <= uVar13)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar20 == 0) break;
                              FUN_0266b9c4(lVar20,*(undefined8 *)(lVar12 + lVar30 + 0x80),0);
                              lVar20 = unaff_x19[0xe0];
                              if (lVar20 == 0) break;
                              if (*(uint *)(lVar20 + 0x18) <= uVar13)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar20 = *(long *)(lVar20 + lVar38 * 8 + 0x28);
                              if (lVar20 == 0) break;
                              lVar20 = FUN_024eefa0(lVar20,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar12 = *(long *)(*in_stack_00000150 + 0x60), lVar12 == 0))
                              break;
                              if (*(uint *)(lVar12 + 0x18) <= uVar13)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar20 == 0) break;
                              FUN_0266bbc8(lVar20,*(undefined8 *)(lVar12 + lVar30 + 0x98),0);
                              lVar20 = unaff_x19[0xe0];
                              if (lVar20 == 0) break;
                              if (*(uint *)(lVar20 + 0x18) <= uVar13)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar20 = *(long *)(lVar20 + lVar38 * 8 + 0x28);
                              if (lVar20 == 0) break;
                              lVar20 = FUN_024eefa0(lVar20,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar12 = *(long *)(*in_stack_00000150 + 0x60), lVar12 == 0))
                              break;
                              if (*(uint *)(lVar12 + 0x18) <= uVar13)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar20 == 0) break;
                              FUN_0266bc74(lVar20,*(undefined8 *)(lVar12 + lVar30 + 0xa0),0);
                              lVar20 = unaff_x19[0xe0];
                              if (lVar20 == 0) break;
                              if (*(uint *)(lVar20 + 0x18) <= uVar13)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar20 = *(long *)(lVar20 + lVar38 * 8 + 0x28);
                              if (lVar20 == 0) break;
                              lVar20 = FUN_024eefa0(lVar20,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar12 = *(long *)(*in_stack_00000150 + 0x60), lVar12 == 0))
                              break;
                              if (*(uint *)(lVar12 + 0x18) <= uVar13)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar20 == 0) break;
                              FUN_0266c1dc(lVar20,*(undefined8 *)(lVar12 + lVar30 + 0xa8),0);
                              lVar20 = unaff_x19[0xe0];
                              if (lVar20 == 0) break;
                              if (*(uint *)(lVar20 + 0x18) <= uVar13)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar20 = *(long *)(lVar20 + lVar38 * 8 + 0x28);
                              if ((lVar20 == 0) || (lVar20 = FUN_024eefa0(lVar20,0), lVar20 == 0))
                              break;
                              FUN_0266ed90(lVar20,0);
                            }
                            lVar20 = *in_stack_00000150;
                            lVar38 = lVar38 + 1;
                            lVar30 = lVar30 + 0x50;
                          } while (lVar20 != 0);
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


