/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider$$get_leftHandMovementDirection
ENTRY_POINT: 0248bc48
PROGRAM: Lovesick-libil2cpp.so
SCORE: 204
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;weak_pose_support;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;weak_vector_component_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_21;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_DynamicMoveProvider__get_leftHandMovementDirection
               (float param_1,float param_2,undefined1 param_3 [16],float param_4)

{
  bool bVar1;
  int iVar2;
  undefined2 uVar3;
  bool bVar4;
  double __x;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  int *piVar17;
  ulong uVar18;
  undefined1 uVar19;
  char cVar20;
  long lVar21;
  undefined4 *puVar22;
  long lVar23;
  uint uVar24;
  long *plVar25;
  float *pfVar26;
  code *pcVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  long lVar31;
  float *pfVar32;
  long lVar33;
  uint uVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long *unaff_x19;
  uint unaff_w20;
  int iVar38;
  long unaff_x21;
  long lVar39;
  long *unaff_x25;
  long *plVar40;
  uint *unaff_x26;
  uint uVar41;
  long *unaff_x27;
  long *plVar42;
  undefined8 *unaff_x28;
  uint unaff_w29;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  double dVar47;
  float fVar48;
  float fVar49;
  undefined4 uVar50;
  float unaff_s8;
  float fVar51;
  float fVar52;
  float unaff_s10;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined4 uVar57;
  float unaff_s14;
  float fVar58;
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
  undefined4 uStack00000000000000e8;
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
  uint uVar59;
  uint in_stack_000017bc;
  
code_r0x0248bc48:
  fVar45 = 0.0;
  fVar49 = unaff_s10;
  fStack00000000000000e4 = param_2;
  fVar51 = unaff_s14;
  do {
    if (*unaff_x25 == 0) goto LAB_02491464;
    lVar21 = *(long *)(*unaff_x25 + 0x38);
    uVar14 = _fStack0000000000000118 & 0xffffffff;
    if (lVar21 == 0) goto LAB_02491464;
    if (*(uint *)(lVar21 + 0x18) <= *unaff_x26)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar21 = lVar21 + (int)*unaff_x26 * unaff_x21;
    *(float *)(lVar21 + 0x120) = fVar49;
    *(float *)(lVar21 + 0x11c) = fStack00000000000000ec;
    *(float *)(lVar21 + 0x124) = in_stack_000000e0;
    if ((*unaff_x25 == 0) || (lVar21 = *(long *)(*unaff_x25 + 0x38), lVar21 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar21 + 0x18) <= *unaff_x26)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar21 = lVar21 + (int)*unaff_x26 * unaff_x21;
    *(float *)(lVar21 + 0x114) = fVar51;
    *(undefined4 *)(lVar21 + 0x110) = uStack00000000000000e8;
    *(float *)(lVar21 + 0x118) = fStack00000000000000e4;
    if ((*unaff_x25 == 0) || (lVar21 = *(long *)(*unaff_x25 + 0x38), lVar21 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar21 + 0x18) <= *unaff_x26)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar21 = lVar21 + (int)*unaff_x26 * unaff_x21;
    *(float *)(lVar21 + 0x128) = unaff_s8;
    *(float *)(lVar21 + 300) = unaff_s14;
    *(float *)(lVar21 + 0x130) = fVar45;
    if ((*unaff_x25 == 0) || (lVar21 = *(long *)(*unaff_x25 + 0x38), lVar21 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar21 + 0x18) <= *unaff_x26)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar21 = lVar21 + (int)*unaff_x26 * unaff_x21;
    *(float *)(lVar21 + 0x134) = param_4;
    *(float *)(lVar21 + 0x138) = unaff_s10;
    *(float *)(lVar21 + 0x13c) = param_1;
    if ((*unaff_x25 == 0) || (lVar21 = *(long *)(*unaff_x25 + 0x38), lVar21 == 0))
    goto LAB_02491464;
    uVar10 = *unaff_x26;
    lVar39 = (long)(int)uVar10;
    if (*(uint *)(lVar21 + 0x18) <= uVar10)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar31 = lVar21 + lVar39 * unaff_x21;
    *(int *)(lVar31 + 0x140) = (int)unaff_x19[199];
    fVar48 = *(float *)(unaff_x19 + 0x9a);
    uVar15 = (ulong)(uint)fVar48;
    fVar45 = *(float *)((long)unaff_x19 + 0x614);
    *(float *)(lVar31 + 0x15c) = (unaff_s8 - fStack00000000000000ec) / (fVar51 - fVar49);
    *(float *)(lVar31 + 0x14c) = (in_stack_00000138 - fVar48) + fVar45;
    in_stack_00000128 = in_stack_00000128 * fStack0000000000000118;
    if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
      in_stack_00000128 = in_stack_00000128 / in_stack_00000100;
      in_stack_00000120 = (in_stack_00000120 * fStack0000000000000118) / in_stack_00000100;
    }
    else {
      in_stack_00000120 = in_stack_00000120 * fStack0000000000000118;
    }
    uVar24 = *(uint *)(unaff_x19 + 0x92);
    bVar7 = unaff_w29 != 0;
    in_stack_00000128 = fVar45 + in_stack_00000128;
    bVar8 = uVar10 != uVar24;
    if (bVar8 && bVar7) {
      fVar51 = *(float *)(unaff_x19 + 0x98);
      lVar21 = lVar21 + lVar39 * unaff_x21;
      *(float *)(lVar21 + 0x154) = fVar51;
      in_stack_00000120 = *(float *)((long)unaff_x19 + 0x4c4);
      *(float *)(lVar21 + 0x148) = fVar51 - fVar48;
      *(float *)(lVar21 + 0x158) = in_stack_00000120;
      *(float *)(unaff_x19 + 0x97) = fVar51 - fVar48;
      in_stack_00000120 = in_stack_00000120 - fVar48;
      *(float *)(lVar21 + 0x150) = in_stack_00000120;
    }
    else {
      in_stack_00000120 = fVar45 + in_stack_00000120;
      fVar49 = in_stack_00000128;
      fVar46 = in_stack_00000120;
      if (fVar45 != 0.0) {
        fVar49 = (in_stack_00000128 - fVar45) / *(float *)((long)unaff_x19 + 0x3fc);
        fVar46 = (in_stack_00000120 - fVar45) / *(float *)((long)unaff_x19 + 0x3fc);
        if (fVar49 <= in_stack_00000128) {
          fVar49 = in_stack_00000128;
        }
        if (in_stack_00000120 <= fVar46) {
          fVar46 = in_stack_00000120;
        }
      }
      lVar21 = lVar21 + lVar39 * unaff_x21;
      fVar51 = fVar49;
      if (fVar49 <= *(float *)(unaff_x19 + 0x98)) {
        fVar51 = *(float *)(unaff_x19 + 0x98);
      }
      fVar45 = fVar46;
      if (*(float *)((long)unaff_x19 + 0x4c4) <= fVar46) {
        fVar45 = *(float *)((long)unaff_x19 + 0x4c4);
      }
      *(float *)((long)unaff_x19 + 0x4c4) = fVar45;
      in_stack_00000120 = in_stack_00000120 - fVar48;
      *(float *)(unaff_x19 + 0x98) = fVar51;
      *(float *)(lVar21 + 0x154) = fVar49;
      *(float *)(lVar21 + 0x158) = fVar46;
      *(float *)(lVar21 + 0x148) = in_stack_00000128 - fVar48;
      *(float *)(unaff_x19 + 0x97) = in_stack_00000128 - fVar48;
      *(float *)(lVar21 + 0x150) = in_stack_00000120;
    }
    *(float *)((long)unaff_x19 + 0x4bc) = in_stack_00000120;
    if (((int)unaff_x19[0x94] == 0) || (*(char *)((long)unaff_x19 + 0x334) != '\0')) {
      if (!bVar8 || !bVar7) {
        *(float *)(unaff_x19 + 0x96) = fVar51;
        if (unaff_x19[0x1f] != 0) {
          fVar51 = *(float *)((long)unaff_x19 + 0x4b4);
          fVar49 = (float)FUN_026fd150(unaff_x19[0x1f] + 0x50,0);
          in_stack_00000100 = (fStack0000000000000118 * fVar49) / in_stack_00000100;
          uVar15 = (ulong)*(uint *)(unaff_x19 + 0x9a);
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
      if ((!bVar8 || !bVar7) && (float)uVar15 == 0.0) {
        fVar51 = *(float *)(in_stack_00000070 + 0x208);
        if (*(float *)(in_stack_00000070 + 0x208) <= in_stack_00000128) {
          fVar51 = in_stack_00000128;
        }
        *(float *)(in_stack_00000070 + 0x208) = fVar51;
      }
    }
    lVar21 = *unaff_x25;
    if ((lVar21 == 0) || (lVar39 = *(long *)(lVar21 + 0x38), lVar39 == 0)) goto LAB_02491464;
    uVar29 = *unaff_x26;
    if (*(uint *)(lVar39 + 0x18) <= uVar29)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar39 = lVar39 + (int)uVar29 * unaff_x21;
    *(undefined1 *)(lVar39 + 0x194) = 0;
    uVar28 = *(uint *)(unaff_x19 + 0x4e);
    iVar38 = (int)unaff_x21;
    uVar59 = in_stack_000017bc;
    if ((in_stack_000017bc == 9) ||
       (((((unaff_w29 == 0 && (in_stack_000017bc != 3)) && (in_stack_000017bc != 0x200b)) &&
         (in_stack_000017bc != 0xad)) ||
        (((in_stack_000017bc == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) != 0 ||
         (*(int *)((long)unaff_x19 + 0x63c) == 1)))))) {
      *(undefined1 *)(lVar39 + 0x194) = 1;
      pfVar26 = in_stack_00000088;
      pfVar32 = _fStack0000000000000098;
      if (unaff_w20 != 0) {
        lVar21 = *(long *)(lVar21 + 0x50);
        if (lVar21 == 0) goto LAB_02491464;
        if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar21 = lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
        pfVar32 = (float *)(lVar21 + 0x60);
        pfVar26 = (float *)(lVar21 + 100);
      }
      fVar49 = *pfVar32;
      fVar45 = *pfVar26;
      fVar51 = *(float *)(unaff_x19 + 0x6b);
      fVar48 = *(float *)(unaff_x19 + 199);
      in_stack_000000d8._4_4_ = (fStack0000000000000090 - fVar49) - fVar45;
      bVar7 = true;
      if ((fVar51 <= in_stack_000000d8._4_4_) && (bVar7 = false, !NAN(fVar51))) {
        bVar7 = fVar51 == -1.0;
      }
      if (!bVar7) {
        in_stack_000000d8._4_4_ = fVar51;
      }
      fVar51 = 0.0;
      if ((char)unaff_x19[0x1d] == '\0') {
        fVar51 = (float)FUN_026fd474(&stack0x00001770,0);
        uVar15 = (ulong)*(uint *)(unaff_x19 + 0x9a);
      }
      fVar44 = *(float *)((long)unaff_x19 + 0x4c4);
      fVar46 = *(float *)((long)unaff_x19 + 0x2cc);
      fVar43 = (float)uVar15;
      if (in_stack_000017bc != 0xad) {
        in_stack_000000d0 = fStack0000000000000118;
      }
      fVar54 = 0.0;
      if ((0.0 < fVar43) && (fVar54 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
        fVar54 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
      }
      fVar54 = (*(float *)(unaff_x19 + 0x96) - (fVar44 - fVar43)) + fVar54;
      uVar29 = *in_stack_00000148;
      if (fVar54 <= in_stack_000000a0) {
switchD_0248c274_caseD_2:
        plVar25 = (long *)System_Threading_Mutex_TypeInfo;
        fVar43 = 1.0 - fVar46;
        uVar15 = (ulong)(uint)fVar43;
        fVar48 = ABS(fVar48) + fVar51 * fVar43 * in_stack_000000d0;
        fVar51 = _DAT_0294c6e8;
        if ((uVar28 & 0x18) == 0) {
          fVar51 = 1.0;
        }
        if (fVar48 <= fVar51 * in_stack_000000d8._4_4_) {
LAB_0248cf18:
          if (in_stack_000017bc == 0xad) {
            if ((*in_stack_00000150 != 0) &&
               (lVar21 = *(long *)(*in_stack_00000150 + 0x38), lVar21 != 0)) {
              if (*in_stack_00000148 < *(uint *)(lVar21 + 0x18)) {
                *(undefined1 *)(lVar21 + (int)*in_stack_00000148 * unaff_x21 + 0x194) = 0;
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
            uVar29 = *in_stack_00000148;
            if (((uint)fStack0000000000000058 & 1) != 0) {
              *(uint *)(in_stack_00000070 + 0x1f0) = uVar29;
            }
            *(uint *)((long)unaff_x19 + 0x49c) = uVar29;
            *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
            if ((unaff_x19[0x6c] != 0) && (lVar21 = *(long *)(unaff_x19[0x6c] + 0x50), lVar21 != 0))
            {
              if (*(uint *)(unaff_x19 + 0x94) < *(uint *)(lVar21 + 0x18)) {
                lVar21 = lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                fStack0000000000000058 = 0.0;
                *(float *)(lVar21 + 0x60) = fVar49;
                *(float *)(lVar21 + 100) = fVar45;
                goto FUN_0248d088;
              }
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            }
            goto LAB_02491464;
          }
          lVar21 = *in_stack_00000150;
          if ((lVar21 == 0) || (lVar39 = *(long *)(lVar21 + 0x38), lVar39 == 0)) goto LAB_02491464;
          uVar29 = *in_stack_00000148;
          if (uVar29 < *(uint *)(lVar39 + 0x18)) {
            *(undefined1 *)(lVar39 + (int)uVar29 * unaff_x21 + 0x194) = 0;
            *(uint *)((long)unaff_x19 + 0x49c) = uVar29;
            lVar39 = *(long *)(lVar21 + 0x50);
            if (lVar39 != 0) {
              if (*(uint *)(unaff_x19 + 0x94) < *(uint *)(lVar39 + 0x18)) {
                lVar39 = lVar39 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                *(int *)(lVar39 + 0x2c) = *(int *)(lVar39 + 0x2c) + 1;
                goto LAB_0248cf8c;
              }
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            }
            goto LAB_02491464;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        if (((char)unaff_x19[0x5a] == '\0') || (uVar29 == *(uint *)(unaff_x19 + 0x92))) {
          if (((char)unaff_x19[0x46] != '\0') &&
             (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
            fVar44 = *(float *)(unaff_x19 + 0x59) / 100.0;
            if (fVar46 < fVar44) {
              fVar49 = fVar48 / fVar43;
              if (fVar46 <= 0.0) {
                fVar49 = fVar48;
              }
              fVar46 = fVar46 + (fVar48 - fVar51 * (in_stack_000000d8._4_4_ + DAT_02958218)) /
                                fVar49;
              goto LAB_0249154c;
            }
            fVar43 = *(float *)((long)unaff_x19 + 0x1dc);
            uVar15 = (ulong)(uint)fVar43;
            fVar46 = *(float *)(unaff_x19 + 0x49);
            if (fVar43 <= fVar46) goto LAB_0248c3dc;
LAB_024914c0:
            fVar51 = (fVar43 - *(float *)(unaff_x19 + 0x47)) * 0.5;
            if (fVar51 <= DAT_028aa298) {
              fVar51 = DAT_028aa298;
            }
            *(float *)((long)unaff_x19 + 0x234) = fVar43;
            fVar49 = (fVar43 - fVar51) * 20.0 + 0.5;
            fVar51 = DAT_02958220;
            if (fVar49 != INFINITY) {
              fVar51 = (float)(int)fVar49 / 20.0;
            }
            if (fVar51 <= fVar46) {
              fVar51 = fVar46;
            }
LAB_0248e598:
            *(float *)((long)unaff_x19 + 0x1dc) = fVar51;
            return;
          }
LAB_0248c3dc:
          iVar9 = (int)unaff_x19[0x5b];
          if (iVar9 == 1) {
            lVar21 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar21 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar21 = *plVar25;
            }
            plVar42 = (long *)StringLiteral_302;
            lVar39 = *(long *)(lVar21 + 0xb8);
            lVar21 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
            if ((*(byte *)(lVar21 + 0x132) & 1) == 0) {
              lVar21 = FUN_00d5941c(lVar21);
            }
            lVar21 = *(long *)(*(long *)(lVar21 + 0xc0) + 8);
            if ((*(byte *)(lVar21 + 0x132) & 1) == 0) {
              lVar21 = FUN_00d5941c();
            }
            piVar17 = (int *)thunk_FUN_00d32ed4(lVar39 + 0x11f0,*(long *)(lVar21 + 0x80) + 0xa0);
            if (*piVar17 == 0) goto LAB_0248e4bc;
            lVar21 = *plVar25;
            if (*(int *)(lVar21 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar21 = *plVar25;
            }
            FUN_013b8de4(*(long *)(lVar21 + 0xb8) + 0x11f0,&stack0x00000880,
                         *(undefined8 *)
                          Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                        );
            memcpy(&stack0x00000c70,&stack0x00000880,0x378);
            goto LAB_0248c8f4;
          }
          if (iVar9 != 6) {
            if (iVar9 == 3) {
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
          plVar42 = (long *)StringLiteral_302;
          in_stack_00001788 = FUN_024d66ec();
          lVar21 = unaff_x19[0x5c];
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              );
          }
          uVar14 = FUN_02681b9c(lVar21,0,0);
          if ((uVar14 & 1) != 0) {
            plVar40 = (long *)unaff_x19[0x5c];
            uVar16 = (**(code **)(*unaff_x19 + 0x548))();
            if (plVar40 == (long *)0x0) goto LAB_02491464;
            (**(code **)(*plVar40 + 0x558))(plVar40,uVar16,*(undefined8 *)(*plVar40 + 0x560));
            lVar21 = unaff_x19[0x5c];
            if (lVar21 == 0) goto LAB_02491464;
            *(int *)(lVar21 + 0x3f8) = (int)unaff_x19[0x7f];
            FUN_024c910c(lVar21,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
            plVar40 = (long *)unaff_x19[0x5c];
            if (plVar40 == (long *)0x0) goto LAB_02491464;
            (**(code **)(*plVar40 + 0x7d8))(plVar40,0,0,*(undefined8 *)(*plVar40 + 0x7e0));
            *(undefined1 *)(unaff_x19 + 0x5e) = 1;
          }
LAB_0248ca1c:
          uVar14 = uVar15;
          in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
        }
        else {
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          in_stack_00001788 = FUN_024d66ec();
          if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
            lVar21 = *in_stack_00000150;
            if ((lVar21 == 0) || (lVar39 = *(long *)(lVar21 + 0x38), lVar39 == 0))
            goto LAB_02491464;
            if (*(uint *)(lVar39 + 0x18) <= *in_stack_00000148)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            fVar46 = *(float *)(unaff_x19 + 0x9a);
            fVar43 = 0.0;
            if ((0.0 < fVar46) && (fVar43 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
              fVar43 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
            }
            fVar43 = fStack00000000000000c8 * *(float *)(unaff_x19 + 0x56) +
                     *(float *)(lVar39 + (int)*in_stack_00000148 * unaff_x21 + 0x154) +
                     (fVar43 - *(float *)((long)unaff_x19 + 0x4c4)) +
                     fStack0000000000000054 *
                     (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4));
          }
          else {
            lVar21 = unaff_x19[0x6c];
            *(undefined1 *)((long)unaff_x19 + 700) = 1;
            if (lVar21 == 0) goto LAB_02491464;
            fVar46 = *(float *)(unaff_x19 + 0x9a);
            fVar43 = *(float *)(unaff_x19 + 0x57) +
                     fStack00000000000000c8 * *(float *)(unaff_x19 + 0x56);
          }
          puVar5 = System_Threading_Mutex_TypeInfo;
          lVar21 = *(long *)(lVar21 + 0x38);
          if (lVar21 == 0) goto LAB_02491464;
          uVar34 = *(uint *)((long)unaff_x19 + 0x48c);
          if ((*(uint *)(lVar21 + 0x18) <= uVar34) ||
             (uVar41 = uVar34 - 1, *(uint *)(lVar21 + 0x18) <= uVar41))
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          uVar15 = (ulong)(uint)(fVar43 + *(float *)(unaff_x19 + 0x96));
          fVar54 = (fVar43 + *(float *)(unaff_x19 + 0x96) + fVar46) -
                   *(float *)(lVar21 + (int)uVar34 * unaff_x21 + 0x158);
          if (((in_stack_00000068._4_1_ & 1) != 0 ||
               *(short *)(lVar21 + (long)(int)uVar41 * (long)iVar38 + 0x20) != 0xad) ||
             ((in_stack_000000a0 <= fVar54 && ((int)unaff_x19[0x5b] != 0)))) {
            if (*(short *)(lVar21 + (int)uVar34 * unaff_x21 + 0x20) == 0xad) {
              in_stack_00000068._4_1_ = 1;
              plVar25 = (long *)System_Threading_Mutex_TypeInfo;
              plVar42 = (long *)StringLiteral_302;
              uVar14 = uVar15;
            }
            else {
              if ((bStack000000000000005c & *(byte *)(unaff_x19 + 0x46) & 1) != 0) {
                fVar46 = *(float *)((long)unaff_x19 + 0x2cc);
                fVar44 = *(float *)(unaff_x19 + 0x59) / 100.0;
                if ((fVar44 <= fVar46) ||
                   ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c))) {
                  fVar43 = *(float *)((long)unaff_x19 + 0x1dc);
                  uVar15 = (ulong)(uint)fVar43;
                  fVar46 = *(float *)(unaff_x19 + 0x49);
                  if ((fVar46 < fVar43) &&
                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) goto LAB_024914c0;
                  goto LAB_0248cc70;
                }
LAB_0249155c:
                fVar49 = fVar48;
                if (0.0 < fVar46) {
                  fVar49 = fVar48 / (1.0 - fVar46);
                }
                fVar46 = fVar46 + (fVar48 - fVar51 * (in_stack_000000d8._4_4_ + DAT_02958218)) /
                                  fVar49;
LAB_0249154c:
                if (fVar44 <= fVar46) {
                  fVar46 = fVar44;
                }
                *(float *)((long)unaff_x19 + 0x2cc) = fVar46;
                return;
              }
LAB_0248cc70:
              lVar21 = *(long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(lVar21 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar21 = *(long *)puVar5;
              }
              iVar9 = *(int *)(*(long *)(lVar21 + 0xb8) + 0xe78);
              if ((((float)iVar9 != fStack0000000000000034) && (iVar9 != -1)) &&
                 (((bStack000000000000005c ^ 1) & 1) == 0)) {
                if (*(int *)(lVar21 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                in_stack_00001788 = FUN_024d66ec();
                if ((unaff_x19[0x6c] == 0) ||
                   (lVar21 = *(long *)(unaff_x19[0x6c] + 0x38), lVar21 == 0)) goto LAB_02491464;
                uVar34 = *in_stack_00000148 - 1;
                if (*(uint *)(lVar21 + 0x18) <= uVar34)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                fStack0000000000000034 = (float)iVar9;
                if (*(short *)(lVar21 + (long)(int)uVar34 * (long)iVar38 + 0x20) == 0xad) {
                  in_stack_00000068._4_1_ = 0;
                  in_stack_000017a8 = CONCAT44(0x2d,uVar34);
                  *in_stack_00000148 = uVar34;
                  plVar25 = (long *)System_Threading_Mutex_TypeInfo;
                  plVar42 = (long *)StringLiteral_302;
                  uVar14 = uVar15;
                  in_stack_00001788 = in_stack_00001788 - 1;
                  goto LAB_0248ab98;
                }
              }
              if (in_stack_000000a0 < fVar54) {
                if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
                  *(undefined4 *)((long)unaff_x19 + 0x2dc) =
                       *(undefined4 *)((long)unaff_x19 + 0x48c);
                }
                plVar42 = (long *)StringLiteral_302;
                plVar25 = (long *)System_Threading_Mutex_TypeInfo;
                if ((char)unaff_x19[0x46] != '\0') {
                  fVar46 = *(float *)(unaff_x19 + 0x58);
                  if ((fVar46 < *(float *)((long)unaff_x19 + 0x2b4)) &&
                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                    fVar51 = *(float *)((long)unaff_x19 + 0x2b4) +
                             ((in_stack_00000018._4_4_ - fVar54) / (float)((int)unaff_x19[0x94] + 1)
                             ) / fStack0000000000000054;
                    if (fVar51 <= fVar46) {
                      fVar51 = fVar46;
                    }
LAB_0248ea5c:
                    *(float *)((long)unaff_x19 + 0x2b4) = fVar51;
                    return;
                  }
                  fVar46 = *(float *)((long)unaff_x19 + 0x2cc);
                  fVar44 = *(float *)(unaff_x19 + 0x59) / 100.0;
                  if ((fVar46 < fVar44) &&
                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) goto LAB_0249155c;
                  fVar43 = *(float *)((long)unaff_x19 + 0x1dc);
                  uVar15 = (ulong)(uint)fVar43;
                  fVar46 = *(float *)(unaff_x19 + 0x49);
                  if ((fVar46 < fVar43) &&
                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) goto LAB_024914c0;
                }
                switch((int)unaff_x19[0x5b]) {
                case 0:
                case 2:
                case 4:
                  FUN_024d7014(fStack0000000000000054,uVar14,fStack00000000000000c8,
                               *(undefined4 *)((long)unaff_x19 + 0x2f4),in_stack_000000c0._4_4_,
                               fStack00000000000000cc,in_stack_000000d8._4_4_,fStack0000000000000048
                              );
                  break;
                case 1:
                  lVar21 = *(long *)System_Threading_Mutex_TypeInfo;
                  if (*(int *)(lVar21 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar21 = *plVar25;
                  }
                  lVar39 = *(long *)(lVar21 + 0xb8);
                  lVar21 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
                  if ((*(byte *)(lVar21 + 0x132) & 1) == 0) {
                    lVar21 = FUN_00d5941c(lVar21);
                  }
                  lVar21 = *(long *)(*(long *)(lVar21 + 0xc0) + 8);
                  if ((*(byte *)(lVar21 + 0x132) & 1) == 0) {
                    lVar21 = FUN_00d5941c();
                  }
                  piVar17 = (int *)thunk_FUN_00d32ed4(lVar39 + 0x11f0,
                                                      *(long *)(lVar21 + 0x80) + 0xa0);
                  if (*piVar17 == 0) {
                    in_stack_00000068._4_1_ = 0;
                    goto LAB_0248e4bc;
                  }
                  lVar21 = *plVar25;
                  if (*(int *)(lVar21 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar21 = *plVar25;
                  }
                  FUN_013b8de4(*(long *)(lVar21 + 0xb8) + 0x11f0,&stack0x00000880,
                               *(undefined8 *)
                                Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                              );
                  memcpy(&stack0x00000fe8,&stack0x00000880,0x378);
                  iVar9 = FUN_024d66ec();
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
                  FUN_024d7014(fStack0000000000000054,uVar14,fStack00000000000000c8,
                               *(undefined4 *)((long)unaff_x19 + 0x2f4),in_stack_000000c0._4_4_,
                               fStack00000000000000cc,in_stack_000000d8._4_4_,fStack0000000000000048
                              );
                  *(undefined4 *)(unaff_x19 + 0x99) = 0;
                  *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                  *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
                  *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
                  break;
                case 6:
                  lVar21 = unaff_x19[0x5c];
                  if (*(int *)(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar14 = FUN_02681b9c(lVar21,0,0);
                  if ((uVar14 & 1) != 0) {
                    plVar40 = (long *)unaff_x19[0x5c];
                    uVar16 = (**(code **)(*unaff_x19 + 0x548))();
                    if (plVar40 == (long *)0x0) goto LAB_02491464;
                    (**(code **)(*plVar40 + 0x558))
                              (plVar40,uVar16,*(undefined8 *)(*plVar40 + 0x560));
                    lVar21 = unaff_x19[0x5c];
                    if (lVar21 == 0) goto LAB_02491464;
                    *(int *)(lVar21 + 0x3f8) = (int)unaff_x19[0x7f];
                    FUN_024c910c(lVar21,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
                    plVar40 = (long *)unaff_x19[0x5c];
                    if (plVar40 == (long *)0x0) goto LAB_02491464;
                    (**(code **)(*plVar40 + 0x7d8))(plVar40,0,0,*(undefined8 *)(*plVar40 + 0x7e0));
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
                plVar25 = (long *)System_Threading_Mutex_TypeInfo;
                plVar42 = (long *)StringLiteral_302;
              }
              else {
                FUN_024d7014(fStack0000000000000054,uVar14,fStack00000000000000c8,
                             *(undefined4 *)((long)unaff_x19 + 0x2f4),in_stack_000000c0._4_4_,
                             fStack00000000000000cc,in_stack_000000d8._4_4_,fStack0000000000000048);
                bStack000000000000005c = 1;
                in_stack_00000068._4_1_ = 0;
                fStack0000000000000058 = 1.4013e-45;
                plVar25 = (long *)System_Threading_Mutex_TypeInfo;
                plVar42 = (long *)StringLiteral_302;
              }
            }
          }
          else {
            in_stack_00000068._4_1_ = 0;
            in_stack_000017a8 = CONCAT44(0x2d,uVar41);
            *in_stack_00000148 = uVar41;
            plVar25 = (long *)System_Threading_Mutex_TypeInfo;
            plVar42 = (long *)StringLiteral_302;
            uVar14 = uVar15;
            in_stack_00001788 = in_stack_00001788 - 1;
          }
        }
      }
      else {
        if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
          *(uint *)((long)unaff_x19 + 0x2dc) = uVar29;
        }
        plVar42 = (long *)StringLiteral_302;
        plVar25 = (long *)System_Threading_Mutex_TypeInfo;
        uVar16 = DAT_02941c08;
        if ((char)unaff_x19[0x46] != '\0') {
          fVar55 = *(float *)(unaff_x19 + 0x58);
          if (((fVar55 < *(float *)((long)unaff_x19 + 0x2b4)) && (0.0 < fVar43)) &&
             (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
            fVar51 = *(float *)((long)unaff_x19 + 0x2b4) +
                     ((in_stack_00000018._4_4_ - fVar54) / (float)(int)unaff_x19[0x94]) /
                     fStack0000000000000054;
            if (fVar51 <= fVar55) {
              fVar51 = fVar55;
            }
            goto LAB_0248ea5c;
          }
          fVar54 = *(float *)((long)unaff_x19 + 0x1dc);
          fVar43 = *(float *)(unaff_x19 + 0x49);
          uVar15 = (ulong)(uint)fVar43;
          if ((fVar43 < fVar54) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
            fVar51 = (fVar54 - *(float *)(unaff_x19 + 0x47)) * 0.5;
            if (fVar51 <= DAT_028aa298) {
              fVar51 = DAT_028aa298;
            }
            fVar49 = (fVar54 - fVar51) * 20.0 + 0.5;
            fVar51 = DAT_02958220;
            if (fVar49 != INFINITY) {
              fVar51 = (float)(int)fVar49 / 20.0;
            }
            if (fVar51 <= fVar43) {
              fVar51 = fVar43;
            }
            *(float *)((long)unaff_x19 + 0x234) = fVar54;
            goto LAB_0248e598;
          }
        }
        switch((int)unaff_x19[0x5b]) {
        case 1:
          lVar21 = *(long *)System_Threading_Mutex_TypeInfo;
          if (*(int *)(lVar21 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar21 = *plVar25;
          }
          lVar39 = *(long *)(lVar21 + 0xb8);
          lVar21 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
          if ((*(byte *)(lVar21 + 0x132) & 1) == 0) {
            lVar21 = FUN_00d5941c(lVar21);
          }
          plVar42 = (long *)StringLiteral_302;
          lVar21 = *(long *)(*(long *)(lVar21 + 0xc0) + 8);
          if ((*(byte *)(lVar21 + 0x132) & 1) == 0) {
            lVar21 = FUN_00d5941c();
          }
          piVar17 = (int *)thunk_FUN_00d32ed4(lVar39 + 0x11f0,*(long *)(lVar21 + 0x80) + 0xa0);
          if (*piVar17 == 0) {
LAB_0248e4bc:
            in_stack_000017a8 = DAT_02941c08;
            in_stack_00000148[0] = 0;
            in_stack_00000148[1] = 0;
            uVar14 = uVar15;
            in_stack_00001788 = 0xffffffff;
          }
          else {
            lVar21 = *plVar25;
            if (*(int *)(lVar21 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar21 = *plVar25;
            }
            FUN_013b8de4(*(long *)(lVar21 + 0xb8) + 0x11f0,&stack0x00000880,
                         *(undefined8 *)
                          Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                        );
            memcpy(&stack0x00001360,&stack0x00000880,0x378);
LAB_0248c8f4:
            iVar9 = FUN_024d66ec();
LAB_0248c900:
            iVar11 = *(int *)((long)unaff_x19 + 0x48c) + -1;
            *(int *)((long)unaff_x19 + 0x48c) = iVar11;
            in_stack_00000140._4_4_ = in_stack_00000140._4_4_ + 1;
            uVar14 = uVar15;
            in_stack_00001788 = iVar9 - 1;
            in_stack_000017a8 = CONCAT44(0x2026,iVar11);
          }
          goto LAB_0248ab98;
        default:
          goto switchD_0248c274_caseD_2;
        case 3:
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
LAB_0248c524:
          plVar42 = (long *)StringLiteral_302;
          in_stack_00001788 = FUN_024d66ec();
          break;
        case 5:
          if ((uVar29 == 0) || ((int)in_stack_00001788 < 0)) {
            *in_stack_00000148 = 0;
            plVar25 = (long *)System_Threading_Mutex_TypeInfo;
            plVar42 = (long *)StringLiteral_302;
            uVar14 = uVar15;
            in_stack_00001788 = 0xffffffff;
            in_stack_000017a8 = uVar16;
          }
          else {
            fVar51 = *(float *)(unaff_x19 + 0x98);
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            in_stack_00001788 = FUN_024d66ec();
            if (in_stack_000000a0 < fVar51 - fVar44) break;
            *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
            *(undefined4 *)(unaff_x19 + 0x92) = *(undefined4 *)((long)unaff_x19 + 0x48c);
            uVar14 = *(ulong *)(*(long *)(*plVar25 + 0xb8) + 0x15a8);
            *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
            *(undefined4 *)(unaff_x19 + 0x99) = 0;
            lVar21 = NEON_rev64(uVar14,4);
            unaff_x19[0x98] = lVar21;
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
          plVar42 = (long *)StringLiteral_302;
          lVar21 = unaff_x19[0x5c];
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              );
          }
          uVar14 = FUN_02681b9c(lVar21,0,0);
          if ((uVar14 & 1) != 0) {
            plVar40 = (long *)unaff_x19[0x5c];
            uVar16 = (**(code **)(*unaff_x19 + 0x548))();
            if (plVar40 == (long *)0x0) goto LAB_02491464;
            (**(code **)(*plVar40 + 0x558))(plVar40,uVar16,*(undefined8 *)(*plVar40 + 0x560));
            lVar21 = unaff_x19[0x5c];
            if (lVar21 == 0) goto LAB_02491464;
            *(int *)(lVar21 + 0x3f8) = (int)unaff_x19[0x7f];
            FUN_024c910c(lVar21,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
            plVar40 = (long *)unaff_x19[0x5c];
            if (plVar40 == (long *)0x0) goto LAB_02491464;
            (**(code **)(*plVar40 + 0x7d8))(plVar40,0,0,*(undefined8 *)(*plVar40 + 0x7e0));
            *(undefined1 *)(unaff_x19 + 0x5e) = 1;
          }
        }
LAB_0248c628:
        uVar14 = uVar15;
        in_stack_000017a8 = CONCAT44(3,uVar29);
      }
    }
    else {
      if (((in_stack_000017bc & 0xfffffffe) == 10) && ((int)unaff_x19[0x5b] == 6)) {
        fVar51 = 0.0;
        if ((0.0 < (float)uVar15) && (fVar51 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
          fVar51 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
        }
        uVar14 = (ulong)(uint)in_stack_000000a0;
        if (in_stack_000000a0 <
            (*(float *)(unaff_x19 + 0x96) - (*(float *)((long)unaff_x19 + 0x4c4) - (float)uVar15)) +
            fVar51) {
          if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
            *(uint *)((long)unaff_x19 + 0x2dc) = uVar29;
          }
          plVar42 = (long *)StringLiteral_302;
          plVar25 = (long *)System_Threading_Mutex_TypeInfo;
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          in_stack_00001788 = FUN_024d66ec();
          lVar21 = unaff_x19[0x5c];
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              );
          }
          uVar15 = FUN_02681b9c(lVar21,0,0);
          if ((uVar15 & 1) != 0) {
            plVar40 = (long *)unaff_x19[0x5c];
            uVar16 = (**(code **)(*unaff_x19 + 0x548))();
            if (plVar40 == (long *)0x0) goto LAB_02491464;
            (**(code **)(*plVar40 + 0x558))(plVar40,uVar16,*(undefined8 *)(*plVar40 + 0x560));
            lVar21 = unaff_x19[0x5c];
            if (lVar21 == 0) goto LAB_02491464;
            *(int *)(lVar21 + 0x3f8) = (int)unaff_x19[0x7f];
            FUN_024c910c(lVar21,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
            plVar40 = (long *)unaff_x19[0x5c];
            if (plVar40 == (long *)0x0) goto LAB_02491464;
            (**(code **)(*plVar40 + 0x7d8))(plVar40,0,0,*(undefined8 *)(*plVar40 + 0x7e0));
            *(undefined1 *)(unaff_x19 + 0x5e) = 1;
          }
          in_stack_000017a8 = CONCAT44(3,uVar29);
          goto LAB_0248ab98;
        }
      }
      if ((((in_stack_000017bc - 0x2007 < 0x23) &&
           ((1L << ((ulong)(in_stack_000017bc - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
          (in_stack_000017bc - 10 < 2)) || (in_stack_000017bc == 0xa0)) {
UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ObjectSpawner__get_objectPrefabs:
        if (((in_stack_000017bc != 0xad) && (in_stack_000017bc != 0x200b)) &&
           (in_stack_000017bc != 0x2060)) {
          lVar21 = *in_stack_00000150;
          if ((lVar21 == 0) || (lVar39 = *(long *)(lVar21 + 0x50), lVar39 == 0)) goto LAB_02491464;
          if (*(uint *)(lVar39 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          lVar39 = lVar39 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
          *(int *)(lVar39 + 0x2c) = *(int *)(lVar39 + 0x2c) + 1;
          *(int *)(lVar21 + 0x20) = *(int *)(lVar21 + 0x20) + 1;
        }
      }
      else {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar14 = FUN_016fa418(in_stack_000017bc,0);
        if ((uVar14 & 1) != 0)
        goto 
        UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ObjectSpawner__get_objectPrefabs;
      }
      if (in_stack_000017bc == 0xa0) {
        if ((*in_stack_00000150 == 0) ||
           (lVar21 = *(long *)(*in_stack_00000150 + 0x50), lVar21 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar21 = lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
LAB_0248cf8c:
        *(int *)(lVar21 + 0x20) = *(int *)(lVar21 + 0x20) + 1;
      }
FUN_0248d088:
      if (((int)unaff_x19[0x5b] == 1) && ((in_stack_000017bc == 0x2d || (unaff_w20 != 1)))) {
        if (unaff_x19[0xca] == 0) goto LAB_02491464;
        fVar51 = *(float *)(unaff_x19 + 0x3c);
        iVar9 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
        if (unaff_x19[0xca] == 0) goto LAB_02491464;
        fVar45 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
        lVar21 = unaff_x19[0xc9];
        fVar49 = fStack0000000000000084;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar49 = 1.0;
        }
        if ((lVar21 == 0) || (*(long *)(lVar21 + 0x20) == 0)) goto LAB_02491464;
        fVar46 = *(float *)((long)unaff_x19 + 0x3fc);
        fVar44 = *(float *)(lVar21 + 0x2c);
        fVar48 = (float)FUN_026fd668(*(long *)(lVar21 + 0x20),0);
        fVar43 = *_fStack0000000000000098;
        fVar48 = fVar46 * (fVar51 / (float)iVar9) * fVar45 * fVar49 * fVar44 * fVar48;
        fVar51 = *in_stack_00000088;
        if ((in_stack_000017bc == 10) && (*(int *)((long)unaff_x19 + 0x48c) != (int)unaff_x19[0x92])
           ) {
          if ((*in_stack_00000150 == 0) ||
             (lVar21 = *(long *)(*in_stack_00000150 + 0x38), lVar21 == 0)) goto LAB_02491464;
          uVar29 = *(int *)((long)unaff_x19 + 0x48c) - 1;
          if (*(uint *)(lVar21 + 0x18) <= uVar29)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          if (unaff_x19[0xca] == 0) goto LAB_02491464;
          fVar49 = *(float *)(lVar21 + (long)(int)uVar29 * (long)iVar38 + 0x60);
          iVar9 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
          if (unaff_x19[0xca] == 0) goto LAB_02491464;
          fVar46 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
          lVar21 = unaff_x19[0xc9];
          fVar45 = fStack0000000000000084;
          if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
            fVar45 = 1.0;
          }
          if ((lVar21 == 0) || (*(long *)(lVar21 + 0x20) == 0)) goto LAB_02491464;
          fVar44 = *(float *)((long)unaff_x19 + 0x3fc);
          fVar54 = *(float *)(lVar21 + 0x2c);
          fVar48 = (float)FUN_026fd668(*(long *)(lVar21 + 0x20),0);
          if ((*in_stack_00000150 == 0) ||
             (lVar21 = *(long *)(*in_stack_00000150 + 0x50), lVar21 == 0)) goto LAB_02491464;
          if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          lVar21 = lVar21 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
          fVar43 = *(float *)(lVar21 + 0x60);
          fVar51 = *(float *)(lVar21 + 100);
          fVar48 = fVar44 * (fVar49 / (float)iVar9) * fVar46 * fVar45 * fVar54 * fVar48;
        }
        fVar44 = *(float *)(unaff_x19 + 0x9a);
        fVar45 = *(float *)(unaff_x19 + 0x96);
        fVar54 = *(float *)((long)unaff_x19 + 0x4c4);
        fVar49 = 0.0;
        fVar46 = 0.0;
        if ((0.0 < fVar44) && (fVar46 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
          fVar46 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
        }
        fVar55 = *(float *)(unaff_x19 + 199);
        if ((char)unaff_x19[0x1d] == '\0') {
          if ((unaff_x19[0xc9] == 0) || (lVar21 = *(long *)(unaff_x19[0xc9] + 0x20), lVar21 == 0))
          goto LAB_02491464;
          FUN_026fd62c(&stack0x00000880,lVar21,0);
          unaff_x28[0x1cd] = unaff_x28[1];
          unaff_x28[0x1cc] = *unaff_x28;
          fVar49 = (float)FUN_026fd474(&stack0x000016e0,0);
        }
        puVar5 = System_Threading_Mutex_TypeInfo;
        fVar52 = *(float *)(unaff_x19 + 0x6b);
        fVar51 = (fStack0000000000000090 - fVar43) - fVar51;
        bVar7 = true;
        if ((fVar52 <= fVar51) && (bVar7 = false, !NAN(fVar52))) {
          bVar7 = fVar52 == -1.0;
        }
        if (!bVar7) {
          fVar51 = fVar52;
        }
        fVar43 = _DAT_0294c6e8;
        if ((uVar28 & 0x18) == 0) {
          fVar43 = 1.0;
        }
        if (((fVar45 - (fVar54 - fVar44)) + fVar46 < in_stack_000000a0) &&
           (ABS(fVar55) + fVar48 * fVar49 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) <
            fVar43 * fVar51)) {
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_024d69d4();
          lVar21 = *(long *)(*(long *)puVar5 + 0xb8);
          memcpy(&stack0x00000508,(void *)(lVar21 + 0x788),0x378);
          FUN_013b86dc(lVar21 + 0x11f0,&stack0x00000508,
                       *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__);
        }
      }
      fVar51 = 1.0;
      lVar21 = *in_stack_00000150;
      if ((lVar21 == 0) || (lVar39 = *(long *)(lVar21 + 0x38), lVar39 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar39 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar29 = *(uint *)(unaff_x19 + 0x94);
      lVar39 = lVar39 + (int)*in_stack_00000148 * unaff_x21;
      *(uint *)(lVar39 + 100) = uVar29;
      *(int *)(lVar39 + 0x68) = (int)unaff_x19[0x95];
      if (((unaff_w20 & 1) == 0) &&
         ((0xd < in_stack_000017bc || ((1 << (ulong)(in_stack_000017bc & 0x1f) & 0x2c00U) == 0)))) {
        lVar21 = *(long *)(lVar21 + 0x50);
        if (lVar21 == 0) goto LAB_02491464;
LAB_0248d42c:
        if (*(uint *)(lVar21 + 0x18) <= uVar29)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        *(int *)(lVar21 + (long)(int)uVar29 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
      }
      else {
        lVar21 = *(long *)(lVar21 + 0x50);
        if (lVar21 == 0) goto LAB_02491464;
        if (*(uint *)(lVar21 + 0x18) <= uVar29)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        if (*(int *)(lVar21 + (long)(int)uVar29 * 0x5c + 0x24) == 1) goto LAB_0248d42c;
      }
      if (in_stack_000017bc == 9) {
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar51 = (float)FUN_026fd208(*unaff_x27 + 0x50,0);
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar48 = *(float *)(unaff_x19 + 199);
        fVar49 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x27 + 0x1b9));
        fVar51 = fStack0000000000000118 * fVar51 * fVar49;
        fVar45 = fVar51 * (float)(int)(fVar48 / fVar51);
        uVar14 = (ulong)(uint)fVar45;
        if (fVar45 <= fVar48) {
          fVar45 = fVar48 + fVar51;
        }
LAB_0248d614:
        *(float *)(unaff_x19 + 199) = fVar45;
      }
      else if (*(float *)(unaff_x19 + 0x55) == 0.0) {
        if ((char)unaff_x19[0x1d] == '\0') {
          if (*(char *)((long)unaff_x19 + 0x46c) != '\0') {
            fVar51 = (float)thunk_FUN_026935f0(_uStack0000000000000060,0);
          }
          fVar45 = *(float *)(unaff_x19 + 199);
          fVar48 = (float)FUN_026fd474(&stack0x00001770,0);
          if (unaff_x19[0x1f] != 0) {
            fVar49 = 1.0 - *(float *)((long)unaff_x19 + 0x2cc);
            fVar45 = fVar45 + fVar49 * (*(float *)((long)unaff_x19 + 0x2a4) +
                                       fStack0000000000000118 *
                                       (in_stack_000000b0 + fVar51 * fVar48) +
                                       fStack00000000000000c8 *
                                       (in_stack_000000c0._4_4_ +
                                       fStack00000000000000cc + *(float *)(unaff_x19[0x1f] + 0x1ac))
                                       );
            *(float *)(unaff_x19 + 199) = fVar45;
            goto joined_r0x0248d568;
          }
          goto LAB_02491464;
        }
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar45 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                 (*(float *)((long)unaff_x19 + 0x2a4) +
                 fStack0000000000000118 * in_stack_000000b0 +
                 fStack00000000000000c8 *
                 (in_stack_000000c0._4_4_ + fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac))
                 );
        uVar14 = (ulong)(uint)fVar45;
        fVar45 = *(float *)(unaff_x19 + 199) - fVar45;
        *(float *)(unaff_x19 + 199) = fVar45;
        if ((unaff_w29 != 0) || (in_stack_000017bc == 0x200b)) {
          fVar51 = fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
          uVar14 = (ulong)(uint)fVar51;
          fVar45 = fVar45 - fVar51;
          goto LAB_0248d614;
        }
      }
      else {
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar49 = *(float *)(unaff_x19 + 199);
        fVar45 = fVar49 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                          (*(float *)((long)unaff_x19 + 0x2a4) +
                          (*(float *)(unaff_x19 + 0x55) - fStack0000000000000080) +
                          fStack00000000000000c8 *
                          (fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac)));
        *(float *)(unaff_x19 + 199) = fVar45;
joined_r0x0248d568:
        if ((unaff_w29 != 0) || (uVar14 = (ulong)(uint)fVar49, in_stack_000017bc == 0x200b)) {
          fVar51 = fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
          uVar14 = (ulong)(uint)fVar51;
          fVar45 = fVar45 + fVar51;
          goto LAB_0248d614;
        }
      }
      lVar21 = *in_stack_00000150;
      if ((lVar21 == 0) || (lVar39 = *(long *)(lVar21 + 0x38), lVar39 == 0)) goto LAB_02491464;
      uVar29 = *in_stack_00000148;
      uVar28 = (uint)*(undefined8 *)(lVar39 + 0x18);
      if (uVar28 <= uVar29)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      *(float *)(lVar39 + (int)uVar29 * unaff_x21 + 0x144) = fVar45;
      uVar34 = in_stack_000017bc;
      if ((int)in_stack_000017bc < 0xd) {
        if ((in_stack_000017bc - 10 < 2) || (in_stack_000017bc == 3)) goto LAB_0248d6b8;
LAB_0248d69c:
        if (((unaff_w20 & in_stack_000017bc == 0x2d) != 0) ||
           ((float)uVar29 == in_stack_00000078._4_4_)) goto LAB_0248d6b8;
      }
      else {
        if (1 < in_stack_000017bc - 0x2028) {
          if (in_stack_000017bc != 0xd) goto LAB_0248d69c;
          uVar14 = 0;
          *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
          if ((float)uVar29 != in_stack_00000078._4_4_) goto LAB_0248dc08;
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
            puVar5 = System_Threading_Mutex_TypeInfo;
            lVar21 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar21 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar21 = *(long *)puVar5;
            }
            lVar39 = *(long *)(lVar21 + 0xb8);
            if (*(int *)(lVar39 + 0x7ac) == (int)unaff_x19[0x94]) {
              if (*(int *)(lVar21 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar39 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
              }
              FUN_013b8de4(lVar39 + 0x11f0,&stack0x00000880,
                           *(undefined8 *)
                            Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                          );
              lVar21 = *(long *)System_Threading_Mutex_TypeInfo;
              memcpy((void *)(*(long *)(lVar21 + 0xb8) + 0x788),&stack0x00000880,0x378);
              lVar21 = *(long *)(lVar21 + 0xb8);
              *(float *)(lVar21 + 0x7bc) = fVar51 + *(float *)(lVar21 + 0x7bc);
              *(float *)(lVar21 + 0x800) = fVar51 + *(float *)(lVar21 + 0x800);
              memcpy(&stack0x00000190,(void *)(lVar21 + 0x788),0x378);
              FUN_013b86dc(lVar21 + 0x11f0,&stack0x00000190,
                           *(undefined8 *)
                            Method_System_Collections_Generic_List<TextStyle>_get_Item__);
            }
          }
        }
        fVar45 = *(float *)(unaff_x19 + 0x9a);
        *(undefined1 *)((long)unaff_x19 + 0x334) = 0;
        fVar49 = *(float *)((long)unaff_x19 + 0x4c4) - fVar45;
        fVar51 = *(float *)((long)unaff_x19 + 0x4bc);
        if (fVar49 <= *(float *)((long)unaff_x19 + 0x4bc)) {
          fVar51 = fVar49;
        }
        *(float *)((long)unaff_x19 + 0x4bc) = fVar51;
        fVar48 = *(float *)(unaff_x19 + 0x98);
        if (*(char *)((long)unaff_x28 + 0xf34) == '\0') {
          in_stack_000017b8 = fVar51;
        }
        if ((*(char *)((long)unaff_x19 + 0x32c) != '\0') &&
           (((int)unaff_x19[100] <= *(int *)((long)unaff_x19 + 0x48c) ||
            ((int)unaff_x19[0x65] <= (int)unaff_x19[0x94])))) {
          *(undefined1 *)((long)unaff_x28 + 0xf34) = 1;
        }
        lVar21 = *in_stack_00000150;
        if ((lVar21 == 0) || (lVar39 = *(long *)(lVar21 + 0x50), lVar39 == 0)) goto LAB_02491464;
        uVar29 = *(uint *)(unaff_x19 + 0x94);
        if (*(uint *)(lVar39 + 0x18) <= uVar29)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar31 = lVar39 + (long)(int)uVar29 * 0x5c;
        *(int *)(lVar31 + 0x34) = (int)unaff_x19[0x92];
        iVar9 = (int)unaff_x19[0x92];
        if ((int)unaff_x19[0x92] <= *(int *)((long)unaff_x19 + 0x494)) {
          iVar9 = *(int *)((long)unaff_x19 + 0x494);
        }
        *(int *)((long)unaff_x19 + 0x494) = iVar9;
        *(int *)(lVar31 + 0x38) = iVar9;
        *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x48c);
        *(undefined4 *)(lVar31 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x48c);
        iVar9 = *(int *)((long)unaff_x19 + 0x494);
        if (*(int *)((long)unaff_x19 + 0x494) <= *(int *)((long)unaff_x19 + 0x49c)) {
          iVar9 = *(int *)((long)unaff_x19 + 0x49c);
        }
        *(int *)((long)unaff_x19 + 0x49c) = iVar9;
        *(int *)(lVar31 + 0x40) = iVar9;
        *(int *)(lVar31 + 0x24) = (*(int *)(lVar31 + 0x3c) - *(int *)(lVar31 + 0x34)) + 1;
        *(undefined4 *)(lVar31 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
        lVar21 = *(long *)(lVar21 + 0x38);
        if (lVar21 == 0) goto LAB_02491464;
        if (*(uint *)(lVar21 + 0x18) <= *(uint *)((long)unaff_x19 + 0x494))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        uVar57 = *(undefined4 *)
                  (lVar21 + (int)*(uint *)((long)unaff_x19 + 0x494) * unaff_x21 + 0x11c);
        lVar39 = lVar39 + (long)(int)uVar29 * 0x5c;
        *(float *)(lVar39 + 0x70) = fVar49;
        *(undefined4 *)(lVar39 + 0x6c) = uVar57;
        lVar21 = *in_stack_00000150;
        if ((lVar21 == 0) || (lVar39 = *(long *)(lVar21 + 0x50), lVar39 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar39 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar21 = *(long *)(lVar21 + 0x38);
        if (lVar21 == 0) goto LAB_02491464;
        if (*(uint *)(lVar21 + 0x18) <= *(uint *)((long)unaff_x19 + 0x49c))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fVar48 = fVar48 - fVar45;
        lVar39 = lVar39 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
        *(undefined4 *)(lVar39 + 0x74) =
             *(undefined4 *)(lVar21 + (int)*(uint *)((long)unaff_x19 + 0x49c) * unaff_x21 + 0x128);
        *(float *)(lVar39 + 0x78) = fVar48;
        lVar21 = *in_stack_00000150;
        if ((lVar21 == 0) || (lVar31 = *(long *)(lVar21 + 0x50), lVar31 == 0)) goto LAB_02491464;
        lVar13 = (long)(int)*(uint *)(unaff_x19 + 0x94);
        if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar39 = lVar31 + lVar13 * 0x5c;
        *(float *)(lVar39 + 0x44) =
             *(float *)(lVar39 + 0x74) - fStack0000000000000118 * in_stack_00000130._4_4_;
        *(float *)(lVar39 + 0x5c) = in_stack_000000d8._4_4_;
        if (*(int *)(lVar39 + 0x24) == 1) {
          *(int *)(lVar31 + lVar13 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
        }
        if ((*unaff_x27 == 0) || (lVar39 = *(long *)(lVar21 + 0x38), lVar39 == 0))
        goto LAB_02491464;
        lVar33 = (long)(int)*(uint *)((long)unaff_x19 + 0x49c);
        uVar28 = (uint)*(undefined8 *)(lVar39 + 0x18);
        if (uVar28 <= *(uint *)((long)unaff_x19 + 0x49c))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        if ((*(char *)(lVar39 + lVar33 * unaff_x21 + 0x194) == '\0') &&
           (lVar33 = (long)(int)*(uint *)(unaff_x19 + 0x93), uVar28 <= *(uint *)(unaff_x19 + 0x93)))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fVar45 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                 (fStack00000000000000c8 *
                  (in_stack_000000c0._4_4_ + fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac)
                  ) - *(float *)((long)unaff_x19 + 0x2a4));
        fVar51 = -fVar45;
        if ((char)unaff_x19[0x1d] != '\0') {
          fVar51 = fVar45;
        }
        lVar31 = lVar31 + lVar13 * 0x5c;
        *(float *)(lVar31 + 0x58) = *(float *)(lVar39 + lVar33 * unaff_x21 + 0x144) + fVar51;
        fVar51 = *(float *)(unaff_x19 + 0x9a);
        *(float *)(lVar31 + 0x48) = fStack0000000000000050 + (fVar48 - fVar49);
        *(float *)(lVar31 + 0x4c) = fVar48;
        uVar14 = (ulong)(uint)(0.0 - fVar51);
        *(float *)(lVar31 + 0x50) = 0.0 - fVar51;
        *(float *)(lVar31 + 0x54) = fVar49;
        plVar25 = (long *)System_Threading_Mutex_TypeInfo;
        if ((int)in_stack_000017bc < 0x2d) {
          if (in_stack_000017bc - 10 < 2) {
LAB_0248dad8:
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            plVar42 = (long *)StringLiteral_302;
            FUN_024d69d4();
            lVar21 = unaff_x19[0x6c];
            *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
            iVar9 = (int)unaff_x19[0x94] + 1;
            *(int *)(unaff_x19 + 0x94) = iVar9;
            *(int *)(unaff_x19 + 0x92) = *(int *)((long)unaff_x19 + 0x48c) + 1;
            if ((lVar21 != 0) && (*(long *)(lVar21 + 0x50) != 0)) {
              if (*(int *)(*(long *)(lVar21 + 0x50) + 0x18) <= iVar9) {
                FUN_024d6e60();
                lVar21 = unaff_x19[0x6c];
                if (lVar21 == 0) goto LAB_02491464;
              }
              lVar21 = *(long *)(lVar21 + 0x38);
              if (lVar21 != 0) {
                if (*in_stack_00000148 < *(uint *)(lVar21 + 0x18)) {
                  fVar51 = *(float *)(lVar21 + (int)*in_stack_00000148 * unaff_x21 + 0x154);
                  if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
                    fVar49 = 0.0;
                    if ((in_stack_000017bc == 0x2029) || (in_stack_000017bc == 10)) {
                      fVar49 = *(float *)((long)unaff_x19 + 0x2c4);
                    }
                    uVar19 = 0;
                    fVar49 = *(float *)(unaff_x19 + 0x9a) +
                             fVar51 + (0.0 - *(float *)((long)unaff_x19 + 0x4c4)) +
                             fStack0000000000000054 *
                             (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4)) +
                             fStack00000000000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar49);
                  }
                  else {
                    if ((in_stack_000017bc == 0x2029) || (fVar49 = 0.0, in_stack_000017bc == 10)) {
                      fVar49 = *(float *)((long)unaff_x19 + 0x2c4);
                    }
                    uVar19 = 1;
                    fVar49 = *(float *)(unaff_x19 + 0x9a) +
                             *(float *)(unaff_x19 + 0x57) +
                             fStack00000000000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar49);
                  }
                  *(float *)(unaff_x19 + 0x9a) = fVar49;
                  *(undefined1 *)((long)unaff_x19 + 700) = uVar19;
                  lVar21 = *plVar25;
                  if (*(int *)(lVar21 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar21 = *plVar25;
                  }
                  uVar16 = *(undefined8 *)(*(long *)(lVar21 + 0xb8) + 0x15a8);
                  *(float *)(unaff_x19 + 0x99) = fVar51;
                  uVar14 = NEON_rev64(uVar16,4);
                  unaff_x19[0x98] = uVar14;
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
            uVar34 = 3;
          }
        }
        else if ((in_stack_000017bc - 0x2028 < 2) || (in_stack_000017bc == 0x2d)) goto LAB_0248dad8;
      }
LAB_0248dc08:
      uVar29 = *in_stack_00000148;
      if (uVar28 <= uVar29)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (*(char *)(lVar39 + (int)uVar29 * unaff_x21 + 0x194) != '\0') {
        lVar39 = lVar39 + (int)uVar29 * unaff_x21;
        uVar15 = *(ulong *)(lVar39 + 0x11c);
        uVar14 = *(ulong *)(in_stack_00000070 + 0x230);
        *(ulong *)(in_stack_00000070 + 0x230) =
             uVar15 ^ (uVar15 ^ uVar14) &
                      CONCAT44(-(uint)((float)(uVar14 >> 0x20) < (float)(uVar15 >> 0x20)),
                               -(uint)((float)uVar14 < (float)uVar15));
        uVar15 = *(ulong *)(in_stack_00000070 + 0x238);
        uVar14 = *(ulong *)(lVar39 + 0x128);
        *(ulong *)(in_stack_00000070 + 0x238) =
             uVar14 ^ (uVar14 ^ uVar15) &
                      CONCAT44(-(uint)((float)(uVar14 >> 0x20) < (float)(uVar15 >> 0x20)),
                               -(uint)((float)uVar14 < (float)uVar15));
      }
      if (((int)unaff_x19[0x5b] == 5) &&
         ((0xd < uVar34 || ((1 << (ulong)(uVar34 & 0x1f) & 0x2c00U) == 0)))) {
        lVar39 = *(long *)(lVar21 + 0x58);
        if (lVar39 == 0) goto LAB_02491464;
        iVar9 = (int)unaff_x19[0x95] + 1;
        if (*(int *)(lVar39 + 0x18) < iVar9) {
          if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01147c08((long *)(lVar21 + 0x58),iVar9,1,
                       *(undefined8 *)
                        Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerMove__);
          lVar21 = *in_stack_00000150;
          if (lVar21 == 0) goto LAB_02491464;
        }
        lVar39 = *(long *)(lVar21 + 0x58);
        if (lVar39 == 0) goto LAB_02491464;
        uVar28 = *(uint *)(unaff_x19 + 0x95);
        lVar31 = (long)(int)uVar28;
        uVar29 = *(uint *)(lVar39 + 0x18);
        if (uVar29 <= uVar28)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar13 = lVar39 + lVar31 * 0x14;
        fVar49 = *(float *)(lVar13 + 0x30);
        uVar14 = (ulong)(uint)fVar49;
        *(undefined4 *)(lVar13 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
        fVar51 = *(float *)((long)unaff_x19 + 0x4bc);
        if (fVar49 <= *(float *)((long)unaff_x19 + 0x4bc)) {
          fVar51 = fVar49;
        }
        *(float *)(lVar13 + 0x30) = fVar51;
        uVar34 = *(uint *)((long)unaff_x19 + 0x48c);
        if (uVar34 == 0 && uVar28 == 0) {
          *(uint *)(lVar39 + lVar31 * 0x14 + 0x20) = uVar34;
        }
        else {
          uVar41 = uVar34 - 1;
          if (0 < (int)uVar34) {
            lVar21 = *(long *)(lVar21 + 0x38);
            if (lVar21 == 0) goto LAB_02491464;
            if (*(uint *)(lVar21 + 0x18) <= uVar41)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            if (uVar28 != *(uint *)(lVar21 + (long)(int)uVar41 * (long)iVar38 + 0x68)) {
              if (uVar28 - 1 < uVar29) {
                *(uint *)(lVar39 + 0x20 + (long)(int)(uVar28 - 1) * 0x14 + 4) = uVar41;
                *(uint *)(lVar39 + 0x20 + lVar31 * 0x14) = uVar34;
                goto LAB_0248dc84;
              }
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            }
          }
          if ((float)uVar34 == in_stack_00000078._4_4_) {
            *(float *)(lVar39 + lVar31 * 0x14 + 0x24) = in_stack_00000078._4_4_;
          }
        }
      }
LAB_0248dc84:
      plVar25 = (long *)System_Threading_Mutex_TypeInfo;
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
                (uVar15 = FUN_024e95f0(0), (uVar15 & 1) != 0)) &&
               ((((0xed < in_stack_000017bc - 0xff01 && (0x1d < in_stack_000017bc - 0xfe31)) &&
                 (0x717d < in_stack_000017bc - 0x2e81)) && (0x1fd < in_stack_000017bc - 0xf901))))
            goto LAB_0248ded4;
            lVar21 = FUN_024e94b0(0);
            if ((lVar21 == 0) || (*(long *)(lVar21 + 0x10) == 0)) goto LAB_02491464;
            uVar15 = FUN_0129aa60(*(long *)(lVar21 + 0x10),&stack0x00000880,
                                  *(undefined8 *)
                                   System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                                 );
            if ((int)*in_stack_00000148 < (int)in_stack_00000078._4_4_) {
              lVar21 = FUN_024e94b0(0);
              if (((lVar21 == 0) || (*in_stack_00000150 == 0)) ||
                 (lVar39 = *(long *)(*in_stack_00000150 + 0x38), lVar39 == 0)) goto LAB_02491464;
              if (*(uint *)(lVar39 + 0x18) <= *in_stack_00000148 + 1)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              if (*(long *)(lVar21 + 0x18) == 0) goto LAB_02491464;
              in_stack_00000880 =
                   (uint)*(ushort *)
                          (lVar39 + (long)(int)(*in_stack_00000148 + 1) * (long)iVar38 + 0x20);
              uVar18 = FUN_0129aa60(*(long *)(lVar21 + 0x18),&stack0x00000880,
                                    *(undefined8 *)
                                     System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                                   );
              if ((uVar15 & 1) != 0) goto LAB_0248e0dc;
              if ((uVar18 & 1) == 0) goto LAB_0248e1b0;
              plVar25 = (long *)System_Threading_Mutex_TypeInfo;
              if ((bStack000000000000005c & 1) == 0) {
                bStack000000000000005c = 0;
                goto LAB_0248e168;
              }
            }
            else {
              in_stack_00000880 = in_stack_000017bc;
              if ((uVar15 & 1) == 0) {
LAB_0248e1b0:
                plVar25 = (long *)System_Threading_Mutex_TypeInfo;
                if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                FUN_024d69d4();
                bStack000000000000005c = 0;
                goto LAB_0248e168;
              }
LAB_0248e0dc:
              plVar25 = (long *)System_Threading_Mutex_TypeInfo;
              if (uVar10 != uVar24 || ((bStack000000000000005c ^ 0xff) & 1) != 0) goto LAB_0248e168;
            }
joined_r0x0248e0fc:
            System_Threading_Mutex_TypeInfo = (undefined *)plVar25;
            if (unaff_w29 != 0) {
LAB_0248e100:
              plVar25 = (long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              FUN_024d69d4();
            }
            if (*(int *)(*plVar25 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_024d69d4();
            bStack000000000000005c = 1;
          }
          else {
LAB_0248ded4:
            plVar25 = (long *)System_Threading_Mutex_TypeInfo;
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
          *(undefined4 *)(*(long *)(*plVar25 + 0xb8) + 0xe78) = 0xffffffff;
        }
      }
LAB_0248e168:
      if (*(int *)(*plVar25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar42 = (long *)StringLiteral_302;
      FUN_024d69d4();
      *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
    }
LAB_0248ab98:
    do {
      fVar51 = 1.0;
      in_stack_00001788 = in_stack_00001788 + 1;
      lVar21 = unaff_x19[0x8e];
      if (lVar21 == 0) goto LAB_02491464;
      if ((int)*(uint *)(lVar21 + 0x18) <= (int)in_stack_00001788) {
LAB_0248e4dc:
        fVar51 = (float)uVar14;
        if (((char)unaff_x19[0x46] != '\0') &&
           (fVar51 = DAT_02956ccc,
           DAT_02956ccc < *(float *)((long)unaff_x19 + 0x234) - *(float *)(unaff_x19 + 0x47))) {
          fVar51 = *(float *)((long)unaff_x19 + 0x1dc);
          fVar49 = *(float *)((long)unaff_x19 + 0x24c);
          if ((fVar51 < fVar49) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
            if (*(float *)((long)unaff_x19 + 0x2cc) < *(float *)(unaff_x19 + 0x59) / 100.0) {
              *(undefined4 *)((long)unaff_x19 + 0x2cc) = 0;
            }
            fVar45 = (*(float *)((long)unaff_x19 + 0x234) - fVar51) * 0.5;
            if (fVar45 <= DAT_028aa298) {
              fVar45 = DAT_028aa298;
            }
            *(float *)(unaff_x19 + 0x47) = fVar51;
            fVar45 = (fVar51 + fVar45) * 20.0 + 0.5;
            fVar51 = DAT_02958220;
            if (fVar45 != INFINITY) {
              fVar51 = (float)(int)fVar45 / 20.0;
            }
            if (fVar49 <= fVar51) {
              fVar51 = fVar49;
            }
            goto LAB_0248e598;
          }
        }
        *(undefined1 *)((long)unaff_x19 + 0x244) = 1;
        if ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c)) {
          uVar16 = FUN_0176eb1c(_fStack0000000000000038,0);
          uVar12 = FUN_017840ac(in_stack_00000040,0);
          uVar16 = FUN_0160073c(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlah_s16__
                                ,uVar16,*(undefined8 *)
                                         Method_UnityEngine_GameObject_GetComponents<Component>__,
                                uVar12,0);
          if (*(int *)(*plVar42 + 0xe0) == 0) {
            thunk_FUN_00d32864(*plVar42);
          }
          FUN_02660dac(uVar16,0);
        }
        puVar5 = Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__;
        if ((*in_stack_00000148 == 0) || ((*in_stack_00000148 == 1 && (uVar59 == 3)))) {
          (**(code **)(*unaff_x19 + 0x958))();
          lVar21 = *(long *)puVar5;
          goto LAB_02491474;
        }
        lVar21 = *plVar25;
        if (*(int *)(lVar21 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar21 = *plVar25;
        }
        plVar25 = (long *)PTR_DAT_033ed410;
        lVar21 = **(long **)(lVar21 + 0xb8);
        if (lVar21 == 0) goto LAB_02491464;
        if (*(uint *)(lVar21 + 0x18) <= *(uint *)(unaff_x19 + 0xd0))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        iVar38 = *(int *)(lVar21 + (long)(int)*(uint *)(unaff_x19 + 0xd0) * 0x38 + 0x54) << 2;
        if ((*in_stack_00000150 == 0) ||
           (lVar21 = *(long *)(*in_stack_00000150 + 0x60), lVar21 == 0)) goto LAB_02491464;
        if (*(int *)(*(long *)PTR_DAT_033ed410 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (*(int *)(lVar21 + 0x18) == 0)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        FUN_024e7d94(lVar21 + 0x20,0,0);
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        iVar9 = (int)unaff_x19[0x4d];
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
        lVar21 = unaff_x19[0xea];
        in_stack_00000088 = (float *)in_stack_000000b8;
        fStack0000000000000090 = in_stack_000000c0._4_4_;
        if (iVar9 < 0x401) {
          if (iVar9 == 0x100) {
            if (lVar21 == 0) goto LAB_02491464;
            if (*(uint *)(lVar21 + 0x18) < 2)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            uVar16 = *(undefined8 *)(lVar21 + 0x30);
            if ((int)unaff_x19[0x5b] == 5) {
              if ((*in_stack_00000150 == 0) ||
                 (lVar39 = *(long *)(*in_stack_00000150 + 0x58), lVar39 == 0)) goto LAB_02491464;
              if (*(uint *)(lVar39 + 0x18) <= uStack0000000000000030)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              fVar51 = *(float *)(lVar39 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
            }
            else {
              fVar51 = *(float *)(unaff_x19 + 0x96);
            }
            fStack0000000000000090 = fStack000000000000002c + 0.0 + *(float *)(lVar21 + 0x2c);
            fVar51 = (0.0 - fVar51) - fStack0000000000000020;
          }
          else if (iVar9 == 0x200) {
            if (lVar21 == 0) goto LAB_02491464;
            if ((*(int *)(lVar21 + 0x18) == 1) || (*(int *)(lVar21 + 0x18) == 0))
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            fStack0000000000000090 = (*(float *)(lVar21 + 0x20) + *(float *)(lVar21 + 0x2c)) * 0.5;
            uVar16 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar21 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar21 + 0x30) >> 0x20)) * 0.5,
                              ((float)*(undefined8 *)(lVar21 + 0x24) +
                              (float)*(undefined8 *)(lVar21 + 0x30)) * 0.5);
            if ((int)unaff_x19[0x5b] == 5) {
              if ((*in_stack_00000150 == 0) ||
                 (lVar21 = *(long *)(*in_stack_00000150 + 0x58), lVar21 == 0)) goto LAB_02491464;
              if (*(uint *)(lVar21 + 0x18) <= uStack0000000000000030)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              lVar21 = lVar21 + (long)(int)uStack0000000000000030 * 0x14;
              fStack0000000000000090 = fStack000000000000002c + 0.0 + fStack0000000000000090;
              fVar51 = ((fStack0000000000000020 + *(float *)(lVar21 + 0x28) +
                        *(float *)(lVar21 + 0x30)) - fStack0000000000000024) * -0.5 + 0.0;
            }
            else {
              fStack0000000000000090 = fStack000000000000002c + 0.0 + fStack0000000000000090;
              fVar51 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x96) + in_stack_000017b8)
                       - fStack0000000000000024) * -0.5 + 0.0;
            }
          }
          else {
            if (iVar9 != 0x400) goto LAB_0248eb64;
            if (lVar21 == 0) goto LAB_02491464;
            if (*(int *)(lVar21 + 0x18) == 0)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            uVar16 = *(undefined8 *)(lVar21 + 0x24);
            if ((int)unaff_x19[0x5b] == 5) {
              if ((*in_stack_00000150 == 0) ||
                 (lVar39 = *(long *)(*in_stack_00000150 + 0x58), lVar39 == 0)) goto LAB_02491464;
              if (*(uint *)(lVar39 + 0x18) <= uStack0000000000000030)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              in_stack_000017b8 =
                   *(float *)(lVar39 + (long)(int)uStack0000000000000030 * 0x14 + 0x30);
            }
            fStack0000000000000090 = fStack000000000000002c + 0.0 + *(float *)(lVar21 + 0x20);
            fVar51 = fStack0000000000000024 + (0.0 - in_stack_000017b8);
          }
          in_stack_00000088 =
               (float *)CONCAT44((float)((ulong)uVar16 >> 0x20) + 0.0,(float)uVar16 + fVar51);
        }
        else if (iVar9 == 0x800) {
          if (lVar21 == 0) goto LAB_02491464;
          if ((*(int *)(lVar21 + 0x18) == 1) || (*(int *)(lVar21 + 0x18) == 0))
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          fVar51 = ((float)*(undefined8 *)(lVar21 + 0x24) + (float)*(undefined8 *)(lVar21 + 0x30)) *
                   0.5;
          fStack0000000000000090 =
               fStack000000000000002c + 0.0 +
               (*(float *)(lVar21 + 0x20) + *(float *)(lVar21 + 0x2c)) * 0.5;
          in_stack_00000088 =
               (float *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar21 + 0x24) >> 0x20) +
                                 (float)((ulong)*(undefined8 *)(lVar21 + 0x30) >> 0x20)) * 0.5 + 0.0
                                 ,fVar51 + 0.0);
        }
        else {
          if (iVar9 == 0x1000) {
            if (lVar21 == 0) goto LAB_02491464;
            if ((*(int *)(lVar21 + 0x18) == 1) || (*(int *)(lVar21 + 0x18) == 0))
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            fVar51 = (float)*(undefined8 *)(lVar21 + 0x24) + (float)*(undefined8 *)(lVar21 + 0x30);
            fVar49 = (float)((ulong)*(undefined8 *)(lVar21 + 0x24) >> 0x20) +
                     (float)((ulong)*(undefined8 *)(lVar21 + 0x30) >> 0x20);
            fStack0000000000000020 =
                 fStack0000000000000020 + *(float *)(unaff_x19 + 0x9c) +
                 *(float *)(unaff_x19 + 0x9b);
            fStack0000000000000090 =
                 fStack000000000000002c + 0.0 +
                 (*(float *)(lVar21 + 0x20) + *(float *)(lVar21 + 0x2c)) * 0.5;
          }
          else {
            if (iVar9 != 0x2000) goto LAB_0248eb64;
            if (lVar21 == 0) goto LAB_02491464;
            if ((*(int *)(lVar21 + 0x18) == 1) || (*(int *)(lVar21 + 0x18) == 0))
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            fVar51 = (float)*(undefined8 *)(lVar21 + 0x24) + (float)*(undefined8 *)(lVar21 + 0x30);
            fVar49 = (float)((ulong)*(undefined8 *)(lVar21 + 0x24) >> 0x20) +
                     (float)((ulong)*(undefined8 *)(lVar21 + 0x30) >> 0x20);
            fStack0000000000000020 = *(float *)((long)unaff_x19 + 0x4b4) - fStack0000000000000020;
            fStack0000000000000090 =
                 fStack000000000000002c + 0.0 +
                 (*(float *)(lVar21 + 0x20) + *(float *)(lVar21 + 0x2c)) * 0.5;
          }
          fVar51 = fVar51 * 0.5;
          in_stack_00000088 =
               (float *)CONCAT44(fVar49 * 0.5 + 0.0,
                                 fVar51 + (0.0 - (fStack0000000000000020 - fStack0000000000000024) *
                                                 0.5));
        }
LAB_0248eb64:
        lVar21 = FUN_0249b7f8();
        if (lVar21 == 0) goto LAB_02491464;
        FUN_026a125c(lVar21,0);
        __x = DAT_028aa048;
        *(float *)((long)unaff_x19 + 0x6dc) = fVar51;
        dVar47 = modf(__x,(double *)&stack0x00000880);
        puVar5 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
        if (dVar47 == 0.5) {
          fVar49 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
          if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
            fVar49 = fVar49 + 1.0;
          }
        }
        else {
          fVar49 = 255.0;
        }
        dVar47 = modf(__x,(double *)&stack0x00000880);
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
        modf(__x,(double *)&stack0x00000880);
        modf(__x,(double *)&stack0x00000880);
        modf(__x,(double *)&stack0x00000880);
        modf(__x,(double *)&stack0x00000880);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (DAT_037825d3 == '\0') {
          thunk_FUN_00d48444(Unity_AI_Navigation_NavMeshLink_TypeInfo);
          DAT_037825d3 = '\x01';
        }
        puVar5 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
        lVar21 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
        if (*(int *)(lVar21 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar21 = *(long *)puVar5;
        }
        puVar22 = *(undefined4 **)(lVar21 + 0xb8);
        UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
                  (*puVar22,puVar22[1],puVar22[2],puVar22[3],&stack0x00001790,0x4000ffff,0);
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar21 = *in_stack_00000150;
        if (lVar21 == 0) goto LAB_02491464;
        uVar10 = *in_stack_00000148;
        if ((int)uVar10 < 1) {
          iStack00000000000000a4 = 0;
          iVar38 = 0;
          plVar42 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
          goto LAB_02491068;
        }
        lVar21 = *(long *)(lVar21 + 0x38);
        if (lVar21 == 0) goto LAB_02491464;
        bVar8 = false;
        fStack00000000000000e4 = 0.0;
        bVar4 = false;
        bVar6 = false;
        iStack00000000000000a4 = 0;
        fStack0000000000000024 = 0.0;
        bVar7 = false;
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
             (int)fVar49 & 0xffU | ((int)fVar45 & 0xffU) << 8 | ((int)fVar48 & 0xffU) << 0x10 |
             (int)fVar46 << 0x18;
        fVar45 = 0.0;
        fVar49 = 0.0;
        _in_stack_00000128 = 0x2e0;
        fStack0000000000000098 = fStack00000000000000a8;
        in_stack_000000a0 = fStack00000000000000ac;
        fStack000000000000004c = fStack00000000000000ac;
        fStack0000000000000050 = (float)uStack0000000000000094;
        in_stack_00000078._4_4_ = fStack00000000000000a8;
        in_stack_00000068._4_4_ = fStack00000000000000ac;
        uStack0000000000000060 = uStack0000000000000094;
        uVar24 = 0;
        uVar29 = 1;
        goto LAB_0248ef74;
      }
      if (*(uint *)(lVar21 + 0x18) <= in_stack_00001788)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      in_stack_000017bc = *(uint *)(lVar21 + (long)(int)in_stack_00001788 * 0xc + 0x20);
      if (in_stack_000017bc == 0) goto LAB_0248e4dc;
      if (5 < in_stack_00000140._4_4_) {
        uVar16 = FUN_0176eb1c(&stack0x000017bc,0);
        uVar12 = FUN_0176eb1c(&stack0x00001788,0);
        uVar16 = FUN_0160073c(*(undefined8 *)UnityEngine_Rendering_Universal_DebugValidationMode_var
                              ,uVar16,*(undefined8 *)
                                       Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                              ,uVar12,0);
        if (*(int *)(*plVar42 + 0xe0) == 0) {
          thunk_FUN_00d32864(*plVar42);
        }
        FUN_026610e4(uVar16,0);
        in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
      }
      if ((*(char *)((long)unaff_x19 + 0x2fa) == '\0') || (in_stack_000017bc != 0x3c)) {
        if ((*in_stack_00000150 == 0) ||
           (lVar21 = *(long *)(*in_stack_00000150 + 0x38), lVar21 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar21 + 0x18) <= *in_stack_00000148)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar21 = lVar21 + (int)*in_stack_00000148 * unaff_x21;
        *(undefined4 *)((long)unaff_x19 + 0x63c) = *(undefined4 *)(lVar21 + 0x2c);
        *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar21 + 0x58);
        unaff_x19[0x1f] = *(long *)(lVar21 + 0x38);
      }
      else {
        *(undefined1 *)((long)unaff_x19 + 0x429) = 1;
        *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
        uVar15 = FUN_024d0688();
        if (((uVar15 & 1) != 0) &&
           (in_stack_00001788 = in_stack_0000176c, uVar59 = in_stack_000017bc,
           *(int *)((long)unaff_x19 + 0x63c) == 0)) goto LAB_0248ab98;
      }
      if ((unaff_x19[0x6c] == 0) || (lVar21 = *(long *)(unaff_x19[0x6c] + 0x38), lVar21 == 0))
      goto LAB_02491464;
      uVar10 = *in_stack_00000148;
      if (*(uint *)(lVar21 + 0x18) <= uVar10)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar31 = (long)(int)uVar10;
      cVar20 = *(char *)(lVar21 + lVar31 * unaff_x21 + 0x5c);
      *(undefined1 *)((long)unaff_x19 + 0x429) = 0;
      lVar39 = unaff_x19[0x23];
      if ((uint)in_stack_000017a8 == uVar10) {
        in_stack_000017bc = (uint)((ulong)in_stack_000017a8 >> 0x20);
        unaff_w20 = 1;
        *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
        if (in_stack_000017bc == 0x2026) {
          lVar13 = unaff_x19[0xc9];
          lVar21 = lVar21 + lVar31 * unaff_x21;
          *(undefined4 *)(lVar21 + 0x2c) = 0;
          *(long *)(lVar21 + 0x30) = lVar13;
          *(long *)(lVar21 + 0x38) = unaff_x19[0xca];
          *(long *)(lVar21 + 0x50) = unaff_x19[0xcb];
          *(int *)(lVar21 + 0x58) = (int)unaff_x19[0xcc];
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
          in_stack_000017a8 = CONCAT44(3,uVar10 + 1);
        }
        else if (in_stack_000017bc == 3) {
          if ((*unaff_x27 == 0) || (lVar13 = FUN_024b11ac(*unaff_x27,0), lVar13 == 0))
          goto LAB_02491464;
          in_stack_00000bf8 = 3;
          FUN_01299bc0(lVar13,&stack0x00000bf8,&stack0x00000880,*(undefined8 *)PTR_DAT_033ef3c8);
          if (*(uint *)(lVar21 + 0x18) <= uVar10)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          unaff_w20 = 1;
          *(ulong *)(lVar21 + lVar31 * unaff_x21 + 0x30) =
               CONCAT44(in_stack_00000884,in_stack_00000880);
          uVar10 = *(uint *)((long)unaff_x19 + 0x48c);
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        }
      }
      else {
        unaff_w20 = 0;
      }
      plVar25 = (long *)System_Threading_Mutex_TypeInfo;
      if (((int)uVar10 < *(int *)((long)unaff_x19 + 0x31c)) && (in_stack_000017bc != 3)) {
        if ((*in_stack_00000150 == 0) ||
           (lVar21 = *(long *)(*in_stack_00000150 + 0x38), lVar21 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar21 + 0x18) <= uVar10)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar21 = lVar21 + (long)(int)uVar10 * (long)iVar38;
        *(undefined1 *)(lVar21 + 0x194) = 0;
        *(undefined2 *)(lVar21 + 0x20) = 0x200b;
        *(undefined4 *)(lVar21 + 100) = 0;
        *in_stack_00000148 = uVar10 + 1;
        uVar59 = in_stack_000017bc;
        goto LAB_0248ab98;
      }
      iVar9 = *(int *)((long)unaff_x19 + 0x63c);
      in_stack_00000100 = fVar51;
      if (iVar9 == 0) {
        uVar10 = *(uint *)((long)unaff_x19 + 0x254);
        if ((uVar10 >> 4 & 1) == 0) {
          if ((uVar10 >> 3 & 1) == 0) {
            if ((uVar10 >> 5 & 1) != 0) {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar15 = FUN_016f92d4(in_stack_000017bc,0);
              if ((uVar15 & 1) != 0) {
                if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar10 = FUN_016f95a8(in_stack_000017bc,0);
                in_stack_000017bc = uVar10 & 0xffff;
                in_stack_00000100 = fStack0000000000000028;
              }
            }
          }
          else {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar15 = FUN_016f9218(in_stack_000017bc,0);
            if ((uVar15 & 1) != 0) {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar10 = FUN_016f9724(in_stack_000017bc,0);
              goto LAB_0248af70;
            }
          }
        }
        else {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar15 = FUN_016f92d4(in_stack_000017bc,0);
          in_stack_00000100 = 1.0;
          if ((uVar15 & 1) != 0) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar10 = FUN_016f95a8(in_stack_000017bc,0);
LAB_0248af70:
            in_stack_000017bc = uVar10 & 0xffff;
            in_stack_00000100 = 1.0;
          }
        }
        iVar9 = *(int *)((long)unaff_x19 + 0x63c);
        if (iVar9 == 0) goto LAB_0248af84;
LAB_0248abc8:
        if (iVar9 != 1) {
          lVar21 = *in_stack_00000150;
          fVar51 = 0.0;
          if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
            fVar51 = fStack0000000000000118;
          }
          in_stack_00000138 = 0.0;
          if (lVar21 == 0) goto LAB_02491464;
          in_stack_00000128 = 0.0;
          in_stack_00000120 = 0.0;
          in_stack_000000d0 = fStack0000000000000118;
          goto LAB_0248b39c;
        }
        if ((*in_stack_00000150 == 0) ||
           (lVar21 = *(long *)(*in_stack_00000150 + 0x38), lVar21 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar21 + 0x18) <= *in_stack_00000148)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar21 = lVar21 + (int)*in_stack_00000148 * unaff_x21;
        lVar31 = *(long *)(lVar21 + 0x40);
        unaff_x19[0xd2] = lVar31;
        *(undefined4 *)((long)unaff_x19 + 0x69c) = *(undefined4 *)(lVar21 + 0x48);
        if ((lVar31 == 0) || (lVar21 = FUN_024ebfa0(lVar31,0), lVar21 == 0)) goto LAB_02491464;
        FUN_0132138c(lVar21,*(undefined4 *)((long)unaff_x19 + 0x69c),&stack0x00000880,
                     *(undefined8 *)System_Func<KeyValuePair<int,_int>,_int>_TypeInfo);
        puVar5 = System_Threading_Mutex_TypeInfo;
        lVar31 = CONCAT44(in_stack_00000884,in_stack_00000880);
        plVar25 = (long *)System_Threading_Mutex_TypeInfo;
        uVar59 = in_stack_000017bc;
        if (lVar31 != 0) {
          if (in_stack_000017bc == 0x3c) {
            in_stack_000017bc = *(int *)((long)unaff_x19 + 0x69c) + 0xe000;
          }
          else {
            lVar21 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar21 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar21 = *(long *)puVar5;
            }
            *(undefined4 *)((long)unaff_x19 + 0x1b4) =
                 *(undefined4 *)(*(long *)(lVar21 + 0xb8) + 0x68);
          }
          if (unaff_x19[0x1f] == 0) goto LAB_02491464;
          fVar49 = *(float *)(unaff_x19 + 0x3c);
          memmove(&stack0x00001700,(void *)(unaff_x19[0x1f] + 0x50),0x60);
          iVar9 = FUN_026fd110(&stack0x00001700,0);
          if (*unaff_x27 == 0) goto LAB_02491464;
          memmove(&stack0x00001700,(void *)(*unaff_x27 + 0x50),0x60);
          fVar48 = (float)FUN_026fd120(&stack0x00001700,0);
          fVar45 = fStack0000000000000084;
          if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
            fVar45 = 1.0;
          }
          if (unaff_x19[0xd2] == 0) goto LAB_02491464;
          fVar45 = (fVar49 / (float)iVar9) * fVar48 * fVar45;
          iVar9 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
          fVar49 = *(float *)(unaff_x19 + 0x3c);
          if (iVar9 < 1) {
            if (*unaff_x27 == 0) goto LAB_02491464;
            iVar9 = FUN_026fd110(*unaff_x27 + 0x50,0);
            if (*unaff_x27 == 0) goto LAB_02491464;
            fVar48 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
            in_stack_00000120 = fStack0000000000000084;
            if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
              in_stack_00000120 = fVar51;
            }
            if (unaff_x19[0x1f] == 0) goto LAB_02491464;
            fVar51 = (float)FUN_026fd140(unaff_x19[0x1f] + 0x50,0);
            if (*(long *)(lVar31 + 0x20) == 0) goto LAB_02491464;
            FUN_026fd62c(&stack0x00000880,*(long *)(lVar31 + 0x20),0);
            unaff_x28[0x1cd] = unaff_x28[1];
            unaff_x28[0x1cc] = *unaff_x28;
            fVar46 = (float)FUN_026fd45c(&stack0x000016e0,0);
            if (*(long *)(lVar31 + 0x20) == 0) goto LAB_02491464;
            fVar43 = *(float *)(lVar31 + 0x2c);
            fVar44 = (float)FUN_026fd668(*(long *)(lVar31 + 0x20),0);
            if (*unaff_x27 == 0) goto LAB_02491464;
            in_stack_00000128 = (float)FUN_026fd140(*unaff_x27 + 0x50,0);
            if (*unaff_x27 == 0) goto LAB_02491464;
            fVar54 = (float)FUN_026fd170(*unaff_x27 + 0x50,0);
            if (*unaff_x27 == 0) goto LAB_02491464;
            fVar55 = *(float *)((long)unaff_x19 + 0x3fc);
            in_stack_00000138 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
            if (unaff_x19[0x1f] == 0) goto LAB_02491464;
            in_stack_00000138 = fVar45 * fVar54 * fVar55 * in_stack_00000138;
            in_stack_00000120 = (fVar49 / (float)iVar9) * fVar48 * in_stack_00000120;
            in_stack_000000d0 = in_stack_00000120 * (fVar51 / fVar46) * fVar43 * fVar44;
            in_stack_00000120 = in_stack_00000120 / in_stack_000000d0;
            in_stack_00000128 = in_stack_00000120 * in_stack_00000128;
            fVar51 = (float)FUN_026fd180(unaff_x19[0x1f] + 0x50,0);
            in_stack_00000120 = in_stack_00000120 * fVar51;
          }
          else {
            if (unaff_x19[0xd2] == 0) goto LAB_02491464;
            iVar9 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
            if (unaff_x19[0xd2] == 0) goto LAB_02491464;
            fVar51 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
            if (*(long *)(lVar31 + 0x20) == 0) goto LAB_02491464;
            fVar46 = *(float *)(lVar31 + 0x2c);
            fVar48 = fStack0000000000000084;
            if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
              fVar48 = 1.0;
            }
            fVar43 = (float)FUN_026fd668(*(long *)(lVar31 + 0x20),0);
            if (unaff_x19[0xd2] == 0) goto LAB_02491464;
            in_stack_00000128 = (float)FUN_026fd140(unaff_x19[0xd2] + 0x48,0);
            if (unaff_x19[0xd2] == 0) goto LAB_02491464;
            fVar44 = (float)FUN_026fd170(unaff_x19[0xd2] + 0x48,0);
            if (unaff_x19[0xd2] == 0) goto LAB_02491464;
            fVar54 = *(float *)((long)unaff_x19 + 0x3fc);
            in_stack_00000138 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
            if (unaff_x19[0xd2] == 0) goto LAB_02491464;
            in_stack_00000138 = fVar45 * fVar44 * fVar54 * in_stack_00000138;
            in_stack_000000d0 = (fVar49 / (float)iVar9) * fVar51 * fVar48 * fVar46 * fVar43;
            in_stack_00000120 = (float)FUN_026fd180(unaff_x19[0xd2] + 0x48,0);
          }
          lVar21 = unaff_x19[0x6c];
          unaff_x19[200] = lVar31;
          if ((lVar21 == 0) || (lVar31 = *(long *)(lVar21 + 0x38), lVar31 == 0)) goto LAB_02491464;
          if (*(uint *)(lVar31 + 0x18) <= *in_stack_00000148)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          lVar31 = lVar31 + (int)*in_stack_00000148 * unaff_x21;
          *(undefined4 *)(lVar31 + 0x2c) = 1;
          *(float *)(lVar31 + 0x160) = in_stack_000000d0;
          in_stack_00000130._4_4_ = 0.0;
          *(long *)(lVar31 + 0x40) = unaff_x19[0xd2];
          *(long *)(lVar31 + 0x38) = unaff_x19[0x1f];
          *(int *)(lVar31 + 0x58) = (int)unaff_x19[0x23];
          *(int *)(unaff_x19 + 0x23) = (int)lVar39;
          goto LAB_0248b384;
        }
        goto LAB_0248ab98;
      }
      if (iVar9 != 0) goto LAB_0248abc8;
LAB_0248af84:
      if ((*in_stack_00000150 == 0) || (lVar21 = *(long *)(*in_stack_00000150 + 0x38), lVar21 == 0))
      goto LAB_02491464;
      uVar24 = *in_stack_00000148;
      uVar10 = *(uint *)(lVar21 + 0x18);
      if (uVar10 <= uVar24)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar39 = *(long *)(lVar21 + (int)uVar24 * unaff_x21 + 0x30);
      unaff_x19[200] = lVar39;
      plVar25 = (long *)System_Threading_Mutex_TypeInfo;
      uVar59 = in_stack_000017bc;
    } while (lVar39 == 0);
    lVar31 = lVar21 + (int)uVar24 * unaff_x21;
    lVar39 = *(long *)(lVar31 + 0x38);
    unaff_x19[0x1f] = lVar39;
    unaff_x19[0x22] = *(long *)(lVar31 + 0x50);
    *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar31 + 0x58);
    if (unaff_w20 == 0) {
LAB_0248b014:
      if (lVar39 == 0) goto LAB_02491464;
      fVar49 = *(float *)(unaff_x19 + 0x3c);
      iVar9 = FUN_026fd110(lVar39 + 0x50,0);
      lVar21 = unaff_x19[0x1f];
    }
    else {
      lVar31 = unaff_x19[0x8e];
      if (lVar31 == 0) goto LAB_02491464;
      if (*(uint *)(lVar31 + 0x18) <= in_stack_00001788)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if ((*(int *)(lVar31 + (long)(int)in_stack_00001788 * 0xc + 0x20) != 10) ||
         (uVar24 == *(uint *)(unaff_x19 + 0x92))) goto LAB_0248b014;
      if (uVar10 <= uVar24 - 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (lVar39 == 0) goto LAB_02491464;
      fVar49 = *(float *)(lVar21 + (long)(int)(uVar24 - 1) * (long)iVar38 + 0x60);
      iVar9 = FUN_026fd110(lVar39 + 0x50,0);
      lVar21 = *unaff_x27;
    }
    if (lVar21 == 0) goto LAB_02491464;
    fVar48 = (float)FUN_026fd120(lVar21 + 0x50,0);
    fVar45 = fStack0000000000000084;
    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
      fVar45 = fVar51;
    }
    in_stack_00000120 = 0.0;
    in_stack_00000128 = 0.0;
    if ((unaff_w20 & in_stack_000017bc == 0x2026) == 0) {
      if (*unaff_x27 == 0) goto LAB_02491464;
      in_stack_00000128 = (float)FUN_026fd140(*unaff_x27 + 0x50,0);
      if (*unaff_x27 == 0) goto LAB_02491464;
      in_stack_00000120 = (float)FUN_026fd180(*unaff_x27 + 0x50,0);
    }
    lVar21 = unaff_x19[200];
    if ((lVar21 == 0) || (*(long *)(lVar21 + 0x20) == 0)) goto LAB_02491464;
    fVar51 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar46 = *(float *)(lVar21 + 0x2c);
    in_stack_000000d0 = (float)FUN_026fd668(*(long *)(lVar21 + 0x20),0);
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar43 = (float)FUN_026fd170(*unaff_x27 + 0x50,0);
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar44 = *(float *)((long)unaff_x19 + 0x3fc);
    in_stack_00000138 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
    lVar21 = unaff_x19[0x6c];
    if ((lVar21 == 0) || (lVar39 = *(long *)(lVar21 + 0x38), lVar39 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar39 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar39 = lVar39 + (int)*in_stack_00000148 * unaff_x21;
    *(undefined4 *)(lVar39 + 0x2c) = 0;
    fVar45 = ((in_stack_00000100 * fVar49) / (float)iVar9) * fVar48 * fVar45;
    in_stack_000000d0 = fVar45 * fVar51 * fVar46 * in_stack_000000d0;
    *(float *)(lVar39 + 0x160) = in_stack_000000d0;
    uVar10 = *(uint *)(unaff_x19 + 0x23);
    in_stack_00000138 = fVar45 * fVar43 * fVar44 * in_stack_00000138;
    if (uVar10 == 0) {
      in_stack_00000130._4_4_ = *(float *)(unaff_x19 + 0xc2);
    }
    else {
      lVar39 = unaff_x19[0xe0];
      if (lVar39 == 0) goto LAB_02491464;
      if (*(uint *)(lVar39 + 0x18) <= uVar10)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar39 = *(long *)(lVar39 + (long)(int)uVar10 * 8 + 0x20);
      if (lVar39 == 0) goto LAB_02491464;
      in_stack_00000130._4_4_ = *(float *)(lVar39 + 0x4c);
    }
LAB_0248b384:
    fVar51 = 0.0;
    if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
      fVar51 = in_stack_000000d0;
    }
LAB_0248b39c:
    lVar21 = *(long *)(lVar21 + 0x38);
    if (lVar21 == 0) goto LAB_02491464;
    if (*(uint *)(lVar21 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar21 = lVar21 + (int)*in_stack_00000148 * unaff_x21;
    *(short *)(lVar21 + 0x20) = (short)in_stack_000017bc;
    *(int *)(lVar21 + 0x60) = (int)unaff_x19[0x3c];
    *(undefined4 *)(lVar21 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4e4);
    if ((unaff_x19[0x6c] == 0) || (lVar21 = *(long *)(unaff_x19[0x6c] + 0x38), lVar21 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar21 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(int *)(lVar21 + (int)*in_stack_00000148 * unaff_x21 + 0x168) = (int)unaff_x19[0x2a];
    if ((unaff_x19[0x6c] == 0) || (lVar21 = *(long *)(unaff_x19[0x6c] + 0x38), lVar21 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar21 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(undefined4 *)(lVar21 + (int)*in_stack_00000148 * unaff_x21 + 0x170) =
         *(undefined4 *)((long)unaff_x19 + 0x154);
    if ((unaff_x19[0x6c] == 0) || (lVar21 = *(long *)(unaff_x19[0x6c] + 0x38), lVar21 == 0))
    goto LAB_02491464;
    uVar10 = *in_stack_00000148;
    FUN_013b78b8(in_stack_000000b8,&stack0x00000880,
                 *(undefined8 *)TMPro_TMP_Dropdown_OptionData_TypeInfo);
    if (*(uint *)(lVar21 + 0x18) <= uVar10)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    uVar12 = unaff_x28[1];
    uVar16 = *unaff_x28;
    lVar21 = lVar21 + (int)uVar10 * unaff_x21;
    *(undefined4 *)(lVar21 + 0x18c) = in_stack_00000890;
    *(undefined8 *)(lVar21 + 0x184) = uVar12;
    *(undefined8 *)(lVar21 + 0x17c) = uVar16;
    if ((*in_stack_00000150 == 0) || (lVar21 = *(long *)(*in_stack_00000150 + 0x38), lVar21 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar21 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(undefined4 *)(lVar21 + (int)*in_stack_00000148 * unaff_x21 + 400) =
         *(undefined4 *)((long)unaff_x19 + 0x254);
    if ((unaff_x19[200] == 0) || (lVar21 = *(long *)(unaff_x19[200] + 0x20), lVar21 == 0))
    goto LAB_02491464;
    FUN_026fd62c(&stack0x00000bf8,lVar21,0);
    unaff_x28[0x1df] = in_stack_00000c00;
    unaff_x28[0x1de] = CONCAT44(in_stack_00000bfc,in_stack_00000bf8);
    if ((int)in_stack_000017bc < 0x10000) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar10 = FUN_016f68bc(in_stack_000017bc,0);
      unaff_w29 = uVar10 & 1;
    }
    else {
      unaff_w29 = 0;
    }
    fStack00000000000000cc = *(float *)(unaff_x19 + 0x54);
    *(undefined4 *)((long)unaff_x19 + 0x2f4) = 0;
    if (*(char *)((long)unaff_x19 + 0x2f1) == '\0') {
      in_stack_000000b0 = 0.0;
      fVar45 = 0.0;
      fVar49 = 0.0;
    }
    else {
      if (unaff_x19[200] == 0) goto LAB_02491464;
      uVar24 = *in_stack_00000148;
      uVar10 = *(uint *)(unaff_x19[200] + 0x28);
      if ((int)uVar24 < (int)in_stack_00000078._4_4_) {
        if ((*in_stack_00000150 == 0) ||
           (lVar21 = *(long *)(*in_stack_00000150 + 0x38), lVar21 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar21 + 0x18) <= uVar24 + 1)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar21 = *(long *)(lVar21 + (long)(int)(uVar24 + 1) * (long)iVar38 + 0x30);
        if ((((lVar21 == 0) || (*unaff_x27 == 0)) ||
            (lVar39 = *(long *)(*unaff_x27 + 0x128), lVar39 == 0)) ||
           (lVar39 = *(long *)(lVar39 + 0x18), lVar39 == 0)) goto LAB_02491464;
        in_stack_00000880 = uVar10 | *(int *)(lVar21 + 0x28) << 0x10;
        uVar14 = FUN_0129eff4(lVar39,&stack0x00000880,&stack0x000016d8,
                              *(undefined8 *)
                               Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                             );
        uVar57 = 0;
        if ((uVar14 & 1) == 0) {
          in_stack_000000b0 = 0.0;
          fVar45 = 0.0;
          fVar49 = 0.0;
        }
        else {
          if (in_stack_000016d8 == 0) goto LAB_02491464;
          fVar49 = *(float *)(in_stack_000016d8 + 0x14);
          fVar45 = *(float *)(in_stack_000016d8 + 0x18);
          in_stack_000000b0 = *(float *)(in_stack_000016d8 + 0x1c);
          uVar57 = *(undefined4 *)(in_stack_000016d8 + 0x20);
          if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
            fStack00000000000000cc = 0.0;
          }
        }
        uVar24 = *in_stack_00000148;
      }
      else {
        uVar57 = 0;
        in_stack_000000b0 = 0.0;
        fVar45 = 0.0;
        fVar49 = 0.0;
      }
      if (0 < (int)uVar24) {
        if ((*in_stack_00000150 == 0) ||
           (lVar21 = *(long *)(*in_stack_00000150 + 0x38), lVar21 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar21 + 0x18) <= (uint)((long)(int)uVar24 + -1))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar21 = *(long *)(lVar21 + ((long)(int)uVar24 + -1) * unaff_x21 + 0x30);
        if (((lVar21 == 0) || (*unaff_x27 == 0)) ||
           ((lVar39 = *(long *)(*unaff_x27 + 0x128), lVar39 == 0 ||
            (lVar39 = *(long *)(lVar39 + 0x18), lVar39 == 0)))) goto LAB_02491464;
        in_stack_00000880 = *(uint *)(lVar21 + 0x28) | uVar10 << 0x10;
        uVar14 = FUN_0129eff4(lVar39,&stack0x00000880,&stack0x000016d8,
                              *(undefined8 *)
                               Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                             );
        if ((uVar14 & 1) != 0) {
          if ((in_stack_000016d8 == 0) ||
             (fVar49 = (float)FUN_024bb1bc(fVar49,fVar45,in_stack_000000b0,uVar57,
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
      fVar46 = fVar46 - fVar51 * fVar48 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
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
      fVar43 = (float)FUN_026fd464(&stack0x00001770,0);
      fStack0000000000000080 =
           (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
           (fVar48 * 0.5 - fVar51 * (fVar46 * 0.5 + fVar43));
      *(float *)(unaff_x19 + 199) = *(float *)(unaff_x19 + 199) + fStack0000000000000080;
    }
    if (((cVar20 == '\0') && (*(int *)((long)unaff_x19 + 0x63c) == 0)) &&
       ((*(byte *)((long)unaff_x19 + 0x254) & 1) != 0)) {
      lVar21 = unaff_x19[0x22];
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar14 = FUN_02681b9c(lVar21,0,0);
      in_stack_00000110._4_4_ = 0.0;
      if ((uVar14 & 1) != 0) {
        lVar21 = unaff_x19[0x22];
        if (*(int *)(*(long *)
                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar25 = (long *)
                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
        ;
        if (lVar21 == 0) goto LAB_02491464;
        uVar14 = FUN_0267e1d8(lVar21,*(undefined4 *)
                                      (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                + 0xb8) + 0x54),0);
        if ((uVar14 & 1) != 0) {
          lVar21 = unaff_x19[0x22];
          if (*(int *)(*plVar25 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            plVar25 = (long *)
                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
            ;
          }
          if (lVar21 == 0) goto LAB_02491464;
          fVar48 = (float)FUN_0267f610(lVar21,*(undefined4 *)(*(long *)(*plVar25 + 0xb8) + 0x54),0);
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
      lVar21 = unaff_x19[0x22];
      if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                  0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar14 = FUN_02681b9c(lVar21,0,0);
      in_stack_000000c0._4_4_ = 0.0;
      if ((uVar14 & 1) != 0) {
        lVar21 = unaff_x19[0x22];
        if (*(int *)(*(long *)
                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar25 = (long *)
                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
        ;
        if (lVar21 == 0) goto LAB_02491464;
        uVar14 = FUN_0267e1d8(lVar21,*(undefined4 *)
                                      (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                + 0xb8) + 0x54),0);
        if ((uVar14 & 1) != 0) {
          lVar21 = unaff_x19[0x22];
          if (*(int *)(*plVar25 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            plVar25 = (long *)
                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
            ;
          }
          if (lVar21 == 0) goto LAB_02491464;
          uVar14 = FUN_0267e1d8(lVar21,*(undefined4 *)(*(long *)(*plVar25 + 0xb8) + 0xcc),0);
          if ((uVar14 & 1) != 0) {
            lVar21 = unaff_x19[0x22];
            if (*(int *)(*plVar25 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              plVar25 = (long *)
                        Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
              ;
            }
            if (lVar21 != 0) {
              fVar48 = (float)FUN_0267f610(lVar21,*(undefined4 *)(*(long *)(*plVar25 + 0xb8) + 0x54)
                                           ,0);
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
    fVar46 = fVar46 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                      fVar51 * (fVar49 + ((fVar48 - in_stack_00000130._4_4_) -
                                         in_stack_00000110._4_4_));
    fVar49 = (float)FUN_026fd46c(&stack0x00001770,0);
    unaff_s14 = *(float *)((long)unaff_x19 + 0x614) +
                ((in_stack_00000138 + fVar51 * (fVar45 + in_stack_00000130._4_4_ + fVar49)) -
                *(float *)(unaff_x19 + 0x9a));
    fVar49 = (float)FUN_026fd45c(&stack0x00001770,0);
    unaff_s10 = unaff_s14 - fVar51 * (in_stack_00000130._4_4_ + in_stack_00000130._4_4_ + fVar49);
    fVar49 = (float)FUN_026fd454(&stack0x00001770,0);
    param_4 = fVar46 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                       fVar51 * (in_stack_00000110._4_4_ + in_stack_00000110._4_4_ +
                                in_stack_00000130._4_4_ + in_stack_00000130._4_4_ + fVar49);
    fVar49 = fVar46;
    unaff_s8 = param_4;
    if (((*(int *)((long)unaff_x19 + 0x63c) == 0) && (cVar20 == '\0')) &&
       ((*(byte *)((long)unaff_x19 + 0x254) >> 1 & 1) != 0)) {
      fVar48 = (float)(int)unaff_x19[0xbd] * fStack000000000000004c;
      fVar49 = (float)FUN_026fd46c(&stack0x00001770,0);
      fVar43 = fVar48 * fVar51 * (in_stack_00000110._4_4_ + in_stack_00000130._4_4_ + fVar49);
      fVar49 = (float)FUN_026fd46c(&stack0x00001770,0);
      fVar45 = (float)FUN_026fd45c(&stack0x00001770,0);
      unaff_s14 = unaff_s14 + 0.0;
      unaff_s10 = unaff_s10 + 0.0;
      fVar48 = fVar48 * fVar51 * (((fVar49 - fVar45) - in_stack_00000130._4_4_) -
                                 in_stack_00000110._4_4_);
      fVar45 = param_4 + fVar43;
      fVar49 = fVar46 + fVar43;
      fVar43 = (fVar43 - fVar48) * 0.5;
      fVar46 = (fVar46 + fVar48) - fVar43;
      param_4 = (param_4 + fVar48) - fVar43;
      fVar49 = fVar49 - fVar43;
      unaff_s8 = fVar45 - fVar43;
    }
    _fStack0000000000000118 = (ulong)(uint)fVar51;
    unaff_x25 = in_stack_00000150;
    unaff_x26 = in_stack_00000148;
    if (*(char *)((long)unaff_x19 + 0x46c) == '\0') goto LAB_0248bc34;
    thunk_FUN_026935f0(_uStack0000000000000060,0);
    fVar54 = (unaff_s8 + fVar46) * 0.5;
    fVar55 = (unaff_s10 + unaff_s14) * 0.5;
    fVar43 = unaff_s14 - fVar55;
    fStack00000000000000e4 = 0.0;
    fVar51 = fVar43;
    fVar45 = (float)FUN_02692df0(fVar49 - fVar54,_uStack0000000000000060,0);
    fVar51 = fVar55 + fVar51;
    fStack00000000000000e4 = fStack00000000000000e4 + 0.0;
    fVar44 = unaff_s10 - fVar55;
    in_stack_000000e0 = 0.0;
    fVar49 = fVar44;
    fVar48 = (float)FUN_02692df0(fVar46 - fVar54,_uStack0000000000000060,0);
    _uStack00000000000000e8 = CONCAT44(fVar54 + fVar48,fVar54 + fVar45);
    in_stack_000000e0 = in_stack_000000e0 + 0.0;
    fVar49 = fVar55 + fVar49;
    fVar45 = 0.0;
    fVar48 = (float)FUN_02692df0(unaff_s8 - fVar54,_uStack0000000000000060,0);
    unaff_s8 = fVar54 + fVar48;
    unaff_s14 = fVar55 + fVar43;
    fVar45 = fVar45 + 0.0;
    param_1 = 0.0;
    param_4 = (float)FUN_02692df0(param_4 - fVar54,_uStack0000000000000060,0);
    param_4 = fVar54 + param_4;
    unaff_s10 = fVar55 + fVar44;
    param_1 = param_1 + 0.0;
  } while( true );
LAB_0248ef74:
  uVar10 = uVar29 - 1;
  if (*(uint *)(lVar21 + 0x18) <= uVar10)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*in_stack_00000150 == 0) || (lVar39 = *(long *)(*in_stack_00000150 + 0x50), lVar39 == 0))
  goto LAB_02491464;
  lVar13 = (long)(int)uVar10;
  lVar31 = lVar21 + lVar13 * 0x178;
  uVar28 = *(uint *)(lVar31 + 100);
  if (*(uint *)(lVar39 + 0x18) <= uVar28)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar35 = *(long *)(lVar31 + 0x38);
  uVar30 = (uint)*(ushort *)(lVar31 + 0x20);
  lVar33 = (long)(int)uVar28;
  lVar39 = lVar39 + lVar33 * 0x5c;
  uVar59 = *(uint *)(lVar39 + 0x3c);
  uVar34 = *(uint *)(lVar39 + 0x40);
  lVar31 = (long)(int)uVar34;
  iVar9 = *(int *)(lVar39 + 0x28);
  iVar11 = *(int *)(lVar39 + 0x2c);
  uVar41 = *(uint *)(lVar39 + 0x68);
  fVar53 = *(float *)(lVar39 + 0x5c);
  fVar56 = *(float *)(lVar39 + 0x60);
  iVar2 = *(int *)(lVar39 + 0x20);
  fVar43 = *(float *)(lVar39 + 0x4c);
  fVar54 = *(float *)(lVar39 + 0x54);
  fVar48 = *(float *)(lVar39 + 0x58);
  fVar52 = *(float *)(lVar39 + 0x6c);
  fVar55 = *(float *)(lVar39 + 0x70);
  fVar46 = *(float *)(lVar39 + 0x74);
  fVar44 = *(float *)(lVar39 + 0x78);
  fVar58 = fVar53 + fVar56;
  if ((int)uVar41 < 9) {
    switch(uVar41) {
    case 1:
      if ((char)unaff_x19[0x1d] == '\0') {
        in_stack_000000c0._4_4_ = fVar56 + 0.0;
      }
      else {
        in_stack_000000c0._4_4_ = 0.0 - fVar48;
      }
      break;
    case 2:
LAB_0248f124:
      in_stack_000000c0._4_4_ = (fVar56 + fVar53 * 0.5) - fVar48 * 0.5;
      break;
    default:
      goto switchD_0248f070_caseD_3;
    case 4:
      in_stack_000000c0._4_4_ = fVar58 - fVar48;
      if ((char)unaff_x19[0x1d] != '\0') {
        in_stack_000000c0._4_4_ = fVar58;
      }
      break;
    case 8:
      goto switchD_0248f070_caseD_8;
    }
LAB_0248f194:
    in_stack_000000b8 = 0;
  }
  else if (uVar41 == 0x10) {
switchD_0248f070_caseD_8:
    if (uVar30 < 0xad) {
      if ((uVar30 != 3) && (uVar30 != 10)) goto LAB_0248f0c8;
    }
    else if ((uVar30 != 0xad) && ((uVar30 != 0x200b && (uVar30 != 0x2060)))) {
LAB_0248f0c8:
      if (*(uint *)(lVar21 + 0x18) <= uVar59)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar3 = *(undefined2 *)(lVar21 + (long)(int)uVar59 * 0x178 + 0x20);
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar14 = FUN_016f9f84(uVar3,0);
      if ((uVar14 & 1) == 0) {
        bVar1 = (int)uVar28 < (int)unaff_x19[0x94];
      }
      else {
        bVar1 = false;
      }
      if ((fVar48 <= fVar53) && (!bVar1 && (uVar41 >> 4 & 1) == 0)) {
        in_stack_000000c0._4_4_ = fVar56;
        if ((char)unaff_x19[0x1d] != '\0') {
          in_stack_000000c0._4_4_ = fVar58;
        }
        goto LAB_0248f194;
      }
      if (((uVar29 == 1) || (uVar28 != uVar24)) || (uVar10 == *(uint *)((long)unaff_x19 + 0x31c))) {
        in_stack_000000c0._4_4_ = fVar56;
        if ((char)unaff_x19[0x1d] != '\0') {
          in_stack_000000c0._4_4_ = fVar58;
        }
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        fStack0000000000000024 = (float)FUN_016fa418(uVar30,0);
        in_stack_000000b8 = 0;
      }
      else {
        cVar20 = (char)unaff_x19[0x1d];
        fVar56 = -fVar48;
        if (cVar20 != '\0') {
          fVar56 = fVar48;
        }
        if (*(uint *)(lVar21 + 0x18) <= uVar59)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fVar48 = 1.0;
        iVar11 = (int)*(char *)(lVar21 + (long)(int)uVar59 * 0x178 + 0x194) +
                 (-iVar2 - ((uint)fStack0000000000000024 & 1)) + iVar11 + -1;
        if (0 < iVar11) {
          fVar48 = *(float *)((long)unaff_x19 + 0x2d4);
        }
        if (iVar11 < 1) {
          iVar11 = 1;
        }
        if (uVar30 == 9) {
LAB_02490fe0:
          fVar48 = 1.0 - fVar48;
        }
        else {
          if (uVar30 != 0xa0) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar14 = FUN_016fa418(uVar30,0);
            cVar20 = (char)unaff_x19[0x1d];
            if ((uVar14 & 1) != 0) goto LAB_02490fe0;
          }
          iVar11 = (iVar2 - (~(uint)fStack0000000000000024 & 1)) + iVar9;
        }
        fVar48 = ((fVar53 + fVar56) * fVar48) / (float)iVar11;
        if (cVar20 == '\0') {
          in_stack_000000c0._4_4_ = in_stack_000000c0._4_4_ + fVar48;
          in_stack_000000b8 =
               CONCAT44((float)((ulong)in_stack_000000b8 >> 0x20) + 0.0,
                        (float)in_stack_000000b8 + 0.0);
        }
        else {
          in_stack_000000c0._4_4_ = in_stack_000000c0._4_4_ - fVar48;
        }
      }
    }
  }
  else if (uVar41 == 0x20) {
    fVar48 = fVar52 + fVar46;
    goto LAB_0248f124;
  }
switchD_0248f070_caseD_3:
  uVar41 = (uint)*(undefined8 *)(lVar21 + 0x18);
  if (uVar41 <= uVar10)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar39 = lVar21 + lVar13 * 0x178;
  fVar56 = fStack0000000000000090 + in_stack_000000c0._4_4_;
  fVar48 = SUB84(in_stack_00000088,0) + (float)in_stack_000000b8;
  fVar53 = (float)((ulong)in_stack_00000088 >> 0x20) + (float)((ulong)in_stack_000000b8 >> 0x20);
  plVar42 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(char *)(lVar39 + 0x194) == '\0') goto LAB_0248fabc;
  iVar9 = *(int *)(lVar21 + lVar13 * 0x178 + 0x2c);
  if (iVar9 != 0) goto LAB_0248f808;
  fVar45 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)uVar28,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
  case 0:
    lVar23 = lVar21 + lVar13 * 0x178;
    *(undefined4 *)(lVar23 + 0x84) = 0;
    *(undefined4 *)(lVar23 + 0xac) = 0;
    *(undefined4 *)(lVar23 + 0xd4) = 0x3f800000;
    fVar45 = 1.0;
    break;
  case 1:
    fVar44 = *(float *)(lVar21 + lVar13 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
      lVar23 = lVar21 + lVar13 * 0x178;
      fVar46 = (in_stack_000000c0._4_4_ + fVar44) - *(float *)(in_stack_00000070 + 0x230);
      fVar44 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
      goto LAB_0248f2dc;
    }
    lVar23 = lVar21 + lVar13 * 0x178;
    fVar46 = fVar46 - fVar52;
    *(float *)(lVar23 + 0x84) = fVar45 + (fVar44 - fVar52) / fVar46;
    *(float *)(lVar23 + 0xac) = fVar45 + (*(float *)(lVar23 + 0x98) - fVar52) / fVar46;
    *(float *)(lVar23 + 0xd4) = fVar45 + (*(float *)(lVar23 + 0xc0) - fVar52) / fVar46;
    fVar45 = fVar45 + (*(float *)(lVar23 + 0xe8) - fVar52) / fVar46;
    break;
  case 2:
    lVar23 = lVar21 + lVar13 * 0x178;
    fVar44 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
    fVar46 = (in_stack_000000c0._4_4_ + *(float *)(lVar23 + 0x70)) -
             *(float *)(in_stack_00000070 + 0x230);
LAB_0248f2dc:
    *(float *)(lVar23 + 0x84) = fVar45 + fVar46 / fVar44;
    *(float *)(lVar23 + 0xac) =
         fVar45 + ((in_stack_000000c0._4_4_ + *(float *)(lVar23 + 0x98)) -
                  *(float *)(in_stack_00000070 + 0x230)) /
                  (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
    *(float *)(lVar23 + 0xd4) =
         fVar45 + ((in_stack_000000c0._4_4_ + *(float *)(lVar23 + 0xc0)) -
                  *(float *)(in_stack_00000070 + 0x230)) /
                  (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
    fVar45 = fVar45 + ((in_stack_000000c0._4_4_ + *(float *)(lVar23 + 0xe8)) -
                      *(float *)(in_stack_00000070 + 0x230)) /
                      (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x61]) {
    case 0:
      lVar23 = lVar21 + lVar13 * 0x178;
      *(undefined4 *)(lVar23 + 0x88) = 0;
      *(undefined4 *)(lVar23 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar23 + 0xd8) = 0;
      *(undefined4 *)(lVar23 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar23 = lVar21 + lVar13 * 0x178;
      fVar44 = fVar44 - fVar55;
      fVar46 = fVar45 + (*(float *)(lVar23 + 0x74) - fVar55) / fVar44;
      fVar44 = fVar45 + (*(float *)(lVar23 + 0x9c) - fVar55) / fVar44;
      *(float *)(lVar23 + 0x88) = fVar46;
      *(float *)(lVar23 + 0xb0) = fVar44;
      *(float *)(lVar23 + 0xd8) = fVar46;
      *(float *)(lVar23 + 0x100) = fVar44;
      break;
    case 2:
      lVar23 = lVar21 + lVar13 * 0x178;
      fVar46 = fVar45 + (*(float *)(lVar23 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                        (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
      *(float *)(lVar23 + 0x88) = fVar46;
      fVar44 = *(float *)(unaff_x19 + 0x9b);
      fVar55 = *(float *)(unaff_x19 + 0x9c);
      *(float *)(lVar23 + 0xd8) = fVar46;
      fVar46 = fVar45 + (*(float *)(lVar23 + 0x9c) - fVar44) / (fVar55 - fVar44);
      *(float *)(lVar23 + 0xb0) = fVar46;
      *(float *)(lVar23 + 0x100) = fVar46;
      break;
    case 3:
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
      uVar41 = (uint)*(undefined8 *)(lVar21 + 0x18);
    }
    if (uVar41 <= uVar10)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar23 = lVar21 + lVar13 * 0x178;
    fVar46 = *(float *)(lVar23 + 0x15c);
    fVar44 = (1.0 - (*(float *)(lVar23 + 0x88) + *(float *)(lVar23 + 0xb0)) * fVar46) * 0.5;
    fVar55 = fVar45 + *(float *)(lVar23 + 0x88) * fVar46 + fVar44;
    fVar45 = fVar45 + fVar44 + *(float *)(lVar23 + 0xb0) * fVar46;
    *(float *)(lVar23 + 0x84) = fVar55;
    *(float *)(lVar23 + 0xac) = fVar55;
    *(float *)(lVar23 + 0xd4) = fVar45;
    break;
  default:
    goto switchD_0248f240_default;
  }
  *(float *)(lVar21 + lVar13 * 0x178 + 0xfc) = fVar45;
switchD_0248f240_default:
  switch((int)unaff_x19[0x61]) {
  case 0:
    if (uVar41 <= uVar10)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar23 = lVar21 + lVar13 * 0x178;
    *(undefined4 *)(lVar23 + 0x88) = 0;
    *(undefined4 *)(lVar23 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar23 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar23 + 0x100) = 0;
    break;
  case 1:
    if (uVar10 < uVar41) {
      lVar23 = lVar21 + lVar13 * 0x178;
      fVar43 = fVar43 - fVar54;
      fVar45 = (*(float *)(lVar23 + 0x74) - fVar54) / fVar43;
      fVar43 = (*(float *)(lVar23 + 0x9c) - fVar54) / fVar43;
      *(float *)(lVar23 + 0x88) = fVar45;
      goto LAB_0248f644;
    }
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  case 2:
    if (uVar41 <= uVar10)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar23 = lVar21 + lVar13 * 0x178;
    fVar45 = (*(float *)(lVar23 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
             (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
    *(float *)(lVar23 + 0x88) = fVar45;
    fVar43 = (*(float *)(lVar23 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
             (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
LAB_0248f644:
    *(float *)(lVar23 + 0xb0) = fVar43;
    *(float *)(lVar23 + 0xd8) = fVar43;
    *(float *)(lVar23 + 0x100) = fVar45;
    break;
  case 3:
    if (uVar41 <= uVar10)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar23 = lVar21 + lVar13 * 0x178;
    fVar43 = *(float *)(lVar23 + 0x15c);
    fVar46 = (1.0 - (*(float *)(lVar23 + 0x84) + *(float *)(lVar23 + 0xd4)) / fVar43) * 0.5;
    fVar45 = *(float *)(lVar23 + 0x84) / fVar43 + fVar46;
    fVar46 = fVar46 + *(float *)(lVar23 + 0xd4) / fVar43;
    *(float *)(lVar23 + 0x88) = fVar45;
    *(float *)(lVar23 + 0xb0) = fVar46;
    *(float *)(lVar23 + 0x100) = fVar45;
    *(float *)(lVar23 + 0xd8) = fVar46;
  }
  if (uVar41 <= uVar10)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar23 = lVar21 + lVar13 * 0x178;
  fVar45 = ABS(fVar51) * *(float *)(lVar23 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
  if ((*(char *)(lVar23 + 0x5c) == '\0') && ((*(byte *)(lVar21 + lVar13 * 0x178 + 400) & 1) != 0)) {
    fVar45 = -fVar45;
  }
  lVar23 = lVar21 + lVar13 * 0x178;
  fVar43 = *(float *)(lVar23 + 0x88);
  fVar44 = *(float *)(lVar23 + 0x84);
  fVar46 = -2.1474836e+09;
  if (fVar44 != INFINITY) {
    fVar46 = (float)(int)fVar44;
  }
  fVar55 = *(float *)(lVar23 + 0xd4);
  fVar52 = *(float *)(lVar23 + 0xd8);
  fVar54 = -2.1474836e+09;
  if (fVar43 != INFINITY) {
    fVar54 = (float)(int)fVar43;
  }
  uVar57 = FUN_024e0374(fVar44 - fVar46,fVar43 - fVar54);
  *(undefined4 *)(lVar23 + 0x84) = uVar57;
  if (*(uint *)(lVar21 + 0x18) <= uVar10)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  fVar52 = fVar52 - fVar54;
  *(float *)(lVar23 + 0x88) = fVar45;
  uVar57 = FUN_024e0374(fVar44 - fVar46,fVar52);
  *(undefined4 *)(lVar21 + lVar13 * 0x178 + 0xac) = uVar57;
  if (*(uint *)(lVar21 + 0x18) <= uVar10)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  fVar55 = fVar55 - fVar46;
  *(float *)(lVar21 + lVar13 * 0x178 + 0xb0) = fVar45;
  fVar46 = (float)FUN_024e0374(fVar55,fVar52);
  *(float *)(lVar23 + 0xd4) = fVar46;
  if (*(uint *)(lVar21 + 0x18) <= uVar10)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar23 + 0xd8) = fVar45;
  uVar57 = FUN_024e0374(fVar55,fVar43 - fVar54);
  *(undefined4 *)(lVar21 + lVar13 * 0x178 + 0xfc) = uVar57;
  uVar41 = (uint)*(undefined8 *)(lVar21 + 0x18);
  if (uVar41 <= uVar10)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar21 + lVar13 * 0x178 + 0x100) = fVar45;
LAB_0248f808:
  if (((int)uVar10 < (int)unaff_x19[100]) &&
     (iStack00000000000000a4 < *(int *)((long)unaff_x19 + 0x324))) {
    if (((int)uVar28 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] != 5)) {
      if (uVar41 <= uVar10)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar39 = lVar21 + lVar13 * 0x178;
      *(ulong *)(lVar39 + 0x70) =
           CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar39 + 0x70) >> 0x20),
                    fVar56 + (float)*(undefined8 *)(lVar39 + 0x70));
      *(float *)(lVar39 + 0x78) = fVar53 + *(float *)(lVar39 + 0x78);
      plVar42 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      if (*(uint *)(lVar21 + 0x18) <= uVar10)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar39 = lVar21 + lVar13 * 0x178;
      *(ulong *)(lVar39 + 0x98) =
           CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar39 + 0x98) >> 0x20),
                    fVar56 + (float)*(undefined8 *)(lVar39 + 0x98));
      *(float *)(lVar39 + 0xa0) = fVar53 + *(float *)(lVar39 + 0xa0);
      uVar41 = *(uint *)(lVar21 + 0x18);
LAB_0248fa4c:
      if (uVar41 <= uVar10)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar39 = lVar21 + lVar13 * 0x178;
      *(ulong *)(lVar39 + 0xc0) =
           CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar39 + 0xc0) >> 0x20),
                    fVar56 + (float)*(undefined8 *)(lVar39 + 0xc0));
      *(float *)(lVar39 + 200) = fVar53 + *(float *)(lVar39 + 200);
      if (*(uint *)(lVar21 + 0x18) <= uVar10)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar39 = lVar21 + lVar13 * 0x178;
      *(ulong *)(lVar39 + 0xe8) =
           CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar39 + 0xe8) >> 0x20),
                    fVar56 + (float)*(undefined8 *)(lVar39 + 0xe8));
      *(float *)(lVar39 + 0xf0) = fVar53 + *(float *)(lVar39 + 0xf0);
      if (iVar9 != 0) goto LAB_0248f9d0;
LAB_0248fa9c:
      pcVar27 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0248faa8:
      (*pcVar27)();
      goto LAB_0248fabc;
    }
    if (((int)uVar28 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] == 5)) {
      if (uVar10 < uVar41) {
        if (*(uint *)(lVar21 + lVar13 * 0x178 + 0x68) != uStack0000000000000030) goto LAB_0248f8d8;
        lVar39 = lVar21 + lVar13 * 0x178;
        *(ulong *)(lVar39 + 0x70) =
             CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar39 + 0x70) >> 0x20),
                      fVar56 + (float)*(undefined8 *)(lVar39 + 0x70));
        *(float *)(lVar39 + 0x78) = fVar53 + *(float *)(lVar39 + 0x78);
        if (uVar10 < *(uint *)(lVar21 + 0x18)) {
          lVar39 = lVar21 + lVar13 * 0x178;
          *(ulong *)(lVar39 + 0x98) =
               CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar39 + 0x98) >> 0x20),
                        fVar56 + (float)*(undefined8 *)(lVar39 + 0x98));
          *(float *)(lVar39 + 0xa0) = fVar53 + *(float *)(lVar39 + 0xa0);
          uVar41 = *(uint *)(lVar21 + 0x18);
          plVar42 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
          goto LAB_0248fa4c;
        }
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    }
  }
LAB_0248f8d8:
  if (uVar41 <= uVar10)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if (DAT_03774d76 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03774d76 = '\x01';
  }
  puVar5 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  lVar23 = lVar21 + lVar13 * 0x178;
  uVar57 = *(undefined4 *)
            (*(undefined8 **)
              (*(long *)
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
              0xb8) + 1);
  *(undefined8 *)(lVar23 + 0x70) =
       **(undefined8 **)
         (*(long *)Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
         0xb8);
  *(undefined4 *)(lVar23 + 0x78) = uVar57;
  plVar42 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(uint *)(lVar21 + 0x18) <= uVar10)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar23 = lVar21 + lVar13 * 0x178;
  uVar57 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar5 + 0xb8) + 1);
  *(undefined8 *)(lVar23 + 0x98) = **(undefined8 **)(*(long *)puVar5 + 0xb8);
  *(undefined4 *)(lVar23 + 0xa0) = uVar57;
  if (*(uint *)(lVar21 + 0x18) <= uVar10)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar23 = lVar21 + lVar13 * 0x178;
  uVar57 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar5 + 0xb8) + 1);
  *(undefined8 *)(lVar23 + 0xc0) = **(undefined8 **)(*(long *)puVar5 + 0xb8);
  *(undefined4 *)(lVar23 + 200) = uVar57;
  if (*(uint *)(lVar21 + 0x18) <= uVar10)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar23 = lVar21 + lVar13 * 0x178;
  uVar57 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar5 + 0xb8) + 1);
  *(undefined8 *)(lVar23 + 0xe8) = **(undefined8 **)(*(long *)puVar5 + 0xb8);
  *(undefined4 *)(lVar23 + 0xf0) = uVar57;
  if (*(uint *)(lVar21 + 0x18) <= uVar10)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(undefined1 *)(lVar39 + 0x194) = 0;
  if (iVar9 == 0) goto LAB_0248fa9c;
LAB_0248f9d0:
  if (iVar9 == 1) {
    pcVar27 = *(code **)(*unaff_x19 + 0x8f8);
    goto LAB_0248faa8;
  }
LAB_0248fabc:
  if ((*in_stack_00000150 == 0) || (lVar39 = *(long *)(*in_stack_00000150 + 0x38), lVar39 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar39 + 0x18) <= uVar10)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar39 = lVar39 + lVar13 * 0x178;
  uVar16 = *(undefined8 *)(lVar39 + 0x11c);
  *(undefined8 *)(lVar39 + 0x11c) =
       CONCAT44(fVar48 + (float)((ulong)uVar16 >> 0x20),fVar56 + (float)uVar16);
  *(float *)(lVar39 + 0x124) = fVar53 + *(float *)(lVar39 + 0x124);
  if ((*in_stack_00000150 == 0) || (lVar39 = *(long *)(*in_stack_00000150 + 0x38), lVar39 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar39 + 0x18) <= uVar10)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar39 = lVar39 + lVar13 * 0x178;
  *(ulong *)(lVar39 + 0x110) =
       CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar39 + 0x110) >> 0x20),
                fVar56 + (float)*(undefined8 *)(lVar39 + 0x110));
  *(float *)(lVar39 + 0x118) = fVar53 + *(float *)(lVar39 + 0x118);
  if ((*in_stack_00000150 == 0) || (lVar39 = *(long *)(*in_stack_00000150 + 0x38), lVar39 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar39 + 0x18) <= uVar10)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar39 = lVar39 + lVar13 * 0x178;
  *(ulong *)(lVar39 + 0x128) =
       CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar39 + 0x128) >> 0x20),
                fVar56 + (float)*(undefined8 *)(lVar39 + 0x128));
  *(float *)(lVar39 + 0x130) = fVar53 + *(float *)(lVar39 + 0x130);
  if ((*in_stack_00000150 == 0) || (lVar39 = *(long *)(*in_stack_00000150 + 0x38), lVar39 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar39 + 0x18) <= uVar10)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar39 = lVar39 + lVar13 * 0x178;
  *(float *)(lVar39 + 0x134) = fVar56 + *(float *)(lVar39 + 0x134);
  *(ulong *)(lVar39 + 0x138) =
       CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar39 + 0x138) >> 0x20),
                fVar48 + (float)*(undefined8 *)(lVar39 + 0x138));
  lVar39 = *in_stack_00000150;
  if ((lVar39 == 0) || (lVar23 = *(long *)(lVar39 + 0x38), lVar23 == 0)) goto LAB_02491464;
  uVar41 = *(uint *)(lVar23 + 0x18);
  if (uVar41 <= uVar10)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar36 = lVar23 + lVar13 * 0x178;
  *(ulong *)(lVar36 + 0x140) =
       CONCAT44(fVar56 + (float)((ulong)*(undefined8 *)(lVar36 + 0x140) >> 0x20),
                fVar56 + (float)*(undefined8 *)(lVar36 + 0x140));
  *(ulong *)(lVar36 + 0x148) =
       CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar36 + 0x148) >> 0x20),
                fVar48 + (float)*(undefined8 *)(lVar36 + 0x148));
  *(float *)(lVar36 + 0x150) = fVar48 + *(float *)(lVar36 + 0x150);
  if (uVar28 == uVar24) {
    uVar24 = *in_stack_00000148 - 1;
    if (uVar10 == uVar24) goto LAB_0248fccc;
  }
  else {
    lVar39 = *(long *)(lVar39 + 0x50);
    if (lVar39 == 0) goto LAB_02491464;
    if (*(uint *)(lVar39 + 0x18) <= uVar24)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar36 = (long)(int)uVar24;
    lVar37 = lVar39 + lVar36 * 0x5c;
    fVar46 = fVar48 + *(float *)(lVar37 + 0x54);
    *(ulong *)(lVar37 + 0x4c) =
         CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar37 + 0x4c) >> 0x20),
                  fVar48 + (float)*(undefined8 *)(lVar37 + 0x4c));
    *(float *)(lVar37 + 0x54) = fVar46;
    *(float *)(lVar37 + 0x58) = fVar56 + *(float *)(lVar37 + 0x58);
    if (uVar41 <= *(uint *)(lVar37 + 0x34))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    uVar57 = *(undefined4 *)(lVar23 + (long)(int)*(uint *)(lVar37 + 0x34) * 0x178 + 0x11c);
    lVar39 = lVar39 + lVar36 * 0x5c;
    *(float *)(lVar39 + 0x70) = fVar46;
    *(undefined4 *)(lVar39 + 0x6c) = uVar57;
    lVar39 = *in_stack_00000150;
    if ((lVar39 == 0) || (lVar23 = *(long *)(lVar39 + 0x50), lVar23 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar23 + 0x18) <= uVar24)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar39 = *(long *)(lVar39 + 0x38);
    if (lVar39 == 0) goto LAB_02491464;
    uVar24 = *(uint *)(lVar23 + lVar36 * 0x5c + 0x40);
    if (*(uint *)(lVar39 + 0x18) <= uVar24)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar23 = lVar23 + lVar36 * 0x5c;
    *(undefined4 *)(lVar23 + 0x74) = *(undefined4 *)(lVar39 + (long)(int)uVar24 * 0x178 + 0x128);
    *(undefined4 *)(lVar23 + 0x78) = *(undefined4 *)(lVar23 + 0x4c);
    uVar24 = *in_stack_00000148 - 1;
LAB_0248fccc:
    if (uVar10 == uVar24) {
      lVar39 = *in_stack_00000150;
      if ((lVar39 == 0) || (lVar23 = *(long *)(lVar39 + 0x50), lVar23 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar23 + 0x18) <= uVar28)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar36 = lVar23 + lVar33 * 0x5c;
      fVar46 = fVar48 + *(float *)(lVar36 + 0x54);
      *(ulong *)(lVar36 + 0x4c) =
           CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar36 + 0x4c) >> 0x20),
                    fVar48 + (float)*(undefined8 *)(lVar36 + 0x4c));
      *(float *)(lVar36 + 0x54) = fVar46;
      *(float *)(lVar36 + 0x58) = fVar56 + *(float *)(lVar36 + 0x58);
      lVar39 = *(long *)(lVar39 + 0x38);
      if (lVar39 == 0) goto LAB_02491464;
      if (*(uint *)(lVar39 + 0x18) <= *(uint *)(lVar36 + 0x34))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar57 = *(undefined4 *)(lVar39 + (long)(int)*(uint *)(lVar36 + 0x34) * 0x178 + 0x11c);
      lVar23 = lVar23 + lVar33 * 0x5c;
      *(float *)(lVar23 + 0x70) = fVar46;
      *(undefined4 *)(lVar23 + 0x6c) = uVar57;
      lVar39 = *in_stack_00000150;
      if ((lVar39 == 0) || (lVar23 = *(long *)(lVar39 + 0x50), lVar23 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar23 + 0x18) <= uVar28)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar39 = *(long *)(lVar39 + 0x38);
      if (lVar39 == 0) goto LAB_02491464;
      uVar24 = *(uint *)(lVar23 + lVar33 * 0x5c + 0x40);
      if (*(uint *)(lVar39 + 0x18) <= uVar24)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar23 = lVar23 + lVar33 * 0x5c;
      *(undefined4 *)(lVar23 + 0x74) = *(undefined4 *)(lVar39 + (long)(int)uVar24 * 0x178 + 0x128);
      *(undefined4 *)(lVar23 + 0x78) = *(undefined4 *)(lVar23 + 0x4c);
    }
  }
  if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar14 = FUN_016f9468(uVar30,0);
  if (((((uVar14 & 1) == 0) && (1 < uVar30 - 0x2010)) && (uVar30 != 0xad)) && (uVar30 != 0x2d)) {
    if (bVar7) {
      if (((uVar29 != 1) && ((int)uVar10 < (int)(*(uint *)(lVar21 + 0x18) - 1))) &&
         (((int)uVar10 < (int)*in_stack_00000148 && ((uVar30 == 0x2019 || (uVar30 == 0x27)))))) {
        if (*(uint *)(lVar21 + 0x18) <= uVar29 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        uVar3 = *(undefined2 *)(lVar21 + _in_stack_00000128 + -0x438);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar14 = FUN_016f9468(uVar3,0);
        if ((uVar14 & 1) != 0) {
          if (*(uint *)(lVar21 + 0x18) <= uVar29)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          uVar3 = *(undefined2 *)(lVar21 + _in_stack_00000128 + -0x148);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar14 = FUN_016f9468(uVar3,0);
          if ((uVar14 & 1) != 0) goto LAB_0248fee0;
        }
      }
    }
    else {
      if (uVar29 != 1) {
LAB_024909a0:
        bVar7 = false;
        goto LAB_0248fee8;
      }
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar14 = FUN_016f93a0(uVar30,0);
      if ((uVar14 & 1) != 0) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar14 = FUN_016f68bc(uVar30,0);
        if (((uVar30 != 0x200b) && ((uVar14 & 1) == 0)) && (*in_stack_00000148 != 1))
        goto LAB_024909a0;
      }
    }
    if (uVar10 == *in_stack_00000148 - 1) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar14 = FUN_016f9468(uVar30,0);
      iVar9 = (int)fStack00000000000000e4;
      if ((uVar14 & 1) == 0) goto LAB_02490204;
    }
    else {
LAB_02490204:
      iVar9 = uVar29 - 2;
    }
    lVar39 = *in_stack_00000150;
    if (lVar39 == 0) goto LAB_02491464;
    lVar23 = *(long *)(lVar39 + 0x40);
    if (lVar23 == 0) goto LAB_02491464;
    uVar24 = *(uint *)(lVar39 + 0x24);
    iVar11 = *(int *)(lVar23 + 0x18);
    if (iVar11 < (int)(uVar24 + 1)) {
      if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01147b84((long *)(lVar39 + 0x40),iVar11 + 1,
                   *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
      lVar39 = *in_stack_00000150;
      if (lVar39 == 0) goto LAB_02491464;
    }
    lVar23 = *(long *)(lVar39 + 0x40);
    if (lVar23 == 0) goto LAB_02491464;
    if (*(uint *)(lVar23 + 0x18) <= uVar24)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar23 = lVar23 + (long)(int)uVar24 * 0x18;
    *(long **)(lVar23 + 0x20) = unaff_x19;
    *(float *)(lVar23 + 0x28) = in_stack_00000110._4_4_;
    *(int *)(lVar23 + 0x2c) = iVar9;
    *(int *)(lVar23 + 0x30) = (iVar9 - (int)in_stack_00000110._4_4_) + 1;
    lVar23 = *(long *)(lVar39 + 0x50);
    *(int *)(lVar39 + 0x24) = *(int *)(lVar39 + 0x24) + 1;
    if (lVar23 == 0) goto LAB_02491464;
    if (*(uint *)(lVar23 + 0x18) <= uVar28)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar23 = lVar23 + lVar33 * 0x5c;
    bVar7 = false;
    iStack00000000000000a4 = iStack00000000000000a4 + 1;
    *(int *)(lVar23 + 0x30) = *(int *)(lVar23 + 0x30) + 1;
  }
  else {
    if (!bVar7) {
      in_stack_00000110._4_4_ = (float)uVar10;
    }
    if (uVar10 == *in_stack_00000148 - 1) {
      lVar39 = *in_stack_00000150;
      if (lVar39 == 0) goto LAB_02491464;
      lVar23 = *(long *)(lVar39 + 0x40);
      if (lVar23 == 0) goto LAB_02491464;
      uVar24 = *(uint *)(lVar39 + 0x24);
      iVar9 = *(int *)(lVar23 + 0x18);
      if (iVar9 < (int)(uVar24 + 1)) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147b84((long *)(lVar39 + 0x40),iVar9 + 1,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
        lVar39 = *in_stack_00000150;
        if (lVar39 == 0) goto LAB_02491464;
      }
      lVar23 = *(long *)(lVar39 + 0x40);
      if (lVar23 == 0) goto LAB_02491464;
      if (*(uint *)(lVar23 + 0x18) <= uVar24)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar23 = lVar23 + (long)(int)uVar24 * 0x18;
      *(long **)(lVar23 + 0x20) = unaff_x19;
      *(float *)(lVar23 + 0x28) = in_stack_00000110._4_4_;
      *(uint *)(lVar23 + 0x2c) = uVar10;
      *(uint *)(lVar23 + 0x30) = uVar29 - (int)in_stack_00000110._4_4_;
      lVar23 = *(long *)(lVar39 + 0x50);
      *(int *)(lVar39 + 0x24) = *(int *)(lVar39 + 0x24) + 1;
      if (lVar23 == 0) goto LAB_02491464;
      if (*(uint *)(lVar23 + 0x18) <= uVar28)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar23 = lVar23 + lVar33 * 0x5c;
      iStack00000000000000a4 = iStack00000000000000a4 + 1;
      *(int *)(lVar23 + 0x30) = *(int *)(lVar23 + 0x30) + 1;
    }
LAB_0248fee0:
    bVar7 = true;
  }
LAB_0248fee8:
  if ((*in_stack_00000150 == 0) || (lVar39 = *(long *)(*in_stack_00000150 + 0x38), lVar39 == 0))
  goto LAB_02491464;
  uVar24 = *(uint *)(lVar39 + 0x18);
  if (uVar24 <= uVar10)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*(byte *)(lVar39 + lVar13 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar6) {
LAB_0248ff18:
      if (uVar24 <= uVar29 - 2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar33 = *unaff_x19;
      uVar57 = *(undefined4 *)(lVar39 + _in_stack_00000128 + -0x330);
      uVar50 = *(undefined4 *)(lVar39 + _in_stack_00000128 + -0x2f8);
LAB_02490474:
      pcVar27 = *(code **)(lVar33 + 0x908);
LAB_0249047c:
      (*pcVar27)(fStack0000000000000054,fStack000000000000004c,fStack0000000000000050,uVar57,
                 fStack00000000000000cc,0,fStack0000000000000058,uVar50);
      puVar5 = System_Threading_Mutex_TypeInfo;
      lVar39 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar39 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar39 = *(long *)puVar5;
      }
LAB_024904cc:
      bVar6 = false;
      fVar49 = 0.0;
      fStack00000000000000cc = *(float *)(*(long *)(lVar39 + 0xb8) + 0x15a8);
      fStack00000000000000c8 = 0.0;
    }
    else {
LAB_024903d8:
      bVar6 = false;
    }
  }
  else {
    lVar39 = lVar39 + lVar13 * 0x178;
    iVar9 = *(int *)(lVar39 + 0x68);
    *(int *)(lVar39 + 0x16c) = iVar38;
    if ((((int)unaff_x19[100] < (int)uVar10) || ((int)unaff_x19[0x65] < (int)uVar28)) ||
       (((int)unaff_x19[0x5b] == 5 && (iVar9 + 1 != (int)unaff_x19[0x66])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar14 = FUN_016f68bc(uVar30,0);
    if ((uVar30 != 0x200b) && ((uVar14 & 1) == 0)) {
      lVar39 = *in_stack_00000150;
      if ((lVar39 == 0) || (lVar33 = *(long *)(lVar39 + 0x38), lVar33 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar33 + 0x18) <= uVar10)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      fVar46 = *(float *)(lVar33 + lVar13 * 0x178 + 0x160);
      if (fVar49 <= fVar46) {
        fVar49 = fVar46;
      }
      if (fStack00000000000000c8 <= ABS(fVar45)) {
        fStack00000000000000c8 = ABS(fVar45);
      }
      if ((float)iVar9 != fStack0000000000000048) {
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar39 = *in_stack_00000150;
          if (lVar39 == 0) goto LAB_02491464;
          lVar33 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
        }
        else {
          lVar33 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
        }
        fStack00000000000000cc = *(float *)(lVar33 + 0x15a8);
      }
      lVar39 = *(long *)(lVar39 + 0x38);
      if (lVar39 == 0) goto LAB_02491464;
      if (*(uint *)(lVar39 + 0x18) <= uVar10)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (unaff_x19[0x1e] == 0) goto LAB_02491464;
      fVar43 = *(float *)(lVar39 + lVar13 * 0x178 + 0x14c);
      fVar46 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
      fVar43 = fVar43 + fVar49 * fVar46;
      fStack0000000000000048 = (float)iVar9;
      if (fVar43 <= fStack00000000000000cc) {
        fStack00000000000000cc = fVar43;
      }
    }
    if (!bVar6) {
      bVar6 = false;
      if ((((uVar30 == 0xd) || ((uVar30 | 1) == 0xb)) || ((int)uVar34 < (int)uVar10)) || (!bVar1))
      goto LAB_024904e8;
      if (uVar10 == uVar34) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar14 = FUN_016fa418(uVar30,0);
        if ((uVar14 & 1) != 0) goto LAB_024903d8;
      }
      if ((*in_stack_00000150 == 0) || (lVar39 = *(long *)(*in_stack_00000150 + 0x38), lVar39 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar39 + 0x18) <= uVar10)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar39 = lVar39 + lVar13 * 0x178;
      fStack0000000000000058 = *(float *)(lVar39 + 0x160);
      fStack0000000000000054 = *(float *)(lVar39 + 0x11c);
      bVar6 = fVar49 != 0.0;
      fVar46 = fStack0000000000000058;
      if (bVar6) {
        fVar46 = fVar49;
      }
      fVar49 = fVar46;
      _bStack000000000000005c = *(uint *)(lVar39 + 0x168);
      fStack0000000000000050 = 0.0;
      fVar46 = fVar45;
      if (bVar6) {
        fVar46 = fStack00000000000000c8;
      }
      fStack000000000000004c = fStack00000000000000cc;
      fStack00000000000000c8 = fVar46;
    }
    if (*in_stack_00000148 == 1) {
      if ((*in_stack_00000150 != 0) && (lVar39 = *(long *)(*in_stack_00000150 + 0x38), lVar39 != 0))
      {
        if (uVar10 < *(uint *)(lVar39 + 0x18)) {
          lVar39 = lVar39 + lVar13 * 0x178;
          lVar33 = *unaff_x19;
          uVar57 = *(undefined4 *)(lVar39 + 0x128);
          uVar50 = *(undefined4 *)(lVar39 + 0x160);
          goto LAB_02490474;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
    if ((uVar10 == uVar59) || ((int)uVar34 <= (int)uVar10)) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar14 = FUN_016f68bc(uVar30,0);
      if ((*in_stack_00000150 != 0) && (lVar39 = *(long *)(*in_stack_00000150 + 0x38), lVar39 != 0))
      {
        if (uVar30 == 0x200b || (uVar14 & 1) != 0) {
          lVar33 = lVar31;
          if (*(uint *)(lVar39 + 0x18) <= uVar34)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        else {
          lVar33 = lVar13;
          if (*(uint *)(lVar39 + 0x18) <= uVar10)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        lVar39 = lVar39 + lVar33 * 0x178;
        uVar57 = *(undefined4 *)(lVar39 + 0x128);
        uVar50 = *(undefined4 *)(lVar39 + 0x160);
        pcVar27 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_0249047c;
      }
      goto LAB_02491464;
    }
    if (!bVar1) {
      if ((*in_stack_00000150 != 0) && (lVar39 = *(long *)(*in_stack_00000150 + 0x38), lVar39 != 0))
      {
        uVar24 = *(uint *)(lVar39 + 0x18);
        goto LAB_0248ff18;
      }
      goto LAB_02491464;
    }
    if ((int)uVar10 < (int)(*in_stack_00000148 - 1)) {
      if ((*in_stack_00000150 == 0) || (lVar39 = *(long *)(*in_stack_00000150 + 0x38), lVar39 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar39 + 0x18) <= uVar29)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar14 = FUN_024a9e4c(_bStack000000000000005c,*(undefined4 *)(lVar39 + _in_stack_00000128),0);
      if ((uVar14 & 1) == 0) {
        if ((*in_stack_00000150 != 0) &&
           (lVar39 = *(long *)(*in_stack_00000150 + 0x38), lVar39 != 0)) {
          if (uVar10 < *(uint *)(lVar39 + 0x18)) {
            lVar39 = lVar39 + lVar13 * 0x178;
            (**(code **)(*unaff_x19 + 0x908))
                      (fStack0000000000000054,fStack000000000000004c,fStack0000000000000050,
                       *(undefined4 *)(lVar39 + 0x128),fStack00000000000000cc,0,
                       fStack0000000000000058,*(undefined4 *)(lVar39 + 0x160));
            puVar5 = System_Threading_Mutex_TypeInfo;
            lVar39 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar39 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar39 = *(long *)puVar5;
            }
            goto LAB_024904cc;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        goto LAB_02491464;
      }
    }
    bVar6 = true;
  }
LAB_024904e8:
  if ((*in_stack_00000150 == 0) || (lVar39 = *(long *)(*in_stack_00000150 + 0x38), lVar39 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar39 + 0x18) <= uVar10)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if (lVar35 == 0) goto LAB_02491464;
  uVar24 = *(uint *)(lVar39 + lVar13 * 0x178 + 400);
  fVar46 = (float)FUN_026fd1f0(lVar35 + 0x50,0);
  if ((uVar24 >> 6 & 1) == 0) {
    if (bVar4) {
      if ((*in_stack_00000150 == 0) || (lVar39 = *(long *)(*in_stack_00000150 + 0x38), lVar39 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar39 + 0x18) <= uVar29 - 2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar57 = *(undefined4 *)(lVar39 + _in_stack_00000128 + -0x330);
      pcVar27 = *(code **)(*unaff_x19 + 0x908);
      fVar48 = fStack0000000000000084 * fVar46 + *(float *)(lVar39 + _in_stack_00000128 + -0x30c);
LAB_02490a68:
      (*pcVar27)(in_stack_00000078._4_4_,in_stack_00000068._4_4_,uStack0000000000000060,uVar57,
                 fVar48,0,fStack0000000000000084,fStack0000000000000084);
    }
LAB_02490a9c:
    bVar4 = false;
  }
  else {
    lVar39 = *in_stack_00000150;
    if ((lVar39 == 0) || (lVar33 = *(long *)(lVar39 + 0x38), lVar33 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar33 + 0x18) <= uVar10)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(int *)(lVar33 + lVar13 * 0x178 + 0x174) = iVar38;
    if ((((int)unaff_x19[100] < (int)uVar10) || ((int)unaff_x19[0x65] < (int)uVar28)) ||
       (((int)unaff_x19[0x5b] == 5 &&
        (*(int *)(lVar33 + lVar13 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar30 == 0xd) || ((uVar30 | 1) == 0xb)) || ((int)uVar34 < (int)uVar10)) ||
       (bVar4 || !bVar1)) {
LAB_02490668:
      if (!bVar4) goto LAB_02490a9c;
    }
    else {
      if (uVar10 == uVar34) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar14 = FUN_016fa418(uVar30,0);
        if ((uVar14 & 1) != 0) goto LAB_02490668;
        lVar39 = *in_stack_00000150;
        if (lVar39 == 0) goto LAB_02491464;
      }
      lVar39 = *(long *)(lVar39 + 0x38);
      if (lVar39 == 0) goto LAB_02491464;
      if (*(uint *)(lVar39 + 0x18) <= uVar10)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar39 = lVar39 + lVar13 * 0x178;
      fStack0000000000000038 = *(float *)(lVar39 + 0x60);
      fStack0000000000000084 = *(float *)(lVar39 + 0x160);
      fStack0000000000000034 = *(float *)(lVar39 + 0x14c);
      in_stack_00000078._4_4_ = *(float *)(lVar39 + 0x11c);
      in_stack_00000068._4_4_ = fVar46 * fStack0000000000000084 + fStack0000000000000034;
      uStack0000000000000060 = 0;
    }
    uVar24 = *in_stack_00000148;
    if (uVar24 == 1) {
      if (*in_stack_00000150 != 0) {
        lVar39 = *(long *)(*in_stack_00000150 + 0x38);
joined_r0x024907c8:
        if (lVar39 != 0) {
          if (uVar10 < *(uint *)(lVar39 + 0x18)) {
            lVar39 = lVar39 + lVar13 * 0x178;
            lVar31 = *unaff_x19;
            uVar57 = *(undefined4 *)(lVar39 + 0x128);
            fVar48 = *(float *)(lVar39 + 0x14c);
LAB_024907e8:
            pcVar27 = *(code **)(lVar31 + 0x908);
LAB_02490a64:
            fVar48 = fVar46 * fStack0000000000000084 + fVar48;
            goto LAB_02490a68;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
      }
      goto LAB_02491464;
    }
    if (uVar10 == uVar59) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar14 = FUN_016f68bc(uVar30,0);
      if ((*in_stack_00000150 != 0) && (lVar39 = *(long *)(*in_stack_00000150 + 0x38), lVar39 != 0))
      {
        uVar24 = *(uint *)(lVar39 + 0x18);
        if (uVar30 == 0x200b || (uVar14 & 1) != 0) {
          if (uVar24 <= uVar34)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        else {
LAB_02490a40:
          lVar31 = lVar13;
          if (uVar24 <= uVar10)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
LAB_02490a48:
        lVar39 = lVar39 + lVar31 * 0x178;
        fVar48 = *(float *)(lVar39 + 0x14c);
        uVar57 = *(undefined4 *)(lVar39 + 0x128);
        pcVar27 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_02490a64;
      }
      goto LAB_02491464;
    }
    if ((int)uVar10 < (int)uVar24) {
      lVar39 = *in_stack_00000150;
      if ((lVar39 != 0) && (lVar33 = *(long *)(lVar39 + 0x38), lVar33 != 0)) {
        if (uVar29 < *(uint *)(lVar33 + 0x18)) {
          if (*(float *)(lVar33 + _in_stack_00000128 + -0x108) == fStack0000000000000038) {
            fVar43 = *(float *)(lVar33 + _in_stack_00000128 + -0x1c);
            if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar14 = FUN_024aa280(fVar48 + fVar43,fStack0000000000000034,0);
            if ((uVar14 & 1) != 0) {
              uVar24 = *in_stack_00000148;
              goto LAB_024908ec;
            }
            lVar39 = *in_stack_00000150;
            if (lVar39 == 0) goto LAB_02491464;
          }
          lVar39 = *(long *)(lVar39 + 0x38);
          if (lVar39 != 0) {
            uVar24 = *(uint *)(lVar39 + 0x18);
            if ((int)uVar10 <= (int)uVar34) goto LAB_02490a40;
            if (uVar34 < uVar24) goto LAB_02490a48;
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          }
          goto LAB_02491464;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
LAB_024908ec:
    if ((int)uVar10 < (int)uVar24) {
      iVar9 = FUN_02681c0c(lVar35,0);
      if (*(uint *)(lVar21 + 0x18) <= uVar29)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar39 = *(long *)(lVar21 + _in_stack_00000128 + -0x130);
      if (lVar39 == 0) goto LAB_02491464;
      iVar11 = FUN_02681c0c(lVar39,0);
      if (iVar9 != iVar11) {
        if (*in_stack_00000150 != 0) {
          lVar39 = *(long *)(*in_stack_00000150 + 0x38);
          goto joined_r0x024907c8;
        }
        goto LAB_02491464;
      }
    }
    if (!bVar1) {
      if ((*in_stack_00000150 != 0) && (lVar39 = *(long *)(*in_stack_00000150 + 0x38), lVar39 != 0))
      {
        if (uVar29 - 2 < *(uint *)(lVar39 + 0x18)) {
          lVar31 = *unaff_x19;
          uVar57 = *(undefined4 *)(lVar39 + _in_stack_00000128 + -0x330);
          fVar48 = *(float *)(lVar39 + _in_stack_00000128 + -0x30c);
          goto LAB_024907e8;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
    bVar4 = true;
  }
  if ((*in_stack_00000150 == 0) || (lVar39 = *(long *)(*in_stack_00000150 + 0x38), lVar39 == 0))
  goto LAB_02491464;
  uVar24 = (uint)*(undefined8 *)(lVar39 + 0x18);
  if (uVar24 <= uVar10)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*(byte *)(lVar39 + lVar13 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar8) {
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,
                 fStack0000000000000098,in_stack_000000a0,uStack0000000000000094);
    }
LAB_02490b04:
    bVar8 = false;
  }
  else {
    if ((((int)unaff_x19[100] < (int)uVar10) || ((int)unaff_x19[0x65] < (int)uVar28)) ||
       (((int)unaff_x19[0x5b] == 5 &&
        (*(int *)(lVar39 + lVar13 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar8) {
      if ((((uVar30 == 0xd) || ((uVar30 | 1) == 0xb)) || ((int)uVar34 < (int)uVar10)) || (!bVar1))
      goto LAB_02490b04;
      if (uVar10 == uVar34) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar14 = FUN_016fa418(uVar30,0);
        if ((uVar14 & 1) != 0) goto LAB_02490b04;
      }
      puVar5 = System_Threading_Mutex_TypeInfo;
      lVar31 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar31 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar31 = *(long *)puVar5;
      }
      if ((*in_stack_00000150 == 0) || (lVar39 = *(long *)(*in_stack_00000150 + 0x38), lVar39 == 0))
      goto LAB_02491464;
      uVar24 = (uint)*(undefined8 *)(lVar39 + 0x18);
      if (uVar24 <= uVar10)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar31 = *(long *)(lVar31 + 0xb8);
      lVar33 = lVar39 + lVar13 * 0x178;
      in_stack_00001798 = *(undefined8 *)(lVar33 + 0x184);
      in_stack_00001790 = *(undefined8 *)(lVar33 + 0x17c);
      fStack00000000000000a8 = *(float *)(lVar31 + 0x1598);
      in_stack_000017a0 = *(float *)(lVar33 + 0x18c);
      fStack00000000000000ac = *(float *)(lVar31 + 0x159c);
      fStack0000000000000098 = *(float *)(lVar31 + 0x15a0);
      in_stack_000000a0 = *(float *)(lVar31 + 0x15a4);
      uStack0000000000000094 = 0;
    }
    if (uVar24 <= uVar10)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar39 = lVar39 + lVar13 * 0x178;
    fVar46 = *(float *)(lVar39 + 0x128);
    fVar54 = *(float *)(lVar39 + 0x188);
    uVar12 = *(undefined8 *)(lVar39 + 0x17c);
    fVar52 = *(float *)(lVar39 + 0x184);
    uVar16 = *(undefined8 *)(lVar39 + 0x184);
    fVar55 = *(float *)(lVar39 + 0x18c);
    fVar48 = *(float *)(lVar39 + 0x11c);
    fVar43 = *(float *)(lVar39 + 0x148);
    fVar44 = *(float *)(lVar39 + 0x150);
    in_stack_00000158 = uVar12;
    fStack0000000000000160 = fVar52;
    fStack0000000000000164 = fVar54;
    in_stack_00000168 = fVar55;
    in_stack_00000170 = in_stack_00001790;
    in_stack_00000178 = in_stack_00001798;
    in_stack_00000180 = in_stack_000017a0;
    uVar14 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
    lVar39 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
    if ((uVar14 & 1) == 0) {
      if (*(int *)(lVar39 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar39);
      }
      fVar46 = fVar46 + (float)in_stack_00001798;
      fVar48 = fVar48 - (float)((ulong)in_stack_00001790 >> 0x20);
      fVar43 = fVar43 + (float)((ulong)in_stack_00001798 >> 0x20);
      if (fVar48 <= fStack00000000000000a8) {
        fStack00000000000000a8 = fVar48;
      }
      if (fVar44 - in_stack_000017a0 <= fStack00000000000000ac) {
        fStack00000000000000ac = fVar44 - in_stack_000017a0;
      }
      if (fStack0000000000000098 <= fVar46) {
        fStack0000000000000098 = fVar46;
      }
      if (in_stack_000000a0 <= fVar43) {
        in_stack_000000a0 = fVar43;
      }
    }
    else {
      if (*(int *)(lVar39 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar39);
      }
      fVar48 = (fVar48 + (fStack0000000000000098 - (float)in_stack_00001798)) * 0.5;
      if (fVar44 <= fStack00000000000000ac) {
        fStack00000000000000ac = fVar44;
      }
      if (in_stack_000000a0 <= fVar43) {
        in_stack_000000a0 = fVar43;
      }
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,fVar48,
                 in_stack_000000a0,uStack0000000000000094);
      fStack00000000000000ac = fVar44 - fVar55;
      fStack0000000000000098 = fVar46 + fVar52;
      uStack0000000000000094 = 0;
      in_stack_000000a0 = fVar43 + fVar54;
      fStack00000000000000a8 = fVar48;
      in_stack_00001790 = uVar12;
      in_stack_00001798 = uVar16;
      in_stack_000017a0 = fVar55;
    }
    if (((*in_stack_00000148 == 1) || (uVar10 == uVar59)) ||
       (((int)uVar34 <= (int)uVar10 || (!bVar1)))) {
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,
                 fStack0000000000000098,in_stack_000000a0,uStack0000000000000094);
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
  }
  uVar10 = *in_stack_00000148;
  fStack00000000000000e4 = (float)((int)fStack00000000000000e4 + 1);
  _in_stack_00000128 = _in_stack_00000128 + 0x178;
  bVar1 = (int)uVar10 <= (int)uVar29;
  uVar24 = uVar28;
  uVar29 = uVar29 + 1;
  if (bVar1) goto LAB_02491038;
  goto LAB_0248ef74;
LAB_0248bc34:
  in_stack_000000e0 = 0.0;
  param_2 = 0.0;
  _uStack00000000000000e8 = CONCAT44(fVar46,fVar49);
  param_1 = 0.0;
  goto code_r0x0248bc48;
LAB_02491038:
  lVar21 = *in_stack_00000150;
  if (lVar21 != 0) {
    iVar38 = uVar28 + 1;
    plVar25 = (long *)PTR_DAT_033ed410;
LAB_02491068:
    *(uint *)(lVar21 + 0x18) = uVar10;
    lVar39 = unaff_x19[0xd3];
    *(int *)(lVar21 + 0x2c) = iVar38;
    iVar38 = iStack00000000000000a4;
    if ((int)uVar10 < 1) {
      iVar38 = 1;
    }
    if (iStack00000000000000a4 == 0) {
      iVar38 = 1;
    }
    *(int *)(lVar21 + 0x1c) = (int)lVar39;
    *(int *)(lVar21 + 0x24) = iVar38;
    *(int *)(lVar21 + 0x30) = (int)unaff_x19[0x95] + 1;
    if (((int)unaff_x19[0x62] != 0xff) ||
       (uVar14 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar14 & 1) == 0)) {
LAB_02491468:
      lVar21 = *(long *)Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__;
LAB_02491474:
      if (*(int *)(lVar21 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_024a942c();
      return;
    }
    lVar21 = unaff_x19[0xda];
    if (lVar21 != 0) {
      (**(code **)(lVar21 + 0x18))
                (*(undefined8 *)(lVar21 + 0x40),*in_stack_00000150,*(undefined8 *)(lVar21 + 0x28));
    }
    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
      if ((*in_stack_00000150 == 0) || (lVar21 = *(long *)(*in_stack_00000150 + 0x60), lVar21 == 0))
      goto LAB_02491464;
      if (*(int *)(*plVar25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(int *)(lVar21 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      FUN_024e8000(lVar21 + 0x20,1,0);
    }
    if (unaff_x19[0x73] != 0) {
      UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
                (unaff_x19[0x73],0);
      if ((unaff_x19[0x6c] != 0) && (lVar21 = *(long *)(unaff_x19[0x6c] + 0x60), lVar21 != 0)) {
        if (*(int *)(lVar21 + 0x18) == 0) {
UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (unaff_x19[0x73] != 0) {
          FUN_0266b9c4(unaff_x19[0x73],*(undefined8 *)(lVar21 + 0x30),0);
          if ((unaff_x19[0x6c] != 0) && (lVar21 = *(long *)(unaff_x19[0x6c] + 0x60), lVar21 != 0)) {
            if (*(int *)(lVar21 + 0x18) == 0)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            if (unaff_x19[0x73] != 0) {
              FUN_0266bbc8(unaff_x19[0x73],*(undefined8 *)(lVar21 + 0x48),0);
              if ((unaff_x19[0x6c] != 0) &&
                 (lVar21 = *(long *)(unaff_x19[0x6c] + 0x60), lVar21 != 0)) {
                if (*(int *)(lVar21 + 0x18) == 0)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                if (unaff_x19[0x73] != 0) {
                  FUN_0266bc74(unaff_x19[0x73],*(undefined8 *)(lVar21 + 0x50),0);
                  if ((unaff_x19[0x6c] != 0) &&
                     (lVar21 = *(long *)(unaff_x19[0x6c] + 0x60), lVar21 != 0)) {
                    if (*(int *)(lVar21 + 0x18) == 0)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    if (unaff_x19[0x73] != 0) {
                      FUN_0266c1dc(unaff_x19[0x73],*(undefined8 *)(lVar21 + 0x58),0);
                      if (unaff_x19[0x73] != 0) {
                        FUN_0266ed90(unaff_x19[0x73],0);
                        lVar21 = *in_stack_00000150;
                        if (lVar21 != 0) {
                          lVar31 = 0;
                          lVar39 = 0;
                          do {
                            uVar14 = lVar39 + 1;
                            if ((long)*(int *)(lVar21 + 0x34) <= (long)uVar14) goto LAB_02491468;
                            lVar21 = *(long *)(lVar21 + 0x60);
                            if (lVar21 == 0) break;
                            if (*(int *)(*plVar25 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            if (*(uint *)(lVar21 + 0x18) <= uVar14)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            FUN_024e7ecc(lVar21 + lVar31 + 0x70,0);
                            lVar21 = unaff_x19[0xe0];
                            if (lVar21 == 0) break;
                            if (*(uint *)(lVar21 + 0x18) <= uVar14)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            uVar16 = *(undefined8 *)(lVar21 + lVar39 * 8 + 0x28);
                            if (*(int *)(*plVar42 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar15 = FUN_0268b4e0(uVar16,0,0);
                            if ((uVar15 & 1) == 0) {
                              if (*(int *)((long)unaff_x19 + 0x314) != 0) {
                                if ((*in_stack_00000150 == 0) ||
                                   (lVar21 = *(long *)(*in_stack_00000150 + 0x60), lVar21 == 0))
                                break;
                                if (*(int *)(*plVar25 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                if (*(uint *)(lVar21 + 0x18) <= uVar14)
                                goto 
                                UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                                ;
                                FUN_024e8000(lVar21 + lVar31 + 0x70,1,0);
                              }
                              lVar21 = unaff_x19[0xe0];
                              if (lVar21 == 0) break;
                              if (*(uint *)(lVar21 + 0x18) <= uVar14)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar21 = *(long *)(lVar21 + lVar39 * 8 + 0x28);
                              if (lVar21 == 0) break;
                              lVar21 = FUN_024eefa0(lVar21,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar13 = *(long *)(*in_stack_00000150 + 0x60), lVar13 == 0))
                              break;
                              if (*(uint *)(lVar13 + 0x18) <= uVar14)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar21 == 0) break;
                              FUN_0266b9c4(lVar21,*(undefined8 *)(lVar13 + lVar31 + 0x80),0);
                              lVar21 = unaff_x19[0xe0];
                              if (lVar21 == 0) break;
                              if (*(uint *)(lVar21 + 0x18) <= uVar14)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar21 = *(long *)(lVar21 + lVar39 * 8 + 0x28);
                              if (lVar21 == 0) break;
                              lVar21 = FUN_024eefa0(lVar21,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar13 = *(long *)(*in_stack_00000150 + 0x60), lVar13 == 0))
                              break;
                              if (*(uint *)(lVar13 + 0x18) <= uVar14)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar21 == 0) break;
                              FUN_0266bbc8(lVar21,*(undefined8 *)(lVar13 + lVar31 + 0x98),0);
                              lVar21 = unaff_x19[0xe0];
                              if (lVar21 == 0) break;
                              if (*(uint *)(lVar21 + 0x18) <= uVar14)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar21 = *(long *)(lVar21 + lVar39 * 8 + 0x28);
                              if (lVar21 == 0) break;
                              lVar21 = FUN_024eefa0(lVar21,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar13 = *(long *)(*in_stack_00000150 + 0x60), lVar13 == 0))
                              break;
                              if (*(uint *)(lVar13 + 0x18) <= uVar14)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar21 == 0) break;
                              FUN_0266bc74(lVar21,*(undefined8 *)(lVar13 + lVar31 + 0xa0),0);
                              lVar21 = unaff_x19[0xe0];
                              if (lVar21 == 0) break;
                              if (*(uint *)(lVar21 + 0x18) <= uVar14)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar21 = *(long *)(lVar21 + lVar39 * 8 + 0x28);
                              if (lVar21 == 0) break;
                              lVar21 = FUN_024eefa0(lVar21,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar13 = *(long *)(*in_stack_00000150 + 0x60), lVar13 == 0))
                              break;
                              if (*(uint *)(lVar13 + 0x18) <= uVar14)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar21 == 0) break;
                              FUN_0266c1dc(lVar21,*(undefined8 *)(lVar13 + lVar31 + 0xa8),0);
                              lVar21 = unaff_x19[0xe0];
                              if (lVar21 == 0) break;
                              if (*(uint *)(lVar21 + 0x18) <= uVar14)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar21 = *(long *)(lVar21 + lVar39 * 8 + 0x28);
                              if ((lVar21 == 0) || (lVar21 = FUN_024eefa0(lVar21,0), lVar21 == 0))
                              break;
                              FUN_0266ed90(lVar21,0);
                            }
                            lVar21 = *in_stack_00000150;
                            lVar39 = lVar39 + 1;
                            lVar31 = lVar31 + 0x50;
                          } while (lVar21 != 0);
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


