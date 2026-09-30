/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor$$CanPlayHoverHaptics
ENTRY_POINT: 02495b8c
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

void UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor__CanPlayHoverHaptics
               (undefined1 param_1 [16],ulong param_2)

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
  undefined8 uVar20;
  ulong uVar21;
  long lVar22;
  int *piVar23;
  ulong uVar24;
  undefined1 uVar25;
  char cVar26;
  long lVar27;
  undefined4 *puVar28;
  long lVar29;
  long lVar30;
  float *pfVar31;
  code *pcVar32;
  uint uVar33;
  float *pfVar34;
  long lVar35;
  uint uVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long *unaff_x19;
  uint uVar41;
  long *plVar42;
  uint uVar43;
  uint *unaff_x24;
  long lVar44;
  long *plVar45;
  long unaff_x27;
  int iVar46;
  long *unaff_x29;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  double dVar57;
  ulong uVar58;
  ulong uVar59;
  uint uVar60;
  ulong uVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float unaff_s12;
  float fVar71;
  float fVar72;
  ulong unaff_d13;
  float fVar73;
  undefined4 uVar74;
  float fVar75;
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
  float in_stack_000000c8;
  float fStack00000000000000cc;
  float fStack00000000000000d0;
  float fStack00000000000000d4;
  float fStack00000000000000e8;
  float fStack00000000000000ec;
  float fStack00000000000000f4;
  float in_stack_00000128;
  float fStack0000000000000134;
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
  char in_stack_000017b4;
  float in_stack_000017b8;
  uint in_stack_000017bc;
  
code_r0x02495b8c:
  plVar42 = (long *)StringLiteral_302;
  FUN_024d69d4();
  *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
LAB_02492630:
  fVar63 = (float)unaff_d13;
  in_stack_00001788 = in_stack_00001788 + 1;
  lVar27 = unaff_x19[0x8e];
  if (lVar27 != 0) {
    if ((int)in_stack_00001788 < (int)*(uint *)(lVar27 + 0x18)) {
      if (*(uint *)(lVar27 + 0x18) <= in_stack_00001788)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      uVar14 = *(uint *)(lVar27 + (long)(int)in_stack_00001788 * 0xc + 0x20);
      if (uVar14 == 0) goto LAB_02495f1c;
      if (5 < in_stack_00000140) {
        uVar19 = FUN_0176eb1c(&stack0x000017bc,0);
        uVar20 = FUN_0176eb1c(&stack0x00001788,0);
        uVar19 = FUN_0160073c(*(undefined8 *)UnityEngine_Rendering_Universal_DebugValidationMode_var
                              ,uVar19,*(undefined8 *)
                                       Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                              ,uVar20,0);
        if (*(int *)(*plVar42 + 0xe0) == 0) {
          thunk_FUN_00d32864(*plVar42);
        }
        FUN_026610e4(uVar19,0);
        in_stack_000017a8 = CONCAT44(3,*unaff_x24);
      }
      if ((*(char *)((long)unaff_x19 + 0x2fa) != '\0') && (uVar14 == 0x3c)) goto code_r0x02492440;
      if ((*in_stack_00000150 != 0) && (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 != 0))
      {
        if (*unaff_x24 < *(uint *)(lVar27 + 0x18)) {
          lVar27 = lVar27 + (int)*unaff_x24 * unaff_x27;
          *(undefined4 *)((long)unaff_x19 + 0x63c) = *(undefined4 *)(lVar27 + 0x2c);
          *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar27 + 0x58);
          unaff_x19[0x1f] = *(long *)(lVar27 + 0x38);
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorReticleVisual__get_prefabScalingFactor
          ;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      }
      goto LAB_0249920c;
    }
LAB_02495f1c:
    fVar63 = (float)param_2;
    if (((char)unaff_x19[0x46] != '\0') &&
       (fVar63 = DAT_02956ccc,
       DAT_02956ccc < *(float *)((long)unaff_x19 + 0x234) - *(float *)(unaff_x19 + 0x47))) {
      fVar63 = *(float *)((long)unaff_x19 + 0x1dc);
      fVar73 = *(float *)((long)unaff_x19 + 0x24c);
      if ((fVar63 < fVar73) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
        if (*(float *)((long)unaff_x19 + 0x2cc) < *(float *)(unaff_x19 + 0x59) / 100.0) {
          *(undefined4 *)((long)unaff_x19 + 0x2cc) = 0;
        }
        fVar47 = (*(float *)((long)unaff_x19 + 0x234) - fVar63) * 0.5;
        if (fVar47 <= DAT_028aa298) {
          fVar47 = DAT_028aa298;
        }
        *(float *)(unaff_x19 + 0x47) = fVar63;
        fVar47 = (fVar63 + fVar47) * 20.0 + 0.5;
        fVar63 = DAT_02958220;
        if (fVar47 != INFINITY) {
          fVar63 = (float)(int)fVar47 / 20.0;
        }
        if (fVar73 <= fVar63) {
          fVar63 = fVar73;
        }
        goto LAB_02495fd8;
      }
    }
    *(undefined1 *)((long)unaff_x19 + 0x244) = 1;
    if ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c)) {
      uVar19 = FUN_0176eb1c(in_stack_00000038,0);
      uVar20 = FUN_017840ac(in_stack_00000040,0);
      uVar19 = FUN_0160073c(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlah_s16__,
                            uVar19,*(undefined8 *)
                                    Method_UnityEngine_GameObject_GetComponents<Component>__,uVar20,
                            0);
      if (*(int *)(*plVar42 + 0xe0) == 0) {
        thunk_FUN_00d32864(*plVar42);
      }
      FUN_02660dac(uVar19,0);
    }
    if ((*unaff_x24 == 0) || ((*unaff_x24 == 1 && (in_stack_000017bc == 3)))) {
      (**(code **)(*unaff_x19 + 0x948))();
      goto LAB_02496098;
    }
    lVar27 = *unaff_x29;
    if (*(int *)(lVar27 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar27 = *unaff_x29;
    }
    puVar9 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    lVar27 = **(long **)(lVar27 + 0xb8);
    if (lVar27 == 0) goto LAB_0249920c;
    if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0xd0))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    iVar15 = *(int *)(lVar27 + (long)(int)*(uint *)(unaff_x19 + 0xd0) * 0x38 + 0x54) << 2;
    if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x60), lVar27 == 0))
    goto LAB_0249920c;
    if (*(int *)(*(long *)PTR_DAT_033ed410 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (*(int *)(lVar27 + 0x18) == 0)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    FUN_024e7d94(lVar27 + 0x20,0,0);
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774d76 = '\x01';
    }
    puVar10 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
    iVar13 = (int)unaff_x19[0x4d];
    in_stack_000000c8 =
         **(float **)
           (*(long *)Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
           + 0xb8);
    uStack00000000000000c0 =
         *(undefined8 *)
          (*(float **)
            (*(long *)
              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ + 0xb8
            ) + 1);
    lVar27 = unaff_x19[0xe2];
    _in_stack_00000090 = uStack00000000000000c0;
    fStack0000000000000098 = in_stack_000000c8;
    if (iVar13 < 0x401) {
      if (iVar13 == 0x100) {
        if (lVar27 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar27 + 0x18) < 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar19 = *(undefined8 *)(lVar27 + 0x30);
        if ((int)unaff_x19[0x5b] == 5) {
          if ((*in_stack_00000150 == 0) ||
             (lVar30 = *(long *)(*in_stack_00000150 + 0x58), lVar30 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar30 + 0x18) <= uStack000000000000002c)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar63 = *(float *)(lVar30 + (long)(int)uStack000000000000002c * 0x14 + 0x28);
        }
        else {
          fVar63 = *(float *)(unaff_x19 + 0x96);
        }
        fStack0000000000000098 = fStack0000000000000030 + 0.0 + *(float *)(lVar27 + 0x2c);
        fVar63 = (0.0 - fVar63) - fStack0000000000000020;
      }
      else if (iVar13 == 0x200) {
        if (lVar27 == 0) goto LAB_0249920c;
        if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fStack0000000000000098 = (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
        uVar19 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20)) * 0.5,
                          ((float)*(undefined8 *)(lVar27 + 0x24) +
                          (float)*(undefined8 *)(lVar27 + 0x30)) * 0.5);
        if ((int)unaff_x19[0x5b] == 5) {
          if ((*in_stack_00000150 == 0) ||
             (lVar27 = *(long *)(*in_stack_00000150 + 0x58), lVar27 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar27 + 0x18) <= uStack000000000000002c)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar27 = lVar27 + (long)(int)uStack000000000000002c * 0x14;
          fStack0000000000000098 = fStack0000000000000030 + 0.0 + fStack0000000000000098;
          fVar63 = ((fStack0000000000000020 + *(float *)(lVar27 + 0x28) + *(float *)(lVar27 + 0x30))
                   - fStack0000000000000024) * -0.5 + 0.0;
        }
        else {
          fStack0000000000000098 = fStack0000000000000030 + 0.0 + fStack0000000000000098;
          fVar63 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x96) + in_stack_000017b8) -
                   fStack0000000000000024) * -0.5 + 0.0;
        }
      }
      else {
        if (iVar13 != 0x400) goto LAB_024965d0;
        if (lVar27 == 0) goto LAB_0249920c;
        if (*(int *)(lVar27 + 0x18) == 0)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar19 = *(undefined8 *)(lVar27 + 0x24);
        if ((int)unaff_x19[0x5b] == 5) {
          if ((*in_stack_00000150 == 0) ||
             (lVar30 = *(long *)(*in_stack_00000150 + 0x58), lVar30 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar30 + 0x18) <= uStack000000000000002c)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          in_stack_000017b8 = *(float *)(lVar30 + (long)(int)uStack000000000000002c * 0x14 + 0x30);
        }
        fStack0000000000000098 = fStack0000000000000030 + 0.0 + *(float *)(lVar27 + 0x20);
        fVar63 = fStack0000000000000024 + (0.0 - in_stack_000017b8);
      }
      _in_stack_00000090 = CONCAT44((float)((ulong)uVar19 >> 0x20) + 0.0,(float)uVar19 + fVar63);
    }
    else if (iVar13 == 0x800) {
      if (lVar27 == 0) goto LAB_0249920c;
      if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      fVar63 = ((float)*(undefined8 *)(lVar27 + 0x24) + (float)*(undefined8 *)(lVar27 + 0x30)) * 0.5
      ;
      fStack0000000000000098 =
           fStack0000000000000030 + 0.0 +
           (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
      _in_stack_00000090 =
           CONCAT44(((float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20)) * 0.5 + 0.0,fVar63 + 0.0
                   );
    }
    else {
      if (iVar13 == 0x1000) {
        if (lVar27 == 0) goto LAB_0249920c;
        if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar63 = (float)*(undefined8 *)(lVar27 + 0x24) + (float)*(undefined8 *)(lVar27 + 0x30);
        fVar73 = (float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20);
        fStack0000000000000020 =
             fStack0000000000000020 + *(float *)(unaff_x19 + 0x9c) + *(float *)(unaff_x19 + 0x9b);
        fStack0000000000000098 =
             fStack0000000000000030 + 0.0 +
             (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
      }
      else {
        if (iVar13 != 0x2000) goto LAB_024965d0;
        if (lVar27 == 0) goto LAB_0249920c;
        if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar63 = (float)*(undefined8 *)(lVar27 + 0x24) + (float)*(undefined8 *)(lVar27 + 0x30);
        fVar73 = (float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20);
        fStack0000000000000020 = *(float *)((long)unaff_x19 + 0x4b4) - fStack0000000000000020;
        fStack0000000000000098 =
             fStack0000000000000030 + 0.0 +
             (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
      }
      fVar63 = fVar63 * 0.5;
      _in_stack_00000090 =
           CONCAT44(fVar73 * 0.5 + 0.0,
                    fVar63 + (0.0 - (fStack0000000000000020 - fStack0000000000000024) * 0.5));
    }
LAB_024965d0:
    if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
    uVar19 = FUN_0285a188(unaff_x19[0xe4],0);
    if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar9);
    }
    uVar21 = FUN_0268b4e0(uVar19,0,0);
    lVar27 = FUN_024c933c();
    if (lVar27 == 0) goto LAB_0249920c;
    FUN_026a125c(lVar27,0);
    *(float *)(unaff_x19 + 0xe1) = fVar63;
    if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
    iVar13 = FUN_02859798(unaff_x19[0xe4],0);
    if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
    fVar73 = (float)FUN_028598f0(unaff_x19[0xe4],0);
    __x = DAT_028aa048;
    dVar57 = modf(DAT_028aa048,(double *)&stack0x00000880);
    if (dVar57 == 0.5) {
      fVar47 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
      if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
        fVar47 = fVar47 + 1.0;
      }
    }
    else {
      fVar47 = 255.0;
    }
    dVar57 = modf(__x,(double *)&stack0x00000880);
    if (dVar57 == 0.5) {
      fVar67 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
      if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
        fVar67 = fVar67 + 1.0;
      }
    }
    else {
      fVar67 = 255.0;
    }
    dVar57 = modf(__x,(double *)&stack0x00000880);
    if (dVar57 == 0.5) {
      fVar70 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
      if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
        fVar70 = fVar70 + 1.0;
      }
    }
    else {
      fVar70 = 255.0;
    }
    dVar57 = modf(__x,(double *)&stack0x00000880);
    if (dVar57 == 0.5) {
      fVar49 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
      if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
        fVar49 = fVar49 + 1.0;
      }
    }
    else {
      fVar49 = 255.0;
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
    lVar27 = *(long *)puVar10;
    if (*(int *)(lVar27 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar27 = *(long *)puVar10;
    }
    puVar28 = *(undefined4 **)(lVar27 + 0xb8);
    uVar58 = (ulong)(uint)puVar28[1];
    uVar59 = (ulong)(uint)puVar28[2];
    uVar61 = (ulong)(uint)puVar28[3];
    UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
              (*puVar28,uVar58,uVar59,uVar61,&stack0x00001790,0x4000ffff,0);
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar27 = *in_stack_00000150;
    if (lVar27 == 0) goto LAB_0249920c;
    uVar14 = *in_stack_00000148;
    if ((int)uVar14 < 1) {
      iStack00000000000000ac = 0;
      iVar15 = 0;
      goto LAB_02498c58;
    }
    lVar27 = *(long *)(lVar27 + 0x38);
    fVar63 = ABS(fVar63);
    fVar48 = 1.0;
    if ((uVar21 & 1) == 0) {
      fVar48 = fVar63;
    }
    if (lVar27 == 0) goto LAB_0249920c;
    bVar8 = false;
    bVar7 = false;
    bVar12 = false;
    bVar11 = false;
    uStack0000000000000060 =
         (int)fVar47 & 0xffU | ((int)fVar67 & 0xffU) << 8 | ((int)fVar70 & 0xffU) << 0x10 |
         (int)fVar49 << 0x18;
    fStack00000000000000d0 = *(float *)(*(long *)(*unaff_x29 + 0xb8) + 0x15a8);
    fStack00000000000000cc = 0.0;
    fStack0000000000000058 = fStack00000000000000b0;
    _bStack000000000000005c = 0.0;
    fStack0000000000000034 = 0.0;
    fStack0000000000000088 = 0.0;
    fStack0000000000000030 = 0.0;
    uVar18 = 0;
    iVar46 = 0;
    lVar30 = 0x2e0;
    fVar67 = 0.0;
    fVar47 = 0.0;
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
    uVar60 = 0;
    uVar36 = 1;
    goto LAB_02496a50;
  }
  goto LAB_0249920c;
code_r0x02492440:
  *(undefined1 *)((long)unaff_x19 + 0x429) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
  uVar21 = FUN_024d0688();
  if (((uVar21 & 1) != 0) &&
     (in_stack_00001788 = in_stack_0000176c, in_stack_000017bc = uVar14,
     *(int *)((long)unaff_x19 + 0x63c) == 0)) goto LAB_02492630;
UnityEngine_XR_Interaction_Toolkit_XRInteractorReticleVisual__get_prefabScalingFactor:
  if ((unaff_x19[0x6c] == 0) || (lVar27 = *(long *)(unaff_x19[0x6c] + 0x38), lVar27 == 0))
  goto LAB_0249920c;
  uVar18 = *unaff_x24;
  if (*(uint *)(lVar27 + 0x18) <= uVar18)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar44 = (long)(int)uVar18;
  cVar26 = *(char *)(lVar27 + lVar44 * unaff_x27 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x429) = 0;
  lVar30 = unaff_x19[0x23];
  if ((uint)in_stack_000017a8 == uVar18) {
    uVar14 = (uint)((ulong)in_stack_000017a8 >> 0x20);
    bVar7 = true;
    *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
    if (uVar14 == 0x2026) {
      lVar22 = unaff_x19[0xc9];
      lVar27 = lVar27 + lVar44 * unaff_x27;
      *(undefined4 *)(lVar27 + 0x2c) = 0;
      *(long *)(lVar27 + 0x30) = lVar22;
      *(long *)(lVar27 + 0x38) = unaff_x19[0xca];
      *(long *)(lVar27 + 0x50) = unaff_x19[0xcb];
      *(int *)(lVar27 + 0x58) = (int)unaff_x19[0xcc];
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
      in_stack_000017a8 = CONCAT44(3,uVar18 + 1);
    }
    else if (uVar14 == 3) {
      if ((*in_stack_00000138 == 0) || (lVar22 = FUN_024b11ac(*in_stack_00000138,0), lVar22 == 0))
      goto LAB_0249920c;
      FUN_01299bc0(lVar22,&stack0x00000bf8,&stack0x00000880,*(undefined8 *)PTR_DAT_033ef3c8);
      if (*(uint *)(lVar27 + 0x18) <= uVar18)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      bVar7 = true;
      *(ulong *)(lVar27 + lVar44 * unaff_x27 + 0x30) = CONCAT44(in_stack_00000884,in_stack_00000880)
      ;
      uVar18 = *(uint *)((long)unaff_x19 + 0x48c);
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
    }
  }
  else {
    bVar7 = false;
  }
  iVar15 = (int)unaff_x27;
  unaff_x24 = in_stack_00000148;
  in_stack_000017bc = uVar14;
  if (((int)uVar18 < *(int *)((long)unaff_x19 + 0x31c)) && (uVar14 != 3)) {
    if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar27 + 0x18) <= uVar18)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar27 = lVar27 + (long)(int)uVar18 * (long)iVar15;
    *(undefined1 *)(lVar27 + 0x194) = 0;
    *(undefined2 *)(lVar27 + 0x20) = 0x200b;
    *(undefined4 *)(lVar27 + 100) = 0;
    *in_stack_00000148 = uVar18 + 1;
    goto LAB_02492630;
  }
  iVar13 = *(int *)((long)unaff_x19 + 0x63c);
  fStack00000000000000f4 = unaff_s12;
  if (iVar13 == 0) {
    uVar18 = *(uint *)((long)unaff_x19 + 0x254);
    if ((uVar18 >> 4 & 1) == 0) {
      if ((uVar18 >> 3 & 1) == 0) {
        if ((uVar18 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar21 = FUN_016f92d4(uVar14,0);
          if ((uVar21 & 1) != 0) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar14 = FUN_016f95a8(uVar14,0);
            uVar14 = uVar14 & 0xffff;
            fStack00000000000000f4 = fStack0000000000000028;
          }
        }
      }
      else {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar21 = FUN_016f9218(uVar14,0);
        if ((uVar21 & 1) != 0) {
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
      uVar21 = FUN_016f92d4(uVar14,0);
      if ((uVar21 & 1) != 0) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar14 = FUN_016f95a8(uVar14,0);
LAB_02492a0c:
        uVar14 = uVar14 & 0xffff;
      }
    }
    iVar13 = *(int *)((long)unaff_x19 + 0x63c);
    in_stack_000017bc = uVar14;
    if (iVar13 == 0) goto LAB_02492a20;
LAB_0249265c:
    if (iVar13 == 1) {
      if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar27 = lVar27 + (int)*in_stack_00000148 * unaff_x27;
      lVar44 = *(long *)(lVar27 + 0x40);
      unaff_x19[0xd2] = lVar44;
      *(undefined4 *)((long)unaff_x19 + 0x69c) = *(undefined4 *)(lVar27 + 0x48);
      if ((lVar44 == 0) || (lVar27 = FUN_024ebfa0(lVar44,0), lVar27 == 0)) goto LAB_0249920c;
      FUN_0132138c(lVar27,*(undefined4 *)((long)unaff_x19 + 0x69c),&stack0x00000880,
                   *(undefined8 *)System_Func<KeyValuePair<int,_int>,_int>_TypeInfo);
      lVar44 = CONCAT44(in_stack_00000884,in_stack_00000880);
      if (lVar44 == 0) goto LAB_02492630;
      if (in_stack_000017bc == 0x3c) {
        in_stack_000017bc = *(int *)((long)unaff_x19 + 0x69c) + 0xe000;
      }
      else {
        lVar27 = *unaff_x29;
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar27 = *unaff_x29;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1b4) = *(undefined4 *)(*(long *)(lVar27 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
      fVar63 = *(float *)(unaff_x19 + 0x3c);
      memmove(&stack0x00001700,(void *)(unaff_x19[0x1f] + 0x50),0x60);
      iVar13 = FUN_026fd110(&stack0x00001700,0);
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      memmove(&stack0x00001700,(void *)(*in_stack_00000138 + 0x50),0x60);
      fVar47 = (float)FUN_026fd120(&stack0x00001700,0);
      fVar73 = fStack0000000000000084;
      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
        fVar73 = unaff_s12;
      }
      if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
      fVar73 = (fVar63 / (float)iVar13) * fVar47 * fVar73;
      iVar13 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
      fVar63 = *(float *)(unaff_x19 + 0x3c);
      if (iVar13 < 1) {
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        iVar13 = FUN_026fd110(*in_stack_00000138 + 0x50,0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar47 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
        fVar70 = fStack0000000000000084;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar70 = unaff_s12;
        }
        if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
        fVar67 = (float)FUN_026fd140(unaff_x19[0x1f] + 0x50,0);
        if (*(long *)(lVar44 + 0x20) == 0) goto LAB_0249920c;
        FUN_026fd62c(&stack0x00000880,*(long *)(lVar44 + 0x20),0);
        fVar48 = (float)FUN_026fd45c(&stack0x000016e0,0);
        if (*(long *)(lVar44 + 0x20) == 0) goto LAB_0249920c;
        fVar50 = *(float *)(lVar44 + 0x2c);
        fVar71 = (float)FUN_026fd668(*(long *)(lVar44 + 0x20),0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar49 = (float)FUN_026fd140(*in_stack_00000138 + 0x50,0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar51 = (float)FUN_026fd170(*in_stack_00000138 + 0x50,0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar52 = *(float *)((long)unaff_x19 + 0x3fc);
        fStack0000000000000134 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
        if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
        fStack0000000000000134 = fVar73 * fVar51 * fVar52 * fStack0000000000000134;
        fVar70 = (fVar63 / (float)iVar13) * fVar47 * fVar70;
        fVar63 = fVar70 * (fVar67 / fVar48) * fVar50 * fVar71;
        fVar70 = fVar70 / fVar63;
        fVar49 = fVar70 * fVar49;
        fVar73 = (float)FUN_026fd180(unaff_x19[0x1f] + 0x50,0);
        fVar70 = fVar70 * fVar73;
      }
      else {
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        iVar13 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar47 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
        if (*(long *)(lVar44 + 0x20) == 0) goto LAB_0249920c;
        fVar70 = *(float *)(lVar44 + 0x2c);
        fVar67 = fStack0000000000000084;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar67 = 1.0;
        }
        fVar48 = (float)FUN_026fd668(*(long *)(lVar44 + 0x20),0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar49 = (float)FUN_026fd140(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar50 = (float)FUN_026fd170(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar71 = *(float *)((long)unaff_x19 + 0x3fc);
        fStack0000000000000134 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fStack0000000000000134 = fVar73 * fVar50 * fVar71 * fStack0000000000000134;
        fVar63 = (fVar63 / (float)iVar13) * fVar47 * fVar67 * fVar70 * fVar48;
        fVar70 = (float)FUN_026fd180(unaff_x19[0xd2] + 0x48,0);
      }
      lVar27 = unaff_x19[0x6c];
      unaff_x19[200] = lVar44;
      if ((lVar27 == 0) || (lVar44 = *(long *)(lVar27 + 0x38), lVar44 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar44 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar44 = lVar44 + (int)*in_stack_00000148 * unaff_x27;
      *(undefined4 *)(lVar44 + 0x2c) = 1;
      *(float *)(lVar44 + 0x160) = fVar63;
      in_stack_00000128 = 0.0;
      *(long *)(lVar44 + 0x40) = unaff_x19[0xd2];
      *(long *)(lVar44 + 0x38) = unaff_x19[0x1f];
      *(int *)(lVar44 + 0x58) = (int)unaff_x19[0x23];
      *(int *)(unaff_x19 + 0x23) = (int)lVar30;
      goto LAB_02492e14;
    }
    lVar27 = *in_stack_00000150;
    fVar73 = 0.0;
    if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
      fVar73 = fVar63;
    }
    fStack0000000000000134 = 0.0;
    if (lVar27 == 0) goto LAB_0249920c;
    fVar49 = 0.0;
    fVar70 = 0.0;
  }
  else {
    if (iVar13 != 0) goto LAB_0249265c;
LAB_02492a20:
    if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
    goto LAB_0249920c;
    uVar18 = *in_stack_00000148;
    uVar14 = *(uint *)(lVar27 + 0x18);
    if (uVar14 <= uVar18)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar30 = *(long *)(lVar27 + (int)uVar18 * unaff_x27 + 0x30);
    unaff_x19[200] = lVar30;
    if (lVar30 == 0) goto LAB_02492630;
    lVar44 = lVar27 + (int)uVar18 * unaff_x27;
    lVar30 = *(long *)(lVar44 + 0x38);
    unaff_x19[0x1f] = lVar30;
    unaff_x19[0x22] = *(long *)(lVar44 + 0x50);
    *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar44 + 0x58);
    if (bVar7) {
      lVar44 = unaff_x19[0x8e];
      if (lVar44 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar44 + 0x18) <= in_stack_00001788)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if ((*(int *)(lVar44 + (long)(int)in_stack_00001788 * 0xc + 0x20) != 10) ||
         (uVar18 == *(uint *)(unaff_x19 + 0x92))) goto LAB_02492ab4;
      if (uVar14 <= uVar18 - 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (lVar30 == 0) goto LAB_0249920c;
      fVar73 = *(float *)(lVar27 + (long)(int)(uVar18 - 1) * (long)iVar15 + 0x60);
      iVar13 = FUN_026fd110(lVar30 + 0x50,0);
      lVar27 = *in_stack_00000138;
    }
    else {
LAB_02492ab4:
      if (lVar30 == 0) goto LAB_0249920c;
      fVar73 = *(float *)(unaff_x19 + 0x3c);
      iVar13 = FUN_026fd110(lVar30 + 0x50,0);
      lVar27 = unaff_x19[0x1f];
    }
    if (lVar27 == 0) goto LAB_0249920c;
    fVar67 = (float)FUN_026fd120(lVar27 + 0x50,0);
    fVar47 = fStack0000000000000084;
    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
      fVar47 = unaff_s12;
    }
    fVar70 = 0.0;
    fVar49 = 0.0;
    if (!(bool)(bVar7 & in_stack_000017bc == 0x2026)) {
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      fVar49 = (float)FUN_026fd140(*in_stack_00000138 + 0x50,0);
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      fVar70 = (float)FUN_026fd180(*in_stack_00000138 + 0x50,0);
    }
    lVar27 = unaff_x19[200];
    if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_0249920c;
    fVar48 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar50 = *(float *)(lVar27 + 0x2c);
    fVar63 = (float)FUN_026fd668(*(long *)(lVar27 + 0x20),0);
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar71 = (float)FUN_026fd170(*in_stack_00000138 + 0x50,0);
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar51 = *(float *)((long)unaff_x19 + 0x3fc);
    fStack0000000000000134 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
    lVar27 = unaff_x19[0x6c];
    if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x38), lVar30 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar30 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar30 = lVar30 + (int)*in_stack_00000148 * unaff_x27;
    *(undefined4 *)(lVar30 + 0x2c) = 0;
    fVar47 = ((fStack00000000000000f4 * fVar73) / (float)iVar13) * fVar67 * fVar47;
    fVar63 = fVar47 * fVar48 * fVar50 * fVar63;
    *(float *)(lVar30 + 0x160) = fVar63;
    uVar14 = *(uint *)(unaff_x19 + 0x23);
    fStack0000000000000134 = fVar47 * fVar71 * fVar51 * fStack0000000000000134;
    if (uVar14 == 0) {
      in_stack_00000128 = *(float *)(unaff_x19 + 0xc2);
    }
    else {
      lVar30 = unaff_x19[0xe0];
      if (lVar30 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar30 + 0x18) <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar30 = *(long *)(lVar30 + (long)(int)uVar14 * 8 + 0x20);
      if (lVar30 == 0) goto LAB_0249920c;
      in_stack_00000128 = *(float *)(lVar30 + 0x104);
    }
LAB_02492e14:
    unaff_s12 = 1.0;
    fVar73 = 0.0;
    if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
      fVar73 = fVar63;
    }
  }
  lVar27 = *(long *)(lVar27 + 0x38);
  if (lVar27 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar27 = lVar27 + (int)*in_stack_00000148 * unaff_x27;
  *(short *)(lVar27 + 0x20) = (short)in_stack_000017bc;
  *(int *)(lVar27 + 0x60) = (int)unaff_x19[0x3c];
  *(undefined4 *)(lVar27 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4e4);
  if ((unaff_x19[0x6c] == 0) || (lVar27 = *(long *)(unaff_x19[0x6c] + 0x38), lVar27 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  *(int *)(lVar27 + (int)*in_stack_00000148 * unaff_x27 + 0x168) = (int)unaff_x19[0x2a];
  if ((unaff_x19[0x6c] == 0) || (lVar27 = *(long *)(unaff_x19[0x6c] + 0x38), lVar27 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  *(undefined4 *)(lVar27 + (int)*in_stack_00000148 * unaff_x27 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x154);
  if ((unaff_x19[0x6c] == 0) || (lVar27 = *(long *)(unaff_x19[0x6c] + 0x38), lVar27 == 0))
  goto LAB_0249920c;
  uVar14 = *in_stack_00000148;
  FUN_013b78b8(in_stack_000000b8,&stack0x00000880,
               *(undefined8 *)TMPro_TMP_Dropdown_OptionData_TypeInfo);
  if (*(uint *)(lVar27 + 0x18) <= uVar14)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar27 = lVar27 + (int)uVar14 * unaff_x27;
  *(undefined4 *)(lVar27 + 0x18c) = in_stack_00000890;
  *(undefined8 *)(lVar27 + 0x184) = in_stack_00000888;
  *(ulong *)(lVar27 + 0x17c) = CONCAT44(in_stack_00000884,in_stack_00000880);
  if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  *(undefined4 *)(lVar27 + (int)*in_stack_00000148 * unaff_x27 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x254);
  if ((unaff_x19[200] == 0) || (lVar27 = *(long *)(unaff_x19[200] + 0x20), lVar27 == 0))
  goto LAB_0249920c;
  FUN_026fd62c(&stack0x00000bf8,lVar27,0);
  puVar9 = 
  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__;
  if ((int)in_stack_000017bc < 0x10000) {
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar14 = FUN_016f68bc(in_stack_000017bc,0);
    uVar14 = uVar14 & 1;
  }
  else {
    uVar14 = 0;
  }
  fStack00000000000000cc = *(float *)(unaff_x19 + 0x54);
  *(undefined4 *)((long)unaff_x19 + 0x2f4) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f1) == '\0') {
    fVar48 = 0.0;
    fVar67 = 0.0;
    fVar47 = 0.0;
  }
  else {
    if (unaff_x19[200] == 0) goto LAB_0249920c;
    uVar60 = *in_stack_00000148;
    uVar18 = *(uint *)(unaff_x19[200] + 0x28);
    if ((int)uVar60 < (int)in_stack_00000078._4_4_) {
      if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar27 + 0x18) <= uVar60 + 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar27 = *(long *)(lVar27 + (long)(int)(uVar60 + 1) * (long)iVar15 + 0x30);
      if ((((lVar27 == 0) || (*in_stack_00000138 == 0)) ||
          (lVar30 = *(long *)(*in_stack_00000138 + 0x128), lVar30 == 0)) ||
         (lVar30 = *(long *)(lVar30 + 0x18), lVar30 == 0)) goto LAB_0249920c;
      in_stack_00000880 = uVar18 | *(int *)(lVar27 + 0x28) << 0x10;
      uVar21 = FUN_0129eff4(lVar30,&stack0x00000880,&stack0x000016d8,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                           );
      uVar74 = 0;
      if ((uVar21 & 1) == 0) {
        fVar48 = 0.0;
        fVar67 = 0.0;
        fVar47 = 0.0;
      }
      else {
        if (in_stack_000016d8 == 0) goto LAB_0249920c;
        fVar47 = *(float *)(in_stack_000016d8 + 0x14);
        fVar67 = *(float *)(in_stack_000016d8 + 0x18);
        fVar48 = *(float *)(in_stack_000016d8 + 0x1c);
        uVar74 = *(undefined4 *)(in_stack_000016d8 + 0x20);
        if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
          fStack00000000000000cc = 0.0;
        }
      }
      uVar60 = *in_stack_00000148;
    }
    else {
      uVar74 = 0;
      fVar48 = 0.0;
      fVar67 = 0.0;
      fVar47 = 0.0;
    }
    if (0 < (int)uVar60) {
      if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar27 + 0x18) <= (uint)((long)(int)uVar60 + -1))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar27 = *(long *)(lVar27 + ((long)(int)uVar60 + -1) * unaff_x27 + 0x30);
      if (((lVar27 == 0) || (*in_stack_00000138 == 0)) ||
         ((lVar30 = *(long *)(*in_stack_00000138 + 0x128), lVar30 == 0 ||
          (lVar30 = *(long *)(lVar30 + 0x18), lVar30 == 0)))) goto LAB_0249920c;
      in_stack_00000880 = *(uint *)(lVar27 + 0x28) | uVar18 << 0x10;
      uVar21 = FUN_0129eff4(lVar30,&stack0x00000880,&stack0x000016d8,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                           );
      if ((uVar21 & 1) != 0) {
        if ((in_stack_000016d8 == 0) ||
           (fVar47 = (float)FUN_024bb1bc(fVar47,fVar67,fVar48,uVar74,
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
    *(float *)((long)unaff_x19 + 0x2f4) = fVar48;
  }
  if ((char)unaff_x19[0x1d] != '\0') {
    fVar71 = *(float *)(unaff_x19 + 199);
    fVar50 = (float)FUN_026fd474(&stack0x00001770,0);
    fVar71 = fVar71 - fVar73 * fVar50 * (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc));
    *(float *)(unaff_x19 + 199) = fVar71;
    if ((uVar14 != 0) || (in_stack_000017bc == 0x200b)) {
      *(float *)(unaff_x19 + 199) = fVar71 - in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac)
      ;
    }
  }
  fVar71 = *(float *)(unaff_x19 + 0x55);
  fVar50 = 0.0;
  if (fVar71 != 0.0) {
    fVar50 = (float)FUN_026fd454(&stack0x00001770,0);
    fVar51 = (float)FUN_026fd464(&stack0x00001770,0);
    fVar50 = (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (fVar71 * 0.5 - fVar73 * (fVar50 * 0.5 + fVar51));
    *(float *)(unaff_x19 + 199) = *(float *)(unaff_x19 + 199) + fVar50;
  }
  if (((cVar26 == '\0') && (*(int *)((long)unaff_x19 + 0x63c) == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x254) & 1) != 0)) {
    lVar27 = unaff_x19[0x22];
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar21 = FUN_02681b9c(lVar27,0,0);
    fVar52 = 0.0;
    if ((uVar21 & 1) != 0) {
      lVar27 = unaff_x19[0x22];
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (lVar27 == 0) goto LAB_0249920c;
      uVar21 = FUN_0267e1d8(lVar27,*(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x54),0);
      fVar52 = 0.0;
      if ((uVar21 & 1) != 0) {
        lVar27 = unaff_x19[0x22];
        if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (lVar27 == 0) goto LAB_0249920c;
        fVar71 = (float)FUN_0267f610(lVar27,*(undefined4 *)
                                             (*(long *)(*(long *)puVar9 + 0xb8) + 0x54),0);
        if ((*in_stack_00000138 == 0) || (unaff_x19[0x22] == 0)) goto LAB_0249920c;
        fVar51 = *(float *)(*in_stack_00000138 + 0x1b0);
        fVar52 = (float)FUN_0267f610(unaff_x19[0x22],
                                     *(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xcc),0);
        fVar52 = fVar52 * fVar71 * fVar51 * 0.25;
        if (fVar71 < in_stack_00000128 + fVar52) {
          in_stack_00000128 = fVar71 - fVar52;
        }
      }
    }
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar71 = *(float *)(*in_stack_00000138 + 0x1b4);
  }
  else {
    lVar27 = unaff_x19[0x22];
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar21 = FUN_02681b9c(lVar27,0,0);
    fVar71 = 0.0;
    if ((uVar21 & 1) != 0) {
      lVar27 = unaff_x19[0x22];
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (lVar27 == 0) goto LAB_0249920c;
      uVar21 = FUN_0267e1d8(lVar27,*(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x54),0);
      if ((uVar21 & 1) != 0) {
        lVar27 = unaff_x19[0x22];
        if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (lVar27 == 0) goto LAB_0249920c;
        uVar21 = FUN_0267e1d8(lVar27,*(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xcc),0);
        if ((uVar21 & 1) != 0) {
          lVar27 = unaff_x19[0x22];
          if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (lVar27 == 0) goto LAB_0249920c;
          fVar51 = (float)FUN_0267f610(lVar27,*(undefined4 *)
                                               (*(long *)(*(long *)puVar9 + 0xb8) + 0x54),0);
          if ((*in_stack_00000138 == 0) || (unaff_x19[0x22] == 0)) goto LAB_0249920c;
          fVar64 = *(float *)(*in_stack_00000138 + 0x1a8);
          fVar52 = (float)FUN_0267f610(unaff_x19[0x22],
                                       *(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xcc),0);
          fVar52 = fVar52 * fVar51 * fVar64 * 0.25;
          if (fVar51 < in_stack_00000128 + fVar52) {
            in_stack_00000128 = fVar51 - fVar52;
          }
          goto LAB_024934bc;
        }
      }
    }
    fVar52 = 0.0;
  }
LAB_024934bc:
  fVar65 = *(float *)(unaff_x19 + 199);
  fVar51 = (float)FUN_026fd464(&stack0x00001770,0);
  fVar65 = fVar65 + (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
                    fVar73 * (fVar47 + ((fVar51 - in_stack_00000128) - fVar52));
  fVar47 = (float)FUN_026fd46c(&stack0x00001770,0);
  fVar64 = *(float *)((long)unaff_x19 + 0x614) +
           ((fStack0000000000000134 + fVar73 * (fVar67 + in_stack_00000128 + fVar47)) -
           *(float *)(unaff_x19 + 0x9a));
  fVar47 = (float)FUN_026fd45c(&stack0x00001770,0);
  fVar68 = fVar64 - fVar73 * (in_stack_00000128 + in_stack_00000128 + fVar47);
  fVar47 = (float)FUN_026fd454(&stack0x00001770,0);
  fVar51 = fVar65 + (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
                    fVar73 * (fVar52 + fVar52 + in_stack_00000128 + in_stack_00000128 + fVar47);
  fVar47 = fVar65;
  fVar67 = fVar51;
  if (((*(int *)((long)unaff_x19 + 0x63c) == 0) && (cVar26 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x254) >> 1 & 1) != 0)) {
    fVar62 = (float)(int)unaff_x19[0xbd] * fStack000000000000004c;
    fVar47 = (float)FUN_026fd46c(&stack0x00001770,0);
    fVar55 = fVar62 * fVar73 * (fVar52 + in_stack_00000128 + fVar47);
    fVar47 = (float)FUN_026fd46c(&stack0x00001770,0);
    fVar67 = (float)FUN_026fd45c(&stack0x00001770,0);
    fVar64 = fVar64 + 0.0;
    fVar68 = fVar68 + 0.0;
    fVar62 = fVar62 * fVar73 * (((fVar47 - fVar67) - in_stack_00000128) - fVar52);
    fVar67 = fVar51 + fVar62;
    fVar47 = fVar65 + fVar55;
    fVar54 = (fVar55 - fVar62) * 0.5;
    fVar65 = (fVar65 + fVar62) - fVar54;
    fVar51 = (fVar51 + fVar55) - fVar54;
    fVar47 = fVar47 - fVar54;
    fVar67 = fVar67 - fVar54;
  }
  if (*(char *)((long)unaff_x19 + 0x46c) == '\0') {
    fVar55 = 0.0;
    fVar56 = 0.0;
    fVar66 = 0.0;
    fVar54 = 0.0;
    fVar75 = fVar68;
    fVar62 = fVar64;
    fStack00000000000000e8 = fVar47;
    fStack00000000000000ec = fVar65;
  }
  else {
    thunk_FUN_026935f0(_uStack0000000000000060,0);
    fVar69 = (fVar51 + fVar65) * 0.5;
    fVar72 = (fVar68 + fVar64) * 0.5;
    fVar64 = fVar64 - fVar72;
    fVar54 = 0.0;
    fVar62 = fVar64;
    fVar53 = (float)FUN_02692df0(fVar47 - fVar69,_uStack0000000000000060,0);
    fVar54 = fVar54 + 0.0;
    fVar68 = fVar68 - fVar72;
    fVar55 = 0.0;
    fVar47 = fVar68;
    fVar65 = (float)FUN_02692df0(fVar65 - fVar69,_uStack0000000000000060,0);
    fVar55 = fVar55 + 0.0;
    fVar66 = 0.0;
    fVar51 = (float)FUN_02692df0(fVar51 - fVar69,_uStack0000000000000060,0);
    fVar51 = fVar69 + fVar51;
    fVar64 = fVar72 + fVar64;
    fVar66 = fVar66 + 0.0;
    fVar56 = 0.0;
    fVar67 = (float)FUN_02692df0(fVar67 - fVar69,_uStack0000000000000060,0);
    fVar67 = fVar69 + fVar67;
    fVar68 = fVar72 + fVar68;
    fVar56 = fVar56 + 0.0;
    fVar75 = fVar72 + fVar47;
    fVar62 = fVar72 + fVar62;
    fStack00000000000000e8 = fVar69 + fVar53;
    fStack00000000000000ec = fVar69 + fVar65;
  }
  if (*in_stack_00000150 == 0) goto LAB_0249920c;
  lVar27 = *(long *)(*in_stack_00000150 + 0x38);
  unaff_d13 = (ulong)(uint)fVar73;
  if (lVar27 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar27 = lVar27 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar27 + 0x120) = fVar75;
  *(float *)(lVar27 + 0x11c) = fStack00000000000000ec;
  *(float *)(lVar27 + 0x124) = fVar55;
  if (*in_stack_00000150 == 0) goto LAB_0249920c;
  lVar27 = *(long *)(*in_stack_00000150 + 0x38);
  unaff_s12 = 1.0;
  if (lVar27 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar27 = lVar27 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar27 + 0x114) = fVar62;
  *(float *)(lVar27 + 0x110) = fStack00000000000000e8;
  *(float *)(lVar27 + 0x118) = fVar54;
  if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar27 = lVar27 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar27 + 0x128) = fVar51;
  *(float *)(lVar27 + 300) = fVar64;
  *(float *)(lVar27 + 0x130) = fVar66;
  if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar27 = lVar27 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar27 + 0x134) = fVar67;
  *(float *)(lVar27 + 0x138) = fVar68;
  *(float *)(lVar27 + 0x13c) = fVar56;
  if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
  goto LAB_0249920c;
  uVar18 = *in_stack_00000148;
  lVar30 = (long)(int)uVar18;
  if (*(uint *)(lVar27 + 0x18) <= uVar18)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar44 = lVar27 + lVar30 * unaff_x27;
  *(int *)(lVar44 + 0x140) = (int)unaff_x19[199];
  fVar67 = *(float *)(unaff_x19 + 0x9a);
  param_2 = (ulong)(uint)fVar67;
  fVar47 = *(float *)((long)unaff_x19 + 0x614);
  *(float *)(lVar44 + 0x15c) = (fVar51 - fStack00000000000000ec) / (fVar62 - fVar75);
  *(float *)(lVar44 + 0x14c) = (fStack0000000000000134 - fVar67) + fVar47;
  fVar49 = fVar49 * fVar73;
  if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
    fVar49 = fVar49 / fStack00000000000000f4;
    fVar70 = (fVar70 * fVar73) / fStack00000000000000f4;
  }
  else {
    fVar70 = fVar70 * fVar73;
  }
  uVar60 = *(uint *)(unaff_x19 + 0x92);
  bVar11 = uVar14 != 0;
  fVar49 = fVar47 + fVar49;
  bVar12 = uVar18 != uVar60;
  if (bVar12 && bVar11) {
    fVar47 = *(float *)(unaff_x19 + 0x98);
    lVar27 = lVar27 + lVar30 * unaff_x27;
    *(float *)(lVar27 + 0x154) = fVar47;
    fVar70 = *(float *)((long)unaff_x19 + 0x4c4);
    *(float *)(lVar27 + 0x148) = fVar47 - fVar67;
    *(float *)(lVar27 + 0x158) = fVar70;
    *(float *)(unaff_x19 + 0x97) = fVar47 - fVar67;
    fVar70 = fVar70 - fVar67;
    *(float *)(lVar27 + 0x150) = fVar70;
  }
  else {
    fVar70 = fVar47 + fVar70;
    fVar51 = fVar49;
    fVar64 = fVar70;
    if (fVar47 != 0.0) {
      fVar51 = (fVar49 - fVar47) / *(float *)((long)unaff_x19 + 0x3fc);
      fVar64 = (fVar70 - fVar47) / *(float *)((long)unaff_x19 + 0x3fc);
      if (fVar51 <= fVar49) {
        fVar51 = fVar49;
      }
      if (fVar70 <= fVar64) {
        fVar64 = fVar70;
      }
    }
    lVar27 = lVar27 + lVar30 * unaff_x27;
    fVar47 = fVar51;
    if (fVar51 <= *(float *)(unaff_x19 + 0x98)) {
      fVar47 = *(float *)(unaff_x19 + 0x98);
    }
    fVar68 = fVar64;
    if (*(float *)((long)unaff_x19 + 0x4c4) <= fVar64) {
      fVar68 = *(float *)((long)unaff_x19 + 0x4c4);
    }
    *(float *)((long)unaff_x19 + 0x4c4) = fVar68;
    fVar70 = fVar70 - fVar67;
    *(float *)(unaff_x19 + 0x98) = fVar47;
    *(float *)(lVar27 + 0x154) = fVar51;
    *(float *)(lVar27 + 0x158) = fVar64;
    *(float *)(lVar27 + 0x148) = fVar49 - fVar67;
    *(float *)(unaff_x19 + 0x97) = fVar49 - fVar67;
    *(float *)(lVar27 + 0x150) = fVar70;
  }
  *(float *)((long)unaff_x19 + 0x4bc) = fVar70;
  if (((int)unaff_x19[0x94] == 0) || (*(char *)((long)unaff_x19 + 0x334) != '\0')) {
    if (!bVar12 || !bVar11) {
      *(float *)(unaff_x19 + 0x96) = fVar47;
      if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
      fVar47 = *(float *)((long)unaff_x19 + 0x4b4);
      fVar67 = (float)FUN_026fd150(unaff_x19[0x1f] + 0x50,0);
      fStack00000000000000f4 = (fVar73 * fVar67) / fStack00000000000000f4;
      param_2 = (ulong)*(uint *)(unaff_x19 + 0x9a);
      if (fVar47 <= fStack00000000000000f4) {
        fVar47 = fStack00000000000000f4;
      }
      *(float *)((long)unaff_x19 + 0x4b4) = fVar47;
      goto LAB_02493948;
    }
  }
  else {
LAB_02493948:
    if ((!bVar12 || !bVar11) && (float)param_2 == 0.0) {
      fVar47 = *(float *)(in_stack_00000070 + 0x208);
      if (*(float *)(in_stack_00000070 + 0x208) <= fVar49) {
        fVar47 = fVar49;
      }
      *(float *)(in_stack_00000070 + 0x208) = fVar47;
    }
  }
  lVar27 = *in_stack_00000150;
  if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x38), lVar30 == 0)) goto LAB_0249920c;
  uVar36 = *in_stack_00000148;
  if (*(uint *)(lVar30 + 0x18) <= uVar36)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar30 = lVar30 + (int)uVar36 * unaff_x27;
  *(undefined1 *)(lVar30 + 0x194) = 0;
  uVar33 = *(uint *)(unaff_x19 + 0x4e);
  if ((in_stack_000017bc == 9) ||
     (((((uVar14 == 0 && (in_stack_000017bc != 3)) && (in_stack_000017bc != 0x200b)) &&
       (in_stack_000017bc != 0xad)) ||
      (((in_stack_000017bc == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) != 0 ||
       (*(int *)((long)unaff_x19 + 0x63c) == 1)))))) {
    *(undefined1 *)(lVar30 + 0x194) = 1;
    pfVar31 = _fStack0000000000000088;
    pfVar34 = _fStack0000000000000098;
    if (bVar7) {
      lVar27 = *(long *)(lVar27 + 0x50);
      if (lVar27 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      pfVar34 = (float *)(lVar27 + 0x60);
      pfVar31 = (float *)(lVar27 + 100);
    }
    fVar67 = *pfVar34;
    fVar70 = *pfVar31;
    fVar47 = *(float *)(unaff_x19 + 0x6b);
    fVar49 = *(float *)(unaff_x19 + 199);
    fStack00000000000000d4 = (in_stack_00000090 - fVar67) - fVar70;
    bVar11 = true;
    if ((fVar47 <= fStack00000000000000d4) && (bVar11 = false, !NAN(fVar47))) {
      bVar11 = fVar47 == -1.0;
    }
    if (!bVar11) {
      fStack00000000000000d4 = fVar47;
    }
    fVar47 = 0.0;
    if ((char)unaff_x19[0x1d] == '\0') {
      fVar47 = (float)FUN_026fd474(&stack0x00001770,0);
      param_2 = (ulong)*(uint *)(unaff_x19 + 0x9a);
    }
    fVar68 = *(float *)((long)unaff_x19 + 0x4c4);
    fVar51 = *(float *)((long)unaff_x19 + 0x2cc);
    fVar64 = (float)param_2;
    if (in_stack_000017bc != 0xad) {
      fVar63 = fVar73;
    }
    fVar65 = 0.0;
    if ((0.0 < fVar64) && (fVar65 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
      fVar65 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
    }
    fVar65 = (*(float *)(unaff_x19 + 0x96) - (fVar68 - fVar64)) + fVar65;
    uVar36 = *in_stack_00000148;
    if (fStack00000000000000a4 < fVar65) {
      if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
        *(uint *)((long)unaff_x19 + 0x2dc) = uVar36;
      }
      plVar42 = (long *)StringLiteral_302;
      unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
      uVar19 = DAT_02941c08;
      if ((char)unaff_x19[0x46] != '\0') {
        fVar62 = *(float *)(unaff_x19 + 0x58);
        if (((fVar62 < *(float *)((long)unaff_x19 + 0x2b4)) && (0.0 < fVar64)) &&
           (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
          fVar63 = *(float *)((long)unaff_x19 + 0x2b4) +
                   ((in_stack_00000018._4_4_ - fVar65) / (float)(int)unaff_x19[0x94]) /
                   fStack0000000000000054;
          if (fVar63 <= fVar62) {
            fVar63 = fVar62;
          }
          goto LAB_024964c8;
        }
        fVar65 = *(float *)((long)unaff_x19 + 0x1dc);
        fVar64 = *(float *)(unaff_x19 + 0x49);
        param_2 = (ulong)(uint)fVar64;
        if ((fVar64 < fVar65) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
          fVar63 = (fVar65 - *(float *)(unaff_x19 + 0x47)) * 0.5;
          if (fVar63 <= DAT_028aa298) {
            fVar63 = DAT_028aa298;
          }
          fVar73 = (fVar65 - fVar63) * 20.0 + 0.5;
          fVar63 = DAT_02958220;
          if (fVar73 != INFINITY) {
            fVar63 = (float)(int)fVar73 / 20.0;
          }
          if (fVar63 <= fVar64) {
            fVar63 = fVar64;
          }
          *(float *)((long)unaff_x19 + 0x234) = fVar65;
          goto LAB_02495fd8;
        }
      }
      switch((int)unaff_x19[0x5b]) {
      case 1:
        lVar27 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar27 = *unaff_x29;
        }
        lVar30 = *(long *)(lVar27 + 0xb8);
        lVar27 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
        if ((*(byte *)(lVar27 + 0x132) & 1) == 0) {
          lVar27 = FUN_00d5941c(lVar27);
        }
        plVar42 = (long *)StringLiteral_302;
        lVar27 = *(long *)(*(long *)(lVar27 + 0xc0) + 8);
        if ((*(byte *)(lVar27 + 0x132) & 1) == 0) {
          lVar27 = FUN_00d5941c();
        }
        piVar23 = (int *)thunk_FUN_00d32ed4(lVar30 + 0x11f0,*(long *)(lVar27 + 0x80) + 0xa0);
        if (*piVar23 == 0) goto LAB_02495f00;
        lVar27 = *unaff_x29;
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar27 = *unaff_x29;
        }
        FUN_013b8de4(*(long *)(lVar27 + 0xb8) + 0x11f0,&stack0x00000880,
                     *(undefined8 *)
                      Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                    );
        memcpy(&stack0x00001360,&stack0x00000880,0x378);
        break;
      default:
        goto 
        UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor__get_playHapticsOnHoverExited;
      case 3:
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
LAB_02493ec0:
        plVar42 = (long *)StringLiteral_302;
        in_stack_00001788 = FUN_024d66ec();
        goto LAB_0249408c;
      case 5:
        if ((uVar36 != 0) && (-1 < (int)in_stack_00001788)) {
          fVar63 = *(float *)(unaff_x19 + 0x98);
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          in_stack_00001788 = FUN_024d66ec();
          if (fVar63 - fVar68 <= fStack00000000000000a4) {
            *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
            *(undefined4 *)(unaff_x19 + 0x92) = *(undefined4 *)((long)unaff_x19 + 0x48c);
            param_2 = *(ulong *)(*(long *)(*unaff_x29 + 0xb8) + 0x15a8);
            *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
            *(undefined4 *)(unaff_x19 + 0x99) = 0;
            lVar27 = NEON_rev64(param_2,4);
            unaff_x19[0x98] = lVar27;
            *(undefined4 *)(unaff_x19 + 0x9a) = 0;
            *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
            *(int *)(unaff_x19 + 0x94) = (int)unaff_x19[0x94] + 1;
            *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
            goto LAB_02492630;
          }
          goto LAB_0249408c;
        }
        in_stack_00001788 = 0xffffffff;
        *in_stack_00000148 = 0;
        in_stack_000017a8 = uVar19;
        goto LAB_024944c4;
      case 6:
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        plVar42 = (long *)StringLiteral_302;
        lVar27 = unaff_x19[0x5c];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            );
        }
        uVar21 = FUN_02681b9c(lVar27,0,0);
        if ((uVar21 & 1) != 0) {
          plVar45 = (long *)unaff_x19[0x5c];
          uVar19 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar45 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar45 + 0x558))(plVar45,uVar19,*(undefined8 *)(*plVar45 + 0x560));
          lVar27 = unaff_x19[0x5c];
          if (lVar27 == 0) goto LAB_0249920c;
          *(int *)(lVar27 + 0x3f8) = (int)unaff_x19[0x7f];
          FUN_024c910c(lVar27,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
          plVar45 = (long *)unaff_x19[0x5c];
          if (plVar45 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar45 + 0x7d8))(plVar45,0,0,*(undefined8 *)(*plVar45 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        }
        goto LAB_0249408c;
      }
LAB_02494358:
      iVar15 = FUN_024d66ec();
      goto LAB_02494364;
    }
UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor__get_playHapticsOnHoverExited:
    unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
    fVar64 = 1.0 - fVar51;
    param_2 = (ulong)(uint)fVar64;
    fVar47 = ABS(fVar49) + fVar47 * fVar64 * fVar63;
    fVar63 = _DAT_0294c6e8;
    if ((uVar33 & 0x18) == 0) {
      fVar63 = 1.0;
    }
    if (fVar63 * fStack00000000000000d4 < fVar47) {
      if (((char)unaff_x19[0x5a] == '\0') || (uVar36 == *(uint *)(unaff_x19 + 0x92))) {
        if (((char)unaff_x19[0x46] == '\0') ||
           ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c))) {
LAB_02493e34:
          iVar13 = (int)unaff_x19[0x5b];
          if (iVar13 == 1) {
            lVar27 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar27 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar27 = *unaff_x29;
            }
            plVar42 = (long *)StringLiteral_302;
            lVar30 = *(long *)(lVar27 + 0xb8);
            lVar27 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
            if ((*(byte *)(lVar27 + 0x132) & 1) == 0) {
              lVar27 = FUN_00d5941c(lVar27);
            }
            lVar27 = *(long *)(*(long *)(lVar27 + 0xc0) + 8);
            if ((*(byte *)(lVar27 + 0x132) & 1) == 0) {
              lVar27 = FUN_00d5941c();
            }
            piVar23 = (int *)thunk_FUN_00d32ed4(lVar30 + 0x11f0,*(long *)(lVar27 + 0x80) + 0xa0);
            if (*piVar23 == 0) goto LAB_02495f00;
            lVar27 = *unaff_x29;
            if (*(int *)(lVar27 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar27 = *unaff_x29;
            }
            FUN_013b8de4(*(long *)(lVar27 + 0xb8) + 0x11f0,&stack0x00000880,
                         *(undefined8 *)
                          Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                        );
            memcpy(&stack0x00000c70,&stack0x00000880,0x378);
            goto LAB_02494358;
          }
          if (iVar13 == 6) {
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            plVar42 = (long *)StringLiteral_302;
            in_stack_00001788 = FUN_024d66ec();
            lVar27 = unaff_x19[0x5c];
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)
                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                );
            }
            uVar21 = FUN_02681b9c(lVar27,0,0);
            if ((uVar21 & 1) != 0) {
              plVar45 = (long *)unaff_x19[0x5c];
              uVar19 = (**(code **)(*unaff_x19 + 0x548))();
              if (plVar45 == (long *)0x0) goto LAB_0249920c;
              (**(code **)(*plVar45 + 0x558))(plVar45,uVar19,*(undefined8 *)(*plVar45 + 0x560));
              lVar27 = unaff_x19[0x5c];
              if (lVar27 == 0) goto LAB_0249920c;
              *(int *)(lVar27 + 0x3f8) = (int)unaff_x19[0x7f];
              FUN_024c910c(lVar27,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
              plVar45 = (long *)unaff_x19[0x5c];
              if (plVar45 == (long *)0x0) goto LAB_0249920c;
              (**(code **)(*plVar45 + 0x7d8))(plVar45,0,0,*(undefined8 *)(*plVar45 + 0x7e0));
              *(undefined1 *)(unaff_x19 + 0x5e) = 1;
            }
            goto LAB_02494484;
          }
          if (iVar13 == 3) {
            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            goto LAB_02493ec0;
          }
          goto LAB_02494950;
        }
        fVar49 = *(float *)(unaff_x19 + 0x59) / 100.0;
        if (fVar51 < fVar49) {
          fVar73 = fVar47 / fVar64;
          if (fVar51 <= 0.0) {
            fVar73 = fVar47;
          }
          fVar51 = fVar51 + (fVar47 - fVar63 * (fStack00000000000000d4 + DAT_02958218)) / fVar73;
          goto LAB_0249929c;
        }
        fVar51 = *(float *)((long)unaff_x19 + 0x1dc);
        param_2 = (ulong)(uint)fVar51;
        fVar49 = *(float *)(unaff_x19 + 0x49);
        if (fVar51 <= fVar49) goto LAB_02493e34;
LAB_02499210:
        fVar63 = (fVar51 - *(float *)(unaff_x19 + 0x47)) * 0.5;
        if (fVar63 <= DAT_028aa298) {
          fVar63 = DAT_028aa298;
        }
        *(float *)((long)unaff_x19 + 0x234) = fVar51;
        fVar73 = (fVar51 - fVar63) * 20.0 + 0.5;
        fVar63 = DAT_02958220;
        if (fVar73 != INFINITY) {
          fVar63 = (float)(int)fVar73 / 20.0;
        }
        if (fVar63 <= fVar49) {
          fVar63 = fVar49;
        }
LAB_02495fd8:
        *(float *)((long)unaff_x19 + 0x1dc) = fVar63;
        return;
      }
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      in_stack_00001788 = FUN_024d66ec();
      if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
        lVar27 = *in_stack_00000150;
        if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x38), lVar30 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar30 + 0x18) <= *in_stack_00000148)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar49 = *(float *)(unaff_x19 + 0x9a);
        fVar51 = 0.0;
        if ((0.0 < fVar49) && (fVar51 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
          fVar51 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
        }
        fVar51 = in_stack_000000c8 * *(float *)(unaff_x19 + 0x56) +
                 *(float *)(lVar30 + (int)*in_stack_00000148 * unaff_x27 + 0x154) +
                 (fVar51 - *(float *)((long)unaff_x19 + 0x4c4)) +
                 fStack0000000000000054 *
                 (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4));
      }
      else {
        lVar27 = unaff_x19[0x6c];
        *(undefined1 *)((long)unaff_x19 + 700) = 1;
        if (lVar27 == 0) goto LAB_0249920c;
        fVar49 = *(float *)(unaff_x19 + 0x9a);
        fVar51 = *(float *)(unaff_x19 + 0x57) + in_stack_000000c8 * *(float *)(unaff_x19 + 0x56);
      }
      puVar9 = System_Threading_Mutex_TypeInfo;
      lVar27 = *(long *)(lVar27 + 0x38);
      if (lVar27 == 0) goto LAB_0249920c;
      uVar43 = *(uint *)((long)unaff_x19 + 0x48c);
      if ((*(uint *)(lVar27 + 0x18) <= uVar43) ||
         (uVar6 = uVar43 - 1, *(uint *)(lVar27 + 0x18) <= uVar6))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      param_2 = (ulong)(uint)(fVar51 + *(float *)(unaff_x19 + 0x96));
      fVar64 = (fVar51 + *(float *)(unaff_x19 + 0x96) + fVar49) -
               *(float *)(lVar27 + (int)uVar43 * unaff_x27 + 0x158);
      if (((in_stack_00000068._4_1_ & 1) == 0 &&
           *(short *)(lVar27 + (long)(int)uVar6 * (long)iVar15 + 0x20) == 0xad) &&
         ((fVar64 < fStack00000000000000a4 || ((int)unaff_x19[0x5b] == 0)))) {
        *in_stack_00000148 = uVar6;
LAB_024947b4:
        in_stack_000017a8 = CONCAT44(0x2d,uVar6);
        in_stack_00001788 = in_stack_00001788 - 1;
        in_stack_00000068._4_1_ = 0;
LAB_02494938:
        unaff_s12 = 1.0;
        plVar42 = (long *)StringLiteral_302;
        unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
        goto LAB_02492630;
      }
      if (*(short *)(lVar27 + (int)uVar43 * unaff_x27 + 0x20) == 0xad) {
        in_stack_00000068._4_1_ = 1;
        goto LAB_02494938;
      }
      if ((bStack000000000000005c & *(byte *)(unaff_x19 + 0x46) & 1) != 0) {
        fVar51 = *(float *)((long)unaff_x19 + 0x2cc);
        fVar49 = *(float *)(unaff_x19 + 0x59) / 100.0;
        if ((fVar49 <= fVar51) || ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c))) {
          fVar51 = *(float *)((long)unaff_x19 + 0x1dc);
          param_2 = (ulong)(uint)fVar51;
          fVar49 = *(float *)(unaff_x19 + 0x49);
          if ((fVar49 < fVar51) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
          goto LAB_02499210;
          goto LAB_024946c0;
        }
LAB_024992ac:
        fVar73 = fVar47;
        if (0.0 < fVar51) {
          fVar73 = fVar47 / (1.0 - fVar51);
        }
        fVar51 = fVar51 + (fVar47 - fVar63 * (fStack00000000000000d4 + DAT_02958218)) / fVar73;
LAB_0249929c:
        if (fVar49 <= fVar51) {
          fVar51 = fVar49;
        }
        *(float *)((long)unaff_x19 + 0x2cc) = fVar51;
        return;
      }
LAB_024946c0:
      lVar27 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar27 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar27 = *(long *)puVar9;
      }
      iVar13 = *(int *)(*(long *)(lVar27 + 0xb8) + 0xe78);
      if ((((float)iVar13 != fStack0000000000000034) && (iVar13 != -1)) &&
         (((bStack000000000000005c ^ 1) & 1) == 0)) {
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        if ((unaff_x19[0x6c] == 0) || (lVar27 = *(long *)(unaff_x19[0x6c] + 0x38), lVar27 == 0))
        goto LAB_0249920c;
        uVar6 = *in_stack_00000148 - 1;
        if (*(uint *)(lVar27 + 0x18) <= uVar6)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fStack0000000000000034 = (float)iVar13;
        if (*(short *)(lVar27 + (long)(int)uVar6 * (long)iVar15 + 0x20) == 0xad) {
          *in_stack_00000148 = uVar6;
          goto LAB_024947b4;
        }
      }
      if (fVar64 <= fStack00000000000000a4) {
        param_2 = unaff_d13;
        FUN_024d7014(fStack0000000000000054,unaff_d13,in_stack_000000c8,
                     *(undefined4 *)((long)unaff_x19 + 0x2f4),fVar71,fStack00000000000000cc,
                     fStack00000000000000d4,fStack0000000000000048);
        bStack000000000000005c = 1;
        in_stack_00000068._4_1_ = 0;
        fStack0000000000000058 = 1.4013e-45;
        goto LAB_02494938;
      }
      if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
        *(undefined4 *)((long)unaff_x19 + 0x2dc) = *(undefined4 *)((long)unaff_x19 + 0x48c);
      }
      plVar42 = (long *)StringLiteral_302;
      unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
      if ((char)unaff_x19[0x46] != '\0') {
        fVar49 = *(float *)(unaff_x19 + 0x58);
        if ((fVar49 < *(float *)((long)unaff_x19 + 0x2b4)) &&
           (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
          fVar63 = *(float *)((long)unaff_x19 + 0x2b4) +
                   ((in_stack_00000018._4_4_ - fVar64) / (float)((int)unaff_x19[0x94] + 1)) /
                   fStack0000000000000054;
          if (fVar63 <= fVar49) {
            fVar63 = fVar49;
          }
LAB_024964c8:
          *(float *)((long)unaff_x19 + 0x2b4) = fVar63;
          return;
        }
        fVar51 = *(float *)((long)unaff_x19 + 0x2cc);
        fVar49 = *(float *)(unaff_x19 + 0x59) / 100.0;
        if ((fVar51 < fVar49) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
        goto LAB_024992ac;
        fVar51 = *(float *)((long)unaff_x19 + 0x1dc);
        param_2 = (ulong)(uint)fVar51;
        fVar49 = *(float *)(unaff_x19 + 0x49);
        if ((fVar49 < fVar51) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
        goto LAB_02499210;
      }
      switch((int)unaff_x19[0x5b]) {
      case 0:
      case 2:
      case 4:
        param_2 = unaff_d13;
        FUN_024d7014(fStack0000000000000054,unaff_d13,in_stack_000000c8,
                     *(undefined4 *)((long)unaff_x19 + 0x2f4),fVar71,fStack00000000000000cc,
                     fStack00000000000000d4,fStack0000000000000048);
        break;
      case 1:
        lVar27 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar27 = *unaff_x29;
        }
        lVar30 = *(long *)(lVar27 + 0xb8);
        lVar27 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
        if ((*(byte *)(lVar27 + 0x132) & 1) == 0) {
          lVar27 = FUN_00d5941c(lVar27);
        }
        lVar27 = *(long *)(*(long *)(lVar27 + 0xc0) + 8);
        if ((*(byte *)(lVar27 + 0x132) & 1) == 0) {
          lVar27 = FUN_00d5941c();
        }
        piVar23 = (int *)thunk_FUN_00d32ed4(lVar30 + 0x11f0,*(long *)(lVar27 + 0x80) + 0xa0);
        if (*piVar23 == 0) {
          in_stack_00000068._4_1_ = 0;
LAB_02495f00:
          in_stack_000017a8 = DAT_02941c08;
          unaff_s12 = 1.0;
          in_stack_00000148[0] = 0;
          in_stack_00000148[1] = 0;
          in_stack_00001788 = 0xffffffff;
          goto LAB_02492630;
        }
        lVar27 = *unaff_x29;
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar27 = *unaff_x29;
        }
        FUN_013b8de4(*(long *)(lVar27 + 0xb8) + 0x11f0,&stack0x00000880,
                     *(undefined8 *)
                      Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                    );
        memcpy(&stack0x00000fe8,&stack0x00000880,0x378);
        iVar15 = FUN_024d66ec();
        in_stack_00000068._4_1_ = 0;
LAB_02494364:
        unaff_s12 = 1.0;
        iVar13 = *(int *)((long)unaff_x19 + 0x48c) + -1;
        *(int *)((long)unaff_x19 + 0x48c) = iVar13;
        in_stack_000017a8 = CONCAT44(0x2026,iVar13);
        in_stack_00000140 = in_stack_00000140 + 1;
        in_stack_00001788 = iVar15 - 1;
        goto LAB_02492630;
      case 3:
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        in_stack_00000068._4_1_ = 0;
LAB_0249408c:
        unaff_s12 = 1.0;
        in_stack_000017a8 = CONCAT44(3,uVar36);
        goto LAB_02492630;
      case 5:
        *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
        param_2 = unaff_d13;
        FUN_024d7014(fStack0000000000000054,unaff_d13,in_stack_000000c8,
                     *(undefined4 *)((long)unaff_x19 + 0x2f4),fVar71,fStack00000000000000cc,
                     fStack00000000000000d4,fStack0000000000000048);
        *(undefined4 *)(unaff_x19 + 0x99) = 0;
        *(undefined4 *)(unaff_x19 + 0x9a) = 0;
        *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
        *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
        break;
      case 6:
        lVar27 = unaff_x19[0x5c];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar21 = FUN_02681b9c(lVar27,0,0);
        if ((uVar21 & 1) != 0) {
          plVar45 = (long *)unaff_x19[0x5c];
          uVar19 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar45 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar45 + 0x558))(plVar45,uVar19,*(undefined8 *)(*plVar45 + 0x560));
          lVar27 = unaff_x19[0x5c];
          if (lVar27 == 0) goto LAB_0249920c;
          *(int *)(lVar27 + 0x3f8) = (int)unaff_x19[0x7f];
          FUN_024c910c(lVar27,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
          plVar45 = (long *)unaff_x19[0x5c];
          if (plVar45 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar45 + 0x7d8))(plVar45,0,0,*(undefined8 *)(*plVar45 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        }
        in_stack_00000068._4_1_ = 0;
LAB_02494484:
        unaff_s12 = 1.0;
        in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
        goto LAB_02492630;
      default:
        in_stack_00000068._4_1_ = 0;
        goto LAB_02494950;
      }
      in_stack_00000068._4_1_ = 0;
      bStack000000000000005c = 1;
      fStack0000000000000058 = 1.4013e-45;
LAB_024944c4:
      unaff_s12 = 1.0;
      plVar42 = (long *)StringLiteral_302;
      unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
      goto LAB_02492630;
    }
LAB_02494950:
    if (in_stack_000017bc != 0xad) {
      if (in_stack_000017bc != 9) {
        if (*(int *)((long)unaff_x19 + 0x63c) == 1) {
          (**(code **)(*unaff_x19 + 0x8c8))();
        }
        else if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
          (**(code **)(*unaff_x19 + 0x8b8))(in_stack_00000128,fVar52);
        }
        uVar36 = *in_stack_00000148;
        if (((uint)fStack0000000000000058 & 1) != 0) {
          *(uint *)(in_stack_00000070 + 0x1f0) = uVar36;
        }
        *(uint *)((long)unaff_x19 + 0x49c) = uVar36;
        *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
        if ((unaff_x19[0x6c] == 0) || (lVar27 = *(long *)(unaff_x19[0x6c] + 0x50), lVar27 == 0))
        goto LAB_0249920c;
        if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
        fStack0000000000000058 = 0.0;
        *(float *)(lVar27 + 0x60) = fVar67;
        *(float *)(lVar27 + 100) = fVar70;
        goto LAB_02494abc;
      }
      lVar27 = *in_stack_00000150;
      if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x38), lVar30 == 0)) goto LAB_0249920c;
      uVar36 = *in_stack_00000148;
      if (*(uint *)(lVar30 + 0x18) <= uVar36)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      *(undefined1 *)(lVar30 + (int)uVar36 * unaff_x27 + 0x194) = 0;
      *(uint *)((long)unaff_x19 + 0x49c) = uVar36;
      lVar30 = *(long *)(lVar27 + 0x50);
      if (lVar30 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      *(int *)(lVar30 + 0x2c) = *(int *)(lVar30 + 0x2c) + 1;
      goto LAB_024949c4;
    }
    if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(undefined1 *)(lVar27 + (int)*in_stack_00000148 * unaff_x27 + 0x194) = 0;
  }
  else {
    if (((in_stack_000017bc & 0xfffffffe) == 10) && ((int)unaff_x19[0x5b] == 6)) {
      fVar47 = (float)param_2;
      fVar63 = 0.0;
      if ((0.0 < fVar47) && (fVar63 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
        fVar63 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
      }
      param_2 = (ulong)(uint)fStack00000000000000a4;
      if (fStack00000000000000a4 <
          (*(float *)(unaff_x19 + 0x96) - (*(float *)((long)unaff_x19 + 0x4c4) - fVar47)) + fVar63)
      {
        if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
          *(uint *)((long)unaff_x19 + 0x2dc) = uVar36;
        }
        plVar42 = (long *)StringLiteral_302;
        unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        lVar27 = unaff_x19[0x5c];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            );
        }
        uVar21 = FUN_02681b9c(lVar27,0,0);
        if ((uVar21 & 1) != 0) {
          plVar45 = (long *)unaff_x19[0x5c];
          uVar19 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar45 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar45 + 0x558))(plVar45,uVar19,*(undefined8 *)(*plVar45 + 0x560));
          lVar27 = unaff_x19[0x5c];
          if (lVar27 == 0) goto LAB_0249920c;
          *(int *)(lVar27 + 0x3f8) = (int)unaff_x19[0x7f];
          FUN_024c910c(lVar27,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
          plVar45 = (long *)unaff_x19[0x5c];
          if (plVar45 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar45 + 0x7d8))(plVar45,0,0,*(undefined8 *)(*plVar45 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        }
        in_stack_000017a8 = CONCAT44(3,uVar36);
        goto LAB_02492630;
      }
    }
    if ((((in_stack_000017bc - 0x2007 < 0x23) &&
         ((1L << ((ulong)(in_stack_000017bc - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
        (in_stack_000017bc - 10 < 2)) || (in_stack_000017bc == 0xa0)) {
LAB_024944e4:
      if (((in_stack_000017bc != 0xad) && (in_stack_000017bc != 0x200b)) &&
         (in_stack_000017bc != 0x2060)) {
        lVar27 = *in_stack_00000150;
        if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x50), lVar30 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
        *(int *)(lVar30 + 0x2c) = *(int *)(lVar30 + 0x2c) + 1;
        *(int *)(lVar27 + 0x20) = *(int *)(lVar27 + 0x20) + 1;
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
      if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x50), lVar27 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
LAB_024949c4:
      *(int *)(lVar27 + 0x20) = *(int *)(lVar27 + 0x20) + 1;
    }
  }
LAB_02494abc:
  if (((int)unaff_x19[0x5b] == 1) && ((in_stack_000017bc == 0x2d || (!bVar7)))) {
    if (unaff_x19[0xca] == 0) goto LAB_0249920c;
    fVar63 = *(float *)(unaff_x19 + 0x3c);
    iVar13 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
    if (unaff_x19[0xca] == 0) goto LAB_0249920c;
    fVar67 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
    lVar27 = unaff_x19[0xc9];
    fVar47 = fStack0000000000000084;
    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
      fVar47 = 1.0;
    }
    if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_0249920c;
    fVar49 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar52 = *(float *)(lVar27 + 0x2c);
    fVar70 = (float)FUN_026fd668(*(long *)(lVar27 + 0x20),0);
    fVar51 = *_fStack0000000000000098;
    fVar70 = fVar49 * (fVar63 / (float)iVar13) * fVar67 * fVar47 * fVar52 * fVar70;
    fVar63 = *_fStack0000000000000088;
    if ((in_stack_000017bc == 10) && (*(int *)((long)unaff_x19 + 0x48c) != (int)unaff_x19[0x92])) {
      if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
      goto LAB_0249920c;
      uVar36 = *(int *)((long)unaff_x19 + 0x48c) - 1;
      if (*(uint *)(lVar27 + 0x18) <= uVar36)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (unaff_x19[0xca] == 0) goto LAB_0249920c;
      fVar47 = *(float *)(lVar27 + (long)(int)uVar36 * (long)iVar15 + 0x60);
      iVar13 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
      if (unaff_x19[0xca] == 0) goto LAB_0249920c;
      fVar49 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
      lVar27 = unaff_x19[0xc9];
      fVar67 = fStack0000000000000084;
      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
        fVar67 = 1.0;
      }
      if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_0249920c;
      fVar52 = *(float *)((long)unaff_x19 + 0x3fc);
      fVar64 = *(float *)(lVar27 + 0x2c);
      fVar70 = (float)FUN_026fd668(*(long *)(lVar27 + 0x20),0);
      if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x50), lVar27 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      fVar51 = *(float *)(lVar27 + 0x60);
      fVar63 = *(float *)(lVar27 + 100);
      fVar70 = fVar52 * (fVar47 / (float)iVar13) * fVar49 * fVar67 * fVar64 * fVar70;
    }
    fVar52 = *(float *)(unaff_x19 + 0x9a);
    fVar67 = *(float *)(unaff_x19 + 0x96);
    fVar64 = *(float *)((long)unaff_x19 + 0x4c4);
    fVar47 = 0.0;
    fVar49 = 0.0;
    if ((0.0 < fVar52) && (fVar49 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
      fVar49 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
    }
    fVar68 = *(float *)(unaff_x19 + 199);
    if ((char)unaff_x19[0x1d] == '\0') {
      if ((unaff_x19[0xc9] == 0) || (lVar27 = *(long *)(unaff_x19[0xc9] + 0x20), lVar27 == 0))
      goto LAB_0249920c;
      FUN_026fd62c(&stack0x00000880,lVar27,0);
      fVar47 = (float)FUN_026fd474(&stack0x000016e0,0);
    }
    puVar9 = System_Threading_Mutex_TypeInfo;
    fVar65 = *(float *)(unaff_x19 + 0x6b);
    fVar63 = (in_stack_00000090 - fVar51) - fVar63;
    bVar11 = true;
    if ((fVar65 <= fVar63) && (bVar11 = false, !NAN(fVar65))) {
      bVar11 = fVar65 == -1.0;
    }
    if (!bVar11) {
      fVar63 = fVar65;
    }
    fVar51 = _DAT_0294c6e8;
    if ((uVar33 & 0x18) == 0) {
      fVar51 = 1.0;
    }
    if (((fVar67 - (fVar64 - fVar52)) + fVar49 < fStack00000000000000a4) &&
       (ABS(fVar68) + fVar70 * fVar47 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) <
        fVar51 * fVar63)) {
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_024d69d4();
      lVar27 = *(long *)(*(long *)puVar9 + 0xb8);
      memcpy(&stack0x00000508,(void *)(lVar27 + 0x788),0x378);
      FUN_013b86dc(lVar27 + 0x11f0,&stack0x00000508,
                   *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__);
    }
  }
  unaff_d13 = (ulong)(uint)fVar73;
  unaff_s12 = 1.0;
  lVar27 = *in_stack_00000150;
  if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x38), lVar30 == 0)) goto LAB_0249920c;
  if (*(uint *)(lVar30 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  uVar36 = *(uint *)(unaff_x19 + 0x94);
  lVar30 = lVar30 + (int)*in_stack_00000148 * unaff_x27;
  *(uint *)(lVar30 + 100) = uVar36;
  *(int *)(lVar30 + 0x68) = (int)unaff_x19[0x95];
  if ((bVar7) ||
     ((in_stack_000017bc < 0xe && ((1 << (ulong)(in_stack_000017bc & 0x1f) & 0x2c00U) != 0)))) {
    lVar27 = *(long *)(lVar27 + 0x50);
    if (lVar27 == 0) goto LAB_0249920c;
    if (*(uint *)(lVar27 + 0x18) <= uVar36)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if (*(int *)(lVar27 + (long)(int)uVar36 * 0x5c + 0x24) == 1) goto LAB_02494e68;
  }
  else {
    lVar27 = *(long *)(lVar27 + 0x50);
    if (lVar27 == 0) goto LAB_0249920c;
LAB_02494e68:
    if (*(uint *)(lVar27 + 0x18) <= uVar36)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(int *)(lVar27 + (long)(int)uVar36 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
  }
  if (in_stack_000017bc == 9) {
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar63 = (float)FUN_026fd208(*in_stack_00000138 + 0x50,0);
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar67 = *(float *)(unaff_x19 + 199);
    fVar47 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000138 + 0x1b9));
    fVar63 = fVar73 * fVar63 * fVar47;
    fVar47 = fVar63 * (float)(int)(fVar67 / fVar63);
    param_2 = (ulong)(uint)fVar47;
    if (fVar47 <= fVar67) {
      fVar47 = fVar67 + fVar63;
    }
LAB_02495058:
    *(float *)(unaff_x19 + 199) = fVar47;
  }
  else if (*(float *)(unaff_x19 + 0x55) == 0.0) {
    if ((char)unaff_x19[0x1d] == '\0') {
      fVar67 = unaff_s12;
      if (*(char *)((long)unaff_x19 + 0x46c) != '\0') {
        fVar67 = (float)thunk_FUN_026935f0(_uStack0000000000000060,0);
      }
      fVar47 = *(float *)(unaff_x19 + 199);
      fVar70 = (float)FUN_026fd474(&stack0x00001770,0);
      if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
      fVar63 = 1.0 - *(float *)((long)unaff_x19 + 0x2cc);
      fVar47 = fVar47 + fVar63 * (*(float *)((long)unaff_x19 + 0x2a4) +
                                 fVar73 * (fVar48 + fVar67 * fVar70) +
                                 in_stack_000000c8 *
                                 (fVar71 + fStack00000000000000cc +
                                           *(float *)(unaff_x19[0x1f] + 0x1ac)));
      *(float *)(unaff_x19 + 199) = fVar47;
      goto joined_r0x02494fac;
    }
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar47 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (*(float *)((long)unaff_x19 + 0x2a4) +
             fVar73 * fVar48 +
             in_stack_000000c8 *
             (fVar71 + fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac)));
    param_2 = (ulong)(uint)fVar47;
    fVar47 = *(float *)(unaff_x19 + 199) - fVar47;
    *(float *)(unaff_x19 + 199) = fVar47;
    if ((uVar14 != 0) || (in_stack_000017bc == 0x200b)) {
      fVar63 = in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
      param_2 = (ulong)(uint)fVar63;
      fVar47 = fVar47 - fVar63;
      goto LAB_02495058;
    }
  }
  else {
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar63 = *(float *)(unaff_x19 + 199);
    fVar47 = fVar63 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                      (*(float *)((long)unaff_x19 + 0x2a4) +
                      (*(float *)(unaff_x19 + 0x55) - fVar50) +
                      in_stack_000000c8 *
                      (fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac)));
    *(float *)(unaff_x19 + 199) = fVar47;
joined_r0x02494fac:
    if ((uVar14 != 0) || (param_2 = (ulong)(uint)fVar63, in_stack_000017bc == 0x200b)) {
      fVar63 = in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
      param_2 = (ulong)(uint)fVar63;
      fVar47 = fVar47 + fVar63;
      goto LAB_02495058;
    }
  }
  lVar27 = *in_stack_00000150;
  if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x38), lVar30 == 0)) goto LAB_0249920c;
  uVar36 = *in_stack_00000148;
  uVar33 = (uint)*(undefined8 *)(lVar30 + 0x18);
  if (uVar33 <= uVar36) goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  *(float *)(lVar30 + (int)uVar36 * unaff_x27 + 0x144) = fVar47;
  uVar43 = in_stack_000017bc;
  if ((int)in_stack_000017bc < 0xd) {
    if ((in_stack_000017bc - 10 < 2) || (in_stack_000017bc == 3)) goto LAB_024950bc;
FUN_02495710:
    if ((bool)(bVar7 & in_stack_000017bc == 0x2d)) goto LAB_024950bc;
  }
  else {
    if (in_stack_000017bc - 0x2028 < 2) goto LAB_024950bc;
    if (in_stack_000017bc != 0xd) goto FUN_02495710;
    param_2 = 0;
    *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
  }
  if ((float)uVar36 != in_stack_00000078._4_4_) goto LAB_0249572c;
LAB_024950bc:
  if (0.0 < *(float *)(unaff_x19 + 0x9a)) {
    fVar63 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
    if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (((fStack000000000000004c < ABS(fVar63)) && (*(char *)((long)unaff_x19 + 700) == '\0')) &&
       (*(char *)((long)unaff_x19 + 0x334) == '\0')) {
      FUN_024d6ca8(fVar63);
      *(float *)((long)unaff_x19 + 0x4bc) = *(float *)((long)unaff_x19 + 0x4bc) - fVar63;
      *(float *)(unaff_x19 + 0x9a) = fVar63 + *(float *)(unaff_x19 + 0x9a);
      puVar9 = System_Threading_Mutex_TypeInfo;
      lVar27 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar27 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar27 = *(long *)puVar9;
      }
      lVar30 = *(long *)(lVar27 + 0xb8);
      if (*(int *)(lVar30 + 0x7ac) == (int)unaff_x19[0x94]) {
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar30 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
        }
        FUN_013b8de4(lVar30 + 0x11f0,&stack0x00000880,
                     *(undefined8 *)
                      Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                    );
        lVar27 = *(long *)System_Threading_Mutex_TypeInfo;
        memcpy((void *)(*(long *)(lVar27 + 0xb8) + 0x788),&stack0x00000880,0x378);
        lVar27 = *(long *)(lVar27 + 0xb8);
        *(float *)(lVar27 + 0x7bc) = fVar63 + *(float *)(lVar27 + 0x7bc);
        *(float *)(lVar27 + 0x800) = fVar63 + *(float *)(lVar27 + 0x800);
        memcpy(&stack0x00000190,(void *)(lVar27 + 0x788),0x378);
        FUN_013b86dc(lVar27 + 0x11f0,&stack0x00000190,
                     *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__);
      }
    }
  }
  fVar67 = *(float *)(unaff_x19 + 0x9a);
  *(undefined1 *)((long)unaff_x19 + 0x334) = 0;
  fVar47 = *(float *)((long)unaff_x19 + 0x4c4) - fVar67;
  fVar63 = *(float *)((long)unaff_x19 + 0x4bc);
  if (fVar47 <= *(float *)((long)unaff_x19 + 0x4bc)) {
    fVar63 = fVar47;
  }
  *(float *)((long)unaff_x19 + 0x4bc) = fVar63;
  fVar70 = *(float *)(unaff_x19 + 0x98);
  if (in_stack_000017b4 == '\0') {
    in_stack_000017b8 = fVar63;
  }
  if ((*(char *)((long)unaff_x19 + 0x32c) != '\0') &&
     (((int)unaff_x19[100] <= *(int *)((long)unaff_x19 + 0x48c) ||
      ((int)unaff_x19[0x65] <= (int)unaff_x19[0x94])))) {
    in_stack_000017b4 = '\x01';
  }
  lVar27 = *in_stack_00000150;
  if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x50), lVar30 == 0)) goto LAB_0249920c;
  uVar36 = *(uint *)(unaff_x19 + 0x94);
  if (*(uint *)(lVar30 + 0x18) <= uVar36)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar44 = lVar30 + (long)(int)uVar36 * 0x5c;
  *(int *)(lVar44 + 0x34) = (int)unaff_x19[0x92];
  iVar13 = (int)unaff_x19[0x92];
  if ((int)unaff_x19[0x92] <= *(int *)((long)unaff_x19 + 0x494)) {
    iVar13 = *(int *)((long)unaff_x19 + 0x494);
  }
  *(int *)((long)unaff_x19 + 0x494) = iVar13;
  *(int *)(lVar44 + 0x38) = iVar13;
  *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x48c);
  *(undefined4 *)(lVar44 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x48c);
  iVar13 = *(int *)((long)unaff_x19 + 0x494);
  if (*(int *)((long)unaff_x19 + 0x494) <= *(int *)((long)unaff_x19 + 0x49c)) {
    iVar13 = *(int *)((long)unaff_x19 + 0x49c);
  }
  *(int *)((long)unaff_x19 + 0x49c) = iVar13;
  *(int *)(lVar44 + 0x40) = iVar13;
  *(int *)(lVar44 + 0x24) = (*(int *)(lVar44 + 0x3c) - *(int *)(lVar44 + 0x34)) + 1;
  *(undefined4 *)(lVar44 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
  lVar27 = *(long *)(lVar27 + 0x38);
  if (lVar27 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar27 + 0x18) <= *(uint *)((long)unaff_x19 + 0x494))
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  uVar74 = *(undefined4 *)(lVar27 + (int)*(uint *)((long)unaff_x19 + 0x494) * unaff_x27 + 0x11c);
  lVar30 = lVar30 + (long)(int)uVar36 * 0x5c;
  *(float *)(lVar30 + 0x70) = fVar47;
  *(undefined4 *)(lVar30 + 0x6c) = uVar74;
  lVar27 = *in_stack_00000150;
  if ((lVar27 == 0) || (lVar30 = *(long *)(lVar27 + 0x50), lVar30 == 0)) goto LAB_0249920c;
  if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar27 = *(long *)(lVar27 + 0x38);
  if (lVar27 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar27 + 0x18) <= *(uint *)((long)unaff_x19 + 0x49c))
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  uVar74 = *(undefined4 *)(lVar27 + (int)*(uint *)((long)unaff_x19 + 0x49c) * unaff_x27 + 0x128);
  fVar70 = fVar70 - fVar67;
  lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
  *(float *)(lVar30 + 0x78) = fVar70;
  *(undefined4 *)(lVar30 + 0x74) = uVar74;
  lVar27 = *in_stack_00000150;
  if ((lVar27 == 0) || (lVar44 = *(long *)(lVar27 + 0x50), lVar44 == 0)) goto LAB_0249920c;
  lVar22 = (long)(int)*(uint *)(unaff_x19 + 0x94);
  if (*(uint *)(lVar44 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar30 = lVar44 + lVar22 * 0x5c;
  *(float *)(lVar30 + 0x44) = *(float *)(lVar30 + 0x74) - fVar73 * in_stack_00000128;
  *(float *)(lVar30 + 0x5c) = fStack00000000000000d4;
  if (*(int *)(lVar30 + 0x24) == 1) {
    *(int *)(lVar44 + lVar22 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
  }
  if ((*in_stack_00000138 == 0) || (lVar30 = *(long *)(lVar27 + 0x38), lVar30 == 0))
  goto LAB_0249920c;
  lVar39 = (long)(int)*(uint *)((long)unaff_x19 + 0x49c);
  uVar33 = (uint)*(undefined8 *)(lVar30 + 0x18);
  if (uVar33 <= *(uint *)((long)unaff_x19 + 0x49c))
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  if ((*(char *)(lVar30 + lVar39 * unaff_x27 + 0x194) == '\0') &&
     (lVar39 = (long)(int)*(uint *)(unaff_x19 + 0x93), uVar33 <= *(uint *)(unaff_x19 + 0x93)))
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  fVar73 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
           (in_stack_000000c8 *
            (fVar71 + fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac)) -
           *(float *)((long)unaff_x19 + 0x2a4));
  fVar63 = -fVar73;
  if ((char)unaff_x19[0x1d] != '\0') {
    fVar63 = fVar73;
  }
  lVar44 = lVar44 + lVar22 * 0x5c;
  *(float *)(lVar44 + 0x58) = *(float *)(lVar30 + lVar39 * unaff_x27 + 0x144) + fVar63;
  fVar63 = *(float *)(unaff_x19 + 0x9a);
  *(float *)(lVar44 + 0x48) = fStack0000000000000050 + (fVar70 - fVar47);
  *(float *)(lVar44 + 0x4c) = fVar70;
  param_2 = (ulong)(uint)(0.0 - fVar63);
  *(float *)(lVar44 + 0x50) = 0.0 - fVar63;
  *(float *)(lVar44 + 0x54) = fVar47;
  unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
  if ((int)in_stack_000017bc < 0x2d) {
    if (1 < in_stack_000017bc - 10) goto code_r0x0249549c;
  }
  else if ((1 < in_stack_000017bc - 0x2028) && (in_stack_000017bc != 0x2d)) goto LAB_0249572c;
  if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar42 = (long *)StringLiteral_302;
  FUN_024d69d4();
  lVar27 = unaff_x19[0x6c];
  *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
  iVar15 = (int)unaff_x19[0x94] + 1;
  *(int *)(unaff_x19 + 0x94) = iVar15;
  *(int *)(unaff_x19 + 0x92) = *(int *)((long)unaff_x19 + 0x48c) + 1;
  if ((lVar27 == 0) || (*(long *)(lVar27 + 0x50) == 0)) goto LAB_0249920c;
  if (*(int *)(*(long *)(lVar27 + 0x50) + 0x18) <= iVar15) {
    FUN_024d6e60();
    lVar27 = unaff_x19[0x6c];
    if (lVar27 == 0) goto LAB_0249920c;
  }
  lVar27 = *(long *)(lVar27 + 0x38);
  if (lVar27 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  fVar63 = *(float *)(lVar27 + (int)*in_stack_00000148 * unaff_x27 + 0x154);
  if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
    fVar73 = 0.0;
    if ((in_stack_000017bc == 0x2029) || (in_stack_000017bc == 10)) {
      fVar73 = *(float *)((long)unaff_x19 + 0x2c4);
    }
    uVar25 = 0;
    fVar73 = *(float *)(unaff_x19 + 0x9a) +
             fVar63 + (0.0 - *(float *)((long)unaff_x19 + 0x4c4)) +
             fStack0000000000000054 * (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4))
             + in_stack_000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar73);
  }
  else {
    if ((in_stack_000017bc == 0x2029) || (fVar73 = 0.0, in_stack_000017bc == 10)) {
      fVar73 = *(float *)((long)unaff_x19 + 0x2c4);
    }
    uVar25 = 1;
    fVar73 = *(float *)(unaff_x19 + 0x9a) +
             *(float *)(unaff_x19 + 0x57) +
             in_stack_000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar73);
  }
  *(float *)(unaff_x19 + 0x9a) = fVar73;
  *(undefined1 *)((long)unaff_x19 + 700) = uVar25;
  lVar27 = *unaff_x29;
  if (*(int *)(lVar27 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar27 = *unaff_x29;
  }
  uVar19 = *(undefined8 *)(*(long *)(lVar27 + 0xb8) + 0x15a8);
  *(float *)(unaff_x19 + 0x99) = fVar63;
  param_2 = NEON_rev64(uVar19,4);
  unaff_x19[0x98] = param_2;
  *(float *)(unaff_x19 + 199) =
       *(float *)(unaff_x19 + 0x80) + 0.0 + *(float *)((long)unaff_x19 + 0x404);
  FUN_024d69d4();
  FUN_024d69d4();
  *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
  fStack0000000000000058 = 1.4013e-45;
  bStack000000000000005c = 1;
  goto LAB_02492630;
code_r0x0249549c:
  if (in_stack_000017bc == 3) {
    if (unaff_x19[0x8e] == 0) goto LAB_0249920c;
    in_stack_00001788 = (uint)*(undefined8 *)(unaff_x19[0x8e] + 0x18);
    uVar43 = 3;
  }
LAB_0249572c:
  uVar36 = *in_stack_00000148;
  if (uVar33 <= uVar36) goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  if (*(char *)(lVar30 + (int)uVar36 * unaff_x27 + 0x194) != '\0') {
    lVar30 = lVar30 + (int)uVar36 * unaff_x27;
    uVar58 = *(ulong *)(lVar30 + 0x11c);
    uVar21 = *(ulong *)(in_stack_00000070 + 0x230);
    *(ulong *)(in_stack_00000070 + 0x230) =
         uVar58 ^ (uVar58 ^ uVar21) &
                  CONCAT44(-(uint)((float)(uVar21 >> 0x20) < (float)(uVar58 >> 0x20)),
                           -(uint)((float)uVar21 < (float)uVar58));
    uVar21 = *(ulong *)(in_stack_00000070 + 0x238);
    param_2 = *(ulong *)(lVar30 + 0x128);
    *(ulong *)(in_stack_00000070 + 0x238) =
         param_2 ^ (param_2 ^ uVar21) &
                   CONCAT44(-(uint)((float)(param_2 >> 0x20) < (float)(uVar21 >> 0x20)),
                            -(uint)((float)param_2 < (float)uVar21));
  }
  if (((int)unaff_x19[0x5b] == 5) &&
     ((0xd < uVar43 || ((1 << (ulong)(uVar43 & 0x1f) & 0x2c00U) == 0)))) {
    lVar30 = *(long *)(lVar27 + 0x58);
    if (lVar30 == 0) goto LAB_0249920c;
    iVar13 = (int)unaff_x19[0x95] + 1;
    if (*(int *)(lVar30 + 0x18) < iVar13) {
      if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01147c08((long *)(lVar27 + 0x58),iVar13,1,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerMove__);
      lVar27 = *in_stack_00000150;
      if (lVar27 == 0) goto LAB_0249920c;
    }
    lVar30 = *(long *)(lVar27 + 0x58);
    if (lVar30 == 0) goto LAB_0249920c;
    uVar33 = *(uint *)(unaff_x19 + 0x95);
    lVar44 = (long)(int)uVar33;
    uVar36 = *(uint *)(lVar30 + 0x18);
    if (uVar36 <= uVar33)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar22 = lVar30 + lVar44 * 0x14;
    fVar73 = *(float *)(lVar22 + 0x30);
    param_2 = (ulong)(uint)fVar73;
    *(undefined4 *)(lVar22 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
    fVar63 = *(float *)((long)unaff_x19 + 0x4bc);
    if (fVar73 <= *(float *)((long)unaff_x19 + 0x4bc)) {
      fVar63 = fVar73;
    }
    *(float *)(lVar22 + 0x30) = fVar63;
    uVar43 = *(uint *)((long)unaff_x19 + 0x48c);
    if (uVar43 == 0 && uVar33 == 0) {
      *(uint *)(lVar30 + lVar44 * 0x14 + 0x20) = uVar43;
    }
    else {
      uVar6 = uVar43 - 1;
      if (0 < (int)uVar43) {
        lVar27 = *(long *)(lVar27 + 0x38);
        if (lVar27 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar27 + 0x18) <= uVar6)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (uVar33 != *(uint *)(lVar27 + (long)(int)uVar6 * (long)iVar15 + 0x68)) {
          if (uVar36 <= uVar33 - 1)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          *(uint *)(lVar30 + 0x20 + (long)(int)(uVar33 - 1) * 0x14 + 4) = uVar6;
          *(uint *)(lVar30 + 0x20 + lVar44 * 0x14) = uVar43;
          goto LAB_024957b0;
        }
      }
      if ((float)uVar43 == in_stack_00000078._4_4_) {
        *(float *)(lVar30 + lVar44 * 0x14 + 0x24) = in_stack_00000078._4_4_;
      }
    }
  }
LAB_024957b0:
  puVar9 = System_Threading_Mutex_TypeInfo;
  if (((char)unaff_x19[0x5a] == '\0') &&
     ((6 < *(uint *)(unaff_x19 + 0x5b) ||
      ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5b) & 0x1f) & 0x4aU) == 0)))) goto LAB_02495b70;
  if ((uVar14 == 0) &&
     (((in_stack_000017bc != 0x2d && (in_stack_000017bc != 0x200b)) && (in_stack_000017bc != 0xad)))
     ) {
    if (*(char *)((long)unaff_x19 + 0x2d2) != '\0') goto LAB_024958f0;
LAB_02495868:
    if (((((0x2bfd < in_stack_000017bc - 0xac01) && (0x1d < in_stack_000017bc - 0xa961)) &&
         (0xfd < in_stack_000017bc - 0x1101)) || (uVar21 = FUN_024e95f0(0), (uVar21 & 1) != 0)) &&
       ((((0xed < in_stack_000017bc - 0xff01 && (0x1d < in_stack_000017bc - 0xfe31)) &&
         (0x717d < in_stack_000017bc - 0x2e81)) && (0x1fd < in_stack_000017bc - 0xf901))))
    goto LAB_024958f0;
    lVar27 = FUN_024e94b0(0);
    if ((lVar27 == 0) || (*(long *)(lVar27 + 0x10) == 0)) goto LAB_0249920c;
    uVar21 = FUN_0129aa60(*(long *)(lVar27 + 0x10),&stack0x00000880,
                          *(undefined8 *)
                           System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                         );
    if ((int)in_stack_00000078._4_4_ <= (int)*in_stack_00000148) {
      in_stack_00000880 = in_stack_000017bc;
      if ((uVar21 & 1) == 0) {
LAB_02495bc4:
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_024d69d4();
        bStack000000000000005c = 0;
        goto LAB_02495b70;
      }
LAB_02495adc:
      if (uVar18 != uVar60 || ((bStack000000000000005c ^ 0xff) & 1) != 0) goto LAB_02495b70;
      goto LAB_02495af4;
    }
    lVar27 = FUN_024e94b0(0);
    if (((lVar27 == 0) || (*in_stack_00000150 == 0)) ||
       (lVar30 = *(long *)(*in_stack_00000150 + 0x38), lVar30 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar30 + 0x18) <= *in_stack_00000148 + 1)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if (*(long *)(lVar27 + 0x18) == 0) goto LAB_0249920c;
    in_stack_00000880 =
         (uint)*(ushort *)(lVar30 + (long)(int)(*in_stack_00000148 + 1) * (long)iVar15 + 0x20);
    uVar58 = FUN_0129aa60(*(long *)(lVar27 + 0x18),&stack0x00000880,
                          *(undefined8 *)
                           System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                         );
    if ((uVar21 & 1) != 0) goto LAB_02495adc;
    if ((uVar58 & 1) == 0) goto LAB_02495bc4;
    if ((bStack000000000000005c & 1) == 0) goto LAB_024959d4;
    if (uVar14 != 0) goto LAB_02495af8;
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
        *(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xe78) = 0xffffffff;
        goto LAB_02495b70;
      }
      goto LAB_02495868;
    }
LAB_024958f0:
    if ((bStack000000000000005c & 1) == 0) {
LAB_024959d4:
      bStack000000000000005c = 0;
      goto LAB_02495b70;
    }
    if ((in_stack_000017bc == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) == 0) {
LAB_02495af4:
      if (uVar14 == 0) goto LAB_02495b30;
    }
LAB_02495af8:
    if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_024d69d4();
  }
LAB_02495b30:
  if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_024d69d4();
  bStack000000000000005c = 1;
LAB_02495b70:
  unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
  if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  goto code_r0x02495b8c;
LAB_02496a50:
  do {
    uVar14 = uVar36 - 1;
    if (*(uint *)(lVar27 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*in_stack_00000150 == 0) || (lVar44 = *(long *)(*in_stack_00000150 + 0x50), lVar44 == 0))
    goto LAB_0249920c;
    lVar39 = (long)(int)uVar14;
    lVar22 = lVar27 + lVar39 * 0x178;
    uVar33 = *(uint *)(lVar22 + 100);
    if (*(uint *)(lVar44 + 0x18) <= uVar33)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar37 = *(long *)(lVar22 + 0x38);
    uVar3 = *(ushort *)(lVar22 + 0x20);
    lVar35 = (long)(int)uVar33;
    lVar44 = lVar44 + lVar35 * 0x5c;
    uVar6 = *(uint *)(lVar44 + 0x3c);
    iVar16 = *(int *)(lVar44 + 0x28);
    iVar17 = *(int *)(lVar44 + 0x2c);
    uVar5 = *(uint *)(lVar44 + 0x40);
    lVar22 = (long)(int)uVar5;
    uVar43 = *(uint *)(lVar44 + 0x68);
    fVar68 = *(float *)(lVar44 + 0x5c);
    fVar62 = *(float *)(lVar44 + 0x60);
    iVar2 = *(int *)(lVar44 + 0x20);
    fVar50 = *(float *)(lVar44 + 0x4c);
    fVar51 = *(float *)(lVar44 + 0x54);
    fVar70 = *(float *)(lVar44 + 0x58);
    fVar64 = *(float *)(lVar44 + 0x6c);
    fVar52 = *(float *)(lVar44 + 0x70);
    fVar49 = *(float *)(lVar44 + 0x74);
    fVar71 = *(float *)(lVar44 + 0x78);
    fVar65 = fVar68 + fVar62;
    uVar41 = (uint)uVar3;
    if ((int)uVar43 < 9) {
      switch(uVar43) {
      case 1:
        if ((char)unaff_x19[0x1d] == '\0') {
          in_stack_000000c8 = fVar62 + 0.0;
        }
        else {
          in_stack_000000c8 = 0.0 - fVar70;
        }
        break;
      case 2:
LAB_02496c1c:
        in_stack_000000c8 = (fVar62 + fVar68 * 0.5) - fVar70 * 0.5;
        break;
      default:
        goto switchD_02496b58_caseD_3;
      case 4:
        in_stack_000000c8 = fVar65 - fVar70;
        if ((char)unaff_x19[0x1d] != '\0') {
          in_stack_000000c8 = fVar65;
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
        if ((uVar41 != 3) && (uVar41 != 10)) goto LAB_02496bac;
      }
      else if ((uVar41 != 0xad) && ((uVar41 != 0x200b && (uVar41 != 0x2060)))) {
LAB_02496bac:
        if (*(uint *)(lVar27 + 0x18) <= uVar6)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar4 = *(undefined2 *)(lVar27 + (long)(int)uVar6 * 0x178 + 0x20);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar21 = FUN_016f9f84(uVar4,0);
        if ((uVar21 & 1) == 0) {
          bVar1 = (int)uVar33 < (int)unaff_x19[0x94];
        }
        else {
          bVar1 = false;
        }
        if ((fVar70 <= fVar68) && (!bVar1 && (uVar43 >> 4 & 1) == 0)) {
          in_stack_000000c8 = fVar62;
          if ((char)unaff_x19[0x1d] != '\0') {
            in_stack_000000c8 = fVar65;
          }
          goto LAB_02496c90;
        }
        if (((uVar36 == 1) || (uVar33 != uVar60)) || (uVar14 == *(uint *)((long)unaff_x19 + 0x31c)))
        {
          in_stack_000000c8 = fVar62;
          if ((char)unaff_x19[0x1d] != '\0') {
            in_stack_000000c8 = fVar65;
          }
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          fStack0000000000000020 = (float)FUN_016fa418(uVar3,0);
          uStack00000000000000c0 = 0;
        }
        else {
          cVar26 = (char)unaff_x19[0x1d];
          fVar65 = -fVar70;
          if (cVar26 != '\0') {
            fVar65 = fVar70;
          }
          if (*(uint *)(lVar27 + 0x18) <= uVar6)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar70 = 1.0;
          iVar17 = (int)*(char *)(lVar27 + (long)(int)uVar6 * 0x178 + 0x194) +
                   (-iVar2 - ((uint)fStack0000000000000020 & 1)) + iVar17 + -1;
          if (0 < iVar17) {
            fVar70 = *(float *)((long)unaff_x19 + 0x2d4);
          }
          if (iVar17 < 1) {
            iVar17 = 1;
          }
          if (uVar41 == 9) {
LAB_02498bb8:
            fVar70 = 1.0 - fVar70;
          }
          else {
            if (uVar41 != 0xa0) {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar21 = FUN_016fa418(uVar3,0);
              cVar26 = (char)unaff_x19[0x1d];
              if ((uVar21 & 1) != 0) goto LAB_02498bb8;
            }
            iVar17 = (iVar2 - (~(uint)fStack0000000000000020 & 1)) + iVar16;
          }
          fVar70 = ((fVar68 + fVar65) * fVar70) / (float)iVar17;
          if (cVar26 == '\0') {
            in_stack_000000c8 = in_stack_000000c8 + fVar70;
            uStack00000000000000c0 =
                 CONCAT44((float)((ulong)uStack00000000000000c0 >> 0x20) + 0.0,
                          (float)uStack00000000000000c0 + 0.0);
          }
          else {
            in_stack_000000c8 = in_stack_000000c8 - fVar70;
          }
        }
      }
    }
    else if (uVar43 == 0x20) {
      fVar70 = fVar64 + fVar49;
      goto LAB_02496c1c;
    }
switchD_02496b58_caseD_3:
    uVar43 = (uint)*(undefined8 *)(lVar27 + 0x18);
    if (uVar43 <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar44 = lVar27 + lVar39 * 0x178;
    fVar65 = fStack0000000000000098 + in_stack_000000c8;
    fVar70 = (float)_in_stack_00000090 + (float)uStack00000000000000c0;
    fVar68 = (float)((ulong)_in_stack_00000090 >> 0x20) +
             (float)((ulong)uStack00000000000000c0 >> 0x20);
    if (*(char *)(lVar44 + 0x194) == '\0') goto LAB_02497688;
    iVar16 = *(int *)(lVar27 + lVar39 * 0x178 + 0x2c);
    if (iVar16 != 0) goto LAB_02497374;
    fVar67 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)uVar33,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
    case 0:
      lVar29 = lVar27 + lVar39 * 0x178;
      *(undefined4 *)(lVar29 + 0x84) = 0;
      *(undefined4 *)(lVar29 + 0xac) = 0;
      *(undefined4 *)(lVar29 + 0xd4) = 0x3f800000;
      fVar67 = 1.0;
      break;
    case 1:
      fVar71 = *(float *)(lVar27 + lVar39 * 0x178 + 0x70);
      if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
        lVar29 = lVar27 + lVar39 * 0x178;
        fVar49 = (in_stack_000000c8 + fVar71) - *(float *)(in_stack_00000070 + 0x230);
        fVar71 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
        goto LAB_02496df8;
      }
      lVar29 = lVar27 + lVar39 * 0x178;
      fVar49 = fVar49 - fVar64;
      *(float *)(lVar29 + 0x84) = fVar67 + (fVar71 - fVar64) / fVar49;
      *(float *)(lVar29 + 0xac) = fVar67 + (*(float *)(lVar29 + 0x98) - fVar64) / fVar49;
      *(float *)(lVar29 + 0xd4) = fVar67 + (*(float *)(lVar29 + 0xc0) - fVar64) / fVar49;
      fVar67 = fVar67 + (*(float *)(lVar29 + 0xe8) - fVar64) / fVar49;
      break;
    case 2:
      lVar29 = lVar27 + lVar39 * 0x178;
      fVar71 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
      fVar49 = (in_stack_000000c8 + *(float *)(lVar29 + 0x70)) -
               *(float *)(in_stack_00000070 + 0x230);
LAB_02496df8:
      *(float *)(lVar29 + 0x84) = fVar67 + fVar49 / fVar71;
      *(float *)(lVar29 + 0xac) =
           fVar67 + ((in_stack_000000c8 + *(float *)(lVar29 + 0x98)) -
                    *(float *)(in_stack_00000070 + 0x230)) /
                    (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
      *(float *)(lVar29 + 0xd4) =
           fVar67 + ((in_stack_000000c8 + *(float *)(lVar29 + 0xc0)) -
                    *(float *)(in_stack_00000070 + 0x230)) /
                    (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
      fVar67 = fVar67 + ((in_stack_000000c8 + *(float *)(lVar29 + 0xe8)) -
                        *(float *)(in_stack_00000070 + 0x230)) /
                        (*(float *)(in_stack_00000070 + 0x238) -
                        *(float *)(in_stack_00000070 + 0x230));
      break;
    case 3:
      switch((int)unaff_x19[0x61]) {
      case 0:
        lVar29 = lVar27 + lVar39 * 0x178;
        *(undefined4 *)(lVar29 + 0x88) = 0;
        *(undefined4 *)(lVar29 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar29 + 0xd8) = 0;
        *(undefined4 *)(lVar29 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar29 = lVar27 + lVar39 * 0x178;
        fVar71 = fVar71 - fVar52;
        fVar49 = fVar67 + (*(float *)(lVar29 + 0x74) - fVar52) / fVar71;
        fVar71 = fVar67 + (*(float *)(lVar29 + 0x9c) - fVar52) / fVar71;
        *(float *)(lVar29 + 0x88) = fVar49;
        *(float *)(lVar29 + 0xb0) = fVar71;
        *(float *)(lVar29 + 0xd8) = fVar49;
        *(float *)(lVar29 + 0x100) = fVar71;
        break;
      case 2:
        lVar29 = lVar27 + lVar39 * 0x178;
        fVar49 = fVar67 + (*(float *)(lVar29 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                          (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
        *(float *)(lVar29 + 0x88) = fVar49;
        fVar71 = *(float *)(unaff_x19 + 0x9b);
        fVar52 = *(float *)(unaff_x19 + 0x9c);
        *(float *)(lVar29 + 0xd8) = fVar49;
        fVar49 = fVar67 + (*(float *)(lVar29 + 0x9c) - fVar71) / (fVar52 - fVar71);
        *(float *)(lVar29 + 0xb0) = fVar49;
        *(float *)(lVar29 + 0x100) = fVar49;
        break;
      case 3:
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
        uVar43 = (uint)*(undefined8 *)(lVar27 + 0x18);
      }
      if (uVar43 <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = lVar27 + lVar39 * 0x178;
      fVar49 = *(float *)(lVar29 + 0x15c);
      fVar71 = (1.0 - (*(float *)(lVar29 + 0x88) + *(float *)(lVar29 + 0xb0)) * fVar49) * 0.5;
      fVar52 = fVar67 + *(float *)(lVar29 + 0x88) * fVar49 + fVar71;
      fVar67 = fVar67 + fVar71 + *(float *)(lVar29 + 0xb0) * fVar49;
      *(float *)(lVar29 + 0x84) = fVar52;
      *(float *)(lVar29 + 0xac) = fVar52;
      *(float *)(lVar29 + 0xd4) = fVar67;
      break;
    default:
      goto switchD_02496d4c_default;
    }
    *(float *)(lVar27 + lVar39 * 0x178 + 0xfc) = fVar67;
switchD_02496d4c_default:
    switch((int)unaff_x19[0x61]) {
    case 0:
      if (uVar43 <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = lVar27 + lVar39 * 0x178;
      *(undefined4 *)(lVar29 + 0x88) = 0;
      *(undefined4 *)(lVar29 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar29 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar29 + 0x100) = 0;
      break;
    case 1:
      if (uVar14 < uVar43) {
        lVar29 = lVar27 + lVar39 * 0x178;
        fVar50 = fVar50 - fVar51;
        fVar67 = (*(float *)(lVar29 + 0x74) - fVar51) / fVar50;
        fVar50 = (*(float *)(lVar29 + 0x9c) - fVar51) / fVar50;
        *(float *)(lVar29 + 0x88) = fVar67;
        goto LAB_02497174;
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    case 2:
      if (uVar43 <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = lVar27 + lVar39 * 0x178;
      fVar67 = (*(float *)(lVar29 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
      *(float *)(lVar29 + 0x88) = fVar67;
      fVar50 = (*(float *)(lVar29 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
LAB_02497174:
      *(float *)(lVar29 + 0xb0) = fVar50;
      *(float *)(lVar29 + 0xd8) = fVar50;
      *(float *)(lVar29 + 0x100) = fVar67;
      break;
    case 3:
      if (uVar43 <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = lVar27 + lVar39 * 0x178;
      fVar50 = *(float *)(lVar29 + 0x15c);
      fVar49 = (1.0 - (*(float *)(lVar29 + 0x84) + *(float *)(lVar29 + 0xd4)) / fVar50) * 0.5;
      fVar67 = *(float *)(lVar29 + 0x84) / fVar50 + fVar49;
      fVar49 = fVar49 + *(float *)(lVar29 + 0xd4) / fVar50;
      *(float *)(lVar29 + 0x88) = fVar67;
      *(float *)(lVar29 + 0xb0) = fVar49;
      *(float *)(lVar29 + 0x100) = fVar67;
      *(float *)(lVar29 + 0xd8) = fVar49;
    }
    if (uVar43 <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar29 = lVar27 + lVar39 * 0x178;
    fVar67 = *(float *)(lVar29 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
    if ((*(char *)(lVar29 + 0x5c) == '\0') && ((*(byte *)(lVar27 + lVar39 * 0x178 + 400) & 1) != 0))
    {
      fVar67 = -fVar67;
    }
    fVar49 = fVar63;
    if (((iVar13 == 2) || (fVar49 = fVar48, iVar13 == 1)) || (fVar49 = fVar63 / fVar73, iVar13 == 0)
       ) {
      fVar67 = fVar49 * fVar67;
    }
    lVar29 = lVar27 + lVar39 * 0x178;
    fVar50 = *(float *)(lVar29 + 0x88);
    fVar71 = *(float *)(lVar29 + 0x84);
    fVar49 = -2.1474836e+09;
    if (fVar71 != INFINITY) {
      fVar49 = (float)(int)fVar71;
    }
    fVar52 = *(float *)(lVar29 + 0xd4);
    fVar64 = *(float *)(lVar29 + 0xd8);
    fVar51 = -2.1474836e+09;
    if (fVar50 != INFINITY) {
      fVar51 = (float)(int)fVar50;
    }
    uVar74 = FUN_024e0374(fVar71 - fVar49,fVar50 - fVar51);
    *(undefined4 *)(lVar29 + 0x84) = uVar74;
    if (*(uint *)(lVar27 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar64 = fVar64 - fVar51;
    *(float *)(lVar29 + 0x88) = fVar67;
    uVar74 = FUN_024e0374(fVar71 - fVar49,fVar64);
    *(undefined4 *)(lVar27 + lVar39 * 0x178 + 0xac) = uVar74;
    if (*(uint *)(lVar27 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar52 = fVar52 - fVar49;
    *(float *)(lVar27 + lVar39 * 0x178 + 0xb0) = fVar67;
    fVar49 = (float)FUN_024e0374(fVar52,fVar64);
    *(float *)(lVar29 + 0xd4) = fVar49;
    if (*(uint *)(lVar27 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar29 + 0xd8) = fVar67;
    uVar74 = FUN_024e0374(fVar52,fVar50 - fVar51);
    *(undefined4 *)(lVar27 + lVar39 * 0x178 + 0xfc) = uVar74;
    uVar43 = (uint)*(undefined8 *)(lVar27 + 0x18);
    if (uVar43 <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar27 + lVar39 * 0x178 + 0x100) = fVar67;
LAB_02497374:
    if (((int)unaff_x19[100] <= (int)uVar14) ||
       (*(int *)((long)unaff_x19 + 0x324) <= iStack00000000000000ac)) goto LAB_02497490;
    if (((int)uVar33 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] != 5)) {
      if (uVar43 <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar44 = lVar27 + lVar39 * 0x178;
      *(ulong *)(lVar44 + 0x70) =
           CONCAT44(fVar70 + (float)((ulong)*(undefined8 *)(lVar44 + 0x70) >> 0x20),
                    fVar65 + (float)*(undefined8 *)(lVar44 + 0x70));
      *(float *)(lVar44 + 0x78) = fVar68 + *(float *)(lVar44 + 0x78);
      if (*(uint *)(lVar27 + 0x18) <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar44 = lVar27 + lVar39 * 0x178;
      *(ulong *)(lVar44 + 0x98) =
           CONCAT44(fVar70 + (float)((ulong)*(undefined8 *)(lVar44 + 0x98) >> 0x20),
                    fVar65 + (float)*(undefined8 *)(lVar44 + 0x98));
      *(float *)(lVar44 + 0xa0) = fVar68 + *(float *)(lVar44 + 0xa0);
      if (*(uint *)(lVar27 + 0x18) <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar44 = lVar27 + lVar39 * 0x178;
      *(ulong *)(lVar44 + 0xc0) =
           CONCAT44(fVar70 + (float)((ulong)*(undefined8 *)(lVar44 + 0xc0) >> 0x20),
                    fVar65 + (float)*(undefined8 *)(lVar44 + 0xc0));
      *(float *)(lVar44 + 200) = fVar68 + *(float *)(lVar44 + 200);
      if (*(uint *)(lVar27 + 0x18) <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar44 = lVar27 + lVar39 * 0x178;
      *(ulong *)(lVar44 + 0xe8) =
           CONCAT44(fVar70 + (float)((ulong)*(undefined8 *)(lVar44 + 0xe8) >> 0x20),
                    fVar65 + (float)*(undefined8 *)(lVar44 + 0xe8));
      *(float *)(lVar44 + 0xf0) = fVar68 + *(float *)(lVar44 + 0xf0);
      if (iVar16 == 0) goto LAB_02497668;
LAB_02497598:
      if (iVar16 == 1) {
        pcVar32 = *(code **)(*unaff_x19 + 0x8f8);
        goto LAB_02497674;
      }
    }
    else {
      if (((int)uVar33 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] == 5)) {
        if (uVar43 <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (*(uint *)(lVar27 + lVar39 * 0x178 + 0x68) != uStack000000000000002c) goto LAB_02497490;
        lVar44 = lVar27 + lVar39 * 0x178;
        *(ulong *)(lVar44 + 0x70) =
             CONCAT44(fVar70 + (float)((ulong)*(undefined8 *)(lVar44 + 0x70) >> 0x20),
                      fVar65 + (float)*(undefined8 *)(lVar44 + 0x70));
        *(float *)(lVar44 + 0x78) = fVar68 + *(float *)(lVar44 + 0x78);
        if (*(uint *)(lVar27 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar44 = lVar27 + lVar39 * 0x178;
        *(ulong *)(lVar44 + 0x98) =
             CONCAT44(fVar70 + (float)((ulong)*(undefined8 *)(lVar44 + 0x98) >> 0x20),
                      fVar65 + (float)*(undefined8 *)(lVar44 + 0x98));
        *(float *)(lVar44 + 0xa0) = fVar68 + *(float *)(lVar44 + 0xa0);
        if (*(uint *)(lVar27 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar44 = lVar27 + lVar39 * 0x178;
        *(ulong *)(lVar44 + 0xc0) =
             CONCAT44(fVar70 + (float)((ulong)*(undefined8 *)(lVar44 + 0xc0) >> 0x20),
                      fVar65 + (float)*(undefined8 *)(lVar44 + 0xc0));
        *(float *)(lVar44 + 200) = fVar68 + *(float *)(lVar44 + 200);
        if (*(uint *)(lVar27 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar44 = lVar27 + lVar39 * 0x178;
        *(ulong *)(lVar44 + 0xe8) =
             CONCAT44(fVar70 + (float)((ulong)*(undefined8 *)(lVar44 + 0xe8) >> 0x20),
                      fVar65 + (float)*(undefined8 *)(lVar44 + 0xe8));
        *(float *)(lVar44 + 0xf0) = fVar68 + *(float *)(lVar44 + 0xf0);
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
        lVar29 = lVar27 + lVar39 * 0x178;
        uVar74 = *(undefined4 *)
                  (*(undefined8 **)
                    (*(long *)
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                    + 0xb8) + 1);
        *(undefined8 *)(lVar29 + 0x70) =
             **(undefined8 **)
               (*(long *)
                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
               0xb8);
        *(undefined4 *)(lVar29 + 0x78) = uVar74;
        if (*(uint *)(lVar27 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar29 = lVar27 + lVar39 * 0x178;
        uVar74 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
        *(undefined8 *)(lVar29 + 0x98) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
        *(undefined4 *)(lVar29 + 0xa0) = uVar74;
        if (*(uint *)(lVar27 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar29 = lVar27 + lVar39 * 0x178;
        uVar74 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
        *(undefined8 *)(lVar29 + 0xc0) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
        *(undefined4 *)(lVar29 + 200) = uVar74;
        if (*(uint *)(lVar27 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar29 = lVar27 + lVar39 * 0x178;
        uVar74 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
        *(undefined8 *)(lVar29 + 0xe8) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
        *(undefined4 *)(lVar29 + 0xf0) = uVar74;
        if (*(uint *)(lVar27 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        *(undefined1 *)(lVar44 + 0x194) = 0;
      }
      if (iVar16 != 0) goto LAB_02497598;
LAB_02497668:
      pcVar32 = *(code **)(*unaff_x19 + 0x8d8);
LAB_02497674:
      (*pcVar32)();
    }
LAB_02497688:
    if ((*in_stack_00000150 == 0) || (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar44 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar44 = lVar44 + lVar39 * 0x178;
    uVar19 = *(undefined8 *)(lVar44 + 0x11c);
    *(undefined8 *)(lVar44 + 0x11c) =
         CONCAT44(fVar70 + (float)((ulong)uVar19 >> 0x20),fVar65 + (float)uVar19);
    *(float *)(lVar44 + 0x124) = fVar68 + *(float *)(lVar44 + 0x124);
    if ((*in_stack_00000150 == 0) || (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar44 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar44 = lVar44 + lVar39 * 0x178;
    *(ulong *)(lVar44 + 0x110) =
         CONCAT44(fVar70 + (float)((ulong)*(undefined8 *)(lVar44 + 0x110) >> 0x20),
                  fVar65 + (float)*(undefined8 *)(lVar44 + 0x110));
    *(float *)(lVar44 + 0x118) = fVar68 + *(float *)(lVar44 + 0x118);
    if ((*in_stack_00000150 == 0) || (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar44 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar44 = lVar44 + lVar39 * 0x178;
    *(ulong *)(lVar44 + 0x128) =
         CONCAT44(fVar70 + (float)((ulong)*(undefined8 *)(lVar44 + 0x128) >> 0x20),
                  fVar65 + (float)*(undefined8 *)(lVar44 + 0x128));
    *(float *)(lVar44 + 0x130) = fVar68 + *(float *)(lVar44 + 0x130);
    if ((*in_stack_00000150 == 0) || (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar44 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar44 = lVar44 + lVar39 * 0x178;
    *(float *)(lVar44 + 0x134) = fVar65 + *(float *)(lVar44 + 0x134);
    *(ulong *)(lVar44 + 0x138) =
         CONCAT44(fVar68 + (float)((ulong)*(undefined8 *)(lVar44 + 0x138) >> 0x20),
                  fVar70 + (float)*(undefined8 *)(lVar44 + 0x138));
    lVar44 = *in_stack_00000150;
    if ((lVar44 == 0) || (lVar29 = *(long *)(lVar44 + 0x38), lVar29 == 0)) goto LAB_0249920c;
    uVar43 = *(uint *)(lVar29 + 0x18);
    if (uVar43 <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar38 = lVar29 + lVar39 * 0x178;
    uVar58 = CONCAT44(fVar65 + (float)((ulong)*(undefined8 *)(lVar38 + 0x140) >> 0x20),
                      fVar65 + (float)*(undefined8 *)(lVar38 + 0x140));
    fVar49 = fVar70 + *(float *)(lVar38 + 0x150);
    uVar59 = (ulong)(uint)fVar49;
    uVar61 = CONCAT44(fVar70 + (float)((ulong)*(undefined8 *)(lVar38 + 0x148) >> 0x20),
                      fVar70 + (float)*(undefined8 *)(lVar38 + 0x148));
    *(ulong *)(lVar38 + 0x140) = uVar58;
    *(ulong *)(lVar38 + 0x148) = uVar61;
    *(float *)(lVar38 + 0x150) = fVar49;
    if (uVar33 == uVar60) {
      uVar60 = *in_stack_00000148 - 1;
      if (uVar14 == uVar60) goto LAB_0249788c;
    }
    else {
      lVar44 = *(long *)(lVar44 + 0x50);
      if (lVar44 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar44 + 0x18) <= uVar60)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar38 = (long)(int)uVar60;
      lVar40 = lVar44 + lVar38 * 0x5c;
      uVar61 = (ulong)(uint)*(float *)(lVar40 + 0x58);
      fVar49 = fVar70 + *(float *)(lVar40 + 0x54);
      uVar58 = (ulong)(uint)fVar49;
      fVar50 = fVar65 + *(float *)(lVar40 + 0x58);
      uVar59 = (ulong)(uint)fVar50;
      *(ulong *)(lVar40 + 0x4c) =
           CONCAT44(fVar70 + (float)((ulong)*(undefined8 *)(lVar40 + 0x4c) >> 0x20),
                    fVar70 + (float)*(undefined8 *)(lVar40 + 0x4c));
      *(float *)(lVar40 + 0x54) = fVar49;
      *(float *)(lVar40 + 0x58) = fVar50;
      if (uVar43 <= *(uint *)(lVar40 + 0x34))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      uVar74 = *(undefined4 *)(lVar29 + (long)(int)*(uint *)(lVar40 + 0x34) * 0x178 + 0x11c);
      lVar44 = lVar44 + lVar38 * 0x5c;
      *(float *)(lVar44 + 0x70) = fVar49;
      *(undefined4 *)(lVar44 + 0x6c) = uVar74;
      lVar44 = *in_stack_00000150;
      if ((lVar44 == 0) || (lVar29 = *(long *)(lVar44 + 0x50), lVar29 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar29 + 0x18) <= uVar60)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar44 = *(long *)(lVar44 + 0x38);
      if (lVar44 == 0) goto LAB_0249920c;
      uVar60 = *(uint *)(lVar29 + lVar38 * 0x5c + 0x40);
      if (*(uint *)(lVar44 + 0x18) <= uVar60)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = lVar29 + lVar38 * 0x5c;
      *(undefined4 *)(lVar29 + 0x74) = *(undefined4 *)(lVar44 + (long)(int)uVar60 * 0x178 + 0x128);
      *(undefined4 *)(lVar29 + 0x78) = *(undefined4 *)(lVar29 + 0x4c);
      uVar60 = *in_stack_00000148 - 1;
LAB_0249788c:
      if (uVar14 == uVar60) {
        lVar44 = *in_stack_00000150;
        if ((lVar44 == 0) || (lVar29 = *(long *)(lVar44 + 0x50), lVar29 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar29 + 0x18) <= uVar33)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar38 = lVar29 + lVar35 * 0x5c;
        uVar61 = (ulong)(uint)*(float *)(lVar38 + 0x58);
        uVar58 = CONCAT44(fVar70 + (float)((ulong)*(undefined8 *)(lVar38 + 0x4c) >> 0x20),
                          fVar70 + (float)*(undefined8 *)(lVar38 + 0x4c));
        fVar49 = fVar70 + *(float *)(lVar38 + 0x54);
        fVar65 = fVar65 + *(float *)(lVar38 + 0x58);
        uVar59 = (ulong)(uint)fVar65;
        *(ulong *)(lVar38 + 0x4c) = uVar58;
        *(float *)(lVar38 + 0x54) = fVar49;
        *(float *)(lVar38 + 0x58) = fVar65;
        lVar44 = *(long *)(lVar44 + 0x38);
        if (lVar44 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar44 + 0x18) <= *(uint *)(lVar38 + 0x34))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar74 = *(undefined4 *)(lVar44 + (long)(int)*(uint *)(lVar38 + 0x34) * 0x178 + 0x11c);
        lVar29 = lVar29 + lVar35 * 0x5c;
        *(float *)(lVar29 + 0x70) = fVar49;
        *(undefined4 *)(lVar29 + 0x6c) = uVar74;
        lVar44 = *in_stack_00000150;
        if ((lVar44 == 0) || (lVar29 = *(long *)(lVar44 + 0x50), lVar29 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar29 + 0x18) <= uVar33)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar44 = *(long *)(lVar44 + 0x38);
        if (lVar44 == 0) goto LAB_0249920c;
        uVar60 = *(uint *)(lVar29 + lVar35 * 0x5c + 0x40);
        if (*(uint *)(lVar44 + 0x18) <= uVar60)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar29 = lVar29 + lVar35 * 0x5c;
        *(undefined4 *)(lVar29 + 0x74) = *(undefined4 *)(lVar44 + (long)(int)uVar60 * 0x178 + 0x128)
        ;
        *(undefined4 *)(lVar29 + 0x78) = *(undefined4 *)(lVar29 + 0x4c);
      }
    }
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar21 = FUN_016f9468(uVar41,0);
    if (((((uVar21 & 1) == 0) && (1 < uVar41 - 0x2010)) && (uVar41 != 0xad)) && (uVar41 != 0x2d)) {
      if (bVar7) {
        if (((uVar36 != 1) && ((int)uVar14 < (int)(*(uint *)(lVar27 + 0x18) - 1))) &&
           (((int)uVar14 < (int)*in_stack_00000148 && ((uVar41 == 0x2019 || (uVar41 == 0x27)))))) {
          if (*(uint *)(lVar27 + 0x18) <= uVar36 - 2)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar4 = *(undefined2 *)(lVar27 + lVar30 + -0x438);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar21 = FUN_016f9468(uVar4,0);
          if ((uVar21 & 1) != 0) {
            if (*(uint *)(lVar27 + 0x18) <= uVar36)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            uVar4 = *(undefined2 *)(lVar27 + lVar30 + -0x148);
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar21 = FUN_016f9468(uVar4,0);
            if ((uVar21 & 1) != 0) goto LAB_02497aa4;
          }
        }
      }
      else {
        if (uVar36 != 1) {
LAB_024985a0:
          bVar7 = false;
          goto LAB_02497aac;
        }
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar21 = FUN_016f93a0(uVar41,0);
        if ((uVar21 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar21 = FUN_016f68bc(uVar41,0);
          if (((uVar41 != 0x200b) && ((uVar21 & 1) == 0)) && (*in_stack_00000148 != 1))
          goto LAB_024985a0;
        }
      }
      if (uVar14 == *in_stack_00000148 - 1) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar21 = FUN_016f9468(uVar41,0);
        iVar16 = iVar46;
        if ((uVar21 & 1) == 0) goto LAB_02497de0;
      }
      else {
LAB_02497de0:
        iVar16 = uVar36 - 2;
      }
      lVar44 = *in_stack_00000150;
      if (lVar44 == 0) goto LAB_0249920c;
      lVar29 = *(long *)(lVar44 + 0x40);
      if (lVar29 == 0) goto LAB_0249920c;
      uVar60 = *(uint *)(lVar44 + 0x24);
      iVar17 = *(int *)(lVar29 + 0x18);
      if (iVar17 < (int)(uVar60 + 1)) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147b84((long *)(lVar44 + 0x40),iVar17 + 1,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
        lVar44 = *in_stack_00000150;
        if (lVar44 == 0) goto LAB_0249920c;
      }
      lVar29 = *(long *)(lVar44 + 0x40);
      if (lVar29 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar29 + 0x18) <= uVar60)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = lVar29 + (long)(int)uVar60 * 0x18;
      *(uint *)(lVar29 + 0x28) = uVar18;
      *(int *)(lVar29 + 0x2c) = iVar16;
      *(uint *)(lVar29 + 0x30) = (iVar16 - uVar18) + 1;
      *(long **)(lVar29 + 0x20) = unaff_x19;
      lVar29 = *(long *)(lVar44 + 0x50);
      *(int *)(lVar44 + 0x24) = *(int *)(lVar44 + 0x24) + 1;
      if (lVar29 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar29 + 0x18) <= uVar33)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = lVar29 + lVar35 * 0x5c;
      bVar7 = false;
      iStack00000000000000ac = iStack00000000000000ac + 1;
      *(int *)(lVar29 + 0x30) = *(int *)(lVar29 + 0x30) + 1;
    }
    else {
      if (!bVar7) {
        uVar18 = uVar14;
      }
      if (uVar14 == *in_stack_00000148 - 1) {
        lVar44 = *in_stack_00000150;
        if (lVar44 == 0) goto LAB_0249920c;
        lVar29 = *(long *)(lVar44 + 0x40);
        if (lVar29 == 0) goto LAB_0249920c;
        uVar60 = *(uint *)(lVar44 + 0x24);
        iVar16 = *(int *)(lVar29 + 0x18);
        if (iVar16 < (int)(uVar60 + 1)) {
          if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01147b84((long *)(lVar44 + 0x40),iVar16 + 1,
                       *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
          lVar44 = *in_stack_00000150;
          if (lVar44 == 0) goto LAB_0249920c;
        }
        lVar29 = *(long *)(lVar44 + 0x40);
        if (lVar29 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar29 + 0x18) <= uVar60)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar29 = lVar29 + (long)(int)uVar60 * 0x18;
        *(uint *)(lVar29 + 0x28) = uVar18;
        *(uint *)(lVar29 + 0x2c) = uVar14;
        *(long **)(lVar29 + 0x20) = unaff_x19;
        *(uint *)(lVar29 + 0x30) = uVar36 - uVar18;
        lVar29 = *(long *)(lVar44 + 0x50);
        *(int *)(lVar44 + 0x24) = *(int *)(lVar44 + 0x24) + 1;
        if (lVar29 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar29 + 0x18) <= uVar33)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar29 = lVar29 + lVar35 * 0x5c;
        iStack00000000000000ac = iStack00000000000000ac + 1;
        *(int *)(lVar29 + 0x30) = *(int *)(lVar29 + 0x30) + 1;
      }
LAB_02497aa4:
      bVar7 = true;
    }
LAB_02497aac:
    if ((*in_stack_00000150 == 0) || (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 == 0))
    goto LAB_0249920c;
    uVar60 = *(uint *)(lVar44 + 0x18);
    if (uVar60 <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar44 + lVar39 * 0x178 + 400) >> 2 & 1) == 0) {
      if (bVar11) {
LAB_02497adc:
        if (uVar60 <= uVar36 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar35 = *unaff_x19;
        uVar60 = *(uint *)(lVar44 + lVar30 + -0x330);
        uVar74 = *(undefined4 *)(lVar44 + lVar30 + -0x2f8);
LAB_0249805c:
        pcVar32 = *(code **)(lVar35 + 0x908);
LAB_02498064:
        uVar61 = (ulong)uVar60;
        uVar58 = (ulong)(uint)fStack0000000000000050;
        uVar59 = (ulong)(uint)fStack0000000000000054;
        (*pcVar32)(fStack0000000000000058,uVar58,uVar59,uVar61,fStack00000000000000d0,0,
                   _bStack000000000000005c,uVar74);
        puVar9 = System_Threading_Mutex_TypeInfo;
        lVar44 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar44 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar44 = *(long *)puVar9;
        }
LAB_024980b4:
        bVar11 = false;
        fVar47 = 0.0;
        fStack00000000000000d0 = *(float *)(*(long *)(lVar44 + 0xb8) + 0x15a8);
        fStack00000000000000cc = 0.0;
      }
      else {
LAB_02497fc4:
        bVar11 = false;
      }
    }
    else {
      lVar44 = lVar44 + lVar39 * 0x178;
      iVar16 = *(int *)(lVar44 + 0x68);
      *(int *)(lVar44 + 0x16c) = iVar15;
      if ((((int)unaff_x19[100] < (int)uVar14) || ((int)unaff_x19[0x65] < (int)uVar33)) ||
         (((int)unaff_x19[0x5b] == 5 && (iVar16 + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar21 = FUN_016f68bc(uVar41,0);
      if ((uVar41 != 0x200b) && ((uVar21 & 1) == 0)) {
        lVar44 = *in_stack_00000150;
        if ((lVar44 == 0) || (lVar35 = *(long *)(lVar44 + 0x38), lVar35 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar35 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar49 = *(float *)(lVar35 + lVar39 * 0x178 + 0x160);
        if (fVar47 <= fVar49) {
          fVar47 = fVar49;
        }
        if (fStack00000000000000cc <= ABS(fVar67)) {
          fStack00000000000000cc = ABS(fVar67);
        }
        if ((float)iVar16 != fStack000000000000004c) {
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar44 = *in_stack_00000150;
            if (lVar44 == 0) goto LAB_0249920c;
            lVar35 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          else {
            lVar35 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          fStack00000000000000d0 = *(float *)(lVar35 + 0x15a8);
        }
        lVar44 = *(long *)(lVar44 + 0x38);
        if (lVar44 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar44 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (unaff_x19[0x1e] == 0) goto LAB_0249920c;
        fVar50 = *(float *)(lVar44 + lVar39 * 0x178 + 0x14c);
        fVar49 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
        fVar50 = fVar50 + fVar47 * fVar49;
        if (fVar50 <= fStack00000000000000d0) {
          fStack00000000000000d0 = fVar50;
        }
        uVar58 = (ulong)(uint)fStack00000000000000d0;
        fStack000000000000004c = (float)iVar16;
      }
      if (!bVar11) {
        bVar11 = false;
        if ((((uVar41 == 0xd) || ((uVar41 | 1) == 0xb)) || ((int)uVar5 < (int)uVar14)) ||
           ((bool)(bVar1 ^ 1))) goto LAB_024980d0;
        if (uVar14 == uVar5) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar21 = FUN_016fa418(uVar41,0);
          if ((uVar21 & 1) != 0) goto LAB_02497fc4;
        }
        if ((*in_stack_00000150 == 0) ||
           (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar44 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar44 = lVar44 + lVar39 * 0x178;
        _bStack000000000000005c = *(float *)(lVar44 + 0x160);
        fStack0000000000000058 = *(float *)(lVar44 + 0x11c);
        bVar11 = fVar47 != 0.0;
        fVar49 = _bStack000000000000005c;
        if (bVar11) {
          fVar49 = fVar47;
        }
        fVar47 = fVar49;
        uStack0000000000000060 = *(uint *)(lVar44 + 0x168);
        fStack0000000000000054 = 0.0;
        fVar49 = fVar67;
        if (bVar11) {
          fVar49 = fStack00000000000000cc;
        }
        uVar58 = (ulong)(uint)fVar49;
        fStack0000000000000050 = fStack00000000000000d0;
        fStack00000000000000cc = fVar49;
      }
      if (*in_stack_00000148 == 1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 != 0)) {
          if (uVar14 < *(uint *)(lVar44 + 0x18)) {
            lVar44 = lVar44 + lVar39 * 0x178;
            lVar35 = *unaff_x19;
            uVar60 = *(uint *)(lVar44 + 0x128);
            uVar74 = *(undefined4 *)(lVar44 + 0x160);
            goto LAB_0249805c;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      if ((uVar14 == uVar6) || ((int)uVar5 <= (int)uVar14)) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar21 = FUN_016f68bc(uVar41,0);
        if ((*in_stack_00000150 != 0) &&
           (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 != 0)) {
          if (uVar41 == 0x200b || (uVar21 & 1) != 0) {
            lVar35 = lVar22;
            if (*(uint *)(lVar44 + 0x18) <= uVar5)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          else {
            lVar35 = lVar39;
            if (*(uint *)(lVar44 + 0x18) <= uVar14)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          lVar44 = lVar44 + lVar35 * 0x178;
          uVar60 = *(uint *)(lVar44 + 0x128);
          uVar74 = *(undefined4 *)(lVar44 + 0x160);
          pcVar32 = *(code **)(*unaff_x19 + 0x908);
          goto LAB_02498064;
        }
        goto LAB_0249920c;
      }
      if (!bVar1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 != 0)) {
          uVar60 = *(uint *)(lVar44 + 0x18);
          goto LAB_02497adc;
        }
        goto LAB_0249920c;
      }
      if ((int)uVar14 < (int)(*in_stack_00000148 - 1)) {
        if ((*in_stack_00000150 == 0) ||
           (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar44 + 0x18) <= uVar36)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar21 = FUN_024a9e4c(uStack0000000000000060,*(undefined4 *)(lVar44 + lVar30),0);
        if ((uVar21 & 1) == 0) {
          if ((*in_stack_00000150 != 0) &&
             (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 != 0)) {
            if (uVar14 < *(uint *)(lVar44 + 0x18)) {
              lVar44 = lVar44 + lVar39 * 0x178;
              uVar61 = (ulong)*(uint *)(lVar44 + 0x128);
              uVar59 = (ulong)(uint)fStack0000000000000054;
              uVar58 = (ulong)(uint)fStack0000000000000050;
              (**(code **)(*unaff_x19 + 0x908))
                        (fStack0000000000000058,uVar58,uVar59,uVar61,fStack00000000000000d0,0,
                         _bStack000000000000005c,*(undefined4 *)(lVar44 + 0x160));
              puVar9 = System_Threading_Mutex_TypeInfo;
              lVar44 = *(long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(lVar44 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar44 = *(long *)puVar9;
              }
              goto LAB_024980b4;
            }
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          goto LAB_0249920c;
        }
      }
      bVar11 = true;
    }
LAB_024980d0:
    if ((*in_stack_00000150 == 0) || (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar44 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if (lVar37 == 0) goto LAB_0249920c;
    uVar60 = *(uint *)(lVar44 + lVar39 * 0x178 + 400);
    fVar49 = (float)FUN_026fd1f0(lVar37 + 0x50,0);
    if ((uVar60 >> 6 & 1) == 0) {
      if (bVar12) {
        if ((*in_stack_00000150 == 0) ||
           (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar44 + 0x18) <= uVar36 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar60 = *(uint *)(lVar44 + lVar30 + -0x330);
        pcVar32 = *(code **)(*unaff_x19 + 0x908);
        fVar70 = fStack0000000000000088 * fVar49 + *(float *)(lVar44 + lVar30 + -0x30c);
LAB_02498648:
        uVar61 = (ulong)uVar60;
        uVar58 = (ulong)(uint)in_stack_00000078._4_4_;
        uVar59 = (ulong)in_stack_00000068._4_4_;
        (*pcVar32)(fStack0000000000000080,uVar58,uVar59,uVar61,fVar70,0,fStack0000000000000088,
                   fStack0000000000000088);
      }
LAB_0249867c:
      bVar12 = false;
    }
    else {
      lVar44 = *in_stack_00000150;
      if ((lVar44 == 0) || (lVar35 = *(long *)(lVar44 + 0x38), lVar35 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar35 + 0x18) <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      *(int *)(lVar35 + lVar39 * 0x178 + 0x174) = iVar15;
      if ((((int)unaff_x19[100] < (int)uVar14) || ((int)unaff_x19[0x65] < (int)uVar33)) ||
         (((int)unaff_x19[0x5b] == 5 &&
          (*(int *)(lVar35 + lVar39 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((((uVar41 == 0xd) || ((uVar41 | 1) == 0xb)) || ((int)uVar5 < (int)uVar14)) ||
         (bVar12 || !bVar1)) {
LAB_02498228:
        if (!bVar12) goto LAB_0249867c;
      }
      else {
        if (uVar14 == uVar5) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar21 = FUN_016fa418(uVar41,0);
          if ((uVar21 & 1) != 0) goto LAB_02498228;
          lVar44 = *in_stack_00000150;
          if (lVar44 == 0) goto LAB_0249920c;
        }
        lVar44 = *(long *)(lVar44 + 0x38);
        if (lVar44 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar44 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar44 = lVar44 + lVar39 * 0x178;
        fStack0000000000000034 = *(float *)(lVar44 + 0x60);
        fStack0000000000000088 = *(float *)(lVar44 + 0x160);
        fStack0000000000000030 = *(float *)(lVar44 + 0x14c);
        uVar58 = (ulong)(uint)fStack0000000000000030;
        fStack0000000000000080 = *(float *)(lVar44 + 0x11c);
        in_stack_00000078._4_4_ = fVar49 * fStack0000000000000088 + fStack0000000000000030;
        in_stack_00000068._4_4_ = 0;
      }
      uVar60 = *in_stack_00000148;
      if (uVar60 == 1) {
LAB_024983ac:
        if ((*in_stack_00000150 != 0) &&
           (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 != 0)) {
          if (uVar14 < *(uint *)(lVar44 + 0x18)) {
            lVar44 = lVar44 + lVar39 * 0x178;
            lVar22 = *unaff_x19;
            uVar60 = *(uint *)(lVar44 + 0x128);
            fVar70 = *(float *)(lVar44 + 0x14c);
LAB_024983d8:
            pcVar32 = *(code **)(lVar22 + 0x908);
FUN_02498644:
            fVar70 = fVar49 * fStack0000000000000088 + fVar70;
            goto LAB_02498648;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      if (uVar14 == uVar6) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar21 = FUN_016f68bc(uVar41,0);
        if ((*in_stack_00000150 != 0) &&
           (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 != 0)) {
          uVar60 = *(uint *)(lVar44 + 0x18);
          if (uVar41 == 0x200b || (uVar21 & 1) != 0) {
            if (uVar60 <= uVar5)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          else {
LAB_02498620:
            lVar22 = lVar39;
            if (uVar60 <= uVar14)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
LAB_02498628:
          lVar44 = lVar44 + lVar22 * 0x178;
          fVar70 = *(float *)(lVar44 + 0x14c);
          uVar60 = *(uint *)(lVar44 + 0x128);
          pcVar32 = *(code **)(*unaff_x19 + 0x908);
          goto FUN_02498644;
        }
        goto LAB_0249920c;
      }
      if ((int)uVar14 < (int)uVar60) {
        lVar44 = *in_stack_00000150;
        if ((lVar44 != 0) && (lVar35 = *(long *)(lVar44 + 0x38), lVar35 != 0)) {
          if (uVar36 < *(uint *)(lVar35 + 0x18)) {
            if (*(float *)(lVar35 + lVar30 + -0x108) == fStack0000000000000034) {
              fVar50 = *(float *)(lVar35 + lVar30 + -0x1c);
              if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar58 = (ulong)(uint)fStack0000000000000030;
              uVar21 = FUN_024aa280(fVar70 + fVar50,uVar58,0);
              if ((uVar21 & 1) != 0) {
                uVar60 = *in_stack_00000148;
                goto 
                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractor_OnSelectEntering
                ;
              }
              lVar44 = *in_stack_00000150;
              if (lVar44 == 0) goto LAB_0249920c;
            }
            lVar44 = *(long *)(lVar44 + 0x38);
            if (lVar44 != 0) {
              uVar60 = *(uint *)(lVar44 + 0x18);
              if ((int)uVar14 <= (int)uVar5) goto LAB_02498620;
              if (uVar5 < uVar60) goto LAB_02498628;
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
      if ((int)uVar14 < (int)uVar60) {
        iVar16 = FUN_02681c0c(lVar37,0);
        if (*(uint *)(lVar27 + 0x18) <= uVar36)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar44 = *(long *)(lVar27 + lVar30 + -0x130);
        if (lVar44 == 0) goto LAB_0249920c;
        iVar17 = FUN_02681c0c(lVar44,0);
        if (iVar16 != iVar17) goto LAB_024983ac;
      }
      if (!bVar1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 != 0)) {
          if (uVar36 - 2 < *(uint *)(lVar44 + 0x18)) {
            lVar22 = *unaff_x19;
            uVar60 = *(uint *)(lVar44 + lVar30 + -0x330);
            fVar70 = *(float *)(lVar44 + lVar30 + -0x30c);
            goto LAB_024983d8;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      bVar12 = true;
    }
    if ((*in_stack_00000150 == 0) || (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 == 0))
    goto LAB_0249920c;
    uVar60 = (uint)*(undefined8 *)(lVar44 + 0x18);
    if (uVar60 <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar44 + lVar39 * 0x178 + 0x191) >> 1 & 1) == 0) {
      if (bVar8) {
        uVar59 = (ulong)uStack00000000000000a0;
        uVar61 = (ulong)(uint)fStack00000000000000a4;
        uVar58 = (ulong)(uint)fStack00000000000000b4;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar58,uVar59,uVar61,fStack00000000000000a8,uVar59);
      }
LAB_024986e8:
      bVar8 = false;
    }
    else {
      if ((((int)unaff_x19[100] < (int)uVar14) || ((int)unaff_x19[0x65] < (int)uVar33)) ||
         (((int)unaff_x19[0x5b] == 5 &&
          (*(int *)(lVar44 + lVar39 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar8) {
        if ((((uVar41 == 0xd) || ((uVar41 | 1) == 0xb)) || ((int)uVar5 < (int)uVar14)) || (!bVar1))
        goto LAB_024986e8;
        if (uVar14 == uVar5) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar21 = FUN_016fa418(uVar41,0);
          if ((uVar21 & 1) != 0) goto LAB_024986e8;
        }
        puVar9 = System_Threading_Mutex_TypeInfo;
        lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar22 = *(long *)puVar9;
        }
        if ((*in_stack_00000150 == 0) ||
           (lVar44 = *(long *)(*in_stack_00000150 + 0x38), lVar44 == 0)) goto LAB_0249920c;
        uVar60 = (uint)*(undefined8 *)(lVar44 + 0x18);
        if (uVar60 <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar22 = *(long *)(lVar22 + 0xb8);
        lVar35 = lVar44 + lVar39 * 0x178;
        in_stack_00001798 = *(undefined8 *)(lVar35 + 0x184);
        in_stack_00001790 = *(undefined8 *)(lVar35 + 0x17c);
        fStack00000000000000b0 = *(float *)(lVar22 + 0x1598);
        in_stack_000017a0 = *(float *)(lVar35 + 0x18c);
        fStack00000000000000b4 = *(float *)(lVar22 + 0x159c);
        fStack00000000000000a4 = *(float *)(lVar22 + 0x15a0);
        fStack00000000000000a8 = *(float *)(lVar22 + 0x15a4);
        uStack00000000000000a0 = 0;
      }
      if (uVar60 <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar44 = lVar44 + lVar39 * 0x178;
      fVar51 = *(float *)(lVar44 + 0x188);
      uVar20 = *(undefined8 *)(lVar44 + 0x17c);
      fVar64 = *(float *)(lVar44 + 0x184);
      uVar19 = *(undefined8 *)(lVar44 + 0x184);
      fVar52 = *(float *)(lVar44 + 0x18c);
      fVar70 = *(float *)(lVar44 + 0x11c);
      fVar50 = *(float *)(lVar44 + 0x128);
      fVar71 = *(float *)(lVar44 + 0x148);
      fVar49 = *(float *)(lVar44 + 0x150);
      in_stack_00000158 = uVar20;
      fStack0000000000000160 = fVar64;
      fStack0000000000000164 = fVar51;
      in_stack_00000168 = fVar52;
      in_stack_00000170 = in_stack_00001790;
      in_stack_00000178 = in_stack_00001798;
      in_stack_00000180 = in_stack_000017a0;
      uVar21 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
      lVar44 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
      if ((uVar21 & 1) == 0) {
        if (*(int *)(lVar44 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar44);
        }
        fVar70 = fVar70 - (float)((ulong)in_stack_00001790 >> 0x20);
        if (fVar70 <= fStack00000000000000b0) {
          fStack00000000000000b0 = fVar70;
        }
        fVar49 = fVar49 - in_stack_000017a0;
        uVar58 = (ulong)(uint)fVar49;
        fVar50 = fVar50 + (float)in_stack_00001798;
        uVar59 = (ulong)(uint)fVar50;
        if (fVar49 <= fStack00000000000000b4) {
          fStack00000000000000b4 = fVar49;
        }
        fVar71 = fVar71 + (float)((ulong)in_stack_00001798 >> 0x20);
        uVar61 = (ulong)(uint)fVar71;
        if (fStack00000000000000a4 <= fVar50) {
          fStack00000000000000a4 = fVar50;
        }
        if (fStack00000000000000a8 <= fVar71) {
          fStack00000000000000a8 = fVar71;
        }
      }
      else {
        if (*(int *)(lVar44 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar44);
        }
        fVar70 = (fVar70 + (fStack00000000000000a4 - (float)in_stack_00001798)) * 0.5;
        uVar61 = (ulong)(uint)fVar70;
        if (fVar49 <= fStack00000000000000b4) {
          fStack00000000000000b4 = fVar49;
        }
        uVar58 = (ulong)(uint)fStack00000000000000b4;
        uVar59 = (ulong)uStack00000000000000a0;
        if (fStack00000000000000a8 <= fVar71) {
          fStack00000000000000a8 = fVar71;
        }
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar58,uVar59,uVar61,fStack00000000000000a8,uVar59);
        fStack00000000000000b4 = fVar49 - fVar52;
        fStack00000000000000a4 = fVar50 + fVar64;
        uStack00000000000000a0 = 0;
        fStack00000000000000a8 = fVar71 + fVar51;
        fStack00000000000000b0 = fVar70;
        in_stack_00001790 = uVar20;
        in_stack_00001798 = uVar19;
        in_stack_000017a0 = fVar52;
      }
      if (((*in_stack_00000148 == 1) || (uVar14 == uVar6)) ||
         (((int)uVar5 <= (int)uVar14 || (!bVar1)))) {
        uVar59 = (ulong)uStack00000000000000a0;
        uVar61 = (ulong)(uint)fStack00000000000000a4;
        uVar58 = (ulong)(uint)fStack00000000000000b4;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar58,uVar59,uVar61,fStack00000000000000a8,uVar59);
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
    }
    uVar14 = *in_stack_00000148;
    iVar46 = iVar46 + 1;
    lVar30 = lVar30 + 0x178;
    bVar1 = (int)uVar36 < (int)uVar14;
    uVar60 = uVar33;
    uVar36 = uVar36 + 1;
  } while (bVar1);
  lVar27 = *in_stack_00000150;
  if (lVar27 != 0) {
    iVar15 = uVar33 + 1;
LAB_02498c58:
    puVar10 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    puVar9 = PTR_DAT_033ed410;
    *(uint *)(lVar27 + 0x18) = uVar14;
    lVar30 = unaff_x19[0xd3];
    *(int *)(lVar27 + 0x2c) = iVar15;
    iVar15 = iStack00000000000000ac;
    if ((int)uVar14 < 1) {
      iVar15 = 1;
    }
    if (iStack00000000000000ac == 0) {
      iVar15 = 1;
    }
    *(int *)(lVar27 + 0x1c) = (int)lVar30;
    *(int *)(lVar27 + 0x24) = iVar15;
    *(int *)(lVar27 + 0x30) = (int)unaff_x19[0x95] + 1;
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
    lVar27 = unaff_x19[0xde];
    if (lVar27 != 0) {
      (**(code **)(lVar27 + 0x18))
                (*(undefined8 *)(lVar27 + 0x40),*in_stack_00000150,*(undefined8 *)(lVar27 + 0x28));
    }
    if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
    iVar15 = FUN_02859dc4(unaff_x19[0xe4],0);
    if (iVar15 != 0x19) {
      lVar27 = unaff_x19[0xe4];
      if (lVar27 == 0) goto LAB_0249920c;
      uVar14 = FUN_02859dc4(lVar27,0);
      FUN_02859e00(lVar27,uVar14 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
      if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x60), lVar27 == 0))
      goto LAB_0249920c;
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(int *)(lVar27 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      FUN_024e8000(lVar27 + 0x20,1,0);
    }
    if (unaff_x19[0x73] != 0) {
      UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
                (unaff_x19[0x73],0);
      if ((unaff_x19[0x6c] != 0) && (lVar27 = *(long *)(unaff_x19[0x6c] + 0x60), lVar27 != 0)) {
        if (*(int *)(lVar27 + 0x18) == 0) {
UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (unaff_x19[0x73] != 0) {
          FUN_0266b9c4(unaff_x19[0x73],*(undefined8 *)(lVar27 + 0x30),0);
          if ((unaff_x19[0x6c] != 0) && (lVar27 = *(long *)(unaff_x19[0x6c] + 0x60), lVar27 != 0)) {
            if (*(int *)(lVar27 + 0x18) == 0)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            if (unaff_x19[0x73] != 0) {
              FUN_0266bbc8(unaff_x19[0x73],*(undefined8 *)(lVar27 + 0x48),0);
              if ((unaff_x19[0x6c] != 0) &&
                 (lVar27 = *(long *)(unaff_x19[0x6c] + 0x60), lVar27 != 0)) {
                if (*(int *)(lVar27 + 0x18) == 0)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                if (unaff_x19[0x73] != 0) {
                  FUN_0266bc74(unaff_x19[0x73],*(undefined8 *)(lVar27 + 0x50),0);
                  if ((unaff_x19[0x6c] != 0) &&
                     (lVar27 = *(long *)(unaff_x19[0x6c] + 0x60), lVar27 != 0)) {
                    if (*(int *)(lVar27 + 0x18) == 0)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    if (unaff_x19[0x73] != 0) {
                      FUN_0266c1dc(unaff_x19[0x73],*(undefined8 *)(lVar27 + 0x58),0);
                      if (unaff_x19[0x73] != 0) {
                        FUN_0266ed90(unaff_x19[0x73],0);
                        if (unaff_x19[0xe3] != 0) {
                          FUN_02858f1c(unaff_x19[0xe3],unaff_x19[0x73],0);
                          if (unaff_x19[0xe3] != 0) {
                            uVar19 = FUN_02858bac(unaff_x19[0xe3],0);
                            if (unaff_x19[0xe3] != 0) {
                              uVar14 = FUN_02858a14(unaff_x19[0xe3],0);
                              lVar27 = *in_stack_00000150;
                              if (lVar27 != 0) {
                                lVar44 = 0;
                                lVar30 = 0;
                                do {
                                  uVar21 = lVar30 + 1;
                                  if ((long)*(int *)(lVar27 + 0x34) <= (long)uVar21)
                                  goto LAB_02496098;
                                  lVar27 = *(long *)(lVar27 + 0x60);
                                  if (lVar27 == 0) break;
                                  if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  if (*(uint *)(lVar27 + 0x18) <= uVar21)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  FUN_024e7ecc(lVar27 + lVar44 + 0x70,0);
                                  lVar27 = unaff_x19[0xe0];
                                  if (lVar27 == 0) break;
                                  if (*(uint *)(lVar27 + 0x18) <= uVar21)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  uVar20 = *(undefined8 *)(lVar27 + lVar30 * 8 + 0x28);
                                  if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  uVar24 = FUN_0268b4e0(uVar20,0,0);
                                  if ((uVar24 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
                                      if ((*in_stack_00000150 == 0) ||
                                         (lVar27 = *(long *)(*in_stack_00000150 + 0x60), lVar27 == 0
                                         )) break;
                                      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                                        thunk_FUN_00d32864();
                                      }
                                      if (*(uint *)(lVar27 + 0x18) <= uVar21)
                                      goto 
                                      UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                      ;
                                      FUN_024e8000(lVar27 + lVar44 + 0x70,1,0);
                                    }
                                    lVar27 = unaff_x19[0xe0];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar27 = *(long *)(lVar27 + lVar30 * 8 + 0x28);
                                    if (lVar27 == 0) break;
                                    lVar27 = FUN_024f0144(lVar27,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar22 = *(long *)(*in_stack_00000150 + 0x60), lVar22 == 0))
                                    break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar27 == 0) break;
                                    FUN_0266b9c4(lVar27,*(undefined8 *)(lVar22 + lVar44 + 0x80),0);
                                    lVar27 = unaff_x19[0xe0];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar27 = *(long *)(lVar27 + lVar30 * 8 + 0x28);
                                    if (lVar27 == 0) break;
                                    lVar27 = FUN_024f0144(lVar27,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar22 = *(long *)(*in_stack_00000150 + 0x60), lVar22 == 0))
                                    break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar27 == 0) break;
                                    FUN_0266bbc8(lVar27,*(undefined8 *)(lVar22 + lVar44 + 0x98),0);
                                    lVar27 = unaff_x19[0xe0];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar27 = *(long *)(lVar27 + lVar30 * 8 + 0x28);
                                    if (lVar27 == 0) break;
                                    lVar27 = FUN_024f0144(lVar27,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar22 = *(long *)(*in_stack_00000150 + 0x60), lVar22 == 0))
                                    break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar27 == 0) break;
                                    FUN_0266bc74(lVar27,*(undefined8 *)(lVar22 + lVar44 + 0xa0),0);
                                    lVar27 = unaff_x19[0xe0];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar27 = *(long *)(lVar27 + lVar30 * 8 + 0x28);
                                    if (lVar27 == 0) break;
                                    lVar27 = FUN_024f0144(lVar27,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar22 = *(long *)(*in_stack_00000150 + 0x60), lVar22 == 0))
                                    break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar27 == 0) break;
                                    FUN_0266c1dc(lVar27,*(undefined8 *)(lVar22 + lVar44 + 0xa8),0);
                                    lVar27 = unaff_x19[0xe0];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar27 = *(long *)(lVar27 + lVar30 * 8 + 0x28);
                                    if ((lVar27 == 0) ||
                                       (lVar27 = FUN_024f0144(lVar27,0), lVar27 == 0)) break;
                                    FUN_0266ed90(lVar27,0);
                                    lVar27 = unaff_x19[0xe0];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar27 = *(long *)(lVar27 + lVar30 * 8 + 0x28);
                                    if (lVar27 == 0) break;
                                    lVar27 = FUN_02738ef4(lVar27,0);
                                    lVar22 = unaff_x19[0xe0];
                                    if (lVar22 == 0) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar22 = *(long *)(lVar22 + lVar30 * 8 + 0x28);
                                    if ((lVar22 == 0) ||
                                       (uVar20 = FUN_024f0144(lVar22,0), lVar27 == 0)) break;
                                    FUN_02858f1c(lVar27,uVar20,0);
                                    lVar27 = unaff_x19[0xe0];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar27 = *(long *)(lVar27 + lVar30 * 8 + 0x28);
                                    if ((lVar27 == 0) ||
                                       (lVar27 = FUN_02738ef4(lVar27,0), lVar27 == 0)) break;
                                    FUN_02858b14(uVar19,uVar58,uVar59,uVar61,lVar27,0);
                                    lVar27 = unaff_x19[0xe0];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar27 = *(long *)(lVar27 + lVar30 * 8 + 0x28);
                                    if ((lVar27 == 0) ||
                                       (lVar27 = FUN_02738ef4(lVar27,0), lVar27 == 0)) break;
                                    FUN_02858a50(lVar27,uVar14 & 1,0);
                                    lVar27 = unaff_x19[0xe0];
                                    if (lVar27 == 0) break;
                                    if (*(uint *)(lVar27 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    plVar42 = *(long **)(lVar27 + lVar30 * 8 + 0x28);
                                    uVar18 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar42 == (long *)0x0) break;
                                    (**(code **)(*plVar42 + 0x2c8))
                                              (plVar42,uVar18 & 1,*(undefined8 *)(*plVar42 + 0x2d0))
                                    ;
                                  }
                                  lVar27 = *in_stack_00000150;
                                  lVar30 = lVar30 + 1;
                                  lVar44 = lVar44 + 0x50;
                                } while (lVar27 != 0);
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


