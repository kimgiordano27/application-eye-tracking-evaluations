/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRInteractorExtensions$$IsBlockedByInteractionWithinGroup
ENTRY_POINT: 0248dd9c
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

void UnityEngine_XR_Interaction_Toolkit_XRInteractorExtensions__IsBlockedByInteractionWithinGroup
               (long param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  bool bVar5;
  byte bVar6;
  double __x;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  int *piVar19;
  ulong uVar20;
  undefined1 uVar21;
  char cVar22;
  uint uVar23;
  int in_w8;
  long lVar24;
  undefined4 *puVar25;
  long lVar26;
  uint uVar27;
  long lVar28;
  float *pfVar29;
  code *pcVar30;
  uint uVar31;
  uint uVar32;
  float *pfVar33;
  uint uVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long *unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  long *plVar39;
  long *unaff_x25;
  long lVar40;
  uint *unaff_x26;
  uint uVar41;
  long *unaff_x27;
  long *plVar42;
  undefined8 *unaff_x28;
  long *unaff_x29;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  double dVar52;
  ulong uVar53;
  float fVar54;
  float fVar55;
  undefined8 uVar56;
  float fVar57;
  undefined4 uVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float unaff_s8;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float unaff_s12;
  float fVar68;
  float fVar69;
  ulong unaff_d13;
  float fVar70;
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
  uint uStack000000000000005c;
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
  float fStack00000000000000c4;
  float in_stack_000000c8;
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
  
code_r0x0248dd9c:
  if (in_w8 == 0) {
    thunk_FUN_00d32864();
    param_1 = *unaff_x22;
  }
  uVar56 = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x15a8);
  *(float *)(unaff_x19 + 0x99) = unaff_s8;
  uVar53 = NEON_rev64(uVar56,4);
  unaff_x19[0x98] = uVar53;
  *(float *)(unaff_x19 + 199) =
       *(float *)(unaff_x19 + 0x80) + 0.0 + *(float *)((long)unaff_x19 + 0x404);
  FUN_024d69d4();
  FUN_024d69d4();
  *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
  bVar5 = true;
  bVar6 = 1;
LAB_0248ab98:
  fVar59 = (float)unaff_d13;
  in_stack_00001788 = in_stack_00001788 + 1;
  lVar24 = unaff_x19[0x8e];
  if (lVar24 != 0) {
    if ((int)in_stack_00001788 < (int)*(uint *)(lVar24 + 0x18)) {
      if (*(uint *)(lVar24 + 0x18) <= in_stack_00001788)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar12 = *(uint *)(lVar24 + (long)(int)in_stack_00001788 * 0xc + 0x20);
      if (uVar12 == 0) goto LAB_0248e4dc;
      if (5 < in_stack_00000140._4_4_) {
        uVar56 = FUN_0176eb1c(&stack0x000017bc,0);
        uVar16 = FUN_0176eb1c(&stack0x00001788,0);
        uVar56 = FUN_0160073c(*(undefined8 *)UnityEngine_Rendering_Universal_DebugValidationMode_var
                              ,uVar56,*(undefined8 *)
                                       Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                              ,uVar16,0);
        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
          thunk_FUN_00d32864(*unaff_x29);
        }
        FUN_026610e4(uVar56,0);
        in_stack_000017a8 = CONCAT44(3,*unaff_x26);
        unaff_x25 = in_stack_00000150;
      }
      if ((*(char *)((long)unaff_x19 + 0x2fa) != '\0') && (uVar12 == 0x3c)) goto code_r0x0248a9ac;
      if ((*unaff_x25 != 0) && (lVar24 = *(long *)(*unaff_x25 + 0x38), lVar24 != 0)) {
        if (*unaff_x26 < *(uint *)(lVar24 + 0x18)) {
          lVar24 = lVar24 + (int)*unaff_x26 * unaff_x21;
          *(undefined4 *)((long)unaff_x19 + 0x63c) = *(undefined4 *)(lVar24 + 0x2c);
          *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar24 + 0x58);
          unaff_x19[0x1f] = *(long *)(lVar24 + 0x38);
          goto 
          UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager__GetInputAction
          ;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
LAB_0248e4dc:
    fVar59 = (float)uVar53;
    if (((char)unaff_x19[0x46] != '\0') &&
       (fVar59 = DAT_02956ccc,
       DAT_02956ccc < *(float *)((long)unaff_x19 + 0x234) - *(float *)(unaff_x19 + 0x47))) {
      fVar59 = *(float *)((long)unaff_x19 + 0x1dc);
      fVar51 = *(float *)((long)unaff_x19 + 0x24c);
      if ((fVar59 < fVar51) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
        if (*(float *)((long)unaff_x19 + 0x2cc) < *(float *)(unaff_x19 + 0x59) / 100.0) {
          *(undefined4 *)((long)unaff_x19 + 0x2cc) = 0;
        }
        fVar70 = (*(float *)((long)unaff_x19 + 0x234) - fVar59) * 0.5;
        if (fVar70 <= DAT_028aa298) {
          fVar70 = DAT_028aa298;
        }
        *(float *)(unaff_x19 + 0x47) = fVar59;
        fVar70 = (fVar59 + fVar70) * 20.0 + 0.5;
        fVar59 = DAT_02958220;
        if (fVar70 != INFINITY) {
          fVar59 = (float)(int)fVar70 / 20.0;
        }
        if (fVar51 <= fVar59) {
          fVar59 = fVar51;
        }
        goto LAB_0248e598;
      }
    }
    *(undefined1 *)((long)unaff_x19 + 0x244) = 1;
    if ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c)) {
      uVar56 = FUN_0176eb1c(_fStack0000000000000038,0);
      uVar16 = FUN_017840ac(in_stack_00000040,0);
      uVar56 = FUN_0160073c(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlah_s16__,
                            uVar56,*(undefined8 *)
                                    Method_UnityEngine_GameObject_GetComponents<Component>__,uVar16,
                            0);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_00d32864(*unaff_x29);
      }
      FUN_02660dac(uVar56,0);
    }
    puVar7 = Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__;
    if ((*unaff_x26 == 0) || ((*unaff_x26 == 1 && (in_stack_000017bc == 3)))) {
      (**(code **)(*unaff_x19 + 0x958))();
      lVar24 = *(long *)puVar7;
      goto LAB_02491474;
    }
    lVar24 = *unaff_x22;
    if (*(int *)(lVar24 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar24 = *unaff_x22;
    }
    plVar39 = (long *)PTR_DAT_033ed410;
    lVar24 = **(long **)(lVar24 + 0xb8);
    if (lVar24 == 0) goto LAB_02491464;
    if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0xd0))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    iVar13 = *(int *)(lVar24 + (long)(int)*(uint *)(unaff_x19 + 0xd0) * 0x38 + 0x54) << 2;
    if ((*unaff_x25 == 0) || (lVar24 = *(long *)(*unaff_x25 + 0x60), lVar24 == 0))
    goto LAB_02491464;
    if (*(int *)(*(long *)PTR_DAT_033ed410 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (*(int *)(lVar24 + 0x18) == 0)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    FUN_024e7d94(lVar24 + 0x20,0,0);
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774d76 = '\x01';
    }
    iVar11 = (int)unaff_x19[0x4d];
    fStack00000000000000c4 =
         **(float **)
           (*(long *)Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
           + 0xb8);
    in_stack_000000b8 =
         *(undefined8 *)
          (*(float **)
            (*(long *)
              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ + 0xb8
            ) + 1);
    lVar24 = unaff_x19[0xea];
    in_stack_00000088 = (float *)in_stack_000000b8;
    fStack0000000000000090 = fStack00000000000000c4;
    if (iVar11 < 0x401) {
      if (iVar11 == 0x100) {
        if (lVar24 == 0) goto LAB_02491464;
        if (*(uint *)(lVar24 + 0x18) < 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        uVar56 = *(undefined8 *)(lVar24 + 0x30);
        if ((int)unaff_x19[0x5b] == 5) {
          if ((*unaff_x25 == 0) || (lVar28 = *(long *)(*unaff_x25 + 0x58), lVar28 == 0))
          goto LAB_02491464;
          if (*(uint *)(lVar28 + 0x18) <= uStack0000000000000030)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          fVar59 = *(float *)(lVar28 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
        }
        else {
          fVar59 = *(float *)(unaff_x19 + 0x96);
        }
        fStack0000000000000090 = fStack000000000000002c + 0.0 + *(float *)(lVar24 + 0x2c);
        fVar59 = (0.0 - fVar59) - fStack0000000000000020;
      }
      else if (iVar11 == 0x200) {
        if (lVar24 == 0) goto LAB_02491464;
        if ((*(int *)(lVar24 + 0x18) == 1) || (*(int *)(lVar24 + 0x18) == 0))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fStack0000000000000090 = (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
        uVar56 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar24 + 0x24) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >> 0x20)) * 0.5,
                          ((float)*(undefined8 *)(lVar24 + 0x24) +
                          (float)*(undefined8 *)(lVar24 + 0x30)) * 0.5);
        if ((int)unaff_x19[0x5b] == 5) {
          if ((*unaff_x25 == 0) || (lVar24 = *(long *)(*unaff_x25 + 0x58), lVar24 == 0))
          goto LAB_02491464;
          if (*(uint *)(lVar24 + 0x18) <= uStack0000000000000030)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          lVar24 = lVar24 + (long)(int)uStack0000000000000030 * 0x14;
          fStack0000000000000090 = fStack000000000000002c + 0.0 + fStack0000000000000090;
          fVar59 = ((fStack0000000000000020 + *(float *)(lVar24 + 0x28) + *(float *)(lVar24 + 0x30))
                   - fStack0000000000000024) * -0.5 + 0.0;
        }
        else {
          fStack0000000000000090 = fStack000000000000002c + 0.0 + fStack0000000000000090;
          fVar59 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x96) + in_stack_000017b8) -
                   fStack0000000000000024) * -0.5 + 0.0;
        }
      }
      else {
        if (iVar11 != 0x400) goto LAB_0248eb64;
        if (lVar24 == 0) goto LAB_02491464;
        if (*(int *)(lVar24 + 0x18) == 0)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        uVar56 = *(undefined8 *)(lVar24 + 0x24);
        if ((int)unaff_x19[0x5b] == 5) {
          if ((*unaff_x25 == 0) || (lVar28 = *(long *)(*unaff_x25 + 0x58), lVar28 == 0))
          goto LAB_02491464;
          if (*(uint *)(lVar28 + 0x18) <= uStack0000000000000030)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          in_stack_000017b8 = *(float *)(lVar28 + (long)(int)uStack0000000000000030 * 0x14 + 0x30);
        }
        fStack0000000000000090 = fStack000000000000002c + 0.0 + *(float *)(lVar24 + 0x20);
        fVar59 = fStack0000000000000024 + (0.0 - in_stack_000017b8);
      }
      in_stack_00000088 =
           (float *)CONCAT44((float)((ulong)uVar56 >> 0x20) + 0.0,(float)uVar56 + fVar59);
    }
    else if (iVar11 == 0x800) {
      if (lVar24 == 0) goto LAB_02491464;
      if ((*(int *)(lVar24 + 0x18) == 1) || (*(int *)(lVar24 + 0x18) == 0))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      fVar59 = ((float)*(undefined8 *)(lVar24 + 0x24) + (float)*(undefined8 *)(lVar24 + 0x30)) * 0.5
      ;
      fStack0000000000000090 =
           fStack000000000000002c + 0.0 +
           (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
      in_stack_00000088 =
           (float *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar24 + 0x24) >> 0x20) +
                             (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >> 0x20)) * 0.5 + 0.0,
                             fVar59 + 0.0);
    }
    else {
      if (iVar11 == 0x1000) {
        if (lVar24 == 0) goto LAB_02491464;
        if ((*(int *)(lVar24 + 0x18) == 1) || (*(int *)(lVar24 + 0x18) == 0))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fVar59 = (float)*(undefined8 *)(lVar24 + 0x24) + (float)*(undefined8 *)(lVar24 + 0x30);
        fVar51 = (float)((ulong)*(undefined8 *)(lVar24 + 0x24) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >> 0x20);
        fStack0000000000000020 =
             fStack0000000000000020 + *(float *)(unaff_x19 + 0x9c) + *(float *)(unaff_x19 + 0x9b);
        fStack0000000000000090 =
             fStack000000000000002c + 0.0 +
             (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
      }
      else {
        if (iVar11 != 0x2000) goto LAB_0248eb64;
        if (lVar24 == 0) goto LAB_02491464;
        if ((*(int *)(lVar24 + 0x18) == 1) || (*(int *)(lVar24 + 0x18) == 0))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fVar59 = (float)*(undefined8 *)(lVar24 + 0x24) + (float)*(undefined8 *)(lVar24 + 0x30);
        fVar51 = (float)((ulong)*(undefined8 *)(lVar24 + 0x24) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >> 0x20);
        fStack0000000000000020 = *(float *)((long)unaff_x19 + 0x4b4) - fStack0000000000000020;
        fStack0000000000000090 =
             fStack000000000000002c + 0.0 +
             (*(float *)(lVar24 + 0x20) + *(float *)(lVar24 + 0x2c)) * 0.5;
      }
      fVar59 = fVar59 * 0.5;
      in_stack_00000088 =
           (float *)CONCAT44(fVar51 * 0.5 + 0.0,
                             fVar59 + (0.0 - (fStack0000000000000020 - fStack0000000000000024) * 0.5
                                      ));
    }
LAB_0248eb64:
    lVar24 = FUN_0249b7f8();
    if (lVar24 == 0) goto LAB_02491464;
    FUN_026a125c(lVar24,0);
    __x = DAT_028aa048;
    *(float *)((long)unaff_x19 + 0x6dc) = fVar59;
    dVar52 = modf(__x,(double *)&stack0x00000880);
    puVar7 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
    if (dVar52 == 0.5) {
      fVar51 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
      if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
        fVar51 = fVar51 + 1.0;
      }
    }
    else {
      fVar51 = 255.0;
    }
    dVar52 = modf(__x,(double *)&stack0x00000880);
    if (dVar52 == 0.5) {
      fVar70 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
      if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
        fVar70 = fVar70 + 1.0;
      }
    }
    else {
      fVar70 = 255.0;
    }
    dVar52 = modf(__x,(double *)&stack0x00000880);
    if (dVar52 == 0.5) {
      fVar43 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
      if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
        fVar43 = fVar43 + 1.0;
      }
    }
    else {
      fVar43 = 255.0;
    }
    dVar52 = modf(__x,(double *)&stack0x00000880);
    if (dVar52 == 0.5) {
      fVar64 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
      if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
        fVar64 = fVar64 + 1.0;
      }
    }
    else {
      fVar64 = 255.0;
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
    lVar24 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
    if (*(int *)(lVar24 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar24 = *(long *)puVar7;
    }
    puVar25 = *(undefined4 **)(lVar24 + 0xb8);
    UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
              (*puVar25,puVar25[1],puVar25[2],puVar25[3],&stack0x00001790,0x4000ffff,0);
    if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar24 = *in_stack_00000150;
    if (lVar24 == 0) goto LAB_02491464;
    uVar12 = *in_stack_00000148;
    if ((int)uVar12 < 1) {
      iStack00000000000000a4 = 0;
      iVar13 = 0;
      plVar42 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      goto LAB_02491068;
    }
    lVar24 = *(long *)(lVar24 + 0x38);
    if (lVar24 == 0) goto LAB_02491464;
    iVar11 = 0;
    bVar10 = false;
    bVar9 = false;
    bVar8 = false;
    iStack00000000000000a4 = 0;
    fStack0000000000000024 = 0.0;
    bVar5 = false;
    uStack0000000000000114 = 0;
    fStack0000000000000048 = 0.0;
    fStack00000000000000cc =
         *(float *)(*(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8) + 0x15a8);
    in_stack_000000c8 = 0.0;
    fStack0000000000000054 = fStack00000000000000a8;
    fStack0000000000000058 = 0.0;
    fStack0000000000000038 = 0.0;
    in_stack_00000080._4_4_ = 0.0;
    fStack0000000000000034 = 0.0;
    uStack000000000000005c =
         (int)fVar51 & 0xffU | ((int)fVar70 & 0xffU) << 8 | ((int)fVar43 & 0xffU) << 0x10 |
         (int)fVar64 << 0x18;
    fVar70 = 0.0;
    fVar51 = 0.0;
    lStack0000000000000128 = 0x2e0;
    fStack0000000000000098 = fStack00000000000000a8;
    in_stack_000000a0 = fStack00000000000000ac;
    fStack000000000000004c = fStack00000000000000ac;
    fStack0000000000000050 = (float)uStack0000000000000094;
    in_stack_00000078._4_4_ = fStack00000000000000a8;
    in_stack_00000068._4_4_ = fStack00000000000000ac;
    uStack0000000000000060 = uStack0000000000000094;
    uVar27 = 0;
    uVar23 = 1;
    goto LAB_0248ef74;
  }
  goto LAB_02491464;
code_r0x0248a9ac:
  *(undefined1 *)((long)unaff_x19 + 0x429) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
  uVar17 = FUN_024d0688();
  if (((uVar17 & 1) != 0) &&
     (in_stack_00001788 = in_stack_0000176c, in_stack_000017bc = uVar12,
     *(int *)((long)unaff_x19 + 0x63c) == 0)) goto LAB_0248ab98;

  UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager__GetInputAction
  :
  if ((unaff_x19[0x6c] == 0) || (lVar24 = *(long *)(unaff_x19[0x6c] + 0x38), lVar24 == 0))
  goto LAB_02491464;
  uVar27 = *unaff_x26;
  if (*(uint *)(lVar24 + 0x18) <= uVar27)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar40 = (long)(int)uVar27;
  cVar22 = *(char *)(lVar24 + lVar40 * unaff_x21 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x429) = 0;
  lVar28 = unaff_x19[0x23];
  if ((uint)in_stack_000017a8 == uVar27) {
    uVar12 = (uint)((ulong)in_stack_000017a8 >> 0x20);
    bVar8 = true;
    *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
    if (uVar12 == 0x2026) {
      lVar18 = unaff_x19[0xc9];
      lVar24 = lVar24 + lVar40 * unaff_x21;
      *(undefined4 *)(lVar24 + 0x2c) = 0;
      *(long *)(lVar24 + 0x30) = lVar18;
      *(long *)(lVar24 + 0x38) = unaff_x19[0xca];
      *(long *)(lVar24 + 0x50) = unaff_x19[0xcb];
      *(int *)(lVar24 + 0x58) = (int)unaff_x19[0xcc];
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
      in_stack_000017a8 = CONCAT44(3,uVar27 + 1);
    }
    else if (uVar12 == 3) {
      if ((*unaff_x27 == 0) || (lVar18 = FUN_024b11ac(*unaff_x27,0), lVar18 == 0))
      goto LAB_02491464;
      in_stack_00000bf8 = 3;
      FUN_01299bc0(lVar18,&stack0x00000bf8,&stack0x00000880,*(undefined8 *)PTR_DAT_033ef3c8);
      if (*(uint *)(lVar24 + 0x18) <= uVar27)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      bVar8 = true;
      *(ulong *)(lVar24 + lVar40 * unaff_x21 + 0x30) = CONCAT44(in_stack_00000884,in_stack_00000880)
      ;
      uVar27 = *(uint *)((long)unaff_x19 + 0x48c);
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
    }
  }
  else {
    bVar8 = false;
  }
  unaff_x22 = (long *)System_Threading_Mutex_TypeInfo;
  iVar13 = (int)unaff_x21;
  unaff_x26 = in_stack_00000148;
  in_stack_000017bc = uVar12;
  if (((int)uVar27 < *(int *)((long)unaff_x19 + 0x31c)) && (uVar12 != 3)) {
    if ((*in_stack_00000150 == 0) || (lVar24 = *(long *)(*in_stack_00000150 + 0x38), lVar24 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar24 + 0x18) <= uVar27)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar24 = lVar24 + (long)(int)uVar27 * (long)iVar13;
    *(undefined1 *)(lVar24 + 0x194) = 0;
    *(undefined2 *)(lVar24 + 0x20) = 0x200b;
    *(undefined4 *)(lVar24 + 100) = 0;
    *in_stack_00000148 = uVar27 + 1;
    unaff_x25 = in_stack_00000150;
    goto LAB_0248ab98;
  }
  iVar11 = *(int *)((long)unaff_x19 + 0x63c);
  fVar51 = unaff_s12;
  if (iVar11 == 0) {
    uVar27 = *(uint *)((long)unaff_x19 + 0x254);
    if ((uVar27 >> 4 & 1) == 0) {
      if ((uVar27 >> 3 & 1) == 0) {
        if ((uVar27 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar17 = FUN_016f92d4(uVar12,0);
          if ((uVar17 & 1) != 0) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar12 = FUN_016f95a8(uVar12,0);
            uVar12 = uVar12 & 0xffff;
            fVar51 = fStack0000000000000028;
          }
        }
      }
      else {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar17 = FUN_016f9218(uVar12,0);
        if ((uVar17 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar12 = FUN_016f9724(uVar12,0);
          goto LAB_0248af70;
        }
      }
    }
    else {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar17 = FUN_016f92d4(uVar12,0);
      if ((uVar17 & 1) != 0) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar12 = FUN_016f95a8(uVar12,0);
LAB_0248af70:
        uVar12 = uVar12 & 0xffff;
      }
    }
    iVar11 = *(int *)((long)unaff_x19 + 0x63c);
    in_stack_000017bc = uVar12;
    if (iVar11 == 0) goto LAB_0248af84;
LAB_0248abc8:
    if (iVar11 == 1) {
      if ((*in_stack_00000150 == 0) || (lVar24 = *(long *)(*in_stack_00000150 + 0x38), lVar24 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar24 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar24 = lVar24 + (int)*in_stack_00000148 * unaff_x21;
      lVar40 = *(long *)(lVar24 + 0x40);
      unaff_x19[0xd2] = lVar40;
      *(undefined4 *)((long)unaff_x19 + 0x69c) = *(undefined4 *)(lVar24 + 0x48);
      if ((lVar40 == 0) || (lVar24 = FUN_024ebfa0(lVar40,0), lVar24 == 0)) goto LAB_02491464;
      FUN_0132138c(lVar24,*(undefined4 *)((long)unaff_x19 + 0x69c),&stack0x00000880,
                   *(undefined8 *)System_Func<KeyValuePair<int,_int>,_int>_TypeInfo);
      puVar7 = System_Threading_Mutex_TypeInfo;
      lVar40 = CONCAT44(in_stack_00000884,in_stack_00000880);
      unaff_x22 = (long *)System_Threading_Mutex_TypeInfo;
      unaff_x25 = in_stack_00000150;
      if (lVar40 == 0) goto LAB_0248ab98;
      if (in_stack_000017bc == 0x3c) {
        in_stack_000017bc = *(int *)((long)unaff_x19 + 0x69c) + 0xe000;
      }
      else {
        lVar24 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar24 = *(long *)puVar7;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1b4) = *(undefined4 *)(*(long *)(lVar24 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x1f] == 0) goto LAB_02491464;
      fVar59 = *(float *)(unaff_x19 + 0x3c);
      memmove(&stack0x00001700,(void *)(unaff_x19[0x1f] + 0x50),0x60);
      iVar11 = FUN_026fd110(&stack0x00001700,0);
      if (*unaff_x27 == 0) goto LAB_02491464;
      memmove(&stack0x00001700,(void *)(*unaff_x27 + 0x50),0x60);
      fVar43 = (float)FUN_026fd120(&stack0x00001700,0);
      fVar70 = in_stack_00000080._4_4_;
      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
        fVar70 = unaff_s12;
      }
      if (unaff_x19[0xd2] == 0) goto LAB_02491464;
      fVar70 = (fVar59 / (float)iVar11) * fVar43 * fVar70;
      iVar11 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
      fVar59 = *(float *)(unaff_x19 + 0x3c);
      if (iVar11 < 1) {
        if (*unaff_x27 == 0) goto LAB_02491464;
        iVar11 = FUN_026fd110(*unaff_x27 + 0x50,0);
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar43 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
        fVar67 = in_stack_00000080._4_4_;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar67 = unaff_s12;
        }
        if (unaff_x19[0x1f] == 0) goto LAB_02491464;
        fVar64 = (float)FUN_026fd140(unaff_x19[0x1f] + 0x50,0);
        if (*(long *)(lVar40 + 0x20) == 0) goto LAB_02491464;
        FUN_026fd62c(&stack0x00000880,*(long *)(lVar40 + 0x20),0);
        unaff_x28[0x1cd] = unaff_x28[1];
        unaff_x28[0x1cc] = *unaff_x28;
        fVar44 = (float)FUN_026fd45c(&stack0x000016e0,0);
        if (*(long *)(lVar40 + 0x20) == 0) goto LAB_02491464;
        fVar46 = *(float *)(lVar40 + 0x2c);
        fVar68 = (float)FUN_026fd668(*(long *)(lVar40 + 0x20),0);
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar45 = (float)FUN_026fd140(*unaff_x27 + 0x50,0);
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar48 = (float)FUN_026fd170(*unaff_x27 + 0x50,0);
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar60 = *(float *)((long)unaff_x19 + 0x3fc);
        fVar47 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
        if (unaff_x19[0x1f] == 0) goto LAB_02491464;
        fVar47 = fVar70 * fVar48 * fVar60 * fVar47;
        fVar67 = (fVar59 / (float)iVar11) * fVar43 * fVar67;
        fVar59 = fVar67 * (fVar64 / fVar44) * fVar46 * fVar68;
        fVar67 = fVar67 / fVar59;
        fVar45 = fVar67 * fVar45;
        fVar70 = (float)FUN_026fd180(unaff_x19[0x1f] + 0x50,0);
        fVar67 = fVar67 * fVar70;
      }
      else {
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        iVar11 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        fVar43 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
        if (*(long *)(lVar40 + 0x20) == 0) goto LAB_02491464;
        fVar67 = *(float *)(lVar40 + 0x2c);
        fVar64 = in_stack_00000080._4_4_;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar64 = 1.0;
        }
        fVar44 = (float)FUN_026fd668(*(long *)(lVar40 + 0x20),0);
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        fVar45 = (float)FUN_026fd140(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        fVar46 = (float)FUN_026fd170(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        fVar68 = *(float *)((long)unaff_x19 + 0x3fc);
        fVar47 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        fVar47 = fVar70 * fVar46 * fVar68 * fVar47;
        fVar59 = (fVar59 / (float)iVar11) * fVar43 * fVar64 * fVar67 * fVar44;
        fVar67 = (float)FUN_026fd180(unaff_x19[0xd2] + 0x48,0);
      }
      lVar24 = unaff_x19[0x6c];
      unaff_x19[200] = lVar40;
      if ((lVar24 == 0) || (lVar40 = *(long *)(lVar24 + 0x38), lVar40 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar40 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar40 = lVar40 + (int)*in_stack_00000148 * unaff_x21;
      *(undefined4 *)(lVar40 + 0x2c) = 1;
      *(float *)(lVar40 + 0x160) = fVar59;
      in_stack_00000130._4_4_ = 0.0;
      *(long *)(lVar40 + 0x40) = unaff_x19[0xd2];
      *(long *)(lVar40 + 0x38) = unaff_x19[0x1f];
      *(int *)(lVar40 + 0x58) = (int)unaff_x19[0x23];
      *(int *)(unaff_x19 + 0x23) = (int)lVar28;
      goto LAB_0248b384;
    }
    lVar24 = *in_stack_00000150;
    fVar70 = 0.0;
    if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
      fVar70 = fVar59;
    }
    fVar47 = 0.0;
    if (lVar24 == 0) goto LAB_02491464;
    fVar45 = 0.0;
    fVar67 = 0.0;
  }
  else {
    if (iVar11 != 0) goto LAB_0248abc8;
LAB_0248af84:
    if ((*in_stack_00000150 == 0) || (lVar24 = *(long *)(*in_stack_00000150 + 0x38), lVar24 == 0))
    goto LAB_02491464;
    uVar27 = *in_stack_00000148;
    uVar12 = *(uint *)(lVar24 + 0x18);
    if (uVar12 <= uVar27)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar28 = *(long *)(lVar24 + (int)uVar27 * unaff_x21 + 0x30);
    unaff_x19[200] = lVar28;
    unaff_x22 = (long *)System_Threading_Mutex_TypeInfo;
    unaff_x25 = in_stack_00000150;
    if (lVar28 == 0) goto LAB_0248ab98;
    lVar40 = lVar24 + (int)uVar27 * unaff_x21;
    lVar28 = *(long *)(lVar40 + 0x38);
    unaff_x19[0x1f] = lVar28;
    unaff_x19[0x22] = *(long *)(lVar40 + 0x50);
    *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar40 + 0x58);
    if (bVar8) {
      lVar40 = unaff_x19[0x8e];
      if (lVar40 == 0) goto LAB_02491464;
      if (*(uint *)(lVar40 + 0x18) <= in_stack_00001788)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if ((*(int *)(lVar40 + (long)(int)in_stack_00001788 * 0xc + 0x20) != 10) ||
         (uVar27 == *(uint *)(unaff_x19 + 0x92))) goto LAB_0248b014;
      if (uVar12 <= uVar27 - 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (lVar28 == 0) goto LAB_02491464;
      fVar70 = *(float *)(lVar24 + (long)(int)(uVar27 - 1) * (long)iVar13 + 0x60);
      iVar11 = FUN_026fd110(lVar28 + 0x50,0);
      lVar24 = *unaff_x27;
    }
    else {
LAB_0248b014:
      if (lVar28 == 0) goto LAB_02491464;
      fVar70 = *(float *)(unaff_x19 + 0x3c);
      iVar11 = FUN_026fd110(lVar28 + 0x50,0);
      lVar24 = unaff_x19[0x1f];
    }
    if (lVar24 == 0) goto LAB_02491464;
    fVar64 = (float)FUN_026fd120(lVar24 + 0x50,0);
    fVar43 = in_stack_00000080._4_4_;
    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
      fVar43 = unaff_s12;
    }
    fVar67 = 0.0;
    fVar45 = 0.0;
    if (!(bool)(bVar8 & in_stack_000017bc == 0x2026)) {
      if (*unaff_x27 == 0) goto LAB_02491464;
      fVar45 = (float)FUN_026fd140(*unaff_x27 + 0x50,0);
      if (*unaff_x27 == 0) goto LAB_02491464;
      fVar67 = (float)FUN_026fd180(*unaff_x27 + 0x50,0);
    }
    lVar24 = unaff_x19[200];
    if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto LAB_02491464;
    fVar44 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar46 = *(float *)(lVar24 + 0x2c);
    fVar59 = (float)FUN_026fd668(*(long *)(lVar24 + 0x20),0);
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar68 = (float)FUN_026fd170(*unaff_x27 + 0x50,0);
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar48 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar47 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
    lVar24 = unaff_x19[0x6c];
    if ((lVar24 == 0) || (lVar28 = *(long *)(lVar24 + 0x38), lVar28 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar28 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar28 = lVar28 + (int)*in_stack_00000148 * unaff_x21;
    *(undefined4 *)(lVar28 + 0x2c) = 0;
    fVar43 = ((fVar51 * fVar70) / (float)iVar11) * fVar64 * fVar43;
    fVar59 = fVar43 * fVar44 * fVar46 * fVar59;
    *(float *)(lVar28 + 0x160) = fVar59;
    uVar12 = *(uint *)(unaff_x19 + 0x23);
    fVar47 = fVar43 * fVar68 * fVar48 * fVar47;
    if (uVar12 == 0) {
      in_stack_00000130._4_4_ = *(float *)(unaff_x19 + 0xc2);
    }
    else {
      lVar28 = unaff_x19[0xe0];
      if (lVar28 == 0) goto LAB_02491464;
      if (*(uint *)(lVar28 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar28 = *(long *)(lVar28 + (long)(int)uVar12 * 8 + 0x20);
      if (lVar28 == 0) goto LAB_02491464;
      in_stack_00000130._4_4_ = *(float *)(lVar28 + 0x4c);
    }
LAB_0248b384:
    unaff_s12 = 1.0;
    fVar70 = 0.0;
    if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
      fVar70 = fVar59;
    }
  }
  lVar24 = *(long *)(lVar24 + 0x38);
  if (lVar24 == 0) goto LAB_02491464;
  if (*(uint *)(lVar24 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar24 = lVar24 + (int)*in_stack_00000148 * unaff_x21;
  *(short *)(lVar24 + 0x20) = (short)in_stack_000017bc;
  *(int *)(lVar24 + 0x60) = (int)unaff_x19[0x3c];
  *(undefined4 *)(lVar24 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4e4);
  if ((unaff_x19[0x6c] == 0) || (lVar24 = *(long *)(unaff_x19[0x6c] + 0x38), lVar24 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar24 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(int *)(lVar24 + (int)*in_stack_00000148 * unaff_x21 + 0x168) = (int)unaff_x19[0x2a];
  if ((unaff_x19[0x6c] == 0) || (lVar24 = *(long *)(unaff_x19[0x6c] + 0x38), lVar24 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar24 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(undefined4 *)(lVar24 + (int)*in_stack_00000148 * unaff_x21 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x154);
  if ((unaff_x19[0x6c] == 0) || (lVar24 = *(long *)(unaff_x19[0x6c] + 0x38), lVar24 == 0))
  goto LAB_02491464;
  uVar12 = *in_stack_00000148;
  FUN_013b78b8(in_stack_000000b8,&stack0x00000880,
               *(undefined8 *)TMPro_TMP_Dropdown_OptionData_TypeInfo);
  if (*(uint *)(lVar24 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  uVar16 = unaff_x28[1];
  uVar56 = *unaff_x28;
  lVar24 = lVar24 + (int)uVar12 * unaff_x21;
  *(undefined4 *)(lVar24 + 0x18c) = in_stack_00000890;
  *(undefined8 *)(lVar24 + 0x184) = uVar16;
  *(undefined8 *)(lVar24 + 0x17c) = uVar56;
  if ((*in_stack_00000150 == 0) || (lVar24 = *(long *)(*in_stack_00000150 + 0x38), lVar24 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar24 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(undefined4 *)(lVar24 + (int)*in_stack_00000148 * unaff_x21 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x254);
  if ((unaff_x19[200] == 0) || (lVar24 = *(long *)(unaff_x19[200] + 0x20), lVar24 == 0))
  goto LAB_02491464;
  FUN_026fd62c(&stack0x00000bf8,lVar24,0);
  unaff_x28[0x1df] = in_stack_00000c00;
  unaff_x28[0x1de] = CONCAT44(in_stack_00000bfc,in_stack_00000bf8);
  if ((int)in_stack_000017bc < 0x10000) {
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar12 = FUN_016f68bc(in_stack_000017bc,0);
    uVar12 = uVar12 & 1;
  }
  else {
    uVar12 = 0;
  }
  fStack00000000000000cc = *(float *)(unaff_x19 + 0x54);
  *(undefined4 *)((long)unaff_x19 + 0x2f4) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f1) == '\0') {
    fVar44 = 0.0;
    fVar64 = 0.0;
    fVar43 = 0.0;
  }
  else {
    if (unaff_x19[200] == 0) goto LAB_02491464;
    uVar23 = *in_stack_00000148;
    uVar27 = *(uint *)(unaff_x19[200] + 0x28);
    if ((int)uVar23 < (int)in_stack_00000078._4_4_) {
      if ((*in_stack_00000150 == 0) || (lVar24 = *(long *)(*in_stack_00000150 + 0x38), lVar24 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar24 + 0x18) <= uVar23 + 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar24 = *(long *)(lVar24 + (long)(int)(uVar23 + 1) * (long)iVar13 + 0x30);
      if ((((lVar24 == 0) || (*unaff_x27 == 0)) ||
          (lVar28 = *(long *)(*unaff_x27 + 0x128), lVar28 == 0)) ||
         (lVar28 = *(long *)(lVar28 + 0x18), lVar28 == 0)) goto LAB_02491464;
      in_stack_00000880 = uVar27 | *(int *)(lVar24 + 0x28) << 0x10;
      uVar53 = FUN_0129eff4(lVar28,&stack0x00000880,&stack0x000016d8,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                           );
      uVar71 = 0;
      if ((uVar53 & 1) == 0) {
        fVar44 = 0.0;
        fVar64 = 0.0;
        fVar43 = 0.0;
      }
      else {
        if (in_stack_000016d8 == 0) goto LAB_02491464;
        fVar43 = *(float *)(in_stack_000016d8 + 0x14);
        fVar64 = *(float *)(in_stack_000016d8 + 0x18);
        fVar44 = *(float *)(in_stack_000016d8 + 0x1c);
        uVar71 = *(undefined4 *)(in_stack_000016d8 + 0x20);
        if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
          fStack00000000000000cc = 0.0;
        }
      }
      uVar23 = *in_stack_00000148;
    }
    else {
      uVar71 = 0;
      fVar44 = 0.0;
      fVar64 = 0.0;
      fVar43 = 0.0;
    }
    if (0 < (int)uVar23) {
      if ((*in_stack_00000150 == 0) || (lVar24 = *(long *)(*in_stack_00000150 + 0x38), lVar24 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar24 + 0x18) <= (uint)((long)(int)uVar23 + -1))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar24 = *(long *)(lVar24 + ((long)(int)uVar23 + -1) * unaff_x21 + 0x30);
      if (((lVar24 == 0) || (*unaff_x27 == 0)) ||
         ((lVar28 = *(long *)(*unaff_x27 + 0x128), lVar28 == 0 ||
          (lVar28 = *(long *)(lVar28 + 0x18), lVar28 == 0)))) goto LAB_02491464;
      in_stack_00000880 = *(uint *)(lVar24 + 0x28) | uVar27 << 0x10;
      uVar53 = FUN_0129eff4(lVar28,&stack0x00000880,&stack0x000016d8,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                           );
      if ((uVar53 & 1) != 0) {
        if ((in_stack_000016d8 == 0) ||
           (fVar43 = (float)FUN_024bb1bc(fVar43,fVar64,fVar44,uVar71,
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
    *(float *)((long)unaff_x19 + 0x2f4) = fVar44;
  }
  if ((char)unaff_x19[0x1d] != '\0') {
    fVar68 = *(float *)(unaff_x19 + 199);
    fVar46 = (float)FUN_026fd474(&stack0x00001770,0);
    fVar68 = fVar68 - fVar70 * fVar46 * (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc));
    *(float *)(unaff_x19 + 199) = fVar68;
    if ((uVar12 != 0) || (in_stack_000017bc == 0x200b)) {
      *(float *)(unaff_x19 + 199) = fVar68 - in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac)
      ;
    }
  }
  fVar68 = *(float *)(unaff_x19 + 0x55);
  fVar46 = 0.0;
  if (fVar68 != 0.0) {
    fVar46 = (float)FUN_026fd454(&stack0x00001770,0);
    fVar48 = (float)FUN_026fd464(&stack0x00001770,0);
    fVar46 = (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (fVar68 * 0.5 - fVar70 * (fVar46 * 0.5 + fVar48));
    *(float *)(unaff_x19 + 199) = *(float *)(unaff_x19 + 199) + fVar46;
  }
  if (((cVar22 == '\0') && (*(int *)((long)unaff_x19 + 0x63c) == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x254) & 1) != 0)) {
    lVar24 = unaff_x19[0x22];
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar53 = FUN_02681b9c(lVar24,0,0);
    fVar48 = 0.0;
    if ((uVar53 & 1) != 0) {
      lVar24 = unaff_x19[0x22];
      if (*(int *)(*(long *)
                    Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar39 = (long *)
                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
      ;
      if (lVar24 == 0) goto LAB_02491464;
      uVar53 = FUN_0267e1d8(lVar24,*(undefined4 *)
                                    (*(long *)(*(long *)
                                                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                              + 0xb8) + 0x54),0);
      if ((uVar53 & 1) != 0) {
        lVar24 = unaff_x19[0x22];
        if (*(int *)(*plVar39 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          plVar39 = (long *)
                    Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
          ;
        }
        if (lVar24 == 0) goto LAB_02491464;
        fVar68 = (float)FUN_0267f610(lVar24,*(undefined4 *)(*(long *)(*plVar39 + 0xb8) + 0x54),0);
        if ((*unaff_x27 == 0) || (unaff_x19[0x22] == 0)) goto LAB_02491464;
        fVar60 = *(float *)(*unaff_x27 + 0x1b0);
        fVar48 = (float)FUN_0267f610(unaff_x19[0x22],
                                     *(undefined4 *)
                                      (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                + 0xb8) + 0xcc),0);
        fVar48 = fVar48 * fVar68 * fVar60 * 0.25;
        if (fVar68 < in_stack_00000130._4_4_ + fVar48) {
          in_stack_00000130._4_4_ = fVar68 - fVar48;
        }
      }
    }
    if (*unaff_x27 == 0) goto LAB_02491464;
    fStack00000000000000c4 = *(float *)(*unaff_x27 + 0x1b4);
  }
  else {
    lVar24 = unaff_x19[0x22];
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar53 = FUN_02681b9c(lVar24,0,0);
    fStack00000000000000c4 = 0.0;
    if ((uVar53 & 1) != 0) {
      lVar24 = unaff_x19[0x22];
      if (*(int *)(*(long *)
                    Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar39 = (long *)
                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
      ;
      if (lVar24 == 0) goto LAB_02491464;
      uVar53 = FUN_0267e1d8(lVar24,*(undefined4 *)
                                    (*(long *)(*(long *)
                                                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                              + 0xb8) + 0x54),0);
      if ((uVar53 & 1) != 0) {
        lVar24 = unaff_x19[0x22];
        if (*(int *)(*plVar39 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          plVar39 = (long *)
                    Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
          ;
        }
        if (lVar24 == 0) goto LAB_02491464;
        uVar53 = FUN_0267e1d8(lVar24,*(undefined4 *)(*(long *)(*plVar39 + 0xb8) + 0xcc),0);
        if ((uVar53 & 1) != 0) {
          lVar24 = unaff_x19[0x22];
          if (*(int *)(*plVar39 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            plVar39 = (long *)
                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
            ;
          }
          if (lVar24 == 0) goto LAB_02491464;
          fVar68 = (float)FUN_0267f610(lVar24,*(undefined4 *)(*(long *)(*plVar39 + 0xb8) + 0x54),0);
          if ((*unaff_x27 == 0) || (unaff_x19[0x22] == 0)) goto LAB_02491464;
          fVar60 = *(float *)(*unaff_x27 + 0x1a8);
          fVar48 = (float)FUN_0267f610(unaff_x19[0x22],
                                       *(undefined4 *)
                                        (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                  + 0xb8) + 0xcc),0);
          fVar48 = fVar48 * fVar68 * fVar60 * 0.25;
          if (fVar68 < in_stack_00000130._4_4_ + fVar48) {
            in_stack_00000130._4_4_ = fVar68 - fVar48;
          }
          goto LAB_0248ba68;
        }
      }
    }
    fVar48 = 0.0;
  }
LAB_0248ba68:
  fVar61 = *(float *)(unaff_x19 + 199);
  fVar68 = (float)FUN_026fd464(&stack0x00001770,0);
  fVar61 = fVar61 + (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
                    fVar70 * (fVar43 + ((fVar68 - in_stack_00000130._4_4_) - fVar48));
  fVar43 = (float)FUN_026fd46c(&stack0x00001770,0);
  fVar60 = *(float *)((long)unaff_x19 + 0x614) +
           ((fVar47 + fVar70 * (fVar64 + in_stack_00000130._4_4_ + fVar43)) -
           *(float *)(unaff_x19 + 0x9a));
  fVar43 = (float)FUN_026fd45c(&stack0x00001770,0);
  fVar65 = fVar60 - fVar70 * (in_stack_00000130._4_4_ + in_stack_00000130._4_4_ + fVar43);
  fVar43 = (float)FUN_026fd454(&stack0x00001770,0);
  fVar68 = fVar61 + (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
                    fVar70 * (fVar48 + fVar48 +
                             in_stack_00000130._4_4_ + in_stack_00000130._4_4_ + fVar43);
  fVar43 = fVar61;
  fVar64 = fVar68;
  if (((*(int *)((long)unaff_x19 + 0x63c) == 0) && (cVar22 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x254) >> 1 & 1) != 0)) {
    fVar63 = (float)(int)unaff_x19[0xbd] * fStack000000000000004c;
    fVar43 = (float)FUN_026fd46c(&stack0x00001770,0);
    fVar50 = fVar63 * fVar70 * (fVar48 + in_stack_00000130._4_4_ + fVar43);
    fVar43 = (float)FUN_026fd46c(&stack0x00001770,0);
    fVar64 = (float)FUN_026fd45c(&stack0x00001770,0);
    fVar60 = fVar60 + 0.0;
    fVar65 = fVar65 + 0.0;
    fVar63 = fVar63 * fVar70 * (((fVar43 - fVar64) - in_stack_00000130._4_4_) - fVar48);
    fVar64 = fVar68 + fVar63;
    fVar43 = fVar61 + fVar50;
    fVar57 = (fVar50 - fVar63) * 0.5;
    fVar61 = (fVar61 + fVar63) - fVar57;
    fVar68 = (fVar68 + fVar50) - fVar57;
    fVar43 = fVar43 - fVar57;
    fVar64 = fVar64 - fVar57;
  }
  if (*(char *)((long)unaff_x19 + 0x46c) == '\0') {
    fVar50 = 0.0;
    fVar62 = 0.0;
    fStack00000000000000e0 = 0.0;
    fStack00000000000000e4 = 0.0;
    fVar57 = fVar65;
    fVar63 = fVar60;
    fStack00000000000000e8 = fVar43;
    fStack00000000000000ec = fVar61;
  }
  else {
    thunk_FUN_026935f0(_uStack0000000000000060,0);
    fVar66 = (fVar68 + fVar61) * 0.5;
    fVar69 = (fVar65 + fVar60) * 0.5;
    fVar60 = fVar60 - fVar69;
    fVar54 = 0.0;
    fVar63 = fVar60;
    fVar49 = (float)FUN_02692df0(fVar43 - fVar66,_uStack0000000000000060,0);
    fVar65 = fVar65 - fVar69;
    fVar55 = 0.0;
    fVar43 = fVar65;
    fVar61 = (float)FUN_02692df0(fVar61 - fVar66,_uStack0000000000000060,0);
    fVar62 = 0.0;
    fVar68 = (float)FUN_02692df0(fVar68 - fVar66,_uStack0000000000000060,0);
    fVar68 = fVar66 + fVar68;
    fVar60 = fVar69 + fVar60;
    fVar62 = fVar62 + 0.0;
    fVar50 = 0.0;
    fVar64 = (float)FUN_02692df0(fVar64 - fVar66,_uStack0000000000000060,0);
    fVar64 = fVar66 + fVar64;
    fVar65 = fVar69 + fVar65;
    fVar50 = fVar50 + 0.0;
    fVar57 = fVar69 + fVar43;
    fVar63 = fVar69 + fVar63;
    fStack00000000000000e8 = fVar66 + fVar49;
    fStack00000000000000ec = fVar66 + fVar61;
    fStack00000000000000e0 = fVar55 + 0.0;
    fStack00000000000000e4 = fVar54 + 0.0;
  }
  if (*in_stack_00000150 == 0) goto LAB_02491464;
  lVar24 = *(long *)(*in_stack_00000150 + 0x38);
  unaff_d13 = (ulong)(uint)fVar70;
  if (lVar24 == 0) goto LAB_02491464;
  if (*(uint *)(lVar24 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar24 = lVar24 + (int)*in_stack_00000148 * unaff_x21;
  *(float *)(lVar24 + 0x120) = fVar57;
  *(float *)(lVar24 + 0x11c) = fStack00000000000000ec;
  *(float *)(lVar24 + 0x124) = fStack00000000000000e0;
  if (*in_stack_00000150 == 0) goto LAB_02491464;
  lVar24 = *(long *)(*in_stack_00000150 + 0x38);
  unaff_s12 = 1.0;
  if (lVar24 == 0) goto LAB_02491464;
  if (*(uint *)(lVar24 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar24 = lVar24 + (int)*in_stack_00000148 * unaff_x21;
  *(float *)(lVar24 + 0x114) = fVar63;
  *(float *)(lVar24 + 0x110) = fStack00000000000000e8;
  *(float *)(lVar24 + 0x118) = fStack00000000000000e4;
  if ((*in_stack_00000150 == 0) || (lVar24 = *(long *)(*in_stack_00000150 + 0x38), lVar24 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar24 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar24 = lVar24 + (int)*in_stack_00000148 * unaff_x21;
  *(float *)(lVar24 + 0x128) = fVar68;
  *(float *)(lVar24 + 300) = fVar60;
  *(float *)(lVar24 + 0x130) = fVar62;
  if ((*in_stack_00000150 == 0) || (lVar24 = *(long *)(*in_stack_00000150 + 0x38), lVar24 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar24 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar24 = lVar24 + (int)*in_stack_00000148 * unaff_x21;
  *(float *)(lVar24 + 0x134) = fVar64;
  *(float *)(lVar24 + 0x138) = fVar65;
  *(float *)(lVar24 + 0x13c) = fVar50;
  if ((*in_stack_00000150 == 0) || (lVar24 = *(long *)(*in_stack_00000150 + 0x38), lVar24 == 0))
  goto LAB_02491464;
  uVar27 = *in_stack_00000148;
  lVar28 = (long)(int)uVar27;
  if (*(uint *)(lVar24 + 0x18) <= uVar27)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar40 = lVar24 + lVar28 * unaff_x21;
  *(int *)(lVar40 + 0x140) = (int)unaff_x19[199];
  fVar64 = *(float *)(unaff_x19 + 0x9a);
  uVar53 = (ulong)(uint)fVar64;
  fVar43 = *(float *)((long)unaff_x19 + 0x614);
  *(float *)(lVar40 + 0x15c) = (fVar68 - fStack00000000000000ec) / (fVar63 - fVar57);
  *(float *)(lVar40 + 0x14c) = (fVar47 - fVar64) + fVar43;
  fVar45 = fVar45 * fVar70;
  if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
    fVar45 = fVar45 / fVar51;
    fVar67 = (fVar67 * fVar70) / fVar51;
  }
  else {
    fVar67 = fVar67 * fVar70;
  }
  uVar23 = *(uint *)(unaff_x19 + 0x92);
  bVar9 = uVar12 != 0;
  fVar45 = fVar43 + fVar45;
  bVar10 = uVar27 != uVar23;
  if (bVar10 && bVar9) {
    fVar43 = *(float *)(unaff_x19 + 0x98);
    lVar24 = lVar24 + lVar28 * unaff_x21;
    *(float *)(lVar24 + 0x154) = fVar43;
    fVar67 = *(float *)((long)unaff_x19 + 0x4c4);
    *(float *)(lVar24 + 0x148) = fVar43 - fVar64;
    *(float *)(lVar24 + 0x158) = fVar67;
    *(float *)(unaff_x19 + 0x97) = fVar43 - fVar64;
    fVar67 = fVar67 - fVar64;
    *(float *)(lVar24 + 0x150) = fVar67;
  }
  else {
    fVar67 = fVar43 + fVar67;
    fVar68 = fVar45;
    fVar47 = fVar67;
    if (fVar43 != 0.0) {
      fVar68 = (fVar45 - fVar43) / *(float *)((long)unaff_x19 + 0x3fc);
      fVar47 = (fVar67 - fVar43) / *(float *)((long)unaff_x19 + 0x3fc);
      if (fVar68 <= fVar45) {
        fVar68 = fVar45;
      }
      if (fVar67 <= fVar47) {
        fVar47 = fVar67;
      }
    }
    lVar24 = lVar24 + lVar28 * unaff_x21;
    fVar43 = fVar68;
    if (fVar68 <= *(float *)(unaff_x19 + 0x98)) {
      fVar43 = *(float *)(unaff_x19 + 0x98);
    }
    fVar60 = fVar47;
    if (*(float *)((long)unaff_x19 + 0x4c4) <= fVar47) {
      fVar60 = *(float *)((long)unaff_x19 + 0x4c4);
    }
    *(float *)((long)unaff_x19 + 0x4c4) = fVar60;
    fVar67 = fVar67 - fVar64;
    *(float *)(unaff_x19 + 0x98) = fVar43;
    *(float *)(lVar24 + 0x154) = fVar68;
    *(float *)(lVar24 + 0x158) = fVar47;
    *(float *)(lVar24 + 0x148) = fVar45 - fVar64;
    *(float *)(unaff_x19 + 0x97) = fVar45 - fVar64;
    *(float *)(lVar24 + 0x150) = fVar67;
  }
  *(float *)((long)unaff_x19 + 0x4bc) = fVar67;
  if (((int)unaff_x19[0x94] == 0) || (*(char *)((long)unaff_x19 + 0x334) != '\0')) {
    if (!bVar10 || !bVar9) {
      *(float *)(unaff_x19 + 0x96) = fVar43;
      if (unaff_x19[0x1f] == 0) goto LAB_02491464;
      fVar43 = *(float *)((long)unaff_x19 + 0x4b4);
      fVar64 = (float)FUN_026fd150(unaff_x19[0x1f] + 0x50,0);
      fVar51 = (fVar70 * fVar64) / fVar51;
      uVar53 = (ulong)*(uint *)(unaff_x19 + 0x9a);
      if (fVar43 <= fVar51) {
        fVar43 = fVar51;
      }
      *(float *)((long)unaff_x19 + 0x4b4) = fVar43;
      goto LAB_0248bef4;
    }
  }
  else {
LAB_0248bef4:
    if ((!bVar10 || !bVar9) && (float)uVar53 == 0.0) {
      fVar51 = *(float *)(in_stack_00000070 + 0x208);
      if (*(float *)(in_stack_00000070 + 0x208) <= fVar45) {
        fVar51 = fVar45;
      }
      *(float *)(in_stack_00000070 + 0x208) = fVar51;
    }
  }
  lVar24 = *in_stack_00000150;
  if ((lVar24 == 0) || (lVar28 = *(long *)(lVar24 + 0x38), lVar28 == 0)) goto LAB_02491464;
  uVar2 = *in_stack_00000148;
  if (*(uint *)(lVar28 + 0x18) <= uVar2)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar28 = lVar28 + (int)uVar2 * unaff_x21;
  *(undefined1 *)(lVar28 + 0x194) = 0;
  uVar31 = *(uint *)(unaff_x19 + 0x4e);
  if ((in_stack_000017bc == 9) ||
     (((((uVar12 == 0 && (in_stack_000017bc != 3)) && (in_stack_000017bc != 0x200b)) &&
       (in_stack_000017bc != 0xad)) ||
      (((in_stack_000017bc == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) != 0 ||
       (*(int *)((long)unaff_x19 + 0x63c) == 1)))))) {
    *(undefined1 *)(lVar28 + 0x194) = 1;
    pfVar29 = in_stack_00000088;
    pfVar33 = _fStack0000000000000098;
    if (bVar8) {
      lVar24 = *(long *)(lVar24 + 0x50);
      if (lVar24 == 0) goto LAB_02491464;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      pfVar33 = (float *)(lVar24 + 0x60);
      pfVar29 = (float *)(lVar24 + 100);
    }
    fVar43 = *pfVar33;
    fVar64 = *pfVar29;
    fVar51 = *(float *)(unaff_x19 + 0x6b);
    fVar67 = *(float *)(unaff_x19 + 199);
    in_stack_000000d8._4_4_ = (fStack0000000000000090 - fVar43) - fVar64;
    bVar9 = true;
    if ((fVar51 <= in_stack_000000d8._4_4_) && (bVar9 = false, !NAN(fVar51))) {
      bVar9 = fVar51 == -1.0;
    }
    if (!bVar9) {
      in_stack_000000d8._4_4_ = fVar51;
    }
    fVar51 = 0.0;
    if ((char)unaff_x19[0x1d] == '\0') {
      fVar51 = (float)FUN_026fd474(&stack0x00001770,0);
      uVar53 = (ulong)*(uint *)(unaff_x19 + 0x9a);
    }
    fVar47 = *(float *)((long)unaff_x19 + 0x4c4);
    fVar45 = *(float *)((long)unaff_x19 + 0x2cc);
    fVar68 = (float)uVar53;
    if (in_stack_000017bc != 0xad) {
      fVar59 = fVar70;
    }
    fVar60 = 0.0;
    if ((0.0 < fVar68) && (fVar60 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
      fVar60 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
    }
    fVar60 = (*(float *)(unaff_x19 + 0x96) - (fVar47 - fVar68)) + fVar60;
    uVar2 = *in_stack_00000148;
    if (in_stack_000000a0 < fVar60) {
      if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
        *(uint *)((long)unaff_x19 + 0x2dc) = uVar2;
      }
      unaff_x29 = (long *)StringLiteral_302;
      unaff_x22 = (long *)System_Threading_Mutex_TypeInfo;
      uVar56 = DAT_02941c08;
      if ((char)unaff_x19[0x46] != '\0') {
        fVar65 = *(float *)(unaff_x19 + 0x58);
        if (((fVar65 < *(float *)((long)unaff_x19 + 0x2b4)) && (0.0 < fVar68)) &&
           (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
          fVar59 = *(float *)((long)unaff_x19 + 0x2b4) +
                   ((in_stack_00000018._4_4_ - fVar60) / (float)(int)unaff_x19[0x94]) /
                   fStack0000000000000054;
          if (fVar59 <= fVar65) {
            fVar59 = fVar65;
          }
          goto LAB_0248ea5c;
        }
        fVar60 = *(float *)((long)unaff_x19 + 0x1dc);
        fVar68 = *(float *)(unaff_x19 + 0x49);
        uVar53 = (ulong)(uint)fVar68;
        if ((fVar68 < fVar60) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
          fVar59 = (fVar60 - *(float *)(unaff_x19 + 0x47)) * 0.5;
          if (fVar59 <= DAT_028aa298) {
            fVar59 = DAT_028aa298;
          }
          fVar51 = (fVar60 - fVar59) * 20.0 + 0.5;
          fVar59 = DAT_02958220;
          if (fVar51 != INFINITY) {
            fVar59 = (float)(int)fVar51 / 20.0;
          }
          if (fVar59 <= fVar68) {
            fVar59 = fVar68;
          }
          *(float *)((long)unaff_x19 + 0x234) = fVar60;
          goto LAB_0248e598;
        }
      }
      switch((int)unaff_x19[0x5b]) {
      case 1:
        lVar24 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar24 = *unaff_x22;
        }
        lVar28 = *(long *)(lVar24 + 0xb8);
        lVar24 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
        if ((*(byte *)(lVar24 + 0x132) & 1) == 0) {
          lVar24 = FUN_00d5941c(lVar24);
        }
        unaff_x29 = (long *)StringLiteral_302;
        lVar24 = *(long *)(*(long *)(lVar24 + 0xc0) + 8);
        if ((*(byte *)(lVar24 + 0x132) & 1) == 0) {
          lVar24 = FUN_00d5941c();
        }
        piVar19 = (int *)thunk_FUN_00d32ed4(lVar28 + 0x11f0,*(long *)(lVar24 + 0x80) + 0xa0);
        if (*piVar19 == 0) goto LAB_0248e4bc;
        lVar24 = *unaff_x22;
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar24 = *unaff_x22;
        }
        FUN_013b8de4(*(long *)(lVar24 + 0xb8) + 0x11f0,&stack0x00000880,
                     *(undefined8 *)
                      Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                    );
        memcpy(&stack0x00001360,&stack0x00000880,0x378);
LAB_0248c8f4:
        iVar13 = FUN_024d66ec();
        goto LAB_0248c900;
      default:
        goto switchD_0248c274_caseD_2;
      case 3:
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
LAB_0248c524:
        unaff_x29 = (long *)StringLiteral_302;
        in_stack_00001788 = FUN_024d66ec();
        break;
      case 5:
        if ((uVar2 == 0) || ((int)in_stack_00001788 < 0)) {
          *in_stack_00000148 = 0;
          unaff_x22 = (long *)System_Threading_Mutex_TypeInfo;
          unaff_x25 = in_stack_00000150;
          unaff_x29 = (long *)StringLiteral_302;
          in_stack_00001788 = 0xffffffff;
          in_stack_000017a8 = uVar56;
          goto LAB_0248ab98;
        }
        fVar59 = *(float *)(unaff_x19 + 0x98);
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        if (fVar59 - fVar47 <= in_stack_000000a0) {
          *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
          *(undefined4 *)(unaff_x19 + 0x92) = *(undefined4 *)((long)unaff_x19 + 0x48c);
          uVar53 = *(ulong *)(*(long *)(*unaff_x22 + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
          *(undefined4 *)(unaff_x19 + 0x99) = 0;
          lVar24 = NEON_rev64(uVar53,4);
          unaff_x19[0x98] = lVar24;
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
          *(int *)(unaff_x19 + 0x94) = (int)unaff_x19[0x94] + 1;
          *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
          unaff_x25 = in_stack_00000150;
          goto LAB_0248ab98;
        }
        break;
      case 6:
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        unaff_x29 = (long *)StringLiteral_302;
        lVar24 = unaff_x19[0x5c];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            );
        }
        uVar17 = FUN_02681b9c(lVar24,0,0);
        if ((uVar17 & 1) != 0) {
          plVar39 = (long *)unaff_x19[0x5c];
          uVar56 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar39 == (long *)0x0) goto LAB_02491464;
          (**(code **)(*plVar39 + 0x558))(plVar39,uVar56,*(undefined8 *)(*plVar39 + 0x560));
          lVar24 = unaff_x19[0x5c];
          if (lVar24 == 0) goto LAB_02491464;
          *(int *)(lVar24 + 0x3f8) = (int)unaff_x19[0x7f];
          FUN_024c910c(lVar24,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
          plVar39 = (long *)unaff_x19[0x5c];
          if (plVar39 == (long *)0x0) goto LAB_02491464;
          (**(code **)(*plVar39 + 0x7d8))(plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        }
      }
      goto LAB_0248c628;
    }
switchD_0248c274_caseD_2:
    unaff_x22 = (long *)System_Threading_Mutex_TypeInfo;
    fVar68 = 1.0 - fVar45;
    uVar53 = (ulong)(uint)fVar68;
    fVar51 = ABS(fVar67) + fVar51 * fVar68 * fVar59;
    fVar59 = _DAT_0294c6e8;
    if ((uVar31 & 0x18) == 0) {
      fVar59 = 1.0;
    }
    if (fVar59 * in_stack_000000d8._4_4_ < fVar51) {
      if (((char)unaff_x19[0x5a] == '\0') || (uVar2 == *(uint *)(unaff_x19 + 0x92))) {
        if (((char)unaff_x19[0x46] == '\0') ||
           ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c))) {
LAB_0248c3dc:
          iVar11 = (int)unaff_x19[0x5b];
          if (iVar11 == 1) {
            lVar24 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar24 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar24 = *unaff_x22;
            }
            unaff_x29 = (long *)StringLiteral_302;
            lVar28 = *(long *)(lVar24 + 0xb8);
            lVar24 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
            if ((*(byte *)(lVar24 + 0x132) & 1) == 0) {
              lVar24 = FUN_00d5941c(lVar24);
            }
            lVar24 = *(long *)(*(long *)(lVar24 + 0xc0) + 8);
            if ((*(byte *)(lVar24 + 0x132) & 1) == 0) {
              lVar24 = FUN_00d5941c();
            }
            piVar19 = (int *)thunk_FUN_00d32ed4(lVar28 + 0x11f0,*(long *)(lVar24 + 0x80) + 0xa0);
            if (*piVar19 == 0) goto LAB_0248e4bc;
            lVar24 = *unaff_x22;
            if (*(int *)(lVar24 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar24 = *unaff_x22;
            }
            FUN_013b8de4(*(long *)(lVar24 + 0xb8) + 0x11f0,&stack0x00000880,
                         *(undefined8 *)
                          Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                        );
            memcpy(&stack0x00000c70,&stack0x00000880,0x378);
            goto LAB_0248c8f4;
          }
          if (iVar11 == 6) {
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            unaff_x29 = (long *)StringLiteral_302;
            in_stack_00001788 = FUN_024d66ec();
            lVar24 = unaff_x19[0x5c];
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)
                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                );
            }
            uVar17 = FUN_02681b9c(lVar24,0,0);
            if ((uVar17 & 1) != 0) {
              plVar39 = (long *)unaff_x19[0x5c];
              uVar56 = (**(code **)(*unaff_x19 + 0x548))();
              if (plVar39 == (long *)0x0) goto LAB_02491464;
              (**(code **)(*plVar39 + 0x558))(plVar39,uVar56,*(undefined8 *)(*plVar39 + 0x560));
              lVar24 = unaff_x19[0x5c];
              if (lVar24 == 0) goto LAB_02491464;
              *(int *)(lVar24 + 0x3f8) = (int)unaff_x19[0x7f];
              FUN_024c910c(lVar24,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
              plVar39 = (long *)unaff_x19[0x5c];
              if (plVar39 == (long *)0x0) goto LAB_02491464;
              (**(code **)(*plVar39 + 0x7d8))(plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7e0));
              *(undefined1 *)(unaff_x19 + 0x5e) = 1;
            }
            goto LAB_0248ca1c;
          }
          if (iVar11 == 3) {
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            goto LAB_0248c524;
          }
          goto LAB_0248cf18;
        }
        fVar67 = *(float *)(unaff_x19 + 0x59) / 100.0;
        if (fVar45 < fVar67) {
          fVar70 = fVar51 / fVar68;
          if (fVar45 <= 0.0) {
            fVar70 = fVar51;
          }
          fVar45 = fVar45 + (fVar51 - fVar59 * (in_stack_000000d8._4_4_ + DAT_02958218)) / fVar70;
          goto LAB_0249154c;
        }
        fVar45 = *(float *)((long)unaff_x19 + 0x1dc);
        uVar53 = (ulong)(uint)fVar45;
        fVar67 = *(float *)(unaff_x19 + 0x49);
        if (fVar45 <= fVar67) goto LAB_0248c3dc;
LAB_024914c0:
        fVar59 = (fVar45 - *(float *)(unaff_x19 + 0x47)) * 0.5;
        if (fVar59 <= DAT_028aa298) {
          fVar59 = DAT_028aa298;
        }
        *(float *)((long)unaff_x19 + 0x234) = fVar45;
        fVar51 = (fVar45 - fVar59) * 20.0 + 0.5;
        fVar59 = DAT_02958220;
        if (fVar51 != INFINITY) {
          fVar59 = (float)(int)fVar51 / 20.0;
        }
        if (fVar59 <= fVar67) {
          fVar59 = fVar67;
        }
LAB_0248e598:
        *(float *)((long)unaff_x19 + 0x1dc) = fVar59;
        return;
      }
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      in_stack_00001788 = FUN_024d66ec();
      if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
        lVar24 = *in_stack_00000150;
        if ((lVar24 == 0) || (lVar28 = *(long *)(lVar24 + 0x38), lVar28 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar28 + 0x18) <= *in_stack_00000148)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fVar67 = *(float *)(unaff_x19 + 0x9a);
        fVar45 = 0.0;
        if ((0.0 < fVar67) && (fVar45 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
          fVar45 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
        }
        fVar45 = in_stack_000000c8 * *(float *)(unaff_x19 + 0x56) +
                 *(float *)(lVar28 + (int)*in_stack_00000148 * unaff_x21 + 0x154) +
                 (fVar45 - *(float *)((long)unaff_x19 + 0x4c4)) +
                 fStack0000000000000054 *
                 (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4));
      }
      else {
        lVar24 = unaff_x19[0x6c];
        *(undefined1 *)((long)unaff_x19 + 700) = 1;
        if (lVar24 == 0) goto LAB_02491464;
        fVar67 = *(float *)(unaff_x19 + 0x9a);
        fVar45 = *(float *)(unaff_x19 + 0x57) + in_stack_000000c8 * *(float *)(unaff_x19 + 0x56);
      }
      puVar7 = System_Threading_Mutex_TypeInfo;
      lVar24 = *(long *)(lVar24 + 0x38);
      if (lVar24 == 0) goto LAB_02491464;
      uVar34 = *(uint *)((long)unaff_x19 + 0x48c);
      if ((*(uint *)(lVar24 + 0x18) <= uVar34) ||
         (uVar41 = uVar34 - 1, *(uint *)(lVar24 + 0x18) <= uVar41))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar53 = (ulong)(uint)(fVar45 + *(float *)(unaff_x19 + 0x96));
      fVar68 = (fVar45 + *(float *)(unaff_x19 + 0x96) + fVar67) -
               *(float *)(lVar24 + (int)uVar34 * unaff_x21 + 0x158);
      if (((in_stack_00000068._4_1_ & 1) == 0 &&
           *(short *)(lVar24 + (long)(int)uVar41 * (long)iVar13 + 0x20) == 0xad) &&
         ((fVar68 < in_stack_000000a0 || ((int)unaff_x19[0x5b] == 0)))) {
        in_stack_00001788 = in_stack_00001788 - 1;
        in_stack_00000068._4_1_ = 0;
        in_stack_000017a8 = CONCAT44(0x2d,uVar41);
        *in_stack_00000148 = uVar41;
        goto LAB_0248cf04;
      }
      if (*(short *)(lVar24 + (int)uVar34 * unaff_x21 + 0x20) == 0xad) {
        in_stack_00000068._4_1_ = 1;
        goto LAB_0248cf04;
      }
      if ((bVar6 & *(byte *)(unaff_x19 + 0x46)) != 0) {
        fVar45 = *(float *)((long)unaff_x19 + 0x2cc);
        fVar67 = *(float *)(unaff_x19 + 0x59) / 100.0;
        if ((fVar67 <= fVar45) || ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c))) {
          fVar45 = *(float *)((long)unaff_x19 + 0x1dc);
          uVar53 = (ulong)(uint)fVar45;
          fVar67 = *(float *)(unaff_x19 + 0x49);
          if ((fVar67 < fVar45) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
          goto LAB_024914c0;
          goto LAB_0248cc70;
        }
LAB_0249155c:
        fVar70 = fVar51;
        if (0.0 < fVar45) {
          fVar70 = fVar51 / (1.0 - fVar45);
        }
        fVar45 = fVar45 + (fVar51 - fVar59 * (in_stack_000000d8._4_4_ + DAT_02958218)) / fVar70;
LAB_0249154c:
        if (fVar67 <= fVar45) {
          fVar45 = fVar67;
        }
        *(float *)((long)unaff_x19 + 0x2cc) = fVar45;
        return;
      }
LAB_0248cc70:
      lVar24 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar24 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar24 = *(long *)puVar7;
      }
      iVar11 = *(int *)(*(long *)(lVar24 + 0xb8) + 0xe78);
      if ((((float)iVar11 != fStack0000000000000034) && (iVar11 != -1)) && (bVar6 == 1)) {
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        if ((unaff_x19[0x6c] == 0) || (lVar24 = *(long *)(unaff_x19[0x6c] + 0x38), lVar24 == 0))
        goto LAB_02491464;
        uVar34 = *in_stack_00000148 - 1;
        if (*(uint *)(lVar24 + 0x18) <= uVar34)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fStack0000000000000034 = (float)iVar11;
        if (*(short *)(lVar24 + (long)(int)uVar34 * (long)iVar13 + 0x20) == 0xad) {
          in_stack_00001788 = in_stack_00001788 - 1;
          in_stack_00000068._4_1_ = 0;
          in_stack_000017a8 = CONCAT44(0x2d,uVar34);
          *in_stack_00000148 = uVar34;
          goto LAB_0248cf04;
        }
      }
      if (fVar68 <= in_stack_000000a0) {
        uVar53 = unaff_d13;
        FUN_024d7014(fStack0000000000000054,unaff_d13,in_stack_000000c8,
                     *(undefined4 *)((long)unaff_x19 + 0x2f4),fStack00000000000000c4,
                     fStack00000000000000cc,in_stack_000000d8._4_4_,fStack0000000000000048);
        bVar6 = 1;
        in_stack_00000068._4_1_ = 0;
        bVar5 = true;
LAB_0248cf04:
        unaff_s12 = 1.0;
        unaff_x22 = (long *)System_Threading_Mutex_TypeInfo;
        unaff_x25 = in_stack_00000150;
        unaff_x29 = (long *)StringLiteral_302;
        goto LAB_0248ab98;
      }
      if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
        *(undefined4 *)((long)unaff_x19 + 0x2dc) = *(undefined4 *)((long)unaff_x19 + 0x48c);
      }
      unaff_x29 = (long *)StringLiteral_302;
      unaff_x22 = (long *)System_Threading_Mutex_TypeInfo;
      if ((char)unaff_x19[0x46] != '\0') {
        fVar67 = *(float *)(unaff_x19 + 0x58);
        if ((fVar67 < *(float *)((long)unaff_x19 + 0x2b4)) &&
           (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
          fVar59 = *(float *)((long)unaff_x19 + 0x2b4) +
                   ((in_stack_00000018._4_4_ - fVar68) / (float)((int)unaff_x19[0x94] + 1)) /
                   fStack0000000000000054;
          if (fVar59 <= fVar67) {
            fVar59 = fVar67;
          }
LAB_0248ea5c:
          *(float *)((long)unaff_x19 + 0x2b4) = fVar59;
          return;
        }
        fVar45 = *(float *)((long)unaff_x19 + 0x2cc);
        fVar67 = *(float *)(unaff_x19 + 0x59) / 100.0;
        if ((fVar45 < fVar67) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
        goto LAB_0249155c;
        fVar45 = *(float *)((long)unaff_x19 + 0x1dc);
        uVar53 = (ulong)(uint)fVar45;
        fVar67 = *(float *)(unaff_x19 + 0x49);
        if ((fVar67 < fVar45) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
        goto LAB_024914c0;
      }
      unaff_s12 = 1.0;
      switch((int)unaff_x19[0x5b]) {
      case 0:
      case 2:
      case 4:
        uVar53 = unaff_d13;
        FUN_024d7014(fStack0000000000000054,unaff_d13,in_stack_000000c8,
                     *(undefined4 *)((long)unaff_x19 + 0x2f4),fStack00000000000000c4,
                     fStack00000000000000cc,in_stack_000000d8._4_4_,fStack0000000000000048);
        break;
      case 1:
        lVar24 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar24 = *unaff_x22;
        }
        lVar28 = *(long *)(lVar24 + 0xb8);
        lVar24 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
        if ((*(byte *)(lVar24 + 0x132) & 1) == 0) {
          lVar24 = FUN_00d5941c(lVar24);
        }
        lVar24 = *(long *)(*(long *)(lVar24 + 0xc0) + 8);
        if ((*(byte *)(lVar24 + 0x132) & 1) == 0) {
          lVar24 = FUN_00d5941c();
        }
        piVar19 = (int *)thunk_FUN_00d32ed4(lVar28 + 0x11f0,*(long *)(lVar24 + 0x80) + 0xa0);
        if (*piVar19 == 0) {
          in_stack_00000068._4_1_ = 0;
LAB_0248e4bc:
          in_stack_000017a8 = DAT_02941c08;
          unaff_s12 = 1.0;
          in_stack_00000148[0] = 0;
          in_stack_00000148[1] = 0;
          unaff_x25 = in_stack_00000150;
          in_stack_00001788 = 0xffffffff;
          goto LAB_0248ab98;
        }
        lVar24 = *unaff_x22;
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar24 = *unaff_x22;
        }
        FUN_013b8de4(*(long *)(lVar24 + 0xb8) + 0x11f0,&stack0x00000880,
                     *(undefined8 *)
                      Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                    );
        memcpy(&stack0x00000fe8,&stack0x00000880,0x378);
        iVar13 = FUN_024d66ec();
        in_stack_00000068._4_1_ = 0;
LAB_0248c900:
        unaff_s12 = 1.0;
        iVar11 = *(int *)((long)unaff_x19 + 0x48c) + -1;
        *(int *)((long)unaff_x19 + 0x48c) = iVar11;
        in_stack_00000140._4_4_ = in_stack_00000140._4_4_ + 1;
        unaff_x25 = in_stack_00000150;
        in_stack_00001788 = iVar13 - 1;
        in_stack_000017a8 = CONCAT44(0x2026,iVar11);
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
        in_stack_000017a8 = CONCAT44(3,uVar2);
        goto LAB_0248ab98;
      case 5:
        *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
        uVar53 = unaff_d13;
        FUN_024d7014(fStack0000000000000054,unaff_d13,in_stack_000000c8,
                     *(undefined4 *)((long)unaff_x19 + 0x2f4),fStack00000000000000c4,
                     fStack00000000000000cc,in_stack_000000d8._4_4_,fStack0000000000000048);
        *(undefined4 *)(unaff_x19 + 0x99) = 0;
        *(undefined4 *)(unaff_x19 + 0x9a) = 0;
        *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
        *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
        break;
      case 6:
        lVar24 = unaff_x19[0x5c];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar17 = FUN_02681b9c(lVar24,0,0);
        if ((uVar17 & 1) != 0) {
          plVar39 = (long *)unaff_x19[0x5c];
          uVar56 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar39 == (long *)0x0) goto LAB_02491464;
          (**(code **)(*plVar39 + 0x558))(plVar39,uVar56,*(undefined8 *)(*plVar39 + 0x560));
          lVar24 = unaff_x19[0x5c];
          if (lVar24 == 0) goto LAB_02491464;
          *(int *)(lVar24 + 0x3f8) = (int)unaff_x19[0x7f];
          FUN_024c910c(lVar24,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
          plVar39 = (long *)unaff_x19[0x5c];
          if (plVar39 == (long *)0x0) goto LAB_02491464;
          (**(code **)(*plVar39 + 0x7d8))(plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        }
        in_stack_00000068._4_1_ = 0;
LAB_0248ca1c:
        unaff_s12 = 1.0;
        unaff_x25 = in_stack_00000150;
        in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
        goto LAB_0248ab98;
      default:
        in_stack_00000068._4_1_ = 0;
        goto LAB_0248cf18;
      }
      in_stack_00000068._4_1_ = 0;
      bVar6 = 1;
      bVar5 = true;
      unaff_x22 = (long *)System_Threading_Mutex_TypeInfo;
      unaff_x25 = in_stack_00000150;
      unaff_x29 = (long *)StringLiteral_302;
      goto LAB_0248ab98;
    }
LAB_0248cf18:
    if (in_stack_000017bc != 0xad) {
      if (in_stack_000017bc != 9) {
        if (*(int *)((long)unaff_x19 + 0x63c) == 1) {
          (**(code **)(*unaff_x19 + 0x8c8))();
        }
        else if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
          (**(code **)(*unaff_x19 + 0x8b8))(in_stack_00000130._4_4_,fVar48);
        }
        uVar2 = *in_stack_00000148;
        if (bVar5) {
          *(uint *)(in_stack_00000070 + 0x1f0) = uVar2;
        }
        *(uint *)((long)unaff_x19 + 0x49c) = uVar2;
        *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
        if ((unaff_x19[0x6c] == 0) || (lVar24 = *(long *)(unaff_x19[0x6c] + 0x50), lVar24 == 0))
        goto LAB_02491464;
        if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
        bVar5 = false;
        *(float *)(lVar24 + 0x60) = fVar43;
        *(float *)(lVar24 + 100) = fVar64;
        goto FUN_0248d088;
      }
      lVar24 = *in_stack_00000150;
      if ((lVar24 == 0) || (lVar28 = *(long *)(lVar24 + 0x38), lVar28 == 0)) goto LAB_02491464;
      uVar2 = *in_stack_00000148;
      if (*(uint *)(lVar28 + 0x18) <= uVar2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      *(undefined1 *)(lVar28 + (int)uVar2 * unaff_x21 + 0x194) = 0;
      *(uint *)((long)unaff_x19 + 0x49c) = uVar2;
      lVar28 = *(long *)(lVar24 + 0x50);
      if (lVar28 == 0) goto LAB_02491464;
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      *(int *)(lVar28 + 0x2c) = *(int *)(lVar28 + 0x2c) + 1;
      goto LAB_0248cf8c;
    }
    if ((*in_stack_00000150 == 0) || (lVar24 = *(long *)(*in_stack_00000150 + 0x38), lVar24 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar24 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(undefined1 *)(lVar24 + (int)*in_stack_00000148 * unaff_x21 + 0x194) = 0;
  }
  else {
    if (((in_stack_000017bc & 0xfffffffe) == 10) && ((int)unaff_x19[0x5b] == 6)) {
      fVar51 = (float)uVar53;
      fVar59 = 0.0;
      if ((0.0 < fVar51) && (fVar59 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
        fVar59 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
      }
      uVar53 = (ulong)(uint)in_stack_000000a0;
      if (in_stack_000000a0 <
          (*(float *)(unaff_x19 + 0x96) - (*(float *)((long)unaff_x19 + 0x4c4) - fVar51)) + fVar59)
      {
        if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
          *(uint *)((long)unaff_x19 + 0x2dc) = uVar2;
        }
        unaff_x29 = (long *)StringLiteral_302;
        unaff_x22 = (long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        lVar24 = unaff_x19[0x5c];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            );
        }
        uVar17 = FUN_02681b9c(lVar24,0,0);
        if ((uVar17 & 1) != 0) {
          plVar39 = (long *)unaff_x19[0x5c];
          uVar56 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar39 == (long *)0x0) goto LAB_02491464;
          (**(code **)(*plVar39 + 0x558))(plVar39,uVar56,*(undefined8 *)(*plVar39 + 0x560));
          lVar24 = unaff_x19[0x5c];
          if (lVar24 == 0) goto LAB_02491464;
          *(int *)(lVar24 + 0x3f8) = (int)unaff_x19[0x7f];
          FUN_024c910c(lVar24,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
          plVar39 = (long *)unaff_x19[0x5c];
          if (plVar39 == (long *)0x0) goto LAB_02491464;
          (**(code **)(*plVar39 + 0x7d8))(plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        }
        unaff_x25 = in_stack_00000150;
        in_stack_000017a8 = CONCAT44(3,uVar2);
        goto LAB_0248ab98;
      }
    }
    if ((((in_stack_000017bc - 0x2007 < 0x23) &&
         ((1L << ((ulong)(in_stack_000017bc - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
        (in_stack_000017bc - 10 < 2)) || (in_stack_000017bc == 0xa0)) {
UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ObjectSpawner__get_objectPrefabs:
      if (((in_stack_000017bc != 0xad) && (in_stack_000017bc != 0x200b)) &&
         (in_stack_000017bc != 0x2060)) {
        lVar24 = *in_stack_00000150;
        if ((lVar24 == 0) || (lVar28 = *(long *)(lVar24 + 0x50), lVar28 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
        *(int *)(lVar28 + 0x2c) = *(int *)(lVar28 + 0x2c) + 1;
        *(int *)(lVar24 + 0x20) = *(int *)(lVar24 + 0x20) + 1;
      }
    }
    else {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar53 = FUN_016fa418(in_stack_000017bc,0);
      if ((uVar53 & 1) != 0)
      goto UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ObjectSpawner__get_objectPrefabs
      ;
    }
    if (in_stack_000017bc == 0xa0) {
      if ((*in_stack_00000150 == 0) || (lVar24 = *(long *)(*in_stack_00000150 + 0x50), lVar24 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
LAB_0248cf8c:
      *(int *)(lVar24 + 0x20) = *(int *)(lVar24 + 0x20) + 1;
    }
  }
FUN_0248d088:
  if (((int)unaff_x19[0x5b] == 1) && ((in_stack_000017bc == 0x2d || (!bVar8)))) {
    if (unaff_x19[0xca] == 0) goto LAB_02491464;
    fVar59 = *(float *)(unaff_x19 + 0x3c);
    iVar11 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
    if (unaff_x19[0xca] == 0) goto LAB_02491464;
    fVar43 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
    lVar24 = unaff_x19[0xc9];
    fVar51 = in_stack_00000080._4_4_;
    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
      fVar51 = 1.0;
    }
    if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto LAB_02491464;
    fVar67 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar68 = *(float *)(lVar24 + 0x2c);
    fVar64 = (float)FUN_026fd668(*(long *)(lVar24 + 0x20),0);
    fVar45 = *_fStack0000000000000098;
    fVar64 = fVar67 * (fVar59 / (float)iVar11) * fVar43 * fVar51 * fVar68 * fVar64;
    fVar59 = *in_stack_00000088;
    if ((in_stack_000017bc == 10) && (*(int *)((long)unaff_x19 + 0x48c) != (int)unaff_x19[0x92])) {
      if ((*in_stack_00000150 == 0) || (lVar24 = *(long *)(*in_stack_00000150 + 0x38), lVar24 == 0))
      goto LAB_02491464;
      uVar2 = *(int *)((long)unaff_x19 + 0x48c) - 1;
      if (*(uint *)(lVar24 + 0x18) <= uVar2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (unaff_x19[0xca] == 0) goto LAB_02491464;
      fVar51 = *(float *)(lVar24 + (long)(int)uVar2 * (long)iVar13 + 0x60);
      iVar11 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
      if (unaff_x19[0xca] == 0) goto LAB_02491464;
      fVar67 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
      lVar24 = unaff_x19[0xc9];
      fVar43 = in_stack_00000080._4_4_;
      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
        fVar43 = 1.0;
      }
      if ((lVar24 == 0) || (*(long *)(lVar24 + 0x20) == 0)) goto LAB_02491464;
      fVar68 = *(float *)((long)unaff_x19 + 0x3fc);
      fVar47 = *(float *)(lVar24 + 0x2c);
      fVar64 = (float)FUN_026fd668(*(long *)(lVar24 + 0x20),0);
      if ((*in_stack_00000150 == 0) || (lVar24 = *(long *)(*in_stack_00000150 + 0x50), lVar24 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      fVar45 = *(float *)(lVar24 + 0x60);
      fVar59 = *(float *)(lVar24 + 100);
      fVar64 = fVar68 * (fVar51 / (float)iVar11) * fVar67 * fVar43 * fVar47 * fVar64;
    }
    fVar68 = *(float *)(unaff_x19 + 0x9a);
    fVar43 = *(float *)(unaff_x19 + 0x96);
    fVar47 = *(float *)((long)unaff_x19 + 0x4c4);
    fVar51 = 0.0;
    fVar67 = 0.0;
    if ((0.0 < fVar68) && (fVar67 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
      fVar67 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
    }
    fVar48 = *(float *)(unaff_x19 + 199);
    if ((char)unaff_x19[0x1d] == '\0') {
      if ((unaff_x19[0xc9] == 0) || (lVar24 = *(long *)(unaff_x19[0xc9] + 0x20), lVar24 == 0))
      goto LAB_02491464;
      FUN_026fd62c(&stack0x00000880,lVar24,0);
      unaff_x28[0x1cd] = unaff_x28[1];
      unaff_x28[0x1cc] = *unaff_x28;
      fVar51 = (float)FUN_026fd474(&stack0x000016e0,0);
    }
    puVar7 = System_Threading_Mutex_TypeInfo;
    fVar60 = *(float *)(unaff_x19 + 0x6b);
    fVar59 = (fStack0000000000000090 - fVar45) - fVar59;
    bVar9 = true;
    if ((fVar60 <= fVar59) && (bVar9 = false, !NAN(fVar60))) {
      bVar9 = fVar60 == -1.0;
    }
    if (!bVar9) {
      fVar59 = fVar60;
    }
    fVar45 = _DAT_0294c6e8;
    if ((uVar31 & 0x18) == 0) {
      fVar45 = 1.0;
    }
    if (((fVar43 - (fVar47 - fVar68)) + fVar67 < in_stack_000000a0) &&
       (ABS(fVar48) + fVar64 * fVar51 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) <
        fVar45 * fVar59)) {
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_024d69d4();
      lVar24 = *(long *)(*(long *)puVar7 + 0xb8);
      memcpy(&stack0x00000508,(void *)(lVar24 + 0x788),0x378);
      FUN_013b86dc(lVar24 + 0x11f0,&stack0x00000508,
                   *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__);
    }
  }
  unaff_d13 = (ulong)(uint)fVar70;
  unaff_s12 = 1.0;
  lVar24 = *in_stack_00000150;
  if ((lVar24 == 0) || (lVar28 = *(long *)(lVar24 + 0x38), lVar28 == 0)) goto LAB_02491464;
  if (*(uint *)(lVar28 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  uVar2 = *(uint *)(unaff_x19 + 0x94);
  lVar28 = lVar28 + (int)*in_stack_00000148 * unaff_x21;
  *(uint *)(lVar28 + 100) = uVar2;
  *(int *)(lVar28 + 0x68) = (int)unaff_x19[0x95];
  if ((bVar8) ||
     ((in_stack_000017bc < 0xe && ((1 << (ulong)(in_stack_000017bc & 0x1f) & 0x2c00U) != 0)))) {
    lVar24 = *(long *)(lVar24 + 0x50);
    if (lVar24 == 0) goto LAB_02491464;
    if (*(uint *)(lVar24 + 0x18) <= uVar2)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    if (*(int *)(lVar24 + (long)(int)uVar2 * 0x5c + 0x24) == 1) goto LAB_0248d42c;
  }
  else {
    lVar24 = *(long *)(lVar24 + 0x50);
    if (lVar24 == 0) goto LAB_02491464;
LAB_0248d42c:
    if (*(uint *)(lVar24 + 0x18) <= uVar2)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(int *)(lVar24 + (long)(int)uVar2 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
  }
  if (in_stack_000017bc == 9) {
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar59 = (float)FUN_026fd208(*unaff_x27 + 0x50,0);
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar43 = *(float *)(unaff_x19 + 199);
    fVar51 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x27 + 0x1b9));
    fVar59 = fVar70 * fVar59 * fVar51;
    fVar51 = fVar59 * (float)(int)(fVar43 / fVar59);
    uVar53 = (ulong)(uint)fVar51;
    if (fVar51 <= fVar43) {
      fVar51 = fVar43 + fVar59;
    }
LAB_0248d614:
    *(float *)(unaff_x19 + 199) = fVar51;
  }
  else if (*(float *)(unaff_x19 + 0x55) == 0.0) {
    if ((char)unaff_x19[0x1d] == '\0') {
      fVar43 = unaff_s12;
      if (*(char *)((long)unaff_x19 + 0x46c) != '\0') {
        fVar43 = (float)thunk_FUN_026935f0(_uStack0000000000000060,0);
      }
      fVar51 = *(float *)(unaff_x19 + 199);
      fVar64 = (float)FUN_026fd474(&stack0x00001770,0);
      if (unaff_x19[0x1f] == 0) goto LAB_02491464;
      fVar59 = 1.0 - *(float *)((long)unaff_x19 + 0x2cc);
      fVar51 = fVar51 + fVar59 * (*(float *)((long)unaff_x19 + 0x2a4) +
                                 fVar70 * (fVar44 + fVar43 * fVar64) +
                                 in_stack_000000c8 *
                                 (fStack00000000000000c4 +
                                 fStack00000000000000cc + *(float *)(unaff_x19[0x1f] + 0x1ac)));
      *(float *)(unaff_x19 + 199) = fVar51;
      goto joined_r0x0248d568;
    }
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar51 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (*(float *)((long)unaff_x19 + 0x2a4) +
             fVar70 * fVar44 +
             in_stack_000000c8 *
             (fStack00000000000000c4 + fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac)));
    uVar53 = (ulong)(uint)fVar51;
    fVar51 = *(float *)(unaff_x19 + 199) - fVar51;
    *(float *)(unaff_x19 + 199) = fVar51;
    if ((uVar12 != 0) || (in_stack_000017bc == 0x200b)) {
      fVar59 = in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
      uVar53 = (ulong)(uint)fVar59;
      fVar51 = fVar51 - fVar59;
      goto LAB_0248d614;
    }
  }
  else {
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar59 = *(float *)(unaff_x19 + 199);
    fVar51 = fVar59 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                      (*(float *)((long)unaff_x19 + 0x2a4) +
                      (*(float *)(unaff_x19 + 0x55) - fVar46) +
                      in_stack_000000c8 * (fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac)))
    ;
    *(float *)(unaff_x19 + 199) = fVar51;
joined_r0x0248d568:
    if ((uVar12 != 0) || (uVar53 = (ulong)(uint)fVar59, in_stack_000017bc == 0x200b)) {
      fVar59 = in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
      uVar53 = (ulong)(uint)fVar59;
      fVar51 = fVar51 + fVar59;
      goto LAB_0248d614;
    }
  }
  lVar24 = *in_stack_00000150;
  if ((lVar24 == 0) || (lVar28 = *(long *)(lVar24 + 0x38), lVar28 == 0)) goto LAB_02491464;
  uVar2 = *in_stack_00000148;
  uVar31 = (uint)*(undefined8 *)(lVar28 + 0x18);
  if (uVar31 <= uVar2)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar28 + (int)uVar2 * unaff_x21 + 0x144) = fVar51;
  uVar34 = in_stack_000017bc;
  if ((int)in_stack_000017bc < 0xd) {
    if ((in_stack_000017bc - 10 < 2) || (in_stack_000017bc == 3)) goto LAB_0248d6b8;
LAB_0248d69c:
    if (((bool)(bVar8 & in_stack_000017bc == 0x2d)) || ((float)uVar2 == in_stack_00000078._4_4_))
    goto LAB_0248d6b8;
  }
  else {
    if (1 < in_stack_000017bc - 0x2028) {
      if (in_stack_000017bc != 0xd) goto LAB_0248d69c;
      uVar53 = 0;
      *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
      if ((float)uVar2 != in_stack_00000078._4_4_) goto LAB_0248dc08;
    }
LAB_0248d6b8:
    if (0.0 < *(float *)(unaff_x19 + 0x9a)) {
      fVar59 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
      if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (((fStack000000000000004c < ABS(fVar59)) && (*(char *)((long)unaff_x19 + 700) == '\0')) &&
         (*(char *)((long)unaff_x19 + 0x334) == '\0')) {
        FUN_024d6ca8(fVar59);
        *(float *)((long)unaff_x19 + 0x4bc) = *(float *)((long)unaff_x19 + 0x4bc) - fVar59;
        *(float *)(unaff_x19 + 0x9a) = fVar59 + *(float *)(unaff_x19 + 0x9a);
        puVar7 = System_Threading_Mutex_TypeInfo;
        lVar24 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar24 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar24 = *(long *)puVar7;
        }
        lVar28 = *(long *)(lVar24 + 0xb8);
        if (*(int *)(lVar28 + 0x7ac) == (int)unaff_x19[0x94]) {
          if (*(int *)(lVar24 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar28 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          FUN_013b8de4(lVar28 + 0x11f0,&stack0x00000880,
                       *(undefined8 *)
                        Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                      );
          lVar24 = *(long *)System_Threading_Mutex_TypeInfo;
          memcpy((void *)(*(long *)(lVar24 + 0xb8) + 0x788),&stack0x00000880,0x378);
          lVar24 = *(long *)(lVar24 + 0xb8);
          *(float *)(lVar24 + 0x7bc) = fVar59 + *(float *)(lVar24 + 0x7bc);
          *(float *)(lVar24 + 0x800) = fVar59 + *(float *)(lVar24 + 0x800);
          memcpy(&stack0x00000190,(void *)(lVar24 + 0x788),0x378);
          FUN_013b86dc(lVar24 + 0x11f0,&stack0x00000190,
                       *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__);
        }
      }
    }
    fVar43 = *(float *)(unaff_x19 + 0x9a);
    *(undefined1 *)((long)unaff_x19 + 0x334) = 0;
    fVar51 = *(float *)((long)unaff_x19 + 0x4c4) - fVar43;
    fVar59 = *(float *)((long)unaff_x19 + 0x4bc);
    if (fVar51 <= *(float *)((long)unaff_x19 + 0x4bc)) {
      fVar59 = fVar51;
    }
    *(float *)((long)unaff_x19 + 0x4bc) = fVar59;
    fVar64 = *(float *)(unaff_x19 + 0x98);
    if (*(char *)((long)unaff_x28 + 0xf34) == '\0') {
      in_stack_000017b8 = fVar59;
    }
    if ((*(char *)((long)unaff_x19 + 0x32c) != '\0') &&
       (((int)unaff_x19[100] <= *(int *)((long)unaff_x19 + 0x48c) ||
        ((int)unaff_x19[0x65] <= (int)unaff_x19[0x94])))) {
      *(undefined1 *)((long)unaff_x28 + 0xf34) = 1;
    }
    lVar24 = *in_stack_00000150;
    if ((lVar24 == 0) || (lVar28 = *(long *)(lVar24 + 0x50), lVar28 == 0)) goto LAB_02491464;
    uVar2 = *(uint *)(unaff_x19 + 0x94);
    if (*(uint *)(lVar28 + 0x18) <= uVar2)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar40 = lVar28 + (long)(int)uVar2 * 0x5c;
    *(int *)(lVar40 + 0x34) = (int)unaff_x19[0x92];
    iVar11 = (int)unaff_x19[0x92];
    if ((int)unaff_x19[0x92] <= *(int *)((long)unaff_x19 + 0x494)) {
      iVar11 = *(int *)((long)unaff_x19 + 0x494);
    }
    *(int *)((long)unaff_x19 + 0x494) = iVar11;
    *(int *)(lVar40 + 0x38) = iVar11;
    *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x48c);
    *(undefined4 *)(lVar40 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x48c);
    iVar11 = *(int *)((long)unaff_x19 + 0x494);
    if (*(int *)((long)unaff_x19 + 0x494) <= *(int *)((long)unaff_x19 + 0x49c)) {
      iVar11 = *(int *)((long)unaff_x19 + 0x49c);
    }
    *(int *)((long)unaff_x19 + 0x49c) = iVar11;
    *(int *)(lVar40 + 0x40) = iVar11;
    *(int *)(lVar40 + 0x24) = (*(int *)(lVar40 + 0x3c) - *(int *)(lVar40 + 0x34)) + 1;
    *(undefined4 *)(lVar40 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
    lVar24 = *(long *)(lVar24 + 0x38);
    if (lVar24 == 0) goto LAB_02491464;
    if (*(uint *)(lVar24 + 0x18) <= *(uint *)((long)unaff_x19 + 0x494))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    uVar71 = *(undefined4 *)(lVar24 + (int)*(uint *)((long)unaff_x19 + 0x494) * unaff_x21 + 0x11c);
    lVar28 = lVar28 + (long)(int)uVar2 * 0x5c;
    *(float *)(lVar28 + 0x70) = fVar51;
    *(undefined4 *)(lVar28 + 0x6c) = uVar71;
    lVar24 = *in_stack_00000150;
    if ((lVar24 == 0) || (lVar28 = *(long *)(lVar24 + 0x50), lVar28 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar24 = *(long *)(lVar24 + 0x38);
    if (lVar24 == 0) goto LAB_02491464;
    if (*(uint *)(lVar24 + 0x18) <= *(uint *)((long)unaff_x19 + 0x49c))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    fVar64 = fVar64 - fVar43;
    lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
    *(undefined4 *)(lVar28 + 0x74) =
         *(undefined4 *)(lVar24 + (int)*(uint *)((long)unaff_x19 + 0x49c) * unaff_x21 + 0x128);
    *(float *)(lVar28 + 0x78) = fVar64;
    lVar24 = *in_stack_00000150;
    if ((lVar24 == 0) || (lVar40 = *(long *)(lVar24 + 0x50), lVar40 == 0)) goto LAB_02491464;
    lVar18 = (long)(int)*(uint *)(unaff_x19 + 0x94);
    if (*(uint *)(lVar40 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar28 = lVar40 + lVar18 * 0x5c;
    *(float *)(lVar28 + 0x44) = *(float *)(lVar28 + 0x74) - fVar70 * in_stack_00000130._4_4_;
    *(float *)(lVar28 + 0x5c) = in_stack_000000d8._4_4_;
    if (*(int *)(lVar28 + 0x24) == 1) {
      *(int *)(lVar40 + lVar18 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
    }
    if ((*unaff_x27 == 0) || (lVar28 = *(long *)(lVar24 + 0x38), lVar28 == 0)) goto LAB_02491464;
    lVar37 = (long)(int)*(uint *)((long)unaff_x19 + 0x49c);
    uVar31 = (uint)*(undefined8 *)(lVar28 + 0x18);
    if (uVar31 <= *(uint *)((long)unaff_x19 + 0x49c))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    if ((*(char *)(lVar28 + lVar37 * unaff_x21 + 0x194) == '\0') &&
       (lVar37 = (long)(int)*(uint *)(unaff_x19 + 0x93), uVar31 <= *(uint *)(unaff_x19 + 0x93)))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    fVar70 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (in_stack_000000c8 *
              (fStack00000000000000c4 + fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac)) -
             *(float *)((long)unaff_x19 + 0x2a4));
    fVar59 = -fVar70;
    if ((char)unaff_x19[0x1d] != '\0') {
      fVar59 = fVar70;
    }
    lVar40 = lVar40 + lVar18 * 0x5c;
    *(float *)(lVar40 + 0x58) = *(float *)(lVar28 + lVar37 * unaff_x21 + 0x144) + fVar59;
    fVar59 = *(float *)(unaff_x19 + 0x9a);
    *(float *)(lVar40 + 0x48) = fStack0000000000000050 + (fVar64 - fVar51);
    *(float *)(lVar40 + 0x4c) = fVar64;
    uVar53 = (ulong)(uint)(0.0 - fVar59);
    *(float *)(lVar40 + 0x50) = 0.0 - fVar59;
    *(float *)(lVar40 + 0x54) = fVar51;
    unaff_x22 = (long *)System_Threading_Mutex_TypeInfo;
    if ((int)in_stack_000017bc < 0x2d) {
      if (in_stack_000017bc - 10 < 2) goto LAB_0248dad8;
      if (in_stack_000017bc == 3) {
        if (unaff_x19[0x8e] == 0) goto LAB_02491464;
        in_stack_00001788 = (uint)*(undefined8 *)(unaff_x19[0x8e] + 0x18);
        uVar34 = 3;
      }
    }
    else if ((in_stack_000017bc - 0x2028 < 2) || (in_stack_000017bc == 0x2d)) goto LAB_0248dad8;
  }
LAB_0248dc08:
  uVar2 = *in_stack_00000148;
  if (uVar31 <= uVar2)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if (*(char *)(lVar28 + (int)uVar2 * unaff_x21 + 0x194) != '\0') {
    lVar28 = lVar28 + (int)uVar2 * unaff_x21;
    uVar17 = *(ulong *)(lVar28 + 0x11c);
    uVar53 = *(ulong *)(in_stack_00000070 + 0x230);
    *(ulong *)(in_stack_00000070 + 0x230) =
         uVar17 ^ (uVar17 ^ uVar53) &
                  CONCAT44(-(uint)((float)(uVar53 >> 0x20) < (float)(uVar17 >> 0x20)),
                           -(uint)((float)uVar53 < (float)uVar17));
    uVar17 = *(ulong *)(in_stack_00000070 + 0x238);
    uVar53 = *(ulong *)(lVar28 + 0x128);
    *(ulong *)(in_stack_00000070 + 0x238) =
         uVar53 ^ (uVar53 ^ uVar17) &
                  CONCAT44(-(uint)((float)(uVar53 >> 0x20) < (float)(uVar17 >> 0x20)),
                           -(uint)((float)uVar53 < (float)uVar17));
  }
  if (((int)unaff_x19[0x5b] == 5) &&
     ((0xd < uVar34 || ((1 << (ulong)(uVar34 & 0x1f) & 0x2c00U) == 0)))) {
    lVar28 = *(long *)(lVar24 + 0x58);
    if (lVar28 == 0) goto LAB_02491464;
    iVar11 = (int)unaff_x19[0x95] + 1;
    if (*(int *)(lVar28 + 0x18) < iVar11) {
      if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01147c08((long *)(lVar24 + 0x58),iVar11,1,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerMove__);
      lVar24 = *in_stack_00000150;
      if (lVar24 == 0) goto LAB_02491464;
    }
    lVar28 = *(long *)(lVar24 + 0x58);
    if (lVar28 == 0) goto LAB_02491464;
    uVar31 = *(uint *)(unaff_x19 + 0x95);
    lVar40 = (long)(int)uVar31;
    uVar2 = *(uint *)(lVar28 + 0x18);
    if (uVar2 <= uVar31)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar18 = lVar28 + lVar40 * 0x14;
    fVar51 = *(float *)(lVar18 + 0x30);
    uVar53 = (ulong)(uint)fVar51;
    *(undefined4 *)(lVar18 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
    fVar59 = *(float *)((long)unaff_x19 + 0x4bc);
    if (fVar51 <= *(float *)((long)unaff_x19 + 0x4bc)) {
      fVar59 = fVar51;
    }
    *(float *)(lVar18 + 0x30) = fVar59;
    uVar34 = *(uint *)((long)unaff_x19 + 0x48c);
    if (uVar34 == 0 && uVar31 == 0) {
      *(uint *)(lVar28 + lVar40 * 0x14 + 0x20) = uVar34;
    }
    else {
      uVar41 = uVar34 - 1;
      if (0 < (int)uVar34) {
        lVar24 = *(long *)(lVar24 + 0x38);
        if (lVar24 == 0) goto LAB_02491464;
        if (*(uint *)(lVar24 + 0x18) <= uVar41)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        if (uVar31 != *(uint *)(lVar24 + (long)(int)uVar41 * (long)iVar13 + 0x68)) {
          if (uVar2 <= uVar31 - 1)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          *(uint *)(lVar28 + 0x20 + (long)(int)(uVar31 - 1) * 0x14 + 4) = uVar41;
          *(uint *)(lVar28 + 0x20 + lVar40 * 0x14) = uVar34;
          goto LAB_0248dc84;
        }
      }
      if ((float)uVar34 == in_stack_00000078._4_4_) {
        *(float *)(lVar28 + lVar40 * 0x14 + 0x24) = in_stack_00000078._4_4_;
      }
    }
  }
LAB_0248dc84:
  unaff_x22 = (long *)System_Threading_Mutex_TypeInfo;
  if (((char)unaff_x19[0x5a] == '\0') &&
     ((6 < *(uint *)(unaff_x19 + 0x5b) ||
      ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5b) & 0x1f) & 0x4aU) == 0)))) goto LAB_0248e168;
  if ((uVar12 == 0) &&
     (((in_stack_000017bc != 0x2d && (in_stack_000017bc != 0x200b)) && (in_stack_000017bc != 0xad)))
     ) {
    if (*(char *)((long)unaff_x19 + 0x2d2) != '\0') goto LAB_0248ded4;
LAB_0248de4c:
    if (((((0x2bfd < in_stack_000017bc - 0xac01) && (0x1d < in_stack_000017bc - 0xa961)) &&
         (0xfd < in_stack_000017bc - 0x1101)) || (uVar17 = FUN_024e95f0(0), (uVar17 & 1) != 0)) &&
       ((((0xed < in_stack_000017bc - 0xff01 && (0x1d < in_stack_000017bc - 0xfe31)) &&
         (0x717d < in_stack_000017bc - 0x2e81)) && (0x1fd < in_stack_000017bc - 0xf901))))
    goto LAB_0248ded4;
    lVar24 = FUN_024e94b0(0);
    if ((lVar24 == 0) || (*(long *)(lVar24 + 0x10) == 0)) goto LAB_02491464;
    uVar17 = FUN_0129aa60(*(long *)(lVar24 + 0x10),&stack0x00000880,
                          *(undefined8 *)
                           System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                         );
    if ((int)in_stack_00000078._4_4_ <= (int)*in_stack_00000148) {
      in_stack_00000880 = in_stack_000017bc;
      if ((uVar17 & 1) == 0) {
LAB_0248e1b0:
        unaff_x22 = (long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_024d69d4();
        bVar6 = 0;
        goto LAB_0248e168;
      }
LAB_0248e0dc:
      unaff_x22 = (long *)System_Threading_Mutex_TypeInfo;
      if (uVar27 != uVar23 || ((bVar6 ^ 0xff) & 1) != 0) goto LAB_0248e168;
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__get_invalidColorGradient;
    }
    lVar24 = FUN_024e94b0(0);
    if (((lVar24 == 0) || (*in_stack_00000150 == 0)) ||
       (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar28 + 0x18) <= *in_stack_00000148 + 1)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    if (*(long *)(lVar24 + 0x18) == 0) goto LAB_02491464;
    in_stack_00000880 =
         (uint)*(ushort *)(lVar28 + (long)(int)(*in_stack_00000148 + 1) * (long)iVar13 + 0x20);
    uVar20 = FUN_0129aa60(*(long *)(lVar24 + 0x18),&stack0x00000880,
                          *(undefined8 *)
                           System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                         );
    if ((uVar17 & 1) != 0) goto LAB_0248e0dc;
    if ((uVar20 & 1) == 0) goto LAB_0248e1b0;
    unaff_x22 = (long *)System_Threading_Mutex_TypeInfo;
    if (bVar6 == 0) {
      bVar6 = 0;
      goto LAB_0248e168;
    }
    if (uVar12 != 0) goto LAB_0248e100;
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
        bVar6 = 0;
        *(undefined4 *)(*(long *)(*unaff_x22 + 0xb8) + 0xe78) = 0xffffffff;
        goto LAB_0248e168;
      }
      goto LAB_0248de4c;
    }
LAB_0248ded4:
    if (bVar6 == 0) {
      bVar6 = 0;
      unaff_x22 = (long *)System_Threading_Mutex_TypeInfo;
      goto LAB_0248e168;
    }
    if ((in_stack_000017bc == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) == 0) {
UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__get_invalidColorGradient:
      unaff_x22 = (long *)System_Threading_Mutex_TypeInfo;
      if (uVar12 == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__get_smoothMovement;
    }
LAB_0248e100:
    unaff_x22 = (long *)System_Threading_Mutex_TypeInfo;
    if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_024d69d4();
  }
UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__get_smoothMovement:
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_024d69d4();
  bVar6 = 1;
LAB_0248e168:
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  unaff_x29 = (long *)StringLiteral_302;
  FUN_024d69d4();
  *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
  unaff_x25 = in_stack_00000150;
  goto LAB_0248ab98;
LAB_0248dad8:
  if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  unaff_x29 = (long *)StringLiteral_302;
  FUN_024d69d4();
  lVar24 = unaff_x19[0x6c];
  *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
  iVar13 = (int)unaff_x19[0x94] + 1;
  *(int *)(unaff_x19 + 0x94) = iVar13;
  *(int *)(unaff_x19 + 0x92) = *(int *)((long)unaff_x19 + 0x48c) + 1;
  if ((lVar24 == 0) || (*(long *)(lVar24 + 0x50) == 0)) goto LAB_02491464;
  if (*(int *)(*(long *)(lVar24 + 0x50) + 0x18) <= iVar13) {
    FUN_024d6e60();
    lVar24 = unaff_x19[0x6c];
    if (lVar24 == 0) goto LAB_02491464;
  }
  lVar24 = *(long *)(lVar24 + 0x38);
  if (lVar24 == 0) goto LAB_02491464;
  if (*(uint *)(lVar24 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  unaff_s8 = *(float *)(lVar24 + (int)*in_stack_00000148 * unaff_x21 + 0x154);
  if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
    fVar59 = 0.0;
    if ((in_stack_000017bc == 0x2029) || (in_stack_000017bc == 10)) {
      fVar59 = *(float *)((long)unaff_x19 + 0x2c4);
    }
    uVar21 = 0;
    fVar59 = *(float *)(unaff_x19 + 0x9a) +
             unaff_s8 + (0.0 - *(float *)((long)unaff_x19 + 0x4c4)) +
             fStack0000000000000054 * (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4))
             + in_stack_000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar59);
  }
  else {
    if ((in_stack_000017bc == 0x2029) || (fVar59 = 0.0, in_stack_000017bc == 10)) {
      fVar59 = *(float *)((long)unaff_x19 + 0x2c4);
    }
    uVar21 = 1;
    fVar59 = *(float *)(unaff_x19 + 0x9a) +
             *(float *)(unaff_x19 + 0x57) +
             in_stack_000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar59);
  }
  *(float *)(unaff_x19 + 0x9a) = fVar59;
  *(undefined1 *)((long)unaff_x19 + 700) = uVar21;
  param_1 = *unaff_x22;
  in_w8 = *(int *)(param_1 + 0xe0);
  unaff_x25 = in_stack_00000150;
  goto code_r0x0248dd9c;
LAB_0248ef74:
  uVar12 = uVar23 - 1;
  if (*(uint *)(lVar24 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x50), lVar28 == 0))
  goto LAB_02491464;
  lVar18 = (long)(int)uVar12;
  lVar40 = lVar24 + lVar18 * 0x178;
  uVar2 = *(uint *)(lVar40 + 100);
  if (*(uint *)(lVar28 + 0x18) <= uVar2)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar35 = *(long *)(lVar40 + 0x38);
  uVar32 = (uint)*(ushort *)(lVar40 + 0x20);
  lVar37 = (long)(int)uVar2;
  lVar28 = lVar28 + lVar37 * 0x5c;
  uVar31 = *(uint *)(lVar28 + 0x3c);
  uVar34 = *(uint *)(lVar28 + 0x40);
  lVar40 = (long)(int)uVar34;
  iVar14 = *(int *)(lVar28 + 0x28);
  iVar15 = *(int *)(lVar28 + 0x2c);
  uVar41 = *(uint *)(lVar28 + 0x68);
  fVar47 = *(float *)(lVar28 + 0x5c);
  fVar48 = *(float *)(lVar28 + 0x60);
  iVar3 = *(int *)(lVar28 + 0x20);
  fVar67 = *(float *)(lVar28 + 0x4c);
  fVar44 = *(float *)(lVar28 + 0x54);
  fVar43 = *(float *)(lVar28 + 0x58);
  fVar68 = *(float *)(lVar28 + 0x6c);
  fVar46 = *(float *)(lVar28 + 0x70);
  fVar64 = *(float *)(lVar28 + 0x74);
  fVar45 = *(float *)(lVar28 + 0x78);
  fVar60 = fVar47 + fVar48;
  if ((int)uVar41 < 9) {
    switch(uVar41) {
    case 1:
      if ((char)unaff_x19[0x1d] == '\0') {
        fStack00000000000000c4 = fVar48 + 0.0;
      }
      else {
        fStack00000000000000c4 = 0.0 - fVar43;
      }
      break;
    case 2:
LAB_0248f124:
      fStack00000000000000c4 = (fVar48 + fVar47 * 0.5) - fVar43 * 0.5;
      break;
    default:
      goto switchD_0248f070_caseD_3;
    case 4:
      fStack00000000000000c4 = fVar60 - fVar43;
      if ((char)unaff_x19[0x1d] != '\0') {
        fStack00000000000000c4 = fVar60;
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
    if (uVar32 < 0xad) {
      if ((uVar32 != 3) && (uVar32 != 10)) goto LAB_0248f0c8;
    }
    else if ((uVar32 != 0xad) && ((uVar32 != 0x200b && (uVar32 != 0x2060)))) {
LAB_0248f0c8:
      if (*(uint *)(lVar24 + 0x18) <= uVar31)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar4 = *(undefined2 *)(lVar24 + (long)(int)uVar31 * 0x178 + 0x20);
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar53 = FUN_016f9f84(uVar4,0);
      if ((uVar53 & 1) == 0) {
        bVar1 = (int)uVar2 < (int)unaff_x19[0x94];
      }
      else {
        bVar1 = false;
      }
      if ((fVar43 <= fVar47) && (!bVar1 && (uVar41 >> 4 & 1) == 0)) {
        fStack00000000000000c4 = fVar48;
        if ((char)unaff_x19[0x1d] != '\0') {
          fStack00000000000000c4 = fVar60;
        }
        goto LAB_0248f194;
      }
      if (((uVar23 == 1) || (uVar2 != uVar27)) || (uVar12 == *(uint *)((long)unaff_x19 + 0x31c))) {
        fStack00000000000000c4 = fVar48;
        if ((char)unaff_x19[0x1d] != '\0') {
          fStack00000000000000c4 = fVar60;
        }
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        fStack0000000000000024 = (float)FUN_016fa418(uVar32,0);
        in_stack_000000b8 = 0;
      }
      else {
        cVar22 = (char)unaff_x19[0x1d];
        fVar48 = -fVar43;
        if (cVar22 != '\0') {
          fVar48 = fVar43;
        }
        if (*(uint *)(lVar24 + 0x18) <= uVar31)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fVar43 = 1.0;
        iVar15 = (int)*(char *)(lVar24 + (long)(int)uVar31 * 0x178 + 0x194) +
                 (-iVar3 - ((uint)fStack0000000000000024 & 1)) + iVar15 + -1;
        if (0 < iVar15) {
          fVar43 = *(float *)((long)unaff_x19 + 0x2d4);
        }
        if (iVar15 < 1) {
          iVar15 = 1;
        }
        if (uVar32 == 9) {
LAB_02490fe0:
          fVar43 = 1.0 - fVar43;
        }
        else {
          if (uVar32 != 0xa0) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar53 = FUN_016fa418(uVar32,0);
            cVar22 = (char)unaff_x19[0x1d];
            if ((uVar53 & 1) != 0) goto LAB_02490fe0;
          }
          iVar15 = (iVar3 - (~(uint)fStack0000000000000024 & 1)) + iVar14;
        }
        fVar43 = ((fVar47 + fVar48) * fVar43) / (float)iVar15;
        if (cVar22 == '\0') {
          fStack00000000000000c4 = fStack00000000000000c4 + fVar43;
          in_stack_000000b8 =
               CONCAT44((float)((ulong)in_stack_000000b8 >> 0x20) + 0.0,
                        (float)in_stack_000000b8 + 0.0);
        }
        else {
          fStack00000000000000c4 = fStack00000000000000c4 - fVar43;
        }
      }
    }
  }
  else if (uVar41 == 0x20) {
    fVar43 = fVar68 + fVar64;
    goto LAB_0248f124;
  }
switchD_0248f070_caseD_3:
  uVar41 = (uint)*(undefined8 *)(lVar24 + 0x18);
  if (uVar41 <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar28 = lVar24 + lVar18 * 0x178;
  fVar48 = fStack0000000000000090 + fStack00000000000000c4;
  fVar43 = SUB84(in_stack_00000088,0) + (float)in_stack_000000b8;
  fVar47 = (float)((ulong)in_stack_00000088 >> 0x20) + (float)((ulong)in_stack_000000b8 >> 0x20);
  plVar42 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(char *)(lVar28 + 0x194) == '\0') goto LAB_0248fabc;
  iVar14 = *(int *)(lVar24 + lVar18 * 0x178 + 0x2c);
  if (iVar14 != 0) goto LAB_0248f808;
  fVar70 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)uVar2,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
  case 0:
    lVar26 = lVar24 + lVar18 * 0x178;
    *(undefined4 *)(lVar26 + 0x84) = 0;
    *(undefined4 *)(lVar26 + 0xac) = 0;
    *(undefined4 *)(lVar26 + 0xd4) = 0x3f800000;
    fVar70 = 1.0;
    break;
  case 1:
    fVar45 = *(float *)(lVar24 + lVar18 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
      lVar26 = lVar24 + lVar18 * 0x178;
      fVar64 = (fStack00000000000000c4 + fVar45) - *(float *)(in_stack_00000070 + 0x230);
      fVar45 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
      goto LAB_0248f2dc;
    }
    lVar26 = lVar24 + lVar18 * 0x178;
    fVar64 = fVar64 - fVar68;
    *(float *)(lVar26 + 0x84) = fVar70 + (fVar45 - fVar68) / fVar64;
    *(float *)(lVar26 + 0xac) = fVar70 + (*(float *)(lVar26 + 0x98) - fVar68) / fVar64;
    *(float *)(lVar26 + 0xd4) = fVar70 + (*(float *)(lVar26 + 0xc0) - fVar68) / fVar64;
    fVar70 = fVar70 + (*(float *)(lVar26 + 0xe8) - fVar68) / fVar64;
    break;
  case 2:
    lVar26 = lVar24 + lVar18 * 0x178;
    fVar45 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
    fVar64 = (fStack00000000000000c4 + *(float *)(lVar26 + 0x70)) -
             *(float *)(in_stack_00000070 + 0x230);
LAB_0248f2dc:
    *(float *)(lVar26 + 0x84) = fVar70 + fVar64 / fVar45;
    *(float *)(lVar26 + 0xac) =
         fVar70 + ((fStack00000000000000c4 + *(float *)(lVar26 + 0x98)) -
                  *(float *)(in_stack_00000070 + 0x230)) /
                  (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
    *(float *)(lVar26 + 0xd4) =
         fVar70 + ((fStack00000000000000c4 + *(float *)(lVar26 + 0xc0)) -
                  *(float *)(in_stack_00000070 + 0x230)) /
                  (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
    fVar70 = fVar70 + ((fStack00000000000000c4 + *(float *)(lVar26 + 0xe8)) -
                      *(float *)(in_stack_00000070 + 0x230)) /
                      (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x61]) {
    case 0:
      lVar26 = lVar24 + lVar18 * 0x178;
      *(undefined4 *)(lVar26 + 0x88) = 0;
      *(undefined4 *)(lVar26 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar26 + 0xd8) = 0;
      *(undefined4 *)(lVar26 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar26 = lVar24 + lVar18 * 0x178;
      fVar45 = fVar45 - fVar46;
      fVar64 = fVar70 + (*(float *)(lVar26 + 0x74) - fVar46) / fVar45;
      fVar45 = fVar70 + (*(float *)(lVar26 + 0x9c) - fVar46) / fVar45;
      *(float *)(lVar26 + 0x88) = fVar64;
      *(float *)(lVar26 + 0xb0) = fVar45;
      *(float *)(lVar26 + 0xd8) = fVar64;
      *(float *)(lVar26 + 0x100) = fVar45;
      break;
    case 2:
      lVar26 = lVar24 + lVar18 * 0x178;
      fVar64 = fVar70 + (*(float *)(lVar26 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                        (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
      *(float *)(lVar26 + 0x88) = fVar64;
      fVar45 = *(float *)(unaff_x19 + 0x9b);
      fVar46 = *(float *)(unaff_x19 + 0x9c);
      *(float *)(lVar26 + 0xd8) = fVar64;
      fVar64 = fVar70 + (*(float *)(lVar26 + 0x9c) - fVar45) / (fVar46 - fVar45);
      *(float *)(lVar26 + 0xb0) = fVar64;
      *(float *)(lVar26 + 0x100) = fVar64;
      break;
    case 3:
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
      uVar41 = (uint)*(undefined8 *)(lVar24 + 0x18);
    }
    if (uVar41 <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar26 = lVar24 + lVar18 * 0x178;
    fVar64 = *(float *)(lVar26 + 0x15c);
    fVar45 = (1.0 - (*(float *)(lVar26 + 0x88) + *(float *)(lVar26 + 0xb0)) * fVar64) * 0.5;
    fVar46 = fVar70 + *(float *)(lVar26 + 0x88) * fVar64 + fVar45;
    fVar70 = fVar70 + fVar45 + *(float *)(lVar26 + 0xb0) * fVar64;
    *(float *)(lVar26 + 0x84) = fVar46;
    *(float *)(lVar26 + 0xac) = fVar46;
    *(float *)(lVar26 + 0xd4) = fVar70;
    break;
  default:
    goto switchD_0248f240_default;
  }
  *(float *)(lVar24 + lVar18 * 0x178 + 0xfc) = fVar70;
switchD_0248f240_default:
  switch((int)unaff_x19[0x61]) {
  case 0:
    if (uVar41 <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar26 = lVar24 + lVar18 * 0x178;
    *(undefined4 *)(lVar26 + 0x88) = 0;
    *(undefined4 *)(lVar26 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar26 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar26 + 0x100) = 0;
    break;
  case 1:
    if (uVar12 < uVar41) {
      lVar26 = lVar24 + lVar18 * 0x178;
      fVar67 = fVar67 - fVar44;
      fVar70 = (*(float *)(lVar26 + 0x74) - fVar44) / fVar67;
      fVar67 = (*(float *)(lVar26 + 0x9c) - fVar44) / fVar67;
      *(float *)(lVar26 + 0x88) = fVar70;
      goto LAB_0248f644;
    }
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  case 2:
    if (uVar41 <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar26 = lVar24 + lVar18 * 0x178;
    fVar70 = (*(float *)(lVar26 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
             (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
    *(float *)(lVar26 + 0x88) = fVar70;
    fVar67 = (*(float *)(lVar26 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
             (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
LAB_0248f644:
    *(float *)(lVar26 + 0xb0) = fVar67;
    *(float *)(lVar26 + 0xd8) = fVar67;
    *(float *)(lVar26 + 0x100) = fVar70;
    break;
  case 3:
    if (uVar41 <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar26 = lVar24 + lVar18 * 0x178;
    fVar67 = *(float *)(lVar26 + 0x15c);
    fVar64 = (1.0 - (*(float *)(lVar26 + 0x84) + *(float *)(lVar26 + 0xd4)) / fVar67) * 0.5;
    fVar70 = *(float *)(lVar26 + 0x84) / fVar67 + fVar64;
    fVar64 = fVar64 + *(float *)(lVar26 + 0xd4) / fVar67;
    *(float *)(lVar26 + 0x88) = fVar70;
    *(float *)(lVar26 + 0xb0) = fVar64;
    *(float *)(lVar26 + 0x100) = fVar70;
    *(float *)(lVar26 + 0xd8) = fVar64;
  }
  if (uVar41 <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar26 = lVar24 + lVar18 * 0x178;
  fVar70 = ABS(fVar59) * *(float *)(lVar26 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
  if ((*(char *)(lVar26 + 0x5c) == '\0') && ((*(byte *)(lVar24 + lVar18 * 0x178 + 400) & 1) != 0)) {
    fVar70 = -fVar70;
  }
  lVar26 = lVar24 + lVar18 * 0x178;
  fVar67 = *(float *)(lVar26 + 0x88);
  fVar45 = *(float *)(lVar26 + 0x84);
  fVar64 = -2.1474836e+09;
  if (fVar45 != INFINITY) {
    fVar64 = (float)(int)fVar45;
  }
  fVar46 = *(float *)(lVar26 + 0xd4);
  fVar68 = *(float *)(lVar26 + 0xd8);
  fVar44 = -2.1474836e+09;
  if (fVar67 != INFINITY) {
    fVar44 = (float)(int)fVar67;
  }
  uVar71 = FUN_024e0374(fVar45 - fVar64,fVar67 - fVar44);
  *(undefined4 *)(lVar26 + 0x84) = uVar71;
  if (*(uint *)(lVar24 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  fVar68 = fVar68 - fVar44;
  *(float *)(lVar26 + 0x88) = fVar70;
  uVar71 = FUN_024e0374(fVar45 - fVar64,fVar68);
  *(undefined4 *)(lVar24 + lVar18 * 0x178 + 0xac) = uVar71;
  if (*(uint *)(lVar24 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  fVar46 = fVar46 - fVar64;
  *(float *)(lVar24 + lVar18 * 0x178 + 0xb0) = fVar70;
  fVar64 = (float)FUN_024e0374(fVar46,fVar68);
  *(float *)(lVar26 + 0xd4) = fVar64;
  if (*(uint *)(lVar24 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar26 + 0xd8) = fVar70;
  uVar71 = FUN_024e0374(fVar46,fVar67 - fVar44);
  *(undefined4 *)(lVar24 + lVar18 * 0x178 + 0xfc) = uVar71;
  uVar41 = (uint)*(undefined8 *)(lVar24 + 0x18);
  if (uVar41 <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar24 + lVar18 * 0x178 + 0x100) = fVar70;
LAB_0248f808:
  if (((int)uVar12 < (int)unaff_x19[100]) &&
     (iStack00000000000000a4 < *(int *)((long)unaff_x19 + 0x324))) {
    if (((int)uVar2 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] != 5)) {
      if (uVar41 <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar28 = lVar24 + lVar18 * 0x178;
      *(ulong *)(lVar28 + 0x70) =
           CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar28 + 0x70) >> 0x20),
                    fVar48 + (float)*(undefined8 *)(lVar28 + 0x70));
      *(float *)(lVar28 + 0x78) = fVar47 + *(float *)(lVar28 + 0x78);
      plVar42 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      if (*(uint *)(lVar24 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar28 = lVar24 + lVar18 * 0x178;
      *(ulong *)(lVar28 + 0x98) =
           CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar28 + 0x98) >> 0x20),
                    fVar48 + (float)*(undefined8 *)(lVar28 + 0x98));
      *(float *)(lVar28 + 0xa0) = fVar47 + *(float *)(lVar28 + 0xa0);
      uVar41 = *(uint *)(lVar24 + 0x18);
LAB_0248fa4c:
      if (uVar41 <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar28 = lVar24 + lVar18 * 0x178;
      *(ulong *)(lVar28 + 0xc0) =
           CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar28 + 0xc0) >> 0x20),
                    fVar48 + (float)*(undefined8 *)(lVar28 + 0xc0));
      *(float *)(lVar28 + 200) = fVar47 + *(float *)(lVar28 + 200);
      if (*(uint *)(lVar24 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar28 = lVar24 + lVar18 * 0x178;
      *(ulong *)(lVar28 + 0xe8) =
           CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar28 + 0xe8) >> 0x20),
                    fVar48 + (float)*(undefined8 *)(lVar28 + 0xe8));
      *(float *)(lVar28 + 0xf0) = fVar47 + *(float *)(lVar28 + 0xf0);
      if (iVar14 != 0) goto LAB_0248f9d0;
LAB_0248fa9c:
      pcVar30 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0248faa8:
      (*pcVar30)();
      goto LAB_0248fabc;
    }
    if (((int)uVar2 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] == 5)) {
      if (uVar12 < uVar41) {
        if (*(uint *)(lVar24 + lVar18 * 0x178 + 0x68) != uStack0000000000000030) goto LAB_0248f8d8;
        lVar28 = lVar24 + lVar18 * 0x178;
        *(ulong *)(lVar28 + 0x70) =
             CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar28 + 0x70) >> 0x20),
                      fVar48 + (float)*(undefined8 *)(lVar28 + 0x70));
        *(float *)(lVar28 + 0x78) = fVar47 + *(float *)(lVar28 + 0x78);
        if (uVar12 < *(uint *)(lVar24 + 0x18)) {
          lVar28 = lVar24 + lVar18 * 0x178;
          *(ulong *)(lVar28 + 0x98) =
               CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar28 + 0x98) >> 0x20),
                        fVar48 + (float)*(undefined8 *)(lVar28 + 0x98));
          *(float *)(lVar28 + 0xa0) = fVar47 + *(float *)(lVar28 + 0xa0);
          uVar41 = *(uint *)(lVar24 + 0x18);
          plVar42 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
          goto LAB_0248fa4c;
        }
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    }
  }
LAB_0248f8d8:
  if (uVar41 <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if (DAT_03774d76 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03774d76 = '\x01';
  }
  puVar7 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  lVar26 = lVar24 + lVar18 * 0x178;
  uVar71 = *(undefined4 *)
            (*(undefined8 **)
              (*(long *)
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
              0xb8) + 1);
  *(undefined8 *)(lVar26 + 0x70) =
       **(undefined8 **)
         (*(long *)Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
         0xb8);
  *(undefined4 *)(lVar26 + 0x78) = uVar71;
  plVar42 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(uint *)(lVar24 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar26 = lVar24 + lVar18 * 0x178;
  uVar71 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar26 + 0x98) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar26 + 0xa0) = uVar71;
  if (*(uint *)(lVar24 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar26 = lVar24 + lVar18 * 0x178;
  uVar71 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar26 + 0xc0) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar26 + 200) = uVar71;
  if (*(uint *)(lVar24 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar26 = lVar24 + lVar18 * 0x178;
  uVar71 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar26 + 0xe8) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar26 + 0xf0) = uVar71;
  if (*(uint *)(lVar24 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(undefined1 *)(lVar28 + 0x194) = 0;
  if (iVar14 == 0) goto LAB_0248fa9c;
LAB_0248f9d0:
  if (iVar14 == 1) {
    pcVar30 = *(code **)(*unaff_x19 + 0x8f8);
    goto LAB_0248faa8;
  }
LAB_0248fabc:
  if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar28 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar28 = lVar28 + lVar18 * 0x178;
  uVar56 = *(undefined8 *)(lVar28 + 0x11c);
  *(undefined8 *)(lVar28 + 0x11c) =
       CONCAT44(fVar43 + (float)((ulong)uVar56 >> 0x20),fVar48 + (float)uVar56);
  *(float *)(lVar28 + 0x124) = fVar47 + *(float *)(lVar28 + 0x124);
  if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar28 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar28 = lVar28 + lVar18 * 0x178;
  *(ulong *)(lVar28 + 0x110) =
       CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar28 + 0x110) >> 0x20),
                fVar48 + (float)*(undefined8 *)(lVar28 + 0x110));
  *(float *)(lVar28 + 0x118) = fVar47 + *(float *)(lVar28 + 0x118);
  if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar28 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar28 = lVar28 + lVar18 * 0x178;
  *(ulong *)(lVar28 + 0x128) =
       CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar28 + 0x128) >> 0x20),
                fVar48 + (float)*(undefined8 *)(lVar28 + 0x128));
  *(float *)(lVar28 + 0x130) = fVar47 + *(float *)(lVar28 + 0x130);
  if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar28 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar28 = lVar28 + lVar18 * 0x178;
  *(float *)(lVar28 + 0x134) = fVar48 + *(float *)(lVar28 + 0x134);
  *(ulong *)(lVar28 + 0x138) =
       CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar28 + 0x138) >> 0x20),
                fVar43 + (float)*(undefined8 *)(lVar28 + 0x138));
  lVar28 = *in_stack_00000150;
  if ((lVar28 == 0) || (lVar26 = *(long *)(lVar28 + 0x38), lVar26 == 0)) goto LAB_02491464;
  uVar41 = *(uint *)(lVar26 + 0x18);
  if (uVar41 <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar36 = lVar26 + lVar18 * 0x178;
  *(ulong *)(lVar36 + 0x140) =
       CONCAT44(fVar48 + (float)((ulong)*(undefined8 *)(lVar36 + 0x140) >> 0x20),
                fVar48 + (float)*(undefined8 *)(lVar36 + 0x140));
  *(ulong *)(lVar36 + 0x148) =
       CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar36 + 0x148) >> 0x20),
                fVar43 + (float)*(undefined8 *)(lVar36 + 0x148));
  *(float *)(lVar36 + 0x150) = fVar43 + *(float *)(lVar36 + 0x150);
  if (uVar2 == uVar27) {
    uVar27 = *in_stack_00000148 - 1;
    if (uVar12 == uVar27) goto LAB_0248fccc;
  }
  else {
    lVar28 = *(long *)(lVar28 + 0x50);
    if (lVar28 == 0) goto LAB_02491464;
    if (*(uint *)(lVar28 + 0x18) <= uVar27)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar36 = (long)(int)uVar27;
    lVar38 = lVar28 + lVar36 * 0x5c;
    fVar64 = fVar43 + *(float *)(lVar38 + 0x54);
    *(ulong *)(lVar38 + 0x4c) =
         CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar38 + 0x4c) >> 0x20),
                  fVar43 + (float)*(undefined8 *)(lVar38 + 0x4c));
    *(float *)(lVar38 + 0x54) = fVar64;
    *(float *)(lVar38 + 0x58) = fVar48 + *(float *)(lVar38 + 0x58);
    if (uVar41 <= *(uint *)(lVar38 + 0x34))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    uVar71 = *(undefined4 *)(lVar26 + (long)(int)*(uint *)(lVar38 + 0x34) * 0x178 + 0x11c);
    lVar28 = lVar28 + lVar36 * 0x5c;
    *(float *)(lVar28 + 0x70) = fVar64;
    *(undefined4 *)(lVar28 + 0x6c) = uVar71;
    lVar28 = *in_stack_00000150;
    if ((lVar28 == 0) || (lVar26 = *(long *)(lVar28 + 0x50), lVar26 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar26 + 0x18) <= uVar27)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar28 = *(long *)(lVar28 + 0x38);
    if (lVar28 == 0) goto LAB_02491464;
    uVar27 = *(uint *)(lVar26 + lVar36 * 0x5c + 0x40);
    if (*(uint *)(lVar28 + 0x18) <= uVar27)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar26 = lVar26 + lVar36 * 0x5c;
    *(undefined4 *)(lVar26 + 0x74) = *(undefined4 *)(lVar28 + (long)(int)uVar27 * 0x178 + 0x128);
    *(undefined4 *)(lVar26 + 0x78) = *(undefined4 *)(lVar26 + 0x4c);
    uVar27 = *in_stack_00000148 - 1;
LAB_0248fccc:
    if (uVar12 == uVar27) {
      lVar28 = *in_stack_00000150;
      if ((lVar28 == 0) || (lVar26 = *(long *)(lVar28 + 0x50), lVar26 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar26 + 0x18) <= uVar2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar36 = lVar26 + lVar37 * 0x5c;
      fVar64 = fVar43 + *(float *)(lVar36 + 0x54);
      *(ulong *)(lVar36 + 0x4c) =
           CONCAT44(fVar43 + (float)((ulong)*(undefined8 *)(lVar36 + 0x4c) >> 0x20),
                    fVar43 + (float)*(undefined8 *)(lVar36 + 0x4c));
      *(float *)(lVar36 + 0x54) = fVar64;
      *(float *)(lVar36 + 0x58) = fVar48 + *(float *)(lVar36 + 0x58);
      lVar28 = *(long *)(lVar28 + 0x38);
      if (lVar28 == 0) goto LAB_02491464;
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(lVar36 + 0x34))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar71 = *(undefined4 *)(lVar28 + (long)(int)*(uint *)(lVar36 + 0x34) * 0x178 + 0x11c);
      lVar26 = lVar26 + lVar37 * 0x5c;
      *(float *)(lVar26 + 0x70) = fVar64;
      *(undefined4 *)(lVar26 + 0x6c) = uVar71;
      lVar28 = *in_stack_00000150;
      if ((lVar28 == 0) || (lVar26 = *(long *)(lVar28 + 0x50), lVar26 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar26 + 0x18) <= uVar2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar28 = *(long *)(lVar28 + 0x38);
      if (lVar28 == 0) goto LAB_02491464;
      uVar27 = *(uint *)(lVar26 + lVar37 * 0x5c + 0x40);
      if (*(uint *)(lVar28 + 0x18) <= uVar27)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar26 = lVar26 + lVar37 * 0x5c;
      *(undefined4 *)(lVar26 + 0x74) = *(undefined4 *)(lVar28 + (long)(int)uVar27 * 0x178 + 0x128);
      *(undefined4 *)(lVar26 + 0x78) = *(undefined4 *)(lVar26 + 0x4c);
    }
  }
  if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar53 = FUN_016f9468(uVar32,0);
  if (((((uVar53 & 1) == 0) && (1 < uVar32 - 0x2010)) && (uVar32 != 0xad)) && (uVar32 != 0x2d)) {
    if (bVar5) {
      if (((uVar23 != 1) && ((int)uVar12 < (int)(*(uint *)(lVar24 + 0x18) - 1))) &&
         (((int)uVar12 < (int)*in_stack_00000148 && ((uVar32 == 0x2019 || (uVar32 == 0x27)))))) {
        if (*(uint *)(lVar24 + 0x18) <= uVar23 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        uVar4 = *(undefined2 *)(lVar24 + lStack0000000000000128 + -0x438);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar53 = FUN_016f9468(uVar4,0);
        if ((uVar53 & 1) != 0) {
          if (*(uint *)(lVar24 + 0x18) <= uVar23)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          uVar4 = *(undefined2 *)(lVar24 + lStack0000000000000128 + -0x148);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar53 = FUN_016f9468(uVar4,0);
          if ((uVar53 & 1) != 0) goto LAB_0248fee0;
        }
      }
    }
    else {
      if (uVar23 != 1) {
LAB_024909a0:
        bVar5 = false;
        goto LAB_0248fee8;
      }
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar53 = FUN_016f93a0(uVar32,0);
      if ((uVar53 & 1) != 0) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar53 = FUN_016f68bc(uVar32,0);
        if (((uVar32 != 0x200b) && ((uVar53 & 1) == 0)) && (*in_stack_00000148 != 1))
        goto LAB_024909a0;
      }
    }
    if (uVar12 == *in_stack_00000148 - 1) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar53 = FUN_016f9468(uVar32,0);
      iVar14 = iVar11;
      if ((uVar53 & 1) == 0) goto LAB_02490204;
    }
    else {
LAB_02490204:
      iVar14 = uVar23 - 2;
    }
    lVar28 = *in_stack_00000150;
    if (lVar28 == 0) goto LAB_02491464;
    lVar26 = *(long *)(lVar28 + 0x40);
    if (lVar26 == 0) goto LAB_02491464;
    uVar27 = *(uint *)(lVar28 + 0x24);
    iVar15 = *(int *)(lVar26 + 0x18);
    if (iVar15 < (int)(uVar27 + 1)) {
      if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01147b84((long *)(lVar28 + 0x40),iVar15 + 1,
                   *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
      lVar28 = *in_stack_00000150;
      if (lVar28 == 0) goto LAB_02491464;
    }
    lVar26 = *(long *)(lVar28 + 0x40);
    if (lVar26 == 0) goto LAB_02491464;
    if (*(uint *)(lVar26 + 0x18) <= uVar27)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar26 = lVar26 + (long)(int)uVar27 * 0x18;
    *(long **)(lVar26 + 0x20) = unaff_x19;
    *(uint *)(lVar26 + 0x28) = uStack0000000000000114;
    *(int *)(lVar26 + 0x2c) = iVar14;
    *(uint *)(lVar26 + 0x30) = (iVar14 - uStack0000000000000114) + 1;
    lVar26 = *(long *)(lVar28 + 0x50);
    *(int *)(lVar28 + 0x24) = *(int *)(lVar28 + 0x24) + 1;
    if (lVar26 == 0) goto LAB_02491464;
    if (*(uint *)(lVar26 + 0x18) <= uVar2)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar26 = lVar26 + lVar37 * 0x5c;
    bVar5 = false;
    iStack00000000000000a4 = iStack00000000000000a4 + 1;
    *(int *)(lVar26 + 0x30) = *(int *)(lVar26 + 0x30) + 1;
  }
  else {
    if (!bVar5) {
      uStack0000000000000114 = uVar12;
    }
    if (uVar12 == *in_stack_00000148 - 1) {
      lVar28 = *in_stack_00000150;
      if (lVar28 == 0) goto LAB_02491464;
      lVar26 = *(long *)(lVar28 + 0x40);
      if (lVar26 == 0) goto LAB_02491464;
      uVar27 = *(uint *)(lVar28 + 0x24);
      iVar14 = *(int *)(lVar26 + 0x18);
      if (iVar14 < (int)(uVar27 + 1)) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147b84((long *)(lVar28 + 0x40),iVar14 + 1,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
        lVar28 = *in_stack_00000150;
        if (lVar28 == 0) goto LAB_02491464;
      }
      lVar26 = *(long *)(lVar28 + 0x40);
      if (lVar26 == 0) goto LAB_02491464;
      if (*(uint *)(lVar26 + 0x18) <= uVar27)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar26 = lVar26 + (long)(int)uVar27 * 0x18;
      *(long **)(lVar26 + 0x20) = unaff_x19;
      *(uint *)(lVar26 + 0x28) = uStack0000000000000114;
      *(uint *)(lVar26 + 0x2c) = uVar12;
      *(uint *)(lVar26 + 0x30) = uVar23 - uStack0000000000000114;
      lVar26 = *(long *)(lVar28 + 0x50);
      *(int *)(lVar28 + 0x24) = *(int *)(lVar28 + 0x24) + 1;
      if (lVar26 == 0) goto LAB_02491464;
      if (*(uint *)(lVar26 + 0x18) <= uVar2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar26 = lVar26 + lVar37 * 0x5c;
      iStack00000000000000a4 = iStack00000000000000a4 + 1;
      *(int *)(lVar26 + 0x30) = *(int *)(lVar26 + 0x30) + 1;
    }
LAB_0248fee0:
    bVar5 = true;
  }
LAB_0248fee8:
  if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0))
  goto LAB_02491464;
  uVar27 = *(uint *)(lVar28 + 0x18);
  if (uVar27 <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*(byte *)(lVar28 + lVar18 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar8) {
LAB_0248ff18:
      if (uVar27 <= uVar23 - 2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar37 = *unaff_x19;
      uVar71 = *(undefined4 *)(lVar28 + lStack0000000000000128 + -0x330);
      uVar58 = *(undefined4 *)(lVar28 + lStack0000000000000128 + -0x2f8);
LAB_02490474:
      pcVar30 = *(code **)(lVar37 + 0x908);
LAB_0249047c:
      (*pcVar30)(fStack0000000000000054,fStack000000000000004c,fStack0000000000000050,uVar71,
                 fStack00000000000000cc,0,fStack0000000000000058,uVar58);
      puVar7 = System_Threading_Mutex_TypeInfo;
      lVar28 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar28 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar28 = *(long *)puVar7;
      }
LAB_024904cc:
      bVar8 = false;
      fVar51 = 0.0;
      fStack00000000000000cc = *(float *)(*(long *)(lVar28 + 0xb8) + 0x15a8);
      in_stack_000000c8 = 0.0;
    }
    else {
LAB_024903d8:
      bVar8 = false;
    }
  }
  else {
    lVar28 = lVar28 + lVar18 * 0x178;
    iVar14 = *(int *)(lVar28 + 0x68);
    *(int *)(lVar28 + 0x16c) = iVar13;
    if ((((int)unaff_x19[100] < (int)uVar12) || ((int)unaff_x19[0x65] < (int)uVar2)) ||
       (((int)unaff_x19[0x5b] == 5 && (iVar14 + 1 != (int)unaff_x19[0x66])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar53 = FUN_016f68bc(uVar32,0);
    if ((uVar32 != 0x200b) && ((uVar53 & 1) == 0)) {
      lVar28 = *in_stack_00000150;
      if ((lVar28 == 0) || (lVar37 = *(long *)(lVar28 + 0x38), lVar37 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar37 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      fVar64 = *(float *)(lVar37 + lVar18 * 0x178 + 0x160);
      if (fVar51 <= fVar64) {
        fVar51 = fVar64;
      }
      if (in_stack_000000c8 <= ABS(fVar70)) {
        in_stack_000000c8 = ABS(fVar70);
      }
      if ((float)iVar14 != fStack0000000000000048) {
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar28 = *in_stack_00000150;
          if (lVar28 == 0) goto LAB_02491464;
          lVar37 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
        }
        else {
          lVar37 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
        }
        fStack00000000000000cc = *(float *)(lVar37 + 0x15a8);
      }
      lVar28 = *(long *)(lVar28 + 0x38);
      if (lVar28 == 0) goto LAB_02491464;
      if (*(uint *)(lVar28 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (unaff_x19[0x1e] == 0) goto LAB_02491464;
      fVar67 = *(float *)(lVar28 + lVar18 * 0x178 + 0x14c);
      fVar64 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
      fVar67 = fVar67 + fVar51 * fVar64;
      fStack0000000000000048 = (float)iVar14;
      if (fVar67 <= fStack00000000000000cc) {
        fStack00000000000000cc = fVar67;
      }
    }
    if (!bVar8) {
      bVar8 = false;
      if ((((uVar32 == 0xd) || ((uVar32 | 1) == 0xb)) || ((int)uVar34 < (int)uVar12)) || (!bVar1))
      goto LAB_024904e8;
      if (uVar12 == uVar34) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar53 = FUN_016fa418(uVar32,0);
        if ((uVar53 & 1) != 0) goto LAB_024903d8;
      }
      if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar28 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar28 = lVar28 + lVar18 * 0x178;
      fStack0000000000000058 = *(float *)(lVar28 + 0x160);
      fStack0000000000000054 = *(float *)(lVar28 + 0x11c);
      bVar8 = fVar51 != 0.0;
      fVar64 = fStack0000000000000058;
      if (bVar8) {
        fVar64 = fVar51;
      }
      fVar51 = fVar64;
      uStack000000000000005c = *(uint *)(lVar28 + 0x168);
      fStack0000000000000050 = 0.0;
      fVar64 = fVar70;
      if (bVar8) {
        fVar64 = in_stack_000000c8;
      }
      fStack000000000000004c = fStack00000000000000cc;
      in_stack_000000c8 = fVar64;
    }
    if (*in_stack_00000148 == 1) {
      if ((*in_stack_00000150 != 0) && (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 != 0))
      {
        if (uVar12 < *(uint *)(lVar28 + 0x18)) {
          lVar28 = lVar28 + lVar18 * 0x178;
          lVar37 = *unaff_x19;
          uVar71 = *(undefined4 *)(lVar28 + 0x128);
          uVar58 = *(undefined4 *)(lVar28 + 0x160);
          goto LAB_02490474;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
    if ((uVar12 == uVar31) || ((int)uVar34 <= (int)uVar12)) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar53 = FUN_016f68bc(uVar32,0);
      if ((*in_stack_00000150 != 0) && (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 != 0))
      {
        if (uVar32 == 0x200b || (uVar53 & 1) != 0) {
          lVar37 = lVar40;
          if (*(uint *)(lVar28 + 0x18) <= uVar34)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        else {
          lVar37 = lVar18;
          if (*(uint *)(lVar28 + 0x18) <= uVar12)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        lVar28 = lVar28 + lVar37 * 0x178;
        uVar71 = *(undefined4 *)(lVar28 + 0x128);
        uVar58 = *(undefined4 *)(lVar28 + 0x160);
        pcVar30 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_0249047c;
      }
      goto LAB_02491464;
    }
    if (!bVar1) {
      if ((*in_stack_00000150 != 0) && (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 != 0))
      {
        uVar27 = *(uint *)(lVar28 + 0x18);
        goto LAB_0248ff18;
      }
      goto LAB_02491464;
    }
    if ((int)uVar12 < (int)(*in_stack_00000148 - 1)) {
      if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar28 + 0x18) <= uVar23)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar53 = FUN_024a9e4c(uStack000000000000005c,*(undefined4 *)(lVar28 + lStack0000000000000128),
                            0);
      if ((uVar53 & 1) == 0) {
        if ((*in_stack_00000150 != 0) &&
           (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 != 0)) {
          if (uVar12 < *(uint *)(lVar28 + 0x18)) {
            lVar28 = lVar28 + lVar18 * 0x178;
            (**(code **)(*unaff_x19 + 0x908))
                      (fStack0000000000000054,fStack000000000000004c,fStack0000000000000050,
                       *(undefined4 *)(lVar28 + 0x128),fStack00000000000000cc,0,
                       fStack0000000000000058,*(undefined4 *)(lVar28 + 0x160));
            puVar7 = System_Threading_Mutex_TypeInfo;
            lVar28 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar28 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar28 = *(long *)puVar7;
            }
            goto LAB_024904cc;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        goto LAB_02491464;
      }
    }
    bVar8 = true;
  }
LAB_024904e8:
  if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar28 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if (lVar35 == 0) goto LAB_02491464;
  uVar27 = *(uint *)(lVar28 + lVar18 * 0x178 + 400);
  fVar64 = (float)FUN_026fd1f0(lVar35 + 0x50,0);
  if ((uVar27 >> 6 & 1) == 0) {
    if (bVar9) {
      if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar28 + 0x18) <= uVar23 - 2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar71 = *(undefined4 *)(lVar28 + lStack0000000000000128 + -0x330);
      pcVar30 = *(code **)(*unaff_x19 + 0x908);
      fVar43 = in_stack_00000080._4_4_ * fVar64 +
               *(float *)(lVar28 + lStack0000000000000128 + -0x30c);
LAB_02490a68:
      (*pcVar30)(in_stack_00000078._4_4_,in_stack_00000068._4_4_,uStack0000000000000060,uVar71,
                 fVar43,0,in_stack_00000080._4_4_,in_stack_00000080._4_4_);
    }
LAB_02490a9c:
    bVar9 = false;
  }
  else {
    lVar28 = *in_stack_00000150;
    if ((lVar28 == 0) || (lVar37 = *(long *)(lVar28 + 0x38), lVar37 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar37 + 0x18) <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(int *)(lVar37 + lVar18 * 0x178 + 0x174) = iVar13;
    if ((((int)unaff_x19[100] < (int)uVar12) || ((int)unaff_x19[0x65] < (int)uVar2)) ||
       (((int)unaff_x19[0x5b] == 5 &&
        (*(int *)(lVar37 + lVar18 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar32 == 0xd) || ((uVar32 | 1) == 0xb)) || ((int)uVar34 < (int)uVar12)) ||
       (bVar9 || !bVar1)) {
LAB_02490668:
      if (!bVar9) goto LAB_02490a9c;
    }
    else {
      if (uVar12 == uVar34) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar53 = FUN_016fa418(uVar32,0);
        if ((uVar53 & 1) != 0) goto LAB_02490668;
        lVar28 = *in_stack_00000150;
        if (lVar28 == 0) goto LAB_02491464;
      }
      lVar28 = *(long *)(lVar28 + 0x38);
      if (lVar28 == 0) goto LAB_02491464;
      if (*(uint *)(lVar28 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar28 = lVar28 + lVar18 * 0x178;
      fStack0000000000000038 = *(float *)(lVar28 + 0x60);
      in_stack_00000080._4_4_ = *(float *)(lVar28 + 0x160);
      fStack0000000000000034 = *(float *)(lVar28 + 0x14c);
      in_stack_00000078._4_4_ = *(float *)(lVar28 + 0x11c);
      in_stack_00000068._4_4_ = fVar64 * in_stack_00000080._4_4_ + fStack0000000000000034;
      uStack0000000000000060 = 0;
    }
    uVar27 = *in_stack_00000148;
    if (uVar27 == 1) {
      if (*in_stack_00000150 != 0) {
        lVar28 = *(long *)(*in_stack_00000150 + 0x38);
joined_r0x024907c8:
        if (lVar28 != 0) {
          if (uVar12 < *(uint *)(lVar28 + 0x18)) {
            lVar28 = lVar28 + lVar18 * 0x178;
            lVar40 = *unaff_x19;
            uVar71 = *(undefined4 *)(lVar28 + 0x128);
            fVar43 = *(float *)(lVar28 + 0x14c);
LAB_024907e8:
            pcVar30 = *(code **)(lVar40 + 0x908);
LAB_02490a64:
            fVar43 = fVar64 * in_stack_00000080._4_4_ + fVar43;
            goto LAB_02490a68;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
      }
      goto LAB_02491464;
    }
    if (uVar12 == uVar31) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar53 = FUN_016f68bc(uVar32,0);
      if ((*in_stack_00000150 != 0) && (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 != 0))
      {
        uVar27 = *(uint *)(lVar28 + 0x18);
        if (uVar32 == 0x200b || (uVar53 & 1) != 0) {
          if (uVar27 <= uVar34)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        else {
LAB_02490a40:
          lVar40 = lVar18;
          if (uVar27 <= uVar12)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
LAB_02490a48:
        lVar28 = lVar28 + lVar40 * 0x178;
        fVar43 = *(float *)(lVar28 + 0x14c);
        uVar71 = *(undefined4 *)(lVar28 + 0x128);
        pcVar30 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_02490a64;
      }
      goto LAB_02491464;
    }
    if ((int)uVar12 < (int)uVar27) {
      lVar28 = *in_stack_00000150;
      if ((lVar28 != 0) && (lVar37 = *(long *)(lVar28 + 0x38), lVar37 != 0)) {
        if (uVar23 < *(uint *)(lVar37 + 0x18)) {
          if (*(float *)(lVar37 + lStack0000000000000128 + -0x108) == fStack0000000000000038) {
            fVar67 = *(float *)(lVar37 + lStack0000000000000128 + -0x1c);
            if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar53 = FUN_024aa280(fVar43 + fVar67,fStack0000000000000034,0);
            if ((uVar53 & 1) != 0) {
              uVar27 = *in_stack_00000148;
              goto LAB_024908ec;
            }
            lVar28 = *in_stack_00000150;
            if (lVar28 == 0) goto LAB_02491464;
          }
          lVar28 = *(long *)(lVar28 + 0x38);
          if (lVar28 != 0) {
            uVar27 = *(uint *)(lVar28 + 0x18);
            if ((int)uVar12 <= (int)uVar34) goto LAB_02490a40;
            if (uVar34 < uVar27) goto LAB_02490a48;
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          }
          goto LAB_02491464;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
LAB_024908ec:
    if ((int)uVar12 < (int)uVar27) {
      iVar14 = FUN_02681c0c(lVar35,0);
      if (*(uint *)(lVar24 + 0x18) <= uVar23)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar28 = *(long *)(lVar24 + lStack0000000000000128 + -0x130);
      if (lVar28 == 0) goto LAB_02491464;
      iVar15 = FUN_02681c0c(lVar28,0);
      if (iVar14 != iVar15) {
        if (*in_stack_00000150 != 0) {
          lVar28 = *(long *)(*in_stack_00000150 + 0x38);
          goto joined_r0x024907c8;
        }
        goto LAB_02491464;
      }
    }
    if (!bVar1) {
      if ((*in_stack_00000150 != 0) && (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 != 0))
      {
        if (uVar23 - 2 < *(uint *)(lVar28 + 0x18)) {
          lVar40 = *unaff_x19;
          uVar71 = *(undefined4 *)(lVar28 + lStack0000000000000128 + -0x330);
          fVar43 = *(float *)(lVar28 + lStack0000000000000128 + -0x30c);
          goto LAB_024907e8;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
    bVar9 = true;
  }
  if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0))
  goto LAB_02491464;
  uVar27 = (uint)*(undefined8 *)(lVar28 + 0x18);
  if (uVar27 <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*(byte *)(lVar28 + lVar18 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar10) {
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,
                 fStack0000000000000098,in_stack_000000a0,uStack0000000000000094);
    }
LAB_02490b04:
    bVar10 = false;
  }
  else {
    if ((((int)unaff_x19[100] < (int)uVar12) || ((int)unaff_x19[0x65] < (int)uVar2)) ||
       (((int)unaff_x19[0x5b] == 5 &&
        (*(int *)(lVar28 + lVar18 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar10) {
      if ((((uVar32 == 0xd) || ((uVar32 | 1) == 0xb)) || ((int)uVar34 < (int)uVar12)) || (!bVar1))
      goto LAB_02490b04;
      if (uVar12 == uVar34) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar53 = FUN_016fa418(uVar32,0);
        if ((uVar53 & 1) != 0) goto LAB_02490b04;
      }
      puVar7 = System_Threading_Mutex_TypeInfo;
      lVar40 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar40 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar40 = *(long *)puVar7;
      }
      if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0))
      goto LAB_02491464;
      uVar27 = (uint)*(undefined8 *)(lVar28 + 0x18);
      if (uVar27 <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar40 = *(long *)(lVar40 + 0xb8);
      lVar37 = lVar28 + lVar18 * 0x178;
      in_stack_00001798 = *(undefined8 *)(lVar37 + 0x184);
      in_stack_00001790 = *(undefined8 *)(lVar37 + 0x17c);
      fStack00000000000000a8 = *(float *)(lVar40 + 0x1598);
      in_stack_000017a0 = *(float *)(lVar37 + 0x18c);
      fStack00000000000000ac = *(float *)(lVar40 + 0x159c);
      fStack0000000000000098 = *(float *)(lVar40 + 0x15a0);
      in_stack_000000a0 = *(float *)(lVar40 + 0x15a4);
      uStack0000000000000094 = 0;
    }
    if (uVar27 <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar28 = lVar28 + lVar18 * 0x178;
    fVar64 = *(float *)(lVar28 + 0x128);
    fVar44 = *(float *)(lVar28 + 0x188);
    uVar16 = *(undefined8 *)(lVar28 + 0x17c);
    fVar68 = *(float *)(lVar28 + 0x184);
    uVar56 = *(undefined8 *)(lVar28 + 0x184);
    fVar46 = *(float *)(lVar28 + 0x18c);
    fVar43 = *(float *)(lVar28 + 0x11c);
    fVar67 = *(float *)(lVar28 + 0x148);
    fVar45 = *(float *)(lVar28 + 0x150);
    in_stack_00000158 = uVar16;
    fStack0000000000000160 = fVar68;
    fStack0000000000000164 = fVar44;
    in_stack_00000168 = fVar46;
    in_stack_00000170 = in_stack_00001790;
    in_stack_00000178 = in_stack_00001798;
    in_stack_00000180 = in_stack_000017a0;
    uVar53 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
    lVar28 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
    if ((uVar53 & 1) == 0) {
      if (*(int *)(lVar28 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar28);
      }
      fVar64 = fVar64 + (float)in_stack_00001798;
      fVar43 = fVar43 - (float)((ulong)in_stack_00001790 >> 0x20);
      fVar67 = fVar67 + (float)((ulong)in_stack_00001798 >> 0x20);
      if (fVar43 <= fStack00000000000000a8) {
        fStack00000000000000a8 = fVar43;
      }
      if (fVar45 - in_stack_000017a0 <= fStack00000000000000ac) {
        fStack00000000000000ac = fVar45 - in_stack_000017a0;
      }
      if (fStack0000000000000098 <= fVar64) {
        fStack0000000000000098 = fVar64;
      }
      if (in_stack_000000a0 <= fVar67) {
        in_stack_000000a0 = fVar67;
      }
    }
    else {
      if (*(int *)(lVar28 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar28);
      }
      fVar43 = (fVar43 + (fStack0000000000000098 - (float)in_stack_00001798)) * 0.5;
      if (fVar45 <= fStack00000000000000ac) {
        fStack00000000000000ac = fVar45;
      }
      if (in_stack_000000a0 <= fVar67) {
        in_stack_000000a0 = fVar67;
      }
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,fVar43,
                 in_stack_000000a0,uStack0000000000000094);
      fStack00000000000000ac = fVar45 - fVar46;
      fStack0000000000000098 = fVar64 + fVar68;
      uStack0000000000000094 = 0;
      in_stack_000000a0 = fVar67 + fVar44;
      fStack00000000000000a8 = fVar43;
      in_stack_00001790 = uVar16;
      in_stack_00001798 = uVar56;
      in_stack_000017a0 = fVar46;
    }
    if (((*in_stack_00000148 == 1) || (uVar12 == uVar31)) ||
       (((int)uVar34 <= (int)uVar12 || (!bVar1)))) {
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,
                 fStack0000000000000098,in_stack_000000a0,uStack0000000000000094);
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
  }
  uVar12 = *in_stack_00000148;
  iVar11 = iVar11 + 1;
  lStack0000000000000128 = lStack0000000000000128 + 0x178;
  bVar1 = (int)uVar12 <= (int)uVar23;
  uVar27 = uVar2;
  uVar23 = uVar23 + 1;
  if (bVar1) goto LAB_02491038;
  goto LAB_0248ef74;
LAB_02491038:
  lVar24 = *in_stack_00000150;
  if (lVar24 != 0) {
    iVar13 = uVar2 + 1;
    plVar39 = (long *)PTR_DAT_033ed410;
LAB_02491068:
    *(uint *)(lVar24 + 0x18) = uVar12;
    lVar28 = unaff_x19[0xd3];
    *(int *)(lVar24 + 0x2c) = iVar13;
    iVar13 = iStack00000000000000a4;
    if ((int)uVar12 < 1) {
      iVar13 = 1;
    }
    if (iStack00000000000000a4 == 0) {
      iVar13 = 1;
    }
    *(int *)(lVar24 + 0x1c) = (int)lVar28;
    *(int *)(lVar24 + 0x24) = iVar13;
    *(int *)(lVar24 + 0x30) = (int)unaff_x19[0x95] + 1;
    if (((int)unaff_x19[0x62] != 0xff) ||
       (uVar53 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar53 & 1) == 0)) {
LAB_02491468:
      lVar24 = *(long *)Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__;
LAB_02491474:
      if (*(int *)(lVar24 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_024a942c();
      return;
    }
    lVar24 = unaff_x19[0xda];
    if (lVar24 != 0) {
      (**(code **)(lVar24 + 0x18))
                (*(undefined8 *)(lVar24 + 0x40),*in_stack_00000150,*(undefined8 *)(lVar24 + 0x28));
    }
    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
      if ((*in_stack_00000150 == 0) || (lVar24 = *(long *)(*in_stack_00000150 + 0x60), lVar24 == 0))
      goto LAB_02491464;
      if (*(int *)(*plVar39 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(int *)(lVar24 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      FUN_024e8000(lVar24 + 0x20,1,0);
    }
    if (unaff_x19[0x73] != 0) {
      UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
                (unaff_x19[0x73],0);
      if ((unaff_x19[0x6c] != 0) && (lVar24 = *(long *)(unaff_x19[0x6c] + 0x60), lVar24 != 0)) {
        if (*(int *)(lVar24 + 0x18) == 0) {
UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (unaff_x19[0x73] != 0) {
          FUN_0266b9c4(unaff_x19[0x73],*(undefined8 *)(lVar24 + 0x30),0);
          if ((unaff_x19[0x6c] != 0) && (lVar24 = *(long *)(unaff_x19[0x6c] + 0x60), lVar24 != 0)) {
            if (*(int *)(lVar24 + 0x18) == 0)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            if (unaff_x19[0x73] != 0) {
              FUN_0266bbc8(unaff_x19[0x73],*(undefined8 *)(lVar24 + 0x48),0);
              if ((unaff_x19[0x6c] != 0) &&
                 (lVar24 = *(long *)(unaff_x19[0x6c] + 0x60), lVar24 != 0)) {
                if (*(int *)(lVar24 + 0x18) == 0)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                if (unaff_x19[0x73] != 0) {
                  FUN_0266bc74(unaff_x19[0x73],*(undefined8 *)(lVar24 + 0x50),0);
                  if ((unaff_x19[0x6c] != 0) &&
                     (lVar24 = *(long *)(unaff_x19[0x6c] + 0x60), lVar24 != 0)) {
                    if (*(int *)(lVar24 + 0x18) == 0)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    if (unaff_x19[0x73] != 0) {
                      FUN_0266c1dc(unaff_x19[0x73],*(undefined8 *)(lVar24 + 0x58),0);
                      if (unaff_x19[0x73] != 0) {
                        FUN_0266ed90(unaff_x19[0x73],0);
                        lVar24 = *in_stack_00000150;
                        if (lVar24 != 0) {
                          lVar40 = 0;
                          lVar28 = 0;
                          do {
                            uVar53 = lVar28 + 1;
                            if ((long)*(int *)(lVar24 + 0x34) <= (long)uVar53) goto LAB_02491468;
                            lVar24 = *(long *)(lVar24 + 0x60);
                            if (lVar24 == 0) break;
                            if (*(int *)(*plVar39 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            if (*(uint *)(lVar24 + 0x18) <= uVar53)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            FUN_024e7ecc(lVar24 + lVar40 + 0x70,0);
                            lVar24 = unaff_x19[0xe0];
                            if (lVar24 == 0) break;
                            if (*(uint *)(lVar24 + 0x18) <= uVar53)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            uVar56 = *(undefined8 *)(lVar24 + lVar28 * 8 + 0x28);
                            if (*(int *)(*plVar42 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar17 = FUN_0268b4e0(uVar56,0,0);
                            if ((uVar17 & 1) == 0) {
                              if (*(int *)((long)unaff_x19 + 0x314) != 0) {
                                if ((*in_stack_00000150 == 0) ||
                                   (lVar24 = *(long *)(*in_stack_00000150 + 0x60), lVar24 == 0))
                                break;
                                if (*(int *)(*plVar39 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                if (*(uint *)(lVar24 + 0x18) <= uVar53)
                                goto 
                                UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                                ;
                                FUN_024e8000(lVar24 + lVar40 + 0x70,1,0);
                              }
                              lVar24 = unaff_x19[0xe0];
                              if (lVar24 == 0) break;
                              if (*(uint *)(lVar24 + 0x18) <= uVar53)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar24 = *(long *)(lVar24 + lVar28 * 8 + 0x28);
                              if (lVar24 == 0) break;
                              lVar24 = FUN_024eefa0(lVar24,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar18 = *(long *)(*in_stack_00000150 + 0x60), lVar18 == 0))
                              break;
                              if (*(uint *)(lVar18 + 0x18) <= uVar53)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar24 == 0) break;
                              FUN_0266b9c4(lVar24,*(undefined8 *)(lVar18 + lVar40 + 0x80),0);
                              lVar24 = unaff_x19[0xe0];
                              if (lVar24 == 0) break;
                              if (*(uint *)(lVar24 + 0x18) <= uVar53)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar24 = *(long *)(lVar24 + lVar28 * 8 + 0x28);
                              if (lVar24 == 0) break;
                              lVar24 = FUN_024eefa0(lVar24,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar18 = *(long *)(*in_stack_00000150 + 0x60), lVar18 == 0))
                              break;
                              if (*(uint *)(lVar18 + 0x18) <= uVar53)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar24 == 0) break;
                              FUN_0266bbc8(lVar24,*(undefined8 *)(lVar18 + lVar40 + 0x98),0);
                              lVar24 = unaff_x19[0xe0];
                              if (lVar24 == 0) break;
                              if (*(uint *)(lVar24 + 0x18) <= uVar53)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar24 = *(long *)(lVar24 + lVar28 * 8 + 0x28);
                              if (lVar24 == 0) break;
                              lVar24 = FUN_024eefa0(lVar24,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar18 = *(long *)(*in_stack_00000150 + 0x60), lVar18 == 0))
                              break;
                              if (*(uint *)(lVar18 + 0x18) <= uVar53)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar24 == 0) break;
                              FUN_0266bc74(lVar24,*(undefined8 *)(lVar18 + lVar40 + 0xa0),0);
                              lVar24 = unaff_x19[0xe0];
                              if (lVar24 == 0) break;
                              if (*(uint *)(lVar24 + 0x18) <= uVar53)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar24 = *(long *)(lVar24 + lVar28 * 8 + 0x28);
                              if (lVar24 == 0) break;
                              lVar24 = FUN_024eefa0(lVar24,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar18 = *(long *)(*in_stack_00000150 + 0x60), lVar18 == 0))
                              break;
                              if (*(uint *)(lVar18 + 0x18) <= uVar53)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar24 == 0) break;
                              FUN_0266c1dc(lVar24,*(undefined8 *)(lVar18 + lVar40 + 0xa8),0);
                              lVar24 = unaff_x19[0xe0];
                              if (lVar24 == 0) break;
                              if (*(uint *)(lVar24 + 0x18) <= uVar53)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar24 = *(long *)(lVar24 + lVar28 * 8 + 0x28);
                              if ((lVar24 == 0) || (lVar24 = FUN_024eefa0(lVar24,0), lVar24 == 0))
                              break;
                              FUN_0266ed90(lVar24,0);
                            }
                            lVar24 = *in_stack_00000150;
                            lVar28 = lVar28 + 1;
                            lVar40 = lVar40 + 0x50;
                          } while (lVar24 != 0);
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


