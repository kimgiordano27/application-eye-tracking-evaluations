/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor$$IsSelecting
ENTRY_POINT: 02495e44
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

void UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__IsSelecting
               (long *param_1,undefined1 param_2 [16],ulong param_3)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  double __x;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
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
  int *piVar21;
  ulong uVar22;
  undefined8 uVar23;
  ulong uVar24;
  undefined1 uVar25;
  char cVar26;
  undefined4 *puVar27;
  long lVar28;
  long lVar29;
  float *pfVar30;
  code *pcVar31;
  uint uVar32;
  float *pfVar33;
  long lVar34;
  uint uVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long *unaff_x19;
  uint uVar40;
  uint uVar41;
  long lVar42;
  long lVar43;
  long *plVar44;
  long unaff_x27;
  undefined **unaff_x28;
  long *plVar45;
  int iVar46;
  undefined **unaff_x29;
  long *plVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  double dVar58;
  ulong uVar59;
  ulong uVar60;
  uint uVar61;
  ulong uVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float unaff_s12;
  float fVar72;
  float fVar73;
  ulong unaff_d13;
  float fVar74;
  undefined4 uVar75;
  float fVar76;
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
  uint uStack000000000000006c;
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
  char in_stack_000017b4;
  float in_stack_000017b8;
  uint in_stack_000017bc;
  
code_r0x02495e44:
  lVar43 = unaff_x19[0x5c];
  plVar45 = (long *)unaff_x28[0xd9];
  plVar47 = (long *)unaff_x29[0xe6];
  if (*(int *)(*param_1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar22 = FUN_02681b9c(lVar43,0,0);
  if ((uVar22 & 1) != 0) {
    plVar44 = (long *)unaff_x19[0x5c];
    uVar23 = (**(code **)(*unaff_x19 + 0x548))();
    if (plVar44 == (long *)0x0) goto LAB_0249920c;
    (**(code **)(*plVar44 + 0x558))(plVar44,uVar23,*(undefined8 *)(*plVar44 + 0x560));
    lVar43 = unaff_x19[0x5c];
    if (lVar43 == 0) goto LAB_0249920c;
    *(int *)(lVar43 + 0x3f8) = (int)unaff_x19[0x7f];
    FUN_024c910c(lVar43,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
    plVar44 = (long *)unaff_x19[0x5c];
    if (plVar44 == (long *)0x0) goto LAB_0249920c;
    (**(code **)(*plVar44 + 0x7d8))(plVar44,0,0,*(undefined8 *)(*plVar44 + 0x7e0));
    *(undefined1 *)(unaff_x19 + 0x5e) = 1;
  }
  bVar7 = false;
LAB_02494484:
  uVar23 = CONCAT44(3,*in_stack_00000148);
LAB_02492630:
  fVar64 = (float)unaff_d13;
  in_stack_00001788 = in_stack_00001788 + 1;
  lVar43 = unaff_x19[0x8e];
  if (lVar43 != 0) {
    if ((int)in_stack_00001788 < (int)*(uint *)(lVar43 + 0x18)) {
      if (*(uint *)(lVar43 + 0x18) <= in_stack_00001788)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      uVar14 = *(uint *)(lVar43 + (long)(int)in_stack_00001788 * 0xc + 0x20);
      if (uVar14 == 0) goto LAB_02495f1c;
      if (5 < in_stack_00000140) {
        uVar23 = FUN_0176eb1c(&stack0x000017bc,0);
        uVar19 = FUN_0176eb1c(&stack0x00001788,0);
        uVar23 = FUN_0160073c(*(undefined8 *)UnityEngine_Rendering_Universal_DebugValidationMode_var
                              ,uVar23,*(undefined8 *)
                                       Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                              ,uVar19,0);
        if (*(int *)(*plVar45 + 0xe0) == 0) {
          thunk_FUN_00d32864(*plVar45);
        }
        FUN_026610e4(uVar23,0);
        uVar23 = CONCAT44(3,*in_stack_00000148);
      }
      if ((*(char *)((long)unaff_x19 + 0x2fa) != '\0') && (uVar14 == 0x3c)) goto code_r0x02492440;
      if ((*in_stack_00000150 != 0) && (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 != 0))
      {
        if (*in_stack_00000148 < *(uint *)(lVar43 + 0x18)) {
          lVar43 = lVar43 + (int)*in_stack_00000148 * unaff_x27;
          *(undefined4 *)((long)unaff_x19 + 0x63c) = *(undefined4 *)(lVar43 + 0x2c);
          *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar43 + 0x58);
          unaff_x19[0x1f] = *(long *)(lVar43 + 0x38);
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorReticleVisual__get_prefabScalingFactor
          ;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      }
      goto LAB_0249920c;
    }
LAB_02495f1c:
    fVar64 = (float)param_3;
    if (((char)unaff_x19[0x46] != '\0') &&
       (fVar64 = DAT_02956ccc,
       DAT_02956ccc < *(float *)((long)unaff_x19 + 0x234) - *(float *)(unaff_x19 + 0x47))) {
      fVar64 = *(float *)((long)unaff_x19 + 0x1dc);
      fVar74 = *(float *)((long)unaff_x19 + 0x24c);
      if ((fVar64 < fVar74) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
        if (*(float *)((long)unaff_x19 + 0x2cc) < *(float *)(unaff_x19 + 0x59) / 100.0) {
          *(undefined4 *)((long)unaff_x19 + 0x2cc) = 0;
        }
        fVar48 = (*(float *)((long)unaff_x19 + 0x234) - fVar64) * 0.5;
        if (fVar48 <= DAT_028aa298) {
          fVar48 = DAT_028aa298;
        }
        *(float *)(unaff_x19 + 0x47) = fVar64;
        fVar48 = (fVar64 + fVar48) * 20.0 + 0.5;
        fVar64 = DAT_02958220;
        if (fVar48 != INFINITY) {
          fVar64 = (float)(int)fVar48 / 20.0;
        }
        if (fVar74 <= fVar64) {
          fVar64 = fVar74;
        }
        goto LAB_02495fd8;
      }
    }
    *(undefined1 *)((long)unaff_x19 + 0x244) = 1;
    if ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c)) {
      uVar23 = FUN_0176eb1c(in_stack_00000038,0);
      uVar19 = FUN_017840ac(in_stack_00000040,0);
      uVar23 = FUN_0160073c(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlah_s16__,
                            uVar23,*(undefined8 *)
                                    Method_UnityEngine_GameObject_GetComponents<Component>__,uVar19,
                            0);
      if (*(int *)(*plVar45 + 0xe0) == 0) {
        thunk_FUN_00d32864(*plVar45);
      }
      FUN_02660dac(uVar23,0);
    }
    if ((*in_stack_00000148 == 0) || ((*in_stack_00000148 == 1 && (in_stack_000017bc == 3)))) {
      (**(code **)(*unaff_x19 + 0x948))();
      goto LAB_02496098;
    }
    lVar43 = *plVar47;
    if (*(int *)(lVar43 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar43 = *plVar47;
    }
    puVar8 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    lVar43 = **(long **)(lVar43 + 0xb8);
    if (lVar43 == 0) goto LAB_0249920c;
    if (*(uint *)(lVar43 + 0x18) <= *(uint *)(unaff_x19 + 0xd0))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    iVar15 = *(int *)(lVar43 + (long)(int)*(uint *)(unaff_x19 + 0xd0) * 0x38 + 0x54) << 2;
    if ((*in_stack_00000150 == 0) || (lVar43 = *(long *)(*in_stack_00000150 + 0x60), lVar43 == 0))
    goto LAB_0249920c;
    if (*(int *)(*(long *)PTR_DAT_033ed410 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (*(int *)(lVar43 + 0x18) == 0)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    FUN_024e7d94(lVar43 + 0x20,0,0);
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774d76 = '\x01';
    }
    puVar9 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
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
    lVar43 = unaff_x19[0xe2];
    _in_stack_00000090 = uStack00000000000000c0;
    fStack0000000000000098 = in_stack_000000c8;
    if (iVar13 < 0x401) {
      if (iVar13 == 0x100) {
        if (lVar43 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar43 + 0x18) < 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar23 = *(undefined8 *)(lVar43 + 0x30);
        if ((int)unaff_x19[0x5b] == 5) {
          if ((*in_stack_00000150 == 0) ||
             (lVar29 = *(long *)(*in_stack_00000150 + 0x58), lVar29 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar29 + 0x18) <= uStack000000000000002c)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar64 = *(float *)(lVar29 + (long)(int)uStack000000000000002c * 0x14 + 0x28);
        }
        else {
          fVar64 = *(float *)(unaff_x19 + 0x96);
        }
        fStack0000000000000098 = fStack0000000000000030 + 0.0 + *(float *)(lVar43 + 0x2c);
        fVar64 = (0.0 - fVar64) - fStack0000000000000020;
      }
      else if (iVar13 == 0x200) {
        if (lVar43 == 0) goto LAB_0249920c;
        if ((*(int *)(lVar43 + 0x18) == 1) || (*(int *)(lVar43 + 0x18) == 0))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fStack0000000000000098 = (*(float *)(lVar43 + 0x20) + *(float *)(lVar43 + 0x2c)) * 0.5;
        uVar23 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar43 + 0x24) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar43 + 0x30) >> 0x20)) * 0.5,
                          ((float)*(undefined8 *)(lVar43 + 0x24) +
                          (float)*(undefined8 *)(lVar43 + 0x30)) * 0.5);
        if ((int)unaff_x19[0x5b] == 5) {
          if ((*in_stack_00000150 == 0) ||
             (lVar43 = *(long *)(*in_stack_00000150 + 0x58), lVar43 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar43 + 0x18) <= uStack000000000000002c)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar43 = lVar43 + (long)(int)uStack000000000000002c * 0x14;
          fStack0000000000000098 = fStack0000000000000030 + 0.0 + fStack0000000000000098;
          fVar64 = ((fStack0000000000000020 + *(float *)(lVar43 + 0x28) + *(float *)(lVar43 + 0x30))
                   - fStack0000000000000024) * -0.5 + 0.0;
        }
        else {
          fStack0000000000000098 = fStack0000000000000030 + 0.0 + fStack0000000000000098;
          fVar64 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x96) + in_stack_000017b8) -
                   fStack0000000000000024) * -0.5 + 0.0;
        }
      }
      else {
        if (iVar13 != 0x400) goto LAB_024965d0;
        if (lVar43 == 0) goto LAB_0249920c;
        if (*(int *)(lVar43 + 0x18) == 0)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar23 = *(undefined8 *)(lVar43 + 0x24);
        if ((int)unaff_x19[0x5b] == 5) {
          if ((*in_stack_00000150 == 0) ||
             (lVar29 = *(long *)(*in_stack_00000150 + 0x58), lVar29 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar29 + 0x18) <= uStack000000000000002c)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          in_stack_000017b8 = *(float *)(lVar29 + (long)(int)uStack000000000000002c * 0x14 + 0x30);
        }
        fStack0000000000000098 = fStack0000000000000030 + 0.0 + *(float *)(lVar43 + 0x20);
        fVar64 = fStack0000000000000024 + (0.0 - in_stack_000017b8);
      }
      _in_stack_00000090 = CONCAT44((float)((ulong)uVar23 >> 0x20) + 0.0,(float)uVar23 + fVar64);
    }
    else if (iVar13 == 0x800) {
      if (lVar43 == 0) goto LAB_0249920c;
      if ((*(int *)(lVar43 + 0x18) == 1) || (*(int *)(lVar43 + 0x18) == 0))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      fVar64 = ((float)*(undefined8 *)(lVar43 + 0x24) + (float)*(undefined8 *)(lVar43 + 0x30)) * 0.5
      ;
      fStack0000000000000098 =
           fStack0000000000000030 + 0.0 +
           (*(float *)(lVar43 + 0x20) + *(float *)(lVar43 + 0x2c)) * 0.5;
      _in_stack_00000090 =
           CONCAT44(((float)((ulong)*(undefined8 *)(lVar43 + 0x24) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar43 + 0x30) >> 0x20)) * 0.5 + 0.0,fVar64 + 0.0
                   );
    }
    else {
      if (iVar13 == 0x1000) {
        if (lVar43 == 0) goto LAB_0249920c;
        if ((*(int *)(lVar43 + 0x18) == 1) || (*(int *)(lVar43 + 0x18) == 0))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar64 = (float)*(undefined8 *)(lVar43 + 0x24) + (float)*(undefined8 *)(lVar43 + 0x30);
        fVar74 = (float)((ulong)*(undefined8 *)(lVar43 + 0x24) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(lVar43 + 0x30) >> 0x20);
        fStack0000000000000020 =
             fStack0000000000000020 + *(float *)(unaff_x19 + 0x9c) + *(float *)(unaff_x19 + 0x9b);
        fStack0000000000000098 =
             fStack0000000000000030 + 0.0 +
             (*(float *)(lVar43 + 0x20) + *(float *)(lVar43 + 0x2c)) * 0.5;
      }
      else {
        if (iVar13 != 0x2000) goto LAB_024965d0;
        if (lVar43 == 0) goto LAB_0249920c;
        if ((*(int *)(lVar43 + 0x18) == 1) || (*(int *)(lVar43 + 0x18) == 0))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar64 = (float)*(undefined8 *)(lVar43 + 0x24) + (float)*(undefined8 *)(lVar43 + 0x30);
        fVar74 = (float)((ulong)*(undefined8 *)(lVar43 + 0x24) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(lVar43 + 0x30) >> 0x20);
        fStack0000000000000020 = *(float *)((long)unaff_x19 + 0x4b4) - fStack0000000000000020;
        fStack0000000000000098 =
             fStack0000000000000030 + 0.0 +
             (*(float *)(lVar43 + 0x20) + *(float *)(lVar43 + 0x2c)) * 0.5;
      }
      fVar64 = fVar64 * 0.5;
      _in_stack_00000090 =
           CONCAT44(fVar74 * 0.5 + 0.0,
                    fVar64 + (0.0 - (fStack0000000000000020 - fStack0000000000000024) * 0.5));
    }
LAB_024965d0:
    if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
    uVar23 = FUN_0285a188(unaff_x19[0xe4],0);
    if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar8);
    }
    uVar22 = FUN_0268b4e0(uVar23,0,0);
    lVar43 = FUN_024c933c();
    if (lVar43 == 0) goto LAB_0249920c;
    FUN_026a125c(lVar43,0);
    *(float *)(unaff_x19 + 0xe1) = fVar64;
    if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
    iVar13 = FUN_02859798(unaff_x19[0xe4],0);
    if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
    fVar74 = (float)FUN_028598f0(unaff_x19[0xe4],0);
    __x = DAT_028aa048;
    dVar58 = modf(DAT_028aa048,(double *)&stack0x00000880);
    if (dVar58 == 0.5) {
      fVar48 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
      if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
        fVar48 = fVar48 + 1.0;
      }
    }
    else {
      fVar48 = 255.0;
    }
    dVar58 = modf(__x,(double *)&stack0x00000880);
    if (dVar58 == 0.5) {
      fVar68 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
      if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
        fVar68 = fVar68 + 1.0;
      }
    }
    else {
      fVar68 = 255.0;
    }
    dVar58 = modf(__x,(double *)&stack0x00000880);
    if (dVar58 == 0.5) {
      fVar71 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
      if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
        fVar71 = fVar71 + 1.0;
      }
    }
    else {
      fVar71 = 255.0;
    }
    dVar58 = modf(__x,(double *)&stack0x00000880);
    if (dVar58 == 0.5) {
      fVar50 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
      if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
        fVar50 = fVar50 + 1.0;
      }
    }
    else {
      fVar50 = 255.0;
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
    lVar43 = *(long *)puVar9;
    if (*(int *)(lVar43 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar43 = *(long *)puVar9;
    }
    puVar27 = *(undefined4 **)(lVar43 + 0xb8);
    uVar59 = (ulong)(uint)puVar27[1];
    uVar60 = (ulong)(uint)puVar27[2];
    uVar62 = (ulong)(uint)puVar27[3];
    UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
              (*puVar27,uVar59,uVar60,uVar62,&stack0x00001790,0x4000ffff,0);
    if (*(int *)(*plVar47 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar43 = *in_stack_00000150;
    if (lVar43 == 0) goto LAB_0249920c;
    uVar14 = *in_stack_00000148;
    if ((int)uVar14 < 1) {
      iStack00000000000000ac = 0;
      iVar15 = 0;
      goto LAB_02498c58;
    }
    lVar43 = *(long *)(lVar43 + 0x38);
    fVar64 = ABS(fVar64);
    fVar49 = 1.0;
    if ((uVar22 & 1) == 0) {
      fVar49 = fVar64;
    }
    if (lVar43 == 0) goto LAB_0249920c;
    bVar12 = false;
    bVar7 = false;
    bVar11 = false;
    bVar10 = false;
    uStack0000000000000060 =
         (int)fVar48 & 0xffU | ((int)fVar68 & 0xffU) << 8 | ((int)fVar71 & 0xffU) << 0x10 |
         (int)fVar50 << 0x18;
    fStack00000000000000d0 = *(float *)(*(long *)(*plVar47 + 0xb8) + 0x15a8);
    fStack00000000000000cc = 0.0;
    fStack0000000000000058 = fStack00000000000000b0;
    _bStack000000000000005c = 0.0;
    fStack0000000000000034 = 0.0;
    fStack0000000000000088 = 0.0;
    fStack0000000000000030 = 0.0;
    uVar18 = 0;
    iVar46 = 0;
    lVar29 = 0x2e0;
    fVar68 = 0.0;
    fVar48 = 0.0;
    iStack00000000000000ac = 0;
    fStack0000000000000020 = 0.0;
    fStack000000000000004c = 0.0;
    fStack00000000000000a4 = fStack00000000000000b0;
    fStack00000000000000a8 = fStack00000000000000b4;
    fStack0000000000000050 = fStack00000000000000b4;
    fStack0000000000000054 = (float)uStack00000000000000a0;
    in_stack_00000078._4_4_ = fStack00000000000000b4;
    fStack0000000000000080 = fStack00000000000000b0;
    uStack000000000000006c = uStack00000000000000a0;
    uVar61 = 0;
    uVar35 = 1;
    goto LAB_02496a50;
  }
  goto LAB_0249920c;
code_r0x02492440:
  *(undefined1 *)((long)unaff_x19 + 0x429) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
  uVar22 = FUN_024d0688();
  if (((uVar22 & 1) != 0) &&
     (in_stack_00001788 = in_stack_0000176c, in_stack_000017bc = uVar14,
     *(int *)((long)unaff_x19 + 0x63c) == 0)) goto LAB_02492630;
UnityEngine_XR_Interaction_Toolkit_XRInteractorReticleVisual__get_prefabScalingFactor:
  if ((unaff_x19[0x6c] == 0) || (lVar43 = *(long *)(unaff_x19[0x6c] + 0x38), lVar43 == 0))
  goto LAB_0249920c;
  uVar18 = *in_stack_00000148;
  if (*(uint *)(lVar43 + 0x18) <= uVar18)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar42 = (long)(int)uVar18;
  cVar26 = *(char *)(lVar43 + lVar42 * unaff_x27 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x429) = 0;
  lVar29 = unaff_x19[0x23];
  if ((uint)uVar23 == uVar18) {
    uVar14 = (uint)((ulong)uVar23 >> 0x20);
    bVar10 = true;
    *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
    if (uVar14 == 0x2026) {
      lVar20 = unaff_x19[0xc9];
      lVar43 = lVar43 + lVar42 * unaff_x27;
      *(undefined4 *)(lVar43 + 0x2c) = 0;
      *(long *)(lVar43 + 0x30) = lVar20;
      *(long *)(lVar43 + 0x38) = unaff_x19[0xca];
      *(long *)(lVar43 + 0x50) = unaff_x19[0xcb];
      *(int *)(lVar43 + 0x58) = (int)unaff_x19[0xcc];
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
      uVar23 = CONCAT44(3,uVar18 + 1);
    }
    else if (uVar14 == 3) {
      if ((*in_stack_00000138 == 0) || (lVar20 = FUN_024b11ac(*in_stack_00000138,0), lVar20 == 0))
      goto LAB_0249920c;
      FUN_01299bc0(lVar20,&stack0x00000bf8,&stack0x00000880,*(undefined8 *)PTR_DAT_033ef3c8);
      if (*(uint *)(lVar43 + 0x18) <= uVar18)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      bVar10 = true;
      *(ulong *)(lVar43 + lVar42 * unaff_x27 + 0x30) = CONCAT44(in_stack_00000884,in_stack_00000880)
      ;
      uVar18 = *(uint *)((long)unaff_x19 + 0x48c);
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
    }
  }
  else {
    bVar10 = false;
  }
  iVar15 = (int)unaff_x27;
  in_stack_000017bc = uVar14;
  if (((int)uVar18 < *(int *)((long)unaff_x19 + 0x31c)) && (uVar14 != 3)) {
    if ((*in_stack_00000150 == 0) || (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar43 + 0x18) <= uVar18)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar43 = lVar43 + (long)(int)uVar18 * (long)iVar15;
    *(undefined1 *)(lVar43 + 0x194) = 0;
    *(undefined2 *)(lVar43 + 0x20) = 0x200b;
    *(undefined4 *)(lVar43 + 100) = 0;
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
          uVar22 = FUN_016f92d4(uVar14,0);
          if ((uVar22 & 1) != 0) {
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
      if ((uVar22 & 1) != 0) {
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
      if ((*in_stack_00000150 == 0) || (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar43 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar43 = lVar43 + (int)*in_stack_00000148 * unaff_x27;
      lVar42 = *(long *)(lVar43 + 0x40);
      unaff_x19[0xd2] = lVar42;
      *(undefined4 *)((long)unaff_x19 + 0x69c) = *(undefined4 *)(lVar43 + 0x48);
      if ((lVar42 == 0) || (lVar43 = FUN_024ebfa0(lVar42,0), lVar43 == 0)) goto LAB_0249920c;
      FUN_0132138c(lVar43,*(undefined4 *)((long)unaff_x19 + 0x69c),&stack0x00000880,
                   *(undefined8 *)System_Func<KeyValuePair<int,_int>,_int>_TypeInfo);
      lVar42 = CONCAT44(in_stack_00000884,in_stack_00000880);
      if (lVar42 == 0) goto LAB_02492630;
      if (in_stack_000017bc == 0x3c) {
        in_stack_000017bc = *(int *)((long)unaff_x19 + 0x69c) + 0xe000;
      }
      else {
        lVar43 = *plVar47;
        if (*(int *)(lVar43 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar43 = *plVar47;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1b4) = *(undefined4 *)(*(long *)(lVar43 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
      fVar64 = *(float *)(unaff_x19 + 0x3c);
      memmove(&stack0x00001700,(void *)(unaff_x19[0x1f] + 0x50),0x60);
      iVar13 = FUN_026fd110(&stack0x00001700,0);
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      memmove(&stack0x00001700,(void *)(*in_stack_00000138 + 0x50),0x60);
      fVar48 = (float)FUN_026fd120(&stack0x00001700,0);
      fVar74 = fStack0000000000000084;
      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
        fVar74 = unaff_s12;
      }
      if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
      fVar74 = (fVar64 / (float)iVar13) * fVar48 * fVar74;
      iVar13 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
      fVar64 = *(float *)(unaff_x19 + 0x3c);
      if (iVar13 < 1) {
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        iVar13 = FUN_026fd110(*in_stack_00000138 + 0x50,0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar48 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
        fVar71 = fStack0000000000000084;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar71 = unaff_s12;
        }
        if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
        fVar68 = (float)FUN_026fd140(unaff_x19[0x1f] + 0x50,0);
        if (*(long *)(lVar42 + 0x20) == 0) goto LAB_0249920c;
        FUN_026fd62c(&stack0x00000880,*(long *)(lVar42 + 0x20),0);
        fVar49 = (float)FUN_026fd45c(&stack0x000016e0,0);
        if (*(long *)(lVar42 + 0x20) == 0) goto LAB_0249920c;
        fVar51 = *(float *)(lVar42 + 0x2c);
        fVar72 = (float)FUN_026fd668(*(long *)(lVar42 + 0x20),0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar50 = (float)FUN_026fd140(*in_stack_00000138 + 0x50,0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar52 = (float)FUN_026fd170(*in_stack_00000138 + 0x50,0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar53 = *(float *)((long)unaff_x19 + 0x3fc);
        fStack0000000000000134 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
        if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
        fStack0000000000000134 = fVar74 * fVar52 * fVar53 * fStack0000000000000134;
        fVar71 = (fVar64 / (float)iVar13) * fVar48 * fVar71;
        fVar64 = fVar71 * (fVar68 / fVar49) * fVar51 * fVar72;
        fVar71 = fVar71 / fVar64;
        fVar50 = fVar71 * fVar50;
        fVar74 = (float)FUN_026fd180(unaff_x19[0x1f] + 0x50,0);
        fVar71 = fVar71 * fVar74;
      }
      else {
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        iVar13 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar48 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
        if (*(long *)(lVar42 + 0x20) == 0) goto LAB_0249920c;
        fVar71 = *(float *)(lVar42 + 0x2c);
        fVar68 = fStack0000000000000084;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar68 = 1.0;
        }
        fVar49 = (float)FUN_026fd668(*(long *)(lVar42 + 0x20),0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar50 = (float)FUN_026fd140(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar51 = (float)FUN_026fd170(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar72 = *(float *)((long)unaff_x19 + 0x3fc);
        fStack0000000000000134 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fStack0000000000000134 = fVar74 * fVar51 * fVar72 * fStack0000000000000134;
        fVar64 = (fVar64 / (float)iVar13) * fVar48 * fVar68 * fVar71 * fVar49;
        fVar71 = (float)FUN_026fd180(unaff_x19[0xd2] + 0x48,0);
      }
      lVar43 = unaff_x19[0x6c];
      unaff_x19[200] = lVar42;
      if ((lVar43 == 0) || (lVar42 = *(long *)(lVar43 + 0x38), lVar42 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar42 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar42 = lVar42 + (int)*in_stack_00000148 * unaff_x27;
      *(undefined4 *)(lVar42 + 0x2c) = 1;
      *(float *)(lVar42 + 0x160) = fVar64;
      in_stack_00000128 = 0.0;
      *(long *)(lVar42 + 0x40) = unaff_x19[0xd2];
      *(long *)(lVar42 + 0x38) = unaff_x19[0x1f];
      *(int *)(lVar42 + 0x58) = (int)unaff_x19[0x23];
      *(int *)(unaff_x19 + 0x23) = (int)lVar29;
      goto LAB_02492e14;
    }
    lVar43 = *in_stack_00000150;
    fVar74 = 0.0;
    if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
      fVar74 = fVar64;
    }
    fStack0000000000000134 = 0.0;
    if (lVar43 == 0) goto LAB_0249920c;
    fVar50 = 0.0;
    fVar71 = 0.0;
  }
  else {
    if (iVar13 != 0) goto LAB_0249265c;
LAB_02492a20:
    if ((*in_stack_00000150 == 0) || (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 == 0))
    goto LAB_0249920c;
    uVar18 = *in_stack_00000148;
    uVar14 = *(uint *)(lVar43 + 0x18);
    if (uVar14 <= uVar18)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar29 = *(long *)(lVar43 + (int)uVar18 * unaff_x27 + 0x30);
    unaff_x19[200] = lVar29;
    if (lVar29 == 0) goto LAB_02492630;
    lVar42 = lVar43 + (int)uVar18 * unaff_x27;
    lVar29 = *(long *)(lVar42 + 0x38);
    unaff_x19[0x1f] = lVar29;
    unaff_x19[0x22] = *(long *)(lVar42 + 0x50);
    *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar42 + 0x58);
    if (bVar10) {
      lVar42 = unaff_x19[0x8e];
      if (lVar42 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar42 + 0x18) <= in_stack_00001788)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if ((*(int *)(lVar42 + (long)(int)in_stack_00001788 * 0xc + 0x20) != 10) ||
         (uVar18 == *(uint *)(unaff_x19 + 0x92))) goto LAB_02492ab4;
      if (uVar14 <= uVar18 - 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (lVar29 == 0) goto LAB_0249920c;
      fVar74 = *(float *)(lVar43 + (long)(int)(uVar18 - 1) * (long)iVar15 + 0x60);
      iVar13 = FUN_026fd110(lVar29 + 0x50,0);
      lVar43 = *in_stack_00000138;
    }
    else {
LAB_02492ab4:
      if (lVar29 == 0) goto LAB_0249920c;
      fVar74 = *(float *)(unaff_x19 + 0x3c);
      iVar13 = FUN_026fd110(lVar29 + 0x50,0);
      lVar43 = unaff_x19[0x1f];
    }
    if (lVar43 == 0) goto LAB_0249920c;
    fVar68 = (float)FUN_026fd120(lVar43 + 0x50,0);
    fVar48 = fStack0000000000000084;
    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
      fVar48 = unaff_s12;
    }
    fVar71 = 0.0;
    fVar50 = 0.0;
    if (!(bool)(bVar10 & in_stack_000017bc == 0x2026)) {
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      fVar50 = (float)FUN_026fd140(*in_stack_00000138 + 0x50,0);
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      fVar71 = (float)FUN_026fd180(*in_stack_00000138 + 0x50,0);
    }
    lVar43 = unaff_x19[200];
    if ((lVar43 == 0) || (*(long *)(lVar43 + 0x20) == 0)) goto LAB_0249920c;
    fVar49 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar51 = *(float *)(lVar43 + 0x2c);
    fVar64 = (float)FUN_026fd668(*(long *)(lVar43 + 0x20),0);
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar72 = (float)FUN_026fd170(*in_stack_00000138 + 0x50,0);
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar52 = *(float *)((long)unaff_x19 + 0x3fc);
    fStack0000000000000134 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
    lVar43 = unaff_x19[0x6c];
    if ((lVar43 == 0) || (lVar29 = *(long *)(lVar43 + 0x38), lVar29 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar29 = lVar29 + (int)*in_stack_00000148 * unaff_x27;
    *(undefined4 *)(lVar29 + 0x2c) = 0;
    fVar48 = ((fStack00000000000000f4 * fVar74) / (float)iVar13) * fVar68 * fVar48;
    fVar64 = fVar48 * fVar49 * fVar51 * fVar64;
    *(float *)(lVar29 + 0x160) = fVar64;
    uVar14 = *(uint *)(unaff_x19 + 0x23);
    fStack0000000000000134 = fVar48 * fVar72 * fVar52 * fStack0000000000000134;
    if (uVar14 == 0) {
      in_stack_00000128 = *(float *)(unaff_x19 + 0xc2);
    }
    else {
      lVar29 = unaff_x19[0xe0];
      if (lVar29 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar29 + 0x18) <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar29 = *(long *)(lVar29 + (long)(int)uVar14 * 8 + 0x20);
      if (lVar29 == 0) goto LAB_0249920c;
      in_stack_00000128 = *(float *)(lVar29 + 0x104);
    }
LAB_02492e14:
    unaff_s12 = 1.0;
    fVar74 = 0.0;
    if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
      fVar74 = fVar64;
    }
  }
  lVar43 = *(long *)(lVar43 + 0x38);
  if (lVar43 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar43 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar43 = lVar43 + (int)*in_stack_00000148 * unaff_x27;
  *(short *)(lVar43 + 0x20) = (short)in_stack_000017bc;
  *(int *)(lVar43 + 0x60) = (int)unaff_x19[0x3c];
  *(undefined4 *)(lVar43 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4e4);
  if ((unaff_x19[0x6c] == 0) || (lVar43 = *(long *)(unaff_x19[0x6c] + 0x38), lVar43 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar43 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  *(int *)(lVar43 + (int)*in_stack_00000148 * unaff_x27 + 0x168) = (int)unaff_x19[0x2a];
  if ((unaff_x19[0x6c] == 0) || (lVar43 = *(long *)(unaff_x19[0x6c] + 0x38), lVar43 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar43 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  *(undefined4 *)(lVar43 + (int)*in_stack_00000148 * unaff_x27 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x154);
  if ((unaff_x19[0x6c] == 0) || (lVar43 = *(long *)(unaff_x19[0x6c] + 0x38), lVar43 == 0))
  goto LAB_0249920c;
  uVar14 = *in_stack_00000148;
  FUN_013b78b8(in_stack_000000b8,&stack0x00000880,
               *(undefined8 *)TMPro_TMP_Dropdown_OptionData_TypeInfo);
  if (*(uint *)(lVar43 + 0x18) <= uVar14)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar43 = lVar43 + (int)uVar14 * unaff_x27;
  *(undefined4 *)(lVar43 + 0x18c) = in_stack_00000890;
  *(undefined8 *)(lVar43 + 0x184) = in_stack_00000888;
  *(ulong *)(lVar43 + 0x17c) = CONCAT44(in_stack_00000884,in_stack_00000880);
  if ((*in_stack_00000150 == 0) || (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar43 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  *(undefined4 *)(lVar43 + (int)*in_stack_00000148 * unaff_x27 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x254);
  if ((unaff_x19[200] == 0) || (lVar43 = *(long *)(unaff_x19[200] + 0x20), lVar43 == 0))
  goto LAB_0249920c;
  FUN_026fd62c(&stack0x00000bf8,lVar43,0);
  puVar8 = 
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
    fVar49 = 0.0;
    fVar68 = 0.0;
    fVar48 = 0.0;
  }
  else {
    if (unaff_x19[200] == 0) goto LAB_0249920c;
    uVar61 = *in_stack_00000148;
    uVar18 = *(uint *)(unaff_x19[200] + 0x28);
    if ((int)uVar61 < (int)in_stack_00000078._4_4_) {
      if ((*in_stack_00000150 == 0) || (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar43 + 0x18) <= uVar61 + 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar43 = *(long *)(lVar43 + (long)(int)(uVar61 + 1) * (long)iVar15 + 0x30);
      if ((((lVar43 == 0) || (*in_stack_00000138 == 0)) ||
          (lVar29 = *(long *)(*in_stack_00000138 + 0x128), lVar29 == 0)) ||
         (lVar29 = *(long *)(lVar29 + 0x18), lVar29 == 0)) goto LAB_0249920c;
      in_stack_00000880 = uVar18 | *(int *)(lVar43 + 0x28) << 0x10;
      uVar22 = FUN_0129eff4(lVar29,&stack0x00000880,&stack0x000016d8,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                           );
      uVar75 = 0;
      if ((uVar22 & 1) == 0) {
        fVar49 = 0.0;
        fVar68 = 0.0;
        fVar48 = 0.0;
      }
      else {
        if (in_stack_000016d8 == 0) goto LAB_0249920c;
        fVar48 = *(float *)(in_stack_000016d8 + 0x14);
        fVar68 = *(float *)(in_stack_000016d8 + 0x18);
        fVar49 = *(float *)(in_stack_000016d8 + 0x1c);
        uVar75 = *(undefined4 *)(in_stack_000016d8 + 0x20);
        if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
          fStack00000000000000cc = 0.0;
        }
      }
      uVar61 = *in_stack_00000148;
    }
    else {
      uVar75 = 0;
      fVar49 = 0.0;
      fVar68 = 0.0;
      fVar48 = 0.0;
    }
    if (0 < (int)uVar61) {
      if ((*in_stack_00000150 == 0) || (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar43 + 0x18) <= (uint)((long)(int)uVar61 + -1))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar43 = *(long *)(lVar43 + ((long)(int)uVar61 + -1) * unaff_x27 + 0x30);
      if (((lVar43 == 0) || (*in_stack_00000138 == 0)) ||
         ((lVar29 = *(long *)(*in_stack_00000138 + 0x128), lVar29 == 0 ||
          (lVar29 = *(long *)(lVar29 + 0x18), lVar29 == 0)))) goto LAB_0249920c;
      in_stack_00000880 = *(uint *)(lVar43 + 0x28) | uVar18 << 0x10;
      uVar22 = FUN_0129eff4(lVar29,&stack0x00000880,&stack0x000016d8,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                           );
      if ((uVar22 & 1) != 0) {
        if ((in_stack_000016d8 == 0) ||
           (fVar48 = (float)FUN_024bb1bc(fVar48,fVar68,fVar49,uVar75,
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
    *(float *)((long)unaff_x19 + 0x2f4) = fVar49;
  }
  if ((char)unaff_x19[0x1d] != '\0') {
    fVar72 = *(float *)(unaff_x19 + 199);
    fVar51 = (float)FUN_026fd474(&stack0x00001770,0);
    fVar72 = fVar72 - fVar74 * fVar51 * (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc));
    *(float *)(unaff_x19 + 199) = fVar72;
    if ((uVar14 != 0) || (in_stack_000017bc == 0x200b)) {
      *(float *)(unaff_x19 + 199) = fVar72 - in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac)
      ;
    }
  }
  fVar72 = *(float *)(unaff_x19 + 0x55);
  fVar51 = 0.0;
  if (fVar72 != 0.0) {
    fVar51 = (float)FUN_026fd454(&stack0x00001770,0);
    fVar52 = (float)FUN_026fd464(&stack0x00001770,0);
    fVar51 = (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (fVar72 * 0.5 - fVar74 * (fVar51 * 0.5 + fVar52));
    *(float *)(unaff_x19 + 199) = *(float *)(unaff_x19 + 199) + fVar51;
  }
  if (((cVar26 == '\0') && (*(int *)((long)unaff_x19 + 0x63c) == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x254) & 1) != 0)) {
    lVar43 = unaff_x19[0x22];
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar22 = FUN_02681b9c(lVar43,0,0);
    fVar53 = 0.0;
    if ((uVar22 & 1) != 0) {
      lVar43 = unaff_x19[0x22];
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (lVar43 == 0) goto LAB_0249920c;
      uVar22 = FUN_0267e1d8(lVar43,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
      fVar53 = 0.0;
      if ((uVar22 & 1) != 0) {
        lVar43 = unaff_x19[0x22];
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (lVar43 == 0) goto LAB_0249920c;
        fVar72 = (float)FUN_0267f610(lVar43,*(undefined4 *)
                                             (*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
        if ((*in_stack_00000138 == 0) || (unaff_x19[0x22] == 0)) goto LAB_0249920c;
        fVar52 = *(float *)(*in_stack_00000138 + 0x1b0);
        fVar53 = (float)FUN_0267f610(unaff_x19[0x22],
                                     *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xcc),0);
        fVar53 = fVar53 * fVar72 * fVar52 * 0.25;
        if (fVar72 < in_stack_00000128 + fVar53) {
          in_stack_00000128 = fVar72 - fVar53;
        }
      }
    }
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar72 = *(float *)(*in_stack_00000138 + 0x1b4);
  }
  else {
    lVar43 = unaff_x19[0x22];
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar22 = FUN_02681b9c(lVar43,0,0);
    fVar72 = 0.0;
    if ((uVar22 & 1) != 0) {
      lVar43 = unaff_x19[0x22];
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (lVar43 == 0) goto LAB_0249920c;
      uVar22 = FUN_0267e1d8(lVar43,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
      if ((uVar22 & 1) != 0) {
        lVar43 = unaff_x19[0x22];
        if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (lVar43 == 0) goto LAB_0249920c;
        uVar22 = FUN_0267e1d8(lVar43,*(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xcc),0);
        if ((uVar22 & 1) != 0) {
          lVar43 = unaff_x19[0x22];
          if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (lVar43 == 0) goto LAB_0249920c;
          fVar52 = (float)FUN_0267f610(lVar43,*(undefined4 *)
                                               (*(long *)(*(long *)puVar8 + 0xb8) + 0x54),0);
          if ((*in_stack_00000138 == 0) || (unaff_x19[0x22] == 0)) goto LAB_0249920c;
          fVar65 = *(float *)(*in_stack_00000138 + 0x1a8);
          fVar53 = (float)FUN_0267f610(unaff_x19[0x22],
                                       *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xcc),0);
          fVar53 = fVar53 * fVar52 * fVar65 * 0.25;
          if (fVar52 < in_stack_00000128 + fVar53) {
            in_stack_00000128 = fVar52 - fVar53;
          }
          goto LAB_024934bc;
        }
      }
    }
    fVar53 = 0.0;
  }
LAB_024934bc:
  fVar66 = *(float *)(unaff_x19 + 199);
  fVar52 = (float)FUN_026fd464(&stack0x00001770,0);
  fVar66 = fVar66 + (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
                    fVar74 * (fVar48 + ((fVar52 - in_stack_00000128) - fVar53));
  fVar48 = (float)FUN_026fd46c(&stack0x00001770,0);
  fVar65 = *(float *)((long)unaff_x19 + 0x614) +
           ((fStack0000000000000134 + fVar74 * (fVar68 + in_stack_00000128 + fVar48)) -
           *(float *)(unaff_x19 + 0x9a));
  fVar48 = (float)FUN_026fd45c(&stack0x00001770,0);
  fVar69 = fVar65 - fVar74 * (in_stack_00000128 + in_stack_00000128 + fVar48);
  fVar48 = (float)FUN_026fd454(&stack0x00001770,0);
  fVar52 = fVar66 + (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
                    fVar74 * (fVar53 + fVar53 + in_stack_00000128 + in_stack_00000128 + fVar48);
  fVar48 = fVar66;
  fVar68 = fVar52;
  if (((*(int *)((long)unaff_x19 + 0x63c) == 0) && (cVar26 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x254) >> 1 & 1) != 0)) {
    fVar63 = (float)(int)unaff_x19[0xbd] * fStack000000000000004c;
    fVar48 = (float)FUN_026fd46c(&stack0x00001770,0);
    fVar56 = fVar63 * fVar74 * (fVar53 + in_stack_00000128 + fVar48);
    fVar48 = (float)FUN_026fd46c(&stack0x00001770,0);
    fVar68 = (float)FUN_026fd45c(&stack0x00001770,0);
    fVar65 = fVar65 + 0.0;
    fVar69 = fVar69 + 0.0;
    fVar63 = fVar63 * fVar74 * (((fVar48 - fVar68) - in_stack_00000128) - fVar53);
    fVar68 = fVar52 + fVar63;
    fVar48 = fVar66 + fVar56;
    fVar55 = (fVar56 - fVar63) * 0.5;
    fVar66 = (fVar66 + fVar63) - fVar55;
    fVar52 = (fVar52 + fVar56) - fVar55;
    fVar48 = fVar48 - fVar55;
    fVar68 = fVar68 - fVar55;
  }
  if (*(char *)((long)unaff_x19 + 0x46c) == '\0') {
    fVar56 = 0.0;
    fVar57 = 0.0;
    fVar67 = 0.0;
    fVar55 = 0.0;
    fVar76 = fVar69;
    fVar63 = fVar65;
    fStack00000000000000e8 = fVar48;
    fStack00000000000000ec = fVar66;
  }
  else {
    thunk_FUN_026935f0(_uStack0000000000000060,0);
    fVar70 = (fVar52 + fVar66) * 0.5;
    fVar73 = (fVar69 + fVar65) * 0.5;
    fVar65 = fVar65 - fVar73;
    fVar55 = 0.0;
    fVar63 = fVar65;
    fVar54 = (float)FUN_02692df0(fVar48 - fVar70,_uStack0000000000000060,0);
    fVar55 = fVar55 + 0.0;
    fVar69 = fVar69 - fVar73;
    fVar56 = 0.0;
    fVar48 = fVar69;
    fVar66 = (float)FUN_02692df0(fVar66 - fVar70,_uStack0000000000000060,0);
    fVar56 = fVar56 + 0.0;
    fVar67 = 0.0;
    fVar52 = (float)FUN_02692df0(fVar52 - fVar70,_uStack0000000000000060,0);
    fVar52 = fVar70 + fVar52;
    fVar65 = fVar73 + fVar65;
    fVar67 = fVar67 + 0.0;
    fVar57 = 0.0;
    fVar68 = (float)FUN_02692df0(fVar68 - fVar70,_uStack0000000000000060,0);
    fVar68 = fVar70 + fVar68;
    fVar69 = fVar73 + fVar69;
    fVar57 = fVar57 + 0.0;
    fVar76 = fVar73 + fVar48;
    fVar63 = fVar73 + fVar63;
    fStack00000000000000e8 = fVar70 + fVar54;
    fStack00000000000000ec = fVar70 + fVar66;
  }
  if (*in_stack_00000150 == 0) goto LAB_0249920c;
  lVar43 = *(long *)(*in_stack_00000150 + 0x38);
  unaff_d13 = (ulong)(uint)fVar74;
  if (lVar43 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar43 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar43 = lVar43 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar43 + 0x120) = fVar76;
  *(float *)(lVar43 + 0x11c) = fStack00000000000000ec;
  *(float *)(lVar43 + 0x124) = fVar56;
  if (*in_stack_00000150 == 0) goto LAB_0249920c;
  lVar43 = *(long *)(*in_stack_00000150 + 0x38);
  unaff_s12 = 1.0;
  if (lVar43 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar43 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar43 = lVar43 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar43 + 0x114) = fVar63;
  *(float *)(lVar43 + 0x110) = fStack00000000000000e8;
  *(float *)(lVar43 + 0x118) = fVar55;
  if ((*in_stack_00000150 == 0) || (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar43 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar43 = lVar43 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar43 + 0x128) = fVar52;
  *(float *)(lVar43 + 300) = fVar65;
  *(float *)(lVar43 + 0x130) = fVar67;
  if ((*in_stack_00000150 == 0) || (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar43 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar43 = lVar43 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar43 + 0x134) = fVar68;
  *(float *)(lVar43 + 0x138) = fVar69;
  *(float *)(lVar43 + 0x13c) = fVar57;
  if ((*in_stack_00000150 == 0) || (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 == 0))
  goto LAB_0249920c;
  uVar18 = *in_stack_00000148;
  lVar29 = (long)(int)uVar18;
  if (*(uint *)(lVar43 + 0x18) <= uVar18)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar42 = lVar43 + lVar29 * unaff_x27;
  *(int *)(lVar42 + 0x140) = (int)unaff_x19[199];
  fVar68 = *(float *)(unaff_x19 + 0x9a);
  param_3 = (ulong)(uint)fVar68;
  fVar48 = *(float *)((long)unaff_x19 + 0x614);
  *(float *)(lVar42 + 0x15c) = (fVar52 - fStack00000000000000ec) / (fVar63 - fVar76);
  *(float *)(lVar42 + 0x14c) = (fStack0000000000000134 - fVar68) + fVar48;
  fVar50 = fVar50 * fVar74;
  if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
    fVar50 = fVar50 / fStack00000000000000f4;
    fVar71 = (fVar71 * fVar74) / fStack00000000000000f4;
  }
  else {
    fVar71 = fVar71 * fVar74;
  }
  uVar61 = *(uint *)(unaff_x19 + 0x92);
  bVar11 = uVar14 != 0;
  fVar50 = fVar48 + fVar50;
  bVar12 = uVar18 != uVar61;
  if (bVar12 && bVar11) {
    fVar48 = *(float *)(unaff_x19 + 0x98);
    lVar43 = lVar43 + lVar29 * unaff_x27;
    *(float *)(lVar43 + 0x154) = fVar48;
    fVar71 = *(float *)((long)unaff_x19 + 0x4c4);
    *(float *)(lVar43 + 0x148) = fVar48 - fVar68;
    *(float *)(lVar43 + 0x158) = fVar71;
    *(float *)(unaff_x19 + 0x97) = fVar48 - fVar68;
    fVar71 = fVar71 - fVar68;
    *(float *)(lVar43 + 0x150) = fVar71;
  }
  else {
    fVar71 = fVar48 + fVar71;
    fVar52 = fVar50;
    fVar65 = fVar71;
    if (fVar48 != 0.0) {
      fVar52 = (fVar50 - fVar48) / *(float *)((long)unaff_x19 + 0x3fc);
      fVar65 = (fVar71 - fVar48) / *(float *)((long)unaff_x19 + 0x3fc);
      if (fVar52 <= fVar50) {
        fVar52 = fVar50;
      }
      if (fVar71 <= fVar65) {
        fVar65 = fVar71;
      }
    }
    lVar43 = lVar43 + lVar29 * unaff_x27;
    fVar48 = fVar52;
    if (fVar52 <= *(float *)(unaff_x19 + 0x98)) {
      fVar48 = *(float *)(unaff_x19 + 0x98);
    }
    fVar69 = fVar65;
    if (*(float *)((long)unaff_x19 + 0x4c4) <= fVar65) {
      fVar69 = *(float *)((long)unaff_x19 + 0x4c4);
    }
    *(float *)((long)unaff_x19 + 0x4c4) = fVar69;
    fVar71 = fVar71 - fVar68;
    *(float *)(unaff_x19 + 0x98) = fVar48;
    *(float *)(lVar43 + 0x154) = fVar52;
    *(float *)(lVar43 + 0x158) = fVar65;
    *(float *)(lVar43 + 0x148) = fVar50 - fVar68;
    *(float *)(unaff_x19 + 0x97) = fVar50 - fVar68;
    *(float *)(lVar43 + 0x150) = fVar71;
  }
  *(float *)((long)unaff_x19 + 0x4bc) = fVar71;
  if (((int)unaff_x19[0x94] == 0) || (*(char *)((long)unaff_x19 + 0x334) != '\0')) {
    if (!bVar12 || !bVar11) {
      *(float *)(unaff_x19 + 0x96) = fVar48;
      if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
      fVar48 = *(float *)((long)unaff_x19 + 0x4b4);
      fVar68 = (float)FUN_026fd150(unaff_x19[0x1f] + 0x50,0);
      fStack00000000000000f4 = (fVar74 * fVar68) / fStack00000000000000f4;
      param_3 = (ulong)*(uint *)(unaff_x19 + 0x9a);
      if (fVar48 <= fStack00000000000000f4) {
        fVar48 = fStack00000000000000f4;
      }
      *(float *)((long)unaff_x19 + 0x4b4) = fVar48;
      goto LAB_02493948;
    }
  }
  else {
LAB_02493948:
    if ((!bVar12 || !bVar11) && (float)param_3 == 0.0) {
      fVar48 = *(float *)(in_stack_00000070 + 0x208);
      if (*(float *)(in_stack_00000070 + 0x208) <= fVar50) {
        fVar48 = fVar50;
      }
      *(float *)(in_stack_00000070 + 0x208) = fVar48;
    }
  }
  lVar43 = *in_stack_00000150;
  if ((lVar43 == 0) || (lVar29 = *(long *)(lVar43 + 0x38), lVar29 == 0)) goto LAB_0249920c;
  uVar35 = *in_stack_00000148;
  if (*(uint *)(lVar29 + 0x18) <= uVar35)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar29 = lVar29 + (int)uVar35 * unaff_x27;
  *(undefined1 *)(lVar29 + 0x194) = 0;
  uVar32 = *(uint *)(unaff_x19 + 0x4e);
  if ((in_stack_000017bc == 9) ||
     (((((uVar14 == 0 && (in_stack_000017bc != 3)) && (in_stack_000017bc != 0x200b)) &&
       (in_stack_000017bc != 0xad)) ||
      (((bool)(in_stack_000017bc == 0xad & (bVar7 ^ 1U)) || (*(int *)((long)unaff_x19 + 0x63c) == 1)
       ))))) {
    *(undefined1 *)(lVar29 + 0x194) = 1;
    pfVar30 = _fStack0000000000000088;
    pfVar33 = _fStack0000000000000098;
    if (bVar10) {
      lVar43 = *(long *)(lVar43 + 0x50);
      if (lVar43 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar43 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar43 = lVar43 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      pfVar33 = (float *)(lVar43 + 0x60);
      pfVar30 = (float *)(lVar43 + 100);
    }
    fVar68 = *pfVar33;
    fVar71 = *pfVar30;
    fVar48 = *(float *)(unaff_x19 + 0x6b);
    fVar50 = *(float *)(unaff_x19 + 199);
    fStack00000000000000d4 = (in_stack_00000090 - fVar68) - fVar71;
    bVar11 = true;
    if ((fVar48 <= fStack00000000000000d4) && (bVar11 = false, !NAN(fVar48))) {
      bVar11 = fVar48 == -1.0;
    }
    if (!bVar11) {
      fStack00000000000000d4 = fVar48;
    }
    fVar48 = 0.0;
    if ((char)unaff_x19[0x1d] == '\0') {
      fVar48 = (float)FUN_026fd474(&stack0x00001770,0);
      param_3 = (ulong)*(uint *)(unaff_x19 + 0x9a);
    }
    fVar69 = *(float *)((long)unaff_x19 + 0x4c4);
    fVar52 = *(float *)((long)unaff_x19 + 0x2cc);
    fVar65 = (float)param_3;
    if (in_stack_000017bc != 0xad) {
      fVar64 = fVar74;
    }
    fVar66 = 0.0;
    if ((0.0 < fVar65) && (fVar66 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
      fVar66 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
    }
    fVar66 = (*(float *)(unaff_x19 + 0x96) - (fVar69 - fVar65)) + fVar66;
    uVar35 = *in_stack_00000148;
    if (fStack00000000000000a4 < fVar66) {
      if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
        *(uint *)((long)unaff_x19 + 0x2dc) = uVar35;
      }
      plVar45 = (long *)StringLiteral_302;
      plVar47 = (long *)System_Threading_Mutex_TypeInfo;
      uVar19 = DAT_02941c08;
      if ((char)unaff_x19[0x46] != '\0') {
        fVar63 = *(float *)(unaff_x19 + 0x58);
        if (((fVar63 < *(float *)((long)unaff_x19 + 0x2b4)) && (0.0 < fVar65)) &&
           (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
          fVar64 = *(float *)((long)unaff_x19 + 0x2b4) +
                   ((in_stack_00000018._4_4_ - fVar66) / (float)(int)unaff_x19[0x94]) /
                   fStack0000000000000054;
          if (fVar64 <= fVar63) {
            fVar64 = fVar63;
          }
          goto LAB_024964c8;
        }
        fVar66 = *(float *)((long)unaff_x19 + 0x1dc);
        fVar65 = *(float *)(unaff_x19 + 0x49);
        param_3 = (ulong)(uint)fVar65;
        if ((fVar65 < fVar66) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
          fVar64 = (fVar66 - *(float *)(unaff_x19 + 0x47)) * 0.5;
          if (fVar64 <= DAT_028aa298) {
            fVar64 = DAT_028aa298;
          }
          fVar74 = (fVar66 - fVar64) * 20.0 + 0.5;
          fVar64 = DAT_02958220;
          if (fVar74 != INFINITY) {
            fVar64 = (float)(int)fVar74 / 20.0;
          }
          if (fVar64 <= fVar65) {
            fVar64 = fVar65;
          }
          *(float *)((long)unaff_x19 + 0x234) = fVar66;
          goto LAB_02495fd8;
        }
      }
      switch((int)unaff_x19[0x5b]) {
      case 1:
        lVar43 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar43 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar43 = *plVar47;
        }
        lVar29 = *(long *)(lVar43 + 0xb8);
        lVar43 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
        if ((*(byte *)(lVar43 + 0x132) & 1) == 0) {
          lVar43 = FUN_00d5941c(lVar43);
        }
        plVar45 = (long *)StringLiteral_302;
        lVar43 = *(long *)(*(long *)(lVar43 + 0xc0) + 8);
        if ((*(byte *)(lVar43 + 0x132) & 1) == 0) {
          lVar43 = FUN_00d5941c();
        }
        piVar21 = (int *)thunk_FUN_00d32ed4(lVar29 + 0x11f0,*(long *)(lVar43 + 0x80) + 0xa0);
        if (*piVar21 == 0) goto LAB_02495f00;
        lVar43 = *plVar47;
        if (*(int *)(lVar43 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar43 = *plVar47;
        }
        FUN_013b8de4(*(long *)(lVar43 + 0xb8) + 0x11f0,&stack0x00000880,
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
        plVar45 = (long *)StringLiteral_302;
        in_stack_00001788 = FUN_024d66ec();
        goto LAB_0249408c;
      case 5:
        if ((uVar35 != 0) && (-1 < (int)in_stack_00001788)) {
          fVar64 = *(float *)(unaff_x19 + 0x98);
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          in_stack_00001788 = FUN_024d66ec();
          if (fVar64 - fVar69 <= fStack00000000000000a4) {
            *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
            *(undefined4 *)(unaff_x19 + 0x92) = *(undefined4 *)((long)unaff_x19 + 0x48c);
            param_3 = *(ulong *)(*(long *)(*plVar47 + 0xb8) + 0x15a8);
            *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
            *(undefined4 *)(unaff_x19 + 0x99) = 0;
            lVar43 = NEON_rev64(param_3,4);
            unaff_x19[0x98] = lVar43;
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
        uVar23 = uVar19;
        goto LAB_024944c4;
      case 6:
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        plVar45 = (long *)StringLiteral_302;
        lVar43 = unaff_x19[0x5c];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            );
        }
        uVar22 = FUN_02681b9c(lVar43,0,0);
        if ((uVar22 & 1) != 0) {
          plVar44 = (long *)unaff_x19[0x5c];
          uVar23 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar44 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar44 + 0x558))(plVar44,uVar23,*(undefined8 *)(*plVar44 + 0x560));
          lVar43 = unaff_x19[0x5c];
          if (lVar43 == 0) goto LAB_0249920c;
          *(int *)(lVar43 + 0x3f8) = (int)unaff_x19[0x7f];
          FUN_024c910c(lVar43,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
          plVar44 = (long *)unaff_x19[0x5c];
          if (plVar44 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar44 + 0x7d8))(plVar44,0,0,*(undefined8 *)(*plVar44 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        }
        goto LAB_0249408c;
      }
LAB_02494358:
      iVar15 = FUN_024d66ec();
      goto LAB_02494364;
    }
UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor__get_playHapticsOnHoverExited:
    plVar47 = (long *)System_Threading_Mutex_TypeInfo;
    fVar65 = 1.0 - fVar52;
    param_3 = (ulong)(uint)fVar65;
    fVar48 = ABS(fVar50) + fVar48 * fVar65 * fVar64;
    fVar64 = _DAT_0294c6e8;
    if ((uVar32 & 0x18) == 0) {
      fVar64 = 1.0;
    }
    if (fVar64 * fStack00000000000000d4 < fVar48) {
      if (((char)unaff_x19[0x5a] != '\0') && (uVar35 != *(uint *)(unaff_x19 + 0x92))) {
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
          lVar43 = *in_stack_00000150;
          if ((lVar43 == 0) || (lVar29 = *(long *)(lVar43 + 0x38), lVar29 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000148)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar50 = *(float *)(unaff_x19 + 0x9a);
          fVar52 = 0.0;
          if ((0.0 < fVar50) && (fVar52 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
            fVar52 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
          }
          fVar52 = in_stack_000000c8 * *(float *)(unaff_x19 + 0x56) +
                   *(float *)(lVar29 + (int)*in_stack_00000148 * unaff_x27 + 0x154) +
                   (fVar52 - *(float *)((long)unaff_x19 + 0x4c4)) +
                   fStack0000000000000054 *
                   (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4));
        }
        else {
          lVar43 = unaff_x19[0x6c];
          *(undefined1 *)((long)unaff_x19 + 700) = 1;
          if (lVar43 == 0) goto LAB_0249920c;
          fVar50 = *(float *)(unaff_x19 + 0x9a);
          fVar52 = *(float *)(unaff_x19 + 0x57) + in_stack_000000c8 * *(float *)(unaff_x19 + 0x56);
        }
        puVar8 = System_Threading_Mutex_TypeInfo;
        lVar43 = *(long *)(lVar43 + 0x38);
        if (lVar43 == 0) goto LAB_0249920c;
        uVar41 = *(uint *)((long)unaff_x19 + 0x48c);
        if ((*(uint *)(lVar43 + 0x18) <= uVar41) ||
           (uVar6 = uVar41 - 1, *(uint *)(lVar43 + 0x18) <= uVar6))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        param_3 = (ulong)(uint)(fVar52 + *(float *)(unaff_x19 + 0x96));
        fVar50 = (fVar52 + *(float *)(unaff_x19 + 0x96) + fVar50) -
                 *(float *)(lVar43 + (int)uVar41 * unaff_x27 + 0x158);
        if ((!bVar7 && *(short *)(lVar43 + (long)(int)uVar6 * (long)iVar15 + 0x20) == 0xad) &&
           ((fVar50 < fStack00000000000000a4 || ((int)unaff_x19[0x5b] == 0)))) {
          *in_stack_00000148 = uVar6;
LAB_024947b4:
          uVar23 = CONCAT44(0x2d,uVar6);
          in_stack_00001788 = in_stack_00001788 - 1;
          bVar7 = false;
LAB_02494938:
          unaff_s12 = 1.0;
          plVar45 = (long *)StringLiteral_302;
          plVar47 = (long *)System_Threading_Mutex_TypeInfo;
          goto LAB_02492630;
        }
        if (*(short *)(lVar43 + (int)uVar41 * unaff_x27 + 0x20) == 0xad) {
          bVar7 = true;
          goto LAB_02494938;
        }
        if ((bStack000000000000005c & *(byte *)(unaff_x19 + 0x46) & 1) != 0) {
          fVar52 = *(float *)((long)unaff_x19 + 0x2cc);
          fVar69 = *(float *)(unaff_x19 + 0x59) / 100.0;
          if ((fVar69 <= fVar52) || ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c))) {
            fVar65 = *(float *)((long)unaff_x19 + 0x1dc);
            param_3 = (ulong)(uint)fVar65;
            fVar52 = *(float *)(unaff_x19 + 0x49);
            if ((fVar52 < fVar65) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
            goto LAB_02499210;
            goto LAB_024946c0;
          }
LAB_024992ac:
          fVar74 = fVar48;
          if (0.0 < fVar52) {
            fVar74 = fVar48 / (1.0 - fVar52);
          }
          fVar52 = fVar52 + (fVar48 - fVar64 * (fStack00000000000000d4 + DAT_02958218)) / fVar74;
LAB_0249929c:
          if (fVar69 <= fVar52) {
            fVar52 = fVar69;
          }
          *(float *)((long)unaff_x19 + 0x2cc) = fVar52;
          return;
        }
LAB_024946c0:
        lVar43 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar43 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar43 = *(long *)puVar8;
        }
        iVar13 = *(int *)(*(long *)(lVar43 + 0xb8) + 0xe78);
        if ((((float)iVar13 != fStack0000000000000034) && (iVar13 != -1)) &&
           (((bStack000000000000005c ^ 1) & 1) == 0)) {
          if (*(int *)(lVar43 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          in_stack_00001788 = FUN_024d66ec();
          if ((unaff_x19[0x6c] == 0) || (lVar43 = *(long *)(unaff_x19[0x6c] + 0x38), lVar43 == 0))
          goto LAB_0249920c;
          uVar6 = *in_stack_00000148 - 1;
          if (*(uint *)(lVar43 + 0x18) <= uVar6)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fStack0000000000000034 = (float)iVar13;
          if (*(short *)(lVar43 + (long)(int)uVar6 * (long)iVar15 + 0x20) == 0xad) {
            *in_stack_00000148 = uVar6;
            goto LAB_024947b4;
          }
        }
        if (fVar50 <= fStack00000000000000a4) {
          param_3 = unaff_d13;
          FUN_024d7014(fStack0000000000000054,unaff_d13,in_stack_000000c8,
                       *(undefined4 *)((long)unaff_x19 + 0x2f4),fVar72,fStack00000000000000cc,
                       fStack00000000000000d4,fStack0000000000000048);
          bStack000000000000005c = 1;
          bVar7 = false;
          fStack0000000000000058 = 1.4013e-45;
          goto LAB_02494938;
        }
        if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
          *(undefined4 *)((long)unaff_x19 + 0x2dc) = *(undefined4 *)((long)unaff_x19 + 0x48c);
        }
        plVar45 = (long *)StringLiteral_302;
        plVar47 = (long *)System_Threading_Mutex_TypeInfo;
        if ((char)unaff_x19[0x46] != '\0') {
          fVar52 = *(float *)(unaff_x19 + 0x58);
          if ((fVar52 < *(float *)((long)unaff_x19 + 0x2b4)) &&
             (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
            fVar64 = *(float *)((long)unaff_x19 + 0x2b4) +
                     ((in_stack_00000018._4_4_ - fVar50) / (float)((int)unaff_x19[0x94] + 1)) /
                     fStack0000000000000054;
            if (fVar64 <= fVar52) {
              fVar64 = fVar52;
            }
LAB_024964c8:
            *(float *)((long)unaff_x19 + 0x2b4) = fVar64;
            return;
          }
          fVar52 = *(float *)((long)unaff_x19 + 0x2cc);
          fVar69 = *(float *)(unaff_x19 + 0x59) / 100.0;
          if ((fVar52 < fVar69) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
          goto LAB_024992ac;
          fVar65 = *(float *)((long)unaff_x19 + 0x1dc);
          param_3 = (ulong)(uint)fVar65;
          fVar52 = *(float *)(unaff_x19 + 0x49);
          if ((fVar52 < fVar65) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
          goto LAB_02499210;
        }
        unaff_s12 = 1.0;
        switch((int)unaff_x19[0x5b]) {
        case 0:
        case 2:
        case 4:
          param_3 = unaff_d13;
          FUN_024d7014(fStack0000000000000054,unaff_d13,in_stack_000000c8,
                       *(undefined4 *)((long)unaff_x19 + 0x2f4),fVar72,fStack00000000000000cc,
                       fStack00000000000000d4,fStack0000000000000048);
          break;
        case 1:
          lVar43 = *(long *)System_Threading_Mutex_TypeInfo;
          if (*(int *)(lVar43 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar43 = *plVar47;
          }
          lVar29 = *(long *)(lVar43 + 0xb8);
          lVar43 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
          if ((*(byte *)(lVar43 + 0x132) & 1) == 0) {
            lVar43 = FUN_00d5941c(lVar43);
          }
          lVar43 = *(long *)(*(long *)(lVar43 + 0xc0) + 8);
          if ((*(byte *)(lVar43 + 0x132) & 1) == 0) {
            lVar43 = FUN_00d5941c();
          }
          piVar21 = (int *)thunk_FUN_00d32ed4(lVar29 + 0x11f0,*(long *)(lVar43 + 0x80) + 0xa0);
          if (*piVar21 == 0) {
            bVar7 = false;
LAB_02495f00:
            uVar23 = DAT_02941c08;
            unaff_s12 = 1.0;
            in_stack_00000148[0] = 0;
            in_stack_00000148[1] = 0;
            in_stack_00001788 = 0xffffffff;
            goto LAB_02492630;
          }
          lVar43 = *plVar47;
          if (*(int *)(lVar43 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar43 = *plVar47;
          }
          FUN_013b8de4(*(long *)(lVar43 + 0xb8) + 0x11f0,&stack0x00000880,
                       *(undefined8 *)
                        Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                      );
          memcpy(&stack0x00000fe8,&stack0x00000880,0x378);
          iVar15 = FUN_024d66ec();
          bVar7 = false;
LAB_02494364:
          unaff_s12 = 1.0;
          iVar13 = *(int *)((long)unaff_x19 + 0x48c) + -1;
          *(int *)((long)unaff_x19 + 0x48c) = iVar13;
          uVar23 = CONCAT44(0x2026,iVar13);
          in_stack_00000140 = in_stack_00000140 + 1;
          in_stack_00001788 = iVar15 - 1;
          goto LAB_02492630;
        case 3:
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          in_stack_00001788 = FUN_024d66ec();
          bVar7 = false;
LAB_0249408c:
          unaff_s12 = 1.0;
          uVar23 = CONCAT44(3,uVar35);
          goto LAB_02492630;
        case 5:
          *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
          param_3 = unaff_d13;
          FUN_024d7014(fStack0000000000000054,unaff_d13,in_stack_000000c8,
                       *(undefined4 *)((long)unaff_x19 + 0x2f4),fVar72,fStack00000000000000cc,
                       fStack00000000000000d4,fStack0000000000000048);
          *(undefined4 *)(unaff_x19 + 0x99) = 0;
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
          *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
          break;
        case 6:
          goto switchD_02494884_caseD_6;
        default:
          bVar7 = false;
          goto LAB_02494950;
        }
        bVar7 = false;
        bStack000000000000005c = 1;
        fStack0000000000000058 = 1.4013e-45;
LAB_024944c4:
        unaff_s12 = 1.0;
        plVar45 = (long *)StringLiteral_302;
        plVar47 = (long *)System_Threading_Mutex_TypeInfo;
        goto LAB_02492630;
      }
      if (((char)unaff_x19[0x46] != '\0') &&
         (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
        fVar69 = *(float *)(unaff_x19 + 0x59) / 100.0;
        if (fVar52 < fVar69) {
          fVar74 = fVar48 / fVar65;
          if (fVar52 <= 0.0) {
            fVar74 = fVar48;
          }
          fVar52 = fVar52 + (fVar48 - fVar64 * (fStack00000000000000d4 + DAT_02958218)) / fVar74;
          goto LAB_0249929c;
        }
        fVar65 = *(float *)((long)unaff_x19 + 0x1dc);
        param_3 = (ulong)(uint)fVar65;
        fVar52 = *(float *)(unaff_x19 + 0x49);
        if (fVar52 < fVar65) {
LAB_02499210:
          fVar64 = (fVar65 - *(float *)(unaff_x19 + 0x47)) * 0.5;
          if (fVar64 <= DAT_028aa298) {
            fVar64 = DAT_028aa298;
          }
          *(float *)((long)unaff_x19 + 0x234) = fVar65;
          fVar74 = (fVar65 - fVar64) * 20.0 + 0.5;
          fVar64 = DAT_02958220;
          if (fVar74 != INFINITY) {
            fVar64 = (float)(int)fVar74 / 20.0;
          }
          if (fVar64 <= fVar52) {
            fVar64 = fVar52;
          }
LAB_02495fd8:
          *(float *)((long)unaff_x19 + 0x1dc) = fVar64;
          return;
        }
      }
      iVar13 = (int)unaff_x19[0x5b];
      if (iVar13 == 1) {
        lVar43 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar43 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar43 = *plVar47;
        }
        plVar45 = (long *)StringLiteral_302;
        lVar29 = *(long *)(lVar43 + 0xb8);
        lVar43 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
        if ((*(byte *)(lVar43 + 0x132) & 1) == 0) {
          lVar43 = FUN_00d5941c(lVar43);
        }
        lVar43 = *(long *)(*(long *)(lVar43 + 0xc0) + 8);
        if ((*(byte *)(lVar43 + 0x132) & 1) == 0) {
          lVar43 = FUN_00d5941c();
        }
        piVar21 = (int *)thunk_FUN_00d32ed4(lVar29 + 0x11f0,*(long *)(lVar43 + 0x80) + 0xa0);
        if (*piVar21 == 0) goto LAB_02495f00;
        lVar43 = *plVar47;
        if (*(int *)(lVar43 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar43 = *plVar47;
        }
        FUN_013b8de4(*(long *)(lVar43 + 0xb8) + 0x11f0,&stack0x00000880,
                     *(undefined8 *)
                      Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                    );
        memcpy(&stack0x00000c70,&stack0x00000880,0x378);
        goto LAB_02494358;
      }
      unaff_s12 = 1.0;
      if (iVar13 == 6) goto LAB_02494394;
      if (iVar13 == 3) {
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        goto LAB_02493ec0;
      }
    }
LAB_02494950:
    if (in_stack_000017bc == 0xad) {
      if ((*in_stack_00000150 == 0) || (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar43 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      *(undefined1 *)(lVar43 + (int)*in_stack_00000148 * unaff_x27 + 0x194) = 0;
    }
    else {
      if (in_stack_000017bc == 9) {
        lVar43 = *in_stack_00000150;
        if ((lVar43 == 0) || (lVar29 = *(long *)(lVar43 + 0x38), lVar29 == 0)) goto LAB_0249920c;
        uVar35 = *in_stack_00000148;
        if (*(uint *)(lVar29 + 0x18) <= uVar35)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        *(undefined1 *)(lVar29 + (int)uVar35 * unaff_x27 + 0x194) = 0;
        *(uint *)((long)unaff_x19 + 0x49c) = uVar35;
        lVar29 = *(long *)(lVar43 + 0x50);
        if (lVar29 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
        *(int *)(lVar29 + 0x2c) = *(int *)(lVar29 + 0x2c) + 1;
        goto LAB_024949c4;
      }
      if (*(int *)((long)unaff_x19 + 0x63c) == 1) {
        (**(code **)(*unaff_x19 + 0x8c8))();
      }
      else if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
        (**(code **)(*unaff_x19 + 0x8b8))(in_stack_00000128,fVar53);
      }
      uVar35 = *in_stack_00000148;
      if (((uint)fStack0000000000000058 & 1) != 0) {
        *(uint *)(in_stack_00000070 + 0x1f0) = uVar35;
      }
      *(uint *)((long)unaff_x19 + 0x49c) = uVar35;
      *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
      if ((unaff_x19[0x6c] == 0) || (lVar43 = *(long *)(unaff_x19[0x6c] + 0x50), lVar43 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar43 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar43 = lVar43 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      fStack0000000000000058 = 0.0;
      *(float *)(lVar43 + 0x60) = fVar68;
      *(float *)(lVar43 + 100) = fVar71;
    }
  }
  else {
    if (((in_stack_000017bc & 0xfffffffe) == 10) && ((int)unaff_x19[0x5b] == 6)) {
      fVar48 = (float)param_3;
      fVar64 = 0.0;
      if ((0.0 < fVar48) && (fVar64 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
        fVar64 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
      }
      param_3 = (ulong)(uint)fStack00000000000000a4;
      if (fStack00000000000000a4 <
          (*(float *)(unaff_x19 + 0x96) - (*(float *)((long)unaff_x19 + 0x4c4) - fVar48)) + fVar64)
      {
        if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
          *(uint *)((long)unaff_x19 + 0x2dc) = uVar35;
        }
        plVar45 = (long *)StringLiteral_302;
        plVar47 = (long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        lVar43 = unaff_x19[0x5c];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            );
        }
        uVar22 = FUN_02681b9c(lVar43,0,0);
        if ((uVar22 & 1) != 0) {
          plVar44 = (long *)unaff_x19[0x5c];
          uVar23 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar44 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar44 + 0x558))(plVar44,uVar23,*(undefined8 *)(*plVar44 + 0x560));
          lVar43 = unaff_x19[0x5c];
          if (lVar43 == 0) goto LAB_0249920c;
          *(int *)(lVar43 + 0x3f8) = (int)unaff_x19[0x7f];
          FUN_024c910c(lVar43,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
          plVar44 = (long *)unaff_x19[0x5c];
          if (plVar44 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar44 + 0x7d8))(plVar44,0,0,*(undefined8 *)(*plVar44 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        }
        uVar23 = CONCAT44(3,uVar35);
        goto LAB_02492630;
      }
    }
    if ((((in_stack_000017bc - 0x2007 < 0x23) &&
         ((1L << ((ulong)(in_stack_000017bc - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
        (in_stack_000017bc - 10 < 2)) || (in_stack_000017bc == 0xa0)) {
LAB_024944e4:
      if (((in_stack_000017bc != 0xad) && (in_stack_000017bc != 0x200b)) &&
         (in_stack_000017bc != 0x2060)) {
        lVar43 = *in_stack_00000150;
        if ((lVar43 == 0) || (lVar29 = *(long *)(lVar43 + 0x50), lVar29 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
        *(int *)(lVar29 + 0x2c) = *(int *)(lVar29 + 0x2c) + 1;
        *(int *)(lVar43 + 0x20) = *(int *)(lVar43 + 0x20) + 1;
      }
    }
    else {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar22 = FUN_016fa418(in_stack_000017bc,0);
      if ((uVar22 & 1) != 0) goto LAB_024944e4;
    }
    if (in_stack_000017bc == 0xa0) {
      if ((*in_stack_00000150 == 0) || (lVar43 = *(long *)(*in_stack_00000150 + 0x50), lVar43 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar43 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar43 = lVar43 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
LAB_024949c4:
      *(int *)(lVar43 + 0x20) = *(int *)(lVar43 + 0x20) + 1;
    }
  }
  if (((int)unaff_x19[0x5b] == 1) && ((in_stack_000017bc == 0x2d || (!bVar10)))) {
    if (unaff_x19[0xca] == 0) goto LAB_0249920c;
    fVar64 = *(float *)(unaff_x19 + 0x3c);
    iVar13 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
    if (unaff_x19[0xca] == 0) goto LAB_0249920c;
    fVar68 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
    lVar43 = unaff_x19[0xc9];
    fVar48 = fStack0000000000000084;
    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
      fVar48 = 1.0;
    }
    if ((lVar43 == 0) || (*(long *)(lVar43 + 0x20) == 0)) goto LAB_0249920c;
    fVar50 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar53 = *(float *)(lVar43 + 0x2c);
    fVar71 = (float)FUN_026fd668(*(long *)(lVar43 + 0x20),0);
    fVar52 = *_fStack0000000000000098;
    fVar71 = fVar50 * (fVar64 / (float)iVar13) * fVar68 * fVar48 * fVar53 * fVar71;
    fVar64 = *_fStack0000000000000088;
    if ((in_stack_000017bc == 10) && (*(int *)((long)unaff_x19 + 0x48c) != (int)unaff_x19[0x92])) {
      if ((*in_stack_00000150 == 0) || (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 == 0))
      goto LAB_0249920c;
      uVar35 = *(int *)((long)unaff_x19 + 0x48c) - 1;
      if (*(uint *)(lVar43 + 0x18) <= uVar35)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (unaff_x19[0xca] == 0) goto LAB_0249920c;
      fVar48 = *(float *)(lVar43 + (long)(int)uVar35 * (long)iVar15 + 0x60);
      iVar13 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
      if (unaff_x19[0xca] == 0) goto LAB_0249920c;
      fVar50 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
      lVar43 = unaff_x19[0xc9];
      fVar68 = fStack0000000000000084;
      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
        fVar68 = 1.0;
      }
      if ((lVar43 == 0) || (*(long *)(lVar43 + 0x20) == 0)) goto LAB_0249920c;
      fVar53 = *(float *)((long)unaff_x19 + 0x3fc);
      fVar65 = *(float *)(lVar43 + 0x2c);
      fVar71 = (float)FUN_026fd668(*(long *)(lVar43 + 0x20),0);
      if ((*in_stack_00000150 == 0) || (lVar43 = *(long *)(*in_stack_00000150 + 0x50), lVar43 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar43 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar43 = lVar43 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      fVar52 = *(float *)(lVar43 + 0x60);
      fVar64 = *(float *)(lVar43 + 100);
      fVar71 = fVar53 * (fVar48 / (float)iVar13) * fVar50 * fVar68 * fVar65 * fVar71;
    }
    fVar53 = *(float *)(unaff_x19 + 0x9a);
    fVar68 = *(float *)(unaff_x19 + 0x96);
    fVar65 = *(float *)((long)unaff_x19 + 0x4c4);
    fVar48 = 0.0;
    fVar50 = 0.0;
    if ((0.0 < fVar53) && (fVar50 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
      fVar50 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
    }
    fVar69 = *(float *)(unaff_x19 + 199);
    if ((char)unaff_x19[0x1d] == '\0') {
      if ((unaff_x19[0xc9] == 0) || (lVar43 = *(long *)(unaff_x19[0xc9] + 0x20), lVar43 == 0))
      goto LAB_0249920c;
      FUN_026fd62c(&stack0x00000880,lVar43,0);
      fVar48 = (float)FUN_026fd474(&stack0x000016e0,0);
    }
    puVar8 = System_Threading_Mutex_TypeInfo;
    fVar66 = *(float *)(unaff_x19 + 0x6b);
    fVar64 = (in_stack_00000090 - fVar52) - fVar64;
    bVar11 = true;
    if ((fVar66 <= fVar64) && (bVar11 = false, !NAN(fVar66))) {
      bVar11 = fVar66 == -1.0;
    }
    if (!bVar11) {
      fVar64 = fVar66;
    }
    fVar52 = _DAT_0294c6e8;
    if ((uVar32 & 0x18) == 0) {
      fVar52 = 1.0;
    }
    if (((fVar68 - (fVar65 - fVar53)) + fVar50 < fStack00000000000000a4) &&
       (ABS(fVar69) + fVar71 * fVar48 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) <
        fVar52 * fVar64)) {
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_024d69d4();
      lVar43 = *(long *)(*(long *)puVar8 + 0xb8);
      memcpy(&stack0x00000508,(void *)(lVar43 + 0x788),0x378);
      FUN_013b86dc(lVar43 + 0x11f0,&stack0x00000508,
                   *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__);
    }
  }
  unaff_d13 = (ulong)(uint)fVar74;
  unaff_s12 = 1.0;
  lVar43 = *in_stack_00000150;
  if ((lVar43 == 0) || (lVar29 = *(long *)(lVar43 + 0x38), lVar29 == 0)) goto LAB_0249920c;
  if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  uVar35 = *(uint *)(unaff_x19 + 0x94);
  lVar29 = lVar29 + (int)*in_stack_00000148 * unaff_x27;
  *(uint *)(lVar29 + 100) = uVar35;
  *(int *)(lVar29 + 0x68) = (int)unaff_x19[0x95];
  if ((bVar10) ||
     ((in_stack_000017bc < 0xe && ((1 << (ulong)(in_stack_000017bc & 0x1f) & 0x2c00U) != 0)))) {
    lVar43 = *(long *)(lVar43 + 0x50);
    if (lVar43 == 0) goto LAB_0249920c;
    if (*(uint *)(lVar43 + 0x18) <= uVar35)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if (*(int *)(lVar43 + (long)(int)uVar35 * 0x5c + 0x24) == 1) goto LAB_02494e68;
  }
  else {
    lVar43 = *(long *)(lVar43 + 0x50);
    if (lVar43 == 0) goto LAB_0249920c;
LAB_02494e68:
    if (*(uint *)(lVar43 + 0x18) <= uVar35)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(int *)(lVar43 + (long)(int)uVar35 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
  }
  if (in_stack_000017bc == 9) {
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar64 = (float)FUN_026fd208(*in_stack_00000138 + 0x50,0);
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar68 = *(float *)(unaff_x19 + 199);
    fVar48 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000138 + 0x1b9));
    fVar64 = fVar74 * fVar64 * fVar48;
    fVar48 = fVar64 * (float)(int)(fVar68 / fVar64);
    param_3 = (ulong)(uint)fVar48;
    if (fVar48 <= fVar68) {
      fVar48 = fVar68 + fVar64;
    }
LAB_02495058:
    *(float *)(unaff_x19 + 199) = fVar48;
  }
  else if (*(float *)(unaff_x19 + 0x55) == 0.0) {
    if ((char)unaff_x19[0x1d] == '\0') {
      fVar68 = unaff_s12;
      if (*(char *)((long)unaff_x19 + 0x46c) != '\0') {
        fVar68 = (float)thunk_FUN_026935f0(_uStack0000000000000060,0);
      }
      fVar48 = *(float *)(unaff_x19 + 199);
      fVar71 = (float)FUN_026fd474(&stack0x00001770,0);
      if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
      fVar64 = 1.0 - *(float *)((long)unaff_x19 + 0x2cc);
      fVar48 = fVar48 + fVar64 * (*(float *)((long)unaff_x19 + 0x2a4) +
                                 fVar74 * (fVar49 + fVar68 * fVar71) +
                                 in_stack_000000c8 *
                                 (fVar72 + fStack00000000000000cc +
                                           *(float *)(unaff_x19[0x1f] + 0x1ac)));
      *(float *)(unaff_x19 + 199) = fVar48;
      goto joined_r0x02494fac;
    }
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar48 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (*(float *)((long)unaff_x19 + 0x2a4) +
             fVar74 * fVar49 +
             in_stack_000000c8 *
             (fVar72 + fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac)));
    param_3 = (ulong)(uint)fVar48;
    fVar48 = *(float *)(unaff_x19 + 199) - fVar48;
    *(float *)(unaff_x19 + 199) = fVar48;
    if ((uVar14 != 0) || (in_stack_000017bc == 0x200b)) {
      fVar64 = in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
      param_3 = (ulong)(uint)fVar64;
      fVar48 = fVar48 - fVar64;
      goto LAB_02495058;
    }
  }
  else {
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar64 = *(float *)(unaff_x19 + 199);
    fVar48 = fVar64 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                      (*(float *)((long)unaff_x19 + 0x2a4) +
                      (*(float *)(unaff_x19 + 0x55) - fVar51) +
                      in_stack_000000c8 *
                      (fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac)));
    *(float *)(unaff_x19 + 199) = fVar48;
joined_r0x02494fac:
    if ((uVar14 != 0) || (param_3 = (ulong)(uint)fVar64, in_stack_000017bc == 0x200b)) {
      fVar64 = in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
      param_3 = (ulong)(uint)fVar64;
      fVar48 = fVar48 + fVar64;
      goto LAB_02495058;
    }
  }
  lVar43 = *in_stack_00000150;
  if ((lVar43 == 0) || (lVar29 = *(long *)(lVar43 + 0x38), lVar29 == 0)) goto LAB_0249920c;
  uVar35 = *in_stack_00000148;
  uVar32 = (uint)*(undefined8 *)(lVar29 + 0x18);
  if (uVar32 <= uVar35) goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  *(float *)(lVar29 + (int)uVar35 * unaff_x27 + 0x144) = fVar48;
  uVar41 = in_stack_000017bc;
  if ((int)in_stack_000017bc < 0xd) {
    if ((in_stack_000017bc - 10 < 2) || (in_stack_000017bc == 3)) goto LAB_024950bc;
FUN_02495710:
    if (((bool)(bVar10 & in_stack_000017bc == 0x2d)) || ((float)uVar35 == in_stack_00000078._4_4_))
    goto LAB_024950bc;
  }
  else {
    if (1 < in_stack_000017bc - 0x2028) {
      if (in_stack_000017bc != 0xd) goto FUN_02495710;
      param_3 = 0;
      *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
      if ((float)uVar35 != in_stack_00000078._4_4_) goto LAB_0249572c;
    }
LAB_024950bc:
    if (0.0 < *(float *)(unaff_x19 + 0x9a)) {
      fVar64 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
      if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (((fStack000000000000004c < ABS(fVar64)) && (*(char *)((long)unaff_x19 + 700) == '\0')) &&
         (*(char *)((long)unaff_x19 + 0x334) == '\0')) {
        FUN_024d6ca8(fVar64);
        *(float *)((long)unaff_x19 + 0x4bc) = *(float *)((long)unaff_x19 + 0x4bc) - fVar64;
        *(float *)(unaff_x19 + 0x9a) = fVar64 + *(float *)(unaff_x19 + 0x9a);
        puVar8 = System_Threading_Mutex_TypeInfo;
        lVar43 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar43 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar43 = *(long *)puVar8;
        }
        lVar29 = *(long *)(lVar43 + 0xb8);
        if (*(int *)(lVar29 + 0x7ac) == (int)unaff_x19[0x94]) {
          if (*(int *)(lVar43 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar29 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          FUN_013b8de4(lVar29 + 0x11f0,&stack0x00000880,
                       *(undefined8 *)
                        Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                      );
          lVar43 = *(long *)System_Threading_Mutex_TypeInfo;
          memcpy((void *)(*(long *)(lVar43 + 0xb8) + 0x788),&stack0x00000880,0x378);
          lVar43 = *(long *)(lVar43 + 0xb8);
          *(float *)(lVar43 + 0x7bc) = fVar64 + *(float *)(lVar43 + 0x7bc);
          *(float *)(lVar43 + 0x800) = fVar64 + *(float *)(lVar43 + 0x800);
          memcpy(&stack0x00000190,(void *)(lVar43 + 0x788),0x378);
          FUN_013b86dc(lVar43 + 0x11f0,&stack0x00000190,
                       *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__);
        }
      }
    }
    fVar68 = *(float *)(unaff_x19 + 0x9a);
    *(undefined1 *)((long)unaff_x19 + 0x334) = 0;
    fVar48 = *(float *)((long)unaff_x19 + 0x4c4) - fVar68;
    fVar64 = *(float *)((long)unaff_x19 + 0x4bc);
    if (fVar48 <= *(float *)((long)unaff_x19 + 0x4bc)) {
      fVar64 = fVar48;
    }
    *(float *)((long)unaff_x19 + 0x4bc) = fVar64;
    fVar71 = *(float *)(unaff_x19 + 0x98);
    if (in_stack_000017b4 == '\0') {
      in_stack_000017b8 = fVar64;
    }
    if ((*(char *)((long)unaff_x19 + 0x32c) != '\0') &&
       (((int)unaff_x19[100] <= *(int *)((long)unaff_x19 + 0x48c) ||
        ((int)unaff_x19[0x65] <= (int)unaff_x19[0x94])))) {
      in_stack_000017b4 = '\x01';
    }
    lVar43 = *in_stack_00000150;
    if ((lVar43 == 0) || (lVar29 = *(long *)(lVar43 + 0x50), lVar29 == 0)) goto LAB_0249920c;
    uVar35 = *(uint *)(unaff_x19 + 0x94);
    if (*(uint *)(lVar29 + 0x18) <= uVar35)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar42 = lVar29 + (long)(int)uVar35 * 0x5c;
    *(int *)(lVar42 + 0x34) = (int)unaff_x19[0x92];
    iVar13 = (int)unaff_x19[0x92];
    if ((int)unaff_x19[0x92] <= *(int *)((long)unaff_x19 + 0x494)) {
      iVar13 = *(int *)((long)unaff_x19 + 0x494);
    }
    *(int *)((long)unaff_x19 + 0x494) = iVar13;
    *(int *)(lVar42 + 0x38) = iVar13;
    *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x48c);
    *(undefined4 *)(lVar42 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x48c);
    iVar13 = *(int *)((long)unaff_x19 + 0x494);
    if (*(int *)((long)unaff_x19 + 0x494) <= *(int *)((long)unaff_x19 + 0x49c)) {
      iVar13 = *(int *)((long)unaff_x19 + 0x49c);
    }
    *(int *)((long)unaff_x19 + 0x49c) = iVar13;
    *(int *)(lVar42 + 0x40) = iVar13;
    *(int *)(lVar42 + 0x24) = (*(int *)(lVar42 + 0x3c) - *(int *)(lVar42 + 0x34)) + 1;
    *(undefined4 *)(lVar42 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
    lVar43 = *(long *)(lVar43 + 0x38);
    if (lVar43 == 0) goto LAB_0249920c;
    if (*(uint *)(lVar43 + 0x18) <= *(uint *)((long)unaff_x19 + 0x494))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    uVar75 = *(undefined4 *)(lVar43 + (int)*(uint *)((long)unaff_x19 + 0x494) * unaff_x27 + 0x11c);
    lVar29 = lVar29 + (long)(int)uVar35 * 0x5c;
    *(float *)(lVar29 + 0x70) = fVar48;
    *(undefined4 *)(lVar29 + 0x6c) = uVar75;
    lVar43 = *in_stack_00000150;
    if ((lVar43 == 0) || (lVar29 = *(long *)(lVar43 + 0x50), lVar29 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar43 = *(long *)(lVar43 + 0x38);
    if (lVar43 == 0) goto LAB_0249920c;
    if (*(uint *)(lVar43 + 0x18) <= *(uint *)((long)unaff_x19 + 0x49c))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    uVar75 = *(undefined4 *)(lVar43 + (int)*(uint *)((long)unaff_x19 + 0x49c) * unaff_x27 + 0x128);
    fVar71 = fVar71 - fVar68;
    lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
    *(float *)(lVar29 + 0x78) = fVar71;
    *(undefined4 *)(lVar29 + 0x74) = uVar75;
    lVar43 = *in_stack_00000150;
    if ((lVar43 == 0) || (lVar42 = *(long *)(lVar43 + 0x50), lVar42 == 0)) goto LAB_0249920c;
    lVar20 = (long)(int)*(uint *)(unaff_x19 + 0x94);
    if (*(uint *)(lVar42 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar29 = lVar42 + lVar20 * 0x5c;
    *(float *)(lVar29 + 0x44) = *(float *)(lVar29 + 0x74) - fVar74 * in_stack_00000128;
    *(float *)(lVar29 + 0x5c) = fStack00000000000000d4;
    if (*(int *)(lVar29 + 0x24) == 1) {
      *(int *)(lVar42 + lVar20 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
    }
    if ((*in_stack_00000138 == 0) || (lVar29 = *(long *)(lVar43 + 0x38), lVar29 == 0))
    goto LAB_0249920c;
    lVar38 = (long)(int)*(uint *)((long)unaff_x19 + 0x49c);
    uVar32 = (uint)*(undefined8 *)(lVar29 + 0x18);
    if (uVar32 <= *(uint *)((long)unaff_x19 + 0x49c))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(char *)(lVar29 + lVar38 * unaff_x27 + 0x194) == '\0') &&
       (lVar38 = (long)(int)*(uint *)(unaff_x19 + 0x93), uVar32 <= *(uint *)(unaff_x19 + 0x93)))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar74 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (in_stack_000000c8 *
              (fVar72 + fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac)) -
             *(float *)((long)unaff_x19 + 0x2a4));
    fVar64 = -fVar74;
    if ((char)unaff_x19[0x1d] != '\0') {
      fVar64 = fVar74;
    }
    lVar42 = lVar42 + lVar20 * 0x5c;
    *(float *)(lVar42 + 0x58) = *(float *)(lVar29 + lVar38 * unaff_x27 + 0x144) + fVar64;
    fVar64 = *(float *)(unaff_x19 + 0x9a);
    *(float *)(lVar42 + 0x48) = fStack0000000000000050 + (fVar71 - fVar48);
    *(float *)(lVar42 + 0x4c) = fVar71;
    param_3 = (ulong)(uint)(0.0 - fVar64);
    *(float *)(lVar42 + 0x50) = 0.0 - fVar64;
    *(float *)(lVar42 + 0x54) = fVar48;
    plVar47 = (long *)System_Threading_Mutex_TypeInfo;
    if ((int)in_stack_000017bc < 0x2d) {
      if (in_stack_000017bc - 10 < 2) {
UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__OnSelectEntering:
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar45 = (long *)StringLiteral_302;
        FUN_024d69d4();
        lVar43 = unaff_x19[0x6c];
        *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
        iVar15 = (int)unaff_x19[0x94] + 1;
        *(int *)(unaff_x19 + 0x94) = iVar15;
        *(int *)(unaff_x19 + 0x92) = *(int *)((long)unaff_x19 + 0x48c) + 1;
        if ((lVar43 == 0) || (*(long *)(lVar43 + 0x50) == 0)) goto LAB_0249920c;
        if (*(int *)(*(long *)(lVar43 + 0x50) + 0x18) <= iVar15) {
          FUN_024d6e60();
          lVar43 = unaff_x19[0x6c];
          if (lVar43 == 0) goto LAB_0249920c;
        }
        lVar43 = *(long *)(lVar43 + 0x38);
        if (lVar43 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar43 + 0x18) <= *in_stack_00000148)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar64 = *(float *)(lVar43 + (int)*in_stack_00000148 * unaff_x27 + 0x154);
        if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
          fVar74 = 0.0;
          if ((in_stack_000017bc == 0x2029) || (in_stack_000017bc == 10)) {
            fVar74 = *(float *)((long)unaff_x19 + 0x2c4);
          }
          uVar25 = 0;
          fVar74 = *(float *)(unaff_x19 + 0x9a) +
                   fVar64 + (0.0 - *(float *)((long)unaff_x19 + 0x4c4)) +
                   fStack0000000000000054 *
                   (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4)) +
                   in_stack_000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar74);
        }
        else {
          if ((in_stack_000017bc == 0x2029) || (fVar74 = 0.0, in_stack_000017bc == 10)) {
            fVar74 = *(float *)((long)unaff_x19 + 0x2c4);
          }
          uVar25 = 1;
          fVar74 = *(float *)(unaff_x19 + 0x9a) +
                   *(float *)(unaff_x19 + 0x57) +
                   in_stack_000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar74);
        }
        *(float *)(unaff_x19 + 0x9a) = fVar74;
        *(undefined1 *)((long)unaff_x19 + 700) = uVar25;
        lVar43 = *plVar47;
        if (*(int *)(lVar43 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar43 = *plVar47;
        }
        uVar19 = *(undefined8 *)(*(long *)(lVar43 + 0xb8) + 0x15a8);
        *(float *)(unaff_x19 + 0x99) = fVar64;
        param_3 = NEON_rev64(uVar19,4);
        unaff_x19[0x98] = param_3;
        *(float *)(unaff_x19 + 199) =
             *(float *)(unaff_x19 + 0x80) + 0.0 + *(float *)((long)unaff_x19 + 0x404);
        FUN_024d69d4();
        FUN_024d69d4();
        *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
        fStack0000000000000058 = 1.4013e-45;
        bStack000000000000005c = 1;
        goto LAB_02492630;
      }
      if (in_stack_000017bc == 3) {
        if (unaff_x19[0x8e] == 0) goto LAB_0249920c;
        in_stack_00001788 = (uint)*(undefined8 *)(unaff_x19[0x8e] + 0x18);
        uVar41 = 3;
      }
    }
    else if ((in_stack_000017bc - 0x2028 < 2) || (in_stack_000017bc == 0x2d))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__OnSelectEntering;
  }
LAB_0249572c:
  uVar35 = *in_stack_00000148;
  if (uVar32 <= uVar35) goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  if (*(char *)(lVar29 + (int)uVar35 * unaff_x27 + 0x194) != '\0') {
    lVar29 = lVar29 + (int)uVar35 * unaff_x27;
    uVar59 = *(ulong *)(lVar29 + 0x11c);
    uVar22 = *(ulong *)(in_stack_00000070 + 0x230);
    *(ulong *)(in_stack_00000070 + 0x230) =
         uVar59 ^ (uVar59 ^ uVar22) &
                  CONCAT44(-(uint)((float)(uVar22 >> 0x20) < (float)(uVar59 >> 0x20)),
                           -(uint)((float)uVar22 < (float)uVar59));
    uVar22 = *(ulong *)(in_stack_00000070 + 0x238);
    param_3 = *(ulong *)(lVar29 + 0x128);
    *(ulong *)(in_stack_00000070 + 0x238) =
         param_3 ^ (param_3 ^ uVar22) &
                   CONCAT44(-(uint)((float)(param_3 >> 0x20) < (float)(uVar22 >> 0x20)),
                            -(uint)((float)param_3 < (float)uVar22));
  }
  if (((int)unaff_x19[0x5b] == 5) &&
     ((0xd < uVar41 || ((1 << (ulong)(uVar41 & 0x1f) & 0x2c00U) == 0)))) {
    lVar29 = *(long *)(lVar43 + 0x58);
    if (lVar29 == 0) goto LAB_0249920c;
    iVar13 = (int)unaff_x19[0x95] + 1;
    if (*(int *)(lVar29 + 0x18) < iVar13) {
      if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01147c08((long *)(lVar43 + 0x58),iVar13,1,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerMove__);
      lVar43 = *in_stack_00000150;
      if (lVar43 == 0) goto LAB_0249920c;
    }
    lVar29 = *(long *)(lVar43 + 0x58);
    if (lVar29 == 0) goto LAB_0249920c;
    uVar32 = *(uint *)(unaff_x19 + 0x95);
    lVar42 = (long)(int)uVar32;
    uVar35 = *(uint *)(lVar29 + 0x18);
    if (uVar35 <= uVar32)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar20 = lVar29 + lVar42 * 0x14;
    fVar74 = *(float *)(lVar20 + 0x30);
    param_3 = (ulong)(uint)fVar74;
    *(undefined4 *)(lVar20 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
    fVar64 = *(float *)((long)unaff_x19 + 0x4bc);
    if (fVar74 <= *(float *)((long)unaff_x19 + 0x4bc)) {
      fVar64 = fVar74;
    }
    *(float *)(lVar20 + 0x30) = fVar64;
    uVar41 = *(uint *)((long)unaff_x19 + 0x48c);
    if (uVar41 == 0 && uVar32 == 0) {
      *(uint *)(lVar29 + lVar42 * 0x14 + 0x20) = uVar41;
    }
    else {
      uVar6 = uVar41 - 1;
      if (0 < (int)uVar41) {
        lVar43 = *(long *)(lVar43 + 0x38);
        if (lVar43 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar43 + 0x18) <= uVar6)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (uVar32 != *(uint *)(lVar43 + (long)(int)uVar6 * (long)iVar15 + 0x68)) {
          if (uVar35 <= uVar32 - 1)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          *(uint *)(lVar29 + 0x20 + (long)(int)(uVar32 - 1) * 0x14 + 4) = uVar6;
          *(uint *)(lVar29 + 0x20 + lVar42 * 0x14) = uVar41;
          goto LAB_024957b0;
        }
      }
      if ((float)uVar41 == in_stack_00000078._4_4_) {
        *(float *)(lVar29 + lVar42 * 0x14 + 0x24) = in_stack_00000078._4_4_;
      }
    }
  }
LAB_024957b0:
  puVar8 = System_Threading_Mutex_TypeInfo;
  if (((char)unaff_x19[0x5a] == '\0') &&
     ((6 < *(uint *)(unaff_x19 + 0x5b) ||
      ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5b) & 0x1f) & 0x4aU) == 0)))) goto LAB_02495b70;
  if ((uVar14 == 0) &&
     (((in_stack_000017bc != 0x2d && (in_stack_000017bc != 0x200b)) && (in_stack_000017bc != 0xad)))
     ) {
    if (*(char *)((long)unaff_x19 + 0x2d2) != '\0') goto LAB_024958f0;
LAB_02495868:
    if (((((0x2bfd < in_stack_000017bc - 0xac01) && (0x1d < in_stack_000017bc - 0xa961)) &&
         (0xfd < in_stack_000017bc - 0x1101)) || (uVar22 = FUN_024e95f0(0), (uVar22 & 1) != 0)) &&
       ((((0xed < in_stack_000017bc - 0xff01 && (0x1d < in_stack_000017bc - 0xfe31)) &&
         (0x717d < in_stack_000017bc - 0x2e81)) && (0x1fd < in_stack_000017bc - 0xf901))))
    goto LAB_024958f0;
    lVar43 = FUN_024e94b0(0);
    if ((lVar43 == 0) || (*(long *)(lVar43 + 0x10) == 0)) goto LAB_0249920c;
    uVar22 = FUN_0129aa60(*(long *)(lVar43 + 0x10),&stack0x00000880,
                          *(undefined8 *)
                           System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                         );
    if ((int)in_stack_00000078._4_4_ <= (int)*in_stack_00000148) {
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
      if (uVar18 != uVar61 || ((bStack000000000000005c ^ 0xff) & 1) != 0) goto LAB_02495b70;
      goto LAB_02495af4;
    }
    lVar43 = FUN_024e94b0(0);
    if (((lVar43 == 0) || (*in_stack_00000150 == 0)) ||
       (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000148 + 1)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if (*(long *)(lVar43 + 0x18) == 0) goto LAB_0249920c;
    in_stack_00000880 =
         (uint)*(ushort *)(lVar29 + (long)(int)(*in_stack_00000148 + 1) * (long)iVar15 + 0x20);
    uVar59 = FUN_0129aa60(*(long *)(lVar43 + 0x18),&stack0x00000880,
                          *(undefined8 *)
                           System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                         );
    if ((uVar22 & 1) != 0) goto LAB_02495adc;
    if ((uVar59 & 1) == 0) goto LAB_02495bc4;
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
        *(undefined4 *)(*(long *)(*(long *)puVar8 + 0xb8) + 0xe78) = 0xffffffff;
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
    if (!(bool)(in_stack_000017bc == 0xad & (bVar7 ^ 1U))) {
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
  plVar47 = (long *)System_Threading_Mutex_TypeInfo;
  if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar45 = (long *)StringLiteral_302;
  FUN_024d69d4();
  *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
  goto LAB_02492630;
switchD_02494884_caseD_6:
  unaff_x28 = &StringLiteral_85;
  unaff_x29 = &Unity_XR_CoreUtils_MathUtility_TypeInfo;
  param_1 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  goto code_r0x02495e44;
LAB_02494394:
  if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar45 = (long *)StringLiteral_302;
  in_stack_00001788 = FUN_024d66ec();
  lVar43 = unaff_x19[0x5c];
  if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
              0xe0) == 0) {
    thunk_FUN_00d32864(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
  }
  uVar22 = FUN_02681b9c(lVar43,0,0);
  if ((uVar22 & 1) != 0) {
    plVar44 = (long *)unaff_x19[0x5c];
    uVar23 = (**(code **)(*unaff_x19 + 0x548))();
    if (plVar44 == (long *)0x0) goto LAB_0249920c;
    (**(code **)(*plVar44 + 0x558))(plVar44,uVar23,*(undefined8 *)(*plVar44 + 0x560));
    lVar43 = unaff_x19[0x5c];
    if (lVar43 == 0) goto LAB_0249920c;
    *(int *)(lVar43 + 0x3f8) = (int)unaff_x19[0x7f];
    FUN_024c910c(lVar43,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
    plVar44 = (long *)unaff_x19[0x5c];
    if (plVar44 == (long *)0x0) goto LAB_0249920c;
    (**(code **)(*plVar44 + 0x7d8))(plVar44,0,0,*(undefined8 *)(*plVar44 + 0x7e0));
    *(undefined1 *)(unaff_x19 + 0x5e) = 1;
  }
  goto LAB_02494484;
LAB_02496a50:
  do {
    uVar14 = uVar35 - 1;
    if (*(uint *)(lVar43 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*in_stack_00000150 == 0) || (lVar42 = *(long *)(*in_stack_00000150 + 0x50), lVar42 == 0))
    goto LAB_0249920c;
    lVar38 = (long)(int)uVar14;
    lVar20 = lVar43 + lVar38 * 0x178;
    uVar32 = *(uint *)(lVar20 + 100);
    if (*(uint *)(lVar42 + 0x18) <= uVar32)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar36 = *(long *)(lVar20 + 0x38);
    uVar3 = *(ushort *)(lVar20 + 0x20);
    lVar34 = (long)(int)uVar32;
    lVar42 = lVar42 + lVar34 * 0x5c;
    uVar6 = *(uint *)(lVar42 + 0x3c);
    iVar16 = *(int *)(lVar42 + 0x28);
    iVar17 = *(int *)(lVar42 + 0x2c);
    uVar5 = *(uint *)(lVar42 + 0x40);
    lVar20 = (long)(int)uVar5;
    uVar41 = *(uint *)(lVar42 + 0x68);
    fVar69 = *(float *)(lVar42 + 0x5c);
    fVar63 = *(float *)(lVar42 + 0x60);
    iVar2 = *(int *)(lVar42 + 0x20);
    fVar51 = *(float *)(lVar42 + 0x4c);
    fVar52 = *(float *)(lVar42 + 0x54);
    fVar71 = *(float *)(lVar42 + 0x58);
    fVar65 = *(float *)(lVar42 + 0x6c);
    fVar53 = *(float *)(lVar42 + 0x70);
    fVar50 = *(float *)(lVar42 + 0x74);
    fVar72 = *(float *)(lVar42 + 0x78);
    fVar66 = fVar69 + fVar63;
    uVar40 = (uint)uVar3;
    if ((int)uVar41 < 9) {
      switch(uVar41) {
      case 1:
        if ((char)unaff_x19[0x1d] == '\0') {
          in_stack_000000c8 = fVar63 + 0.0;
        }
        else {
          in_stack_000000c8 = 0.0 - fVar71;
        }
        break;
      case 2:
LAB_02496c1c:
        in_stack_000000c8 = (fVar63 + fVar69 * 0.5) - fVar71 * 0.5;
        break;
      default:
        goto switchD_02496b58_caseD_3;
      case 4:
        in_stack_000000c8 = fVar66 - fVar71;
        if ((char)unaff_x19[0x1d] != '\0') {
          in_stack_000000c8 = fVar66;
        }
        break;
      case 8:
        goto switchD_02496b58_caseD_8;
      }
LAB_02496c90:
      uStack00000000000000c0 = 0;
    }
    else if (uVar41 == 0x10) {
switchD_02496b58_caseD_8:
      if (uVar3 < 0xad) {
        if ((uVar40 != 3) && (uVar40 != 10)) goto LAB_02496bac;
      }
      else if ((uVar40 != 0xad) && ((uVar40 != 0x200b && (uVar40 != 0x2060)))) {
LAB_02496bac:
        if (*(uint *)(lVar43 + 0x18) <= uVar6)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar4 = *(undefined2 *)(lVar43 + (long)(int)uVar6 * 0x178 + 0x20);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar22 = FUN_016f9f84(uVar4,0);
        if ((uVar22 & 1) == 0) {
          bVar1 = (int)uVar32 < (int)unaff_x19[0x94];
        }
        else {
          bVar1 = false;
        }
        if ((fVar71 <= fVar69) && (!bVar1 && (uVar41 >> 4 & 1) == 0)) {
          in_stack_000000c8 = fVar63;
          if ((char)unaff_x19[0x1d] != '\0') {
            in_stack_000000c8 = fVar66;
          }
          goto LAB_02496c90;
        }
        if (((uVar35 == 1) || (uVar32 != uVar61)) || (uVar14 == *(uint *)((long)unaff_x19 + 0x31c)))
        {
          in_stack_000000c8 = fVar63;
          if ((char)unaff_x19[0x1d] != '\0') {
            in_stack_000000c8 = fVar66;
          }
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          fStack0000000000000020 = (float)FUN_016fa418(uVar3,0);
          uStack00000000000000c0 = 0;
        }
        else {
          cVar26 = (char)unaff_x19[0x1d];
          fVar66 = -fVar71;
          if (cVar26 != '\0') {
            fVar66 = fVar71;
          }
          if (*(uint *)(lVar43 + 0x18) <= uVar6)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar71 = 1.0;
          iVar17 = (int)*(char *)(lVar43 + (long)(int)uVar6 * 0x178 + 0x194) +
                   (-iVar2 - ((uint)fStack0000000000000020 & 1)) + iVar17 + -1;
          if (0 < iVar17) {
            fVar71 = *(float *)((long)unaff_x19 + 0x2d4);
          }
          if (iVar17 < 1) {
            iVar17 = 1;
          }
          if (uVar40 == 9) {
LAB_02498bb8:
            fVar71 = 1.0 - fVar71;
          }
          else {
            if (uVar40 != 0xa0) {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar22 = FUN_016fa418(uVar3,0);
              cVar26 = (char)unaff_x19[0x1d];
              if ((uVar22 & 1) != 0) goto LAB_02498bb8;
            }
            iVar17 = (iVar2 - (~(uint)fStack0000000000000020 & 1)) + iVar16;
          }
          fVar71 = ((fVar69 + fVar66) * fVar71) / (float)iVar17;
          if (cVar26 == '\0') {
            in_stack_000000c8 = in_stack_000000c8 + fVar71;
            uStack00000000000000c0 =
                 CONCAT44((float)((ulong)uStack00000000000000c0 >> 0x20) + 0.0,
                          (float)uStack00000000000000c0 + 0.0);
          }
          else {
            in_stack_000000c8 = in_stack_000000c8 - fVar71;
          }
        }
      }
    }
    else if (uVar41 == 0x20) {
      fVar71 = fVar65 + fVar50;
      goto LAB_02496c1c;
    }
switchD_02496b58_caseD_3:
    uVar41 = (uint)*(undefined8 *)(lVar43 + 0x18);
    if (uVar41 <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar42 = lVar43 + lVar38 * 0x178;
    fVar66 = fStack0000000000000098 + in_stack_000000c8;
    fVar71 = (float)_in_stack_00000090 + (float)uStack00000000000000c0;
    fVar69 = (float)((ulong)_in_stack_00000090 >> 0x20) +
             (float)((ulong)uStack00000000000000c0 >> 0x20);
    if (*(char *)(lVar42 + 0x194) == '\0') goto LAB_02497688;
    iVar16 = *(int *)(lVar43 + lVar38 * 0x178 + 0x2c);
    if (iVar16 != 0) goto LAB_02497374;
    fVar68 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)uVar32,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
    case 0:
      lVar28 = lVar43 + lVar38 * 0x178;
      *(undefined4 *)(lVar28 + 0x84) = 0;
      *(undefined4 *)(lVar28 + 0xac) = 0;
      *(undefined4 *)(lVar28 + 0xd4) = 0x3f800000;
      fVar68 = 1.0;
      break;
    case 1:
      fVar72 = *(float *)(lVar43 + lVar38 * 0x178 + 0x70);
      if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
        lVar28 = lVar43 + lVar38 * 0x178;
        fVar50 = (in_stack_000000c8 + fVar72) - *(float *)(in_stack_00000070 + 0x230);
        fVar72 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
        goto LAB_02496df8;
      }
      lVar28 = lVar43 + lVar38 * 0x178;
      fVar50 = fVar50 - fVar65;
      *(float *)(lVar28 + 0x84) = fVar68 + (fVar72 - fVar65) / fVar50;
      *(float *)(lVar28 + 0xac) = fVar68 + (*(float *)(lVar28 + 0x98) - fVar65) / fVar50;
      *(float *)(lVar28 + 0xd4) = fVar68 + (*(float *)(lVar28 + 0xc0) - fVar65) / fVar50;
      fVar68 = fVar68 + (*(float *)(lVar28 + 0xe8) - fVar65) / fVar50;
      break;
    case 2:
      lVar28 = lVar43 + lVar38 * 0x178;
      fVar72 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
      fVar50 = (in_stack_000000c8 + *(float *)(lVar28 + 0x70)) -
               *(float *)(in_stack_00000070 + 0x230);
LAB_02496df8:
      *(float *)(lVar28 + 0x84) = fVar68 + fVar50 / fVar72;
      *(float *)(lVar28 + 0xac) =
           fVar68 + ((in_stack_000000c8 + *(float *)(lVar28 + 0x98)) -
                    *(float *)(in_stack_00000070 + 0x230)) /
                    (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
      *(float *)(lVar28 + 0xd4) =
           fVar68 + ((in_stack_000000c8 + *(float *)(lVar28 + 0xc0)) -
                    *(float *)(in_stack_00000070 + 0x230)) /
                    (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
      fVar68 = fVar68 + ((in_stack_000000c8 + *(float *)(lVar28 + 0xe8)) -
                        *(float *)(in_stack_00000070 + 0x230)) /
                        (*(float *)(in_stack_00000070 + 0x238) -
                        *(float *)(in_stack_00000070 + 0x230));
      break;
    case 3:
      switch((int)unaff_x19[0x61]) {
      case 0:
        lVar28 = lVar43 + lVar38 * 0x178;
        *(undefined4 *)(lVar28 + 0x88) = 0;
        *(undefined4 *)(lVar28 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar28 + 0xd8) = 0;
        *(undefined4 *)(lVar28 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar28 = lVar43 + lVar38 * 0x178;
        fVar72 = fVar72 - fVar53;
        fVar50 = fVar68 + (*(float *)(lVar28 + 0x74) - fVar53) / fVar72;
        fVar72 = fVar68 + (*(float *)(lVar28 + 0x9c) - fVar53) / fVar72;
        *(float *)(lVar28 + 0x88) = fVar50;
        *(float *)(lVar28 + 0xb0) = fVar72;
        *(float *)(lVar28 + 0xd8) = fVar50;
        *(float *)(lVar28 + 0x100) = fVar72;
        break;
      case 2:
        lVar28 = lVar43 + lVar38 * 0x178;
        fVar50 = fVar68 + (*(float *)(lVar28 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                          (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
        *(float *)(lVar28 + 0x88) = fVar50;
        fVar72 = *(float *)(unaff_x19 + 0x9b);
        fVar53 = *(float *)(unaff_x19 + 0x9c);
        *(float *)(lVar28 + 0xd8) = fVar50;
        fVar50 = fVar68 + (*(float *)(lVar28 + 0x9c) - fVar72) / (fVar53 - fVar72);
        *(float *)(lVar28 + 0xb0) = fVar50;
        *(float *)(lVar28 + 0x100) = fVar50;
        break;
      case 3:
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
        uVar41 = (uint)*(undefined8 *)(lVar43 + 0x18);
      }
      if (uVar41 <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = lVar43 + lVar38 * 0x178;
      fVar50 = *(float *)(lVar28 + 0x15c);
      fVar72 = (1.0 - (*(float *)(lVar28 + 0x88) + *(float *)(lVar28 + 0xb0)) * fVar50) * 0.5;
      fVar53 = fVar68 + *(float *)(lVar28 + 0x88) * fVar50 + fVar72;
      fVar68 = fVar68 + fVar72 + *(float *)(lVar28 + 0xb0) * fVar50;
      *(float *)(lVar28 + 0x84) = fVar53;
      *(float *)(lVar28 + 0xac) = fVar53;
      *(float *)(lVar28 + 0xd4) = fVar68;
      break;
    default:
      goto switchD_02496d4c_default;
    }
    *(float *)(lVar43 + lVar38 * 0x178 + 0xfc) = fVar68;
switchD_02496d4c_default:
    switch((int)unaff_x19[0x61]) {
    case 0:
      if (uVar41 <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = lVar43 + lVar38 * 0x178;
      *(undefined4 *)(lVar28 + 0x88) = 0;
      *(undefined4 *)(lVar28 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar28 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar28 + 0x100) = 0;
      break;
    case 1:
      if (uVar14 < uVar41) {
        lVar28 = lVar43 + lVar38 * 0x178;
        fVar51 = fVar51 - fVar52;
        fVar68 = (*(float *)(lVar28 + 0x74) - fVar52) / fVar51;
        fVar51 = (*(float *)(lVar28 + 0x9c) - fVar52) / fVar51;
        *(float *)(lVar28 + 0x88) = fVar68;
        goto LAB_02497174;
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    case 2:
      if (uVar41 <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = lVar43 + lVar38 * 0x178;
      fVar68 = (*(float *)(lVar28 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
      *(float *)(lVar28 + 0x88) = fVar68;
      fVar51 = (*(float *)(lVar28 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
LAB_02497174:
      *(float *)(lVar28 + 0xb0) = fVar51;
      *(float *)(lVar28 + 0xd8) = fVar51;
      *(float *)(lVar28 + 0x100) = fVar68;
      break;
    case 3:
      if (uVar41 <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = lVar43 + lVar38 * 0x178;
      fVar51 = *(float *)(lVar28 + 0x15c);
      fVar50 = (1.0 - (*(float *)(lVar28 + 0x84) + *(float *)(lVar28 + 0xd4)) / fVar51) * 0.5;
      fVar68 = *(float *)(lVar28 + 0x84) / fVar51 + fVar50;
      fVar50 = fVar50 + *(float *)(lVar28 + 0xd4) / fVar51;
      *(float *)(lVar28 + 0x88) = fVar68;
      *(float *)(lVar28 + 0xb0) = fVar50;
      *(float *)(lVar28 + 0x100) = fVar68;
      *(float *)(lVar28 + 0xd8) = fVar50;
    }
    if (uVar41 <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar28 = lVar43 + lVar38 * 0x178;
    fVar68 = *(float *)(lVar28 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
    if ((*(char *)(lVar28 + 0x5c) == '\0') && ((*(byte *)(lVar43 + lVar38 * 0x178 + 400) & 1) != 0))
    {
      fVar68 = -fVar68;
    }
    fVar50 = fVar64;
    if (((iVar13 == 2) || (fVar50 = fVar49, iVar13 == 1)) || (fVar50 = fVar64 / fVar74, iVar13 == 0)
       ) {
      fVar68 = fVar50 * fVar68;
    }
    lVar28 = lVar43 + lVar38 * 0x178;
    fVar51 = *(float *)(lVar28 + 0x88);
    fVar72 = *(float *)(lVar28 + 0x84);
    fVar50 = -2.1474836e+09;
    if (fVar72 != INFINITY) {
      fVar50 = (float)(int)fVar72;
    }
    fVar53 = *(float *)(lVar28 + 0xd4);
    fVar65 = *(float *)(lVar28 + 0xd8);
    fVar52 = -2.1474836e+09;
    if (fVar51 != INFINITY) {
      fVar52 = (float)(int)fVar51;
    }
    uVar75 = FUN_024e0374(fVar72 - fVar50,fVar51 - fVar52);
    *(undefined4 *)(lVar28 + 0x84) = uVar75;
    if (*(uint *)(lVar43 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar65 = fVar65 - fVar52;
    *(float *)(lVar28 + 0x88) = fVar68;
    uVar75 = FUN_024e0374(fVar72 - fVar50,fVar65);
    *(undefined4 *)(lVar43 + lVar38 * 0x178 + 0xac) = uVar75;
    if (*(uint *)(lVar43 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar53 = fVar53 - fVar50;
    *(float *)(lVar43 + lVar38 * 0x178 + 0xb0) = fVar68;
    fVar50 = (float)FUN_024e0374(fVar53,fVar65);
    *(float *)(lVar28 + 0xd4) = fVar50;
    if (*(uint *)(lVar43 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar28 + 0xd8) = fVar68;
    uVar75 = FUN_024e0374(fVar53,fVar51 - fVar52);
    *(undefined4 *)(lVar43 + lVar38 * 0x178 + 0xfc) = uVar75;
    uVar41 = (uint)*(undefined8 *)(lVar43 + 0x18);
    if (uVar41 <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar43 + lVar38 * 0x178 + 0x100) = fVar68;
LAB_02497374:
    if (((int)unaff_x19[100] <= (int)uVar14) ||
       (*(int *)((long)unaff_x19 + 0x324) <= iStack00000000000000ac)) goto LAB_02497490;
    if (((int)uVar32 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] != 5)) {
      if (uVar41 <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar42 = lVar43 + lVar38 * 0x178;
      *(ulong *)(lVar42 + 0x70) =
           CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar42 + 0x70) >> 0x20),
                    fVar66 + (float)*(undefined8 *)(lVar42 + 0x70));
      *(float *)(lVar42 + 0x78) = fVar69 + *(float *)(lVar42 + 0x78);
      if (*(uint *)(lVar43 + 0x18) <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar42 = lVar43 + lVar38 * 0x178;
      *(ulong *)(lVar42 + 0x98) =
           CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar42 + 0x98) >> 0x20),
                    fVar66 + (float)*(undefined8 *)(lVar42 + 0x98));
      *(float *)(lVar42 + 0xa0) = fVar69 + *(float *)(lVar42 + 0xa0);
      if (*(uint *)(lVar43 + 0x18) <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar42 = lVar43 + lVar38 * 0x178;
      *(ulong *)(lVar42 + 0xc0) =
           CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar42 + 0xc0) >> 0x20),
                    fVar66 + (float)*(undefined8 *)(lVar42 + 0xc0));
      *(float *)(lVar42 + 200) = fVar69 + *(float *)(lVar42 + 200);
      if (*(uint *)(lVar43 + 0x18) <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar42 = lVar43 + lVar38 * 0x178;
      *(ulong *)(lVar42 + 0xe8) =
           CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar42 + 0xe8) >> 0x20),
                    fVar66 + (float)*(undefined8 *)(lVar42 + 0xe8));
      *(float *)(lVar42 + 0xf0) = fVar69 + *(float *)(lVar42 + 0xf0);
      if (iVar16 == 0) goto LAB_02497668;
LAB_02497598:
      if (iVar16 == 1) {
        pcVar31 = *(code **)(*unaff_x19 + 0x8f8);
        goto LAB_02497674;
      }
    }
    else {
      if (((int)uVar32 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] == 5)) {
        if (uVar41 <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (*(uint *)(lVar43 + lVar38 * 0x178 + 0x68) != uStack000000000000002c) goto LAB_02497490;
        lVar42 = lVar43 + lVar38 * 0x178;
        *(ulong *)(lVar42 + 0x70) =
             CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar42 + 0x70) >> 0x20),
                      fVar66 + (float)*(undefined8 *)(lVar42 + 0x70));
        *(float *)(lVar42 + 0x78) = fVar69 + *(float *)(lVar42 + 0x78);
        if (*(uint *)(lVar43 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar42 = lVar43 + lVar38 * 0x178;
        *(ulong *)(lVar42 + 0x98) =
             CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar42 + 0x98) >> 0x20),
                      fVar66 + (float)*(undefined8 *)(lVar42 + 0x98));
        *(float *)(lVar42 + 0xa0) = fVar69 + *(float *)(lVar42 + 0xa0);
        if (*(uint *)(lVar43 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar42 = lVar43 + lVar38 * 0x178;
        *(ulong *)(lVar42 + 0xc0) =
             CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar42 + 0xc0) >> 0x20),
                      fVar66 + (float)*(undefined8 *)(lVar42 + 0xc0));
        *(float *)(lVar42 + 200) = fVar69 + *(float *)(lVar42 + 200);
        if (*(uint *)(lVar43 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar42 = lVar43 + lVar38 * 0x178;
        *(ulong *)(lVar42 + 0xe8) =
             CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar42 + 0xe8) >> 0x20),
                      fVar66 + (float)*(undefined8 *)(lVar42 + 0xe8));
        *(float *)(lVar42 + 0xf0) = fVar69 + *(float *)(lVar42 + 0xf0);
      }
      else {
LAB_02497490:
        if (uVar41 <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        puVar8 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
        lVar28 = lVar43 + lVar38 * 0x178;
        uVar75 = *(undefined4 *)
                  (*(undefined8 **)
                    (*(long *)
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                    + 0xb8) + 1);
        *(undefined8 *)(lVar28 + 0x70) =
             **(undefined8 **)
               (*(long *)
                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
               0xb8);
        *(undefined4 *)(lVar28 + 0x78) = uVar75;
        if (*(uint *)(lVar43 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar28 = lVar43 + lVar38 * 0x178;
        uVar75 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
        *(undefined8 *)(lVar28 + 0x98) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
        *(undefined4 *)(lVar28 + 0xa0) = uVar75;
        if (*(uint *)(lVar43 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar28 = lVar43 + lVar38 * 0x178;
        uVar75 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
        *(undefined8 *)(lVar28 + 0xc0) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
        *(undefined4 *)(lVar28 + 200) = uVar75;
        if (*(uint *)(lVar43 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar28 = lVar43 + lVar38 * 0x178;
        uVar75 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
        *(undefined8 *)(lVar28 + 0xe8) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
        *(undefined4 *)(lVar28 + 0xf0) = uVar75;
        if (*(uint *)(lVar43 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        *(undefined1 *)(lVar42 + 0x194) = 0;
      }
      if (iVar16 != 0) goto LAB_02497598;
LAB_02497668:
      pcVar31 = *(code **)(*unaff_x19 + 0x8d8);
LAB_02497674:
      (*pcVar31)();
    }
LAB_02497688:
    if ((*in_stack_00000150 == 0) || (lVar42 = *(long *)(*in_stack_00000150 + 0x38), lVar42 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar42 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar42 = lVar42 + lVar38 * 0x178;
    uVar23 = *(undefined8 *)(lVar42 + 0x11c);
    *(undefined8 *)(lVar42 + 0x11c) =
         CONCAT44(fVar71 + (float)((ulong)uVar23 >> 0x20),fVar66 + (float)uVar23);
    *(float *)(lVar42 + 0x124) = fVar69 + *(float *)(lVar42 + 0x124);
    if ((*in_stack_00000150 == 0) || (lVar42 = *(long *)(*in_stack_00000150 + 0x38), lVar42 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar42 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar42 = lVar42 + lVar38 * 0x178;
    *(ulong *)(lVar42 + 0x110) =
         CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar42 + 0x110) >> 0x20),
                  fVar66 + (float)*(undefined8 *)(lVar42 + 0x110));
    *(float *)(lVar42 + 0x118) = fVar69 + *(float *)(lVar42 + 0x118);
    if ((*in_stack_00000150 == 0) || (lVar42 = *(long *)(*in_stack_00000150 + 0x38), lVar42 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar42 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar42 = lVar42 + lVar38 * 0x178;
    *(ulong *)(lVar42 + 0x128) =
         CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar42 + 0x128) >> 0x20),
                  fVar66 + (float)*(undefined8 *)(lVar42 + 0x128));
    *(float *)(lVar42 + 0x130) = fVar69 + *(float *)(lVar42 + 0x130);
    if ((*in_stack_00000150 == 0) || (lVar42 = *(long *)(*in_stack_00000150 + 0x38), lVar42 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar42 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar42 = lVar42 + lVar38 * 0x178;
    *(float *)(lVar42 + 0x134) = fVar66 + *(float *)(lVar42 + 0x134);
    *(ulong *)(lVar42 + 0x138) =
         CONCAT44(fVar69 + (float)((ulong)*(undefined8 *)(lVar42 + 0x138) >> 0x20),
                  fVar71 + (float)*(undefined8 *)(lVar42 + 0x138));
    lVar42 = *in_stack_00000150;
    if ((lVar42 == 0) || (lVar28 = *(long *)(lVar42 + 0x38), lVar28 == 0)) goto LAB_0249920c;
    uVar41 = *(uint *)(lVar28 + 0x18);
    if (uVar41 <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar37 = lVar28 + lVar38 * 0x178;
    uVar59 = CONCAT44(fVar66 + (float)((ulong)*(undefined8 *)(lVar37 + 0x140) >> 0x20),
                      fVar66 + (float)*(undefined8 *)(lVar37 + 0x140));
    fVar50 = fVar71 + *(float *)(lVar37 + 0x150);
    uVar60 = (ulong)(uint)fVar50;
    uVar62 = CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar37 + 0x148) >> 0x20),
                      fVar71 + (float)*(undefined8 *)(lVar37 + 0x148));
    *(ulong *)(lVar37 + 0x140) = uVar59;
    *(ulong *)(lVar37 + 0x148) = uVar62;
    *(float *)(lVar37 + 0x150) = fVar50;
    if (uVar32 == uVar61) {
      uVar61 = *in_stack_00000148 - 1;
      if (uVar14 == uVar61) goto LAB_0249788c;
    }
    else {
      lVar42 = *(long *)(lVar42 + 0x50);
      if (lVar42 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar42 + 0x18) <= uVar61)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar37 = (long)(int)uVar61;
      lVar39 = lVar42 + lVar37 * 0x5c;
      uVar62 = (ulong)(uint)*(float *)(lVar39 + 0x58);
      fVar50 = fVar71 + *(float *)(lVar39 + 0x54);
      uVar59 = (ulong)(uint)fVar50;
      fVar51 = fVar66 + *(float *)(lVar39 + 0x58);
      uVar60 = (ulong)(uint)fVar51;
      *(ulong *)(lVar39 + 0x4c) =
           CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar39 + 0x4c) >> 0x20),
                    fVar71 + (float)*(undefined8 *)(lVar39 + 0x4c));
      *(float *)(lVar39 + 0x54) = fVar50;
      *(float *)(lVar39 + 0x58) = fVar51;
      if (uVar41 <= *(uint *)(lVar39 + 0x34))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      uVar75 = *(undefined4 *)(lVar28 + (long)(int)*(uint *)(lVar39 + 0x34) * 0x178 + 0x11c);
      lVar42 = lVar42 + lVar37 * 0x5c;
      *(float *)(lVar42 + 0x70) = fVar50;
      *(undefined4 *)(lVar42 + 0x6c) = uVar75;
      lVar42 = *in_stack_00000150;
      if ((lVar42 == 0) || (lVar28 = *(long *)(lVar42 + 0x50), lVar28 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar28 + 0x18) <= uVar61)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar42 = *(long *)(lVar42 + 0x38);
      if (lVar42 == 0) goto LAB_0249920c;
      uVar61 = *(uint *)(lVar28 + lVar37 * 0x5c + 0x40);
      if (*(uint *)(lVar42 + 0x18) <= uVar61)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = lVar28 + lVar37 * 0x5c;
      *(undefined4 *)(lVar28 + 0x74) = *(undefined4 *)(lVar42 + (long)(int)uVar61 * 0x178 + 0x128);
      *(undefined4 *)(lVar28 + 0x78) = *(undefined4 *)(lVar28 + 0x4c);
      uVar61 = *in_stack_00000148 - 1;
LAB_0249788c:
      if (uVar14 == uVar61) {
        lVar42 = *in_stack_00000150;
        if ((lVar42 == 0) || (lVar28 = *(long *)(lVar42 + 0x50), lVar28 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar28 + 0x18) <= uVar32)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar37 = lVar28 + lVar34 * 0x5c;
        uVar62 = (ulong)(uint)*(float *)(lVar37 + 0x58);
        uVar59 = CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar37 + 0x4c) >> 0x20),
                          fVar71 + (float)*(undefined8 *)(lVar37 + 0x4c));
        fVar50 = fVar71 + *(float *)(lVar37 + 0x54);
        fVar66 = fVar66 + *(float *)(lVar37 + 0x58);
        uVar60 = (ulong)(uint)fVar66;
        *(ulong *)(lVar37 + 0x4c) = uVar59;
        *(float *)(lVar37 + 0x54) = fVar50;
        *(float *)(lVar37 + 0x58) = fVar66;
        lVar42 = *(long *)(lVar42 + 0x38);
        if (lVar42 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar42 + 0x18) <= *(uint *)(lVar37 + 0x34))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar75 = *(undefined4 *)(lVar42 + (long)(int)*(uint *)(lVar37 + 0x34) * 0x178 + 0x11c);
        lVar28 = lVar28 + lVar34 * 0x5c;
        *(float *)(lVar28 + 0x70) = fVar50;
        *(undefined4 *)(lVar28 + 0x6c) = uVar75;
        lVar42 = *in_stack_00000150;
        if ((lVar42 == 0) || (lVar28 = *(long *)(lVar42 + 0x50), lVar28 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar28 + 0x18) <= uVar32)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar42 = *(long *)(lVar42 + 0x38);
        if (lVar42 == 0) goto LAB_0249920c;
        uVar61 = *(uint *)(lVar28 + lVar34 * 0x5c + 0x40);
        if (*(uint *)(lVar42 + 0x18) <= uVar61)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar28 = lVar28 + lVar34 * 0x5c;
        *(undefined4 *)(lVar28 + 0x74) = *(undefined4 *)(lVar42 + (long)(int)uVar61 * 0x178 + 0x128)
        ;
        *(undefined4 *)(lVar28 + 0x78) = *(undefined4 *)(lVar28 + 0x4c);
      }
    }
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar22 = FUN_016f9468(uVar40,0);
    if (((((uVar22 & 1) == 0) && (1 < uVar40 - 0x2010)) && (uVar40 != 0xad)) && (uVar40 != 0x2d)) {
      if (bVar7) {
        if (((uVar35 != 1) && ((int)uVar14 < (int)(*(uint *)(lVar43 + 0x18) - 1))) &&
           (((int)uVar14 < (int)*in_stack_00000148 && ((uVar40 == 0x2019 || (uVar40 == 0x27)))))) {
          if (*(uint *)(lVar43 + 0x18) <= uVar35 - 2)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar4 = *(undefined2 *)(lVar43 + lVar29 + -0x438);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar22 = FUN_016f9468(uVar4,0);
          if ((uVar22 & 1) != 0) {
            if (*(uint *)(lVar43 + 0x18) <= uVar35)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            uVar4 = *(undefined2 *)(lVar43 + lVar29 + -0x148);
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar22 = FUN_016f9468(uVar4,0);
            if ((uVar22 & 1) != 0) goto LAB_02497aa4;
          }
        }
      }
      else {
        if (uVar35 != 1) {
LAB_024985a0:
          bVar7 = false;
          goto LAB_02497aac;
        }
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar22 = FUN_016f93a0(uVar40,0);
        if ((uVar22 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar22 = FUN_016f68bc(uVar40,0);
          if (((uVar40 != 0x200b) && ((uVar22 & 1) == 0)) && (*in_stack_00000148 != 1))
          goto LAB_024985a0;
        }
      }
      if (uVar14 == *in_stack_00000148 - 1) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar22 = FUN_016f9468(uVar40,0);
        iVar16 = iVar46;
        if ((uVar22 & 1) == 0) goto LAB_02497de0;
      }
      else {
LAB_02497de0:
        iVar16 = uVar35 - 2;
      }
      lVar42 = *in_stack_00000150;
      if (lVar42 == 0) goto LAB_0249920c;
      lVar28 = *(long *)(lVar42 + 0x40);
      if (lVar28 == 0) goto LAB_0249920c;
      uVar61 = *(uint *)(lVar42 + 0x24);
      iVar17 = *(int *)(lVar28 + 0x18);
      if (iVar17 < (int)(uVar61 + 1)) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147b84((long *)(lVar42 + 0x40),iVar17 + 1,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
        lVar42 = *in_stack_00000150;
        if (lVar42 == 0) goto LAB_0249920c;
      }
      lVar28 = *(long *)(lVar42 + 0x40);
      if (lVar28 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar28 + 0x18) <= uVar61)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = lVar28 + (long)(int)uVar61 * 0x18;
      *(uint *)(lVar28 + 0x28) = uVar18;
      *(int *)(lVar28 + 0x2c) = iVar16;
      *(uint *)(lVar28 + 0x30) = (iVar16 - uVar18) + 1;
      *(long **)(lVar28 + 0x20) = unaff_x19;
      lVar28 = *(long *)(lVar42 + 0x50);
      *(int *)(lVar42 + 0x24) = *(int *)(lVar42 + 0x24) + 1;
      if (lVar28 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar28 + 0x18) <= uVar32)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = lVar28 + lVar34 * 0x5c;
      bVar7 = false;
      iStack00000000000000ac = iStack00000000000000ac + 1;
      *(int *)(lVar28 + 0x30) = *(int *)(lVar28 + 0x30) + 1;
    }
    else {
      if (!bVar7) {
        uVar18 = uVar14;
      }
      if (uVar14 == *in_stack_00000148 - 1) {
        lVar42 = *in_stack_00000150;
        if (lVar42 == 0) goto LAB_0249920c;
        lVar28 = *(long *)(lVar42 + 0x40);
        if (lVar28 == 0) goto LAB_0249920c;
        uVar61 = *(uint *)(lVar42 + 0x24);
        iVar16 = *(int *)(lVar28 + 0x18);
        if (iVar16 < (int)(uVar61 + 1)) {
          if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01147b84((long *)(lVar42 + 0x40),iVar16 + 1,
                       *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
          lVar42 = *in_stack_00000150;
          if (lVar42 == 0) goto LAB_0249920c;
        }
        lVar28 = *(long *)(lVar42 + 0x40);
        if (lVar28 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar28 + 0x18) <= uVar61)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar28 = lVar28 + (long)(int)uVar61 * 0x18;
        *(uint *)(lVar28 + 0x28) = uVar18;
        *(uint *)(lVar28 + 0x2c) = uVar14;
        *(long **)(lVar28 + 0x20) = unaff_x19;
        *(uint *)(lVar28 + 0x30) = uVar35 - uVar18;
        lVar28 = *(long *)(lVar42 + 0x50);
        *(int *)(lVar42 + 0x24) = *(int *)(lVar42 + 0x24) + 1;
        if (lVar28 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar28 + 0x18) <= uVar32)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar28 = lVar28 + lVar34 * 0x5c;
        iStack00000000000000ac = iStack00000000000000ac + 1;
        *(int *)(lVar28 + 0x30) = *(int *)(lVar28 + 0x30) + 1;
      }
LAB_02497aa4:
      bVar7 = true;
    }
LAB_02497aac:
    if ((*in_stack_00000150 == 0) || (lVar42 = *(long *)(*in_stack_00000150 + 0x38), lVar42 == 0))
    goto LAB_0249920c;
    uVar61 = *(uint *)(lVar42 + 0x18);
    if (uVar61 <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar42 + lVar38 * 0x178 + 400) >> 2 & 1) == 0) {
      if (bVar10) {
LAB_02497adc:
        if (uVar61 <= uVar35 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar34 = *unaff_x19;
        uVar61 = *(uint *)(lVar42 + lVar29 + -0x330);
        uVar75 = *(undefined4 *)(lVar42 + lVar29 + -0x2f8);
LAB_0249805c:
        pcVar31 = *(code **)(lVar34 + 0x908);
LAB_02498064:
        uVar62 = (ulong)uVar61;
        uVar59 = (ulong)(uint)fStack0000000000000050;
        uVar60 = (ulong)(uint)fStack0000000000000054;
        (*pcVar31)(fStack0000000000000058,uVar59,uVar60,uVar62,fStack00000000000000d0,0,
                   _bStack000000000000005c,uVar75);
        puVar8 = System_Threading_Mutex_TypeInfo;
        lVar42 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar42 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar42 = *(long *)puVar8;
        }
LAB_024980b4:
        bVar10 = false;
        fVar48 = 0.0;
        fStack00000000000000d0 = *(float *)(*(long *)(lVar42 + 0xb8) + 0x15a8);
        fStack00000000000000cc = 0.0;
      }
      else {
LAB_02497fc4:
        bVar10 = false;
      }
    }
    else {
      lVar42 = lVar42 + lVar38 * 0x178;
      iVar16 = *(int *)(lVar42 + 0x68);
      *(int *)(lVar42 + 0x16c) = iVar15;
      if ((((int)unaff_x19[100] < (int)uVar14) || ((int)unaff_x19[0x65] < (int)uVar32)) ||
         (((int)unaff_x19[0x5b] == 5 && (iVar16 + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar22 = FUN_016f68bc(uVar40,0);
      if ((uVar40 != 0x200b) && ((uVar22 & 1) == 0)) {
        lVar42 = *in_stack_00000150;
        if ((lVar42 == 0) || (lVar34 = *(long *)(lVar42 + 0x38), lVar34 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar34 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar50 = *(float *)(lVar34 + lVar38 * 0x178 + 0x160);
        if (fVar48 <= fVar50) {
          fVar48 = fVar50;
        }
        if (fStack00000000000000cc <= ABS(fVar68)) {
          fStack00000000000000cc = ABS(fVar68);
        }
        if ((float)iVar16 != fStack000000000000004c) {
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar42 = *in_stack_00000150;
            if (lVar42 == 0) goto LAB_0249920c;
            lVar34 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          else {
            lVar34 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          fStack00000000000000d0 = *(float *)(lVar34 + 0x15a8);
        }
        lVar42 = *(long *)(lVar42 + 0x38);
        if (lVar42 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar42 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (unaff_x19[0x1e] == 0) goto LAB_0249920c;
        fVar51 = *(float *)(lVar42 + lVar38 * 0x178 + 0x14c);
        fVar50 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
        fVar51 = fVar51 + fVar48 * fVar50;
        if (fVar51 <= fStack00000000000000d0) {
          fStack00000000000000d0 = fVar51;
        }
        uVar59 = (ulong)(uint)fStack00000000000000d0;
        fStack000000000000004c = (float)iVar16;
      }
      if (!bVar10) {
        bVar10 = false;
        if ((((uVar40 == 0xd) || ((uVar40 | 1) == 0xb)) || ((int)uVar5 < (int)uVar14)) ||
           ((bool)(bVar1 ^ 1))) goto LAB_024980d0;
        if (uVar14 == uVar5) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar22 = FUN_016fa418(uVar40,0);
          if ((uVar22 & 1) != 0) goto LAB_02497fc4;
        }
        if ((*in_stack_00000150 == 0) ||
           (lVar42 = *(long *)(*in_stack_00000150 + 0x38), lVar42 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar42 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar42 = lVar42 + lVar38 * 0x178;
        _bStack000000000000005c = *(float *)(lVar42 + 0x160);
        fStack0000000000000058 = *(float *)(lVar42 + 0x11c);
        bVar10 = fVar48 != 0.0;
        fVar50 = _bStack000000000000005c;
        if (bVar10) {
          fVar50 = fVar48;
        }
        fVar48 = fVar50;
        uStack0000000000000060 = *(uint *)(lVar42 + 0x168);
        fStack0000000000000054 = 0.0;
        fVar50 = fVar68;
        if (bVar10) {
          fVar50 = fStack00000000000000cc;
        }
        uVar59 = (ulong)(uint)fVar50;
        fStack0000000000000050 = fStack00000000000000d0;
        fStack00000000000000cc = fVar50;
      }
      if (*in_stack_00000148 == 1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar42 = *(long *)(*in_stack_00000150 + 0x38), lVar42 != 0)) {
          if (uVar14 < *(uint *)(lVar42 + 0x18)) {
            lVar42 = lVar42 + lVar38 * 0x178;
            lVar34 = *unaff_x19;
            uVar61 = *(uint *)(lVar42 + 0x128);
            uVar75 = *(undefined4 *)(lVar42 + 0x160);
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
        uVar22 = FUN_016f68bc(uVar40,0);
        if ((*in_stack_00000150 != 0) &&
           (lVar42 = *(long *)(*in_stack_00000150 + 0x38), lVar42 != 0)) {
          if (uVar40 == 0x200b || (uVar22 & 1) != 0) {
            lVar34 = lVar20;
            if (*(uint *)(lVar42 + 0x18) <= uVar5)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          else {
            lVar34 = lVar38;
            if (*(uint *)(lVar42 + 0x18) <= uVar14)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          lVar42 = lVar42 + lVar34 * 0x178;
          uVar61 = *(uint *)(lVar42 + 0x128);
          uVar75 = *(undefined4 *)(lVar42 + 0x160);
          pcVar31 = *(code **)(*unaff_x19 + 0x908);
          goto LAB_02498064;
        }
        goto LAB_0249920c;
      }
      if (!bVar1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar42 = *(long *)(*in_stack_00000150 + 0x38), lVar42 != 0)) {
          uVar61 = *(uint *)(lVar42 + 0x18);
          goto LAB_02497adc;
        }
        goto LAB_0249920c;
      }
      if ((int)uVar14 < (int)(*in_stack_00000148 - 1)) {
        if ((*in_stack_00000150 == 0) ||
           (lVar42 = *(long *)(*in_stack_00000150 + 0x38), lVar42 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar42 + 0x18) <= uVar35)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar22 = FUN_024a9e4c(uStack0000000000000060,*(undefined4 *)(lVar42 + lVar29),0);
        if ((uVar22 & 1) == 0) {
          if ((*in_stack_00000150 != 0) &&
             (lVar42 = *(long *)(*in_stack_00000150 + 0x38), lVar42 != 0)) {
            if (uVar14 < *(uint *)(lVar42 + 0x18)) {
              lVar42 = lVar42 + lVar38 * 0x178;
              uVar62 = (ulong)*(uint *)(lVar42 + 0x128);
              uVar60 = (ulong)(uint)fStack0000000000000054;
              uVar59 = (ulong)(uint)fStack0000000000000050;
              (**(code **)(*unaff_x19 + 0x908))
                        (fStack0000000000000058,uVar59,uVar60,uVar62,fStack00000000000000d0,0,
                         _bStack000000000000005c,*(undefined4 *)(lVar42 + 0x160));
              puVar8 = System_Threading_Mutex_TypeInfo;
              lVar42 = *(long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(lVar42 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar42 = *(long *)puVar8;
              }
              goto LAB_024980b4;
            }
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          goto LAB_0249920c;
        }
      }
      bVar10 = true;
    }
LAB_024980d0:
    if ((*in_stack_00000150 == 0) || (lVar42 = *(long *)(*in_stack_00000150 + 0x38), lVar42 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar42 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if (lVar36 == 0) goto LAB_0249920c;
    uVar61 = *(uint *)(lVar42 + lVar38 * 0x178 + 400);
    fVar50 = (float)FUN_026fd1f0(lVar36 + 0x50,0);
    if ((uVar61 >> 6 & 1) == 0) {
      if (bVar11) {
        if ((*in_stack_00000150 == 0) ||
           (lVar42 = *(long *)(*in_stack_00000150 + 0x38), lVar42 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar42 + 0x18) <= uVar35 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar61 = *(uint *)(lVar42 + lVar29 + -0x330);
        pcVar31 = *(code **)(*unaff_x19 + 0x908);
        fVar71 = fStack0000000000000088 * fVar50 + *(float *)(lVar42 + lVar29 + -0x30c);
LAB_02498648:
        uVar62 = (ulong)uVar61;
        uVar59 = (ulong)(uint)in_stack_00000078._4_4_;
        uVar60 = (ulong)uStack000000000000006c;
        (*pcVar31)(fStack0000000000000080,uVar59,uVar60,uVar62,fVar71,0,fStack0000000000000088,
                   fStack0000000000000088);
      }
LAB_0249867c:
      bVar11 = false;
    }
    else {
      lVar42 = *in_stack_00000150;
      if ((lVar42 == 0) || (lVar34 = *(long *)(lVar42 + 0x38), lVar34 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar34 + 0x18) <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      *(int *)(lVar34 + lVar38 * 0x178 + 0x174) = iVar15;
      if ((((int)unaff_x19[100] < (int)uVar14) || ((int)unaff_x19[0x65] < (int)uVar32)) ||
         (((int)unaff_x19[0x5b] == 5 &&
          (*(int *)(lVar34 + lVar38 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((((uVar40 == 0xd) || ((uVar40 | 1) == 0xb)) || ((int)uVar5 < (int)uVar14)) ||
         (bVar11 || !bVar1)) {
LAB_02498228:
        if (!bVar11) goto LAB_0249867c;
      }
      else {
        if (uVar14 == uVar5) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar22 = FUN_016fa418(uVar40,0);
          if ((uVar22 & 1) != 0) goto LAB_02498228;
          lVar42 = *in_stack_00000150;
          if (lVar42 == 0) goto LAB_0249920c;
        }
        lVar42 = *(long *)(lVar42 + 0x38);
        if (lVar42 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar42 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar42 = lVar42 + lVar38 * 0x178;
        fStack0000000000000034 = *(float *)(lVar42 + 0x60);
        fStack0000000000000088 = *(float *)(lVar42 + 0x160);
        fStack0000000000000030 = *(float *)(lVar42 + 0x14c);
        uVar59 = (ulong)(uint)fStack0000000000000030;
        fStack0000000000000080 = *(float *)(lVar42 + 0x11c);
        in_stack_00000078._4_4_ = fVar50 * fStack0000000000000088 + fStack0000000000000030;
        uStack000000000000006c = 0;
      }
      uVar61 = *in_stack_00000148;
      if (uVar61 == 1) {
LAB_024983ac:
        if ((*in_stack_00000150 != 0) &&
           (lVar42 = *(long *)(*in_stack_00000150 + 0x38), lVar42 != 0)) {
          if (uVar14 < *(uint *)(lVar42 + 0x18)) {
            lVar42 = lVar42 + lVar38 * 0x178;
            lVar20 = *unaff_x19;
            uVar61 = *(uint *)(lVar42 + 0x128);
            fVar71 = *(float *)(lVar42 + 0x14c);
LAB_024983d8:
            pcVar31 = *(code **)(lVar20 + 0x908);
FUN_02498644:
            fVar71 = fVar50 * fStack0000000000000088 + fVar71;
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
        uVar22 = FUN_016f68bc(uVar40,0);
        if ((*in_stack_00000150 != 0) &&
           (lVar42 = *(long *)(*in_stack_00000150 + 0x38), lVar42 != 0)) {
          uVar61 = *(uint *)(lVar42 + 0x18);
          if (uVar40 == 0x200b || (uVar22 & 1) != 0) {
            if (uVar61 <= uVar5)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          else {
LAB_02498620:
            lVar20 = lVar38;
            if (uVar61 <= uVar14)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
LAB_02498628:
          lVar42 = lVar42 + lVar20 * 0x178;
          fVar71 = *(float *)(lVar42 + 0x14c);
          uVar61 = *(uint *)(lVar42 + 0x128);
          pcVar31 = *(code **)(*unaff_x19 + 0x908);
          goto FUN_02498644;
        }
        goto LAB_0249920c;
      }
      if ((int)uVar14 < (int)uVar61) {
        lVar42 = *in_stack_00000150;
        if ((lVar42 != 0) && (lVar34 = *(long *)(lVar42 + 0x38), lVar34 != 0)) {
          if (uVar35 < *(uint *)(lVar34 + 0x18)) {
            if (*(float *)(lVar34 + lVar29 + -0x108) == fStack0000000000000034) {
              fVar51 = *(float *)(lVar34 + lVar29 + -0x1c);
              if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar59 = (ulong)(uint)fStack0000000000000030;
              uVar22 = FUN_024aa280(fVar71 + fVar51,uVar59,0);
              if ((uVar22 & 1) != 0) {
                uVar61 = *in_stack_00000148;
                goto 
                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractor_OnSelectEntering
                ;
              }
              lVar42 = *in_stack_00000150;
              if (lVar42 == 0) goto LAB_0249920c;
            }
            lVar42 = *(long *)(lVar42 + 0x38);
            if (lVar42 != 0) {
              uVar61 = *(uint *)(lVar42 + 0x18);
              if ((int)uVar14 <= (int)uVar5) goto LAB_02498620;
              if (uVar5 < uVar61) goto LAB_02498628;
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
      if ((int)uVar14 < (int)uVar61) {
        iVar16 = FUN_02681c0c(lVar36,0);
        if (*(uint *)(lVar43 + 0x18) <= uVar35)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar42 = *(long *)(lVar43 + lVar29 + -0x130);
        if (lVar42 == 0) goto LAB_0249920c;
        iVar17 = FUN_02681c0c(lVar42,0);
        if (iVar16 != iVar17) goto LAB_024983ac;
      }
      if (!bVar1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar42 = *(long *)(*in_stack_00000150 + 0x38), lVar42 != 0)) {
          if (uVar35 - 2 < *(uint *)(lVar42 + 0x18)) {
            lVar20 = *unaff_x19;
            uVar61 = *(uint *)(lVar42 + lVar29 + -0x330);
            fVar71 = *(float *)(lVar42 + lVar29 + -0x30c);
            goto LAB_024983d8;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      bVar11 = true;
    }
    if ((*in_stack_00000150 == 0) || (lVar42 = *(long *)(*in_stack_00000150 + 0x38), lVar42 == 0))
    goto LAB_0249920c;
    uVar61 = (uint)*(undefined8 *)(lVar42 + 0x18);
    if (uVar61 <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar42 + lVar38 * 0x178 + 0x191) >> 1 & 1) == 0) {
      if (bVar12) {
        uVar60 = (ulong)uStack00000000000000a0;
        uVar62 = (ulong)(uint)fStack00000000000000a4;
        uVar59 = (ulong)(uint)fStack00000000000000b4;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar59,uVar60,uVar62,fStack00000000000000a8,uVar60);
      }
LAB_024986e8:
      bVar12 = false;
    }
    else {
      if ((((int)unaff_x19[100] < (int)uVar14) || ((int)unaff_x19[0x65] < (int)uVar32)) ||
         (((int)unaff_x19[0x5b] == 5 &&
          (*(int *)(lVar42 + lVar38 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar12) {
        if ((((uVar40 == 0xd) || ((uVar40 | 1) == 0xb)) || ((int)uVar5 < (int)uVar14)) || (!bVar1))
        goto LAB_024986e8;
        if (uVar14 == uVar5) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar22 = FUN_016fa418(uVar40,0);
          if ((uVar22 & 1) != 0) goto LAB_024986e8;
        }
        puVar8 = System_Threading_Mutex_TypeInfo;
        lVar20 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar20 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar20 = *(long *)puVar8;
        }
        if ((*in_stack_00000150 == 0) ||
           (lVar42 = *(long *)(*in_stack_00000150 + 0x38), lVar42 == 0)) goto LAB_0249920c;
        uVar61 = (uint)*(undefined8 *)(lVar42 + 0x18);
        if (uVar61 <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar20 = *(long *)(lVar20 + 0xb8);
        lVar34 = lVar42 + lVar38 * 0x178;
        in_stack_00001798 = *(undefined8 *)(lVar34 + 0x184);
        in_stack_00001790 = *(undefined8 *)(lVar34 + 0x17c);
        fStack00000000000000b0 = *(float *)(lVar20 + 0x1598);
        in_stack_000017a0 = *(float *)(lVar34 + 0x18c);
        fStack00000000000000b4 = *(float *)(lVar20 + 0x159c);
        fStack00000000000000a4 = *(float *)(lVar20 + 0x15a0);
        fStack00000000000000a8 = *(float *)(lVar20 + 0x15a4);
        uStack00000000000000a0 = 0;
      }
      if (uVar61 <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar42 = lVar42 + lVar38 * 0x178;
      fVar52 = *(float *)(lVar42 + 0x188);
      uVar19 = *(undefined8 *)(lVar42 + 0x17c);
      fVar65 = *(float *)(lVar42 + 0x184);
      uVar23 = *(undefined8 *)(lVar42 + 0x184);
      fVar53 = *(float *)(lVar42 + 0x18c);
      fVar71 = *(float *)(lVar42 + 0x11c);
      fVar51 = *(float *)(lVar42 + 0x128);
      fVar72 = *(float *)(lVar42 + 0x148);
      fVar50 = *(float *)(lVar42 + 0x150);
      in_stack_00000158 = uVar19;
      fStack0000000000000160 = fVar65;
      fStack0000000000000164 = fVar52;
      in_stack_00000168 = fVar53;
      in_stack_00000170 = in_stack_00001790;
      in_stack_00000178 = in_stack_00001798;
      in_stack_00000180 = in_stack_000017a0;
      uVar22 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
      lVar42 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
      if ((uVar22 & 1) == 0) {
        if (*(int *)(lVar42 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar42);
        }
        fVar71 = fVar71 - (float)((ulong)in_stack_00001790 >> 0x20);
        if (fVar71 <= fStack00000000000000b0) {
          fStack00000000000000b0 = fVar71;
        }
        fVar50 = fVar50 - in_stack_000017a0;
        uVar59 = (ulong)(uint)fVar50;
        fVar51 = fVar51 + (float)in_stack_00001798;
        uVar60 = (ulong)(uint)fVar51;
        if (fVar50 <= fStack00000000000000b4) {
          fStack00000000000000b4 = fVar50;
        }
        fVar72 = fVar72 + (float)((ulong)in_stack_00001798 >> 0x20);
        uVar62 = (ulong)(uint)fVar72;
        if (fStack00000000000000a4 <= fVar51) {
          fStack00000000000000a4 = fVar51;
        }
        if (fStack00000000000000a8 <= fVar72) {
          fStack00000000000000a8 = fVar72;
        }
      }
      else {
        if (*(int *)(lVar42 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar42);
        }
        fVar71 = (fVar71 + (fStack00000000000000a4 - (float)in_stack_00001798)) * 0.5;
        uVar62 = (ulong)(uint)fVar71;
        if (fVar50 <= fStack00000000000000b4) {
          fStack00000000000000b4 = fVar50;
        }
        uVar59 = (ulong)(uint)fStack00000000000000b4;
        uVar60 = (ulong)uStack00000000000000a0;
        if (fStack00000000000000a8 <= fVar72) {
          fStack00000000000000a8 = fVar72;
        }
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar59,uVar60,uVar62,fStack00000000000000a8,uVar60);
        fStack00000000000000b4 = fVar50 - fVar53;
        fStack00000000000000a4 = fVar51 + fVar65;
        uStack00000000000000a0 = 0;
        fStack00000000000000a8 = fVar72 + fVar52;
        fStack00000000000000b0 = fVar71;
        in_stack_00001790 = uVar19;
        in_stack_00001798 = uVar23;
        in_stack_000017a0 = fVar53;
      }
      if (((*in_stack_00000148 == 1) || (uVar14 == uVar6)) ||
         (((int)uVar5 <= (int)uVar14 || (!bVar1)))) {
        uVar60 = (ulong)uStack00000000000000a0;
        uVar62 = (ulong)(uint)fStack00000000000000a4;
        uVar59 = (ulong)(uint)fStack00000000000000b4;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar59,uVar60,uVar62,fStack00000000000000a8,uVar60);
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
    }
    uVar14 = *in_stack_00000148;
    iVar46 = iVar46 + 1;
    lVar29 = lVar29 + 0x178;
    bVar1 = (int)uVar35 < (int)uVar14;
    uVar61 = uVar32;
    uVar35 = uVar35 + 1;
  } while (bVar1);
  lVar43 = *in_stack_00000150;
  if (lVar43 != 0) {
    iVar15 = uVar32 + 1;
LAB_02498c58:
    puVar9 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    puVar8 = PTR_DAT_033ed410;
    *(uint *)(lVar43 + 0x18) = uVar14;
    lVar29 = unaff_x19[0xd3];
    *(int *)(lVar43 + 0x2c) = iVar15;
    iVar15 = iStack00000000000000ac;
    if ((int)uVar14 < 1) {
      iVar15 = 1;
    }
    if (iStack00000000000000ac == 0) {
      iVar15 = 1;
    }
    *(int *)(lVar43 + 0x1c) = (int)lVar29;
    *(int *)(lVar43 + 0x24) = iVar15;
    *(int *)(lVar43 + 0x30) = (int)unaff_x19[0x95] + 1;
    if (((int)unaff_x19[0x62] != 0xff) ||
       (uVar22 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar22 & 1) == 0)) {
LAB_02496098:
      if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__ + 0xe0) == 0
         ) {
        thunk_FUN_00d32864();
      }
      FUN_024a942c();
      return;
    }
    lVar43 = unaff_x19[0xde];
    if (lVar43 != 0) {
      (**(code **)(lVar43 + 0x18))
                (*(undefined8 *)(lVar43 + 0x40),*in_stack_00000150,*(undefined8 *)(lVar43 + 0x28));
    }
    if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
    iVar15 = FUN_02859dc4(unaff_x19[0xe4],0);
    if (iVar15 != 0x19) {
      lVar43 = unaff_x19[0xe4];
      if (lVar43 == 0) goto LAB_0249920c;
      uVar14 = FUN_02859dc4(lVar43,0);
      FUN_02859e00(lVar43,uVar14 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
      if ((*in_stack_00000150 == 0) || (lVar43 = *(long *)(*in_stack_00000150 + 0x60), lVar43 == 0))
      goto LAB_0249920c;
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(int *)(lVar43 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      FUN_024e8000(lVar43 + 0x20,1,0);
    }
    if (unaff_x19[0x73] != 0) {
      UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
                (unaff_x19[0x73],0);
      if ((unaff_x19[0x6c] != 0) && (lVar43 = *(long *)(unaff_x19[0x6c] + 0x60), lVar43 != 0)) {
        if (*(int *)(lVar43 + 0x18) == 0) {
UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (unaff_x19[0x73] != 0) {
          FUN_0266b9c4(unaff_x19[0x73],*(undefined8 *)(lVar43 + 0x30),0);
          if ((unaff_x19[0x6c] != 0) && (lVar43 = *(long *)(unaff_x19[0x6c] + 0x60), lVar43 != 0)) {
            if (*(int *)(lVar43 + 0x18) == 0)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            if (unaff_x19[0x73] != 0) {
              FUN_0266bbc8(unaff_x19[0x73],*(undefined8 *)(lVar43 + 0x48),0);
              if ((unaff_x19[0x6c] != 0) &&
                 (lVar43 = *(long *)(unaff_x19[0x6c] + 0x60), lVar43 != 0)) {
                if (*(int *)(lVar43 + 0x18) == 0)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                if (unaff_x19[0x73] != 0) {
                  FUN_0266bc74(unaff_x19[0x73],*(undefined8 *)(lVar43 + 0x50),0);
                  if ((unaff_x19[0x6c] != 0) &&
                     (lVar43 = *(long *)(unaff_x19[0x6c] + 0x60), lVar43 != 0)) {
                    if (*(int *)(lVar43 + 0x18) == 0)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    if (unaff_x19[0x73] != 0) {
                      FUN_0266c1dc(unaff_x19[0x73],*(undefined8 *)(lVar43 + 0x58),0);
                      if (unaff_x19[0x73] != 0) {
                        FUN_0266ed90(unaff_x19[0x73],0);
                        if (unaff_x19[0xe3] != 0) {
                          FUN_02858f1c(unaff_x19[0xe3],unaff_x19[0x73],0);
                          if (unaff_x19[0xe3] != 0) {
                            uVar23 = FUN_02858bac(unaff_x19[0xe3],0);
                            if (unaff_x19[0xe3] != 0) {
                              uVar14 = FUN_02858a14(unaff_x19[0xe3],0);
                              lVar43 = *in_stack_00000150;
                              if (lVar43 != 0) {
                                lVar42 = 0;
                                lVar29 = 0;
                                do {
                                  uVar22 = lVar29 + 1;
                                  if ((long)*(int *)(lVar43 + 0x34) <= (long)uVar22)
                                  goto LAB_02496098;
                                  lVar43 = *(long *)(lVar43 + 0x60);
                                  if (lVar43 == 0) break;
                                  if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  if (*(uint *)(lVar43 + 0x18) <= uVar22)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  FUN_024e7ecc(lVar43 + lVar42 + 0x70,0);
                                  lVar43 = unaff_x19[0xe0];
                                  if (lVar43 == 0) break;
                                  if (*(uint *)(lVar43 + 0x18) <= uVar22)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  uVar19 = *(undefined8 *)(lVar43 + lVar29 * 8 + 0x28);
                                  if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  uVar24 = FUN_0268b4e0(uVar19,0,0);
                                  if ((uVar24 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
                                      if ((*in_stack_00000150 == 0) ||
                                         (lVar43 = *(long *)(*in_stack_00000150 + 0x60), lVar43 == 0
                                         )) break;
                                      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
                                        thunk_FUN_00d32864();
                                      }
                                      if (*(uint *)(lVar43 + 0x18) <= uVar22)
                                      goto 
                                      UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                      ;
                                      FUN_024e8000(lVar43 + lVar42 + 0x70,1,0);
                                    }
                                    lVar43 = unaff_x19[0xe0];
                                    if (lVar43 == 0) break;
                                    if (*(uint *)(lVar43 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar43 = *(long *)(lVar43 + lVar29 * 8 + 0x28);
                                    if (lVar43 == 0) break;
                                    lVar43 = FUN_024f0144(lVar43,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar20 = *(long *)(*in_stack_00000150 + 0x60), lVar20 == 0))
                                    break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar43 == 0) break;
                                    FUN_0266b9c4(lVar43,*(undefined8 *)(lVar20 + lVar42 + 0x80),0);
                                    lVar43 = unaff_x19[0xe0];
                                    if (lVar43 == 0) break;
                                    if (*(uint *)(lVar43 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar43 = *(long *)(lVar43 + lVar29 * 8 + 0x28);
                                    if (lVar43 == 0) break;
                                    lVar43 = FUN_024f0144(lVar43,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar20 = *(long *)(*in_stack_00000150 + 0x60), lVar20 == 0))
                                    break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar43 == 0) break;
                                    FUN_0266bbc8(lVar43,*(undefined8 *)(lVar20 + lVar42 + 0x98),0);
                                    lVar43 = unaff_x19[0xe0];
                                    if (lVar43 == 0) break;
                                    if (*(uint *)(lVar43 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar43 = *(long *)(lVar43 + lVar29 * 8 + 0x28);
                                    if (lVar43 == 0) break;
                                    lVar43 = FUN_024f0144(lVar43,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar20 = *(long *)(*in_stack_00000150 + 0x60), lVar20 == 0))
                                    break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar43 == 0) break;
                                    FUN_0266bc74(lVar43,*(undefined8 *)(lVar20 + lVar42 + 0xa0),0);
                                    lVar43 = unaff_x19[0xe0];
                                    if (lVar43 == 0) break;
                                    if (*(uint *)(lVar43 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar43 = *(long *)(lVar43 + lVar29 * 8 + 0x28);
                                    if (lVar43 == 0) break;
                                    lVar43 = FUN_024f0144(lVar43,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar20 = *(long *)(*in_stack_00000150 + 0x60), lVar20 == 0))
                                    break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar43 == 0) break;
                                    FUN_0266c1dc(lVar43,*(undefined8 *)(lVar20 + lVar42 + 0xa8),0);
                                    lVar43 = unaff_x19[0xe0];
                                    if (lVar43 == 0) break;
                                    if (*(uint *)(lVar43 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar43 = *(long *)(lVar43 + lVar29 * 8 + 0x28);
                                    if ((lVar43 == 0) ||
                                       (lVar43 = FUN_024f0144(lVar43,0), lVar43 == 0)) break;
                                    FUN_0266ed90(lVar43,0);
                                    lVar43 = unaff_x19[0xe0];
                                    if (lVar43 == 0) break;
                                    if (*(uint *)(lVar43 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar43 = *(long *)(lVar43 + lVar29 * 8 + 0x28);
                                    if (lVar43 == 0) break;
                                    lVar43 = FUN_02738ef4(lVar43,0);
                                    lVar20 = unaff_x19[0xe0];
                                    if (lVar20 == 0) break;
                                    if (*(uint *)(lVar20 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar20 = *(long *)(lVar20 + lVar29 * 8 + 0x28);
                                    if ((lVar20 == 0) ||
                                       (uVar19 = FUN_024f0144(lVar20,0), lVar43 == 0)) break;
                                    FUN_02858f1c(lVar43,uVar19,0);
                                    lVar43 = unaff_x19[0xe0];
                                    if (lVar43 == 0) break;
                                    if (*(uint *)(lVar43 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar43 = *(long *)(lVar43 + lVar29 * 8 + 0x28);
                                    if ((lVar43 == 0) ||
                                       (lVar43 = FUN_02738ef4(lVar43,0), lVar43 == 0)) break;
                                    FUN_02858b14(uVar23,uVar59,uVar60,uVar62,lVar43,0);
                                    lVar43 = unaff_x19[0xe0];
                                    if (lVar43 == 0) break;
                                    if (*(uint *)(lVar43 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar43 = *(long *)(lVar43 + lVar29 * 8 + 0x28);
                                    if ((lVar43 == 0) ||
                                       (lVar43 = FUN_02738ef4(lVar43,0), lVar43 == 0)) break;
                                    FUN_02858a50(lVar43,uVar14 & 1,0);
                                    lVar43 = unaff_x19[0xe0];
                                    if (lVar43 == 0) break;
                                    if (*(uint *)(lVar43 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    plVar47 = *(long **)(lVar43 + lVar29 * 8 + 0x28);
                                    uVar18 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar47 == (long *)0x0) break;
                                    (**(code **)(*plVar47 + 0x2c8))
                                              (plVar47,uVar18 & 1,*(undefined8 *)(*plVar47 + 0x2d0))
                                    ;
                                  }
                                  lVar43 = *in_stack_00000150;
                                  lVar29 = lVar29 + 1;
                                  lVar42 = lVar42 + 0x50;
                                } while (lVar43 != 0);
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


