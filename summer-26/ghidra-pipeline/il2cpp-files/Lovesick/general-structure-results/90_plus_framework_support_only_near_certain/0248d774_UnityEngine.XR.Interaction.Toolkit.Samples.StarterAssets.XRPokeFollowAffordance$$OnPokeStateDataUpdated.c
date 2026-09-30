/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.XRPokeFollowAffordance$$OnPokeStateDataUpdated
ENTRY_POINT: 0248d774
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

void UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_XRPokeFollowAffordance__OnPokeStateDataUpdated
               (void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  double __x;
  undefined *puVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int *piVar18;
  ulong uVar19;
  undefined1 uVar20;
  char cVar21;
  long lVar22;
  long lVar23;
  undefined4 *puVar24;
  long lVar25;
  uint uVar26;
  long *plVar27;
  float *pfVar28;
  long lVar29;
  code *pcVar30;
  uint uVar31;
  float *pfVar32;
  uint uVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long *unaff_x19;
  int iVar39;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w24;
  long *plVar40;
  long *unaff_x25;
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
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  ulong uVar51;
  double dVar52;
  float fVar53;
  ulong uVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined4 uVar60;
  float fVar61;
  float fVar62;
  float unaff_s8;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float unaff_s12;
  float fVar69;
  float fVar70;
  ulong unaff_d13;
  undefined4 uVar71;
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
  undefined8 in_stack_00000080;
  float *in_stack_00000088;
  float fStack0000000000000090;
  undefined4 uStack0000000000000094;
  float fStack0000000000000098;
  float in_stack_000000a0;
  int iStack00000000000000a4;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  float fStack00000000000000c8;
  float fStack00000000000000cc;
  undefined8 in_stack_000000d8;
  float fStack00000000000000e0;
  float fStack00000000000000e4;
  float fStack00000000000000e8;
  float fStack00000000000000ec;
  uint uStack0000000000000114;
  long lStack0000000000000128;
  undefined8 in_stack_00000130;
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
  uint in_stack_000017bc;
  
code_r0x0248d774:
  lVar22 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
LAB_0248d784:
  FUN_013b8de4(lVar22 + 0x11f0,&stack0x00000880,
               *(undefined8 *)
                Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
              );
  lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
  memcpy((void *)(*(long *)(lVar22 + 0xb8) + 0x788),&stack0x00000880,0x378);
  lVar22 = *(long *)(lVar22 + 0xb8);
  *(float *)(lVar22 + 0x7bc) = unaff_s8 + *(float *)(lVar22 + 0x7bc);
  *(float *)(lVar22 + 0x800) = unaff_s8 + *(float *)(lVar22 + 0x800);
  memcpy(&stack0x00000190,(void *)(lVar22 + 0x788),0x378);
  FUN_013b86dc(lVar22 + 0x11f0,&stack0x00000190,
               *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__);
LAB_0248d804:
  uVar13 = (uint)unaff_x22;
  fVar53 = *(float *)(unaff_x19 + 0x9a);
  *(undefined1 *)((long)unaff_x19 + 0x334) = 0;
  fVar50 = *(float *)((long)unaff_x19 + 0x4c4) - fVar53;
  fVar58 = *(float *)((long)unaff_x19 + 0x4bc);
  if (fVar50 <= *(float *)((long)unaff_x19 + 0x4bc)) {
    fVar58 = fVar50;
  }
  *(float *)((long)unaff_x19 + 0x4bc) = fVar58;
  fVar57 = *(float *)(unaff_x19 + 0x98);
  if (*(char *)((long)unaff_x28 + 0xf34) == '\0') {
    in_stack_000017b8 = fVar58;
  }
  if ((*(char *)((long)unaff_x19 + 0x32c) != '\0') &&
     (((int)unaff_x19[100] <= *(int *)((long)unaff_x19 + 0x48c) ||
      ((int)unaff_x19[0x65] <= (int)unaff_x19[0x94])))) {
    *(undefined1 *)((long)unaff_x28 + 0xf34) = 1;
  }
  lVar22 = *unaff_x25;
  if ((lVar22 == 0) || (lVar23 = *(long *)(lVar22 + 0x50), lVar23 == 0)) goto LAB_02491464;
  uVar26 = *(uint *)(unaff_x19 + 0x94);
  if (*(uint *)(lVar23 + 0x18) <= uVar26)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar36 = lVar23 + (long)(int)uVar26 * 0x5c;
  *(int *)(lVar36 + 0x34) = (int)unaff_x19[0x92];
  iVar39 = (int)unaff_x19[0x92];
  if ((int)unaff_x19[0x92] <= *(int *)((long)unaff_x19 + 0x494)) {
    iVar39 = *(int *)((long)unaff_x19 + 0x494);
  }
  *(int *)((long)unaff_x19 + 0x494) = iVar39;
  *(int *)(lVar36 + 0x38) = iVar39;
  *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x48c);
  *(undefined4 *)(lVar36 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x48c);
  iVar39 = *(int *)((long)unaff_x19 + 0x494);
  if (*(int *)((long)unaff_x19 + 0x494) <= *(int *)((long)unaff_x19 + 0x49c)) {
    iVar39 = *(int *)((long)unaff_x19 + 0x49c);
  }
  *(int *)((long)unaff_x19 + 0x49c) = iVar39;
  *(int *)(lVar36 + 0x40) = iVar39;
  *(int *)(lVar36 + 0x24) = (*(int *)(lVar36 + 0x3c) - *(int *)(lVar36 + 0x34)) + 1;
  *(undefined4 *)(lVar36 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
  lVar22 = *(long *)(lVar22 + 0x38);
  if (lVar22 == 0) goto LAB_02491464;
  if (*(uint *)(lVar22 + 0x18) <= *(uint *)((long)unaff_x19 + 0x494))
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  uVar71 = *(undefined4 *)(lVar22 + (int)*(uint *)((long)unaff_x19 + 0x494) * unaff_x21 + 0x11c);
  lVar23 = lVar23 + (long)(int)uVar26 * 0x5c;
  *(float *)(lVar23 + 0x70) = fVar50;
  *(undefined4 *)(lVar23 + 0x6c) = uVar71;
  lVar22 = *unaff_x25;
  if ((lVar22 == 0) || (lVar23 = *(long *)(lVar22 + 0x50), lVar23 == 0)) goto LAB_02491464;
  if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar22 = *(long *)(lVar22 + 0x38);
  if (lVar22 == 0) goto LAB_02491464;
  if (*(uint *)(lVar22 + 0x18) <= *(uint *)((long)unaff_x19 + 0x49c))
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  fVar57 = fVar57 - fVar53;
  lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
  *(undefined4 *)(lVar23 + 0x74) =
       *(undefined4 *)(lVar22 + (int)*(uint *)((long)unaff_x19 + 0x49c) * unaff_x21 + 0x128);
  *(float *)(lVar23 + 0x78) = fVar57;
  lVar22 = *unaff_x25;
  if ((lVar22 == 0) || (lVar23 = *(long *)(lVar22 + 0x50), lVar23 == 0)) goto LAB_02491464;
  lVar36 = (long)(int)*(uint *)(unaff_x19 + 0x94);
  if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar29 = lVar23 + lVar36 * 0x5c;
  *(float *)(lVar29 + 0x44) = *(float *)(lVar29 + 0x74) - (float)unaff_d13 * in_stack_00000130._4_4_
  ;
  *(float *)(lVar29 + 0x5c) = in_stack_000000d8._4_4_;
  if (*(int *)(lVar29 + 0x24) == 1) {
    *(int *)(lVar23 + lVar36 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
  }
  if ((*unaff_x27 == 0) || (lVar29 = *(long *)(lVar22 + 0x38), lVar29 == 0)) goto LAB_02491464;
  lVar37 = (long)(int)*(uint *)((long)unaff_x19 + 0x49c);
  uVar26 = (uint)*(undefined8 *)(lVar29 + 0x18);
  if (uVar26 <= *(uint *)((long)unaff_x19 + 0x49c))
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*(char *)(lVar29 + lVar37 * unaff_x21 + 0x194) == '\0') &&
     (lVar37 = (long)(int)*(uint *)(unaff_x19 + 0x93), uVar26 <= *(uint *)(unaff_x19 + 0x93)))
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  fVar53 = (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
           (fStack00000000000000c8 *
            (in_stack_000000c0._4_4_ + fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac)) -
           *(float *)((long)unaff_x19 + 0x2a4));
  fVar58 = -fVar53;
  if ((char)unaff_x19[0x1d] != '\0') {
    fVar58 = fVar53;
  }
  lVar23 = lVar23 + lVar36 * 0x5c;
  *(float *)(lVar23 + 0x58) = *(float *)(lVar29 + lVar37 * unaff_x21 + 0x144) + fVar58;
  fVar58 = *(float *)(unaff_x19 + 0x9a);
  *(float *)(lVar23 + 0x48) = fStack0000000000000050 + (fVar57 - fVar50);
  *(float *)(lVar23 + 0x4c) = fVar57;
  uVar51 = (ulong)(uint)(0.0 - fVar58);
  *(float *)(lVar23 + 0x50) = 0.0 - fVar58;
  *(float *)(lVar23 + 0x54) = fVar50;
  plVar27 = (long *)System_Threading_Mutex_TypeInfo;
  iVar39 = (int)unaff_x21;
  uVar33 = in_stack_000017bc;
  if ((int)in_stack_000017bc < 0x2d) {
    if (1 < in_stack_000017bc - 10) {
      if (in_stack_000017bc != 3) goto LAB_0248dc08;
      if (unaff_x19[0x8e] != 0) {
        in_stack_00001788 = (uint)*(undefined8 *)(unaff_x19[0x8e] + 0x18);
        uVar33 = 3;
        goto LAB_0248dc08;
      }
      goto LAB_02491464;
    }
  }
  else if ((1 < in_stack_000017bc - 0x2028) && (in_stack_000017bc != 0x2d)) goto LAB_0248dc08;
  if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar42 = (long *)StringLiteral_302;
  FUN_024d69d4();
  lVar22 = unaff_x19[0x6c];
  *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
  iVar12 = (int)unaff_x19[0x94] + 1;
  *(int *)(unaff_x19 + 0x94) = iVar12;
  *(int *)(unaff_x19 + 0x92) = *(int *)((long)unaff_x19 + 0x48c) + 1;
  if ((lVar22 != 0) && (*(long *)(lVar22 + 0x50) != 0)) {
    if (*(int *)(*(long *)(lVar22 + 0x50) + 0x18) <= iVar12) {
      FUN_024d6e60();
      lVar22 = unaff_x19[0x6c];
      if (lVar22 == 0) goto LAB_02491464;
    }
    lVar22 = *(long *)(lVar22 + 0x38);
    if (lVar22 != 0) {
      if (*unaff_x26 < *(uint *)(lVar22 + 0x18)) {
        fVar58 = *(float *)(lVar22 + (int)*unaff_x26 * unaff_x21 + 0x154);
        if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
          fVar50 = 0.0;
          if ((in_stack_000017bc == 0x2029) || (in_stack_000017bc == 10)) {
            fVar50 = *(float *)((long)unaff_x19 + 0x2c4);
          }
          uVar20 = 0;
          fVar50 = *(float *)(unaff_x19 + 0x9a) +
                   fVar58 + (0.0 - *(float *)((long)unaff_x19 + 0x4c4)) +
                   fStack0000000000000054 *
                   (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4)) +
                   fStack00000000000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar50);
        }
        else {
          if ((in_stack_000017bc == 0x2029) || (fVar50 = 0.0, in_stack_000017bc == 10)) {
            fVar50 = *(float *)((long)unaff_x19 + 0x2c4);
          }
          uVar20 = 1;
          fVar50 = *(float *)(unaff_x19 + 0x9a) +
                   *(float *)(unaff_x19 + 0x57) +
                   fStack00000000000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar50);
        }
        *(float *)(unaff_x19 + 0x9a) = fVar50;
        *(undefined1 *)((long)unaff_x19 + 700) = uVar20;
        lVar22 = *plVar27;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar22 = *plVar27;
        }
        uVar16 = *(undefined8 *)(*(long *)(lVar22 + 0xb8) + 0x15a8);
        *(float *)(unaff_x19 + 0x99) = fVar58;
        uVar51 = NEON_rev64(uVar16,4);
        unaff_x19[0x98] = uVar51;
        *(float *)(unaff_x19 + 199) =
             *(float *)(unaff_x19 + 0x80) + 0.0 + *(float *)((long)unaff_x19 + 0x404);
        FUN_024d69d4();
        FUN_024d69d4();
        *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
        fStack0000000000000058 = 1.4013e-45;
        bStack000000000000005c = 1;
LAB_0248ab98:
        fVar58 = (float)unaff_d13;
        in_stack_00001788 = in_stack_00001788 + 1;
        lVar22 = unaff_x19[0x8e];
        if (lVar22 != 0) {
          if ((int)in_stack_00001788 < (int)*(uint *)(lVar22 + 0x18)) {
            if (*(uint *)(lVar22 + 0x18) <= in_stack_00001788)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            uVar13 = *(uint *)(lVar22 + (long)(int)in_stack_00001788 * 0xc + 0x20);
            if (uVar13 == 0) goto LAB_0248e4dc;
            if (5 < in_stack_00000140._4_4_) {
              uVar16 = FUN_0176eb1c(&stack0x000017bc,0);
              uVar17 = FUN_0176eb1c(&stack0x00001788,0);
              uVar16 = FUN_0160073c(*(undefined8 *)
                                     UnityEngine_Rendering_Universal_DebugValidationMode_var,uVar16,
                                    *(undefined8 *)
                                     Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                                    ,uVar17,0);
              if (*(int *)(*plVar42 + 0xe0) == 0) {
                thunk_FUN_00d32864(*plVar42);
              }
              FUN_026610e4(uVar16,0);
              in_stack_000017a8 = CONCAT44(3,*unaff_x26);
              unaff_x25 = in_stack_00000150;
            }
            if ((*(char *)((long)unaff_x19 + 0x2fa) != '\0') && (uVar13 == 0x3c))
            goto code_r0x0248a9ac;
            if ((*unaff_x25 != 0) && (lVar22 = *(long *)(*unaff_x25 + 0x38), lVar22 != 0)) {
              if (*unaff_x26 < *(uint *)(lVar22 + 0x18)) {
                lVar22 = lVar22 + (int)*unaff_x26 * unaff_x21;
                *(undefined4 *)((long)unaff_x19 + 0x63c) = *(undefined4 *)(lVar22 + 0x2c);
                *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar22 + 0x58);
                unaff_x19[0x1f] = *(long *)(lVar22 + 0x38);
                goto 
                UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager__GetInputAction
                ;
              }
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            }
            goto LAB_02491464;
          }
LAB_0248e4dc:
          fVar58 = (float)uVar51;
          if (((char)unaff_x19[0x46] != '\0') &&
             (fVar58 = DAT_02956ccc,
             DAT_02956ccc < *(float *)((long)unaff_x19 + 0x234) - *(float *)(unaff_x19 + 0x47))) {
            fVar58 = *(float *)((long)unaff_x19 + 0x1dc);
            fVar50 = *(float *)((long)unaff_x19 + 0x24c);
            if ((fVar58 < fVar50) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
              if (*(float *)((long)unaff_x19 + 0x2cc) < *(float *)(unaff_x19 + 0x59) / 100.0) {
                *(undefined4 *)((long)unaff_x19 + 0x2cc) = 0;
              }
              fVar53 = (*(float *)((long)unaff_x19 + 0x234) - fVar58) * 0.5;
              if (fVar53 <= DAT_028aa298) {
                fVar53 = DAT_028aa298;
              }
              *(float *)(unaff_x19 + 0x47) = fVar58;
              fVar53 = (fVar58 + fVar53) * 20.0 + 0.5;
              fVar58 = DAT_02958220;
              if (fVar53 != INFINITY) {
                fVar58 = (float)(int)fVar53 / 20.0;
              }
              if (fVar50 <= fVar58) {
                fVar58 = fVar50;
              }
              goto LAB_0248e598;
            }
          }
          *(undefined1 *)((long)unaff_x19 + 0x244) = 1;
          if ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c)) {
            uVar16 = FUN_0176eb1c(_fStack0000000000000038,0);
            uVar17 = FUN_017840ac(in_stack_00000040,0);
            uVar16 = FUN_0160073c(*(undefined8 *)
                                   Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlah_s16__,uVar16,
                                  *(undefined8 *)
                                   Method_UnityEngine_GameObject_GetComponents<Component>__,uVar17,0
                                 );
            if (*(int *)(*plVar42 + 0xe0) == 0) {
              thunk_FUN_00d32864(*plVar42);
            }
            FUN_02660dac(uVar16,0);
          }
          puVar9 = Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__;
          if ((*unaff_x26 == 0) || ((*unaff_x26 == 1 && (in_stack_000017bc == 3)))) {
            (**(code **)(*unaff_x19 + 0x958))();
            lVar22 = *(long *)puVar9;
            goto LAB_02491474;
          }
          lVar22 = *plVar27;
          if (*(int *)(lVar22 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar22 = *plVar27;
          }
          plVar27 = (long *)PTR_DAT_033ed410;
          lVar22 = **(long **)(lVar22 + 0xb8);
          if (lVar22 == 0) goto LAB_02491464;
          if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0xd0))
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          iVar39 = *(int *)(lVar22 + (long)(int)*(uint *)(unaff_x19 + 0xd0) * 0x38 + 0x54) << 2;
          if ((*unaff_x25 == 0) || (lVar22 = *(long *)(*unaff_x25 + 0x60), lVar22 == 0))
          goto LAB_02491464;
          if (*(int *)(*(long *)PTR_DAT_033ed410 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (*(int *)(lVar22 + 0x18) == 0)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          FUN_024e7d94(lVar22 + 0x20,0,0);
          if (DAT_03774d76 == '\0') {
            thunk_FUN_00d48444(
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              );
            DAT_03774d76 = '\x01';
          }
          iVar12 = (int)unaff_x19[0x4d];
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
          lVar22 = unaff_x19[0xea];
          in_stack_00000088 = (float *)in_stack_000000b8;
          fStack0000000000000090 = in_stack_000000c0._4_4_;
          if (iVar12 < 0x401) {
            if (iVar12 == 0x100) {
              if (lVar22 == 0) goto LAB_02491464;
              if (*(uint *)(lVar22 + 0x18) < 2)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              uVar16 = *(undefined8 *)(lVar22 + 0x30);
              if ((int)unaff_x19[0x5b] == 5) {
                if ((*unaff_x25 == 0) || (lVar23 = *(long *)(*unaff_x25 + 0x58), lVar23 == 0))
                goto LAB_02491464;
                if (*(uint *)(lVar23 + 0x18) <= uStack0000000000000030)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                fVar58 = *(float *)(lVar23 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
              }
              else {
                fVar58 = *(float *)(unaff_x19 + 0x96);
              }
              fStack0000000000000090 = fStack000000000000002c + 0.0 + *(float *)(lVar22 + 0x2c);
              fVar58 = (0.0 - fVar58) - fStack0000000000000020;
            }
            else if (iVar12 == 0x200) {
              if (lVar22 == 0) goto LAB_02491464;
              if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0))
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              fStack0000000000000090 = (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5
              ;
              uVar16 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20)) * 0.5,
                                ((float)*(undefined8 *)(lVar22 + 0x24) +
                                (float)*(undefined8 *)(lVar22 + 0x30)) * 0.5);
              if ((int)unaff_x19[0x5b] == 5) {
                if ((*unaff_x25 == 0) || (lVar22 = *(long *)(*unaff_x25 + 0x58), lVar22 == 0))
                goto LAB_02491464;
                if (*(uint *)(lVar22 + 0x18) <= uStack0000000000000030)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                lVar22 = lVar22 + (long)(int)uStack0000000000000030 * 0x14;
                fStack0000000000000090 = fStack000000000000002c + 0.0 + fStack0000000000000090;
                fVar58 = ((fStack0000000000000020 + *(float *)(lVar22 + 0x28) +
                          *(float *)(lVar22 + 0x30)) - fStack0000000000000024) * -0.5 + 0.0;
              }
              else {
                fStack0000000000000090 = fStack000000000000002c + 0.0 + fStack0000000000000090;
                fVar58 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x96) + in_stack_000017b8
                          ) - fStack0000000000000024) * -0.5 + 0.0;
              }
            }
            else {
              if (iVar12 != 0x400) goto LAB_0248eb64;
              if (lVar22 == 0) goto LAB_02491464;
              if (*(int *)(lVar22 + 0x18) == 0)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              uVar16 = *(undefined8 *)(lVar22 + 0x24);
              if ((int)unaff_x19[0x5b] == 5) {
                if ((*unaff_x25 == 0) || (lVar23 = *(long *)(*unaff_x25 + 0x58), lVar23 == 0))
                goto LAB_02491464;
                if (*(uint *)(lVar23 + 0x18) <= uStack0000000000000030)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                in_stack_000017b8 =
                     *(float *)(lVar23 + (long)(int)uStack0000000000000030 * 0x14 + 0x30);
              }
              fStack0000000000000090 = fStack000000000000002c + 0.0 + *(float *)(lVar22 + 0x20);
              fVar58 = fStack0000000000000024 + (0.0 - in_stack_000017b8);
            }
            in_stack_00000088 =
                 (float *)CONCAT44((float)((ulong)uVar16 >> 0x20) + 0.0,(float)uVar16 + fVar58);
          }
          else if (iVar12 == 0x800) {
            if (lVar22 == 0) goto LAB_02491464;
            if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0))
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            fVar58 = ((float)*(undefined8 *)(lVar22 + 0x24) + (float)*(undefined8 *)(lVar22 + 0x30))
                     * 0.5;
            fStack0000000000000090 =
                 fStack000000000000002c + 0.0 +
                 (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
            in_stack_00000088 =
                 (float *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                                   (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20)) * 0.5 +
                                   0.0,fVar58 + 0.0);
          }
          else {
            if (iVar12 == 0x1000) {
              if (lVar22 == 0) goto LAB_02491464;
              if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0))
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              fVar58 = (float)*(undefined8 *)(lVar22 + 0x24) + (float)*(undefined8 *)(lVar22 + 0x30)
              ;
              fVar50 = (float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                       (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20);
              fStack0000000000000020 =
                   fStack0000000000000020 + *(float *)(unaff_x19 + 0x9c) +
                   *(float *)(unaff_x19 + 0x9b);
              fStack0000000000000090 =
                   fStack000000000000002c + 0.0 +
                   (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
            }
            else {
              if (iVar12 != 0x2000) goto LAB_0248eb64;
              if (lVar22 == 0) goto LAB_02491464;
              if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0))
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              fVar58 = (float)*(undefined8 *)(lVar22 + 0x24) + (float)*(undefined8 *)(lVar22 + 0x30)
              ;
              fVar50 = (float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                       (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20);
              fStack0000000000000020 = *(float *)((long)unaff_x19 + 0x4b4) - fStack0000000000000020;
              fStack0000000000000090 =
                   fStack000000000000002c + 0.0 +
                   (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
            }
            fVar58 = fVar58 * 0.5;
            in_stack_00000088 =
                 (float *)CONCAT44(fVar50 * 0.5 + 0.0,
                                   fVar58 + (0.0 - (fStack0000000000000020 - fStack0000000000000024)
                                                   * 0.5));
          }
LAB_0248eb64:
          lVar22 = FUN_0249b7f8();
          if (lVar22 == 0) goto LAB_02491464;
          FUN_026a125c(lVar22,0);
          __x = DAT_028aa048;
          *(float *)((long)unaff_x19 + 0x6dc) = fVar58;
          dVar52 = modf(__x,(double *)&stack0x00000880);
          puVar9 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
          if (dVar52 == 0.5) {
            fVar50 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
            if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
              fVar50 = fVar50 + 1.0;
            }
          }
          else {
            fVar50 = 255.0;
          }
          dVar52 = modf(__x,(double *)&stack0x00000880);
          if (dVar52 == 0.5) {
            fVar53 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
            if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
              fVar53 = fVar53 + 1.0;
            }
          }
          else {
            fVar53 = 255.0;
          }
          dVar52 = modf(__x,(double *)&stack0x00000880);
          if (dVar52 == 0.5) {
            fVar57 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
            if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
              fVar57 = fVar57 + 1.0;
            }
          }
          else {
            fVar57 = 255.0;
          }
          dVar52 = modf(__x,(double *)&stack0x00000880);
          if (dVar52 == 0.5) {
            fVar63 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
            if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
              fVar63 = fVar63 + 1.0;
            }
          }
          else {
            fVar63 = 255.0;
          }
          modf(__x,(double *)&stack0x00000880);
          modf(__x,(double *)&stack0x00000880);
          modf(__x,(double *)&stack0x00000880);
          modf(__x,(double *)&stack0x00000880);
          if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (DAT_037825d3 == '\0') {
            thunk_FUN_00d48444(Unity_AI_Navigation_NavMeshLink_TypeInfo);
            DAT_037825d3 = '\x01';
          }
          puVar9 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
          lVar22 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
          if (*(int *)(lVar22 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar22 = *(long *)puVar9;
          }
          puVar24 = *(undefined4 **)(lVar22 + 0xb8);
          UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
                    (*puVar24,puVar24[1],puVar24[2],puVar24[3],&stack0x00001790,0x4000ffff,0);
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar22 = *in_stack_00000150;
          if (lVar22 == 0) goto LAB_02491464;
          uVar13 = *in_stack_00000148;
          if ((int)uVar13 < 1) {
            iStack00000000000000a4 = 0;
            iVar39 = 0;
            plVar42 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
            ;
            goto LAB_02491068;
          }
          lVar22 = *(long *)(lVar22 + 0x38);
          if (lVar22 == 0) goto LAB_02491464;
          iVar12 = 0;
          bVar8 = false;
          bVar11 = false;
          bVar10 = false;
          iStack00000000000000a4 = 0;
          fStack0000000000000024 = 0.0;
          bVar7 = false;
          uStack0000000000000114 = 0;
          fStack0000000000000048 = 0.0;
          fStack00000000000000cc =
               *(float *)(*(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8) + 0x15a8);
          fStack00000000000000c8 = 0.0;
          fStack0000000000000054 = fStack00000000000000a8;
          fStack0000000000000058 = 0.0;
          fStack0000000000000038 = 0.0;
          in_stack_00000080._4_4_ = 0.0;
          fStack0000000000000034 = 0.0;
          _bStack000000000000005c =
               (int)fVar50 & 0xffU | ((int)fVar53 & 0xffU) << 8 | ((int)fVar57 & 0xffU) << 0x10 |
               (int)fVar63 << 0x18;
          fVar53 = 0.0;
          fVar50 = 0.0;
          lStack0000000000000128 = 0x2e0;
          fStack0000000000000098 = fStack00000000000000a8;
          in_stack_000000a0 = fStack00000000000000ac;
          fStack000000000000004c = fStack00000000000000ac;
          fStack0000000000000050 = (float)uStack0000000000000094;
          in_stack_00000078._4_4_ = fStack00000000000000a8;
          in_stack_00000068._4_4_ = fStack00000000000000ac;
          uStack0000000000000060 = uStack0000000000000094;
          uVar26 = 0;
          uVar33 = 1;
          goto LAB_0248ef74;
        }
        goto LAB_02491464;
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    }
  }
  goto LAB_02491464;
code_r0x0248a9ac:
  *(undefined1 *)((long)unaff_x19 + 0x429) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
  uVar54 = FUN_024d0688();
  if (((uVar54 & 1) != 0) &&
     (in_stack_00001788 = in_stack_0000176c, in_stack_000017bc = uVar13,
     *(int *)((long)unaff_x19 + 0x63c) == 0)) goto LAB_0248ab98;

  UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager__GetInputAction
  :
  if ((unaff_x19[0x6c] == 0) || (lVar22 = *(long *)(unaff_x19[0x6c] + 0x38), lVar22 == 0))
  goto LAB_02491464;
  uVar26 = *unaff_x26;
  if (*(uint *)(lVar22 + 0x18) <= uVar26)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar36 = (long)(int)uVar26;
  cVar21 = *(char *)(lVar22 + lVar36 * unaff_x21 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x429) = 0;
  lVar23 = unaff_x19[0x23];
  if ((uint)in_stack_000017a8 == uVar26) {
    uVar13 = (uint)((ulong)in_stack_000017a8 >> 0x20);
    bVar7 = true;
    *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
    if (uVar13 == 0x2026) {
      lVar29 = unaff_x19[0xc9];
      lVar22 = lVar22 + lVar36 * unaff_x21;
      *(undefined4 *)(lVar22 + 0x2c) = 0;
      *(long *)(lVar22 + 0x30) = lVar29;
      *(long *)(lVar22 + 0x38) = unaff_x19[0xca];
      *(long *)(lVar22 + 0x50) = unaff_x19[0xcb];
      *(int *)(lVar22 + 0x58) = (int)unaff_x19[0xcc];
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
      in_stack_000017a8 = CONCAT44(3,uVar26 + 1);
    }
    else if (uVar13 == 3) {
      if ((*unaff_x27 == 0) || (lVar29 = FUN_024b11ac(*unaff_x27,0), lVar29 == 0))
      goto LAB_02491464;
      in_stack_00000bf8 = 3;
      FUN_01299bc0(lVar29,&stack0x00000bf8,&stack0x00000880,*(undefined8 *)PTR_DAT_033ef3c8);
      if (*(uint *)(lVar22 + 0x18) <= uVar26)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      bVar7 = true;
      *(ulong *)(lVar22 + lVar36 * unaff_x21 + 0x30) = CONCAT44(in_stack_00000884,in_stack_00000880)
      ;
      uVar26 = *(uint *)((long)unaff_x19 + 0x48c);
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
    }
  }
  else {
    bVar7 = false;
  }
  plVar27 = (long *)System_Threading_Mutex_TypeInfo;
  in_stack_000017bc = uVar13;
  if (((int)uVar26 < *(int *)((long)unaff_x19 + 0x31c)) && (uVar13 != 3)) {
    if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar22 + 0x18) <= uVar26)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar22 = lVar22 + (long)(int)uVar26 * (long)iVar39;
    *(undefined1 *)(lVar22 + 0x194) = 0;
    *(undefined2 *)(lVar22 + 0x20) = 0x200b;
    *(undefined4 *)(lVar22 + 100) = 0;
    *in_stack_00000148 = uVar26 + 1;
    unaff_x25 = in_stack_00000150;
    unaff_x26 = in_stack_00000148;
    goto LAB_0248ab98;
  }
  iVar12 = *(int *)((long)unaff_x19 + 0x63c);
  fVar50 = unaff_s12;
  if (iVar12 == 0) {
    uVar26 = *(uint *)((long)unaff_x19 + 0x254);
    if ((uVar26 >> 4 & 1) == 0) {
      if ((uVar26 >> 3 & 1) == 0) {
        if ((uVar26 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar54 = FUN_016f92d4(uVar13,0);
          if ((uVar54 & 1) != 0) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar13 = FUN_016f95a8(uVar13,0);
            uVar13 = uVar13 & 0xffff;
            fVar50 = fStack0000000000000028;
          }
        }
      }
      else {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar54 = FUN_016f9218(uVar13,0);
        if ((uVar54 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar13 = FUN_016f9724(uVar13,0);
          goto LAB_0248af70;
        }
      }
    }
    else {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar54 = FUN_016f92d4(uVar13,0);
      if ((uVar54 & 1) != 0) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar13 = FUN_016f95a8(uVar13,0);
LAB_0248af70:
        uVar13 = uVar13 & 0xffff;
      }
    }
    iVar12 = *(int *)((long)unaff_x19 + 0x63c);
    in_stack_000017bc = uVar13;
    if (iVar12 != 0) goto LAB_0248abc8;
LAB_0248af84:
    if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 == 0))
    goto LAB_02491464;
    uVar26 = *in_stack_00000148;
    uVar13 = *(uint *)(lVar22 + 0x18);
    if (uVar13 <= uVar26)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar23 = *(long *)(lVar22 + (int)uVar26 * unaff_x21 + 0x30);
    unaff_x19[200] = lVar23;
    plVar27 = (long *)System_Threading_Mutex_TypeInfo;
    unaff_x25 = in_stack_00000150;
    unaff_x26 = in_stack_00000148;
    if (lVar23 == 0) goto LAB_0248ab98;
    lVar36 = lVar22 + (int)uVar26 * unaff_x21;
    lVar23 = *(long *)(lVar36 + 0x38);
    unaff_x19[0x1f] = lVar23;
    unaff_x19[0x22] = *(long *)(lVar36 + 0x50);
    *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar36 + 0x58);
    if (bVar7) {
      lVar36 = unaff_x19[0x8e];
      if (lVar36 == 0) goto LAB_02491464;
      if (*(uint *)(lVar36 + 0x18) <= in_stack_00001788)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if ((*(int *)(lVar36 + (long)(int)in_stack_00001788 * 0xc + 0x20) != 10) ||
         (uVar26 == *(uint *)(unaff_x19 + 0x92))) goto LAB_0248b014;
      if (uVar13 <= uVar26 - 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (lVar23 == 0) goto LAB_02491464;
      fVar53 = *(float *)(lVar22 + (long)(int)(uVar26 - 1) * (long)iVar39 + 0x60);
      iVar12 = FUN_026fd110(lVar23 + 0x50,0);
      lVar22 = *unaff_x27;
    }
    else {
LAB_0248b014:
      if (lVar23 == 0) goto LAB_02491464;
      fVar53 = *(float *)(unaff_x19 + 0x3c);
      iVar12 = FUN_026fd110(lVar23 + 0x50,0);
      lVar22 = unaff_x19[0x1f];
    }
    if (lVar22 == 0) goto LAB_02491464;
    fVar68 = (float)FUN_026fd120(lVar22 + 0x50,0);
    fVar63 = in_stack_00000080._4_4_;
    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
      fVar63 = unaff_s12;
    }
    fVar57 = 0.0;
    fVar44 = 0.0;
    if (!(bool)(bVar7 & in_stack_000017bc == 0x2026)) {
      if (*unaff_x27 == 0) goto LAB_02491464;
      fVar44 = (float)FUN_026fd140(*unaff_x27 + 0x50,0);
      if (*unaff_x27 == 0) goto LAB_02491464;
      fVar57 = (float)FUN_026fd180(*unaff_x27 + 0x50,0);
    }
    lVar22 = unaff_x19[200];
    if ((lVar22 == 0) || (*(long *)(lVar22 + 0x20) == 0)) goto LAB_02491464;
    fVar43 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar45 = *(float *)(lVar22 + 0x2c);
    fVar58 = (float)FUN_026fd668(*(long *)(lVar22 + 0x20),0);
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar69 = (float)FUN_026fd170(*unaff_x27 + 0x50,0);
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar47 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar46 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
    lVar36 = unaff_x19[0x6c];
    if ((lVar36 == 0) || (lVar22 = *(long *)(lVar36 + 0x38), lVar22 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar22 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar22 = lVar22 + (int)*in_stack_00000148 * unaff_x21;
    *(undefined4 *)(lVar22 + 0x2c) = 0;
    fVar63 = ((fVar50 * fVar53) / (float)iVar12) * fVar68 * fVar63;
    fVar58 = fVar63 * fVar43 * fVar45 * fVar58;
    *(float *)(lVar22 + 0x160) = fVar58;
    uVar13 = *(uint *)(unaff_x19 + 0x23);
    fVar46 = fVar63 * fVar69 * fVar47 * fVar46;
    if (uVar13 == 0) {
      in_stack_00000130._4_4_ = *(float *)(unaff_x19 + 0xc2);
    }
    else {
      lVar22 = unaff_x19[0xe0];
      if (lVar22 == 0) goto LAB_02491464;
      if (*(uint *)(lVar22 + 0x18) <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar22 = *(long *)(lVar22 + (long)(int)uVar13 * 8 + 0x20);
      if (lVar22 == 0) goto LAB_02491464;
      in_stack_00000130._4_4_ = *(float *)(lVar22 + 0x4c);
    }
LAB_0248b384:
    unaff_s12 = 1.0;
    fVar53 = 0.0;
    if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
      fVar53 = fVar58;
    }
  }
  else {
    if (iVar12 == 0) goto LAB_0248af84;
LAB_0248abc8:
    if (iVar12 == 1) {
      if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar22 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar22 = lVar22 + (int)*in_stack_00000148 * unaff_x21;
      lVar36 = *(long *)(lVar22 + 0x40);
      unaff_x19[0xd2] = lVar36;
      *(undefined4 *)((long)unaff_x19 + 0x69c) = *(undefined4 *)(lVar22 + 0x48);
      if ((lVar36 == 0) || (lVar22 = FUN_024ebfa0(lVar36,0), lVar22 == 0)) goto LAB_02491464;
      FUN_0132138c(lVar22,*(undefined4 *)((long)unaff_x19 + 0x69c),&stack0x00000880,
                   *(undefined8 *)System_Func<KeyValuePair<int,_int>,_int>_TypeInfo);
      puVar9 = System_Threading_Mutex_TypeInfo;
      lVar22 = CONCAT44(in_stack_00000884,in_stack_00000880);
      plVar27 = (long *)System_Threading_Mutex_TypeInfo;
      unaff_x25 = in_stack_00000150;
      unaff_x26 = in_stack_00000148;
      if (lVar22 == 0) goto LAB_0248ab98;
      if (in_stack_000017bc == 0x3c) {
        in_stack_000017bc = *(int *)((long)unaff_x19 + 0x69c) + 0xe000;
      }
      else {
        lVar36 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar36 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar36 = *(long *)puVar9;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1b4) = *(undefined4 *)(*(long *)(lVar36 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x1f] == 0) goto LAB_02491464;
      fVar58 = *(float *)(unaff_x19 + 0x3c);
      memmove(&stack0x00001700,(void *)(unaff_x19[0x1f] + 0x50),0x60);
      iVar12 = FUN_026fd110(&stack0x00001700,0);
      if (*unaff_x27 == 0) goto LAB_02491464;
      memmove(&stack0x00001700,(void *)(*unaff_x27 + 0x50),0x60);
      fVar57 = (float)FUN_026fd120(&stack0x00001700,0);
      fVar53 = in_stack_00000080._4_4_;
      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
        fVar53 = unaff_s12;
      }
      if (unaff_x19[0xd2] == 0) goto LAB_02491464;
      fVar53 = (fVar58 / (float)iVar12) * fVar57 * fVar53;
      iVar12 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
      fVar58 = *(float *)(unaff_x19 + 0x3c);
      if (iVar12 < 1) {
        if (*unaff_x27 == 0) goto LAB_02491464;
        iVar12 = FUN_026fd110(*unaff_x27 + 0x50,0);
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar63 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
        fVar57 = in_stack_00000080._4_4_;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar57 = unaff_s12;
        }
        if (unaff_x19[0x1f] == 0) goto LAB_02491464;
        fVar68 = (float)FUN_026fd140(unaff_x19[0x1f] + 0x50,0);
        if (*(long *)(lVar22 + 0x20) == 0) goto LAB_02491464;
        FUN_026fd62c(&stack0x00000880,*(long *)(lVar22 + 0x20),0);
        unaff_x28[0x1cd] = unaff_x28[1];
        unaff_x28[0x1cc] = *unaff_x28;
        fVar43 = (float)FUN_026fd45c(&stack0x000016e0,0);
        if (*(long *)(lVar22 + 0x20) == 0) goto LAB_02491464;
        fVar45 = *(float *)(lVar22 + 0x2c);
        fVar69 = (float)FUN_026fd668(*(long *)(lVar22 + 0x20),0);
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar44 = (float)FUN_026fd140(*unaff_x27 + 0x50,0);
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar47 = (float)FUN_026fd170(*unaff_x27 + 0x50,0);
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar61 = *(float *)((long)unaff_x19 + 0x3fc);
        fVar46 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
        if (unaff_x19[0x1f] == 0) goto LAB_02491464;
        fVar46 = fVar53 * fVar47 * fVar61 * fVar46;
        fVar57 = (fVar58 / (float)iVar12) * fVar63 * fVar57;
        fVar58 = fVar57 * (fVar68 / fVar43) * fVar45 * fVar69;
        fVar57 = fVar57 / fVar58;
        fVar44 = fVar57 * fVar44;
        fVar53 = (float)FUN_026fd180(unaff_x19[0x1f] + 0x50,0);
        fVar57 = fVar57 * fVar53;
      }
      else {
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        iVar12 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        fVar57 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
        if (*(long *)(lVar22 + 0x20) == 0) goto LAB_02491464;
        fVar68 = *(float *)(lVar22 + 0x2c);
        fVar63 = in_stack_00000080._4_4_;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar63 = 1.0;
        }
        fVar43 = (float)FUN_026fd668(*(long *)(lVar22 + 0x20),0);
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        fVar44 = (float)FUN_026fd140(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        fVar45 = (float)FUN_026fd170(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        fVar69 = *(float *)((long)unaff_x19 + 0x3fc);
        fVar46 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        fVar46 = fVar53 * fVar45 * fVar69 * fVar46;
        fVar58 = (fVar58 / (float)iVar12) * fVar57 * fVar63 * fVar68 * fVar43;
        fVar57 = (float)FUN_026fd180(unaff_x19[0xd2] + 0x48,0);
      }
      lVar36 = unaff_x19[0x6c];
      unaff_x19[200] = lVar22;
      if ((lVar36 == 0) || (lVar22 = *(long *)(lVar36 + 0x38), lVar22 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar22 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar22 = lVar22 + (int)*in_stack_00000148 * unaff_x21;
      *(undefined4 *)(lVar22 + 0x2c) = 1;
      *(float *)(lVar22 + 0x160) = fVar58;
      in_stack_00000130._4_4_ = 0.0;
      *(long *)(lVar22 + 0x40) = unaff_x19[0xd2];
      *(long *)(lVar22 + 0x38) = unaff_x19[0x1f];
      *(int *)(lVar22 + 0x58) = (int)unaff_x19[0x23];
      *(int *)(unaff_x19 + 0x23) = (int)lVar23;
      goto LAB_0248b384;
    }
    lVar36 = *in_stack_00000150;
    fVar53 = 0.0;
    if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
      fVar53 = fVar58;
    }
    fVar46 = 0.0;
    if (lVar36 == 0) goto LAB_02491464;
    fVar44 = 0.0;
    fVar57 = 0.0;
  }
  lVar22 = *(long *)(lVar36 + 0x38);
  if (lVar22 == 0) goto LAB_02491464;
  if (*(uint *)(lVar22 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar22 = lVar22 + (int)*in_stack_00000148 * unaff_x21;
  *(short *)(lVar22 + 0x20) = (short)in_stack_000017bc;
  *(int *)(lVar22 + 0x60) = (int)unaff_x19[0x3c];
  *(undefined4 *)(lVar22 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4e4);
  if ((unaff_x19[0x6c] == 0) || (lVar22 = *(long *)(unaff_x19[0x6c] + 0x38), lVar22 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar22 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(int *)(lVar22 + (int)*in_stack_00000148 * unaff_x21 + 0x168) = (int)unaff_x19[0x2a];
  if ((unaff_x19[0x6c] == 0) || (lVar22 = *(long *)(unaff_x19[0x6c] + 0x38), lVar22 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar22 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(undefined4 *)(lVar22 + (int)*in_stack_00000148 * unaff_x21 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x154);
  if ((unaff_x19[0x6c] == 0) || (lVar22 = *(long *)(unaff_x19[0x6c] + 0x38), lVar22 == 0))
  goto LAB_02491464;
  uVar13 = *in_stack_00000148;
  FUN_013b78b8(in_stack_000000b8,&stack0x00000880,
               *(undefined8 *)TMPro_TMP_Dropdown_OptionData_TypeInfo);
  if (*(uint *)(lVar22 + 0x18) <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  uVar17 = unaff_x28[1];
  uVar16 = *unaff_x28;
  lVar22 = lVar22 + (int)uVar13 * unaff_x21;
  *(undefined4 *)(lVar22 + 0x18c) = in_stack_00000890;
  *(undefined8 *)(lVar22 + 0x184) = uVar17;
  *(undefined8 *)(lVar22 + 0x17c) = uVar16;
  if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar22 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(undefined4 *)(lVar22 + (int)*in_stack_00000148 * unaff_x21 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x254);
  if ((unaff_x19[200] == 0) || (lVar22 = *(long *)(unaff_x19[200] + 0x20), lVar22 == 0))
  goto LAB_02491464;
  FUN_026fd62c(&stack0x00000bf8,lVar22,0);
  unaff_x28[0x1df] = in_stack_00000c00;
  unaff_x28[0x1de] = CONCAT44(in_stack_00000bfc,in_stack_00000bf8);
  if ((int)in_stack_000017bc < 0x10000) {
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar13 = FUN_016f68bc(in_stack_000017bc,0);
    unaff_w29 = uVar13 & 1;
  }
  else {
    unaff_w29 = 0;
  }
  fStack00000000000000cc = *(float *)(unaff_x19 + 0x54);
  *(undefined4 *)((long)unaff_x19 + 0x2f4) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f1) == '\0') {
    fVar43 = 0.0;
    fVar68 = 0.0;
    fVar63 = 0.0;
  }
  else {
    if (unaff_x19[200] == 0) goto LAB_02491464;
    uVar26 = *in_stack_00000148;
    uVar13 = *(uint *)(unaff_x19[200] + 0x28);
    if ((int)uVar26 < (int)in_stack_00000078._4_4_) {
      if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar22 + 0x18) <= uVar26 + 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar22 = *(long *)(lVar22 + (long)(int)(uVar26 + 1) * (long)iVar39 + 0x30);
      if ((((lVar22 == 0) || (*unaff_x27 == 0)) ||
          (lVar23 = *(long *)(*unaff_x27 + 0x128), lVar23 == 0)) ||
         (lVar23 = *(long *)(lVar23 + 0x18), lVar23 == 0)) goto LAB_02491464;
      in_stack_00000880 = uVar13 | *(int *)(lVar22 + 0x28) << 0x10;
      uVar51 = FUN_0129eff4(lVar23,&stack0x00000880,&stack0x000016d8,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                           );
      uVar71 = 0;
      if ((uVar51 & 1) == 0) {
        fVar43 = 0.0;
        fVar68 = 0.0;
        fVar63 = 0.0;
      }
      else {
        if (in_stack_000016d8 == 0) goto LAB_02491464;
        fVar63 = *(float *)(in_stack_000016d8 + 0x14);
        fVar68 = *(float *)(in_stack_000016d8 + 0x18);
        fVar43 = *(float *)(in_stack_000016d8 + 0x1c);
        uVar71 = *(undefined4 *)(in_stack_000016d8 + 0x20);
        if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
          fStack00000000000000cc = 0.0;
        }
      }
      uVar26 = *in_stack_00000148;
    }
    else {
      uVar71 = 0;
      fVar43 = 0.0;
      fVar68 = 0.0;
      fVar63 = 0.0;
    }
    if (0 < (int)uVar26) {
      if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar22 + 0x18) <= (uint)((long)(int)uVar26 + -1))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar22 = *(long *)(lVar22 + ((long)(int)uVar26 + -1) * unaff_x21 + 0x30);
      if (((lVar22 == 0) || (*unaff_x27 == 0)) ||
         ((lVar23 = *(long *)(*unaff_x27 + 0x128), lVar23 == 0 ||
          (lVar23 = *(long *)(lVar23 + 0x18), lVar23 == 0)))) goto LAB_02491464;
      in_stack_00000880 = *(uint *)(lVar22 + 0x28) | uVar13 << 0x10;
      uVar51 = FUN_0129eff4(lVar23,&stack0x00000880,&stack0x000016d8,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                           );
      if ((uVar51 & 1) != 0) {
        if ((in_stack_000016d8 == 0) ||
           (fVar63 = (float)FUN_024bb1bc(fVar63,fVar68,fVar43,uVar71,
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
    *(float *)((long)unaff_x19 + 0x2f4) = fVar43;
  }
  if ((char)unaff_x19[0x1d] != '\0') {
    fVar69 = *(float *)(unaff_x19 + 199);
    fVar45 = (float)FUN_026fd474(&stack0x00001770,0);
    fVar69 = fVar69 - fVar53 * fVar45 * (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc));
    *(float *)(unaff_x19 + 199) = fVar69;
    if ((unaff_w29 != 0) || (in_stack_000017bc == 0x200b)) {
      *(float *)(unaff_x19 + 199) =
           fVar69 - fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
    }
  }
  fVar69 = *(float *)(unaff_x19 + 0x55);
  fVar45 = 0.0;
  if (fVar69 != 0.0) {
    fVar45 = (float)FUN_026fd454(&stack0x00001770,0);
    fVar47 = (float)FUN_026fd464(&stack0x00001770,0);
    fVar45 = (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (fVar69 * 0.5 - fVar53 * (fVar45 * 0.5 + fVar47));
    *(float *)(unaff_x19 + 199) = *(float *)(unaff_x19 + 199) + fVar45;
  }
  if (((cVar21 == '\0') && (*(int *)((long)unaff_x19 + 0x63c) == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x254) & 1) != 0)) {
    lVar22 = unaff_x19[0x22];
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar51 = FUN_02681b9c(lVar22,0,0);
    fVar47 = 0.0;
    if ((uVar51 & 1) != 0) {
      lVar22 = unaff_x19[0x22];
      if (*(int *)(*(long *)
                    Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar27 = (long *)
                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
      ;
      if (lVar22 == 0) goto LAB_02491464;
      uVar51 = FUN_0267e1d8(lVar22,*(undefined4 *)
                                    (*(long *)(*(long *)
                                                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                              + 0xb8) + 0x54),0);
      if ((uVar51 & 1) != 0) {
        lVar22 = unaff_x19[0x22];
        if (*(int *)(*plVar27 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          plVar27 = (long *)
                    Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
          ;
        }
        if (lVar22 == 0) goto LAB_02491464;
        fVar69 = (float)FUN_0267f610(lVar22,*(undefined4 *)(*(long *)(*plVar27 + 0xb8) + 0x54),0);
        if ((*unaff_x27 == 0) || (unaff_x19[0x22] == 0)) goto LAB_02491464;
        fVar61 = *(float *)(*unaff_x27 + 0x1b0);
        fVar47 = (float)FUN_0267f610(unaff_x19[0x22],
                                     *(undefined4 *)
                                      (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                + 0xb8) + 0xcc),0);
        fVar47 = fVar47 * fVar69 * fVar61 * 0.25;
        if (fVar69 < in_stack_00000130._4_4_ + fVar47) {
          in_stack_00000130._4_4_ = fVar69 - fVar47;
        }
      }
    }
    if (*unaff_x27 == 0) goto LAB_02491464;
    in_stack_000000c0._4_4_ = *(float *)(*unaff_x27 + 0x1b4);
  }
  else {
    lVar22 = unaff_x19[0x22];
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar51 = FUN_02681b9c(lVar22,0,0);
    in_stack_000000c0._4_4_ = 0.0;
    if ((uVar51 & 1) != 0) {
      lVar22 = unaff_x19[0x22];
      if (*(int *)(*(long *)
                    Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar27 = (long *)
                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
      ;
      if (lVar22 == 0) goto LAB_02491464;
      uVar51 = FUN_0267e1d8(lVar22,*(undefined4 *)
                                    (*(long *)(*(long *)
                                                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                              + 0xb8) + 0x54),0);
      if ((uVar51 & 1) != 0) {
        lVar22 = unaff_x19[0x22];
        if (*(int *)(*plVar27 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          plVar27 = (long *)
                    Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
          ;
        }
        if (lVar22 == 0) goto LAB_02491464;
        uVar51 = FUN_0267e1d8(lVar22,*(undefined4 *)(*(long *)(*plVar27 + 0xb8) + 0xcc),0);
        if ((uVar51 & 1) != 0) {
          lVar22 = unaff_x19[0x22];
          if (*(int *)(*plVar27 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            plVar27 = (long *)
                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
            ;
          }
          if (lVar22 == 0) goto LAB_02491464;
          fVar69 = (float)FUN_0267f610(lVar22,*(undefined4 *)(*(long *)(*plVar27 + 0xb8) + 0x54),0);
          if ((*unaff_x27 == 0) || (unaff_x19[0x22] == 0)) goto LAB_02491464;
          fVar61 = *(float *)(*unaff_x27 + 0x1a8);
          fVar47 = (float)FUN_0267f610(unaff_x19[0x22],
                                       *(undefined4 *)
                                        (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                  + 0xb8) + 0xcc),0);
          fVar47 = fVar47 * fVar69 * fVar61 * 0.25;
          if (fVar69 < in_stack_00000130._4_4_ + fVar47) {
            in_stack_00000130._4_4_ = fVar69 - fVar47;
          }
          goto LAB_0248ba68;
        }
      }
    }
    fVar47 = 0.0;
  }
LAB_0248ba68:
  fVar62 = *(float *)(unaff_x19 + 199);
  fVar69 = (float)FUN_026fd464(&stack0x00001770,0);
  fVar62 = fVar62 + (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
                    fVar53 * (fVar63 + ((fVar69 - in_stack_00000130._4_4_) - fVar47));
  fVar63 = (float)FUN_026fd46c(&stack0x00001770,0);
  fVar61 = *(float *)((long)unaff_x19 + 0x614) +
           ((fVar46 + fVar53 * (fVar68 + in_stack_00000130._4_4_ + fVar63)) -
           *(float *)(unaff_x19 + 0x9a));
  fVar63 = (float)FUN_026fd45c(&stack0x00001770,0);
  fVar66 = fVar61 - fVar53 * (in_stack_00000130._4_4_ + in_stack_00000130._4_4_ + fVar63);
  fVar63 = (float)FUN_026fd454(&stack0x00001770,0);
  fVar69 = fVar62 + (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
                    fVar53 * (fVar47 + fVar47 +
                             in_stack_00000130._4_4_ + in_stack_00000130._4_4_ + fVar63);
  fVar63 = fVar62;
  fVar68 = fVar69;
  if (((*(int *)((long)unaff_x19 + 0x63c) == 0) && (cVar21 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x254) >> 1 & 1) != 0)) {
    fVar65 = (float)(int)unaff_x19[0xbd] * fStack000000000000004c;
    fVar63 = (float)FUN_026fd46c(&stack0x00001770,0);
    fVar49 = fVar65 * fVar53 * (fVar47 + in_stack_00000130._4_4_ + fVar63);
    fVar63 = (float)FUN_026fd46c(&stack0x00001770,0);
    fVar68 = (float)FUN_026fd45c(&stack0x00001770,0);
    fVar61 = fVar61 + 0.0;
    fVar66 = fVar66 + 0.0;
    fVar65 = fVar65 * fVar53 * (((fVar63 - fVar68) - in_stack_00000130._4_4_) - fVar47);
    fVar68 = fVar69 + fVar65;
    fVar63 = fVar62 + fVar49;
    fVar59 = (fVar49 - fVar65) * 0.5;
    fVar62 = (fVar62 + fVar65) - fVar59;
    fVar69 = (fVar69 + fVar49) - fVar59;
    fVar63 = fVar63 - fVar59;
    fVar68 = fVar68 - fVar59;
  }
  if (*(char *)((long)unaff_x19 + 0x46c) == '\0') {
    fVar49 = 0.0;
    fVar64 = 0.0;
    fStack00000000000000e0 = 0.0;
    fStack00000000000000e4 = 0.0;
    fVar59 = fVar66;
    fVar65 = fVar61;
    fStack00000000000000e8 = fVar63;
    fStack00000000000000ec = fVar62;
  }
  else {
    thunk_FUN_026935f0(_uStack0000000000000060,0);
    fVar67 = (fVar69 + fVar62) * 0.5;
    fVar70 = (fVar66 + fVar61) * 0.5;
    fVar61 = fVar61 - fVar70;
    fVar55 = 0.0;
    fVar65 = fVar61;
    fVar48 = (float)FUN_02692df0(fVar63 - fVar67,_uStack0000000000000060,0);
    fVar66 = fVar66 - fVar70;
    fVar56 = 0.0;
    fVar63 = fVar66;
    fVar62 = (float)FUN_02692df0(fVar62 - fVar67,_uStack0000000000000060,0);
    fVar64 = 0.0;
    fVar69 = (float)FUN_02692df0(fVar69 - fVar67,_uStack0000000000000060,0);
    fVar69 = fVar67 + fVar69;
    fVar61 = fVar70 + fVar61;
    fVar64 = fVar64 + 0.0;
    fVar49 = 0.0;
    fVar68 = (float)FUN_02692df0(fVar68 - fVar67,_uStack0000000000000060,0);
    fVar68 = fVar67 + fVar68;
    fVar66 = fVar70 + fVar66;
    fVar49 = fVar49 + 0.0;
    fVar59 = fVar70 + fVar63;
    fVar65 = fVar70 + fVar65;
    fStack00000000000000e8 = fVar67 + fVar48;
    fStack00000000000000ec = fVar67 + fVar62;
    fStack00000000000000e0 = fVar56 + 0.0;
    fStack00000000000000e4 = fVar55 + 0.0;
  }
  if (*in_stack_00000150 == 0) goto LAB_02491464;
  lVar22 = *(long *)(*in_stack_00000150 + 0x38);
  unaff_d13 = (ulong)(uint)fVar53;
  if (lVar22 == 0) goto LAB_02491464;
  if (*(uint *)(lVar22 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar22 = lVar22 + (int)*in_stack_00000148 * unaff_x21;
  *(float *)(lVar22 + 0x120) = fVar59;
  *(float *)(lVar22 + 0x11c) = fStack00000000000000ec;
  *(float *)(lVar22 + 0x124) = fStack00000000000000e0;
  if (*in_stack_00000150 == 0) goto LAB_02491464;
  lVar22 = *(long *)(*in_stack_00000150 + 0x38);
  unaff_s12 = 1.0;
  if (lVar22 == 0) goto LAB_02491464;
  if (*(uint *)(lVar22 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar22 = lVar22 + (int)*in_stack_00000148 * unaff_x21;
  *(float *)(lVar22 + 0x114) = fVar65;
  *(float *)(lVar22 + 0x110) = fStack00000000000000e8;
  *(float *)(lVar22 + 0x118) = fStack00000000000000e4;
  if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar22 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar22 = lVar22 + (int)*in_stack_00000148 * unaff_x21;
  *(float *)(lVar22 + 0x128) = fVar69;
  *(float *)(lVar22 + 300) = fVar61;
  *(float *)(lVar22 + 0x130) = fVar64;
  if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar22 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar22 = lVar22 + (int)*in_stack_00000148 * unaff_x21;
  *(float *)(lVar22 + 0x134) = fVar68;
  *(float *)(lVar22 + 0x138) = fVar66;
  *(float *)(lVar22 + 0x13c) = fVar49;
  if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 == 0))
  goto LAB_02491464;
  uVar13 = *in_stack_00000148;
  unaff_x22 = (long)(int)uVar13;
  if (*(uint *)(lVar22 + 0x18) <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar23 = lVar22 + unaff_x22 * unaff_x21;
  *(int *)(lVar23 + 0x140) = (int)unaff_x19[199];
  fVar68 = *(float *)(unaff_x19 + 0x9a);
  uVar51 = (ulong)(uint)fVar68;
  fVar63 = *(float *)((long)unaff_x19 + 0x614);
  *(float *)(lVar23 + 0x15c) = (fVar69 - fStack00000000000000ec) / (fVar65 - fVar59);
  *(float *)(lVar23 + 0x14c) = (fVar46 - fVar68) + fVar63;
  fVar44 = fVar44 * fVar53;
  if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
    fVar44 = fVar44 / fVar50;
    fVar57 = (fVar57 * fVar53) / fVar50;
  }
  else {
    fVar57 = fVar57 * fVar53;
  }
  unaff_w24 = *(uint *)(unaff_x19 + 0x92);
  bVar10 = unaff_w29 != 0;
  fVar44 = fVar63 + fVar44;
  bVar11 = uVar13 != unaff_w24;
  if (bVar11 && bVar10) {
    fVar63 = *(float *)(unaff_x19 + 0x98);
    lVar22 = lVar22 + unaff_x22 * unaff_x21;
    *(float *)(lVar22 + 0x154) = fVar63;
    fVar57 = *(float *)((long)unaff_x19 + 0x4c4);
    *(float *)(lVar22 + 0x148) = fVar63 - fVar68;
    *(float *)(lVar22 + 0x158) = fVar57;
    *(float *)(unaff_x19 + 0x97) = fVar63 - fVar68;
    fVar57 = fVar57 - fVar68;
    *(float *)(lVar22 + 0x150) = fVar57;
  }
  else {
    fVar57 = fVar63 + fVar57;
    fVar69 = fVar44;
    fVar46 = fVar57;
    if (fVar63 != 0.0) {
      fVar69 = (fVar44 - fVar63) / *(float *)((long)unaff_x19 + 0x3fc);
      fVar46 = (fVar57 - fVar63) / *(float *)((long)unaff_x19 + 0x3fc);
      if (fVar69 <= fVar44) {
        fVar69 = fVar44;
      }
      if (fVar57 <= fVar46) {
        fVar46 = fVar57;
      }
    }
    lVar22 = lVar22 + unaff_x22 * unaff_x21;
    fVar63 = fVar69;
    if (fVar69 <= *(float *)(unaff_x19 + 0x98)) {
      fVar63 = *(float *)(unaff_x19 + 0x98);
    }
    fVar61 = fVar46;
    if (*(float *)((long)unaff_x19 + 0x4c4) <= fVar46) {
      fVar61 = *(float *)((long)unaff_x19 + 0x4c4);
    }
    *(float *)((long)unaff_x19 + 0x4c4) = fVar61;
    fVar57 = fVar57 - fVar68;
    *(float *)(unaff_x19 + 0x98) = fVar63;
    *(float *)(lVar22 + 0x154) = fVar69;
    *(float *)(lVar22 + 0x158) = fVar46;
    *(float *)(lVar22 + 0x148) = fVar44 - fVar68;
    *(float *)(unaff_x19 + 0x97) = fVar44 - fVar68;
    *(float *)(lVar22 + 0x150) = fVar57;
  }
  *(float *)((long)unaff_x19 + 0x4bc) = fVar57;
  if (((int)unaff_x19[0x94] == 0) || (*(char *)((long)unaff_x19 + 0x334) != '\0')) {
    if (!bVar11 || !bVar10) {
      *(float *)(unaff_x19 + 0x96) = fVar63;
      if (unaff_x19[0x1f] == 0) goto LAB_02491464;
      fVar57 = *(float *)((long)unaff_x19 + 0x4b4);
      fVar63 = (float)FUN_026fd150(unaff_x19[0x1f] + 0x50,0);
      fVar50 = (fVar53 * fVar63) / fVar50;
      uVar51 = (ulong)*(uint *)(unaff_x19 + 0x9a);
      if (fVar57 <= fVar50) {
        fVar57 = fVar50;
      }
      *(float *)((long)unaff_x19 + 0x4b4) = fVar57;
      goto LAB_0248bef4;
    }
  }
  else {
LAB_0248bef4:
    if ((!bVar11 || !bVar10) && (float)uVar51 == 0.0) {
      fVar50 = *(float *)(in_stack_00000070 + 0x208);
      if (*(float *)(in_stack_00000070 + 0x208) <= fVar44) {
        fVar50 = fVar44;
      }
      *(float *)(in_stack_00000070 + 0x208) = fVar50;
    }
  }
  lVar22 = *in_stack_00000150;
  if ((lVar22 == 0) || (lVar23 = *(long *)(lVar22 + 0x38), lVar23 == 0)) goto LAB_02491464;
  uVar26 = *in_stack_00000148;
  if (*(uint *)(lVar23 + 0x18) <= uVar26)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar23 = lVar23 + (int)uVar26 * unaff_x21;
  *(undefined1 *)(lVar23 + 0x194) = 0;
  uVar33 = *(uint *)(unaff_x19 + 0x4e);
  if ((in_stack_000017bc == 9) ||
     (((((unaff_w29 == 0 && (in_stack_000017bc != 3)) && (in_stack_000017bc != 0x200b)) &&
       (in_stack_000017bc != 0xad)) ||
      (((in_stack_000017bc == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) != 0 ||
       (*(int *)((long)unaff_x19 + 0x63c) == 1)))))) {
    *(undefined1 *)(lVar23 + 0x194) = 1;
    pfVar28 = in_stack_00000088;
    pfVar32 = _fStack0000000000000098;
    if (bVar7) {
      lVar22 = *(long *)(lVar22 + 0x50);
      if (lVar22 == 0) goto LAB_02491464;
      if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      pfVar32 = (float *)(lVar22 + 0x60);
      pfVar28 = (float *)(lVar22 + 100);
    }
    fVar57 = *pfVar32;
    fVar63 = *pfVar28;
    fVar50 = *(float *)(unaff_x19 + 0x6b);
    fVar68 = *(float *)(unaff_x19 + 199);
    in_stack_000000d8._4_4_ = (fStack0000000000000090 - fVar57) - fVar63;
    bVar10 = true;
    if ((fVar50 <= in_stack_000000d8._4_4_) && (bVar10 = false, !NAN(fVar50))) {
      bVar10 = fVar50 == -1.0;
    }
    if (!bVar10) {
      in_stack_000000d8._4_4_ = fVar50;
    }
    fVar50 = 0.0;
    if ((char)unaff_x19[0x1d] == '\0') {
      fVar50 = (float)FUN_026fd474(&stack0x00001770,0);
      uVar51 = (ulong)*(uint *)(unaff_x19 + 0x9a);
    }
    fVar46 = *(float *)((long)unaff_x19 + 0x4c4);
    fVar69 = *(float *)((long)unaff_x19 + 0x2cc);
    fVar44 = (float)uVar51;
    if (in_stack_000017bc != 0xad) {
      fVar58 = fVar53;
    }
    fVar61 = 0.0;
    if ((0.0 < fVar44) && (fVar61 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
      fVar61 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
    }
    fVar61 = (*(float *)(unaff_x19 + 0x96) - (fVar46 - fVar44)) + fVar61;
    uVar26 = *in_stack_00000148;
    if (in_stack_000000a0 < fVar61) {
      if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
        *(uint *)((long)unaff_x19 + 0x2dc) = uVar26;
      }
      plVar42 = (long *)StringLiteral_302;
      plVar27 = (long *)System_Threading_Mutex_TypeInfo;
      uVar16 = DAT_02941c08;
      if ((char)unaff_x19[0x46] != '\0') {
        fVar66 = *(float *)(unaff_x19 + 0x58);
        if (((fVar66 < *(float *)((long)unaff_x19 + 0x2b4)) && (0.0 < fVar44)) &&
           (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
          fVar58 = *(float *)((long)unaff_x19 + 0x2b4) +
                   ((in_stack_00000018._4_4_ - fVar61) / (float)(int)unaff_x19[0x94]) /
                   fStack0000000000000054;
          if (fVar58 <= fVar66) {
            fVar58 = fVar66;
          }
          goto LAB_0248ea5c;
        }
        fVar61 = *(float *)((long)unaff_x19 + 0x1dc);
        fVar44 = *(float *)(unaff_x19 + 0x49);
        uVar51 = (ulong)(uint)fVar44;
        if ((fVar44 < fVar61) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
          fVar58 = (fVar61 - *(float *)(unaff_x19 + 0x47)) * 0.5;
          if (fVar58 <= DAT_028aa298) {
            fVar58 = DAT_028aa298;
          }
          fVar50 = (fVar61 - fVar58) * 20.0 + 0.5;
          fVar58 = DAT_02958220;
          if (fVar50 != INFINITY) {
            fVar58 = (float)(int)fVar50 / 20.0;
          }
          if (fVar58 <= fVar44) {
            fVar58 = fVar44;
          }
          *(float *)((long)unaff_x19 + 0x234) = fVar61;
          goto LAB_0248e598;
        }
      }
      switch((int)unaff_x19[0x5b]) {
      case 1:
        lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar22 = *plVar27;
        }
        lVar23 = *(long *)(lVar22 + 0xb8);
        lVar22 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
        if ((*(byte *)(lVar22 + 0x132) & 1) == 0) {
          lVar22 = FUN_00d5941c(lVar22);
        }
        plVar42 = (long *)StringLiteral_302;
        lVar22 = *(long *)(*(long *)(lVar22 + 0xc0) + 8);
        if ((*(byte *)(lVar22 + 0x132) & 1) == 0) {
          lVar22 = FUN_00d5941c();
        }
        piVar18 = (int *)thunk_FUN_00d32ed4(lVar23 + 0x11f0,*(long *)(lVar22 + 0x80) + 0xa0);
        if (*piVar18 == 0) goto LAB_0248e4bc;
        lVar22 = *plVar27;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar22 = *plVar27;
        }
        FUN_013b8de4(*(long *)(lVar22 + 0xb8) + 0x11f0,&stack0x00000880,
                     *(undefined8 *)
                      Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                    );
        memcpy(&stack0x00001360,&stack0x00000880,0x378);
LAB_0248c8f4:
        iVar12 = FUN_024d66ec();
        goto LAB_0248c900;
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
        if ((uVar26 == 0) || ((int)in_stack_00001788 < 0)) {
          *in_stack_00000148 = 0;
          plVar27 = (long *)System_Threading_Mutex_TypeInfo;
          unaff_x25 = in_stack_00000150;
          unaff_x26 = in_stack_00000148;
          plVar42 = (long *)StringLiteral_302;
          in_stack_00001788 = 0xffffffff;
          in_stack_000017a8 = uVar16;
          goto LAB_0248ab98;
        }
        fVar58 = *(float *)(unaff_x19 + 0x98);
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        if (fVar58 - fVar46 <= in_stack_000000a0) {
          *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
          *(undefined4 *)(unaff_x19 + 0x92) = *(undefined4 *)((long)unaff_x19 + 0x48c);
          uVar51 = *(ulong *)(*(long *)(*plVar27 + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
          *(undefined4 *)(unaff_x19 + 0x99) = 0;
          lVar22 = NEON_rev64(uVar51,4);
          unaff_x19[0x98] = lVar22;
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
          *(int *)(unaff_x19 + 0x94) = (int)unaff_x19[0x94] + 1;
          *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
          unaff_x25 = in_stack_00000150;
          unaff_x26 = in_stack_00000148;
          goto LAB_0248ab98;
        }
        break;
      case 6:
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        plVar42 = (long *)StringLiteral_302;
        lVar22 = unaff_x19[0x5c];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            );
        }
        uVar54 = FUN_02681b9c(lVar22,0,0);
        if ((uVar54 & 1) != 0) {
          plVar40 = (long *)unaff_x19[0x5c];
          uVar16 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar40 == (long *)0x0) goto LAB_02491464;
          (**(code **)(*plVar40 + 0x558))(plVar40,uVar16,*(undefined8 *)(*plVar40 + 0x560));
          lVar22 = unaff_x19[0x5c];
          if (lVar22 == 0) goto LAB_02491464;
          *(int *)(lVar22 + 0x3f8) = (int)unaff_x19[0x7f];
          FUN_024c910c(lVar22,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
          plVar40 = (long *)unaff_x19[0x5c];
          if (plVar40 == (long *)0x0) goto LAB_02491464;
          (**(code **)(*plVar40 + 0x7d8))(plVar40,0,0,*(undefined8 *)(*plVar40 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        }
      }
      goto LAB_0248c628;
    }
switchD_0248c274_caseD_2:
    plVar27 = (long *)System_Threading_Mutex_TypeInfo;
    fVar44 = 1.0 - fVar69;
    uVar51 = (ulong)(uint)fVar44;
    fVar50 = ABS(fVar68) + fVar50 * fVar44 * fVar58;
    fVar58 = _DAT_0294c6e8;
    if ((uVar33 & 0x18) == 0) {
      fVar58 = 1.0;
    }
    if (fVar58 * in_stack_000000d8._4_4_ < fVar50) {
      if (((char)unaff_x19[0x5a] == '\0') || (uVar26 == *(uint *)(unaff_x19 + 0x92))) {
        if (((char)unaff_x19[0x46] == '\0') ||
           ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c))) {
LAB_0248c3dc:
          iVar12 = (int)unaff_x19[0x5b];
          if (iVar12 == 1) {
            lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar22 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar22 = *plVar27;
            }
            plVar42 = (long *)StringLiteral_302;
            lVar23 = *(long *)(lVar22 + 0xb8);
            lVar22 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
            if ((*(byte *)(lVar22 + 0x132) & 1) == 0) {
              lVar22 = FUN_00d5941c(lVar22);
            }
            lVar22 = *(long *)(*(long *)(lVar22 + 0xc0) + 8);
            if ((*(byte *)(lVar22 + 0x132) & 1) == 0) {
              lVar22 = FUN_00d5941c();
            }
            piVar18 = (int *)thunk_FUN_00d32ed4(lVar23 + 0x11f0,*(long *)(lVar22 + 0x80) + 0xa0);
            if (*piVar18 == 0) goto LAB_0248e4bc;
            lVar22 = *plVar27;
            if (*(int *)(lVar22 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar22 = *plVar27;
            }
            FUN_013b8de4(*(long *)(lVar22 + 0xb8) + 0x11f0,&stack0x00000880,
                         *(undefined8 *)
                          Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                        );
            memcpy(&stack0x00000c70,&stack0x00000880,0x378);
            goto LAB_0248c8f4;
          }
          if (iVar12 == 6) {
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            plVar42 = (long *)StringLiteral_302;
            in_stack_00001788 = FUN_024d66ec();
            lVar22 = unaff_x19[0x5c];
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)
                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                );
            }
            uVar54 = FUN_02681b9c(lVar22,0,0);
            if ((uVar54 & 1) != 0) {
              plVar40 = (long *)unaff_x19[0x5c];
              uVar16 = (**(code **)(*unaff_x19 + 0x548))();
              if (plVar40 == (long *)0x0) goto LAB_02491464;
              (**(code **)(*plVar40 + 0x558))(plVar40,uVar16,*(undefined8 *)(*plVar40 + 0x560));
              lVar22 = unaff_x19[0x5c];
              if (lVar22 == 0) goto LAB_02491464;
              *(int *)(lVar22 + 0x3f8) = (int)unaff_x19[0x7f];
              FUN_024c910c(lVar22,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
              plVar40 = (long *)unaff_x19[0x5c];
              if (plVar40 == (long *)0x0) goto LAB_02491464;
              (**(code **)(*plVar40 + 0x7d8))(plVar40,0,0,*(undefined8 *)(*plVar40 + 0x7e0));
              *(undefined1 *)(unaff_x19 + 0x5e) = 1;
            }
            goto LAB_0248ca1c;
          }
          if (iVar12 == 3) {
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            goto LAB_0248c524;
          }
          goto LAB_0248cf18;
        }
        fVar68 = *(float *)(unaff_x19 + 0x59) / 100.0;
        if (fVar69 < fVar68) {
          fVar53 = fVar50 / fVar44;
          if (fVar69 <= 0.0) {
            fVar53 = fVar50;
          }
          fVar69 = fVar69 + (fVar50 - fVar58 * (in_stack_000000d8._4_4_ + DAT_02958218)) / fVar53;
          goto LAB_0249154c;
        }
        fVar69 = *(float *)((long)unaff_x19 + 0x1dc);
        uVar51 = (ulong)(uint)fVar69;
        fVar68 = *(float *)(unaff_x19 + 0x49);
        if (fVar69 <= fVar68) goto LAB_0248c3dc;
LAB_024914c0:
        fVar58 = (fVar69 - *(float *)(unaff_x19 + 0x47)) * 0.5;
        if (fVar58 <= DAT_028aa298) {
          fVar58 = DAT_028aa298;
        }
        *(float *)((long)unaff_x19 + 0x234) = fVar69;
        fVar50 = (fVar69 - fVar58) * 20.0 + 0.5;
        fVar58 = DAT_02958220;
        if (fVar50 != INFINITY) {
          fVar58 = (float)(int)fVar50 / 20.0;
        }
        if (fVar58 <= fVar68) {
          fVar58 = fVar68;
        }
LAB_0248e598:
        *(float *)((long)unaff_x19 + 0x1dc) = fVar58;
        return;
      }
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      in_stack_00001788 = FUN_024d66ec();
      if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
        lVar22 = *in_stack_00000150;
        if ((lVar22 == 0) || (lVar23 = *(long *)(lVar22 + 0x38), lVar23 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar23 + 0x18) <= *in_stack_00000148)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fVar68 = *(float *)(unaff_x19 + 0x9a);
        fVar69 = 0.0;
        if ((0.0 < fVar68) && (fVar69 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
          fVar69 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
        }
        fVar69 = fStack00000000000000c8 * *(float *)(unaff_x19 + 0x56) +
                 *(float *)(lVar23 + (int)*in_stack_00000148 * unaff_x21 + 0x154) +
                 (fVar69 - *(float *)((long)unaff_x19 + 0x4c4)) +
                 fStack0000000000000054 *
                 (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4));
      }
      else {
        lVar22 = unaff_x19[0x6c];
        *(undefined1 *)((long)unaff_x19 + 700) = 1;
        if (lVar22 == 0) goto LAB_02491464;
        fVar68 = *(float *)(unaff_x19 + 0x9a);
        fVar69 = *(float *)(unaff_x19 + 0x57) +
                 fStack00000000000000c8 * *(float *)(unaff_x19 + 0x56);
      }
      puVar9 = System_Threading_Mutex_TypeInfo;
      lVar22 = *(long *)(lVar22 + 0x38);
      if (lVar22 == 0) goto LAB_02491464;
      uVar3 = *(uint *)((long)unaff_x19 + 0x48c);
      if ((*(uint *)(lVar22 + 0x18) <= uVar3) ||
         (uVar6 = uVar3 - 1, *(uint *)(lVar22 + 0x18) <= uVar6))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar51 = (ulong)(uint)(fVar69 + *(float *)(unaff_x19 + 0x96));
      fVar44 = (fVar69 + *(float *)(unaff_x19 + 0x96) + fVar68) -
               *(float *)(lVar22 + (int)uVar3 * unaff_x21 + 0x158);
      if (((in_stack_00000068._4_1_ & 1) == 0 &&
           *(short *)(lVar22 + (long)(int)uVar6 * (long)iVar39 + 0x20) == 0xad) &&
         ((fVar44 < in_stack_000000a0 || ((int)unaff_x19[0x5b] == 0)))) {
        in_stack_00001788 = in_stack_00001788 - 1;
        in_stack_00000068._4_1_ = 0;
        in_stack_000017a8 = CONCAT44(0x2d,uVar6);
        *in_stack_00000148 = uVar6;
        goto LAB_0248cf04;
      }
      if (*(short *)(lVar22 + (int)uVar3 * unaff_x21 + 0x20) == 0xad) {
        in_stack_00000068._4_1_ = 1;
        goto LAB_0248cf04;
      }
      if ((bStack000000000000005c & *(byte *)(unaff_x19 + 0x46) & 1) != 0) {
        fVar69 = *(float *)((long)unaff_x19 + 0x2cc);
        fVar68 = *(float *)(unaff_x19 + 0x59) / 100.0;
        if ((fVar68 <= fVar69) || ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c))) {
          fVar69 = *(float *)((long)unaff_x19 + 0x1dc);
          uVar51 = (ulong)(uint)fVar69;
          fVar68 = *(float *)(unaff_x19 + 0x49);
          if ((fVar68 < fVar69) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
          goto LAB_024914c0;
          goto LAB_0248cc70;
        }
LAB_0249155c:
        fVar53 = fVar50;
        if (0.0 < fVar69) {
          fVar53 = fVar50 / (1.0 - fVar69);
        }
        fVar69 = fVar69 + (fVar50 - fVar58 * (in_stack_000000d8._4_4_ + DAT_02958218)) / fVar53;
LAB_0249154c:
        if (fVar68 <= fVar69) {
          fVar69 = fVar68;
        }
        *(float *)((long)unaff_x19 + 0x2cc) = fVar69;
        return;
      }
LAB_0248cc70:
      lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar22 = *(long *)puVar9;
      }
      iVar12 = *(int *)(*(long *)(lVar22 + 0xb8) + 0xe78);
      if ((((float)iVar12 != fStack0000000000000034) && (iVar12 != -1)) &&
         (((bStack000000000000005c ^ 1) & 1) == 0)) {
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        if ((unaff_x19[0x6c] == 0) || (lVar22 = *(long *)(unaff_x19[0x6c] + 0x38), lVar22 == 0))
        goto LAB_02491464;
        uVar3 = *in_stack_00000148 - 1;
        if (*(uint *)(lVar22 + 0x18) <= uVar3)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fStack0000000000000034 = (float)iVar12;
        if (*(short *)(lVar22 + (long)(int)uVar3 * (long)iVar39 + 0x20) == 0xad) {
          in_stack_00001788 = in_stack_00001788 - 1;
          in_stack_00000068._4_1_ = 0;
          in_stack_000017a8 = CONCAT44(0x2d,uVar3);
          *in_stack_00000148 = uVar3;
          goto LAB_0248cf04;
        }
      }
      if (fVar44 <= in_stack_000000a0) {
        uVar51 = unaff_d13;
        FUN_024d7014(fStack0000000000000054,unaff_d13,fStack00000000000000c8,
                     *(undefined4 *)((long)unaff_x19 + 0x2f4),in_stack_000000c0._4_4_,
                     fStack00000000000000cc,in_stack_000000d8._4_4_,fStack0000000000000048);
        bStack000000000000005c = 1;
        in_stack_00000068._4_1_ = 0;
        fStack0000000000000058 = 1.4013e-45;
LAB_0248cf04:
        unaff_s12 = 1.0;
        plVar27 = (long *)System_Threading_Mutex_TypeInfo;
        unaff_x25 = in_stack_00000150;
        unaff_x26 = in_stack_00000148;
        plVar42 = (long *)StringLiteral_302;
        goto LAB_0248ab98;
      }
      if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
        *(undefined4 *)((long)unaff_x19 + 0x2dc) = *(undefined4 *)((long)unaff_x19 + 0x48c);
      }
      plVar42 = (long *)StringLiteral_302;
      plVar27 = (long *)System_Threading_Mutex_TypeInfo;
      if ((char)unaff_x19[0x46] != '\0') {
        fVar68 = *(float *)(unaff_x19 + 0x58);
        if ((fVar68 < *(float *)((long)unaff_x19 + 0x2b4)) &&
           (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
          fVar58 = *(float *)((long)unaff_x19 + 0x2b4) +
                   ((in_stack_00000018._4_4_ - fVar44) / (float)((int)unaff_x19[0x94] + 1)) /
                   fStack0000000000000054;
          if (fVar58 <= fVar68) {
            fVar58 = fVar68;
          }
LAB_0248ea5c:
          *(float *)((long)unaff_x19 + 0x2b4) = fVar58;
          return;
        }
        fVar69 = *(float *)((long)unaff_x19 + 0x2cc);
        fVar68 = *(float *)(unaff_x19 + 0x59) / 100.0;
        if ((fVar69 < fVar68) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
        goto LAB_0249155c;
        fVar69 = *(float *)((long)unaff_x19 + 0x1dc);
        uVar51 = (ulong)(uint)fVar69;
        fVar68 = *(float *)(unaff_x19 + 0x49);
        if ((fVar68 < fVar69) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
        goto LAB_024914c0;
      }
      unaff_s12 = 1.0;
      switch((int)unaff_x19[0x5b]) {
      case 0:
      case 2:
      case 4:
        uVar51 = unaff_d13;
        FUN_024d7014(fStack0000000000000054,unaff_d13,fStack00000000000000c8,
                     *(undefined4 *)((long)unaff_x19 + 0x2f4),in_stack_000000c0._4_4_,
                     fStack00000000000000cc,in_stack_000000d8._4_4_,fStack0000000000000048);
        break;
      case 1:
        lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar22 = *plVar27;
        }
        lVar23 = *(long *)(lVar22 + 0xb8);
        lVar22 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
        if ((*(byte *)(lVar22 + 0x132) & 1) == 0) {
          lVar22 = FUN_00d5941c(lVar22);
        }
        lVar22 = *(long *)(*(long *)(lVar22 + 0xc0) + 8);
        if ((*(byte *)(lVar22 + 0x132) & 1) == 0) {
          lVar22 = FUN_00d5941c();
        }
        piVar18 = (int *)thunk_FUN_00d32ed4(lVar23 + 0x11f0,*(long *)(lVar22 + 0x80) + 0xa0);
        if (*piVar18 == 0) {
          in_stack_00000068._4_1_ = 0;
LAB_0248e4bc:
          in_stack_000017a8 = DAT_02941c08;
          unaff_s12 = 1.0;
          in_stack_00000148[0] = 0;
          in_stack_00000148[1] = 0;
          unaff_x25 = in_stack_00000150;
          unaff_x26 = in_stack_00000148;
          in_stack_00001788 = 0xffffffff;
          goto LAB_0248ab98;
        }
        lVar22 = *plVar27;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar22 = *plVar27;
        }
        FUN_013b8de4(*(long *)(lVar22 + 0xb8) + 0x11f0,&stack0x00000880,
                     *(undefined8 *)
                      Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                    );
        memcpy(&stack0x00000fe8,&stack0x00000880,0x378);
        iVar12 = FUN_024d66ec();
        in_stack_00000068._4_1_ = 0;
LAB_0248c900:
        unaff_s12 = 1.0;
        iVar14 = *(int *)((long)unaff_x19 + 0x48c) + -1;
        *(int *)((long)unaff_x19 + 0x48c) = iVar14;
        in_stack_00000140._4_4_ = in_stack_00000140._4_4_ + 1;
        unaff_x25 = in_stack_00000150;
        unaff_x26 = in_stack_00000148;
        in_stack_00001788 = iVar12 - 1;
        in_stack_000017a8 = CONCAT44(0x2026,iVar14);
        goto LAB_0248ab98;
      case 3:
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        in_stack_00000068._4_1_ = 0;
LAB_0248c628:
        unaff_s12 = 1.0;
        unaff_x25 = in_stack_00000150;
        unaff_x26 = in_stack_00000148;
        in_stack_000017a8 = CONCAT44(3,uVar26);
        goto LAB_0248ab98;
      case 5:
        *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
        uVar51 = unaff_d13;
        FUN_024d7014(fStack0000000000000054,unaff_d13,fStack00000000000000c8,
                     *(undefined4 *)((long)unaff_x19 + 0x2f4),in_stack_000000c0._4_4_,
                     fStack00000000000000cc,in_stack_000000d8._4_4_,fStack0000000000000048);
        *(undefined4 *)(unaff_x19 + 0x99) = 0;
        *(undefined4 *)(unaff_x19 + 0x9a) = 0;
        *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
        *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
        break;
      case 6:
        lVar22 = unaff_x19[0x5c];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar54 = FUN_02681b9c(lVar22,0,0);
        if ((uVar54 & 1) != 0) {
          plVar40 = (long *)unaff_x19[0x5c];
          uVar16 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar40 == (long *)0x0) goto LAB_02491464;
          (**(code **)(*plVar40 + 0x558))(plVar40,uVar16,*(undefined8 *)(*plVar40 + 0x560));
          lVar22 = unaff_x19[0x5c];
          if (lVar22 == 0) goto LAB_02491464;
          *(int *)(lVar22 + 0x3f8) = (int)unaff_x19[0x7f];
          FUN_024c910c(lVar22,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
          plVar40 = (long *)unaff_x19[0x5c];
          if (plVar40 == (long *)0x0) goto LAB_02491464;
          (**(code **)(*plVar40 + 0x7d8))(plVar40,0,0,*(undefined8 *)(*plVar40 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        }
        in_stack_00000068._4_1_ = 0;
LAB_0248ca1c:
        unaff_s12 = 1.0;
        unaff_x25 = in_stack_00000150;
        unaff_x26 = in_stack_00000148;
        in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
        goto LAB_0248ab98;
      default:
        in_stack_00000068._4_1_ = 0;
        goto LAB_0248cf18;
      }
      in_stack_00000068._4_1_ = 0;
      bStack000000000000005c = 1;
      fStack0000000000000058 = 1.4013e-45;
      plVar27 = (long *)System_Threading_Mutex_TypeInfo;
      unaff_x25 = in_stack_00000150;
      unaff_x26 = in_stack_00000148;
      plVar42 = (long *)StringLiteral_302;
      goto LAB_0248ab98;
    }
LAB_0248cf18:
    if (in_stack_000017bc != 0xad) {
      if (in_stack_000017bc != 9) {
        if (*(int *)((long)unaff_x19 + 0x63c) == 1) {
          (**(code **)(*unaff_x19 + 0x8c8))();
        }
        else if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
          (**(code **)(*unaff_x19 + 0x8b8))(in_stack_00000130._4_4_,fVar47);
        }
        uVar26 = *in_stack_00000148;
        if (((uint)fStack0000000000000058 & 1) != 0) {
          *(uint *)(in_stack_00000070 + 0x1f0) = uVar26;
        }
        *(uint *)((long)unaff_x19 + 0x49c) = uVar26;
        *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
        if ((unaff_x19[0x6c] == 0) || (lVar22 = *(long *)(unaff_x19[0x6c] + 0x50), lVar22 == 0))
        goto LAB_02491464;
        if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
        fStack0000000000000058 = 0.0;
        *(float *)(lVar22 + 0x60) = fVar57;
        *(float *)(lVar22 + 100) = fVar63;
        goto FUN_0248d088;
      }
      lVar22 = *in_stack_00000150;
      if ((lVar22 == 0) || (lVar23 = *(long *)(lVar22 + 0x38), lVar23 == 0)) goto LAB_02491464;
      uVar26 = *in_stack_00000148;
      if (*(uint *)(lVar23 + 0x18) <= uVar26)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      *(undefined1 *)(lVar23 + (int)uVar26 * unaff_x21 + 0x194) = 0;
      *(uint *)((long)unaff_x19 + 0x49c) = uVar26;
      lVar23 = *(long *)(lVar22 + 0x50);
      if (lVar23 == 0) goto LAB_02491464;
      if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      *(int *)(lVar23 + 0x2c) = *(int *)(lVar23 + 0x2c) + 1;
      goto LAB_0248cf8c;
    }
    if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar22 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(undefined1 *)(lVar22 + (int)*in_stack_00000148 * unaff_x21 + 0x194) = 0;
  }
  else {
    if (((in_stack_000017bc & 0xfffffffe) == 10) && ((int)unaff_x19[0x5b] == 6)) {
      fVar50 = (float)uVar51;
      fVar58 = 0.0;
      if ((0.0 < fVar50) && (fVar58 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
        fVar58 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
      }
      uVar51 = (ulong)(uint)in_stack_000000a0;
      if (in_stack_000000a0 <
          (*(float *)(unaff_x19 + 0x96) - (*(float *)((long)unaff_x19 + 0x4c4) - fVar50)) + fVar58)
      {
        if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
          *(uint *)((long)unaff_x19 + 0x2dc) = uVar26;
        }
        plVar42 = (long *)StringLiteral_302;
        plVar27 = (long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        lVar22 = unaff_x19[0x5c];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            );
        }
        uVar54 = FUN_02681b9c(lVar22,0,0);
        if ((uVar54 & 1) != 0) {
          plVar40 = (long *)unaff_x19[0x5c];
          uVar16 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar40 == (long *)0x0) goto LAB_02491464;
          (**(code **)(*plVar40 + 0x558))(plVar40,uVar16,*(undefined8 *)(*plVar40 + 0x560));
          lVar22 = unaff_x19[0x5c];
          if (lVar22 == 0) goto LAB_02491464;
          *(int *)(lVar22 + 0x3f8) = (int)unaff_x19[0x7f];
          FUN_024c910c(lVar22,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
          plVar40 = (long *)unaff_x19[0x5c];
          if (plVar40 == (long *)0x0) goto LAB_02491464;
          (**(code **)(*plVar40 + 0x7d8))(plVar40,0,0,*(undefined8 *)(*plVar40 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        }
        unaff_x25 = in_stack_00000150;
        unaff_x26 = in_stack_00000148;
        in_stack_000017a8 = CONCAT44(3,uVar26);
        goto LAB_0248ab98;
      }
    }
    if ((((in_stack_000017bc - 0x2007 < 0x23) &&
         ((1L << ((ulong)(in_stack_000017bc - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
        (in_stack_000017bc - 10 < 2)) || (in_stack_000017bc == 0xa0)) {
UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ObjectSpawner__get_objectPrefabs:
      if (((in_stack_000017bc != 0xad) && (in_stack_000017bc != 0x200b)) &&
         (in_stack_000017bc != 0x2060)) {
        lVar22 = *in_stack_00000150;
        if ((lVar22 == 0) || (lVar23 = *(long *)(lVar22 + 0x50), lVar23 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
        *(int *)(lVar23 + 0x2c) = *(int *)(lVar23 + 0x2c) + 1;
        *(int *)(lVar22 + 0x20) = *(int *)(lVar22 + 0x20) + 1;
      }
    }
    else {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar51 = FUN_016fa418(in_stack_000017bc,0);
      if ((uVar51 & 1) != 0)
      goto UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ObjectSpawner__get_objectPrefabs
      ;
    }
    if (in_stack_000017bc == 0xa0) {
      if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x50), lVar22 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
LAB_0248cf8c:
      *(int *)(lVar22 + 0x20) = *(int *)(lVar22 + 0x20) + 1;
    }
  }
FUN_0248d088:
  if (((int)unaff_x19[0x5b] == 1) && ((in_stack_000017bc == 0x2d || (!bVar7)))) {
    if (unaff_x19[0xca] == 0) goto LAB_02491464;
    fVar58 = *(float *)(unaff_x19 + 0x3c);
    iVar12 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
    if (unaff_x19[0xca] == 0) goto LAB_02491464;
    fVar57 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
    lVar22 = unaff_x19[0xc9];
    fVar50 = in_stack_00000080._4_4_;
    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
      fVar50 = 1.0;
    }
    if ((lVar22 == 0) || (*(long *)(lVar22 + 0x20) == 0)) goto LAB_02491464;
    fVar68 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar44 = *(float *)(lVar22 + 0x2c);
    fVar63 = (float)FUN_026fd668(*(long *)(lVar22 + 0x20),0);
    fVar69 = *_fStack0000000000000098;
    fVar63 = fVar68 * (fVar58 / (float)iVar12) * fVar57 * fVar50 * fVar44 * fVar63;
    fVar58 = *in_stack_00000088;
    if ((in_stack_000017bc == 10) && (*(int *)((long)unaff_x19 + 0x48c) != (int)unaff_x19[0x92])) {
      if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 == 0))
      goto LAB_02491464;
      uVar26 = *(int *)((long)unaff_x19 + 0x48c) - 1;
      if (*(uint *)(lVar22 + 0x18) <= uVar26)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (unaff_x19[0xca] == 0) goto LAB_02491464;
      fVar50 = *(float *)(lVar22 + (long)(int)uVar26 * (long)iVar39 + 0x60);
      iVar12 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
      if (unaff_x19[0xca] == 0) goto LAB_02491464;
      fVar68 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
      lVar22 = unaff_x19[0xc9];
      fVar57 = in_stack_00000080._4_4_;
      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
        fVar57 = 1.0;
      }
      if ((lVar22 == 0) || (*(long *)(lVar22 + 0x20) == 0)) goto LAB_02491464;
      fVar44 = *(float *)((long)unaff_x19 + 0x3fc);
      fVar47 = *(float *)(lVar22 + 0x2c);
      fVar63 = (float)FUN_026fd668(*(long *)(lVar22 + 0x20),0);
      if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x50), lVar22 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      fVar69 = *(float *)(lVar22 + 0x60);
      fVar58 = *(float *)(lVar22 + 100);
      fVar63 = fVar44 * (fVar50 / (float)iVar12) * fVar68 * fVar57 * fVar47 * fVar63;
    }
    fVar44 = *(float *)(unaff_x19 + 0x9a);
    fVar57 = *(float *)(unaff_x19 + 0x96);
    fVar47 = *(float *)((long)unaff_x19 + 0x4c4);
    fVar50 = 0.0;
    fVar68 = 0.0;
    if ((0.0 < fVar44) && (fVar68 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
      fVar68 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
    }
    fVar46 = *(float *)(unaff_x19 + 199);
    if ((char)unaff_x19[0x1d] == '\0') {
      if ((unaff_x19[0xc9] == 0) || (lVar22 = *(long *)(unaff_x19[0xc9] + 0x20), lVar22 == 0))
      goto LAB_02491464;
      FUN_026fd62c(&stack0x00000880,lVar22,0);
      unaff_x28[0x1cd] = unaff_x28[1];
      unaff_x28[0x1cc] = *unaff_x28;
      fVar50 = (float)FUN_026fd474(&stack0x000016e0,0);
    }
    puVar9 = System_Threading_Mutex_TypeInfo;
    fVar61 = *(float *)(unaff_x19 + 0x6b);
    fVar58 = (fStack0000000000000090 - fVar69) - fVar58;
    bVar10 = true;
    if ((fVar61 <= fVar58) && (bVar10 = false, !NAN(fVar61))) {
      bVar10 = fVar61 == -1.0;
    }
    if (!bVar10) {
      fVar58 = fVar61;
    }
    fVar69 = _DAT_0294c6e8;
    if ((uVar33 & 0x18) == 0) {
      fVar69 = 1.0;
    }
    if (((fVar57 - (fVar47 - fVar44)) + fVar68 < in_stack_000000a0) &&
       (ABS(fVar46) + fVar63 * fVar50 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) <
        fVar69 * fVar58)) {
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_024d69d4();
      lVar22 = *(long *)(*(long *)puVar9 + 0xb8);
      memcpy(&stack0x00000508,(void *)(lVar22 + 0x788),0x378);
      FUN_013b86dc(lVar22 + 0x11f0,&stack0x00000508,
                   *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__);
    }
  }
  unaff_d13 = (ulong)(uint)fVar53;
  unaff_s12 = 1.0;
  lVar22 = *in_stack_00000150;
  if ((lVar22 == 0) || (lVar23 = *(long *)(lVar22 + 0x38), lVar23 == 0)) goto LAB_02491464;
  if (*(uint *)(lVar23 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  uVar26 = *(uint *)(unaff_x19 + 0x94);
  lVar23 = lVar23 + (int)*in_stack_00000148 * unaff_x21;
  *(uint *)(lVar23 + 100) = uVar26;
  *(int *)(lVar23 + 0x68) = (int)unaff_x19[0x95];
  if ((bVar7) ||
     ((in_stack_000017bc < 0xe && ((1 << (ulong)(in_stack_000017bc & 0x1f) & 0x2c00U) != 0)))) {
    lVar22 = *(long *)(lVar22 + 0x50);
    if (lVar22 == 0) goto LAB_02491464;
    if (*(uint *)(lVar22 + 0x18) <= uVar26)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    if (*(int *)(lVar22 + (long)(int)uVar26 * 0x5c + 0x24) == 1) goto LAB_0248d42c;
  }
  else {
    lVar22 = *(long *)(lVar22 + 0x50);
    if (lVar22 == 0) goto LAB_02491464;
LAB_0248d42c:
    if (*(uint *)(lVar22 + 0x18) <= uVar26)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(int *)(lVar22 + (long)(int)uVar26 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
  }
  if (in_stack_000017bc == 9) {
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar58 = (float)FUN_026fd208(*unaff_x27 + 0x50,0);
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar57 = *(float *)(unaff_x19 + 199);
    fVar50 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x27 + 0x1b9));
    fVar53 = fVar53 * fVar58 * fVar50;
    fVar50 = fVar53 * (float)(int)(fVar57 / fVar53);
    uVar51 = (ulong)(uint)fVar50;
    if (fVar50 <= fVar57) {
      fVar50 = fVar57 + fVar53;
    }
LAB_0248d614:
    *(float *)(unaff_x19 + 199) = fVar50;
  }
  else if (*(float *)(unaff_x19 + 0x55) == 0.0) {
    if ((char)unaff_x19[0x1d] == '\0') {
      fVar57 = unaff_s12;
      if (*(char *)((long)unaff_x19 + 0x46c) != '\0') {
        fVar57 = (float)thunk_FUN_026935f0(_uStack0000000000000060,0);
      }
      fVar50 = *(float *)(unaff_x19 + 199);
      fVar63 = (float)FUN_026fd474(&stack0x00001770,0);
      if (unaff_x19[0x1f] == 0) goto LAB_02491464;
      fVar58 = 1.0 - *(float *)((long)unaff_x19 + 0x2cc);
      fVar50 = fVar50 + fVar58 * (*(float *)((long)unaff_x19 + 0x2a4) +
                                 fVar53 * (fVar43 + fVar57 * fVar63) +
                                 fStack00000000000000c8 *
                                 (in_stack_000000c0._4_4_ +
                                 fStack00000000000000cc + *(float *)(unaff_x19[0x1f] + 0x1ac)));
      *(float *)(unaff_x19 + 199) = fVar50;
      goto joined_r0x0248d568;
    }
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar50 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (*(float *)((long)unaff_x19 + 0x2a4) +
             fVar53 * fVar43 +
             fStack00000000000000c8 *
             (in_stack_000000c0._4_4_ + fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac)));
    uVar51 = (ulong)(uint)fVar50;
    fVar50 = *(float *)(unaff_x19 + 199) - fVar50;
    *(float *)(unaff_x19 + 199) = fVar50;
    if ((unaff_w29 != 0) || (in_stack_000017bc == 0x200b)) {
      fVar58 = fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
      uVar51 = (ulong)(uint)fVar58;
      fVar50 = fVar50 - fVar58;
      goto LAB_0248d614;
    }
  }
  else {
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar58 = *(float *)(unaff_x19 + 199);
    fVar50 = fVar58 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                      (*(float *)((long)unaff_x19 + 0x2a4) +
                      (*(float *)(unaff_x19 + 0x55) - fVar45) +
                      fStack00000000000000c8 *
                      (fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac)));
    *(float *)(unaff_x19 + 199) = fVar50;
joined_r0x0248d568:
    if ((unaff_w29 != 0) || (uVar51 = (ulong)(uint)fVar58, in_stack_000017bc == 0x200b)) {
      fVar58 = fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
      uVar51 = (ulong)(uint)fVar58;
      fVar50 = fVar50 + fVar58;
      goto LAB_0248d614;
    }
  }
  lVar22 = *in_stack_00000150;
  if ((lVar22 == 0) || (lVar29 = *(long *)(lVar22 + 0x38), lVar29 == 0)) goto LAB_02491464;
  uVar3 = *in_stack_00000148;
  uVar26 = (uint)*(undefined8 *)(lVar29 + 0x18);
  if (uVar26 <= uVar3)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar29 + (int)uVar3 * unaff_x21 + 0x144) = fVar50;
  if ((int)in_stack_000017bc < 0xd) {
    if ((in_stack_000017bc - 10 < 2) || (in_stack_000017bc == 3)) goto LAB_0248d6b8;
LAB_0248d69c:
    if ((bool)(bVar7 & in_stack_000017bc == 0x2d)) goto LAB_0248d6b8;
  }
  else {
    if (in_stack_000017bc - 0x2028 < 2) goto LAB_0248d6b8;
    if (in_stack_000017bc != 0xd) goto LAB_0248d69c;
    uVar51 = 0;
    *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
  }
  unaff_x25 = in_stack_00000150;
  unaff_x26 = in_stack_00000148;
  uVar33 = in_stack_000017bc;
  if ((float)uVar3 == in_stack_00000078._4_4_) goto LAB_0248d6b8;
LAB_0248dc08:
  uVar3 = *unaff_x26;
  if (uVar26 <= uVar3)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if (*(char *)(lVar29 + (int)uVar3 * unaff_x21 + 0x194) != '\0') {
    lVar29 = lVar29 + (int)uVar3 * unaff_x21;
    uVar54 = *(ulong *)(lVar29 + 0x11c);
    uVar51 = *(ulong *)(in_stack_00000070 + 0x230);
    *(ulong *)(in_stack_00000070 + 0x230) =
         uVar54 ^ (uVar54 ^ uVar51) &
                  CONCAT44(-(uint)((float)(uVar51 >> 0x20) < (float)(uVar54 >> 0x20)),
                           -(uint)((float)uVar51 < (float)uVar54));
    uVar54 = *(ulong *)(in_stack_00000070 + 0x238);
    uVar51 = *(ulong *)(lVar29 + 0x128);
    *(ulong *)(in_stack_00000070 + 0x238) =
         uVar51 ^ (uVar51 ^ uVar54) &
                  CONCAT44(-(uint)((float)(uVar51 >> 0x20) < (float)(uVar54 >> 0x20)),
                           -(uint)((float)uVar51 < (float)uVar54));
  }
  if (((int)unaff_x19[0x5b] == 5) &&
     ((0xd < uVar33 || ((1 << (ulong)(uVar33 & 0x1f) & 0x2c00U) == 0)))) {
    lVar23 = *(long *)(lVar22 + 0x58);
    if (lVar23 == 0) goto LAB_02491464;
    iVar12 = (int)unaff_x19[0x95] + 1;
    if (*(int *)(lVar23 + 0x18) < iVar12) {
      if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01147c08((long *)(lVar22 + 0x58),iVar12,1,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerMove__);
      lVar22 = *in_stack_00000150;
      if (lVar22 == 0) goto LAB_02491464;
    }
    lVar23 = *(long *)(lVar22 + 0x58);
    if (lVar23 == 0) goto LAB_02491464;
    uVar33 = *(uint *)(unaff_x19 + 0x95);
    lVar36 = (long)(int)uVar33;
    uVar26 = *(uint *)(lVar23 + 0x18);
    if (uVar26 <= uVar33)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar29 = lVar23 + lVar36 * 0x14;
    fVar50 = *(float *)(lVar29 + 0x30);
    uVar51 = (ulong)(uint)fVar50;
    *(undefined4 *)(lVar29 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
    fVar58 = *(float *)((long)unaff_x19 + 0x4bc);
    if (fVar50 <= *(float *)((long)unaff_x19 + 0x4bc)) {
      fVar58 = fVar50;
    }
    *(float *)(lVar29 + 0x30) = fVar58;
    uVar3 = *(uint *)((long)unaff_x19 + 0x48c);
    if (uVar3 == 0 && uVar33 == 0) {
      *(uint *)(lVar23 + lVar36 * 0x14 + 0x20) = uVar3;
      unaff_x25 = in_stack_00000150;
      unaff_x26 = in_stack_00000148;
    }
    else {
      uVar6 = uVar3 - 1;
      if (0 < (int)uVar3) {
        lVar22 = *(long *)(lVar22 + 0x38);
        if (lVar22 == 0) goto LAB_02491464;
        if (*(uint *)(lVar22 + 0x18) <= uVar6)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        if (uVar33 != *(uint *)(lVar22 + (long)(int)uVar6 * (long)iVar39 + 0x68)) {
          if (uVar26 <= uVar33 - 1)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          *(uint *)(lVar23 + 0x20 + (long)(int)(uVar33 - 1) * 0x14 + 4) = uVar6;
          *(uint *)(lVar23 + 0x20 + lVar36 * 0x14) = uVar3;
          unaff_x25 = in_stack_00000150;
          unaff_x26 = in_stack_00000148;
          goto LAB_0248dc84;
        }
      }
      unaff_x25 = in_stack_00000150;
      unaff_x26 = in_stack_00000148;
      if ((float)uVar3 == in_stack_00000078._4_4_) {
        *(float *)(lVar23 + lVar36 * 0x14 + 0x24) = in_stack_00000078._4_4_;
      }
    }
  }
LAB_0248dc84:
  plVar27 = (long *)System_Threading_Mutex_TypeInfo;
  if (((char)unaff_x19[0x5a] == '\0') &&
     ((6 < *(uint *)(unaff_x19 + 0x5b) ||
      ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5b) & 0x1f) & 0x4aU) == 0)))) goto LAB_0248e168;
  if ((unaff_w29 == 0) &&
     (((in_stack_000017bc != 0x2d && (in_stack_000017bc != 0x200b)) && (in_stack_000017bc != 0xad)))
     ) {
    if (*(char *)((long)unaff_x19 + 0x2d2) != '\0') goto LAB_0248ded4;
LAB_0248de4c:
    if (((((0x2bfd < in_stack_000017bc - 0xac01) && (0x1d < in_stack_000017bc - 0xa961)) &&
         (0xfd < in_stack_000017bc - 0x1101)) || (uVar54 = FUN_024e95f0(0), (uVar54 & 1) != 0)) &&
       ((((0xed < in_stack_000017bc - 0xff01 && (0x1d < in_stack_000017bc - 0xfe31)) &&
         (0x717d < in_stack_000017bc - 0x2e81)) && (0x1fd < in_stack_000017bc - 0xf901))))
    goto LAB_0248ded4;
    lVar22 = FUN_024e94b0(0);
    if ((lVar22 == 0) || (*(long *)(lVar22 + 0x10) == 0)) goto LAB_02491464;
    uVar54 = FUN_0129aa60(*(long *)(lVar22 + 0x10),&stack0x00000880,
                          *(undefined8 *)
                           System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                         );
    if ((int)in_stack_00000078._4_4_ <= (int)*unaff_x26) {
      in_stack_00000880 = in_stack_000017bc;
      if ((uVar54 & 1) == 0) {
LAB_0248e1b0:
        plVar27 = (long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_024d69d4();
        bStack000000000000005c = 0;
        unaff_x25 = in_stack_00000150;
        goto LAB_0248e168;
      }
LAB_0248e0dc:
      plVar27 = (long *)System_Threading_Mutex_TypeInfo;
      unaff_x25 = in_stack_00000150;
      if (uVar13 != unaff_w24 || ((bStack000000000000005c ^ 0xff) & 1) != 0) goto LAB_0248e168;
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__get_invalidColorGradient;
    }
    lVar22 = FUN_024e94b0(0);
    if (((lVar22 == 0) || (*in_stack_00000150 == 0)) ||
       (lVar23 = *(long *)(*in_stack_00000150 + 0x38), lVar23 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar23 + 0x18) <= *unaff_x26 + 1)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    if (*(long *)(lVar22 + 0x18) == 0) goto LAB_02491464;
    in_stack_00000880 =
         (uint)*(ushort *)(lVar23 + (long)(int)(*unaff_x26 + 1) * (long)iVar39 + 0x20);
    uVar19 = FUN_0129aa60(*(long *)(lVar22 + 0x18),&stack0x00000880,
                          *(undefined8 *)
                           System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                         );
    if ((uVar54 & 1) != 0) goto LAB_0248e0dc;
    if ((uVar19 & 1) == 0) goto LAB_0248e1b0;
    plVar27 = (long *)System_Threading_Mutex_TypeInfo;
    if ((bStack000000000000005c & 1) == 0) {
      bStack000000000000005c = 0;
      unaff_x25 = in_stack_00000150;
      goto LAB_0248e168;
    }
    unaff_x25 = in_stack_00000150;
    if (unaff_w29 != 0) goto LAB_0248e100;
  }
  else {
    if (*(char *)((long)unaff_x19 + 0x2d2) != '\x01') {
      if (((0x28 < in_stack_000017bc - 0x2007) ||
          ((1L << ((ulong)(in_stack_000017bc - 0x2007) & 0x3f) & 0x10000000401U) == 0)) &&
         ((in_stack_000017bc != 0xa0 && (in_stack_000017bc != 0x2060)))) {
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_024d69d4();
        bStack000000000000005c = 0;
        *(undefined4 *)(*(long *)(*plVar27 + 0xb8) + 0xe78) = 0xffffffff;
        goto LAB_0248e168;
      }
      goto LAB_0248de4c;
    }
LAB_0248ded4:
    if ((bStack000000000000005c & 1) == 0) {
      bStack000000000000005c = 0;
      plVar27 = (long *)System_Threading_Mutex_TypeInfo;
      goto LAB_0248e168;
    }
    if ((in_stack_000017bc == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) == 0) {
UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__get_invalidColorGradient:
      plVar27 = (long *)System_Threading_Mutex_TypeInfo;
      if (unaff_w29 == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__get_smoothMovement;
    }
LAB_0248e100:
    plVar27 = (long *)System_Threading_Mutex_TypeInfo;
    if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_024d69d4();
  }
UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__get_smoothMovement:
  if (*(int *)(*plVar27 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_024d69d4();
  bStack000000000000005c = 1;
LAB_0248e168:
  if (*(int *)(*plVar27 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar42 = (long *)StringLiteral_302;
  FUN_024d69d4();
  *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
  goto LAB_0248ab98;
LAB_0248d6b8:
  unaff_x25 = in_stack_00000150;
  unaff_x26 = in_stack_00000148;
  if (*(float *)(unaff_x19 + 0x9a) <= 0.0) goto LAB_0248d804;
  unaff_s8 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (((ABS(unaff_s8) <= fStack000000000000004c) || (*(char *)((long)unaff_x19 + 700) != '\0')) ||
     (*(char *)((long)unaff_x19 + 0x334) != '\0')) goto LAB_0248d804;
  FUN_024d6ca8(unaff_s8);
  *(float *)((long)unaff_x19 + 0x4bc) = *(float *)((long)unaff_x19 + 0x4bc) - unaff_s8;
  *(float *)(unaff_x19 + 0x9a) = unaff_s8 + *(float *)(unaff_x19 + 0x9a);
  puVar9 = System_Threading_Mutex_TypeInfo;
  lVar23 = *(long *)System_Threading_Mutex_TypeInfo;
  if (*(int *)(lVar23 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar23 = *(long *)puVar9;
  }
  lVar22 = *(long *)(lVar23 + 0xb8);
  if (*(int *)(lVar22 + 0x7ac) != (int)unaff_x19[0x94]) goto LAB_0248d804;
  if (*(int *)(lVar23 + 0xe0) != 0) goto LAB_0248d784;
  thunk_FUN_00d32864();
  goto code_r0x0248d774;
LAB_0248ef74:
  uVar13 = uVar33 - 1;
  if (*(uint *)(lVar22 + 0x18) <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*in_stack_00000150 == 0) || (lVar23 = *(long *)(*in_stack_00000150 + 0x50), lVar23 == 0))
  goto LAB_02491464;
  lVar29 = (long)(int)uVar13;
  lVar36 = lVar22 + lVar29 * 0x178;
  uVar3 = *(uint *)(lVar36 + 100);
  if (*(uint *)(lVar23 + 0x18) <= uVar3)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar34 = *(long *)(lVar36 + 0x38);
  uVar31 = (uint)*(ushort *)(lVar36 + 0x20);
  lVar37 = (long)(int)uVar3;
  lVar23 = lVar23 + lVar37 * 0x5c;
  uVar6 = *(uint *)(lVar23 + 0x3c);
  uVar2 = *(uint *)(lVar23 + 0x40);
  lVar36 = (long)(int)uVar2;
  iVar14 = *(int *)(lVar23 + 0x28);
  iVar15 = *(int *)(lVar23 + 0x2c);
  uVar41 = *(uint *)(lVar23 + 0x68);
  fVar47 = *(float *)(lVar23 + 0x5c);
  fVar46 = *(float *)(lVar23 + 0x60);
  iVar4 = *(int *)(lVar23 + 0x20);
  fVar68 = *(float *)(lVar23 + 0x4c);
  fVar45 = *(float *)(lVar23 + 0x54);
  fVar57 = *(float *)(lVar23 + 0x58);
  fVar44 = *(float *)(lVar23 + 0x6c);
  fVar69 = *(float *)(lVar23 + 0x70);
  fVar63 = *(float *)(lVar23 + 0x74);
  fVar43 = *(float *)(lVar23 + 0x78);
  fVar61 = fVar47 + fVar46;
  if ((int)uVar41 < 9) {
    switch(uVar41) {
    case 1:
      if ((char)unaff_x19[0x1d] == '\0') {
        in_stack_000000c0._4_4_ = fVar46 + 0.0;
      }
      else {
        in_stack_000000c0._4_4_ = 0.0 - fVar57;
      }
      break;
    case 2:
LAB_0248f124:
      in_stack_000000c0._4_4_ = (fVar46 + fVar47 * 0.5) - fVar57 * 0.5;
      break;
    default:
      goto switchD_0248f070_caseD_3;
    case 4:
      in_stack_000000c0._4_4_ = fVar61 - fVar57;
      if ((char)unaff_x19[0x1d] != '\0') {
        in_stack_000000c0._4_4_ = fVar61;
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
    if (uVar31 < 0xad) {
      if ((uVar31 != 3) && (uVar31 != 10)) goto LAB_0248f0c8;
    }
    else if ((uVar31 != 0xad) && ((uVar31 != 0x200b && (uVar31 != 0x2060)))) {
LAB_0248f0c8:
      if (*(uint *)(lVar22 + 0x18) <= uVar6)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar5 = *(undefined2 *)(lVar22 + (long)(int)uVar6 * 0x178 + 0x20);
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar51 = FUN_016f9f84(uVar5,0);
      if ((uVar51 & 1) == 0) {
        bVar1 = (int)uVar3 < (int)unaff_x19[0x94];
      }
      else {
        bVar1 = false;
      }
      if ((fVar57 <= fVar47) && (!bVar1 && (uVar41 >> 4 & 1) == 0)) {
        in_stack_000000c0._4_4_ = fVar46;
        if ((char)unaff_x19[0x1d] != '\0') {
          in_stack_000000c0._4_4_ = fVar61;
        }
        goto LAB_0248f194;
      }
      if (((uVar33 == 1) || (uVar3 != uVar26)) || (uVar13 == *(uint *)((long)unaff_x19 + 0x31c))) {
        in_stack_000000c0._4_4_ = fVar46;
        if ((char)unaff_x19[0x1d] != '\0') {
          in_stack_000000c0._4_4_ = fVar61;
        }
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        fStack0000000000000024 = (float)FUN_016fa418(uVar31,0);
        in_stack_000000b8 = 0;
      }
      else {
        cVar21 = (char)unaff_x19[0x1d];
        fVar46 = -fVar57;
        if (cVar21 != '\0') {
          fVar46 = fVar57;
        }
        if (*(uint *)(lVar22 + 0x18) <= uVar6)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fVar57 = 1.0;
        iVar15 = (int)*(char *)(lVar22 + (long)(int)uVar6 * 0x178 + 0x194) +
                 (-iVar4 - ((uint)fStack0000000000000024 & 1)) + iVar15 + -1;
        if (0 < iVar15) {
          fVar57 = *(float *)((long)unaff_x19 + 0x2d4);
        }
        if (iVar15 < 1) {
          iVar15 = 1;
        }
        if (uVar31 == 9) {
LAB_02490fe0:
          fVar57 = 1.0 - fVar57;
        }
        else {
          if (uVar31 != 0xa0) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar51 = FUN_016fa418(uVar31,0);
            cVar21 = (char)unaff_x19[0x1d];
            if ((uVar51 & 1) != 0) goto LAB_02490fe0;
          }
          iVar15 = (iVar4 - (~(uint)fStack0000000000000024 & 1)) + iVar14;
        }
        fVar57 = ((fVar47 + fVar46) * fVar57) / (float)iVar15;
        if (cVar21 == '\0') {
          in_stack_000000c0._4_4_ = in_stack_000000c0._4_4_ + fVar57;
          in_stack_000000b8 =
               CONCAT44((float)((ulong)in_stack_000000b8 >> 0x20) + 0.0,
                        (float)in_stack_000000b8 + 0.0);
        }
        else {
          in_stack_000000c0._4_4_ = in_stack_000000c0._4_4_ - fVar57;
        }
      }
    }
  }
  else if (uVar41 == 0x20) {
    fVar57 = fVar44 + fVar63;
    goto LAB_0248f124;
  }
switchD_0248f070_caseD_3:
  uVar41 = (uint)*(undefined8 *)(lVar22 + 0x18);
  if (uVar41 <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar23 = lVar22 + lVar29 * 0x178;
  fVar46 = fStack0000000000000090 + in_stack_000000c0._4_4_;
  fVar57 = SUB84(in_stack_00000088,0) + (float)in_stack_000000b8;
  fVar47 = (float)((ulong)in_stack_00000088 >> 0x20) + (float)((ulong)in_stack_000000b8 >> 0x20);
  plVar42 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(char *)(lVar23 + 0x194) == '\0') goto LAB_0248fabc;
  iVar14 = *(int *)(lVar22 + lVar29 * 0x178 + 0x2c);
  if (iVar14 != 0) goto LAB_0248f808;
  fVar53 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)uVar3,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
  case 0:
    lVar25 = lVar22 + lVar29 * 0x178;
    *(undefined4 *)(lVar25 + 0x84) = 0;
    *(undefined4 *)(lVar25 + 0xac) = 0;
    *(undefined4 *)(lVar25 + 0xd4) = 0x3f800000;
    fVar53 = 1.0;
    break;
  case 1:
    fVar43 = *(float *)(lVar22 + lVar29 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
      lVar25 = lVar22 + lVar29 * 0x178;
      fVar63 = (in_stack_000000c0._4_4_ + fVar43) - *(float *)(in_stack_00000070 + 0x230);
      fVar43 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
      goto LAB_0248f2dc;
    }
    lVar25 = lVar22 + lVar29 * 0x178;
    fVar63 = fVar63 - fVar44;
    *(float *)(lVar25 + 0x84) = fVar53 + (fVar43 - fVar44) / fVar63;
    *(float *)(lVar25 + 0xac) = fVar53 + (*(float *)(lVar25 + 0x98) - fVar44) / fVar63;
    *(float *)(lVar25 + 0xd4) = fVar53 + (*(float *)(lVar25 + 0xc0) - fVar44) / fVar63;
    fVar53 = fVar53 + (*(float *)(lVar25 + 0xe8) - fVar44) / fVar63;
    break;
  case 2:
    lVar25 = lVar22 + lVar29 * 0x178;
    fVar43 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
    fVar63 = (in_stack_000000c0._4_4_ + *(float *)(lVar25 + 0x70)) -
             *(float *)(in_stack_00000070 + 0x230);
LAB_0248f2dc:
    *(float *)(lVar25 + 0x84) = fVar53 + fVar63 / fVar43;
    *(float *)(lVar25 + 0xac) =
         fVar53 + ((in_stack_000000c0._4_4_ + *(float *)(lVar25 + 0x98)) -
                  *(float *)(in_stack_00000070 + 0x230)) /
                  (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
    *(float *)(lVar25 + 0xd4) =
         fVar53 + ((in_stack_000000c0._4_4_ + *(float *)(lVar25 + 0xc0)) -
                  *(float *)(in_stack_00000070 + 0x230)) /
                  (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
    fVar53 = fVar53 + ((in_stack_000000c0._4_4_ + *(float *)(lVar25 + 0xe8)) -
                      *(float *)(in_stack_00000070 + 0x230)) /
                      (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x61]) {
    case 0:
      lVar25 = lVar22 + lVar29 * 0x178;
      *(undefined4 *)(lVar25 + 0x88) = 0;
      *(undefined4 *)(lVar25 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar25 + 0xd8) = 0;
      *(undefined4 *)(lVar25 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar25 = lVar22 + lVar29 * 0x178;
      fVar43 = fVar43 - fVar69;
      fVar63 = fVar53 + (*(float *)(lVar25 + 0x74) - fVar69) / fVar43;
      fVar43 = fVar53 + (*(float *)(lVar25 + 0x9c) - fVar69) / fVar43;
      *(float *)(lVar25 + 0x88) = fVar63;
      *(float *)(lVar25 + 0xb0) = fVar43;
      *(float *)(lVar25 + 0xd8) = fVar63;
      *(float *)(lVar25 + 0x100) = fVar43;
      break;
    case 2:
      lVar25 = lVar22 + lVar29 * 0x178;
      fVar63 = fVar53 + (*(float *)(lVar25 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                        (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
      *(float *)(lVar25 + 0x88) = fVar63;
      fVar43 = *(float *)(unaff_x19 + 0x9b);
      fVar69 = *(float *)(unaff_x19 + 0x9c);
      *(float *)(lVar25 + 0xd8) = fVar63;
      fVar63 = fVar53 + (*(float *)(lVar25 + 0x9c) - fVar43) / (fVar69 - fVar43);
      *(float *)(lVar25 + 0xb0) = fVar63;
      *(float *)(lVar25 + 0x100) = fVar63;
      break;
    case 3:
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
      uVar41 = (uint)*(undefined8 *)(lVar22 + 0x18);
    }
    if (uVar41 <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar25 = lVar22 + lVar29 * 0x178;
    fVar63 = *(float *)(lVar25 + 0x15c);
    fVar43 = (1.0 - (*(float *)(lVar25 + 0x88) + *(float *)(lVar25 + 0xb0)) * fVar63) * 0.5;
    fVar69 = fVar53 + *(float *)(lVar25 + 0x88) * fVar63 + fVar43;
    fVar53 = fVar53 + fVar43 + *(float *)(lVar25 + 0xb0) * fVar63;
    *(float *)(lVar25 + 0x84) = fVar69;
    *(float *)(lVar25 + 0xac) = fVar69;
    *(float *)(lVar25 + 0xd4) = fVar53;
    break;
  default:
    goto switchD_0248f240_default;
  }
  *(float *)(lVar22 + lVar29 * 0x178 + 0xfc) = fVar53;
switchD_0248f240_default:
  switch((int)unaff_x19[0x61]) {
  case 0:
    if (uVar41 <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar25 = lVar22 + lVar29 * 0x178;
    *(undefined4 *)(lVar25 + 0x88) = 0;
    *(undefined4 *)(lVar25 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar25 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar25 + 0x100) = 0;
    break;
  case 1:
    if (uVar13 < uVar41) {
      lVar25 = lVar22 + lVar29 * 0x178;
      fVar68 = fVar68 - fVar45;
      fVar53 = (*(float *)(lVar25 + 0x74) - fVar45) / fVar68;
      fVar68 = (*(float *)(lVar25 + 0x9c) - fVar45) / fVar68;
      *(float *)(lVar25 + 0x88) = fVar53;
      goto LAB_0248f644;
    }
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  case 2:
    if (uVar41 <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar25 = lVar22 + lVar29 * 0x178;
    fVar53 = (*(float *)(lVar25 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
             (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
    *(float *)(lVar25 + 0x88) = fVar53;
    fVar68 = (*(float *)(lVar25 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
             (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
LAB_0248f644:
    *(float *)(lVar25 + 0xb0) = fVar68;
    *(float *)(lVar25 + 0xd8) = fVar68;
    *(float *)(lVar25 + 0x100) = fVar53;
    break;
  case 3:
    if (uVar41 <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar25 = lVar22 + lVar29 * 0x178;
    fVar68 = *(float *)(lVar25 + 0x15c);
    fVar63 = (1.0 - (*(float *)(lVar25 + 0x84) + *(float *)(lVar25 + 0xd4)) / fVar68) * 0.5;
    fVar53 = *(float *)(lVar25 + 0x84) / fVar68 + fVar63;
    fVar63 = fVar63 + *(float *)(lVar25 + 0xd4) / fVar68;
    *(float *)(lVar25 + 0x88) = fVar53;
    *(float *)(lVar25 + 0xb0) = fVar63;
    *(float *)(lVar25 + 0x100) = fVar53;
    *(float *)(lVar25 + 0xd8) = fVar63;
  }
  if (uVar41 <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar25 = lVar22 + lVar29 * 0x178;
  fVar53 = ABS(fVar58) * *(float *)(lVar25 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
  if ((*(char *)(lVar25 + 0x5c) == '\0') && ((*(byte *)(lVar22 + lVar29 * 0x178 + 400) & 1) != 0)) {
    fVar53 = -fVar53;
  }
  lVar25 = lVar22 + lVar29 * 0x178;
  fVar68 = *(float *)(lVar25 + 0x88);
  fVar43 = *(float *)(lVar25 + 0x84);
  fVar63 = -2.1474836e+09;
  if (fVar43 != INFINITY) {
    fVar63 = (float)(int)fVar43;
  }
  fVar69 = *(float *)(lVar25 + 0xd4);
  fVar44 = *(float *)(lVar25 + 0xd8);
  fVar45 = -2.1474836e+09;
  if (fVar68 != INFINITY) {
    fVar45 = (float)(int)fVar68;
  }
  uVar71 = FUN_024e0374(fVar43 - fVar63,fVar68 - fVar45);
  *(undefined4 *)(lVar25 + 0x84) = uVar71;
  if (*(uint *)(lVar22 + 0x18) <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  fVar44 = fVar44 - fVar45;
  *(float *)(lVar25 + 0x88) = fVar53;
  uVar71 = FUN_024e0374(fVar43 - fVar63,fVar44);
  *(undefined4 *)(lVar22 + lVar29 * 0x178 + 0xac) = uVar71;
  if (*(uint *)(lVar22 + 0x18) <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  fVar69 = fVar69 - fVar63;
  *(float *)(lVar22 + lVar29 * 0x178 + 0xb0) = fVar53;
  fVar63 = (float)FUN_024e0374(fVar69,fVar44);
  *(float *)(lVar25 + 0xd4) = fVar63;
  if (*(uint *)(lVar22 + 0x18) <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar25 + 0xd8) = fVar53;
  uVar71 = FUN_024e0374(fVar69,fVar68 - fVar45);
  *(undefined4 *)(lVar22 + lVar29 * 0x178 + 0xfc) = uVar71;
  uVar41 = (uint)*(undefined8 *)(lVar22 + 0x18);
  if (uVar41 <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar22 + lVar29 * 0x178 + 0x100) = fVar53;
LAB_0248f808:
  if (((int)uVar13 < (int)unaff_x19[100]) &&
     (iStack00000000000000a4 < *(int *)((long)unaff_x19 + 0x324))) {
    if (((int)uVar3 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] != 5)) {
      if (uVar41 <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar23 = lVar22 + lVar29 * 0x178;
      *(ulong *)(lVar23 + 0x70) =
           CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar23 + 0x70) >> 0x20),
                    fVar46 + (float)*(undefined8 *)(lVar23 + 0x70));
      *(float *)(lVar23 + 0x78) = fVar47 + *(float *)(lVar23 + 0x78);
      plVar42 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      if (*(uint *)(lVar22 + 0x18) <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar23 = lVar22 + lVar29 * 0x178;
      *(ulong *)(lVar23 + 0x98) =
           CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar23 + 0x98) >> 0x20),
                    fVar46 + (float)*(undefined8 *)(lVar23 + 0x98));
      *(float *)(lVar23 + 0xa0) = fVar47 + *(float *)(lVar23 + 0xa0);
      uVar41 = *(uint *)(lVar22 + 0x18);
LAB_0248fa4c:
      if (uVar41 <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar23 = lVar22 + lVar29 * 0x178;
      *(ulong *)(lVar23 + 0xc0) =
           CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar23 + 0xc0) >> 0x20),
                    fVar46 + (float)*(undefined8 *)(lVar23 + 0xc0));
      *(float *)(lVar23 + 200) = fVar47 + *(float *)(lVar23 + 200);
      if (*(uint *)(lVar22 + 0x18) <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar23 = lVar22 + lVar29 * 0x178;
      *(ulong *)(lVar23 + 0xe8) =
           CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar23 + 0xe8) >> 0x20),
                    fVar46 + (float)*(undefined8 *)(lVar23 + 0xe8));
      *(float *)(lVar23 + 0xf0) = fVar47 + *(float *)(lVar23 + 0xf0);
      if (iVar14 == 0) goto LAB_0248fa9c;
LAB_0248f9d0:
      if (iVar14 == 1) {
        pcVar30 = *(code **)(*unaff_x19 + 0x8f8);
        goto LAB_0248faa8;
      }
      goto LAB_0248fabc;
    }
    if (((int)uVar3 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] == 5)) {
      if (uVar13 < uVar41) {
        if (*(uint *)(lVar22 + lVar29 * 0x178 + 0x68) != uStack0000000000000030) goto LAB_0248f8d8;
        lVar23 = lVar22 + lVar29 * 0x178;
        *(ulong *)(lVar23 + 0x70) =
             CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar23 + 0x70) >> 0x20),
                      fVar46 + (float)*(undefined8 *)(lVar23 + 0x70));
        *(float *)(lVar23 + 0x78) = fVar47 + *(float *)(lVar23 + 0x78);
        if (uVar13 < *(uint *)(lVar22 + 0x18)) {
          lVar23 = lVar22 + lVar29 * 0x178;
          *(ulong *)(lVar23 + 0x98) =
               CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar23 + 0x98) >> 0x20),
                        fVar46 + (float)*(undefined8 *)(lVar23 + 0x98));
          *(float *)(lVar23 + 0xa0) = fVar47 + *(float *)(lVar23 + 0xa0);
          uVar41 = *(uint *)(lVar22 + 0x18);
          plVar42 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
          goto LAB_0248fa4c;
        }
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    }
  }
LAB_0248f8d8:
  if (uVar41 <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if (DAT_03774d76 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03774d76 = '\x01';
  }
  puVar9 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  lVar25 = lVar22 + lVar29 * 0x178;
  uVar71 = *(undefined4 *)
            (*(undefined8 **)
              (*(long *)
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
              0xb8) + 1);
  *(undefined8 *)(lVar25 + 0x70) =
       **(undefined8 **)
         (*(long *)Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
         0xb8);
  *(undefined4 *)(lVar25 + 0x78) = uVar71;
  plVar42 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(uint *)(lVar22 + 0x18) <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar25 = lVar22 + lVar29 * 0x178;
  uVar71 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
  *(undefined8 *)(lVar25 + 0x98) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
  *(undefined4 *)(lVar25 + 0xa0) = uVar71;
  if (*(uint *)(lVar22 + 0x18) <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar25 = lVar22 + lVar29 * 0x178;
  uVar71 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
  *(undefined8 *)(lVar25 + 0xc0) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
  *(undefined4 *)(lVar25 + 200) = uVar71;
  if (*(uint *)(lVar22 + 0x18) <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar25 = lVar22 + lVar29 * 0x178;
  uVar71 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
  *(undefined8 *)(lVar25 + 0xe8) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
  *(undefined4 *)(lVar25 + 0xf0) = uVar71;
  if (*(uint *)(lVar22 + 0x18) <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(undefined1 *)(lVar23 + 0x194) = 0;
  if (iVar14 != 0) goto LAB_0248f9d0;
LAB_0248fa9c:
  pcVar30 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0248faa8:
  (*pcVar30)();
LAB_0248fabc:
  if ((*in_stack_00000150 == 0) || (lVar23 = *(long *)(*in_stack_00000150 + 0x38), lVar23 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar23 + 0x18) <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar23 = lVar23 + lVar29 * 0x178;
  uVar16 = *(undefined8 *)(lVar23 + 0x11c);
  *(undefined8 *)(lVar23 + 0x11c) =
       CONCAT44(fVar57 + (float)((ulong)uVar16 >> 0x20),fVar46 + (float)uVar16);
  *(float *)(lVar23 + 0x124) = fVar47 + *(float *)(lVar23 + 0x124);
  if ((*in_stack_00000150 == 0) || (lVar23 = *(long *)(*in_stack_00000150 + 0x38), lVar23 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar23 + 0x18) <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar23 = lVar23 + lVar29 * 0x178;
  *(ulong *)(lVar23 + 0x110) =
       CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar23 + 0x110) >> 0x20),
                fVar46 + (float)*(undefined8 *)(lVar23 + 0x110));
  *(float *)(lVar23 + 0x118) = fVar47 + *(float *)(lVar23 + 0x118);
  if ((*in_stack_00000150 == 0) || (lVar23 = *(long *)(*in_stack_00000150 + 0x38), lVar23 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar23 + 0x18) <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar23 = lVar23 + lVar29 * 0x178;
  *(ulong *)(lVar23 + 0x128) =
       CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar23 + 0x128) >> 0x20),
                fVar46 + (float)*(undefined8 *)(lVar23 + 0x128));
  *(float *)(lVar23 + 0x130) = fVar47 + *(float *)(lVar23 + 0x130);
  if ((*in_stack_00000150 == 0) || (lVar23 = *(long *)(*in_stack_00000150 + 0x38), lVar23 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar23 + 0x18) <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar23 = lVar23 + lVar29 * 0x178;
  *(float *)(lVar23 + 0x134) = fVar46 + *(float *)(lVar23 + 0x134);
  *(ulong *)(lVar23 + 0x138) =
       CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar23 + 0x138) >> 0x20),
                fVar57 + (float)*(undefined8 *)(lVar23 + 0x138));
  lVar23 = *in_stack_00000150;
  if ((lVar23 == 0) || (lVar25 = *(long *)(lVar23 + 0x38), lVar25 == 0)) goto LAB_02491464;
  uVar41 = *(uint *)(lVar25 + 0x18);
  if (uVar41 <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar35 = lVar25 + lVar29 * 0x178;
  *(ulong *)(lVar35 + 0x140) =
       CONCAT44(fVar46 + (float)((ulong)*(undefined8 *)(lVar35 + 0x140) >> 0x20),
                fVar46 + (float)*(undefined8 *)(lVar35 + 0x140));
  *(ulong *)(lVar35 + 0x148) =
       CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar35 + 0x148) >> 0x20),
                fVar57 + (float)*(undefined8 *)(lVar35 + 0x148));
  *(float *)(lVar35 + 0x150) = fVar57 + *(float *)(lVar35 + 0x150);
  if (uVar3 == uVar26) {
    uVar26 = *in_stack_00000148 - 1;
    if (uVar13 == uVar26) goto LAB_0248fccc;
  }
  else {
    lVar23 = *(long *)(lVar23 + 0x50);
    if (lVar23 == 0) goto LAB_02491464;
    if (*(uint *)(lVar23 + 0x18) <= uVar26)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar35 = (long)(int)uVar26;
    lVar38 = lVar23 + lVar35 * 0x5c;
    fVar63 = fVar57 + *(float *)(lVar38 + 0x54);
    *(ulong *)(lVar38 + 0x4c) =
         CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar38 + 0x4c) >> 0x20),
                  fVar57 + (float)*(undefined8 *)(lVar38 + 0x4c));
    *(float *)(lVar38 + 0x54) = fVar63;
    *(float *)(lVar38 + 0x58) = fVar46 + *(float *)(lVar38 + 0x58);
    if (uVar41 <= *(uint *)(lVar38 + 0x34))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    uVar71 = *(undefined4 *)(lVar25 + (long)(int)*(uint *)(lVar38 + 0x34) * 0x178 + 0x11c);
    lVar23 = lVar23 + lVar35 * 0x5c;
    *(float *)(lVar23 + 0x70) = fVar63;
    *(undefined4 *)(lVar23 + 0x6c) = uVar71;
    lVar23 = *in_stack_00000150;
    if ((lVar23 == 0) || (lVar25 = *(long *)(lVar23 + 0x50), lVar25 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar25 + 0x18) <= uVar26)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar23 = *(long *)(lVar23 + 0x38);
    if (lVar23 == 0) goto LAB_02491464;
    uVar26 = *(uint *)(lVar25 + lVar35 * 0x5c + 0x40);
    if (*(uint *)(lVar23 + 0x18) <= uVar26)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar25 = lVar25 + lVar35 * 0x5c;
    *(undefined4 *)(lVar25 + 0x74) = *(undefined4 *)(lVar23 + (long)(int)uVar26 * 0x178 + 0x128);
    *(undefined4 *)(lVar25 + 0x78) = *(undefined4 *)(lVar25 + 0x4c);
    uVar26 = *in_stack_00000148 - 1;
LAB_0248fccc:
    if (uVar13 == uVar26) {
      lVar23 = *in_stack_00000150;
      if ((lVar23 == 0) || (lVar25 = *(long *)(lVar23 + 0x50), lVar25 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar25 + 0x18) <= uVar3)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar35 = lVar25 + lVar37 * 0x5c;
      fVar63 = fVar57 + *(float *)(lVar35 + 0x54);
      *(ulong *)(lVar35 + 0x4c) =
           CONCAT44(fVar57 + (float)((ulong)*(undefined8 *)(lVar35 + 0x4c) >> 0x20),
                    fVar57 + (float)*(undefined8 *)(lVar35 + 0x4c));
      *(float *)(lVar35 + 0x54) = fVar63;
      *(float *)(lVar35 + 0x58) = fVar46 + *(float *)(lVar35 + 0x58);
      lVar23 = *(long *)(lVar23 + 0x38);
      if (lVar23 == 0) goto LAB_02491464;
      if (*(uint *)(lVar23 + 0x18) <= *(uint *)(lVar35 + 0x34))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar71 = *(undefined4 *)(lVar23 + (long)(int)*(uint *)(lVar35 + 0x34) * 0x178 + 0x11c);
      lVar25 = lVar25 + lVar37 * 0x5c;
      *(float *)(lVar25 + 0x70) = fVar63;
      *(undefined4 *)(lVar25 + 0x6c) = uVar71;
      lVar23 = *in_stack_00000150;
      if ((lVar23 == 0) || (lVar25 = *(long *)(lVar23 + 0x50), lVar25 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar25 + 0x18) <= uVar3)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar23 = *(long *)(lVar23 + 0x38);
      if (lVar23 == 0) goto LAB_02491464;
      uVar26 = *(uint *)(lVar25 + lVar37 * 0x5c + 0x40);
      if (*(uint *)(lVar23 + 0x18) <= uVar26)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar25 = lVar25 + lVar37 * 0x5c;
      *(undefined4 *)(lVar25 + 0x74) = *(undefined4 *)(lVar23 + (long)(int)uVar26 * 0x178 + 0x128);
      *(undefined4 *)(lVar25 + 0x78) = *(undefined4 *)(lVar25 + 0x4c);
    }
  }
  if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar51 = FUN_016f9468(uVar31,0);
  if (((((uVar51 & 1) == 0) && (1 < uVar31 - 0x2010)) && (uVar31 != 0xad)) && (uVar31 != 0x2d)) {
    if (bVar7) {
      if (((uVar33 != 1) && ((int)uVar13 < (int)(*(uint *)(lVar22 + 0x18) - 1))) &&
         (((int)uVar13 < (int)*in_stack_00000148 && ((uVar31 == 0x2019 || (uVar31 == 0x27)))))) {
        if (*(uint *)(lVar22 + 0x18) <= uVar33 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        uVar5 = *(undefined2 *)(lVar22 + lStack0000000000000128 + -0x438);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar51 = FUN_016f9468(uVar5,0);
        if ((uVar51 & 1) != 0) {
          if (*(uint *)(lVar22 + 0x18) <= uVar33)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          uVar5 = *(undefined2 *)(lVar22 + lStack0000000000000128 + -0x148);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar51 = FUN_016f9468(uVar5,0);
          if ((uVar51 & 1) != 0) goto LAB_0248fee0;
        }
      }
    }
    else {
      if (uVar33 != 1) {
LAB_024909a0:
        bVar7 = false;
        goto LAB_0248fee8;
      }
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar51 = FUN_016f93a0(uVar31,0);
      if ((uVar51 & 1) != 0) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar51 = FUN_016f68bc(uVar31,0);
        if (((uVar31 != 0x200b) && ((uVar51 & 1) == 0)) && (*in_stack_00000148 != 1))
        goto LAB_024909a0;
      }
    }
    if (uVar13 == *in_stack_00000148 - 1) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar51 = FUN_016f9468(uVar31,0);
      iVar14 = iVar12;
      if ((uVar51 & 1) == 0) goto LAB_02490204;
    }
    else {
LAB_02490204:
      iVar14 = uVar33 - 2;
    }
    lVar23 = *in_stack_00000150;
    if (lVar23 == 0) goto LAB_02491464;
    lVar25 = *(long *)(lVar23 + 0x40);
    if (lVar25 == 0) goto LAB_02491464;
    uVar26 = *(uint *)(lVar23 + 0x24);
    iVar15 = *(int *)(lVar25 + 0x18);
    if (iVar15 < (int)(uVar26 + 1)) {
      if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01147b84((long *)(lVar23 + 0x40),iVar15 + 1,
                   *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
      lVar23 = *in_stack_00000150;
      if (lVar23 == 0) goto LAB_02491464;
    }
    lVar25 = *(long *)(lVar23 + 0x40);
    if (lVar25 == 0) goto LAB_02491464;
    if (*(uint *)(lVar25 + 0x18) <= uVar26)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar25 = lVar25 + (long)(int)uVar26 * 0x18;
    *(long **)(lVar25 + 0x20) = unaff_x19;
    *(uint *)(lVar25 + 0x28) = uStack0000000000000114;
    *(int *)(lVar25 + 0x2c) = iVar14;
    *(uint *)(lVar25 + 0x30) = (iVar14 - uStack0000000000000114) + 1;
    lVar25 = *(long *)(lVar23 + 0x50);
    *(int *)(lVar23 + 0x24) = *(int *)(lVar23 + 0x24) + 1;
    if (lVar25 == 0) goto LAB_02491464;
    if (*(uint *)(lVar25 + 0x18) <= uVar3)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar25 = lVar25 + lVar37 * 0x5c;
    bVar7 = false;
    iStack00000000000000a4 = iStack00000000000000a4 + 1;
    *(int *)(lVar25 + 0x30) = *(int *)(lVar25 + 0x30) + 1;
  }
  else {
    if (!bVar7) {
      uStack0000000000000114 = uVar13;
    }
    if (uVar13 == *in_stack_00000148 - 1) {
      lVar23 = *in_stack_00000150;
      if (lVar23 == 0) goto LAB_02491464;
      lVar25 = *(long *)(lVar23 + 0x40);
      if (lVar25 == 0) goto LAB_02491464;
      uVar26 = *(uint *)(lVar23 + 0x24);
      iVar14 = *(int *)(lVar25 + 0x18);
      if (iVar14 < (int)(uVar26 + 1)) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147b84((long *)(lVar23 + 0x40),iVar14 + 1,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
        lVar23 = *in_stack_00000150;
        if (lVar23 == 0) goto LAB_02491464;
      }
      lVar25 = *(long *)(lVar23 + 0x40);
      if (lVar25 == 0) goto LAB_02491464;
      if (*(uint *)(lVar25 + 0x18) <= uVar26)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar25 = lVar25 + (long)(int)uVar26 * 0x18;
      *(long **)(lVar25 + 0x20) = unaff_x19;
      *(uint *)(lVar25 + 0x28) = uStack0000000000000114;
      *(uint *)(lVar25 + 0x2c) = uVar13;
      *(uint *)(lVar25 + 0x30) = uVar33 - uStack0000000000000114;
      lVar25 = *(long *)(lVar23 + 0x50);
      *(int *)(lVar23 + 0x24) = *(int *)(lVar23 + 0x24) + 1;
      if (lVar25 == 0) goto LAB_02491464;
      if (*(uint *)(lVar25 + 0x18) <= uVar3)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar25 = lVar25 + lVar37 * 0x5c;
      iStack00000000000000a4 = iStack00000000000000a4 + 1;
      *(int *)(lVar25 + 0x30) = *(int *)(lVar25 + 0x30) + 1;
    }
LAB_0248fee0:
    bVar7 = true;
  }
LAB_0248fee8:
  if ((*in_stack_00000150 == 0) || (lVar23 = *(long *)(*in_stack_00000150 + 0x38), lVar23 == 0))
  goto LAB_02491464;
  uVar26 = *(uint *)(lVar23 + 0x18);
  if (uVar26 <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*(byte *)(lVar23 + lVar29 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar10) {
LAB_0248ff18:
      if (uVar26 <= uVar33 - 2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar37 = *unaff_x19;
      uVar71 = *(undefined4 *)(lVar23 + lStack0000000000000128 + -0x330);
      uVar60 = *(undefined4 *)(lVar23 + lStack0000000000000128 + -0x2f8);
LAB_02490474:
      pcVar30 = *(code **)(lVar37 + 0x908);
LAB_0249047c:
      (*pcVar30)(fStack0000000000000054,fStack000000000000004c,fStack0000000000000050,uVar71,
                 fStack00000000000000cc,0,fStack0000000000000058,uVar60);
      puVar9 = System_Threading_Mutex_TypeInfo;
      lVar23 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar23 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar23 = *(long *)puVar9;
      }
LAB_024904cc:
      bVar10 = false;
      fVar50 = 0.0;
      fStack00000000000000cc = *(float *)(*(long *)(lVar23 + 0xb8) + 0x15a8);
      fStack00000000000000c8 = 0.0;
    }
    else {
LAB_024903d8:
      bVar10 = false;
    }
  }
  else {
    lVar23 = lVar23 + lVar29 * 0x178;
    iVar14 = *(int *)(lVar23 + 0x68);
    *(int *)(lVar23 + 0x16c) = iVar39;
    if ((((int)unaff_x19[100] < (int)uVar13) || ((int)unaff_x19[0x65] < (int)uVar3)) ||
       (((int)unaff_x19[0x5b] == 5 && (iVar14 + 1 != (int)unaff_x19[0x66])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar51 = FUN_016f68bc(uVar31,0);
    if ((uVar31 != 0x200b) && ((uVar51 & 1) == 0)) {
      lVar23 = *in_stack_00000150;
      if ((lVar23 == 0) || (lVar37 = *(long *)(lVar23 + 0x38), lVar37 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar37 + 0x18) <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      fVar63 = *(float *)(lVar37 + lVar29 * 0x178 + 0x160);
      if (fVar50 <= fVar63) {
        fVar50 = fVar63;
      }
      if (fStack00000000000000c8 <= ABS(fVar53)) {
        fStack00000000000000c8 = ABS(fVar53);
      }
      if ((float)iVar14 != fStack0000000000000048) {
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar23 = *in_stack_00000150;
          if (lVar23 == 0) goto LAB_02491464;
          lVar37 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
        }
        else {
          lVar37 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
        }
        fStack00000000000000cc = *(float *)(lVar37 + 0x15a8);
      }
      lVar23 = *(long *)(lVar23 + 0x38);
      if (lVar23 == 0) goto LAB_02491464;
      if (*(uint *)(lVar23 + 0x18) <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (unaff_x19[0x1e] == 0) goto LAB_02491464;
      fVar68 = *(float *)(lVar23 + lVar29 * 0x178 + 0x14c);
      fVar63 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
      fVar68 = fVar68 + fVar50 * fVar63;
      fStack0000000000000048 = (float)iVar14;
      if (fVar68 <= fStack00000000000000cc) {
        fStack00000000000000cc = fVar68;
      }
    }
    if (!bVar10) {
      bVar10 = false;
      if ((((uVar31 == 0xd) || ((uVar31 | 1) == 0xb)) || ((int)uVar2 < (int)uVar13)) || (!bVar1))
      goto LAB_024904e8;
      if (uVar13 == uVar2) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar51 = FUN_016fa418(uVar31,0);
        if ((uVar51 & 1) != 0) goto LAB_024903d8;
      }
      if ((*in_stack_00000150 == 0) || (lVar23 = *(long *)(*in_stack_00000150 + 0x38), lVar23 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar23 + 0x18) <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar23 = lVar23 + lVar29 * 0x178;
      fStack0000000000000058 = *(float *)(lVar23 + 0x160);
      fStack0000000000000054 = *(float *)(lVar23 + 0x11c);
      bVar10 = fVar50 != 0.0;
      fVar63 = fStack0000000000000058;
      if (bVar10) {
        fVar63 = fVar50;
      }
      fVar50 = fVar63;
      _bStack000000000000005c = *(uint *)(lVar23 + 0x168);
      fStack0000000000000050 = 0.0;
      fVar63 = fVar53;
      if (bVar10) {
        fVar63 = fStack00000000000000c8;
      }
      fStack000000000000004c = fStack00000000000000cc;
      fStack00000000000000c8 = fVar63;
    }
    if (*in_stack_00000148 == 1) {
      if ((*in_stack_00000150 != 0) && (lVar23 = *(long *)(*in_stack_00000150 + 0x38), lVar23 != 0))
      {
        if (uVar13 < *(uint *)(lVar23 + 0x18)) {
          lVar23 = lVar23 + lVar29 * 0x178;
          lVar37 = *unaff_x19;
          uVar71 = *(undefined4 *)(lVar23 + 0x128);
          uVar60 = *(undefined4 *)(lVar23 + 0x160);
          goto LAB_02490474;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
    if ((uVar13 == uVar6) || ((int)uVar2 <= (int)uVar13)) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar51 = FUN_016f68bc(uVar31,0);
      if ((*in_stack_00000150 != 0) && (lVar23 = *(long *)(*in_stack_00000150 + 0x38), lVar23 != 0))
      {
        if (uVar31 == 0x200b || (uVar51 & 1) != 0) {
          lVar37 = lVar36;
          if (*(uint *)(lVar23 + 0x18) <= uVar2)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        else {
          lVar37 = lVar29;
          if (*(uint *)(lVar23 + 0x18) <= uVar13)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        lVar23 = lVar23 + lVar37 * 0x178;
        uVar71 = *(undefined4 *)(lVar23 + 0x128);
        uVar60 = *(undefined4 *)(lVar23 + 0x160);
        pcVar30 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_0249047c;
      }
      goto LAB_02491464;
    }
    if (!bVar1) {
      if ((*in_stack_00000150 != 0) && (lVar23 = *(long *)(*in_stack_00000150 + 0x38), lVar23 != 0))
      {
        uVar26 = *(uint *)(lVar23 + 0x18);
        goto LAB_0248ff18;
      }
      goto LAB_02491464;
    }
    if ((int)uVar13 < (int)(*in_stack_00000148 - 1)) {
      if ((*in_stack_00000150 == 0) || (lVar23 = *(long *)(*in_stack_00000150 + 0x38), lVar23 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar23 + 0x18) <= uVar33)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar51 = FUN_024a9e4c(_bStack000000000000005c,*(undefined4 *)(lVar23 + lStack0000000000000128)
                            ,0);
      if ((uVar51 & 1) == 0) {
        if ((*in_stack_00000150 != 0) &&
           (lVar23 = *(long *)(*in_stack_00000150 + 0x38), lVar23 != 0)) {
          if (uVar13 < *(uint *)(lVar23 + 0x18)) {
            lVar23 = lVar23 + lVar29 * 0x178;
            (**(code **)(*unaff_x19 + 0x908))
                      (fStack0000000000000054,fStack000000000000004c,fStack0000000000000050,
                       *(undefined4 *)(lVar23 + 0x128),fStack00000000000000cc,0,
                       fStack0000000000000058,*(undefined4 *)(lVar23 + 0x160));
            puVar9 = System_Threading_Mutex_TypeInfo;
            lVar23 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar23 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar23 = *(long *)puVar9;
            }
            goto LAB_024904cc;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        goto LAB_02491464;
      }
    }
    bVar10 = true;
  }
LAB_024904e8:
  if ((*in_stack_00000150 == 0) || (lVar23 = *(long *)(*in_stack_00000150 + 0x38), lVar23 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar23 + 0x18) <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if (lVar34 == 0) goto LAB_02491464;
  uVar26 = *(uint *)(lVar23 + lVar29 * 0x178 + 400);
  fVar63 = (float)FUN_026fd1f0(lVar34 + 0x50,0);
  if ((uVar26 >> 6 & 1) == 0) {
    if (bVar11) {
      if ((*in_stack_00000150 == 0) || (lVar23 = *(long *)(*in_stack_00000150 + 0x38), lVar23 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar23 + 0x18) <= uVar33 - 2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar71 = *(undefined4 *)(lVar23 + lStack0000000000000128 + -0x330);
      pcVar30 = *(code **)(*unaff_x19 + 0x908);
      fVar57 = in_stack_00000080._4_4_ * fVar63 +
               *(float *)(lVar23 + lStack0000000000000128 + -0x30c);
LAB_02490a68:
      (*pcVar30)(in_stack_00000078._4_4_,in_stack_00000068._4_4_,uStack0000000000000060,uVar71,
                 fVar57,0,in_stack_00000080._4_4_,in_stack_00000080._4_4_);
    }
LAB_02490a9c:
    bVar11 = false;
  }
  else {
    lVar23 = *in_stack_00000150;
    if ((lVar23 == 0) || (lVar37 = *(long *)(lVar23 + 0x38), lVar37 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar37 + 0x18) <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(int *)(lVar37 + lVar29 * 0x178 + 0x174) = iVar39;
    if ((((int)unaff_x19[100] < (int)uVar13) || ((int)unaff_x19[0x65] < (int)uVar3)) ||
       (((int)unaff_x19[0x5b] == 5 &&
        (*(int *)(lVar37 + lVar29 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar31 == 0xd) || ((uVar31 | 1) == 0xb)) || ((int)uVar2 < (int)uVar13)) ||
       (bVar11 || !bVar1)) {
LAB_02490668:
      if (!bVar11) goto LAB_02490a9c;
    }
    else {
      if (uVar13 == uVar2) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar51 = FUN_016fa418(uVar31,0);
        if ((uVar51 & 1) != 0) goto LAB_02490668;
        lVar23 = *in_stack_00000150;
        if (lVar23 == 0) goto LAB_02491464;
      }
      lVar23 = *(long *)(lVar23 + 0x38);
      if (lVar23 == 0) goto LAB_02491464;
      if (*(uint *)(lVar23 + 0x18) <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar23 = lVar23 + lVar29 * 0x178;
      fStack0000000000000038 = *(float *)(lVar23 + 0x60);
      in_stack_00000080._4_4_ = *(float *)(lVar23 + 0x160);
      fStack0000000000000034 = *(float *)(lVar23 + 0x14c);
      in_stack_00000078._4_4_ = *(float *)(lVar23 + 0x11c);
      in_stack_00000068._4_4_ = fVar63 * in_stack_00000080._4_4_ + fStack0000000000000034;
      uStack0000000000000060 = 0;
    }
    uVar26 = *in_stack_00000148;
    if (uVar26 == 1) {
      if (*in_stack_00000150 != 0) {
        lVar23 = *(long *)(*in_stack_00000150 + 0x38);
joined_r0x024907c8:
        if (lVar23 != 0) {
          if (uVar13 < *(uint *)(lVar23 + 0x18)) {
            lVar23 = lVar23 + lVar29 * 0x178;
            lVar36 = *unaff_x19;
            uVar71 = *(undefined4 *)(lVar23 + 0x128);
            fVar57 = *(float *)(lVar23 + 0x14c);
LAB_024907e8:
            pcVar30 = *(code **)(lVar36 + 0x908);
LAB_02490a64:
            fVar57 = fVar63 * in_stack_00000080._4_4_ + fVar57;
            goto LAB_02490a68;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
      }
      goto LAB_02491464;
    }
    if (uVar13 == uVar6) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar51 = FUN_016f68bc(uVar31,0);
      if ((*in_stack_00000150 != 0) && (lVar23 = *(long *)(*in_stack_00000150 + 0x38), lVar23 != 0))
      {
        uVar26 = *(uint *)(lVar23 + 0x18);
        if (uVar31 == 0x200b || (uVar51 & 1) != 0) {
          if (uVar26 <= uVar2)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        else {
LAB_02490a40:
          lVar36 = lVar29;
          if (uVar26 <= uVar13)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
LAB_02490a48:
        lVar23 = lVar23 + lVar36 * 0x178;
        fVar57 = *(float *)(lVar23 + 0x14c);
        uVar71 = *(undefined4 *)(lVar23 + 0x128);
        pcVar30 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_02490a64;
      }
      goto LAB_02491464;
    }
    if ((int)uVar13 < (int)uVar26) {
      lVar23 = *in_stack_00000150;
      if ((lVar23 != 0) && (lVar37 = *(long *)(lVar23 + 0x38), lVar37 != 0)) {
        if (uVar33 < *(uint *)(lVar37 + 0x18)) {
          if (*(float *)(lVar37 + lStack0000000000000128 + -0x108) == fStack0000000000000038) {
            fVar68 = *(float *)(lVar37 + lStack0000000000000128 + -0x1c);
            if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar51 = FUN_024aa280(fVar57 + fVar68,fStack0000000000000034,0);
            if ((uVar51 & 1) != 0) {
              uVar26 = *in_stack_00000148;
              goto LAB_024908ec;
            }
            lVar23 = *in_stack_00000150;
            if (lVar23 == 0) goto LAB_02491464;
          }
          lVar23 = *(long *)(lVar23 + 0x38);
          if (lVar23 != 0) {
            uVar26 = *(uint *)(lVar23 + 0x18);
            if ((int)uVar13 <= (int)uVar2) goto LAB_02490a40;
            if (uVar2 < uVar26) goto LAB_02490a48;
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          }
          goto LAB_02491464;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
LAB_024908ec:
    if ((int)uVar13 < (int)uVar26) {
      iVar14 = FUN_02681c0c(lVar34,0);
      if (*(uint *)(lVar22 + 0x18) <= uVar33)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar23 = *(long *)(lVar22 + lStack0000000000000128 + -0x130);
      if (lVar23 == 0) goto LAB_02491464;
      iVar15 = FUN_02681c0c(lVar23,0);
      if (iVar14 != iVar15) {
        if (*in_stack_00000150 != 0) {
          lVar23 = *(long *)(*in_stack_00000150 + 0x38);
          goto joined_r0x024907c8;
        }
        goto LAB_02491464;
      }
    }
    if (!bVar1) {
      if ((*in_stack_00000150 != 0) && (lVar23 = *(long *)(*in_stack_00000150 + 0x38), lVar23 != 0))
      {
        if (uVar33 - 2 < *(uint *)(lVar23 + 0x18)) {
          lVar36 = *unaff_x19;
          uVar71 = *(undefined4 *)(lVar23 + lStack0000000000000128 + -0x330);
          fVar57 = *(float *)(lVar23 + lStack0000000000000128 + -0x30c);
          goto LAB_024907e8;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
    bVar11 = true;
  }
  if ((*in_stack_00000150 == 0) || (lVar23 = *(long *)(*in_stack_00000150 + 0x38), lVar23 == 0))
  goto LAB_02491464;
  uVar26 = (uint)*(undefined8 *)(lVar23 + 0x18);
  if (uVar26 <= uVar13)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*(byte *)(lVar23 + lVar29 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar8) {
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,
                 fStack0000000000000098,in_stack_000000a0,uStack0000000000000094);
    }
LAB_02490b04:
    bVar8 = false;
  }
  else {
    if ((((int)unaff_x19[100] < (int)uVar13) || ((int)unaff_x19[0x65] < (int)uVar3)) ||
       (((int)unaff_x19[0x5b] == 5 &&
        (*(int *)(lVar23 + lVar29 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar8) {
      if ((((uVar31 == 0xd) || ((uVar31 | 1) == 0xb)) || ((int)uVar2 < (int)uVar13)) || (!bVar1))
      goto LAB_02490b04;
      if (uVar13 == uVar2) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar51 = FUN_016fa418(uVar31,0);
        if ((uVar51 & 1) != 0) goto LAB_02490b04;
      }
      puVar9 = System_Threading_Mutex_TypeInfo;
      lVar36 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar36 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar36 = *(long *)puVar9;
      }
      if ((*in_stack_00000150 == 0) || (lVar23 = *(long *)(*in_stack_00000150 + 0x38), lVar23 == 0))
      goto LAB_02491464;
      uVar26 = (uint)*(undefined8 *)(lVar23 + 0x18);
      if (uVar26 <= uVar13)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar36 = *(long *)(lVar36 + 0xb8);
      lVar37 = lVar23 + lVar29 * 0x178;
      in_stack_00001798 = *(undefined8 *)(lVar37 + 0x184);
      in_stack_00001790 = *(undefined8 *)(lVar37 + 0x17c);
      fStack00000000000000a8 = *(float *)(lVar36 + 0x1598);
      in_stack_000017a0 = *(float *)(lVar37 + 0x18c);
      fStack00000000000000ac = *(float *)(lVar36 + 0x159c);
      fStack0000000000000098 = *(float *)(lVar36 + 0x15a0);
      in_stack_000000a0 = *(float *)(lVar36 + 0x15a4);
      uStack0000000000000094 = 0;
    }
    if (uVar26 <= uVar13)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar23 = lVar23 + lVar29 * 0x178;
    fVar63 = *(float *)(lVar23 + 0x128);
    fVar45 = *(float *)(lVar23 + 0x188);
    uVar17 = *(undefined8 *)(lVar23 + 0x17c);
    fVar44 = *(float *)(lVar23 + 0x184);
    uVar16 = *(undefined8 *)(lVar23 + 0x184);
    fVar69 = *(float *)(lVar23 + 0x18c);
    fVar57 = *(float *)(lVar23 + 0x11c);
    fVar68 = *(float *)(lVar23 + 0x148);
    fVar43 = *(float *)(lVar23 + 0x150);
    in_stack_00000158 = uVar17;
    fStack0000000000000160 = fVar44;
    fStack0000000000000164 = fVar45;
    in_stack_00000168 = fVar69;
    in_stack_00000170 = in_stack_00001790;
    in_stack_00000178 = in_stack_00001798;
    in_stack_00000180 = in_stack_000017a0;
    uVar51 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
    lVar23 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
    if ((uVar51 & 1) == 0) {
      if (*(int *)(lVar23 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar23);
      }
      fVar63 = fVar63 + (float)in_stack_00001798;
      fVar57 = fVar57 - (float)((ulong)in_stack_00001790 >> 0x20);
      fVar68 = fVar68 + (float)((ulong)in_stack_00001798 >> 0x20);
      if (fVar57 <= fStack00000000000000a8) {
        fStack00000000000000a8 = fVar57;
      }
      if (fVar43 - in_stack_000017a0 <= fStack00000000000000ac) {
        fStack00000000000000ac = fVar43 - in_stack_000017a0;
      }
      if (fStack0000000000000098 <= fVar63) {
        fStack0000000000000098 = fVar63;
      }
      if (in_stack_000000a0 <= fVar68) {
        in_stack_000000a0 = fVar68;
      }
    }
    else {
      if (*(int *)(lVar23 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar23);
      }
      fVar57 = (fVar57 + (fStack0000000000000098 - (float)in_stack_00001798)) * 0.5;
      if (fVar43 <= fStack00000000000000ac) {
        fStack00000000000000ac = fVar43;
      }
      if (in_stack_000000a0 <= fVar68) {
        in_stack_000000a0 = fVar68;
      }
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,fVar57,
                 in_stack_000000a0,uStack0000000000000094);
      fStack00000000000000ac = fVar43 - fVar69;
      fStack0000000000000098 = fVar63 + fVar44;
      uStack0000000000000094 = 0;
      in_stack_000000a0 = fVar68 + fVar45;
      fStack00000000000000a8 = fVar57;
      in_stack_00001790 = uVar17;
      in_stack_00001798 = uVar16;
      in_stack_000017a0 = fVar69;
    }
    if (((*in_stack_00000148 == 1) || (uVar13 == uVar6)) ||
       (((int)uVar2 <= (int)uVar13 || (!bVar1)))) {
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,
                 fStack0000000000000098,in_stack_000000a0,uStack0000000000000094);
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
  }
  uVar13 = *in_stack_00000148;
  iVar12 = iVar12 + 1;
  lStack0000000000000128 = lStack0000000000000128 + 0x178;
  bVar1 = (int)uVar13 <= (int)uVar33;
  uVar26 = uVar3;
  uVar33 = uVar33 + 1;
  if (bVar1) goto LAB_02491038;
  goto LAB_0248ef74;
LAB_02491038:
  lVar22 = *in_stack_00000150;
  if (lVar22 != 0) {
    iVar39 = uVar3 + 1;
    plVar27 = (long *)PTR_DAT_033ed410;
LAB_02491068:
    *(uint *)(lVar22 + 0x18) = uVar13;
    lVar23 = unaff_x19[0xd3];
    *(int *)(lVar22 + 0x2c) = iVar39;
    iVar39 = iStack00000000000000a4;
    if ((int)uVar13 < 1) {
      iVar39 = 1;
    }
    if (iStack00000000000000a4 == 0) {
      iVar39 = 1;
    }
    *(int *)(lVar22 + 0x1c) = (int)lVar23;
    *(int *)(lVar22 + 0x24) = iVar39;
    *(int *)(lVar22 + 0x30) = (int)unaff_x19[0x95] + 1;
    if (((int)unaff_x19[0x62] != 0xff) ||
       (uVar51 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar51 & 1) == 0)) {
LAB_02491468:
      lVar22 = *(long *)Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__;
LAB_02491474:
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_024a942c();
      return;
    }
    lVar22 = unaff_x19[0xda];
    if (lVar22 != 0) {
      (**(code **)(lVar22 + 0x18))
                (*(undefined8 *)(lVar22 + 0x40),*in_stack_00000150,*(undefined8 *)(lVar22 + 0x28));
    }
    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
      if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x60), lVar22 == 0))
      goto LAB_02491464;
      if (*(int *)(*plVar27 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(int *)(lVar22 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      FUN_024e8000(lVar22 + 0x20,1,0);
    }
    if (unaff_x19[0x73] != 0) {
      UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
                (unaff_x19[0x73],0);
      if ((unaff_x19[0x6c] != 0) && (lVar22 = *(long *)(unaff_x19[0x6c] + 0x60), lVar22 != 0)) {
        if (*(int *)(lVar22 + 0x18) == 0) {
UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (unaff_x19[0x73] != 0) {
          FUN_0266b9c4(unaff_x19[0x73],*(undefined8 *)(lVar22 + 0x30),0);
          if ((unaff_x19[0x6c] != 0) && (lVar22 = *(long *)(unaff_x19[0x6c] + 0x60), lVar22 != 0)) {
            if (*(int *)(lVar22 + 0x18) == 0)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            if (unaff_x19[0x73] != 0) {
              FUN_0266bbc8(unaff_x19[0x73],*(undefined8 *)(lVar22 + 0x48),0);
              if ((unaff_x19[0x6c] != 0) &&
                 (lVar22 = *(long *)(unaff_x19[0x6c] + 0x60), lVar22 != 0)) {
                if (*(int *)(lVar22 + 0x18) == 0)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                if (unaff_x19[0x73] != 0) {
                  FUN_0266bc74(unaff_x19[0x73],*(undefined8 *)(lVar22 + 0x50),0);
                  if ((unaff_x19[0x6c] != 0) &&
                     (lVar22 = *(long *)(unaff_x19[0x6c] + 0x60), lVar22 != 0)) {
                    if (*(int *)(lVar22 + 0x18) == 0)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    if (unaff_x19[0x73] != 0) {
                      FUN_0266c1dc(unaff_x19[0x73],*(undefined8 *)(lVar22 + 0x58),0);
                      if (unaff_x19[0x73] != 0) {
                        FUN_0266ed90(unaff_x19[0x73],0);
                        lVar22 = *in_stack_00000150;
                        if (lVar22 != 0) {
                          lVar36 = 0;
                          lVar23 = 0;
                          do {
                            uVar51 = lVar23 + 1;
                            if ((long)*(int *)(lVar22 + 0x34) <= (long)uVar51) goto LAB_02491468;
                            lVar22 = *(long *)(lVar22 + 0x60);
                            if (lVar22 == 0) break;
                            if (*(int *)(*plVar27 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            if (*(uint *)(lVar22 + 0x18) <= uVar51)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            FUN_024e7ecc(lVar22 + lVar36 + 0x70,0);
                            lVar22 = unaff_x19[0xe0];
                            if (lVar22 == 0) break;
                            if (*(uint *)(lVar22 + 0x18) <= uVar51)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            uVar16 = *(undefined8 *)(lVar22 + lVar23 * 8 + 0x28);
                            if (*(int *)(*plVar42 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar54 = FUN_0268b4e0(uVar16,0,0);
                            if ((uVar54 & 1) == 0) {
                              if (*(int *)((long)unaff_x19 + 0x314) != 0) {
                                if ((*in_stack_00000150 == 0) ||
                                   (lVar22 = *(long *)(*in_stack_00000150 + 0x60), lVar22 == 0))
                                break;
                                if (*(int *)(*plVar27 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                if (*(uint *)(lVar22 + 0x18) <= uVar51)
                                goto 
                                UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                                ;
                                FUN_024e8000(lVar22 + lVar36 + 0x70,1,0);
                              }
                              lVar22 = unaff_x19[0xe0];
                              if (lVar22 == 0) break;
                              if (*(uint *)(lVar22 + 0x18) <= uVar51)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar22 = *(long *)(lVar22 + lVar23 * 8 + 0x28);
                              if (lVar22 == 0) break;
                              lVar22 = FUN_024eefa0(lVar22,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar29 = *(long *)(*in_stack_00000150 + 0x60), lVar29 == 0))
                              break;
                              if (*(uint *)(lVar29 + 0x18) <= uVar51)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar22 == 0) break;
                              FUN_0266b9c4(lVar22,*(undefined8 *)(lVar29 + lVar36 + 0x80),0);
                              lVar22 = unaff_x19[0xe0];
                              if (lVar22 == 0) break;
                              if (*(uint *)(lVar22 + 0x18) <= uVar51)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar22 = *(long *)(lVar22 + lVar23 * 8 + 0x28);
                              if (lVar22 == 0) break;
                              lVar22 = FUN_024eefa0(lVar22,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar29 = *(long *)(*in_stack_00000150 + 0x60), lVar29 == 0))
                              break;
                              if (*(uint *)(lVar29 + 0x18) <= uVar51)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar22 == 0) break;
                              FUN_0266bbc8(lVar22,*(undefined8 *)(lVar29 + lVar36 + 0x98),0);
                              lVar22 = unaff_x19[0xe0];
                              if (lVar22 == 0) break;
                              if (*(uint *)(lVar22 + 0x18) <= uVar51)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar22 = *(long *)(lVar22 + lVar23 * 8 + 0x28);
                              if (lVar22 == 0) break;
                              lVar22 = FUN_024eefa0(lVar22,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar29 = *(long *)(*in_stack_00000150 + 0x60), lVar29 == 0))
                              break;
                              if (*(uint *)(lVar29 + 0x18) <= uVar51)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar22 == 0) break;
                              FUN_0266bc74(lVar22,*(undefined8 *)(lVar29 + lVar36 + 0xa0),0);
                              lVar22 = unaff_x19[0xe0];
                              if (lVar22 == 0) break;
                              if (*(uint *)(lVar22 + 0x18) <= uVar51)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar22 = *(long *)(lVar22 + lVar23 * 8 + 0x28);
                              if (lVar22 == 0) break;
                              lVar22 = FUN_024eefa0(lVar22,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar29 = *(long *)(*in_stack_00000150 + 0x60), lVar29 == 0))
                              break;
                              if (*(uint *)(lVar29 + 0x18) <= uVar51)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar22 == 0) break;
                              FUN_0266c1dc(lVar22,*(undefined8 *)(lVar29 + lVar36 + 0xa8),0);
                              lVar22 = unaff_x19[0xe0];
                              if (lVar22 == 0) break;
                              if (*(uint *)(lVar22 + 0x18) <= uVar51)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar22 = *(long *)(lVar22 + lVar23 * 8 + 0x28);
                              if ((lVar22 == 0) || (lVar22 = FUN_024eefa0(lVar22,0), lVar22 == 0))
                              break;
                              FUN_0266ed90(lVar22,0);
                            }
                            lVar22 = *in_stack_00000150;
                            lVar23 = lVar23 + 1;
                            lVar36 = lVar36 + 0x50;
                          } while (lVar22 != 0);
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


