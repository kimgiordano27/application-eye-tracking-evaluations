/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor$$FindControllerComponent
ENTRY_POINT: 0249425c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 136
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_21;validity_or_gating_hits_21;weak_vector_component_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor__FindControllerComponent
               (float param_1,undefined1 param_2 [16],float param_3,float param_4,
               undefined1 param_5 [16],float param_6)

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
  long lVar29;
  undefined4 *puVar30;
  long lVar31;
  float *pfVar32;
  code *pcVar33;
  uint uVar34;
  long lVar35;
  float *pfVar36;
  long lVar37;
  uint uVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long *unaff_x19;
  uint unaff_w20;
  uint uVar42;
  long lVar43;
  long *plVar44;
  uint uVar45;
  long *unaff_x23;
  uint *unaff_x24;
  long *plVar46;
  long unaff_x27;
  long lVar47;
  long *plVar48;
  undefined1 *unaff_x28;
  uint unaff_w29;
  int iVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  double dVar53;
  float fVar54;
  uint uVar55;
  ulong uVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float unaff_s10;
  float fVar63;
  float unaff_s12;
  float fVar64;
  float fVar65;
  float unaff_s13;
  undefined4 uVar66;
  float unaff_s14;
  float fVar67;
  float unaff_s15;
  float fVar68;
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
  float fStack00000000000000ac;
  float fStack00000000000000b0;
  float fStack00000000000000b4;
  undefined8 in_stack_000000b8;
  float in_stack_000000c0;
  float fStack00000000000000c8;
  float fStack00000000000000cc;
  float fStack00000000000000d0;
  float fStack00000000000000d4;
  float fStack00000000000000e8;
  float fStack00000000000000ec;
  undefined8 in_stack_000000f0;
  float in_stack_000000f8;
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
    fVar54 = unaff_s15 + unaff_s12;
    param_4 = param_4 * 0.5;
    unaff_s15 = (unaff_s15 + param_1) - param_4;
    param_6 = (param_6 + param_1) - param_4;
    fVar58 = unaff_s13;
    fStack00000000000000e8 = fVar54 - param_4;
    fVar54 = param_3 - param_4;
    do {
      if (*(char *)((long)unaff_x19 + 0x46c) == '\0') {
        fVar52 = 0.0;
        fVar59 = 0.0;
        fVar60 = 0.0;
        fVar51 = 0.0;
        fVar57 = unaff_s10;
        fVar50 = unaff_s14;
        fStack00000000000000ec = unaff_s15;
      }
      else {
        thunk_FUN_026935f0(_uStack0000000000000060,0);
        fVar63 = (fVar54 + unaff_s15) * 0.5;
        fVar65 = (unaff_s10 + unaff_s14) * 0.5;
        fVar59 = unaff_s14 - fVar65;
        fVar51 = 0.0;
        fVar50 = fVar59;
        fStack00000000000000e8 =
             (float)FUN_02692df0(fStack00000000000000e8 - fVar63,_uStack0000000000000060,0);
        fStack00000000000000e8 = fVar63 + fStack00000000000000e8;
        fVar51 = fVar51 + 0.0;
        fVar62 = unaff_s10 - fVar65;
        fVar52 = 0.0;
        fVar57 = fVar62;
        fStack00000000000000ec = (float)FUN_02692df0(unaff_s15 - fVar63,_uStack0000000000000060,0);
        fStack00000000000000ec = fVar63 + fStack00000000000000ec;
        fVar52 = fVar52 + 0.0;
        fVar60 = 0.0;
        fVar54 = (float)FUN_02692df0(fVar54 - fVar63,_uStack0000000000000060,0);
        fVar54 = fVar63 + fVar54;
        unaff_s14 = fVar65 + fVar59;
        fVar60 = fVar60 + 0.0;
        fVar59 = 0.0;
        param_6 = (float)FUN_02692df0(param_6 - fVar63,_uStack0000000000000060,0);
        param_6 = fVar63 + param_6;
        unaff_s10 = fVar65 + fVar62;
        fVar59 = fVar59 + 0.0;
        fVar57 = fVar65 + fVar57;
        fVar50 = fVar65 + fVar50;
      }
      if (*unaff_x23 == 0) goto LAB_0249920c;
      lVar29 = *(long *)(*unaff_x23 + 0x38);
      uVar21 = (ulong)(uint)fVar58;
      if (lVar29 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar29 + 0x18) <= *unaff_x24)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = lVar29 + (int)*unaff_x24 * unaff_x27;
      *(float *)(lVar29 + 0x120) = fVar57;
      *(float *)(lVar29 + 0x11c) = fStack00000000000000ec;
      *(float *)(lVar29 + 0x124) = fVar52;
      if ((*unaff_x23 == 0) || (lVar29 = *(long *)(*unaff_x23 + 0x38), lVar29 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar29 + 0x18) <= *unaff_x24)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = lVar29 + (int)*unaff_x24 * unaff_x27;
      *(float *)(lVar29 + 0x114) = fVar50;
      *(float *)(lVar29 + 0x110) = fStack00000000000000e8;
      *(float *)(lVar29 + 0x118) = fVar51;
      if ((*unaff_x23 == 0) || (lVar29 = *(long *)(*unaff_x23 + 0x38), lVar29 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar29 + 0x18) <= *unaff_x24)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = lVar29 + (int)*unaff_x24 * unaff_x27;
      *(float *)(lVar29 + 0x128) = fVar54;
      *(float *)(lVar29 + 300) = unaff_s14;
      *(float *)(lVar29 + 0x130) = fVar60;
      if ((*unaff_x23 == 0) || (lVar29 = *(long *)(*unaff_x23 + 0x38), lVar29 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar29 + 0x18) <= *unaff_x24)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = lVar29 + (int)*unaff_x24 * unaff_x27;
      *(float *)(lVar29 + 0x134) = param_6;
      *(float *)(lVar29 + 0x138) = unaff_s10;
      *(float *)(lVar29 + 0x13c) = fVar59;
      if ((*unaff_x23 == 0) || (lVar29 = *(long *)(*unaff_x23 + 0x38), lVar29 == 0))
      goto LAB_0249920c;
      uVar14 = *unaff_x24;
      lVar43 = (long)(int)uVar14;
      if (*(uint *)(lVar29 + 0x18) <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar35 = lVar29 + lVar43 * unaff_x27;
      *(int *)(lVar35 + 0x140) = (int)unaff_x19[199];
      fVar52 = *(float *)(unaff_x19 + 0x9a);
      uVar22 = (ulong)(uint)fVar52;
      fVar51 = *(float *)((long)unaff_x19 + 0x614);
      *(float *)(lVar35 + 0x15c) = (fVar54 - fStack00000000000000ec) / (fVar50 - fVar57);
      *(float *)(lVar35 + 0x14c) = (in_stack_00000130._4_4_ - fVar52) + fVar51;
      in_stack_00000120 = in_stack_00000120 * fVar58;
      if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
        in_stack_00000120 = in_stack_00000120 / in_stack_000000f0._4_4_;
        in_stack_00000110 = (in_stack_00000110 * fVar58) / in_stack_000000f0._4_4_;
      }
      else {
        in_stack_00000110 = in_stack_00000110 * fVar58;
      }
      uVar18 = *(uint *)(unaff_x19 + 0x92);
      bVar11 = unaff_w29 != 0;
      in_stack_00000120 = fVar51 + in_stack_00000120;
      bVar12 = uVar14 != uVar18;
      if (bVar12 && bVar11) {
        fVar54 = *(float *)(unaff_x19 + 0x98);
        lVar29 = lVar29 + lVar43 * unaff_x27;
        *(float *)(lVar29 + 0x154) = fVar54;
        in_stack_00000110 = *(float *)((long)unaff_x19 + 0x4c4);
        *(float *)(lVar29 + 0x148) = fVar54 - fVar52;
        *(float *)(lVar29 + 0x158) = in_stack_00000110;
        *(float *)(unaff_x19 + 0x97) = fVar54 - fVar52;
        in_stack_00000110 = in_stack_00000110 - fVar52;
        *(float *)(lVar29 + 0x150) = in_stack_00000110;
      }
      else {
        in_stack_00000110 = fVar51 + in_stack_00000110;
        fVar57 = in_stack_00000120;
        fVar59 = in_stack_00000110;
        if (fVar51 != 0.0) {
          fVar57 = (in_stack_00000120 - fVar51) / *(float *)((long)unaff_x19 + 0x3fc);
          fVar59 = (in_stack_00000110 - fVar51) / *(float *)((long)unaff_x19 + 0x3fc);
          if (fVar57 <= in_stack_00000120) {
            fVar57 = in_stack_00000120;
          }
          if (in_stack_00000110 <= fVar59) {
            fVar59 = in_stack_00000110;
          }
        }
        lVar29 = lVar29 + lVar43 * unaff_x27;
        fVar54 = fVar57;
        if (fVar57 <= *(float *)(unaff_x19 + 0x98)) {
          fVar54 = *(float *)(unaff_x19 + 0x98);
        }
        fVar51 = fVar59;
        if (*(float *)((long)unaff_x19 + 0x4c4) <= fVar59) {
          fVar51 = *(float *)((long)unaff_x19 + 0x4c4);
        }
        *(float *)((long)unaff_x19 + 0x4c4) = fVar51;
        in_stack_00000110 = in_stack_00000110 - fVar52;
        *(float *)(unaff_x19 + 0x98) = fVar54;
        *(float *)(lVar29 + 0x154) = fVar57;
        *(float *)(lVar29 + 0x158) = fVar59;
        *(float *)(lVar29 + 0x148) = in_stack_00000120 - fVar52;
        *(float *)(unaff_x19 + 0x97) = in_stack_00000120 - fVar52;
        *(float *)(lVar29 + 0x150) = in_stack_00000110;
      }
      *(float *)((long)unaff_x19 + 0x4bc) = in_stack_00000110;
      if (((int)unaff_x19[0x94] == 0) || (*(char *)((long)unaff_x19 + 0x334) != '\0')) {
        if (!bVar12 || !bVar11) {
          *(float *)(unaff_x19 + 0x96) = fVar54;
          if (unaff_x19[0x1f] != 0) {
            fVar54 = *(float *)((long)unaff_x19 + 0x4b4);
            fVar51 = (float)FUN_026fd150(unaff_x19[0x1f] + 0x50,0);
            in_stack_000000f0._4_4_ = (fVar58 * fVar51) / in_stack_000000f0._4_4_;
            uVar22 = (ulong)*(uint *)(unaff_x19 + 0x9a);
            if (fVar54 <= in_stack_000000f0._4_4_) {
              fVar54 = in_stack_000000f0._4_4_;
            }
            *(float *)((long)unaff_x19 + 0x4b4) = fVar54;
            goto LAB_02493948;
          }
          goto LAB_0249920c;
        }
      }
      else {
LAB_02493948:
        if ((!bVar12 || !bVar11) && (float)uVar22 == 0.0) {
          fVar54 = *(float *)(in_stack_00000070 + 0x208);
          if (*(float *)(in_stack_00000070 + 0x208) <= in_stack_00000120) {
            fVar54 = in_stack_00000120;
          }
          *(float *)(in_stack_00000070 + 0x208) = fVar54;
        }
      }
      lVar29 = *unaff_x23;
      if ((lVar29 == 0) || (lVar43 = *(long *)(lVar29 + 0x38), lVar43 == 0)) goto LAB_0249920c;
      uVar55 = *in_stack_00000148;
      if (*(uint *)(lVar43 + 0x18) <= uVar55)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar43 = lVar43 + (int)uVar55 * unaff_x27;
      *(undefined1 *)(lVar43 + 0x194) = 0;
      uVar34 = *(uint *)(unaff_x19 + 0x4e);
      iVar17 = (int)unaff_x27;
                    /* try { // try from 02493b4c to 02593b5b has its CatchHandler @ 02493b8c */
      if ((in_stack_000017bc == 9) ||
         (((((unaff_w29 == 0 && (in_stack_000017bc != 3)) && (in_stack_000017bc != 0x200b)) &&
           (in_stack_000017bc != 0xad)) ||
          (((in_stack_000017bc == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) != 0 ||
           (*(int *)((long)unaff_x19 + 0x63c) == 1)))))) {
                    /* try { // try from 02493b5c to 02593b7b has its CatchHandler @ 02493a0c */
        *(undefined1 *)(lVar43 + 0x194) = 1;
        pfVar32 = _fStack0000000000000088;
        pfVar36 = _fStack0000000000000098;
        if (unaff_w20 != 0) {
          lVar29 = *(long *)(lVar29 + 0x50);
          if (lVar29 == 0) goto LAB_0249920c;
                    /* try { // try from 02493b7c to 02593b7f has its CatchHandler @ 02493b84 */
                    /* try { // try from 02493b80 to 02593ba3 has its CatchHandler @ 02493a0c */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 02493b7c with catch @ 02493b84
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 02493b38 with catch @ 02493b88
                        */
          if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    /* catch(type#1 @ 03274860) { ... } // from try @ 02493b4c with catch @ 02493b8c
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 02493b28 with catch @ 02493b90
                        */
          lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
          pfVar36 = (float *)(lVar29 + 0x60);
          pfVar32 = (float *)(lVar29 + 100);
        }
        fVar51 = *pfVar36;
                    /* try { // try from 02493ba4 to 02593ba7 has its CatchHandler @ 02493cbc */
        fVar52 = *pfVar32;
                    /* try { // try from 02493ba8 to 02593cc7 has its CatchHandler @ 02493a0c */
        fVar54 = *(float *)(unaff_x19 + 0x6b);
        fVar57 = *(float *)(unaff_x19 + 199);
        fStack00000000000000d4 = (in_stack_00000090 - fVar51) - fVar52;
        bVar11 = true;
        if ((fVar54 <= fStack00000000000000d4) && (bVar11 = false, !NAN(fVar54))) {
          bVar11 = fVar54 == -1.0;
        }
        if (!bVar11) {
          fStack00000000000000d4 = fVar54;
        }
        fVar54 = 0.0;
        if ((char)unaff_x19[0x1d] == '\0') {
          fVar54 = (float)FUN_026fd474(&stack0x00001770,0);
          uVar22 = (ulong)*(uint *)(unaff_x19 + 0x9a);
        }
        fVar62 = *(float *)((long)unaff_x19 + 0x4c4);
        fVar59 = *(float *)((long)unaff_x19 + 0x2cc);
        fVar60 = (float)uVar22;
        if (in_stack_000017bc != 0xad) {
          fStack00000000000000d0 = fVar58;
        }
        fVar63 = 0.0;
        if ((0.0 < fVar60) && (fVar63 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
          fVar63 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
        }
        fVar63 = (*(float *)(unaff_x19 + 0x96) - (fVar62 - fVar60)) + fVar63;
        uVar55 = *in_stack_00000148;
        if (fVar63 <= fStack00000000000000a4) {
UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor__get_playHapticsOnHoverExited:
          plVar44 = (long *)System_Threading_Mutex_TypeInfo;
          fVar60 = 1.0 - fVar59;
          uVar22 = (ulong)(uint)fVar60;
          fVar57 = ABS(fVar57) + fVar54 * fVar60 * fStack00000000000000d0;
          fVar54 = _DAT_0294c6e8;
          if ((uVar34 & 0x18) == 0) {
            fVar54 = 1.0;
          }
          if (fVar57 <= fVar54 * fStack00000000000000d4) {
LAB_02494950:
            if (in_stack_000017bc == 0xad) {
              if ((*in_stack_00000150 != 0) &&
                 (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 != 0)) {
                if (*in_stack_00000148 < *(uint *)(lVar29 + 0x18)) {
                  *(undefined1 *)(lVar29 + (int)*in_stack_00000148 * unaff_x27 + 0x194) = 0;
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
                (**(code **)(*unaff_x19 + 0x8b8))(in_stack_00000128,in_stack_000000f8);
              }
              uVar55 = *in_stack_00000148;
              if (((uint)fStack0000000000000058 & 1) != 0) {
                *(uint *)(in_stack_00000070 + 0x1f0) = uVar55;
              }
              *(uint *)((long)unaff_x19 + 0x49c) = uVar55;
              *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
              if ((unaff_x19[0x6c] != 0) &&
                 (lVar29 = *(long *)(unaff_x19[0x6c] + 0x50), lVar29 != 0)) {
                if (*(uint *)(unaff_x19 + 0x94) < *(uint *)(lVar29 + 0x18)) {
                  lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                  fStack0000000000000058 = 0.0;
                  *(float *)(lVar29 + 0x60) = fVar51;
                  *(float *)(lVar29 + 100) = fVar52;
                  goto LAB_02494abc;
                }
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              }
              goto LAB_0249920c;
            }
            lVar29 = *in_stack_00000150;
            if ((lVar29 == 0) || (lVar43 = *(long *)(lVar29 + 0x38), lVar43 == 0))
            goto LAB_0249920c;
            uVar55 = *in_stack_00000148;
            if (uVar55 < *(uint *)(lVar43 + 0x18)) {
              *(undefined1 *)(lVar43 + (int)uVar55 * unaff_x27 + 0x194) = 0;
              *(uint *)((long)unaff_x19 + 0x49c) = uVar55;
              lVar43 = *(long *)(lVar29 + 0x50);
              if (lVar43 != 0) {
                if (*(uint *)(unaff_x19 + 0x94) < *(uint *)(lVar43 + 0x18)) {
                  lVar43 = lVar43 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                  *(int *)(lVar43 + 0x2c) = *(int *)(lVar43 + 0x2c) + 1;
                  goto LAB_024949c4;
                }
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              }
              goto LAB_0249920c;
            }
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          if (((char)unaff_x19[0x5a] == '\0') || (uVar55 == *(uint *)(unaff_x19 + 0x92))) {
            if (((char)unaff_x19[0x46] != '\0') &&
               (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
              fVar62 = *(float *)(unaff_x19 + 0x59) / 100.0;
              if (fVar59 < fVar62) {
                fVar58 = fVar57 / fVar60;
                if (fVar59 <= 0.0) {
                  fVar58 = fVar57;
                }
                fVar59 = fVar59 + (fVar57 - fVar54 * (fStack00000000000000d4 + DAT_02958218)) /
                                  fVar58;
                goto LAB_0249929c;
              }
              fVar60 = *(float *)((long)unaff_x19 + 0x1dc);
              uVar22 = (ulong)(uint)fVar60;
              fVar59 = *(float *)(unaff_x19 + 0x49);
              if (fVar60 <= fVar59) goto LAB_02493e34;
LAB_02499210:
              fVar58 = (fVar60 - *(float *)(unaff_x19 + 0x47)) * 0.5;
              if (fVar58 <= DAT_028aa298) {
                fVar58 = DAT_028aa298;
              }
              *(float *)((long)unaff_x19 + 0x234) = fVar60;
              fVar54 = (fVar60 - fVar58) * 20.0 + 0.5;
              fVar58 = DAT_02958220;
              if (fVar54 != INFINITY) {
                fVar58 = (float)(int)fVar54 / 20.0;
              }
              if (fVar58 <= fVar59) {
                fVar58 = fVar59;
              }
LAB_02495fd8:
              *(float *)((long)unaff_x19 + 0x1dc) = fVar58;
              return;
            }
LAB_02493e34:
            iVar13 = (int)unaff_x19[0x5b];
            if (iVar13 == 1) {
              lVar29 = *(long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(lVar29 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar29 = *plVar44;
              }
              plVar48 = (long *)StringLiteral_302;
              lVar43 = *(long *)(lVar29 + 0xb8);
              lVar29 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
              if ((*(byte *)(lVar29 + 0x132) & 1) == 0) {
                lVar29 = FUN_00d5941c(lVar29);
              }
              lVar29 = *(long *)(*(long *)(lVar29 + 0xc0) + 8);
              if ((*(byte *)(lVar29 + 0x132) & 1) == 0) {
                lVar29 = FUN_00d5941c();
              }
              piVar24 = (int *)thunk_FUN_00d32ed4(lVar43 + 0x11f0,*(long *)(lVar29 + 0x80) + 0xa0);
              if (*piVar24 == 0) goto LAB_02495f00;
              lVar29 = *plVar44;
              if (*(int *)(lVar29 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar29 = *plVar44;
              }
              FUN_013b8de4(*(long *)(lVar29 + 0xb8) + 0x11f0,&stack0x00000880,
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
            plVar48 = (long *)StringLiteral_302;
            in_stack_00001788 = FUN_024d66ec();
            lVar29 = unaff_x19[0x5c];
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)
                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                );
            }
            uVar21 = FUN_02681b9c(lVar29,0,0);
            if ((uVar21 & 1) != 0) {
              plVar46 = (long *)unaff_x19[0x5c];
              uVar23 = (**(code **)(*unaff_x19 + 0x548))();
              if (plVar46 == (long *)0x0) goto LAB_0249920c;
              (**(code **)(*plVar46 + 0x558))(plVar46,uVar23,*(undefined8 *)(*plVar46 + 0x560));
              lVar29 = unaff_x19[0x5c];
              if (lVar29 == 0) goto LAB_0249920c;
              *(int *)(lVar29 + 0x3f8) = (int)unaff_x19[0x7f];
              FUN_024c910c(lVar29,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
              plVar46 = (long *)unaff_x19[0x5c];
              if (plVar46 == (long *)0x0) goto LAB_0249920c;
              (**(code **)(*plVar46 + 0x7d8))(plVar46,0,0,*(undefined8 *)(*plVar46 + 0x7e0));
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
              lVar29 = *in_stack_00000150;
              if ((lVar29 == 0) || (lVar43 = *(long *)(lVar29 + 0x38), lVar43 == 0))
              goto LAB_0249920c;
              if (*(uint *)(lVar43 + 0x18) <= *in_stack_00000148)
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              fVar59 = *(float *)(unaff_x19 + 0x9a);
              fVar60 = 0.0;
              if ((0.0 < fVar59) && (fVar60 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
                fVar60 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
              }
              fVar60 = fStack00000000000000c8 * *(float *)(unaff_x19 + 0x56) +
                       *(float *)(lVar43 + (int)*in_stack_00000148 * unaff_x27 + 0x154) +
                       (fVar60 - *(float *)((long)unaff_x19 + 0x4c4)) +
                       fStack0000000000000054 *
                       (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4));
            }
            else {
              lVar29 = unaff_x19[0x6c];
              *(undefined1 *)((long)unaff_x19 + 700) = 1;
              if (lVar29 == 0) goto LAB_0249920c;
              fVar59 = *(float *)(unaff_x19 + 0x9a);
              fVar60 = *(float *)(unaff_x19 + 0x57) +
                       fStack00000000000000c8 * *(float *)(unaff_x19 + 0x56);
            }
            puVar9 = System_Threading_Mutex_TypeInfo;
            lVar29 = *(long *)(lVar29 + 0x38);
            if (lVar29 == 0) goto LAB_0249920c;
            uVar38 = *(uint *)((long)unaff_x19 + 0x48c);
            if ((*(uint *)(lVar29 + 0x18) <= uVar38) ||
               (uVar45 = uVar38 - 1, *(uint *)(lVar29 + 0x18) <= uVar45))
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            uVar22 = (ulong)(uint)(fVar60 + *(float *)(unaff_x19 + 0x96));
            fVar63 = (fVar60 + *(float *)(unaff_x19 + 0x96) + fVar59) -
                     *(float *)(lVar29 + (int)uVar38 * unaff_x27 + 0x158);
            if (((in_stack_00000068._4_1_ & 1) != 0 ||
                 *(short *)(lVar29 + (long)(int)uVar45 * (long)iVar17 + 0x20) != 0xad) ||
               ((fStack00000000000000a4 <= fVar63 && ((int)unaff_x19[0x5b] != 0)))) {
              if (*(short *)(lVar29 + (int)uVar38 * unaff_x27 + 0x20) == 0xad) {
                in_stack_00000068._4_1_ = 1;
                plVar48 = (long *)StringLiteral_302;
                plVar44 = (long *)System_Threading_Mutex_TypeInfo;
                uVar21 = uVar22;
                goto LAB_02492630;
              }
              if ((bStack000000000000005c & *(byte *)(unaff_x19 + 0x46) & 1) != 0) {
                fVar59 = *(float *)((long)unaff_x19 + 0x2cc);
                fVar62 = *(float *)(unaff_x19 + 0x59) / 100.0;
                if ((fVar62 <= fVar59) ||
                   ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c))) {
                  fVar60 = *(float *)((long)unaff_x19 + 0x1dc);
                  uVar22 = (ulong)(uint)fVar60;
                  fVar59 = *(float *)(unaff_x19 + 0x49);
                  if ((fVar59 < fVar60) &&
                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) goto LAB_02499210;
                  goto LAB_024946c0;
                }
LAB_024992ac:
                fVar58 = fVar57;
                if (0.0 < fVar59) {
                  fVar58 = fVar57 / (1.0 - fVar59);
                }
                fVar59 = fVar59 + (fVar57 - fVar54 * (fStack00000000000000d4 + DAT_02958218)) /
                                  fVar58;
LAB_0249929c:
                if (fVar62 <= fVar59) {
                  fVar59 = fVar62;
                }
                *(float *)((long)unaff_x19 + 0x2cc) = fVar59;
                return;
              }
LAB_024946c0:
              lVar29 = *(long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(lVar29 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar29 = *(long *)puVar9;
              }
              iVar13 = *(int *)(*(long *)(lVar29 + 0xb8) + 0xe78);
              if ((((float)iVar13 != fStack0000000000000034) && (iVar13 != -1)) &&
                 (((bStack000000000000005c ^ 1) & 1) == 0)) {
                if (*(int *)(lVar29 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                in_stack_00001788 = FUN_024d66ec();
                if ((unaff_x19[0x6c] == 0) ||
                   (lVar29 = *(long *)(unaff_x19[0x6c] + 0x38), lVar29 == 0)) goto LAB_0249920c;
                uVar45 = *in_stack_00000148 - 1;
                if (*(uint *)(lVar29 + 0x18) <= uVar45)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                fStack0000000000000034 = (float)iVar13;
                if (*(short *)(lVar29 + (long)(int)uVar45 * (long)iVar17 + 0x20) == 0xad) {
                  *in_stack_00000148 = uVar45;
                  goto LAB_024947b4;
                }
              }
              if (fStack00000000000000a4 < fVar63) {
                if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
                  *(undefined4 *)((long)unaff_x19 + 0x2dc) =
                       *(undefined4 *)((long)unaff_x19 + 0x48c);
                }
                plVar48 = (long *)StringLiteral_302;
                plVar44 = (long *)System_Threading_Mutex_TypeInfo;
                if ((char)unaff_x19[0x46] != '\0') {
                  fVar59 = *(float *)(unaff_x19 + 0x58);
                  if ((fVar59 < *(float *)((long)unaff_x19 + 0x2b4)) &&
                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                    fVar58 = *(float *)((long)unaff_x19 + 0x2b4) +
                             ((in_stack_00000018._4_4_ - fVar63) / (float)((int)unaff_x19[0x94] + 1)
                             ) / fStack0000000000000054;
                    if (fVar58 <= fVar59) {
                      fVar58 = fVar59;
                    }
LAB_024964c8:
                    *(float *)((long)unaff_x19 + 0x2b4) = fVar58;
                    return;
                  }
                  fVar59 = *(float *)((long)unaff_x19 + 0x2cc);
                  fVar62 = *(float *)(unaff_x19 + 0x59) / 100.0;
                  if ((fVar59 < fVar62) &&
                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) goto LAB_024992ac;
                  fVar60 = *(float *)((long)unaff_x19 + 0x1dc);
                  uVar22 = (ulong)(uint)fVar60;
                  fVar59 = *(float *)(unaff_x19 + 0x49);
                  if ((fVar59 < fVar60) &&
                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) goto LAB_02499210;
                }
                switch((int)unaff_x19[0x5b]) {
                case 0:
                case 2:
                case 4:
                  FUN_024d7014(fStack0000000000000054,uVar21,fStack00000000000000c8,
                               *(undefined4 *)((long)unaff_x19 + 0x2f4),in_stack_000000c0,
                               fStack00000000000000cc,fStack00000000000000d4,fStack0000000000000048)
                  ;
                  break;
                case 1:
                  lVar29 = *(long *)System_Threading_Mutex_TypeInfo;
                  if (*(int *)(lVar29 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar29 = *plVar44;
                  }
                  lVar43 = *(long *)(lVar29 + 0xb8);
                  lVar29 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
                  if ((*(byte *)(lVar29 + 0x132) & 1) == 0) {
                    lVar29 = FUN_00d5941c(lVar29);
                  }
                  lVar29 = *(long *)(*(long *)(lVar29 + 0xc0) + 8);
                  if ((*(byte *)(lVar29 + 0x132) & 1) == 0) {
                    lVar29 = FUN_00d5941c();
                  }
                  piVar24 = (int *)thunk_FUN_00d32ed4(lVar43 + 0x11f0,
                                                      *(long *)(lVar29 + 0x80) + 0xa0);
                  if (*piVar24 == 0) {
                    in_stack_00000068._4_1_ = 0;
                    goto LAB_02495f00;
                  }
                  lVar29 = *plVar44;
                  if (*(int *)(lVar29 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar29 = *plVar44;
                  }
                  FUN_013b8de4(*(long *)(lVar29 + 0xb8) + 0x11f0,&stack0x00000880,
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
                               *(undefined4 *)((long)unaff_x19 + 0x2f4),in_stack_000000c0,
                               fStack00000000000000cc,fStack00000000000000d4,fStack0000000000000048)
                  ;
                  *(undefined4 *)(unaff_x19 + 0x99) = 0;
                  *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                  *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
                  *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
                  break;
                case 6:
                  lVar29 = unaff_x19[0x5c];
                  if (*(int *)(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar21 = FUN_02681b9c(lVar29,0,0);
                  if ((uVar21 & 1) != 0) {
                    plVar46 = (long *)unaff_x19[0x5c];
                    uVar23 = (**(code **)(*unaff_x19 + 0x548))();
                    if (plVar46 == (long *)0x0) goto LAB_0249920c;
                    (**(code **)(*plVar46 + 0x558))
                              (plVar46,uVar23,*(undefined8 *)(*plVar46 + 0x560));
                    lVar29 = unaff_x19[0x5c];
                    if (lVar29 == 0) goto LAB_0249920c;
                    *(int *)(lVar29 + 0x3f8) = (int)unaff_x19[0x7f];
                    FUN_024c910c(lVar29,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
                    plVar46 = (long *)unaff_x19[0x5c];
                    if (plVar46 == (long *)0x0) goto LAB_0249920c;
                    (**(code **)(*plVar46 + 0x7d8))(plVar46,0,0,*(undefined8 *)(*plVar46 + 0x7e0));
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
                plVar48 = (long *)StringLiteral_302;
                plVar44 = (long *)System_Threading_Mutex_TypeInfo;
              }
              else {
                FUN_024d7014(fStack0000000000000054,uVar21,fStack00000000000000c8,
                             *(undefined4 *)((long)unaff_x19 + 0x2f4),in_stack_000000c0,
                             fStack00000000000000cc,fStack00000000000000d4,fStack0000000000000048);
                bStack000000000000005c = 1;
                in_stack_00000068._4_1_ = 0;
                fStack0000000000000058 = 1.4013e-45;
                plVar48 = (long *)StringLiteral_302;
                plVar44 = (long *)System_Threading_Mutex_TypeInfo;
              }
            }
            else {
              *in_stack_00000148 = uVar45;
LAB_024947b4:
              in_stack_000017a8 = CONCAT44(0x2d,uVar45);
              in_stack_00000068._4_1_ = 0;
              plVar48 = (long *)StringLiteral_302;
              plVar44 = (long *)System_Threading_Mutex_TypeInfo;
              uVar21 = uVar22;
              in_stack_00001788 = in_stack_00001788 - 1;
            }
          }
        }
        else {
          if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
            *(uint *)((long)unaff_x19 + 0x2dc) = uVar55;
          }
          plVar48 = (long *)StringLiteral_302;
          plVar44 = (long *)System_Threading_Mutex_TypeInfo;
          uVar23 = DAT_02941c08;
          if ((char)unaff_x19[0x46] != '\0') {
            fVar65 = *(float *)(unaff_x19 + 0x58);
            if (((fVar65 < *(float *)((long)unaff_x19 + 0x2b4)) && (0.0 < fVar60)) &&
               (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
              fVar58 = *(float *)((long)unaff_x19 + 0x2b4) +
                       ((in_stack_00000018._4_4_ - fVar63) / (float)(int)unaff_x19[0x94]) /
                       fStack0000000000000054;
              if (fVar58 <= fVar65) {
                fVar58 = fVar65;
              }
              goto LAB_024964c8;
            }
            fVar63 = *(float *)((long)unaff_x19 + 0x1dc);
            fVar60 = *(float *)(unaff_x19 + 0x49);
            uVar22 = (ulong)(uint)fVar60;
            if ((fVar60 < fVar63) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
              fVar58 = (fVar63 - *(float *)(unaff_x19 + 0x47)) * 0.5;
              if (fVar58 <= DAT_028aa298) {
                fVar58 = DAT_028aa298;
              }
              fVar54 = (fVar63 - fVar58) * 20.0 + 0.5;
              fVar58 = DAT_02958220;
              if (fVar54 != INFINITY) {
                fVar58 = (float)(int)fVar54 / 20.0;
              }
              if (fVar58 <= fVar60) {
                fVar58 = fVar60;
              }
              *(float *)((long)unaff_x19 + 0x234) = fVar63;
              goto LAB_02495fd8;
            }
          }
          switch((int)unaff_x19[0x5b]) {
          case 1:
            lVar29 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar29 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar29 = *plVar44;
            }
            lVar43 = *(long *)(lVar29 + 0xb8);
            lVar29 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
            if ((*(byte *)(lVar29 + 0x132) & 1) == 0) {
              lVar29 = FUN_00d5941c(lVar29);
            }
            plVar48 = (long *)StringLiteral_302;
            lVar29 = *(long *)(*(long *)(lVar29 + 0xc0) + 8);
            if ((*(byte *)(lVar29 + 0x132) & 1) == 0) {
              lVar29 = FUN_00d5941c();
            }
            piVar24 = (int *)thunk_FUN_00d32ed4(lVar43 + 0x11f0,*(long *)(lVar29 + 0x80) + 0xa0);
            if (*piVar24 == 0) {
LAB_02495f00:
              in_stack_000017a8 = DAT_02941c08;
              in_stack_00000148[0] = 0;
              in_stack_00000148[1] = 0;
              uVar21 = uVar22;
              in_stack_00001788 = 0xffffffff;
            }
            else {
              lVar29 = *plVar44;
              if (*(int *)(lVar29 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar29 = *plVar44;
              }
              FUN_013b8de4(*(long *)(lVar29 + 0xb8) + 0x11f0,&stack0x00000880,
                           *(undefined8 *)
                            Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                          );
              memcpy(&stack0x00001360,&stack0x00000880,0x378);
LAB_02494358:
              iVar13 = FUN_024d66ec();
LAB_02494364:
              iVar49 = *(int *)((long)unaff_x19 + 0x48c) + -1;
              *(int *)((long)unaff_x19 + 0x48c) = iVar49;
              in_stack_00000140 = in_stack_00000140 + 1;
              uVar21 = uVar22;
              in_stack_00001788 = iVar13 - 1;
              in_stack_000017a8 = CONCAT44(0x2026,iVar49);
            }
            goto LAB_02492630;
          default:
            goto 
            UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor__get_playHapticsOnHoverExited
            ;
          case 3:
                    /* try { // try from 02493e98 to 02593ea7 has its CatchHandler @ 02493ee0 */
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
LAB_02493ec0:
            plVar48 = (long *)StringLiteral_302;
            in_stack_00001788 = FUN_024d66ec();
            break;
          case 5:
                    /* try { // try from 02493ed4 to 02593ef3 has its CatchHandler @ 02493ce8 */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 02493ed0 with catch @ 02493ed8
                        */
            if ((uVar55 == 0) || ((int)in_stack_00001788 < 0)) {
              *in_stack_00000148 = 0;
              plVar48 = (long *)StringLiteral_302;
              plVar44 = (long *)System_Threading_Mutex_TypeInfo;
              uVar21 = uVar22;
              in_stack_00001788 = 0xffffffff;
              in_stack_000017a8 = uVar23;
            }
            else {
              fVar54 = *(float *)(unaff_x19 + 0x98);
              if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              in_stack_00001788 = FUN_024d66ec();
              if (fStack00000000000000a4 < fVar54 - fVar62) break;
              *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
              *(undefined4 *)(unaff_x19 + 0x92) = *(undefined4 *)((long)unaff_x19 + 0x48c);
              uVar21 = *(ulong *)(*(long *)(*plVar44 + 0xb8) + 0x15a8);
              *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
              *(undefined4 *)(unaff_x19 + 0x99) = 0;
              lVar29 = NEON_rev64(uVar21,4);
              unaff_x19[0x98] = lVar29;
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
            plVar48 = (long *)StringLiteral_302;
            lVar29 = unaff_x19[0x5c];
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)
                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                );
            }
            uVar21 = FUN_02681b9c(lVar29,0,0);
            if ((uVar21 & 1) != 0) {
              plVar46 = (long *)unaff_x19[0x5c];
              uVar23 = (**(code **)(*unaff_x19 + 0x548))();
              if (plVar46 == (long *)0x0) goto LAB_0249920c;
              (**(code **)(*plVar46 + 0x558))(plVar46,uVar23,*(undefined8 *)(*plVar46 + 0x560));
              lVar29 = unaff_x19[0x5c];
              if (lVar29 == 0) goto LAB_0249920c;
              *(int *)(lVar29 + 0x3f8) = (int)unaff_x19[0x7f];
              FUN_024c910c(lVar29,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
              plVar46 = (long *)unaff_x19[0x5c];
              if (plVar46 == (long *)0x0) goto LAB_0249920c;
              (**(code **)(*plVar46 + 0x7d8))(plVar46,0,0,*(undefined8 *)(*plVar46 + 0x7e0));
              *(undefined1 *)(unaff_x19 + 0x5e) = 1;
            }
          }
LAB_0249408c:
          uVar21 = uVar22;
          in_stack_000017a8 = CONCAT44(3,uVar55);
        }
      }
      else {
        if (((in_stack_000017bc & 0xfffffffe) == 10) && ((int)unaff_x19[0x5b] == 6)) {
          fVar54 = 0.0;
          if ((0.0 < (float)uVar22) && (fVar54 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
            fVar54 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
          }
          uVar21 = (ulong)(uint)fStack00000000000000a4;
          if (fStack00000000000000a4 <
              (*(float *)(unaff_x19 + 0x96) - (*(float *)((long)unaff_x19 + 0x4c4) - (float)uVar22))
              + fVar54) {
            if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
              *(uint *)((long)unaff_x19 + 0x2dc) = uVar55;
            }
            plVar48 = (long *)StringLiteral_302;
            plVar44 = (long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            in_stack_00001788 = FUN_024d66ec();
            lVar29 = unaff_x19[0x5c];
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)
                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                );
            }
            uVar22 = FUN_02681b9c(lVar29,0,0);
            if ((uVar22 & 1) != 0) {
              plVar46 = (long *)unaff_x19[0x5c];
              uVar23 = (**(code **)(*unaff_x19 + 0x548))();
              if (plVar46 == (long *)0x0) goto LAB_0249920c;
              (**(code **)(*plVar46 + 0x558))(plVar46,uVar23,*(undefined8 *)(*plVar46 + 0x560));
              lVar29 = unaff_x19[0x5c];
              if (lVar29 == 0) goto LAB_0249920c;
              *(int *)(lVar29 + 0x3f8) = (int)unaff_x19[0x7f];
              FUN_024c910c(lVar29,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
              plVar46 = (long *)unaff_x19[0x5c];
              if (plVar46 == (long *)0x0) goto LAB_0249920c;
              (**(code **)(*plVar46 + 0x7d8))(plVar46,0,0,*(undefined8 *)(*plVar46 + 0x7e0));
              *(undefined1 *)(unaff_x19 + 0x5e) = 1;
            }
            in_stack_000017a8 = CONCAT44(3,uVar55);
            goto LAB_02492630;
          }
        }
        if ((((in_stack_000017bc - 0x2007 < 0x23) &&
             ((1L << ((ulong)(in_stack_000017bc - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
            (in_stack_000017bc - 10 < 2)) || (in_stack_000017bc == 0xa0)) {
LAB_024944e4:
          if (((in_stack_000017bc != 0xad) && (in_stack_000017bc != 0x200b)) &&
             (in_stack_000017bc != 0x2060)) {
            lVar29 = *in_stack_00000150;
            if ((lVar29 == 0) || (lVar43 = *(long *)(lVar29 + 0x50), lVar43 == 0))
            goto LAB_0249920c;
            if (*(uint *)(lVar43 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar43 = lVar43 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
            *(int *)(lVar43 + 0x2c) = *(int *)(lVar43 + 0x2c) + 1;
            *(int *)(lVar29 + 0x20) = *(int *)(lVar29 + 0x20) + 1;
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
             (lVar29 = *(long *)(*in_stack_00000150 + 0x50), lVar29 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
LAB_024949c4:
          *(int *)(lVar29 + 0x20) = *(int *)(lVar29 + 0x20) + 1;
        }
LAB_02494abc:
        if (((int)unaff_x19[0x5b] == 1) && ((in_stack_000017bc == 0x2d || (unaff_w20 != 1)))) {
          if (unaff_x19[0xca] == 0) goto LAB_0249920c;
          fVar54 = *(float *)(unaff_x19 + 0x3c);
          iVar13 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
          if (unaff_x19[0xca] == 0) goto LAB_0249920c;
          fVar52 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
          lVar29 = unaff_x19[0xc9];
          fVar51 = fStack0000000000000084;
          if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
            fVar51 = 1.0;
          }
          if ((lVar29 == 0) || (*(long *)(lVar29 + 0x20) == 0)) goto LAB_0249920c;
          fVar59 = *(float *)((long)unaff_x19 + 0x3fc);
          fVar62 = *(float *)(lVar29 + 0x2c);
          fVar57 = (float)FUN_026fd668(*(long *)(lVar29 + 0x20),0);
          fVar60 = *_fStack0000000000000098;
          fVar57 = fVar59 * (fVar54 / (float)iVar13) * fVar52 * fVar51 * fVar62 * fVar57;
          fVar54 = *_fStack0000000000000088;
          if ((in_stack_000017bc == 10) &&
             (*(int *)((long)unaff_x19 + 0x48c) != (int)unaff_x19[0x92])) {
            if ((*in_stack_00000150 == 0) ||
               (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0)) goto LAB_0249920c;
            uVar55 = *(int *)((long)unaff_x19 + 0x48c) - 1;
            if (*(uint *)(lVar29 + 0x18) <= uVar55)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            if (unaff_x19[0xca] == 0) goto LAB_0249920c;
            fVar51 = *(float *)(lVar29 + (long)(int)uVar55 * (long)iVar17 + 0x60);
            iVar13 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
            if (unaff_x19[0xca] == 0) goto LAB_0249920c;
            fVar59 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
            lVar29 = unaff_x19[0xc9];
            fVar52 = fStack0000000000000084;
            if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
              fVar52 = 1.0;
            }
            if ((lVar29 == 0) || (*(long *)(lVar29 + 0x20) == 0)) goto LAB_0249920c;
            fVar62 = *(float *)((long)unaff_x19 + 0x3fc);
            fVar63 = *(float *)(lVar29 + 0x2c);
            fVar57 = (float)FUN_026fd668(*(long *)(lVar29 + 0x20),0);
            if ((*in_stack_00000150 == 0) ||
               (lVar29 = *(long *)(*in_stack_00000150 + 0x50), lVar29 == 0)) goto LAB_0249920c;
            if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
            fVar60 = *(float *)(lVar29 + 0x60);
            fVar54 = *(float *)(lVar29 + 100);
            fVar57 = fVar62 * (fVar51 / (float)iVar13) * fVar59 * fVar52 * fVar63 * fVar57;
          }
          fVar62 = *(float *)(unaff_x19 + 0x9a);
          fVar52 = *(float *)(unaff_x19 + 0x96);
          fVar63 = *(float *)((long)unaff_x19 + 0x4c4);
          fVar51 = 0.0;
          fVar59 = 0.0;
          if ((0.0 < fVar62) && (fVar59 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
            fVar59 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
          }
          fVar65 = *(float *)(unaff_x19 + 199);
          if ((char)unaff_x19[0x1d] == '\0') {
            if ((unaff_x19[0xc9] == 0) || (lVar29 = *(long *)(unaff_x19[0xc9] + 0x20), lVar29 == 0))
            goto LAB_0249920c;
            FUN_026fd62c(&stack0x00000880,lVar29,0);
            unaff_x28 = &stack0x00000880;
            fVar51 = (float)FUN_026fd474(&stack0x000016e0,0);
          }
          puVar9 = System_Threading_Mutex_TypeInfo;
          fVar61 = *(float *)(unaff_x19 + 0x6b);
          fVar54 = (in_stack_00000090 - fVar60) - fVar54;
          bVar11 = true;
          if ((fVar61 <= fVar54) && (bVar11 = false, !NAN(fVar61))) {
            bVar11 = fVar61 == -1.0;
          }
          if (!bVar11) {
            fVar54 = fVar61;
          }
          fVar60 = _DAT_0294c6e8;
          if ((uVar34 & 0x18) == 0) {
            fVar60 = 1.0;
          }
          if (((fVar52 - (fVar63 - fVar62)) + fVar59 < fStack00000000000000a4) &&
             (ABS(fVar65) + fVar57 * fVar51 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) <
              fVar60 * fVar54)) {
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_024d69d4();
            lVar29 = *(long *)(*(long *)puVar9 + 0xb8);
            memcpy(&stack0x00000508,(void *)(lVar29 + 0x788),0x378);
            FUN_013b86dc(lVar29 + 0x11f0,&stack0x00000508,
                         *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__
                        );
          }
        }
        fVar54 = 1.0;
        lVar29 = *in_stack_00000150;
        if ((lVar29 == 0) || (lVar43 = *(long *)(lVar29 + 0x38), lVar43 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar43 + 0x18) <= *in_stack_00000148)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar55 = *(uint *)(unaff_x19 + 0x94);
        lVar43 = lVar43 + (int)*in_stack_00000148 * unaff_x27;
        *(uint *)(lVar43 + 100) = uVar55;
        *(int *)(lVar43 + 0x68) = (int)unaff_x19[0x95];
        if (((unaff_w20 & 1) == 0) &&
           ((0xd < in_stack_000017bc || ((1 << (ulong)(in_stack_000017bc & 0x1f) & 0x2c00U) == 0))))
        {
          lVar29 = *(long *)(lVar29 + 0x50);
          if (lVar29 == 0) goto LAB_0249920c;
LAB_02494e68:
          if (*(uint *)(lVar29 + 0x18) <= uVar55)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          *(int *)(lVar29 + (long)(int)uVar55 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
        }
        else {
          lVar29 = *(long *)(lVar29 + 0x50);
          if (lVar29 == 0) goto LAB_0249920c;
          if (*(uint *)(lVar29 + 0x18) <= uVar55)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          if (*(int *)(lVar29 + (long)(int)uVar55 * 0x5c + 0x24) == 1) goto LAB_02494e68;
        }
        if (in_stack_000017bc == 9) {
          if (*in_stack_00000138 == 0) goto LAB_0249920c;
          fVar54 = (float)FUN_026fd208(*in_stack_00000138 + 0x50,0);
          if (*in_stack_00000138 == 0) goto LAB_0249920c;
          fVar57 = *(float *)(unaff_x19 + 199);
          fVar51 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000138 + 0x1b9));
          fVar54 = fVar58 * fVar54 * fVar51;
          fVar52 = fVar54 * (float)(int)(fVar57 / fVar54);
          uVar21 = (ulong)(uint)fVar52;
          if (fVar52 <= fVar57) {
            fVar52 = fVar57 + fVar54;
          }
LAB_02495058:
          *(float *)(unaff_x19 + 199) = fVar52;
        }
        else if (*(float *)(unaff_x19 + 0x55) == 0.0) {
          if ((char)unaff_x19[0x1d] == '\0') {
            if (*(char *)((long)unaff_x19 + 0x46c) != '\0') {
              fVar54 = (float)thunk_FUN_026935f0(_uStack0000000000000060,0);
            }
            fVar52 = *(float *)(unaff_x19 + 199);
            fVar57 = (float)FUN_026fd474(&stack0x00001770,0);
            if (unaff_x19[0x1f] != 0) {
              fVar51 = 1.0 - *(float *)((long)unaff_x19 + 0x2cc);
              fVar52 = fVar52 + fVar51 * (*(float *)((long)unaff_x19 + 0x2a4) +
                                         fVar58 * (fStack00000000000000ac + fVar54 * fVar57) +
                                         fStack00000000000000c8 *
                                         (in_stack_000000c0 +
                                         fStack00000000000000cc +
                                         *(float *)(unaff_x19[0x1f] + 0x1ac)));
              *(float *)(unaff_x19 + 199) = fVar52;
              goto joined_r0x02494fac;
            }
            goto LAB_0249920c;
          }
          if (*in_stack_00000138 == 0) goto LAB_0249920c;
          fVar52 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                   (*(float *)((long)unaff_x19 + 0x2a4) +
                   fVar58 * fStack00000000000000ac +
                   fStack00000000000000c8 *
                   (in_stack_000000c0 +
                   fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac)));
          uVar21 = (ulong)(uint)fVar52;
          fVar52 = *(float *)(unaff_x19 + 199) - fVar52;
          *(float *)(unaff_x19 + 199) = fVar52;
          if ((unaff_w29 != 0) || (in_stack_000017bc == 0x200b)) {
            fVar54 = fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
            uVar21 = (ulong)(uint)fVar54;
            fVar52 = fVar52 - fVar54;
            goto LAB_02495058;
          }
        }
        else {
          if (*in_stack_00000138 == 0) goto LAB_0249920c;
          fVar51 = *(float *)(unaff_x19 + 199);
          fVar52 = fVar51 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                            (*(float *)((long)unaff_x19 + 0x2a4) +
                            (*(float *)(unaff_x19 + 0x55) - fStack0000000000000080) +
                            fStack00000000000000c8 *
                            (fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac)));
          *(float *)(unaff_x19 + 199) = fVar52;
joined_r0x02494fac:
          if ((unaff_w29 != 0) || (uVar21 = (ulong)(uint)fVar51, in_stack_000017bc == 0x200b)) {
            fVar54 = fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
            uVar21 = (ulong)(uint)fVar54;
            fVar52 = fVar52 + fVar54;
            goto LAB_02495058;
          }
        }
        lVar29 = *in_stack_00000150;
        if ((lVar29 == 0) || (lVar43 = *(long *)(lVar29 + 0x38), lVar43 == 0)) goto LAB_0249920c;
        uVar55 = *in_stack_00000148;
        uVar34 = (uint)*(undefined8 *)(lVar43 + 0x18);
        if (uVar34 <= uVar55)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        *(float *)(lVar43 + (int)uVar55 * unaff_x27 + 0x144) = fVar52;
        uVar38 = in_stack_000017bc;
        if ((int)in_stack_000017bc < 0xd) {
          if ((in_stack_000017bc - 10 < 2) || (in_stack_000017bc == 3)) goto LAB_024950bc;
FUN_02495710:
          if (((unaff_w20 & in_stack_000017bc == 0x2d) != 0) ||
             ((float)uVar55 == in_stack_00000078._4_4_)) goto LAB_024950bc;
        }
        else {
          if (1 < in_stack_000017bc - 0x2028) {
            if (in_stack_000017bc != 0xd) goto FUN_02495710;
            uVar21 = 0;
            *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
            if ((float)uVar55 != in_stack_00000078._4_4_) goto LAB_0249572c;
          }
LAB_024950bc:
          if (0.0 < *(float *)(unaff_x19 + 0x9a)) {
            fVar54 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
            if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            if (((fStack000000000000004c < ABS(fVar54)) &&
                (*(char *)((long)unaff_x19 + 700) == '\0')) &&
               (*(char *)((long)unaff_x19 + 0x334) == '\0')) {
              FUN_024d6ca8(fVar54);
              *(float *)((long)unaff_x19 + 0x4bc) = *(float *)((long)unaff_x19 + 0x4bc) - fVar54;
              *(float *)(unaff_x19 + 0x9a) = fVar54 + *(float *)(unaff_x19 + 0x9a);
              puVar9 = System_Threading_Mutex_TypeInfo;
              lVar29 = *(long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(lVar29 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar29 = *(long *)puVar9;
              }
              lVar43 = *(long *)(lVar29 + 0xb8);
              if (*(int *)(lVar43 + 0x7ac) == (int)unaff_x19[0x94]) {
                if (*(int *)(lVar29 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar43 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
                }
                FUN_013b8de4(lVar43 + 0x11f0,&stack0x00000880,
                             *(undefined8 *)
                              Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                            );
                lVar29 = *(long *)System_Threading_Mutex_TypeInfo;
                memcpy((void *)(*(long *)(lVar29 + 0xb8) + 0x788),&stack0x00000880,0x378);
                lVar29 = *(long *)(lVar29 + 0xb8);
                *(float *)(lVar29 + 0x7bc) = fVar54 + *(float *)(lVar29 + 0x7bc);
                *(float *)(lVar29 + 0x800) = fVar54 + *(float *)(lVar29 + 0x800);
                memcpy(&stack0x00000190,(void *)(lVar29 + 0x788),0x378);
                FUN_013b86dc(lVar29 + 0x11f0,&stack0x00000190,
                             *(undefined8 *)
                              Method_System_Collections_Generic_List<TextStyle>_get_Item__);
              }
            }
          }
          fVar52 = *(float *)(unaff_x19 + 0x9a);
          *(undefined1 *)((long)unaff_x19 + 0x334) = 0;
          fVar51 = *(float *)((long)unaff_x19 + 0x4c4) - fVar52;
          fVar54 = *(float *)((long)unaff_x19 + 0x4bc);
          if (fVar51 <= *(float *)((long)unaff_x19 + 0x4bc)) {
            fVar54 = fVar51;
          }
          *(float *)((long)unaff_x19 + 0x4bc) = fVar54;
          fVar57 = *(float *)(unaff_x19 + 0x98);
          if (unaff_x28[0xf34] == '\0') {
            in_stack_000017b8 = fVar54;
          }
          if ((*(char *)((long)unaff_x19 + 0x32c) != '\0') &&
             (((int)unaff_x19[100] <= *(int *)((long)unaff_x19 + 0x48c) ||
              ((int)unaff_x19[0x65] <= (int)unaff_x19[0x94])))) {
            unaff_x28[0xf34] = 1;
          }
          lVar29 = *in_stack_00000150;
          if ((lVar29 == 0) || (lVar43 = *(long *)(lVar29 + 0x50), lVar43 == 0)) goto LAB_0249920c;
          uVar55 = *(uint *)(unaff_x19 + 0x94);
          if (*(uint *)(lVar43 + 0x18) <= uVar55)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar35 = lVar43 + (long)(int)uVar55 * 0x5c;
          *(int *)(lVar35 + 0x34) = (int)unaff_x19[0x92];
          iVar13 = (int)unaff_x19[0x92];
          if ((int)unaff_x19[0x92] <= *(int *)((long)unaff_x19 + 0x494)) {
            iVar13 = *(int *)((long)unaff_x19 + 0x494);
          }
          *(int *)((long)unaff_x19 + 0x494) = iVar13;
          *(int *)(lVar35 + 0x38) = iVar13;
          *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x48c);
          *(undefined4 *)(lVar35 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x48c);
          iVar13 = *(int *)((long)unaff_x19 + 0x494);
          if (*(int *)((long)unaff_x19 + 0x494) <= *(int *)((long)unaff_x19 + 0x49c)) {
            iVar13 = *(int *)((long)unaff_x19 + 0x49c);
          }
          *(int *)((long)unaff_x19 + 0x49c) = iVar13;
          *(int *)(lVar35 + 0x40) = iVar13;
          *(int *)(lVar35 + 0x24) = (*(int *)(lVar35 + 0x3c) - *(int *)(lVar35 + 0x34)) + 1;
          *(undefined4 *)(lVar35 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
          lVar29 = *(long *)(lVar29 + 0x38);
          if (lVar29 == 0) goto LAB_0249920c;
          if (*(uint *)(lVar29 + 0x18) <= *(uint *)((long)unaff_x19 + 0x494))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar66 = *(undefined4 *)
                    (lVar29 + (int)*(uint *)((long)unaff_x19 + 0x494) * unaff_x27 + 0x11c);
          lVar43 = lVar43 + (long)(int)uVar55 * 0x5c;
          *(float *)(lVar43 + 0x70) = fVar51;
          *(undefined4 *)(lVar43 + 0x6c) = uVar66;
          lVar29 = *in_stack_00000150;
          if ((lVar29 == 0) || (lVar43 = *(long *)(lVar29 + 0x50), lVar43 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar43 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar29 = *(long *)(lVar29 + 0x38);
          if (lVar29 == 0) goto LAB_0249920c;
          if (*(uint *)(lVar29 + 0x18) <= *(uint *)((long)unaff_x19 + 0x49c))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar66 = *(undefined4 *)
                    (lVar29 + (int)*(uint *)((long)unaff_x19 + 0x49c) * unaff_x27 + 0x128);
          fVar57 = fVar57 - fVar52;
          lVar43 = lVar43 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
          *(float *)(lVar43 + 0x78) = fVar57;
          *(undefined4 *)(lVar43 + 0x74) = uVar66;
          lVar29 = *in_stack_00000150;
          if ((lVar29 == 0) || (lVar35 = *(long *)(lVar29 + 0x50), lVar35 == 0)) goto LAB_0249920c;
          lVar20 = (long)(int)*(uint *)(unaff_x19 + 0x94);
          if (*(uint *)(lVar35 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar43 = lVar35 + lVar20 * 0x5c;
          *(float *)(lVar43 + 0x44) = *(float *)(lVar43 + 0x74) - fVar58 * in_stack_00000128;
          *(float *)(lVar43 + 0x5c) = fStack00000000000000d4;
          if (*(int *)(lVar43 + 0x24) == 1) {
            *(int *)(lVar35 + lVar20 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
          }
          if ((*in_stack_00000138 == 0) || (lVar43 = *(long *)(lVar29 + 0x38), lVar43 == 0))
          goto LAB_0249920c;
          lVar47 = (long)(int)*(uint *)((long)unaff_x19 + 0x49c);
          uVar34 = (uint)*(undefined8 *)(lVar43 + 0x18);
          if (uVar34 <= *(uint *)((long)unaff_x19 + 0x49c))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          if ((*(char *)(lVar43 + lVar47 * unaff_x27 + 0x194) == '\0') &&
             (lVar47 = (long)(int)*(uint *)(unaff_x19 + 0x93), uVar34 <= *(uint *)(unaff_x19 + 0x93)
             )) goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar52 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                   (fStack00000000000000c8 *
                    (in_stack_000000c0 +
                    fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac)) -
                   *(float *)((long)unaff_x19 + 0x2a4));
          fVar54 = -fVar52;
          if ((char)unaff_x19[0x1d] != '\0') {
            fVar54 = fVar52;
          }
          lVar35 = lVar35 + lVar20 * 0x5c;
          *(float *)(lVar35 + 0x58) = *(float *)(lVar43 + lVar47 * unaff_x27 + 0x144) + fVar54;
          fVar54 = *(float *)(unaff_x19 + 0x9a);
          *(float *)(lVar35 + 0x48) = fStack0000000000000050 + (fVar57 - fVar51);
          *(float *)(lVar35 + 0x4c) = fVar57;
          uVar21 = (ulong)(uint)(0.0 - fVar54);
          *(float *)(lVar35 + 0x50) = 0.0 - fVar54;
          *(float *)(lVar35 + 0x54) = fVar51;
          plVar44 = (long *)System_Threading_Mutex_TypeInfo;
          if ((int)in_stack_000017bc < 0x2d) {
            if (in_stack_000017bc - 10 < 2) {
UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__OnSelectEntering:
              if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              plVar48 = (long *)StringLiteral_302;
              FUN_024d69d4();
              lVar29 = unaff_x19[0x6c];
              *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
              iVar13 = (int)unaff_x19[0x94] + 1;
              *(int *)(unaff_x19 + 0x94) = iVar13;
              *(int *)(unaff_x19 + 0x92) = *(int *)((long)unaff_x19 + 0x48c) + 1;
              if ((lVar29 != 0) && (*(long *)(lVar29 + 0x50) != 0)) {
                if (*(int *)(*(long *)(lVar29 + 0x50) + 0x18) <= iVar13) {
                  FUN_024d6e60();
                  lVar29 = unaff_x19[0x6c];
                  if (lVar29 == 0) goto LAB_0249920c;
                }
                lVar29 = *(long *)(lVar29 + 0x38);
                if (lVar29 != 0) {
                  if (*in_stack_00000148 < *(uint *)(lVar29 + 0x18)) {
                    fVar54 = *(float *)(lVar29 + (int)*in_stack_00000148 * unaff_x27 + 0x154);
                    if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
                      fVar51 = 0.0;
                      if ((in_stack_000017bc == 0x2029) || (in_stack_000017bc == 10)) {
                        fVar51 = *(float *)((long)unaff_x19 + 0x2c4);
                      }
                      uVar27 = 0;
                      fVar51 = *(float *)(unaff_x19 + 0x9a) +
                               fVar54 + (0.0 - *(float *)((long)unaff_x19 + 0x4c4)) +
                               fStack0000000000000054 *
                               (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4)) +
                               fStack00000000000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar51);
                    }
                    else {
                      if ((in_stack_000017bc == 0x2029) || (fVar51 = 0.0, in_stack_000017bc == 10))
                      {
                        fVar51 = *(float *)((long)unaff_x19 + 0x2c4);
                      }
                      uVar27 = 1;
                      fVar51 = *(float *)(unaff_x19 + 0x9a) +
                               *(float *)(unaff_x19 + 0x57) +
                               fStack00000000000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar51);
                    }
                    *(float *)(unaff_x19 + 0x9a) = fVar51;
                    *(undefined1 *)((long)unaff_x19 + 700) = uVar27;
                    lVar29 = *plVar44;
                    if (*(int *)(lVar29 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                      lVar29 = *plVar44;
                    }
                    uVar23 = *(undefined8 *)(*(long *)(lVar29 + 0xb8) + 0x15a8);
                    *(float *)(unaff_x19 + 0x99) = fVar54;
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
              uVar38 = 3;
            }
          }
          else if ((in_stack_000017bc - 0x2028 < 2) || (in_stack_000017bc == 0x2d))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__OnSelectEntering;
        }
LAB_0249572c:
        uVar55 = *in_stack_00000148;
        if (uVar34 <= uVar55)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (*(char *)(lVar43 + (int)uVar55 * unaff_x27 + 0x194) != '\0') {
          lVar43 = lVar43 + (int)uVar55 * unaff_x27;
          uVar22 = *(ulong *)(lVar43 + 0x11c);
          uVar21 = *(ulong *)(in_stack_00000070 + 0x230);
          *(ulong *)(in_stack_00000070 + 0x230) =
               uVar22 ^ (uVar22 ^ uVar21) &
                        CONCAT44(-(uint)((float)(uVar21 >> 0x20) < (float)(uVar22 >> 0x20)),
                                 -(uint)((float)uVar21 < (float)uVar22));
          uVar22 = *(ulong *)(in_stack_00000070 + 0x238);
          uVar21 = *(ulong *)(lVar43 + 0x128);
          *(ulong *)(in_stack_00000070 + 0x238) =
               uVar21 ^ (uVar21 ^ uVar22) &
                        CONCAT44(-(uint)((float)(uVar21 >> 0x20) < (float)(uVar22 >> 0x20)),
                                 -(uint)((float)uVar21 < (float)uVar22));
        }
        if (((int)unaff_x19[0x5b] == 5) &&
           ((0xd < uVar38 || ((1 << (ulong)(uVar38 & 0x1f) & 0x2c00U) == 0)))) {
          lVar43 = *(long *)(lVar29 + 0x58);
          if (lVar43 == 0) goto LAB_0249920c;
          iVar13 = (int)unaff_x19[0x95] + 1;
          if (*(int *)(lVar43 + 0x18) < iVar13) {
            if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            FUN_01147c08((long *)(lVar29 + 0x58),iVar13,1,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerMove__);
            lVar29 = *in_stack_00000150;
            if (lVar29 == 0) goto LAB_0249920c;
          }
          lVar43 = *(long *)(lVar29 + 0x58);
          if (lVar43 == 0) goto LAB_0249920c;
          uVar34 = *(uint *)(unaff_x19 + 0x95);
          lVar35 = (long)(int)uVar34;
          uVar55 = *(uint *)(lVar43 + 0x18);
          if (uVar55 <= uVar34)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar20 = lVar43 + lVar35 * 0x14;
          fVar51 = *(float *)(lVar20 + 0x30);
          uVar21 = (ulong)(uint)fVar51;
          *(undefined4 *)(lVar20 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
          fVar54 = *(float *)((long)unaff_x19 + 0x4bc);
          if (fVar51 <= *(float *)((long)unaff_x19 + 0x4bc)) {
            fVar54 = fVar51;
          }
          *(float *)(lVar20 + 0x30) = fVar54;
          uVar38 = *(uint *)((long)unaff_x19 + 0x48c);
          if (uVar38 == 0 && uVar34 == 0) {
            *(uint *)(lVar43 + lVar35 * 0x14 + 0x20) = uVar38;
          }
          else {
            uVar45 = uVar38 - 1;
            if (0 < (int)uVar38) {
              lVar29 = *(long *)(lVar29 + 0x38);
              if (lVar29 == 0) goto LAB_0249920c;
              if (*(uint *)(lVar29 + 0x18) <= uVar45)
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              if (uVar34 != *(uint *)(lVar29 + (long)(int)uVar45 * (long)iVar17 + 0x68)) {
                if (uVar34 - 1 < uVar55) {
                  *(uint *)(lVar43 + 0x20 + (long)(int)(uVar34 - 1) * 0x14 + 4) = uVar45;
                  *(uint *)(lVar43 + 0x20 + lVar35 * 0x14) = uVar38;
                  goto LAB_024957b0;
                }
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              }
            }
            if ((float)uVar38 == in_stack_00000078._4_4_) {
              *(float *)(lVar43 + lVar35 * 0x14 + 0x24) = in_stack_00000078._4_4_;
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
              lVar29 = FUN_024e94b0(0);
              if ((lVar29 == 0) || (*(long *)(lVar29 + 0x10) == 0)) goto LAB_0249920c;
              uVar22 = FUN_0129aa60(*(long *)(lVar29 + 0x10),&stack0x00000880,
                                    *(undefined8 *)
                                     System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                                   );
              if ((int)*in_stack_00000148 < (int)in_stack_00000078._4_4_) {
                lVar29 = FUN_024e94b0(0);
                if (((lVar29 != 0) && (*in_stack_00000150 != 0)) &&
                   (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 != 0)) {
                  if (*in_stack_00000148 + 1 < *(uint *)(lVar43 + 0x18)) {
                    if (*(long *)(lVar29 + 0x18) != 0) {
                      in_stack_00000880 =
                           (uint)*(ushort *)
                                  (lVar43 + (long)(int)(*in_stack_00000148 + 1) * (long)iVar17 +
                                  0x20);
                      uVar25 = FUN_0129aa60(*(long *)(lVar29 + 0x18),&stack0x00000880,
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
        plVar44 = (long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar48 = (long *)StringLiteral_302;
        FUN_024d69d4();
        *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
      }
LAB_02492630:
      do {
        fVar54 = 1.0;
        in_stack_00001788 = in_stack_00001788 + 1;
        lVar29 = unaff_x19[0x8e];
        if (lVar29 == 0) goto LAB_0249920c;
        if ((int)*(uint *)(lVar29 + 0x18) <= (int)in_stack_00001788) {
LAB_02495f1c:
          fVar58 = (float)uVar21;
          if (((char)unaff_x19[0x46] != '\0') &&
             (fVar58 = DAT_02956ccc,
             DAT_02956ccc < *(float *)((long)unaff_x19 + 0x234) - *(float *)(unaff_x19 + 0x47))) {
            fVar58 = *(float *)((long)unaff_x19 + 0x1dc);
            fVar54 = *(float *)((long)unaff_x19 + 0x24c);
            if ((fVar58 < fVar54) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
              if (*(float *)((long)unaff_x19 + 0x2cc) < *(float *)(unaff_x19 + 0x59) / 100.0) {
                *(undefined4 *)((long)unaff_x19 + 0x2cc) = 0;
              }
              fVar50 = (*(float *)((long)unaff_x19 + 0x234) - fVar58) * 0.5;
              if (fVar50 <= DAT_028aa298) {
                fVar50 = DAT_028aa298;
              }
              *(float *)(unaff_x19 + 0x47) = fVar58;
              fVar50 = (fVar58 + fVar50) * 20.0 + 0.5;
              fVar58 = DAT_02958220;
              if (fVar50 != INFINITY) {
                fVar58 = (float)(int)fVar50 / 20.0;
              }
              if (fVar54 <= fVar58) {
                fVar58 = fVar54;
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
            if (*(int *)(*plVar48 + 0xe0) == 0) {
              thunk_FUN_00d32864(*plVar48);
            }
            FUN_02660dac(uVar23,0);
          }
          if ((*in_stack_00000148 == 0) || ((*in_stack_00000148 == 1 && (in_stack_000017bc == 3))))
          {
            (**(code **)(*unaff_x19 + 0x948))();
            goto LAB_02496098;
          }
          lVar29 = *plVar44;
          if (*(int *)(lVar29 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar29 = *plVar44;
          }
          puVar9 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
          lVar29 = **(long **)(lVar29 + 0xb8);
          if (lVar29 == 0) goto LAB_0249920c;
          if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0xd0))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          iVar17 = *(int *)(lVar29 + (long)(int)*(uint *)(unaff_x19 + 0xd0) * 0x38 + 0x54) << 2;
          if ((*in_stack_00000150 == 0) ||
             (lVar29 = *(long *)(*in_stack_00000150 + 0x60), lVar29 == 0)) goto LAB_0249920c;
          if (*(int *)(*(long *)PTR_DAT_033ed410 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (*(int *)(lVar29 + 0x18) == 0)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          FUN_024e7d94(lVar29 + 0x20,0,0);
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
          _in_stack_000000c0 =
               *(undefined8 *)
                (*(float **)
                  (*(long *)
                    Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                  + 0xb8) + 1);
          lVar29 = unaff_x19[0xe2];
          _in_stack_00000090 = _in_stack_000000c0;
          fStack0000000000000098 = fStack00000000000000c8;
          if (iVar13 < 0x401) {
            if (iVar13 == 0x100) {
              if (lVar29 == 0) goto LAB_0249920c;
              if (*(uint *)(lVar29 + 0x18) < 2)
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              uVar23 = *(undefined8 *)(lVar29 + 0x30);
              if ((int)unaff_x19[0x5b] == 5) {
                if ((*in_stack_00000150 == 0) ||
                   (lVar43 = *(long *)(*in_stack_00000150 + 0x58), lVar43 == 0)) goto LAB_0249920c;
                if (*(uint *)(lVar43 + 0x18) <= uStack000000000000002c)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                fVar58 = *(float *)(lVar43 + (long)(int)uStack000000000000002c * 0x14 + 0x28);
              }
              else {
                fVar58 = *(float *)(unaff_x19 + 0x96);
              }
              fStack0000000000000098 = fStack0000000000000030 + 0.0 + *(float *)(lVar29 + 0x2c);
              fVar58 = (0.0 - fVar58) - fStack0000000000000020;
            }
            else if (iVar13 == 0x200) {
              if (lVar29 == 0) goto LAB_0249920c;
              if ((*(int *)(lVar29 + 0x18) == 1) || (*(int *)(lVar29 + 0x18) == 0))
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              fStack0000000000000098 = (*(float *)(lVar29 + 0x20) + *(float *)(lVar29 + 0x2c)) * 0.5
              ;
              uVar23 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar29 + 0x24) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar29 + 0x30) >> 0x20)) * 0.5,
                                ((float)*(undefined8 *)(lVar29 + 0x24) +
                                (float)*(undefined8 *)(lVar29 + 0x30)) * 0.5);
              if ((int)unaff_x19[0x5b] == 5) {
                if ((*in_stack_00000150 == 0) ||
                   (lVar29 = *(long *)(*in_stack_00000150 + 0x58), lVar29 == 0)) goto LAB_0249920c;
                if (*(uint *)(lVar29 + 0x18) <= uStack000000000000002c)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                lVar29 = lVar29 + (long)(int)uStack000000000000002c * 0x14;
                fStack0000000000000098 = fStack0000000000000030 + 0.0 + fStack0000000000000098;
                fVar58 = ((fStack0000000000000020 + *(float *)(lVar29 + 0x28) +
                          *(float *)(lVar29 + 0x30)) - fStack0000000000000024) * -0.5 + 0.0;
              }
              else {
                fStack0000000000000098 = fStack0000000000000030 + 0.0 + fStack0000000000000098;
                fVar58 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x96) + in_stack_000017b8
                          ) - fStack0000000000000024) * -0.5 + 0.0;
              }
            }
            else {
              if (iVar13 != 0x400) goto LAB_024965d0;
              if (lVar29 == 0) goto LAB_0249920c;
              if (*(int *)(lVar29 + 0x18) == 0)
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              uVar23 = *(undefined8 *)(lVar29 + 0x24);
              if ((int)unaff_x19[0x5b] == 5) {
                if ((*in_stack_00000150 == 0) ||
                   (lVar43 = *(long *)(*in_stack_00000150 + 0x58), lVar43 == 0)) goto LAB_0249920c;
                if (*(uint *)(lVar43 + 0x18) <= uStack000000000000002c)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                in_stack_000017b8 =
                     *(float *)(lVar43 + (long)(int)uStack000000000000002c * 0x14 + 0x30);
              }
              fStack0000000000000098 = fStack0000000000000030 + 0.0 + *(float *)(lVar29 + 0x20);
              fVar58 = fStack0000000000000024 + (0.0 - in_stack_000017b8);
            }
            _in_stack_00000090 =
                 CONCAT44((float)((ulong)uVar23 >> 0x20) + 0.0,(float)uVar23 + fVar58);
          }
          else if (iVar13 == 0x800) {
            if (lVar29 == 0) goto LAB_0249920c;
            if ((*(int *)(lVar29 + 0x18) == 1) || (*(int *)(lVar29 + 0x18) == 0))
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            fVar58 = ((float)*(undefined8 *)(lVar29 + 0x24) + (float)*(undefined8 *)(lVar29 + 0x30))
                     * 0.5;
            fStack0000000000000098 =
                 fStack0000000000000030 + 0.0 +
                 (*(float *)(lVar29 + 0x20) + *(float *)(lVar29 + 0x2c)) * 0.5;
            _in_stack_00000090 =
                 CONCAT44(((float)((ulong)*(undefined8 *)(lVar29 + 0x24) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar29 + 0x30) >> 0x20)) * 0.5 + 0.0,
                          fVar58 + 0.0);
          }
          else {
            if (iVar13 == 0x1000) {
              if (lVar29 == 0) goto LAB_0249920c;
              if ((*(int *)(lVar29 + 0x18) == 1) || (*(int *)(lVar29 + 0x18) == 0))
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              fVar58 = (float)*(undefined8 *)(lVar29 + 0x24) + (float)*(undefined8 *)(lVar29 + 0x30)
              ;
              fVar54 = (float)((ulong)*(undefined8 *)(lVar29 + 0x24) >> 0x20) +
                       (float)((ulong)*(undefined8 *)(lVar29 + 0x30) >> 0x20);
              fStack0000000000000020 =
                   fStack0000000000000020 + *(float *)(unaff_x19 + 0x9c) +
                   *(float *)(unaff_x19 + 0x9b);
              fStack0000000000000098 =
                   fStack0000000000000030 + 0.0 +
                   (*(float *)(lVar29 + 0x20) + *(float *)(lVar29 + 0x2c)) * 0.5;
            }
            else {
              if (iVar13 != 0x2000) goto LAB_024965d0;
              if (lVar29 == 0) goto LAB_0249920c;
              if ((*(int *)(lVar29 + 0x18) == 1) || (*(int *)(lVar29 + 0x18) == 0))
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              fVar58 = (float)*(undefined8 *)(lVar29 + 0x24) + (float)*(undefined8 *)(lVar29 + 0x30)
              ;
              fVar54 = (float)((ulong)*(undefined8 *)(lVar29 + 0x24) >> 0x20) +
                       (float)((ulong)*(undefined8 *)(lVar29 + 0x30) >> 0x20);
              fStack0000000000000020 = *(float *)((long)unaff_x19 + 0x4b4) - fStack0000000000000020;
              fStack0000000000000098 =
                   fStack0000000000000030 + 0.0 +
                   (*(float *)(lVar29 + 0x20) + *(float *)(lVar29 + 0x2c)) * 0.5;
            }
            fVar58 = fVar58 * 0.5;
            _in_stack_00000090 =
                 CONCAT44(fVar54 * 0.5 + 0.0,
                          fVar58 + (0.0 - (fStack0000000000000020 - fStack0000000000000024) * 0.5));
          }
LAB_024965d0:
          if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
          uVar23 = FUN_0285a188(unaff_x19[0xe4],0);
          if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar9);
          }
          uVar21 = FUN_0268b4e0(uVar23,0,0);
          lVar29 = FUN_024c933c();
          if (lVar29 == 0) goto LAB_0249920c;
          FUN_026a125c(lVar29,0);
          *(float *)(unaff_x19 + 0xe1) = fVar58;
          if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
          iVar13 = FUN_02859798(unaff_x19[0xe4],0);
          if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
          fVar54 = (float)FUN_028598f0(unaff_x19[0xe4],0);
          __x = DAT_028aa048;
          dVar53 = modf(DAT_028aa048,(double *)&stack0x00000880);
          if (dVar53 == 0.5) {
            fVar50 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
            if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
              fVar50 = fVar50 + 1.0;
            }
          }
          else {
            fVar50 = 255.0;
          }
          dVar53 = modf(__x,(double *)&stack0x00000880);
          if (dVar53 == 0.5) {
            fVar51 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
            if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
              fVar51 = fVar51 + 1.0;
            }
          }
          else {
            fVar51 = 255.0;
          }
          dVar53 = modf(__x,(double *)&stack0x00000880);
          if (dVar53 == 0.5) {
            fVar52 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
            if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
              fVar52 = fVar52 + 1.0;
            }
          }
          else {
            fVar52 = 255.0;
          }
          dVar53 = modf(__x,(double *)&stack0x00000880);
          if (dVar53 == 0.5) {
            fVar57 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
            if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
              fVar57 = fVar57 + 1.0;
            }
          }
          else {
            fVar57 = 255.0;
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
          lVar29 = *(long *)puVar10;
          if (*(int *)(lVar29 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar29 = *(long *)puVar10;
          }
          puVar30 = *(undefined4 **)(lVar29 + 0xb8);
          uVar22 = (ulong)(uint)puVar30[1];
          uVar25 = (ulong)(uint)puVar30[2];
          uVar56 = (ulong)(uint)puVar30[3];
          UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
                    (*puVar30,uVar22,uVar25,uVar56,&stack0x00001790,0x4000ffff,0);
          if (*(int *)(*plVar44 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar29 = *in_stack_00000150;
          if (lVar29 == 0) goto LAB_0249920c;
          uVar14 = *in_stack_00000148;
          if ((int)uVar14 < 1) {
            fStack00000000000000ac = 0.0;
            iVar17 = 0;
            goto LAB_02498c58;
          }
          lVar29 = *(long *)(lVar29 + 0x38);
          fVar58 = ABS(fVar58);
          fVar59 = 1.0;
          if ((uVar21 & 1) == 0) {
            fVar59 = fVar58;
          }
          if (lVar29 == 0) goto LAB_0249920c;
          bVar8 = false;
          bVar11 = false;
          bVar7 = false;
          bVar12 = false;
          uStack0000000000000060 =
               (int)fVar50 & 0xffU | ((int)fVar51 & 0xffU) << 8 | ((int)fVar52 & 0xffU) << 0x10 |
               (int)fVar57 << 0x18;
          fStack00000000000000d0 = *(float *)(*(long *)(*plVar44 + 0xb8) + 0x15a8);
          fStack00000000000000cc = 0.0;
          fStack0000000000000058 = fStack00000000000000b0;
          _bStack000000000000005c = 0.0;
          fStack0000000000000034 = 0.0;
          fStack0000000000000088 = 0.0;
          fStack0000000000000030 = 0.0;
          uVar18 = 0;
          iVar49 = 0;
          lVar43 = 0x2e0;
          fVar51 = 0.0;
          fVar50 = 0.0;
          fStack00000000000000ac = 0.0;
          fStack0000000000000020 = 0.0;
          fStack000000000000004c = 0.0;
          fStack00000000000000a4 = fStack00000000000000b0;
          fStack00000000000000a8 = fStack00000000000000b4;
          fStack0000000000000050 = fStack00000000000000b4;
          fStack0000000000000054 = (float)uStack00000000000000a0;
          in_stack_00000078._4_4_ = fStack00000000000000b4;
          fStack0000000000000080 = fStack00000000000000b0;
          in_stack_00000068._4_4_ = uStack00000000000000a0;
          uVar55 = 0;
          uVar34 = 1;
          goto LAB_02496a50;
        }
        if (*(uint *)(lVar29 + 0x18) <= in_stack_00001788)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar14 = *(uint *)(lVar29 + (long)(int)in_stack_00001788 * 0xc + 0x20);
        if (uVar14 == 0) goto LAB_02495f1c;
        if (5 < in_stack_00000140) {
          uVar23 = FUN_0176eb1c(&stack0x000017bc,0);
          uVar19 = FUN_0176eb1c(&stack0x00001788,0);
          uVar23 = FUN_0160073c(*(undefined8 *)
                                 UnityEngine_Rendering_Universal_DebugValidationMode_var,uVar23,
                                *(undefined8 *)
                                 Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                                ,uVar19,0);
          if (*(int *)(*plVar48 + 0xe0) == 0) {
            thunk_FUN_00d32864(*plVar48);
          }
          FUN_026610e4(uVar23,0);
          in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
        }
        if ((*(char *)((long)unaff_x19 + 0x2fa) == '\0') || (uVar14 != 0x3c)) {
          if ((*in_stack_00000150 == 0) ||
             (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000148)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar29 = lVar29 + (int)*in_stack_00000148 * unaff_x27;
          *(undefined4 *)((long)unaff_x19 + 0x63c) = *(undefined4 *)(lVar29 + 0x2c);
          *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar29 + 0x58);
          unaff_x19[0x1f] = *(long *)(lVar29 + 0x38);
        }
        else {
          *(undefined1 *)((long)unaff_x19 + 0x429) = 1;
          *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
          uVar22 = FUN_024d0688();
          if (((uVar22 & 1) != 0) &&
             (in_stack_00001788 = in_stack_0000176c, in_stack_000017bc = uVar14,
             *(int *)((long)unaff_x19 + 0x63c) == 0)) goto LAB_02492630;
        }
        if ((unaff_x19[0x6c] == 0) || (lVar29 = *(long *)(unaff_x19[0x6c] + 0x38), lVar29 == 0))
        goto LAB_0249920c;
        uVar18 = *in_stack_00000148;
        if (*(uint *)(lVar29 + 0x18) <= uVar18)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar35 = (long)(int)uVar18;
        cVar28 = *(char *)(lVar29 + lVar35 * unaff_x27 + 0x5c);
        *(undefined1 *)((long)unaff_x19 + 0x429) = 0;
        lVar43 = unaff_x19[0x23];
        if ((uint)in_stack_000017a8 == uVar18) {
          uVar14 = (uint)((ulong)in_stack_000017a8 >> 0x20);
          unaff_w20 = 1;
          *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
          if (uVar14 == 0x2026) {
            lVar20 = unaff_x19[0xc9];
            lVar29 = lVar29 + lVar35 * unaff_x27;
            *(undefined4 *)(lVar29 + 0x2c) = 0;
            *(long *)(lVar29 + 0x30) = lVar20;
            *(long *)(lVar29 + 0x38) = unaff_x19[0xca];
            *(long *)(lVar29 + 0x50) = unaff_x19[0xcb];
            *(int *)(lVar29 + 0x58) = (int)unaff_x19[0xcc];
            *(undefined1 *)(unaff_x19 + 0x5e) = 1;
            in_stack_000017a8 = CONCAT44(3,uVar18 + 1);
          }
          else if (uVar14 == 3) {
            if ((*in_stack_00000138 == 0) ||
               (lVar20 = FUN_024b11ac(*in_stack_00000138,0), lVar20 == 0)) goto LAB_0249920c;
            FUN_01299bc0(lVar20,&stack0x00000bf8,&stack0x00000880,*(undefined8 *)PTR_DAT_033ef3c8);
            if (*(uint *)(lVar29 + 0x18) <= uVar18)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            unaff_w20 = 1;
            *(ulong *)(lVar29 + lVar35 * unaff_x27 + 0x30) =
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
             (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar29 + 0x18) <= uVar18)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar29 = lVar29 + (long)(int)uVar18 * (long)iVar17;
          *(undefined1 *)(lVar29 + 0x194) = 0;
          *(undefined2 *)(lVar29 + 0x20) = 0x200b;
          *(undefined4 *)(lVar29 + 100) = 0;
          *in_stack_00000148 = uVar18 + 1;
          goto LAB_02492630;
        }
        iVar13 = *(int *)((long)unaff_x19 + 0x63c);
        fVar51 = fVar54;
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
                  fVar51 = fStack0000000000000028;
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
            fVar51 = 1.0;
            if ((uVar22 & 1) != 0) {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar14 = FUN_016f95a8(uVar14,0);
LAB_02492a0c:
              uVar14 = uVar14 & 0xffff;
              fVar51 = 1.0;
            }
          }
          iVar13 = *(int *)((long)unaff_x19 + 0x63c);
          in_stack_000017bc = uVar14;
          if (iVar13 == 0) goto LAB_02492a20;
LAB_0249265c:
          if (iVar13 != 1) {
            lVar29 = *in_stack_00000150;
            in_stack_000000f0 = CONCAT44(fVar51,fVar50);
            unaff_s13 = 0.0;
            if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
              unaff_s13 = fVar58;
            }
            in_stack_00000130._4_4_ = 0.0;
            if (lVar29 == 0) goto LAB_0249920c;
            in_stack_00000120 = 0.0;
            in_stack_00000110 = 0.0;
            fStack00000000000000d0 = fVar58;
            goto LAB_02492e2c;
          }
          if ((*in_stack_00000150 == 0) ||
             (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000148)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar29 = lVar29 + (int)*in_stack_00000148 * unaff_x27;
          lVar35 = *(long *)(lVar29 + 0x40);
          unaff_x19[0xd2] = lVar35;
          *(undefined4 *)((long)unaff_x19 + 0x69c) = *(undefined4 *)(lVar29 + 0x48);
          if ((lVar35 == 0) || (lVar29 = FUN_024ebfa0(lVar35,0), lVar29 == 0)) goto LAB_0249920c;
          FUN_0132138c(lVar29,*(undefined4 *)((long)unaff_x19 + 0x69c),&stack0x00000880,
                       *(undefined8 *)System_Func<KeyValuePair<int,_int>,_int>_TypeInfo);
          lVar35 = CONCAT44(in_stack_00000884,in_stack_00000880);
          if (lVar35 != 0) {
            if (in_stack_000017bc == 0x3c) {
              in_stack_000017bc = *(int *)((long)unaff_x19 + 0x69c) + 0xe000;
            }
            else {
              lVar29 = *plVar44;
              if (*(int *)(lVar29 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar29 = *plVar44;
              }
              *(undefined4 *)((long)unaff_x19 + 0x1b4) =
                   *(undefined4 *)(*(long *)(lVar29 + 0xb8) + 0x68);
            }
            if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
            fVar58 = *(float *)(unaff_x19 + 0x3c);
            memmove(&stack0x00001700,(void *)(unaff_x19[0x1f] + 0x50),0x60);
            iVar13 = FUN_026fd110(&stack0x00001700,0);
            if (*in_stack_00000138 == 0) goto LAB_0249920c;
            memmove(&stack0x00001700,(void *)(*in_stack_00000138 + 0x50),0x60);
            fVar57 = (float)FUN_026fd120(&stack0x00001700,0);
            fVar52 = fStack0000000000000084;
            if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
              fVar52 = 1.0;
            }
            if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
            fVar52 = (fVar58 / (float)iVar13) * fVar57 * fVar52;
            iVar13 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
            fVar58 = *(float *)(unaff_x19 + 0x3c);
            if (iVar13 < 1) {
              if (*in_stack_00000138 == 0) goto LAB_0249920c;
              iVar13 = FUN_026fd110(*in_stack_00000138 + 0x50,0);
              if (*in_stack_00000138 == 0) goto LAB_0249920c;
              fVar57 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
              in_stack_00000110 = fStack0000000000000084;
              if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
                in_stack_00000110 = fVar54;
              }
              if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
              fVar54 = (float)FUN_026fd140(unaff_x19[0x1f] + 0x50,0);
              if (*(long *)(lVar35 + 0x20) == 0) goto LAB_0249920c;
              FUN_026fd62c(&stack0x00000880,*(long *)(lVar35 + 0x20),0);
              fVar59 = (float)FUN_026fd45c(&stack0x000016e0,0);
              if (*(long *)(lVar35 + 0x20) == 0) goto LAB_0249920c;
              fVar60 = *(float *)(lVar35 + 0x2c);
              fVar62 = (float)FUN_026fd668(*(long *)(lVar35 + 0x20),0);
              if (*in_stack_00000138 == 0) goto LAB_0249920c;
              in_stack_00000120 = (float)FUN_026fd140(*in_stack_00000138 + 0x50,0);
              if (*in_stack_00000138 == 0) goto LAB_0249920c;
              fVar63 = (float)FUN_026fd170(*in_stack_00000138 + 0x50,0);
              if (*in_stack_00000138 == 0) goto LAB_0249920c;
              fVar65 = *(float *)((long)unaff_x19 + 0x3fc);
              in_stack_00000130._4_4_ = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
              if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
              in_stack_00000130._4_4_ = fVar52 * fVar63 * fVar65 * in_stack_00000130._4_4_;
              in_stack_00000110 = (fVar58 / (float)iVar13) * fVar57 * in_stack_00000110;
              fStack00000000000000d0 = in_stack_00000110 * (fVar54 / fVar59) * fVar60 * fVar62;
              in_stack_00000110 = in_stack_00000110 / fStack00000000000000d0;
              in_stack_00000120 = in_stack_00000110 * in_stack_00000120;
              fVar58 = (float)FUN_026fd180(unaff_x19[0x1f] + 0x50,0);
              in_stack_00000110 = in_stack_00000110 * fVar58;
            }
            else {
              if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
              iVar13 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
              if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
              fVar54 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
              if (*(long *)(lVar35 + 0x20) == 0) goto LAB_0249920c;
              fVar59 = *(float *)(lVar35 + 0x2c);
              fVar57 = fStack0000000000000084;
              if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
                fVar57 = 1.0;
              }
              fVar60 = (float)FUN_026fd668(*(long *)(lVar35 + 0x20),0);
              if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
              in_stack_00000120 = (float)FUN_026fd140(unaff_x19[0xd2] + 0x48,0);
              if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
              fVar62 = (float)FUN_026fd170(unaff_x19[0xd2] + 0x48,0);
              if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
              fVar63 = *(float *)((long)unaff_x19 + 0x3fc);
              in_stack_00000130._4_4_ = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
              if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
              in_stack_00000130._4_4_ = fVar52 * fVar62 * fVar63 * in_stack_00000130._4_4_;
              fStack00000000000000d0 = (fVar58 / (float)iVar13) * fVar54 * fVar57 * fVar59 * fVar60;
              in_stack_00000110 = (float)FUN_026fd180(unaff_x19[0xd2] + 0x48,0);
            }
            lVar29 = unaff_x19[0x6c];
            unaff_x19[200] = lVar35;
            if ((lVar29 == 0) || (lVar35 = *(long *)(lVar29 + 0x38), lVar35 == 0))
            goto LAB_0249920c;
            if (*(uint *)(lVar35 + 0x18) <= *in_stack_00000148)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar35 = lVar35 + (int)*in_stack_00000148 * unaff_x27;
            *(undefined4 *)(lVar35 + 0x2c) = 1;
            *(float *)(lVar35 + 0x160) = fStack00000000000000d0;
            in_stack_00000128 = 0.0;
            *(long *)(lVar35 + 0x40) = unaff_x19[0xd2];
            *(long *)(lVar35 + 0x38) = unaff_x19[0x1f];
            *(int *)(lVar35 + 0x58) = (int)unaff_x19[0x23];
            *(int *)(unaff_x19 + 0x23) = (int)lVar43;
            goto LAB_02492e14;
          }
          goto LAB_02492630;
        }
        if (iVar13 != 0) goto LAB_0249265c;
LAB_02492a20:
        if ((*in_stack_00000150 == 0) ||
           (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0)) goto LAB_0249920c;
        uVar18 = *in_stack_00000148;
        uVar14 = *(uint *)(lVar29 + 0x18);
        if (uVar14 <= uVar18)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar43 = *(long *)(lVar29 + (int)uVar18 * unaff_x27 + 0x30);
        unaff_x19[200] = lVar43;
      } while (lVar43 == 0);
      lVar35 = lVar29 + (int)uVar18 * unaff_x27;
      lVar43 = *(long *)(lVar35 + 0x38);
      unaff_x19[0x1f] = lVar43;
      unaff_x19[0x22] = *(long *)(lVar35 + 0x50);
      *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar35 + 0x58);
      if (unaff_w20 == 0) {
LAB_02492ab4:
        if (lVar43 == 0) goto LAB_0249920c;
        fVar58 = *(float *)(unaff_x19 + 0x3c);
        iVar13 = FUN_026fd110(lVar43 + 0x50,0);
        lVar29 = unaff_x19[0x1f];
      }
      else {
        lVar35 = unaff_x19[0x8e];
        if (lVar35 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar35 + 0x18) <= in_stack_00001788)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if ((*(int *)(lVar35 + (long)(int)in_stack_00001788 * 0xc + 0x20) != 10) ||
           (uVar18 == *(uint *)(unaff_x19 + 0x92))) goto LAB_02492ab4;
        if (uVar14 <= uVar18 - 1)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (lVar43 == 0) goto LAB_0249920c;
        fVar58 = *(float *)(lVar29 + (long)(int)(uVar18 - 1) * (long)iVar17 + 0x60);
        iVar13 = FUN_026fd110(lVar43 + 0x50,0);
        lVar29 = *in_stack_00000138;
      }
      if (lVar29 == 0) goto LAB_0249920c;
      fVar57 = (float)FUN_026fd120(lVar29 + 0x50,0);
      fVar52 = fStack0000000000000084;
      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
        fVar52 = fVar54;
      }
      in_stack_00000110 = 0.0;
      in_stack_00000120 = 0.0;
      if ((unaff_w20 & in_stack_000017bc == 0x2026) == 0) {
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        in_stack_00000120 = (float)FUN_026fd140(*in_stack_00000138 + 0x50,0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        in_stack_00000110 = (float)FUN_026fd180(*in_stack_00000138 + 0x50,0);
      }
      lVar29 = unaff_x19[200];
      if ((lVar29 == 0) || (*(long *)(lVar29 + 0x20) == 0)) goto LAB_0249920c;
      fVar54 = *(float *)((long)unaff_x19 + 0x3fc);
      fVar59 = *(float *)(lVar29 + 0x2c);
      fStack00000000000000d0 = (float)FUN_026fd668(*(long *)(lVar29 + 0x20),0);
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      fVar60 = (float)FUN_026fd170(*in_stack_00000138 + 0x50,0);
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      fVar62 = *(float *)((long)unaff_x19 + 0x3fc);
      in_stack_00000130._4_4_ = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
      lVar29 = unaff_x19[0x6c];
      if ((lVar29 == 0) || (lVar43 = *(long *)(lVar29 + 0x38), lVar43 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar43 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar43 = lVar43 + (int)*in_stack_00000148 * unaff_x27;
      *(undefined4 *)(lVar43 + 0x2c) = 0;
      fVar52 = ((fVar51 * fVar58) / (float)iVar13) * fVar57 * fVar52;
      fStack00000000000000d0 = fVar52 * fVar54 * fVar59 * fStack00000000000000d0;
      *(float *)(lVar43 + 0x160) = fStack00000000000000d0;
      uVar14 = *(uint *)(unaff_x19 + 0x23);
      in_stack_00000130._4_4_ = fVar52 * fVar60 * fVar62 * in_stack_00000130._4_4_;
      if (uVar14 == 0) {
        in_stack_00000128 = *(float *)(unaff_x19 + 0xc2);
      }
      else {
        lVar43 = unaff_x19[0xe0];
        if (lVar43 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar43 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar43 = *(long *)(lVar43 + (long)(int)uVar14 * 8 + 0x20);
        if (lVar43 == 0) goto LAB_0249920c;
        in_stack_00000128 = *(float *)(lVar43 + 0x104);
      }
LAB_02492e14:
      in_stack_000000f0 = CONCAT44(fVar51,fVar50);
      unaff_s13 = 0.0;
      if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
        unaff_s13 = fStack00000000000000d0;
      }
LAB_02492e2c:
      lVar29 = *(long *)(lVar29 + 0x38);
      if (lVar29 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = lVar29 + (int)*in_stack_00000148 * unaff_x27;
      *(short *)(lVar29 + 0x20) = (short)in_stack_000017bc;
      *(int *)(lVar29 + 0x60) = (int)unaff_x19[0x3c];
      *(undefined4 *)(lVar29 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4e4);
      if ((unaff_x19[0x6c] == 0) || (lVar29 = *(long *)(unaff_x19[0x6c] + 0x38), lVar29 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      *(int *)(lVar29 + (int)*in_stack_00000148 * unaff_x27 + 0x168) = (int)unaff_x19[0x2a];
      if ((unaff_x19[0x6c] == 0) || (lVar29 = *(long *)(unaff_x19[0x6c] + 0x38), lVar29 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      *(undefined4 *)(lVar29 + (int)*in_stack_00000148 * unaff_x27 + 0x170) =
           *(undefined4 *)((long)unaff_x19 + 0x154);
      if ((unaff_x19[0x6c] == 0) || (lVar29 = *(long *)(unaff_x19[0x6c] + 0x38), lVar29 == 0))
      goto LAB_0249920c;
      uVar14 = *in_stack_00000148;
      FUN_013b78b8(in_stack_000000b8,&stack0x00000880,
                   *(undefined8 *)TMPro_TMP_Dropdown_OptionData_TypeInfo);
      if (*(uint *)(lVar29 + 0x18) <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = lVar29 + (int)uVar14 * unaff_x27;
      *(undefined4 *)(lVar29 + 0x18c) = in_stack_00000890;
      *(undefined8 *)(lVar29 + 0x184) = in_stack_00000888;
      *(ulong *)(lVar29 + 0x17c) = CONCAT44(in_stack_00000884,in_stack_00000880);
      if ((*in_stack_00000150 == 0) || (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      *(undefined4 *)(lVar29 + (int)*in_stack_00000148 * unaff_x27 + 400) =
           *(undefined4 *)((long)unaff_x19 + 0x254);
      if ((unaff_x19[200] == 0) || (lVar29 = *(long *)(unaff_x19[200] + 0x20), lVar29 == 0))
      goto LAB_0249920c;
      FUN_026fd62c(&stack0x00000bf8,lVar29,0);
      puVar9 = 
      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__;
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
        fStack00000000000000ac = 0.0;
        fVar54 = 0.0;
        fVar58 = 0.0;
      }
      else {
        if (unaff_x19[200] == 0) goto LAB_0249920c;
        uVar18 = *in_stack_00000148;
        uVar14 = *(uint *)(unaff_x19[200] + 0x28);
        if ((int)uVar18 < (int)in_stack_00000078._4_4_) {
          if ((*in_stack_00000150 == 0) ||
             (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar29 + 0x18) <= uVar18 + 1)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar29 = *(long *)(lVar29 + (long)(int)(uVar18 + 1) * (long)iVar17 + 0x30);
          if ((((lVar29 == 0) || (*in_stack_00000138 == 0)) ||
              (lVar43 = *(long *)(*in_stack_00000138 + 0x128), lVar43 == 0)) ||
             (lVar43 = *(long *)(lVar43 + 0x18), lVar43 == 0)) goto LAB_0249920c;
          in_stack_00000880 = uVar14 | *(int *)(lVar29 + 0x28) << 0x10;
          uVar21 = FUN_0129eff4(lVar43,&stack0x00000880,&stack0x000016d8,
                                *(undefined8 *)
                                 Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                               );
          uVar66 = 0;
          if ((uVar21 & 1) == 0) {
            fStack00000000000000ac = 0.0;
            fVar54 = 0.0;
            fVar58 = 0.0;
          }
          else {
            if (in_stack_000016d8 == 0) goto LAB_0249920c;
            fVar58 = *(float *)(in_stack_000016d8 + 0x14);
            fVar54 = *(float *)(in_stack_000016d8 + 0x18);
            fStack00000000000000ac = *(float *)(in_stack_000016d8 + 0x1c);
            uVar66 = *(undefined4 *)(in_stack_000016d8 + 0x20);
            if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
              fStack00000000000000cc = 0.0;
            }
          }
          uVar18 = *in_stack_00000148;
        }
        else {
          uVar66 = 0;
          fStack00000000000000ac = 0.0;
          fVar54 = 0.0;
          fVar58 = 0.0;
        }
        if (0 < (int)uVar18) {
          if ((*in_stack_00000150 == 0) ||
             (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar29 + 0x18) <= (uint)((long)(int)uVar18 + -1))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar29 = *(long *)(lVar29 + ((long)(int)uVar18 + -1) * unaff_x27 + 0x30);
          if (((lVar29 == 0) || (*in_stack_00000138 == 0)) ||
             ((lVar43 = *(long *)(*in_stack_00000138 + 0x128), lVar43 == 0 ||
              (lVar43 = *(long *)(lVar43 + 0x18), lVar43 == 0)))) goto LAB_0249920c;
          in_stack_00000880 = *(uint *)(lVar29 + 0x28) | uVar14 << 0x10;
          uVar21 = FUN_0129eff4(lVar43,&stack0x00000880,&stack0x000016d8,
                                *(undefined8 *)
                                 Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                               );
          if ((uVar21 & 1) != 0) {
            if ((in_stack_000016d8 == 0) ||
               (fVar58 = (float)FUN_024bb1bc(fVar58,fVar54,fStack00000000000000ac,uVar66,
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
        *(float *)((long)unaff_x19 + 0x2f4) = fStack00000000000000ac;
      }
      if ((char)unaff_x19[0x1d] != '\0') {
        fVar51 = *(float *)(unaff_x19 + 199);
        fVar50 = (float)FUN_026fd474(&stack0x00001770,0);
        fVar51 = fVar51 - unaff_s13 * fVar50 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
        *(float *)(unaff_x19 + 199) = fVar51;
        if ((unaff_w29 != 0) || (in_stack_000017bc == 0x200b)) {
          *(float *)(unaff_x19 + 199) =
               fVar51 - fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
        }
      }
      fVar50 = *(float *)(unaff_x19 + 0x55);
      fStack0000000000000080 = 0.0;
      if (fVar50 != 0.0) {
        fVar51 = (float)FUN_026fd454(&stack0x00001770,0);
        fVar52 = (float)FUN_026fd464(&stack0x00001770,0);
        fStack0000000000000080 =
             (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (fVar50 * 0.5 - unaff_s13 * (fVar51 * 0.5 + fVar52));
        *(float *)(unaff_x19 + 199) = *(float *)(unaff_x19 + 199) + fStack0000000000000080;
      }
      if (((cVar28 == '\0') && (*(int *)((long)unaff_x19 + 0x63c) == 0)) &&
         ((*(byte *)((long)unaff_x19 + 0x254) & 1) != 0)) {
        lVar29 = unaff_x19[0x22];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar21 = FUN_02681b9c(lVar29,0,0);
        in_stack_000000f8 = 0.0;
        if ((uVar21 & 1) != 0) {
          lVar29 = unaff_x19[0x22];
          if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (lVar29 == 0) goto LAB_0249920c;
          uVar21 = FUN_0267e1d8(lVar29,*(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x54),0);
          in_stack_000000f8 = 0.0;
          if ((uVar21 & 1) != 0) {
            lVar29 = unaff_x19[0x22];
            if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            if (lVar29 == 0) goto LAB_0249920c;
            fVar50 = (float)FUN_0267f610(lVar29,*(undefined4 *)
                                                 (*(long *)(*(long *)puVar9 + 0xb8) + 0x54),0);
            if ((*in_stack_00000138 == 0) || (unaff_x19[0x22] == 0)) goto LAB_0249920c;
            fVar51 = *(float *)(*in_stack_00000138 + 0x1b0);
            in_stack_000000f8 =
                 (float)FUN_0267f610(unaff_x19[0x22],
                                     *(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xcc),0);
            in_stack_000000f8 = in_stack_000000f8 * fVar50 * fVar51 * 0.25;
            if (fVar50 < in_stack_00000128 + in_stack_000000f8) {
              in_stack_00000128 = fVar50 - in_stack_000000f8;
            }
          }
        }
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        in_stack_000000c0 = *(float *)(*in_stack_00000138 + 0x1b4);
      }
      else {
        lVar29 = unaff_x19[0x22];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar21 = FUN_02681b9c(lVar29,0,0);
        in_stack_000000c0 = 0.0;
        if ((uVar21 & 1) != 0) {
          lVar29 = unaff_x19[0x22];
          if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (lVar29 == 0) goto LAB_0249920c;
          uVar21 = FUN_0267e1d8(lVar29,*(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x54),0);
          if ((uVar21 & 1) != 0) {
            lVar29 = unaff_x19[0x22];
            if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            if (lVar29 == 0) goto LAB_0249920c;
            uVar21 = FUN_0267e1d8(lVar29,*(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xcc),0
                                 );
            if ((uVar21 & 1) != 0) {
              lVar29 = unaff_x19[0x22];
              if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              if (lVar29 != 0) {
                fVar50 = (float)FUN_0267f610(lVar29,*(undefined4 *)
                                                     (*(long *)(*(long *)puVar9 + 0xb8) + 0x54),0);
                if ((*in_stack_00000138 != 0) && (unaff_x19[0x22] != 0)) {
                  fVar51 = *(float *)(*in_stack_00000138 + 0x1a8);
                  in_stack_000000f8 =
                       (float)FUN_0267f610(unaff_x19[0x22],
                                           *(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xcc)
                                           ,0);
                  in_stack_000000f8 = in_stack_000000f8 * fVar50 * fVar51 * 0.25;
                  if (fVar50 < in_stack_00000128 + in_stack_000000f8) {
                    in_stack_00000128 = fVar50 - in_stack_000000f8;
                  }
                  goto LAB_024934bc;
                }
              }
              goto LAB_0249920c;
            }
          }
        }
        in_stack_000000f8 = 0.0;
      }
LAB_024934bc:
      fVar51 = *(float *)(unaff_x19 + 199);
      fVar50 = (float)FUN_026fd464(&stack0x00001770,0);
      unaff_s15 = fVar51 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                           unaff_s13 * (fVar58 + ((fVar50 - in_stack_00000128) - in_stack_000000f8))
      ;
      fVar58 = (float)FUN_026fd46c(&stack0x00001770,0);
      unaff_s14 = *(float *)((long)unaff_x19 + 0x614) +
                  ((in_stack_00000130._4_4_ + unaff_s13 * (fVar54 + in_stack_00000128 + fVar58)) -
                  *(float *)(unaff_x19 + 0x9a));
      fVar58 = (float)FUN_026fd45c(&stack0x00001770,0);
      unaff_s10 = unaff_s14 - unaff_s13 * (in_stack_00000128 + in_stack_00000128 + fVar58);
      fVar58 = (float)FUN_026fd454(&stack0x00001770,0);
      param_6 = unaff_s15 +
                (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                unaff_s13 *
                (in_stack_000000f8 + in_stack_000000f8 +
                in_stack_00000128 + in_stack_00000128 + fVar58);
      unaff_x23 = in_stack_00000150;
      unaff_x24 = in_stack_00000148;
      fVar58 = unaff_s13;
      fStack00000000000000e8 = unaff_s15;
      fVar54 = param_6;
    } while (((*(int *)((long)unaff_x19 + 0x63c) != 0) || (cVar28 != '\0')) ||
            ((*(byte *)((long)unaff_x19 + 0x254) >> 1 & 1) == 0));
    param_1 = (float)(int)unaff_x19[0xbd] * fStack000000000000004c;
    fVar58 = (float)FUN_026fd46c(&stack0x00001770,0);
    unaff_s12 = param_1 * unaff_s13 * (in_stack_000000f8 + in_stack_00000128 + fVar58);
    fVar58 = (float)FUN_026fd46c(&stack0x00001770,0);
    fVar54 = (float)FUN_026fd45c(&stack0x00001770,0);
    unaff_s14 = unaff_s14 + 0.0;
    unaff_s10 = unaff_s10 + 0.0;
    param_1 = param_1 * unaff_s13 * (((fVar58 - fVar54) - in_stack_00000128) - in_stack_000000f8);
    param_3 = param_6 + unaff_s12;
    param_4 = unaff_s12 - param_1;
  } while( true );
LAB_02496a50:
  do {
    uVar14 = uVar34 - 1;
    if (*(uint *)(lVar29 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*in_stack_00000150 == 0) || (lVar35 = *(long *)(*in_stack_00000150 + 0x50), lVar35 == 0))
    goto LAB_0249920c;
    lVar47 = (long)(int)uVar14;
    lVar20 = lVar29 + lVar47 * 0x178;
    uVar38 = *(uint *)(lVar20 + 100);
    if (*(uint *)(lVar35 + 0x18) <= uVar38)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar39 = *(long *)(lVar20 + 0x38);
    uVar3 = *(ushort *)(lVar20 + 0x20);
    lVar37 = (long)(int)uVar38;
    lVar35 = lVar35 + lVar37 * 0x5c;
    uVar5 = *(uint *)(lVar35 + 0x3c);
    iVar15 = *(int *)(lVar35 + 0x28);
    iVar16 = *(int *)(lVar35 + 0x2c);
    uVar6 = *(uint *)(lVar35 + 0x40);
    lVar20 = (long)(int)uVar6;
    uVar45 = *(uint *)(lVar35 + 0x68);
    fVar64 = *(float *)(lVar35 + 0x5c);
    fVar68 = *(float *)(lVar35 + 0x60);
    iVar2 = *(int *)(lVar35 + 0x20);
    fVar60 = *(float *)(lVar35 + 0x4c);
    fVar63 = *(float *)(lVar35 + 0x54);
    fVar52 = *(float *)(lVar35 + 0x58);
    fVar61 = *(float *)(lVar35 + 0x6c);
    fVar65 = *(float *)(lVar35 + 0x70);
    fVar57 = *(float *)(lVar35 + 0x74);
    fVar62 = *(float *)(lVar35 + 0x78);
    fVar67 = fVar64 + fVar68;
    uVar42 = (uint)uVar3;
    if ((int)uVar45 < 9) {
      switch(uVar45) {
      case 1:
        if ((char)unaff_x19[0x1d] == '\0') {
          fStack00000000000000c8 = fVar68 + 0.0;
        }
        else {
          fStack00000000000000c8 = 0.0 - fVar52;
        }
        break;
      case 2:
LAB_02496c1c:
        fStack00000000000000c8 = (fVar68 + fVar64 * 0.5) - fVar52 * 0.5;
        break;
      default:
        goto switchD_02496b58_caseD_3;
      case 4:
        fStack00000000000000c8 = fVar67 - fVar52;
        if ((char)unaff_x19[0x1d] != '\0') {
          fStack00000000000000c8 = fVar67;
        }
        break;
      case 8:
        goto switchD_02496b58_caseD_8;
      }
LAB_02496c90:
      _in_stack_000000c0 = 0;
    }
    else if (uVar45 == 0x10) {
switchD_02496b58_caseD_8:
      if (uVar3 < 0xad) {
        if ((uVar42 != 3) && (uVar42 != 10)) goto LAB_02496bac;
      }
      else if ((uVar42 != 0xad) && ((uVar42 != 0x200b && (uVar42 != 0x2060)))) {
LAB_02496bac:
        if (*(uint *)(lVar29 + 0x18) <= uVar5)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar4 = *(undefined2 *)(lVar29 + (long)(int)uVar5 * 0x178 + 0x20);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar21 = FUN_016f9f84(uVar4,0);
        if ((uVar21 & 1) == 0) {
          bVar1 = (int)uVar38 < (int)unaff_x19[0x94];
        }
        else {
          bVar1 = false;
        }
        if ((fVar52 <= fVar64) && (!bVar1 && (uVar45 >> 4 & 1) == 0)) {
          fStack00000000000000c8 = fVar68;
          if ((char)unaff_x19[0x1d] != '\0') {
            fStack00000000000000c8 = fVar67;
          }
          goto LAB_02496c90;
        }
        if (((uVar34 == 1) || (uVar38 != uVar55)) || (uVar14 == *(uint *)((long)unaff_x19 + 0x31c)))
        {
          fStack00000000000000c8 = fVar68;
          if ((char)unaff_x19[0x1d] != '\0') {
            fStack00000000000000c8 = fVar67;
          }
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          fStack0000000000000020 = (float)FUN_016fa418(uVar3,0);
          _in_stack_000000c0 = 0;
        }
        else {
          cVar28 = (char)unaff_x19[0x1d];
          fVar67 = -fVar52;
          if (cVar28 != '\0') {
            fVar67 = fVar52;
          }
          if (*(uint *)(lVar29 + 0x18) <= uVar5)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar52 = 1.0;
          iVar16 = (int)*(char *)(lVar29 + (long)(int)uVar5 * 0x178 + 0x194) +
                   (-iVar2 - ((uint)fStack0000000000000020 & 1)) + iVar16 + -1;
          if (0 < iVar16) {
            fVar52 = *(float *)((long)unaff_x19 + 0x2d4);
          }
          if (iVar16 < 1) {
            iVar16 = 1;
          }
          if (uVar42 == 9) {
LAB_02498bb8:
            fVar52 = 1.0 - fVar52;
          }
          else {
            if (uVar42 != 0xa0) {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar21 = FUN_016fa418(uVar3,0);
              cVar28 = (char)unaff_x19[0x1d];
              if ((uVar21 & 1) != 0) goto LAB_02498bb8;
            }
            iVar16 = (iVar2 - (~(uint)fStack0000000000000020 & 1)) + iVar15;
          }
          fVar52 = ((fVar64 + fVar67) * fVar52) / (float)iVar16;
          if (cVar28 == '\0') {
            fStack00000000000000c8 = fStack00000000000000c8 + fVar52;
            _in_stack_000000c0 =
                 CONCAT44((float)((ulong)_in_stack_000000c0 >> 0x20) + 0.0,
                          (float)_in_stack_000000c0 + 0.0);
          }
          else {
            fStack00000000000000c8 = fStack00000000000000c8 - fVar52;
          }
        }
      }
    }
    else if (uVar45 == 0x20) {
      fVar52 = fVar61 + fVar57;
      goto LAB_02496c1c;
    }
switchD_02496b58_caseD_3:
    uVar45 = (uint)*(undefined8 *)(lVar29 + 0x18);
    if (uVar45 <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar35 = lVar29 + lVar47 * 0x178;
    fVar67 = fStack0000000000000098 + fStack00000000000000c8;
    fVar52 = (float)_in_stack_00000090 + (float)_in_stack_000000c0;
    fVar64 = (float)((ulong)_in_stack_00000090 >> 0x20) + (float)((ulong)_in_stack_000000c0 >> 0x20)
    ;
    if (*(char *)(lVar35 + 0x194) == '\0') goto LAB_02497688;
    iVar15 = *(int *)(lVar29 + lVar47 * 0x178 + 0x2c);
    if (iVar15 != 0) goto LAB_02497374;
    fVar51 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)uVar38,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
    case 0:
      lVar31 = lVar29 + lVar47 * 0x178;
      *(undefined4 *)(lVar31 + 0x84) = 0;
      *(undefined4 *)(lVar31 + 0xac) = 0;
      *(undefined4 *)(lVar31 + 0xd4) = 0x3f800000;
      fVar51 = 1.0;
      break;
    case 1:
      fVar62 = *(float *)(lVar29 + lVar47 * 0x178 + 0x70);
      if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
        lVar31 = lVar29 + lVar47 * 0x178;
        fVar57 = (fStack00000000000000c8 + fVar62) - *(float *)(in_stack_00000070 + 0x230);
        fVar62 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
        goto LAB_02496df8;
      }
      lVar31 = lVar29 + lVar47 * 0x178;
      fVar57 = fVar57 - fVar61;
      *(float *)(lVar31 + 0x84) = fVar51 + (fVar62 - fVar61) / fVar57;
      *(float *)(lVar31 + 0xac) = fVar51 + (*(float *)(lVar31 + 0x98) - fVar61) / fVar57;
      *(float *)(lVar31 + 0xd4) = fVar51 + (*(float *)(lVar31 + 0xc0) - fVar61) / fVar57;
      fVar51 = fVar51 + (*(float *)(lVar31 + 0xe8) - fVar61) / fVar57;
      break;
    case 2:
      lVar31 = lVar29 + lVar47 * 0x178;
      fVar62 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
      fVar57 = (fStack00000000000000c8 + *(float *)(lVar31 + 0x70)) -
               *(float *)(in_stack_00000070 + 0x230);
LAB_02496df8:
      *(float *)(lVar31 + 0x84) = fVar51 + fVar57 / fVar62;
      *(float *)(lVar31 + 0xac) =
           fVar51 + ((fStack00000000000000c8 + *(float *)(lVar31 + 0x98)) -
                    *(float *)(in_stack_00000070 + 0x230)) /
                    (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
      *(float *)(lVar31 + 0xd4) =
           fVar51 + ((fStack00000000000000c8 + *(float *)(lVar31 + 0xc0)) -
                    *(float *)(in_stack_00000070 + 0x230)) /
                    (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
      fVar51 = fVar51 + ((fStack00000000000000c8 + *(float *)(lVar31 + 0xe8)) -
                        *(float *)(in_stack_00000070 + 0x230)) /
                        (*(float *)(in_stack_00000070 + 0x238) -
                        *(float *)(in_stack_00000070 + 0x230));
      break;
    case 3:
      switch((int)unaff_x19[0x61]) {
      case 0:
        lVar31 = lVar29 + lVar47 * 0x178;
        *(undefined4 *)(lVar31 + 0x88) = 0;
        *(undefined4 *)(lVar31 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar31 + 0xd8) = 0;
        *(undefined4 *)(lVar31 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar31 = lVar29 + lVar47 * 0x178;
        fVar62 = fVar62 - fVar65;
        fVar57 = fVar51 + (*(float *)(lVar31 + 0x74) - fVar65) / fVar62;
        fVar62 = fVar51 + (*(float *)(lVar31 + 0x9c) - fVar65) / fVar62;
        *(float *)(lVar31 + 0x88) = fVar57;
        *(float *)(lVar31 + 0xb0) = fVar62;
        *(float *)(lVar31 + 0xd8) = fVar57;
        *(float *)(lVar31 + 0x100) = fVar62;
        break;
      case 2:
        lVar31 = lVar29 + lVar47 * 0x178;
        fVar57 = fVar51 + (*(float *)(lVar31 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                          (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
        *(float *)(lVar31 + 0x88) = fVar57;
        fVar62 = *(float *)(unaff_x19 + 0x9b);
        fVar65 = *(float *)(unaff_x19 + 0x9c);
        *(float *)(lVar31 + 0xd8) = fVar57;
        fVar57 = fVar51 + (*(float *)(lVar31 + 0x9c) - fVar62) / (fVar65 - fVar62);
        *(float *)(lVar31 + 0xb0) = fVar57;
        *(float *)(lVar31 + 0x100) = fVar57;
        break;
      case 3:
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
        uVar45 = (uint)*(undefined8 *)(lVar29 + 0x18);
      }
      if (uVar45 <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar31 = lVar29 + lVar47 * 0x178;
      fVar57 = *(float *)(lVar31 + 0x15c);
      fVar62 = (1.0 - (*(float *)(lVar31 + 0x88) + *(float *)(lVar31 + 0xb0)) * fVar57) * 0.5;
      fVar65 = fVar51 + *(float *)(lVar31 + 0x88) * fVar57 + fVar62;
      fVar51 = fVar51 + fVar62 + *(float *)(lVar31 + 0xb0) * fVar57;
      *(float *)(lVar31 + 0x84) = fVar65;
      *(float *)(lVar31 + 0xac) = fVar65;
      *(float *)(lVar31 + 0xd4) = fVar51;
      break;
    default:
      goto switchD_02496d4c_default;
    }
    *(float *)(lVar29 + lVar47 * 0x178 + 0xfc) = fVar51;
switchD_02496d4c_default:
    switch((int)unaff_x19[0x61]) {
    case 0:
      if (uVar45 <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar31 = lVar29 + lVar47 * 0x178;
      *(undefined4 *)(lVar31 + 0x88) = 0;
      *(undefined4 *)(lVar31 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar31 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar31 + 0x100) = 0;
      break;
    case 1:
      if (uVar14 < uVar45) {
        lVar31 = lVar29 + lVar47 * 0x178;
        fVar60 = fVar60 - fVar63;
        fVar51 = (*(float *)(lVar31 + 0x74) - fVar63) / fVar60;
        fVar60 = (*(float *)(lVar31 + 0x9c) - fVar63) / fVar60;
        *(float *)(lVar31 + 0x88) = fVar51;
        goto LAB_02497174;
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    case 2:
      if (uVar45 <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar31 = lVar29 + lVar47 * 0x178;
      fVar51 = (*(float *)(lVar31 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
      *(float *)(lVar31 + 0x88) = fVar51;
      fVar60 = (*(float *)(lVar31 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
LAB_02497174:
      *(float *)(lVar31 + 0xb0) = fVar60;
      *(float *)(lVar31 + 0xd8) = fVar60;
      *(float *)(lVar31 + 0x100) = fVar51;
      break;
    case 3:
      if (uVar45 <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar31 = lVar29 + lVar47 * 0x178;
      fVar60 = *(float *)(lVar31 + 0x15c);
      fVar57 = (1.0 - (*(float *)(lVar31 + 0x84) + *(float *)(lVar31 + 0xd4)) / fVar60) * 0.5;
      fVar51 = *(float *)(lVar31 + 0x84) / fVar60 + fVar57;
      fVar57 = fVar57 + *(float *)(lVar31 + 0xd4) / fVar60;
      *(float *)(lVar31 + 0x88) = fVar51;
      *(float *)(lVar31 + 0xb0) = fVar57;
      *(float *)(lVar31 + 0x100) = fVar51;
      *(float *)(lVar31 + 0xd8) = fVar57;
    }
    if (uVar45 <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar31 = lVar29 + lVar47 * 0x178;
    fVar51 = *(float *)(lVar31 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
    if ((*(char *)(lVar31 + 0x5c) == '\0') && ((*(byte *)(lVar29 + lVar47 * 0x178 + 400) & 1) != 0))
    {
      fVar51 = -fVar51;
    }
    fVar57 = fVar58;
    if (((iVar13 == 2) || (fVar57 = fVar59, iVar13 == 1)) || (fVar57 = fVar58 / fVar54, iVar13 == 0)
       ) {
      fVar51 = fVar57 * fVar51;
    }
    lVar31 = lVar29 + lVar47 * 0x178;
    fVar60 = *(float *)(lVar31 + 0x88);
    fVar62 = *(float *)(lVar31 + 0x84);
    fVar57 = -2.1474836e+09;
    if (fVar62 != INFINITY) {
      fVar57 = (float)(int)fVar62;
    }
    fVar65 = *(float *)(lVar31 + 0xd4);
    fVar61 = *(float *)(lVar31 + 0xd8);
    fVar63 = -2.1474836e+09;
    if (fVar60 != INFINITY) {
      fVar63 = (float)(int)fVar60;
    }
    uVar66 = FUN_024e0374(fVar62 - fVar57,fVar60 - fVar63);
    *(undefined4 *)(lVar31 + 0x84) = uVar66;
    if (*(uint *)(lVar29 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar61 = fVar61 - fVar63;
    *(float *)(lVar31 + 0x88) = fVar51;
    uVar66 = FUN_024e0374(fVar62 - fVar57,fVar61);
    *(undefined4 *)(lVar29 + lVar47 * 0x178 + 0xac) = uVar66;
    if (*(uint *)(lVar29 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar65 = fVar65 - fVar57;
    *(float *)(lVar29 + lVar47 * 0x178 + 0xb0) = fVar51;
    fVar57 = (float)FUN_024e0374(fVar65,fVar61);
    *(float *)(lVar31 + 0xd4) = fVar57;
    if (*(uint *)(lVar29 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar31 + 0xd8) = fVar51;
    uVar66 = FUN_024e0374(fVar65,fVar60 - fVar63);
    *(undefined4 *)(lVar29 + lVar47 * 0x178 + 0xfc) = uVar66;
    uVar45 = (uint)*(undefined8 *)(lVar29 + 0x18);
    if (uVar45 <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar29 + lVar47 * 0x178 + 0x100) = fVar51;
LAB_02497374:
    if (((int)unaff_x19[100] <= (int)uVar14) ||
       (*(int *)((long)unaff_x19 + 0x324) <= (int)fStack00000000000000ac)) goto LAB_02497490;
    if (((int)uVar38 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] != 5)) {
      if (uVar45 <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar35 = lVar29 + lVar47 * 0x178;
      *(ulong *)(lVar35 + 0x70) =
           CONCAT44(fVar52 + (float)((ulong)*(undefined8 *)(lVar35 + 0x70) >> 0x20),
                    fVar67 + (float)*(undefined8 *)(lVar35 + 0x70));
      *(float *)(lVar35 + 0x78) = fVar64 + *(float *)(lVar35 + 0x78);
      if (*(uint *)(lVar29 + 0x18) <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar35 = lVar29 + lVar47 * 0x178;
      *(ulong *)(lVar35 + 0x98) =
           CONCAT44(fVar52 + (float)((ulong)*(undefined8 *)(lVar35 + 0x98) >> 0x20),
                    fVar67 + (float)*(undefined8 *)(lVar35 + 0x98));
      *(float *)(lVar35 + 0xa0) = fVar64 + *(float *)(lVar35 + 0xa0);
      if (*(uint *)(lVar29 + 0x18) <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar35 = lVar29 + lVar47 * 0x178;
      *(ulong *)(lVar35 + 0xc0) =
           CONCAT44(fVar52 + (float)((ulong)*(undefined8 *)(lVar35 + 0xc0) >> 0x20),
                    fVar67 + (float)*(undefined8 *)(lVar35 + 0xc0));
      *(float *)(lVar35 + 200) = fVar64 + *(float *)(lVar35 + 200);
      if (*(uint *)(lVar29 + 0x18) <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar35 = lVar29 + lVar47 * 0x178;
      *(ulong *)(lVar35 + 0xe8) =
           CONCAT44(fVar52 + (float)((ulong)*(undefined8 *)(lVar35 + 0xe8) >> 0x20),
                    fVar67 + (float)*(undefined8 *)(lVar35 + 0xe8));
      *(float *)(lVar35 + 0xf0) = fVar64 + *(float *)(lVar35 + 0xf0);
      if (iVar15 == 0) goto LAB_02497668;
LAB_02497598:
      if (iVar15 == 1) {
        pcVar33 = *(code **)(*unaff_x19 + 0x8f8);
        goto LAB_02497674;
      }
    }
    else {
      if (((int)uVar38 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] == 5)) {
        if (uVar45 <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (*(uint *)(lVar29 + lVar47 * 0x178 + 0x68) != uStack000000000000002c) goto LAB_02497490;
        lVar35 = lVar29 + lVar47 * 0x178;
        *(ulong *)(lVar35 + 0x70) =
             CONCAT44(fVar52 + (float)((ulong)*(undefined8 *)(lVar35 + 0x70) >> 0x20),
                      fVar67 + (float)*(undefined8 *)(lVar35 + 0x70));
        *(float *)(lVar35 + 0x78) = fVar64 + *(float *)(lVar35 + 0x78);
        if (*(uint *)(lVar29 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar35 = lVar29 + lVar47 * 0x178;
        *(ulong *)(lVar35 + 0x98) =
             CONCAT44(fVar52 + (float)((ulong)*(undefined8 *)(lVar35 + 0x98) >> 0x20),
                      fVar67 + (float)*(undefined8 *)(lVar35 + 0x98));
        *(float *)(lVar35 + 0xa0) = fVar64 + *(float *)(lVar35 + 0xa0);
        if (*(uint *)(lVar29 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar35 = lVar29 + lVar47 * 0x178;
        *(ulong *)(lVar35 + 0xc0) =
             CONCAT44(fVar52 + (float)((ulong)*(undefined8 *)(lVar35 + 0xc0) >> 0x20),
                      fVar67 + (float)*(undefined8 *)(lVar35 + 0xc0));
        *(float *)(lVar35 + 200) = fVar64 + *(float *)(lVar35 + 200);
        if (*(uint *)(lVar29 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar35 = lVar29 + lVar47 * 0x178;
        *(ulong *)(lVar35 + 0xe8) =
             CONCAT44(fVar52 + (float)((ulong)*(undefined8 *)(lVar35 + 0xe8) >> 0x20),
                      fVar67 + (float)*(undefined8 *)(lVar35 + 0xe8));
        *(float *)(lVar35 + 0xf0) = fVar64 + *(float *)(lVar35 + 0xf0);
      }
      else {
LAB_02497490:
        if (uVar45 <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        puVar9 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
        lVar31 = lVar29 + lVar47 * 0x178;
        uVar66 = *(undefined4 *)
                  (*(undefined8 **)
                    (*(long *)
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                    + 0xb8) + 1);
        *(undefined8 *)(lVar31 + 0x70) =
             **(undefined8 **)
               (*(long *)
                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
               0xb8);
        *(undefined4 *)(lVar31 + 0x78) = uVar66;
        if (*(uint *)(lVar29 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar31 = lVar29 + lVar47 * 0x178;
        uVar66 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
        *(undefined8 *)(lVar31 + 0x98) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
        *(undefined4 *)(lVar31 + 0xa0) = uVar66;
        if (*(uint *)(lVar29 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar31 = lVar29 + lVar47 * 0x178;
        uVar66 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
        *(undefined8 *)(lVar31 + 0xc0) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
        *(undefined4 *)(lVar31 + 200) = uVar66;
        if (*(uint *)(lVar29 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar31 = lVar29 + lVar47 * 0x178;
        uVar66 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
        *(undefined8 *)(lVar31 + 0xe8) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
        *(undefined4 *)(lVar31 + 0xf0) = uVar66;
        if (*(uint *)(lVar29 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        *(undefined1 *)(lVar35 + 0x194) = 0;
      }
      if (iVar15 != 0) goto LAB_02497598;
LAB_02497668:
      pcVar33 = *(code **)(*unaff_x19 + 0x8d8);
LAB_02497674:
      (*pcVar33)();
    }
LAB_02497688:
    if ((*in_stack_00000150 == 0) || (lVar35 = *(long *)(*in_stack_00000150 + 0x38), lVar35 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar35 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar35 = lVar35 + lVar47 * 0x178;
    uVar23 = *(undefined8 *)(lVar35 + 0x11c);
    *(undefined8 *)(lVar35 + 0x11c) =
         CONCAT44(fVar52 + (float)((ulong)uVar23 >> 0x20),fVar67 + (float)uVar23);
    *(float *)(lVar35 + 0x124) = fVar64 + *(float *)(lVar35 + 0x124);
    if ((*in_stack_00000150 == 0) || (lVar35 = *(long *)(*in_stack_00000150 + 0x38), lVar35 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar35 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar35 = lVar35 + lVar47 * 0x178;
    *(ulong *)(lVar35 + 0x110) =
         CONCAT44(fVar52 + (float)((ulong)*(undefined8 *)(lVar35 + 0x110) >> 0x20),
                  fVar67 + (float)*(undefined8 *)(lVar35 + 0x110));
    *(float *)(lVar35 + 0x118) = fVar64 + *(float *)(lVar35 + 0x118);
    if ((*in_stack_00000150 == 0) || (lVar35 = *(long *)(*in_stack_00000150 + 0x38), lVar35 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar35 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar35 = lVar35 + lVar47 * 0x178;
    *(ulong *)(lVar35 + 0x128) =
         CONCAT44(fVar52 + (float)((ulong)*(undefined8 *)(lVar35 + 0x128) >> 0x20),
                  fVar67 + (float)*(undefined8 *)(lVar35 + 0x128));
    *(float *)(lVar35 + 0x130) = fVar64 + *(float *)(lVar35 + 0x130);
    if ((*in_stack_00000150 == 0) || (lVar35 = *(long *)(*in_stack_00000150 + 0x38), lVar35 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar35 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar35 = lVar35 + lVar47 * 0x178;
    *(float *)(lVar35 + 0x134) = fVar67 + *(float *)(lVar35 + 0x134);
    *(ulong *)(lVar35 + 0x138) =
         CONCAT44(fVar64 + (float)((ulong)*(undefined8 *)(lVar35 + 0x138) >> 0x20),
                  fVar52 + (float)*(undefined8 *)(lVar35 + 0x138));
    lVar35 = *in_stack_00000150;
    if ((lVar35 == 0) || (lVar31 = *(long *)(lVar35 + 0x38), lVar31 == 0)) goto LAB_0249920c;
    uVar45 = *(uint *)(lVar31 + 0x18);
    if (uVar45 <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar40 = lVar31 + lVar47 * 0x178;
    uVar22 = CONCAT44(fVar67 + (float)((ulong)*(undefined8 *)(lVar40 + 0x140) >> 0x20),
                      fVar67 + (float)*(undefined8 *)(lVar40 + 0x140));
    fVar57 = fVar52 + *(float *)(lVar40 + 0x150);
    uVar25 = (ulong)(uint)fVar57;
    uVar56 = CONCAT44(fVar52 + (float)((ulong)*(undefined8 *)(lVar40 + 0x148) >> 0x20),
                      fVar52 + (float)*(undefined8 *)(lVar40 + 0x148));
    *(ulong *)(lVar40 + 0x140) = uVar22;
    *(ulong *)(lVar40 + 0x148) = uVar56;
    *(float *)(lVar40 + 0x150) = fVar57;
    if (uVar38 == uVar55) {
      uVar55 = *in_stack_00000148 - 1;
      if (uVar14 == uVar55) goto LAB_0249788c;
    }
    else {
      lVar35 = *(long *)(lVar35 + 0x50);
      if (lVar35 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar35 + 0x18) <= uVar55)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar40 = (long)(int)uVar55;
      lVar41 = lVar35 + lVar40 * 0x5c;
      uVar56 = (ulong)(uint)*(float *)(lVar41 + 0x58);
      fVar57 = fVar52 + *(float *)(lVar41 + 0x54);
      uVar22 = (ulong)(uint)fVar57;
      fVar60 = fVar67 + *(float *)(lVar41 + 0x58);
      uVar25 = (ulong)(uint)fVar60;
      *(ulong *)(lVar41 + 0x4c) =
           CONCAT44(fVar52 + (float)((ulong)*(undefined8 *)(lVar41 + 0x4c) >> 0x20),
                    fVar52 + (float)*(undefined8 *)(lVar41 + 0x4c));
      *(float *)(lVar41 + 0x54) = fVar57;
      *(float *)(lVar41 + 0x58) = fVar60;
      if (uVar45 <= *(uint *)(lVar41 + 0x34))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      uVar66 = *(undefined4 *)(lVar31 + (long)(int)*(uint *)(lVar41 + 0x34) * 0x178 + 0x11c);
      lVar35 = lVar35 + lVar40 * 0x5c;
      *(float *)(lVar35 + 0x70) = fVar57;
      *(undefined4 *)(lVar35 + 0x6c) = uVar66;
      lVar35 = *in_stack_00000150;
      if ((lVar35 == 0) || (lVar31 = *(long *)(lVar35 + 0x50), lVar31 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar31 + 0x18) <= uVar55)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar35 = *(long *)(lVar35 + 0x38);
      if (lVar35 == 0) goto LAB_0249920c;
      uVar55 = *(uint *)(lVar31 + lVar40 * 0x5c + 0x40);
      if (*(uint *)(lVar35 + 0x18) <= uVar55)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar31 = lVar31 + lVar40 * 0x5c;
      *(undefined4 *)(lVar31 + 0x74) = *(undefined4 *)(lVar35 + (long)(int)uVar55 * 0x178 + 0x128);
      *(undefined4 *)(lVar31 + 0x78) = *(undefined4 *)(lVar31 + 0x4c);
      uVar55 = *in_stack_00000148 - 1;
LAB_0249788c:
      if (uVar14 == uVar55) {
        lVar35 = *in_stack_00000150;
        if ((lVar35 == 0) || (lVar31 = *(long *)(lVar35 + 0x50), lVar31 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar31 + 0x18) <= uVar38)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar40 = lVar31 + lVar37 * 0x5c;
        uVar56 = (ulong)(uint)*(float *)(lVar40 + 0x58);
        uVar22 = CONCAT44(fVar52 + (float)((ulong)*(undefined8 *)(lVar40 + 0x4c) >> 0x20),
                          fVar52 + (float)*(undefined8 *)(lVar40 + 0x4c));
        fVar57 = fVar52 + *(float *)(lVar40 + 0x54);
        fVar67 = fVar67 + *(float *)(lVar40 + 0x58);
        uVar25 = (ulong)(uint)fVar67;
        *(ulong *)(lVar40 + 0x4c) = uVar22;
        *(float *)(lVar40 + 0x54) = fVar57;
        *(float *)(lVar40 + 0x58) = fVar67;
        lVar35 = *(long *)(lVar35 + 0x38);
        if (lVar35 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar35 + 0x18) <= *(uint *)(lVar40 + 0x34))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar66 = *(undefined4 *)(lVar35 + (long)(int)*(uint *)(lVar40 + 0x34) * 0x178 + 0x11c);
        lVar31 = lVar31 + lVar37 * 0x5c;
        *(float *)(lVar31 + 0x70) = fVar57;
        *(undefined4 *)(lVar31 + 0x6c) = uVar66;
        lVar35 = *in_stack_00000150;
        if ((lVar35 == 0) || (lVar31 = *(long *)(lVar35 + 0x50), lVar31 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar31 + 0x18) <= uVar38)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar35 = *(long *)(lVar35 + 0x38);
        if (lVar35 == 0) goto LAB_0249920c;
        uVar55 = *(uint *)(lVar31 + lVar37 * 0x5c + 0x40);
        if (*(uint *)(lVar35 + 0x18) <= uVar55)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar31 = lVar31 + lVar37 * 0x5c;
        *(undefined4 *)(lVar31 + 0x74) = *(undefined4 *)(lVar35 + (long)(int)uVar55 * 0x178 + 0x128)
        ;
        *(undefined4 *)(lVar31 + 0x78) = *(undefined4 *)(lVar31 + 0x4c);
      }
    }
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar21 = FUN_016f9468(uVar42,0);
    if (((((uVar21 & 1) == 0) && (1 < uVar42 - 0x2010)) && (uVar42 != 0xad)) && (uVar42 != 0x2d)) {
      if (bVar11) {
        if (((uVar34 != 1) && ((int)uVar14 < (int)(*(uint *)(lVar29 + 0x18) - 1))) &&
           (((int)uVar14 < (int)*in_stack_00000148 && ((uVar42 == 0x2019 || (uVar42 == 0x27)))))) {
          if (*(uint *)(lVar29 + 0x18) <= uVar34 - 2)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar4 = *(undefined2 *)(lVar29 + lVar43 + -0x438);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar21 = FUN_016f9468(uVar4,0);
          if ((uVar21 & 1) != 0) {
            if (*(uint *)(lVar29 + 0x18) <= uVar34)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            uVar4 = *(undefined2 *)(lVar29 + lVar43 + -0x148);
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar21 = FUN_016f9468(uVar4,0);
            if ((uVar21 & 1) != 0) goto LAB_02497aa4;
          }
        }
      }
      else {
        if (uVar34 != 1) {
LAB_024985a0:
          bVar11 = false;
          goto LAB_02497aac;
        }
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar21 = FUN_016f93a0(uVar42,0);
        if ((uVar21 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar21 = FUN_016f68bc(uVar42,0);
          if (((uVar42 != 0x200b) && ((uVar21 & 1) == 0)) && (*in_stack_00000148 != 1))
          goto LAB_024985a0;
        }
      }
      if (uVar14 == *in_stack_00000148 - 1) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar21 = FUN_016f9468(uVar42,0);
        iVar15 = iVar49;
        if ((uVar21 & 1) == 0) goto LAB_02497de0;
      }
      else {
LAB_02497de0:
        iVar15 = uVar34 - 2;
      }
      lVar35 = *in_stack_00000150;
      if (lVar35 == 0) goto LAB_0249920c;
      lVar31 = *(long *)(lVar35 + 0x40);
      if (lVar31 == 0) goto LAB_0249920c;
      uVar55 = *(uint *)(lVar35 + 0x24);
      iVar16 = *(int *)(lVar31 + 0x18);
      if (iVar16 < (int)(uVar55 + 1)) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147b84((long *)(lVar35 + 0x40),iVar16 + 1,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
        lVar35 = *in_stack_00000150;
        if (lVar35 == 0) goto LAB_0249920c;
      }
      lVar31 = *(long *)(lVar35 + 0x40);
      if (lVar31 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar31 + 0x18) <= uVar55)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar31 = lVar31 + (long)(int)uVar55 * 0x18;
      *(uint *)(lVar31 + 0x28) = uVar18;
      *(int *)(lVar31 + 0x2c) = iVar15;
      *(uint *)(lVar31 + 0x30) = (iVar15 - uVar18) + 1;
      *(long **)(lVar31 + 0x20) = unaff_x19;
      lVar31 = *(long *)(lVar35 + 0x50);
      *(int *)(lVar35 + 0x24) = *(int *)(lVar35 + 0x24) + 1;
      if (lVar31 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar31 + 0x18) <= uVar38)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar31 = lVar31 + lVar37 * 0x5c;
      bVar11 = false;
      fStack00000000000000ac = (float)((int)fStack00000000000000ac + 1);
      *(int *)(lVar31 + 0x30) = *(int *)(lVar31 + 0x30) + 1;
    }
    else {
      if (!bVar11) {
        uVar18 = uVar14;
      }
      if (uVar14 == *in_stack_00000148 - 1) {
        lVar35 = *in_stack_00000150;
        if (lVar35 == 0) goto LAB_0249920c;
        lVar31 = *(long *)(lVar35 + 0x40);
        if (lVar31 == 0) goto LAB_0249920c;
        uVar55 = *(uint *)(lVar35 + 0x24);
        iVar15 = *(int *)(lVar31 + 0x18);
        if (iVar15 < (int)(uVar55 + 1)) {
          if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01147b84((long *)(lVar35 + 0x40),iVar15 + 1,
                       *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
          lVar35 = *in_stack_00000150;
          if (lVar35 == 0) goto LAB_0249920c;
        }
        lVar31 = *(long *)(lVar35 + 0x40);
        if (lVar31 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar31 + 0x18) <= uVar55)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar31 = lVar31 + (long)(int)uVar55 * 0x18;
        *(uint *)(lVar31 + 0x28) = uVar18;
        *(uint *)(lVar31 + 0x2c) = uVar14;
        *(long **)(lVar31 + 0x20) = unaff_x19;
        *(uint *)(lVar31 + 0x30) = uVar34 - uVar18;
        lVar31 = *(long *)(lVar35 + 0x50);
        *(int *)(lVar35 + 0x24) = *(int *)(lVar35 + 0x24) + 1;
        if (lVar31 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar31 + 0x18) <= uVar38)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar31 = lVar31 + lVar37 * 0x5c;
        fStack00000000000000ac = (float)((int)fStack00000000000000ac + 1);
        *(int *)(lVar31 + 0x30) = *(int *)(lVar31 + 0x30) + 1;
      }
LAB_02497aa4:
      bVar11 = true;
    }
LAB_02497aac:
    if ((*in_stack_00000150 == 0) || (lVar35 = *(long *)(*in_stack_00000150 + 0x38), lVar35 == 0))
    goto LAB_0249920c;
    uVar55 = *(uint *)(lVar35 + 0x18);
    if (uVar55 <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar35 + lVar47 * 0x178 + 400) >> 2 & 1) == 0) {
      if (bVar12) {
LAB_02497adc:
        if (uVar55 <= uVar34 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar37 = *unaff_x19;
        uVar55 = *(uint *)(lVar35 + lVar43 + -0x330);
        uVar66 = *(undefined4 *)(lVar35 + lVar43 + -0x2f8);
LAB_0249805c:
        pcVar33 = *(code **)(lVar37 + 0x908);
LAB_02498064:
        uVar56 = (ulong)uVar55;
        uVar22 = (ulong)(uint)fStack0000000000000050;
        uVar25 = (ulong)(uint)fStack0000000000000054;
        (*pcVar33)(fStack0000000000000058,uVar22,uVar25,uVar56,fStack00000000000000d0,0,
                   _bStack000000000000005c,uVar66);
        puVar9 = System_Threading_Mutex_TypeInfo;
        lVar35 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar35 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar35 = *(long *)puVar9;
        }
LAB_024980b4:
        bVar12 = false;
        fVar50 = 0.0;
        fStack00000000000000d0 = *(float *)(*(long *)(lVar35 + 0xb8) + 0x15a8);
        fStack00000000000000cc = 0.0;
      }
      else {
LAB_02497fc4:
        bVar12 = false;
      }
    }
    else {
      lVar35 = lVar35 + lVar47 * 0x178;
      iVar15 = *(int *)(lVar35 + 0x68);
      *(int *)(lVar35 + 0x16c) = iVar17;
      if ((((int)unaff_x19[100] < (int)uVar14) || ((int)unaff_x19[0x65] < (int)uVar38)) ||
         (((int)unaff_x19[0x5b] == 5 && (iVar15 + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar21 = FUN_016f68bc(uVar42,0);
      if ((uVar42 != 0x200b) && ((uVar21 & 1) == 0)) {
        lVar35 = *in_stack_00000150;
        if ((lVar35 == 0) || (lVar37 = *(long *)(lVar35 + 0x38), lVar37 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar37 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar57 = *(float *)(lVar37 + lVar47 * 0x178 + 0x160);
        if (fVar50 <= fVar57) {
          fVar50 = fVar57;
        }
        if (fStack00000000000000cc <= ABS(fVar51)) {
          fStack00000000000000cc = ABS(fVar51);
        }
        if ((float)iVar15 != fStack000000000000004c) {
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar35 = *in_stack_00000150;
            if (lVar35 == 0) goto LAB_0249920c;
            lVar37 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          else {
            lVar37 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          fStack00000000000000d0 = *(float *)(lVar37 + 0x15a8);
        }
        lVar35 = *(long *)(lVar35 + 0x38);
        if (lVar35 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar35 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (unaff_x19[0x1e] == 0) goto LAB_0249920c;
        fVar60 = *(float *)(lVar35 + lVar47 * 0x178 + 0x14c);
        fVar57 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
        fVar60 = fVar60 + fVar50 * fVar57;
        if (fVar60 <= fStack00000000000000d0) {
          fStack00000000000000d0 = fVar60;
        }
        uVar22 = (ulong)(uint)fStack00000000000000d0;
        fStack000000000000004c = (float)iVar15;
      }
      if (!bVar12) {
        bVar12 = false;
        if ((((uVar42 == 0xd) || ((uVar42 | 1) == 0xb)) || ((int)uVar6 < (int)uVar14)) ||
           ((bool)(bVar1 ^ 1))) goto LAB_024980d0;
        if (uVar14 == uVar6) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar21 = FUN_016fa418(uVar42,0);
          if ((uVar21 & 1) != 0) goto LAB_02497fc4;
        }
        if ((*in_stack_00000150 == 0) ||
           (lVar35 = *(long *)(*in_stack_00000150 + 0x38), lVar35 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar35 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar35 = lVar35 + lVar47 * 0x178;
        _bStack000000000000005c = *(float *)(lVar35 + 0x160);
        fStack0000000000000058 = *(float *)(lVar35 + 0x11c);
        bVar12 = fVar50 != 0.0;
        fVar57 = _bStack000000000000005c;
        if (bVar12) {
          fVar57 = fVar50;
        }
        fVar50 = fVar57;
        uStack0000000000000060 = *(uint *)(lVar35 + 0x168);
        fStack0000000000000054 = 0.0;
        fVar57 = fVar51;
        if (bVar12) {
          fVar57 = fStack00000000000000cc;
        }
        uVar22 = (ulong)(uint)fVar57;
        fStack0000000000000050 = fStack00000000000000d0;
        fStack00000000000000cc = fVar57;
      }
      if (*in_stack_00000148 == 1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar35 = *(long *)(*in_stack_00000150 + 0x38), lVar35 != 0)) {
          if (uVar14 < *(uint *)(lVar35 + 0x18)) {
            lVar35 = lVar35 + lVar47 * 0x178;
            lVar37 = *unaff_x19;
            uVar55 = *(uint *)(lVar35 + 0x128);
            uVar66 = *(undefined4 *)(lVar35 + 0x160);
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
        uVar21 = FUN_016f68bc(uVar42,0);
        if ((*in_stack_00000150 != 0) &&
           (lVar35 = *(long *)(*in_stack_00000150 + 0x38), lVar35 != 0)) {
          if (uVar42 == 0x200b || (uVar21 & 1) != 0) {
            lVar37 = lVar20;
            if (*(uint *)(lVar35 + 0x18) <= uVar6)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          else {
            lVar37 = lVar47;
            if (*(uint *)(lVar35 + 0x18) <= uVar14)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          lVar35 = lVar35 + lVar37 * 0x178;
          uVar55 = *(uint *)(lVar35 + 0x128);
          uVar66 = *(undefined4 *)(lVar35 + 0x160);
          pcVar33 = *(code **)(*unaff_x19 + 0x908);
          goto LAB_02498064;
        }
        goto LAB_0249920c;
      }
      if (!bVar1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar35 = *(long *)(*in_stack_00000150 + 0x38), lVar35 != 0)) {
          uVar55 = *(uint *)(lVar35 + 0x18);
          goto LAB_02497adc;
        }
        goto LAB_0249920c;
      }
      if ((int)uVar14 < (int)(*in_stack_00000148 - 1)) {
        if ((*in_stack_00000150 == 0) ||
           (lVar35 = *(long *)(*in_stack_00000150 + 0x38), lVar35 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar35 + 0x18) <= uVar34)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar21 = FUN_024a9e4c(uStack0000000000000060,*(undefined4 *)(lVar35 + lVar43),0);
        if ((uVar21 & 1) == 0) {
          if ((*in_stack_00000150 != 0) &&
             (lVar35 = *(long *)(*in_stack_00000150 + 0x38), lVar35 != 0)) {
            if (uVar14 < *(uint *)(lVar35 + 0x18)) {
              lVar35 = lVar35 + lVar47 * 0x178;
              uVar56 = (ulong)*(uint *)(lVar35 + 0x128);
              uVar25 = (ulong)(uint)fStack0000000000000054;
              uVar22 = (ulong)(uint)fStack0000000000000050;
              (**(code **)(*unaff_x19 + 0x908))
                        (fStack0000000000000058,uVar22,uVar25,uVar56,fStack00000000000000d0,0,
                         _bStack000000000000005c,*(undefined4 *)(lVar35 + 0x160));
              puVar9 = System_Threading_Mutex_TypeInfo;
              lVar35 = *(long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(lVar35 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar35 = *(long *)puVar9;
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
    if ((*in_stack_00000150 == 0) || (lVar35 = *(long *)(*in_stack_00000150 + 0x38), lVar35 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar35 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if (lVar39 == 0) goto LAB_0249920c;
    uVar55 = *(uint *)(lVar35 + lVar47 * 0x178 + 400);
    fVar57 = (float)FUN_026fd1f0(lVar39 + 0x50,0);
    if ((uVar55 >> 6 & 1) == 0) {
      if (bVar7) {
        if ((*in_stack_00000150 == 0) ||
           (lVar35 = *(long *)(*in_stack_00000150 + 0x38), lVar35 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar35 + 0x18) <= uVar34 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar55 = *(uint *)(lVar35 + lVar43 + -0x330);
        pcVar33 = *(code **)(*unaff_x19 + 0x908);
        fVar52 = fStack0000000000000088 * fVar57 + *(float *)(lVar35 + lVar43 + -0x30c);
LAB_02498648:
        uVar56 = (ulong)uVar55;
        uVar22 = (ulong)(uint)in_stack_00000078._4_4_;
        uVar25 = (ulong)in_stack_00000068._4_4_;
        (*pcVar33)(fStack0000000000000080,uVar22,uVar25,uVar56,fVar52,0,fStack0000000000000088,
                   fStack0000000000000088);
      }
LAB_0249867c:
      bVar7 = false;
    }
    else {
      lVar35 = *in_stack_00000150;
      if ((lVar35 == 0) || (lVar37 = *(long *)(lVar35 + 0x38), lVar37 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar37 + 0x18) <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      *(int *)(lVar37 + lVar47 * 0x178 + 0x174) = iVar17;
      if ((((int)unaff_x19[100] < (int)uVar14) || ((int)unaff_x19[0x65] < (int)uVar38)) ||
         (((int)unaff_x19[0x5b] == 5 &&
          (*(int *)(lVar37 + lVar47 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((((uVar42 == 0xd) || ((uVar42 | 1) == 0xb)) || ((int)uVar6 < (int)uVar14)) ||
         (bVar7 || !bVar1)) {
LAB_02498228:
        if (!bVar7) goto LAB_0249867c;
      }
      else {
        if (uVar14 == uVar6) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar21 = FUN_016fa418(uVar42,0);
          if ((uVar21 & 1) != 0) goto LAB_02498228;
          lVar35 = *in_stack_00000150;
          if (lVar35 == 0) goto LAB_0249920c;
        }
        lVar35 = *(long *)(lVar35 + 0x38);
        if (lVar35 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar35 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar35 = lVar35 + lVar47 * 0x178;
        fStack0000000000000034 = *(float *)(lVar35 + 0x60);
        fStack0000000000000088 = *(float *)(lVar35 + 0x160);
        fStack0000000000000030 = *(float *)(lVar35 + 0x14c);
        uVar22 = (ulong)(uint)fStack0000000000000030;
        fStack0000000000000080 = *(float *)(lVar35 + 0x11c);
        in_stack_00000078._4_4_ = fVar57 * fStack0000000000000088 + fStack0000000000000030;
        in_stack_00000068._4_4_ = 0;
      }
      uVar55 = *in_stack_00000148;
      if (uVar55 == 1) {
LAB_024983ac:
        if ((*in_stack_00000150 != 0) &&
           (lVar35 = *(long *)(*in_stack_00000150 + 0x38), lVar35 != 0)) {
          if (uVar14 < *(uint *)(lVar35 + 0x18)) {
            lVar35 = lVar35 + lVar47 * 0x178;
            lVar20 = *unaff_x19;
            uVar55 = *(uint *)(lVar35 + 0x128);
            fVar52 = *(float *)(lVar35 + 0x14c);
LAB_024983d8:
            pcVar33 = *(code **)(lVar20 + 0x908);
FUN_02498644:
            fVar52 = fVar57 * fStack0000000000000088 + fVar52;
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
        uVar21 = FUN_016f68bc(uVar42,0);
        if ((*in_stack_00000150 != 0) &&
           (lVar35 = *(long *)(*in_stack_00000150 + 0x38), lVar35 != 0)) {
          uVar55 = *(uint *)(lVar35 + 0x18);
          if (uVar42 == 0x200b || (uVar21 & 1) != 0) {
            if (uVar55 <= uVar6)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          else {
LAB_02498620:
            lVar20 = lVar47;
            if (uVar55 <= uVar14)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
LAB_02498628:
          lVar35 = lVar35 + lVar20 * 0x178;
          fVar52 = *(float *)(lVar35 + 0x14c);
          uVar55 = *(uint *)(lVar35 + 0x128);
          pcVar33 = *(code **)(*unaff_x19 + 0x908);
          goto FUN_02498644;
        }
        goto LAB_0249920c;
      }
      if ((int)uVar14 < (int)uVar55) {
        lVar35 = *in_stack_00000150;
        if ((lVar35 != 0) && (lVar37 = *(long *)(lVar35 + 0x38), lVar37 != 0)) {
          if (uVar34 < *(uint *)(lVar37 + 0x18)) {
            if (*(float *)(lVar37 + lVar43 + -0x108) == fStack0000000000000034) {
              fVar60 = *(float *)(lVar37 + lVar43 + -0x1c);
              if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar22 = (ulong)(uint)fStack0000000000000030;
              uVar21 = FUN_024aa280(fVar52 + fVar60,uVar22,0);
              if ((uVar21 & 1) != 0) {
                uVar55 = *in_stack_00000148;
                goto 
                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractor_OnSelectEntering
                ;
              }
              lVar35 = *in_stack_00000150;
              if (lVar35 == 0) goto LAB_0249920c;
            }
            lVar35 = *(long *)(lVar35 + 0x38);
            if (lVar35 != 0) {
              uVar55 = *(uint *)(lVar35 + 0x18);
              if ((int)uVar14 <= (int)uVar6) goto LAB_02498620;
              if (uVar6 < uVar55) goto LAB_02498628;
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
      if ((int)uVar14 < (int)uVar55) {
        iVar15 = FUN_02681c0c(lVar39,0);
        if (*(uint *)(lVar29 + 0x18) <= uVar34)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar35 = *(long *)(lVar29 + lVar43 + -0x130);
        if (lVar35 == 0) goto LAB_0249920c;
        iVar16 = FUN_02681c0c(lVar35,0);
        if (iVar15 != iVar16) goto LAB_024983ac;
      }
      if (!bVar1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar35 = *(long *)(*in_stack_00000150 + 0x38), lVar35 != 0)) {
          if (uVar34 - 2 < *(uint *)(lVar35 + 0x18)) {
            lVar20 = *unaff_x19;
            uVar55 = *(uint *)(lVar35 + lVar43 + -0x330);
            fVar52 = *(float *)(lVar35 + lVar43 + -0x30c);
            goto LAB_024983d8;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      bVar7 = true;
    }
    if ((*in_stack_00000150 == 0) || (lVar35 = *(long *)(*in_stack_00000150 + 0x38), lVar35 == 0))
    goto LAB_0249920c;
    uVar55 = (uint)*(undefined8 *)(lVar35 + 0x18);
    if (uVar55 <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar35 + lVar47 * 0x178 + 0x191) >> 1 & 1) == 0) {
      if (bVar8) {
        uVar25 = (ulong)uStack00000000000000a0;
        uVar56 = (ulong)(uint)fStack00000000000000a4;
        uVar22 = (ulong)(uint)fStack00000000000000b4;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar22,uVar25,uVar56,fStack00000000000000a8,uVar25);
      }
LAB_024986e8:
      bVar8 = false;
    }
    else {
      if ((((int)unaff_x19[100] < (int)uVar14) || ((int)unaff_x19[0x65] < (int)uVar38)) ||
         (((int)unaff_x19[0x5b] == 5 &&
          (*(int *)(lVar35 + lVar47 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar8) {
        if ((((uVar42 == 0xd) || ((uVar42 | 1) == 0xb)) || ((int)uVar6 < (int)uVar14)) || (!bVar1))
        goto LAB_024986e8;
        if (uVar14 == uVar6) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar21 = FUN_016fa418(uVar42,0);
          if ((uVar21 & 1) != 0) goto LAB_024986e8;
        }
        puVar9 = System_Threading_Mutex_TypeInfo;
        lVar20 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar20 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar20 = *(long *)puVar9;
        }
        if ((*in_stack_00000150 == 0) ||
           (lVar35 = *(long *)(*in_stack_00000150 + 0x38), lVar35 == 0)) goto LAB_0249920c;
        uVar55 = (uint)*(undefined8 *)(lVar35 + 0x18);
        if (uVar55 <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar20 = *(long *)(lVar20 + 0xb8);
        lVar37 = lVar35 + lVar47 * 0x178;
        in_stack_00001798 = *(undefined8 *)(lVar37 + 0x184);
        in_stack_00001790 = *(undefined8 *)(lVar37 + 0x17c);
        fStack00000000000000b0 = *(float *)(lVar20 + 0x1598);
        in_stack_000017a0 = *(float *)(lVar37 + 0x18c);
        fStack00000000000000b4 = *(float *)(lVar20 + 0x159c);
        fStack00000000000000a4 = *(float *)(lVar20 + 0x15a0);
        fStack00000000000000a8 = *(float *)(lVar20 + 0x15a4);
        uStack00000000000000a0 = 0;
      }
      if (uVar55 <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar35 = lVar35 + lVar47 * 0x178;
      fVar63 = *(float *)(lVar35 + 0x188);
      uVar19 = *(undefined8 *)(lVar35 + 0x17c);
      fVar61 = *(float *)(lVar35 + 0x184);
      uVar23 = *(undefined8 *)(lVar35 + 0x184);
      fVar65 = *(float *)(lVar35 + 0x18c);
      fVar52 = *(float *)(lVar35 + 0x11c);
      fVar60 = *(float *)(lVar35 + 0x128);
      fVar62 = *(float *)(lVar35 + 0x148);
      fVar57 = *(float *)(lVar35 + 0x150);
      in_stack_00000158 = uVar19;
      fStack0000000000000160 = fVar61;
      fStack0000000000000164 = fVar63;
      in_stack_00000168 = fVar65;
      in_stack_00000170 = in_stack_00001790;
      in_stack_00000178 = in_stack_00001798;
      in_stack_00000180 = in_stack_000017a0;
      uVar21 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
      lVar35 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
      if ((uVar21 & 1) == 0) {
        if (*(int *)(lVar35 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar35);
        }
        fVar52 = fVar52 - (float)((ulong)in_stack_00001790 >> 0x20);
        if (fVar52 <= fStack00000000000000b0) {
          fStack00000000000000b0 = fVar52;
        }
        fVar57 = fVar57 - in_stack_000017a0;
        uVar22 = (ulong)(uint)fVar57;
        fVar60 = fVar60 + (float)in_stack_00001798;
        uVar25 = (ulong)(uint)fVar60;
        if (fVar57 <= fStack00000000000000b4) {
          fStack00000000000000b4 = fVar57;
        }
        fVar62 = fVar62 + (float)((ulong)in_stack_00001798 >> 0x20);
        uVar56 = (ulong)(uint)fVar62;
        if (fStack00000000000000a4 <= fVar60) {
          fStack00000000000000a4 = fVar60;
        }
        if (fStack00000000000000a8 <= fVar62) {
          fStack00000000000000a8 = fVar62;
        }
      }
      else {
        if (*(int *)(lVar35 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar35);
        }
        fVar52 = (fVar52 + (fStack00000000000000a4 - (float)in_stack_00001798)) * 0.5;
        uVar56 = (ulong)(uint)fVar52;
        if (fVar57 <= fStack00000000000000b4) {
          fStack00000000000000b4 = fVar57;
        }
        uVar22 = (ulong)(uint)fStack00000000000000b4;
        uVar25 = (ulong)uStack00000000000000a0;
        if (fStack00000000000000a8 <= fVar62) {
          fStack00000000000000a8 = fVar62;
        }
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar22,uVar25,uVar56,fStack00000000000000a8,uVar25);
        fStack00000000000000b4 = fVar57 - fVar65;
        fStack00000000000000a4 = fVar60 + fVar61;
        uStack00000000000000a0 = 0;
        fStack00000000000000a8 = fVar62 + fVar63;
        fStack00000000000000b0 = fVar52;
        in_stack_00001790 = uVar19;
        in_stack_00001798 = uVar23;
        in_stack_000017a0 = fVar65;
      }
      if (((*in_stack_00000148 == 1) || (uVar14 == uVar5)) ||
         (((int)uVar6 <= (int)uVar14 || (!bVar1)))) {
        uVar25 = (ulong)uStack00000000000000a0;
        uVar56 = (ulong)(uint)fStack00000000000000a4;
        uVar22 = (ulong)(uint)fStack00000000000000b4;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar22,uVar25,uVar56,fStack00000000000000a8,uVar25);
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
    }
    uVar14 = *in_stack_00000148;
    iVar49 = iVar49 + 1;
    lVar43 = lVar43 + 0x178;
    bVar1 = (int)uVar34 < (int)uVar14;
    uVar55 = uVar38;
    uVar34 = uVar34 + 1;
  } while (bVar1);
  lVar29 = *in_stack_00000150;
  if (lVar29 != 0) {
    iVar17 = uVar38 + 1;
LAB_02498c58:
    puVar10 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    puVar9 = PTR_DAT_033ed410;
    *(uint *)(lVar29 + 0x18) = uVar14;
    lVar43 = unaff_x19[0xd3];
    *(int *)(lVar29 + 0x2c) = iVar17;
    iVar17 = (int)fStack00000000000000ac;
    if ((int)uVar14 < 1) {
      iVar17 = 1;
    }
    if (fStack00000000000000ac == 0.0) {
      iVar17 = 1;
    }
    *(int *)(lVar29 + 0x1c) = (int)lVar43;
    *(int *)(lVar29 + 0x24) = iVar17;
    *(int *)(lVar29 + 0x30) = (int)unaff_x19[0x95] + 1;
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
    lVar29 = unaff_x19[0xde];
    if (lVar29 != 0) {
      (**(code **)(lVar29 + 0x18))
                (*(undefined8 *)(lVar29 + 0x40),*in_stack_00000150,*(undefined8 *)(lVar29 + 0x28));
    }
    if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
    iVar17 = FUN_02859dc4(unaff_x19[0xe4],0);
    if (iVar17 != 0x19) {
      lVar29 = unaff_x19[0xe4];
      if (lVar29 == 0) goto LAB_0249920c;
      uVar14 = FUN_02859dc4(lVar29,0);
      FUN_02859e00(lVar29,uVar14 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
      if ((*in_stack_00000150 == 0) || (lVar29 = *(long *)(*in_stack_00000150 + 0x60), lVar29 == 0))
      goto LAB_0249920c;
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(int *)(lVar29 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      FUN_024e8000(lVar29 + 0x20,1,0);
    }
    if (unaff_x19[0x73] != 0) {
      UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
                (unaff_x19[0x73],0);
      if ((unaff_x19[0x6c] != 0) && (lVar29 = *(long *)(unaff_x19[0x6c] + 0x60), lVar29 != 0)) {
        if (*(int *)(lVar29 + 0x18) == 0) {
UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (unaff_x19[0x73] != 0) {
          FUN_0266b9c4(unaff_x19[0x73],*(undefined8 *)(lVar29 + 0x30),0);
          if ((unaff_x19[0x6c] != 0) && (lVar29 = *(long *)(unaff_x19[0x6c] + 0x60), lVar29 != 0)) {
            if (*(int *)(lVar29 + 0x18) == 0)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            if (unaff_x19[0x73] != 0) {
              FUN_0266bbc8(unaff_x19[0x73],*(undefined8 *)(lVar29 + 0x48),0);
              if ((unaff_x19[0x6c] != 0) &&
                 (lVar29 = *(long *)(unaff_x19[0x6c] + 0x60), lVar29 != 0)) {
                if (*(int *)(lVar29 + 0x18) == 0)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                if (unaff_x19[0x73] != 0) {
                  FUN_0266bc74(unaff_x19[0x73],*(undefined8 *)(lVar29 + 0x50),0);
                  if ((unaff_x19[0x6c] != 0) &&
                     (lVar29 = *(long *)(unaff_x19[0x6c] + 0x60), lVar29 != 0)) {
                    if (*(int *)(lVar29 + 0x18) == 0)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    if (unaff_x19[0x73] != 0) {
                      FUN_0266c1dc(unaff_x19[0x73],*(undefined8 *)(lVar29 + 0x58),0);
                      if (unaff_x19[0x73] != 0) {
                        FUN_0266ed90(unaff_x19[0x73],0);
                        if (unaff_x19[0xe3] != 0) {
                          FUN_02858f1c(unaff_x19[0xe3],unaff_x19[0x73],0);
                          if (unaff_x19[0xe3] != 0) {
                            uVar23 = FUN_02858bac(unaff_x19[0xe3],0);
                            if (unaff_x19[0xe3] != 0) {
                              uVar14 = FUN_02858a14(unaff_x19[0xe3],0);
                              lVar29 = *in_stack_00000150;
                              if (lVar29 != 0) {
                                lVar35 = 0;
                                lVar43 = 0;
                                do {
                                  uVar21 = lVar43 + 1;
                                  if ((long)*(int *)(lVar29 + 0x34) <= (long)uVar21)
                                  goto LAB_02496098;
                                  lVar29 = *(long *)(lVar29 + 0x60);
                                  if (lVar29 == 0) break;
                                  if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  if (*(uint *)(lVar29 + 0x18) <= uVar21)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  FUN_024e7ecc(lVar29 + lVar35 + 0x70,0);
                                  lVar29 = unaff_x19[0xe0];
                                  if (lVar29 == 0) break;
                                  if (*(uint *)(lVar29 + 0x18) <= uVar21)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  uVar19 = *(undefined8 *)(lVar29 + lVar43 * 8 + 0x28);
                                  if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  uVar26 = FUN_0268b4e0(uVar19,0,0);
                                  if ((uVar26 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
                                      if ((*in_stack_00000150 == 0) ||
                                         (lVar29 = *(long *)(*in_stack_00000150 + 0x60), lVar29 == 0
                                         )) break;
                                      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                                        thunk_FUN_00d32864();
                                      }
                                      if (*(uint *)(lVar29 + 0x18) <= uVar21)
                                      goto 
                                      UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                      ;
                                      FUN_024e8000(lVar29 + lVar35 + 0x70,1,0);
                                    }
                                    lVar29 = unaff_x19[0xe0];
                                    if (lVar29 == 0) break;
                                    if (*(uint *)(lVar29 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar29 = *(long *)(lVar29 + lVar43 * 8 + 0x28);
                                    if (lVar29 == 0) break;
                                    lVar29 = FUN_024f0144(lVar29,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar20 = *(long *)(*in_stack_00000150 + 0x60), lVar20 == 0))
                                    break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar29 == 0) break;
                                    FUN_0266b9c4(lVar29,*(undefined8 *)(lVar20 + lVar35 + 0x80),0);
                                    lVar29 = unaff_x19[0xe0];
                                    if (lVar29 == 0) break;
                                    if (*(uint *)(lVar29 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar29 = *(long *)(lVar29 + lVar43 * 8 + 0x28);
                                    if (lVar29 == 0) break;
                                    lVar29 = FUN_024f0144(lVar29,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar20 = *(long *)(*in_stack_00000150 + 0x60), lVar20 == 0))
                                    break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar29 == 0) break;
                                    FUN_0266bbc8(lVar29,*(undefined8 *)(lVar20 + lVar35 + 0x98),0);
                                    lVar29 = unaff_x19[0xe0];
                                    if (lVar29 == 0) break;
                                    if (*(uint *)(lVar29 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar29 = *(long *)(lVar29 + lVar43 * 8 + 0x28);
                                    if (lVar29 == 0) break;
                                    lVar29 = FUN_024f0144(lVar29,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar20 = *(long *)(*in_stack_00000150 + 0x60), lVar20 == 0))
                                    break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar29 == 0) break;
                                    FUN_0266bc74(lVar29,*(undefined8 *)(lVar20 + lVar35 + 0xa0),0);
                                    lVar29 = unaff_x19[0xe0];
                                    if (lVar29 == 0) break;
                                    if (*(uint *)(lVar29 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar29 = *(long *)(lVar29 + lVar43 * 8 + 0x28);
                                    if (lVar29 == 0) break;
                                    lVar29 = FUN_024f0144(lVar29,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar20 = *(long *)(*in_stack_00000150 + 0x60), lVar20 == 0))
                                    break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar29 == 0) break;
                                    FUN_0266c1dc(lVar29,*(undefined8 *)(lVar20 + lVar35 + 0xa8),0);
                                    lVar29 = unaff_x19[0xe0];
                                    if (lVar29 == 0) break;
                                    if (*(uint *)(lVar29 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar29 = *(long *)(lVar29 + lVar43 * 8 + 0x28);
                                    if ((lVar29 == 0) ||
                                       (lVar29 = FUN_024f0144(lVar29,0), lVar29 == 0)) break;
                                    FUN_0266ed90(lVar29,0);
                                    lVar29 = unaff_x19[0xe0];
                                    if (lVar29 == 0) break;
                                    if (*(uint *)(lVar29 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar29 = *(long *)(lVar29 + lVar43 * 8 + 0x28);
                                    if (lVar29 == 0) break;
                                    lVar29 = FUN_02738ef4(lVar29,0);
                                    lVar20 = unaff_x19[0xe0];
                                    if (lVar20 == 0) break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar20 = *(long *)(lVar20 + lVar43 * 8 + 0x28);
                                    if ((lVar20 == 0) ||
                                       (uVar19 = FUN_024f0144(lVar20,0), lVar29 == 0)) break;
                                    FUN_02858f1c(lVar29,uVar19,0);
                                    lVar29 = unaff_x19[0xe0];
                                    if (lVar29 == 0) break;
                                    if (*(uint *)(lVar29 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar29 = *(long *)(lVar29 + lVar43 * 8 + 0x28);
                                    if ((lVar29 == 0) ||
                                       (lVar29 = FUN_02738ef4(lVar29,0), lVar29 == 0)) break;
                                    FUN_02858b14(uVar23,uVar22,uVar25,uVar56,lVar29,0);
                                    lVar29 = unaff_x19[0xe0];
                                    if (lVar29 == 0) break;
                                    if (*(uint *)(lVar29 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar29 = *(long *)(lVar29 + lVar43 * 8 + 0x28);
                                    if ((lVar29 == 0) ||
                                       (lVar29 = FUN_02738ef4(lVar29,0), lVar29 == 0)) break;
                                    FUN_02858a50(lVar29,uVar14 & 1,0);
                                    lVar29 = unaff_x19[0xe0];
                                    if (lVar29 == 0) break;
                                    if (*(uint *)(lVar29 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    plVar44 = *(long **)(lVar29 + lVar43 * 8 + 0x28);
                                    uVar18 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar44 == (long *)0x0) break;
                                    (**(code **)(*plVar44 + 0x2c8))
                                              (plVar44,uVar18 & 1,*(undefined8 *)(*plVar44 + 0x2d0))
                                    ;
                                  }
                                  lVar29 = *in_stack_00000150;
                                  lVar43 = lVar43 + 1;
                                  lVar35 = lVar35 + 0x50;
                                } while (lVar29 != 0);
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


