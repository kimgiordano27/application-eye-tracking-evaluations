/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor$$SendDeactivateEvent
ENTRY_POINT: 024948c0
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

void UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor__SendDeactivateEvent
               (ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6,
               ulong param_7,ulong param_8)

{
  int iVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  double __x;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong uVar22;
  long lVar23;
  int *piVar24;
  ulong uVar25;
  undefined1 uVar26;
  char cVar27;
  long lVar28;
  undefined4 *puVar29;
  long lVar30;
  long lVar31;
  float *pfVar32;
  code *pcVar33;
  uint uVar34;
  float *pfVar35;
  long lVar36;
  uint uVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long *unaff_x19;
  uint uVar42;
  long *plVar43;
  uint uVar44;
  long lVar45;
  long *plVar46;
  long unaff_x27;
  long *plVar47;
  int iVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  double dVar59;
  ulong uVar60;
  ulong uVar61;
  uint uVar62;
  ulong uVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float unaff_s12;
  float fVar73;
  float fVar74;
  ulong unaff_d13;
  float fVar75;
  undefined4 uVar76;
  float fVar77;
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
  float fStack000000000000005c;
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
  undefined8 in_stack_000017a8;
  char in_stack_000017b4;
  float in_stack_000017b8;
  uint in_stack_000017bc;
  
code_r0x024948c0:
  FUN_024d7014(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
LAB_02495e14:
  bVar11 = false;
  bVar8 = 1;
  bVar7 = true;
  plVar47 = (long *)StringLiteral_302;
  plVar43 = (long *)System_Threading_Mutex_TypeInfo;
LAB_02492630:
  fVar65 = (float)unaff_d13;
  in_stack_00001788 = in_stack_00001788 + 1;
  lVar28 = unaff_x19[0x8e];
  if (lVar28 != 0) {
    if ((int)in_stack_00001788 < (int)*(uint *)(lVar28 + 0x18)) {
      if (*(uint *)(lVar28 + 0x18) <= in_stack_00001788)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      uVar15 = *(uint *)(lVar28 + (long)(int)in_stack_00001788 * 0xc + 0x20);
      if (uVar15 == 0) goto LAB_02495f1c;
      if (5 < in_stack_00000140) {
        uVar20 = FUN_0176eb1c(&stack0x000017bc,0);
        uVar21 = FUN_0176eb1c(&stack0x00001788,0);
        uVar20 = FUN_0160073c(*(undefined8 *)UnityEngine_Rendering_Universal_DebugValidationMode_var
                              ,uVar20,*(undefined8 *)
                                       Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                              ,uVar21,0);
        if (*(int *)(*plVar47 + 0xe0) == 0) {
          thunk_FUN_00d32864(*plVar47);
        }
        FUN_026610e4(uVar20,0);
        in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
      }
      if ((*(char *)((long)unaff_x19 + 0x2fa) != '\0') && (uVar15 == 0x3c)) goto code_r0x02492440;
      if ((*in_stack_00000150 != 0) && (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 != 0))
      {
        if (*in_stack_00000148 < *(uint *)(lVar28 + 0x18)) {
          lVar28 = lVar28 + (int)*in_stack_00000148 * unaff_x27;
          *(undefined4 *)((long)unaff_x19 + 0x63c) = *(undefined4 *)(lVar28 + 0x2c);
          *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar28 + 0x58);
          unaff_x19[0x1f] = *(long *)(lVar28 + 0x38);
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorReticleVisual__get_prefabScalingFactor
          ;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      }
      goto LAB_0249920c;
    }
LAB_02495f1c:
    fVar65 = (float)param_2;
    if (((char)unaff_x19[0x46] != '\0') &&
       (fVar65 = DAT_02956ccc,
       DAT_02956ccc < *(float *)((long)unaff_x19 + 0x234) - *(float *)(unaff_x19 + 0x47))) {
      fVar65 = *(float *)((long)unaff_x19 + 0x1dc);
      fVar75 = *(float *)((long)unaff_x19 + 0x24c);
      if ((fVar65 < fVar75) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
        if (*(float *)((long)unaff_x19 + 0x2cc) < *(float *)(unaff_x19 + 0x59) / 100.0) {
          *(undefined4 *)((long)unaff_x19 + 0x2cc) = 0;
        }
        fVar49 = (*(float *)((long)unaff_x19 + 0x234) - fVar65) * 0.5;
        if (fVar49 <= DAT_028aa298) {
          fVar49 = DAT_028aa298;
        }
        *(float *)(unaff_x19 + 0x47) = fVar65;
        fVar49 = (fVar65 + fVar49) * 20.0 + 0.5;
        fVar65 = DAT_02958220;
        if (fVar49 != INFINITY) {
          fVar65 = (float)(int)fVar49 / 20.0;
        }
        if (fVar75 <= fVar65) {
          fVar65 = fVar75;
        }
        goto LAB_02495fd8;
      }
    }
    *(undefined1 *)((long)unaff_x19 + 0x244) = 1;
    if ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c)) {
      uVar20 = FUN_0176eb1c(in_stack_00000038,0);
      uVar21 = FUN_017840ac(in_stack_00000040,0);
      uVar20 = FUN_0160073c(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlah_s16__,
                            uVar20,*(undefined8 *)
                                    Method_UnityEngine_GameObject_GetComponents<Component>__,uVar21,
                            0);
      if (*(int *)(*plVar47 + 0xe0) == 0) {
        thunk_FUN_00d32864(*plVar47);
      }
      FUN_02660dac(uVar20,0);
    }
    if ((*in_stack_00000148 == 0) || ((*in_stack_00000148 == 1 && (in_stack_000017bc == 3)))) {
      (**(code **)(*unaff_x19 + 0x948))();
      goto LAB_02496098;
    }
    lVar28 = *plVar43;
    if (*(int *)(lVar28 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar28 = *plVar43;
    }
    puVar9 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    lVar28 = **(long **)(lVar28 + 0xb8);
    if (lVar28 == 0) goto LAB_0249920c;
    if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0xd0))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    iVar16 = *(int *)(lVar28 + (long)(int)*(uint *)(unaff_x19 + 0xd0) * 0x38 + 0x54) << 2;
    if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x60), lVar28 == 0))
    goto LAB_0249920c;
    if (*(int *)(*(long *)PTR_DAT_033ed410 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (*(int *)(lVar28 + 0x18) == 0)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    FUN_024e7d94(lVar28 + 0x20,0,0);
    if (DAT_03774d76 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03774d76 = '\x01';
    }
    puVar10 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
    iVar14 = (int)unaff_x19[0x4d];
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
    lVar28 = unaff_x19[0xe2];
    _in_stack_00000090 = uStack00000000000000c0;
    fStack0000000000000098 = in_stack_000000c8;
    if (iVar14 < 0x401) {
      if (iVar14 == 0x100) {
        if (lVar28 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar28 + 0x18) < 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar20 = *(undefined8 *)(lVar28 + 0x30);
        if ((int)unaff_x19[0x5b] == 5) {
          if ((*in_stack_00000150 == 0) ||
             (lVar31 = *(long *)(*in_stack_00000150 + 0x58), lVar31 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar31 + 0x18) <= uStack000000000000002c)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar65 = *(float *)(lVar31 + (long)(int)uStack000000000000002c * 0x14 + 0x28);
        }
        else {
          fVar65 = *(float *)(unaff_x19 + 0x96);
        }
        fStack0000000000000098 = fStack0000000000000030 + 0.0 + *(float *)(lVar28 + 0x2c);
        fVar65 = (0.0 - fVar65) - fStack0000000000000020;
      }
      else if (iVar14 == 0x200) {
        if (lVar28 == 0) goto LAB_0249920c;
        if ((*(int *)(lVar28 + 0x18) == 1) || (*(int *)(lVar28 + 0x18) == 0))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fStack0000000000000098 = (*(float *)(lVar28 + 0x20) + *(float *)(lVar28 + 0x2c)) * 0.5;
        uVar20 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar28 + 0x24) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar28 + 0x30) >> 0x20)) * 0.5,
                          ((float)*(undefined8 *)(lVar28 + 0x24) +
                          (float)*(undefined8 *)(lVar28 + 0x30)) * 0.5);
        if ((int)unaff_x19[0x5b] == 5) {
          if ((*in_stack_00000150 == 0) ||
             (lVar28 = *(long *)(*in_stack_00000150 + 0x58), lVar28 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar28 + 0x18) <= uStack000000000000002c)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar28 = lVar28 + (long)(int)uStack000000000000002c * 0x14;
          fStack0000000000000098 = fStack0000000000000030 + 0.0 + fStack0000000000000098;
          fVar65 = ((fStack0000000000000020 + *(float *)(lVar28 + 0x28) + *(float *)(lVar28 + 0x30))
                   - fStack0000000000000024) * -0.5 + 0.0;
        }
        else {
          fStack0000000000000098 = fStack0000000000000030 + 0.0 + fStack0000000000000098;
          fVar65 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x96) + in_stack_000017b8) -
                   fStack0000000000000024) * -0.5 + 0.0;
        }
      }
      else {
        if (iVar14 != 0x400) goto LAB_024965d0;
        if (lVar28 == 0) goto LAB_0249920c;
        if (*(int *)(lVar28 + 0x18) == 0)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar20 = *(undefined8 *)(lVar28 + 0x24);
        if ((int)unaff_x19[0x5b] == 5) {
          if ((*in_stack_00000150 == 0) ||
             (lVar31 = *(long *)(*in_stack_00000150 + 0x58), lVar31 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar31 + 0x18) <= uStack000000000000002c)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          in_stack_000017b8 = *(float *)(lVar31 + (long)(int)uStack000000000000002c * 0x14 + 0x30);
        }
        fStack0000000000000098 = fStack0000000000000030 + 0.0 + *(float *)(lVar28 + 0x20);
        fVar65 = fStack0000000000000024 + (0.0 - in_stack_000017b8);
      }
      _in_stack_00000090 = CONCAT44((float)((ulong)uVar20 >> 0x20) + 0.0,(float)uVar20 + fVar65);
    }
    else if (iVar14 == 0x800) {
      if (lVar28 == 0) goto LAB_0249920c;
      if ((*(int *)(lVar28 + 0x18) == 1) || (*(int *)(lVar28 + 0x18) == 0))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      fVar65 = ((float)*(undefined8 *)(lVar28 + 0x24) + (float)*(undefined8 *)(lVar28 + 0x30)) * 0.5
      ;
      fStack0000000000000098 =
           fStack0000000000000030 + 0.0 +
           (*(float *)(lVar28 + 0x20) + *(float *)(lVar28 + 0x2c)) * 0.5;
      _in_stack_00000090 =
           CONCAT44(((float)((ulong)*(undefined8 *)(lVar28 + 0x24) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar28 + 0x30) >> 0x20)) * 0.5 + 0.0,fVar65 + 0.0
                   );
    }
    else {
      if (iVar14 == 0x1000) {
        if (lVar28 == 0) goto LAB_0249920c;
        if ((*(int *)(lVar28 + 0x18) == 1) || (*(int *)(lVar28 + 0x18) == 0))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar65 = (float)*(undefined8 *)(lVar28 + 0x24) + (float)*(undefined8 *)(lVar28 + 0x30);
        fVar75 = (float)((ulong)*(undefined8 *)(lVar28 + 0x24) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(lVar28 + 0x30) >> 0x20);
        fStack0000000000000020 =
             fStack0000000000000020 + *(float *)(unaff_x19 + 0x9c) + *(float *)(unaff_x19 + 0x9b);
        fStack0000000000000098 =
             fStack0000000000000030 + 0.0 +
             (*(float *)(lVar28 + 0x20) + *(float *)(lVar28 + 0x2c)) * 0.5;
      }
      else {
        if (iVar14 != 0x2000) goto LAB_024965d0;
        if (lVar28 == 0) goto LAB_0249920c;
        if ((*(int *)(lVar28 + 0x18) == 1) || (*(int *)(lVar28 + 0x18) == 0))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar65 = (float)*(undefined8 *)(lVar28 + 0x24) + (float)*(undefined8 *)(lVar28 + 0x30);
        fVar75 = (float)((ulong)*(undefined8 *)(lVar28 + 0x24) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(lVar28 + 0x30) >> 0x20);
        fStack0000000000000020 = *(float *)((long)unaff_x19 + 0x4b4) - fStack0000000000000020;
        fStack0000000000000098 =
             fStack0000000000000030 + 0.0 +
             (*(float *)(lVar28 + 0x20) + *(float *)(lVar28 + 0x2c)) * 0.5;
      }
      fVar65 = fVar65 * 0.5;
      _in_stack_00000090 =
           CONCAT44(fVar75 * 0.5 + 0.0,
                    fVar65 + (0.0 - (fStack0000000000000020 - fStack0000000000000024) * 0.5));
    }
LAB_024965d0:
    if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
    uVar20 = FUN_0285a188(unaff_x19[0xe4],0);
    if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar9);
    }
    uVar22 = FUN_0268b4e0(uVar20,0,0);
    lVar28 = FUN_024c933c();
    if (lVar28 == 0) goto LAB_0249920c;
    FUN_026a125c(lVar28,0);
    *(float *)(unaff_x19 + 0xe1) = fVar65;
    if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
    iVar14 = FUN_02859798(unaff_x19[0xe4],0);
    if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
    fVar75 = (float)FUN_028598f0(unaff_x19[0xe4],0);
    __x = DAT_028aa048;
    dVar59 = modf(DAT_028aa048,(double *)&stack0x00000880);
    if (dVar59 == 0.5) {
      fVar49 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
      if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
        fVar49 = fVar49 + 1.0;
      }
    }
    else {
      fVar49 = 255.0;
    }
    dVar59 = modf(__x,(double *)&stack0x00000880);
    if (dVar59 == 0.5) {
      fVar69 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
      if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
        fVar69 = fVar69 + 1.0;
      }
    }
    else {
      fVar69 = 255.0;
    }
    dVar59 = modf(__x,(double *)&stack0x00000880);
    if (dVar59 == 0.5) {
      fVar72 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
      if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
        fVar72 = fVar72 + 1.0;
      }
    }
    else {
      fVar72 = 255.0;
    }
    dVar59 = modf(__x,(double *)&stack0x00000880);
    if (dVar59 == 0.5) {
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
    if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (DAT_037825d3 == '\0') {
      thunk_FUN_00d48444(Unity_AI_Navigation_NavMeshLink_TypeInfo);
      DAT_037825d3 = '\x01';
    }
    lVar28 = *(long *)puVar10;
    if (*(int *)(lVar28 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar28 = *(long *)puVar10;
    }
    puVar29 = *(undefined4 **)(lVar28 + 0xb8);
    uVar60 = (ulong)(uint)puVar29[1];
    uVar61 = (ulong)(uint)puVar29[2];
    uVar63 = (ulong)(uint)puVar29[3];
    UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
              (*puVar29,uVar60,uVar61,uVar63,&stack0x00001790,0x4000ffff,0);
    if (*(int *)(*plVar43 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar28 = *in_stack_00000150;
    if (lVar28 == 0) goto LAB_0249920c;
    uVar15 = *in_stack_00000148;
    if ((int)uVar15 < 1) {
      iStack00000000000000ac = 0;
      iVar16 = 0;
      goto LAB_02498c58;
    }
    lVar28 = *(long *)(lVar28 + 0x38);
    fVar65 = ABS(fVar65);
    fVar50 = 1.0;
    if ((uVar22 & 1) == 0) {
      fVar50 = fVar65;
    }
    if (lVar28 == 0) goto LAB_0249920c;
    bVar12 = false;
    bVar7 = false;
    bVar6 = false;
    bVar11 = false;
    uStack0000000000000060 =
         (int)fVar49 & 0xffU | ((int)fVar69 & 0xffU) << 8 | ((int)fVar72 & 0xffU) << 0x10 |
         (int)fVar51 << 0x18;
    fStack00000000000000d0 = *(float *)(*(long *)(*plVar43 + 0xb8) + 0x15a8);
    fStack00000000000000cc = 0.0;
    fStack0000000000000058 = fStack00000000000000b0;
    fStack000000000000005c = 0.0;
    fStack0000000000000034 = 0.0;
    fStack0000000000000088 = 0.0;
    fStack0000000000000030 = 0.0;
    uVar19 = 0;
    iVar48 = 0;
    lVar31 = 0x2e0;
    fVar69 = 0.0;
    fVar49 = 0.0;
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
    uVar62 = 0;
    uVar37 = 1;
    goto LAB_02496a50;
  }
  goto LAB_0249920c;
code_r0x02492440:
  *(undefined1 *)((long)unaff_x19 + 0x429) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
  uVar22 = FUN_024d0688();
  if (((uVar22 & 1) != 0) &&
     (in_stack_00001788 = in_stack_0000176c, in_stack_000017bc = uVar15,
     *(int *)((long)unaff_x19 + 0x63c) == 0)) goto LAB_02492630;
UnityEngine_XR_Interaction_Toolkit_XRInteractorReticleVisual__get_prefabScalingFactor:
  if ((unaff_x19[0x6c] == 0) || (lVar28 = *(long *)(unaff_x19[0x6c] + 0x38), lVar28 == 0))
  goto LAB_0249920c;
  uVar19 = *in_stack_00000148;
  if (*(uint *)(lVar28 + 0x18) <= uVar19)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar45 = (long)(int)uVar19;
  cVar27 = *(char *)(lVar28 + lVar45 * unaff_x27 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x429) = 0;
  lVar31 = unaff_x19[0x23];
  if ((uint)in_stack_000017a8 == uVar19) {
    uVar15 = (uint)((ulong)in_stack_000017a8 >> 0x20);
    bVar6 = true;
    *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
    if (uVar15 == 0x2026) {
      lVar23 = unaff_x19[0xc9];
      lVar28 = lVar28 + lVar45 * unaff_x27;
      *(undefined4 *)(lVar28 + 0x2c) = 0;
      *(long *)(lVar28 + 0x30) = lVar23;
      *(long *)(lVar28 + 0x38) = unaff_x19[0xca];
      *(long *)(lVar28 + 0x50) = unaff_x19[0xcb];
      *(int *)(lVar28 + 0x58) = (int)unaff_x19[0xcc];
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
      in_stack_000017a8 = CONCAT44(3,uVar19 + 1);
    }
    else if (uVar15 == 3) {
      if ((*in_stack_00000138 == 0) || (lVar23 = FUN_024b11ac(*in_stack_00000138,0), lVar23 == 0))
      goto LAB_0249920c;
      FUN_01299bc0(lVar23,&stack0x00000bf8,&stack0x00000880,*(undefined8 *)PTR_DAT_033ef3c8);
      if (*(uint *)(lVar28 + 0x18) <= uVar19)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      bVar6 = true;
      *(ulong *)(lVar28 + lVar45 * unaff_x27 + 0x30) = CONCAT44(in_stack_00000884,in_stack_00000880)
      ;
      uVar19 = *(uint *)((long)unaff_x19 + 0x48c);
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
    }
  }
  else {
    bVar6 = false;
  }
  iVar16 = (int)unaff_x27;
  in_stack_000017bc = uVar15;
  if (((int)uVar19 < *(int *)((long)unaff_x19 + 0x31c)) && (uVar15 != 3)) {
    if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar28 + 0x18) <= uVar19)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar28 = lVar28 + (long)(int)uVar19 * (long)iVar16;
    *(undefined1 *)(lVar28 + 0x194) = 0;
    *(undefined2 *)(lVar28 + 0x20) = 0x200b;
    *(undefined4 *)(lVar28 + 100) = 0;
    *in_stack_00000148 = uVar19 + 1;
    goto LAB_02492630;
  }
  iVar14 = *(int *)((long)unaff_x19 + 0x63c);
  fStack00000000000000f4 = unaff_s12;
  if (iVar14 == 0) {
    uVar19 = *(uint *)((long)unaff_x19 + 0x254);
    if ((uVar19 >> 4 & 1) == 0) {
      if ((uVar19 >> 3 & 1) == 0) {
        if ((uVar19 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar22 = FUN_016f92d4(uVar15,0);
          if ((uVar22 & 1) != 0) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar15 = FUN_016f95a8(uVar15,0);
            uVar15 = uVar15 & 0xffff;
            fStack00000000000000f4 = fStack0000000000000028;
          }
        }
      }
      else {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar22 = FUN_016f9218(uVar15,0);
        if ((uVar22 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar15 = FUN_016f9724(uVar15,0);
          goto LAB_02492a0c;
        }
      }
    }
    else {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar22 = FUN_016f92d4(uVar15,0);
      if ((uVar22 & 1) != 0) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar15 = FUN_016f95a8(uVar15,0);
LAB_02492a0c:
        uVar15 = uVar15 & 0xffff;
      }
    }
    iVar14 = *(int *)((long)unaff_x19 + 0x63c);
    in_stack_000017bc = uVar15;
    if (iVar14 == 0) goto LAB_02492a20;
LAB_0249265c:
    if (iVar14 == 1) {
      if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar28 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = lVar28 + (int)*in_stack_00000148 * unaff_x27;
      lVar45 = *(long *)(lVar28 + 0x40);
      unaff_x19[0xd2] = lVar45;
      *(undefined4 *)((long)unaff_x19 + 0x69c) = *(undefined4 *)(lVar28 + 0x48);
      if ((lVar45 == 0) || (lVar28 = FUN_024ebfa0(lVar45,0), lVar28 == 0)) goto LAB_0249920c;
      FUN_0132138c(lVar28,*(undefined4 *)((long)unaff_x19 + 0x69c),&stack0x00000880,
                   *(undefined8 *)System_Func<KeyValuePair<int,_int>,_int>_TypeInfo);
      lVar45 = CONCAT44(in_stack_00000884,in_stack_00000880);
      if (lVar45 == 0) goto LAB_02492630;
      if (in_stack_000017bc == 0x3c) {
        in_stack_000017bc = *(int *)((long)unaff_x19 + 0x69c) + 0xe000;
      }
      else {
        lVar28 = *plVar43;
        if (*(int *)(lVar28 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar28 = *plVar43;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1b4) = *(undefined4 *)(*(long *)(lVar28 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
      fVar65 = *(float *)(unaff_x19 + 0x3c);
      memmove(&stack0x00001700,(void *)(unaff_x19[0x1f] + 0x50),0x60);
      iVar14 = FUN_026fd110(&stack0x00001700,0);
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      memmove(&stack0x00001700,(void *)(*in_stack_00000138 + 0x50),0x60);
      fVar49 = (float)FUN_026fd120(&stack0x00001700,0);
      fVar75 = fStack0000000000000084;
      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
        fVar75 = unaff_s12;
      }
      if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
      fVar75 = (fVar65 / (float)iVar14) * fVar49 * fVar75;
      iVar14 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
      fVar65 = *(float *)(unaff_x19 + 0x3c);
      if (iVar14 < 1) {
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        iVar14 = FUN_026fd110(*in_stack_00000138 + 0x50,0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar49 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
        fVar72 = fStack0000000000000084;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar72 = unaff_s12;
        }
        if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
        fVar69 = (float)FUN_026fd140(unaff_x19[0x1f] + 0x50,0);
        if (*(long *)(lVar45 + 0x20) == 0) goto LAB_0249920c;
        FUN_026fd62c(&stack0x00000880,*(long *)(lVar45 + 0x20),0);
        fVar50 = (float)FUN_026fd45c(&stack0x000016e0,0);
        if (*(long *)(lVar45 + 0x20) == 0) goto LAB_0249920c;
        fVar52 = *(float *)(lVar45 + 0x2c);
        fVar73 = (float)FUN_026fd668(*(long *)(lVar45 + 0x20),0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar51 = (float)FUN_026fd140(*in_stack_00000138 + 0x50,0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar53 = (float)FUN_026fd170(*in_stack_00000138 + 0x50,0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar54 = *(float *)((long)unaff_x19 + 0x3fc);
        fStack0000000000000134 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
        if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
        fStack0000000000000134 = fVar75 * fVar53 * fVar54 * fStack0000000000000134;
        fVar72 = (fVar65 / (float)iVar14) * fVar49 * fVar72;
        fVar65 = fVar72 * (fVar69 / fVar50) * fVar52 * fVar73;
        fVar72 = fVar72 / fVar65;
        fVar51 = fVar72 * fVar51;
        fVar75 = (float)FUN_026fd180(unaff_x19[0x1f] + 0x50,0);
        fVar72 = fVar72 * fVar75;
      }
      else {
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        iVar14 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar49 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
        if (*(long *)(lVar45 + 0x20) == 0) goto LAB_0249920c;
        fVar72 = *(float *)(lVar45 + 0x2c);
        fVar69 = fStack0000000000000084;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar69 = 1.0;
        }
        fVar50 = (float)FUN_026fd668(*(long *)(lVar45 + 0x20),0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar51 = (float)FUN_026fd140(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar52 = (float)FUN_026fd170(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar73 = *(float *)((long)unaff_x19 + 0x3fc);
        fStack0000000000000134 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fStack0000000000000134 = fVar75 * fVar52 * fVar73 * fStack0000000000000134;
        fVar65 = (fVar65 / (float)iVar14) * fVar49 * fVar69 * fVar72 * fVar50;
        fVar72 = (float)FUN_026fd180(unaff_x19[0xd2] + 0x48,0);
      }
      lVar28 = unaff_x19[0x6c];
      unaff_x19[200] = lVar45;
      if ((lVar28 == 0) || (lVar45 = *(long *)(lVar28 + 0x38), lVar45 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar45 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar45 = lVar45 + (int)*in_stack_00000148 * unaff_x27;
      *(undefined4 *)(lVar45 + 0x2c) = 1;
      *(float *)(lVar45 + 0x160) = fVar65;
      in_stack_00000128 = 0.0;
      *(long *)(lVar45 + 0x40) = unaff_x19[0xd2];
      *(long *)(lVar45 + 0x38) = unaff_x19[0x1f];
      *(int *)(lVar45 + 0x58) = (int)unaff_x19[0x23];
      *(int *)(unaff_x19 + 0x23) = (int)lVar31;
      goto LAB_02492e14;
    }
    lVar28 = *in_stack_00000150;
    fVar75 = 0.0;
    if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
      fVar75 = fVar65;
    }
    fStack0000000000000134 = 0.0;
    if (lVar28 == 0) goto LAB_0249920c;
    fVar51 = 0.0;
    fVar72 = 0.0;
  }
  else {
    if (iVar14 != 0) goto LAB_0249265c;
LAB_02492a20:
    if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0))
    goto LAB_0249920c;
    uVar19 = *in_stack_00000148;
    uVar15 = *(uint *)(lVar28 + 0x18);
    if (uVar15 <= uVar19)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar31 = *(long *)(lVar28 + (int)uVar19 * unaff_x27 + 0x30);
    unaff_x19[200] = lVar31;
    if (lVar31 == 0) goto LAB_02492630;
    lVar45 = lVar28 + (int)uVar19 * unaff_x27;
    lVar31 = *(long *)(lVar45 + 0x38);
    unaff_x19[0x1f] = lVar31;
    unaff_x19[0x22] = *(long *)(lVar45 + 0x50);
    *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar45 + 0x58);
    if (bVar6) {
      lVar45 = unaff_x19[0x8e];
      if (lVar45 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar45 + 0x18) <= in_stack_00001788)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if ((*(int *)(lVar45 + (long)(int)in_stack_00001788 * 0xc + 0x20) != 10) ||
         (uVar19 == *(uint *)(unaff_x19 + 0x92))) goto LAB_02492ab4;
      if (uVar15 <= uVar19 - 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (lVar31 == 0) goto LAB_0249920c;
      fVar75 = *(float *)(lVar28 + (long)(int)(uVar19 - 1) * (long)iVar16 + 0x60);
      iVar14 = FUN_026fd110(lVar31 + 0x50,0);
      lVar28 = *in_stack_00000138;
    }
    else {
LAB_02492ab4:
      if (lVar31 == 0) goto LAB_0249920c;
      fVar75 = *(float *)(unaff_x19 + 0x3c);
      iVar14 = FUN_026fd110(lVar31 + 0x50,0);
      lVar28 = unaff_x19[0x1f];
    }
    if (lVar28 == 0) goto LAB_0249920c;
    fVar69 = (float)FUN_026fd120(lVar28 + 0x50,0);
    fVar49 = fStack0000000000000084;
    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
      fVar49 = unaff_s12;
    }
    fVar72 = 0.0;
    fVar51 = 0.0;
    if (!(bool)(bVar6 & in_stack_000017bc == 0x2026)) {
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      fVar51 = (float)FUN_026fd140(*in_stack_00000138 + 0x50,0);
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      fVar72 = (float)FUN_026fd180(*in_stack_00000138 + 0x50,0);
    }
    lVar28 = unaff_x19[200];
    if ((lVar28 == 0) || (*(long *)(lVar28 + 0x20) == 0)) goto LAB_0249920c;
    fVar50 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar52 = *(float *)(lVar28 + 0x2c);
    fVar65 = (float)FUN_026fd668(*(long *)(lVar28 + 0x20),0);
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar73 = (float)FUN_026fd170(*in_stack_00000138 + 0x50,0);
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar53 = *(float *)((long)unaff_x19 + 0x3fc);
    fStack0000000000000134 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
    lVar28 = unaff_x19[0x6c];
    if ((lVar28 == 0) || (lVar31 = *(long *)(lVar28 + 0x38), lVar31 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar31 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar31 = lVar31 + (int)*in_stack_00000148 * unaff_x27;
    *(undefined4 *)(lVar31 + 0x2c) = 0;
    fVar49 = ((fStack00000000000000f4 * fVar75) / (float)iVar14) * fVar69 * fVar49;
    fVar65 = fVar49 * fVar50 * fVar52 * fVar65;
    *(float *)(lVar31 + 0x160) = fVar65;
    uVar15 = *(uint *)(unaff_x19 + 0x23);
    fStack0000000000000134 = fVar49 * fVar73 * fVar53 * fStack0000000000000134;
    if (uVar15 == 0) {
      in_stack_00000128 = *(float *)(unaff_x19 + 0xc2);
    }
    else {
      lVar31 = unaff_x19[0xe0];
      if (lVar31 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar31 + 0x18) <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar31 = *(long *)(lVar31 + (long)(int)uVar15 * 8 + 0x20);
      if (lVar31 == 0) goto LAB_0249920c;
      in_stack_00000128 = *(float *)(lVar31 + 0x104);
    }
LAB_02492e14:
    unaff_s12 = 1.0;
    fVar75 = 0.0;
    if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
      fVar75 = fVar65;
    }
  }
  lVar28 = *(long *)(lVar28 + 0x38);
  if (lVar28 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar28 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar28 = lVar28 + (int)*in_stack_00000148 * unaff_x27;
  *(short *)(lVar28 + 0x20) = (short)in_stack_000017bc;
  *(int *)(lVar28 + 0x60) = (int)unaff_x19[0x3c];
  *(undefined4 *)(lVar28 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4e4);
  if ((unaff_x19[0x6c] == 0) || (lVar28 = *(long *)(unaff_x19[0x6c] + 0x38), lVar28 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar28 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  *(int *)(lVar28 + (int)*in_stack_00000148 * unaff_x27 + 0x168) = (int)unaff_x19[0x2a];
  if ((unaff_x19[0x6c] == 0) || (lVar28 = *(long *)(unaff_x19[0x6c] + 0x38), lVar28 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar28 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  *(undefined4 *)(lVar28 + (int)*in_stack_00000148 * unaff_x27 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x154);
  if ((unaff_x19[0x6c] == 0) || (lVar28 = *(long *)(unaff_x19[0x6c] + 0x38), lVar28 == 0))
  goto LAB_0249920c;
  uVar15 = *in_stack_00000148;
  FUN_013b78b8(in_stack_000000b8,&stack0x00000880,
               *(undefined8 *)TMPro_TMP_Dropdown_OptionData_TypeInfo);
  if (*(uint *)(lVar28 + 0x18) <= uVar15)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar28 = lVar28 + (int)uVar15 * unaff_x27;
  *(undefined4 *)(lVar28 + 0x18c) = in_stack_00000890;
  *(undefined8 *)(lVar28 + 0x184) = in_stack_00000888;
  *(ulong *)(lVar28 + 0x17c) = CONCAT44(in_stack_00000884,in_stack_00000880);
  if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar28 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  *(undefined4 *)(lVar28 + (int)*in_stack_00000148 * unaff_x27 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x254);
  if ((unaff_x19[200] == 0) || (lVar28 = *(long *)(unaff_x19[200] + 0x20), lVar28 == 0))
  goto LAB_0249920c;
  FUN_026fd62c(&stack0x00000bf8,lVar28,0);
  puVar9 = 
  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__;
  if ((int)in_stack_000017bc < 0x10000) {
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar15 = FUN_016f68bc(in_stack_000017bc,0);
    uVar15 = uVar15 & 1;
  }
  else {
    uVar15 = 0;
  }
  fStack00000000000000cc = *(float *)(unaff_x19 + 0x54);
  *(undefined4 *)((long)unaff_x19 + 0x2f4) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f1) == '\0') {
    fVar50 = 0.0;
    fVar69 = 0.0;
    fVar49 = 0.0;
  }
  else {
    if (unaff_x19[200] == 0) goto LAB_0249920c;
    uVar62 = *in_stack_00000148;
    uVar19 = *(uint *)(unaff_x19[200] + 0x28);
    if ((int)uVar62 < (int)in_stack_00000078._4_4_) {
      if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar28 + 0x18) <= uVar62 + 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = *(long *)(lVar28 + (long)(int)(uVar62 + 1) * (long)iVar16 + 0x30);
      if ((((lVar28 == 0) || (*in_stack_00000138 == 0)) ||
          (lVar31 = *(long *)(*in_stack_00000138 + 0x128), lVar31 == 0)) ||
         (lVar31 = *(long *)(lVar31 + 0x18), lVar31 == 0)) goto LAB_0249920c;
      in_stack_00000880 = uVar19 | *(int *)(lVar28 + 0x28) << 0x10;
      uVar22 = FUN_0129eff4(lVar31,&stack0x00000880,&stack0x000016d8,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                           );
      uVar76 = 0;
      if ((uVar22 & 1) == 0) {
        fVar50 = 0.0;
        fVar69 = 0.0;
        fVar49 = 0.0;
      }
      else {
        if (in_stack_000016d8 == 0) goto LAB_0249920c;
        fVar49 = *(float *)(in_stack_000016d8 + 0x14);
        fVar69 = *(float *)(in_stack_000016d8 + 0x18);
        fVar50 = *(float *)(in_stack_000016d8 + 0x1c);
        uVar76 = *(undefined4 *)(in_stack_000016d8 + 0x20);
        if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
          fStack00000000000000cc = 0.0;
        }
      }
      uVar62 = *in_stack_00000148;
    }
    else {
      uVar76 = 0;
      fVar50 = 0.0;
      fVar69 = 0.0;
      fVar49 = 0.0;
    }
    if (0 < (int)uVar62) {
      if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar28 + 0x18) <= (uint)((long)(int)uVar62 + -1))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = *(long *)(lVar28 + ((long)(int)uVar62 + -1) * unaff_x27 + 0x30);
      if (((lVar28 == 0) || (*in_stack_00000138 == 0)) ||
         ((lVar31 = *(long *)(*in_stack_00000138 + 0x128), lVar31 == 0 ||
          (lVar31 = *(long *)(lVar31 + 0x18), lVar31 == 0)))) goto LAB_0249920c;
      in_stack_00000880 = *(uint *)(lVar28 + 0x28) | uVar19 << 0x10;
      uVar22 = FUN_0129eff4(lVar31,&stack0x00000880,&stack0x000016d8,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                           );
      if ((uVar22 & 1) != 0) {
        if ((in_stack_000016d8 == 0) ||
           (fVar49 = (float)FUN_024bb1bc(fVar49,fVar69,fVar50,uVar76,
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
    *(float *)((long)unaff_x19 + 0x2f4) = fVar50;
  }
  if ((char)unaff_x19[0x1d] != '\0') {
    fVar73 = *(float *)(unaff_x19 + 199);
    fVar52 = (float)FUN_026fd474(&stack0x00001770,0);
    fVar73 = fVar73 - fVar75 * fVar52 * (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc));
    *(float *)(unaff_x19 + 199) = fVar73;
    if ((uVar15 != 0) || (in_stack_000017bc == 0x200b)) {
      *(float *)(unaff_x19 + 199) = fVar73 - in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac)
      ;
    }
  }
  fVar73 = *(float *)(unaff_x19 + 0x55);
  fVar52 = 0.0;
  if (fVar73 != 0.0) {
    fVar52 = (float)FUN_026fd454(&stack0x00001770,0);
    fVar53 = (float)FUN_026fd464(&stack0x00001770,0);
    fVar52 = (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (fVar73 * 0.5 - fVar75 * (fVar52 * 0.5 + fVar53));
    *(float *)(unaff_x19 + 199) = *(float *)(unaff_x19 + 199) + fVar52;
  }
  if (((cVar27 == '\0') && (*(int *)((long)unaff_x19 + 0x63c) == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x254) & 1) != 0)) {
    lVar28 = unaff_x19[0x22];
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar22 = FUN_02681b9c(lVar28,0,0);
    fVar54 = 0.0;
    if ((uVar22 & 1) != 0) {
      lVar28 = unaff_x19[0x22];
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (lVar28 == 0) goto LAB_0249920c;
      uVar22 = FUN_0267e1d8(lVar28,*(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x54),0);
      fVar54 = 0.0;
      if ((uVar22 & 1) != 0) {
        lVar28 = unaff_x19[0x22];
        if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (lVar28 == 0) goto LAB_0249920c;
        fVar73 = (float)FUN_0267f610(lVar28,*(undefined4 *)
                                             (*(long *)(*(long *)puVar9 + 0xb8) + 0x54),0);
        if ((*in_stack_00000138 == 0) || (unaff_x19[0x22] == 0)) goto LAB_0249920c;
        fVar53 = *(float *)(*in_stack_00000138 + 0x1b0);
        fVar54 = (float)FUN_0267f610(unaff_x19[0x22],
                                     *(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xcc),0);
        fVar54 = fVar54 * fVar73 * fVar53 * 0.25;
        if (fVar73 < in_stack_00000128 + fVar54) {
          in_stack_00000128 = fVar73 - fVar54;
        }
      }
    }
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar73 = *(float *)(*in_stack_00000138 + 0x1b4);
  }
  else {
    lVar28 = unaff_x19[0x22];
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar22 = FUN_02681b9c(lVar28,0,0);
    fVar73 = 0.0;
    if ((uVar22 & 1) != 0) {
      lVar28 = unaff_x19[0x22];
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (lVar28 == 0) goto LAB_0249920c;
      uVar22 = FUN_0267e1d8(lVar28,*(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x54),0);
      if ((uVar22 & 1) != 0) {
        lVar28 = unaff_x19[0x22];
        if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (lVar28 == 0) goto LAB_0249920c;
        uVar22 = FUN_0267e1d8(lVar28,*(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xcc),0);
        if ((uVar22 & 1) != 0) {
          lVar28 = unaff_x19[0x22];
          if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (lVar28 == 0) goto LAB_0249920c;
          fVar53 = (float)FUN_0267f610(lVar28,*(undefined4 *)
                                               (*(long *)(*(long *)puVar9 + 0xb8) + 0x54),0);
          if ((*in_stack_00000138 == 0) || (unaff_x19[0x22] == 0)) goto LAB_0249920c;
          fVar66 = *(float *)(*in_stack_00000138 + 0x1a8);
          fVar54 = (float)FUN_0267f610(unaff_x19[0x22],
                                       *(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xcc),0);
          fVar54 = fVar54 * fVar53 * fVar66 * 0.25;
          if (fVar53 < in_stack_00000128 + fVar54) {
            in_stack_00000128 = fVar53 - fVar54;
          }
          goto LAB_024934bc;
        }
      }
    }
    fVar54 = 0.0;
  }
LAB_024934bc:
  fVar67 = *(float *)(unaff_x19 + 199);
  fVar53 = (float)FUN_026fd464(&stack0x00001770,0);
  fVar67 = fVar67 + (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
                    fVar75 * (fVar49 + ((fVar53 - in_stack_00000128) - fVar54));
  fVar49 = (float)FUN_026fd46c(&stack0x00001770,0);
  fVar66 = *(float *)((long)unaff_x19 + 0x614) +
           ((fStack0000000000000134 + fVar75 * (fVar69 + in_stack_00000128 + fVar49)) -
           *(float *)(unaff_x19 + 0x9a));
  fVar49 = (float)FUN_026fd45c(&stack0x00001770,0);
  fVar70 = fVar66 - fVar75 * (in_stack_00000128 + in_stack_00000128 + fVar49);
  fVar49 = (float)FUN_026fd454(&stack0x00001770,0);
  fVar53 = fVar67 + (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
                    fVar75 * (fVar54 + fVar54 + in_stack_00000128 + in_stack_00000128 + fVar49);
  fVar49 = fVar67;
  fVar69 = fVar53;
  if (((*(int *)((long)unaff_x19 + 0x63c) == 0) && (cVar27 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x254) >> 1 & 1) != 0)) {
    fVar64 = (float)(int)unaff_x19[0xbd] * fStack000000000000004c;
    fVar49 = (float)FUN_026fd46c(&stack0x00001770,0);
    fVar57 = fVar64 * fVar75 * (fVar54 + in_stack_00000128 + fVar49);
    fVar49 = (float)FUN_026fd46c(&stack0x00001770,0);
    fVar69 = (float)FUN_026fd45c(&stack0x00001770,0);
    fVar66 = fVar66 + 0.0;
    fVar70 = fVar70 + 0.0;
    fVar64 = fVar64 * fVar75 * (((fVar49 - fVar69) - in_stack_00000128) - fVar54);
    fVar69 = fVar53 + fVar64;
    fVar49 = fVar67 + fVar57;
    fVar56 = (fVar57 - fVar64) * 0.5;
    fVar67 = (fVar67 + fVar64) - fVar56;
    fVar53 = (fVar53 + fVar57) - fVar56;
    fVar49 = fVar49 - fVar56;
    fVar69 = fVar69 - fVar56;
  }
  if (*(char *)((long)unaff_x19 + 0x46c) == '\0') {
    fVar57 = 0.0;
    fVar58 = 0.0;
    fVar68 = 0.0;
    fVar56 = 0.0;
    fVar77 = fVar70;
    fVar64 = fVar66;
    fStack00000000000000e8 = fVar49;
    fStack00000000000000ec = fVar67;
  }
  else {
    thunk_FUN_026935f0(_uStack0000000000000060,0);
    fVar71 = (fVar53 + fVar67) * 0.5;
    fVar74 = (fVar70 + fVar66) * 0.5;
    fVar66 = fVar66 - fVar74;
    fVar56 = 0.0;
    fVar64 = fVar66;
    fVar55 = (float)FUN_02692df0(fVar49 - fVar71,_uStack0000000000000060,0);
    fVar56 = fVar56 + 0.0;
    fVar70 = fVar70 - fVar74;
    fVar57 = 0.0;
    fVar49 = fVar70;
    fVar67 = (float)FUN_02692df0(fVar67 - fVar71,_uStack0000000000000060,0);
    fVar57 = fVar57 + 0.0;
    fVar68 = 0.0;
    fVar53 = (float)FUN_02692df0(fVar53 - fVar71,_uStack0000000000000060,0);
    fVar53 = fVar71 + fVar53;
    fVar66 = fVar74 + fVar66;
    fVar68 = fVar68 + 0.0;
    fVar58 = 0.0;
    fVar69 = (float)FUN_02692df0(fVar69 - fVar71,_uStack0000000000000060,0);
    fVar69 = fVar71 + fVar69;
    fVar70 = fVar74 + fVar70;
    fVar58 = fVar58 + 0.0;
    fVar77 = fVar74 + fVar49;
    fVar64 = fVar74 + fVar64;
    fStack00000000000000e8 = fVar71 + fVar55;
    fStack00000000000000ec = fVar71 + fVar67;
  }
  if (*in_stack_00000150 == 0) goto LAB_0249920c;
  lVar28 = *(long *)(*in_stack_00000150 + 0x38);
  unaff_d13 = (ulong)(uint)fVar75;
  if (lVar28 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar28 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar28 = lVar28 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar28 + 0x120) = fVar77;
  *(float *)(lVar28 + 0x11c) = fStack00000000000000ec;
  *(float *)(lVar28 + 0x124) = fVar57;
  if (*in_stack_00000150 == 0) goto LAB_0249920c;
  lVar28 = *(long *)(*in_stack_00000150 + 0x38);
  unaff_s12 = 1.0;
  if (lVar28 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar28 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar28 = lVar28 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar28 + 0x114) = fVar64;
  *(float *)(lVar28 + 0x110) = fStack00000000000000e8;
  *(float *)(lVar28 + 0x118) = fVar56;
  if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar28 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar28 = lVar28 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar28 + 0x128) = fVar53;
  *(float *)(lVar28 + 300) = fVar66;
  *(float *)(lVar28 + 0x130) = fVar68;
  if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar28 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar28 = lVar28 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar28 + 0x134) = fVar69;
  *(float *)(lVar28 + 0x138) = fVar70;
  *(float *)(lVar28 + 0x13c) = fVar58;
  if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0))
  goto LAB_0249920c;
  uVar19 = *in_stack_00000148;
  lVar31 = (long)(int)uVar19;
  if (*(uint *)(lVar28 + 0x18) <= uVar19)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar45 = lVar28 + lVar31 * unaff_x27;
  *(int *)(lVar45 + 0x140) = (int)unaff_x19[199];
  fVar69 = *(float *)(unaff_x19 + 0x9a);
  param_2 = (ulong)(uint)fVar69;
  fVar49 = *(float *)((long)unaff_x19 + 0x614);
  *(float *)(lVar45 + 0x15c) = (fVar53 - fStack00000000000000ec) / (fVar64 - fVar77);
  *(float *)(lVar45 + 0x14c) = (fStack0000000000000134 - fVar69) + fVar49;
  fVar51 = fVar51 * fVar75;
  if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
    fVar51 = fVar51 / fStack00000000000000f4;
    fVar72 = (fVar72 * fVar75) / fStack00000000000000f4;
  }
  else {
    fVar72 = fVar72 * fVar75;
  }
  uVar62 = *(uint *)(unaff_x19 + 0x92);
  bVar12 = uVar15 != 0;
  fVar51 = fVar49 + fVar51;
  bVar13 = uVar19 != uVar62;
  if (bVar13 && bVar12) {
    fVar49 = *(float *)(unaff_x19 + 0x98);
    lVar28 = lVar28 + lVar31 * unaff_x27;
    *(float *)(lVar28 + 0x154) = fVar49;
    fVar72 = *(float *)((long)unaff_x19 + 0x4c4);
    *(float *)(lVar28 + 0x148) = fVar49 - fVar69;
    *(float *)(lVar28 + 0x158) = fVar72;
    *(float *)(unaff_x19 + 0x97) = fVar49 - fVar69;
    fVar72 = fVar72 - fVar69;
    *(float *)(lVar28 + 0x150) = fVar72;
  }
  else {
    fVar72 = fVar49 + fVar72;
    fVar53 = fVar51;
    fVar66 = fVar72;
    if (fVar49 != 0.0) {
      fVar53 = (fVar51 - fVar49) / *(float *)((long)unaff_x19 + 0x3fc);
      fVar66 = (fVar72 - fVar49) / *(float *)((long)unaff_x19 + 0x3fc);
      if (fVar53 <= fVar51) {
        fVar53 = fVar51;
      }
      if (fVar72 <= fVar66) {
        fVar66 = fVar72;
      }
    }
    lVar28 = lVar28 + lVar31 * unaff_x27;
    fVar49 = fVar53;
    if (fVar53 <= *(float *)(unaff_x19 + 0x98)) {
      fVar49 = *(float *)(unaff_x19 + 0x98);
    }
    fVar70 = fVar66;
    if (*(float *)((long)unaff_x19 + 0x4c4) <= fVar66) {
      fVar70 = *(float *)((long)unaff_x19 + 0x4c4);
    }
    *(float *)((long)unaff_x19 + 0x4c4) = fVar70;
    fVar72 = fVar72 - fVar69;
    *(float *)(unaff_x19 + 0x98) = fVar49;
    *(float *)(lVar28 + 0x154) = fVar53;
    *(float *)(lVar28 + 0x158) = fVar66;
    *(float *)(lVar28 + 0x148) = fVar51 - fVar69;
    *(float *)(unaff_x19 + 0x97) = fVar51 - fVar69;
    *(float *)(lVar28 + 0x150) = fVar72;
  }
  *(float *)((long)unaff_x19 + 0x4bc) = fVar72;
  if (((int)unaff_x19[0x94] == 0) || (*(char *)((long)unaff_x19 + 0x334) != '\0')) {
    if (!bVar13 || !bVar12) {
      *(float *)(unaff_x19 + 0x96) = fVar49;
      if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
      fVar49 = *(float *)((long)unaff_x19 + 0x4b4);
      fVar69 = (float)FUN_026fd150(unaff_x19[0x1f] + 0x50,0);
      fStack00000000000000f4 = (fVar75 * fVar69) / fStack00000000000000f4;
      param_2 = (ulong)*(uint *)(unaff_x19 + 0x9a);
      if (fVar49 <= fStack00000000000000f4) {
        fVar49 = fStack00000000000000f4;
      }
      *(float *)((long)unaff_x19 + 0x4b4) = fVar49;
      goto LAB_02493948;
    }
  }
  else {
LAB_02493948:
    if ((!bVar13 || !bVar12) && (float)param_2 == 0.0) {
      fVar49 = *(float *)(in_stack_00000070 + 0x208);
      if (*(float *)(in_stack_00000070 + 0x208) <= fVar51) {
        fVar49 = fVar51;
      }
      *(float *)(in_stack_00000070 + 0x208) = fVar49;
    }
  }
  lVar28 = *in_stack_00000150;
  if ((lVar28 == 0) || (lVar31 = *(long *)(lVar28 + 0x38), lVar31 == 0)) goto LAB_0249920c;
  uVar37 = *in_stack_00000148;
  if (*(uint *)(lVar31 + 0x18) <= uVar37)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar31 = lVar31 + (int)uVar37 * unaff_x27;
  *(undefined1 *)(lVar31 + 0x194) = 0;
  uVar34 = *(uint *)(unaff_x19 + 0x4e);
  if ((in_stack_000017bc == 9) ||
     (((((uVar15 == 0 && (in_stack_000017bc != 3)) && (in_stack_000017bc != 0x200b)) &&
       (in_stack_000017bc != 0xad)) ||
      (((bool)(in_stack_000017bc == 0xad & (bVar11 ^ 1U)) ||
       (*(int *)((long)unaff_x19 + 0x63c) == 1)))))) {
    *(undefined1 *)(lVar31 + 0x194) = 1;
    pfVar32 = _fStack0000000000000088;
    pfVar35 = _fStack0000000000000098;
    if (bVar6) {
      lVar28 = *(long *)(lVar28 + 0x50);
      if (lVar28 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      pfVar35 = (float *)(lVar28 + 0x60);
      pfVar32 = (float *)(lVar28 + 100);
    }
    fVar69 = *pfVar35;
    fVar72 = *pfVar32;
    fVar49 = *(float *)(unaff_x19 + 0x6b);
    fVar51 = *(float *)(unaff_x19 + 199);
    fStack00000000000000d4 = (in_stack_00000090 - fVar69) - fVar72;
    bVar12 = true;
    if ((fVar49 <= fStack00000000000000d4) && (bVar12 = false, !NAN(fVar49))) {
      bVar12 = fVar49 == -1.0;
    }
    if (!bVar12) {
      fStack00000000000000d4 = fVar49;
    }
    fVar49 = 0.0;
    if ((char)unaff_x19[0x1d] == '\0') {
      fVar49 = (float)FUN_026fd474(&stack0x00001770,0);
      param_2 = (ulong)*(uint *)(unaff_x19 + 0x9a);
    }
    fVar70 = *(float *)((long)unaff_x19 + 0x4c4);
    fVar53 = *(float *)((long)unaff_x19 + 0x2cc);
    fVar66 = (float)param_2;
    if (in_stack_000017bc != 0xad) {
      fVar65 = fVar75;
    }
    fVar67 = 0.0;
    if ((0.0 < fVar66) && (fVar67 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
      fVar67 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
    }
    fVar67 = (*(float *)(unaff_x19 + 0x96) - (fVar70 - fVar66)) + fVar67;
    uVar37 = *in_stack_00000148;
    if (fStack00000000000000a4 < fVar67) {
      if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
        *(uint *)((long)unaff_x19 + 0x2dc) = uVar37;
      }
      plVar47 = (long *)StringLiteral_302;
      plVar43 = (long *)System_Threading_Mutex_TypeInfo;
      uVar20 = DAT_02941c08;
      if ((char)unaff_x19[0x46] != '\0') {
        fVar64 = *(float *)(unaff_x19 + 0x58);
        if (((fVar64 < *(float *)((long)unaff_x19 + 0x2b4)) && (0.0 < fVar66)) &&
           (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
          fVar65 = *(float *)((long)unaff_x19 + 0x2b4) +
                   ((in_stack_00000018._4_4_ - fVar67) / (float)(int)unaff_x19[0x94]) /
                   fStack0000000000000054;
          if (fVar65 <= fVar64) {
            fVar65 = fVar64;
          }
          goto LAB_024964c8;
        }
        fVar67 = *(float *)((long)unaff_x19 + 0x1dc);
        fVar66 = *(float *)(unaff_x19 + 0x49);
        param_2 = (ulong)(uint)fVar66;
        if ((fVar66 < fVar67) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
          fVar65 = (fVar67 - *(float *)(unaff_x19 + 0x47)) * 0.5;
          if (fVar65 <= DAT_028aa298) {
            fVar65 = DAT_028aa298;
          }
          fVar75 = (fVar67 - fVar65) * 20.0 + 0.5;
          fVar65 = DAT_02958220;
          if (fVar75 != INFINITY) {
            fVar65 = (float)(int)fVar75 / 20.0;
          }
          if (fVar65 <= fVar66) {
            fVar65 = fVar66;
          }
          *(float *)((long)unaff_x19 + 0x234) = fVar67;
          goto LAB_02495fd8;
        }
      }
      switch((int)unaff_x19[0x5b]) {
      case 1:
        lVar28 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar28 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar28 = *plVar43;
        }
        lVar31 = *(long *)(lVar28 + 0xb8);
        lVar28 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
        if ((*(byte *)(lVar28 + 0x132) & 1) == 0) {
          lVar28 = FUN_00d5941c(lVar28);
        }
        plVar47 = (long *)StringLiteral_302;
        lVar28 = *(long *)(*(long *)(lVar28 + 0xc0) + 8);
        if ((*(byte *)(lVar28 + 0x132) & 1) == 0) {
          lVar28 = FUN_00d5941c();
        }
        piVar24 = (int *)thunk_FUN_00d32ed4(lVar31 + 0x11f0,*(long *)(lVar28 + 0x80) + 0xa0);
        if (*piVar24 == 0) goto LAB_02495f00;
        lVar28 = *plVar43;
        if (*(int *)(lVar28 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar28 = *plVar43;
        }
        FUN_013b8de4(*(long *)(lVar28 + 0xb8) + 0x11f0,&stack0x00000880,
                     *(undefined8 *)
                      Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                    );
        memcpy(&stack0x00001360,&stack0x00000880,0x378);
LAB_02494358:
        iVar16 = FUN_024d66ec();
        goto LAB_02494364;
      default:
        goto 
        UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor__get_playHapticsOnHoverExited;
      case 3:
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
LAB_02493ec0:
        plVar47 = (long *)StringLiteral_302;
        in_stack_00001788 = FUN_024d66ec();
        break;
      case 5:
        if ((uVar37 == 0) || ((int)in_stack_00001788 < 0)) {
          *in_stack_00000148 = 0;
          plVar47 = (long *)StringLiteral_302;
          plVar43 = (long *)System_Threading_Mutex_TypeInfo;
          in_stack_00001788 = 0xffffffff;
          in_stack_000017a8 = uVar20;
          goto LAB_02492630;
        }
        fVar65 = *(float *)(unaff_x19 + 0x98);
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        if (fVar65 - fVar70 <= fStack00000000000000a4) {
          *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
          *(undefined4 *)(unaff_x19 + 0x92) = *(undefined4 *)((long)unaff_x19 + 0x48c);
          param_2 = *(ulong *)(*(long *)(*plVar43 + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
          *(undefined4 *)(unaff_x19 + 0x99) = 0;
          lVar28 = NEON_rev64(param_2,4);
          unaff_x19[0x98] = lVar28;
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
          *(int *)(unaff_x19 + 0x94) = (int)unaff_x19[0x94] + 1;
          *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
          goto LAB_02492630;
        }
        break;
      case 6:
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        plVar47 = (long *)StringLiteral_302;
        lVar28 = unaff_x19[0x5c];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            );
        }
        uVar22 = FUN_02681b9c(lVar28,0,0);
        if ((uVar22 & 1) != 0) {
          plVar46 = (long *)unaff_x19[0x5c];
          uVar20 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar46 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar46 + 0x558))(plVar46,uVar20,*(undefined8 *)(*plVar46 + 0x560));
          lVar28 = unaff_x19[0x5c];
          if (lVar28 == 0) goto LAB_0249920c;
          *(int *)(lVar28 + 0x3f8) = (int)unaff_x19[0x7f];
          FUN_024c910c(lVar28,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
          plVar46 = (long *)unaff_x19[0x5c];
          if (plVar46 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar46 + 0x7d8))(plVar46,0,0,*(undefined8 *)(*plVar46 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        }
      }
      goto LAB_0249408c;
    }
UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor__get_playHapticsOnHoverExited:
    plVar43 = (long *)System_Threading_Mutex_TypeInfo;
    fVar66 = 1.0 - fVar53;
    param_2 = (ulong)(uint)fVar66;
    fVar49 = ABS(fVar51) + fVar49 * fVar66 * fVar65;
    fVar65 = _DAT_0294c6e8;
    if ((uVar34 & 0x18) == 0) {
      fVar65 = 1.0;
    }
    if (fVar65 * fStack00000000000000d4 < fVar49) {
      if (((char)unaff_x19[0x5a] == '\0') || (uVar37 == *(uint *)(unaff_x19 + 0x92))) {
        if (((char)unaff_x19[0x46] != '\0') &&
           (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
          fVar51 = *(float *)(unaff_x19 + 0x59) / 100.0;
          if (fVar53 < fVar51) {
            fVar75 = fVar49 / fVar66;
            if (fVar53 <= 0.0) {
              fVar75 = fVar49;
            }
            fVar53 = fVar53 + (fVar49 - fVar65 * (fStack00000000000000d4 + DAT_02958218)) / fVar75;
            goto LAB_0249929c;
          }
          fVar53 = *(float *)((long)unaff_x19 + 0x1dc);
          param_2 = (ulong)(uint)fVar53;
          fVar51 = *(float *)(unaff_x19 + 0x49);
          if (fVar51 < fVar53) {
LAB_02499210:
            fVar65 = (fVar53 - *(float *)(unaff_x19 + 0x47)) * 0.5;
            if (fVar65 <= DAT_028aa298) {
              fVar65 = DAT_028aa298;
            }
            *(float *)((long)unaff_x19 + 0x234) = fVar53;
            fVar75 = (fVar53 - fVar65) * 20.0 + 0.5;
            fVar65 = DAT_02958220;
            if (fVar75 != INFINITY) {
              fVar65 = (float)(int)fVar75 / 20.0;
            }
            if (fVar65 <= fVar51) {
              fVar65 = fVar51;
            }
LAB_02495fd8:
            *(float *)((long)unaff_x19 + 0x1dc) = fVar65;
            return;
          }
        }
        iVar14 = (int)unaff_x19[0x5b];
        if (iVar14 == 1) {
          lVar28 = *(long *)System_Threading_Mutex_TypeInfo;
          if (*(int *)(lVar28 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar28 = *plVar43;
          }
          plVar47 = (long *)StringLiteral_302;
          lVar31 = *(long *)(lVar28 + 0xb8);
          lVar28 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
          if ((*(byte *)(lVar28 + 0x132) & 1) == 0) {
            lVar28 = FUN_00d5941c(lVar28);
          }
          lVar28 = *(long *)(*(long *)(lVar28 + 0xc0) + 8);
          if ((*(byte *)(lVar28 + 0x132) & 1) == 0) {
            lVar28 = FUN_00d5941c();
          }
          piVar24 = (int *)thunk_FUN_00d32ed4(lVar31 + 0x11f0,*(long *)(lVar28 + 0x80) + 0xa0);
          if (*piVar24 == 0) goto LAB_02495f00;
          lVar28 = *plVar43;
          if (*(int *)(lVar28 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar28 = *plVar43;
          }
          FUN_013b8de4(*(long *)(lVar28 + 0xb8) + 0x11f0,&stack0x00000880,
                       *(undefined8 *)
                        Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                      );
          memcpy(&stack0x00000c70,&stack0x00000880,0x378);
          goto LAB_02494358;
        }
        if (iVar14 == 6) {
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          plVar47 = (long *)StringLiteral_302;
          in_stack_00001788 = FUN_024d66ec();
          lVar28 = unaff_x19[0x5c];
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              );
          }
          uVar22 = FUN_02681b9c(lVar28,0,0);
          if ((uVar22 & 1) != 0) {
            plVar46 = (long *)unaff_x19[0x5c];
            uVar20 = (**(code **)(*unaff_x19 + 0x548))();
            if (plVar46 == (long *)0x0) goto LAB_0249920c;
            (**(code **)(*plVar46 + 0x558))(plVar46,uVar20,*(undefined8 *)(*plVar46 + 0x560));
            lVar28 = unaff_x19[0x5c];
            if (lVar28 == 0) goto LAB_0249920c;
            *(int *)(lVar28 + 0x3f8) = (int)unaff_x19[0x7f];
            FUN_024c910c(lVar28,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
            plVar46 = (long *)unaff_x19[0x5c];
            if (plVar46 == (long *)0x0) goto LAB_0249920c;
            (**(code **)(*plVar46 + 0x7d8))(plVar46,0,0,*(undefined8 *)(*plVar46 + 0x7e0));
            *(undefined1 *)(unaff_x19 + 0x5e) = 1;
          }
          goto LAB_02494484;
        }
        if (iVar14 == 3) {
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          goto LAB_02493ec0;
        }
      }
      else {
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
          lVar28 = *in_stack_00000150;
          if ((lVar28 == 0) || (lVar31 = *(long *)(lVar28 + 0x38), lVar31 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar31 + 0x18) <= *in_stack_00000148)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar51 = *(float *)(unaff_x19 + 0x9a);
          fVar53 = 0.0;
          if ((0.0 < fVar51) && (fVar53 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
            fVar53 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
          }
          fVar53 = in_stack_000000c8 * *(float *)(unaff_x19 + 0x56) +
                   *(float *)(lVar31 + (int)*in_stack_00000148 * unaff_x27 + 0x154) +
                   (fVar53 - *(float *)((long)unaff_x19 + 0x4c4)) +
                   fStack0000000000000054 *
                   (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4));
        }
        else {
          lVar28 = unaff_x19[0x6c];
          *(undefined1 *)((long)unaff_x19 + 700) = 1;
          if (lVar28 == 0) goto LAB_0249920c;
          fVar51 = *(float *)(unaff_x19 + 0x9a);
          fVar53 = *(float *)(unaff_x19 + 0x57) + in_stack_000000c8 * *(float *)(unaff_x19 + 0x56);
        }
        puVar9 = System_Threading_Mutex_TypeInfo;
        lVar28 = *(long *)(lVar28 + 0x38);
        if (lVar28 == 0) goto LAB_0249920c;
        uVar44 = *(uint *)((long)unaff_x19 + 0x48c);
        if ((*(uint *)(lVar28 + 0x18) <= uVar44) ||
           (uVar5 = uVar44 - 1, *(uint *)(lVar28 + 0x18) <= uVar5))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        param_2 = (ulong)(uint)(fVar53 + *(float *)(unaff_x19 + 0x96));
        fVar66 = (fVar53 + *(float *)(unaff_x19 + 0x96) + fVar51) -
                 *(float *)(lVar28 + (int)uVar44 * unaff_x27 + 0x158);
        if ((!bVar11 && *(short *)(lVar28 + (long)(int)uVar5 * (long)iVar16 + 0x20) == 0xad) &&
           ((fVar66 < fStack00000000000000a4 || ((int)unaff_x19[0x5b] == 0)))) {
          *in_stack_00000148 = uVar5;
LAB_024947b4:
          in_stack_000017a8 = CONCAT44(0x2d,uVar5);
          in_stack_00001788 = in_stack_00001788 - 1;
          bVar11 = false;
LAB_02494938:
          unaff_s12 = 1.0;
          plVar47 = (long *)StringLiteral_302;
          plVar43 = (long *)System_Threading_Mutex_TypeInfo;
          goto LAB_02492630;
        }
        if (*(short *)(lVar28 + (int)uVar44 * unaff_x27 + 0x20) == 0xad) {
          bVar11 = true;
          goto LAB_02494938;
        }
        if ((bVar8 & *(byte *)(unaff_x19 + 0x46)) != 0) {
          fVar53 = *(float *)((long)unaff_x19 + 0x2cc);
          fVar51 = *(float *)(unaff_x19 + 0x59) / 100.0;
          if ((fVar51 <= fVar53) || ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c))) {
            fVar53 = *(float *)((long)unaff_x19 + 0x1dc);
            param_2 = (ulong)(uint)fVar53;
            fVar51 = *(float *)(unaff_x19 + 0x49);
            if ((fVar51 < fVar53) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
            goto LAB_02499210;
            goto LAB_024946c0;
          }
LAB_024992ac:
          fVar75 = fVar49;
          if (0.0 < fVar53) {
            fVar75 = fVar49 / (1.0 - fVar53);
          }
          fVar53 = fVar53 + (fVar49 - fVar65 * (fStack00000000000000d4 + DAT_02958218)) / fVar75;
LAB_0249929c:
          if (fVar51 <= fVar53) {
            fVar53 = fVar51;
          }
          *(float *)((long)unaff_x19 + 0x2cc) = fVar53;
          return;
        }
LAB_024946c0:
        lVar28 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar28 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar28 = *(long *)puVar9;
        }
        iVar14 = *(int *)(*(long *)(lVar28 + 0xb8) + 0xe78);
        if ((((float)iVar14 != fStack0000000000000034) && (iVar14 != -1)) && (bVar8 == 1)) {
          if (*(int *)(lVar28 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          in_stack_00001788 = FUN_024d66ec();
          if ((unaff_x19[0x6c] == 0) || (lVar28 = *(long *)(unaff_x19[0x6c] + 0x38), lVar28 == 0))
          goto LAB_0249920c;
          uVar5 = *in_stack_00000148 - 1;
          if (*(uint *)(lVar28 + 0x18) <= uVar5)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fStack0000000000000034 = (float)iVar14;
          if (*(short *)(lVar28 + (long)(int)uVar5 * (long)iVar16 + 0x20) == 0xad) {
            *in_stack_00000148 = uVar5;
            goto LAB_024947b4;
          }
        }
        if (fVar66 <= fStack00000000000000a4) {
          param_2 = unaff_d13;
          FUN_024d7014(fStack0000000000000054,unaff_d13,in_stack_000000c8,
                       *(undefined4 *)((long)unaff_x19 + 0x2f4),fVar73,fStack00000000000000cc,
                       fStack00000000000000d4,fStack0000000000000048);
          bVar8 = 1;
          bVar11 = false;
          bVar7 = true;
          goto LAB_02494938;
        }
        if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
          *(undefined4 *)((long)unaff_x19 + 0x2dc) = *(undefined4 *)((long)unaff_x19 + 0x48c);
        }
        plVar47 = (long *)StringLiteral_302;
        plVar43 = (long *)System_Threading_Mutex_TypeInfo;
        if ((char)unaff_x19[0x46] != '\0') {
          fVar51 = *(float *)(unaff_x19 + 0x58);
          if ((fVar51 < *(float *)((long)unaff_x19 + 0x2b4)) &&
             (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
            fVar65 = *(float *)((long)unaff_x19 + 0x2b4) +
                     ((in_stack_00000018._4_4_ - fVar66) / (float)((int)unaff_x19[0x94] + 1)) /
                     fStack0000000000000054;
            if (fVar65 <= fVar51) {
              fVar65 = fVar51;
            }
LAB_024964c8:
            *(float *)((long)unaff_x19 + 0x2b4) = fVar65;
            return;
          }
          fVar53 = *(float *)((long)unaff_x19 + 0x2cc);
          fVar51 = *(float *)(unaff_x19 + 0x59) / 100.0;
          if ((fVar53 < fVar51) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
          goto LAB_024992ac;
          fVar53 = *(float *)((long)unaff_x19 + 0x1dc);
          param_2 = (ulong)(uint)fVar53;
          fVar51 = *(float *)(unaff_x19 + 0x49);
          if ((fVar51 < fVar53) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
          goto LAB_02499210;
        }
        unaff_s12 = 1.0;
        switch((int)unaff_x19[0x5b]) {
        case 0:
        case 2:
        case 4:
          goto switchD_02494884_caseD_0;
        case 1:
          lVar28 = *(long *)System_Threading_Mutex_TypeInfo;
          if (*(int *)(lVar28 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar28 = *plVar43;
          }
          lVar31 = *(long *)(lVar28 + 0xb8);
          lVar28 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
          if ((*(byte *)(lVar28 + 0x132) & 1) == 0) {
            lVar28 = FUN_00d5941c(lVar28);
          }
          lVar28 = *(long *)(*(long *)(lVar28 + 0xc0) + 8);
          if ((*(byte *)(lVar28 + 0x132) & 1) == 0) {
            lVar28 = FUN_00d5941c();
          }
          piVar24 = (int *)thunk_FUN_00d32ed4(lVar31 + 0x11f0,*(long *)(lVar28 + 0x80) + 0xa0);
          if (*piVar24 == 0) {
            bVar11 = false;
LAB_02495f00:
            in_stack_000017a8 = DAT_02941c08;
            unaff_s12 = 1.0;
            in_stack_00000148[0] = 0;
            in_stack_00000148[1] = 0;
            in_stack_00001788 = 0xffffffff;
            goto LAB_02492630;
          }
          lVar28 = *plVar43;
          if (*(int *)(lVar28 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar28 = *plVar43;
          }
          FUN_013b8de4(*(long *)(lVar28 + 0xb8) + 0x11f0,&stack0x00000880,
                       *(undefined8 *)
                        Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                      );
          memcpy(&stack0x00000fe8,&stack0x00000880,0x378);
          iVar16 = FUN_024d66ec();
          bVar11 = false;
LAB_02494364:
          unaff_s12 = 1.0;
          iVar14 = *(int *)((long)unaff_x19 + 0x48c) + -1;
          *(int *)((long)unaff_x19 + 0x48c) = iVar14;
          in_stack_00000140 = in_stack_00000140 + 1;
          in_stack_00001788 = iVar16 - 1;
          in_stack_000017a8 = CONCAT44(0x2026,iVar14);
          goto LAB_02492630;
        case 3:
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          in_stack_00001788 = FUN_024d66ec();
          bVar11 = false;
LAB_0249408c:
          unaff_s12 = 1.0;
          in_stack_000017a8 = CONCAT44(3,uVar37);
          goto LAB_02492630;
        case 5:
          goto switchD_02494884_caseD_5;
        case 6:
          lVar28 = unaff_x19[0x5c];
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar22 = FUN_02681b9c(lVar28,0,0);
          if ((uVar22 & 1) != 0) {
            plVar46 = (long *)unaff_x19[0x5c];
            uVar20 = (**(code **)(*unaff_x19 + 0x548))();
            if (plVar46 == (long *)0x0) goto LAB_0249920c;
            (**(code **)(*plVar46 + 0x558))(plVar46,uVar20,*(undefined8 *)(*plVar46 + 0x560));
            lVar28 = unaff_x19[0x5c];
            if (lVar28 == 0) goto LAB_0249920c;
            *(int *)(lVar28 + 0x3f8) = (int)unaff_x19[0x7f];
            FUN_024c910c(lVar28,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
            plVar46 = (long *)unaff_x19[0x5c];
            if (plVar46 == (long *)0x0) goto LAB_0249920c;
            (**(code **)(*plVar46 + 0x7d8))(plVar46,0,0,*(undefined8 *)(*plVar46 + 0x7e0));
            *(undefined1 *)(unaff_x19 + 0x5e) = 1;
          }
          bVar11 = false;
LAB_02494484:
          unaff_s12 = 1.0;
          in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
          goto LAB_02492630;
        default:
          bVar11 = false;
        }
      }
    }
    if (in_stack_000017bc == 0xad) {
      if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar28 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      *(undefined1 *)(lVar28 + (int)*in_stack_00000148 * unaff_x27 + 0x194) = 0;
    }
    else {
      if (in_stack_000017bc == 9) {
        lVar28 = *in_stack_00000150;
        if ((lVar28 == 0) || (lVar31 = *(long *)(lVar28 + 0x38), lVar31 == 0)) goto LAB_0249920c;
        uVar37 = *in_stack_00000148;
        if (*(uint *)(lVar31 + 0x18) <= uVar37)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        *(undefined1 *)(lVar31 + (int)uVar37 * unaff_x27 + 0x194) = 0;
        *(uint *)((long)unaff_x19 + 0x49c) = uVar37;
        lVar31 = *(long *)(lVar28 + 0x50);
        if (lVar31 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar31 = lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
        *(int *)(lVar31 + 0x2c) = *(int *)(lVar31 + 0x2c) + 1;
        goto LAB_024949c4;
      }
      if (*(int *)((long)unaff_x19 + 0x63c) == 1) {
        (**(code **)(*unaff_x19 + 0x8c8))();
      }
      else if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
        (**(code **)(*unaff_x19 + 0x8b8))(in_stack_00000128,fVar54);
      }
      uVar37 = *in_stack_00000148;
      if (bVar7) {
        *(uint *)(in_stack_00000070 + 0x1f0) = uVar37;
      }
      *(uint *)((long)unaff_x19 + 0x49c) = uVar37;
      *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
      if ((unaff_x19[0x6c] == 0) || (lVar28 = *(long *)(unaff_x19[0x6c] + 0x50), lVar28 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      bVar7 = false;
      *(float *)(lVar28 + 0x60) = fVar69;
      *(float *)(lVar28 + 100) = fVar72;
    }
  }
  else {
    if (((in_stack_000017bc & 0xfffffffe) == 10) && ((int)unaff_x19[0x5b] == 6)) {
      fVar49 = (float)param_2;
      fVar65 = 0.0;
      if ((0.0 < fVar49) && (fVar65 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
        fVar65 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
      }
      param_2 = (ulong)(uint)fStack00000000000000a4;
      if (fStack00000000000000a4 <
          (*(float *)(unaff_x19 + 0x96) - (*(float *)((long)unaff_x19 + 0x4c4) - fVar49)) + fVar65)
      {
        if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
          *(uint *)((long)unaff_x19 + 0x2dc) = uVar37;
        }
        plVar47 = (long *)StringLiteral_302;
        plVar43 = (long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        lVar28 = unaff_x19[0x5c];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            );
        }
        uVar22 = FUN_02681b9c(lVar28,0,0);
        if ((uVar22 & 1) != 0) {
          plVar46 = (long *)unaff_x19[0x5c];
          uVar20 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar46 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar46 + 0x558))(plVar46,uVar20,*(undefined8 *)(*plVar46 + 0x560));
          lVar28 = unaff_x19[0x5c];
          if (lVar28 == 0) goto LAB_0249920c;
          *(int *)(lVar28 + 0x3f8) = (int)unaff_x19[0x7f];
          FUN_024c910c(lVar28,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
          plVar46 = (long *)unaff_x19[0x5c];
          if (plVar46 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar46 + 0x7d8))(plVar46,0,0,*(undefined8 *)(*plVar46 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        }
        in_stack_000017a8 = CONCAT44(3,uVar37);
        goto LAB_02492630;
      }
    }
    if ((((in_stack_000017bc - 0x2007 < 0x23) &&
         ((1L << ((ulong)(in_stack_000017bc - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
        (in_stack_000017bc - 10 < 2)) || (in_stack_000017bc == 0xa0)) {
LAB_024944e4:
      if (((in_stack_000017bc != 0xad) && (in_stack_000017bc != 0x200b)) &&
         (in_stack_000017bc != 0x2060)) {
        lVar28 = *in_stack_00000150;
        if ((lVar28 == 0) || (lVar31 = *(long *)(lVar28 + 0x50), lVar31 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar31 = lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
        *(int *)(lVar31 + 0x2c) = *(int *)(lVar31 + 0x2c) + 1;
        *(int *)(lVar28 + 0x20) = *(int *)(lVar28 + 0x20) + 1;
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
      if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x50), lVar28 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
LAB_024949c4:
      *(int *)(lVar28 + 0x20) = *(int *)(lVar28 + 0x20) + 1;
    }
  }
  if (((int)unaff_x19[0x5b] == 1) && ((in_stack_000017bc == 0x2d || (!bVar6)))) {
    if (unaff_x19[0xca] == 0) goto LAB_0249920c;
    fVar65 = *(float *)(unaff_x19 + 0x3c);
    iVar14 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
    if (unaff_x19[0xca] == 0) goto LAB_0249920c;
    fVar69 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
    lVar28 = unaff_x19[0xc9];
    fVar49 = fStack0000000000000084;
    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
      fVar49 = 1.0;
    }
    if ((lVar28 == 0) || (*(long *)(lVar28 + 0x20) == 0)) goto LAB_0249920c;
    fVar51 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar54 = *(float *)(lVar28 + 0x2c);
    fVar72 = (float)FUN_026fd668(*(long *)(lVar28 + 0x20),0);
    fVar53 = *_fStack0000000000000098;
    fVar72 = fVar51 * (fVar65 / (float)iVar14) * fVar69 * fVar49 * fVar54 * fVar72;
    fVar65 = *_fStack0000000000000088;
    if ((in_stack_000017bc == 10) && (*(int *)((long)unaff_x19 + 0x48c) != (int)unaff_x19[0x92])) {
      if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x38), lVar28 == 0))
      goto LAB_0249920c;
      uVar37 = *(int *)((long)unaff_x19 + 0x48c) - 1;
      if (*(uint *)(lVar28 + 0x18) <= uVar37)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (unaff_x19[0xca] == 0) goto LAB_0249920c;
      fVar49 = *(float *)(lVar28 + (long)(int)uVar37 * (long)iVar16 + 0x60);
      iVar14 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
      if (unaff_x19[0xca] == 0) goto LAB_0249920c;
      fVar51 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
      lVar28 = unaff_x19[0xc9];
      fVar69 = fStack0000000000000084;
      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
        fVar69 = 1.0;
      }
      if ((lVar28 == 0) || (*(long *)(lVar28 + 0x20) == 0)) goto LAB_0249920c;
      fVar54 = *(float *)((long)unaff_x19 + 0x3fc);
      fVar66 = *(float *)(lVar28 + 0x2c);
      fVar72 = (float)FUN_026fd668(*(long *)(lVar28 + 0x20),0);
      if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x50), lVar28 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar28 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = lVar28 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      fVar53 = *(float *)(lVar28 + 0x60);
      fVar65 = *(float *)(lVar28 + 100);
      fVar72 = fVar54 * (fVar49 / (float)iVar14) * fVar51 * fVar69 * fVar66 * fVar72;
    }
    fVar54 = *(float *)(unaff_x19 + 0x9a);
    fVar69 = *(float *)(unaff_x19 + 0x96);
    fVar66 = *(float *)((long)unaff_x19 + 0x4c4);
    fVar49 = 0.0;
    fVar51 = 0.0;
    if ((0.0 < fVar54) && (fVar51 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
      fVar51 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
    }
    fVar70 = *(float *)(unaff_x19 + 199);
    if ((char)unaff_x19[0x1d] == '\0') {
      if ((unaff_x19[0xc9] == 0) || (lVar28 = *(long *)(unaff_x19[0xc9] + 0x20), lVar28 == 0))
      goto LAB_0249920c;
      FUN_026fd62c(&stack0x00000880,lVar28,0);
      fVar49 = (float)FUN_026fd474(&stack0x000016e0,0);
    }
    puVar9 = System_Threading_Mutex_TypeInfo;
    fVar67 = *(float *)(unaff_x19 + 0x6b);
    fVar65 = (in_stack_00000090 - fVar53) - fVar65;
    bVar12 = true;
    if ((fVar67 <= fVar65) && (bVar12 = false, !NAN(fVar67))) {
      bVar12 = fVar67 == -1.0;
    }
    if (!bVar12) {
      fVar65 = fVar67;
    }
    fVar53 = _DAT_0294c6e8;
    if ((uVar34 & 0x18) == 0) {
      fVar53 = 1.0;
    }
    if (((fVar69 - (fVar66 - fVar54)) + fVar51 < fStack00000000000000a4) &&
       (ABS(fVar70) + fVar72 * fVar49 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) <
        fVar53 * fVar65)) {
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_024d69d4();
      lVar28 = *(long *)(*(long *)puVar9 + 0xb8);
      memcpy(&stack0x00000508,(void *)(lVar28 + 0x788),0x378);
      FUN_013b86dc(lVar28 + 0x11f0,&stack0x00000508,
                   *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__);
    }
  }
  unaff_d13 = (ulong)(uint)fVar75;
  unaff_s12 = 1.0;
  lVar28 = *in_stack_00000150;
  if ((lVar28 == 0) || (lVar31 = *(long *)(lVar28 + 0x38), lVar31 == 0)) goto LAB_0249920c;
  if (*(uint *)(lVar31 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  uVar37 = *(uint *)(unaff_x19 + 0x94);
  lVar31 = lVar31 + (int)*in_stack_00000148 * unaff_x27;
  *(uint *)(lVar31 + 100) = uVar37;
  *(int *)(lVar31 + 0x68) = (int)unaff_x19[0x95];
  if ((bVar6) ||
     ((in_stack_000017bc < 0xe && ((1 << (ulong)(in_stack_000017bc & 0x1f) & 0x2c00U) != 0)))) {
    lVar28 = *(long *)(lVar28 + 0x50);
    if (lVar28 == 0) goto LAB_0249920c;
    if (*(uint *)(lVar28 + 0x18) <= uVar37)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if (*(int *)(lVar28 + (long)(int)uVar37 * 0x5c + 0x24) == 1) goto LAB_02494e68;
  }
  else {
    lVar28 = *(long *)(lVar28 + 0x50);
    if (lVar28 == 0) goto LAB_0249920c;
LAB_02494e68:
    if (*(uint *)(lVar28 + 0x18) <= uVar37)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(int *)(lVar28 + (long)(int)uVar37 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
  }
  if (in_stack_000017bc == 9) {
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar65 = (float)FUN_026fd208(*in_stack_00000138 + 0x50,0);
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar69 = *(float *)(unaff_x19 + 199);
    fVar49 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000138 + 0x1b9));
    fVar65 = fVar75 * fVar65 * fVar49;
    fVar49 = fVar65 * (float)(int)(fVar69 / fVar65);
    param_2 = (ulong)(uint)fVar49;
    if (fVar49 <= fVar69) {
      fVar49 = fVar69 + fVar65;
    }
LAB_02495058:
    *(float *)(unaff_x19 + 199) = fVar49;
  }
  else if (*(float *)(unaff_x19 + 0x55) == 0.0) {
    if ((char)unaff_x19[0x1d] == '\0') {
      fVar69 = unaff_s12;
      if (*(char *)((long)unaff_x19 + 0x46c) != '\0') {
        fVar69 = (float)thunk_FUN_026935f0(_uStack0000000000000060,0);
      }
      fVar49 = *(float *)(unaff_x19 + 199);
      fVar72 = (float)FUN_026fd474(&stack0x00001770,0);
      if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
      fVar65 = 1.0 - *(float *)((long)unaff_x19 + 0x2cc);
      fVar49 = fVar49 + fVar65 * (*(float *)((long)unaff_x19 + 0x2a4) +
                                 fVar75 * (fVar50 + fVar69 * fVar72) +
                                 in_stack_000000c8 *
                                 (fVar73 + fStack00000000000000cc +
                                           *(float *)(unaff_x19[0x1f] + 0x1ac)));
      *(float *)(unaff_x19 + 199) = fVar49;
      goto joined_r0x02494fac;
    }
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar49 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (*(float *)((long)unaff_x19 + 0x2a4) +
             fVar75 * fVar50 +
             in_stack_000000c8 *
             (fVar73 + fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac)));
    param_2 = (ulong)(uint)fVar49;
    fVar49 = *(float *)(unaff_x19 + 199) - fVar49;
    *(float *)(unaff_x19 + 199) = fVar49;
    if ((uVar15 != 0) || (in_stack_000017bc == 0x200b)) {
      fVar65 = in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
      param_2 = (ulong)(uint)fVar65;
      fVar49 = fVar49 - fVar65;
      goto LAB_02495058;
    }
  }
  else {
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar65 = *(float *)(unaff_x19 + 199);
    fVar49 = fVar65 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                      (*(float *)((long)unaff_x19 + 0x2a4) +
                      (*(float *)(unaff_x19 + 0x55) - fVar52) +
                      in_stack_000000c8 *
                      (fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac)));
    *(float *)(unaff_x19 + 199) = fVar49;
joined_r0x02494fac:
    if ((uVar15 != 0) || (param_2 = (ulong)(uint)fVar65, in_stack_000017bc == 0x200b)) {
      fVar65 = in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
      param_2 = (ulong)(uint)fVar65;
      fVar49 = fVar49 + fVar65;
      goto LAB_02495058;
    }
  }
  lVar28 = *in_stack_00000150;
  if ((lVar28 == 0) || (lVar31 = *(long *)(lVar28 + 0x38), lVar31 == 0)) goto LAB_0249920c;
  uVar37 = *in_stack_00000148;
  uVar34 = (uint)*(undefined8 *)(lVar31 + 0x18);
  if (uVar34 <= uVar37) goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  *(float *)(lVar31 + (int)uVar37 * unaff_x27 + 0x144) = fVar49;
  uVar44 = in_stack_000017bc;
  if ((int)in_stack_000017bc < 0xd) {
    if ((in_stack_000017bc - 10 < 2) || (in_stack_000017bc == 3)) goto LAB_024950bc;
FUN_02495710:
    if (((bool)(bVar6 & in_stack_000017bc == 0x2d)) || ((float)uVar37 == in_stack_00000078._4_4_))
    goto LAB_024950bc;
  }
  else {
    if (1 < in_stack_000017bc - 0x2028) {
      if (in_stack_000017bc != 0xd) goto FUN_02495710;
      param_2 = 0;
      *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
      if ((float)uVar37 != in_stack_00000078._4_4_) goto LAB_0249572c;
    }
LAB_024950bc:
    if (0.0 < *(float *)(unaff_x19 + 0x9a)) {
      fVar65 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
      if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (((fStack000000000000004c < ABS(fVar65)) && (*(char *)((long)unaff_x19 + 700) == '\0')) &&
         (*(char *)((long)unaff_x19 + 0x334) == '\0')) {
        FUN_024d6ca8(fVar65);
        *(float *)((long)unaff_x19 + 0x4bc) = *(float *)((long)unaff_x19 + 0x4bc) - fVar65;
        *(float *)(unaff_x19 + 0x9a) = fVar65 + *(float *)(unaff_x19 + 0x9a);
        puVar9 = System_Threading_Mutex_TypeInfo;
        lVar28 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar28 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar28 = *(long *)puVar9;
        }
        lVar31 = *(long *)(lVar28 + 0xb8);
        if (*(int *)(lVar31 + 0x7ac) == (int)unaff_x19[0x94]) {
          if (*(int *)(lVar28 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar31 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          FUN_013b8de4(lVar31 + 0x11f0,&stack0x00000880,
                       *(undefined8 *)
                        Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                      );
          lVar28 = *(long *)System_Threading_Mutex_TypeInfo;
          memcpy((void *)(*(long *)(lVar28 + 0xb8) + 0x788),&stack0x00000880,0x378);
          lVar28 = *(long *)(lVar28 + 0xb8);
          *(float *)(lVar28 + 0x7bc) = fVar65 + *(float *)(lVar28 + 0x7bc);
          *(float *)(lVar28 + 0x800) = fVar65 + *(float *)(lVar28 + 0x800);
          memcpy(&stack0x00000190,(void *)(lVar28 + 0x788),0x378);
          FUN_013b86dc(lVar28 + 0x11f0,&stack0x00000190,
                       *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__);
        }
      }
    }
    fVar69 = *(float *)(unaff_x19 + 0x9a);
    *(undefined1 *)((long)unaff_x19 + 0x334) = 0;
    fVar49 = *(float *)((long)unaff_x19 + 0x4c4) - fVar69;
    fVar65 = *(float *)((long)unaff_x19 + 0x4bc);
    if (fVar49 <= *(float *)((long)unaff_x19 + 0x4bc)) {
      fVar65 = fVar49;
    }
    *(float *)((long)unaff_x19 + 0x4bc) = fVar65;
    fVar72 = *(float *)(unaff_x19 + 0x98);
    if (in_stack_000017b4 == '\0') {
      in_stack_000017b8 = fVar65;
    }
    if ((*(char *)((long)unaff_x19 + 0x32c) != '\0') &&
       (((int)unaff_x19[100] <= *(int *)((long)unaff_x19 + 0x48c) ||
        ((int)unaff_x19[0x65] <= (int)unaff_x19[0x94])))) {
      in_stack_000017b4 = '\x01';
    }
    lVar28 = *in_stack_00000150;
    if ((lVar28 == 0) || (lVar31 = *(long *)(lVar28 + 0x50), lVar31 == 0)) goto LAB_0249920c;
    uVar37 = *(uint *)(unaff_x19 + 0x94);
    if (*(uint *)(lVar31 + 0x18) <= uVar37)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar45 = lVar31 + (long)(int)uVar37 * 0x5c;
    *(int *)(lVar45 + 0x34) = (int)unaff_x19[0x92];
    iVar14 = (int)unaff_x19[0x92];
    if ((int)unaff_x19[0x92] <= *(int *)((long)unaff_x19 + 0x494)) {
      iVar14 = *(int *)((long)unaff_x19 + 0x494);
    }
    *(int *)((long)unaff_x19 + 0x494) = iVar14;
    *(int *)(lVar45 + 0x38) = iVar14;
    *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x48c);
    *(undefined4 *)(lVar45 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x48c);
    iVar14 = *(int *)((long)unaff_x19 + 0x494);
    if (*(int *)((long)unaff_x19 + 0x494) <= *(int *)((long)unaff_x19 + 0x49c)) {
      iVar14 = *(int *)((long)unaff_x19 + 0x49c);
    }
    *(int *)((long)unaff_x19 + 0x49c) = iVar14;
    *(int *)(lVar45 + 0x40) = iVar14;
    *(int *)(lVar45 + 0x24) = (*(int *)(lVar45 + 0x3c) - *(int *)(lVar45 + 0x34)) + 1;
    *(undefined4 *)(lVar45 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
    lVar28 = *(long *)(lVar28 + 0x38);
    if (lVar28 == 0) goto LAB_0249920c;
    if (*(uint *)(lVar28 + 0x18) <= *(uint *)((long)unaff_x19 + 0x494))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    uVar76 = *(undefined4 *)(lVar28 + (int)*(uint *)((long)unaff_x19 + 0x494) * unaff_x27 + 0x11c);
    lVar31 = lVar31 + (long)(int)uVar37 * 0x5c;
    *(float *)(lVar31 + 0x70) = fVar49;
    *(undefined4 *)(lVar31 + 0x6c) = uVar76;
    lVar28 = *in_stack_00000150;
    if ((lVar28 == 0) || (lVar31 = *(long *)(lVar28 + 0x50), lVar31 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar31 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar28 = *(long *)(lVar28 + 0x38);
    if (lVar28 == 0) goto LAB_0249920c;
    if (*(uint *)(lVar28 + 0x18) <= *(uint *)((long)unaff_x19 + 0x49c))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    uVar76 = *(undefined4 *)(lVar28 + (int)*(uint *)((long)unaff_x19 + 0x49c) * unaff_x27 + 0x128);
    fVar72 = fVar72 - fVar69;
    lVar31 = lVar31 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
    *(float *)(lVar31 + 0x78) = fVar72;
    *(undefined4 *)(lVar31 + 0x74) = uVar76;
    lVar28 = *in_stack_00000150;
    if ((lVar28 == 0) || (lVar45 = *(long *)(lVar28 + 0x50), lVar45 == 0)) goto LAB_0249920c;
    lVar23 = (long)(int)*(uint *)(unaff_x19 + 0x94);
    if (*(uint *)(lVar45 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar31 = lVar45 + lVar23 * 0x5c;
    *(float *)(lVar31 + 0x44) = *(float *)(lVar31 + 0x74) - fVar75 * in_stack_00000128;
    *(float *)(lVar31 + 0x5c) = fStack00000000000000d4;
    if (*(int *)(lVar31 + 0x24) == 1) {
      *(int *)(lVar45 + lVar23 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
    }
    if ((*in_stack_00000138 == 0) || (lVar31 = *(long *)(lVar28 + 0x38), lVar31 == 0))
    goto LAB_0249920c;
    lVar40 = (long)(int)*(uint *)((long)unaff_x19 + 0x49c);
    uVar34 = (uint)*(undefined8 *)(lVar31 + 0x18);
    if (uVar34 <= *(uint *)((long)unaff_x19 + 0x49c))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(char *)(lVar31 + lVar40 * unaff_x27 + 0x194) == '\0') &&
       (lVar40 = (long)(int)*(uint *)(unaff_x19 + 0x93), uVar34 <= *(uint *)(unaff_x19 + 0x93)))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar75 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (in_stack_000000c8 *
              (fVar73 + fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac)) -
             *(float *)((long)unaff_x19 + 0x2a4));
    fVar65 = -fVar75;
    if ((char)unaff_x19[0x1d] != '\0') {
      fVar65 = fVar75;
    }
    lVar45 = lVar45 + lVar23 * 0x5c;
    *(float *)(lVar45 + 0x58) = *(float *)(lVar31 + lVar40 * unaff_x27 + 0x144) + fVar65;
    fVar65 = *(float *)(unaff_x19 + 0x9a);
    *(float *)(lVar45 + 0x48) = fStack0000000000000050 + (fVar72 - fVar49);
    *(float *)(lVar45 + 0x4c) = fVar72;
    param_2 = (ulong)(uint)(0.0 - fVar65);
    *(float *)(lVar45 + 0x50) = 0.0 - fVar65;
    *(float *)(lVar45 + 0x54) = fVar49;
    plVar43 = (long *)System_Threading_Mutex_TypeInfo;
    if ((int)in_stack_000017bc < 0x2d) {
      if (in_stack_000017bc - 10 < 2) {
UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__OnSelectEntering:
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar47 = (long *)StringLiteral_302;
        FUN_024d69d4();
        lVar28 = unaff_x19[0x6c];
        *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
        iVar16 = (int)unaff_x19[0x94] + 1;
        *(int *)(unaff_x19 + 0x94) = iVar16;
        *(int *)(unaff_x19 + 0x92) = *(int *)((long)unaff_x19 + 0x48c) + 1;
        if ((lVar28 == 0) || (*(long *)(lVar28 + 0x50) == 0)) goto LAB_0249920c;
        if (*(int *)(*(long *)(lVar28 + 0x50) + 0x18) <= iVar16) {
          FUN_024d6e60();
          lVar28 = unaff_x19[0x6c];
          if (lVar28 == 0) goto LAB_0249920c;
        }
        lVar28 = *(long *)(lVar28 + 0x38);
        if (lVar28 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar28 + 0x18) <= *in_stack_00000148)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar65 = *(float *)(lVar28 + (int)*in_stack_00000148 * unaff_x27 + 0x154);
        if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
          fVar75 = 0.0;
          if ((in_stack_000017bc == 0x2029) || (in_stack_000017bc == 10)) {
            fVar75 = *(float *)((long)unaff_x19 + 0x2c4);
          }
          uVar26 = 0;
          fVar75 = *(float *)(unaff_x19 + 0x9a) +
                   fVar65 + (0.0 - *(float *)((long)unaff_x19 + 0x4c4)) +
                   fStack0000000000000054 *
                   (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4)) +
                   in_stack_000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar75);
        }
        else {
          if ((in_stack_000017bc == 0x2029) || (fVar75 = 0.0, in_stack_000017bc == 10)) {
            fVar75 = *(float *)((long)unaff_x19 + 0x2c4);
          }
          uVar26 = 1;
          fVar75 = *(float *)(unaff_x19 + 0x9a) +
                   *(float *)(unaff_x19 + 0x57) +
                   in_stack_000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar75);
        }
        *(float *)(unaff_x19 + 0x9a) = fVar75;
        *(undefined1 *)((long)unaff_x19 + 700) = uVar26;
        lVar28 = *plVar43;
        if (*(int *)(lVar28 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar28 = *plVar43;
        }
        uVar20 = *(undefined8 *)(*(long *)(lVar28 + 0xb8) + 0x15a8);
        *(float *)(unaff_x19 + 0x99) = fVar65;
        param_2 = NEON_rev64(uVar20,4);
        unaff_x19[0x98] = param_2;
        *(float *)(unaff_x19 + 199) =
             *(float *)(unaff_x19 + 0x80) + 0.0 + *(float *)((long)unaff_x19 + 0x404);
        FUN_024d69d4();
        FUN_024d69d4();
        *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
        bVar7 = true;
        bVar8 = 1;
        goto LAB_02492630;
      }
      if (in_stack_000017bc == 3) {
        if (unaff_x19[0x8e] == 0) goto LAB_0249920c;
        in_stack_00001788 = (uint)*(undefined8 *)(unaff_x19[0x8e] + 0x18);
        uVar44 = 3;
      }
    }
    else if ((in_stack_000017bc - 0x2028 < 2) || (in_stack_000017bc == 0x2d))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__OnSelectEntering;
  }
LAB_0249572c:
  uVar37 = *in_stack_00000148;
  if (uVar34 <= uVar37) goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  if (*(char *)(lVar31 + (int)uVar37 * unaff_x27 + 0x194) != '\0') {
    lVar31 = lVar31 + (int)uVar37 * unaff_x27;
    uVar60 = *(ulong *)(lVar31 + 0x11c);
    uVar22 = *(ulong *)(in_stack_00000070 + 0x230);
    *(ulong *)(in_stack_00000070 + 0x230) =
         uVar60 ^ (uVar60 ^ uVar22) &
                  CONCAT44(-(uint)((float)(uVar22 >> 0x20) < (float)(uVar60 >> 0x20)),
                           -(uint)((float)uVar22 < (float)uVar60));
    uVar22 = *(ulong *)(in_stack_00000070 + 0x238);
    param_2 = *(ulong *)(lVar31 + 0x128);
    *(ulong *)(in_stack_00000070 + 0x238) =
         param_2 ^ (param_2 ^ uVar22) &
                   CONCAT44(-(uint)((float)(param_2 >> 0x20) < (float)(uVar22 >> 0x20)),
                            -(uint)((float)param_2 < (float)uVar22));
  }
  if (((int)unaff_x19[0x5b] == 5) &&
     ((0xd < uVar44 || ((1 << (ulong)(uVar44 & 0x1f) & 0x2c00U) == 0)))) {
    lVar31 = *(long *)(lVar28 + 0x58);
    if (lVar31 == 0) goto LAB_0249920c;
    iVar14 = (int)unaff_x19[0x95] + 1;
    if (*(int *)(lVar31 + 0x18) < iVar14) {
      if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01147c08((long *)(lVar28 + 0x58),iVar14,1,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerMove__);
      lVar28 = *in_stack_00000150;
      if (lVar28 == 0) goto LAB_0249920c;
    }
    lVar31 = *(long *)(lVar28 + 0x58);
    if (lVar31 == 0) goto LAB_0249920c;
    uVar34 = *(uint *)(unaff_x19 + 0x95);
    lVar45 = (long)(int)uVar34;
    uVar37 = *(uint *)(lVar31 + 0x18);
    if (uVar37 <= uVar34)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar23 = lVar31 + lVar45 * 0x14;
    fVar75 = *(float *)(lVar23 + 0x30);
    param_2 = (ulong)(uint)fVar75;
    *(undefined4 *)(lVar23 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
    fVar65 = *(float *)((long)unaff_x19 + 0x4bc);
    if (fVar75 <= *(float *)((long)unaff_x19 + 0x4bc)) {
      fVar65 = fVar75;
    }
    *(float *)(lVar23 + 0x30) = fVar65;
    uVar44 = *(uint *)((long)unaff_x19 + 0x48c);
    if (uVar44 == 0 && uVar34 == 0) {
      *(uint *)(lVar31 + lVar45 * 0x14 + 0x20) = uVar44;
    }
    else {
      uVar5 = uVar44 - 1;
      if (0 < (int)uVar44) {
        lVar28 = *(long *)(lVar28 + 0x38);
        if (lVar28 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar28 + 0x18) <= uVar5)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (uVar34 != *(uint *)(lVar28 + (long)(int)uVar5 * (long)iVar16 + 0x68)) {
          if (uVar37 <= uVar34 - 1)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          *(uint *)(lVar31 + 0x20 + (long)(int)(uVar34 - 1) * 0x14 + 4) = uVar5;
          *(uint *)(lVar31 + 0x20 + lVar45 * 0x14) = uVar44;
          goto LAB_024957b0;
        }
      }
      if ((float)uVar44 == in_stack_00000078._4_4_) {
        *(float *)(lVar31 + lVar45 * 0x14 + 0x24) = in_stack_00000078._4_4_;
      }
    }
  }
LAB_024957b0:
  puVar9 = System_Threading_Mutex_TypeInfo;
  if (((char)unaff_x19[0x5a] == '\0') &&
     ((6 < *(uint *)(unaff_x19 + 0x5b) ||
      ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5b) & 0x1f) & 0x4aU) == 0)))) goto LAB_02495b70;
  if ((uVar15 == 0) &&
     (((in_stack_000017bc != 0x2d && (in_stack_000017bc != 0x200b)) && (in_stack_000017bc != 0xad)))
     ) {
    if (*(char *)((long)unaff_x19 + 0x2d2) != '\0') goto LAB_024958f0;
LAB_02495868:
    if (((((0x2bfd < in_stack_000017bc - 0xac01) && (0x1d < in_stack_000017bc - 0xa961)) &&
         (0xfd < in_stack_000017bc - 0x1101)) || (uVar22 = FUN_024e95f0(0), (uVar22 & 1) != 0)) &&
       ((((0xed < in_stack_000017bc - 0xff01 && (0x1d < in_stack_000017bc - 0xfe31)) &&
         (0x717d < in_stack_000017bc - 0x2e81)) && (0x1fd < in_stack_000017bc - 0xf901))))
    goto LAB_024958f0;
    lVar28 = FUN_024e94b0(0);
    if ((lVar28 == 0) || (*(long *)(lVar28 + 0x10) == 0)) goto LAB_0249920c;
    uVar22 = FUN_0129aa60(*(long *)(lVar28 + 0x10),&stack0x00000880,
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
        bVar8 = 0;
        goto LAB_02495b70;
      }
LAB_02495adc:
      if (uVar19 != uVar62 || ((bVar8 ^ 0xff) & 1) != 0) goto LAB_02495b70;
      goto LAB_02495af4;
    }
    lVar28 = FUN_024e94b0(0);
    if (((lVar28 == 0) || (*in_stack_00000150 == 0)) ||
       (lVar31 = *(long *)(*in_stack_00000150 + 0x38), lVar31 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar31 + 0x18) <= *in_stack_00000148 + 1)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if (*(long *)(lVar28 + 0x18) == 0) goto LAB_0249920c;
    in_stack_00000880 =
         (uint)*(ushort *)(lVar31 + (long)(int)(*in_stack_00000148 + 1) * (long)iVar16 + 0x20);
    uVar60 = FUN_0129aa60(*(long *)(lVar28 + 0x18),&stack0x00000880,
                          *(undefined8 *)
                           System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                         );
    if ((uVar22 & 1) != 0) goto LAB_02495adc;
    if ((uVar60 & 1) == 0) goto LAB_02495bc4;
    if (bVar8 == 0) goto LAB_024959d4;
    if (uVar15 != 0) goto LAB_02495af8;
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
        bVar8 = 0;
        *(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xe78) = 0xffffffff;
        goto LAB_02495b70;
      }
      goto LAB_02495868;
    }
LAB_024958f0:
    if (bVar8 == 0) {
LAB_024959d4:
      bVar8 = 0;
      goto LAB_02495b70;
    }
    if (!(bool)(in_stack_000017bc == 0xad & (bVar11 ^ 1U))) {
LAB_02495af4:
      if (uVar15 == 0) goto LAB_02495b30;
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
  bVar8 = 1;
LAB_02495b70:
  plVar43 = (long *)System_Threading_Mutex_TypeInfo;
  if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar47 = (long *)StringLiteral_302;
  FUN_024d69d4();
  *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
  goto LAB_02492630;
switchD_02494884_caseD_5:
  *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
  param_2 = unaff_d13;
  FUN_024d7014(fStack0000000000000054,unaff_d13,in_stack_000000c8,
               *(undefined4 *)((long)unaff_x19 + 0x2f4),fVar73,fStack00000000000000cc,
               fStack00000000000000d4,fStack0000000000000048);
  *(undefined4 *)(unaff_x19 + 0x99) = 0;
  *(undefined4 *)(unaff_x19 + 0x9a) = 0;
  *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
  *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
  goto LAB_02495e14;
switchD_02494884_caseD_0:
  param_4 = (ulong)*(uint *)((long)unaff_x19 + 0x2f4);
  param_1 = (ulong)(uint)fStack0000000000000054;
  param_3 = (ulong)(uint)in_stack_000000c8;
  param_6 = (ulong)(uint)fStack00000000000000cc;
  param_5 = (ulong)(uint)fVar73;
  param_7 = (ulong)(uint)fStack00000000000000d4;
  param_8 = _fStack0000000000000048 & 0xffffffff;
  param_2 = unaff_d13;
  goto code_r0x024948c0;
LAB_02496a50:
  do {
    uVar15 = uVar37 - 1;
    if (*(uint *)(lVar28 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*in_stack_00000150 == 0) || (lVar45 = *(long *)(*in_stack_00000150 + 0x50), lVar45 == 0))
    goto LAB_0249920c;
    lVar40 = (long)(int)uVar15;
    lVar23 = lVar28 + lVar40 * 0x178;
    uVar34 = *(uint *)(lVar23 + 100);
    if (*(uint *)(lVar45 + 0x18) <= uVar34)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar38 = *(long *)(lVar23 + 0x38);
    uVar2 = *(ushort *)(lVar23 + 0x20);
    lVar36 = (long)(int)uVar34;
    lVar45 = lVar45 + lVar36 * 0x5c;
    uVar5 = *(uint *)(lVar45 + 0x3c);
    iVar17 = *(int *)(lVar45 + 0x28);
    iVar18 = *(int *)(lVar45 + 0x2c);
    uVar4 = *(uint *)(lVar45 + 0x40);
    lVar23 = (long)(int)uVar4;
    uVar44 = *(uint *)(lVar45 + 0x68);
    fVar70 = *(float *)(lVar45 + 0x5c);
    fVar64 = *(float *)(lVar45 + 0x60);
    iVar1 = *(int *)(lVar45 + 0x20);
    fVar52 = *(float *)(lVar45 + 0x4c);
    fVar53 = *(float *)(lVar45 + 0x54);
    fVar72 = *(float *)(lVar45 + 0x58);
    fVar66 = *(float *)(lVar45 + 0x6c);
    fVar54 = *(float *)(lVar45 + 0x70);
    fVar51 = *(float *)(lVar45 + 0x74);
    fVar73 = *(float *)(lVar45 + 0x78);
    fVar67 = fVar70 + fVar64;
    uVar42 = (uint)uVar2;
    if ((int)uVar44 < 9) {
      switch(uVar44) {
      case 1:
        if ((char)unaff_x19[0x1d] == '\0') {
          in_stack_000000c8 = fVar64 + 0.0;
        }
        else {
          in_stack_000000c8 = 0.0 - fVar72;
        }
        break;
      case 2:
LAB_02496c1c:
        in_stack_000000c8 = (fVar64 + fVar70 * 0.5) - fVar72 * 0.5;
        break;
      default:
        goto switchD_02496b58_caseD_3;
      case 4:
        in_stack_000000c8 = fVar67 - fVar72;
        if ((char)unaff_x19[0x1d] != '\0') {
          in_stack_000000c8 = fVar67;
        }
        break;
      case 8:
        goto switchD_02496b58_caseD_8;
      }
LAB_02496c90:
      uStack00000000000000c0 = 0;
    }
    else if (uVar44 == 0x10) {
switchD_02496b58_caseD_8:
      if (uVar2 < 0xad) {
        if ((uVar42 != 3) && (uVar42 != 10)) goto LAB_02496bac;
      }
      else if ((uVar42 != 0xad) && ((uVar42 != 0x200b && (uVar42 != 0x2060)))) {
LAB_02496bac:
        if (*(uint *)(lVar28 + 0x18) <= uVar5)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar3 = *(undefined2 *)(lVar28 + (long)(int)uVar5 * 0x178 + 0x20);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar22 = FUN_016f9f84(uVar3,0);
        if ((uVar22 & 1) == 0) {
          bVar13 = (int)uVar34 < (int)unaff_x19[0x94];
        }
        else {
          bVar13 = false;
        }
        if ((fVar72 <= fVar70) && (!bVar13 && (uVar44 >> 4 & 1) == 0)) {
          in_stack_000000c8 = fVar64;
          if ((char)unaff_x19[0x1d] != '\0') {
            in_stack_000000c8 = fVar67;
          }
          goto LAB_02496c90;
        }
        if (((uVar37 == 1) || (uVar34 != uVar62)) || (uVar15 == *(uint *)((long)unaff_x19 + 0x31c)))
        {
          in_stack_000000c8 = fVar64;
          if ((char)unaff_x19[0x1d] != '\0') {
            in_stack_000000c8 = fVar67;
          }
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          fStack0000000000000020 = (float)FUN_016fa418(uVar2,0);
          uStack00000000000000c0 = 0;
        }
        else {
          cVar27 = (char)unaff_x19[0x1d];
          fVar67 = -fVar72;
          if (cVar27 != '\0') {
            fVar67 = fVar72;
          }
          if (*(uint *)(lVar28 + 0x18) <= uVar5)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar72 = 1.0;
          iVar18 = (int)*(char *)(lVar28 + (long)(int)uVar5 * 0x178 + 0x194) +
                   (-iVar1 - ((uint)fStack0000000000000020 & 1)) + iVar18 + -1;
          if (0 < iVar18) {
            fVar72 = *(float *)((long)unaff_x19 + 0x2d4);
          }
          if (iVar18 < 1) {
            iVar18 = 1;
          }
          if (uVar42 == 9) {
LAB_02498bb8:
            fVar72 = 1.0 - fVar72;
          }
          else {
            if (uVar42 != 0xa0) {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar22 = FUN_016fa418(uVar2,0);
              cVar27 = (char)unaff_x19[0x1d];
              if ((uVar22 & 1) != 0) goto LAB_02498bb8;
            }
            iVar18 = (iVar1 - (~(uint)fStack0000000000000020 & 1)) + iVar17;
          }
          fVar72 = ((fVar70 + fVar67) * fVar72) / (float)iVar18;
          if (cVar27 == '\0') {
            in_stack_000000c8 = in_stack_000000c8 + fVar72;
            uStack00000000000000c0 =
                 CONCAT44((float)((ulong)uStack00000000000000c0 >> 0x20) + 0.0,
                          (float)uStack00000000000000c0 + 0.0);
          }
          else {
            in_stack_000000c8 = in_stack_000000c8 - fVar72;
          }
        }
      }
    }
    else if (uVar44 == 0x20) {
      fVar72 = fVar66 + fVar51;
      goto LAB_02496c1c;
    }
switchD_02496b58_caseD_3:
    uVar44 = (uint)*(undefined8 *)(lVar28 + 0x18);
    if (uVar44 <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar45 = lVar28 + lVar40 * 0x178;
    fVar67 = fStack0000000000000098 + in_stack_000000c8;
    fVar72 = (float)_in_stack_00000090 + (float)uStack00000000000000c0;
    fVar70 = (float)((ulong)_in_stack_00000090 >> 0x20) +
             (float)((ulong)uStack00000000000000c0 >> 0x20);
    if (*(char *)(lVar45 + 0x194) == '\0') goto LAB_02497688;
    iVar17 = *(int *)(lVar28 + lVar40 * 0x178 + 0x2c);
    if (iVar17 != 0) goto LAB_02497374;
    fVar69 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)uVar34,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
    case 0:
      lVar30 = lVar28 + lVar40 * 0x178;
      *(undefined4 *)(lVar30 + 0x84) = 0;
      *(undefined4 *)(lVar30 + 0xac) = 0;
      *(undefined4 *)(lVar30 + 0xd4) = 0x3f800000;
      fVar69 = 1.0;
      break;
    case 1:
      fVar73 = *(float *)(lVar28 + lVar40 * 0x178 + 0x70);
      if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
        lVar30 = lVar28 + lVar40 * 0x178;
        fVar51 = (in_stack_000000c8 + fVar73) - *(float *)(in_stack_00000070 + 0x230);
        fVar73 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
        goto LAB_02496df8;
      }
      lVar30 = lVar28 + lVar40 * 0x178;
      fVar51 = fVar51 - fVar66;
      *(float *)(lVar30 + 0x84) = fVar69 + (fVar73 - fVar66) / fVar51;
      *(float *)(lVar30 + 0xac) = fVar69 + (*(float *)(lVar30 + 0x98) - fVar66) / fVar51;
      *(float *)(lVar30 + 0xd4) = fVar69 + (*(float *)(lVar30 + 0xc0) - fVar66) / fVar51;
      fVar69 = fVar69 + (*(float *)(lVar30 + 0xe8) - fVar66) / fVar51;
      break;
    case 2:
      lVar30 = lVar28 + lVar40 * 0x178;
      fVar73 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
      fVar51 = (in_stack_000000c8 + *(float *)(lVar30 + 0x70)) -
               *(float *)(in_stack_00000070 + 0x230);
LAB_02496df8:
      *(float *)(lVar30 + 0x84) = fVar69 + fVar51 / fVar73;
      *(float *)(lVar30 + 0xac) =
           fVar69 + ((in_stack_000000c8 + *(float *)(lVar30 + 0x98)) -
                    *(float *)(in_stack_00000070 + 0x230)) /
                    (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
      *(float *)(lVar30 + 0xd4) =
           fVar69 + ((in_stack_000000c8 + *(float *)(lVar30 + 0xc0)) -
                    *(float *)(in_stack_00000070 + 0x230)) /
                    (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
      fVar69 = fVar69 + ((in_stack_000000c8 + *(float *)(lVar30 + 0xe8)) -
                        *(float *)(in_stack_00000070 + 0x230)) /
                        (*(float *)(in_stack_00000070 + 0x238) -
                        *(float *)(in_stack_00000070 + 0x230));
      break;
    case 3:
      switch((int)unaff_x19[0x61]) {
      case 0:
        lVar30 = lVar28 + lVar40 * 0x178;
        *(undefined4 *)(lVar30 + 0x88) = 0;
        *(undefined4 *)(lVar30 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar30 + 0xd8) = 0;
        *(undefined4 *)(lVar30 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar30 = lVar28 + lVar40 * 0x178;
        fVar73 = fVar73 - fVar54;
        fVar51 = fVar69 + (*(float *)(lVar30 + 0x74) - fVar54) / fVar73;
        fVar73 = fVar69 + (*(float *)(lVar30 + 0x9c) - fVar54) / fVar73;
        *(float *)(lVar30 + 0x88) = fVar51;
        *(float *)(lVar30 + 0xb0) = fVar73;
        *(float *)(lVar30 + 0xd8) = fVar51;
        *(float *)(lVar30 + 0x100) = fVar73;
        break;
      case 2:
        lVar30 = lVar28 + lVar40 * 0x178;
        fVar51 = fVar69 + (*(float *)(lVar30 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                          (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
        *(float *)(lVar30 + 0x88) = fVar51;
        fVar73 = *(float *)(unaff_x19 + 0x9b);
        fVar54 = *(float *)(unaff_x19 + 0x9c);
        *(float *)(lVar30 + 0xd8) = fVar51;
        fVar51 = fVar69 + (*(float *)(lVar30 + 0x9c) - fVar73) / (fVar54 - fVar73);
        *(float *)(lVar30 + 0xb0) = fVar51;
        *(float *)(lVar30 + 0x100) = fVar51;
        break;
      case 3:
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
        uVar44 = (uint)*(undefined8 *)(lVar28 + 0x18);
      }
      if (uVar44 <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar30 = lVar28 + lVar40 * 0x178;
      fVar51 = *(float *)(lVar30 + 0x15c);
      fVar73 = (1.0 - (*(float *)(lVar30 + 0x88) + *(float *)(lVar30 + 0xb0)) * fVar51) * 0.5;
      fVar54 = fVar69 + *(float *)(lVar30 + 0x88) * fVar51 + fVar73;
      fVar69 = fVar69 + fVar73 + *(float *)(lVar30 + 0xb0) * fVar51;
      *(float *)(lVar30 + 0x84) = fVar54;
      *(float *)(lVar30 + 0xac) = fVar54;
      *(float *)(lVar30 + 0xd4) = fVar69;
      break;
    default:
      goto switchD_02496d4c_default;
    }
    *(float *)(lVar28 + lVar40 * 0x178 + 0xfc) = fVar69;
switchD_02496d4c_default:
    switch((int)unaff_x19[0x61]) {
    case 0:
      if (uVar44 <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar30 = lVar28 + lVar40 * 0x178;
      *(undefined4 *)(lVar30 + 0x88) = 0;
      *(undefined4 *)(lVar30 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar30 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar30 + 0x100) = 0;
      break;
    case 1:
      if (uVar15 < uVar44) {
        lVar30 = lVar28 + lVar40 * 0x178;
        fVar52 = fVar52 - fVar53;
        fVar69 = (*(float *)(lVar30 + 0x74) - fVar53) / fVar52;
        fVar52 = (*(float *)(lVar30 + 0x9c) - fVar53) / fVar52;
        *(float *)(lVar30 + 0x88) = fVar69;
        goto LAB_02497174;
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    case 2:
      if (uVar44 <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar30 = lVar28 + lVar40 * 0x178;
      fVar69 = (*(float *)(lVar30 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
      *(float *)(lVar30 + 0x88) = fVar69;
      fVar52 = (*(float *)(lVar30 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
LAB_02497174:
      *(float *)(lVar30 + 0xb0) = fVar52;
      *(float *)(lVar30 + 0xd8) = fVar52;
      *(float *)(lVar30 + 0x100) = fVar69;
      break;
    case 3:
      if (uVar44 <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar30 = lVar28 + lVar40 * 0x178;
      fVar52 = *(float *)(lVar30 + 0x15c);
      fVar51 = (1.0 - (*(float *)(lVar30 + 0x84) + *(float *)(lVar30 + 0xd4)) / fVar52) * 0.5;
      fVar69 = *(float *)(lVar30 + 0x84) / fVar52 + fVar51;
      fVar51 = fVar51 + *(float *)(lVar30 + 0xd4) / fVar52;
      *(float *)(lVar30 + 0x88) = fVar69;
      *(float *)(lVar30 + 0xb0) = fVar51;
      *(float *)(lVar30 + 0x100) = fVar69;
      *(float *)(lVar30 + 0xd8) = fVar51;
    }
    if (uVar44 <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar30 = lVar28 + lVar40 * 0x178;
    fVar69 = *(float *)(lVar30 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
    if ((*(char *)(lVar30 + 0x5c) == '\0') && ((*(byte *)(lVar28 + lVar40 * 0x178 + 400) & 1) != 0))
    {
      fVar69 = -fVar69;
    }
    fVar51 = fVar65;
    if (((iVar14 == 2) || (fVar51 = fVar50, iVar14 == 1)) || (fVar51 = fVar65 / fVar75, iVar14 == 0)
       ) {
      fVar69 = fVar51 * fVar69;
    }
    lVar30 = lVar28 + lVar40 * 0x178;
    fVar52 = *(float *)(lVar30 + 0x88);
    fVar73 = *(float *)(lVar30 + 0x84);
    fVar51 = -2.1474836e+09;
    if (fVar73 != INFINITY) {
      fVar51 = (float)(int)fVar73;
    }
    fVar54 = *(float *)(lVar30 + 0xd4);
    fVar66 = *(float *)(lVar30 + 0xd8);
    fVar53 = -2.1474836e+09;
    if (fVar52 != INFINITY) {
      fVar53 = (float)(int)fVar52;
    }
    uVar76 = FUN_024e0374(fVar73 - fVar51,fVar52 - fVar53);
    *(undefined4 *)(lVar30 + 0x84) = uVar76;
    if (*(uint *)(lVar28 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar66 = fVar66 - fVar53;
    *(float *)(lVar30 + 0x88) = fVar69;
    uVar76 = FUN_024e0374(fVar73 - fVar51,fVar66);
    *(undefined4 *)(lVar28 + lVar40 * 0x178 + 0xac) = uVar76;
    if (*(uint *)(lVar28 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar54 = fVar54 - fVar51;
    *(float *)(lVar28 + lVar40 * 0x178 + 0xb0) = fVar69;
    fVar51 = (float)FUN_024e0374(fVar54,fVar66);
    *(float *)(lVar30 + 0xd4) = fVar51;
    if (*(uint *)(lVar28 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar30 + 0xd8) = fVar69;
    uVar76 = FUN_024e0374(fVar54,fVar52 - fVar53);
    *(undefined4 *)(lVar28 + lVar40 * 0x178 + 0xfc) = uVar76;
    uVar44 = (uint)*(undefined8 *)(lVar28 + 0x18);
    if (uVar44 <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar28 + lVar40 * 0x178 + 0x100) = fVar69;
LAB_02497374:
    if (((int)unaff_x19[100] <= (int)uVar15) ||
       (*(int *)((long)unaff_x19 + 0x324) <= iStack00000000000000ac)) goto LAB_02497490;
    if (((int)uVar34 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] != 5)) {
      if (uVar44 <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar45 = lVar28 + lVar40 * 0x178;
      *(ulong *)(lVar45 + 0x70) =
           CONCAT44(fVar72 + (float)((ulong)*(undefined8 *)(lVar45 + 0x70) >> 0x20),
                    fVar67 + (float)*(undefined8 *)(lVar45 + 0x70));
      *(float *)(lVar45 + 0x78) = fVar70 + *(float *)(lVar45 + 0x78);
      if (*(uint *)(lVar28 + 0x18) <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar45 = lVar28 + lVar40 * 0x178;
      *(ulong *)(lVar45 + 0x98) =
           CONCAT44(fVar72 + (float)((ulong)*(undefined8 *)(lVar45 + 0x98) >> 0x20),
                    fVar67 + (float)*(undefined8 *)(lVar45 + 0x98));
      *(float *)(lVar45 + 0xa0) = fVar70 + *(float *)(lVar45 + 0xa0);
      if (*(uint *)(lVar28 + 0x18) <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar45 = lVar28 + lVar40 * 0x178;
      *(ulong *)(lVar45 + 0xc0) =
           CONCAT44(fVar72 + (float)((ulong)*(undefined8 *)(lVar45 + 0xc0) >> 0x20),
                    fVar67 + (float)*(undefined8 *)(lVar45 + 0xc0));
      *(float *)(lVar45 + 200) = fVar70 + *(float *)(lVar45 + 200);
      if (*(uint *)(lVar28 + 0x18) <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar45 = lVar28 + lVar40 * 0x178;
      *(ulong *)(lVar45 + 0xe8) =
           CONCAT44(fVar72 + (float)((ulong)*(undefined8 *)(lVar45 + 0xe8) >> 0x20),
                    fVar67 + (float)*(undefined8 *)(lVar45 + 0xe8));
      *(float *)(lVar45 + 0xf0) = fVar70 + *(float *)(lVar45 + 0xf0);
      if (iVar17 == 0) goto LAB_02497668;
LAB_02497598:
      if (iVar17 == 1) {
        pcVar33 = *(code **)(*unaff_x19 + 0x8f8);
        goto LAB_02497674;
      }
    }
    else {
      if (((int)uVar34 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] == 5)) {
        if (uVar44 <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (*(uint *)(lVar28 + lVar40 * 0x178 + 0x68) != uStack000000000000002c) goto LAB_02497490;
        lVar45 = lVar28 + lVar40 * 0x178;
        *(ulong *)(lVar45 + 0x70) =
             CONCAT44(fVar72 + (float)((ulong)*(undefined8 *)(lVar45 + 0x70) >> 0x20),
                      fVar67 + (float)*(undefined8 *)(lVar45 + 0x70));
        *(float *)(lVar45 + 0x78) = fVar70 + *(float *)(lVar45 + 0x78);
        if (*(uint *)(lVar28 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar45 = lVar28 + lVar40 * 0x178;
        *(ulong *)(lVar45 + 0x98) =
             CONCAT44(fVar72 + (float)((ulong)*(undefined8 *)(lVar45 + 0x98) >> 0x20),
                      fVar67 + (float)*(undefined8 *)(lVar45 + 0x98));
        *(float *)(lVar45 + 0xa0) = fVar70 + *(float *)(lVar45 + 0xa0);
        if (*(uint *)(lVar28 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar45 = lVar28 + lVar40 * 0x178;
        *(ulong *)(lVar45 + 0xc0) =
             CONCAT44(fVar72 + (float)((ulong)*(undefined8 *)(lVar45 + 0xc0) >> 0x20),
                      fVar67 + (float)*(undefined8 *)(lVar45 + 0xc0));
        *(float *)(lVar45 + 200) = fVar70 + *(float *)(lVar45 + 200);
        if (*(uint *)(lVar28 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar45 = lVar28 + lVar40 * 0x178;
        *(ulong *)(lVar45 + 0xe8) =
             CONCAT44(fVar72 + (float)((ulong)*(undefined8 *)(lVar45 + 0xe8) >> 0x20),
                      fVar67 + (float)*(undefined8 *)(lVar45 + 0xe8));
        *(float *)(lVar45 + 0xf0) = fVar70 + *(float *)(lVar45 + 0xf0);
      }
      else {
LAB_02497490:
        if (uVar44 <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        puVar9 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
        lVar30 = lVar28 + lVar40 * 0x178;
        uVar76 = *(undefined4 *)
                  (*(undefined8 **)
                    (*(long *)
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                    + 0xb8) + 1);
        *(undefined8 *)(lVar30 + 0x70) =
             **(undefined8 **)
               (*(long *)
                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
               0xb8);
        *(undefined4 *)(lVar30 + 0x78) = uVar76;
        if (*(uint *)(lVar28 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar30 = lVar28 + lVar40 * 0x178;
        uVar76 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
        *(undefined8 *)(lVar30 + 0x98) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
        *(undefined4 *)(lVar30 + 0xa0) = uVar76;
        if (*(uint *)(lVar28 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar30 = lVar28 + lVar40 * 0x178;
        uVar76 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
        *(undefined8 *)(lVar30 + 0xc0) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
        *(undefined4 *)(lVar30 + 200) = uVar76;
        if (*(uint *)(lVar28 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar30 = lVar28 + lVar40 * 0x178;
        uVar76 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
        *(undefined8 *)(lVar30 + 0xe8) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
        *(undefined4 *)(lVar30 + 0xf0) = uVar76;
        if (*(uint *)(lVar28 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        *(undefined1 *)(lVar45 + 0x194) = 0;
      }
      if (iVar17 != 0) goto LAB_02497598;
LAB_02497668:
      pcVar33 = *(code **)(*unaff_x19 + 0x8d8);
LAB_02497674:
      (*pcVar33)();
    }
LAB_02497688:
    if ((*in_stack_00000150 == 0) || (lVar45 = *(long *)(*in_stack_00000150 + 0x38), lVar45 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar45 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar45 = lVar45 + lVar40 * 0x178;
    uVar20 = *(undefined8 *)(lVar45 + 0x11c);
    *(undefined8 *)(lVar45 + 0x11c) =
         CONCAT44(fVar72 + (float)((ulong)uVar20 >> 0x20),fVar67 + (float)uVar20);
    *(float *)(lVar45 + 0x124) = fVar70 + *(float *)(lVar45 + 0x124);
    if ((*in_stack_00000150 == 0) || (lVar45 = *(long *)(*in_stack_00000150 + 0x38), lVar45 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar45 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar45 = lVar45 + lVar40 * 0x178;
    *(ulong *)(lVar45 + 0x110) =
         CONCAT44(fVar72 + (float)((ulong)*(undefined8 *)(lVar45 + 0x110) >> 0x20),
                  fVar67 + (float)*(undefined8 *)(lVar45 + 0x110));
    *(float *)(lVar45 + 0x118) = fVar70 + *(float *)(lVar45 + 0x118);
    if ((*in_stack_00000150 == 0) || (lVar45 = *(long *)(*in_stack_00000150 + 0x38), lVar45 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar45 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar45 = lVar45 + lVar40 * 0x178;
    *(ulong *)(lVar45 + 0x128) =
         CONCAT44(fVar72 + (float)((ulong)*(undefined8 *)(lVar45 + 0x128) >> 0x20),
                  fVar67 + (float)*(undefined8 *)(lVar45 + 0x128));
    *(float *)(lVar45 + 0x130) = fVar70 + *(float *)(lVar45 + 0x130);
    if ((*in_stack_00000150 == 0) || (lVar45 = *(long *)(*in_stack_00000150 + 0x38), lVar45 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar45 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar45 = lVar45 + lVar40 * 0x178;
    *(float *)(lVar45 + 0x134) = fVar67 + *(float *)(lVar45 + 0x134);
    *(ulong *)(lVar45 + 0x138) =
         CONCAT44(fVar70 + (float)((ulong)*(undefined8 *)(lVar45 + 0x138) >> 0x20),
                  fVar72 + (float)*(undefined8 *)(lVar45 + 0x138));
    lVar45 = *in_stack_00000150;
    if ((lVar45 == 0) || (lVar30 = *(long *)(lVar45 + 0x38), lVar30 == 0)) goto LAB_0249920c;
    uVar44 = *(uint *)(lVar30 + 0x18);
    if (uVar44 <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar39 = lVar30 + lVar40 * 0x178;
    uVar60 = CONCAT44(fVar67 + (float)((ulong)*(undefined8 *)(lVar39 + 0x140) >> 0x20),
                      fVar67 + (float)*(undefined8 *)(lVar39 + 0x140));
    fVar51 = fVar72 + *(float *)(lVar39 + 0x150);
    uVar61 = (ulong)(uint)fVar51;
    uVar63 = CONCAT44(fVar72 + (float)((ulong)*(undefined8 *)(lVar39 + 0x148) >> 0x20),
                      fVar72 + (float)*(undefined8 *)(lVar39 + 0x148));
    *(ulong *)(lVar39 + 0x140) = uVar60;
    *(ulong *)(lVar39 + 0x148) = uVar63;
    *(float *)(lVar39 + 0x150) = fVar51;
    if (uVar34 == uVar62) {
      uVar62 = *in_stack_00000148 - 1;
      if (uVar15 == uVar62) goto LAB_0249788c;
    }
    else {
      lVar45 = *(long *)(lVar45 + 0x50);
      if (lVar45 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar45 + 0x18) <= uVar62)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar39 = (long)(int)uVar62;
      lVar41 = lVar45 + lVar39 * 0x5c;
      uVar63 = (ulong)(uint)*(float *)(lVar41 + 0x58);
      fVar51 = fVar72 + *(float *)(lVar41 + 0x54);
      uVar60 = (ulong)(uint)fVar51;
      fVar52 = fVar67 + *(float *)(lVar41 + 0x58);
      uVar61 = (ulong)(uint)fVar52;
      *(ulong *)(lVar41 + 0x4c) =
           CONCAT44(fVar72 + (float)((ulong)*(undefined8 *)(lVar41 + 0x4c) >> 0x20),
                    fVar72 + (float)*(undefined8 *)(lVar41 + 0x4c));
      *(float *)(lVar41 + 0x54) = fVar51;
      *(float *)(lVar41 + 0x58) = fVar52;
      if (uVar44 <= *(uint *)(lVar41 + 0x34))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      uVar76 = *(undefined4 *)(lVar30 + (long)(int)*(uint *)(lVar41 + 0x34) * 0x178 + 0x11c);
      lVar45 = lVar45 + lVar39 * 0x5c;
      *(float *)(lVar45 + 0x70) = fVar51;
      *(undefined4 *)(lVar45 + 0x6c) = uVar76;
      lVar45 = *in_stack_00000150;
      if ((lVar45 == 0) || (lVar30 = *(long *)(lVar45 + 0x50), lVar30 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar30 + 0x18) <= uVar62)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar45 = *(long *)(lVar45 + 0x38);
      if (lVar45 == 0) goto LAB_0249920c;
      uVar62 = *(uint *)(lVar30 + lVar39 * 0x5c + 0x40);
      if (*(uint *)(lVar45 + 0x18) <= uVar62)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar30 = lVar30 + lVar39 * 0x5c;
      *(undefined4 *)(lVar30 + 0x74) = *(undefined4 *)(lVar45 + (long)(int)uVar62 * 0x178 + 0x128);
      *(undefined4 *)(lVar30 + 0x78) = *(undefined4 *)(lVar30 + 0x4c);
      uVar62 = *in_stack_00000148 - 1;
LAB_0249788c:
      if (uVar15 == uVar62) {
        lVar45 = *in_stack_00000150;
        if ((lVar45 == 0) || (lVar30 = *(long *)(lVar45 + 0x50), lVar30 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar30 + 0x18) <= uVar34)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar39 = lVar30 + lVar36 * 0x5c;
        uVar63 = (ulong)(uint)*(float *)(lVar39 + 0x58);
        uVar60 = CONCAT44(fVar72 + (float)((ulong)*(undefined8 *)(lVar39 + 0x4c) >> 0x20),
                          fVar72 + (float)*(undefined8 *)(lVar39 + 0x4c));
        fVar51 = fVar72 + *(float *)(lVar39 + 0x54);
        fVar67 = fVar67 + *(float *)(lVar39 + 0x58);
        uVar61 = (ulong)(uint)fVar67;
        *(ulong *)(lVar39 + 0x4c) = uVar60;
        *(float *)(lVar39 + 0x54) = fVar51;
        *(float *)(lVar39 + 0x58) = fVar67;
        lVar45 = *(long *)(lVar45 + 0x38);
        if (lVar45 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar45 + 0x18) <= *(uint *)(lVar39 + 0x34))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar76 = *(undefined4 *)(lVar45 + (long)(int)*(uint *)(lVar39 + 0x34) * 0x178 + 0x11c);
        lVar30 = lVar30 + lVar36 * 0x5c;
        *(float *)(lVar30 + 0x70) = fVar51;
        *(undefined4 *)(lVar30 + 0x6c) = uVar76;
        lVar45 = *in_stack_00000150;
        if ((lVar45 == 0) || (lVar30 = *(long *)(lVar45 + 0x50), lVar30 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar30 + 0x18) <= uVar34)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar45 = *(long *)(lVar45 + 0x38);
        if (lVar45 == 0) goto LAB_0249920c;
        uVar62 = *(uint *)(lVar30 + lVar36 * 0x5c + 0x40);
        if (*(uint *)(lVar45 + 0x18) <= uVar62)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar30 = lVar30 + lVar36 * 0x5c;
        *(undefined4 *)(lVar30 + 0x74) = *(undefined4 *)(lVar45 + (long)(int)uVar62 * 0x178 + 0x128)
        ;
        *(undefined4 *)(lVar30 + 0x78) = *(undefined4 *)(lVar30 + 0x4c);
      }
    }
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar22 = FUN_016f9468(uVar42,0);
    if (((((uVar22 & 1) == 0) && (1 < uVar42 - 0x2010)) && (uVar42 != 0xad)) && (uVar42 != 0x2d)) {
      if (bVar7) {
        if (((uVar37 != 1) && ((int)uVar15 < (int)(*(uint *)(lVar28 + 0x18) - 1))) &&
           (((int)uVar15 < (int)*in_stack_00000148 && ((uVar42 == 0x2019 || (uVar42 == 0x27)))))) {
          if (*(uint *)(lVar28 + 0x18) <= uVar37 - 2)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar3 = *(undefined2 *)(lVar28 + lVar31 + -0x438);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar22 = FUN_016f9468(uVar3,0);
          if ((uVar22 & 1) != 0) {
            if (*(uint *)(lVar28 + 0x18) <= uVar37)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            uVar3 = *(undefined2 *)(lVar28 + lVar31 + -0x148);
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar22 = FUN_016f9468(uVar3,0);
            if ((uVar22 & 1) != 0) goto LAB_02497aa4;
          }
        }
      }
      else {
        if (uVar37 != 1) {
LAB_024985a0:
          bVar7 = false;
          goto LAB_02497aac;
        }
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar22 = FUN_016f93a0(uVar42,0);
        if ((uVar22 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar22 = FUN_016f68bc(uVar42,0);
          if (((uVar42 != 0x200b) && ((uVar22 & 1) == 0)) && (*in_stack_00000148 != 1))
          goto LAB_024985a0;
        }
      }
      if (uVar15 == *in_stack_00000148 - 1) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar22 = FUN_016f9468(uVar42,0);
        iVar17 = iVar48;
        if ((uVar22 & 1) == 0) goto LAB_02497de0;
      }
      else {
LAB_02497de0:
        iVar17 = uVar37 - 2;
      }
      lVar45 = *in_stack_00000150;
      if (lVar45 == 0) goto LAB_0249920c;
      lVar30 = *(long *)(lVar45 + 0x40);
      if (lVar30 == 0) goto LAB_0249920c;
      uVar62 = *(uint *)(lVar45 + 0x24);
      iVar18 = *(int *)(lVar30 + 0x18);
      if (iVar18 < (int)(uVar62 + 1)) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147b84((long *)(lVar45 + 0x40),iVar18 + 1,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
        lVar45 = *in_stack_00000150;
        if (lVar45 == 0) goto LAB_0249920c;
      }
      lVar30 = *(long *)(lVar45 + 0x40);
      if (lVar30 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar30 + 0x18) <= uVar62)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar30 = lVar30 + (long)(int)uVar62 * 0x18;
      *(uint *)(lVar30 + 0x28) = uVar19;
      *(int *)(lVar30 + 0x2c) = iVar17;
      *(uint *)(lVar30 + 0x30) = (iVar17 - uVar19) + 1;
      *(long **)(lVar30 + 0x20) = unaff_x19;
      lVar30 = *(long *)(lVar45 + 0x50);
      *(int *)(lVar45 + 0x24) = *(int *)(lVar45 + 0x24) + 1;
      if (lVar30 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar30 + 0x18) <= uVar34)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar30 = lVar30 + lVar36 * 0x5c;
      bVar7 = false;
      iStack00000000000000ac = iStack00000000000000ac + 1;
      *(int *)(lVar30 + 0x30) = *(int *)(lVar30 + 0x30) + 1;
    }
    else {
      if (!bVar7) {
        uVar19 = uVar15;
      }
      if (uVar15 == *in_stack_00000148 - 1) {
        lVar45 = *in_stack_00000150;
        if (lVar45 == 0) goto LAB_0249920c;
        lVar30 = *(long *)(lVar45 + 0x40);
        if (lVar30 == 0) goto LAB_0249920c;
        uVar62 = *(uint *)(lVar45 + 0x24);
        iVar17 = *(int *)(lVar30 + 0x18);
        if (iVar17 < (int)(uVar62 + 1)) {
          if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01147b84((long *)(lVar45 + 0x40),iVar17 + 1,
                       *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
          lVar45 = *in_stack_00000150;
          if (lVar45 == 0) goto LAB_0249920c;
        }
        lVar30 = *(long *)(lVar45 + 0x40);
        if (lVar30 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar30 + 0x18) <= uVar62)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar30 = lVar30 + (long)(int)uVar62 * 0x18;
        *(uint *)(lVar30 + 0x28) = uVar19;
        *(uint *)(lVar30 + 0x2c) = uVar15;
        *(long **)(lVar30 + 0x20) = unaff_x19;
        *(uint *)(lVar30 + 0x30) = uVar37 - uVar19;
        lVar30 = *(long *)(lVar45 + 0x50);
        *(int *)(lVar45 + 0x24) = *(int *)(lVar45 + 0x24) + 1;
        if (lVar30 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar30 + 0x18) <= uVar34)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar30 = lVar30 + lVar36 * 0x5c;
        iStack00000000000000ac = iStack00000000000000ac + 1;
        *(int *)(lVar30 + 0x30) = *(int *)(lVar30 + 0x30) + 1;
      }
LAB_02497aa4:
      bVar7 = true;
    }
LAB_02497aac:
    if ((*in_stack_00000150 == 0) || (lVar45 = *(long *)(*in_stack_00000150 + 0x38), lVar45 == 0))
    goto LAB_0249920c;
    uVar62 = *(uint *)(lVar45 + 0x18);
    if (uVar62 <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar45 + lVar40 * 0x178 + 400) >> 2 & 1) == 0) {
      if (bVar11) {
LAB_02497adc:
        if (uVar62 <= uVar37 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar36 = *unaff_x19;
        uVar62 = *(uint *)(lVar45 + lVar31 + -0x330);
        uVar76 = *(undefined4 *)(lVar45 + lVar31 + -0x2f8);
LAB_0249805c:
        pcVar33 = *(code **)(lVar36 + 0x908);
LAB_02498064:
        uVar63 = (ulong)uVar62;
        uVar60 = (ulong)(uint)fStack0000000000000050;
        uVar61 = (ulong)(uint)fStack0000000000000054;
        (*pcVar33)(fStack0000000000000058,uVar60,uVar61,uVar63,fStack00000000000000d0,0,
                   fStack000000000000005c,uVar76);
        puVar9 = System_Threading_Mutex_TypeInfo;
        lVar45 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar45 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar45 = *(long *)puVar9;
        }
LAB_024980b4:
        bVar11 = false;
        fVar49 = 0.0;
        fStack00000000000000d0 = *(float *)(*(long *)(lVar45 + 0xb8) + 0x15a8);
        fStack00000000000000cc = 0.0;
      }
      else {
LAB_02497fc4:
        bVar11 = false;
      }
    }
    else {
      lVar45 = lVar45 + lVar40 * 0x178;
      iVar17 = *(int *)(lVar45 + 0x68);
      *(int *)(lVar45 + 0x16c) = iVar16;
      if ((((int)unaff_x19[100] < (int)uVar15) || ((int)unaff_x19[0x65] < (int)uVar34)) ||
         (((int)unaff_x19[0x5b] == 5 && (iVar17 + 1 != (int)unaff_x19[0x66])))) {
        bVar13 = false;
      }
      else {
        bVar13 = true;
      }
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar22 = FUN_016f68bc(uVar42,0);
      if ((uVar42 != 0x200b) && ((uVar22 & 1) == 0)) {
        lVar45 = *in_stack_00000150;
        if ((lVar45 == 0) || (lVar36 = *(long *)(lVar45 + 0x38), lVar36 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar36 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar51 = *(float *)(lVar36 + lVar40 * 0x178 + 0x160);
        if (fVar49 <= fVar51) {
          fVar49 = fVar51;
        }
        if (fStack00000000000000cc <= ABS(fVar69)) {
          fStack00000000000000cc = ABS(fVar69);
        }
        if ((float)iVar17 != fStack000000000000004c) {
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar45 = *in_stack_00000150;
            if (lVar45 == 0) goto LAB_0249920c;
            lVar36 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          else {
            lVar36 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          fStack00000000000000d0 = *(float *)(lVar36 + 0x15a8);
        }
        lVar45 = *(long *)(lVar45 + 0x38);
        if (lVar45 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar45 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (unaff_x19[0x1e] == 0) goto LAB_0249920c;
        fVar52 = *(float *)(lVar45 + lVar40 * 0x178 + 0x14c);
        fVar51 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
        fVar52 = fVar52 + fVar49 * fVar51;
        if (fVar52 <= fStack00000000000000d0) {
          fStack00000000000000d0 = fVar52;
        }
        uVar60 = (ulong)(uint)fStack00000000000000d0;
        fStack000000000000004c = (float)iVar17;
      }
      if (!bVar11) {
        bVar11 = false;
        if ((((uVar42 == 0xd) || ((uVar42 | 1) == 0xb)) || ((int)uVar4 < (int)uVar15)) ||
           ((bool)(bVar13 ^ 1))) goto LAB_024980d0;
        if (uVar15 == uVar4) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar22 = FUN_016fa418(uVar42,0);
          if ((uVar22 & 1) != 0) goto LAB_02497fc4;
        }
        if ((*in_stack_00000150 == 0) ||
           (lVar45 = *(long *)(*in_stack_00000150 + 0x38), lVar45 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar45 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar45 = lVar45 + lVar40 * 0x178;
        fStack000000000000005c = *(float *)(lVar45 + 0x160);
        fStack0000000000000058 = *(float *)(lVar45 + 0x11c);
        bVar11 = fVar49 != 0.0;
        fVar51 = fStack000000000000005c;
        if (bVar11) {
          fVar51 = fVar49;
        }
        fVar49 = fVar51;
        uStack0000000000000060 = *(uint *)(lVar45 + 0x168);
        fStack0000000000000054 = 0.0;
        fVar51 = fVar69;
        if (bVar11) {
          fVar51 = fStack00000000000000cc;
        }
        uVar60 = (ulong)(uint)fVar51;
        fStack0000000000000050 = fStack00000000000000d0;
        fStack00000000000000cc = fVar51;
      }
      if (*in_stack_00000148 == 1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar45 = *(long *)(*in_stack_00000150 + 0x38), lVar45 != 0)) {
          if (uVar15 < *(uint *)(lVar45 + 0x18)) {
            lVar45 = lVar45 + lVar40 * 0x178;
            lVar36 = *unaff_x19;
            uVar62 = *(uint *)(lVar45 + 0x128);
            uVar76 = *(undefined4 *)(lVar45 + 0x160);
            goto LAB_0249805c;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      if ((uVar15 == uVar5) || ((int)uVar4 <= (int)uVar15)) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar22 = FUN_016f68bc(uVar42,0);
        if ((*in_stack_00000150 != 0) &&
           (lVar45 = *(long *)(*in_stack_00000150 + 0x38), lVar45 != 0)) {
          if (uVar42 == 0x200b || (uVar22 & 1) != 0) {
            lVar36 = lVar23;
            if (*(uint *)(lVar45 + 0x18) <= uVar4)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          else {
            lVar36 = lVar40;
            if (*(uint *)(lVar45 + 0x18) <= uVar15)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          lVar45 = lVar45 + lVar36 * 0x178;
          uVar62 = *(uint *)(lVar45 + 0x128);
          uVar76 = *(undefined4 *)(lVar45 + 0x160);
          pcVar33 = *(code **)(*unaff_x19 + 0x908);
          goto LAB_02498064;
        }
        goto LAB_0249920c;
      }
      if (!bVar13) {
        if ((*in_stack_00000150 != 0) &&
           (lVar45 = *(long *)(*in_stack_00000150 + 0x38), lVar45 != 0)) {
          uVar62 = *(uint *)(lVar45 + 0x18);
          goto LAB_02497adc;
        }
        goto LAB_0249920c;
      }
      if ((int)uVar15 < (int)(*in_stack_00000148 - 1)) {
        if ((*in_stack_00000150 == 0) ||
           (lVar45 = *(long *)(*in_stack_00000150 + 0x38), lVar45 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar45 + 0x18) <= uVar37)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar22 = FUN_024a9e4c(uStack0000000000000060,*(undefined4 *)(lVar45 + lVar31),0);
        if ((uVar22 & 1) == 0) {
          if ((*in_stack_00000150 != 0) &&
             (lVar45 = *(long *)(*in_stack_00000150 + 0x38), lVar45 != 0)) {
            if (uVar15 < *(uint *)(lVar45 + 0x18)) {
              lVar45 = lVar45 + lVar40 * 0x178;
              uVar63 = (ulong)*(uint *)(lVar45 + 0x128);
              uVar61 = (ulong)(uint)fStack0000000000000054;
              uVar60 = (ulong)(uint)fStack0000000000000050;
              (**(code **)(*unaff_x19 + 0x908))
                        (fStack0000000000000058,uVar60,uVar61,uVar63,fStack00000000000000d0,0,
                         fStack000000000000005c,*(undefined4 *)(lVar45 + 0x160));
              puVar9 = System_Threading_Mutex_TypeInfo;
              lVar45 = *(long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(lVar45 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar45 = *(long *)puVar9;
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
    if ((*in_stack_00000150 == 0) || (lVar45 = *(long *)(*in_stack_00000150 + 0x38), lVar45 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar45 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if (lVar38 == 0) goto LAB_0249920c;
    uVar62 = *(uint *)(lVar45 + lVar40 * 0x178 + 400);
    fVar51 = (float)FUN_026fd1f0(lVar38 + 0x50,0);
    if ((uVar62 >> 6 & 1) == 0) {
      if (bVar6) {
        if ((*in_stack_00000150 == 0) ||
           (lVar45 = *(long *)(*in_stack_00000150 + 0x38), lVar45 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar45 + 0x18) <= uVar37 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar62 = *(uint *)(lVar45 + lVar31 + -0x330);
        pcVar33 = *(code **)(*unaff_x19 + 0x908);
        fVar72 = fStack0000000000000088 * fVar51 + *(float *)(lVar45 + lVar31 + -0x30c);
LAB_02498648:
        uVar63 = (ulong)uVar62;
        uVar60 = (ulong)(uint)in_stack_00000078._4_4_;
        uVar61 = (ulong)uStack000000000000006c;
        (*pcVar33)(fStack0000000000000080,uVar60,uVar61,uVar63,fVar72,0,fStack0000000000000088,
                   fStack0000000000000088);
      }
LAB_0249867c:
      bVar6 = false;
    }
    else {
      lVar45 = *in_stack_00000150;
      if ((lVar45 == 0) || (lVar36 = *(long *)(lVar45 + 0x38), lVar36 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar36 + 0x18) <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      *(int *)(lVar36 + lVar40 * 0x178 + 0x174) = iVar16;
      if ((((int)unaff_x19[100] < (int)uVar15) || ((int)unaff_x19[0x65] < (int)uVar34)) ||
         (((int)unaff_x19[0x5b] == 5 &&
          (*(int *)(lVar36 + lVar40 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
        bVar13 = false;
      }
      else {
        bVar13 = true;
      }
      if ((((uVar42 == 0xd) || ((uVar42 | 1) == 0xb)) || ((int)uVar4 < (int)uVar15)) ||
         (bVar6 || !bVar13)) {
LAB_02498228:
        if (!bVar6) goto LAB_0249867c;
      }
      else {
        if (uVar15 == uVar4) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar22 = FUN_016fa418(uVar42,0);
          if ((uVar22 & 1) != 0) goto LAB_02498228;
          lVar45 = *in_stack_00000150;
          if (lVar45 == 0) goto LAB_0249920c;
        }
        lVar45 = *(long *)(lVar45 + 0x38);
        if (lVar45 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar45 + 0x18) <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar45 = lVar45 + lVar40 * 0x178;
        fStack0000000000000034 = *(float *)(lVar45 + 0x60);
        fStack0000000000000088 = *(float *)(lVar45 + 0x160);
        fStack0000000000000030 = *(float *)(lVar45 + 0x14c);
        uVar60 = (ulong)(uint)fStack0000000000000030;
        fStack0000000000000080 = *(float *)(lVar45 + 0x11c);
        in_stack_00000078._4_4_ = fVar51 * fStack0000000000000088 + fStack0000000000000030;
        uStack000000000000006c = 0;
      }
      uVar62 = *in_stack_00000148;
      if (uVar62 == 1) {
LAB_024983ac:
        if ((*in_stack_00000150 != 0) &&
           (lVar45 = *(long *)(*in_stack_00000150 + 0x38), lVar45 != 0)) {
          if (uVar15 < *(uint *)(lVar45 + 0x18)) {
            lVar45 = lVar45 + lVar40 * 0x178;
            lVar23 = *unaff_x19;
            uVar62 = *(uint *)(lVar45 + 0x128);
            fVar72 = *(float *)(lVar45 + 0x14c);
LAB_024983d8:
            pcVar33 = *(code **)(lVar23 + 0x908);
FUN_02498644:
            fVar72 = fVar51 * fStack0000000000000088 + fVar72;
            goto LAB_02498648;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      if (uVar15 == uVar5) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar22 = FUN_016f68bc(uVar42,0);
        if ((*in_stack_00000150 != 0) &&
           (lVar45 = *(long *)(*in_stack_00000150 + 0x38), lVar45 != 0)) {
          uVar62 = *(uint *)(lVar45 + 0x18);
          if (uVar42 == 0x200b || (uVar22 & 1) != 0) {
            if (uVar62 <= uVar4)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          else {
LAB_02498620:
            lVar23 = lVar40;
            if (uVar62 <= uVar15)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
LAB_02498628:
          lVar45 = lVar45 + lVar23 * 0x178;
          fVar72 = *(float *)(lVar45 + 0x14c);
          uVar62 = *(uint *)(lVar45 + 0x128);
          pcVar33 = *(code **)(*unaff_x19 + 0x908);
          goto FUN_02498644;
        }
        goto LAB_0249920c;
      }
      if ((int)uVar15 < (int)uVar62) {
        lVar45 = *in_stack_00000150;
        if ((lVar45 != 0) && (lVar36 = *(long *)(lVar45 + 0x38), lVar36 != 0)) {
          if (uVar37 < *(uint *)(lVar36 + 0x18)) {
            if (*(float *)(lVar36 + lVar31 + -0x108) == fStack0000000000000034) {
              fVar52 = *(float *)(lVar36 + lVar31 + -0x1c);
              if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar60 = (ulong)(uint)fStack0000000000000030;
              uVar22 = FUN_024aa280(fVar72 + fVar52,uVar60,0);
              if ((uVar22 & 1) != 0) {
                uVar62 = *in_stack_00000148;
                goto 
                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractor_OnSelectEntering
                ;
              }
              lVar45 = *in_stack_00000150;
              if (lVar45 == 0) goto LAB_0249920c;
            }
            lVar45 = *(long *)(lVar45 + 0x38);
            if (lVar45 != 0) {
              uVar62 = *(uint *)(lVar45 + 0x18);
              if ((int)uVar15 <= (int)uVar4) goto LAB_02498620;
              if (uVar4 < uVar62) goto LAB_02498628;
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
      if ((int)uVar15 < (int)uVar62) {
        iVar17 = FUN_02681c0c(lVar38,0);
        if (*(uint *)(lVar28 + 0x18) <= uVar37)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar45 = *(long *)(lVar28 + lVar31 + -0x130);
        if (lVar45 == 0) goto LAB_0249920c;
        iVar18 = FUN_02681c0c(lVar45,0);
        if (iVar17 != iVar18) goto LAB_024983ac;
      }
      if (!bVar13) {
        if ((*in_stack_00000150 != 0) &&
           (lVar45 = *(long *)(*in_stack_00000150 + 0x38), lVar45 != 0)) {
          if (uVar37 - 2 < *(uint *)(lVar45 + 0x18)) {
            lVar23 = *unaff_x19;
            uVar62 = *(uint *)(lVar45 + lVar31 + -0x330);
            fVar72 = *(float *)(lVar45 + lVar31 + -0x30c);
            goto LAB_024983d8;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      bVar6 = true;
    }
    if ((*in_stack_00000150 == 0) || (lVar45 = *(long *)(*in_stack_00000150 + 0x38), lVar45 == 0))
    goto LAB_0249920c;
    uVar62 = (uint)*(undefined8 *)(lVar45 + 0x18);
    if (uVar62 <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar45 + lVar40 * 0x178 + 0x191) >> 1 & 1) == 0) {
      if (bVar12) {
        uVar61 = (ulong)uStack00000000000000a0;
        uVar63 = (ulong)(uint)fStack00000000000000a4;
        uVar60 = (ulong)(uint)fStack00000000000000b4;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar60,uVar61,uVar63,fStack00000000000000a8,uVar61);
      }
LAB_024986e8:
      bVar12 = false;
    }
    else {
      if ((((int)unaff_x19[100] < (int)uVar15) || ((int)unaff_x19[0x65] < (int)uVar34)) ||
         (((int)unaff_x19[0x5b] == 5 &&
          (*(int *)(lVar45 + lVar40 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
        bVar13 = false;
      }
      else {
        bVar13 = true;
      }
      if (!bVar12) {
        if ((((uVar42 == 0xd) || ((uVar42 | 1) == 0xb)) || ((int)uVar4 < (int)uVar15)) || (!bVar13))
        goto LAB_024986e8;
        if (uVar15 == uVar4) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar22 = FUN_016fa418(uVar42,0);
          if ((uVar22 & 1) != 0) goto LAB_024986e8;
        }
        puVar9 = System_Threading_Mutex_TypeInfo;
        lVar23 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar23 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar23 = *(long *)puVar9;
        }
        if ((*in_stack_00000150 == 0) ||
           (lVar45 = *(long *)(*in_stack_00000150 + 0x38), lVar45 == 0)) goto LAB_0249920c;
        uVar62 = (uint)*(undefined8 *)(lVar45 + 0x18);
        if (uVar62 <= uVar15)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar23 = *(long *)(lVar23 + 0xb8);
        lVar36 = lVar45 + lVar40 * 0x178;
        in_stack_00001798 = *(undefined8 *)(lVar36 + 0x184);
        in_stack_00001790 = *(undefined8 *)(lVar36 + 0x17c);
        fStack00000000000000b0 = *(float *)(lVar23 + 0x1598);
        in_stack_000017a0 = *(float *)(lVar36 + 0x18c);
        fStack00000000000000b4 = *(float *)(lVar23 + 0x159c);
        fStack00000000000000a4 = *(float *)(lVar23 + 0x15a0);
        fStack00000000000000a8 = *(float *)(lVar23 + 0x15a4);
        uStack00000000000000a0 = 0;
      }
      if (uVar62 <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar45 = lVar45 + lVar40 * 0x178;
      fVar53 = *(float *)(lVar45 + 0x188);
      uVar21 = *(undefined8 *)(lVar45 + 0x17c);
      fVar66 = *(float *)(lVar45 + 0x184);
      uVar20 = *(undefined8 *)(lVar45 + 0x184);
      fVar54 = *(float *)(lVar45 + 0x18c);
      fVar72 = *(float *)(lVar45 + 0x11c);
      fVar52 = *(float *)(lVar45 + 0x128);
      fVar73 = *(float *)(lVar45 + 0x148);
      fVar51 = *(float *)(lVar45 + 0x150);
      in_stack_00000158 = uVar21;
      fStack0000000000000160 = fVar66;
      fStack0000000000000164 = fVar53;
      in_stack_00000168 = fVar54;
      in_stack_00000170 = in_stack_00001790;
      in_stack_00000178 = in_stack_00001798;
      in_stack_00000180 = in_stack_000017a0;
      uVar22 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
      lVar45 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
      if ((uVar22 & 1) == 0) {
        if (*(int *)(lVar45 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar45);
        }
        fVar72 = fVar72 - (float)((ulong)in_stack_00001790 >> 0x20);
        if (fVar72 <= fStack00000000000000b0) {
          fStack00000000000000b0 = fVar72;
        }
        fVar51 = fVar51 - in_stack_000017a0;
        uVar60 = (ulong)(uint)fVar51;
        fVar52 = fVar52 + (float)in_stack_00001798;
        uVar61 = (ulong)(uint)fVar52;
        if (fVar51 <= fStack00000000000000b4) {
          fStack00000000000000b4 = fVar51;
        }
        fVar73 = fVar73 + (float)((ulong)in_stack_00001798 >> 0x20);
        uVar63 = (ulong)(uint)fVar73;
        if (fStack00000000000000a4 <= fVar52) {
          fStack00000000000000a4 = fVar52;
        }
        if (fStack00000000000000a8 <= fVar73) {
          fStack00000000000000a8 = fVar73;
        }
      }
      else {
        if (*(int *)(lVar45 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar45);
        }
        fVar72 = (fVar72 + (fStack00000000000000a4 - (float)in_stack_00001798)) * 0.5;
        uVar63 = (ulong)(uint)fVar72;
        if (fVar51 <= fStack00000000000000b4) {
          fStack00000000000000b4 = fVar51;
        }
        uVar60 = (ulong)(uint)fStack00000000000000b4;
        uVar61 = (ulong)uStack00000000000000a0;
        if (fStack00000000000000a8 <= fVar73) {
          fStack00000000000000a8 = fVar73;
        }
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar60,uVar61,uVar63,fStack00000000000000a8,uVar61);
        fStack00000000000000b4 = fVar51 - fVar54;
        fStack00000000000000a4 = fVar52 + fVar66;
        uStack00000000000000a0 = 0;
        fStack00000000000000a8 = fVar73 + fVar53;
        fStack00000000000000b0 = fVar72;
        in_stack_00001790 = uVar21;
        in_stack_00001798 = uVar20;
        in_stack_000017a0 = fVar54;
      }
      if (((*in_stack_00000148 == 1) || (uVar15 == uVar5)) ||
         (((int)uVar4 <= (int)uVar15 || (!bVar13)))) {
        uVar61 = (ulong)uStack00000000000000a0;
        uVar63 = (ulong)(uint)fStack00000000000000a4;
        uVar60 = (ulong)(uint)fStack00000000000000b4;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar60,uVar61,uVar63,fStack00000000000000a8,uVar61);
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
    }
    uVar15 = *in_stack_00000148;
    iVar48 = iVar48 + 1;
    lVar31 = lVar31 + 0x178;
    bVar13 = (int)uVar37 < (int)uVar15;
    uVar62 = uVar34;
    uVar37 = uVar37 + 1;
  } while (bVar13);
  lVar28 = *in_stack_00000150;
  if (lVar28 != 0) {
    iVar16 = uVar34 + 1;
LAB_02498c58:
    puVar10 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    puVar9 = PTR_DAT_033ed410;
    *(uint *)(lVar28 + 0x18) = uVar15;
    lVar31 = unaff_x19[0xd3];
    *(int *)(lVar28 + 0x2c) = iVar16;
    iVar16 = iStack00000000000000ac;
    if ((int)uVar15 < 1) {
      iVar16 = 1;
    }
    if (iStack00000000000000ac == 0) {
      iVar16 = 1;
    }
    *(int *)(lVar28 + 0x1c) = (int)lVar31;
    *(int *)(lVar28 + 0x24) = iVar16;
    *(int *)(lVar28 + 0x30) = (int)unaff_x19[0x95] + 1;
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
    lVar28 = unaff_x19[0xde];
    if (lVar28 != 0) {
      (**(code **)(lVar28 + 0x18))
                (*(undefined8 *)(lVar28 + 0x40),*in_stack_00000150,*(undefined8 *)(lVar28 + 0x28));
    }
    if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
    iVar16 = FUN_02859dc4(unaff_x19[0xe4],0);
    if (iVar16 != 0x19) {
      lVar28 = unaff_x19[0xe4];
      if (lVar28 == 0) goto LAB_0249920c;
      uVar15 = FUN_02859dc4(lVar28,0);
      FUN_02859e00(lVar28,uVar15 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
      if ((*in_stack_00000150 == 0) || (lVar28 = *(long *)(*in_stack_00000150 + 0x60), lVar28 == 0))
      goto LAB_0249920c;
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(int *)(lVar28 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      FUN_024e8000(lVar28 + 0x20,1,0);
    }
    if (unaff_x19[0x73] != 0) {
      UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
                (unaff_x19[0x73],0);
      if ((unaff_x19[0x6c] != 0) && (lVar28 = *(long *)(unaff_x19[0x6c] + 0x60), lVar28 != 0)) {
        if (*(int *)(lVar28 + 0x18) == 0) {
UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (unaff_x19[0x73] != 0) {
          FUN_0266b9c4(unaff_x19[0x73],*(undefined8 *)(lVar28 + 0x30),0);
          if ((unaff_x19[0x6c] != 0) && (lVar28 = *(long *)(unaff_x19[0x6c] + 0x60), lVar28 != 0)) {
            if (*(int *)(lVar28 + 0x18) == 0)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            if (unaff_x19[0x73] != 0) {
              FUN_0266bbc8(unaff_x19[0x73],*(undefined8 *)(lVar28 + 0x48),0);
              if ((unaff_x19[0x6c] != 0) &&
                 (lVar28 = *(long *)(unaff_x19[0x6c] + 0x60), lVar28 != 0)) {
                if (*(int *)(lVar28 + 0x18) == 0)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                if (unaff_x19[0x73] != 0) {
                  FUN_0266bc74(unaff_x19[0x73],*(undefined8 *)(lVar28 + 0x50),0);
                  if ((unaff_x19[0x6c] != 0) &&
                     (lVar28 = *(long *)(unaff_x19[0x6c] + 0x60), lVar28 != 0)) {
                    if (*(int *)(lVar28 + 0x18) == 0)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    if (unaff_x19[0x73] != 0) {
                      FUN_0266c1dc(unaff_x19[0x73],*(undefined8 *)(lVar28 + 0x58),0);
                      if (unaff_x19[0x73] != 0) {
                        FUN_0266ed90(unaff_x19[0x73],0);
                        if (unaff_x19[0xe3] != 0) {
                          FUN_02858f1c(unaff_x19[0xe3],unaff_x19[0x73],0);
                          if (unaff_x19[0xe3] != 0) {
                            uVar20 = FUN_02858bac(unaff_x19[0xe3],0);
                            if (unaff_x19[0xe3] != 0) {
                              uVar15 = FUN_02858a14(unaff_x19[0xe3],0);
                              lVar28 = *in_stack_00000150;
                              if (lVar28 != 0) {
                                lVar45 = 0;
                                lVar31 = 0;
                                do {
                                  uVar22 = lVar31 + 1;
                                  if ((long)*(int *)(lVar28 + 0x34) <= (long)uVar22)
                                  goto LAB_02496098;
                                  lVar28 = *(long *)(lVar28 + 0x60);
                                  if (lVar28 == 0) break;
                                  if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  if (*(uint *)(lVar28 + 0x18) <= uVar22)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  FUN_024e7ecc(lVar28 + lVar45 + 0x70,0);
                                  lVar28 = unaff_x19[0xe0];
                                  if (lVar28 == 0) break;
                                  if (*(uint *)(lVar28 + 0x18) <= uVar22)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  uVar21 = *(undefined8 *)(lVar28 + lVar31 * 8 + 0x28);
                                  if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  uVar25 = FUN_0268b4e0(uVar21,0,0);
                                  if ((uVar25 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
                                      if ((*in_stack_00000150 == 0) ||
                                         (lVar28 = *(long *)(*in_stack_00000150 + 0x60), lVar28 == 0
                                         )) break;
                                      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                                        thunk_FUN_00d32864();
                                      }
                                      if (*(uint *)(lVar28 + 0x18) <= uVar22)
                                      goto 
                                      UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                      ;
                                      FUN_024e8000(lVar28 + lVar45 + 0x70,1,0);
                                    }
                                    lVar28 = unaff_x19[0xe0];
                                    if (lVar28 == 0) break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar28 = *(long *)(lVar28 + lVar31 * 8 + 0x28);
                                    if (lVar28 == 0) break;
                                    lVar28 = FUN_024f0144(lVar28,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar23 = *(long *)(*in_stack_00000150 + 0x60), lVar23 == 0))
                                    break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar28 == 0) break;
                                    FUN_0266b9c4(lVar28,*(undefined8 *)(lVar23 + lVar45 + 0x80),0);
                                    lVar28 = unaff_x19[0xe0];
                                    if (lVar28 == 0) break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar28 = *(long *)(lVar28 + lVar31 * 8 + 0x28);
                                    if (lVar28 == 0) break;
                                    lVar28 = FUN_024f0144(lVar28,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar23 = *(long *)(*in_stack_00000150 + 0x60), lVar23 == 0))
                                    break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar28 == 0) break;
                                    FUN_0266bbc8(lVar28,*(undefined8 *)(lVar23 + lVar45 + 0x98),0);
                                    lVar28 = unaff_x19[0xe0];
                                    if (lVar28 == 0) break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar28 = *(long *)(lVar28 + lVar31 * 8 + 0x28);
                                    if (lVar28 == 0) break;
                                    lVar28 = FUN_024f0144(lVar28,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar23 = *(long *)(*in_stack_00000150 + 0x60), lVar23 == 0))
                                    break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar28 == 0) break;
                                    FUN_0266bc74(lVar28,*(undefined8 *)(lVar23 + lVar45 + 0xa0),0);
                                    lVar28 = unaff_x19[0xe0];
                                    if (lVar28 == 0) break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar28 = *(long *)(lVar28 + lVar31 * 8 + 0x28);
                                    if (lVar28 == 0) break;
                                    lVar28 = FUN_024f0144(lVar28,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar23 = *(long *)(*in_stack_00000150 + 0x60), lVar23 == 0))
                                    break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar28 == 0) break;
                                    FUN_0266c1dc(lVar28,*(undefined8 *)(lVar23 + lVar45 + 0xa8),0);
                                    lVar28 = unaff_x19[0xe0];
                                    if (lVar28 == 0) break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar28 = *(long *)(lVar28 + lVar31 * 8 + 0x28);
                                    if ((lVar28 == 0) ||
                                       (lVar28 = FUN_024f0144(lVar28,0), lVar28 == 0)) break;
                                    FUN_0266ed90(lVar28,0);
                                    lVar28 = unaff_x19[0xe0];
                                    if (lVar28 == 0) break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar28 = *(long *)(lVar28 + lVar31 * 8 + 0x28);
                                    if (lVar28 == 0) break;
                                    lVar28 = FUN_02738ef4(lVar28,0);
                                    lVar23 = unaff_x19[0xe0];
                                    if (lVar23 == 0) break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar23 = *(long *)(lVar23 + lVar31 * 8 + 0x28);
                                    if ((lVar23 == 0) ||
                                       (uVar21 = FUN_024f0144(lVar23,0), lVar28 == 0)) break;
                                    FUN_02858f1c(lVar28,uVar21,0);
                                    lVar28 = unaff_x19[0xe0];
                                    if (lVar28 == 0) break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar28 = *(long *)(lVar28 + lVar31 * 8 + 0x28);
                                    if ((lVar28 == 0) ||
                                       (lVar28 = FUN_02738ef4(lVar28,0), lVar28 == 0)) break;
                                    FUN_02858b14(uVar20,uVar60,uVar61,uVar63,lVar28,0);
                                    lVar28 = unaff_x19[0xe0];
                                    if (lVar28 == 0) break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar28 = *(long *)(lVar28 + lVar31 * 8 + 0x28);
                                    if ((lVar28 == 0) ||
                                       (lVar28 = FUN_02738ef4(lVar28,0), lVar28 == 0)) break;
                                    FUN_02858a50(lVar28,uVar15 & 1,0);
                                    lVar28 = unaff_x19[0xe0];
                                    if (lVar28 == 0) break;
                                    if (*(uint *)(lVar28 + 0x18) <= uVar22)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    plVar43 = *(long **)(lVar28 + lVar31 * 8 + 0x28);
                                    uVar19 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar43 == (long *)0x0) break;
                                    (**(code **)(*plVar43 + 0x2c8))
                                              (plVar43,uVar19 & 1,*(undefined8 *)(*plVar43 + 0x2d0))
                                    ;
                                  }
                                  lVar28 = *in_stack_00000150;
                                  lVar31 = lVar31 + 1;
                                  lVar45 = lVar45 + 0x50;
                                } while (lVar28 != 0);
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


