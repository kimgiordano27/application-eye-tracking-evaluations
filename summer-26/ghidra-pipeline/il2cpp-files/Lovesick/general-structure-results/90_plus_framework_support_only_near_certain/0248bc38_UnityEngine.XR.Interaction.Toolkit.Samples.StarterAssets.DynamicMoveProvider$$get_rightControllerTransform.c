/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider$$get_rightControllerTransform
ENTRY_POINT: 0248bc38
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

void UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_DynamicMoveProvider__get_rightControllerTransform
               (undefined1 param_1 [16],uint param_2,undefined1 param_3 [16],float param_4)

{
  int iVar1;
  undefined2 uVar2;
  double __x;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  int *piVar15;
  ulong uVar16;
  undefined1 uVar17;
  char cVar18;
  long lVar19;
  undefined4 *puVar20;
  long lVar21;
  uint uVar22;
  long *plVar23;
  float *pfVar24;
  code *pcVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  long lVar29;
  float *pfVar30;
  long lVar31;
  uint uVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long *unaff_x19;
  uint unaff_w20;
  int iVar36;
  long unaff_x21;
  long lVar37;
  long *unaff_x25;
  long *plVar38;
  uint *unaff_x26;
  uint uVar39;
  long *unaff_x27;
  long *plVar40;
  undefined8 *unaff_x28;
  uint unaff_w29;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  double dVar45;
  float fVar46;
  float fVar47;
  undefined4 uVar48;
  float fVar49;
  float unaff_s8;
  float unaff_s9;
  float fVar50;
  float fVar51;
  float unaff_s10;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined4 uVar55;
  float unaff_s14;
  float fVar56;
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
  undefined4 uStack00000000000000e0;
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
  uint uVar57;
  uint in_stack_000017bc;
  
code_r0x0248bc38:
  fVar43 = 0.0;
  fVar46 = 0.0;
  _uStack00000000000000e0 = (ulong)param_2;
  fVar47 = unaff_s10;
  fStack00000000000000e8 = unaff_s9;
  fStack00000000000000ec = unaff_s15;
  fVar50 = unaff_s14;
  do {
    if (*unaff_x25 == 0) goto LAB_02491464;
    lVar19 = *(long *)(*unaff_x25 + 0x38);
    uVar12 = _fStack0000000000000118 & 0xffffffff;
    if (lVar19 == 0) goto LAB_02491464;
    if (*(uint *)(lVar19 + 0x18) <= *unaff_x26)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar19 = lVar19 + (int)*unaff_x26 * unaff_x21;
    *(float *)(lVar19 + 0x120) = fVar47;
    *(float *)(lVar19 + 0x11c) = fStack00000000000000ec;
    *(undefined4 *)(lVar19 + 0x124) = uStack00000000000000e0;
    if ((*unaff_x25 == 0) || (lVar19 = *(long *)(*unaff_x25 + 0x38), lVar19 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar19 + 0x18) <= *unaff_x26)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar19 = lVar19 + (int)*unaff_x26 * unaff_x21;
    *(float *)(lVar19 + 0x114) = fVar50;
    *(float *)(lVar19 + 0x110) = fStack00000000000000e8;
    *(float *)(lVar19 + 0x118) = fStack00000000000000e4;
    if ((*unaff_x25 == 0) || (lVar19 = *(long *)(*unaff_x25 + 0x38), lVar19 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar19 + 0x18) <= *unaff_x26)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar19 = lVar19 + (int)*unaff_x26 * unaff_x21;
    *(float *)(lVar19 + 0x128) = unaff_s8;
    *(float *)(lVar19 + 300) = unaff_s14;
    *(float *)(lVar19 + 0x130) = fVar46;
    if ((*unaff_x25 == 0) || (lVar19 = *(long *)(*unaff_x25 + 0x38), lVar19 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar19 + 0x18) <= *unaff_x26)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar19 = lVar19 + (int)*unaff_x26 * unaff_x21;
    *(float *)(lVar19 + 0x134) = param_4;
    *(float *)(lVar19 + 0x138) = unaff_s10;
    *(float *)(lVar19 + 0x13c) = fVar43;
    if ((*unaff_x25 == 0) || (lVar19 = *(long *)(*unaff_x25 + 0x38), lVar19 == 0))
    goto LAB_02491464;
    uVar8 = *unaff_x26;
    lVar37 = (long)(int)uVar8;
    if (*(uint *)(lVar19 + 0x18) <= uVar8)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar29 = lVar19 + lVar37 * unaff_x21;
    *(int *)(lVar29 + 0x140) = (int)unaff_x19[199];
    fVar46 = *(float *)(unaff_x19 + 0x9a);
    uVar13 = (ulong)(uint)fVar46;
    fVar43 = *(float *)((long)unaff_x19 + 0x614);
    *(float *)(lVar29 + 0x15c) = (unaff_s8 - fStack00000000000000ec) / (fVar50 - fVar47);
    *(float *)(lVar29 + 0x14c) = (in_stack_00000138 - fVar46) + fVar43;
    in_stack_00000128 = in_stack_00000128 * fStack0000000000000118;
    if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
      in_stack_00000128 = in_stack_00000128 / in_stack_00000100;
      in_stack_00000120 = (in_stack_00000120 * fStack0000000000000118) / in_stack_00000100;
    }
    else {
      in_stack_00000120 = in_stack_00000120 * fStack0000000000000118;
    }
    uVar22 = *(uint *)(unaff_x19 + 0x92);
    bVar5 = unaff_w29 != 0;
    in_stack_00000128 = fVar43 + in_stack_00000128;
    bVar6 = uVar8 != uVar22;
    if (bVar6 && bVar5) {
      fVar50 = *(float *)(unaff_x19 + 0x98);
      lVar19 = lVar19 + lVar37 * unaff_x21;
      *(float *)(lVar19 + 0x154) = fVar50;
      in_stack_00000120 = *(float *)((long)unaff_x19 + 0x4c4);
      *(float *)(lVar19 + 0x148) = fVar50 - fVar46;
      *(float *)(lVar19 + 0x158) = in_stack_00000120;
      *(float *)(unaff_x19 + 0x97) = fVar50 - fVar46;
      in_stack_00000120 = in_stack_00000120 - fVar46;
      *(float *)(lVar19 + 0x150) = in_stack_00000120;
    }
    else {
      in_stack_00000120 = fVar43 + in_stack_00000120;
      fVar47 = in_stack_00000128;
      fVar44 = in_stack_00000120;
      if (fVar43 != 0.0) {
        fVar47 = (in_stack_00000128 - fVar43) / *(float *)((long)unaff_x19 + 0x3fc);
        fVar44 = (in_stack_00000120 - fVar43) / *(float *)((long)unaff_x19 + 0x3fc);
        if (fVar47 <= in_stack_00000128) {
          fVar47 = in_stack_00000128;
        }
        if (in_stack_00000120 <= fVar44) {
          fVar44 = in_stack_00000120;
        }
      }
      lVar19 = lVar19 + lVar37 * unaff_x21;
      fVar50 = fVar47;
      if (fVar47 <= *(float *)(unaff_x19 + 0x98)) {
        fVar50 = *(float *)(unaff_x19 + 0x98);
      }
      fVar43 = fVar44;
      if (*(float *)((long)unaff_x19 + 0x4c4) <= fVar44) {
        fVar43 = *(float *)((long)unaff_x19 + 0x4c4);
      }
      *(float *)((long)unaff_x19 + 0x4c4) = fVar43;
      in_stack_00000120 = in_stack_00000120 - fVar46;
      *(float *)(unaff_x19 + 0x98) = fVar50;
      *(float *)(lVar19 + 0x154) = fVar47;
      *(float *)(lVar19 + 0x158) = fVar44;
      *(float *)(lVar19 + 0x148) = in_stack_00000128 - fVar46;
      *(float *)(unaff_x19 + 0x97) = in_stack_00000128 - fVar46;
      *(float *)(lVar19 + 0x150) = in_stack_00000120;
    }
    *(float *)((long)unaff_x19 + 0x4bc) = in_stack_00000120;
    if (((int)unaff_x19[0x94] == 0) || (*(char *)((long)unaff_x19 + 0x334) != '\0')) {
      if (!bVar6 || !bVar5) {
        *(float *)(unaff_x19 + 0x96) = fVar50;
        if (unaff_x19[0x1f] != 0) {
          fVar50 = *(float *)((long)unaff_x19 + 0x4b4);
          fVar47 = (float)FUN_026fd150(unaff_x19[0x1f] + 0x50,0);
          in_stack_00000100 = (fStack0000000000000118 * fVar47) / in_stack_00000100;
          uVar13 = (ulong)*(uint *)(unaff_x19 + 0x9a);
          if (fVar50 <= in_stack_00000100) {
            fVar50 = in_stack_00000100;
          }
          *(float *)((long)unaff_x19 + 0x4b4) = fVar50;
          goto LAB_0248bef4;
        }
        goto LAB_02491464;
      }
    }
    else {
LAB_0248bef4:
      if ((!bVar6 || !bVar5) && (float)uVar13 == 0.0) {
        fVar50 = *(float *)(in_stack_00000070 + 0x208);
        if (*(float *)(in_stack_00000070 + 0x208) <= in_stack_00000128) {
          fVar50 = in_stack_00000128;
        }
        *(float *)(in_stack_00000070 + 0x208) = fVar50;
      }
    }
    lVar19 = *unaff_x25;
    if ((lVar19 == 0) || (lVar37 = *(long *)(lVar19 + 0x38), lVar37 == 0)) goto LAB_02491464;
    uVar27 = *unaff_x26;
    if (*(uint *)(lVar37 + 0x18) <= uVar27)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar37 = lVar37 + (int)uVar27 * unaff_x21;
    *(undefined1 *)(lVar37 + 0x194) = 0;
    uVar26 = *(uint *)(unaff_x19 + 0x4e);
    iVar36 = (int)unaff_x21;
    uVar57 = in_stack_000017bc;
    if ((in_stack_000017bc == 9) ||
       (((((unaff_w29 == 0 && (in_stack_000017bc != 3)) && (in_stack_000017bc != 0x200b)) &&
         (in_stack_000017bc != 0xad)) ||
        (((in_stack_000017bc == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) != 0 ||
         (*(int *)((long)unaff_x19 + 0x63c) == 1)))))) {
      *(undefined1 *)(lVar37 + 0x194) = 1;
      pfVar24 = in_stack_00000088;
      pfVar30 = _fStack0000000000000098;
      if (unaff_w20 != 0) {
        lVar19 = *(long *)(lVar19 + 0x50);
        if (lVar19 == 0) goto LAB_02491464;
        if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar19 = lVar19 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
        pfVar30 = (float *)(lVar19 + 0x60);
        pfVar24 = (float *)(lVar19 + 100);
      }
      fVar47 = *pfVar30;
      fVar43 = *pfVar24;
      fVar50 = *(float *)(unaff_x19 + 0x6b);
      fVar46 = *(float *)(unaff_x19 + 199);
      in_stack_000000d8._4_4_ = (fStack0000000000000090 - fVar47) - fVar43;
      bVar5 = true;
      if ((fVar50 <= in_stack_000000d8._4_4_) && (bVar5 = false, !NAN(fVar50))) {
        bVar5 = fVar50 == -1.0;
      }
      if (!bVar5) {
        in_stack_000000d8._4_4_ = fVar50;
      }
      fVar50 = 0.0;
      if ((char)unaff_x19[0x1d] == '\0') {
        fVar50 = (float)FUN_026fd474(&stack0x00001770,0);
        uVar13 = (ulong)*(uint *)(unaff_x19 + 0x9a);
      }
      fVar42 = *(float *)((long)unaff_x19 + 0x4c4);
      fVar44 = *(float *)((long)unaff_x19 + 0x2cc);
      fVar41 = (float)uVar13;
      if (in_stack_000017bc != 0xad) {
        in_stack_000000d0 = fStack0000000000000118;
      }
      fVar53 = 0.0;
      if ((0.0 < fVar41) && (fVar53 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
        fVar53 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
      }
      fVar53 = (*(float *)(unaff_x19 + 0x96) - (fVar42 - fVar41)) + fVar53;
      uVar27 = *in_stack_00000148;
      if (fVar53 <= in_stack_000000a0) {
switchD_0248c274_caseD_2:
        plVar23 = (long *)System_Threading_Mutex_TypeInfo;
        fVar41 = 1.0 - fVar44;
        uVar13 = (ulong)(uint)fVar41;
        fVar46 = ABS(fVar46) + fVar50 * fVar41 * in_stack_000000d0;
        fVar50 = _DAT_0294c6e8;
        if ((uVar26 & 0x18) == 0) {
          fVar50 = 1.0;
        }
        if (fVar46 <= fVar50 * in_stack_000000d8._4_4_) {
LAB_0248cf18:
          if (in_stack_000017bc == 0xad) {
            if ((*in_stack_00000150 != 0) &&
               (lVar19 = *(long *)(*in_stack_00000150 + 0x38), lVar19 != 0)) {
              if (*in_stack_00000148 < *(uint *)(lVar19 + 0x18)) {
                *(undefined1 *)(lVar19 + (int)*in_stack_00000148 * unaff_x21 + 0x194) = 0;
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
            uVar27 = *in_stack_00000148;
            if (((uint)fStack0000000000000058 & 1) != 0) {
              *(uint *)(in_stack_00000070 + 0x1f0) = uVar27;
            }
            *(uint *)((long)unaff_x19 + 0x49c) = uVar27;
            *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
            if ((unaff_x19[0x6c] != 0) && (lVar19 = *(long *)(unaff_x19[0x6c] + 0x50), lVar19 != 0))
            {
              if (*(uint *)(unaff_x19 + 0x94) < *(uint *)(lVar19 + 0x18)) {
                lVar19 = lVar19 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                fStack0000000000000058 = 0.0;
                *(float *)(lVar19 + 0x60) = fVar47;
                *(float *)(lVar19 + 100) = fVar43;
                goto FUN_0248d088;
              }
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            }
            goto LAB_02491464;
          }
          lVar19 = *in_stack_00000150;
          if ((lVar19 == 0) || (lVar37 = *(long *)(lVar19 + 0x38), lVar37 == 0)) goto LAB_02491464;
          uVar27 = *in_stack_00000148;
          if (uVar27 < *(uint *)(lVar37 + 0x18)) {
            *(undefined1 *)(lVar37 + (int)uVar27 * unaff_x21 + 0x194) = 0;
            *(uint *)((long)unaff_x19 + 0x49c) = uVar27;
            lVar37 = *(long *)(lVar19 + 0x50);
            if (lVar37 != 0) {
              if (*(uint *)(unaff_x19 + 0x94) < *(uint *)(lVar37 + 0x18)) {
                lVar37 = lVar37 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                *(int *)(lVar37 + 0x2c) = *(int *)(lVar37 + 0x2c) + 1;
                goto LAB_0248cf8c;
              }
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            }
            goto LAB_02491464;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        if (((char)unaff_x19[0x5a] == '\0') || (uVar27 == *(uint *)(unaff_x19 + 0x92))) {
          if (((char)unaff_x19[0x46] != '\0') &&
             (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
            fVar42 = *(float *)(unaff_x19 + 0x59) / 100.0;
            if (fVar44 < fVar42) {
              fVar47 = fVar46 / fVar41;
              if (fVar44 <= 0.0) {
                fVar47 = fVar46;
              }
              fVar44 = fVar44 + (fVar46 - fVar50 * (in_stack_000000d8._4_4_ + DAT_02958218)) /
                                fVar47;
              goto LAB_0249154c;
            }
            fVar41 = *(float *)((long)unaff_x19 + 0x1dc);
            uVar13 = (ulong)(uint)fVar41;
            fVar44 = *(float *)(unaff_x19 + 0x49);
            if (fVar41 <= fVar44) goto LAB_0248c3dc;
LAB_024914c0:
            fVar50 = (fVar41 - *(float *)(unaff_x19 + 0x47)) * 0.5;
            if (fVar50 <= DAT_028aa298) {
              fVar50 = DAT_028aa298;
            }
            *(float *)((long)unaff_x19 + 0x234) = fVar41;
            fVar47 = (fVar41 - fVar50) * 20.0 + 0.5;
            fVar50 = DAT_02958220;
            if (fVar47 != INFINITY) {
              fVar50 = (float)(int)fVar47 / 20.0;
            }
            if (fVar50 <= fVar44) {
              fVar50 = fVar44;
            }
LAB_0248e598:
            *(float *)((long)unaff_x19 + 0x1dc) = fVar50;
            return;
          }
LAB_0248c3dc:
          iVar7 = (int)unaff_x19[0x5b];
          if (iVar7 == 1) {
            lVar19 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar19 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar19 = *plVar23;
            }
            plVar40 = (long *)StringLiteral_302;
            lVar37 = *(long *)(lVar19 + 0xb8);
            lVar19 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
            if ((*(byte *)(lVar19 + 0x132) & 1) == 0) {
              lVar19 = FUN_00d5941c(lVar19);
            }
            lVar19 = *(long *)(*(long *)(lVar19 + 0xc0) + 8);
            if ((*(byte *)(lVar19 + 0x132) & 1) == 0) {
              lVar19 = FUN_00d5941c();
            }
            piVar15 = (int *)thunk_FUN_00d32ed4(lVar37 + 0x11f0,*(long *)(lVar19 + 0x80) + 0xa0);
            if (*piVar15 == 0) goto LAB_0248e4bc;
            lVar19 = *plVar23;
            if (*(int *)(lVar19 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar19 = *plVar23;
            }
            FUN_013b8de4(*(long *)(lVar19 + 0xb8) + 0x11f0,&stack0x00000880,
                         *(undefined8 *)
                          Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                        );
            memcpy(&stack0x00000c70,&stack0x00000880,0x378);
            goto LAB_0248c8f4;
          }
          if (iVar7 != 6) {
            if (iVar7 == 3) {
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
          plVar40 = (long *)StringLiteral_302;
          in_stack_00001788 = FUN_024d66ec();
          lVar19 = unaff_x19[0x5c];
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              );
          }
          uVar12 = FUN_02681b9c(lVar19,0,0);
          if ((uVar12 & 1) != 0) {
            plVar38 = (long *)unaff_x19[0x5c];
            uVar14 = (**(code **)(*unaff_x19 + 0x548))();
            if (plVar38 == (long *)0x0) goto LAB_02491464;
            (**(code **)(*plVar38 + 0x558))(plVar38,uVar14,*(undefined8 *)(*plVar38 + 0x560));
            lVar19 = unaff_x19[0x5c];
            if (lVar19 == 0) goto LAB_02491464;
            *(int *)(lVar19 + 0x3f8) = (int)unaff_x19[0x7f];
            FUN_024c910c(lVar19,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
            plVar38 = (long *)unaff_x19[0x5c];
            if (plVar38 == (long *)0x0) goto LAB_02491464;
            (**(code **)(*plVar38 + 0x7d8))(plVar38,0,0,*(undefined8 *)(*plVar38 + 0x7e0));
            *(undefined1 *)(unaff_x19 + 0x5e) = 1;
          }
LAB_0248ca1c:
          uVar12 = uVar13;
          in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
        }
        else {
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          in_stack_00001788 = FUN_024d66ec();
          if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
            lVar19 = *in_stack_00000150;
            if ((lVar19 == 0) || (lVar37 = *(long *)(lVar19 + 0x38), lVar37 == 0))
            goto LAB_02491464;
            if (*(uint *)(lVar37 + 0x18) <= *in_stack_00000148)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            fVar44 = *(float *)(unaff_x19 + 0x9a);
            fVar41 = 0.0;
            if ((0.0 < fVar44) && (fVar41 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
              fVar41 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
            }
            fVar41 = fStack00000000000000c8 * *(float *)(unaff_x19 + 0x56) +
                     *(float *)(lVar37 + (int)*in_stack_00000148 * unaff_x21 + 0x154) +
                     (fVar41 - *(float *)((long)unaff_x19 + 0x4c4)) +
                     fStack0000000000000054 *
                     (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4));
          }
          else {
            lVar19 = unaff_x19[0x6c];
            *(undefined1 *)((long)unaff_x19 + 700) = 1;
            if (lVar19 == 0) goto LAB_02491464;
            fVar44 = *(float *)(unaff_x19 + 0x9a);
            fVar41 = *(float *)(unaff_x19 + 0x57) +
                     fStack00000000000000c8 * *(float *)(unaff_x19 + 0x56);
          }
          puVar3 = System_Threading_Mutex_TypeInfo;
          lVar19 = *(long *)(lVar19 + 0x38);
          if (lVar19 == 0) goto LAB_02491464;
          uVar32 = *(uint *)((long)unaff_x19 + 0x48c);
          if ((*(uint *)(lVar19 + 0x18) <= uVar32) ||
             (uVar39 = uVar32 - 1, *(uint *)(lVar19 + 0x18) <= uVar39))
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          uVar13 = (ulong)(uint)(fVar41 + *(float *)(unaff_x19 + 0x96));
          fVar53 = (fVar41 + *(float *)(unaff_x19 + 0x96) + fVar44) -
                   *(float *)(lVar19 + (int)uVar32 * unaff_x21 + 0x158);
          if (((in_stack_00000068._4_1_ & 1) != 0 ||
               *(short *)(lVar19 + (long)(int)uVar39 * (long)iVar36 + 0x20) != 0xad) ||
             ((in_stack_000000a0 <= fVar53 && ((int)unaff_x19[0x5b] != 0)))) {
            if (*(short *)(lVar19 + (int)uVar32 * unaff_x21 + 0x20) == 0xad) {
              in_stack_00000068._4_1_ = 1;
              plVar23 = (long *)System_Threading_Mutex_TypeInfo;
              plVar40 = (long *)StringLiteral_302;
              uVar12 = uVar13;
            }
            else {
              if ((bStack000000000000005c & *(byte *)(unaff_x19 + 0x46) & 1) != 0) {
                fVar44 = *(float *)((long)unaff_x19 + 0x2cc);
                fVar42 = *(float *)(unaff_x19 + 0x59) / 100.0;
                if ((fVar42 <= fVar44) ||
                   ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c))) {
                  fVar41 = *(float *)((long)unaff_x19 + 0x1dc);
                  uVar13 = (ulong)(uint)fVar41;
                  fVar44 = *(float *)(unaff_x19 + 0x49);
                  if ((fVar44 < fVar41) &&
                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) goto LAB_024914c0;
                  goto LAB_0248cc70;
                }
LAB_0249155c:
                fVar47 = fVar46;
                if (0.0 < fVar44) {
                  fVar47 = fVar46 / (1.0 - fVar44);
                }
                fVar44 = fVar44 + (fVar46 - fVar50 * (in_stack_000000d8._4_4_ + DAT_02958218)) /
                                  fVar47;
LAB_0249154c:
                if (fVar42 <= fVar44) {
                  fVar44 = fVar42;
                }
                *(float *)((long)unaff_x19 + 0x2cc) = fVar44;
                return;
              }
LAB_0248cc70:
              lVar19 = *(long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(lVar19 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar19 = *(long *)puVar3;
              }
              iVar7 = *(int *)(*(long *)(lVar19 + 0xb8) + 0xe78);
              if ((((float)iVar7 != fStack0000000000000034) && (iVar7 != -1)) &&
                 (((bStack000000000000005c ^ 1) & 1) == 0)) {
                if (*(int *)(lVar19 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                in_stack_00001788 = FUN_024d66ec();
                if ((unaff_x19[0x6c] == 0) ||
                   (lVar19 = *(long *)(unaff_x19[0x6c] + 0x38), lVar19 == 0)) goto LAB_02491464;
                uVar32 = *in_stack_00000148 - 1;
                if (*(uint *)(lVar19 + 0x18) <= uVar32)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                fStack0000000000000034 = (float)iVar7;
                if (*(short *)(lVar19 + (long)(int)uVar32 * (long)iVar36 + 0x20) == 0xad) {
                  in_stack_00000068._4_1_ = 0;
                  in_stack_000017a8 = CONCAT44(0x2d,uVar32);
                  *in_stack_00000148 = uVar32;
                  plVar23 = (long *)System_Threading_Mutex_TypeInfo;
                  plVar40 = (long *)StringLiteral_302;
                  uVar12 = uVar13;
                  in_stack_00001788 = in_stack_00001788 - 1;
                  goto LAB_0248ab98;
                }
              }
              if (in_stack_000000a0 < fVar53) {
                if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
                  *(undefined4 *)((long)unaff_x19 + 0x2dc) =
                       *(undefined4 *)((long)unaff_x19 + 0x48c);
                }
                plVar40 = (long *)StringLiteral_302;
                plVar23 = (long *)System_Threading_Mutex_TypeInfo;
                if ((char)unaff_x19[0x46] != '\0') {
                  fVar44 = *(float *)(unaff_x19 + 0x58);
                  if ((fVar44 < *(float *)((long)unaff_x19 + 0x2b4)) &&
                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                    fVar50 = *(float *)((long)unaff_x19 + 0x2b4) +
                             ((in_stack_00000018._4_4_ - fVar53) / (float)((int)unaff_x19[0x94] + 1)
                             ) / fStack0000000000000054;
                    if (fVar50 <= fVar44) {
                      fVar50 = fVar44;
                    }
LAB_0248ea5c:
                    *(float *)((long)unaff_x19 + 0x2b4) = fVar50;
                    return;
                  }
                  fVar44 = *(float *)((long)unaff_x19 + 0x2cc);
                  fVar42 = *(float *)(unaff_x19 + 0x59) / 100.0;
                  if ((fVar44 < fVar42) &&
                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) goto LAB_0249155c;
                  fVar41 = *(float *)((long)unaff_x19 + 0x1dc);
                  uVar13 = (ulong)(uint)fVar41;
                  fVar44 = *(float *)(unaff_x19 + 0x49);
                  if ((fVar44 < fVar41) &&
                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) goto LAB_024914c0;
                }
                switch((int)unaff_x19[0x5b]) {
                case 0:
                case 2:
                case 4:
                  FUN_024d7014(fStack0000000000000054,uVar12,fStack00000000000000c8,
                               *(undefined4 *)((long)unaff_x19 + 0x2f4),in_stack_000000c0._4_4_,
                               fStack00000000000000cc,in_stack_000000d8._4_4_,fStack0000000000000048
                              );
                  break;
                case 1:
                  lVar19 = *(long *)System_Threading_Mutex_TypeInfo;
                  if (*(int *)(lVar19 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar19 = *plVar23;
                  }
                  lVar37 = *(long *)(lVar19 + 0xb8);
                  lVar19 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
                  if ((*(byte *)(lVar19 + 0x132) & 1) == 0) {
                    lVar19 = FUN_00d5941c(lVar19);
                  }
                  lVar19 = *(long *)(*(long *)(lVar19 + 0xc0) + 8);
                  if ((*(byte *)(lVar19 + 0x132) & 1) == 0) {
                    lVar19 = FUN_00d5941c();
                  }
                  piVar15 = (int *)thunk_FUN_00d32ed4(lVar37 + 0x11f0,
                                                      *(long *)(lVar19 + 0x80) + 0xa0);
                  if (*piVar15 == 0) {
                    in_stack_00000068._4_1_ = 0;
                    goto LAB_0248e4bc;
                  }
                  lVar19 = *plVar23;
                  if (*(int *)(lVar19 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar19 = *plVar23;
                  }
                  FUN_013b8de4(*(long *)(lVar19 + 0xb8) + 0x11f0,&stack0x00000880,
                               *(undefined8 *)
                                Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                              );
                  memcpy(&stack0x00000fe8,&stack0x00000880,0x378);
                  iVar7 = FUN_024d66ec();
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
                  FUN_024d7014(fStack0000000000000054,uVar12,fStack00000000000000c8,
                               *(undefined4 *)((long)unaff_x19 + 0x2f4),in_stack_000000c0._4_4_,
                               fStack00000000000000cc,in_stack_000000d8._4_4_,fStack0000000000000048
                              );
                  *(undefined4 *)(unaff_x19 + 0x99) = 0;
                  *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                  *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
                  *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
                  break;
                case 6:
                  lVar19 = unaff_x19[0x5c];
                  if (*(int *)(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar12 = FUN_02681b9c(lVar19,0,0);
                  if ((uVar12 & 1) != 0) {
                    plVar38 = (long *)unaff_x19[0x5c];
                    uVar14 = (**(code **)(*unaff_x19 + 0x548))();
                    if (plVar38 == (long *)0x0) goto LAB_02491464;
                    (**(code **)(*plVar38 + 0x558))
                              (plVar38,uVar14,*(undefined8 *)(*plVar38 + 0x560));
                    lVar19 = unaff_x19[0x5c];
                    if (lVar19 == 0) goto LAB_02491464;
                    *(int *)(lVar19 + 0x3f8) = (int)unaff_x19[0x7f];
                    FUN_024c910c(lVar19,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
                    plVar38 = (long *)unaff_x19[0x5c];
                    if (plVar38 == (long *)0x0) goto LAB_02491464;
                    (**(code **)(*plVar38 + 0x7d8))(plVar38,0,0,*(undefined8 *)(*plVar38 + 0x7e0));
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
                plVar23 = (long *)System_Threading_Mutex_TypeInfo;
                plVar40 = (long *)StringLiteral_302;
              }
              else {
                FUN_024d7014(fStack0000000000000054,uVar12,fStack00000000000000c8,
                             *(undefined4 *)((long)unaff_x19 + 0x2f4),in_stack_000000c0._4_4_,
                             fStack00000000000000cc,in_stack_000000d8._4_4_,fStack0000000000000048);
                bStack000000000000005c = 1;
                in_stack_00000068._4_1_ = 0;
                fStack0000000000000058 = 1.4013e-45;
                plVar23 = (long *)System_Threading_Mutex_TypeInfo;
                plVar40 = (long *)StringLiteral_302;
              }
            }
          }
          else {
            in_stack_00000068._4_1_ = 0;
            in_stack_000017a8 = CONCAT44(0x2d,uVar39);
            *in_stack_00000148 = uVar39;
            plVar23 = (long *)System_Threading_Mutex_TypeInfo;
            plVar40 = (long *)StringLiteral_302;
            uVar12 = uVar13;
            in_stack_00001788 = in_stack_00001788 - 1;
          }
        }
      }
      else {
        if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
          *(uint *)((long)unaff_x19 + 0x2dc) = uVar27;
        }
        plVar40 = (long *)StringLiteral_302;
        plVar23 = (long *)System_Threading_Mutex_TypeInfo;
        uVar14 = DAT_02941c08;
        if ((char)unaff_x19[0x46] != '\0') {
          fVar49 = *(float *)(unaff_x19 + 0x58);
          if (((fVar49 < *(float *)((long)unaff_x19 + 0x2b4)) && (0.0 < fVar41)) &&
             (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
            fVar50 = *(float *)((long)unaff_x19 + 0x2b4) +
                     ((in_stack_00000018._4_4_ - fVar53) / (float)(int)unaff_x19[0x94]) /
                     fStack0000000000000054;
            if (fVar50 <= fVar49) {
              fVar50 = fVar49;
            }
            goto LAB_0248ea5c;
          }
          fVar53 = *(float *)((long)unaff_x19 + 0x1dc);
          fVar41 = *(float *)(unaff_x19 + 0x49);
          uVar13 = (ulong)(uint)fVar41;
          if ((fVar41 < fVar53) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
            fVar50 = (fVar53 - *(float *)(unaff_x19 + 0x47)) * 0.5;
            if (fVar50 <= DAT_028aa298) {
              fVar50 = DAT_028aa298;
            }
            fVar47 = (fVar53 - fVar50) * 20.0 + 0.5;
            fVar50 = DAT_02958220;
            if (fVar47 != INFINITY) {
              fVar50 = (float)(int)fVar47 / 20.0;
            }
            if (fVar50 <= fVar41) {
              fVar50 = fVar41;
            }
            *(float *)((long)unaff_x19 + 0x234) = fVar53;
            goto LAB_0248e598;
          }
        }
        switch((int)unaff_x19[0x5b]) {
        case 1:
          lVar19 = *(long *)System_Threading_Mutex_TypeInfo;
          if (*(int *)(lVar19 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar19 = *plVar23;
          }
          lVar37 = *(long *)(lVar19 + 0xb8);
          lVar19 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
          if ((*(byte *)(lVar19 + 0x132) & 1) == 0) {
            lVar19 = FUN_00d5941c(lVar19);
          }
          plVar40 = (long *)StringLiteral_302;
          lVar19 = *(long *)(*(long *)(lVar19 + 0xc0) + 8);
          if ((*(byte *)(lVar19 + 0x132) & 1) == 0) {
            lVar19 = FUN_00d5941c();
          }
          piVar15 = (int *)thunk_FUN_00d32ed4(lVar37 + 0x11f0,*(long *)(lVar19 + 0x80) + 0xa0);
          if (*piVar15 == 0) {
LAB_0248e4bc:
            in_stack_000017a8 = DAT_02941c08;
            in_stack_00000148[0] = 0;
            in_stack_00000148[1] = 0;
            uVar12 = uVar13;
            in_stack_00001788 = 0xffffffff;
          }
          else {
            lVar19 = *plVar23;
            if (*(int *)(lVar19 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar19 = *plVar23;
            }
            FUN_013b8de4(*(long *)(lVar19 + 0xb8) + 0x11f0,&stack0x00000880,
                         *(undefined8 *)
                          Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                        );
            memcpy(&stack0x00001360,&stack0x00000880,0x378);
LAB_0248c8f4:
            iVar7 = FUN_024d66ec();
LAB_0248c900:
            iVar9 = *(int *)((long)unaff_x19 + 0x48c) + -1;
            *(int *)((long)unaff_x19 + 0x48c) = iVar9;
            in_stack_00000140._4_4_ = in_stack_00000140._4_4_ + 1;
            uVar12 = uVar13;
            in_stack_00001788 = iVar7 - 1;
            in_stack_000017a8 = CONCAT44(0x2026,iVar9);
          }
          goto LAB_0248ab98;
        default:
          goto switchD_0248c274_caseD_2;
        case 3:
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
LAB_0248c524:
          plVar40 = (long *)StringLiteral_302;
          in_stack_00001788 = FUN_024d66ec();
          break;
        case 5:
          if ((uVar27 == 0) || ((int)in_stack_00001788 < 0)) {
            *in_stack_00000148 = 0;
            plVar23 = (long *)System_Threading_Mutex_TypeInfo;
            plVar40 = (long *)StringLiteral_302;
            uVar12 = uVar13;
            in_stack_00001788 = 0xffffffff;
            in_stack_000017a8 = uVar14;
          }
          else {
            fVar50 = *(float *)(unaff_x19 + 0x98);
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            in_stack_00001788 = FUN_024d66ec();
            if (in_stack_000000a0 < fVar50 - fVar42) break;
            *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
            *(undefined4 *)(unaff_x19 + 0x92) = *(undefined4 *)((long)unaff_x19 + 0x48c);
            uVar12 = *(ulong *)(*(long *)(*plVar23 + 0xb8) + 0x15a8);
            *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
            *(undefined4 *)(unaff_x19 + 0x99) = 0;
            lVar19 = NEON_rev64(uVar12,4);
            unaff_x19[0x98] = lVar19;
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
          plVar40 = (long *)StringLiteral_302;
          lVar19 = unaff_x19[0x5c];
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              );
          }
          uVar12 = FUN_02681b9c(lVar19,0,0);
          if ((uVar12 & 1) != 0) {
            plVar38 = (long *)unaff_x19[0x5c];
            uVar14 = (**(code **)(*unaff_x19 + 0x548))();
            if (plVar38 == (long *)0x0) goto LAB_02491464;
            (**(code **)(*plVar38 + 0x558))(plVar38,uVar14,*(undefined8 *)(*plVar38 + 0x560));
            lVar19 = unaff_x19[0x5c];
            if (lVar19 == 0) goto LAB_02491464;
            *(int *)(lVar19 + 0x3f8) = (int)unaff_x19[0x7f];
            FUN_024c910c(lVar19,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
            plVar38 = (long *)unaff_x19[0x5c];
            if (plVar38 == (long *)0x0) goto LAB_02491464;
            (**(code **)(*plVar38 + 0x7d8))(plVar38,0,0,*(undefined8 *)(*plVar38 + 0x7e0));
            *(undefined1 *)(unaff_x19 + 0x5e) = 1;
          }
        }
LAB_0248c628:
        uVar12 = uVar13;
        in_stack_000017a8 = CONCAT44(3,uVar27);
      }
    }
    else {
      if (((in_stack_000017bc & 0xfffffffe) == 10) && ((int)unaff_x19[0x5b] == 6)) {
        fVar50 = 0.0;
        if ((0.0 < (float)uVar13) && (fVar50 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
          fVar50 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
        }
        uVar12 = (ulong)(uint)in_stack_000000a0;
        if (in_stack_000000a0 <
            (*(float *)(unaff_x19 + 0x96) - (*(float *)((long)unaff_x19 + 0x4c4) - (float)uVar13)) +
            fVar50) {
          if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
            *(uint *)((long)unaff_x19 + 0x2dc) = uVar27;
          }
          plVar40 = (long *)StringLiteral_302;
          plVar23 = (long *)System_Threading_Mutex_TypeInfo;
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          in_stack_00001788 = FUN_024d66ec();
          lVar19 = unaff_x19[0x5c];
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              );
          }
          uVar13 = FUN_02681b9c(lVar19,0,0);
          if ((uVar13 & 1) != 0) {
            plVar38 = (long *)unaff_x19[0x5c];
            uVar14 = (**(code **)(*unaff_x19 + 0x548))();
            if (plVar38 == (long *)0x0) goto LAB_02491464;
            (**(code **)(*plVar38 + 0x558))(plVar38,uVar14,*(undefined8 *)(*plVar38 + 0x560));
            lVar19 = unaff_x19[0x5c];
            if (lVar19 == 0) goto LAB_02491464;
            *(int *)(lVar19 + 0x3f8) = (int)unaff_x19[0x7f];
            FUN_024c910c(lVar19,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
            plVar38 = (long *)unaff_x19[0x5c];
            if (plVar38 == (long *)0x0) goto LAB_02491464;
            (**(code **)(*plVar38 + 0x7d8))(plVar38,0,0,*(undefined8 *)(*plVar38 + 0x7e0));
            *(undefined1 *)(unaff_x19 + 0x5e) = 1;
          }
          in_stack_000017a8 = CONCAT44(3,uVar27);
          goto LAB_0248ab98;
        }
      }
      if ((((in_stack_000017bc - 0x2007 < 0x23) &&
           ((1L << ((ulong)(in_stack_000017bc - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
          (in_stack_000017bc - 10 < 2)) || (in_stack_000017bc == 0xa0)) {
UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ObjectSpawner__get_objectPrefabs:
        if (((in_stack_000017bc != 0xad) && (in_stack_000017bc != 0x200b)) &&
           (in_stack_000017bc != 0x2060)) {
          lVar19 = *in_stack_00000150;
          if ((lVar19 == 0) || (lVar37 = *(long *)(lVar19 + 0x50), lVar37 == 0)) goto LAB_02491464;
          if (*(uint *)(lVar37 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          lVar37 = lVar37 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
          *(int *)(lVar37 + 0x2c) = *(int *)(lVar37 + 0x2c) + 1;
          *(int *)(lVar19 + 0x20) = *(int *)(lVar19 + 0x20) + 1;
        }
      }
      else {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar12 = FUN_016fa418(in_stack_000017bc,0);
        if ((uVar12 & 1) != 0)
        goto 
        UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ObjectSpawner__get_objectPrefabs;
      }
      if (in_stack_000017bc == 0xa0) {
        if ((*in_stack_00000150 == 0) ||
           (lVar19 = *(long *)(*in_stack_00000150 + 0x50), lVar19 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar19 = lVar19 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
LAB_0248cf8c:
        *(int *)(lVar19 + 0x20) = *(int *)(lVar19 + 0x20) + 1;
      }
FUN_0248d088:
      if (((int)unaff_x19[0x5b] == 1) && ((in_stack_000017bc == 0x2d || (unaff_w20 != 1)))) {
        if (unaff_x19[0xca] == 0) goto LAB_02491464;
        fVar50 = *(float *)(unaff_x19 + 0x3c);
        iVar7 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
        if (unaff_x19[0xca] == 0) goto LAB_02491464;
        fVar43 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
        lVar19 = unaff_x19[0xc9];
        fVar47 = fStack0000000000000084;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar47 = 1.0;
        }
        if ((lVar19 == 0) || (*(long *)(lVar19 + 0x20) == 0)) goto LAB_02491464;
        fVar44 = *(float *)((long)unaff_x19 + 0x3fc);
        fVar42 = *(float *)(lVar19 + 0x2c);
        fVar46 = (float)FUN_026fd668(*(long *)(lVar19 + 0x20),0);
        fVar41 = *_fStack0000000000000098;
        fVar46 = fVar44 * (fVar50 / (float)iVar7) * fVar43 * fVar47 * fVar42 * fVar46;
        fVar50 = *in_stack_00000088;
        if ((in_stack_000017bc == 10) && (*(int *)((long)unaff_x19 + 0x48c) != (int)unaff_x19[0x92])
           ) {
          if ((*in_stack_00000150 == 0) ||
             (lVar19 = *(long *)(*in_stack_00000150 + 0x38), lVar19 == 0)) goto LAB_02491464;
          uVar27 = *(int *)((long)unaff_x19 + 0x48c) - 1;
          if (*(uint *)(lVar19 + 0x18) <= uVar27)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          if (unaff_x19[0xca] == 0) goto LAB_02491464;
          fVar47 = *(float *)(lVar19 + (long)(int)uVar27 * (long)iVar36 + 0x60);
          iVar7 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
          if (unaff_x19[0xca] == 0) goto LAB_02491464;
          fVar44 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
          lVar19 = unaff_x19[0xc9];
          fVar43 = fStack0000000000000084;
          if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
            fVar43 = 1.0;
          }
          if ((lVar19 == 0) || (*(long *)(lVar19 + 0x20) == 0)) goto LAB_02491464;
          fVar42 = *(float *)((long)unaff_x19 + 0x3fc);
          fVar53 = *(float *)(lVar19 + 0x2c);
          fVar46 = (float)FUN_026fd668(*(long *)(lVar19 + 0x20),0);
          if ((*in_stack_00000150 == 0) ||
             (lVar19 = *(long *)(*in_stack_00000150 + 0x50), lVar19 == 0)) goto LAB_02491464;
          if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          lVar19 = lVar19 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
          fVar41 = *(float *)(lVar19 + 0x60);
          fVar50 = *(float *)(lVar19 + 100);
          fVar46 = fVar42 * (fVar47 / (float)iVar7) * fVar44 * fVar43 * fVar53 * fVar46;
        }
        fVar42 = *(float *)(unaff_x19 + 0x9a);
        fVar43 = *(float *)(unaff_x19 + 0x96);
        fVar53 = *(float *)((long)unaff_x19 + 0x4c4);
        fVar47 = 0.0;
        fVar44 = 0.0;
        if ((0.0 < fVar42) && (fVar44 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
          fVar44 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
        }
        fVar49 = *(float *)(unaff_x19 + 199);
        if ((char)unaff_x19[0x1d] == '\0') {
          if ((unaff_x19[0xc9] == 0) || (lVar19 = *(long *)(unaff_x19[0xc9] + 0x20), lVar19 == 0))
          goto LAB_02491464;
          FUN_026fd62c(&stack0x00000880,lVar19,0);
          unaff_x28[0x1cd] = unaff_x28[1];
          unaff_x28[0x1cc] = *unaff_x28;
          fVar47 = (float)FUN_026fd474(&stack0x000016e0,0);
        }
        puVar3 = System_Threading_Mutex_TypeInfo;
        fVar51 = *(float *)(unaff_x19 + 0x6b);
        fVar50 = (fStack0000000000000090 - fVar41) - fVar50;
        bVar5 = true;
        if ((fVar51 <= fVar50) && (bVar5 = false, !NAN(fVar51))) {
          bVar5 = fVar51 == -1.0;
        }
        if (!bVar5) {
          fVar50 = fVar51;
        }
        fVar41 = _DAT_0294c6e8;
        if ((uVar26 & 0x18) == 0) {
          fVar41 = 1.0;
        }
        if (((fVar43 - (fVar53 - fVar42)) + fVar44 < in_stack_000000a0) &&
           (ABS(fVar49) + fVar46 * fVar47 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) <
            fVar41 * fVar50)) {
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_024d69d4();
          lVar19 = *(long *)(*(long *)puVar3 + 0xb8);
          memcpy(&stack0x00000508,(void *)(lVar19 + 0x788),0x378);
          FUN_013b86dc(lVar19 + 0x11f0,&stack0x00000508,
                       *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__);
        }
      }
      fVar50 = 1.0;
      lVar19 = *in_stack_00000150;
      if ((lVar19 == 0) || (lVar37 = *(long *)(lVar19 + 0x38), lVar37 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar37 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar27 = *(uint *)(unaff_x19 + 0x94);
      lVar37 = lVar37 + (int)*in_stack_00000148 * unaff_x21;
      *(uint *)(lVar37 + 100) = uVar27;
      *(int *)(lVar37 + 0x68) = (int)unaff_x19[0x95];
      if (((unaff_w20 & 1) == 0) &&
         ((0xd < in_stack_000017bc || ((1 << (ulong)(in_stack_000017bc & 0x1f) & 0x2c00U) == 0)))) {
        lVar19 = *(long *)(lVar19 + 0x50);
        if (lVar19 == 0) goto LAB_02491464;
LAB_0248d42c:
        if (*(uint *)(lVar19 + 0x18) <= uVar27)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        *(int *)(lVar19 + (long)(int)uVar27 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
      }
      else {
        lVar19 = *(long *)(lVar19 + 0x50);
        if (lVar19 == 0) goto LAB_02491464;
        if (*(uint *)(lVar19 + 0x18) <= uVar27)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        if (*(int *)(lVar19 + (long)(int)uVar27 * 0x5c + 0x24) == 1) goto LAB_0248d42c;
      }
      if (in_stack_000017bc == 9) {
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar50 = (float)FUN_026fd208(*unaff_x27 + 0x50,0);
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar46 = *(float *)(unaff_x19 + 199);
        fVar47 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x27 + 0x1b9));
        fVar50 = fStack0000000000000118 * fVar50 * fVar47;
        fVar43 = fVar50 * (float)(int)(fVar46 / fVar50);
        uVar12 = (ulong)(uint)fVar43;
        if (fVar43 <= fVar46) {
          fVar43 = fVar46 + fVar50;
        }
LAB_0248d614:
        *(float *)(unaff_x19 + 199) = fVar43;
      }
      else if (*(float *)(unaff_x19 + 0x55) == 0.0) {
        if ((char)unaff_x19[0x1d] == '\0') {
          if (*(char *)((long)unaff_x19 + 0x46c) != '\0') {
            fVar50 = (float)thunk_FUN_026935f0(_uStack0000000000000060,0);
          }
          fVar43 = *(float *)(unaff_x19 + 199);
          fVar46 = (float)FUN_026fd474(&stack0x00001770,0);
          if (unaff_x19[0x1f] != 0) {
            fVar47 = 1.0 - *(float *)((long)unaff_x19 + 0x2cc);
            fVar43 = fVar43 + fVar47 * (*(float *)((long)unaff_x19 + 0x2a4) +
                                       fStack0000000000000118 *
                                       (in_stack_000000b0 + fVar50 * fVar46) +
                                       fStack00000000000000c8 *
                                       (in_stack_000000c0._4_4_ +
                                       fStack00000000000000cc + *(float *)(unaff_x19[0x1f] + 0x1ac))
                                       );
            *(float *)(unaff_x19 + 199) = fVar43;
            goto joined_r0x0248d568;
          }
          goto LAB_02491464;
        }
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar43 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                 (*(float *)((long)unaff_x19 + 0x2a4) +
                 fStack0000000000000118 * in_stack_000000b0 +
                 fStack00000000000000c8 *
                 (in_stack_000000c0._4_4_ + fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac))
                 );
        uVar12 = (ulong)(uint)fVar43;
        fVar43 = *(float *)(unaff_x19 + 199) - fVar43;
        *(float *)(unaff_x19 + 199) = fVar43;
        if ((unaff_w29 != 0) || (in_stack_000017bc == 0x200b)) {
          fVar50 = fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
          uVar12 = (ulong)(uint)fVar50;
          fVar43 = fVar43 - fVar50;
          goto LAB_0248d614;
        }
      }
      else {
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar47 = *(float *)(unaff_x19 + 199);
        fVar43 = fVar47 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                          (*(float *)((long)unaff_x19 + 0x2a4) +
                          (*(float *)(unaff_x19 + 0x55) - fStack0000000000000080) +
                          fStack00000000000000c8 *
                          (fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac)));
        *(float *)(unaff_x19 + 199) = fVar43;
joined_r0x0248d568:
        if ((unaff_w29 != 0) || (uVar12 = (ulong)(uint)fVar47, in_stack_000017bc == 0x200b)) {
          fVar50 = fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
          uVar12 = (ulong)(uint)fVar50;
          fVar43 = fVar43 + fVar50;
          goto LAB_0248d614;
        }
      }
      lVar19 = *in_stack_00000150;
      if ((lVar19 == 0) || (lVar37 = *(long *)(lVar19 + 0x38), lVar37 == 0)) goto LAB_02491464;
      uVar27 = *in_stack_00000148;
      uVar26 = (uint)*(undefined8 *)(lVar37 + 0x18);
      if (uVar26 <= uVar27)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      *(float *)(lVar37 + (int)uVar27 * unaff_x21 + 0x144) = fVar43;
      uVar32 = in_stack_000017bc;
      if ((int)in_stack_000017bc < 0xd) {
        if ((in_stack_000017bc - 10 < 2) || (in_stack_000017bc == 3)) goto LAB_0248d6b8;
LAB_0248d69c:
        if (((unaff_w20 & in_stack_000017bc == 0x2d) != 0) ||
           ((float)uVar27 == in_stack_00000078._4_4_)) goto LAB_0248d6b8;
      }
      else {
        if (1 < in_stack_000017bc - 0x2028) {
          if (in_stack_000017bc != 0xd) goto LAB_0248d69c;
          uVar12 = 0;
          *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
          if ((float)uVar27 != in_stack_00000078._4_4_) goto LAB_0248dc08;
        }
LAB_0248d6b8:
        if (0.0 < *(float *)(unaff_x19 + 0x9a)) {
          fVar50 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
          if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (((fStack000000000000004c < ABS(fVar50)) && (*(char *)((long)unaff_x19 + 700) == '\0'))
             && (*(char *)((long)unaff_x19 + 0x334) == '\0')) {
            FUN_024d6ca8(fVar50);
            *(float *)((long)unaff_x19 + 0x4bc) = *(float *)((long)unaff_x19 + 0x4bc) - fVar50;
            *(float *)(unaff_x19 + 0x9a) = fVar50 + *(float *)(unaff_x19 + 0x9a);
            puVar3 = System_Threading_Mutex_TypeInfo;
            lVar19 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar19 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar19 = *(long *)puVar3;
            }
            lVar37 = *(long *)(lVar19 + 0xb8);
            if (*(int *)(lVar37 + 0x7ac) == (int)unaff_x19[0x94]) {
              if (*(int *)(lVar19 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar37 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
              }
              FUN_013b8de4(lVar37 + 0x11f0,&stack0x00000880,
                           *(undefined8 *)
                            Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                          );
              lVar19 = *(long *)System_Threading_Mutex_TypeInfo;
              memcpy((void *)(*(long *)(lVar19 + 0xb8) + 0x788),&stack0x00000880,0x378);
              lVar19 = *(long *)(lVar19 + 0xb8);
              *(float *)(lVar19 + 0x7bc) = fVar50 + *(float *)(lVar19 + 0x7bc);
              *(float *)(lVar19 + 0x800) = fVar50 + *(float *)(lVar19 + 0x800);
              memcpy(&stack0x00000190,(void *)(lVar19 + 0x788),0x378);
              FUN_013b86dc(lVar19 + 0x11f0,&stack0x00000190,
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<TextStyle>_get_Item__);
            }
          }
        }
        fVar43 = *(float *)(unaff_x19 + 0x9a);
        *(undefined1 *)((long)unaff_x19 + 0x334) = 0;
        fVar47 = *(float *)((long)unaff_x19 + 0x4c4) - fVar43;
        fVar50 = *(float *)((long)unaff_x19 + 0x4bc);
        if (fVar47 <= *(float *)((long)unaff_x19 + 0x4bc)) {
          fVar50 = fVar47;
        }
        *(float *)((long)unaff_x19 + 0x4bc) = fVar50;
        fVar46 = *(float *)(unaff_x19 + 0x98);
        if (*(char *)((long)unaff_x28 + 0xf34) == '\0') {
          in_stack_000017b8 = fVar50;
        }
        if ((*(char *)((long)unaff_x19 + 0x32c) != '\0') &&
           (((int)unaff_x19[100] <= *(int *)((long)unaff_x19 + 0x48c) ||
            ((int)unaff_x19[0x65] <= (int)unaff_x19[0x94])))) {
          *(undefined1 *)((long)unaff_x28 + 0xf34) = 1;
        }
        lVar19 = *in_stack_00000150;
        if ((lVar19 == 0) || (lVar37 = *(long *)(lVar19 + 0x50), lVar37 == 0)) goto LAB_02491464;
        uVar27 = *(uint *)(unaff_x19 + 0x94);
        if (*(uint *)(lVar37 + 0x18) <= uVar27)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar29 = lVar37 + (long)(int)uVar27 * 0x5c;
        *(int *)(lVar29 + 0x34) = (int)unaff_x19[0x92];
        iVar7 = (int)unaff_x19[0x92];
        if ((int)unaff_x19[0x92] <= *(int *)((long)unaff_x19 + 0x494)) {
          iVar7 = *(int *)((long)unaff_x19 + 0x494);
        }
        *(int *)((long)unaff_x19 + 0x494) = iVar7;
        *(int *)(lVar29 + 0x38) = iVar7;
        *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x48c);
        *(undefined4 *)(lVar29 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x48c);
        iVar7 = *(int *)((long)unaff_x19 + 0x494);
        if (*(int *)((long)unaff_x19 + 0x494) <= *(int *)((long)unaff_x19 + 0x49c)) {
          iVar7 = *(int *)((long)unaff_x19 + 0x49c);
        }
        *(int *)((long)unaff_x19 + 0x49c) = iVar7;
        *(int *)(lVar29 + 0x40) = iVar7;
        *(int *)(lVar29 + 0x24) = (*(int *)(lVar29 + 0x3c) - *(int *)(lVar29 + 0x34)) + 1;
        *(undefined4 *)(lVar29 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
        lVar19 = *(long *)(lVar19 + 0x38);
        if (lVar19 == 0) goto LAB_02491464;
        if (*(uint *)(lVar19 + 0x18) <= *(uint *)((long)unaff_x19 + 0x494))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        uVar55 = *(undefined4 *)
                  (lVar19 + (int)*(uint *)((long)unaff_x19 + 0x494) * unaff_x21 + 0x11c);
        lVar37 = lVar37 + (long)(int)uVar27 * 0x5c;
        *(float *)(lVar37 + 0x70) = fVar47;
        *(undefined4 *)(lVar37 + 0x6c) = uVar55;
        lVar19 = *in_stack_00000150;
        if ((lVar19 == 0) || (lVar37 = *(long *)(lVar19 + 0x50), lVar37 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar37 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar19 = *(long *)(lVar19 + 0x38);
        if (lVar19 == 0) goto LAB_02491464;
        if (*(uint *)(lVar19 + 0x18) <= *(uint *)((long)unaff_x19 + 0x49c))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fVar46 = fVar46 - fVar43;
        lVar37 = lVar37 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
        *(undefined4 *)(lVar37 + 0x74) =
             *(undefined4 *)(lVar19 + (int)*(uint *)((long)unaff_x19 + 0x49c) * unaff_x21 + 0x128);
        *(float *)(lVar37 + 0x78) = fVar46;
        lVar19 = *in_stack_00000150;
        if ((lVar19 == 0) || (lVar29 = *(long *)(lVar19 + 0x50), lVar29 == 0)) goto LAB_02491464;
        lVar11 = (long)(int)*(uint *)(unaff_x19 + 0x94);
        if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar37 = lVar29 + lVar11 * 0x5c;
        *(float *)(lVar37 + 0x44) =
             *(float *)(lVar37 + 0x74) - fStack0000000000000118 * in_stack_00000130._4_4_;
        *(float *)(lVar37 + 0x5c) = in_stack_000000d8._4_4_;
        if (*(int *)(lVar37 + 0x24) == 1) {
          *(int *)(lVar29 + lVar11 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
        }
        if ((*unaff_x27 == 0) || (lVar37 = *(long *)(lVar19 + 0x38), lVar37 == 0))
        goto LAB_02491464;
        lVar31 = (long)(int)*(uint *)((long)unaff_x19 + 0x49c);
        uVar26 = (uint)*(undefined8 *)(lVar37 + 0x18);
        if (uVar26 <= *(uint *)((long)unaff_x19 + 0x49c))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        if ((*(char *)(lVar37 + lVar31 * unaff_x21 + 0x194) == '\0') &&
           (lVar31 = (long)(int)*(uint *)(unaff_x19 + 0x93), uVar26 <= *(uint *)(unaff_x19 + 0x93)))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fVar43 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                 (fStack00000000000000c8 *
                  (in_stack_000000c0._4_4_ + fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac)
                  ) - *(float *)((long)unaff_x19 + 0x2a4));
        fVar50 = -fVar43;
        if ((char)unaff_x19[0x1d] != '\0') {
          fVar50 = fVar43;
        }
        lVar29 = lVar29 + lVar11 * 0x5c;
        *(float *)(lVar29 + 0x58) = *(float *)(lVar37 + lVar31 * unaff_x21 + 0x144) + fVar50;
        fVar50 = *(float *)(unaff_x19 + 0x9a);
        *(float *)(lVar29 + 0x48) = fStack0000000000000050 + (fVar46 - fVar47);
        *(float *)(lVar29 + 0x4c) = fVar46;
        uVar12 = (ulong)(uint)(0.0 - fVar50);
        *(float *)(lVar29 + 0x50) = 0.0 - fVar50;
        *(float *)(lVar29 + 0x54) = fVar47;
        plVar23 = (long *)System_Threading_Mutex_TypeInfo;
        if ((int)in_stack_000017bc < 0x2d) {
          if (in_stack_000017bc - 10 < 2) {
LAB_0248dad8:
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            plVar40 = (long *)StringLiteral_302;
            FUN_024d69d4();
            lVar19 = unaff_x19[0x6c];
            *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
            iVar7 = (int)unaff_x19[0x94] + 1;
            *(int *)(unaff_x19 + 0x94) = iVar7;
            *(int *)(unaff_x19 + 0x92) = *(int *)((long)unaff_x19 + 0x48c) + 1;
            if ((lVar19 != 0) && (*(long *)(lVar19 + 0x50) != 0)) {
              if (*(int *)(*(long *)(lVar19 + 0x50) + 0x18) <= iVar7) {
                FUN_024d6e60();
                lVar19 = unaff_x19[0x6c];
                if (lVar19 == 0) goto LAB_02491464;
              }
              lVar19 = *(long *)(lVar19 + 0x38);
              if (lVar19 != 0) {
                if (*in_stack_00000148 < *(uint *)(lVar19 + 0x18)) {
                  fVar50 = *(float *)(lVar19 + (int)*in_stack_00000148 * unaff_x21 + 0x154);
                  if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
                    fVar47 = 0.0;
                    if ((in_stack_000017bc == 0x2029) || (in_stack_000017bc == 10)) {
                      fVar47 = *(float *)((long)unaff_x19 + 0x2c4);
                    }
                    uVar17 = 0;
                    fVar47 = *(float *)(unaff_x19 + 0x9a) +
                             fVar50 + (0.0 - *(float *)((long)unaff_x19 + 0x4c4)) +
                             fStack0000000000000054 *
                             (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4)) +
                             fStack00000000000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar47);
                  }
                  else {
                    if ((in_stack_000017bc == 0x2029) || (fVar47 = 0.0, in_stack_000017bc == 10)) {
                      fVar47 = *(float *)((long)unaff_x19 + 0x2c4);
                    }
                    uVar17 = 1;
                    fVar47 = *(float *)(unaff_x19 + 0x9a) +
                             *(float *)(unaff_x19 + 0x57) +
                             fStack00000000000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar47);
                  }
                  *(float *)(unaff_x19 + 0x9a) = fVar47;
                  *(undefined1 *)((long)unaff_x19 + 700) = uVar17;
                  lVar19 = *plVar23;
                  if (*(int *)(lVar19 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar19 = *plVar23;
                  }
                  uVar14 = *(undefined8 *)(*(long *)(lVar19 + 0xb8) + 0x15a8);
                  *(float *)(unaff_x19 + 0x99) = fVar50;
                  uVar12 = NEON_rev64(uVar14,4);
                  unaff_x19[0x98] = uVar12;
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
            uVar32 = 3;
          }
        }
        else if ((in_stack_000017bc - 0x2028 < 2) || (in_stack_000017bc == 0x2d)) goto LAB_0248dad8;
      }
LAB_0248dc08:
      uVar27 = *in_stack_00000148;
      if (uVar26 <= uVar27)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (*(char *)(lVar37 + (int)uVar27 * unaff_x21 + 0x194) != '\0') {
        lVar37 = lVar37 + (int)uVar27 * unaff_x21;
        uVar13 = *(ulong *)(lVar37 + 0x11c);
        uVar12 = *(ulong *)(in_stack_00000070 + 0x230);
        *(ulong *)(in_stack_00000070 + 0x230) =
             uVar13 ^ (uVar13 ^ uVar12) &
                      CONCAT44(-(uint)((float)(uVar12 >> 0x20) < (float)(uVar13 >> 0x20)),
                               -(uint)((float)uVar12 < (float)uVar13));
        uVar13 = *(ulong *)(in_stack_00000070 + 0x238);
        uVar12 = *(ulong *)(lVar37 + 0x128);
        *(ulong *)(in_stack_00000070 + 0x238) =
             uVar12 ^ (uVar12 ^ uVar13) &
                      CONCAT44(-(uint)((float)(uVar12 >> 0x20) < (float)(uVar13 >> 0x20)),
                               -(uint)((float)uVar12 < (float)uVar13));
      }
      if (((int)unaff_x19[0x5b] == 5) &&
         ((0xd < uVar32 || ((1 << (ulong)(uVar32 & 0x1f) & 0x2c00U) == 0)))) {
        lVar37 = *(long *)(lVar19 + 0x58);
        if (lVar37 == 0) goto LAB_02491464;
        iVar7 = (int)unaff_x19[0x95] + 1;
        if (*(int *)(lVar37 + 0x18) < iVar7) {
          if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01147c08((long *)(lVar19 + 0x58),iVar7,1,
                       *(undefined8 *)
                        Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerMove__);
          lVar19 = *in_stack_00000150;
          if (lVar19 == 0) goto LAB_02491464;
        }
        lVar37 = *(long *)(lVar19 + 0x58);
        if (lVar37 == 0) goto LAB_02491464;
        uVar26 = *(uint *)(unaff_x19 + 0x95);
        lVar29 = (long)(int)uVar26;
        uVar27 = *(uint *)(lVar37 + 0x18);
        if (uVar27 <= uVar26)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar11 = lVar37 + lVar29 * 0x14;
        fVar47 = *(float *)(lVar11 + 0x30);
        uVar12 = (ulong)(uint)fVar47;
        *(undefined4 *)(lVar11 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
        fVar50 = *(float *)((long)unaff_x19 + 0x4bc);
        if (fVar47 <= *(float *)((long)unaff_x19 + 0x4bc)) {
          fVar50 = fVar47;
        }
        *(float *)(lVar11 + 0x30) = fVar50;
        uVar32 = *(uint *)((long)unaff_x19 + 0x48c);
        if (uVar32 == 0 && uVar26 == 0) {
          *(uint *)(lVar37 + lVar29 * 0x14 + 0x20) = uVar32;
        }
        else {
          uVar39 = uVar32 - 1;
          if (0 < (int)uVar32) {
            lVar19 = *(long *)(lVar19 + 0x38);
            if (lVar19 == 0) goto LAB_02491464;
            if (*(uint *)(lVar19 + 0x18) <= uVar39)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            if (uVar26 != *(uint *)(lVar19 + (long)(int)uVar39 * (long)iVar36 + 0x68)) {
              if (uVar26 - 1 < uVar27) {
                *(uint *)(lVar37 + 0x20 + (long)(int)(uVar26 - 1) * 0x14 + 4) = uVar39;
                *(uint *)(lVar37 + 0x20 + lVar29 * 0x14) = uVar32;
                goto LAB_0248dc84;
              }
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            }
          }
          if ((float)uVar32 == in_stack_00000078._4_4_) {
            *(float *)(lVar37 + lVar29 * 0x14 + 0x24) = in_stack_00000078._4_4_;
          }
        }
      }
LAB_0248dc84:
      plVar23 = (long *)System_Threading_Mutex_TypeInfo;
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
                (uVar13 = FUN_024e95f0(0), (uVar13 & 1) != 0)) &&
               ((((0xed < in_stack_000017bc - 0xff01 && (0x1d < in_stack_000017bc - 0xfe31)) &&
                 (0x717d < in_stack_000017bc - 0x2e81)) && (0x1fd < in_stack_000017bc - 0xf901))))
            goto LAB_0248ded4;
            lVar19 = FUN_024e94b0(0);
            if ((lVar19 == 0) || (*(long *)(lVar19 + 0x10) == 0)) goto LAB_02491464;
            uVar13 = FUN_0129aa60(*(long *)(lVar19 + 0x10),&stack0x00000880,
                                  *(undefined8 *)
                                   System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                                 );
            if ((int)*in_stack_00000148 < (int)in_stack_00000078._4_4_) {
              lVar19 = FUN_024e94b0(0);
              if (((lVar19 == 0) || (*in_stack_00000150 == 0)) ||
                 (lVar37 = *(long *)(*in_stack_00000150 + 0x38), lVar37 == 0)) goto LAB_02491464;
              if (*(uint *)(lVar37 + 0x18) <= *in_stack_00000148 + 1)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              if (*(long *)(lVar19 + 0x18) == 0) goto LAB_02491464;
              in_stack_00000880 =
                   (uint)*(ushort *)
                          (lVar37 + (long)(int)(*in_stack_00000148 + 1) * (long)iVar36 + 0x20);
              uVar16 = FUN_0129aa60(*(long *)(lVar19 + 0x18),&stack0x00000880,
                                    *(undefined8 *)
                                     System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                                   );
              if ((uVar13 & 1) != 0) goto LAB_0248e0dc;
              if ((uVar16 & 1) == 0) goto LAB_0248e1b0;
              plVar23 = (long *)System_Threading_Mutex_TypeInfo;
              if ((bStack000000000000005c & 1) == 0) {
                bStack000000000000005c = 0;
                goto LAB_0248e168;
              }
            }
            else {
              in_stack_00000880 = in_stack_000017bc;
              if ((uVar13 & 1) == 0) {
LAB_0248e1b0:
                plVar23 = (long *)System_Threading_Mutex_TypeInfo;
                if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_024d69d4();
                bStack000000000000005c = 0;
                goto LAB_0248e168;
              }
LAB_0248e0dc:
              plVar23 = (long *)System_Threading_Mutex_TypeInfo;
              if (uVar8 != uVar22 || ((bStack000000000000005c ^ 0xff) & 1) != 0) goto LAB_0248e168;
            }
joined_r0x0248e0fc:
            System_Threading_Mutex_TypeInfo = (undefined *)plVar23;
            if (unaff_w29 != 0) {
LAB_0248e100:
              plVar23 = (long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_024d69d4();
            }
            if (*(int *)(*plVar23 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_024d69d4();
            bStack000000000000005c = 1;
          }
          else {
LAB_0248ded4:
            plVar23 = (long *)System_Threading_Mutex_TypeInfo;
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
          *(undefined4 *)(*(long *)(*plVar23 + 0xb8) + 0xe78) = 0xffffffff;
        }
      }
LAB_0248e168:
      if (*(int *)(*plVar23 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar40 = (long *)StringLiteral_302;
      FUN_024d69d4();
      *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
    }
LAB_0248ab98:
    do {
      fVar50 = 1.0;
      in_stack_00001788 = in_stack_00001788 + 1;
      lVar19 = unaff_x19[0x8e];
      if (lVar19 == 0) goto LAB_02491464;
      if ((int)*(uint *)(lVar19 + 0x18) <= (int)in_stack_00001788) {
LAB_0248e4dc:
        fVar50 = (float)uVar12;
        if (((char)unaff_x19[0x46] != '\0') &&
           (fVar50 = DAT_02956ccc,
           DAT_02956ccc < *(float *)((long)unaff_x19 + 0x234) - *(float *)(unaff_x19 + 0x47))) {
          fVar50 = *(float *)((long)unaff_x19 + 0x1dc);
          fVar47 = *(float *)((long)unaff_x19 + 0x24c);
          if ((fVar50 < fVar47) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
            if (*(float *)((long)unaff_x19 + 0x2cc) < *(float *)(unaff_x19 + 0x59) / 100.0) {
              *(undefined4 *)((long)unaff_x19 + 0x2cc) = 0;
            }
            fVar43 = (*(float *)((long)unaff_x19 + 0x234) - fVar50) * 0.5;
            if (fVar43 <= DAT_028aa298) {
              fVar43 = DAT_028aa298;
            }
            *(float *)(unaff_x19 + 0x47) = fVar50;
            fVar43 = (fVar50 + fVar43) * 20.0 + 0.5;
            fVar50 = DAT_02958220;
            if (fVar43 != INFINITY) {
              fVar50 = (float)(int)fVar43 / 20.0;
            }
            if (fVar47 <= fVar50) {
              fVar50 = fVar47;
            }
            goto LAB_0248e598;
          }
        }
        *(undefined1 *)((long)unaff_x19 + 0x244) = 1;
        if ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c)) {
          uVar14 = FUN_0176eb1c(_fStack0000000000000038,0);
          uVar10 = FUN_017840ac(in_stack_00000040,0);
          uVar14 = FUN_0160073c(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlah_s16__
                                ,uVar14,*(undefined8 *)
                                         Method_UnityEngine_GameObject_GetComponents<Component>__,
                                uVar10,0);
          if (*(int *)(*plVar40 + 0xe0) == 0) {
            thunk_FUN_00d32864(*plVar40);
          }
          FUN_02660dac(uVar14,0);
        }
        puVar3 = Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__;
        if ((*in_stack_00000148 == 0) || ((*in_stack_00000148 == 1 && (uVar57 == 3)))) {
          (**(code **)(*unaff_x19 + 0x958))();
          lVar19 = *(long *)puVar3;
          goto LAB_02491474;
        }
        lVar19 = *plVar23;
        if (*(int *)(lVar19 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar19 = *plVar23;
        }
        plVar23 = (long *)PTR_DAT_033ed410;
        lVar19 = **(long **)(lVar19 + 0xb8);
        if (lVar19 == 0) goto LAB_02491464;
        if (*(uint *)(lVar19 + 0x18) <= *(uint *)(unaff_x19 + 0xd0))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        iVar36 = *(int *)(lVar19 + (long)(int)*(uint *)(unaff_x19 + 0xd0) * 0x38 + 0x54) << 2;
        if ((*in_stack_00000150 == 0) ||
           (lVar19 = *(long *)(*in_stack_00000150 + 0x60), lVar19 == 0)) goto LAB_02491464;
        if (*(int *)(*(long *)PTR_DAT_033ed410 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (*(int *)(lVar19 + 0x18) == 0)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        FUN_024e7d94(lVar19 + 0x20,0,0);
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        iVar7 = (int)unaff_x19[0x4d];
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
        lVar19 = unaff_x19[0xea];
        in_stack_00000088 = (float *)in_stack_000000b8;
        fStack0000000000000090 = in_stack_000000c0._4_4_;
        if (iVar7 < 0x401) {
          if (iVar7 == 0x100) {
            if (lVar19 == 0) goto LAB_02491464;
            if (*(uint *)(lVar19 + 0x18) < 2)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            uVar14 = *(undefined8 *)(lVar19 + 0x30);
            if ((int)unaff_x19[0x5b] == 5) {
              if ((*in_stack_00000150 == 0) ||
                 (lVar37 = *(long *)(*in_stack_00000150 + 0x58), lVar37 == 0)) goto LAB_02491464;
              if (*(uint *)(lVar37 + 0x18) <= uStack0000000000000030)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              fVar50 = *(float *)(lVar37 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
            }
            else {
              fVar50 = *(float *)(unaff_x19 + 0x96);
            }
            fStack0000000000000090 = fStack000000000000002c + 0.0 + *(float *)(lVar19 + 0x2c);
            fVar50 = (0.0 - fVar50) - fStack0000000000000020;
          }
          else if (iVar7 == 0x200) {
            if (lVar19 == 0) goto LAB_02491464;
            if ((*(int *)(lVar19 + 0x18) == 1) || (*(int *)(lVar19 + 0x18) == 0))
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            fStack0000000000000090 = (*(float *)(lVar19 + 0x20) + *(float *)(lVar19 + 0x2c)) * 0.5;
            uVar14 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar19 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar19 + 0x30) >> 0x20)) * 0.5,
                              ((float)*(undefined8 *)(lVar19 + 0x24) +
                              (float)*(undefined8 *)(lVar19 + 0x30)) * 0.5);
            if ((int)unaff_x19[0x5b] == 5) {
              if ((*in_stack_00000150 == 0) ||
                 (lVar19 = *(long *)(*in_stack_00000150 + 0x58), lVar19 == 0)) goto LAB_02491464;
              if (*(uint *)(lVar19 + 0x18) <= uStack0000000000000030)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              lVar19 = lVar19 + (long)(int)uStack0000000000000030 * 0x14;
              fStack0000000000000090 = fStack000000000000002c + 0.0 + fStack0000000000000090;
              fVar50 = ((fStack0000000000000020 + *(float *)(lVar19 + 0x28) +
                        *(float *)(lVar19 + 0x30)) - fStack0000000000000024) * -0.5 + 0.0;
            }
            else {
              fStack0000000000000090 = fStack000000000000002c + 0.0 + fStack0000000000000090;
              fVar50 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x96) + in_stack_000017b8)
                       - fStack0000000000000024) * -0.5 + 0.0;
            }
          }
          else {
            if (iVar7 != 0x400) goto LAB_0248eb64;
            if (lVar19 == 0) goto LAB_02491464;
            if (*(int *)(lVar19 + 0x18) == 0)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            uVar14 = *(undefined8 *)(lVar19 + 0x24);
            if ((int)unaff_x19[0x5b] == 5) {
              if ((*in_stack_00000150 == 0) ||
                 (lVar37 = *(long *)(*in_stack_00000150 + 0x58), lVar37 == 0)) goto LAB_02491464;
              if (*(uint *)(lVar37 + 0x18) <= uStack0000000000000030)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              in_stack_000017b8 =
                   *(float *)(lVar37 + (long)(int)uStack0000000000000030 * 0x14 + 0x30);
            }
            fStack0000000000000090 = fStack000000000000002c + 0.0 + *(float *)(lVar19 + 0x20);
            fVar50 = fStack0000000000000024 + (0.0 - in_stack_000017b8);
          }
          in_stack_00000088 =
               (float *)CONCAT44((float)((ulong)uVar14 >> 0x20) + 0.0,(float)uVar14 + fVar50);
        }
        else if (iVar7 == 0x800) {
          if (lVar19 == 0) goto LAB_02491464;
          if ((*(int *)(lVar19 + 0x18) == 1) || (*(int *)(lVar19 + 0x18) == 0))
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          fVar50 = ((float)*(undefined8 *)(lVar19 + 0x24) + (float)*(undefined8 *)(lVar19 + 0x30)) *
                   0.5;
          fStack0000000000000090 =
               fStack000000000000002c + 0.0 +
               (*(float *)(lVar19 + 0x20) + *(float *)(lVar19 + 0x2c)) * 0.5;
          in_stack_00000088 =
               (float *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar19 + 0x24) >> 0x20) +
                                 (float)((ulong)*(undefined8 *)(lVar19 + 0x30) >> 0x20)) * 0.5 + 0.0
                                 ,fVar50 + 0.0);
        }
        else {
          if (iVar7 == 0x1000) {
            if (lVar19 == 0) goto LAB_02491464;
            if ((*(int *)(lVar19 + 0x18) == 1) || (*(int *)(lVar19 + 0x18) == 0))
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            fVar50 = (float)*(undefined8 *)(lVar19 + 0x24) + (float)*(undefined8 *)(lVar19 + 0x30);
            fVar47 = (float)((ulong)*(undefined8 *)(lVar19 + 0x24) >> 0x20) +
                     (float)((ulong)*(undefined8 *)(lVar19 + 0x30) >> 0x20);
            fStack0000000000000020 =
                 fStack0000000000000020 + *(float *)(unaff_x19 + 0x9c) +
                 *(float *)(unaff_x19 + 0x9b);
            fStack0000000000000090 =
                 fStack000000000000002c + 0.0 +
                 (*(float *)(lVar19 + 0x20) + *(float *)(lVar19 + 0x2c)) * 0.5;
          }
          else {
            if (iVar7 != 0x2000) goto LAB_0248eb64;
            if (lVar19 == 0) goto LAB_02491464;
            if ((*(int *)(lVar19 + 0x18) == 1) || (*(int *)(lVar19 + 0x18) == 0))
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            fVar50 = (float)*(undefined8 *)(lVar19 + 0x24) + (float)*(undefined8 *)(lVar19 + 0x30);
            fVar47 = (float)((ulong)*(undefined8 *)(lVar19 + 0x24) >> 0x20) +
                     (float)((ulong)*(undefined8 *)(lVar19 + 0x30) >> 0x20);
            fStack0000000000000020 = *(float *)((long)unaff_x19 + 0x4b4) - fStack0000000000000020;
            fStack0000000000000090 =
                 fStack000000000000002c + 0.0 +
                 (*(float *)(lVar19 + 0x20) + *(float *)(lVar19 + 0x2c)) * 0.5;
          }
          fVar50 = fVar50 * 0.5;
          in_stack_00000088 =
               (float *)CONCAT44(fVar47 * 0.5 + 0.0,
                                 fVar50 + (0.0 - (fStack0000000000000020 - fStack0000000000000024) *
                                                 0.5));
        }
LAB_0248eb64:
        lVar19 = FUN_0249b7f8();
        if (lVar19 == 0) goto LAB_02491464;
        FUN_026a125c(lVar19,0);
        __x = DAT_028aa048;
        *(float *)((long)unaff_x19 + 0x6dc) = fVar50;
        dVar45 = modf(__x,(double *)&stack0x00000880);
        puVar3 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
        if (dVar45 == 0.5) {
          fVar47 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
          if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
            fVar47 = fVar47 + 1.0;
          }
        }
        else {
          fVar47 = 255.0;
        }
        dVar45 = modf(__x,(double *)&stack0x00000880);
        if (dVar45 == 0.5) {
          fVar43 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
          if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
            fVar43 = fVar43 + 1.0;
          }
        }
        else {
          fVar43 = 255.0;
        }
        dVar45 = modf(__x,(double *)&stack0x00000880);
        if (dVar45 == 0.5) {
          fVar46 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
          if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
            fVar46 = fVar46 + 1.0;
          }
        }
        else {
          fVar46 = 255.0;
        }
        dVar45 = modf(__x,(double *)&stack0x00000880);
        if (dVar45 == 0.5) {
          fVar44 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
          if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
            fVar44 = fVar44 + 1.0;
          }
        }
        else {
          fVar44 = 255.0;
        }
        modf(__x,(double *)&stack0x00000880);
        modf(__x,(double *)&stack0x00000880);
        modf(__x,(double *)&stack0x00000880);
        modf(__x,(double *)&stack0x00000880);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (DAT_037825d3 == '\0') {
          thunk_FUN_00d48444(Unity_AI_Navigation_NavMeshLink_TypeInfo);
          DAT_037825d3 = '\x01';
        }
        puVar3 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
        lVar19 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
        if (*(int *)(lVar19 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar19 = *(long *)puVar3;
        }
        puVar20 = *(undefined4 **)(lVar19 + 0xb8);
        UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
                  (*puVar20,puVar20[1],puVar20[2],puVar20[3],&stack0x00001790,0x4000ffff,0);
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar19 = *in_stack_00000150;
        if (lVar19 == 0) goto LAB_02491464;
        uVar8 = *in_stack_00000148;
        if ((int)uVar8 < 1) {
          iStack00000000000000a4 = 0;
          iVar36 = 0;
          plVar40 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
          goto LAB_02491068;
        }
        lVar19 = *(long *)(lVar19 + 0x38);
        if (lVar19 == 0) goto LAB_02491464;
        _uStack00000000000000e0 = 0;
        fStack00000000000000e8 = 0.0;
        fStack00000000000000ec = 0.0;
        iStack00000000000000a4 = 0;
        fStack0000000000000024 = 0.0;
        bVar5 = false;
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
             (int)fVar47 & 0xffU | ((int)fVar43 & 0xffU) << 8 | ((int)fVar46 & 0xffU) << 0x10 |
             (int)fVar44 << 0x18;
        fVar43 = 0.0;
        fVar47 = 0.0;
        _in_stack_00000128 = 0x2e0;
        fStack0000000000000098 = fStack00000000000000a8;
        in_stack_000000a0 = fStack00000000000000ac;
        fStack000000000000004c = fStack00000000000000ac;
        fStack0000000000000050 = (float)uStack0000000000000094;
        in_stack_00000078._4_4_ = fStack00000000000000a8;
        in_stack_00000068._4_4_ = fStack00000000000000ac;
        uStack0000000000000060 = uStack0000000000000094;
        uVar22 = 0;
        uVar27 = 1;
        goto LAB_0248ef74;
      }
      if (*(uint *)(lVar19 + 0x18) <= in_stack_00001788)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      in_stack_000017bc = *(uint *)(lVar19 + (long)(int)in_stack_00001788 * 0xc + 0x20);
      if (in_stack_000017bc == 0) goto LAB_0248e4dc;
      if (5 < in_stack_00000140._4_4_) {
        uVar14 = FUN_0176eb1c(&stack0x000017bc,0);
        uVar10 = FUN_0176eb1c(&stack0x00001788,0);
        uVar14 = FUN_0160073c(*(undefined8 *)UnityEngine_Rendering_Universal_DebugValidationMode_var
                              ,uVar14,*(undefined8 *)
                                       Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                              ,uVar10,0);
        if (*(int *)(*plVar40 + 0xe0) == 0) {
          thunk_FUN_00d32864(*plVar40);
        }
        FUN_026610e4(uVar14,0);
        in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
      }
      if ((*(char *)((long)unaff_x19 + 0x2fa) == '\0') || (in_stack_000017bc != 0x3c)) {
        if ((*in_stack_00000150 == 0) ||
           (lVar19 = *(long *)(*in_stack_00000150 + 0x38), lVar19 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar19 + 0x18) <= *in_stack_00000148)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar19 = lVar19 + (int)*in_stack_00000148 * unaff_x21;
        *(undefined4 *)((long)unaff_x19 + 0x63c) = *(undefined4 *)(lVar19 + 0x2c);
        *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar19 + 0x58);
        unaff_x19[0x1f] = *(long *)(lVar19 + 0x38);
      }
      else {
        *(undefined1 *)((long)unaff_x19 + 0x429) = 1;
        *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
        uVar13 = FUN_024d0688();
        if (((uVar13 & 1) != 0) &&
           (in_stack_00001788 = in_stack_0000176c, uVar57 = in_stack_000017bc,
           *(int *)((long)unaff_x19 + 0x63c) == 0)) goto LAB_0248ab98;
      }
      if ((unaff_x19[0x6c] == 0) || (lVar19 = *(long *)(unaff_x19[0x6c] + 0x38), lVar19 == 0))
      goto LAB_02491464;
      uVar8 = *in_stack_00000148;
      if (*(uint *)(lVar19 + 0x18) <= uVar8)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar29 = (long)(int)uVar8;
      cVar18 = *(char *)(lVar19 + lVar29 * unaff_x21 + 0x5c);
      *(undefined1 *)((long)unaff_x19 + 0x429) = 0;
      lVar37 = unaff_x19[0x23];
      if ((uint)in_stack_000017a8 == uVar8) {
        in_stack_000017bc = (uint)((ulong)in_stack_000017a8 >> 0x20);
        unaff_w20 = 1;
        *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
        if (in_stack_000017bc == 0x2026) {
          lVar11 = unaff_x19[0xc9];
          lVar19 = lVar19 + lVar29 * unaff_x21;
          *(undefined4 *)(lVar19 + 0x2c) = 0;
          *(long *)(lVar19 + 0x30) = lVar11;
          *(long *)(lVar19 + 0x38) = unaff_x19[0xca];
          *(long *)(lVar19 + 0x50) = unaff_x19[0xcb];
          *(int *)(lVar19 + 0x58) = (int)unaff_x19[0xcc];
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
          in_stack_000017a8 = CONCAT44(3,uVar8 + 1);
        }
        else if (in_stack_000017bc == 3) {
          if ((*unaff_x27 == 0) || (lVar11 = FUN_024b11ac(*unaff_x27,0), lVar11 == 0))
          goto LAB_02491464;
          in_stack_00000bf8 = 3;
          FUN_01299bc0(lVar11,&stack0x00000bf8,&stack0x00000880,*(undefined8 *)PTR_DAT_033ef3c8);
          if (*(uint *)(lVar19 + 0x18) <= uVar8)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          unaff_w20 = 1;
          *(ulong *)(lVar19 + lVar29 * unaff_x21 + 0x30) =
               CONCAT44(in_stack_00000884,in_stack_00000880);
          uVar8 = *(uint *)((long)unaff_x19 + 0x48c);
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        }
      }
      else {
        unaff_w20 = 0;
      }
      plVar23 = (long *)System_Threading_Mutex_TypeInfo;
      if (((int)uVar8 < *(int *)((long)unaff_x19 + 0x31c)) && (in_stack_000017bc != 3)) {
        if ((*in_stack_00000150 == 0) ||
           (lVar19 = *(long *)(*in_stack_00000150 + 0x38), lVar19 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar19 + 0x18) <= uVar8)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar19 = lVar19 + (long)(int)uVar8 * (long)iVar36;
        *(undefined1 *)(lVar19 + 0x194) = 0;
        *(undefined2 *)(lVar19 + 0x20) = 0x200b;
        *(undefined4 *)(lVar19 + 100) = 0;
        *in_stack_00000148 = uVar8 + 1;
        uVar57 = in_stack_000017bc;
        goto LAB_0248ab98;
      }
      iVar7 = *(int *)((long)unaff_x19 + 0x63c);
      in_stack_00000100 = fVar50;
      if (iVar7 == 0) {
        uVar8 = *(uint *)((long)unaff_x19 + 0x254);
        if ((uVar8 >> 4 & 1) == 0) {
          if ((uVar8 >> 3 & 1) == 0) {
            if ((uVar8 >> 5 & 1) != 0) {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar13 = FUN_016f92d4(in_stack_000017bc,0);
              if ((uVar13 & 1) != 0) {
                if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar8 = FUN_016f95a8(in_stack_000017bc,0);
                in_stack_000017bc = uVar8 & 0xffff;
                in_stack_00000100 = fStack0000000000000028;
              }
            }
          }
          else {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar13 = FUN_016f9218(in_stack_000017bc,0);
            if ((uVar13 & 1) != 0) {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar8 = FUN_016f9724(in_stack_000017bc,0);
              goto LAB_0248af70;
            }
          }
        }
        else {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar13 = FUN_016f92d4(in_stack_000017bc,0);
          in_stack_00000100 = 1.0;
          if ((uVar13 & 1) != 0) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar8 = FUN_016f95a8(in_stack_000017bc,0);
LAB_0248af70:
            in_stack_000017bc = uVar8 & 0xffff;
            in_stack_00000100 = 1.0;
          }
        }
        iVar7 = *(int *)((long)unaff_x19 + 0x63c);
        if (iVar7 == 0) goto LAB_0248af84;
LAB_0248abc8:
        if (iVar7 != 1) {
          lVar19 = *in_stack_00000150;
          fVar50 = 0.0;
          if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
            fVar50 = fStack0000000000000118;
          }
          in_stack_00000138 = 0.0;
          if (lVar19 == 0) goto LAB_02491464;
          in_stack_00000128 = 0.0;
          in_stack_00000120 = 0.0;
          in_stack_000000d0 = fStack0000000000000118;
          goto LAB_0248b39c;
        }
        if ((*in_stack_00000150 == 0) ||
           (lVar19 = *(long *)(*in_stack_00000150 + 0x38), lVar19 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar19 + 0x18) <= *in_stack_00000148)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar19 = lVar19 + (int)*in_stack_00000148 * unaff_x21;
        lVar29 = *(long *)(lVar19 + 0x40);
        unaff_x19[0xd2] = lVar29;
        *(undefined4 *)((long)unaff_x19 + 0x69c) = *(undefined4 *)(lVar19 + 0x48);
        if ((lVar29 == 0) || (lVar19 = FUN_024ebfa0(lVar29,0), lVar19 == 0)) goto LAB_02491464;
        FUN_0132138c(lVar19,*(undefined4 *)((long)unaff_x19 + 0x69c),&stack0x00000880,
                     *(undefined8 *)System_Func<KeyValuePair<int,_int>,_int>_TypeInfo);
        puVar3 = System_Threading_Mutex_TypeInfo;
        lVar29 = CONCAT44(in_stack_00000884,in_stack_00000880);
        plVar23 = (long *)System_Threading_Mutex_TypeInfo;
        uVar57 = in_stack_000017bc;
        if (lVar29 != 0) {
          if (in_stack_000017bc == 0x3c) {
            in_stack_000017bc = *(int *)((long)unaff_x19 + 0x69c) + 0xe000;
          }
          else {
            lVar19 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar19 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar19 = *(long *)puVar3;
            }
            *(undefined4 *)((long)unaff_x19 + 0x1b4) =
                 *(undefined4 *)(*(long *)(lVar19 + 0xb8) + 0x68);
          }
          if (unaff_x19[0x1f] == 0) goto LAB_02491464;
          fVar47 = *(float *)(unaff_x19 + 0x3c);
          memmove(&stack0x00001700,(void *)(unaff_x19[0x1f] + 0x50),0x60);
          iVar7 = FUN_026fd110(&stack0x00001700,0);
          if (*unaff_x27 == 0) goto LAB_02491464;
          memmove(&stack0x00001700,(void *)(*unaff_x27 + 0x50),0x60);
          fVar46 = (float)FUN_026fd120(&stack0x00001700,0);
          fVar43 = fStack0000000000000084;
          if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
            fVar43 = 1.0;
          }
          if (unaff_x19[0xd2] == 0) goto LAB_02491464;
          fVar43 = (fVar47 / (float)iVar7) * fVar46 * fVar43;
          iVar7 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
          fVar47 = *(float *)(unaff_x19 + 0x3c);
          if (iVar7 < 1) {
            if (*unaff_x27 == 0) goto LAB_02491464;
            iVar7 = FUN_026fd110(*unaff_x27 + 0x50,0);
            if (*unaff_x27 == 0) goto LAB_02491464;
            fVar46 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
            in_stack_00000120 = fStack0000000000000084;
            if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
              in_stack_00000120 = fVar50;
            }
            if (unaff_x19[0x1f] == 0) goto LAB_02491464;
            fVar50 = (float)FUN_026fd140(unaff_x19[0x1f] + 0x50,0);
            if (*(long *)(lVar29 + 0x20) == 0) goto LAB_02491464;
            FUN_026fd62c(&stack0x00000880,*(long *)(lVar29 + 0x20),0);
            unaff_x28[0x1cd] = unaff_x28[1];
            unaff_x28[0x1cc] = *unaff_x28;
            fVar44 = (float)FUN_026fd45c(&stack0x000016e0,0);
            if (*(long *)(lVar29 + 0x20) == 0) goto LAB_02491464;
            fVar41 = *(float *)(lVar29 + 0x2c);
            fVar42 = (float)FUN_026fd668(*(long *)(lVar29 + 0x20),0);
            if (*unaff_x27 == 0) goto LAB_02491464;
            in_stack_00000128 = (float)FUN_026fd140(*unaff_x27 + 0x50,0);
            if (*unaff_x27 == 0) goto LAB_02491464;
            fVar53 = (float)FUN_026fd170(*unaff_x27 + 0x50,0);
            if (*unaff_x27 == 0) goto LAB_02491464;
            fVar49 = *(float *)((long)unaff_x19 + 0x3fc);
            in_stack_00000138 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
            if (unaff_x19[0x1f] == 0) goto LAB_02491464;
            in_stack_00000138 = fVar43 * fVar53 * fVar49 * in_stack_00000138;
            in_stack_00000120 = (fVar47 / (float)iVar7) * fVar46 * in_stack_00000120;
            in_stack_000000d0 = in_stack_00000120 * (fVar50 / fVar44) * fVar41 * fVar42;
            in_stack_00000120 = in_stack_00000120 / in_stack_000000d0;
            in_stack_00000128 = in_stack_00000120 * in_stack_00000128;
            fVar50 = (float)FUN_026fd180(unaff_x19[0x1f] + 0x50,0);
            in_stack_00000120 = in_stack_00000120 * fVar50;
          }
          else {
            if (unaff_x19[0xd2] == 0) goto LAB_02491464;
            iVar7 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
            if (unaff_x19[0xd2] == 0) goto LAB_02491464;
            fVar50 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
            if (*(long *)(lVar29 + 0x20) == 0) goto LAB_02491464;
            fVar44 = *(float *)(lVar29 + 0x2c);
            fVar46 = fStack0000000000000084;
            if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
              fVar46 = 1.0;
            }
            fVar41 = (float)FUN_026fd668(*(long *)(lVar29 + 0x20),0);
            if (unaff_x19[0xd2] == 0) goto LAB_02491464;
            in_stack_00000128 = (float)FUN_026fd140(unaff_x19[0xd2] + 0x48,0);
            if (unaff_x19[0xd2] == 0) goto LAB_02491464;
            fVar42 = (float)FUN_026fd170(unaff_x19[0xd2] + 0x48,0);
            if (unaff_x19[0xd2] == 0) goto LAB_02491464;
            fVar53 = *(float *)((long)unaff_x19 + 0x3fc);
            in_stack_00000138 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
            if (unaff_x19[0xd2] == 0) goto LAB_02491464;
            in_stack_00000138 = fVar43 * fVar42 * fVar53 * in_stack_00000138;
            in_stack_000000d0 = (fVar47 / (float)iVar7) * fVar50 * fVar46 * fVar44 * fVar41;
            in_stack_00000120 = (float)FUN_026fd180(unaff_x19[0xd2] + 0x48,0);
          }
          lVar19 = unaff_x19[0x6c];
          unaff_x19[200] = lVar29;
          if ((lVar19 == 0) || (lVar29 = *(long *)(lVar19 + 0x38), lVar29 == 0)) goto LAB_02491464;
          if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000148)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          lVar29 = lVar29 + (int)*in_stack_00000148 * unaff_x21;
          *(undefined4 *)(lVar29 + 0x2c) = 1;
          *(float *)(lVar29 + 0x160) = in_stack_000000d0;
          in_stack_00000130._4_4_ = 0.0;
          *(long *)(lVar29 + 0x40) = unaff_x19[0xd2];
          *(long *)(lVar29 + 0x38) = unaff_x19[0x1f];
          *(int *)(lVar29 + 0x58) = (int)unaff_x19[0x23];
          *(int *)(unaff_x19 + 0x23) = (int)lVar37;
          goto LAB_0248b384;
        }
        goto LAB_0248ab98;
      }
      if (iVar7 != 0) goto LAB_0248abc8;
LAB_0248af84:
      if ((*in_stack_00000150 == 0) || (lVar19 = *(long *)(*in_stack_00000150 + 0x38), lVar19 == 0))
      goto LAB_02491464;
      uVar22 = *in_stack_00000148;
      uVar8 = *(uint *)(lVar19 + 0x18);
      if (uVar8 <= uVar22)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar37 = *(long *)(lVar19 + (int)uVar22 * unaff_x21 + 0x30);
      unaff_x19[200] = lVar37;
      plVar23 = (long *)System_Threading_Mutex_TypeInfo;
      uVar57 = in_stack_000017bc;
    } while (lVar37 == 0);
    lVar29 = lVar19 + (int)uVar22 * unaff_x21;
    lVar37 = *(long *)(lVar29 + 0x38);
    unaff_x19[0x1f] = lVar37;
    unaff_x19[0x22] = *(long *)(lVar29 + 0x50);
    *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar29 + 0x58);
    if (unaff_w20 == 0) {
LAB_0248b014:
      if (lVar37 == 0) goto LAB_02491464;
      fVar47 = *(float *)(unaff_x19 + 0x3c);
      iVar7 = FUN_026fd110(lVar37 + 0x50,0);
      lVar19 = unaff_x19[0x1f];
    }
    else {
      lVar29 = unaff_x19[0x8e];
      if (lVar29 == 0) goto LAB_02491464;
      if (*(uint *)(lVar29 + 0x18) <= in_stack_00001788)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if ((*(int *)(lVar29 + (long)(int)in_stack_00001788 * 0xc + 0x20) != 10) ||
         (uVar22 == *(uint *)(unaff_x19 + 0x92))) goto LAB_0248b014;
      if (uVar8 <= uVar22 - 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (lVar37 == 0) goto LAB_02491464;
      fVar47 = *(float *)(lVar19 + (long)(int)(uVar22 - 1) * (long)iVar36 + 0x60);
      iVar7 = FUN_026fd110(lVar37 + 0x50,0);
      lVar19 = *unaff_x27;
    }
    if (lVar19 == 0) goto LAB_02491464;
    fVar46 = (float)FUN_026fd120(lVar19 + 0x50,0);
    fVar43 = fStack0000000000000084;
    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
      fVar43 = fVar50;
    }
    in_stack_00000120 = 0.0;
    in_stack_00000128 = 0.0;
    if ((unaff_w20 & in_stack_000017bc == 0x2026) == 0) {
      if (*unaff_x27 == 0) goto LAB_02491464;
      in_stack_00000128 = (float)FUN_026fd140(*unaff_x27 + 0x50,0);
      if (*unaff_x27 == 0) goto LAB_02491464;
      in_stack_00000120 = (float)FUN_026fd180(*unaff_x27 + 0x50,0);
    }
    lVar19 = unaff_x19[200];
    if ((lVar19 == 0) || (*(long *)(lVar19 + 0x20) == 0)) goto LAB_02491464;
    fVar50 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar44 = *(float *)(lVar19 + 0x2c);
    in_stack_000000d0 = (float)FUN_026fd668(*(long *)(lVar19 + 0x20),0);
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar41 = (float)FUN_026fd170(*unaff_x27 + 0x50,0);
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar42 = *(float *)((long)unaff_x19 + 0x3fc);
    in_stack_00000138 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
    lVar19 = unaff_x19[0x6c];
    if ((lVar19 == 0) || (lVar37 = *(long *)(lVar19 + 0x38), lVar37 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar37 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar37 = lVar37 + (int)*in_stack_00000148 * unaff_x21;
    *(undefined4 *)(lVar37 + 0x2c) = 0;
    fVar43 = ((in_stack_00000100 * fVar47) / (float)iVar7) * fVar46 * fVar43;
    in_stack_000000d0 = fVar43 * fVar50 * fVar44 * in_stack_000000d0;
    *(float *)(lVar37 + 0x160) = in_stack_000000d0;
    uVar8 = *(uint *)(unaff_x19 + 0x23);
    in_stack_00000138 = fVar43 * fVar41 * fVar42 * in_stack_00000138;
    if (uVar8 == 0) {
      in_stack_00000130._4_4_ = *(float *)(unaff_x19 + 0xc2);
    }
    else {
      lVar37 = unaff_x19[0xe0];
      if (lVar37 == 0) goto LAB_02491464;
      if (*(uint *)(lVar37 + 0x18) <= uVar8)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar37 = *(long *)(lVar37 + (long)(int)uVar8 * 8 + 0x20);
      if (lVar37 == 0) goto LAB_02491464;
      in_stack_00000130._4_4_ = *(float *)(lVar37 + 0x4c);
    }
LAB_0248b384:
    fVar50 = 0.0;
    if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
      fVar50 = in_stack_000000d0;
    }
LAB_0248b39c:
    lVar19 = *(long *)(lVar19 + 0x38);
    if (lVar19 == 0) goto LAB_02491464;
    if (*(uint *)(lVar19 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar19 = lVar19 + (int)*in_stack_00000148 * unaff_x21;
    *(short *)(lVar19 + 0x20) = (short)in_stack_000017bc;
    *(int *)(lVar19 + 0x60) = (int)unaff_x19[0x3c];
    *(undefined4 *)(lVar19 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4e4);
    if ((unaff_x19[0x6c] == 0) || (lVar19 = *(long *)(unaff_x19[0x6c] + 0x38), lVar19 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar19 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(int *)(lVar19 + (int)*in_stack_00000148 * unaff_x21 + 0x168) = (int)unaff_x19[0x2a];
    if ((unaff_x19[0x6c] == 0) || (lVar19 = *(long *)(unaff_x19[0x6c] + 0x38), lVar19 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar19 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(undefined4 *)(lVar19 + (int)*in_stack_00000148 * unaff_x21 + 0x170) =
         *(undefined4 *)((long)unaff_x19 + 0x154);
    if ((unaff_x19[0x6c] == 0) || (lVar19 = *(long *)(unaff_x19[0x6c] + 0x38), lVar19 == 0))
    goto LAB_02491464;
    uVar8 = *in_stack_00000148;
    FUN_013b78b8(in_stack_000000b8,&stack0x00000880,
                 *(undefined8 *)TMPro_TMP_Dropdown_OptionData_TypeInfo);
    if (*(uint *)(lVar19 + 0x18) <= uVar8)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    uVar10 = unaff_x28[1];
    uVar14 = *unaff_x28;
    lVar19 = lVar19 + (int)uVar8 * unaff_x21;
    *(undefined4 *)(lVar19 + 0x18c) = in_stack_00000890;
    *(undefined8 *)(lVar19 + 0x184) = uVar10;
    *(undefined8 *)(lVar19 + 0x17c) = uVar14;
    if ((*in_stack_00000150 == 0) || (lVar19 = *(long *)(*in_stack_00000150 + 0x38), lVar19 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar19 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(undefined4 *)(lVar19 + (int)*in_stack_00000148 * unaff_x21 + 400) =
         *(undefined4 *)((long)unaff_x19 + 0x254);
    if ((unaff_x19[200] == 0) || (lVar19 = *(long *)(unaff_x19[200] + 0x20), lVar19 == 0))
    goto LAB_02491464;
    FUN_026fd62c(&stack0x00000bf8,lVar19,0);
    unaff_x28[0x1df] = in_stack_00000c00;
    unaff_x28[0x1de] = CONCAT44(in_stack_00000bfc,in_stack_00000bf8);
    if ((int)in_stack_000017bc < 0x10000) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar8 = FUN_016f68bc(in_stack_000017bc,0);
      unaff_w29 = uVar8 & 1;
    }
    else {
      unaff_w29 = 0;
    }
    fStack00000000000000cc = *(float *)(unaff_x19 + 0x54);
    *(undefined4 *)((long)unaff_x19 + 0x2f4) = 0;
    if (*(char *)((long)unaff_x19 + 0x2f1) == '\0') {
      in_stack_000000b0 = 0.0;
      fVar43 = 0.0;
      fVar47 = 0.0;
    }
    else {
      if (unaff_x19[200] == 0) goto LAB_02491464;
      uVar22 = *in_stack_00000148;
      uVar8 = *(uint *)(unaff_x19[200] + 0x28);
      if ((int)uVar22 < (int)in_stack_00000078._4_4_) {
        if ((*in_stack_00000150 == 0) ||
           (lVar19 = *(long *)(*in_stack_00000150 + 0x38), lVar19 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar19 + 0x18) <= uVar22 + 1)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar19 = *(long *)(lVar19 + (long)(int)(uVar22 + 1) * (long)iVar36 + 0x30);
        if ((((lVar19 == 0) || (*unaff_x27 == 0)) ||
            (lVar37 = *(long *)(*unaff_x27 + 0x128), lVar37 == 0)) ||
           (lVar37 = *(long *)(lVar37 + 0x18), lVar37 == 0)) goto LAB_02491464;
        in_stack_00000880 = uVar8 | *(int *)(lVar19 + 0x28) << 0x10;
        uVar12 = FUN_0129eff4(lVar37,&stack0x00000880,&stack0x000016d8,
                              *(undefined8 *)
                               Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                             );
        uVar55 = 0;
        if ((uVar12 & 1) == 0) {
          in_stack_000000b0 = 0.0;
          fVar43 = 0.0;
          fVar47 = 0.0;
        }
        else {
          if (in_stack_000016d8 == 0) goto LAB_02491464;
          fVar47 = *(float *)(in_stack_000016d8 + 0x14);
          fVar43 = *(float *)(in_stack_000016d8 + 0x18);
          in_stack_000000b0 = *(float *)(in_stack_000016d8 + 0x1c);
          uVar55 = *(undefined4 *)(in_stack_000016d8 + 0x20);
          if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
            fStack00000000000000cc = 0.0;
          }
        }
        uVar22 = *in_stack_00000148;
      }
      else {
        uVar55 = 0;
        in_stack_000000b0 = 0.0;
        fVar43 = 0.0;
        fVar47 = 0.0;
      }
      if (0 < (int)uVar22) {
        if ((*in_stack_00000150 == 0) ||
           (lVar19 = *(long *)(*in_stack_00000150 + 0x38), lVar19 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar19 + 0x18) <= (uint)((long)(int)uVar22 + -1))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar19 = *(long *)(lVar19 + ((long)(int)uVar22 + -1) * unaff_x21 + 0x30);
        if (((lVar19 == 0) || (*unaff_x27 == 0)) ||
           ((lVar37 = *(long *)(*unaff_x27 + 0x128), lVar37 == 0 ||
            (lVar37 = *(long *)(lVar37 + 0x18), lVar37 == 0)))) goto LAB_02491464;
        in_stack_00000880 = *(uint *)(lVar19 + 0x28) | uVar8 << 0x10;
        uVar12 = FUN_0129eff4(lVar37,&stack0x00000880,&stack0x000016d8,
                              *(undefined8 *)
                               Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                             );
        if ((uVar12 & 1) != 0) {
          if ((in_stack_000016d8 == 0) ||
             (fVar47 = (float)FUN_024bb1bc(fVar47,fVar43,in_stack_000000b0,uVar55,
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
      fVar44 = *(float *)(unaff_x19 + 199);
      fVar46 = (float)FUN_026fd474(&stack0x00001770,0);
      fVar44 = fVar44 - fVar50 * fVar46 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
      *(float *)(unaff_x19 + 199) = fVar44;
      if ((unaff_w29 != 0) || (in_stack_000017bc == 0x200b)) {
        *(float *)(unaff_x19 + 199) =
             fVar44 - fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
      }
    }
    fVar46 = *(float *)(unaff_x19 + 0x55);
    fStack0000000000000080 = 0.0;
    if (fVar46 != 0.0) {
      fVar44 = (float)FUN_026fd454(&stack0x00001770,0);
      fVar41 = (float)FUN_026fd464(&stack0x00001770,0);
      fStack0000000000000080 =
           (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
           (fVar46 * 0.5 - fVar50 * (fVar44 * 0.5 + fVar41));
      *(float *)(unaff_x19 + 199) = *(float *)(unaff_x19 + 199) + fStack0000000000000080;
    }
    if (((cVar18 == '\0') && (*(int *)((long)unaff_x19 + 0x63c) == 0)) &&
       ((*(byte *)((long)unaff_x19 + 0x254) & 1) != 0)) {
      lVar19 = unaff_x19[0x22];
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar12 = FUN_02681b9c(lVar19,0,0);
      in_stack_00000110._4_4_ = 0.0;
      if ((uVar12 & 1) != 0) {
        lVar19 = unaff_x19[0x22];
        if (*(int *)(*(long *)
                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar23 = (long *)
                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
        ;
        if (lVar19 == 0) goto LAB_02491464;
        uVar12 = FUN_0267e1d8(lVar19,*(undefined4 *)
                                      (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                + 0xb8) + 0x54),0);
        if ((uVar12 & 1) != 0) {
          lVar19 = unaff_x19[0x22];
          if (*(int *)(*plVar23 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            plVar23 = (long *)
                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
            ;
          }
          if (lVar19 == 0) goto LAB_02491464;
          fVar46 = (float)FUN_0267f610(lVar19,*(undefined4 *)(*(long *)(*plVar23 + 0xb8) + 0x54),0);
          if ((*unaff_x27 == 0) || (unaff_x19[0x22] == 0)) goto LAB_02491464;
          fVar44 = *(float *)(*unaff_x27 + 0x1b0);
          in_stack_00000110._4_4_ =
               (float)FUN_0267f610(unaff_x19[0x22],
                                   *(undefined4 *)
                                    (*(long *)(*(long *)
                                                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                              + 0xb8) + 0xcc),0);
          in_stack_00000110._4_4_ = in_stack_00000110._4_4_ * fVar46 * fVar44 * 0.25;
          if (fVar46 < in_stack_00000130._4_4_ + in_stack_00000110._4_4_) {
            in_stack_00000130._4_4_ = fVar46 - in_stack_00000110._4_4_;
          }
        }
      }
      if (*unaff_x27 == 0) goto LAB_02491464;
      in_stack_000000c0._4_4_ = *(float *)(*unaff_x27 + 0x1b4);
    }
    else {
      lVar19 = unaff_x19[0x22];
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar12 = FUN_02681b9c(lVar19,0,0);
      in_stack_000000c0._4_4_ = 0.0;
      if ((uVar12 & 1) != 0) {
        lVar19 = unaff_x19[0x22];
        if (*(int *)(*(long *)
                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar23 = (long *)
                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
        ;
        if (lVar19 == 0) goto LAB_02491464;
        uVar12 = FUN_0267e1d8(lVar19,*(undefined4 *)
                                      (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                + 0xb8) + 0x54),0);
        if ((uVar12 & 1) != 0) {
          lVar19 = unaff_x19[0x22];
          if (*(int *)(*plVar23 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            plVar23 = (long *)
                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
            ;
          }
          if (lVar19 == 0) goto LAB_02491464;
          uVar12 = FUN_0267e1d8(lVar19,*(undefined4 *)(*(long *)(*plVar23 + 0xb8) + 0xcc),0);
          if ((uVar12 & 1) != 0) {
            lVar19 = unaff_x19[0x22];
            if (*(int *)(*plVar23 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              plVar23 = (long *)
                        Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
              ;
            }
            if (lVar19 != 0) {
              fVar46 = (float)FUN_0267f610(lVar19,*(undefined4 *)(*(long *)(*plVar23 + 0xb8) + 0x54)
                                           ,0);
              if ((*unaff_x27 != 0) && (unaff_x19[0x22] != 0)) {
                fVar44 = *(float *)(*unaff_x27 + 0x1a8);
                in_stack_00000110._4_4_ =
                     (float)FUN_0267f610(unaff_x19[0x22],
                                         *(undefined4 *)
                                          (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                  + 0xb8) + 0xcc),0);
                in_stack_00000110._4_4_ = in_stack_00000110._4_4_ * fVar46 * fVar44 * 0.25;
                if (fVar46 < in_stack_00000130._4_4_ + in_stack_00000110._4_4_) {
                  in_stack_00000130._4_4_ = fVar46 - in_stack_00000110._4_4_;
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
    fVar44 = *(float *)(unaff_x19 + 199);
    fVar46 = (float)FUN_026fd464(&stack0x00001770,0);
    unaff_s15 = fVar44 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                         fVar50 * (fVar47 + ((fVar46 - in_stack_00000130._4_4_) -
                                            in_stack_00000110._4_4_));
    fVar47 = (float)FUN_026fd46c(&stack0x00001770,0);
    unaff_s14 = *(float *)((long)unaff_x19 + 0x614) +
                ((in_stack_00000138 + fVar50 * (fVar43 + in_stack_00000130._4_4_ + fVar47)) -
                *(float *)(unaff_x19 + 0x9a));
    fVar47 = (float)FUN_026fd45c(&stack0x00001770,0);
    unaff_s10 = unaff_s14 - fVar50 * (in_stack_00000130._4_4_ + in_stack_00000130._4_4_ + fVar47);
    fVar47 = (float)FUN_026fd454(&stack0x00001770,0);
    param_4 = unaff_s15 +
              (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
              fVar50 * (in_stack_00000110._4_4_ + in_stack_00000110._4_4_ +
                       in_stack_00000130._4_4_ + in_stack_00000130._4_4_ + fVar47);
    unaff_s9 = unaff_s15;
    unaff_s8 = param_4;
    if (((*(int *)((long)unaff_x19 + 0x63c) == 0) && (cVar18 == '\0')) &&
       ((*(byte *)((long)unaff_x19 + 0x254) >> 1 & 1) != 0)) {
      fVar46 = (float)(int)unaff_x19[0xbd] * fStack000000000000004c;
      fVar47 = (float)FUN_026fd46c(&stack0x00001770,0);
      fVar44 = fVar46 * fVar50 * (in_stack_00000110._4_4_ + in_stack_00000130._4_4_ + fVar47);
      fVar47 = (float)FUN_026fd46c(&stack0x00001770,0);
      fVar43 = (float)FUN_026fd45c(&stack0x00001770,0);
      unaff_s14 = unaff_s14 + 0.0;
      unaff_s10 = unaff_s10 + 0.0;
      fVar46 = fVar46 * fVar50 * (((fVar47 - fVar43) - in_stack_00000130._4_4_) -
                                 in_stack_00000110._4_4_);
      fVar43 = param_4 + fVar44;
      fVar47 = unaff_s15 + fVar44;
      fVar44 = (fVar44 - fVar46) * 0.5;
      unaff_s15 = (unaff_s15 + fVar46) - fVar44;
      param_4 = (param_4 + fVar46) - fVar44;
      unaff_s9 = fVar47 - fVar44;
      unaff_s8 = fVar43 - fVar44;
    }
    _fStack0000000000000118 = (ulong)(uint)fVar50;
    unaff_x25 = in_stack_00000150;
    unaff_x26 = in_stack_00000148;
    if (*(char *)((long)unaff_x19 + 0x46c) == '\0') goto LAB_0248bc34;
    thunk_FUN_026935f0(_uStack0000000000000060,0);
    fVar42 = (unaff_s8 + unaff_s15) * 0.5;
    fVar53 = (unaff_s10 + unaff_s14) * 0.5;
    fVar44 = unaff_s14 - fVar53;
    fVar43 = 0.0;
    fVar50 = fVar44;
    fVar47 = (float)FUN_02692df0(unaff_s9 - fVar42,_uStack0000000000000060,0);
    _fStack00000000000000e8 = CONCAT44(fStack00000000000000ec,fVar42 + fVar47);
    fVar50 = fVar53 + fVar50;
    fVar41 = unaff_s10 - fVar53;
    fVar46 = 0.0;
    fVar47 = fVar41;
    fStack00000000000000e4 = fVar43 + 0.0;
    fVar43 = (float)FUN_02692df0(unaff_s15 - fVar42,_uStack0000000000000060,0);
    fVar47 = fVar53 + fVar47;
    _uStack00000000000000e0 = CONCAT44(fStack00000000000000e4,fVar46 + 0.0);
    fVar46 = 0.0;
    fStack00000000000000ec = fVar42 + fVar43;
    fVar43 = (float)FUN_02692df0(unaff_s8 - fVar42,_uStack0000000000000060,0);
    unaff_s8 = fVar42 + fVar43;
    unaff_s14 = fVar53 + fVar44;
    fVar46 = fVar46 + 0.0;
    fVar43 = 0.0;
    param_4 = (float)FUN_02692df0(param_4 - fVar42,_uStack0000000000000060,0);
    param_4 = fVar42 + param_4;
    unaff_s10 = fVar53 + fVar41;
    fVar43 = fVar43 + 0.0;
  } while( true );
LAB_0248ef74:
  uVar8 = uVar27 - 1;
  if (*(uint *)(lVar19 + 0x18) <= uVar8)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*in_stack_00000150 == 0) || (lVar37 = *(long *)(*in_stack_00000150 + 0x50), lVar37 == 0))
  goto LAB_02491464;
  lVar11 = (long)(int)uVar8;
  lVar29 = lVar19 + lVar11 * 0x178;
  uVar26 = *(uint *)(lVar29 + 100);
  if (*(uint *)(lVar37 + 0x18) <= uVar26)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar33 = *(long *)(lVar29 + 0x38);
  uVar28 = (uint)*(ushort *)(lVar29 + 0x20);
  lVar31 = (long)(int)uVar26;
  lVar37 = lVar37 + lVar31 * 0x5c;
  uVar57 = *(uint *)(lVar37 + 0x3c);
  uVar32 = *(uint *)(lVar37 + 0x40);
  lVar29 = (long)(int)uVar32;
  iVar7 = *(int *)(lVar37 + 0x28);
  iVar9 = *(int *)(lVar37 + 0x2c);
  uVar39 = *(uint *)(lVar37 + 0x68);
  fVar52 = *(float *)(lVar37 + 0x5c);
  fVar54 = *(float *)(lVar37 + 0x60);
  iVar1 = *(int *)(lVar37 + 0x20);
  fVar41 = *(float *)(lVar37 + 0x4c);
  fVar53 = *(float *)(lVar37 + 0x54);
  fVar46 = *(float *)(lVar37 + 0x58);
  fVar51 = *(float *)(lVar37 + 0x6c);
  fVar49 = *(float *)(lVar37 + 0x70);
  fVar44 = *(float *)(lVar37 + 0x74);
  fVar42 = *(float *)(lVar37 + 0x78);
  fVar56 = fVar52 + fVar54;
  if ((int)uVar39 < 9) {
    switch(uVar39) {
    case 1:
      if ((char)unaff_x19[0x1d] == '\0') {
        in_stack_000000c0._4_4_ = fVar54 + 0.0;
      }
      else {
        in_stack_000000c0._4_4_ = 0.0 - fVar46;
      }
      break;
    case 2:
LAB_0248f124:
      in_stack_000000c0._4_4_ = (fVar54 + fVar52 * 0.5) - fVar46 * 0.5;
      break;
    default:
      goto switchD_0248f070_caseD_3;
    case 4:
      in_stack_000000c0._4_4_ = fVar56 - fVar46;
      if ((char)unaff_x19[0x1d] != '\0') {
        in_stack_000000c0._4_4_ = fVar56;
      }
      break;
    case 8:
      goto switchD_0248f070_caseD_8;
    }
LAB_0248f194:
    in_stack_000000b8 = 0;
  }
  else if (uVar39 == 0x10) {
switchD_0248f070_caseD_8:
    if (uVar28 < 0xad) {
      if ((uVar28 != 3) && (uVar28 != 10)) goto LAB_0248f0c8;
    }
    else if ((uVar28 != 0xad) && ((uVar28 != 0x200b && (uVar28 != 0x2060)))) {
LAB_0248f0c8:
      if (*(uint *)(lVar19 + 0x18) <= uVar57)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar2 = *(undefined2 *)(lVar19 + (long)(int)uVar57 * 0x178 + 0x20);
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar12 = FUN_016f9f84(uVar2,0);
      if ((uVar12 & 1) == 0) {
        bVar6 = (int)uVar26 < (int)unaff_x19[0x94];
      }
      else {
        bVar6 = false;
      }
      if ((fVar46 <= fVar52) && (!bVar6 && (uVar39 >> 4 & 1) == 0)) {
        in_stack_000000c0._4_4_ = fVar54;
        if ((char)unaff_x19[0x1d] != '\0') {
          in_stack_000000c0._4_4_ = fVar56;
        }
        goto LAB_0248f194;
      }
      if (((uVar27 == 1) || (uVar26 != uVar22)) || (uVar8 == *(uint *)((long)unaff_x19 + 0x31c))) {
        in_stack_000000c0._4_4_ = fVar54;
        if ((char)unaff_x19[0x1d] != '\0') {
          in_stack_000000c0._4_4_ = fVar56;
        }
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        fStack0000000000000024 = (float)FUN_016fa418(uVar28,0);
        in_stack_000000b8 = 0;
      }
      else {
        cVar18 = (char)unaff_x19[0x1d];
        fVar54 = -fVar46;
        if (cVar18 != '\0') {
          fVar54 = fVar46;
        }
        if (*(uint *)(lVar19 + 0x18) <= uVar57)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fVar46 = 1.0;
        iVar9 = (int)*(char *)(lVar19 + (long)(int)uVar57 * 0x178 + 0x194) +
                (-iVar1 - ((uint)fStack0000000000000024 & 1)) + iVar9 + -1;
        if (0 < iVar9) {
          fVar46 = *(float *)((long)unaff_x19 + 0x2d4);
        }
        if (iVar9 < 1) {
          iVar9 = 1;
        }
        if (uVar28 == 9) {
LAB_02490fe0:
          fVar46 = 1.0 - fVar46;
        }
        else {
          if (uVar28 != 0xa0) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar12 = FUN_016fa418(uVar28,0);
            cVar18 = (char)unaff_x19[0x1d];
            if ((uVar12 & 1) != 0) goto LAB_02490fe0;
          }
          iVar9 = (iVar1 - (~(uint)fStack0000000000000024 & 1)) + iVar7;
        }
        fVar46 = ((fVar52 + fVar54) * fVar46) / (float)iVar9;
        if (cVar18 == '\0') {
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
  else if (uVar39 == 0x20) {
    fVar46 = fVar51 + fVar44;
    goto LAB_0248f124;
  }
switchD_0248f070_caseD_3:
  uVar39 = (uint)*(undefined8 *)(lVar19 + 0x18);
  if (uVar39 <= uVar8)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar37 = lVar19 + lVar11 * 0x178;
  fVar54 = fStack0000000000000090 + in_stack_000000c0._4_4_;
  fVar46 = SUB84(in_stack_00000088,0) + (float)in_stack_000000b8;
  fVar52 = (float)((ulong)in_stack_00000088 >> 0x20) + (float)((ulong)in_stack_000000b8 >> 0x20);
  plVar40 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(char *)(lVar37 + 0x194) == '\0') goto LAB_0248fabc;
  iVar7 = *(int *)(lVar19 + lVar11 * 0x178 + 0x2c);
  if (iVar7 != 0) goto LAB_0248f808;
  fVar43 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)uVar26,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
  case 0:
    lVar21 = lVar19 + lVar11 * 0x178;
    *(undefined4 *)(lVar21 + 0x84) = 0;
    *(undefined4 *)(lVar21 + 0xac) = 0;
    *(undefined4 *)(lVar21 + 0xd4) = 0x3f800000;
    fVar43 = 1.0;
    break;
  case 1:
    fVar42 = *(float *)(lVar19 + lVar11 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
      lVar21 = lVar19 + lVar11 * 0x178;
      fVar44 = (in_stack_000000c0._4_4_ + fVar42) - *(float *)(in_stack_00000070 + 0x230);
      fVar42 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
      goto LAB_0248f2dc;
    }
    lVar21 = lVar19 + lVar11 * 0x178;
    fVar44 = fVar44 - fVar51;
    *(float *)(lVar21 + 0x84) = fVar43 + (fVar42 - fVar51) / fVar44;
    *(float *)(lVar21 + 0xac) = fVar43 + (*(float *)(lVar21 + 0x98) - fVar51) / fVar44;
    *(float *)(lVar21 + 0xd4) = fVar43 + (*(float *)(lVar21 + 0xc0) - fVar51) / fVar44;
    fVar43 = fVar43 + (*(float *)(lVar21 + 0xe8) - fVar51) / fVar44;
    break;
  case 2:
    lVar21 = lVar19 + lVar11 * 0x178;
    fVar42 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
    fVar44 = (in_stack_000000c0._4_4_ + *(float *)(lVar21 + 0x70)) -
             *(float *)(in_stack_00000070 + 0x230);
LAB_0248f2dc:
    *(float *)(lVar21 + 0x84) = fVar43 + fVar44 / fVar42;
    *(float *)(lVar21 + 0xac) =
         fVar43 + ((in_stack_000000c0._4_4_ + *(float *)(lVar21 + 0x98)) -
                  *(float *)(in_stack_00000070 + 0x230)) /
                  (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
    *(float *)(lVar21 + 0xd4) =
         fVar43 + ((in_stack_000000c0._4_4_ + *(float *)(lVar21 + 0xc0)) -
                  *(float *)(in_stack_00000070 + 0x230)) /
                  (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
    fVar43 = fVar43 + ((in_stack_000000c0._4_4_ + *(float *)(lVar21 + 0xe8)) -
                      *(float *)(in_stack_00000070 + 0x230)) /
                      (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x61]) {
    case 0:
      lVar21 = lVar19 + lVar11 * 0x178;
      *(undefined4 *)(lVar21 + 0x88) = 0;
      *(undefined4 *)(lVar21 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar21 + 0xd8) = 0;
      *(undefined4 *)(lVar21 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar21 = lVar19 + lVar11 * 0x178;
      fVar42 = fVar42 - fVar49;
      fVar44 = fVar43 + (*(float *)(lVar21 + 0x74) - fVar49) / fVar42;
      fVar42 = fVar43 + (*(float *)(lVar21 + 0x9c) - fVar49) / fVar42;
      *(float *)(lVar21 + 0x88) = fVar44;
      *(float *)(lVar21 + 0xb0) = fVar42;
      *(float *)(lVar21 + 0xd8) = fVar44;
      *(float *)(lVar21 + 0x100) = fVar42;
      break;
    case 2:
      lVar21 = lVar19 + lVar11 * 0x178;
      fVar44 = fVar43 + (*(float *)(lVar21 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                        (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
      *(float *)(lVar21 + 0x88) = fVar44;
      fVar42 = *(float *)(unaff_x19 + 0x9b);
      fVar49 = *(float *)(unaff_x19 + 0x9c);
      *(float *)(lVar21 + 0xd8) = fVar44;
      fVar44 = fVar43 + (*(float *)(lVar21 + 0x9c) - fVar42) / (fVar49 - fVar42);
      *(float *)(lVar21 + 0xb0) = fVar44;
      *(float *)(lVar21 + 0x100) = fVar44;
      break;
    case 3:
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
      uVar39 = (uint)*(undefined8 *)(lVar19 + 0x18);
    }
    if (uVar39 <= uVar8)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar21 = lVar19 + lVar11 * 0x178;
    fVar44 = *(float *)(lVar21 + 0x15c);
    fVar42 = (1.0 - (*(float *)(lVar21 + 0x88) + *(float *)(lVar21 + 0xb0)) * fVar44) * 0.5;
    fVar49 = fVar43 + *(float *)(lVar21 + 0x88) * fVar44 + fVar42;
    fVar43 = fVar43 + fVar42 + *(float *)(lVar21 + 0xb0) * fVar44;
    *(float *)(lVar21 + 0x84) = fVar49;
    *(float *)(lVar21 + 0xac) = fVar49;
    *(float *)(lVar21 + 0xd4) = fVar43;
    break;
  default:
    goto switchD_0248f240_default;
  }
  *(float *)(lVar19 + lVar11 * 0x178 + 0xfc) = fVar43;
switchD_0248f240_default:
  switch((int)unaff_x19[0x61]) {
  case 0:
    if (uVar39 <= uVar8)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar21 = lVar19 + lVar11 * 0x178;
    *(undefined4 *)(lVar21 + 0x88) = 0;
    *(undefined4 *)(lVar21 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar21 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar21 + 0x100) = 0;
    break;
  case 1:
    if (uVar8 < uVar39) {
      lVar21 = lVar19 + lVar11 * 0x178;
      fVar41 = fVar41 - fVar53;
      fVar43 = (*(float *)(lVar21 + 0x74) - fVar53) / fVar41;
      fVar41 = (*(float *)(lVar21 + 0x9c) - fVar53) / fVar41;
      *(float *)(lVar21 + 0x88) = fVar43;
      goto LAB_0248f644;
    }
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  case 2:
    if (uVar39 <= uVar8)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar21 = lVar19 + lVar11 * 0x178;
    fVar43 = (*(float *)(lVar21 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
             (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
    *(float *)(lVar21 + 0x88) = fVar43;
    fVar41 = (*(float *)(lVar21 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
             (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
LAB_0248f644:
    *(float *)(lVar21 + 0xb0) = fVar41;
    *(float *)(lVar21 + 0xd8) = fVar41;
    *(float *)(lVar21 + 0x100) = fVar43;
    break;
  case 3:
    if (uVar39 <= uVar8)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar21 = lVar19 + lVar11 * 0x178;
    fVar41 = *(float *)(lVar21 + 0x15c);
    fVar44 = (1.0 - (*(float *)(lVar21 + 0x84) + *(float *)(lVar21 + 0xd4)) / fVar41) * 0.5;
    fVar43 = *(float *)(lVar21 + 0x84) / fVar41 + fVar44;
    fVar44 = fVar44 + *(float *)(lVar21 + 0xd4) / fVar41;
    *(float *)(lVar21 + 0x88) = fVar43;
    *(float *)(lVar21 + 0xb0) = fVar44;
    *(float *)(lVar21 + 0x100) = fVar43;
    *(float *)(lVar21 + 0xd8) = fVar44;
  }
  if (uVar39 <= uVar8)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar21 = lVar19 + lVar11 * 0x178;
  fVar43 = ABS(fVar50) * *(float *)(lVar21 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
  if ((*(char *)(lVar21 + 0x5c) == '\0') && ((*(byte *)(lVar19 + lVar11 * 0x178 + 400) & 1) != 0)) {
    fVar43 = -fVar43;
  }
  lVar21 = lVar19 + lVar11 * 0x178;
  fVar41 = *(float *)(lVar21 + 0x88);
  fVar42 = *(float *)(lVar21 + 0x84);
  fVar44 = -2.1474836e+09;
  if (fVar42 != INFINITY) {
    fVar44 = (float)(int)fVar42;
  }
  fVar49 = *(float *)(lVar21 + 0xd4);
  fVar51 = *(float *)(lVar21 + 0xd8);
  fVar53 = -2.1474836e+09;
  if (fVar41 != INFINITY) {
    fVar53 = (float)(int)fVar41;
  }
  uVar55 = FUN_024e0374(fVar42 - fVar44,fVar41 - fVar53);
  *(undefined4 *)(lVar21 + 0x84) = uVar55;
  if (*(uint *)(lVar19 + 0x18) <= uVar8)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  fVar51 = fVar51 - fVar53;
  *(float *)(lVar21 + 0x88) = fVar43;
  uVar55 = FUN_024e0374(fVar42 - fVar44,fVar51);
  *(undefined4 *)(lVar19 + lVar11 * 0x178 + 0xac) = uVar55;
  if (*(uint *)(lVar19 + 0x18) <= uVar8)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  fVar49 = fVar49 - fVar44;
  *(float *)(lVar19 + lVar11 * 0x178 + 0xb0) = fVar43;
  fVar44 = (float)FUN_024e0374(fVar49,fVar51);
  *(float *)(lVar21 + 0xd4) = fVar44;
  if (*(uint *)(lVar19 + 0x18) <= uVar8)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar21 + 0xd8) = fVar43;
  uVar55 = FUN_024e0374(fVar49,fVar41 - fVar53);
  *(undefined4 *)(lVar19 + lVar11 * 0x178 + 0xfc) = uVar55;
  uVar39 = (uint)*(undefined8 *)(lVar19 + 0x18);
  if (uVar39 <= uVar8)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar19 + lVar11 * 0x178 + 0x100) = fVar43;
LAB_0248f808:
  if (((int)uVar8 < (int)unaff_x19[100]) &&
     (iStack00000000000000a4 < *(int *)((long)unaff_x19 + 0x324))) {
    if (((int)uVar26 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] != 5)) {
      if (uVar39 <= uVar8)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar37 = lVar19 + lVar11 * 0x178;
      *(ulong *)(lVar37 + 0x70) =
           CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar37 + 0x70) >> 0x20),
                    fVar54 + (float)*(undefined8 *)(lVar37 + 0x70));
      *(float *)(lVar37 + 0x78) = fVar52 + *(float *)(lVar37 + 0x78);
      plVar40 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      if (*(uint *)(lVar19 + 0x18) <= uVar8)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar37 = lVar19 + lVar11 * 0x178;
      *(ulong *)(lVar37 + 0x98) =
           CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar37 + 0x98) >> 0x20),
                    fVar54 + (float)*(undefined8 *)(lVar37 + 0x98));
      *(float *)(lVar37 + 0xa0) = fVar52 + *(float *)(lVar37 + 0xa0);
      uVar39 = *(uint *)(lVar19 + 0x18);
LAB_0248fa4c:
      if (uVar39 <= uVar8)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar37 = lVar19 + lVar11 * 0x178;
      *(ulong *)(lVar37 + 0xc0) =
           CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar37 + 0xc0) >> 0x20),
                    fVar54 + (float)*(undefined8 *)(lVar37 + 0xc0));
      *(float *)(lVar37 + 200) = fVar52 + *(float *)(lVar37 + 200);
      if (*(uint *)(lVar19 + 0x18) <= uVar8)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar37 = lVar19 + lVar11 * 0x178;
      *(ulong *)(lVar37 + 0xe8) =
           CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar37 + 0xe8) >> 0x20),
                    fVar54 + (float)*(undefined8 *)(lVar37 + 0xe8));
      *(float *)(lVar37 + 0xf0) = fVar52 + *(float *)(lVar37 + 0xf0);
      if (iVar7 != 0) goto LAB_0248f9d0;
LAB_0248fa9c:
      pcVar25 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0248faa8:
      (*pcVar25)();
      goto LAB_0248fabc;
    }
    if (((int)uVar26 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] == 5)) {
      if (uVar8 < uVar39) {
        if (*(uint *)(lVar19 + lVar11 * 0x178 + 0x68) != uStack0000000000000030) goto LAB_0248f8d8;
        lVar37 = lVar19 + lVar11 * 0x178;
        *(ulong *)(lVar37 + 0x70) =
             CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar37 + 0x70) >> 0x20),
                      fVar54 + (float)*(undefined8 *)(lVar37 + 0x70));
        *(float *)(lVar37 + 0x78) = fVar52 + *(float *)(lVar37 + 0x78);
        if (uVar8 < *(uint *)(lVar19 + 0x18)) {
          lVar37 = lVar19 + lVar11 * 0x178;
          *(ulong *)(lVar37 + 0x98) =
               CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar37 + 0x98) >> 0x20),
                        fVar54 + (float)*(undefined8 *)(lVar37 + 0x98));
          *(float *)(lVar37 + 0xa0) = fVar52 + *(float *)(lVar37 + 0xa0);
          uVar39 = *(uint *)(lVar19 + 0x18);
          plVar40 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
          goto LAB_0248fa4c;
        }
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    }
  }
LAB_0248f8d8:
  if (uVar39 <= uVar8)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if (DAT_03774d76 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03774d76 = '\x01';
  }
  puVar3 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  lVar21 = lVar19 + lVar11 * 0x178;
  uVar55 = *(undefined4 *)
            (*(undefined8 **)
              (*(long *)
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
              0xb8) + 1);
  *(undefined8 *)(lVar21 + 0x70) =
       **(undefined8 **)
         (*(long *)Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
         0xb8);
  *(undefined4 *)(lVar21 + 0x78) = uVar55;
  plVar40 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(uint *)(lVar19 + 0x18) <= uVar8)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar21 = lVar19 + lVar11 * 0x178;
  uVar55 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar3 + 0xb8) + 1);
  *(undefined8 *)(lVar21 + 0x98) = **(undefined8 **)(*(long *)puVar3 + 0xb8);
  *(undefined4 *)(lVar21 + 0xa0) = uVar55;
  if (*(uint *)(lVar19 + 0x18) <= uVar8)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar21 = lVar19 + lVar11 * 0x178;
  uVar55 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar3 + 0xb8) + 1);
  *(undefined8 *)(lVar21 + 0xc0) = **(undefined8 **)(*(long *)puVar3 + 0xb8);
  *(undefined4 *)(lVar21 + 200) = uVar55;
  if (*(uint *)(lVar19 + 0x18) <= uVar8)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar21 = lVar19 + lVar11 * 0x178;
  uVar55 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar3 + 0xb8) + 1);
  *(undefined8 *)(lVar21 + 0xe8) = **(undefined8 **)(*(long *)puVar3 + 0xb8);
  *(undefined4 *)(lVar21 + 0xf0) = uVar55;
  if (*(uint *)(lVar19 + 0x18) <= uVar8)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(undefined1 *)(lVar37 + 0x194) = 0;
  if (iVar7 == 0) goto LAB_0248fa9c;
LAB_0248f9d0:
  if (iVar7 == 1) {
    pcVar25 = *(code **)(*unaff_x19 + 0x8f8);
    goto LAB_0248faa8;
  }
LAB_0248fabc:
  if ((*in_stack_00000150 == 0) || (lVar37 = *(long *)(*in_stack_00000150 + 0x38), lVar37 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar37 + 0x18) <= uVar8)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar37 = lVar37 + lVar11 * 0x178;
  uVar14 = *(undefined8 *)(lVar37 + 0x11c);
  *(undefined8 *)(lVar37 + 0x11c) =
       CONCAT44(fVar46 + (float)((ulong)uVar14 >> 0x20),fVar54 + (float)uVar14);
  *(float *)(lVar37 + 0x124) = fVar52 + *(float *)(lVar37 + 0x124);
  if ((*in_stack_00000150 == 0) || (lVar37 = *(long *)(*in_stack_00000150 + 0x38), lVar37 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar37 + 0x18) <= uVar8)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar37 = lVar37 + lVar11 * 0x178;
  *(ulong *)(lVar37 + 0x110) =
       CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar37 + 0x110) >> 0x20),
                fVar54 + (float)*(undefined8 *)(lVar37 + 0x110));
  *(float *)(lVar37 + 0x118) = fVar52 + *(float *)(lVar37 + 0x118);
  if ((*in_stack_00000150 == 0) || (lVar37 = *(long *)(*in_stack_00000150 + 0x38), lVar37 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar37 + 0x18) <= uVar8)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar37 = lVar37 + lVar11 * 0x178;
  *(ulong *)(lVar37 + 0x128) =
       CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar37 + 0x128) >> 0x20),
                fVar54 + (float)*(undefined8 *)(lVar37 + 0x128));
  *(float *)(lVar37 + 0x130) = fVar52 + *(float *)(lVar37 + 0x130);
  if ((*in_stack_00000150 == 0) || (lVar37 = *(long *)(*in_stack_00000150 + 0x38), lVar37 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar37 + 0x18) <= uVar8)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar37 = lVar37 + lVar11 * 0x178;
  *(float *)(lVar37 + 0x134) = fVar54 + *(float *)(lVar37 + 0x134);
  *(ulong *)(lVar37 + 0x138) =
       CONCAT44(fVar52 + (float)((ulong)*(undefined8 *)(lVar37 + 0x138) >> 0x20),
                fVar46 + (float)*(undefined8 *)(lVar37 + 0x138));
  lVar37 = *in_stack_00000150;
  if ((lVar37 == 0) || (lVar21 = *(long *)(lVar37 + 0x38), lVar21 == 0)) goto LAB_02491464;
  uVar39 = *(uint *)(lVar21 + 0x18);
  if (uVar39 <= uVar8)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar34 = lVar21 + lVar11 * 0x178;
  *(ulong *)(lVar34 + 0x140) =
       CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar34 + 0x140) >> 0x20),
                fVar54 + (float)*(undefined8 *)(lVar34 + 0x140));
  *(ulong *)(lVar34 + 0x148) =
       CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar34 + 0x148) >> 0x20),
                fVar46 + (float)*(undefined8 *)(lVar34 + 0x148));
  *(float *)(lVar34 + 0x150) = fVar46 + *(float *)(lVar34 + 0x150);
  if (uVar26 == uVar22) {
    uVar22 = *in_stack_00000148 - 1;
    if (uVar8 == uVar22) goto LAB_0248fccc;
  }
  else {
    lVar37 = *(long *)(lVar37 + 0x50);
    if (lVar37 == 0) goto LAB_02491464;
    if (*(uint *)(lVar37 + 0x18) <= uVar22)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar34 = (long)(int)uVar22;
    lVar35 = lVar37 + lVar34 * 0x5c;
    fVar44 = fVar46 + *(float *)(lVar35 + 0x54);
    *(ulong *)(lVar35 + 0x4c) =
         CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar35 + 0x4c) >> 0x20),
                  fVar46 + (float)*(undefined8 *)(lVar35 + 0x4c));
    *(float *)(lVar35 + 0x54) = fVar44;
    *(float *)(lVar35 + 0x58) = fVar54 + *(float *)(lVar35 + 0x58);
    if (uVar39 <= *(uint *)(lVar35 + 0x34))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    uVar55 = *(undefined4 *)(lVar21 + (long)(int)*(uint *)(lVar35 + 0x34) * 0x178 + 0x11c);
    lVar37 = lVar37 + lVar34 * 0x5c;
    *(float *)(lVar37 + 0x70) = fVar44;
    *(undefined4 *)(lVar37 + 0x6c) = uVar55;
    lVar37 = *in_stack_00000150;
    if ((lVar37 == 0) || (lVar21 = *(long *)(lVar37 + 0x50), lVar21 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar21 + 0x18) <= uVar22)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar37 = *(long *)(lVar37 + 0x38);
    if (lVar37 == 0) goto LAB_02491464;
    uVar22 = *(uint *)(lVar21 + lVar34 * 0x5c + 0x40);
    if (*(uint *)(lVar37 + 0x18) <= uVar22)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar21 = lVar21 + lVar34 * 0x5c;
    *(undefined4 *)(lVar21 + 0x74) = *(undefined4 *)(lVar37 + (long)(int)uVar22 * 0x178 + 0x128);
    *(undefined4 *)(lVar21 + 0x78) = *(undefined4 *)(lVar21 + 0x4c);
    uVar22 = *in_stack_00000148 - 1;
LAB_0248fccc:
    if (uVar8 == uVar22) {
      lVar37 = *in_stack_00000150;
      if ((lVar37 == 0) || (lVar21 = *(long *)(lVar37 + 0x50), lVar21 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar21 + 0x18) <= uVar26)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar34 = lVar21 + lVar31 * 0x5c;
      fVar44 = fVar46 + *(float *)(lVar34 + 0x54);
      *(ulong *)(lVar34 + 0x4c) =
           CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar34 + 0x4c) >> 0x20),
                    fVar46 + (float)*(undefined8 *)(lVar34 + 0x4c));
      *(float *)(lVar34 + 0x54) = fVar44;
      *(float *)(lVar34 + 0x58) = fVar54 + *(float *)(lVar34 + 0x58);
      lVar37 = *(long *)(lVar37 + 0x38);
      if (lVar37 == 0) goto LAB_02491464;
      if (*(uint *)(lVar37 + 0x18) <= *(uint *)(lVar34 + 0x34))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar55 = *(undefined4 *)(lVar37 + (long)(int)*(uint *)(lVar34 + 0x34) * 0x178 + 0x11c);
      lVar21 = lVar21 + lVar31 * 0x5c;
      *(float *)(lVar21 + 0x70) = fVar44;
      *(undefined4 *)(lVar21 + 0x6c) = uVar55;
      lVar37 = *in_stack_00000150;
      if ((lVar37 == 0) || (lVar21 = *(long *)(lVar37 + 0x50), lVar21 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar21 + 0x18) <= uVar26)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar37 = *(long *)(lVar37 + 0x38);
      if (lVar37 == 0) goto LAB_02491464;
      uVar22 = *(uint *)(lVar21 + lVar31 * 0x5c + 0x40);
      if (*(uint *)(lVar37 + 0x18) <= uVar22)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar21 = lVar21 + lVar31 * 0x5c;
      *(undefined4 *)(lVar21 + 0x74) = *(undefined4 *)(lVar37 + (long)(int)uVar22 * 0x178 + 0x128);
      *(undefined4 *)(lVar21 + 0x78) = *(undefined4 *)(lVar21 + 0x4c);
    }
  }
  if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar12 = FUN_016f9468(uVar28,0);
  if (((((uVar12 & 1) == 0) && (1 < uVar28 - 0x2010)) && (uVar28 != 0xad)) && (uVar28 != 0x2d)) {
    if (bVar5) {
      if (((uVar27 != 1) && ((int)uVar8 < (int)(*(uint *)(lVar19 + 0x18) - 1))) &&
         (((int)uVar8 < (int)*in_stack_00000148 && ((uVar28 == 0x2019 || (uVar28 == 0x27)))))) {
        if (*(uint *)(lVar19 + 0x18) <= uVar27 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        uVar2 = *(undefined2 *)(lVar19 + _in_stack_00000128 + -0x438);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar12 = FUN_016f9468(uVar2,0);
        if ((uVar12 & 1) != 0) {
          if (*(uint *)(lVar19 + 0x18) <= uVar27)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          uVar2 = *(undefined2 *)(lVar19 + _in_stack_00000128 + -0x148);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar12 = FUN_016f9468(uVar2,0);
          if ((uVar12 & 1) != 0) goto LAB_0248fee0;
        }
      }
    }
    else {
      if (uVar27 != 1) {
LAB_024909a0:
        bVar5 = false;
        goto LAB_0248fee8;
      }
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar12 = FUN_016f93a0(uVar28,0);
      if ((uVar12 & 1) != 0) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar12 = FUN_016f68bc(uVar28,0);
        if (((uVar28 != 0x200b) && ((uVar12 & 1) == 0)) && (*in_stack_00000148 != 1))
        goto LAB_024909a0;
      }
    }
    if (uVar8 == *in_stack_00000148 - 1) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar12 = FUN_016f9468(uVar28,0);
      iVar7 = (int)fStack00000000000000e4;
      if ((uVar12 & 1) == 0) goto LAB_02490204;
    }
    else {
LAB_02490204:
      iVar7 = uVar27 - 2;
    }
    lVar37 = *in_stack_00000150;
    if (lVar37 == 0) goto LAB_02491464;
    lVar21 = *(long *)(lVar37 + 0x40);
    if (lVar21 == 0) goto LAB_02491464;
    uVar22 = *(uint *)(lVar37 + 0x24);
    iVar9 = *(int *)(lVar21 + 0x18);
    if (iVar9 < (int)(uVar22 + 1)) {
      if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01147b84((long *)(lVar37 + 0x40),iVar9 + 1,
                   *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
      lVar37 = *in_stack_00000150;
      if (lVar37 == 0) goto LAB_02491464;
    }
    lVar21 = *(long *)(lVar37 + 0x40);
    if (lVar21 == 0) goto LAB_02491464;
    if (*(uint *)(lVar21 + 0x18) <= uVar22)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar21 = lVar21 + (long)(int)uVar22 * 0x18;
    *(long **)(lVar21 + 0x20) = unaff_x19;
    *(float *)(lVar21 + 0x28) = in_stack_00000110._4_4_;
    *(int *)(lVar21 + 0x2c) = iVar7;
    *(int *)(lVar21 + 0x30) = (iVar7 - (int)in_stack_00000110._4_4_) + 1;
    lVar21 = *(long *)(lVar37 + 0x50);
    *(int *)(lVar37 + 0x24) = *(int *)(lVar37 + 0x24) + 1;
    if (lVar21 == 0) goto LAB_02491464;
    if (*(uint *)(lVar21 + 0x18) <= uVar26)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar21 = lVar21 + lVar31 * 0x5c;
    bVar5 = false;
    iStack00000000000000a4 = iStack00000000000000a4 + 1;
    *(int *)(lVar21 + 0x30) = *(int *)(lVar21 + 0x30) + 1;
  }
  else {
    if (!bVar5) {
      in_stack_00000110._4_4_ = (float)uVar8;
    }
    if (uVar8 == *in_stack_00000148 - 1) {
      lVar37 = *in_stack_00000150;
      if (lVar37 == 0) goto LAB_02491464;
      lVar21 = *(long *)(lVar37 + 0x40);
      if (lVar21 == 0) goto LAB_02491464;
      uVar22 = *(uint *)(lVar37 + 0x24);
      iVar7 = *(int *)(lVar21 + 0x18);
      if (iVar7 < (int)(uVar22 + 1)) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147b84((long *)(lVar37 + 0x40),iVar7 + 1,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
        lVar37 = *in_stack_00000150;
        if (lVar37 == 0) goto LAB_02491464;
      }
      lVar21 = *(long *)(lVar37 + 0x40);
      if (lVar21 == 0) goto LAB_02491464;
      if (*(uint *)(lVar21 + 0x18) <= uVar22)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar21 = lVar21 + (long)(int)uVar22 * 0x18;
      *(long **)(lVar21 + 0x20) = unaff_x19;
      *(float *)(lVar21 + 0x28) = in_stack_00000110._4_4_;
      *(uint *)(lVar21 + 0x2c) = uVar8;
      *(uint *)(lVar21 + 0x30) = uVar27 - (int)in_stack_00000110._4_4_;
      lVar21 = *(long *)(lVar37 + 0x50);
      *(int *)(lVar37 + 0x24) = *(int *)(lVar37 + 0x24) + 1;
      if (lVar21 == 0) goto LAB_02491464;
      if (*(uint *)(lVar21 + 0x18) <= uVar26)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar21 = lVar21 + lVar31 * 0x5c;
      iStack00000000000000a4 = iStack00000000000000a4 + 1;
      *(int *)(lVar21 + 0x30) = *(int *)(lVar21 + 0x30) + 1;
    }
LAB_0248fee0:
    bVar5 = true;
  }
LAB_0248fee8:
  if ((*in_stack_00000150 == 0) || (lVar37 = *(long *)(*in_stack_00000150 + 0x38), lVar37 == 0))
  goto LAB_02491464;
  uVar22 = *(uint *)(lVar37 + 0x18);
  if (uVar22 <= uVar8)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*(byte *)(lVar37 + lVar11 * 0x178 + 400) >> 2 & 1) == 0) {
    if (((uint)fStack00000000000000ec & 1) == 0) {
LAB_024903d8:
      fStack00000000000000ec = 0.0;
    }
    else {
LAB_0248ff18:
      if (uVar22 <= uVar27 - 2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar31 = *unaff_x19;
      uVar55 = *(undefined4 *)(lVar37 + _in_stack_00000128 + -0x330);
      uVar48 = *(undefined4 *)(lVar37 + _in_stack_00000128 + -0x2f8);
LAB_02490474:
      pcVar25 = *(code **)(lVar31 + 0x908);
LAB_0249047c:
      (*pcVar25)(fStack0000000000000054,fStack000000000000004c,fStack0000000000000050,uVar55,
                 fStack00000000000000cc,0,fStack0000000000000058,uVar48);
      puVar3 = System_Threading_Mutex_TypeInfo;
      lVar37 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar37 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar37 = *(long *)puVar3;
      }
LAB_024904cc:
      fStack00000000000000ec = 0.0;
      fVar47 = 0.0;
      fStack00000000000000cc = *(float *)(*(long *)(lVar37 + 0xb8) + 0x15a8);
      fStack00000000000000c8 = 0.0;
    }
  }
  else {
    lVar37 = lVar37 + lVar11 * 0x178;
    iVar7 = *(int *)(lVar37 + 0x68);
    *(int *)(lVar37 + 0x16c) = iVar36;
    if ((((int)unaff_x19[100] < (int)uVar8) || ((int)unaff_x19[0x65] < (int)uVar26)) ||
       (((int)unaff_x19[0x5b] == 5 && (iVar7 + 1 != (int)unaff_x19[0x66])))) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar12 = FUN_016f68bc(uVar28,0);
    if ((uVar28 != 0x200b) && ((uVar12 & 1) == 0)) {
      lVar37 = *in_stack_00000150;
      if ((lVar37 == 0) || (lVar31 = *(long *)(lVar37 + 0x38), lVar31 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar31 + 0x18) <= uVar8)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      fVar44 = *(float *)(lVar31 + lVar11 * 0x178 + 0x160);
      if (fVar47 <= fVar44) {
        fVar47 = fVar44;
      }
      if (fStack00000000000000c8 <= ABS(fVar43)) {
        fStack00000000000000c8 = ABS(fVar43);
      }
      if ((float)iVar7 != fStack0000000000000048) {
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar37 = *in_stack_00000150;
          if (lVar37 == 0) goto LAB_02491464;
          lVar31 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
        }
        else {
          lVar31 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
        }
        fStack00000000000000cc = *(float *)(lVar31 + 0x15a8);
      }
      lVar37 = *(long *)(lVar37 + 0x38);
      if (lVar37 == 0) goto LAB_02491464;
      if (*(uint *)(lVar37 + 0x18) <= uVar8)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (unaff_x19[0x1e] == 0) goto LAB_02491464;
      fVar41 = *(float *)(lVar37 + lVar11 * 0x178 + 0x14c);
      fVar44 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
      fVar41 = fVar41 + fVar47 * fVar44;
      fStack0000000000000048 = (float)iVar7;
      if (fVar41 <= fStack00000000000000cc) {
        fStack00000000000000cc = fVar41;
      }
    }
    if (((uint)fStack00000000000000ec & 1) == 0) {
      fStack00000000000000ec = 0.0;
      if ((((uVar28 == 0xd) || ((uVar28 | 1) == 0xb)) || ((int)uVar32 < (int)uVar8)) || (!bVar6))
      goto LAB_024904e8;
      if (uVar8 == uVar32) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar12 = FUN_016fa418(uVar28,0);
        if ((uVar12 & 1) != 0) goto LAB_024903d8;
      }
      if ((*in_stack_00000150 == 0) || (lVar37 = *(long *)(*in_stack_00000150 + 0x38), lVar37 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar37 + 0x18) <= uVar8)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar37 = lVar37 + lVar11 * 0x178;
      fStack0000000000000058 = *(float *)(lVar37 + 0x160);
      fStack0000000000000054 = *(float *)(lVar37 + 0x11c);
      bVar4 = fVar47 != 0.0;
      fVar44 = fStack0000000000000058;
      if (bVar4) {
        fVar44 = fVar47;
      }
      fVar47 = fVar44;
      _bStack000000000000005c = *(uint *)(lVar37 + 0x168);
      fStack0000000000000050 = 0.0;
      fVar44 = fVar43;
      if (bVar4) {
        fVar44 = fStack00000000000000c8;
      }
      fStack000000000000004c = fStack00000000000000cc;
      fStack00000000000000c8 = fVar44;
    }
    if (*in_stack_00000148 == 1) {
      if ((*in_stack_00000150 != 0) && (lVar37 = *(long *)(*in_stack_00000150 + 0x38), lVar37 != 0))
      {
        if (uVar8 < *(uint *)(lVar37 + 0x18)) {
          lVar37 = lVar37 + lVar11 * 0x178;
          lVar31 = *unaff_x19;
          uVar55 = *(undefined4 *)(lVar37 + 0x128);
          uVar48 = *(undefined4 *)(lVar37 + 0x160);
          goto LAB_02490474;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
    if ((uVar8 == uVar57) || ((int)uVar32 <= (int)uVar8)) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar12 = FUN_016f68bc(uVar28,0);
      if ((*in_stack_00000150 != 0) && (lVar37 = *(long *)(*in_stack_00000150 + 0x38), lVar37 != 0))
      {
        if (uVar28 == 0x200b || (uVar12 & 1) != 0) {
          lVar31 = lVar29;
          if (*(uint *)(lVar37 + 0x18) <= uVar32)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        else {
          lVar31 = lVar11;
          if (*(uint *)(lVar37 + 0x18) <= uVar8)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        lVar37 = lVar37 + lVar31 * 0x178;
        uVar55 = *(undefined4 *)(lVar37 + 0x128);
        uVar48 = *(undefined4 *)(lVar37 + 0x160);
        pcVar25 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_0249047c;
      }
      goto LAB_02491464;
    }
    if (!bVar6) {
      if ((*in_stack_00000150 != 0) && (lVar37 = *(long *)(*in_stack_00000150 + 0x38), lVar37 != 0))
      {
        uVar22 = *(uint *)(lVar37 + 0x18);
        goto LAB_0248ff18;
      }
      goto LAB_02491464;
    }
    if ((int)uVar8 < (int)(*in_stack_00000148 - 1)) {
      if ((*in_stack_00000150 == 0) || (lVar37 = *(long *)(*in_stack_00000150 + 0x38), lVar37 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar37 + 0x18) <= uVar27)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar12 = FUN_024a9e4c(_bStack000000000000005c,*(undefined4 *)(lVar37 + _in_stack_00000128),0);
      if ((uVar12 & 1) == 0) {
        if ((*in_stack_00000150 != 0) &&
           (lVar37 = *(long *)(*in_stack_00000150 + 0x38), lVar37 != 0)) {
          if (uVar8 < *(uint *)(lVar37 + 0x18)) {
            lVar37 = lVar37 + lVar11 * 0x178;
            (**(code **)(*unaff_x19 + 0x908))
                      (fStack0000000000000054,fStack000000000000004c,fStack0000000000000050,
                       *(undefined4 *)(lVar37 + 0x128),fStack00000000000000cc,0,
                       fStack0000000000000058,*(undefined4 *)(lVar37 + 0x160));
            puVar3 = System_Threading_Mutex_TypeInfo;
            lVar37 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar37 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar37 = *(long *)puVar3;
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
  if ((*in_stack_00000150 == 0) || (lVar37 = *(long *)(*in_stack_00000150 + 0x38), lVar37 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar37 + 0x18) <= uVar8)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if (lVar33 == 0) goto LAB_02491464;
  uVar22 = *(uint *)(lVar37 + lVar11 * 0x178 + 400);
  fVar44 = (float)FUN_026fd1f0(lVar33 + 0x50,0);
  if ((uVar22 >> 6 & 1) == 0) {
    if (((uint)fStack00000000000000e8 & 1) != 0) {
      if ((*in_stack_00000150 == 0) || (lVar37 = *(long *)(*in_stack_00000150 + 0x38), lVar37 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar37 + 0x18) <= uVar27 - 2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar55 = *(undefined4 *)(lVar37 + _in_stack_00000128 + -0x330);
      pcVar25 = *(code **)(*unaff_x19 + 0x908);
      fVar46 = fStack0000000000000084 * fVar44 + *(float *)(lVar37 + _in_stack_00000128 + -0x30c);
LAB_02490a68:
      (*pcVar25)(in_stack_00000078._4_4_,in_stack_00000068._4_4_,uStack0000000000000060,uVar55,
                 fVar46,0,fStack0000000000000084,fStack0000000000000084);
    }
LAB_02490a9c:
    fStack00000000000000e8 = 0.0;
  }
  else {
    lVar37 = *in_stack_00000150;
    if ((lVar37 == 0) || (lVar31 = *(long *)(lVar37 + 0x38), lVar31 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar31 + 0x18) <= uVar8)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(int *)(lVar31 + lVar11 * 0x178 + 0x174) = iVar36;
    if ((((int)unaff_x19[100] < (int)uVar8) || ((int)unaff_x19[0x65] < (int)uVar26)) ||
       (((int)unaff_x19[0x5b] == 5 &&
        (*(int *)(lVar31 + lVar11 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if ((((uVar28 == 0xd) || ((uVar28 | 1) == 0xb)) || ((int)uVar32 < (int)uVar8)) ||
       (((uint)fStack00000000000000e8 & 1) != 0 || !bVar6)) {
LAB_02490668:
      if (((uint)fStack00000000000000e8 & 1) == 0) goto LAB_02490a9c;
    }
    else {
      if (uVar8 == uVar32) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar12 = FUN_016fa418(uVar28,0);
        if ((uVar12 & 1) != 0) goto LAB_02490668;
        lVar37 = *in_stack_00000150;
        if (lVar37 == 0) goto LAB_02491464;
      }
      lVar37 = *(long *)(lVar37 + 0x38);
      if (lVar37 == 0) goto LAB_02491464;
      if (*(uint *)(lVar37 + 0x18) <= uVar8)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar37 = lVar37 + lVar11 * 0x178;
      fStack0000000000000038 = *(float *)(lVar37 + 0x60);
      fStack0000000000000084 = *(float *)(lVar37 + 0x160);
      fStack0000000000000034 = *(float *)(lVar37 + 0x14c);
      in_stack_00000078._4_4_ = *(float *)(lVar37 + 0x11c);
      in_stack_00000068._4_4_ = fVar44 * fStack0000000000000084 + fStack0000000000000034;
      uStack0000000000000060 = 0;
    }
    uVar22 = *in_stack_00000148;
    if (uVar22 == 1) {
      if (*in_stack_00000150 != 0) {
        lVar37 = *(long *)(*in_stack_00000150 + 0x38);
joined_r0x024907c8:
        if (lVar37 != 0) {
          if (uVar8 < *(uint *)(lVar37 + 0x18)) {
            lVar37 = lVar37 + lVar11 * 0x178;
            lVar29 = *unaff_x19;
            uVar55 = *(undefined4 *)(lVar37 + 0x128);
            fVar46 = *(float *)(lVar37 + 0x14c);
LAB_024907e8:
            pcVar25 = *(code **)(lVar29 + 0x908);
LAB_02490a64:
            fVar46 = fVar44 * fStack0000000000000084 + fVar46;
            goto LAB_02490a68;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
      }
      goto LAB_02491464;
    }
    if (uVar8 == uVar57) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar12 = FUN_016f68bc(uVar28,0);
      if ((*in_stack_00000150 != 0) && (lVar37 = *(long *)(*in_stack_00000150 + 0x38), lVar37 != 0))
      {
        uVar22 = *(uint *)(lVar37 + 0x18);
        if (uVar28 == 0x200b || (uVar12 & 1) != 0) {
          if (uVar22 <= uVar32)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        else {
LAB_02490a40:
          lVar29 = lVar11;
          if (uVar22 <= uVar8)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
LAB_02490a48:
        lVar37 = lVar37 + lVar29 * 0x178;
        fVar46 = *(float *)(lVar37 + 0x14c);
        uVar55 = *(undefined4 *)(lVar37 + 0x128);
        pcVar25 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_02490a64;
      }
      goto LAB_02491464;
    }
    if ((int)uVar8 < (int)uVar22) {
      lVar37 = *in_stack_00000150;
      if ((lVar37 != 0) && (lVar31 = *(long *)(lVar37 + 0x38), lVar31 != 0)) {
        if (uVar27 < *(uint *)(lVar31 + 0x18)) {
          if (*(float *)(lVar31 + _in_stack_00000128 + -0x108) == fStack0000000000000038) {
            fVar41 = *(float *)(lVar31 + _in_stack_00000128 + -0x1c);
            if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar12 = FUN_024aa280(fVar46 + fVar41,fStack0000000000000034,0);
            if ((uVar12 & 1) != 0) {
              uVar22 = *in_stack_00000148;
              goto LAB_024908ec;
            }
            lVar37 = *in_stack_00000150;
            if (lVar37 == 0) goto LAB_02491464;
          }
          lVar37 = *(long *)(lVar37 + 0x38);
          if (lVar37 != 0) {
            uVar22 = *(uint *)(lVar37 + 0x18);
            if ((int)uVar8 <= (int)uVar32) goto LAB_02490a40;
            if (uVar32 < uVar22) goto LAB_02490a48;
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          }
          goto LAB_02491464;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
LAB_024908ec:
    if ((int)uVar8 < (int)uVar22) {
      iVar7 = FUN_02681c0c(lVar33,0);
      if (*(uint *)(lVar19 + 0x18) <= uVar27)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar37 = *(long *)(lVar19 + _in_stack_00000128 + -0x130);
      if (lVar37 == 0) goto LAB_02491464;
      iVar9 = FUN_02681c0c(lVar37,0);
      if (iVar7 != iVar9) {
        if (*in_stack_00000150 != 0) {
          lVar37 = *(long *)(*in_stack_00000150 + 0x38);
          goto joined_r0x024907c8;
        }
        goto LAB_02491464;
      }
    }
    if (!bVar6) {
      if ((*in_stack_00000150 != 0) && (lVar37 = *(long *)(*in_stack_00000150 + 0x38), lVar37 != 0))
      {
        if (uVar27 - 2 < *(uint *)(lVar37 + 0x18)) {
          lVar29 = *unaff_x19;
          uVar55 = *(undefined4 *)(lVar37 + _in_stack_00000128 + -0x330);
          fVar46 = *(float *)(lVar37 + _in_stack_00000128 + -0x30c);
          goto LAB_024907e8;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
    fStack00000000000000e8 = 1.4013e-45;
  }
  if ((*in_stack_00000150 == 0) || (lVar37 = *(long *)(*in_stack_00000150 + 0x38), lVar37 == 0))
  goto LAB_02491464;
  uVar22 = (uint)*(undefined8 *)(lVar37 + 0x18);
  if (uVar22 <= uVar8)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*(byte *)(lVar37 + lVar11 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if ((_uStack00000000000000e0 & 1) != 0) {
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,
                 fStack0000000000000098,in_stack_000000a0,uStack0000000000000094);
    }
LAB_02490b04:
    _uStack00000000000000e0 = _uStack00000000000000e0 & 0xffffffff00000000;
  }
  else {
    if ((((int)unaff_x19[100] < (int)uVar8) || ((int)unaff_x19[0x65] < (int)uVar26)) ||
       (((int)unaff_x19[0x5b] == 5 &&
        (*(int *)(lVar37 + lVar11 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if ((_uStack00000000000000e0 & 1) == 0) {
      if ((((uVar28 == 0xd) || ((uVar28 | 1) == 0xb)) || ((int)uVar32 < (int)uVar8)) || (!bVar6))
      goto LAB_02490b04;
      if (uVar8 == uVar32) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar12 = FUN_016fa418(uVar28,0);
        if ((uVar12 & 1) != 0) goto LAB_02490b04;
      }
      puVar3 = System_Threading_Mutex_TypeInfo;
      lVar29 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar29 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar29 = *(long *)puVar3;
      }
      if ((*in_stack_00000150 == 0) || (lVar37 = *(long *)(*in_stack_00000150 + 0x38), lVar37 == 0))
      goto LAB_02491464;
      uVar22 = (uint)*(undefined8 *)(lVar37 + 0x18);
      if (uVar22 <= uVar8)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar29 = *(long *)(lVar29 + 0xb8);
      lVar31 = lVar37 + lVar11 * 0x178;
      in_stack_00001798 = *(undefined8 *)(lVar31 + 0x184);
      in_stack_00001790 = *(undefined8 *)(lVar31 + 0x17c);
      fStack00000000000000a8 = *(float *)(lVar29 + 0x1598);
      in_stack_000017a0 = *(float *)(lVar31 + 0x18c);
      fStack00000000000000ac = *(float *)(lVar29 + 0x159c);
      fStack0000000000000098 = *(float *)(lVar29 + 0x15a0);
      in_stack_000000a0 = *(float *)(lVar29 + 0x15a4);
      uStack0000000000000094 = 0;
    }
    if (uVar22 <= uVar8)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar37 = lVar37 + lVar11 * 0x178;
    fVar44 = *(float *)(lVar37 + 0x128);
    fVar53 = *(float *)(lVar37 + 0x188);
    uVar10 = *(undefined8 *)(lVar37 + 0x17c);
    fVar51 = *(float *)(lVar37 + 0x184);
    uVar14 = *(undefined8 *)(lVar37 + 0x184);
    fVar49 = *(float *)(lVar37 + 0x18c);
    fVar46 = *(float *)(lVar37 + 0x11c);
    fVar41 = *(float *)(lVar37 + 0x148);
    fVar42 = *(float *)(lVar37 + 0x150);
    in_stack_00000158 = uVar10;
    fStack0000000000000160 = fVar51;
    fStack0000000000000164 = fVar53;
    in_stack_00000168 = fVar49;
    in_stack_00000170 = in_stack_00001790;
    in_stack_00000178 = in_stack_00001798;
    in_stack_00000180 = in_stack_000017a0;
    uVar12 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
    lVar37 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
    if ((uVar12 & 1) == 0) {
      if (*(int *)(lVar37 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar37);
      }
      fVar44 = fVar44 + (float)in_stack_00001798;
      fVar46 = fVar46 - (float)((ulong)in_stack_00001790 >> 0x20);
      fVar41 = fVar41 + (float)((ulong)in_stack_00001798 >> 0x20);
      if (fVar46 <= fStack00000000000000a8) {
        fStack00000000000000a8 = fVar46;
      }
      if (fVar42 - in_stack_000017a0 <= fStack00000000000000ac) {
        fStack00000000000000ac = fVar42 - in_stack_000017a0;
      }
      if (fStack0000000000000098 <= fVar44) {
        fStack0000000000000098 = fVar44;
      }
      if (in_stack_000000a0 <= fVar41) {
        in_stack_000000a0 = fVar41;
      }
    }
    else {
      if (*(int *)(lVar37 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar37);
      }
      fVar46 = (fVar46 + (fStack0000000000000098 - (float)in_stack_00001798)) * 0.5;
      if (fVar42 <= fStack00000000000000ac) {
        fStack00000000000000ac = fVar42;
      }
      if (in_stack_000000a0 <= fVar41) {
        in_stack_000000a0 = fVar41;
      }
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,fVar46,
                 in_stack_000000a0,uStack0000000000000094);
      fStack00000000000000ac = fVar42 - fVar49;
      fStack0000000000000098 = fVar44 + fVar51;
      uStack0000000000000094 = 0;
      in_stack_000000a0 = fVar41 + fVar53;
      fStack00000000000000a8 = fVar46;
      in_stack_00001790 = uVar10;
      in_stack_00001798 = uVar14;
      in_stack_000017a0 = fVar49;
    }
    if (((*in_stack_00000148 == 1) || (uVar8 == uVar57)) ||
       (((int)uVar32 <= (int)uVar8 || (!bVar6)))) {
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,
                 fStack0000000000000098,in_stack_000000a0,uStack0000000000000094);
      _uStack00000000000000e0 = _uStack00000000000000e0 & 0xffffffff00000000;
    }
    else {
      _uStack00000000000000e0 = CONCAT44(fStack00000000000000e4,1);
    }
  }
  uVar8 = *in_stack_00000148;
  _uStack00000000000000e0 = CONCAT44((int)fStack00000000000000e4 + 1,uStack00000000000000e0);
  _in_stack_00000128 = _in_stack_00000128 + 0x178;
  bVar6 = (int)uVar8 <= (int)uVar27;
  uVar22 = uVar26;
  uVar27 = uVar27 + 1;
  if (bVar6) goto LAB_02491038;
  goto LAB_0248ef74;
LAB_0248bc34:
  param_2 = 0;
  goto code_r0x0248bc38;
LAB_02491038:
  lVar19 = *in_stack_00000150;
  if (lVar19 != 0) {
    iVar36 = uVar26 + 1;
    plVar23 = (long *)PTR_DAT_033ed410;
LAB_02491068:
    *(uint *)(lVar19 + 0x18) = uVar8;
    lVar37 = unaff_x19[0xd3];
    *(int *)(lVar19 + 0x2c) = iVar36;
    iVar36 = iStack00000000000000a4;
    if ((int)uVar8 < 1) {
      iVar36 = 1;
    }
    if (iStack00000000000000a4 == 0) {
      iVar36 = 1;
    }
    *(int *)(lVar19 + 0x1c) = (int)lVar37;
    *(int *)(lVar19 + 0x24) = iVar36;
    *(int *)(lVar19 + 0x30) = (int)unaff_x19[0x95] + 1;
    if (((int)unaff_x19[0x62] != 0xff) ||
       (uVar12 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar12 & 1) == 0)) {
LAB_02491468:
      lVar19 = *(long *)Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__;
LAB_02491474:
      if (*(int *)(lVar19 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_024a942c();
      return;
    }
    lVar19 = unaff_x19[0xda];
    if (lVar19 != 0) {
      (**(code **)(lVar19 + 0x18))
                (*(undefined8 *)(lVar19 + 0x40),*in_stack_00000150,*(undefined8 *)(lVar19 + 0x28));
    }
    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
      if ((*in_stack_00000150 == 0) || (lVar19 = *(long *)(*in_stack_00000150 + 0x60), lVar19 == 0))
      goto LAB_02491464;
      if (*(int *)(*plVar23 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(int *)(lVar19 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      FUN_024e8000(lVar19 + 0x20,1,0);
    }
    if (unaff_x19[0x73] != 0) {
      UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
                (unaff_x19[0x73],0);
      if ((unaff_x19[0x6c] != 0) && (lVar19 = *(long *)(unaff_x19[0x6c] + 0x60), lVar19 != 0)) {
        if (*(int *)(lVar19 + 0x18) == 0) {
UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (unaff_x19[0x73] != 0) {
          FUN_0266b9c4(unaff_x19[0x73],*(undefined8 *)(lVar19 + 0x30),0);
          if ((unaff_x19[0x6c] != 0) && (lVar19 = *(long *)(unaff_x19[0x6c] + 0x60), lVar19 != 0)) {
            if (*(int *)(lVar19 + 0x18) == 0)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            if (unaff_x19[0x73] != 0) {
              FUN_0266bbc8(unaff_x19[0x73],*(undefined8 *)(lVar19 + 0x48),0);
              if ((unaff_x19[0x6c] != 0) &&
                 (lVar19 = *(long *)(unaff_x19[0x6c] + 0x60), lVar19 != 0)) {
                if (*(int *)(lVar19 + 0x18) == 0)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                if (unaff_x19[0x73] != 0) {
                  FUN_0266bc74(unaff_x19[0x73],*(undefined8 *)(lVar19 + 0x50),0);
                  if ((unaff_x19[0x6c] != 0) &&
                     (lVar19 = *(long *)(unaff_x19[0x6c] + 0x60), lVar19 != 0)) {
                    if (*(int *)(lVar19 + 0x18) == 0)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    if (unaff_x19[0x73] != 0) {
                      FUN_0266c1dc(unaff_x19[0x73],*(undefined8 *)(lVar19 + 0x58),0);
                      if (unaff_x19[0x73] != 0) {
                        FUN_0266ed90(unaff_x19[0x73],0);
                        lVar19 = *in_stack_00000150;
                        if (lVar19 != 0) {
                          lVar29 = 0;
                          lVar37 = 0;
                          do {
                            uVar12 = lVar37 + 1;
                            if ((long)*(int *)(lVar19 + 0x34) <= (long)uVar12) goto LAB_02491468;
                            lVar19 = *(long *)(lVar19 + 0x60);
                            if (lVar19 == 0) break;
                            if (*(int *)(*plVar23 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            if (*(uint *)(lVar19 + 0x18) <= uVar12)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            FUN_024e7ecc(lVar19 + lVar29 + 0x70,0);
                            lVar19 = unaff_x19[0xe0];
                            if (lVar19 == 0) break;
                            if (*(uint *)(lVar19 + 0x18) <= uVar12)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            uVar14 = *(undefined8 *)(lVar19 + lVar37 * 8 + 0x28);
                            if (*(int *)(*plVar40 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar13 = FUN_0268b4e0(uVar14,0,0);
                            if ((uVar13 & 1) == 0) {
                              if (*(int *)((long)unaff_x19 + 0x314) != 0) {
                                if ((*in_stack_00000150 == 0) ||
                                   (lVar19 = *(long *)(*in_stack_00000150 + 0x60), lVar19 == 0))
                                break;
                                if (*(int *)(*plVar23 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                if (*(uint *)(lVar19 + 0x18) <= uVar12)
                                goto 
                                UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                                ;
                                FUN_024e8000(lVar19 + lVar29 + 0x70,1,0);
                              }
                              lVar19 = unaff_x19[0xe0];
                              if (lVar19 == 0) break;
                              if (*(uint *)(lVar19 + 0x18) <= uVar12)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar19 = *(long *)(lVar19 + lVar37 * 8 + 0x28);
                              if (lVar19 == 0) break;
                              lVar19 = FUN_024eefa0(lVar19,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar11 = *(long *)(*in_stack_00000150 + 0x60), lVar11 == 0))
                              break;
                              if (*(uint *)(lVar11 + 0x18) <= uVar12)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar19 == 0) break;
                              FUN_0266b9c4(lVar19,*(undefined8 *)(lVar11 + lVar29 + 0x80),0);
                              lVar19 = unaff_x19[0xe0];
                              if (lVar19 == 0) break;
                              if (*(uint *)(lVar19 + 0x18) <= uVar12)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar19 = *(long *)(lVar19 + lVar37 * 8 + 0x28);
                              if (lVar19 == 0) break;
                              lVar19 = FUN_024eefa0(lVar19,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar11 = *(long *)(*in_stack_00000150 + 0x60), lVar11 == 0))
                              break;
                              if (*(uint *)(lVar11 + 0x18) <= uVar12)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar19 == 0) break;
                              FUN_0266bbc8(lVar19,*(undefined8 *)(lVar11 + lVar29 + 0x98),0);
                              lVar19 = unaff_x19[0xe0];
                              if (lVar19 == 0) break;
                              if (*(uint *)(lVar19 + 0x18) <= uVar12)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar19 = *(long *)(lVar19 + lVar37 * 8 + 0x28);
                              if (lVar19 == 0) break;
                              lVar19 = FUN_024eefa0(lVar19,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar11 = *(long *)(*in_stack_00000150 + 0x60), lVar11 == 0))
                              break;
                              if (*(uint *)(lVar11 + 0x18) <= uVar12)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar19 == 0) break;
                              FUN_0266bc74(lVar19,*(undefined8 *)(lVar11 + lVar29 + 0xa0),0);
                              lVar19 = unaff_x19[0xe0];
                              if (lVar19 == 0) break;
                              if (*(uint *)(lVar19 + 0x18) <= uVar12)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar19 = *(long *)(lVar19 + lVar37 * 8 + 0x28);
                              if (lVar19 == 0) break;
                              lVar19 = FUN_024eefa0(lVar19,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar11 = *(long *)(*in_stack_00000150 + 0x60), lVar11 == 0))
                              break;
                              if (*(uint *)(lVar11 + 0x18) <= uVar12)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar19 == 0) break;
                              FUN_0266c1dc(lVar19,*(undefined8 *)(lVar11 + lVar29 + 0xa8),0);
                              lVar19 = unaff_x19[0xe0];
                              if (lVar19 == 0) break;
                              if (*(uint *)(lVar19 + 0x18) <= uVar12)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar19 = *(long *)(lVar19 + lVar37 * 8 + 0x28);
                              if ((lVar19 == 0) || (lVar19 = FUN_024eefa0(lVar19,0), lVar19 == 0))
                              break;
                              FUN_0266ed90(lVar19,0);
                            }
                            lVar19 = *in_stack_00000150;
                            lVar37 = lVar37 + 1;
                            lVar29 = lVar29 + 0x50;
                          } while (lVar19 != 0);
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


