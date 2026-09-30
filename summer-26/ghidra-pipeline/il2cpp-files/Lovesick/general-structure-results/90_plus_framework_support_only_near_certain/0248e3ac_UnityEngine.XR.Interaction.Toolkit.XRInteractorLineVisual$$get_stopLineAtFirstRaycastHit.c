/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual$$get_stopLineAtFirstRaycastHit
ENTRY_POINT: 0248e3ac
PROGRAM: Lovesick-libil2cpp.so
SCORE: 149
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_21;validity_or_gating_hits_21;weak_vector_component_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_5;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__get_stopLineAtFirstRaycastHit
               (ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6,
               ulong param_7,ulong param_8)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  bool bVar4;
  bool bVar5;
  double __x;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  ulong uVar21;
  undefined1 uVar22;
  char cVar23;
  uint uVar24;
  long lVar25;
  undefined4 *puVar26;
  long lVar27;
  uint uVar28;
  long lVar29;
  long *plVar30;
  float *pfVar31;
  code *pcVar32;
  uint uVar33;
  uint uVar34;
  float *pfVar35;
  uint uVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long *unaff_x19;
  long unaff_x21;
  long *plVar41;
  long *unaff_x25;
  long lVar42;
  uint uVar43;
  long *unaff_x27;
  long *plVar44;
  undefined8 *unaff_x28;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  double dVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined4 uVar58;
  float fVar59;
  float fVar60;
  float fVar61;
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
  byte bStack000000000000005c;
  undefined4 uStack0000000000000060;
  float fStack000000000000006c;
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
  
code_r0x0248e3ac:
  FUN_024d7014(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined4 *)(unaff_x19 + 0x99) = 0;
  *(undefined4 *)(unaff_x19 + 0x9a) = 0;
  *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
  *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
  uVar19 = param_2;
  param_2 = unaff_d13;
UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__get_snapEndpointIfAvailable:
  bVar7 = false;
  bVar5 = true;
  plVar30 = (long *)System_Threading_Mutex_TypeInfo;
  plVar44 = (long *)StringLiteral_302;
LAB_0248ab98:
  fVar59 = (float)param_2;
  in_stack_00001788 = in_stack_00001788 + 1;
  lVar25 = unaff_x19[0x8e];
  if (lVar25 != 0) {
    if ((int)in_stack_00001788 < (int)*(uint *)(lVar25 + 0x18)) {
      if (*(uint *)(lVar25 + 0x18) <= in_stack_00001788)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar11 = *(uint *)(lVar25 + (long)(int)in_stack_00001788 * 0xc + 0x20);
      if (uVar11 == 0) goto LAB_0248e4dc;
      if (5 < in_stack_00000140._4_4_) {
        uVar15 = FUN_0176eb1c(&stack0x000017bc,0);
        uVar16 = FUN_0176eb1c(&stack0x00001788,0);
        uVar15 = FUN_0160073c(*(undefined8 *)UnityEngine_Rendering_Universal_DebugValidationMode_var
                              ,uVar15,*(undefined8 *)
                                       Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                              ,uVar16,0);
        if (*(int *)(*plVar44 + 0xe0) == 0) {
          thunk_FUN_00d32864(*plVar44);
        }
        FUN_026610e4(uVar15,0);
        in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
        unaff_x25 = in_stack_00000150;
      }
      if ((*(char *)((long)unaff_x19 + 0x2fa) != '\0') && (uVar11 == 0x3c)) goto code_r0x0248a9ac;
      if ((*unaff_x25 != 0) && (lVar25 = *(long *)(*unaff_x25 + 0x38), lVar25 != 0)) {
        if (*in_stack_00000148 < *(uint *)(lVar25 + 0x18)) {
          lVar25 = lVar25 + (int)*in_stack_00000148 * unaff_x21;
          *(undefined4 *)((long)unaff_x19 + 0x63c) = *(undefined4 *)(lVar25 + 0x2c);
          *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar25 + 0x58);
          unaff_x19[0x1f] = *(long *)(lVar25 + 0x38);
          goto 
          UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager__GetInputAction
          ;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
LAB_0248e4dc:
    fVar59 = (float)uVar19;
    if (((char)unaff_x19[0x46] != '\0') &&
       (fVar59 = DAT_02956ccc,
       DAT_02956ccc < *(float *)((long)unaff_x19 + 0x234) - *(float *)(unaff_x19 + 0x47))) {
      fVar59 = *(float *)((long)unaff_x19 + 0x1dc);
      fVar53 = *(float *)((long)unaff_x19 + 0x24c);
      if ((fVar59 < fVar53) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
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
        if (fVar53 <= fVar59) {
          fVar59 = fVar53;
        }
        goto LAB_0248e598;
      }
    }
    *(undefined1 *)((long)unaff_x19 + 0x244) = 1;
    if ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c)) {
      uVar15 = FUN_0176eb1c(_fStack0000000000000038,0);
      uVar16 = FUN_017840ac(in_stack_00000040,0);
      uVar15 = FUN_0160073c(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlah_s16__,
                            uVar15,*(undefined8 *)
                                    Method_UnityEngine_GameObject_GetComponents<Component>__,uVar16,
                            0);
      if (*(int *)(*plVar44 + 0xe0) == 0) {
        thunk_FUN_00d32864(*plVar44);
      }
      FUN_02660dac(uVar15,0);
    }
    puVar6 = Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__;
    if ((*in_stack_00000148 == 0) || ((*in_stack_00000148 == 1 && (in_stack_000017bc == 3)))) {
      (**(code **)(*unaff_x19 + 0x958))();
      lVar25 = *(long *)puVar6;
      goto LAB_02491474;
    }
    lVar25 = *plVar30;
    if (*(int *)(lVar25 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar25 = *plVar30;
    }
    plVar30 = (long *)PTR_DAT_033ed410;
    lVar25 = **(long **)(lVar25 + 0xb8);
    if (lVar25 == 0) goto LAB_02491464;
    if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0xd0))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    iVar12 = *(int *)(lVar25 + (long)(int)*(uint *)(unaff_x19 + 0xd0) * 0x38 + 0x54) << 2;
    if ((*unaff_x25 == 0) || (lVar25 = *(long *)(*unaff_x25 + 0x60), lVar25 == 0))
    goto LAB_02491464;
    if (*(int *)(*(long *)PTR_DAT_033ed410 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (*(int *)(lVar25 + 0x18) == 0)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    FUN_024e7d94(lVar25 + 0x20,0,0);
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774d76 = '\x01';
    }
    iVar10 = (int)unaff_x19[0x4d];
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
    lVar25 = unaff_x19[0xea];
    in_stack_00000088 = (float *)in_stack_000000b8;
    fStack0000000000000090 = fStack00000000000000c4;
    if (iVar10 < 0x401) {
      if (iVar10 == 0x100) {
        if (lVar25 == 0) goto LAB_02491464;
        if (*(uint *)(lVar25 + 0x18) < 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        uVar15 = *(undefined8 *)(lVar25 + 0x30);
        if ((int)unaff_x19[0x5b] == 5) {
          if ((*unaff_x25 == 0) || (lVar29 = *(long *)(*unaff_x25 + 0x58), lVar29 == 0))
          goto LAB_02491464;
          if (*(uint *)(lVar29 + 0x18) <= uStack0000000000000030)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          fVar59 = *(float *)(lVar29 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
        }
        else {
          fVar59 = *(float *)(unaff_x19 + 0x96);
        }
        fStack0000000000000090 = fStack000000000000002c + 0.0 + *(float *)(lVar25 + 0x2c);
        fVar59 = (0.0 - fVar59) - fStack0000000000000020;
      }
      else if (iVar10 == 0x200) {
        if (lVar25 == 0) goto LAB_02491464;
        if ((*(int *)(lVar25 + 0x18) == 1) || (*(int *)(lVar25 + 0x18) == 0))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fStack0000000000000090 = (*(float *)(lVar25 + 0x20) + *(float *)(lVar25 + 0x2c)) * 0.5;
        uVar15 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar25 + 0x24) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar25 + 0x30) >> 0x20)) * 0.5,
                          ((float)*(undefined8 *)(lVar25 + 0x24) +
                          (float)*(undefined8 *)(lVar25 + 0x30)) * 0.5);
        if ((int)unaff_x19[0x5b] == 5) {
          if ((*unaff_x25 == 0) || (lVar25 = *(long *)(*unaff_x25 + 0x58), lVar25 == 0))
          goto LAB_02491464;
          if (*(uint *)(lVar25 + 0x18) <= uStack0000000000000030)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          lVar25 = lVar25 + (long)(int)uStack0000000000000030 * 0x14;
          fStack0000000000000090 = fStack000000000000002c + 0.0 + fStack0000000000000090;
          fVar59 = ((fStack0000000000000020 + *(float *)(lVar25 + 0x28) + *(float *)(lVar25 + 0x30))
                   - fStack0000000000000024) * -0.5 + 0.0;
        }
        else {
          fStack0000000000000090 = fStack000000000000002c + 0.0 + fStack0000000000000090;
          fVar59 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x96) + in_stack_000017b8) -
                   fStack0000000000000024) * -0.5 + 0.0;
        }
      }
      else {
        if (iVar10 != 0x400) goto LAB_0248eb64;
        if (lVar25 == 0) goto LAB_02491464;
        if (*(int *)(lVar25 + 0x18) == 0)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        uVar15 = *(undefined8 *)(lVar25 + 0x24);
        if ((int)unaff_x19[0x5b] == 5) {
          if ((*unaff_x25 == 0) || (lVar29 = *(long *)(*unaff_x25 + 0x58), lVar29 == 0))
          goto LAB_02491464;
          if (*(uint *)(lVar29 + 0x18) <= uStack0000000000000030)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          in_stack_000017b8 = *(float *)(lVar29 + (long)(int)uStack0000000000000030 * 0x14 + 0x30);
        }
        fStack0000000000000090 = fStack000000000000002c + 0.0 + *(float *)(lVar25 + 0x20);
        fVar59 = fStack0000000000000024 + (0.0 - in_stack_000017b8);
      }
      in_stack_00000088 =
           (float *)CONCAT44((float)((ulong)uVar15 >> 0x20) + 0.0,(float)uVar15 + fVar59);
    }
    else if (iVar10 == 0x800) {
      if (lVar25 == 0) goto LAB_02491464;
      if ((*(int *)(lVar25 + 0x18) == 1) || (*(int *)(lVar25 + 0x18) == 0))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      fVar59 = ((float)*(undefined8 *)(lVar25 + 0x24) + (float)*(undefined8 *)(lVar25 + 0x30)) * 0.5
      ;
      fStack0000000000000090 =
           fStack000000000000002c + 0.0 +
           (*(float *)(lVar25 + 0x20) + *(float *)(lVar25 + 0x2c)) * 0.5;
      in_stack_00000088 =
           (float *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar25 + 0x24) >> 0x20) +
                             (float)((ulong)*(undefined8 *)(lVar25 + 0x30) >> 0x20)) * 0.5 + 0.0,
                             fVar59 + 0.0);
    }
    else {
      if (iVar10 == 0x1000) {
        if (lVar25 == 0) goto LAB_02491464;
        if ((*(int *)(lVar25 + 0x18) == 1) || (*(int *)(lVar25 + 0x18) == 0))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fVar59 = (float)*(undefined8 *)(lVar25 + 0x24) + (float)*(undefined8 *)(lVar25 + 0x30);
        fVar53 = (float)((ulong)*(undefined8 *)(lVar25 + 0x24) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(lVar25 + 0x30) >> 0x20);
        fStack0000000000000020 =
             fStack0000000000000020 + *(float *)(unaff_x19 + 0x9c) + *(float *)(unaff_x19 + 0x9b);
        fStack0000000000000090 =
             fStack000000000000002c + 0.0 +
             (*(float *)(lVar25 + 0x20) + *(float *)(lVar25 + 0x2c)) * 0.5;
      }
      else {
        if (iVar10 != 0x2000) goto LAB_0248eb64;
        if (lVar25 == 0) goto LAB_02491464;
        if ((*(int *)(lVar25 + 0x18) == 1) || (*(int *)(lVar25 + 0x18) == 0))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fVar59 = (float)*(undefined8 *)(lVar25 + 0x24) + (float)*(undefined8 *)(lVar25 + 0x30);
        fVar53 = (float)((ulong)*(undefined8 *)(lVar25 + 0x24) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(lVar25 + 0x30) >> 0x20);
        fStack0000000000000020 = *(float *)((long)unaff_x19 + 0x4b4) - fStack0000000000000020;
        fStack0000000000000090 =
             fStack000000000000002c + 0.0 +
             (*(float *)(lVar25 + 0x20) + *(float *)(lVar25 + 0x2c)) * 0.5;
      }
      fVar59 = fVar59 * 0.5;
      in_stack_00000088 =
           (float *)CONCAT44(fVar53 * 0.5 + 0.0,
                             fVar59 + (0.0 - (fStack0000000000000020 - fStack0000000000000024) * 0.5
                                      ));
    }
LAB_0248eb64:
    lVar25 = FUN_0249b7f8();
    if (lVar25 == 0) goto LAB_02491464;
    FUN_026a125c(lVar25,0);
    __x = DAT_028aa048;
    *(float *)((long)unaff_x19 + 0x6dc) = fVar59;
    dVar54 = modf(__x,(double *)&stack0x00000880);
    puVar6 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
    if (dVar54 == 0.5) {
      fVar53 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
      if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
        fVar53 = fVar53 + 1.0;
      }
    }
    else {
      fVar53 = 255.0;
    }
    dVar54 = modf(__x,(double *)&stack0x00000880);
    if (dVar54 == 0.5) {
      fVar70 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
      if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
        fVar70 = fVar70 + 1.0;
      }
    }
    else {
      fVar70 = 255.0;
    }
    dVar54 = modf(__x,(double *)&stack0x00000880);
    if (dVar54 == 0.5) {
      fVar45 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
      if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
        fVar45 = fVar45 + 1.0;
      }
    }
    else {
      fVar45 = 255.0;
    }
    dVar54 = modf(__x,(double *)&stack0x00000880);
    if (dVar54 == 0.5) {
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
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_037825d3 == '\0') {
      thunk_FUN_00d48444(Unity_AI_Navigation_NavMeshLink_TypeInfo);
      DAT_037825d3 = '\x01';
    }
    puVar6 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
    lVar25 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
    if (*(int *)(lVar25 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar25 = *(long *)puVar6;
    }
    puVar26 = *(undefined4 **)(lVar25 + 0xb8);
    UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
              (*puVar26,puVar26[1],puVar26[2],puVar26[3],&stack0x00001790,0x4000ffff,0);
    if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar25 = *in_stack_00000150;
    if (lVar25 == 0) goto LAB_02491464;
    uVar11 = *in_stack_00000148;
    if ((int)uVar11 < 1) {
      iStack00000000000000a4 = 0;
      iVar12 = 0;
      plVar44 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      goto LAB_02491068;
    }
    lVar25 = *(long *)(lVar25 + 0x38);
    if (lVar25 == 0) goto LAB_02491464;
    iVar10 = 0;
    bVar8 = false;
    bVar4 = false;
    bVar7 = false;
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
    _bStack000000000000005c =
         (int)fVar53 & 0xffU | ((int)fVar70 & 0xffU) << 8 | ((int)fVar45 & 0xffU) << 0x10 |
         (int)fVar64 << 0x18;
    fVar70 = 0.0;
    fVar53 = 0.0;
    lStack0000000000000128 = 0x2e0;
    fStack0000000000000098 = fStack00000000000000a8;
    in_stack_000000a0 = fStack00000000000000ac;
    fStack000000000000004c = fStack00000000000000ac;
    fStack0000000000000050 = (float)uStack0000000000000094;
    in_stack_00000078._4_4_ = fStack00000000000000a8;
    fStack000000000000006c = fStack00000000000000ac;
    uStack0000000000000060 = uStack0000000000000094;
    uVar28 = 0;
    uVar24 = 1;
    goto LAB_0248ef74;
  }
  goto LAB_02491464;
code_r0x0248a9ac:
  *(undefined1 *)((long)unaff_x19 + 0x429) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
  uVar17 = FUN_024d0688();
  if (((uVar17 & 1) != 0) &&
     (in_stack_00001788 = in_stack_0000176c, in_stack_000017bc = uVar11,
     *(int *)((long)unaff_x19 + 0x63c) == 0)) goto LAB_0248ab98;

  UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager__GetInputAction
  :
  if ((unaff_x19[0x6c] == 0) || (lVar25 = *(long *)(unaff_x19[0x6c] + 0x38), lVar25 == 0))
  goto LAB_02491464;
  uVar28 = *in_stack_00000148;
  if (*(uint *)(lVar25 + 0x18) <= uVar28)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar42 = (long)(int)uVar28;
  cVar23 = *(char *)(lVar25 + lVar42 * unaff_x21 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x429) = 0;
  lVar29 = unaff_x19[0x23];
  if ((uint)in_stack_000017a8 == uVar28) {
    uVar11 = (uint)((ulong)in_stack_000017a8 >> 0x20);
    bVar4 = true;
    *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
    if (uVar11 == 0x2026) {
      lVar18 = unaff_x19[0xc9];
      lVar25 = lVar25 + lVar42 * unaff_x21;
      *(undefined4 *)(lVar25 + 0x2c) = 0;
      *(long *)(lVar25 + 0x30) = lVar18;
      *(long *)(lVar25 + 0x38) = unaff_x19[0xca];
      *(long *)(lVar25 + 0x50) = unaff_x19[0xcb];
      *(int *)(lVar25 + 0x58) = (int)unaff_x19[0xcc];
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
      in_stack_000017a8 = CONCAT44(3,uVar28 + 1);
    }
    else if (uVar11 == 3) {
      if ((*unaff_x27 == 0) || (lVar18 = FUN_024b11ac(*unaff_x27,0), lVar18 == 0))
      goto LAB_02491464;
      in_stack_00000bf8 = 3;
      FUN_01299bc0(lVar18,&stack0x00000bf8,&stack0x00000880,*(undefined8 *)PTR_DAT_033ef3c8);
      if (*(uint *)(lVar25 + 0x18) <= uVar28)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      bVar4 = true;
      *(ulong *)(lVar25 + lVar42 * unaff_x21 + 0x30) = CONCAT44(in_stack_00000884,in_stack_00000880)
      ;
      uVar28 = *(uint *)((long)unaff_x19 + 0x48c);
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
    }
  }
  else {
    bVar4 = false;
  }
  plVar30 = (long *)System_Threading_Mutex_TypeInfo;
  iVar12 = (int)unaff_x21;
  in_stack_000017bc = uVar11;
  if (((int)uVar28 < *(int *)((long)unaff_x19 + 0x31c)) && (uVar11 != 3)) {
    if ((*in_stack_00000150 == 0) || (lVar25 = *(long *)(*in_stack_00000150 + 0x38), lVar25 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar25 + 0x18) <= uVar28)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar25 = lVar25 + (long)(int)uVar28 * (long)iVar12;
    *(undefined1 *)(lVar25 + 0x194) = 0;
    *(undefined2 *)(lVar25 + 0x20) = 0x200b;
    *(undefined4 *)(lVar25 + 100) = 0;
    *in_stack_00000148 = uVar28 + 1;
    unaff_x25 = in_stack_00000150;
    goto LAB_0248ab98;
  }
  iVar10 = *(int *)((long)unaff_x19 + 0x63c);
  fVar53 = unaff_s12;
  if (iVar10 == 0) {
    uVar28 = *(uint *)((long)unaff_x19 + 0x254);
    if ((uVar28 >> 4 & 1) == 0) {
      if ((uVar28 >> 3 & 1) == 0) {
        if ((uVar28 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar17 = FUN_016f92d4(uVar11,0);
          if ((uVar17 & 1) != 0) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar11 = FUN_016f95a8(uVar11,0);
            uVar11 = uVar11 & 0xffff;
            fVar53 = fStack0000000000000028;
          }
        }
      }
      else {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar17 = FUN_016f9218(uVar11,0);
        if ((uVar17 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar11 = FUN_016f9724(uVar11,0);
          goto LAB_0248af70;
        }
      }
    }
    else {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar17 = FUN_016f92d4(uVar11,0);
      if ((uVar17 & 1) != 0) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar11 = FUN_016f95a8(uVar11,0);
LAB_0248af70:
        uVar11 = uVar11 & 0xffff;
      }
    }
    iVar10 = *(int *)((long)unaff_x19 + 0x63c);
    in_stack_000017bc = uVar11;
    if (iVar10 == 0) goto LAB_0248af84;
LAB_0248abc8:
    if (iVar10 == 1) {
      if ((*in_stack_00000150 == 0) || (lVar25 = *(long *)(*in_stack_00000150 + 0x38), lVar25 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar25 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar25 = lVar25 + (int)*in_stack_00000148 * unaff_x21;
      lVar42 = *(long *)(lVar25 + 0x40);
      unaff_x19[0xd2] = lVar42;
      *(undefined4 *)((long)unaff_x19 + 0x69c) = *(undefined4 *)(lVar25 + 0x48);
      if ((lVar42 == 0) || (lVar25 = FUN_024ebfa0(lVar42,0), lVar25 == 0)) goto LAB_02491464;
      FUN_0132138c(lVar25,*(undefined4 *)((long)unaff_x19 + 0x69c),&stack0x00000880,
                   *(undefined8 *)System_Func<KeyValuePair<int,_int>,_int>_TypeInfo);
      puVar6 = System_Threading_Mutex_TypeInfo;
      lVar42 = CONCAT44(in_stack_00000884,in_stack_00000880);
      plVar30 = (long *)System_Threading_Mutex_TypeInfo;
      unaff_x25 = in_stack_00000150;
      if (lVar42 == 0) goto LAB_0248ab98;
      if (in_stack_000017bc == 0x3c) {
        in_stack_000017bc = *(int *)((long)unaff_x19 + 0x69c) + 0xe000;
      }
      else {
        lVar25 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar25 = *(long *)puVar6;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1b4) = *(undefined4 *)(*(long *)(lVar25 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x1f] == 0) goto LAB_02491464;
      fVar59 = *(float *)(unaff_x19 + 0x3c);
      memmove(&stack0x00001700,(void *)(unaff_x19[0x1f] + 0x50),0x60);
      iVar10 = FUN_026fd110(&stack0x00001700,0);
      if (*unaff_x27 == 0) goto LAB_02491464;
      memmove(&stack0x00001700,(void *)(*unaff_x27 + 0x50),0x60);
      fVar45 = (float)FUN_026fd120(&stack0x00001700,0);
      fVar70 = in_stack_00000080._4_4_;
      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
        fVar70 = unaff_s12;
      }
      if (unaff_x19[0xd2] == 0) goto LAB_02491464;
      fVar70 = (fVar59 / (float)iVar10) * fVar45 * fVar70;
      iVar10 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
      fVar59 = *(float *)(unaff_x19 + 0x3c);
      if (iVar10 < 1) {
        if (*unaff_x27 == 0) goto LAB_02491464;
        iVar10 = FUN_026fd110(*unaff_x27 + 0x50,0);
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar45 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
        fVar67 = in_stack_00000080._4_4_;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar67 = unaff_s12;
        }
        if (unaff_x19[0x1f] == 0) goto LAB_02491464;
        fVar64 = (float)FUN_026fd140(unaff_x19[0x1f] + 0x50,0);
        if (*(long *)(lVar42 + 0x20) == 0) goto LAB_02491464;
        FUN_026fd62c(&stack0x00000880,*(long *)(lVar42 + 0x20),0);
        unaff_x28[0x1cd] = unaff_x28[1];
        unaff_x28[0x1cc] = *unaff_x28;
        fVar46 = (float)FUN_026fd45c(&stack0x000016e0,0);
        if (*(long *)(lVar42 + 0x20) == 0) goto LAB_02491464;
        fVar48 = *(float *)(lVar42 + 0x2c);
        fVar68 = (float)FUN_026fd668(*(long *)(lVar42 + 0x20),0);
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar47 = (float)FUN_026fd140(*unaff_x27 + 0x50,0);
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar50 = (float)FUN_026fd170(*unaff_x27 + 0x50,0);
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar60 = *(float *)((long)unaff_x19 + 0x3fc);
        fVar49 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
        if (unaff_x19[0x1f] == 0) goto LAB_02491464;
        fVar49 = fVar70 * fVar50 * fVar60 * fVar49;
        fVar67 = (fVar59 / (float)iVar10) * fVar45 * fVar67;
        fVar59 = fVar67 * (fVar64 / fVar46) * fVar48 * fVar68;
        fVar67 = fVar67 / fVar59;
        fVar47 = fVar67 * fVar47;
        fVar70 = (float)FUN_026fd180(unaff_x19[0x1f] + 0x50,0);
        fVar67 = fVar67 * fVar70;
      }
      else {
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        iVar10 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        fVar45 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
        if (*(long *)(lVar42 + 0x20) == 0) goto LAB_02491464;
        fVar67 = *(float *)(lVar42 + 0x2c);
        fVar64 = in_stack_00000080._4_4_;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar64 = 1.0;
        }
        fVar46 = (float)FUN_026fd668(*(long *)(lVar42 + 0x20),0);
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        fVar47 = (float)FUN_026fd140(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        fVar48 = (float)FUN_026fd170(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        fVar68 = *(float *)((long)unaff_x19 + 0x3fc);
        fVar49 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        fVar49 = fVar70 * fVar48 * fVar68 * fVar49;
        fVar59 = (fVar59 / (float)iVar10) * fVar45 * fVar64 * fVar67 * fVar46;
        fVar67 = (float)FUN_026fd180(unaff_x19[0xd2] + 0x48,0);
      }
      lVar25 = unaff_x19[0x6c];
      unaff_x19[200] = lVar42;
      if ((lVar25 == 0) || (lVar42 = *(long *)(lVar25 + 0x38), lVar42 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar42 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar42 = lVar42 + (int)*in_stack_00000148 * unaff_x21;
      *(undefined4 *)(lVar42 + 0x2c) = 1;
      *(float *)(lVar42 + 0x160) = fVar59;
      in_stack_00000130._4_4_ = 0.0;
      *(long *)(lVar42 + 0x40) = unaff_x19[0xd2];
      *(long *)(lVar42 + 0x38) = unaff_x19[0x1f];
      *(int *)(lVar42 + 0x58) = (int)unaff_x19[0x23];
      *(int *)(unaff_x19 + 0x23) = (int)lVar29;
      goto LAB_0248b384;
    }
    lVar25 = *in_stack_00000150;
    fVar70 = 0.0;
    if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
      fVar70 = fVar59;
    }
    fVar49 = 0.0;
    if (lVar25 == 0) goto LAB_02491464;
    fVar47 = 0.0;
    fVar67 = 0.0;
  }
  else {
    if (iVar10 != 0) goto LAB_0248abc8;
LAB_0248af84:
    if ((*in_stack_00000150 == 0) || (lVar25 = *(long *)(*in_stack_00000150 + 0x38), lVar25 == 0))
    goto LAB_02491464;
    uVar28 = *in_stack_00000148;
    uVar11 = *(uint *)(lVar25 + 0x18);
    if (uVar11 <= uVar28)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar29 = *(long *)(lVar25 + (int)uVar28 * unaff_x21 + 0x30);
    unaff_x19[200] = lVar29;
    plVar30 = (long *)System_Threading_Mutex_TypeInfo;
    unaff_x25 = in_stack_00000150;
    if (lVar29 == 0) goto LAB_0248ab98;
    lVar42 = lVar25 + (int)uVar28 * unaff_x21;
    lVar29 = *(long *)(lVar42 + 0x38);
    unaff_x19[0x1f] = lVar29;
    unaff_x19[0x22] = *(long *)(lVar42 + 0x50);
    *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar42 + 0x58);
    if (bVar4) {
      lVar42 = unaff_x19[0x8e];
      if (lVar42 == 0) goto LAB_02491464;
      if (*(uint *)(lVar42 + 0x18) <= in_stack_00001788)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if ((*(int *)(lVar42 + (long)(int)in_stack_00001788 * 0xc + 0x20) != 10) ||
         (uVar28 == *(uint *)(unaff_x19 + 0x92))) goto LAB_0248b014;
      if (uVar11 <= uVar28 - 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (lVar29 == 0) goto LAB_02491464;
      fVar70 = *(float *)(lVar25 + (long)(int)(uVar28 - 1) * (long)iVar12 + 0x60);
      iVar10 = FUN_026fd110(lVar29 + 0x50,0);
      lVar25 = *unaff_x27;
    }
    else {
LAB_0248b014:
      if (lVar29 == 0) goto LAB_02491464;
      fVar70 = *(float *)(unaff_x19 + 0x3c);
      iVar10 = FUN_026fd110(lVar29 + 0x50,0);
      lVar25 = unaff_x19[0x1f];
    }
    if (lVar25 == 0) goto LAB_02491464;
    fVar64 = (float)FUN_026fd120(lVar25 + 0x50,0);
    fVar45 = in_stack_00000080._4_4_;
    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
      fVar45 = unaff_s12;
    }
    fVar67 = 0.0;
    fVar47 = 0.0;
    if (!(bool)(bVar4 & in_stack_000017bc == 0x2026)) {
      if (*unaff_x27 == 0) goto LAB_02491464;
      fVar47 = (float)FUN_026fd140(*unaff_x27 + 0x50,0);
      if (*unaff_x27 == 0) goto LAB_02491464;
      fVar67 = (float)FUN_026fd180(*unaff_x27 + 0x50,0);
    }
    lVar25 = unaff_x19[200];
    if ((lVar25 == 0) || (*(long *)(lVar25 + 0x20) == 0)) goto LAB_02491464;
    fVar46 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar48 = *(float *)(lVar25 + 0x2c);
    fVar59 = (float)FUN_026fd668(*(long *)(lVar25 + 0x20),0);
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar68 = (float)FUN_026fd170(*unaff_x27 + 0x50,0);
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar50 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar49 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
    lVar25 = unaff_x19[0x6c];
    if ((lVar25 == 0) || (lVar29 = *(long *)(lVar25 + 0x38), lVar29 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar29 = lVar29 + (int)*in_stack_00000148 * unaff_x21;
    *(undefined4 *)(lVar29 + 0x2c) = 0;
    fVar45 = ((fVar53 * fVar70) / (float)iVar10) * fVar64 * fVar45;
    fVar59 = fVar45 * fVar46 * fVar48 * fVar59;
    *(float *)(lVar29 + 0x160) = fVar59;
    uVar11 = *(uint *)(unaff_x19 + 0x23);
    fVar49 = fVar45 * fVar68 * fVar50 * fVar49;
    if (uVar11 == 0) {
      in_stack_00000130._4_4_ = *(float *)(unaff_x19 + 0xc2);
    }
    else {
      lVar29 = unaff_x19[0xe0];
      if (lVar29 == 0) goto LAB_02491464;
      if (*(uint *)(lVar29 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar29 = *(long *)(lVar29 + (long)(int)uVar11 * 8 + 0x20);
      if (lVar29 == 0) goto LAB_02491464;
      in_stack_00000130._4_4_ = *(float *)(lVar29 + 0x4c);
    }
LAB_0248b384:
    unaff_s12 = 1.0;
    fVar70 = 0.0;
    if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
      fVar70 = fVar59;
    }
  }
  lVar25 = *(long *)(lVar25 + 0x38);
  if (lVar25 == 0) goto LAB_02491464;
  if (*(uint *)(lVar25 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar25 = lVar25 + (int)*in_stack_00000148 * unaff_x21;
  *(short *)(lVar25 + 0x20) = (short)in_stack_000017bc;
  *(int *)(lVar25 + 0x60) = (int)unaff_x19[0x3c];
  *(undefined4 *)(lVar25 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4e4);
  if ((unaff_x19[0x6c] == 0) || (lVar25 = *(long *)(unaff_x19[0x6c] + 0x38), lVar25 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar25 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(int *)(lVar25 + (int)*in_stack_00000148 * unaff_x21 + 0x168) = (int)unaff_x19[0x2a];
  if ((unaff_x19[0x6c] == 0) || (lVar25 = *(long *)(unaff_x19[0x6c] + 0x38), lVar25 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar25 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(undefined4 *)(lVar25 + (int)*in_stack_00000148 * unaff_x21 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x154);
  if ((unaff_x19[0x6c] == 0) || (lVar25 = *(long *)(unaff_x19[0x6c] + 0x38), lVar25 == 0))
  goto LAB_02491464;
  uVar11 = *in_stack_00000148;
  FUN_013b78b8(in_stack_000000b8,&stack0x00000880,
               *(undefined8 *)TMPro_TMP_Dropdown_OptionData_TypeInfo);
  if (*(uint *)(lVar25 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  uVar16 = unaff_x28[1];
  uVar15 = *unaff_x28;
  lVar25 = lVar25 + (int)uVar11 * unaff_x21;
  *(undefined4 *)(lVar25 + 0x18c) = in_stack_00000890;
  *(undefined8 *)(lVar25 + 0x184) = uVar16;
  *(undefined8 *)(lVar25 + 0x17c) = uVar15;
  if ((*in_stack_00000150 == 0) || (lVar25 = *(long *)(*in_stack_00000150 + 0x38), lVar25 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar25 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(undefined4 *)(lVar25 + (int)*in_stack_00000148 * unaff_x21 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x254);
  if ((unaff_x19[200] == 0) || (lVar25 = *(long *)(unaff_x19[200] + 0x20), lVar25 == 0))
  goto LAB_02491464;
  FUN_026fd62c(&stack0x00000bf8,lVar25,0);
  unaff_x28[0x1df] = in_stack_00000c00;
  unaff_x28[0x1de] = CONCAT44(in_stack_00000bfc,in_stack_00000bf8);
  if ((int)in_stack_000017bc < 0x10000) {
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar11 = FUN_016f68bc(in_stack_000017bc,0);
    uVar11 = uVar11 & 1;
  }
  else {
    uVar11 = 0;
  }
  fStack00000000000000cc = *(float *)(unaff_x19 + 0x54);
  *(undefined4 *)((long)unaff_x19 + 0x2f4) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f1) == '\0') {
    fVar46 = 0.0;
    fVar64 = 0.0;
    fVar45 = 0.0;
  }
  else {
    if (unaff_x19[200] == 0) goto LAB_02491464;
    uVar24 = *in_stack_00000148;
    uVar28 = *(uint *)(unaff_x19[200] + 0x28);
    if ((int)uVar24 < (int)in_stack_00000078._4_4_) {
      if ((*in_stack_00000150 == 0) || (lVar25 = *(long *)(*in_stack_00000150 + 0x38), lVar25 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar25 + 0x18) <= uVar24 + 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar25 = *(long *)(lVar25 + (long)(int)(uVar24 + 1) * (long)iVar12 + 0x30);
      if ((((lVar25 == 0) || (*unaff_x27 == 0)) ||
          (lVar29 = *(long *)(*unaff_x27 + 0x128), lVar29 == 0)) ||
         (lVar29 = *(long *)(lVar29 + 0x18), lVar29 == 0)) goto LAB_02491464;
      in_stack_00000880 = uVar28 | *(int *)(lVar25 + 0x28) << 0x10;
      uVar19 = FUN_0129eff4(lVar29,&stack0x00000880,&stack0x000016d8,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                           );
      uVar71 = 0;
      if ((uVar19 & 1) == 0) {
        fVar46 = 0.0;
        fVar64 = 0.0;
        fVar45 = 0.0;
      }
      else {
        if (in_stack_000016d8 == 0) goto LAB_02491464;
        fVar45 = *(float *)(in_stack_000016d8 + 0x14);
        fVar64 = *(float *)(in_stack_000016d8 + 0x18);
        fVar46 = *(float *)(in_stack_000016d8 + 0x1c);
        uVar71 = *(undefined4 *)(in_stack_000016d8 + 0x20);
        if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
          fStack00000000000000cc = 0.0;
        }
      }
      uVar24 = *in_stack_00000148;
    }
    else {
      uVar71 = 0;
      fVar46 = 0.0;
      fVar64 = 0.0;
      fVar45 = 0.0;
    }
    if (0 < (int)uVar24) {
      if ((*in_stack_00000150 == 0) || (lVar25 = *(long *)(*in_stack_00000150 + 0x38), lVar25 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar25 + 0x18) <= (uint)((long)(int)uVar24 + -1))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar25 = *(long *)(lVar25 + ((long)(int)uVar24 + -1) * unaff_x21 + 0x30);
      if (((lVar25 == 0) || (*unaff_x27 == 0)) ||
         ((lVar29 = *(long *)(*unaff_x27 + 0x128), lVar29 == 0 ||
          (lVar29 = *(long *)(lVar29 + 0x18), lVar29 == 0)))) goto LAB_02491464;
      in_stack_00000880 = *(uint *)(lVar25 + 0x28) | uVar28 << 0x10;
      uVar19 = FUN_0129eff4(lVar29,&stack0x00000880,&stack0x000016d8,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                           );
      if ((uVar19 & 1) != 0) {
        if ((in_stack_000016d8 == 0) ||
           (fVar45 = (float)FUN_024bb1bc(fVar45,fVar64,fVar46,uVar71,
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
    *(float *)((long)unaff_x19 + 0x2f4) = fVar46;
  }
  if ((char)unaff_x19[0x1d] != '\0') {
    fVar68 = *(float *)(unaff_x19 + 199);
    fVar48 = (float)FUN_026fd474(&stack0x00001770,0);
    fVar68 = fVar68 - fVar70 * fVar48 * (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc));
    *(float *)(unaff_x19 + 199) = fVar68;
    if ((uVar11 != 0) || (in_stack_000017bc == 0x200b)) {
      *(float *)(unaff_x19 + 199) = fVar68 - in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac)
      ;
    }
  }
  fVar68 = *(float *)(unaff_x19 + 0x55);
  fVar48 = 0.0;
  if (fVar68 != 0.0) {
    fVar48 = (float)FUN_026fd454(&stack0x00001770,0);
    fVar50 = (float)FUN_026fd464(&stack0x00001770,0);
    fVar48 = (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (fVar68 * 0.5 - fVar70 * (fVar48 * 0.5 + fVar50));
    *(float *)(unaff_x19 + 199) = *(float *)(unaff_x19 + 199) + fVar48;
  }
  if (((cVar23 == '\0') && (*(int *)((long)unaff_x19 + 0x63c) == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x254) & 1) != 0)) {
    lVar25 = unaff_x19[0x22];
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar19 = FUN_02681b9c(lVar25,0,0);
    fVar50 = 0.0;
    if ((uVar19 & 1) != 0) {
      lVar25 = unaff_x19[0x22];
      if (*(int *)(*(long *)
                    Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar30 = (long *)
                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
      ;
      if (lVar25 == 0) goto LAB_02491464;
      uVar19 = FUN_0267e1d8(lVar25,*(undefined4 *)
                                    (*(long *)(*(long *)
                                                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                              + 0xb8) + 0x54),0);
      if ((uVar19 & 1) != 0) {
        lVar25 = unaff_x19[0x22];
        if (*(int *)(*plVar30 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          plVar30 = (long *)
                    Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
          ;
        }
        if (lVar25 == 0) goto LAB_02491464;
        fVar68 = (float)FUN_0267f610(lVar25,*(undefined4 *)(*(long *)(*plVar30 + 0xb8) + 0x54),0);
        if ((*unaff_x27 == 0) || (unaff_x19[0x22] == 0)) goto LAB_02491464;
        fVar60 = *(float *)(*unaff_x27 + 0x1b0);
        fVar50 = (float)FUN_0267f610(unaff_x19[0x22],
                                     *(undefined4 *)
                                      (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                + 0xb8) + 0xcc),0);
        fVar50 = fVar50 * fVar68 * fVar60 * 0.25;
        if (fVar68 < in_stack_00000130._4_4_ + fVar50) {
          in_stack_00000130._4_4_ = fVar68 - fVar50;
        }
      }
    }
    if (*unaff_x27 == 0) goto LAB_02491464;
    fStack00000000000000c4 = *(float *)(*unaff_x27 + 0x1b4);
  }
  else {
    lVar25 = unaff_x19[0x22];
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar19 = FUN_02681b9c(lVar25,0,0);
    fStack00000000000000c4 = 0.0;
    if ((uVar19 & 1) != 0) {
      lVar25 = unaff_x19[0x22];
      if (*(int *)(*(long *)
                    Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar30 = (long *)
                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
      ;
      if (lVar25 == 0) goto LAB_02491464;
      uVar19 = FUN_0267e1d8(lVar25,*(undefined4 *)
                                    (*(long *)(*(long *)
                                                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                              + 0xb8) + 0x54),0);
      if ((uVar19 & 1) != 0) {
        lVar25 = unaff_x19[0x22];
        if (*(int *)(*plVar30 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          plVar30 = (long *)
                    Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
          ;
        }
        if (lVar25 == 0) goto LAB_02491464;
        uVar19 = FUN_0267e1d8(lVar25,*(undefined4 *)(*(long *)(*plVar30 + 0xb8) + 0xcc),0);
        if ((uVar19 & 1) != 0) {
          lVar25 = unaff_x19[0x22];
          if (*(int *)(*plVar30 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            plVar30 = (long *)
                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
            ;
          }
          if (lVar25 == 0) goto LAB_02491464;
          fVar68 = (float)FUN_0267f610(lVar25,*(undefined4 *)(*(long *)(*plVar30 + 0xb8) + 0x54),0);
          if ((*unaff_x27 == 0) || (unaff_x19[0x22] == 0)) goto LAB_02491464;
          fVar60 = *(float *)(*unaff_x27 + 0x1a8);
          fVar50 = (float)FUN_0267f610(unaff_x19[0x22],
                                       *(undefined4 *)
                                        (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                  + 0xb8) + 0xcc),0);
          fVar50 = fVar50 * fVar68 * fVar60 * 0.25;
          if (fVar68 < in_stack_00000130._4_4_ + fVar50) {
            in_stack_00000130._4_4_ = fVar68 - fVar50;
          }
          goto LAB_0248ba68;
        }
      }
    }
    fVar50 = 0.0;
  }
LAB_0248ba68:
  fVar61 = *(float *)(unaff_x19 + 199);
  fVar68 = (float)FUN_026fd464(&stack0x00001770,0);
  fVar61 = fVar61 + (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
                    fVar70 * (fVar45 + ((fVar68 - in_stack_00000130._4_4_) - fVar50));
  fVar45 = (float)FUN_026fd46c(&stack0x00001770,0);
  fVar60 = *(float *)((long)unaff_x19 + 0x614) +
           ((fVar49 + fVar70 * (fVar64 + in_stack_00000130._4_4_ + fVar45)) -
           *(float *)(unaff_x19 + 0x9a));
  fVar45 = (float)FUN_026fd45c(&stack0x00001770,0);
  fVar65 = fVar60 - fVar70 * (in_stack_00000130._4_4_ + in_stack_00000130._4_4_ + fVar45);
  fVar45 = (float)FUN_026fd454(&stack0x00001770,0);
  fVar68 = fVar61 + (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
                    fVar70 * (fVar50 + fVar50 +
                             in_stack_00000130._4_4_ + in_stack_00000130._4_4_ + fVar45);
  fVar45 = fVar61;
  fVar64 = fVar68;
  if (((*(int *)((long)unaff_x19 + 0x63c) == 0) && (cVar23 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x254) >> 1 & 1) != 0)) {
    fVar63 = (float)(int)unaff_x19[0xbd] * fStack000000000000004c;
    fVar45 = (float)FUN_026fd46c(&stack0x00001770,0);
    fVar52 = fVar63 * fVar70 * (fVar50 + in_stack_00000130._4_4_ + fVar45);
    fVar45 = (float)FUN_026fd46c(&stack0x00001770,0);
    fVar64 = (float)FUN_026fd45c(&stack0x00001770,0);
    fVar60 = fVar60 + 0.0;
    fVar65 = fVar65 + 0.0;
    fVar63 = fVar63 * fVar70 * (((fVar45 - fVar64) - in_stack_00000130._4_4_) - fVar50);
    fVar64 = fVar68 + fVar63;
    fVar45 = fVar61 + fVar52;
    fVar57 = (fVar52 - fVar63) * 0.5;
    fVar61 = (fVar61 + fVar63) - fVar57;
    fVar68 = (fVar68 + fVar52) - fVar57;
    fVar45 = fVar45 - fVar57;
    fVar64 = fVar64 - fVar57;
  }
  if (*(char *)((long)unaff_x19 + 0x46c) == '\0') {
    fVar52 = 0.0;
    fVar62 = 0.0;
    fStack00000000000000e0 = 0.0;
    fStack00000000000000e4 = 0.0;
    fVar57 = fVar65;
    fVar63 = fVar60;
    fStack00000000000000e8 = fVar45;
    fStack00000000000000ec = fVar61;
  }
  else {
    thunk_FUN_026935f0(_uStack0000000000000060,0);
    fVar66 = (fVar68 + fVar61) * 0.5;
    fVar69 = (fVar65 + fVar60) * 0.5;
    fVar60 = fVar60 - fVar69;
    fVar55 = 0.0;
    fVar63 = fVar60;
    fVar51 = (float)FUN_02692df0(fVar45 - fVar66,_uStack0000000000000060,0);
    fVar65 = fVar65 - fVar69;
    fVar56 = 0.0;
    fVar45 = fVar65;
    fVar61 = (float)FUN_02692df0(fVar61 - fVar66,_uStack0000000000000060,0);
    fVar62 = 0.0;
    fVar68 = (float)FUN_02692df0(fVar68 - fVar66,_uStack0000000000000060,0);
    fVar68 = fVar66 + fVar68;
    fVar60 = fVar69 + fVar60;
    fVar62 = fVar62 + 0.0;
    fVar52 = 0.0;
    fVar64 = (float)FUN_02692df0(fVar64 - fVar66,_uStack0000000000000060,0);
    fVar64 = fVar66 + fVar64;
    fVar65 = fVar69 + fVar65;
    fVar52 = fVar52 + 0.0;
    fVar57 = fVar69 + fVar45;
    fVar63 = fVar69 + fVar63;
    fStack00000000000000e8 = fVar66 + fVar51;
    fStack00000000000000ec = fVar66 + fVar61;
    fStack00000000000000e0 = fVar56 + 0.0;
    fStack00000000000000e4 = fVar55 + 0.0;
  }
  if (*in_stack_00000150 == 0) goto LAB_02491464;
  lVar25 = *(long *)(*in_stack_00000150 + 0x38);
  param_2 = (ulong)(uint)fVar70;
  if (lVar25 == 0) goto LAB_02491464;
  if (*(uint *)(lVar25 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar25 = lVar25 + (int)*in_stack_00000148 * unaff_x21;
  *(float *)(lVar25 + 0x120) = fVar57;
  *(float *)(lVar25 + 0x11c) = fStack00000000000000ec;
  *(float *)(lVar25 + 0x124) = fStack00000000000000e0;
  if (*in_stack_00000150 == 0) goto LAB_02491464;
  lVar25 = *(long *)(*in_stack_00000150 + 0x38);
  unaff_s12 = 1.0;
  if (lVar25 == 0) goto LAB_02491464;
  if (*(uint *)(lVar25 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar25 = lVar25 + (int)*in_stack_00000148 * unaff_x21;
  *(float *)(lVar25 + 0x114) = fVar63;
  *(float *)(lVar25 + 0x110) = fStack00000000000000e8;
  *(float *)(lVar25 + 0x118) = fStack00000000000000e4;
  if ((*in_stack_00000150 == 0) || (lVar25 = *(long *)(*in_stack_00000150 + 0x38), lVar25 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar25 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar25 = lVar25 + (int)*in_stack_00000148 * unaff_x21;
  *(float *)(lVar25 + 0x128) = fVar68;
  *(float *)(lVar25 + 300) = fVar60;
  *(float *)(lVar25 + 0x130) = fVar62;
  if ((*in_stack_00000150 == 0) || (lVar25 = *(long *)(*in_stack_00000150 + 0x38), lVar25 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar25 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar25 = lVar25 + (int)*in_stack_00000148 * unaff_x21;
  *(float *)(lVar25 + 0x134) = fVar64;
  *(float *)(lVar25 + 0x138) = fVar65;
  *(float *)(lVar25 + 0x13c) = fVar52;
  if ((*in_stack_00000150 == 0) || (lVar25 = *(long *)(*in_stack_00000150 + 0x38), lVar25 == 0))
  goto LAB_02491464;
  uVar28 = *in_stack_00000148;
  lVar29 = (long)(int)uVar28;
  if (*(uint *)(lVar25 + 0x18) <= uVar28)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar42 = lVar25 + lVar29 * unaff_x21;
  *(int *)(lVar42 + 0x140) = (int)unaff_x19[199];
  fVar64 = *(float *)(unaff_x19 + 0x9a);
  uVar19 = (ulong)(uint)fVar64;
  fVar45 = *(float *)((long)unaff_x19 + 0x614);
  *(float *)(lVar42 + 0x15c) = (fVar68 - fStack00000000000000ec) / (fVar63 - fVar57);
  *(float *)(lVar42 + 0x14c) = (fVar49 - fVar64) + fVar45;
  fVar47 = fVar47 * fVar70;
  if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
    fVar47 = fVar47 / fVar53;
    fVar67 = (fVar67 * fVar70) / fVar53;
  }
  else {
    fVar67 = fVar67 * fVar70;
  }
  uVar24 = *(uint *)(unaff_x19 + 0x92);
  bVar8 = uVar11 != 0;
  fVar47 = fVar45 + fVar47;
  bVar9 = uVar28 != uVar24;
  if (bVar9 && bVar8) {
    fVar45 = *(float *)(unaff_x19 + 0x98);
    lVar25 = lVar25 + lVar29 * unaff_x21;
    *(float *)(lVar25 + 0x154) = fVar45;
    fVar67 = *(float *)((long)unaff_x19 + 0x4c4);
    *(float *)(lVar25 + 0x148) = fVar45 - fVar64;
    *(float *)(lVar25 + 0x158) = fVar67;
    *(float *)(unaff_x19 + 0x97) = fVar45 - fVar64;
    fVar67 = fVar67 - fVar64;
    *(float *)(lVar25 + 0x150) = fVar67;
  }
  else {
    fVar67 = fVar45 + fVar67;
    fVar68 = fVar47;
    fVar49 = fVar67;
    if (fVar45 != 0.0) {
      fVar68 = (fVar47 - fVar45) / *(float *)((long)unaff_x19 + 0x3fc);
      fVar49 = (fVar67 - fVar45) / *(float *)((long)unaff_x19 + 0x3fc);
      if (fVar68 <= fVar47) {
        fVar68 = fVar47;
      }
      if (fVar67 <= fVar49) {
        fVar49 = fVar67;
      }
    }
    lVar25 = lVar25 + lVar29 * unaff_x21;
    fVar45 = fVar68;
    if (fVar68 <= *(float *)(unaff_x19 + 0x98)) {
      fVar45 = *(float *)(unaff_x19 + 0x98);
    }
    fVar60 = fVar49;
    if (*(float *)((long)unaff_x19 + 0x4c4) <= fVar49) {
      fVar60 = *(float *)((long)unaff_x19 + 0x4c4);
    }
    *(float *)((long)unaff_x19 + 0x4c4) = fVar60;
    fVar67 = fVar67 - fVar64;
    *(float *)(unaff_x19 + 0x98) = fVar45;
    *(float *)(lVar25 + 0x154) = fVar68;
    *(float *)(lVar25 + 0x158) = fVar49;
    *(float *)(lVar25 + 0x148) = fVar47 - fVar64;
    *(float *)(unaff_x19 + 0x97) = fVar47 - fVar64;
    *(float *)(lVar25 + 0x150) = fVar67;
  }
  *(float *)((long)unaff_x19 + 0x4bc) = fVar67;
  if (((int)unaff_x19[0x94] == 0) || (*(char *)((long)unaff_x19 + 0x334) != '\0')) {
    if (!bVar9 || !bVar8) {
      *(float *)(unaff_x19 + 0x96) = fVar45;
      if (unaff_x19[0x1f] == 0) goto LAB_02491464;
      fVar45 = *(float *)((long)unaff_x19 + 0x4b4);
      fVar64 = (float)FUN_026fd150(unaff_x19[0x1f] + 0x50,0);
      fVar53 = (fVar70 * fVar64) / fVar53;
      uVar19 = (ulong)*(uint *)(unaff_x19 + 0x9a);
      if (fVar45 <= fVar53) {
        fVar45 = fVar53;
      }
      *(float *)((long)unaff_x19 + 0x4b4) = fVar45;
      goto LAB_0248bef4;
    }
  }
  else {
LAB_0248bef4:
    if ((!bVar9 || !bVar8) && (float)uVar19 == 0.0) {
      fVar53 = *(float *)(in_stack_00000070 + 0x208);
      if (*(float *)(in_stack_00000070 + 0x208) <= fVar47) {
        fVar53 = fVar47;
      }
      *(float *)(in_stack_00000070 + 0x208) = fVar53;
    }
  }
  lVar25 = *in_stack_00000150;
  if ((lVar25 == 0) || (lVar29 = *(long *)(lVar25 + 0x38), lVar29 == 0)) goto LAB_02491464;
  uVar1 = *in_stack_00000148;
  if (*(uint *)(lVar29 + 0x18) <= uVar1)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar29 = lVar29 + (int)uVar1 * unaff_x21;
  *(undefined1 *)(lVar29 + 0x194) = 0;
  uVar33 = *(uint *)(unaff_x19 + 0x4e);
  if ((in_stack_000017bc == 9) ||
     (((((uVar11 == 0 && (in_stack_000017bc != 3)) && (in_stack_000017bc != 0x200b)) &&
       (in_stack_000017bc != 0xad)) ||
      (((bool)(in_stack_000017bc == 0xad & (bVar7 ^ 1U)) || (*(int *)((long)unaff_x19 + 0x63c) == 1)
       ))))) {
    *(undefined1 *)(lVar29 + 0x194) = 1;
    pfVar31 = in_stack_00000088;
    pfVar35 = _fStack0000000000000098;
    if (bVar4) {
      lVar25 = *(long *)(lVar25 + 0x50);
      if (lVar25 == 0) goto LAB_02491464;
      if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      pfVar35 = (float *)(lVar25 + 0x60);
      pfVar31 = (float *)(lVar25 + 100);
    }
    fVar45 = *pfVar35;
    fVar64 = *pfVar31;
    fVar53 = *(float *)(unaff_x19 + 0x6b);
    fVar67 = *(float *)(unaff_x19 + 199);
    in_stack_000000d8._4_4_ = (fStack0000000000000090 - fVar45) - fVar64;
    bVar8 = true;
    if ((fVar53 <= in_stack_000000d8._4_4_) && (bVar8 = false, !NAN(fVar53))) {
      bVar8 = fVar53 == -1.0;
    }
    if (!bVar8) {
      in_stack_000000d8._4_4_ = fVar53;
    }
    fVar53 = 0.0;
    if ((char)unaff_x19[0x1d] == '\0') {
      fVar53 = (float)FUN_026fd474(&stack0x00001770,0);
      uVar19 = (ulong)*(uint *)(unaff_x19 + 0x9a);
    }
    fVar49 = *(float *)((long)unaff_x19 + 0x4c4);
    fVar47 = *(float *)((long)unaff_x19 + 0x2cc);
    fVar68 = (float)uVar19;
    if (in_stack_000017bc != 0xad) {
      fVar59 = fVar70;
    }
    fVar60 = 0.0;
    if ((0.0 < fVar68) && (fVar60 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
      fVar60 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
    }
    fVar60 = (*(float *)(unaff_x19 + 0x96) - (fVar49 - fVar68)) + fVar60;
    uVar1 = *in_stack_00000148;
    if (in_stack_000000a0 < fVar60) {
      if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
        *(uint *)((long)unaff_x19 + 0x2dc) = uVar1;
      }
      plVar44 = (long *)StringLiteral_302;
      plVar30 = (long *)System_Threading_Mutex_TypeInfo;
      uVar15 = DAT_02941c08;
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
        uVar19 = (ulong)(uint)fVar68;
        if ((fVar68 < fVar60) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
          fVar59 = (fVar60 - *(float *)(unaff_x19 + 0x47)) * 0.5;
          if (fVar59 <= DAT_028aa298) {
            fVar59 = DAT_028aa298;
          }
          fVar53 = (fVar60 - fVar59) * 20.0 + 0.5;
          fVar59 = DAT_02958220;
          if (fVar53 != INFINITY) {
            fVar59 = (float)(int)fVar53 / 20.0;
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
        lVar25 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar25 = *plVar30;
        }
        lVar29 = *(long *)(lVar25 + 0xb8);
        lVar25 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
        if ((*(byte *)(lVar25 + 0x132) & 1) == 0) {
          lVar25 = FUN_00d5941c(lVar25);
        }
        plVar44 = (long *)StringLiteral_302;
        lVar25 = *(long *)(*(long *)(lVar25 + 0xc0) + 8);
        if ((*(byte *)(lVar25 + 0x132) & 1) == 0) {
          lVar25 = FUN_00d5941c();
        }
        piVar20 = (int *)thunk_FUN_00d32ed4(lVar29 + 0x11f0,*(long *)(lVar25 + 0x80) + 0xa0);
        if (*piVar20 == 0) goto LAB_0248e4bc;
        lVar25 = *plVar30;
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar25 = *plVar30;
        }
        FUN_013b8de4(*(long *)(lVar25 + 0xb8) + 0x11f0,&stack0x00000880,
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
        plVar44 = (long *)StringLiteral_302;
        in_stack_00001788 = FUN_024d66ec();
        break;
      case 5:
        if ((uVar1 == 0) || ((int)in_stack_00001788 < 0)) {
          *in_stack_00000148 = 0;
          plVar30 = (long *)System_Threading_Mutex_TypeInfo;
          unaff_x25 = in_stack_00000150;
          plVar44 = (long *)StringLiteral_302;
          in_stack_00001788 = 0xffffffff;
          in_stack_000017a8 = uVar15;
          goto LAB_0248ab98;
        }
        fVar59 = *(float *)(unaff_x19 + 0x98);
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        if (fVar59 - fVar49 <= in_stack_000000a0) {
          *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
          *(undefined4 *)(unaff_x19 + 0x92) = *(undefined4 *)((long)unaff_x19 + 0x48c);
          uVar19 = *(ulong *)(*(long *)(*plVar30 + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
          *(undefined4 *)(unaff_x19 + 0x99) = 0;
          lVar25 = NEON_rev64(uVar19,4);
          unaff_x19[0x98] = lVar25;
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
        plVar44 = (long *)StringLiteral_302;
        lVar25 = unaff_x19[0x5c];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            );
        }
        uVar17 = FUN_02681b9c(lVar25,0,0);
        if ((uVar17 & 1) != 0) {
          plVar41 = (long *)unaff_x19[0x5c];
          uVar15 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar41 == (long *)0x0) goto LAB_02491464;
          (**(code **)(*plVar41 + 0x558))(plVar41,uVar15,*(undefined8 *)(*plVar41 + 0x560));
          lVar25 = unaff_x19[0x5c];
          if (lVar25 == 0) goto LAB_02491464;
          *(int *)(lVar25 + 0x3f8) = (int)unaff_x19[0x7f];
          FUN_024c910c(lVar25,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
          plVar41 = (long *)unaff_x19[0x5c];
          if (plVar41 == (long *)0x0) goto LAB_02491464;
          (**(code **)(*plVar41 + 0x7d8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        }
      }
      goto LAB_0248c628;
    }
switchD_0248c274_caseD_2:
    plVar30 = (long *)System_Threading_Mutex_TypeInfo;
    fVar68 = 1.0 - fVar47;
    uVar19 = (ulong)(uint)fVar68;
    fVar53 = ABS(fVar67) + fVar53 * fVar68 * fVar59;
    fVar59 = _DAT_0294c6e8;
    if ((uVar33 & 0x18) == 0) {
      fVar59 = 1.0;
    }
    if (fVar59 * in_stack_000000d8._4_4_ < fVar53) {
      if (((char)unaff_x19[0x5a] == '\0') || (uVar1 == *(uint *)(unaff_x19 + 0x92))) {
        if (((char)unaff_x19[0x46] != '\0') &&
           (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
          fVar67 = *(float *)(unaff_x19 + 0x59) / 100.0;
          if (fVar47 < fVar67) {
            fVar70 = fVar53 / fVar68;
            if (fVar47 <= 0.0) {
              fVar70 = fVar53;
            }
            fVar47 = fVar47 + (fVar53 - fVar59 * (in_stack_000000d8._4_4_ + DAT_02958218)) / fVar70;
            goto LAB_0249154c;
          }
          fVar47 = *(float *)((long)unaff_x19 + 0x1dc);
          uVar19 = (ulong)(uint)fVar47;
          fVar67 = *(float *)(unaff_x19 + 0x49);
          if (fVar67 < fVar47) {
LAB_024914c0:
            fVar59 = (fVar47 - *(float *)(unaff_x19 + 0x47)) * 0.5;
            if (fVar59 <= DAT_028aa298) {
              fVar59 = DAT_028aa298;
            }
            *(float *)((long)unaff_x19 + 0x234) = fVar47;
            fVar53 = (fVar47 - fVar59) * 20.0 + 0.5;
            fVar59 = DAT_02958220;
            if (fVar53 != INFINITY) {
              fVar59 = (float)(int)fVar53 / 20.0;
            }
            if (fVar59 <= fVar67) {
              fVar59 = fVar67;
            }
LAB_0248e598:
            *(float *)((long)unaff_x19 + 0x1dc) = fVar59;
            return;
          }
        }
        iVar10 = (int)unaff_x19[0x5b];
        if (iVar10 == 1) {
          lVar25 = *(long *)System_Threading_Mutex_TypeInfo;
          if (*(int *)(lVar25 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar25 = *plVar30;
          }
          plVar44 = (long *)StringLiteral_302;
          lVar29 = *(long *)(lVar25 + 0xb8);
          lVar25 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
          if ((*(byte *)(lVar25 + 0x132) & 1) == 0) {
            lVar25 = FUN_00d5941c(lVar25);
          }
          lVar25 = *(long *)(*(long *)(lVar25 + 0xc0) + 8);
          if ((*(byte *)(lVar25 + 0x132) & 1) == 0) {
            lVar25 = FUN_00d5941c();
          }
          piVar20 = (int *)thunk_FUN_00d32ed4(lVar29 + 0x11f0,*(long *)(lVar25 + 0x80) + 0xa0);
          if (*piVar20 == 0) goto LAB_0248e4bc;
          lVar25 = *plVar30;
          if (*(int *)(lVar25 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar25 = *plVar30;
          }
          FUN_013b8de4(*(long *)(lVar25 + 0xb8) + 0x11f0,&stack0x00000880,
                       *(undefined8 *)
                        Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                      );
          memcpy(&stack0x00000c70,&stack0x00000880,0x378);
          goto LAB_0248c8f4;
        }
        if (iVar10 == 6) {
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          plVar44 = (long *)StringLiteral_302;
          in_stack_00001788 = FUN_024d66ec();
          lVar25 = unaff_x19[0x5c];
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              );
          }
          uVar17 = FUN_02681b9c(lVar25,0,0);
          if ((uVar17 & 1) != 0) {
            plVar41 = (long *)unaff_x19[0x5c];
            uVar15 = (**(code **)(*unaff_x19 + 0x548))();
            if (plVar41 == (long *)0x0) goto LAB_02491464;
            (**(code **)(*plVar41 + 0x558))(plVar41,uVar15,*(undefined8 *)(*plVar41 + 0x560));
            lVar25 = unaff_x19[0x5c];
            if (lVar25 == 0) goto LAB_02491464;
            *(int *)(lVar25 + 0x3f8) = (int)unaff_x19[0x7f];
            FUN_024c910c(lVar25,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
            plVar41 = (long *)unaff_x19[0x5c];
            if (plVar41 == (long *)0x0) goto LAB_02491464;
            (**(code **)(*plVar41 + 0x7d8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7e0));
            *(undefined1 *)(unaff_x19 + 0x5e) = 1;
          }
          goto LAB_0248ca1c;
        }
        if (iVar10 == 3) {
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          goto LAB_0248c524;
        }
      }
      else {
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
          lVar25 = *in_stack_00000150;
          if ((lVar25 == 0) || (lVar29 = *(long *)(lVar25 + 0x38), lVar29 == 0)) goto LAB_02491464;
          if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000148)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          fVar67 = *(float *)(unaff_x19 + 0x9a);
          fVar47 = 0.0;
          if ((0.0 < fVar67) && (fVar47 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
            fVar47 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
          }
          fVar47 = in_stack_000000c8 * *(float *)(unaff_x19 + 0x56) +
                   *(float *)(lVar29 + (int)*in_stack_00000148 * unaff_x21 + 0x154) +
                   (fVar47 - *(float *)((long)unaff_x19 + 0x4c4)) +
                   fStack0000000000000054 *
                   (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4));
        }
        else {
          lVar25 = unaff_x19[0x6c];
          *(undefined1 *)((long)unaff_x19 + 700) = 1;
          if (lVar25 == 0) goto LAB_02491464;
          fVar67 = *(float *)(unaff_x19 + 0x9a);
          fVar47 = *(float *)(unaff_x19 + 0x57) + in_stack_000000c8 * *(float *)(unaff_x19 + 0x56);
        }
        puVar6 = System_Threading_Mutex_TypeInfo;
        lVar25 = *(long *)(lVar25 + 0x38);
        if (lVar25 == 0) goto LAB_02491464;
        uVar36 = *(uint *)((long)unaff_x19 + 0x48c);
        if ((*(uint *)(lVar25 + 0x18) <= uVar36) ||
           (uVar43 = uVar36 - 1, *(uint *)(lVar25 + 0x18) <= uVar43))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        uVar19 = (ulong)(uint)(fVar47 + *(float *)(unaff_x19 + 0x96));
        fVar68 = (fVar47 + *(float *)(unaff_x19 + 0x96) + fVar67) -
                 *(float *)(lVar25 + (int)uVar36 * unaff_x21 + 0x158);
        if ((!bVar7 && *(short *)(lVar25 + (long)(int)uVar43 * (long)iVar12 + 0x20) == 0xad) &&
           ((fVar68 < in_stack_000000a0 || ((int)unaff_x19[0x5b] == 0)))) {
          in_stack_00001788 = in_stack_00001788 - 1;
          bVar7 = false;
          in_stack_000017a8 = CONCAT44(0x2d,uVar43);
          *in_stack_00000148 = uVar43;
          goto LAB_0248cf04;
        }
        if (*(short *)(lVar25 + (int)uVar36 * unaff_x21 + 0x20) == 0xad) {
          bVar7 = true;
          goto LAB_0248cf04;
        }
        if ((bStack000000000000005c & *(byte *)(unaff_x19 + 0x46) & 1) != 0) {
          fVar47 = *(float *)((long)unaff_x19 + 0x2cc);
          fVar67 = *(float *)(unaff_x19 + 0x59) / 100.0;
          if ((fVar67 <= fVar47) || ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c))) {
            fVar47 = *(float *)((long)unaff_x19 + 0x1dc);
            uVar19 = (ulong)(uint)fVar47;
            fVar67 = *(float *)(unaff_x19 + 0x49);
            if ((fVar67 < fVar47) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
            goto LAB_024914c0;
            goto LAB_0248cc70;
          }
LAB_0249155c:
          fVar70 = fVar53;
          if (0.0 < fVar47) {
            fVar70 = fVar53 / (1.0 - fVar47);
          }
          fVar47 = fVar47 + (fVar53 - fVar59 * (in_stack_000000d8._4_4_ + DAT_02958218)) / fVar70;
LAB_0249154c:
          if (fVar67 <= fVar47) {
            fVar47 = fVar67;
          }
          *(float *)((long)unaff_x19 + 0x2cc) = fVar47;
          return;
        }
LAB_0248cc70:
        lVar25 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar25 = *(long *)puVar6;
        }
        iVar10 = *(int *)(*(long *)(lVar25 + 0xb8) + 0xe78);
        if ((((float)iVar10 != fStack0000000000000034) && (iVar10 != -1)) &&
           (((bStack000000000000005c ^ 1) & 1) == 0)) {
          if (*(int *)(lVar25 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          in_stack_00001788 = FUN_024d66ec();
          if ((unaff_x19[0x6c] == 0) || (lVar25 = *(long *)(unaff_x19[0x6c] + 0x38), lVar25 == 0))
          goto LAB_02491464;
          uVar36 = *in_stack_00000148 - 1;
          if (*(uint *)(lVar25 + 0x18) <= uVar36)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          fStack0000000000000034 = (float)iVar10;
          if (*(short *)(lVar25 + (long)(int)uVar36 * (long)iVar12 + 0x20) == 0xad) {
            in_stack_00001788 = in_stack_00001788 - 1;
            bVar7 = false;
            in_stack_000017a8 = CONCAT44(0x2d,uVar36);
            *in_stack_00000148 = uVar36;
            goto LAB_0248cf04;
          }
        }
        if (fVar68 <= in_stack_000000a0) {
          uVar19 = param_2;
          FUN_024d7014(fStack0000000000000054,param_2,in_stack_000000c8,
                       *(undefined4 *)((long)unaff_x19 + 0x2f4),fStack00000000000000c4,
                       fStack00000000000000cc,in_stack_000000d8._4_4_,fStack0000000000000048);
          bStack000000000000005c = 1;
          bVar7 = false;
          bVar5 = true;
LAB_0248cf04:
          unaff_s12 = 1.0;
          plVar30 = (long *)System_Threading_Mutex_TypeInfo;
          unaff_x25 = in_stack_00000150;
          plVar44 = (long *)StringLiteral_302;
          goto LAB_0248ab98;
        }
        if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
          *(undefined4 *)((long)unaff_x19 + 0x2dc) = *(undefined4 *)((long)unaff_x19 + 0x48c);
        }
        plVar44 = (long *)StringLiteral_302;
        plVar30 = (long *)System_Threading_Mutex_TypeInfo;
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
          fVar47 = *(float *)((long)unaff_x19 + 0x2cc);
          fVar67 = *(float *)(unaff_x19 + 0x59) / 100.0;
          if ((fVar47 < fVar67) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
          goto LAB_0249155c;
          fVar47 = *(float *)((long)unaff_x19 + 0x1dc);
          uVar19 = (ulong)(uint)fVar47;
          fVar67 = *(float *)(unaff_x19 + 0x49);
          if ((fVar67 < fVar47) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
          goto LAB_024914c0;
        }
        unaff_s12 = 1.0;
        switch((int)unaff_x19[0x5b]) {
        case 0:
        case 2:
        case 4:
          goto switchD_0248ce4c_caseD_0;
        case 1:
          lVar25 = *(long *)System_Threading_Mutex_TypeInfo;
          if (*(int *)(lVar25 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar25 = *plVar30;
          }
          lVar29 = *(long *)(lVar25 + 0xb8);
          lVar25 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
          if ((*(byte *)(lVar25 + 0x132) & 1) == 0) {
            lVar25 = FUN_00d5941c(lVar25);
          }
          lVar25 = *(long *)(*(long *)(lVar25 + 0xc0) + 8);
          if ((*(byte *)(lVar25 + 0x132) & 1) == 0) {
            lVar25 = FUN_00d5941c();
          }
          piVar20 = (int *)thunk_FUN_00d32ed4(lVar29 + 0x11f0,*(long *)(lVar25 + 0x80) + 0xa0);
          if (*piVar20 == 0) {
            bVar7 = false;
LAB_0248e4bc:
            in_stack_000017a8 = DAT_02941c08;
            unaff_s12 = 1.0;
            in_stack_00000148[0] = 0;
            in_stack_00000148[1] = 0;
            unaff_x25 = in_stack_00000150;
            in_stack_00001788 = 0xffffffff;
            goto LAB_0248ab98;
          }
          lVar25 = *plVar30;
          if (*(int *)(lVar25 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar25 = *plVar30;
          }
          FUN_013b8de4(*(long *)(lVar25 + 0xb8) + 0x11f0,&stack0x00000880,
                       *(undefined8 *)
                        Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                      );
          memcpy(&stack0x00000fe8,&stack0x00000880,0x378);
          iVar12 = FUN_024d66ec();
          bVar7 = false;
LAB_0248c900:
          unaff_s12 = 1.0;
          iVar10 = *(int *)((long)unaff_x19 + 0x48c) + -1;
          *(int *)((long)unaff_x19 + 0x48c) = iVar10;
          in_stack_00000140._4_4_ = in_stack_00000140._4_4_ + 1;
          unaff_x25 = in_stack_00000150;
          in_stack_00001788 = iVar12 - 1;
          in_stack_000017a8 = CONCAT44(0x2026,iVar10);
          goto LAB_0248ab98;
        case 3:
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          in_stack_00001788 = FUN_024d66ec();
          bVar7 = false;
LAB_0248c628:
          unaff_s12 = 1.0;
          unaff_x25 = in_stack_00000150;
          in_stack_000017a8 = CONCAT44(3,uVar1);
          goto LAB_0248ab98;
        case 5:
          goto switchD_0248ce4c_caseD_5;
        case 6:
          lVar25 = unaff_x19[0x5c];
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar17 = FUN_02681b9c(lVar25,0,0);
          if ((uVar17 & 1) != 0) {
            plVar41 = (long *)unaff_x19[0x5c];
            uVar15 = (**(code **)(*unaff_x19 + 0x548))();
            if (plVar41 == (long *)0x0) goto LAB_02491464;
            (**(code **)(*plVar41 + 0x558))(plVar41,uVar15,*(undefined8 *)(*plVar41 + 0x560));
            lVar25 = unaff_x19[0x5c];
            if (lVar25 == 0) goto LAB_02491464;
            *(int *)(lVar25 + 0x3f8) = (int)unaff_x19[0x7f];
            FUN_024c910c(lVar25,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
            plVar41 = (long *)unaff_x19[0x5c];
            if (plVar41 == (long *)0x0) goto LAB_02491464;
            (**(code **)(*plVar41 + 0x7d8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7e0));
            *(undefined1 *)(unaff_x19 + 0x5e) = 1;
          }
          bVar7 = false;
LAB_0248ca1c:
          unaff_s12 = 1.0;
          unaff_x25 = in_stack_00000150;
          in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
          goto LAB_0248ab98;
        default:
          bVar7 = false;
        }
      }
    }
    if (in_stack_000017bc == 0xad) {
      if ((*in_stack_00000150 == 0) || (lVar25 = *(long *)(*in_stack_00000150 + 0x38), lVar25 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar25 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      *(undefined1 *)(lVar25 + (int)*in_stack_00000148 * unaff_x21 + 0x194) = 0;
    }
    else {
      if (in_stack_000017bc == 9) {
        lVar25 = *in_stack_00000150;
        if ((lVar25 == 0) || (lVar29 = *(long *)(lVar25 + 0x38), lVar29 == 0)) goto LAB_02491464;
        uVar1 = *in_stack_00000148;
        if (*(uint *)(lVar29 + 0x18) <= uVar1)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        *(undefined1 *)(lVar29 + (int)uVar1 * unaff_x21 + 0x194) = 0;
        *(uint *)((long)unaff_x19 + 0x49c) = uVar1;
        lVar29 = *(long *)(lVar25 + 0x50);
        if (lVar29 == 0) goto LAB_02491464;
        if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
        *(int *)(lVar29 + 0x2c) = *(int *)(lVar29 + 0x2c) + 1;
        goto LAB_0248cf8c;
      }
      if (*(int *)((long)unaff_x19 + 0x63c) == 1) {
        (**(code **)(*unaff_x19 + 0x8c8))();
      }
      else if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
        (**(code **)(*unaff_x19 + 0x8b8))(in_stack_00000130._4_4_,fVar50);
      }
      uVar1 = *in_stack_00000148;
      if (bVar5) {
        *(uint *)(in_stack_00000070 + 0x1f0) = uVar1;
      }
      *(uint *)((long)unaff_x19 + 0x49c) = uVar1;
      *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
      if ((unaff_x19[0x6c] == 0) || (lVar25 = *(long *)(unaff_x19[0x6c] + 0x50), lVar25 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      bVar5 = false;
      *(float *)(lVar25 + 0x60) = fVar45;
      *(float *)(lVar25 + 100) = fVar64;
    }
  }
  else {
    if (((in_stack_000017bc & 0xfffffffe) == 10) && ((int)unaff_x19[0x5b] == 6)) {
      fVar53 = (float)uVar19;
      fVar59 = 0.0;
      if ((0.0 < fVar53) && (fVar59 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
        fVar59 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
      }
      uVar19 = (ulong)(uint)in_stack_000000a0;
      if (in_stack_000000a0 <
          (*(float *)(unaff_x19 + 0x96) - (*(float *)((long)unaff_x19 + 0x4c4) - fVar53)) + fVar59)
      {
        if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
          *(uint *)((long)unaff_x19 + 0x2dc) = uVar1;
        }
        plVar44 = (long *)StringLiteral_302;
        plVar30 = (long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        lVar25 = unaff_x19[0x5c];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            );
        }
        uVar17 = FUN_02681b9c(lVar25,0,0);
        if ((uVar17 & 1) != 0) {
          plVar41 = (long *)unaff_x19[0x5c];
          uVar15 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar41 == (long *)0x0) goto LAB_02491464;
          (**(code **)(*plVar41 + 0x558))(plVar41,uVar15,*(undefined8 *)(*plVar41 + 0x560));
          lVar25 = unaff_x19[0x5c];
          if (lVar25 == 0) goto LAB_02491464;
          *(int *)(lVar25 + 0x3f8) = (int)unaff_x19[0x7f];
          FUN_024c910c(lVar25,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
          plVar41 = (long *)unaff_x19[0x5c];
          if (plVar41 == (long *)0x0) goto LAB_02491464;
          (**(code **)(*plVar41 + 0x7d8))(plVar41,0,0,*(undefined8 *)(*plVar41 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        }
        unaff_x25 = in_stack_00000150;
        in_stack_000017a8 = CONCAT44(3,uVar1);
        goto LAB_0248ab98;
      }
    }
    if ((((in_stack_000017bc - 0x2007 < 0x23) &&
         ((1L << ((ulong)(in_stack_000017bc - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
        (in_stack_000017bc - 10 < 2)) || (in_stack_000017bc == 0xa0)) {
UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ObjectSpawner__get_objectPrefabs:
      if (((in_stack_000017bc != 0xad) && (in_stack_000017bc != 0x200b)) &&
         (in_stack_000017bc != 0x2060)) {
        lVar25 = *in_stack_00000150;
        if ((lVar25 == 0) || (lVar29 = *(long *)(lVar25 + 0x50), lVar29 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
        *(int *)(lVar29 + 0x2c) = *(int *)(lVar29 + 0x2c) + 1;
        *(int *)(lVar25 + 0x20) = *(int *)(lVar25 + 0x20) + 1;
      }
    }
    else {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar19 = FUN_016fa418(in_stack_000017bc,0);
      if ((uVar19 & 1) != 0)
      goto UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ObjectSpawner__get_objectPrefabs
      ;
    }
    if (in_stack_000017bc == 0xa0) {
      if ((*in_stack_00000150 == 0) || (lVar25 = *(long *)(*in_stack_00000150 + 0x50), lVar25 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
LAB_0248cf8c:
      *(int *)(lVar25 + 0x20) = *(int *)(lVar25 + 0x20) + 1;
    }
  }
  if (((int)unaff_x19[0x5b] == 1) && ((in_stack_000017bc == 0x2d || (!bVar4)))) {
    if (unaff_x19[0xca] == 0) goto LAB_02491464;
    fVar59 = *(float *)(unaff_x19 + 0x3c);
    iVar10 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
    if (unaff_x19[0xca] == 0) goto LAB_02491464;
    fVar45 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
    lVar25 = unaff_x19[0xc9];
    fVar53 = in_stack_00000080._4_4_;
    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
      fVar53 = 1.0;
    }
    if ((lVar25 == 0) || (*(long *)(lVar25 + 0x20) == 0)) goto LAB_02491464;
    fVar67 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar68 = *(float *)(lVar25 + 0x2c);
    fVar64 = (float)FUN_026fd668(*(long *)(lVar25 + 0x20),0);
    fVar47 = *_fStack0000000000000098;
    fVar64 = fVar67 * (fVar59 / (float)iVar10) * fVar45 * fVar53 * fVar68 * fVar64;
    fVar59 = *in_stack_00000088;
    if ((in_stack_000017bc == 10) && (*(int *)((long)unaff_x19 + 0x48c) != (int)unaff_x19[0x92])) {
      if ((*in_stack_00000150 == 0) || (lVar25 = *(long *)(*in_stack_00000150 + 0x38), lVar25 == 0))
      goto LAB_02491464;
      uVar1 = *(int *)((long)unaff_x19 + 0x48c) - 1;
      if (*(uint *)(lVar25 + 0x18) <= uVar1)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (unaff_x19[0xca] == 0) goto LAB_02491464;
      fVar53 = *(float *)(lVar25 + (long)(int)uVar1 * (long)iVar12 + 0x60);
      iVar10 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
      if (unaff_x19[0xca] == 0) goto LAB_02491464;
      fVar67 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
      lVar25 = unaff_x19[0xc9];
      fVar45 = in_stack_00000080._4_4_;
      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
        fVar45 = 1.0;
      }
      if ((lVar25 == 0) || (*(long *)(lVar25 + 0x20) == 0)) goto LAB_02491464;
      fVar68 = *(float *)((long)unaff_x19 + 0x3fc);
      fVar49 = *(float *)(lVar25 + 0x2c);
      fVar64 = (float)FUN_026fd668(*(long *)(lVar25 + 0x20),0);
      if ((*in_stack_00000150 == 0) || (lVar25 = *(long *)(*in_stack_00000150 + 0x50), lVar25 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      fVar47 = *(float *)(lVar25 + 0x60);
      fVar59 = *(float *)(lVar25 + 100);
      fVar64 = fVar68 * (fVar53 / (float)iVar10) * fVar67 * fVar45 * fVar49 * fVar64;
    }
    fVar68 = *(float *)(unaff_x19 + 0x9a);
    fVar45 = *(float *)(unaff_x19 + 0x96);
    fVar49 = *(float *)((long)unaff_x19 + 0x4c4);
    fVar53 = 0.0;
    fVar67 = 0.0;
    if ((0.0 < fVar68) && (fVar67 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
      fVar67 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
    }
    fVar50 = *(float *)(unaff_x19 + 199);
    if ((char)unaff_x19[0x1d] == '\0') {
      if ((unaff_x19[0xc9] == 0) || (lVar25 = *(long *)(unaff_x19[0xc9] + 0x20), lVar25 == 0))
      goto LAB_02491464;
      FUN_026fd62c(&stack0x00000880,lVar25,0);
      unaff_x28[0x1cd] = unaff_x28[1];
      unaff_x28[0x1cc] = *unaff_x28;
      fVar53 = (float)FUN_026fd474(&stack0x000016e0,0);
    }
    puVar6 = System_Threading_Mutex_TypeInfo;
    fVar60 = *(float *)(unaff_x19 + 0x6b);
    fVar59 = (fStack0000000000000090 - fVar47) - fVar59;
    bVar8 = true;
    if ((fVar60 <= fVar59) && (bVar8 = false, !NAN(fVar60))) {
      bVar8 = fVar60 == -1.0;
    }
    if (!bVar8) {
      fVar59 = fVar60;
    }
    fVar47 = _DAT_0294c6e8;
    if ((uVar33 & 0x18) == 0) {
      fVar47 = 1.0;
    }
    if (((fVar45 - (fVar49 - fVar68)) + fVar67 < in_stack_000000a0) &&
       (ABS(fVar50) + fVar64 * fVar53 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) <
        fVar47 * fVar59)) {
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_024d69d4();
      lVar25 = *(long *)(*(long *)puVar6 + 0xb8);
      memcpy(&stack0x00000508,(void *)(lVar25 + 0x788),0x378);
      FUN_013b86dc(lVar25 + 0x11f0,&stack0x00000508,
                   *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__);
    }
  }
  param_2 = (ulong)(uint)fVar70;
  unaff_s12 = 1.0;
  lVar25 = *in_stack_00000150;
  if ((lVar25 == 0) || (lVar29 = *(long *)(lVar25 + 0x38), lVar29 == 0)) goto LAB_02491464;
  if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  uVar1 = *(uint *)(unaff_x19 + 0x94);
  lVar29 = lVar29 + (int)*in_stack_00000148 * unaff_x21;
  *(uint *)(lVar29 + 100) = uVar1;
  *(int *)(lVar29 + 0x68) = (int)unaff_x19[0x95];
  if ((bVar4) ||
     ((in_stack_000017bc < 0xe && ((1 << (ulong)(in_stack_000017bc & 0x1f) & 0x2c00U) != 0)))) {
    lVar25 = *(long *)(lVar25 + 0x50);
    if (lVar25 == 0) goto LAB_02491464;
    if (*(uint *)(lVar25 + 0x18) <= uVar1)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    if (*(int *)(lVar25 + (long)(int)uVar1 * 0x5c + 0x24) == 1) goto LAB_0248d42c;
  }
  else {
    lVar25 = *(long *)(lVar25 + 0x50);
    if (lVar25 == 0) goto LAB_02491464;
LAB_0248d42c:
    if (*(uint *)(lVar25 + 0x18) <= uVar1)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(int *)(lVar25 + (long)(int)uVar1 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
  }
  if (in_stack_000017bc == 9) {
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar59 = (float)FUN_026fd208(*unaff_x27 + 0x50,0);
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar45 = *(float *)(unaff_x19 + 199);
    fVar53 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x27 + 0x1b9));
    fVar59 = fVar70 * fVar59 * fVar53;
    fVar53 = fVar59 * (float)(int)(fVar45 / fVar59);
    uVar19 = (ulong)(uint)fVar53;
    if (fVar53 <= fVar45) {
      fVar53 = fVar45 + fVar59;
    }
LAB_0248d614:
    *(float *)(unaff_x19 + 199) = fVar53;
  }
  else if (*(float *)(unaff_x19 + 0x55) == 0.0) {
    if ((char)unaff_x19[0x1d] == '\0') {
      fVar45 = unaff_s12;
      if (*(char *)((long)unaff_x19 + 0x46c) != '\0') {
        fVar45 = (float)thunk_FUN_026935f0(_uStack0000000000000060,0);
      }
      fVar53 = *(float *)(unaff_x19 + 199);
      fVar64 = (float)FUN_026fd474(&stack0x00001770,0);
      if (unaff_x19[0x1f] == 0) goto LAB_02491464;
      fVar59 = 1.0 - *(float *)((long)unaff_x19 + 0x2cc);
      fVar53 = fVar53 + fVar59 * (*(float *)((long)unaff_x19 + 0x2a4) +
                                 fVar70 * (fVar46 + fVar45 * fVar64) +
                                 in_stack_000000c8 *
                                 (fStack00000000000000c4 +
                                 fStack00000000000000cc + *(float *)(unaff_x19[0x1f] + 0x1ac)));
      *(float *)(unaff_x19 + 199) = fVar53;
      goto joined_r0x0248d568;
    }
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar53 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (*(float *)((long)unaff_x19 + 0x2a4) +
             fVar70 * fVar46 +
             in_stack_000000c8 *
             (fStack00000000000000c4 + fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac)));
    uVar19 = (ulong)(uint)fVar53;
    fVar53 = *(float *)(unaff_x19 + 199) - fVar53;
    *(float *)(unaff_x19 + 199) = fVar53;
    if ((uVar11 != 0) || (in_stack_000017bc == 0x200b)) {
      fVar59 = in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
      uVar19 = (ulong)(uint)fVar59;
      fVar53 = fVar53 - fVar59;
      goto LAB_0248d614;
    }
  }
  else {
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar59 = *(float *)(unaff_x19 + 199);
    fVar53 = fVar59 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                      (*(float *)((long)unaff_x19 + 0x2a4) +
                      (*(float *)(unaff_x19 + 0x55) - fVar48) +
                      in_stack_000000c8 * (fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac)))
    ;
    *(float *)(unaff_x19 + 199) = fVar53;
joined_r0x0248d568:
    if ((uVar11 != 0) || (uVar19 = (ulong)(uint)fVar59, in_stack_000017bc == 0x200b)) {
      fVar59 = in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
      uVar19 = (ulong)(uint)fVar59;
      fVar53 = fVar53 + fVar59;
      goto LAB_0248d614;
    }
  }
  lVar25 = *in_stack_00000150;
  if ((lVar25 == 0) || (lVar29 = *(long *)(lVar25 + 0x38), lVar29 == 0)) goto LAB_02491464;
  uVar1 = *in_stack_00000148;
  uVar33 = (uint)*(undefined8 *)(lVar29 + 0x18);
  if (uVar33 <= uVar1)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar29 + (int)uVar1 * unaff_x21 + 0x144) = fVar53;
  uVar36 = in_stack_000017bc;
  if ((int)in_stack_000017bc < 0xd) {
    if ((in_stack_000017bc - 10 < 2) || (in_stack_000017bc == 3)) goto LAB_0248d6b8;
LAB_0248d69c:
    if (((bool)(bVar4 & in_stack_000017bc == 0x2d)) || ((float)uVar1 == in_stack_00000078._4_4_))
    goto LAB_0248d6b8;
  }
  else {
    if (1 < in_stack_000017bc - 0x2028) {
      if (in_stack_000017bc != 0xd) goto LAB_0248d69c;
      uVar19 = 0;
      *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
      if ((float)uVar1 != in_stack_00000078._4_4_) goto LAB_0248dc08;
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
        puVar6 = System_Threading_Mutex_TypeInfo;
        lVar25 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar25 = *(long *)puVar6;
        }
        lVar29 = *(long *)(lVar25 + 0xb8);
        if (*(int *)(lVar29 + 0x7ac) == (int)unaff_x19[0x94]) {
          if (*(int *)(lVar25 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar29 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          FUN_013b8de4(lVar29 + 0x11f0,&stack0x00000880,
                       *(undefined8 *)
                        Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                      );
          lVar25 = *(long *)System_Threading_Mutex_TypeInfo;
          memcpy((void *)(*(long *)(lVar25 + 0xb8) + 0x788),&stack0x00000880,0x378);
          lVar25 = *(long *)(lVar25 + 0xb8);
          *(float *)(lVar25 + 0x7bc) = fVar59 + *(float *)(lVar25 + 0x7bc);
          *(float *)(lVar25 + 0x800) = fVar59 + *(float *)(lVar25 + 0x800);
          memcpy(&stack0x00000190,(void *)(lVar25 + 0x788),0x378);
          FUN_013b86dc(lVar25 + 0x11f0,&stack0x00000190,
                       *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__);
        }
      }
    }
    fVar45 = *(float *)(unaff_x19 + 0x9a);
    *(undefined1 *)((long)unaff_x19 + 0x334) = 0;
    fVar53 = *(float *)((long)unaff_x19 + 0x4c4) - fVar45;
    fVar59 = *(float *)((long)unaff_x19 + 0x4bc);
    if (fVar53 <= *(float *)((long)unaff_x19 + 0x4bc)) {
      fVar59 = fVar53;
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
    lVar25 = *in_stack_00000150;
    if ((lVar25 == 0) || (lVar29 = *(long *)(lVar25 + 0x50), lVar29 == 0)) goto LAB_02491464;
    uVar1 = *(uint *)(unaff_x19 + 0x94);
    if (*(uint *)(lVar29 + 0x18) <= uVar1)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar42 = lVar29 + (long)(int)uVar1 * 0x5c;
    *(int *)(lVar42 + 0x34) = (int)unaff_x19[0x92];
    iVar10 = (int)unaff_x19[0x92];
    if ((int)unaff_x19[0x92] <= *(int *)((long)unaff_x19 + 0x494)) {
      iVar10 = *(int *)((long)unaff_x19 + 0x494);
    }
    *(int *)((long)unaff_x19 + 0x494) = iVar10;
    *(int *)(lVar42 + 0x38) = iVar10;
    *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x48c);
    *(undefined4 *)(lVar42 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x48c);
    iVar10 = *(int *)((long)unaff_x19 + 0x494);
    if (*(int *)((long)unaff_x19 + 0x494) <= *(int *)((long)unaff_x19 + 0x49c)) {
      iVar10 = *(int *)((long)unaff_x19 + 0x49c);
    }
    *(int *)((long)unaff_x19 + 0x49c) = iVar10;
    *(int *)(lVar42 + 0x40) = iVar10;
    *(int *)(lVar42 + 0x24) = (*(int *)(lVar42 + 0x3c) - *(int *)(lVar42 + 0x34)) + 1;
    *(undefined4 *)(lVar42 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
    lVar25 = *(long *)(lVar25 + 0x38);
    if (lVar25 == 0) goto LAB_02491464;
    if (*(uint *)(lVar25 + 0x18) <= *(uint *)((long)unaff_x19 + 0x494))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    uVar71 = *(undefined4 *)(lVar25 + (int)*(uint *)((long)unaff_x19 + 0x494) * unaff_x21 + 0x11c);
    lVar29 = lVar29 + (long)(int)uVar1 * 0x5c;
    *(float *)(lVar29 + 0x70) = fVar53;
    *(undefined4 *)(lVar29 + 0x6c) = uVar71;
    lVar25 = *in_stack_00000150;
    if ((lVar25 == 0) || (lVar29 = *(long *)(lVar25 + 0x50), lVar29 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar25 = *(long *)(lVar25 + 0x38);
    if (lVar25 == 0) goto LAB_02491464;
    if (*(uint *)(lVar25 + 0x18) <= *(uint *)((long)unaff_x19 + 0x49c))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    fVar64 = fVar64 - fVar45;
    lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
    *(undefined4 *)(lVar29 + 0x74) =
         *(undefined4 *)(lVar25 + (int)*(uint *)((long)unaff_x19 + 0x49c) * unaff_x21 + 0x128);
    *(float *)(lVar29 + 0x78) = fVar64;
    lVar25 = *in_stack_00000150;
    if ((lVar25 == 0) || (lVar42 = *(long *)(lVar25 + 0x50), lVar42 == 0)) goto LAB_02491464;
    lVar18 = (long)(int)*(uint *)(unaff_x19 + 0x94);
    if (*(uint *)(lVar42 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar29 = lVar42 + lVar18 * 0x5c;
    *(float *)(lVar29 + 0x44) = *(float *)(lVar29 + 0x74) - fVar70 * in_stack_00000130._4_4_;
    *(float *)(lVar29 + 0x5c) = in_stack_000000d8._4_4_;
    if (*(int *)(lVar29 + 0x24) == 1) {
      *(int *)(lVar42 + lVar18 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
    }
    if ((*unaff_x27 == 0) || (lVar29 = *(long *)(lVar25 + 0x38), lVar29 == 0)) goto LAB_02491464;
    lVar39 = (long)(int)*(uint *)((long)unaff_x19 + 0x49c);
    uVar33 = (uint)*(undefined8 *)(lVar29 + 0x18);
    if (uVar33 <= *(uint *)((long)unaff_x19 + 0x49c))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    if ((*(char *)(lVar29 + lVar39 * unaff_x21 + 0x194) == '\0') &&
       (lVar39 = (long)(int)*(uint *)(unaff_x19 + 0x93), uVar33 <= *(uint *)(unaff_x19 + 0x93)))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    fVar70 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (in_stack_000000c8 *
              (fStack00000000000000c4 + fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac)) -
             *(float *)((long)unaff_x19 + 0x2a4));
    fVar59 = -fVar70;
    if ((char)unaff_x19[0x1d] != '\0') {
      fVar59 = fVar70;
    }
    lVar42 = lVar42 + lVar18 * 0x5c;
    *(float *)(lVar42 + 0x58) = *(float *)(lVar29 + lVar39 * unaff_x21 + 0x144) + fVar59;
    fVar59 = *(float *)(unaff_x19 + 0x9a);
    *(float *)(lVar42 + 0x48) = fStack0000000000000050 + (fVar64 - fVar53);
    *(float *)(lVar42 + 0x4c) = fVar64;
    uVar19 = (ulong)(uint)(0.0 - fVar59);
    *(float *)(lVar42 + 0x50) = 0.0 - fVar59;
    *(float *)(lVar42 + 0x54) = fVar53;
    plVar30 = (long *)System_Threading_Mutex_TypeInfo;
    if ((int)in_stack_000017bc < 0x2d) {
      if (in_stack_000017bc - 10 < 2) {
LAB_0248dad8:
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar44 = (long *)StringLiteral_302;
        FUN_024d69d4();
        lVar25 = unaff_x19[0x6c];
        *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
        iVar12 = (int)unaff_x19[0x94] + 1;
        *(int *)(unaff_x19 + 0x94) = iVar12;
        *(int *)(unaff_x19 + 0x92) = *(int *)((long)unaff_x19 + 0x48c) + 1;
        if ((lVar25 == 0) || (*(long *)(lVar25 + 0x50) == 0)) goto LAB_02491464;
        if (*(int *)(*(long *)(lVar25 + 0x50) + 0x18) <= iVar12) {
          FUN_024d6e60();
          lVar25 = unaff_x19[0x6c];
          if (lVar25 == 0) goto LAB_02491464;
        }
        lVar25 = *(long *)(lVar25 + 0x38);
        if (lVar25 == 0) goto LAB_02491464;
        if (*(uint *)(lVar25 + 0x18) <= *in_stack_00000148)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fVar59 = *(float *)(lVar25 + (int)*in_stack_00000148 * unaff_x21 + 0x154);
        if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
          fVar53 = 0.0;
          if ((in_stack_000017bc == 0x2029) || (in_stack_000017bc == 10)) {
            fVar53 = *(float *)((long)unaff_x19 + 0x2c4);
          }
          uVar22 = 0;
          fVar53 = *(float *)(unaff_x19 + 0x9a) +
                   fVar59 + (0.0 - *(float *)((long)unaff_x19 + 0x4c4)) +
                   fStack0000000000000054 *
                   (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4)) +
                   in_stack_000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar53);
        }
        else {
          if ((in_stack_000017bc == 0x2029) || (fVar53 = 0.0, in_stack_000017bc == 10)) {
            fVar53 = *(float *)((long)unaff_x19 + 0x2c4);
          }
          uVar22 = 1;
          fVar53 = *(float *)(unaff_x19 + 0x9a) +
                   *(float *)(unaff_x19 + 0x57) +
                   in_stack_000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar53);
        }
        *(float *)(unaff_x19 + 0x9a) = fVar53;
        *(undefined1 *)((long)unaff_x19 + 700) = uVar22;
        lVar25 = *plVar30;
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar25 = *plVar30;
        }
        uVar15 = *(undefined8 *)(*(long *)(lVar25 + 0xb8) + 0x15a8);
        *(float *)(unaff_x19 + 0x99) = fVar59;
        uVar19 = NEON_rev64(uVar15,4);
        unaff_x19[0x98] = uVar19;
        *(float *)(unaff_x19 + 199) =
             *(float *)(unaff_x19 + 0x80) + 0.0 + *(float *)((long)unaff_x19 + 0x404);
        FUN_024d69d4();
        FUN_024d69d4();
        *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
        bVar5 = true;
        bStack000000000000005c = 1;
        unaff_x25 = in_stack_00000150;
        goto LAB_0248ab98;
      }
      if (in_stack_000017bc == 3) {
        if (unaff_x19[0x8e] == 0) goto LAB_02491464;
        in_stack_00001788 = (uint)*(undefined8 *)(unaff_x19[0x8e] + 0x18);
        uVar36 = 3;
      }
    }
    else if ((in_stack_000017bc - 0x2028 < 2) || (in_stack_000017bc == 0x2d)) goto LAB_0248dad8;
  }
LAB_0248dc08:
  uVar1 = *in_stack_00000148;
  if (uVar33 <= uVar1)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if (*(char *)(lVar29 + (int)uVar1 * unaff_x21 + 0x194) != '\0') {
    lVar29 = lVar29 + (int)uVar1 * unaff_x21;
    uVar17 = *(ulong *)(lVar29 + 0x11c);
    uVar19 = *(ulong *)(in_stack_00000070 + 0x230);
    *(ulong *)(in_stack_00000070 + 0x230) =
         uVar17 ^ (uVar17 ^ uVar19) &
                  CONCAT44(-(uint)((float)(uVar19 >> 0x20) < (float)(uVar17 >> 0x20)),
                           -(uint)((float)uVar19 < (float)uVar17));
    uVar17 = *(ulong *)(in_stack_00000070 + 0x238);
    uVar19 = *(ulong *)(lVar29 + 0x128);
    *(ulong *)(in_stack_00000070 + 0x238) =
         uVar19 ^ (uVar19 ^ uVar17) &
                  CONCAT44(-(uint)((float)(uVar19 >> 0x20) < (float)(uVar17 >> 0x20)),
                           -(uint)((float)uVar19 < (float)uVar17));
  }
  if (((int)unaff_x19[0x5b] == 5) &&
     ((0xd < uVar36 || ((1 << (ulong)(uVar36 & 0x1f) & 0x2c00U) == 0)))) {
    lVar29 = *(long *)(lVar25 + 0x58);
    if (lVar29 == 0) goto LAB_02491464;
    iVar10 = (int)unaff_x19[0x95] + 1;
    if (*(int *)(lVar29 + 0x18) < iVar10) {
      if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01147c08((long *)(lVar25 + 0x58),iVar10,1,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerMove__);
      lVar25 = *in_stack_00000150;
      if (lVar25 == 0) goto LAB_02491464;
    }
    lVar29 = *(long *)(lVar25 + 0x58);
    if (lVar29 == 0) goto LAB_02491464;
    uVar33 = *(uint *)(unaff_x19 + 0x95);
    lVar42 = (long)(int)uVar33;
    uVar1 = *(uint *)(lVar29 + 0x18);
    if (uVar1 <= uVar33)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar18 = lVar29 + lVar42 * 0x14;
    fVar53 = *(float *)(lVar18 + 0x30);
    uVar19 = (ulong)(uint)fVar53;
    *(undefined4 *)(lVar18 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
    fVar59 = *(float *)((long)unaff_x19 + 0x4bc);
    if (fVar53 <= *(float *)((long)unaff_x19 + 0x4bc)) {
      fVar59 = fVar53;
    }
    *(float *)(lVar18 + 0x30) = fVar59;
    uVar36 = *(uint *)((long)unaff_x19 + 0x48c);
    if (uVar36 == 0 && uVar33 == 0) {
      *(uint *)(lVar29 + lVar42 * 0x14 + 0x20) = uVar36;
    }
    else {
      uVar43 = uVar36 - 1;
      if (0 < (int)uVar36) {
        lVar25 = *(long *)(lVar25 + 0x38);
        if (lVar25 == 0) goto LAB_02491464;
        if (*(uint *)(lVar25 + 0x18) <= uVar43)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        if (uVar33 != *(uint *)(lVar25 + (long)(int)uVar43 * (long)iVar12 + 0x68)) {
          if (uVar1 <= uVar33 - 1)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          *(uint *)(lVar29 + 0x20 + (long)(int)(uVar33 - 1) * 0x14 + 4) = uVar43;
          *(uint *)(lVar29 + 0x20 + lVar42 * 0x14) = uVar36;
          goto LAB_0248dc84;
        }
      }
      if ((float)uVar36 == in_stack_00000078._4_4_) {
        *(float *)(lVar29 + lVar42 * 0x14 + 0x24) = in_stack_00000078._4_4_;
      }
    }
  }
LAB_0248dc84:
  plVar30 = (long *)System_Threading_Mutex_TypeInfo;
  if (((char)unaff_x19[0x5a] == '\0') &&
     ((6 < *(uint *)(unaff_x19 + 0x5b) ||
      ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5b) & 0x1f) & 0x4aU) == 0)))) goto LAB_0248e168;
  if ((uVar11 == 0) &&
     (((in_stack_000017bc != 0x2d && (in_stack_000017bc != 0x200b)) && (in_stack_000017bc != 0xad)))
     ) {
    if (*(char *)((long)unaff_x19 + 0x2d2) != '\0') goto LAB_0248ded4;
LAB_0248de4c:
    if (((((0x2bfd < in_stack_000017bc - 0xac01) && (0x1d < in_stack_000017bc - 0xa961)) &&
         (0xfd < in_stack_000017bc - 0x1101)) || (uVar17 = FUN_024e95f0(0), (uVar17 & 1) != 0)) &&
       ((((0xed < in_stack_000017bc - 0xff01 && (0x1d < in_stack_000017bc - 0xfe31)) &&
         (0x717d < in_stack_000017bc - 0x2e81)) && (0x1fd < in_stack_000017bc - 0xf901))))
    goto LAB_0248ded4;
    lVar25 = FUN_024e94b0(0);
    if ((lVar25 == 0) || (*(long *)(lVar25 + 0x10) == 0)) goto LAB_02491464;
    uVar17 = FUN_0129aa60(*(long *)(lVar25 + 0x10),&stack0x00000880,
                          *(undefined8 *)
                           System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                         );
    if ((int)in_stack_00000078._4_4_ <= (int)*in_stack_00000148) {
      in_stack_00000880 = in_stack_000017bc;
      if ((uVar17 & 1) == 0) {
LAB_0248e1b0:
        plVar30 = (long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_024d69d4();
        bStack000000000000005c = 0;
        goto LAB_0248e168;
      }
LAB_0248e0dc:
      plVar30 = (long *)System_Threading_Mutex_TypeInfo;
      if (uVar28 != uVar24 || ((bStack000000000000005c ^ 0xff) & 1) != 0) goto LAB_0248e168;
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__get_invalidColorGradient;
    }
    lVar25 = FUN_024e94b0(0);
    if (((lVar25 == 0) || (*in_stack_00000150 == 0)) ||
       (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000148 + 1)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    if (*(long *)(lVar25 + 0x18) == 0) goto LAB_02491464;
    in_stack_00000880 =
         (uint)*(ushort *)(lVar29 + (long)(int)(*in_stack_00000148 + 1) * (long)iVar12 + 0x20);
    uVar21 = FUN_0129aa60(*(long *)(lVar25 + 0x18),&stack0x00000880,
                          *(undefined8 *)
                           System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                         );
    if ((uVar17 & 1) != 0) goto LAB_0248e0dc;
    if ((uVar21 & 1) == 0) goto LAB_0248e1b0;
    plVar30 = (long *)System_Threading_Mutex_TypeInfo;
    if ((bStack000000000000005c & 1) == 0) {
      bStack000000000000005c = 0;
      goto LAB_0248e168;
    }
    if (uVar11 != 0) goto LAB_0248e100;
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
        *(undefined4 *)(*(long *)(*plVar30 + 0xb8) + 0xe78) = 0xffffffff;
        goto LAB_0248e168;
      }
      goto LAB_0248de4c;
    }
LAB_0248ded4:
    if ((bStack000000000000005c & 1) == 0) {
      bStack000000000000005c = 0;
      plVar30 = (long *)System_Threading_Mutex_TypeInfo;
      goto LAB_0248e168;
    }
    if (!(bool)(in_stack_000017bc == 0xad & (bVar7 ^ 1U))) {
UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__get_invalidColorGradient:
      plVar30 = (long *)System_Threading_Mutex_TypeInfo;
      if (uVar11 == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__get_smoothMovement;
    }
LAB_0248e100:
    plVar30 = (long *)System_Threading_Mutex_TypeInfo;
    if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_024d69d4();
  }
UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__get_smoothMovement:
  if (*(int *)(*plVar30 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_024d69d4();
  bStack000000000000005c = 1;
LAB_0248e168:
  if (*(int *)(*plVar30 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar44 = (long *)StringLiteral_302;
  FUN_024d69d4();
  *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
  unaff_x25 = in_stack_00000150;
  goto LAB_0248ab98;
switchD_0248ce4c_caseD_5:
  *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
  param_4 = (ulong)*(uint *)((long)unaff_x19 + 0x2f4);
  param_1 = (ulong)(uint)fStack0000000000000054;
  param_5 = (ulong)(uint)fStack00000000000000c4;
  param_3 = (ulong)(uint)in_stack_000000c8;
  param_6 = (ulong)(uint)fStack00000000000000cc;
  param_7 = (ulong)(uint)in_stack_000000d8._4_4_;
  param_8 = _fStack0000000000000048 & 0xffffffff;
  bStack000000000000005c = 1;
  unaff_x25 = in_stack_00000150;
  unaff_d13 = param_2;
  goto code_r0x0248e3ac;
switchD_0248ce4c_caseD_0:
  uVar19 = param_2;
  FUN_024d7014(fStack0000000000000054,param_2,in_stack_000000c8,
               *(undefined4 *)((long)unaff_x19 + 0x2f4),fStack00000000000000c4,
               fStack00000000000000cc,in_stack_000000d8._4_4_,fStack0000000000000048);
  bStack000000000000005c = 1;
  unaff_x25 = in_stack_00000150;
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__get_snapEndpointIfAvailable;
LAB_0248ef74:
  uVar11 = uVar24 - 1;
  if (*(uint *)(lVar25 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*in_stack_00000150 == 0) || (lVar29 = *(long *)(*in_stack_00000150 + 0x50), lVar29 == 0))
  goto LAB_02491464;
  lVar18 = (long)(int)uVar11;
  lVar42 = lVar25 + lVar18 * 0x178;
  uVar1 = *(uint *)(lVar42 + 100);
  if (*(uint *)(lVar29 + 0x18) <= uVar1)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar37 = *(long *)(lVar42 + 0x38);
  uVar34 = (uint)*(ushort *)(lVar42 + 0x20);
  lVar39 = (long)(int)uVar1;
  lVar29 = lVar29 + lVar39 * 0x5c;
  uVar33 = *(uint *)(lVar29 + 0x3c);
  uVar36 = *(uint *)(lVar29 + 0x40);
  lVar42 = (long)(int)uVar36;
  iVar13 = *(int *)(lVar29 + 0x28);
  iVar14 = *(int *)(lVar29 + 0x2c);
  uVar43 = *(uint *)(lVar29 + 0x68);
  fVar49 = *(float *)(lVar29 + 0x5c);
  fVar50 = *(float *)(lVar29 + 0x60);
  iVar2 = *(int *)(lVar29 + 0x20);
  fVar67 = *(float *)(lVar29 + 0x4c);
  fVar46 = *(float *)(lVar29 + 0x54);
  fVar45 = *(float *)(lVar29 + 0x58);
  fVar68 = *(float *)(lVar29 + 0x6c);
  fVar48 = *(float *)(lVar29 + 0x70);
  fVar64 = *(float *)(lVar29 + 0x74);
  fVar47 = *(float *)(lVar29 + 0x78);
  fVar60 = fVar49 + fVar50;
  if ((int)uVar43 < 9) {
    switch(uVar43) {
    case 1:
      if ((char)unaff_x19[0x1d] == '\0') {
        fStack00000000000000c4 = fVar50 + 0.0;
      }
      else {
        fStack00000000000000c4 = 0.0 - fVar45;
      }
      break;
    case 2:
LAB_0248f124:
      fStack00000000000000c4 = (fVar50 + fVar49 * 0.5) - fVar45 * 0.5;
      break;
    default:
      goto switchD_0248f070_caseD_3;
    case 4:
      fStack00000000000000c4 = fVar60 - fVar45;
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
  else if (uVar43 == 0x10) {
switchD_0248f070_caseD_8:
    if (uVar34 < 0xad) {
      if ((uVar34 != 3) && (uVar34 != 10)) goto LAB_0248f0c8;
    }
    else if ((uVar34 != 0xad) && ((uVar34 != 0x200b && (uVar34 != 0x2060)))) {
LAB_0248f0c8:
      if (*(uint *)(lVar25 + 0x18) <= uVar33)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar3 = *(undefined2 *)(lVar25 + (long)(int)uVar33 * 0x178 + 0x20);
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar19 = FUN_016f9f84(uVar3,0);
      if ((uVar19 & 1) == 0) {
        bVar9 = (int)uVar1 < (int)unaff_x19[0x94];
      }
      else {
        bVar9 = false;
      }
      if ((fVar45 <= fVar49) && (!bVar9 && (uVar43 >> 4 & 1) == 0)) {
        fStack00000000000000c4 = fVar50;
        if ((char)unaff_x19[0x1d] != '\0') {
          fStack00000000000000c4 = fVar60;
        }
        goto LAB_0248f194;
      }
      if (((uVar24 == 1) || (uVar1 != uVar28)) || (uVar11 == *(uint *)((long)unaff_x19 + 0x31c))) {
        fStack00000000000000c4 = fVar50;
        if ((char)unaff_x19[0x1d] != '\0') {
          fStack00000000000000c4 = fVar60;
        }
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        fStack0000000000000024 = (float)FUN_016fa418(uVar34,0);
        in_stack_000000b8 = 0;
      }
      else {
        cVar23 = (char)unaff_x19[0x1d];
        fVar50 = -fVar45;
        if (cVar23 != '\0') {
          fVar50 = fVar45;
        }
        if (*(uint *)(lVar25 + 0x18) <= uVar33)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fVar45 = 1.0;
        iVar14 = (int)*(char *)(lVar25 + (long)(int)uVar33 * 0x178 + 0x194) +
                 (-iVar2 - ((uint)fStack0000000000000024 & 1)) + iVar14 + -1;
        if (0 < iVar14) {
          fVar45 = *(float *)((long)unaff_x19 + 0x2d4);
        }
        if (iVar14 < 1) {
          iVar14 = 1;
        }
        if (uVar34 == 9) {
LAB_02490fe0:
          fVar45 = 1.0 - fVar45;
        }
        else {
          if (uVar34 != 0xa0) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar19 = FUN_016fa418(uVar34,0);
            cVar23 = (char)unaff_x19[0x1d];
            if ((uVar19 & 1) != 0) goto LAB_02490fe0;
          }
          iVar14 = (iVar2 - (~(uint)fStack0000000000000024 & 1)) + iVar13;
        }
        fVar45 = ((fVar49 + fVar50) * fVar45) / (float)iVar14;
        if (cVar23 == '\0') {
          fStack00000000000000c4 = fStack00000000000000c4 + fVar45;
          in_stack_000000b8 =
               CONCAT44((float)((ulong)in_stack_000000b8 >> 0x20) + 0.0,
                        (float)in_stack_000000b8 + 0.0);
        }
        else {
          fStack00000000000000c4 = fStack00000000000000c4 - fVar45;
        }
      }
    }
  }
  else if (uVar43 == 0x20) {
    fVar45 = fVar68 + fVar64;
    goto LAB_0248f124;
  }
switchD_0248f070_caseD_3:
  uVar43 = (uint)*(undefined8 *)(lVar25 + 0x18);
  if (uVar43 <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar29 = lVar25 + lVar18 * 0x178;
  fVar50 = fStack0000000000000090 + fStack00000000000000c4;
  fVar45 = SUB84(in_stack_00000088,0) + (float)in_stack_000000b8;
  fVar49 = (float)((ulong)in_stack_00000088 >> 0x20) + (float)((ulong)in_stack_000000b8 >> 0x20);
  plVar44 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(char *)(lVar29 + 0x194) == '\0') goto LAB_0248fabc;
  iVar13 = *(int *)(lVar25 + lVar18 * 0x178 + 0x2c);
  if (iVar13 != 0) goto LAB_0248f808;
  fVar70 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)uVar1,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
  case 0:
    lVar27 = lVar25 + lVar18 * 0x178;
    *(undefined4 *)(lVar27 + 0x84) = 0;
    *(undefined4 *)(lVar27 + 0xac) = 0;
    *(undefined4 *)(lVar27 + 0xd4) = 0x3f800000;
    fVar70 = 1.0;
    break;
  case 1:
    fVar47 = *(float *)(lVar25 + lVar18 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
      lVar27 = lVar25 + lVar18 * 0x178;
      fVar64 = (fStack00000000000000c4 + fVar47) - *(float *)(in_stack_00000070 + 0x230);
      fVar47 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
      goto LAB_0248f2dc;
    }
    lVar27 = lVar25 + lVar18 * 0x178;
    fVar64 = fVar64 - fVar68;
    *(float *)(lVar27 + 0x84) = fVar70 + (fVar47 - fVar68) / fVar64;
    *(float *)(lVar27 + 0xac) = fVar70 + (*(float *)(lVar27 + 0x98) - fVar68) / fVar64;
    *(float *)(lVar27 + 0xd4) = fVar70 + (*(float *)(lVar27 + 0xc0) - fVar68) / fVar64;
    fVar70 = fVar70 + (*(float *)(lVar27 + 0xe8) - fVar68) / fVar64;
    break;
  case 2:
    lVar27 = lVar25 + lVar18 * 0x178;
    fVar47 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
    fVar64 = (fStack00000000000000c4 + *(float *)(lVar27 + 0x70)) -
             *(float *)(in_stack_00000070 + 0x230);
LAB_0248f2dc:
    *(float *)(lVar27 + 0x84) = fVar70 + fVar64 / fVar47;
    *(float *)(lVar27 + 0xac) =
         fVar70 + ((fStack00000000000000c4 + *(float *)(lVar27 + 0x98)) -
                  *(float *)(in_stack_00000070 + 0x230)) /
                  (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
    *(float *)(lVar27 + 0xd4) =
         fVar70 + ((fStack00000000000000c4 + *(float *)(lVar27 + 0xc0)) -
                  *(float *)(in_stack_00000070 + 0x230)) /
                  (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
    fVar70 = fVar70 + ((fStack00000000000000c4 + *(float *)(lVar27 + 0xe8)) -
                      *(float *)(in_stack_00000070 + 0x230)) /
                      (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x61]) {
    case 0:
      lVar27 = lVar25 + lVar18 * 0x178;
      *(undefined4 *)(lVar27 + 0x88) = 0;
      *(undefined4 *)(lVar27 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar27 + 0xd8) = 0;
      *(undefined4 *)(lVar27 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar27 = lVar25 + lVar18 * 0x178;
      fVar47 = fVar47 - fVar48;
      fVar64 = fVar70 + (*(float *)(lVar27 + 0x74) - fVar48) / fVar47;
      fVar47 = fVar70 + (*(float *)(lVar27 + 0x9c) - fVar48) / fVar47;
      *(float *)(lVar27 + 0x88) = fVar64;
      *(float *)(lVar27 + 0xb0) = fVar47;
      *(float *)(lVar27 + 0xd8) = fVar64;
      *(float *)(lVar27 + 0x100) = fVar47;
      break;
    case 2:
      lVar27 = lVar25 + lVar18 * 0x178;
      fVar64 = fVar70 + (*(float *)(lVar27 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                        (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
      *(float *)(lVar27 + 0x88) = fVar64;
      fVar47 = *(float *)(unaff_x19 + 0x9b);
      fVar48 = *(float *)(unaff_x19 + 0x9c);
      *(float *)(lVar27 + 0xd8) = fVar64;
      fVar64 = fVar70 + (*(float *)(lVar27 + 0x9c) - fVar47) / (fVar48 - fVar47);
      *(float *)(lVar27 + 0xb0) = fVar64;
      *(float *)(lVar27 + 0x100) = fVar64;
      break;
    case 3:
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
      uVar43 = (uint)*(undefined8 *)(lVar25 + 0x18);
    }
    if (uVar43 <= uVar11)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar27 = lVar25 + lVar18 * 0x178;
    fVar64 = *(float *)(lVar27 + 0x15c);
    fVar47 = (1.0 - (*(float *)(lVar27 + 0x88) + *(float *)(lVar27 + 0xb0)) * fVar64) * 0.5;
    fVar48 = fVar70 + *(float *)(lVar27 + 0x88) * fVar64 + fVar47;
    fVar70 = fVar70 + fVar47 + *(float *)(lVar27 + 0xb0) * fVar64;
    *(float *)(lVar27 + 0x84) = fVar48;
    *(float *)(lVar27 + 0xac) = fVar48;
    *(float *)(lVar27 + 0xd4) = fVar70;
    break;
  default:
    goto switchD_0248f240_default;
  }
  *(float *)(lVar25 + lVar18 * 0x178 + 0xfc) = fVar70;
switchD_0248f240_default:
  switch((int)unaff_x19[0x61]) {
  case 0:
    if (uVar43 <= uVar11)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar27 = lVar25 + lVar18 * 0x178;
    *(undefined4 *)(lVar27 + 0x88) = 0;
    *(undefined4 *)(lVar27 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar27 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar27 + 0x100) = 0;
    break;
  case 1:
    if (uVar11 < uVar43) {
      lVar27 = lVar25 + lVar18 * 0x178;
      fVar67 = fVar67 - fVar46;
      fVar70 = (*(float *)(lVar27 + 0x74) - fVar46) / fVar67;
      fVar67 = (*(float *)(lVar27 + 0x9c) - fVar46) / fVar67;
      *(float *)(lVar27 + 0x88) = fVar70;
      goto LAB_0248f644;
    }
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  case 2:
    if (uVar43 <= uVar11)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar27 = lVar25 + lVar18 * 0x178;
    fVar70 = (*(float *)(lVar27 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
             (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
    *(float *)(lVar27 + 0x88) = fVar70;
    fVar67 = (*(float *)(lVar27 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
             (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
LAB_0248f644:
    *(float *)(lVar27 + 0xb0) = fVar67;
    *(float *)(lVar27 + 0xd8) = fVar67;
    *(float *)(lVar27 + 0x100) = fVar70;
    break;
  case 3:
    if (uVar43 <= uVar11)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar27 = lVar25 + lVar18 * 0x178;
    fVar67 = *(float *)(lVar27 + 0x15c);
    fVar64 = (1.0 - (*(float *)(lVar27 + 0x84) + *(float *)(lVar27 + 0xd4)) / fVar67) * 0.5;
    fVar70 = *(float *)(lVar27 + 0x84) / fVar67 + fVar64;
    fVar64 = fVar64 + *(float *)(lVar27 + 0xd4) / fVar67;
    *(float *)(lVar27 + 0x88) = fVar70;
    *(float *)(lVar27 + 0xb0) = fVar64;
    *(float *)(lVar27 + 0x100) = fVar70;
    *(float *)(lVar27 + 0xd8) = fVar64;
  }
  if (uVar43 <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar27 = lVar25 + lVar18 * 0x178;
  fVar70 = ABS(fVar59) * *(float *)(lVar27 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
  if ((*(char *)(lVar27 + 0x5c) == '\0') && ((*(byte *)(lVar25 + lVar18 * 0x178 + 400) & 1) != 0)) {
    fVar70 = -fVar70;
  }
  lVar27 = lVar25 + lVar18 * 0x178;
  fVar67 = *(float *)(lVar27 + 0x88);
  fVar47 = *(float *)(lVar27 + 0x84);
  fVar64 = -2.1474836e+09;
  if (fVar47 != INFINITY) {
    fVar64 = (float)(int)fVar47;
  }
  fVar48 = *(float *)(lVar27 + 0xd4);
  fVar68 = *(float *)(lVar27 + 0xd8);
  fVar46 = -2.1474836e+09;
  if (fVar67 != INFINITY) {
    fVar46 = (float)(int)fVar67;
  }
  uVar71 = FUN_024e0374(fVar47 - fVar64,fVar67 - fVar46);
  *(undefined4 *)(lVar27 + 0x84) = uVar71;
  if (*(uint *)(lVar25 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  fVar68 = fVar68 - fVar46;
  *(float *)(lVar27 + 0x88) = fVar70;
  uVar71 = FUN_024e0374(fVar47 - fVar64,fVar68);
  *(undefined4 *)(lVar25 + lVar18 * 0x178 + 0xac) = uVar71;
  if (*(uint *)(lVar25 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  fVar48 = fVar48 - fVar64;
  *(float *)(lVar25 + lVar18 * 0x178 + 0xb0) = fVar70;
  fVar64 = (float)FUN_024e0374(fVar48,fVar68);
  *(float *)(lVar27 + 0xd4) = fVar64;
  if (*(uint *)(lVar25 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar27 + 0xd8) = fVar70;
  uVar71 = FUN_024e0374(fVar48,fVar67 - fVar46);
  *(undefined4 *)(lVar25 + lVar18 * 0x178 + 0xfc) = uVar71;
  uVar43 = (uint)*(undefined8 *)(lVar25 + 0x18);
  if (uVar43 <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar25 + lVar18 * 0x178 + 0x100) = fVar70;
LAB_0248f808:
  if (((int)uVar11 < (int)unaff_x19[100]) &&
     (iStack00000000000000a4 < *(int *)((long)unaff_x19 + 0x324))) {
    if (((int)uVar1 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] != 5)) {
      if (uVar43 <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar29 = lVar25 + lVar18 * 0x178;
      *(ulong *)(lVar29 + 0x70) =
           CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar29 + 0x70) >> 0x20),
                    fVar50 + (float)*(undefined8 *)(lVar29 + 0x70));
      *(float *)(lVar29 + 0x78) = fVar49 + *(float *)(lVar29 + 0x78);
      plVar44 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      if (*(uint *)(lVar25 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar29 = lVar25 + lVar18 * 0x178;
      *(ulong *)(lVar29 + 0x98) =
           CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar29 + 0x98) >> 0x20),
                    fVar50 + (float)*(undefined8 *)(lVar29 + 0x98));
      *(float *)(lVar29 + 0xa0) = fVar49 + *(float *)(lVar29 + 0xa0);
      uVar43 = *(uint *)(lVar25 + 0x18);
LAB_0248fa4c:
      if (uVar43 <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar29 = lVar25 + lVar18 * 0x178;
      *(ulong *)(lVar29 + 0xc0) =
           CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar29 + 0xc0) >> 0x20),
                    fVar50 + (float)*(undefined8 *)(lVar29 + 0xc0));
      *(float *)(lVar29 + 200) = fVar49 + *(float *)(lVar29 + 200);
      if (*(uint *)(lVar25 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar29 = lVar25 + lVar18 * 0x178;
      *(ulong *)(lVar29 + 0xe8) =
           CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar29 + 0xe8) >> 0x20),
                    fVar50 + (float)*(undefined8 *)(lVar29 + 0xe8));
      *(float *)(lVar29 + 0xf0) = fVar49 + *(float *)(lVar29 + 0xf0);
      if (iVar13 != 0) goto LAB_0248f9d0;
LAB_0248fa9c:
      pcVar32 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0248faa8:
      (*pcVar32)();
      goto LAB_0248fabc;
    }
    if (((int)uVar1 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] == 5)) {
      if (uVar11 < uVar43) {
        if (*(uint *)(lVar25 + lVar18 * 0x178 + 0x68) != uStack0000000000000030) goto LAB_0248f8d8;
        lVar29 = lVar25 + lVar18 * 0x178;
        *(ulong *)(lVar29 + 0x70) =
             CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar29 + 0x70) >> 0x20),
                      fVar50 + (float)*(undefined8 *)(lVar29 + 0x70));
        *(float *)(lVar29 + 0x78) = fVar49 + *(float *)(lVar29 + 0x78);
        if (uVar11 < *(uint *)(lVar25 + 0x18)) {
          lVar29 = lVar25 + lVar18 * 0x178;
          *(ulong *)(lVar29 + 0x98) =
               CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar29 + 0x98) >> 0x20),
                        fVar50 + (float)*(undefined8 *)(lVar29 + 0x98));
          *(float *)(lVar29 + 0xa0) = fVar49 + *(float *)(lVar29 + 0xa0);
          uVar43 = *(uint *)(lVar25 + 0x18);
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
  puVar6 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  lVar27 = lVar25 + lVar18 * 0x178;
  uVar71 = *(undefined4 *)
            (*(undefined8 **)
              (*(long *)
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
              0xb8) + 1);
  *(undefined8 *)(lVar27 + 0x70) =
       **(undefined8 **)
         (*(long *)Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
         0xb8);
  *(undefined4 *)(lVar27 + 0x78) = uVar71;
  plVar44 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(uint *)(lVar25 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar27 = lVar25 + lVar18 * 0x178;
  uVar71 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
  *(undefined8 *)(lVar27 + 0x98) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
  *(undefined4 *)(lVar27 + 0xa0) = uVar71;
  if (*(uint *)(lVar25 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar27 = lVar25 + lVar18 * 0x178;
  uVar71 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
  *(undefined8 *)(lVar27 + 0xc0) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
  *(undefined4 *)(lVar27 + 200) = uVar71;
  if (*(uint *)(lVar25 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar27 = lVar25 + lVar18 * 0x178;
  uVar71 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar6 + 0xb8) + 1);
  *(undefined8 *)(lVar27 + 0xe8) = **(undefined8 **)(*(long *)puVar6 + 0xb8);
  *(undefined4 *)(lVar27 + 0xf0) = uVar71;
  if (*(uint *)(lVar25 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(undefined1 *)(lVar29 + 0x194) = 0;
  if (iVar13 == 0) goto LAB_0248fa9c;
LAB_0248f9d0:
  if (iVar13 == 1) {
    pcVar32 = *(code **)(*unaff_x19 + 0x8f8);
    goto LAB_0248faa8;
  }
LAB_0248fabc:
  if ((*in_stack_00000150 == 0) || (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar29 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar29 = lVar29 + lVar18 * 0x178;
  uVar15 = *(undefined8 *)(lVar29 + 0x11c);
  *(undefined8 *)(lVar29 + 0x11c) =
       CONCAT44(fVar45 + (float)((ulong)uVar15 >> 0x20),fVar50 + (float)uVar15);
  *(float *)(lVar29 + 0x124) = fVar49 + *(float *)(lVar29 + 0x124);
  if ((*in_stack_00000150 == 0) || (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar29 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar29 = lVar29 + lVar18 * 0x178;
  *(ulong *)(lVar29 + 0x110) =
       CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar29 + 0x110) >> 0x20),
                fVar50 + (float)*(undefined8 *)(lVar29 + 0x110));
  *(float *)(lVar29 + 0x118) = fVar49 + *(float *)(lVar29 + 0x118);
  if ((*in_stack_00000150 == 0) || (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar29 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar29 = lVar29 + lVar18 * 0x178;
  *(ulong *)(lVar29 + 0x128) =
       CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar29 + 0x128) >> 0x20),
                fVar50 + (float)*(undefined8 *)(lVar29 + 0x128));
  *(float *)(lVar29 + 0x130) = fVar49 + *(float *)(lVar29 + 0x130);
  if ((*in_stack_00000150 == 0) || (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar29 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar29 = lVar29 + lVar18 * 0x178;
  *(float *)(lVar29 + 0x134) = fVar50 + *(float *)(lVar29 + 0x134);
  *(ulong *)(lVar29 + 0x138) =
       CONCAT44(fVar49 + (float)((ulong)*(undefined8 *)(lVar29 + 0x138) >> 0x20),
                fVar45 + (float)*(undefined8 *)(lVar29 + 0x138));
  lVar29 = *in_stack_00000150;
  if ((lVar29 == 0) || (lVar27 = *(long *)(lVar29 + 0x38), lVar27 == 0)) goto LAB_02491464;
  uVar43 = *(uint *)(lVar27 + 0x18);
  if (uVar43 <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar38 = lVar27 + lVar18 * 0x178;
  *(ulong *)(lVar38 + 0x140) =
       CONCAT44(fVar50 + (float)((ulong)*(undefined8 *)(lVar38 + 0x140) >> 0x20),
                fVar50 + (float)*(undefined8 *)(lVar38 + 0x140));
  *(ulong *)(lVar38 + 0x148) =
       CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar38 + 0x148) >> 0x20),
                fVar45 + (float)*(undefined8 *)(lVar38 + 0x148));
  *(float *)(lVar38 + 0x150) = fVar45 + *(float *)(lVar38 + 0x150);
  if (uVar1 == uVar28) {
    uVar28 = *in_stack_00000148 - 1;
    if (uVar11 == uVar28) goto LAB_0248fccc;
  }
  else {
    lVar29 = *(long *)(lVar29 + 0x50);
    if (lVar29 == 0) goto LAB_02491464;
    if (*(uint *)(lVar29 + 0x18) <= uVar28)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar38 = (long)(int)uVar28;
    lVar40 = lVar29 + lVar38 * 0x5c;
    fVar64 = fVar45 + *(float *)(lVar40 + 0x54);
    *(ulong *)(lVar40 + 0x4c) =
         CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar40 + 0x4c) >> 0x20),
                  fVar45 + (float)*(undefined8 *)(lVar40 + 0x4c));
    *(float *)(lVar40 + 0x54) = fVar64;
    *(float *)(lVar40 + 0x58) = fVar50 + *(float *)(lVar40 + 0x58);
    if (uVar43 <= *(uint *)(lVar40 + 0x34))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    uVar71 = *(undefined4 *)(lVar27 + (long)(int)*(uint *)(lVar40 + 0x34) * 0x178 + 0x11c);
    lVar29 = lVar29 + lVar38 * 0x5c;
    *(float *)(lVar29 + 0x70) = fVar64;
    *(undefined4 *)(lVar29 + 0x6c) = uVar71;
    lVar29 = *in_stack_00000150;
    if ((lVar29 == 0) || (lVar27 = *(long *)(lVar29 + 0x50), lVar27 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar27 + 0x18) <= uVar28)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar29 = *(long *)(lVar29 + 0x38);
    if (lVar29 == 0) goto LAB_02491464;
    uVar28 = *(uint *)(lVar27 + lVar38 * 0x5c + 0x40);
    if (*(uint *)(lVar29 + 0x18) <= uVar28)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar27 = lVar27 + lVar38 * 0x5c;
    *(undefined4 *)(lVar27 + 0x74) = *(undefined4 *)(lVar29 + (long)(int)uVar28 * 0x178 + 0x128);
    *(undefined4 *)(lVar27 + 0x78) = *(undefined4 *)(lVar27 + 0x4c);
    uVar28 = *in_stack_00000148 - 1;
LAB_0248fccc:
    if (uVar11 == uVar28) {
      lVar29 = *in_stack_00000150;
      if ((lVar29 == 0) || (lVar27 = *(long *)(lVar29 + 0x50), lVar27 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar27 + 0x18) <= uVar1)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar38 = lVar27 + lVar39 * 0x5c;
      fVar64 = fVar45 + *(float *)(lVar38 + 0x54);
      *(ulong *)(lVar38 + 0x4c) =
           CONCAT44(fVar45 + (float)((ulong)*(undefined8 *)(lVar38 + 0x4c) >> 0x20),
                    fVar45 + (float)*(undefined8 *)(lVar38 + 0x4c));
      *(float *)(lVar38 + 0x54) = fVar64;
      *(float *)(lVar38 + 0x58) = fVar50 + *(float *)(lVar38 + 0x58);
      lVar29 = *(long *)(lVar29 + 0x38);
      if (lVar29 == 0) goto LAB_02491464;
      if (*(uint *)(lVar29 + 0x18) <= *(uint *)(lVar38 + 0x34))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar71 = *(undefined4 *)(lVar29 + (long)(int)*(uint *)(lVar38 + 0x34) * 0x178 + 0x11c);
      lVar27 = lVar27 + lVar39 * 0x5c;
      *(float *)(lVar27 + 0x70) = fVar64;
      *(undefined4 *)(lVar27 + 0x6c) = uVar71;
      lVar29 = *in_stack_00000150;
      if ((lVar29 == 0) || (lVar27 = *(long *)(lVar29 + 0x50), lVar27 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar27 + 0x18) <= uVar1)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar29 = *(long *)(lVar29 + 0x38);
      if (lVar29 == 0) goto LAB_02491464;
      uVar28 = *(uint *)(lVar27 + lVar39 * 0x5c + 0x40);
      if (*(uint *)(lVar29 + 0x18) <= uVar28)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar27 = lVar27 + lVar39 * 0x5c;
      *(undefined4 *)(lVar27 + 0x74) = *(undefined4 *)(lVar29 + (long)(int)uVar28 * 0x178 + 0x128);
      *(undefined4 *)(lVar27 + 0x78) = *(undefined4 *)(lVar27 + 0x4c);
    }
  }
  if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar19 = FUN_016f9468(uVar34,0);
  if (((((uVar19 & 1) == 0) && (1 < uVar34 - 0x2010)) && (uVar34 != 0xad)) && (uVar34 != 0x2d)) {
    if (bVar5) {
      if (((uVar24 != 1) && ((int)uVar11 < (int)(*(uint *)(lVar25 + 0x18) - 1))) &&
         (((int)uVar11 < (int)*in_stack_00000148 && ((uVar34 == 0x2019 || (uVar34 == 0x27)))))) {
        if (*(uint *)(lVar25 + 0x18) <= uVar24 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        uVar3 = *(undefined2 *)(lVar25 + lStack0000000000000128 + -0x438);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar19 = FUN_016f9468(uVar3,0);
        if ((uVar19 & 1) != 0) {
          if (*(uint *)(lVar25 + 0x18) <= uVar24)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          uVar3 = *(undefined2 *)(lVar25 + lStack0000000000000128 + -0x148);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar19 = FUN_016f9468(uVar3,0);
          if ((uVar19 & 1) != 0) goto LAB_0248fee0;
        }
      }
    }
    else {
      if (uVar24 != 1) {
LAB_024909a0:
        bVar5 = false;
        goto LAB_0248fee8;
      }
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar19 = FUN_016f93a0(uVar34,0);
      if ((uVar19 & 1) != 0) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar19 = FUN_016f68bc(uVar34,0);
        if (((uVar34 != 0x200b) && ((uVar19 & 1) == 0)) && (*in_stack_00000148 != 1))
        goto LAB_024909a0;
      }
    }
    if (uVar11 == *in_stack_00000148 - 1) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar19 = FUN_016f9468(uVar34,0);
      iVar13 = iVar10;
      if ((uVar19 & 1) == 0) goto LAB_02490204;
    }
    else {
LAB_02490204:
      iVar13 = uVar24 - 2;
    }
    lVar29 = *in_stack_00000150;
    if (lVar29 == 0) goto LAB_02491464;
    lVar27 = *(long *)(lVar29 + 0x40);
    if (lVar27 == 0) goto LAB_02491464;
    uVar28 = *(uint *)(lVar29 + 0x24);
    iVar14 = *(int *)(lVar27 + 0x18);
    if (iVar14 < (int)(uVar28 + 1)) {
      if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01147b84((long *)(lVar29 + 0x40),iVar14 + 1,
                   *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
      lVar29 = *in_stack_00000150;
      if (lVar29 == 0) goto LAB_02491464;
    }
    lVar27 = *(long *)(lVar29 + 0x40);
    if (lVar27 == 0) goto LAB_02491464;
    if (*(uint *)(lVar27 + 0x18) <= uVar28)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar27 = lVar27 + (long)(int)uVar28 * 0x18;
    *(long **)(lVar27 + 0x20) = unaff_x19;
    *(uint *)(lVar27 + 0x28) = uStack0000000000000114;
    *(int *)(lVar27 + 0x2c) = iVar13;
    *(uint *)(lVar27 + 0x30) = (iVar13 - uStack0000000000000114) + 1;
    lVar27 = *(long *)(lVar29 + 0x50);
    *(int *)(lVar29 + 0x24) = *(int *)(lVar29 + 0x24) + 1;
    if (lVar27 == 0) goto LAB_02491464;
    if (*(uint *)(lVar27 + 0x18) <= uVar1)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar27 = lVar27 + lVar39 * 0x5c;
    bVar5 = false;
    iStack00000000000000a4 = iStack00000000000000a4 + 1;
    *(int *)(lVar27 + 0x30) = *(int *)(lVar27 + 0x30) + 1;
  }
  else {
    if (!bVar5) {
      uStack0000000000000114 = uVar11;
    }
    if (uVar11 == *in_stack_00000148 - 1) {
      lVar29 = *in_stack_00000150;
      if (lVar29 == 0) goto LAB_02491464;
      lVar27 = *(long *)(lVar29 + 0x40);
      if (lVar27 == 0) goto LAB_02491464;
      uVar28 = *(uint *)(lVar29 + 0x24);
      iVar13 = *(int *)(lVar27 + 0x18);
      if (iVar13 < (int)(uVar28 + 1)) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147b84((long *)(lVar29 + 0x40),iVar13 + 1,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
        lVar29 = *in_stack_00000150;
        if (lVar29 == 0) goto LAB_02491464;
      }
      lVar27 = *(long *)(lVar29 + 0x40);
      if (lVar27 == 0) goto LAB_02491464;
      if (*(uint *)(lVar27 + 0x18) <= uVar28)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar27 = lVar27 + (long)(int)uVar28 * 0x18;
      *(long **)(lVar27 + 0x20) = unaff_x19;
      *(uint *)(lVar27 + 0x28) = uStack0000000000000114;
      *(uint *)(lVar27 + 0x2c) = uVar11;
      *(uint *)(lVar27 + 0x30) = uVar24 - uStack0000000000000114;
      lVar27 = *(long *)(lVar29 + 0x50);
      *(int *)(lVar29 + 0x24) = *(int *)(lVar29 + 0x24) + 1;
      if (lVar27 == 0) goto LAB_02491464;
      if (*(uint *)(lVar27 + 0x18) <= uVar1)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar27 = lVar27 + lVar39 * 0x5c;
      iStack00000000000000a4 = iStack00000000000000a4 + 1;
      *(int *)(lVar27 + 0x30) = *(int *)(lVar27 + 0x30) + 1;
    }
LAB_0248fee0:
    bVar5 = true;
  }
LAB_0248fee8:
  if ((*in_stack_00000150 == 0) || (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0))
  goto LAB_02491464;
  uVar28 = *(uint *)(lVar29 + 0x18);
  if (uVar28 <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*(byte *)(lVar29 + lVar18 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar7) {
LAB_0248ff18:
      if (uVar28 <= uVar24 - 2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar39 = *unaff_x19;
      uVar71 = *(undefined4 *)(lVar29 + lStack0000000000000128 + -0x330);
      uVar58 = *(undefined4 *)(lVar29 + lStack0000000000000128 + -0x2f8);
LAB_02490474:
      pcVar32 = *(code **)(lVar39 + 0x908);
LAB_0249047c:
      (*pcVar32)(fStack0000000000000054,fStack000000000000004c,fStack0000000000000050,uVar71,
                 fStack00000000000000cc,0,fStack0000000000000058,uVar58);
      puVar6 = System_Threading_Mutex_TypeInfo;
      lVar29 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar29 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar29 = *(long *)puVar6;
      }
LAB_024904cc:
      bVar7 = false;
      fVar53 = 0.0;
      fStack00000000000000cc = *(float *)(*(long *)(lVar29 + 0xb8) + 0x15a8);
      in_stack_000000c8 = 0.0;
    }
    else {
LAB_024903d8:
      bVar7 = false;
    }
  }
  else {
    lVar29 = lVar29 + lVar18 * 0x178;
    iVar13 = *(int *)(lVar29 + 0x68);
    *(int *)(lVar29 + 0x16c) = iVar12;
    if ((((int)unaff_x19[100] < (int)uVar11) || ((int)unaff_x19[0x65] < (int)uVar1)) ||
       (((int)unaff_x19[0x5b] == 5 && (iVar13 + 1 != (int)unaff_x19[0x66])))) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar19 = FUN_016f68bc(uVar34,0);
    if ((uVar34 != 0x200b) && ((uVar19 & 1) == 0)) {
      lVar29 = *in_stack_00000150;
      if ((lVar29 == 0) || (lVar39 = *(long *)(lVar29 + 0x38), lVar39 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar39 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      fVar64 = *(float *)(lVar39 + lVar18 * 0x178 + 0x160);
      if (fVar53 <= fVar64) {
        fVar53 = fVar64;
      }
      if (in_stack_000000c8 <= ABS(fVar70)) {
        in_stack_000000c8 = ABS(fVar70);
      }
      if ((float)iVar13 != fStack0000000000000048) {
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar29 = *in_stack_00000150;
          if (lVar29 == 0) goto LAB_02491464;
          lVar39 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
        }
        else {
          lVar39 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
        }
        fStack00000000000000cc = *(float *)(lVar39 + 0x15a8);
      }
      lVar29 = *(long *)(lVar29 + 0x38);
      if (lVar29 == 0) goto LAB_02491464;
      if (*(uint *)(lVar29 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (unaff_x19[0x1e] == 0) goto LAB_02491464;
      fVar67 = *(float *)(lVar29 + lVar18 * 0x178 + 0x14c);
      fVar64 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
      fVar67 = fVar67 + fVar53 * fVar64;
      fStack0000000000000048 = (float)iVar13;
      if (fVar67 <= fStack00000000000000cc) {
        fStack00000000000000cc = fVar67;
      }
    }
    if (!bVar7) {
      bVar7 = false;
      if ((((uVar34 == 0xd) || ((uVar34 | 1) == 0xb)) || ((int)uVar36 < (int)uVar11)) || (!bVar9))
      goto LAB_024904e8;
      if (uVar11 == uVar36) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar19 = FUN_016fa418(uVar34,0);
        if ((uVar19 & 1) != 0) goto LAB_024903d8;
      }
      if ((*in_stack_00000150 == 0) || (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar29 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar29 = lVar29 + lVar18 * 0x178;
      fStack0000000000000058 = *(float *)(lVar29 + 0x160);
      fStack0000000000000054 = *(float *)(lVar29 + 0x11c);
      bVar7 = fVar53 != 0.0;
      fVar64 = fStack0000000000000058;
      if (bVar7) {
        fVar64 = fVar53;
      }
      fVar53 = fVar64;
      _bStack000000000000005c = *(uint *)(lVar29 + 0x168);
      fStack0000000000000050 = 0.0;
      fVar64 = fVar70;
      if (bVar7) {
        fVar64 = in_stack_000000c8;
      }
      fStack000000000000004c = fStack00000000000000cc;
      in_stack_000000c8 = fVar64;
    }
    if (*in_stack_00000148 == 1) {
      if ((*in_stack_00000150 != 0) && (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 != 0))
      {
        if (uVar11 < *(uint *)(lVar29 + 0x18)) {
          lVar29 = lVar29 + lVar18 * 0x178;
          lVar39 = *unaff_x19;
          uVar71 = *(undefined4 *)(lVar29 + 0x128);
          uVar58 = *(undefined4 *)(lVar29 + 0x160);
          goto LAB_02490474;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
    if ((uVar11 == uVar33) || ((int)uVar36 <= (int)uVar11)) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar19 = FUN_016f68bc(uVar34,0);
      if ((*in_stack_00000150 != 0) && (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 != 0))
      {
        if (uVar34 == 0x200b || (uVar19 & 1) != 0) {
          lVar39 = lVar42;
          if (*(uint *)(lVar29 + 0x18) <= uVar36)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        else {
          lVar39 = lVar18;
          if (*(uint *)(lVar29 + 0x18) <= uVar11)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        lVar29 = lVar29 + lVar39 * 0x178;
        uVar71 = *(undefined4 *)(lVar29 + 0x128);
        uVar58 = *(undefined4 *)(lVar29 + 0x160);
        pcVar32 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_0249047c;
      }
      goto LAB_02491464;
    }
    if (!bVar9) {
      if ((*in_stack_00000150 != 0) && (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 != 0))
      {
        uVar28 = *(uint *)(lVar29 + 0x18);
        goto LAB_0248ff18;
      }
      goto LAB_02491464;
    }
    if ((int)uVar11 < (int)(*in_stack_00000148 - 1)) {
      if ((*in_stack_00000150 == 0) || (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar29 + 0x18) <= uVar24)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar19 = FUN_024a9e4c(_bStack000000000000005c,*(undefined4 *)(lVar29 + lStack0000000000000128)
                            ,0);
      if ((uVar19 & 1) == 0) {
        if ((*in_stack_00000150 != 0) &&
           (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 != 0)) {
          if (uVar11 < *(uint *)(lVar29 + 0x18)) {
            lVar29 = lVar29 + lVar18 * 0x178;
            (**(code **)(*unaff_x19 + 0x908))
                      (fStack0000000000000054,fStack000000000000004c,fStack0000000000000050,
                       *(undefined4 *)(lVar29 + 0x128),fStack00000000000000cc,0,
                       fStack0000000000000058,*(undefined4 *)(lVar29 + 0x160));
            puVar6 = System_Threading_Mutex_TypeInfo;
            lVar29 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar29 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar29 = *(long *)puVar6;
            }
            goto LAB_024904cc;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        goto LAB_02491464;
      }
    }
    bVar7 = true;
  }
LAB_024904e8:
  if ((*in_stack_00000150 == 0) || (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar29 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if (lVar37 == 0) goto LAB_02491464;
  uVar28 = *(uint *)(lVar29 + lVar18 * 0x178 + 400);
  fVar64 = (float)FUN_026fd1f0(lVar37 + 0x50,0);
  if ((uVar28 >> 6 & 1) == 0) {
    if (bVar4) {
      if ((*in_stack_00000150 == 0) || (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar29 + 0x18) <= uVar24 - 2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar71 = *(undefined4 *)(lVar29 + lStack0000000000000128 + -0x330);
      pcVar32 = *(code **)(*unaff_x19 + 0x908);
      fVar45 = in_stack_00000080._4_4_ * fVar64 +
               *(float *)(lVar29 + lStack0000000000000128 + -0x30c);
LAB_02490a68:
      (*pcVar32)(in_stack_00000078._4_4_,fStack000000000000006c,uStack0000000000000060,uVar71,fVar45
                 ,0,in_stack_00000080._4_4_,in_stack_00000080._4_4_);
    }
LAB_02490a9c:
    bVar4 = false;
  }
  else {
    lVar29 = *in_stack_00000150;
    if ((lVar29 == 0) || (lVar39 = *(long *)(lVar29 + 0x38), lVar39 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar39 + 0x18) <= uVar11)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(int *)(lVar39 + lVar18 * 0x178 + 0x174) = iVar12;
    if ((((int)unaff_x19[100] < (int)uVar11) || ((int)unaff_x19[0x65] < (int)uVar1)) ||
       (((int)unaff_x19[0x5b] == 5 &&
        (*(int *)(lVar39 + lVar18 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if ((((uVar34 == 0xd) || ((uVar34 | 1) == 0xb)) || ((int)uVar36 < (int)uVar11)) ||
       (bVar4 || !bVar9)) {
LAB_02490668:
      if (!bVar4) goto LAB_02490a9c;
    }
    else {
      if (uVar11 == uVar36) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar19 = FUN_016fa418(uVar34,0);
        if ((uVar19 & 1) != 0) goto LAB_02490668;
        lVar29 = *in_stack_00000150;
        if (lVar29 == 0) goto LAB_02491464;
      }
      lVar29 = *(long *)(lVar29 + 0x38);
      if (lVar29 == 0) goto LAB_02491464;
      if (*(uint *)(lVar29 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar29 = lVar29 + lVar18 * 0x178;
      fStack0000000000000038 = *(float *)(lVar29 + 0x60);
      in_stack_00000080._4_4_ = *(float *)(lVar29 + 0x160);
      fStack0000000000000034 = *(float *)(lVar29 + 0x14c);
      in_stack_00000078._4_4_ = *(float *)(lVar29 + 0x11c);
      fStack000000000000006c = fVar64 * in_stack_00000080._4_4_ + fStack0000000000000034;
      uStack0000000000000060 = 0;
    }
    uVar28 = *in_stack_00000148;
    if (uVar28 == 1) {
      if (*in_stack_00000150 != 0) {
        lVar29 = *(long *)(*in_stack_00000150 + 0x38);
joined_r0x024907c8:
        if (lVar29 != 0) {
          if (uVar11 < *(uint *)(lVar29 + 0x18)) {
            lVar29 = lVar29 + lVar18 * 0x178;
            lVar42 = *unaff_x19;
            uVar71 = *(undefined4 *)(lVar29 + 0x128);
            fVar45 = *(float *)(lVar29 + 0x14c);
LAB_024907e8:
            pcVar32 = *(code **)(lVar42 + 0x908);
LAB_02490a64:
            fVar45 = fVar64 * in_stack_00000080._4_4_ + fVar45;
            goto LAB_02490a68;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
      }
      goto LAB_02491464;
    }
    if (uVar11 == uVar33) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar19 = FUN_016f68bc(uVar34,0);
      if ((*in_stack_00000150 != 0) && (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 != 0))
      {
        uVar28 = *(uint *)(lVar29 + 0x18);
        if (uVar34 == 0x200b || (uVar19 & 1) != 0) {
          if (uVar28 <= uVar36)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        else {
LAB_02490a40:
          lVar42 = lVar18;
          if (uVar28 <= uVar11)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
LAB_02490a48:
        lVar29 = lVar29 + lVar42 * 0x178;
        fVar45 = *(float *)(lVar29 + 0x14c);
        uVar71 = *(undefined4 *)(lVar29 + 0x128);
        pcVar32 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_02490a64;
      }
      goto LAB_02491464;
    }
    if ((int)uVar11 < (int)uVar28) {
      lVar29 = *in_stack_00000150;
      if ((lVar29 != 0) && (lVar39 = *(long *)(lVar29 + 0x38), lVar39 != 0)) {
        if (uVar24 < *(uint *)(lVar39 + 0x18)) {
          if (*(float *)(lVar39 + lStack0000000000000128 + -0x108) == fStack0000000000000038) {
            fVar67 = *(float *)(lVar39 + lStack0000000000000128 + -0x1c);
            if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar19 = FUN_024aa280(fVar45 + fVar67,fStack0000000000000034,0);
            if ((uVar19 & 1) != 0) {
              uVar28 = *in_stack_00000148;
              goto LAB_024908ec;
            }
            lVar29 = *in_stack_00000150;
            if (lVar29 == 0) goto LAB_02491464;
          }
          lVar29 = *(long *)(lVar29 + 0x38);
          if (lVar29 != 0) {
            uVar28 = *(uint *)(lVar29 + 0x18);
            if ((int)uVar11 <= (int)uVar36) goto LAB_02490a40;
            if (uVar36 < uVar28) goto LAB_02490a48;
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          }
          goto LAB_02491464;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
LAB_024908ec:
    if ((int)uVar11 < (int)uVar28) {
      iVar13 = FUN_02681c0c(lVar37,0);
      if (*(uint *)(lVar25 + 0x18) <= uVar24)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar29 = *(long *)(lVar25 + lStack0000000000000128 + -0x130);
      if (lVar29 == 0) goto LAB_02491464;
      iVar14 = FUN_02681c0c(lVar29,0);
      if (iVar13 != iVar14) {
        if (*in_stack_00000150 != 0) {
          lVar29 = *(long *)(*in_stack_00000150 + 0x38);
          goto joined_r0x024907c8;
        }
        goto LAB_02491464;
      }
    }
    if (!bVar9) {
      if ((*in_stack_00000150 != 0) && (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 != 0))
      {
        if (uVar24 - 2 < *(uint *)(lVar29 + 0x18)) {
          lVar42 = *unaff_x19;
          uVar71 = *(undefined4 *)(lVar29 + lStack0000000000000128 + -0x330);
          fVar45 = *(float *)(lVar29 + lStack0000000000000128 + -0x30c);
          goto LAB_024907e8;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
    bVar4 = true;
  }
  if ((*in_stack_00000150 == 0) || (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0))
  goto LAB_02491464;
  uVar28 = (uint)*(undefined8 *)(lVar29 + 0x18);
  if (uVar28 <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*(byte *)(lVar29 + lVar18 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar8) {
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,
                 fStack0000000000000098,in_stack_000000a0,uStack0000000000000094);
    }
LAB_02490b04:
    bVar8 = false;
  }
  else {
    if ((((int)unaff_x19[100] < (int)uVar11) || ((int)unaff_x19[0x65] < (int)uVar1)) ||
       (((int)unaff_x19[0x5b] == 5 &&
        (*(int *)(lVar29 + lVar18 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (!bVar8) {
      if ((((uVar34 == 0xd) || ((uVar34 | 1) == 0xb)) || ((int)uVar36 < (int)uVar11)) || (!bVar9))
      goto LAB_02490b04;
      if (uVar11 == uVar36) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar19 = FUN_016fa418(uVar34,0);
        if ((uVar19 & 1) != 0) goto LAB_02490b04;
      }
      puVar6 = System_Threading_Mutex_TypeInfo;
      lVar42 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar42 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar42 = *(long *)puVar6;
      }
      if ((*in_stack_00000150 == 0) || (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0))
      goto LAB_02491464;
      uVar28 = (uint)*(undefined8 *)(lVar29 + 0x18);
      if (uVar28 <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar42 = *(long *)(lVar42 + 0xb8);
      lVar39 = lVar29 + lVar18 * 0x178;
      in_stack_00001798 = *(undefined8 *)(lVar39 + 0x184);
      in_stack_00001790 = *(undefined8 *)(lVar39 + 0x17c);
      fStack00000000000000a8 = *(float *)(lVar42 + 0x1598);
      in_stack_000017a0 = *(float *)(lVar39 + 0x18c);
      fStack00000000000000ac = *(float *)(lVar42 + 0x159c);
      fStack0000000000000098 = *(float *)(lVar42 + 0x15a0);
      in_stack_000000a0 = *(float *)(lVar42 + 0x15a4);
      uStack0000000000000094 = 0;
    }
    if (uVar28 <= uVar11)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar29 = lVar29 + lVar18 * 0x178;
    fVar64 = *(float *)(lVar29 + 0x128);
    fVar46 = *(float *)(lVar29 + 0x188);
    uVar16 = *(undefined8 *)(lVar29 + 0x17c);
    fVar68 = *(float *)(lVar29 + 0x184);
    uVar15 = *(undefined8 *)(lVar29 + 0x184);
    fVar48 = *(float *)(lVar29 + 0x18c);
    fVar45 = *(float *)(lVar29 + 0x11c);
    fVar67 = *(float *)(lVar29 + 0x148);
    fVar47 = *(float *)(lVar29 + 0x150);
    in_stack_00000158 = uVar16;
    fStack0000000000000160 = fVar68;
    fStack0000000000000164 = fVar46;
    in_stack_00000168 = fVar48;
    in_stack_00000170 = in_stack_00001790;
    in_stack_00000178 = in_stack_00001798;
    in_stack_00000180 = in_stack_000017a0;
    uVar19 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
    lVar29 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
    if ((uVar19 & 1) == 0) {
      if (*(int *)(lVar29 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar29);
      }
      fVar64 = fVar64 + (float)in_stack_00001798;
      fVar45 = fVar45 - (float)((ulong)in_stack_00001790 >> 0x20);
      fVar67 = fVar67 + (float)((ulong)in_stack_00001798 >> 0x20);
      if (fVar45 <= fStack00000000000000a8) {
        fStack00000000000000a8 = fVar45;
      }
      if (fVar47 - in_stack_000017a0 <= fStack00000000000000ac) {
        fStack00000000000000ac = fVar47 - in_stack_000017a0;
      }
      if (fStack0000000000000098 <= fVar64) {
        fStack0000000000000098 = fVar64;
      }
      if (in_stack_000000a0 <= fVar67) {
        in_stack_000000a0 = fVar67;
      }
    }
    else {
      if (*(int *)(lVar29 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar29);
      }
      fVar45 = (fVar45 + (fStack0000000000000098 - (float)in_stack_00001798)) * 0.5;
      if (fVar47 <= fStack00000000000000ac) {
        fStack00000000000000ac = fVar47;
      }
      if (in_stack_000000a0 <= fVar67) {
        in_stack_000000a0 = fVar67;
      }
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,fVar45,
                 in_stack_000000a0,uStack0000000000000094);
      fStack00000000000000ac = fVar47 - fVar48;
      fStack0000000000000098 = fVar64 + fVar68;
      uStack0000000000000094 = 0;
      in_stack_000000a0 = fVar67 + fVar46;
      fStack00000000000000a8 = fVar45;
      in_stack_00001790 = uVar16;
      in_stack_00001798 = uVar15;
      in_stack_000017a0 = fVar48;
    }
    if (((*in_stack_00000148 == 1) || (uVar11 == uVar33)) ||
       (((int)uVar36 <= (int)uVar11 || (!bVar9)))) {
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,
                 fStack0000000000000098,in_stack_000000a0,uStack0000000000000094);
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
  }
  uVar11 = *in_stack_00000148;
  iVar10 = iVar10 + 1;
  lStack0000000000000128 = lStack0000000000000128 + 0x178;
  bVar9 = (int)uVar11 <= (int)uVar24;
  uVar28 = uVar1;
  uVar24 = uVar24 + 1;
  if (bVar9) goto LAB_02491038;
  goto LAB_0248ef74;
LAB_02491038:
  lVar25 = *in_stack_00000150;
  if (lVar25 != 0) {
    iVar12 = uVar1 + 1;
    plVar30 = (long *)PTR_DAT_033ed410;
LAB_02491068:
    *(uint *)(lVar25 + 0x18) = uVar11;
    lVar29 = unaff_x19[0xd3];
    *(int *)(lVar25 + 0x2c) = iVar12;
    iVar12 = iStack00000000000000a4;
    if ((int)uVar11 < 1) {
      iVar12 = 1;
    }
    if (iStack00000000000000a4 == 0) {
      iVar12 = 1;
    }
    *(int *)(lVar25 + 0x1c) = (int)lVar29;
    *(int *)(lVar25 + 0x24) = iVar12;
    *(int *)(lVar25 + 0x30) = (int)unaff_x19[0x95] + 1;
    if (((int)unaff_x19[0x62] != 0xff) ||
       (uVar19 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar19 & 1) == 0)) {
LAB_02491468:
      lVar25 = *(long *)Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__;
LAB_02491474:
      if (*(int *)(lVar25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_024a942c();
      return;
    }
    lVar25 = unaff_x19[0xda];
    if (lVar25 != 0) {
      (**(code **)(lVar25 + 0x18))
                (*(undefined8 *)(lVar25 + 0x40),*in_stack_00000150,*(undefined8 *)(lVar25 + 0x28));
    }
    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
      if ((*in_stack_00000150 == 0) || (lVar25 = *(long *)(*in_stack_00000150 + 0x60), lVar25 == 0))
      goto LAB_02491464;
      if (*(int *)(*plVar30 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(int *)(lVar25 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      FUN_024e8000(lVar25 + 0x20,1,0);
    }
    if (unaff_x19[0x73] != 0) {
      UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
                (unaff_x19[0x73],0);
      if ((unaff_x19[0x6c] != 0) && (lVar25 = *(long *)(unaff_x19[0x6c] + 0x60), lVar25 != 0)) {
        if (*(int *)(lVar25 + 0x18) == 0) {
UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (unaff_x19[0x73] != 0) {
          FUN_0266b9c4(unaff_x19[0x73],*(undefined8 *)(lVar25 + 0x30),0);
          if ((unaff_x19[0x6c] != 0) && (lVar25 = *(long *)(unaff_x19[0x6c] + 0x60), lVar25 != 0)) {
            if (*(int *)(lVar25 + 0x18) == 0)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            if (unaff_x19[0x73] != 0) {
              FUN_0266bbc8(unaff_x19[0x73],*(undefined8 *)(lVar25 + 0x48),0);
              if ((unaff_x19[0x6c] != 0) &&
                 (lVar25 = *(long *)(unaff_x19[0x6c] + 0x60), lVar25 != 0)) {
                if (*(int *)(lVar25 + 0x18) == 0)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                if (unaff_x19[0x73] != 0) {
                  FUN_0266bc74(unaff_x19[0x73],*(undefined8 *)(lVar25 + 0x50),0);
                  if ((unaff_x19[0x6c] != 0) &&
                     (lVar25 = *(long *)(unaff_x19[0x6c] + 0x60), lVar25 != 0)) {
                    if (*(int *)(lVar25 + 0x18) == 0)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    if (unaff_x19[0x73] != 0) {
                      FUN_0266c1dc(unaff_x19[0x73],*(undefined8 *)(lVar25 + 0x58),0);
                      if (unaff_x19[0x73] != 0) {
                        FUN_0266ed90(unaff_x19[0x73],0);
                        lVar25 = *in_stack_00000150;
                        if (lVar25 != 0) {
                          lVar42 = 0;
                          lVar29 = 0;
                          do {
                            uVar19 = lVar29 + 1;
                            if ((long)*(int *)(lVar25 + 0x34) <= (long)uVar19) goto LAB_02491468;
                            lVar25 = *(long *)(lVar25 + 0x60);
                            if (lVar25 == 0) break;
                            if (*(int *)(*plVar30 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            if (*(uint *)(lVar25 + 0x18) <= uVar19)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            FUN_024e7ecc(lVar25 + lVar42 + 0x70,0);
                            lVar25 = unaff_x19[0xe0];
                            if (lVar25 == 0) break;
                            if (*(uint *)(lVar25 + 0x18) <= uVar19)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            uVar15 = *(undefined8 *)(lVar25 + lVar29 * 8 + 0x28);
                            if (*(int *)(*plVar44 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar17 = FUN_0268b4e0(uVar15,0,0);
                            if ((uVar17 & 1) == 0) {
                              if (*(int *)((long)unaff_x19 + 0x314) != 0) {
                                if ((*in_stack_00000150 == 0) ||
                                   (lVar25 = *(long *)(*in_stack_00000150 + 0x60), lVar25 == 0))
                                break;
                                if (*(int *)(*plVar30 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                if (*(uint *)(lVar25 + 0x18) <= uVar19)
                                goto 
                                UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                                ;
                                FUN_024e8000(lVar25 + lVar42 + 0x70,1,0);
                              }
                              lVar25 = unaff_x19[0xe0];
                              if (lVar25 == 0) break;
                              if (*(uint *)(lVar25 + 0x18) <= uVar19)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar25 = *(long *)(lVar25 + lVar29 * 8 + 0x28);
                              if (lVar25 == 0) break;
                              lVar25 = FUN_024eefa0(lVar25,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar18 = *(long *)(*in_stack_00000150 + 0x60), lVar18 == 0))
                              break;
                              if (*(uint *)(lVar18 + 0x18) <= uVar19)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar25 == 0) break;
                              FUN_0266b9c4(lVar25,*(undefined8 *)(lVar18 + lVar42 + 0x80),0);
                              lVar25 = unaff_x19[0xe0];
                              if (lVar25 == 0) break;
                              if (*(uint *)(lVar25 + 0x18) <= uVar19)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar25 = *(long *)(lVar25 + lVar29 * 8 + 0x28);
                              if (lVar25 == 0) break;
                              lVar25 = FUN_024eefa0(lVar25,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar18 = *(long *)(*in_stack_00000150 + 0x60), lVar18 == 0))
                              break;
                              if (*(uint *)(lVar18 + 0x18) <= uVar19)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar25 == 0) break;
                              FUN_0266bbc8(lVar25,*(undefined8 *)(lVar18 + lVar42 + 0x98),0);
                              lVar25 = unaff_x19[0xe0];
                              if (lVar25 == 0) break;
                              if (*(uint *)(lVar25 + 0x18) <= uVar19)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar25 = *(long *)(lVar25 + lVar29 * 8 + 0x28);
                              if (lVar25 == 0) break;
                              lVar25 = FUN_024eefa0(lVar25,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar18 = *(long *)(*in_stack_00000150 + 0x60), lVar18 == 0))
                              break;
                              if (*(uint *)(lVar18 + 0x18) <= uVar19)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar25 == 0) break;
                              FUN_0266bc74(lVar25,*(undefined8 *)(lVar18 + lVar42 + 0xa0),0);
                              lVar25 = unaff_x19[0xe0];
                              if (lVar25 == 0) break;
                              if (*(uint *)(lVar25 + 0x18) <= uVar19)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar25 = *(long *)(lVar25 + lVar29 * 8 + 0x28);
                              if (lVar25 == 0) break;
                              lVar25 = FUN_024eefa0(lVar25,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar18 = *(long *)(*in_stack_00000150 + 0x60), lVar18 == 0))
                              break;
                              if (*(uint *)(lVar18 + 0x18) <= uVar19)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar25 == 0) break;
                              FUN_0266c1dc(lVar25,*(undefined8 *)(lVar18 + lVar42 + 0xa8),0);
                              lVar25 = unaff_x19[0xe0];
                              if (lVar25 == 0) break;
                              if (*(uint *)(lVar25 + 0x18) <= uVar19)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar25 = *(long *)(lVar25 + lVar29 * 8 + 0x28);
                              if ((lVar25 == 0) || (lVar25 = FUN_024eefa0(lVar25,0), lVar25 == 0))
                              break;
                              FUN_0266ed90(lVar25,0);
                            }
                            lVar25 = *in_stack_00000150;
                            lVar29 = lVar29 + 1;
                            lVar42 = lVar42 + 0x50;
                          } while (lVar25 != 0);
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


