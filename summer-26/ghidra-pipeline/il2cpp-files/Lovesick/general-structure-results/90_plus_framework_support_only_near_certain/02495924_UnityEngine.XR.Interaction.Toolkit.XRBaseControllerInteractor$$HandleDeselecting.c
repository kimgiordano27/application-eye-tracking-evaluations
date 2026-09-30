/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor$$HandleDeselecting
ENTRY_POINT: 02495924
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

void UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor__HandleDeselecting
               (undefined1 param_1 [16],ulong param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  double __x;
  undefined *puVar10;
  undefined *puVar11;
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
  long lVar22;
  int *piVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  undefined1 uVar28;
  char cVar29;
  long lVar30;
  undefined4 *puVar31;
  long lVar32;
  float *pfVar33;
  code *pcVar34;
  float *pfVar35;
  long lVar36;
  uint uVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long *unaff_x19;
  uint uVar42;
  long unaff_x21;
  long *plVar43;
  uint uVar44;
  long *unaff_x22;
  uint unaff_w24;
  long lVar45;
  long *plVar46;
  long unaff_x27;
  long *plVar47;
  uint unaff_w29;
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
  
code_r0x02495924:
  if (param_3 != 0) {
    uVar24 = FUN_0129aa60(param_3,&stack0x00000880,
                          *(undefined8 *)
                           System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                         );
    iVar18 = (int)unaff_x27;
    if ((int)*in_stack_00000148 < (int)in_stack_00000078._4_4_) {
      lVar25 = FUN_024e94b0(0);
      if (((lVar25 == 0) || (*unaff_x22 == 0)) ||
         (lVar30 = *(long *)(*unaff_x22 + 0x38), lVar30 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar30 + 0x18) <= *in_stack_00000148 + 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (*(long *)(lVar25 + 0x18) == 0) goto LAB_0249920c;
      uVar19 = (uint)*(ushort *)(lVar30 + (long)(int)(*in_stack_00000148 + 1) * (long)iVar18 + 0x20)
      ;
      uVar26 = FUN_0129aa60(*(long *)(lVar25 + 0x18),&stack0x00000880,
                            *(undefined8 *)
                             System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                           );
      if ((uVar24 & 1) == 0) {
        if ((uVar26 & 1) != 0) {
          if ((bStack000000000000005c & 1) == 0) goto LAB_024959d4;
          if (unaff_w29 == 0) goto LAB_02495b30;
          goto LAB_02495af8;
        }
LAB_02495bc4:
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_024d69d4();
        bStack000000000000005c = 0;
        goto LAB_02495b70;
      }
    }
    else {
      uVar19 = in_stack_000017bc;
      if ((uVar24 & 1) == 0) goto LAB_02495bc4;
    }
    if ((uint)unaff_x21 != unaff_w24 || ((bStack000000000000005c ^ 0xff) & 1) != 0)
    goto LAB_02495b70;
LAB_02495af4:
    if (unaff_w29 != 0) goto LAB_02495af8;
LAB_02495b30:
    if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_024d69d4();
    bStack000000000000005c = 1;
LAB_02495b70:
    plVar43 = (long *)System_Threading_Mutex_TypeInfo;
    if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    plVar47 = (long *)StringLiteral_302;
    FUN_024d69d4();
    *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
LAB_02492630:
    fVar64 = (float)unaff_d13;
    in_stack_00001788 = in_stack_00001788 + 1;
    lVar25 = unaff_x19[0x8e];
    if (lVar25 != 0) {
      if ((int)in_stack_00001788 < (int)*(uint *)(lVar25 + 0x18)) {
        if (*(uint *)(lVar25 + 0x18) <= in_stack_00001788)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar15 = *(uint *)(lVar25 + (long)(int)in_stack_00001788 * 0xc + 0x20);
        if (uVar15 == 0) goto LAB_02495f1c;
        if (5 < in_stack_00000140) {
          uVar20 = FUN_0176eb1c(&stack0x000017bc,0);
          uVar21 = FUN_0176eb1c(&stack0x00001788,0);
          uVar20 = FUN_0160073c(*(undefined8 *)
                                 UnityEngine_Rendering_Universal_DebugValidationMode_var,uVar20,
                                *(undefined8 *)
                                 Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                                ,uVar21,0);
          if (*(int *)(*plVar47 + 0xe0) == 0) {
            thunk_FUN_00d32864(*plVar47);
          }
          FUN_026610e4(uVar20,0);
          in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
        }
        if ((*(char *)((long)unaff_x19 + 0x2fa) != '\0') && (uVar15 == 0x3c)) goto code_r0x02492440;
        if ((*in_stack_00000150 != 0) &&
           (lVar25 = *(long *)(*in_stack_00000150 + 0x38), lVar25 != 0)) {
          if (*in_stack_00000148 < *(uint *)(lVar25 + 0x18)) {
            lVar25 = lVar25 + (int)*in_stack_00000148 * unaff_x27;
            *(undefined4 *)((long)unaff_x19 + 0x63c) = *(undefined4 *)(lVar25 + 0x2c);
            *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar25 + 0x58);
            unaff_x19[0x1f] = *(long *)(lVar25 + 0x38);
            goto 
            UnityEngine_XR_Interaction_Toolkit_XRInteractorReticleVisual__get_prefabScalingFactor;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
LAB_02495f1c:
      fVar64 = (float)param_2;
      if (((char)unaff_x19[0x46] != '\0') &&
         (fVar64 = DAT_02956ccc,
         DAT_02956ccc < *(float *)((long)unaff_x19 + 0x234) - *(float *)(unaff_x19 + 0x47))) {
        fVar64 = *(float *)((long)unaff_x19 + 0x1dc);
        fVar74 = *(float *)((long)unaff_x19 + 0x24c);
        if ((fVar64 < fVar74) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
          if (*(float *)((long)unaff_x19 + 0x2cc) < *(float *)(unaff_x19 + 0x59) / 100.0) {
            *(undefined4 *)((long)unaff_x19 + 0x2cc) = 0;
          }
          fVar49 = (*(float *)((long)unaff_x19 + 0x234) - fVar64) * 0.5;
          if (fVar49 <= DAT_028aa298) {
            fVar49 = DAT_028aa298;
          }
          *(float *)(unaff_x19 + 0x47) = fVar64;
          fVar49 = (fVar64 + fVar49) * 20.0 + 0.5;
          fVar64 = DAT_02958220;
          if (fVar49 != INFINITY) {
            fVar64 = (float)(int)fVar49 / 20.0;
          }
          if (fVar74 <= fVar64) {
            fVar64 = fVar74;
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
                                      Method_UnityEngine_GameObject_GetComponents<Component>__,
                              uVar21,0);
        if (*(int *)(*plVar47 + 0xe0) == 0) {
          thunk_FUN_00d32864(*plVar47);
        }
        FUN_02660dac(uVar20,0);
      }
      if ((*in_stack_00000148 == 0) || ((*in_stack_00000148 == 1 && (in_stack_000017bc == 3)))) {
        (**(code **)(*unaff_x19 + 0x948))();
        goto LAB_02496098;
      }
      lVar25 = *plVar43;
      if (*(int *)(lVar25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar25 = *plVar43;
      }
      puVar10 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      lVar25 = **(long **)(lVar25 + 0xb8);
      if (lVar25 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0xd0))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      iVar18 = *(int *)(lVar25 + (long)(int)*(uint *)(unaff_x19 + 0xd0) * 0x38 + 0x54) << 2;
      if ((*in_stack_00000150 == 0) || (lVar25 = *(long *)(*in_stack_00000150 + 0x60), lVar25 == 0))
      goto LAB_0249920c;
      if (*(int *)(*(long *)PTR_DAT_033ed410 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(int *)(lVar25 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      FUN_024e7d94(lVar25 + 0x20,0,0);
      if (DAT_03774d76 == '\0') {
        thunk_FUN_00d48444(
                          Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          );
        DAT_03774d76 = '\x01';
      }
      puVar11 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
      iVar14 = (int)unaff_x19[0x4d];
      in_stack_000000c8 =
           **(float **)
             (*(long *)
               Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
             0xb8);
      uStack00000000000000c0 =
           *(undefined8 *)
            (*(float **)
              (*(long *)
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
              0xb8) + 1);
      lVar25 = unaff_x19[0xe2];
      _in_stack_00000090 = uStack00000000000000c0;
      fStack0000000000000098 = in_stack_000000c8;
      if (iVar14 < 0x401) {
        if (iVar14 == 0x100) {
          if (lVar25 == 0) goto LAB_0249920c;
          if (*(uint *)(lVar25 + 0x18) < 2)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar20 = *(undefined8 *)(lVar25 + 0x30);
          if ((int)unaff_x19[0x5b] == 5) {
            if ((*in_stack_00000150 == 0) ||
               (lVar30 = *(long *)(*in_stack_00000150 + 0x58), lVar30 == 0)) goto LAB_0249920c;
            if (*(uint *)(lVar30 + 0x18) <= uStack000000000000002c)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            fVar64 = *(float *)(lVar30 + (long)(int)uStack000000000000002c * 0x14 + 0x28);
          }
          else {
            fVar64 = *(float *)(unaff_x19 + 0x96);
          }
          fStack0000000000000098 = fStack0000000000000030 + 0.0 + *(float *)(lVar25 + 0x2c);
          fVar64 = (0.0 - fVar64) - fStack0000000000000020;
        }
        else if (iVar14 == 0x200) {
          if (lVar25 == 0) goto LAB_0249920c;
          if ((*(int *)(lVar25 + 0x18) == 1) || (*(int *)(lVar25 + 0x18) == 0))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fStack0000000000000098 = (*(float *)(lVar25 + 0x20) + *(float *)(lVar25 + 0x2c)) * 0.5;
          uVar20 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar25 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar25 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar25 + 0x24) +
                            (float)*(undefined8 *)(lVar25 + 0x30)) * 0.5);
          if ((int)unaff_x19[0x5b] == 5) {
            if ((*in_stack_00000150 == 0) ||
               (lVar25 = *(long *)(*in_stack_00000150 + 0x58), lVar25 == 0)) goto LAB_0249920c;
            if (*(uint *)(lVar25 + 0x18) <= uStack000000000000002c)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            lVar25 = lVar25 + (long)(int)uStack000000000000002c * 0x14;
            fStack0000000000000098 = fStack0000000000000030 + 0.0 + fStack0000000000000098;
            fVar64 = ((fStack0000000000000020 + *(float *)(lVar25 + 0x28) +
                      *(float *)(lVar25 + 0x30)) - fStack0000000000000024) * -0.5 + 0.0;
          }
          else {
            fStack0000000000000098 = fStack0000000000000030 + 0.0 + fStack0000000000000098;
            fVar64 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x96) + in_stack_000017b8) -
                     fStack0000000000000024) * -0.5 + 0.0;
          }
        }
        else {
          if (iVar14 != 0x400) goto LAB_024965d0;
          if (lVar25 == 0) goto LAB_0249920c;
          if (*(int *)(lVar25 + 0x18) == 0)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar20 = *(undefined8 *)(lVar25 + 0x24);
          if ((int)unaff_x19[0x5b] == 5) {
            if ((*in_stack_00000150 == 0) ||
               (lVar30 = *(long *)(*in_stack_00000150 + 0x58), lVar30 == 0)) goto LAB_0249920c;
            if (*(uint *)(lVar30 + 0x18) <= uStack000000000000002c)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            in_stack_000017b8 = *(float *)(lVar30 + (long)(int)uStack000000000000002c * 0x14 + 0x30)
            ;
          }
          fStack0000000000000098 = fStack0000000000000030 + 0.0 + *(float *)(lVar25 + 0x20);
          fVar64 = fStack0000000000000024 + (0.0 - in_stack_000017b8);
        }
        _in_stack_00000090 = CONCAT44((float)((ulong)uVar20 >> 0x20) + 0.0,(float)uVar20 + fVar64);
      }
      else if (iVar14 == 0x800) {
        if (lVar25 == 0) goto LAB_0249920c;
        if ((*(int *)(lVar25 + 0x18) == 1) || (*(int *)(lVar25 + 0x18) == 0))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar64 = ((float)*(undefined8 *)(lVar25 + 0x24) + (float)*(undefined8 *)(lVar25 + 0x30)) *
                 0.5;
        fStack0000000000000098 =
             fStack0000000000000030 + 0.0 +
             (*(float *)(lVar25 + 0x20) + *(float *)(lVar25 + 0x2c)) * 0.5;
        _in_stack_00000090 =
             CONCAT44(((float)((ulong)*(undefined8 *)(lVar25 + 0x24) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(lVar25 + 0x30) >> 0x20)) * 0.5 + 0.0,
                      fVar64 + 0.0);
      }
      else {
        if (iVar14 == 0x1000) {
          if (lVar25 == 0) goto LAB_0249920c;
          if ((*(int *)(lVar25 + 0x18) == 1) || (*(int *)(lVar25 + 0x18) == 0))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar64 = (float)*(undefined8 *)(lVar25 + 0x24) + (float)*(undefined8 *)(lVar25 + 0x30);
          fVar74 = (float)((ulong)*(undefined8 *)(lVar25 + 0x24) >> 0x20) +
                   (float)((ulong)*(undefined8 *)(lVar25 + 0x30) >> 0x20);
          fStack0000000000000020 =
               fStack0000000000000020 + *(float *)(unaff_x19 + 0x9c) + *(float *)(unaff_x19 + 0x9b);
          fStack0000000000000098 =
               fStack0000000000000030 + 0.0 +
               (*(float *)(lVar25 + 0x20) + *(float *)(lVar25 + 0x2c)) * 0.5;
        }
        else {
          if (iVar14 != 0x2000) goto LAB_024965d0;
          if (lVar25 == 0) goto LAB_0249920c;
          if ((*(int *)(lVar25 + 0x18) == 1) || (*(int *)(lVar25 + 0x18) == 0))
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar64 = (float)*(undefined8 *)(lVar25 + 0x24) + (float)*(undefined8 *)(lVar25 + 0x30);
          fVar74 = (float)((ulong)*(undefined8 *)(lVar25 + 0x24) >> 0x20) +
                   (float)((ulong)*(undefined8 *)(lVar25 + 0x30) >> 0x20);
          fStack0000000000000020 = *(float *)((long)unaff_x19 + 0x4b4) - fStack0000000000000020;
          fStack0000000000000098 =
               fStack0000000000000030 + 0.0 +
               (*(float *)(lVar25 + 0x20) + *(float *)(lVar25 + 0x2c)) * 0.5;
        }
        fVar64 = fVar64 * 0.5;
        _in_stack_00000090 =
             CONCAT44(fVar74 * 0.5 + 0.0,
                      fVar64 + (0.0 - (fStack0000000000000020 - fStack0000000000000024) * 0.5));
      }
LAB_024965d0:
      if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
      uVar20 = FUN_0285a188(unaff_x19[0xe4],0);
      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar10);
      }
      uVar24 = FUN_0268b4e0(uVar20,0,0);
      lVar25 = FUN_024c933c();
      if (lVar25 == 0) goto LAB_0249920c;
      FUN_026a125c(lVar25,0);
      *(float *)(unaff_x19 + 0xe1) = fVar64;
      if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
      iVar14 = FUN_02859798(unaff_x19[0xe4],0);
      if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
      fVar74 = (float)FUN_028598f0(unaff_x19[0xe4],0);
      __x = DAT_028aa048;
      dVar59 = modf(DAT_028aa048,(double *)&stack0x00000880);
      if (dVar59 == 0.5) {
        fVar49 = (float)(double)CONCAT44(in_stack_00000884,uVar19);
        if (((long)(double)CONCAT44(in_stack_00000884,uVar19) & 1U) != 0) {
          fVar49 = fVar49 + 1.0;
        }
      }
      else {
        fVar49 = 255.0;
      }
      dVar59 = modf(__x,(double *)&stack0x00000880);
      if (dVar59 == 0.5) {
        fVar68 = (float)(double)CONCAT44(in_stack_00000884,uVar19);
        if (((long)(double)CONCAT44(in_stack_00000884,uVar19) & 1U) != 0) {
          fVar68 = fVar68 + 1.0;
        }
      }
      else {
        fVar68 = 255.0;
      }
      dVar59 = modf(__x,(double *)&stack0x00000880);
      if (dVar59 == 0.5) {
        fVar71 = (float)(double)CONCAT44(in_stack_00000884,uVar19);
        if (((long)(double)CONCAT44(in_stack_00000884,uVar19) & 1U) != 0) {
          fVar71 = fVar71 + 1.0;
        }
      }
      else {
        fVar71 = 255.0;
      }
      dVar59 = modf(__x,(double *)&stack0x00000880);
      if (dVar59 == 0.5) {
        fVar51 = (float)(double)CONCAT44(in_stack_00000884,uVar19);
        if (((long)(double)CONCAT44(in_stack_00000884,uVar19) & 1U) != 0) {
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
      if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_037825d3 == '\0') {
        thunk_FUN_00d48444(Unity_AI_Navigation_NavMeshLink_TypeInfo);
        DAT_037825d3 = '\x01';
      }
      lVar25 = *(long *)puVar11;
      if (*(int *)(lVar25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar25 = *(long *)puVar11;
      }
      puVar31 = *(undefined4 **)(lVar25 + 0xb8);
      uVar26 = (ulong)(uint)puVar31[1];
      uVar60 = (ulong)(uint)puVar31[2];
      uVar62 = (ulong)(uint)puVar31[3];
      UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
                (*puVar31,uVar26,uVar60,uVar62,&stack0x00001790,0x4000ffff,0);
      if (*(int *)(*plVar43 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar25 = *in_stack_00000150;
      if (lVar25 == 0) goto LAB_0249920c;
      uVar19 = *in_stack_00000148;
      if ((int)uVar19 < 1) {
        iStack00000000000000ac = 0;
        iVar18 = 0;
        goto LAB_02498c58;
      }
      lVar25 = *(long *)(lVar25 + 0x38);
      fVar64 = ABS(fVar64);
      fVar50 = 1.0;
      if ((uVar24 & 1) == 0) {
        fVar50 = fVar64;
      }
      if (lVar25 == 0) goto LAB_0249920c;
      bVar9 = false;
      bVar8 = false;
      bVar13 = false;
      bVar12 = false;
      uStack0000000000000060 =
           (int)fVar49 & 0xffU | ((int)fVar68 & 0xffU) << 8 | ((int)fVar71 & 0xffU) << 0x10 |
           (int)fVar51 << 0x18;
      fStack00000000000000d0 = *(float *)(*(long *)(*plVar43 + 0xb8) + 0x15a8);
      fStack00000000000000cc = 0.0;
      fStack0000000000000058 = fStack00000000000000b0;
      _bStack000000000000005c = 0.0;
      fStack0000000000000034 = 0.0;
      fStack0000000000000088 = 0.0;
      fStack0000000000000030 = 0.0;
      uVar15 = 0;
      iVar48 = 0;
      lVar30 = 0x2e0;
      fVar68 = 0.0;
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
      in_stack_00000068._4_4_ = uStack00000000000000a0;
      uVar61 = 0;
      uVar37 = 1;
      goto LAB_02496a50;
    }
  }
  goto LAB_0249920c;
code_r0x02492440:
  *(undefined1 *)((long)unaff_x19 + 0x429) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
  uVar24 = FUN_024d0688();
  if (((uVar24 & 1) != 0) &&
     (in_stack_00001788 = in_stack_0000176c, in_stack_000017bc = uVar15,
     *(int *)((long)unaff_x19 + 0x63c) == 0)) goto LAB_02492630;
UnityEngine_XR_Interaction_Toolkit_XRInteractorReticleVisual__get_prefabScalingFactor:
  if ((unaff_x19[0x6c] == 0) || (lVar25 = *(long *)(unaff_x19[0x6c] + 0x38), lVar25 == 0))
  goto LAB_0249920c;
  uVar61 = *in_stack_00000148;
  if (*(uint *)(lVar25 + 0x18) <= uVar61)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar45 = (long)(int)uVar61;
  cVar29 = *(char *)(lVar25 + lVar45 * unaff_x27 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x429) = 0;
  lVar30 = unaff_x19[0x23];
  if ((uint)in_stack_000017a8 == uVar61) {
    uVar15 = (uint)((ulong)in_stack_000017a8 >> 0x20);
    bVar8 = true;
    *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
    if (uVar15 == 0x2026) {
      lVar22 = unaff_x19[0xc9];
      lVar25 = lVar25 + lVar45 * unaff_x27;
      *(undefined4 *)(lVar25 + 0x2c) = 0;
      *(long *)(lVar25 + 0x30) = lVar22;
      *(long *)(lVar25 + 0x38) = unaff_x19[0xca];
      *(long *)(lVar25 + 0x50) = unaff_x19[0xcb];
      *(int *)(lVar25 + 0x58) = (int)unaff_x19[0xcc];
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
      in_stack_000017a8 = CONCAT44(3,uVar61 + 1);
    }
    else if (uVar15 == 3) {
      if ((*in_stack_00000138 == 0) || (lVar22 = FUN_024b11ac(*in_stack_00000138,0), lVar22 == 0))
      goto LAB_0249920c;
      FUN_01299bc0(lVar22,&stack0x00000bf8,&stack0x00000880,*(undefined8 *)PTR_DAT_033ef3c8);
      if (*(uint *)(lVar25 + 0x18) <= uVar61)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      bVar8 = true;
      *(ulong *)(lVar25 + lVar45 * unaff_x27 + 0x30) = CONCAT44(in_stack_00000884,uVar19);
      uVar61 = *(uint *)((long)unaff_x19 + 0x48c);
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
    }
  }
  else {
    bVar8 = false;
  }
  in_stack_000017bc = uVar15;
  if (((int)uVar61 < *(int *)((long)unaff_x19 + 0x31c)) && (uVar15 != 3)) {
    if ((*in_stack_00000150 == 0) || (lVar25 = *(long *)(*in_stack_00000150 + 0x38), lVar25 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar25 + 0x18) <= uVar61)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar25 = lVar25 + (long)(int)uVar61 * (long)iVar18;
    *(undefined1 *)(lVar25 + 0x194) = 0;
    *(undefined2 *)(lVar25 + 0x20) = 0x200b;
    *(undefined4 *)(lVar25 + 100) = 0;
    *in_stack_00000148 = uVar61 + 1;
    goto LAB_02492630;
  }
  iVar14 = *(int *)((long)unaff_x19 + 0x63c);
  fStack00000000000000f4 = unaff_s12;
  if (iVar14 == 0) {
    uVar61 = *(uint *)((long)unaff_x19 + 0x254);
    if ((uVar61 >> 4 & 1) == 0) {
      if ((uVar61 >> 3 & 1) == 0) {
        if ((uVar61 >> 5 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar24 = FUN_016f92d4(uVar15,0);
          if ((uVar24 & 1) != 0) {
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
        uVar24 = FUN_016f9218(uVar15,0);
        if ((uVar24 & 1) != 0) {
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
      uVar24 = FUN_016f92d4(uVar15,0);
      if ((uVar24 & 1) != 0) {
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
      if ((*in_stack_00000150 == 0) || (lVar25 = *(long *)(*in_stack_00000150 + 0x38), lVar25 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar25 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar25 = lVar25 + (int)*in_stack_00000148 * unaff_x27;
      lVar45 = *(long *)(lVar25 + 0x40);
      unaff_x19[0xd2] = lVar45;
      *(undefined4 *)((long)unaff_x19 + 0x69c) = *(undefined4 *)(lVar25 + 0x48);
      if ((lVar45 == 0) || (lVar25 = FUN_024ebfa0(lVar45,0), lVar25 == 0)) goto LAB_0249920c;
      FUN_0132138c(lVar25,*(undefined4 *)((long)unaff_x19 + 0x69c),&stack0x00000880,
                   *(undefined8 *)System_Func<KeyValuePair<int,_int>,_int>_TypeInfo);
      lVar45 = CONCAT44(in_stack_00000884,uVar19);
      if (lVar45 == 0) goto LAB_02492630;
      if (in_stack_000017bc == 0x3c) {
        in_stack_000017bc = *(int *)((long)unaff_x19 + 0x69c) + 0xe000;
      }
      else {
        lVar25 = *plVar43;
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar25 = *plVar43;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1b4) = *(undefined4 *)(*(long *)(lVar25 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
      fVar64 = *(float *)(unaff_x19 + 0x3c);
      memmove(&stack0x00001700,(void *)(unaff_x19[0x1f] + 0x50),0x60);
      iVar14 = FUN_026fd110(&stack0x00001700,0);
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      memmove(&stack0x00001700,(void *)(*in_stack_00000138 + 0x50),0x60);
      fVar49 = (float)FUN_026fd120(&stack0x00001700,0);
      fVar74 = fStack0000000000000084;
      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
        fVar74 = unaff_s12;
      }
      if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
      fVar74 = (fVar64 / (float)iVar14) * fVar49 * fVar74;
      iVar14 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
      fVar64 = *(float *)(unaff_x19 + 0x3c);
      if (iVar14 < 1) {
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        iVar14 = FUN_026fd110(*in_stack_00000138 + 0x50,0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar49 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
        fVar71 = fStack0000000000000084;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar71 = unaff_s12;
        }
        if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
        fVar68 = (float)FUN_026fd140(unaff_x19[0x1f] + 0x50,0);
        if (*(long *)(lVar45 + 0x20) == 0) goto LAB_0249920c;
        FUN_026fd62c(&stack0x00000880,*(long *)(lVar45 + 0x20),0);
        fVar50 = (float)FUN_026fd45c(&stack0x000016e0,0);
        if (*(long *)(lVar45 + 0x20) == 0) goto LAB_0249920c;
        fVar52 = *(float *)(lVar45 + 0x2c);
        fVar72 = (float)FUN_026fd668(*(long *)(lVar45 + 0x20),0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar51 = (float)FUN_026fd140(*in_stack_00000138 + 0x50,0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar53 = (float)FUN_026fd170(*in_stack_00000138 + 0x50,0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar54 = *(float *)((long)unaff_x19 + 0x3fc);
        fStack0000000000000134 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
        if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
        fStack0000000000000134 = fVar74 * fVar53 * fVar54 * fStack0000000000000134;
        fVar71 = (fVar64 / (float)iVar14) * fVar49 * fVar71;
        fVar64 = fVar71 * (fVar68 / fVar50) * fVar52 * fVar72;
        fVar71 = fVar71 / fVar64;
        fVar51 = fVar71 * fVar51;
        fVar74 = (float)FUN_026fd180(unaff_x19[0x1f] + 0x50,0);
        fVar71 = fVar71 * fVar74;
      }
      else {
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        iVar14 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar49 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
        if (*(long *)(lVar45 + 0x20) == 0) goto LAB_0249920c;
        fVar71 = *(float *)(lVar45 + 0x2c);
        fVar68 = fStack0000000000000084;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar68 = 1.0;
        }
        fVar50 = (float)FUN_026fd668(*(long *)(lVar45 + 0x20),0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar51 = (float)FUN_026fd140(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar52 = (float)FUN_026fd170(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar72 = *(float *)((long)unaff_x19 + 0x3fc);
        fStack0000000000000134 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fStack0000000000000134 = fVar74 * fVar52 * fVar72 * fStack0000000000000134;
        fVar64 = (fVar64 / (float)iVar14) * fVar49 * fVar68 * fVar71 * fVar50;
        fVar71 = (float)FUN_026fd180(unaff_x19[0xd2] + 0x48,0);
      }
      lVar25 = unaff_x19[0x6c];
      unaff_x19[200] = lVar45;
      if ((lVar25 == 0) || (lVar45 = *(long *)(lVar25 + 0x38), lVar45 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar45 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar45 = lVar45 + (int)*in_stack_00000148 * unaff_x27;
      *(undefined4 *)(lVar45 + 0x2c) = 1;
      *(float *)(lVar45 + 0x160) = fVar64;
      in_stack_00000128 = 0.0;
      *(long *)(lVar45 + 0x40) = unaff_x19[0xd2];
      *(long *)(lVar45 + 0x38) = unaff_x19[0x1f];
      *(int *)(lVar45 + 0x58) = (int)unaff_x19[0x23];
      *(int *)(unaff_x19 + 0x23) = (int)lVar30;
      goto LAB_02492e14;
    }
    lVar25 = *in_stack_00000150;
    fVar74 = 0.0;
    if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
      fVar74 = fVar64;
    }
    fStack0000000000000134 = 0.0;
    if (lVar25 == 0) goto LAB_0249920c;
    fVar51 = 0.0;
    fVar71 = 0.0;
  }
  else {
    if (iVar14 != 0) goto LAB_0249265c;
LAB_02492a20:
    if ((*in_stack_00000150 == 0) || (lVar25 = *(long *)(*in_stack_00000150 + 0x38), lVar25 == 0))
    goto LAB_0249920c;
    uVar61 = *in_stack_00000148;
    uVar15 = *(uint *)(lVar25 + 0x18);
    if (uVar15 <= uVar61)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar30 = *(long *)(lVar25 + (int)uVar61 * unaff_x27 + 0x30);
    unaff_x19[200] = lVar30;
    if (lVar30 == 0) goto LAB_02492630;
    lVar45 = lVar25 + (int)uVar61 * unaff_x27;
    lVar30 = *(long *)(lVar45 + 0x38);
    unaff_x19[0x1f] = lVar30;
    unaff_x19[0x22] = *(long *)(lVar45 + 0x50);
    *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar45 + 0x58);
    if (bVar8) {
      lVar45 = unaff_x19[0x8e];
      if (lVar45 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar45 + 0x18) <= in_stack_00001788)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if ((*(int *)(lVar45 + (long)(int)in_stack_00001788 * 0xc + 0x20) != 10) ||
         (uVar61 == *(uint *)(unaff_x19 + 0x92))) goto LAB_02492ab4;
      if (uVar15 <= uVar61 - 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (lVar30 == 0) goto LAB_0249920c;
      fVar74 = *(float *)(lVar25 + (long)(int)(uVar61 - 1) * (long)iVar18 + 0x60);
      iVar14 = FUN_026fd110(lVar30 + 0x50,0);
      lVar25 = *in_stack_00000138;
    }
    else {
LAB_02492ab4:
      if (lVar30 == 0) goto LAB_0249920c;
      fVar74 = *(float *)(unaff_x19 + 0x3c);
      iVar14 = FUN_026fd110(lVar30 + 0x50,0);
      lVar25 = unaff_x19[0x1f];
    }
    if (lVar25 == 0) goto LAB_0249920c;
    fVar68 = (float)FUN_026fd120(lVar25 + 0x50,0);
    fVar49 = fStack0000000000000084;
    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
      fVar49 = unaff_s12;
    }
    fVar71 = 0.0;
    fVar51 = 0.0;
    if (!(bool)(bVar8 & in_stack_000017bc == 0x2026)) {
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      fVar51 = (float)FUN_026fd140(*in_stack_00000138 + 0x50,0);
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      fVar71 = (float)FUN_026fd180(*in_stack_00000138 + 0x50,0);
    }
    lVar25 = unaff_x19[200];
    if ((lVar25 == 0) || (*(long *)(lVar25 + 0x20) == 0)) goto LAB_0249920c;
    fVar50 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar52 = *(float *)(lVar25 + 0x2c);
    fVar64 = (float)FUN_026fd668(*(long *)(lVar25 + 0x20),0);
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar72 = (float)FUN_026fd170(*in_stack_00000138 + 0x50,0);
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar53 = *(float *)((long)unaff_x19 + 0x3fc);
    fStack0000000000000134 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
    lVar25 = unaff_x19[0x6c];
    if ((lVar25 == 0) || (lVar30 = *(long *)(lVar25 + 0x38), lVar30 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar30 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar30 = lVar30 + (int)*in_stack_00000148 * unaff_x27;
    *(undefined4 *)(lVar30 + 0x2c) = 0;
    fVar49 = ((fStack00000000000000f4 * fVar74) / (float)iVar14) * fVar68 * fVar49;
    fVar64 = fVar49 * fVar50 * fVar52 * fVar64;
    *(float *)(lVar30 + 0x160) = fVar64;
    uVar15 = *(uint *)(unaff_x19 + 0x23);
    fStack0000000000000134 = fVar49 * fVar72 * fVar53 * fStack0000000000000134;
    if (uVar15 == 0) {
      in_stack_00000128 = *(float *)(unaff_x19 + 0xc2);
    }
    else {
      lVar30 = unaff_x19[0xe0];
      if (lVar30 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar30 + 0x18) <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar30 = *(long *)(lVar30 + (long)(int)uVar15 * 8 + 0x20);
      if (lVar30 == 0) goto LAB_0249920c;
      in_stack_00000128 = *(float *)(lVar30 + 0x104);
    }
LAB_02492e14:
    unaff_s12 = 1.0;
    fVar74 = 0.0;
    if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
      fVar74 = fVar64;
    }
  }
  lVar25 = *(long *)(lVar25 + 0x38);
  if (lVar25 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar25 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar25 = lVar25 + (int)*in_stack_00000148 * unaff_x27;
  *(short *)(lVar25 + 0x20) = (short)in_stack_000017bc;
  *(int *)(lVar25 + 0x60) = (int)unaff_x19[0x3c];
  *(undefined4 *)(lVar25 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4e4);
  if ((unaff_x19[0x6c] == 0) || (lVar25 = *(long *)(unaff_x19[0x6c] + 0x38), lVar25 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar25 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  *(int *)(lVar25 + (int)*in_stack_00000148 * unaff_x27 + 0x168) = (int)unaff_x19[0x2a];
  if ((unaff_x19[0x6c] == 0) || (lVar25 = *(long *)(unaff_x19[0x6c] + 0x38), lVar25 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar25 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  *(undefined4 *)(lVar25 + (int)*in_stack_00000148 * unaff_x27 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x154);
  if ((unaff_x19[0x6c] == 0) || (lVar25 = *(long *)(unaff_x19[0x6c] + 0x38), lVar25 == 0))
  goto LAB_0249920c;
  uVar15 = *in_stack_00000148;
  FUN_013b78b8(in_stack_000000b8,&stack0x00000880,
               *(undefined8 *)TMPro_TMP_Dropdown_OptionData_TypeInfo);
  if (*(uint *)(lVar25 + 0x18) <= uVar15)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar25 = lVar25 + (int)uVar15 * unaff_x27;
  *(undefined4 *)(lVar25 + 0x18c) = in_stack_00000890;
  *(undefined8 *)(lVar25 + 0x184) = in_stack_00000888;
  *(ulong *)(lVar25 + 0x17c) = CONCAT44(in_stack_00000884,uVar19);
  if ((*in_stack_00000150 == 0) || (lVar25 = *(long *)(*in_stack_00000150 + 0x38), lVar25 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar25 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  *(undefined4 *)(lVar25 + (int)*in_stack_00000148 * unaff_x27 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x254);
  if ((unaff_x19[200] == 0) || (lVar25 = *(long *)(unaff_x19[200] + 0x20), lVar25 == 0))
  goto LAB_0249920c;
  FUN_026fd62c(&stack0x00000bf8,lVar25,0);
  puVar10 = 
  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__;
  if ((int)in_stack_000017bc < 0x10000) {
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar15 = FUN_016f68bc(in_stack_000017bc,0);
    unaff_w29 = uVar15 & 1;
  }
  else {
    unaff_w29 = 0;
  }
  fStack00000000000000cc = *(float *)(unaff_x19 + 0x54);
  *(undefined4 *)((long)unaff_x19 + 0x2f4) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f1) == '\0') {
    fVar50 = 0.0;
    fVar68 = 0.0;
    fVar49 = 0.0;
  }
  else {
    if (unaff_x19[200] == 0) goto LAB_0249920c;
    uVar61 = *in_stack_00000148;
    uVar15 = *(uint *)(unaff_x19[200] + 0x28);
    if ((int)uVar61 < (int)in_stack_00000078._4_4_) {
      if ((*in_stack_00000150 == 0) || (lVar25 = *(long *)(*in_stack_00000150 + 0x38), lVar25 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar25 + 0x18) <= uVar61 + 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar25 = *(long *)(lVar25 + (long)(int)(uVar61 + 1) * (long)iVar18 + 0x30);
      if ((((lVar25 == 0) || (*in_stack_00000138 == 0)) ||
          (lVar30 = *(long *)(*in_stack_00000138 + 0x128), lVar30 == 0)) ||
         (lVar30 = *(long *)(lVar30 + 0x18), lVar30 == 0)) goto LAB_0249920c;
      uVar19 = uVar15 | *(int *)(lVar25 + 0x28) << 0x10;
      uVar24 = FUN_0129eff4(lVar30,&stack0x00000880,&stack0x000016d8,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                           );
      uVar75 = 0;
      if ((uVar24 & 1) == 0) {
        fVar50 = 0.0;
        fVar68 = 0.0;
        fVar49 = 0.0;
      }
      else {
        if (in_stack_000016d8 == 0) goto LAB_0249920c;
        fVar49 = *(float *)(in_stack_000016d8 + 0x14);
        fVar68 = *(float *)(in_stack_000016d8 + 0x18);
        fVar50 = *(float *)(in_stack_000016d8 + 0x1c);
        uVar75 = *(undefined4 *)(in_stack_000016d8 + 0x20);
        if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
          fStack00000000000000cc = 0.0;
        }
      }
      uVar61 = *in_stack_00000148;
    }
    else {
      uVar75 = 0;
      fVar50 = 0.0;
      fVar68 = 0.0;
      fVar49 = 0.0;
    }
    if (0 < (int)uVar61) {
      if ((*in_stack_00000150 == 0) || (lVar25 = *(long *)(*in_stack_00000150 + 0x38), lVar25 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar25 + 0x18) <= (uint)((long)(int)uVar61 + -1))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar25 = *(long *)(lVar25 + ((long)(int)uVar61 + -1) * unaff_x27 + 0x30);
      if (((lVar25 == 0) || (*in_stack_00000138 == 0)) ||
         ((lVar30 = *(long *)(*in_stack_00000138 + 0x128), lVar30 == 0 ||
          (lVar30 = *(long *)(lVar30 + 0x18), lVar30 == 0)))) goto LAB_0249920c;
      uVar19 = *(uint *)(lVar25 + 0x28) | uVar15 << 0x10;
      uVar24 = FUN_0129eff4(lVar30,&stack0x00000880,&stack0x000016d8,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                           );
      if ((uVar24 & 1) != 0) {
        if ((in_stack_000016d8 == 0) ||
           (fVar49 = (float)FUN_024bb1bc(fVar49,fVar68,fVar50,uVar75,
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
    fVar72 = *(float *)(unaff_x19 + 199);
    fVar52 = (float)FUN_026fd474(&stack0x00001770,0);
    fVar72 = fVar72 - fVar74 * fVar52 * (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc));
    *(float *)(unaff_x19 + 199) = fVar72;
    if ((unaff_w29 != 0) || (in_stack_000017bc == 0x200b)) {
      *(float *)(unaff_x19 + 199) = fVar72 - in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac)
      ;
    }
  }
  fVar72 = *(float *)(unaff_x19 + 0x55);
  fVar52 = 0.0;
  if (fVar72 != 0.0) {
    fVar52 = (float)FUN_026fd454(&stack0x00001770,0);
    fVar53 = (float)FUN_026fd464(&stack0x00001770,0);
    fVar52 = (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (fVar72 * 0.5 - fVar74 * (fVar52 * 0.5 + fVar53));
    *(float *)(unaff_x19 + 199) = *(float *)(unaff_x19 + 199) + fVar52;
  }
  if (((cVar29 == '\0') && (*(int *)((long)unaff_x19 + 0x63c) == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x254) & 1) != 0)) {
    lVar25 = unaff_x19[0x22];
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar24 = FUN_02681b9c(lVar25,0,0);
    fVar54 = 0.0;
    if ((uVar24 & 1) != 0) {
      lVar25 = unaff_x19[0x22];
      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (lVar25 == 0) goto LAB_0249920c;
      uVar24 = FUN_0267e1d8(lVar25,*(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x54),0);
      fVar54 = 0.0;
      if ((uVar24 & 1) != 0) {
        lVar25 = unaff_x19[0x22];
        if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (lVar25 == 0) goto LAB_0249920c;
        fVar72 = (float)FUN_0267f610(lVar25,*(undefined4 *)
                                             (*(long *)(*(long *)puVar10 + 0xb8) + 0x54),0);
        if ((*in_stack_00000138 == 0) || (unaff_x19[0x22] == 0)) goto LAB_0249920c;
        fVar53 = *(float *)(*in_stack_00000138 + 0x1b0);
        fVar54 = (float)FUN_0267f610(unaff_x19[0x22],
                                     *(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xcc),0);
        fVar54 = fVar54 * fVar72 * fVar53 * 0.25;
        if (fVar72 < in_stack_00000128 + fVar54) {
          in_stack_00000128 = fVar72 - fVar54;
        }
      }
    }
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar72 = *(float *)(*in_stack_00000138 + 0x1b4);
  }
  else {
    lVar25 = unaff_x19[0x22];
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar24 = FUN_02681b9c(lVar25,0,0);
    fVar72 = 0.0;
    if ((uVar24 & 1) != 0) {
      lVar25 = unaff_x19[0x22];
      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (lVar25 == 0) goto LAB_0249920c;
      uVar24 = FUN_0267e1d8(lVar25,*(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x54),0);
      if ((uVar24 & 1) != 0) {
        lVar25 = unaff_x19[0x22];
        if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (lVar25 == 0) goto LAB_0249920c;
        uVar24 = FUN_0267e1d8(lVar25,*(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xcc),0);
        if ((uVar24 & 1) != 0) {
          lVar25 = unaff_x19[0x22];
          if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (lVar25 == 0) goto LAB_0249920c;
          fVar53 = (float)FUN_0267f610(lVar25,*(undefined4 *)
                                               (*(long *)(*(long *)puVar10 + 0xb8) + 0x54),0);
          if ((*in_stack_00000138 == 0) || (unaff_x19[0x22] == 0)) goto LAB_0249920c;
          fVar65 = *(float *)(*in_stack_00000138 + 0x1a8);
          fVar54 = (float)FUN_0267f610(unaff_x19[0x22],
                                       *(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xcc),0)
          ;
          fVar54 = fVar54 * fVar53 * fVar65 * 0.25;
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
  fVar66 = *(float *)(unaff_x19 + 199);
  fVar53 = (float)FUN_026fd464(&stack0x00001770,0);
  fVar66 = fVar66 + (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
                    fVar74 * (fVar49 + ((fVar53 - in_stack_00000128) - fVar54));
  fVar49 = (float)FUN_026fd46c(&stack0x00001770,0);
  fVar65 = *(float *)((long)unaff_x19 + 0x614) +
           ((fStack0000000000000134 + fVar74 * (fVar68 + in_stack_00000128 + fVar49)) -
           *(float *)(unaff_x19 + 0x9a));
  fVar49 = (float)FUN_026fd45c(&stack0x00001770,0);
  fVar69 = fVar65 - fVar74 * (in_stack_00000128 + in_stack_00000128 + fVar49);
  fVar49 = (float)FUN_026fd454(&stack0x00001770,0);
  fVar53 = fVar66 + (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
                    fVar74 * (fVar54 + fVar54 + in_stack_00000128 + in_stack_00000128 + fVar49);
  fVar49 = fVar66;
  fVar68 = fVar53;
  if (((*(int *)((long)unaff_x19 + 0x63c) == 0) && (cVar29 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x254) >> 1 & 1) != 0)) {
    fVar63 = (float)(int)unaff_x19[0xbd] * fStack000000000000004c;
    fVar49 = (float)FUN_026fd46c(&stack0x00001770,0);
    fVar57 = fVar63 * fVar74 * (fVar54 + in_stack_00000128 + fVar49);
    fVar49 = (float)FUN_026fd46c(&stack0x00001770,0);
    fVar68 = (float)FUN_026fd45c(&stack0x00001770,0);
    fVar65 = fVar65 + 0.0;
    fVar69 = fVar69 + 0.0;
    fVar63 = fVar63 * fVar74 * (((fVar49 - fVar68) - in_stack_00000128) - fVar54);
    fVar68 = fVar53 + fVar63;
    fVar49 = fVar66 + fVar57;
    fVar56 = (fVar57 - fVar63) * 0.5;
    fVar66 = (fVar66 + fVar63) - fVar56;
    fVar53 = (fVar53 + fVar57) - fVar56;
    fVar49 = fVar49 - fVar56;
    fVar68 = fVar68 - fVar56;
  }
  if (*(char *)((long)unaff_x19 + 0x46c) == '\0') {
    fVar57 = 0.0;
    fVar58 = 0.0;
    fVar67 = 0.0;
    fVar56 = 0.0;
    fVar76 = fVar69;
    fVar63 = fVar65;
    fStack00000000000000e8 = fVar49;
    fStack00000000000000ec = fVar66;
  }
  else {
    thunk_FUN_026935f0(_uStack0000000000000060,0);
    fVar70 = (fVar53 + fVar66) * 0.5;
    fVar73 = (fVar69 + fVar65) * 0.5;
    fVar65 = fVar65 - fVar73;
    fVar56 = 0.0;
    fVar63 = fVar65;
    fVar55 = (float)FUN_02692df0(fVar49 - fVar70,_uStack0000000000000060,0);
    fVar56 = fVar56 + 0.0;
    fVar69 = fVar69 - fVar73;
    fVar57 = 0.0;
    fVar49 = fVar69;
    fVar66 = (float)FUN_02692df0(fVar66 - fVar70,_uStack0000000000000060,0);
    fVar57 = fVar57 + 0.0;
    fVar67 = 0.0;
    fVar53 = (float)FUN_02692df0(fVar53 - fVar70,_uStack0000000000000060,0);
    fVar53 = fVar70 + fVar53;
    fVar65 = fVar73 + fVar65;
    fVar67 = fVar67 + 0.0;
    fVar58 = 0.0;
    fVar68 = (float)FUN_02692df0(fVar68 - fVar70,_uStack0000000000000060,0);
    fVar68 = fVar70 + fVar68;
    fVar69 = fVar73 + fVar69;
    fVar58 = fVar58 + 0.0;
    fVar76 = fVar73 + fVar49;
    fVar63 = fVar73 + fVar63;
    fStack00000000000000e8 = fVar70 + fVar55;
    fStack00000000000000ec = fVar70 + fVar66;
  }
  if (*in_stack_00000150 == 0) goto LAB_0249920c;
  lVar25 = *(long *)(*in_stack_00000150 + 0x38);
  unaff_d13 = (ulong)(uint)fVar74;
  if (lVar25 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar25 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar25 = lVar25 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar25 + 0x120) = fVar76;
  *(float *)(lVar25 + 0x11c) = fStack00000000000000ec;
  *(float *)(lVar25 + 0x124) = fVar57;
  if (*in_stack_00000150 == 0) goto LAB_0249920c;
  lVar25 = *(long *)(*in_stack_00000150 + 0x38);
  unaff_s12 = 1.0;
  if (lVar25 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar25 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar25 = lVar25 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar25 + 0x114) = fVar63;
  *(float *)(lVar25 + 0x110) = fStack00000000000000e8;
  *(float *)(lVar25 + 0x118) = fVar56;
  if ((*in_stack_00000150 == 0) || (lVar25 = *(long *)(*in_stack_00000150 + 0x38), lVar25 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar25 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar25 = lVar25 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar25 + 0x128) = fVar53;
  *(float *)(lVar25 + 300) = fVar65;
  *(float *)(lVar25 + 0x130) = fVar67;
  if ((*in_stack_00000150 == 0) || (lVar25 = *(long *)(*in_stack_00000150 + 0x38), lVar25 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar25 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar25 = lVar25 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar25 + 0x134) = fVar68;
  *(float *)(lVar25 + 0x138) = fVar69;
  *(float *)(lVar25 + 0x13c) = fVar58;
  if ((*in_stack_00000150 == 0) || (lVar25 = *(long *)(*in_stack_00000150 + 0x38), lVar25 == 0))
  goto LAB_0249920c;
  uVar15 = *in_stack_00000148;
  unaff_x21 = (long)(int)uVar15;
  if (*(uint *)(lVar25 + 0x18) <= uVar15)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar30 = lVar25 + unaff_x21 * unaff_x27;
  *(int *)(lVar30 + 0x140) = (int)unaff_x19[199];
  fVar68 = *(float *)(unaff_x19 + 0x9a);
  param_2 = (ulong)(uint)fVar68;
  fVar49 = *(float *)((long)unaff_x19 + 0x614);
  *(float *)(lVar30 + 0x15c) = (fVar53 - fStack00000000000000ec) / (fVar63 - fVar76);
  *(float *)(lVar30 + 0x14c) = (fStack0000000000000134 - fVar68) + fVar49;
  fVar51 = fVar51 * fVar74;
  if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
    fVar51 = fVar51 / fStack00000000000000f4;
    fVar71 = (fVar71 * fVar74) / fStack00000000000000f4;
  }
  else {
    fVar71 = fVar71 * fVar74;
  }
  unaff_w24 = *(uint *)(unaff_x19 + 0x92);
  bVar12 = unaff_w29 != 0;
  fVar51 = fVar49 + fVar51;
  bVar13 = uVar15 != unaff_w24;
  if (bVar13 && bVar12) {
    fVar49 = *(float *)(unaff_x19 + 0x98);
    lVar25 = lVar25 + unaff_x21 * unaff_x27;
    *(float *)(lVar25 + 0x154) = fVar49;
    fVar71 = *(float *)((long)unaff_x19 + 0x4c4);
    *(float *)(lVar25 + 0x148) = fVar49 - fVar68;
    *(float *)(lVar25 + 0x158) = fVar71;
    *(float *)(unaff_x19 + 0x97) = fVar49 - fVar68;
    fVar71 = fVar71 - fVar68;
    *(float *)(lVar25 + 0x150) = fVar71;
  }
  else {
    fVar71 = fVar49 + fVar71;
    fVar53 = fVar51;
    fVar65 = fVar71;
    if (fVar49 != 0.0) {
      fVar53 = (fVar51 - fVar49) / *(float *)((long)unaff_x19 + 0x3fc);
      fVar65 = (fVar71 - fVar49) / *(float *)((long)unaff_x19 + 0x3fc);
      if (fVar53 <= fVar51) {
        fVar53 = fVar51;
      }
      if (fVar71 <= fVar65) {
        fVar65 = fVar71;
      }
    }
    lVar25 = lVar25 + unaff_x21 * unaff_x27;
    fVar49 = fVar53;
    if (fVar53 <= *(float *)(unaff_x19 + 0x98)) {
      fVar49 = *(float *)(unaff_x19 + 0x98);
    }
    fVar69 = fVar65;
    if (*(float *)((long)unaff_x19 + 0x4c4) <= fVar65) {
      fVar69 = *(float *)((long)unaff_x19 + 0x4c4);
    }
    *(float *)((long)unaff_x19 + 0x4c4) = fVar69;
    fVar71 = fVar71 - fVar68;
    *(float *)(unaff_x19 + 0x98) = fVar49;
    *(float *)(lVar25 + 0x154) = fVar53;
    *(float *)(lVar25 + 0x158) = fVar65;
    *(float *)(lVar25 + 0x148) = fVar51 - fVar68;
    *(float *)(unaff_x19 + 0x97) = fVar51 - fVar68;
    *(float *)(lVar25 + 0x150) = fVar71;
  }
  *(float *)((long)unaff_x19 + 0x4bc) = fVar71;
  if (((int)unaff_x19[0x94] == 0) || (*(char *)((long)unaff_x19 + 0x334) != '\0')) {
    if (!bVar13 || !bVar12) {
      *(float *)(unaff_x19 + 0x96) = fVar49;
      if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
      fVar49 = *(float *)((long)unaff_x19 + 0x4b4);
      fVar68 = (float)FUN_026fd150(unaff_x19[0x1f] + 0x50,0);
      fStack00000000000000f4 = (fVar74 * fVar68) / fStack00000000000000f4;
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
  lVar25 = *in_stack_00000150;
  if ((lVar25 == 0) || (lVar30 = *(long *)(lVar25 + 0x38), lVar30 == 0)) goto LAB_0249920c;
  uVar15 = *in_stack_00000148;
  if (*(uint *)(lVar30 + 0x18) <= uVar15)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar30 = lVar30 + (int)uVar15 * unaff_x27;
  *(undefined1 *)(lVar30 + 0x194) = 0;
  uVar61 = *(uint *)(unaff_x19 + 0x4e);
  if ((in_stack_000017bc == 9) ||
     (((((unaff_w29 == 0 && (in_stack_000017bc != 3)) && (in_stack_000017bc != 0x200b)) &&
       (in_stack_000017bc != 0xad)) ||
      (((in_stack_000017bc == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) != 0 ||
       (*(int *)((long)unaff_x19 + 0x63c) == 1)))))) {
    *(undefined1 *)(lVar30 + 0x194) = 1;
    pfVar33 = _fStack0000000000000088;
    pfVar35 = _fStack0000000000000098;
    if (bVar8) {
      lVar25 = *(long *)(lVar25 + 0x50);
      if (lVar25 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      pfVar35 = (float *)(lVar25 + 0x60);
      pfVar33 = (float *)(lVar25 + 100);
    }
    fVar68 = *pfVar35;
    fVar71 = *pfVar33;
    fVar49 = *(float *)(unaff_x19 + 0x6b);
    fVar51 = *(float *)(unaff_x19 + 199);
    fStack00000000000000d4 = (in_stack_00000090 - fVar68) - fVar71;
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
    fVar69 = *(float *)((long)unaff_x19 + 0x4c4);
    fVar53 = *(float *)((long)unaff_x19 + 0x2cc);
    fVar65 = (float)param_2;
    if (in_stack_000017bc != 0xad) {
      fVar64 = fVar74;
    }
    fVar66 = 0.0;
    if ((0.0 < fVar65) && (fVar66 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
      fVar66 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
    }
    fVar66 = (*(float *)(unaff_x19 + 0x96) - (fVar69 - fVar65)) + fVar66;
    uVar15 = *in_stack_00000148;
    if (fStack00000000000000a4 < fVar66) {
      if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
        *(uint *)((long)unaff_x19 + 0x2dc) = uVar15;
      }
      plVar47 = (long *)StringLiteral_302;
      plVar43 = (long *)System_Threading_Mutex_TypeInfo;
      uVar20 = DAT_02941c08;
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
        param_2 = (ulong)(uint)fVar65;
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
        lVar25 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar25 = *plVar43;
        }
        lVar30 = *(long *)(lVar25 + 0xb8);
        lVar25 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
        if ((*(byte *)(lVar25 + 0x132) & 1) == 0) {
          lVar25 = FUN_00d5941c(lVar25);
        }
        plVar47 = (long *)StringLiteral_302;
        lVar25 = *(long *)(*(long *)(lVar25 + 0xc0) + 8);
        if ((*(byte *)(lVar25 + 0x132) & 1) == 0) {
          lVar25 = FUN_00d5941c();
        }
        piVar23 = (int *)thunk_FUN_00d32ed4(lVar30 + 0x11f0,*(long *)(lVar25 + 0x80) + 0xa0);
        if (*piVar23 == 0) goto LAB_02495f00;
        lVar25 = *plVar43;
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar25 = *plVar43;
        }
        FUN_013b8de4(*(long *)(lVar25 + 0xb8) + 0x11f0,&stack0x00000880,
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
        plVar47 = (long *)StringLiteral_302;
        in_stack_00001788 = FUN_024d66ec();
        goto LAB_0249408c;
      case 5:
        if ((uVar15 != 0) && (-1 < (int)in_stack_00001788)) {
          fVar64 = *(float *)(unaff_x19 + 0x98);
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          in_stack_00001788 = FUN_024d66ec();
          if (fVar64 - fVar69 <= fStack00000000000000a4) {
            *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
            *(undefined4 *)(unaff_x19 + 0x92) = *(undefined4 *)((long)unaff_x19 + 0x48c);
            param_2 = *(ulong *)(*(long *)(*plVar43 + 0xb8) + 0x15a8);
            *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
            *(undefined4 *)(unaff_x19 + 0x99) = 0;
            lVar25 = NEON_rev64(param_2,4);
            unaff_x19[0x98] = lVar25;
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
        in_stack_000017a8 = uVar20;
        goto LAB_024944c4;
      case 6:
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        plVar47 = (long *)StringLiteral_302;
        lVar25 = unaff_x19[0x5c];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            );
        }
        uVar24 = FUN_02681b9c(lVar25,0,0);
        if ((uVar24 & 1) != 0) {
          plVar46 = (long *)unaff_x19[0x5c];
          uVar20 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar46 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar46 + 0x558))(plVar46,uVar20,*(undefined8 *)(*plVar46 + 0x560));
          lVar25 = unaff_x19[0x5c];
          if (lVar25 == 0) goto LAB_0249920c;
          *(int *)(lVar25 + 0x3f8) = (int)unaff_x19[0x7f];
          FUN_024c910c(lVar25,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
          plVar46 = (long *)unaff_x19[0x5c];
          if (plVar46 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar46 + 0x7d8))(plVar46,0,0,*(undefined8 *)(*plVar46 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        }
        goto LAB_0249408c;
      }
LAB_02494358:
      iVar14 = FUN_024d66ec();
      goto LAB_02494364;
    }
UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor__get_playHapticsOnHoverExited:
    plVar43 = (long *)System_Threading_Mutex_TypeInfo;
    fVar65 = 1.0 - fVar53;
    param_2 = (ulong)(uint)fVar65;
    fVar49 = ABS(fVar51) + fVar49 * fVar65 * fVar64;
    fVar64 = _DAT_0294c6e8;
    if ((uVar61 & 0x18) == 0) {
      fVar64 = 1.0;
    }
    if (fVar64 * fStack00000000000000d4 < fVar49) {
      if (((char)unaff_x19[0x5a] == '\0') || (uVar15 == *(uint *)(unaff_x19 + 0x92))) {
        if (((char)unaff_x19[0x46] == '\0') ||
           ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c))) {
LAB_02493e34:
          iVar14 = (int)unaff_x19[0x5b];
          if (iVar14 == 1) {
            lVar25 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar25 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar25 = *plVar43;
            }
            plVar47 = (long *)StringLiteral_302;
            lVar30 = *(long *)(lVar25 + 0xb8);
            lVar25 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
            if ((*(byte *)(lVar25 + 0x132) & 1) == 0) {
              lVar25 = FUN_00d5941c(lVar25);
            }
            lVar25 = *(long *)(*(long *)(lVar25 + 0xc0) + 8);
            if ((*(byte *)(lVar25 + 0x132) & 1) == 0) {
              lVar25 = FUN_00d5941c();
            }
            piVar23 = (int *)thunk_FUN_00d32ed4(lVar30 + 0x11f0,*(long *)(lVar25 + 0x80) + 0xa0);
            if (*piVar23 == 0) goto LAB_02495f00;
            lVar25 = *plVar43;
            if (*(int *)(lVar25 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar25 = *plVar43;
            }
            FUN_013b8de4(*(long *)(lVar25 + 0xb8) + 0x11f0,&stack0x00000880,
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
            lVar25 = unaff_x19[0x5c];
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)
                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                );
            }
            uVar24 = FUN_02681b9c(lVar25,0,0);
            if ((uVar24 & 1) != 0) {
              plVar46 = (long *)unaff_x19[0x5c];
              uVar20 = (**(code **)(*unaff_x19 + 0x548))();
              if (plVar46 == (long *)0x0) goto LAB_0249920c;
              (**(code **)(*plVar46 + 0x558))(plVar46,uVar20,*(undefined8 *)(*plVar46 + 0x560));
              lVar25 = unaff_x19[0x5c];
              if (lVar25 == 0) goto LAB_0249920c;
              *(int *)(lVar25 + 0x3f8) = (int)unaff_x19[0x7f];
              FUN_024c910c(lVar25,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
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
          goto LAB_02494950;
        }
        fVar51 = *(float *)(unaff_x19 + 0x59) / 100.0;
        if (fVar53 < fVar51) {
          fVar74 = fVar49 / fVar65;
          if (fVar53 <= 0.0) {
            fVar74 = fVar49;
          }
          fVar53 = fVar53 + (fVar49 - fVar64 * (fStack00000000000000d4 + DAT_02958218)) / fVar74;
          goto LAB_0249929c;
        }
        fVar53 = *(float *)((long)unaff_x19 + 0x1dc);
        param_2 = (ulong)(uint)fVar53;
        fVar51 = *(float *)(unaff_x19 + 0x49);
        if (fVar53 <= fVar51) goto LAB_02493e34;
LAB_02499210:
        fVar64 = (fVar53 - *(float *)(unaff_x19 + 0x47)) * 0.5;
        if (fVar64 <= DAT_028aa298) {
          fVar64 = DAT_028aa298;
        }
        *(float *)((long)unaff_x19 + 0x234) = fVar53;
        fVar74 = (fVar53 - fVar64) * 20.0 + 0.5;
        fVar64 = DAT_02958220;
        if (fVar74 != INFINITY) {
          fVar64 = (float)(int)fVar74 / 20.0;
        }
        if (fVar64 <= fVar51) {
          fVar64 = fVar51;
        }
LAB_02495fd8:
        *(float *)((long)unaff_x19 + 0x1dc) = fVar64;
        return;
      }
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      in_stack_00001788 = FUN_024d66ec();
      if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
        lVar25 = *in_stack_00000150;
        if ((lVar25 == 0) || (lVar30 = *(long *)(lVar25 + 0x38), lVar30 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar30 + 0x18) <= *in_stack_00000148)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar51 = *(float *)(unaff_x19 + 0x9a);
        fVar53 = 0.0;
        if ((0.0 < fVar51) && (fVar53 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
          fVar53 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
        }
        fVar53 = in_stack_000000c8 * *(float *)(unaff_x19 + 0x56) +
                 *(float *)(lVar30 + (int)*in_stack_00000148 * unaff_x27 + 0x154) +
                 (fVar53 - *(float *)((long)unaff_x19 + 0x4c4)) +
                 fStack0000000000000054 *
                 (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4));
      }
      else {
        lVar25 = unaff_x19[0x6c];
        *(undefined1 *)((long)unaff_x19 + 700) = 1;
        if (lVar25 == 0) goto LAB_0249920c;
        fVar51 = *(float *)(unaff_x19 + 0x9a);
        fVar53 = *(float *)(unaff_x19 + 0x57) + in_stack_000000c8 * *(float *)(unaff_x19 + 0x56);
      }
      puVar10 = System_Threading_Mutex_TypeInfo;
      lVar25 = *(long *)(lVar25 + 0x38);
      if (lVar25 == 0) goto LAB_0249920c;
      uVar37 = *(uint *)((long)unaff_x19 + 0x48c);
      if ((*(uint *)(lVar25 + 0x18) <= uVar37) ||
         (uVar7 = uVar37 - 1, *(uint *)(lVar25 + 0x18) <= uVar7))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      param_2 = (ulong)(uint)(fVar53 + *(float *)(unaff_x19 + 0x96));
      fVar65 = (fVar53 + *(float *)(unaff_x19 + 0x96) + fVar51) -
               *(float *)(lVar25 + (int)uVar37 * unaff_x27 + 0x158);
      if (((in_stack_00000068._4_1_ & 1) == 0 &&
           *(short *)(lVar25 + (long)(int)uVar7 * (long)iVar18 + 0x20) == 0xad) &&
         ((fVar65 < fStack00000000000000a4 || ((int)unaff_x19[0x5b] == 0)))) {
        *in_stack_00000148 = uVar7;
LAB_024947b4:
        in_stack_000017a8 = CONCAT44(0x2d,uVar7);
        in_stack_00001788 = in_stack_00001788 - 1;
        in_stack_00000068._4_1_ = 0;
LAB_02494938:
        unaff_s12 = 1.0;
        plVar47 = (long *)StringLiteral_302;
        plVar43 = (long *)System_Threading_Mutex_TypeInfo;
        goto LAB_02492630;
      }
      if (*(short *)(lVar25 + (int)uVar37 * unaff_x27 + 0x20) == 0xad) {
        in_stack_00000068._4_1_ = 1;
        goto LAB_02494938;
      }
      if ((bStack000000000000005c & *(byte *)(unaff_x19 + 0x46) & 1) != 0) {
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
        fVar74 = fVar49;
        if (0.0 < fVar53) {
          fVar74 = fVar49 / (1.0 - fVar53);
        }
        fVar53 = fVar53 + (fVar49 - fVar64 * (fStack00000000000000d4 + DAT_02958218)) / fVar74;
LAB_0249929c:
        if (fVar51 <= fVar53) {
          fVar53 = fVar51;
        }
        *(float *)((long)unaff_x19 + 0x2cc) = fVar53;
        return;
      }
LAB_024946c0:
      lVar25 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar25 = *(long *)puVar10;
      }
      iVar14 = *(int *)(*(long *)(lVar25 + 0xb8) + 0xe78);
      if ((((float)iVar14 != fStack0000000000000034) && (iVar14 != -1)) &&
         (((bStack000000000000005c ^ 1) & 1) == 0)) {
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        if ((unaff_x19[0x6c] == 0) || (lVar25 = *(long *)(unaff_x19[0x6c] + 0x38), lVar25 == 0))
        goto LAB_0249920c;
        uVar7 = *in_stack_00000148 - 1;
        if (*(uint *)(lVar25 + 0x18) <= uVar7)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fStack0000000000000034 = (float)iVar14;
        if (*(short *)(lVar25 + (long)(int)uVar7 * (long)iVar18 + 0x20) == 0xad) {
          *in_stack_00000148 = uVar7;
          goto LAB_024947b4;
        }
      }
      if (fVar65 <= fStack00000000000000a4) {
        param_2 = unaff_d13;
        FUN_024d7014(fStack0000000000000054,unaff_d13,in_stack_000000c8,
                     *(undefined4 *)((long)unaff_x19 + 0x2f4),fVar72,fStack00000000000000cc,
                     fStack00000000000000d4,fStack0000000000000048);
        bStack000000000000005c = 1;
        in_stack_00000068._4_1_ = 0;
        fStack0000000000000058 = 1.4013e-45;
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
          fVar64 = *(float *)((long)unaff_x19 + 0x2b4) +
                   ((in_stack_00000018._4_4_ - fVar65) / (float)((int)unaff_x19[0x94] + 1)) /
                   fStack0000000000000054;
          if (fVar64 <= fVar51) {
            fVar64 = fVar51;
          }
LAB_024964c8:
          *(float *)((long)unaff_x19 + 0x2b4) = fVar64;
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
      switch((int)unaff_x19[0x5b]) {
      case 0:
      case 2:
      case 4:
        param_2 = unaff_d13;
        FUN_024d7014(fStack0000000000000054,unaff_d13,in_stack_000000c8,
                     *(undefined4 *)((long)unaff_x19 + 0x2f4),fVar72,fStack00000000000000cc,
                     fStack00000000000000d4,fStack0000000000000048);
        break;
      case 1:
        lVar25 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar25 = *plVar43;
        }
        lVar30 = *(long *)(lVar25 + 0xb8);
        lVar25 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
        if ((*(byte *)(lVar25 + 0x132) & 1) == 0) {
          lVar25 = FUN_00d5941c(lVar25);
        }
        lVar25 = *(long *)(*(long *)(lVar25 + 0xc0) + 8);
        if ((*(byte *)(lVar25 + 0x132) & 1) == 0) {
          lVar25 = FUN_00d5941c();
        }
        piVar23 = (int *)thunk_FUN_00d32ed4(lVar30 + 0x11f0,*(long *)(lVar25 + 0x80) + 0xa0);
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
        lVar25 = *plVar43;
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar25 = *plVar43;
        }
        FUN_013b8de4(*(long *)(lVar25 + 0xb8) + 0x11f0,&stack0x00000880,
                     *(undefined8 *)
                      Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                    );
        memcpy(&stack0x00000fe8,&stack0x00000880,0x378);
        iVar14 = FUN_024d66ec();
        in_stack_00000068._4_1_ = 0;
LAB_02494364:
        unaff_s12 = 1.0;
        iVar48 = *(int *)((long)unaff_x19 + 0x48c) + -1;
        *(int *)((long)unaff_x19 + 0x48c) = iVar48;
        in_stack_000017a8 = CONCAT44(0x2026,iVar48);
        in_stack_00000140 = in_stack_00000140 + 1;
        in_stack_00001788 = iVar14 - 1;
        goto LAB_02492630;
      case 3:
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        in_stack_00000068._4_1_ = 0;
LAB_0249408c:
        unaff_s12 = 1.0;
        in_stack_000017a8 = CONCAT44(3,uVar15);
        goto LAB_02492630;
      case 5:
        *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
        param_2 = unaff_d13;
        FUN_024d7014(fStack0000000000000054,unaff_d13,in_stack_000000c8,
                     *(undefined4 *)((long)unaff_x19 + 0x2f4),fVar72,fStack00000000000000cc,
                     fStack00000000000000d4,fStack0000000000000048);
        *(undefined4 *)(unaff_x19 + 0x99) = 0;
        *(undefined4 *)(unaff_x19 + 0x9a) = 0;
        *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
        *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
        break;
      case 6:
        lVar25 = unaff_x19[0x5c];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar24 = FUN_02681b9c(lVar25,0,0);
        if ((uVar24 & 1) != 0) {
          plVar46 = (long *)unaff_x19[0x5c];
          uVar20 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar46 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar46 + 0x558))(plVar46,uVar20,*(undefined8 *)(*plVar46 + 0x560));
          lVar25 = unaff_x19[0x5c];
          if (lVar25 == 0) goto LAB_0249920c;
          *(int *)(lVar25 + 0x3f8) = (int)unaff_x19[0x7f];
          FUN_024c910c(lVar25,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
          plVar46 = (long *)unaff_x19[0x5c];
          if (plVar46 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar46 + 0x7d8))(plVar46,0,0,*(undefined8 *)(*plVar46 + 0x7e0));
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
      plVar47 = (long *)StringLiteral_302;
      plVar43 = (long *)System_Threading_Mutex_TypeInfo;
      goto LAB_02492630;
    }
LAB_02494950:
    if (in_stack_000017bc != 0xad) {
      if (in_stack_000017bc != 9) {
        if (*(int *)((long)unaff_x19 + 0x63c) == 1) {
          (**(code **)(*unaff_x19 + 0x8c8))();
        }
        else if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
          (**(code **)(*unaff_x19 + 0x8b8))(in_stack_00000128,fVar54);
        }
        uVar15 = *in_stack_00000148;
        if (((uint)fStack0000000000000058 & 1) != 0) {
          *(uint *)(in_stack_00000070 + 0x1f0) = uVar15;
        }
        *(uint *)((long)unaff_x19 + 0x49c) = uVar15;
        *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
        if ((unaff_x19[0x6c] == 0) || (lVar25 = *(long *)(unaff_x19[0x6c] + 0x50), lVar25 == 0))
        goto LAB_0249920c;
        if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
        fStack0000000000000058 = 0.0;
        *(float *)(lVar25 + 0x60) = fVar68;
        *(float *)(lVar25 + 100) = fVar71;
        goto LAB_02494abc;
      }
      lVar25 = *in_stack_00000150;
      if ((lVar25 == 0) || (lVar30 = *(long *)(lVar25 + 0x38), lVar30 == 0)) goto LAB_0249920c;
      uVar15 = *in_stack_00000148;
      if (*(uint *)(lVar30 + 0x18) <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      *(undefined1 *)(lVar30 + (int)uVar15 * unaff_x27 + 0x194) = 0;
      *(uint *)((long)unaff_x19 + 0x49c) = uVar15;
      lVar30 = *(long *)(lVar25 + 0x50);
      if (lVar30 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      *(int *)(lVar30 + 0x2c) = *(int *)(lVar30 + 0x2c) + 1;
      goto LAB_024949c4;
    }
    if ((*in_stack_00000150 == 0) || (lVar25 = *(long *)(*in_stack_00000150 + 0x38), lVar25 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar25 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(undefined1 *)(lVar25 + (int)*in_stack_00000148 * unaff_x27 + 0x194) = 0;
  }
  else {
    if (((in_stack_000017bc & 0xfffffffe) == 10) && ((int)unaff_x19[0x5b] == 6)) {
      fVar49 = (float)param_2;
      fVar64 = 0.0;
      if ((0.0 < fVar49) && (fVar64 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
        fVar64 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
      }
      param_2 = (ulong)(uint)fStack00000000000000a4;
      if (fStack00000000000000a4 <
          (*(float *)(unaff_x19 + 0x96) - (*(float *)((long)unaff_x19 + 0x4c4) - fVar49)) + fVar64)
      {
        if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
          *(uint *)((long)unaff_x19 + 0x2dc) = uVar15;
        }
        plVar47 = (long *)StringLiteral_302;
        plVar43 = (long *)System_Threading_Mutex_TypeInfo;
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
        uVar24 = FUN_02681b9c(lVar25,0,0);
        if ((uVar24 & 1) != 0) {
          plVar46 = (long *)unaff_x19[0x5c];
          uVar20 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar46 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar46 + 0x558))(plVar46,uVar20,*(undefined8 *)(*plVar46 + 0x560));
          lVar25 = unaff_x19[0x5c];
          if (lVar25 == 0) goto LAB_0249920c;
          *(int *)(lVar25 + 0x3f8) = (int)unaff_x19[0x7f];
          FUN_024c910c(lVar25,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
          plVar46 = (long *)unaff_x19[0x5c];
          if (plVar46 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar46 + 0x7d8))(plVar46,0,0,*(undefined8 *)(*plVar46 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        }
        in_stack_000017a8 = CONCAT44(3,uVar15);
        goto LAB_02492630;
      }
    }
    if ((((in_stack_000017bc - 0x2007 < 0x23) &&
         ((1L << ((ulong)(in_stack_000017bc - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
        (in_stack_000017bc - 10 < 2)) || (in_stack_000017bc == 0xa0)) {
LAB_024944e4:
      if (((in_stack_000017bc != 0xad) && (in_stack_000017bc != 0x200b)) &&
         (in_stack_000017bc != 0x2060)) {
        lVar25 = *in_stack_00000150;
        if ((lVar25 == 0) || (lVar30 = *(long *)(lVar25 + 0x50), lVar30 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
        *(int *)(lVar30 + 0x2c) = *(int *)(lVar30 + 0x2c) + 1;
        *(int *)(lVar25 + 0x20) = *(int *)(lVar25 + 0x20) + 1;
      }
    }
    else {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar24 = FUN_016fa418(in_stack_000017bc,0);
      if ((uVar24 & 1) != 0) goto LAB_024944e4;
    }
    if (in_stack_000017bc == 0xa0) {
      if ((*in_stack_00000150 == 0) || (lVar25 = *(long *)(*in_stack_00000150 + 0x50), lVar25 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
LAB_024949c4:
      *(int *)(lVar25 + 0x20) = *(int *)(lVar25 + 0x20) + 1;
    }
  }
LAB_02494abc:
  if (((int)unaff_x19[0x5b] == 1) && ((in_stack_000017bc == 0x2d || (!bVar8)))) {
    if (unaff_x19[0xca] == 0) goto LAB_0249920c;
    fVar64 = *(float *)(unaff_x19 + 0x3c);
    iVar14 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
    if (unaff_x19[0xca] == 0) goto LAB_0249920c;
    fVar68 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
    lVar25 = unaff_x19[0xc9];
    fVar49 = fStack0000000000000084;
    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
      fVar49 = 1.0;
    }
    if ((lVar25 == 0) || (*(long *)(lVar25 + 0x20) == 0)) goto LAB_0249920c;
    fVar51 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar54 = *(float *)(lVar25 + 0x2c);
    fVar71 = (float)FUN_026fd668(*(long *)(lVar25 + 0x20),0);
    fVar53 = *_fStack0000000000000098;
    fVar71 = fVar51 * (fVar64 / (float)iVar14) * fVar68 * fVar49 * fVar54 * fVar71;
    fVar64 = *_fStack0000000000000088;
    if ((in_stack_000017bc == 10) && (*(int *)((long)unaff_x19 + 0x48c) != (int)unaff_x19[0x92])) {
      if ((*in_stack_00000150 == 0) || (lVar25 = *(long *)(*in_stack_00000150 + 0x38), lVar25 == 0))
      goto LAB_0249920c;
      uVar15 = *(int *)((long)unaff_x19 + 0x48c) - 1;
      if (*(uint *)(lVar25 + 0x18) <= uVar15)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (unaff_x19[0xca] == 0) goto LAB_0249920c;
      fVar49 = *(float *)(lVar25 + (long)(int)uVar15 * (long)iVar18 + 0x60);
      iVar14 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
      if (unaff_x19[0xca] == 0) goto LAB_0249920c;
      fVar51 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
      lVar25 = unaff_x19[0xc9];
      fVar68 = fStack0000000000000084;
      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
        fVar68 = 1.0;
      }
      if ((lVar25 == 0) || (*(long *)(lVar25 + 0x20) == 0)) goto LAB_0249920c;
      fVar54 = *(float *)((long)unaff_x19 + 0x3fc);
      fVar65 = *(float *)(lVar25 + 0x2c);
      fVar71 = (float)FUN_026fd668(*(long *)(lVar25 + 0x20),0);
      if ((*in_stack_00000150 == 0) || (lVar25 = *(long *)(*in_stack_00000150 + 0x50), lVar25 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar25 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar25 = lVar25 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      fVar53 = *(float *)(lVar25 + 0x60);
      fVar64 = *(float *)(lVar25 + 100);
      fVar71 = fVar54 * (fVar49 / (float)iVar14) * fVar51 * fVar68 * fVar65 * fVar71;
    }
    fVar54 = *(float *)(unaff_x19 + 0x9a);
    fVar68 = *(float *)(unaff_x19 + 0x96);
    fVar65 = *(float *)((long)unaff_x19 + 0x4c4);
    fVar49 = 0.0;
    fVar51 = 0.0;
    if ((0.0 < fVar54) && (fVar51 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
      fVar51 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
    }
    fVar69 = *(float *)(unaff_x19 + 199);
    if ((char)unaff_x19[0x1d] == '\0') {
      if ((unaff_x19[0xc9] == 0) || (lVar25 = *(long *)(unaff_x19[0xc9] + 0x20), lVar25 == 0))
      goto LAB_0249920c;
      FUN_026fd62c(&stack0x00000880,lVar25,0);
      fVar49 = (float)FUN_026fd474(&stack0x000016e0,0);
    }
    puVar10 = System_Threading_Mutex_TypeInfo;
    fVar66 = *(float *)(unaff_x19 + 0x6b);
    fVar64 = (in_stack_00000090 - fVar53) - fVar64;
    bVar12 = true;
    if ((fVar66 <= fVar64) && (bVar12 = false, !NAN(fVar66))) {
      bVar12 = fVar66 == -1.0;
    }
    if (!bVar12) {
      fVar64 = fVar66;
    }
    fVar53 = _DAT_0294c6e8;
    if ((uVar61 & 0x18) == 0) {
      fVar53 = 1.0;
    }
    if (((fVar68 - (fVar65 - fVar54)) + fVar51 < fStack00000000000000a4) &&
       (ABS(fVar69) + fVar71 * fVar49 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) <
        fVar53 * fVar64)) {
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_024d69d4();
      lVar25 = *(long *)(*(long *)puVar10 + 0xb8);
      memcpy(&stack0x00000508,(void *)(lVar25 + 0x788),0x378);
      FUN_013b86dc(lVar25 + 0x11f0,&stack0x00000508,
                   *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__);
    }
  }
  unaff_d13 = (ulong)(uint)fVar74;
  unaff_s12 = 1.0;
  lVar25 = *in_stack_00000150;
  if ((lVar25 == 0) || (lVar30 = *(long *)(lVar25 + 0x38), lVar30 == 0)) goto LAB_0249920c;
  if (*(uint *)(lVar30 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  uVar15 = *(uint *)(unaff_x19 + 0x94);
  lVar30 = lVar30 + (int)*in_stack_00000148 * unaff_x27;
  *(uint *)(lVar30 + 100) = uVar15;
  *(int *)(lVar30 + 0x68) = (int)unaff_x19[0x95];
  if ((bVar8) ||
     ((in_stack_000017bc < 0xe && ((1 << (ulong)(in_stack_000017bc & 0x1f) & 0x2c00U) != 0)))) {
    lVar25 = *(long *)(lVar25 + 0x50);
    if (lVar25 == 0) goto LAB_0249920c;
    if (*(uint *)(lVar25 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if (*(int *)(lVar25 + (long)(int)uVar15 * 0x5c + 0x24) == 1) goto LAB_02494e68;
  }
  else {
    lVar25 = *(long *)(lVar25 + 0x50);
    if (lVar25 == 0) goto LAB_0249920c;
LAB_02494e68:
    if (*(uint *)(lVar25 + 0x18) <= uVar15)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(int *)(lVar25 + (long)(int)uVar15 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
  }
  if (in_stack_000017bc == 9) {
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar64 = (float)FUN_026fd208(*in_stack_00000138 + 0x50,0);
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar68 = *(float *)(unaff_x19 + 199);
    fVar49 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000138 + 0x1b9));
    fVar64 = fVar74 * fVar64 * fVar49;
    fVar49 = fVar64 * (float)(int)(fVar68 / fVar64);
    param_2 = (ulong)(uint)fVar49;
    if (fVar49 <= fVar68) {
      fVar49 = fVar68 + fVar64;
    }
LAB_02495058:
    *(float *)(unaff_x19 + 199) = fVar49;
  }
  else if (*(float *)(unaff_x19 + 0x55) == 0.0) {
    if ((char)unaff_x19[0x1d] == '\0') {
      fVar68 = unaff_s12;
      if (*(char *)((long)unaff_x19 + 0x46c) != '\0') {
        fVar68 = (float)thunk_FUN_026935f0(_uStack0000000000000060,0);
      }
      fVar49 = *(float *)(unaff_x19 + 199);
      fVar71 = (float)FUN_026fd474(&stack0x00001770,0);
      if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
      fVar64 = 1.0 - *(float *)((long)unaff_x19 + 0x2cc);
      fVar49 = fVar49 + fVar64 * (*(float *)((long)unaff_x19 + 0x2a4) +
                                 fVar74 * (fVar50 + fVar68 * fVar71) +
                                 in_stack_000000c8 *
                                 (fVar72 + fStack00000000000000cc +
                                           *(float *)(unaff_x19[0x1f] + 0x1ac)));
      *(float *)(unaff_x19 + 199) = fVar49;
      goto joined_r0x02494fac;
    }
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar49 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (*(float *)((long)unaff_x19 + 0x2a4) +
             fVar74 * fVar50 +
             in_stack_000000c8 *
             (fVar72 + fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac)));
    param_2 = (ulong)(uint)fVar49;
    fVar49 = *(float *)(unaff_x19 + 199) - fVar49;
    *(float *)(unaff_x19 + 199) = fVar49;
    if ((unaff_w29 != 0) || (in_stack_000017bc == 0x200b)) {
      fVar64 = in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
      param_2 = (ulong)(uint)fVar64;
      fVar49 = fVar49 - fVar64;
      goto LAB_02495058;
    }
  }
  else {
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar64 = *(float *)(unaff_x19 + 199);
    fVar49 = fVar64 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                      (*(float *)((long)unaff_x19 + 0x2a4) +
                      (*(float *)(unaff_x19 + 0x55) - fVar52) +
                      in_stack_000000c8 *
                      (fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac)));
    *(float *)(unaff_x19 + 199) = fVar49;
joined_r0x02494fac:
    if ((unaff_w29 != 0) || (param_2 = (ulong)(uint)fVar64, in_stack_000017bc == 0x200b)) {
      fVar64 = in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
      param_2 = (ulong)(uint)fVar64;
      fVar49 = fVar49 + fVar64;
      goto LAB_02495058;
    }
  }
  lVar25 = *in_stack_00000150;
  if ((lVar25 == 0) || (lVar30 = *(long *)(lVar25 + 0x38), lVar30 == 0)) goto LAB_0249920c;
  uVar15 = *in_stack_00000148;
  uVar61 = (uint)*(undefined8 *)(lVar30 + 0x18);
  if (uVar61 <= uVar15) goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  *(float *)(lVar30 + (int)uVar15 * unaff_x27 + 0x144) = fVar49;
  uVar37 = in_stack_000017bc;
  if ((int)in_stack_000017bc < 0xd) {
    if ((in_stack_000017bc - 10 < 2) || (in_stack_000017bc == 3)) goto LAB_024950bc;
FUN_02495710:
    if ((bool)(bVar8 & in_stack_000017bc == 0x2d)) goto LAB_024950bc;
  }
  else {
    if (in_stack_000017bc - 0x2028 < 2) goto LAB_024950bc;
    if (in_stack_000017bc != 0xd) goto FUN_02495710;
    param_2 = 0;
    *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
  }
  if ((float)uVar15 != in_stack_00000078._4_4_) goto LAB_0249572c;
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
      puVar10 = System_Threading_Mutex_TypeInfo;
      lVar25 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar25 = *(long *)puVar10;
      }
      lVar30 = *(long *)(lVar25 + 0xb8);
      if (*(int *)(lVar30 + 0x7ac) == (int)unaff_x19[0x94]) {
        if (*(int *)(lVar25 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar30 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
        }
        FUN_013b8de4(lVar30 + 0x11f0,&stack0x00000880,
                     *(undefined8 *)
                      Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                    );
        lVar25 = *(long *)System_Threading_Mutex_TypeInfo;
        memcpy((void *)(*(long *)(lVar25 + 0xb8) + 0x788),&stack0x00000880,0x378);
        lVar25 = *(long *)(lVar25 + 0xb8);
        *(float *)(lVar25 + 0x7bc) = fVar64 + *(float *)(lVar25 + 0x7bc);
        *(float *)(lVar25 + 0x800) = fVar64 + *(float *)(lVar25 + 0x800);
        memcpy(&stack0x00000190,(void *)(lVar25 + 0x788),0x378);
        FUN_013b86dc(lVar25 + 0x11f0,&stack0x00000190,
                     *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__);
      }
    }
  }
  fVar68 = *(float *)(unaff_x19 + 0x9a);
  *(undefined1 *)((long)unaff_x19 + 0x334) = 0;
  fVar49 = *(float *)((long)unaff_x19 + 0x4c4) - fVar68;
  fVar64 = *(float *)((long)unaff_x19 + 0x4bc);
  if (fVar49 <= *(float *)((long)unaff_x19 + 0x4bc)) {
    fVar64 = fVar49;
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
  lVar25 = *in_stack_00000150;
  if ((lVar25 == 0) || (lVar30 = *(long *)(lVar25 + 0x50), lVar30 == 0)) goto LAB_0249920c;
  uVar15 = *(uint *)(unaff_x19 + 0x94);
  if (*(uint *)(lVar30 + 0x18) <= uVar15)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar45 = lVar30 + (long)(int)uVar15 * 0x5c;
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
  lVar25 = *(long *)(lVar25 + 0x38);
  if (lVar25 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar25 + 0x18) <= *(uint *)((long)unaff_x19 + 0x494))
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  uVar75 = *(undefined4 *)(lVar25 + (int)*(uint *)((long)unaff_x19 + 0x494) * unaff_x27 + 0x11c);
  lVar30 = lVar30 + (long)(int)uVar15 * 0x5c;
  *(float *)(lVar30 + 0x70) = fVar49;
  *(undefined4 *)(lVar30 + 0x6c) = uVar75;
  lVar25 = *in_stack_00000150;
  if ((lVar25 == 0) || (lVar30 = *(long *)(lVar25 + 0x50), lVar30 == 0)) goto LAB_0249920c;
  if (*(uint *)(lVar30 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar25 = *(long *)(lVar25 + 0x38);
  if (lVar25 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar25 + 0x18) <= *(uint *)((long)unaff_x19 + 0x49c))
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  uVar75 = *(undefined4 *)(lVar25 + (int)*(uint *)((long)unaff_x19 + 0x49c) * unaff_x27 + 0x128);
  fVar71 = fVar71 - fVar68;
  lVar30 = lVar30 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
  *(float *)(lVar30 + 0x78) = fVar71;
  *(undefined4 *)(lVar30 + 0x74) = uVar75;
  lVar25 = *in_stack_00000150;
  if ((lVar25 == 0) || (lVar45 = *(long *)(lVar25 + 0x50), lVar45 == 0)) goto LAB_0249920c;
  lVar22 = (long)(int)*(uint *)(unaff_x19 + 0x94);
  if (*(uint *)(lVar45 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar30 = lVar45 + lVar22 * 0x5c;
  *(float *)(lVar30 + 0x44) = *(float *)(lVar30 + 0x74) - fVar74 * in_stack_00000128;
  *(float *)(lVar30 + 0x5c) = fStack00000000000000d4;
  if (*(int *)(lVar30 + 0x24) == 1) {
    *(int *)(lVar45 + lVar22 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
  }
  if ((*in_stack_00000138 == 0) || (lVar30 = *(long *)(lVar25 + 0x38), lVar30 == 0))
  goto LAB_0249920c;
  lVar40 = (long)(int)*(uint *)((long)unaff_x19 + 0x49c);
  uVar61 = (uint)*(undefined8 *)(lVar30 + 0x18);
  if (uVar61 <= *(uint *)((long)unaff_x19 + 0x49c))
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  if ((*(char *)(lVar30 + lVar40 * unaff_x27 + 0x194) == '\0') &&
     (lVar40 = (long)(int)*(uint *)(unaff_x19 + 0x93), uVar61 <= *(uint *)(unaff_x19 + 0x93)))
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  fVar74 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
           (in_stack_000000c8 *
            (fVar72 + fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac)) -
           *(float *)((long)unaff_x19 + 0x2a4));
  fVar64 = -fVar74;
  if ((char)unaff_x19[0x1d] != '\0') {
    fVar64 = fVar74;
  }
  lVar45 = lVar45 + lVar22 * 0x5c;
  *(float *)(lVar45 + 0x58) = *(float *)(lVar30 + lVar40 * unaff_x27 + 0x144) + fVar64;
  fVar64 = *(float *)(unaff_x19 + 0x9a);
  *(float *)(lVar45 + 0x48) = fStack0000000000000050 + (fVar71 - fVar49);
  *(float *)(lVar45 + 0x4c) = fVar71;
  param_2 = (ulong)(uint)(0.0 - fVar64);
  *(float *)(lVar45 + 0x50) = 0.0 - fVar64;
  *(float *)(lVar45 + 0x54) = fVar49;
  plVar43 = (long *)System_Threading_Mutex_TypeInfo;
  if ((int)in_stack_000017bc < 0x2d) {
    if (1 < in_stack_000017bc - 10) goto code_r0x0249549c;
  }
  else if ((1 < in_stack_000017bc - 0x2028) && (in_stack_000017bc != 0x2d)) goto LAB_0249572c;
  if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar47 = (long *)StringLiteral_302;
  FUN_024d69d4();
  lVar25 = unaff_x19[0x6c];
  *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
  iVar14 = (int)unaff_x19[0x94] + 1;
  *(int *)(unaff_x19 + 0x94) = iVar14;
  *(int *)(unaff_x19 + 0x92) = *(int *)((long)unaff_x19 + 0x48c) + 1;
  if ((lVar25 == 0) || (*(long *)(lVar25 + 0x50) == 0)) goto LAB_0249920c;
  if (*(int *)(*(long *)(lVar25 + 0x50) + 0x18) <= iVar14) {
    FUN_024d6e60();
    lVar25 = unaff_x19[0x6c];
    if (lVar25 == 0) goto LAB_0249920c;
  }
  lVar25 = *(long *)(lVar25 + 0x38);
  if (lVar25 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar25 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  fVar64 = *(float *)(lVar25 + (int)*in_stack_00000148 * unaff_x27 + 0x154);
  if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
    fVar74 = 0.0;
    if ((in_stack_000017bc == 0x2029) || (in_stack_000017bc == 10)) {
      fVar74 = *(float *)((long)unaff_x19 + 0x2c4);
    }
    uVar28 = 0;
    fVar74 = *(float *)(unaff_x19 + 0x9a) +
             fVar64 + (0.0 - *(float *)((long)unaff_x19 + 0x4c4)) +
             fStack0000000000000054 * (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4))
             + in_stack_000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar74);
  }
  else {
    if ((in_stack_000017bc == 0x2029) || (fVar74 = 0.0, in_stack_000017bc == 10)) {
      fVar74 = *(float *)((long)unaff_x19 + 0x2c4);
    }
    uVar28 = 1;
    fVar74 = *(float *)(unaff_x19 + 0x9a) +
             *(float *)(unaff_x19 + 0x57) +
             in_stack_000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar74);
  }
  *(float *)(unaff_x19 + 0x9a) = fVar74;
  *(undefined1 *)((long)unaff_x19 + 700) = uVar28;
  lVar25 = *plVar43;
  if (*(int *)(lVar25 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar25 = *plVar43;
  }
  uVar20 = *(undefined8 *)(*(long *)(lVar25 + 0xb8) + 0x15a8);
  *(float *)(unaff_x19 + 0x99) = fVar64;
  param_2 = NEON_rev64(uVar20,4);
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
    uVar37 = 3;
  }
LAB_0249572c:
  uVar15 = *in_stack_00000148;
  if (uVar61 <= uVar15) goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  if (*(char *)(lVar30 + (int)uVar15 * unaff_x27 + 0x194) != '\0') {
    lVar30 = lVar30 + (int)uVar15 * unaff_x27;
    uVar26 = *(ulong *)(lVar30 + 0x11c);
    uVar24 = *(ulong *)(in_stack_00000070 + 0x230);
    *(ulong *)(in_stack_00000070 + 0x230) =
         uVar26 ^ (uVar26 ^ uVar24) &
                  CONCAT44(-(uint)((float)(uVar24 >> 0x20) < (float)(uVar26 >> 0x20)),
                           -(uint)((float)uVar24 < (float)uVar26));
    uVar24 = *(ulong *)(in_stack_00000070 + 0x238);
    param_2 = *(ulong *)(lVar30 + 0x128);
    *(ulong *)(in_stack_00000070 + 0x238) =
         param_2 ^ (param_2 ^ uVar24) &
                   CONCAT44(-(uint)((float)(param_2 >> 0x20) < (float)(uVar24 >> 0x20)),
                            -(uint)((float)param_2 < (float)uVar24));
  }
  if (((int)unaff_x19[0x5b] == 5) &&
     ((0xd < uVar37 || ((1 << (ulong)(uVar37 & 0x1f) & 0x2c00U) == 0)))) {
    lVar30 = *(long *)(lVar25 + 0x58);
    if (lVar30 == 0) goto LAB_0249920c;
    iVar14 = (int)unaff_x19[0x95] + 1;
    if (*(int *)(lVar30 + 0x18) < iVar14) {
      if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01147c08((long *)(lVar25 + 0x58),iVar14,1,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerMove__);
      lVar25 = *in_stack_00000150;
      if (lVar25 == 0) goto LAB_0249920c;
    }
    lVar30 = *(long *)(lVar25 + 0x58);
    if (lVar30 == 0) goto LAB_0249920c;
    uVar61 = *(uint *)(unaff_x19 + 0x95);
    lVar45 = (long)(int)uVar61;
    uVar15 = *(uint *)(lVar30 + 0x18);
    if (uVar15 <= uVar61)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar22 = lVar30 + lVar45 * 0x14;
    fVar74 = *(float *)(lVar22 + 0x30);
    param_2 = (ulong)(uint)fVar74;
    *(undefined4 *)(lVar22 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
    fVar64 = *(float *)((long)unaff_x19 + 0x4bc);
    if (fVar74 <= *(float *)((long)unaff_x19 + 0x4bc)) {
      fVar64 = fVar74;
    }
    *(float *)(lVar22 + 0x30) = fVar64;
    uVar37 = *(uint *)((long)unaff_x19 + 0x48c);
    if (uVar37 == 0 && uVar61 == 0) {
      *(uint *)(lVar30 + lVar45 * 0x14 + 0x20) = uVar37;
    }
    else {
      uVar7 = uVar37 - 1;
      if (0 < (int)uVar37) {
        lVar25 = *(long *)(lVar25 + 0x38);
        if (lVar25 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar25 + 0x18) <= uVar7)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (uVar61 != *(uint *)(lVar25 + (long)(int)uVar7 * (long)iVar18 + 0x68)) {
          if (uVar15 <= uVar61 - 1)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          *(uint *)(lVar30 + 0x20 + (long)(int)(uVar61 - 1) * 0x14 + 4) = uVar7;
          *(uint *)(lVar30 + 0x20 + lVar45 * 0x14) = uVar37;
          goto LAB_024957b0;
        }
      }
      if ((float)uVar37 == in_stack_00000078._4_4_) {
        *(float *)(lVar30 + lVar45 * 0x14 + 0x24) = in_stack_00000078._4_4_;
      }
    }
  }
LAB_024957b0:
  puVar10 = System_Threading_Mutex_TypeInfo;
  if (((char)unaff_x19[0x5a] == '\0') &&
     ((6 < *(uint *)(unaff_x19 + 0x5b) ||
      ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5b) & 0x1f) & 0x4aU) == 0)))) goto LAB_02495b70;
  if ((unaff_w29 == 0) &&
     (((in_stack_000017bc != 0x2d && (in_stack_000017bc != 0x200b)) && (in_stack_000017bc != 0xad)))
     ) {
    if (*(char *)((long)unaff_x19 + 0x2d2) != '\0') goto LAB_024958f0;
  }
  else {
    if (*(char *)((long)unaff_x19 + 0x2d2) == '\x01') goto LAB_024958f0;
    if (((0x28 < in_stack_000017bc - 0x2007) ||
        ((1L << ((ulong)(in_stack_000017bc - 0x2007) & 0x3f) & 0x10000000401U) == 0)) &&
       ((in_stack_000017bc != 0xa0 && (in_stack_000017bc != 0x2060)))) {
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_024d69d4();
      bStack000000000000005c = 0;
      *(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xe78) = 0xffffffff;
      goto LAB_02495b70;
    }
  }
  if (((((in_stack_000017bc - 0xac01 < 0x2bfe) || (in_stack_000017bc - 0xa961 < 0x1e)) ||
       (in_stack_000017bc - 0x1101 < 0xfe)) && (uVar24 = FUN_024e95f0(0), (uVar24 & 1) == 0)) ||
     ((((in_stack_000017bc - 0xff01 < 0xee || (in_stack_000017bc - 0xfe31 < 0x1e)) ||
       (in_stack_000017bc - 0x2e81 < 0x717e)) || (in_stack_000017bc - 0xf901 < 0x1fe)))) {
    lVar25 = FUN_024e94b0(0);
    if (lVar25 == 0) goto LAB_0249920c;
    param_3 = *(long *)(lVar25 + 0x10);
    unaff_x22 = in_stack_00000150;
    goto code_r0x02495924;
  }
LAB_024958f0:
  if ((bStack000000000000005c & 1) == 0) {
LAB_024959d4:
    bStack000000000000005c = 0;
    goto LAB_02495b70;
  }
  if ((in_stack_000017bc == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) == 0) goto LAB_02495af4;
LAB_02495af8:
  if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_024d69d4();
  goto LAB_02495b30;
LAB_02496a50:
  do {
    uVar19 = uVar37 - 1;
    if (*(uint *)(lVar25 + 0x18) <= uVar19)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*in_stack_00000150 == 0) || (lVar45 = *(long *)(*in_stack_00000150 + 0x50), lVar45 == 0))
    goto LAB_0249920c;
    lVar40 = (long)(int)uVar19;
    lVar22 = lVar25 + lVar40 * 0x178;
    uVar7 = *(uint *)(lVar22 + 100);
    if (*(uint *)(lVar45 + 0x18) <= uVar7)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar38 = *(long *)(lVar22 + 0x38);
    uVar3 = *(ushort *)(lVar22 + 0x20);
    lVar36 = (long)(int)uVar7;
    lVar45 = lVar45 + lVar36 * 0x5c;
    uVar5 = *(uint *)(lVar45 + 0x3c);
    iVar16 = *(int *)(lVar45 + 0x28);
    iVar17 = *(int *)(lVar45 + 0x2c);
    uVar6 = *(uint *)(lVar45 + 0x40);
    lVar22 = (long)(int)uVar6;
    uVar44 = *(uint *)(lVar45 + 0x68);
    fVar69 = *(float *)(lVar45 + 0x5c);
    fVar63 = *(float *)(lVar45 + 0x60);
    iVar2 = *(int *)(lVar45 + 0x20);
    fVar52 = *(float *)(lVar45 + 0x4c);
    fVar53 = *(float *)(lVar45 + 0x54);
    fVar71 = *(float *)(lVar45 + 0x58);
    fVar65 = *(float *)(lVar45 + 0x6c);
    fVar54 = *(float *)(lVar45 + 0x70);
    fVar51 = *(float *)(lVar45 + 0x74);
    fVar72 = *(float *)(lVar45 + 0x78);
    fVar66 = fVar69 + fVar63;
    uVar42 = (uint)uVar3;
    if ((int)uVar44 < 9) {
      switch(uVar44) {
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
    else if (uVar44 == 0x10) {
switchD_02496b58_caseD_8:
      if (uVar3 < 0xad) {
        if ((uVar42 != 3) && (uVar42 != 10)) goto LAB_02496bac;
      }
      else if ((uVar42 != 0xad) && ((uVar42 != 0x200b && (uVar42 != 0x2060)))) {
LAB_02496bac:
        if (*(uint *)(lVar25 + 0x18) <= uVar5)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar4 = *(undefined2 *)(lVar25 + (long)(int)uVar5 * 0x178 + 0x20);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar24 = FUN_016f9f84(uVar4,0);
        if ((uVar24 & 1) == 0) {
          bVar1 = (int)uVar7 < (int)unaff_x19[0x94];
        }
        else {
          bVar1 = false;
        }
        if ((fVar71 <= fVar69) && (!bVar1 && (uVar44 >> 4 & 1) == 0)) {
          in_stack_000000c8 = fVar63;
          if ((char)unaff_x19[0x1d] != '\0') {
            in_stack_000000c8 = fVar66;
          }
          goto LAB_02496c90;
        }
        if (((uVar37 == 1) || (uVar7 != uVar61)) || (uVar19 == *(uint *)((long)unaff_x19 + 0x31c)))
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
          cVar29 = (char)unaff_x19[0x1d];
          fVar66 = -fVar71;
          if (cVar29 != '\0') {
            fVar66 = fVar71;
          }
          if (*(uint *)(lVar25 + 0x18) <= uVar5)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar71 = 1.0;
          iVar17 = (int)*(char *)(lVar25 + (long)(int)uVar5 * 0x178 + 0x194) +
                   (-iVar2 - ((uint)fStack0000000000000020 & 1)) + iVar17 + -1;
          if (0 < iVar17) {
            fVar71 = *(float *)((long)unaff_x19 + 0x2d4);
          }
          if (iVar17 < 1) {
            iVar17 = 1;
          }
          if (uVar42 == 9) {
LAB_02498bb8:
            fVar71 = 1.0 - fVar71;
          }
          else {
            if (uVar42 != 0xa0) {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar24 = FUN_016fa418(uVar3,0);
              cVar29 = (char)unaff_x19[0x1d];
              if ((uVar24 & 1) != 0) goto LAB_02498bb8;
            }
            iVar17 = (iVar2 - (~(uint)fStack0000000000000020 & 1)) + iVar16;
          }
          fVar71 = ((fVar69 + fVar66) * fVar71) / (float)iVar17;
          if (cVar29 == '\0') {
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
    else if (uVar44 == 0x20) {
      fVar71 = fVar65 + fVar51;
      goto LAB_02496c1c;
    }
switchD_02496b58_caseD_3:
    uVar44 = (uint)*(undefined8 *)(lVar25 + 0x18);
    if (uVar44 <= uVar19)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar45 = lVar25 + lVar40 * 0x178;
    fVar66 = fStack0000000000000098 + in_stack_000000c8;
    fVar71 = (float)_in_stack_00000090 + (float)uStack00000000000000c0;
    fVar69 = (float)((ulong)_in_stack_00000090 >> 0x20) +
             (float)((ulong)uStack00000000000000c0 >> 0x20);
    if (*(char *)(lVar45 + 0x194) == '\0') goto LAB_02497688;
    iVar16 = *(int *)(lVar25 + lVar40 * 0x178 + 0x2c);
    if (iVar16 != 0) goto LAB_02497374;
    fVar68 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)uVar7,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
    case 0:
      lVar32 = lVar25 + lVar40 * 0x178;
      *(undefined4 *)(lVar32 + 0x84) = 0;
      *(undefined4 *)(lVar32 + 0xac) = 0;
      *(undefined4 *)(lVar32 + 0xd4) = 0x3f800000;
      fVar68 = 1.0;
      break;
    case 1:
      fVar72 = *(float *)(lVar25 + lVar40 * 0x178 + 0x70);
      if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
        lVar32 = lVar25 + lVar40 * 0x178;
        fVar51 = (in_stack_000000c8 + fVar72) - *(float *)(in_stack_00000070 + 0x230);
        fVar72 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
        goto LAB_02496df8;
      }
      lVar32 = lVar25 + lVar40 * 0x178;
      fVar51 = fVar51 - fVar65;
      *(float *)(lVar32 + 0x84) = fVar68 + (fVar72 - fVar65) / fVar51;
      *(float *)(lVar32 + 0xac) = fVar68 + (*(float *)(lVar32 + 0x98) - fVar65) / fVar51;
      *(float *)(lVar32 + 0xd4) = fVar68 + (*(float *)(lVar32 + 0xc0) - fVar65) / fVar51;
      fVar68 = fVar68 + (*(float *)(lVar32 + 0xe8) - fVar65) / fVar51;
      break;
    case 2:
      lVar32 = lVar25 + lVar40 * 0x178;
      fVar72 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
      fVar51 = (in_stack_000000c8 + *(float *)(lVar32 + 0x70)) -
               *(float *)(in_stack_00000070 + 0x230);
LAB_02496df8:
      *(float *)(lVar32 + 0x84) = fVar68 + fVar51 / fVar72;
      *(float *)(lVar32 + 0xac) =
           fVar68 + ((in_stack_000000c8 + *(float *)(lVar32 + 0x98)) -
                    *(float *)(in_stack_00000070 + 0x230)) /
                    (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
      *(float *)(lVar32 + 0xd4) =
           fVar68 + ((in_stack_000000c8 + *(float *)(lVar32 + 0xc0)) -
                    *(float *)(in_stack_00000070 + 0x230)) /
                    (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
      fVar68 = fVar68 + ((in_stack_000000c8 + *(float *)(lVar32 + 0xe8)) -
                        *(float *)(in_stack_00000070 + 0x230)) /
                        (*(float *)(in_stack_00000070 + 0x238) -
                        *(float *)(in_stack_00000070 + 0x230));
      break;
    case 3:
      switch((int)unaff_x19[0x61]) {
      case 0:
        lVar32 = lVar25 + lVar40 * 0x178;
        *(undefined4 *)(lVar32 + 0x88) = 0;
        *(undefined4 *)(lVar32 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar32 + 0xd8) = 0;
        *(undefined4 *)(lVar32 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar32 = lVar25 + lVar40 * 0x178;
        fVar72 = fVar72 - fVar54;
        fVar51 = fVar68 + (*(float *)(lVar32 + 0x74) - fVar54) / fVar72;
        fVar72 = fVar68 + (*(float *)(lVar32 + 0x9c) - fVar54) / fVar72;
        *(float *)(lVar32 + 0x88) = fVar51;
        *(float *)(lVar32 + 0xb0) = fVar72;
        *(float *)(lVar32 + 0xd8) = fVar51;
        *(float *)(lVar32 + 0x100) = fVar72;
        break;
      case 2:
        lVar32 = lVar25 + lVar40 * 0x178;
        fVar51 = fVar68 + (*(float *)(lVar32 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                          (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
        *(float *)(lVar32 + 0x88) = fVar51;
        fVar72 = *(float *)(unaff_x19 + 0x9b);
        fVar54 = *(float *)(unaff_x19 + 0x9c);
        *(float *)(lVar32 + 0xd8) = fVar51;
        fVar51 = fVar68 + (*(float *)(lVar32 + 0x9c) - fVar72) / (fVar54 - fVar72);
        *(float *)(lVar32 + 0xb0) = fVar51;
        *(float *)(lVar32 + 0x100) = fVar51;
        break;
      case 3:
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
        uVar44 = (uint)*(undefined8 *)(lVar25 + 0x18);
      }
      if (uVar44 <= uVar19)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar32 = lVar25 + lVar40 * 0x178;
      fVar51 = *(float *)(lVar32 + 0x15c);
      fVar72 = (1.0 - (*(float *)(lVar32 + 0x88) + *(float *)(lVar32 + 0xb0)) * fVar51) * 0.5;
      fVar54 = fVar68 + *(float *)(lVar32 + 0x88) * fVar51 + fVar72;
      fVar68 = fVar68 + fVar72 + *(float *)(lVar32 + 0xb0) * fVar51;
      *(float *)(lVar32 + 0x84) = fVar54;
      *(float *)(lVar32 + 0xac) = fVar54;
      *(float *)(lVar32 + 0xd4) = fVar68;
      break;
    default:
      goto switchD_02496d4c_default;
    }
    *(float *)(lVar25 + lVar40 * 0x178 + 0xfc) = fVar68;
switchD_02496d4c_default:
    switch((int)unaff_x19[0x61]) {
    case 0:
      if (uVar44 <= uVar19)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar32 = lVar25 + lVar40 * 0x178;
      *(undefined4 *)(lVar32 + 0x88) = 0;
      *(undefined4 *)(lVar32 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar32 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar32 + 0x100) = 0;
      break;
    case 1:
      if (uVar19 < uVar44) {
        lVar32 = lVar25 + lVar40 * 0x178;
        fVar52 = fVar52 - fVar53;
        fVar68 = (*(float *)(lVar32 + 0x74) - fVar53) / fVar52;
        fVar52 = (*(float *)(lVar32 + 0x9c) - fVar53) / fVar52;
        *(float *)(lVar32 + 0x88) = fVar68;
        goto LAB_02497174;
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    case 2:
      if (uVar44 <= uVar19)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar32 = lVar25 + lVar40 * 0x178;
      fVar68 = (*(float *)(lVar32 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
      *(float *)(lVar32 + 0x88) = fVar68;
      fVar52 = (*(float *)(lVar32 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
LAB_02497174:
      *(float *)(lVar32 + 0xb0) = fVar52;
      *(float *)(lVar32 + 0xd8) = fVar52;
      *(float *)(lVar32 + 0x100) = fVar68;
      break;
    case 3:
      if (uVar44 <= uVar19)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar32 = lVar25 + lVar40 * 0x178;
      fVar52 = *(float *)(lVar32 + 0x15c);
      fVar51 = (1.0 - (*(float *)(lVar32 + 0x84) + *(float *)(lVar32 + 0xd4)) / fVar52) * 0.5;
      fVar68 = *(float *)(lVar32 + 0x84) / fVar52 + fVar51;
      fVar51 = fVar51 + *(float *)(lVar32 + 0xd4) / fVar52;
      *(float *)(lVar32 + 0x88) = fVar68;
      *(float *)(lVar32 + 0xb0) = fVar51;
      *(float *)(lVar32 + 0x100) = fVar68;
      *(float *)(lVar32 + 0xd8) = fVar51;
    }
    if (uVar44 <= uVar19)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar32 = lVar25 + lVar40 * 0x178;
    fVar68 = *(float *)(lVar32 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
    if ((*(char *)(lVar32 + 0x5c) == '\0') && ((*(byte *)(lVar25 + lVar40 * 0x178 + 400) & 1) != 0))
    {
      fVar68 = -fVar68;
    }
    fVar51 = fVar64;
    if (((iVar14 == 2) || (fVar51 = fVar50, iVar14 == 1)) || (fVar51 = fVar64 / fVar74, iVar14 == 0)
       ) {
      fVar68 = fVar51 * fVar68;
    }
    lVar32 = lVar25 + lVar40 * 0x178;
    fVar52 = *(float *)(lVar32 + 0x88);
    fVar72 = *(float *)(lVar32 + 0x84);
    fVar51 = -2.1474836e+09;
    if (fVar72 != INFINITY) {
      fVar51 = (float)(int)fVar72;
    }
    fVar54 = *(float *)(lVar32 + 0xd4);
    fVar65 = *(float *)(lVar32 + 0xd8);
    fVar53 = -2.1474836e+09;
    if (fVar52 != INFINITY) {
      fVar53 = (float)(int)fVar52;
    }
    uVar75 = FUN_024e0374(fVar72 - fVar51,fVar52 - fVar53);
    *(undefined4 *)(lVar32 + 0x84) = uVar75;
    if (*(uint *)(lVar25 + 0x18) <= uVar19)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar65 = fVar65 - fVar53;
    *(float *)(lVar32 + 0x88) = fVar68;
    uVar75 = FUN_024e0374(fVar72 - fVar51,fVar65);
    *(undefined4 *)(lVar25 + lVar40 * 0x178 + 0xac) = uVar75;
    if (*(uint *)(lVar25 + 0x18) <= uVar19)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar54 = fVar54 - fVar51;
    *(float *)(lVar25 + lVar40 * 0x178 + 0xb0) = fVar68;
    fVar51 = (float)FUN_024e0374(fVar54,fVar65);
    *(float *)(lVar32 + 0xd4) = fVar51;
    if (*(uint *)(lVar25 + 0x18) <= uVar19)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar32 + 0xd8) = fVar68;
    uVar75 = FUN_024e0374(fVar54,fVar52 - fVar53);
    *(undefined4 *)(lVar25 + lVar40 * 0x178 + 0xfc) = uVar75;
    uVar44 = (uint)*(undefined8 *)(lVar25 + 0x18);
    if (uVar44 <= uVar19)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar25 + lVar40 * 0x178 + 0x100) = fVar68;
LAB_02497374:
    if (((int)unaff_x19[100] <= (int)uVar19) ||
       (*(int *)((long)unaff_x19 + 0x324) <= iStack00000000000000ac)) goto LAB_02497490;
    if (((int)uVar7 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] != 5)) {
      if (uVar44 <= uVar19)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar45 = lVar25 + lVar40 * 0x178;
      *(ulong *)(lVar45 + 0x70) =
           CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar45 + 0x70) >> 0x20),
                    fVar66 + (float)*(undefined8 *)(lVar45 + 0x70));
      *(float *)(lVar45 + 0x78) = fVar69 + *(float *)(lVar45 + 0x78);
      if (*(uint *)(lVar25 + 0x18) <= uVar19)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar45 = lVar25 + lVar40 * 0x178;
      *(ulong *)(lVar45 + 0x98) =
           CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar45 + 0x98) >> 0x20),
                    fVar66 + (float)*(undefined8 *)(lVar45 + 0x98));
      *(float *)(lVar45 + 0xa0) = fVar69 + *(float *)(lVar45 + 0xa0);
      if (*(uint *)(lVar25 + 0x18) <= uVar19)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar45 = lVar25 + lVar40 * 0x178;
      *(ulong *)(lVar45 + 0xc0) =
           CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar45 + 0xc0) >> 0x20),
                    fVar66 + (float)*(undefined8 *)(lVar45 + 0xc0));
      *(float *)(lVar45 + 200) = fVar69 + *(float *)(lVar45 + 200);
      if (*(uint *)(lVar25 + 0x18) <= uVar19)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar45 = lVar25 + lVar40 * 0x178;
      *(ulong *)(lVar45 + 0xe8) =
           CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar45 + 0xe8) >> 0x20),
                    fVar66 + (float)*(undefined8 *)(lVar45 + 0xe8));
      *(float *)(lVar45 + 0xf0) = fVar69 + *(float *)(lVar45 + 0xf0);
      if (iVar16 == 0) goto LAB_02497668;
LAB_02497598:
      if (iVar16 == 1) {
        pcVar34 = *(code **)(*unaff_x19 + 0x8f8);
        goto LAB_02497674;
      }
    }
    else {
      if (((int)uVar7 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] == 5)) {
        if (uVar44 <= uVar19)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (*(uint *)(lVar25 + lVar40 * 0x178 + 0x68) != uStack000000000000002c) goto LAB_02497490;
        lVar45 = lVar25 + lVar40 * 0x178;
        *(ulong *)(lVar45 + 0x70) =
             CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar45 + 0x70) >> 0x20),
                      fVar66 + (float)*(undefined8 *)(lVar45 + 0x70));
        *(float *)(lVar45 + 0x78) = fVar69 + *(float *)(lVar45 + 0x78);
        if (*(uint *)(lVar25 + 0x18) <= uVar19)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar45 = lVar25 + lVar40 * 0x178;
        *(ulong *)(lVar45 + 0x98) =
             CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar45 + 0x98) >> 0x20),
                      fVar66 + (float)*(undefined8 *)(lVar45 + 0x98));
        *(float *)(lVar45 + 0xa0) = fVar69 + *(float *)(lVar45 + 0xa0);
        if (*(uint *)(lVar25 + 0x18) <= uVar19)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar45 = lVar25 + lVar40 * 0x178;
        *(ulong *)(lVar45 + 0xc0) =
             CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar45 + 0xc0) >> 0x20),
                      fVar66 + (float)*(undefined8 *)(lVar45 + 0xc0));
        *(float *)(lVar45 + 200) = fVar69 + *(float *)(lVar45 + 200);
        if (*(uint *)(lVar25 + 0x18) <= uVar19)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar45 = lVar25 + lVar40 * 0x178;
        *(ulong *)(lVar45 + 0xe8) =
             CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar45 + 0xe8) >> 0x20),
                      fVar66 + (float)*(undefined8 *)(lVar45 + 0xe8));
        *(float *)(lVar45 + 0xf0) = fVar69 + *(float *)(lVar45 + 0xf0);
      }
      else {
LAB_02497490:
        if (uVar44 <= uVar19)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        puVar10 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
        lVar32 = lVar25 + lVar40 * 0x178;
        uVar75 = *(undefined4 *)
                  (*(undefined8 **)
                    (*(long *)
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                    + 0xb8) + 1);
        *(undefined8 *)(lVar32 + 0x70) =
             **(undefined8 **)
               (*(long *)
                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
               0xb8);
        *(undefined4 *)(lVar32 + 0x78) = uVar75;
        if (*(uint *)(lVar25 + 0x18) <= uVar19)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar32 = lVar25 + lVar40 * 0x178;
        uVar75 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar10 + 0xb8) + 1);
        *(undefined8 *)(lVar32 + 0x98) = **(undefined8 **)(*(long *)puVar10 + 0xb8);
        *(undefined4 *)(lVar32 + 0xa0) = uVar75;
        if (*(uint *)(lVar25 + 0x18) <= uVar19)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar32 = lVar25 + lVar40 * 0x178;
        uVar75 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar10 + 0xb8) + 1);
        *(undefined8 *)(lVar32 + 0xc0) = **(undefined8 **)(*(long *)puVar10 + 0xb8);
        *(undefined4 *)(lVar32 + 200) = uVar75;
        if (*(uint *)(lVar25 + 0x18) <= uVar19)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar32 = lVar25 + lVar40 * 0x178;
        uVar75 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar10 + 0xb8) + 1);
        *(undefined8 *)(lVar32 + 0xe8) = **(undefined8 **)(*(long *)puVar10 + 0xb8);
        *(undefined4 *)(lVar32 + 0xf0) = uVar75;
        if (*(uint *)(lVar25 + 0x18) <= uVar19)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        *(undefined1 *)(lVar45 + 0x194) = 0;
      }
      if (iVar16 != 0) goto LAB_02497598;
LAB_02497668:
      pcVar34 = *(code **)(*unaff_x19 + 0x8d8);
LAB_02497674:
      (*pcVar34)();
    }
LAB_02497688:
    if ((*in_stack_00000150 == 0) || (lVar45 = *(long *)(*in_stack_00000150 + 0x38), lVar45 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar45 + 0x18) <= uVar19)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar45 = lVar45 + lVar40 * 0x178;
    uVar20 = *(undefined8 *)(lVar45 + 0x11c);
    *(undefined8 *)(lVar45 + 0x11c) =
         CONCAT44(fVar71 + (float)((ulong)uVar20 >> 0x20),fVar66 + (float)uVar20);
    *(float *)(lVar45 + 0x124) = fVar69 + *(float *)(lVar45 + 0x124);
    if ((*in_stack_00000150 == 0) || (lVar45 = *(long *)(*in_stack_00000150 + 0x38), lVar45 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar45 + 0x18) <= uVar19)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar45 = lVar45 + lVar40 * 0x178;
    *(ulong *)(lVar45 + 0x110) =
         CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar45 + 0x110) >> 0x20),
                  fVar66 + (float)*(undefined8 *)(lVar45 + 0x110));
    *(float *)(lVar45 + 0x118) = fVar69 + *(float *)(lVar45 + 0x118);
    if ((*in_stack_00000150 == 0) || (lVar45 = *(long *)(*in_stack_00000150 + 0x38), lVar45 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar45 + 0x18) <= uVar19)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar45 = lVar45 + lVar40 * 0x178;
    *(ulong *)(lVar45 + 0x128) =
         CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar45 + 0x128) >> 0x20),
                  fVar66 + (float)*(undefined8 *)(lVar45 + 0x128));
    *(float *)(lVar45 + 0x130) = fVar69 + *(float *)(lVar45 + 0x130);
    if ((*in_stack_00000150 == 0) || (lVar45 = *(long *)(*in_stack_00000150 + 0x38), lVar45 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar45 + 0x18) <= uVar19)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar45 = lVar45 + lVar40 * 0x178;
    *(float *)(lVar45 + 0x134) = fVar66 + *(float *)(lVar45 + 0x134);
    *(ulong *)(lVar45 + 0x138) =
         CONCAT44(fVar69 + (float)((ulong)*(undefined8 *)(lVar45 + 0x138) >> 0x20),
                  fVar71 + (float)*(undefined8 *)(lVar45 + 0x138));
    lVar45 = *in_stack_00000150;
    if ((lVar45 == 0) || (lVar32 = *(long *)(lVar45 + 0x38), lVar32 == 0)) goto LAB_0249920c;
    uVar44 = *(uint *)(lVar32 + 0x18);
    if (uVar44 <= uVar19)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar39 = lVar32 + lVar40 * 0x178;
    uVar26 = CONCAT44(fVar66 + (float)((ulong)*(undefined8 *)(lVar39 + 0x140) >> 0x20),
                      fVar66 + (float)*(undefined8 *)(lVar39 + 0x140));
    fVar51 = fVar71 + *(float *)(lVar39 + 0x150);
    uVar60 = (ulong)(uint)fVar51;
    uVar62 = CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar39 + 0x148) >> 0x20),
                      fVar71 + (float)*(undefined8 *)(lVar39 + 0x148));
    *(ulong *)(lVar39 + 0x140) = uVar26;
    *(ulong *)(lVar39 + 0x148) = uVar62;
    *(float *)(lVar39 + 0x150) = fVar51;
    if (uVar7 == uVar61) {
      uVar61 = *in_stack_00000148 - 1;
      if (uVar19 == uVar61) goto LAB_0249788c;
    }
    else {
      lVar45 = *(long *)(lVar45 + 0x50);
      if (lVar45 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar45 + 0x18) <= uVar61)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar39 = (long)(int)uVar61;
      lVar41 = lVar45 + lVar39 * 0x5c;
      uVar62 = (ulong)(uint)*(float *)(lVar41 + 0x58);
      fVar51 = fVar71 + *(float *)(lVar41 + 0x54);
      uVar26 = (ulong)(uint)fVar51;
      fVar52 = fVar66 + *(float *)(lVar41 + 0x58);
      uVar60 = (ulong)(uint)fVar52;
      *(ulong *)(lVar41 + 0x4c) =
           CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar41 + 0x4c) >> 0x20),
                    fVar71 + (float)*(undefined8 *)(lVar41 + 0x4c));
      *(float *)(lVar41 + 0x54) = fVar51;
      *(float *)(lVar41 + 0x58) = fVar52;
      if (uVar44 <= *(uint *)(lVar41 + 0x34))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      uVar75 = *(undefined4 *)(lVar32 + (long)(int)*(uint *)(lVar41 + 0x34) * 0x178 + 0x11c);
      lVar45 = lVar45 + lVar39 * 0x5c;
      *(float *)(lVar45 + 0x70) = fVar51;
      *(undefined4 *)(lVar45 + 0x6c) = uVar75;
      lVar45 = *in_stack_00000150;
      if ((lVar45 == 0) || (lVar32 = *(long *)(lVar45 + 0x50), lVar32 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar32 + 0x18) <= uVar61)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar45 = *(long *)(lVar45 + 0x38);
      if (lVar45 == 0) goto LAB_0249920c;
      uVar61 = *(uint *)(lVar32 + lVar39 * 0x5c + 0x40);
      if (*(uint *)(lVar45 + 0x18) <= uVar61)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar32 = lVar32 + lVar39 * 0x5c;
      *(undefined4 *)(lVar32 + 0x74) = *(undefined4 *)(lVar45 + (long)(int)uVar61 * 0x178 + 0x128);
      *(undefined4 *)(lVar32 + 0x78) = *(undefined4 *)(lVar32 + 0x4c);
      uVar61 = *in_stack_00000148 - 1;
LAB_0249788c:
      if (uVar19 == uVar61) {
        lVar45 = *in_stack_00000150;
        if ((lVar45 == 0) || (lVar32 = *(long *)(lVar45 + 0x50), lVar32 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar32 + 0x18) <= uVar7)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar39 = lVar32 + lVar36 * 0x5c;
        uVar62 = (ulong)(uint)*(float *)(lVar39 + 0x58);
        uVar26 = CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar39 + 0x4c) >> 0x20),
                          fVar71 + (float)*(undefined8 *)(lVar39 + 0x4c));
        fVar51 = fVar71 + *(float *)(lVar39 + 0x54);
        fVar66 = fVar66 + *(float *)(lVar39 + 0x58);
        uVar60 = (ulong)(uint)fVar66;
        *(ulong *)(lVar39 + 0x4c) = uVar26;
        *(float *)(lVar39 + 0x54) = fVar51;
        *(float *)(lVar39 + 0x58) = fVar66;
        lVar45 = *(long *)(lVar45 + 0x38);
        if (lVar45 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar45 + 0x18) <= *(uint *)(lVar39 + 0x34))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar75 = *(undefined4 *)(lVar45 + (long)(int)*(uint *)(lVar39 + 0x34) * 0x178 + 0x11c);
        lVar32 = lVar32 + lVar36 * 0x5c;
        *(float *)(lVar32 + 0x70) = fVar51;
        *(undefined4 *)(lVar32 + 0x6c) = uVar75;
        lVar45 = *in_stack_00000150;
        if ((lVar45 == 0) || (lVar32 = *(long *)(lVar45 + 0x50), lVar32 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar32 + 0x18) <= uVar7)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar45 = *(long *)(lVar45 + 0x38);
        if (lVar45 == 0) goto LAB_0249920c;
        uVar61 = *(uint *)(lVar32 + lVar36 * 0x5c + 0x40);
        if (*(uint *)(lVar45 + 0x18) <= uVar61)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar32 = lVar32 + lVar36 * 0x5c;
        *(undefined4 *)(lVar32 + 0x74) = *(undefined4 *)(lVar45 + (long)(int)uVar61 * 0x178 + 0x128)
        ;
        *(undefined4 *)(lVar32 + 0x78) = *(undefined4 *)(lVar32 + 0x4c);
      }
    }
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar24 = FUN_016f9468(uVar42,0);
    if (((((uVar24 & 1) == 0) && (1 < uVar42 - 0x2010)) && (uVar42 != 0xad)) && (uVar42 != 0x2d)) {
      if (bVar8) {
        if (((uVar37 != 1) && ((int)uVar19 < (int)(*(uint *)(lVar25 + 0x18) - 1))) &&
           (((int)uVar19 < (int)*in_stack_00000148 && ((uVar42 == 0x2019 || (uVar42 == 0x27)))))) {
          if (*(uint *)(lVar25 + 0x18) <= uVar37 - 2)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar4 = *(undefined2 *)(lVar25 + lVar30 + -0x438);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar24 = FUN_016f9468(uVar4,0);
          if ((uVar24 & 1) != 0) {
            if (*(uint *)(lVar25 + 0x18) <= uVar37)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            uVar4 = *(undefined2 *)(lVar25 + lVar30 + -0x148);
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar24 = FUN_016f9468(uVar4,0);
            if ((uVar24 & 1) != 0) goto LAB_02497aa4;
          }
        }
      }
      else {
        if (uVar37 != 1) {
LAB_024985a0:
          bVar8 = false;
          goto LAB_02497aac;
        }
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar24 = FUN_016f93a0(uVar42,0);
        if ((uVar24 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar24 = FUN_016f68bc(uVar42,0);
          if (((uVar42 != 0x200b) && ((uVar24 & 1) == 0)) && (*in_stack_00000148 != 1))
          goto LAB_024985a0;
        }
      }
      if (uVar19 == *in_stack_00000148 - 1) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar24 = FUN_016f9468(uVar42,0);
        iVar16 = iVar48;
        if ((uVar24 & 1) == 0) goto LAB_02497de0;
      }
      else {
LAB_02497de0:
        iVar16 = uVar37 - 2;
      }
      lVar45 = *in_stack_00000150;
      if (lVar45 == 0) goto LAB_0249920c;
      lVar32 = *(long *)(lVar45 + 0x40);
      if (lVar32 == 0) goto LAB_0249920c;
      uVar61 = *(uint *)(lVar45 + 0x24);
      iVar17 = *(int *)(lVar32 + 0x18);
      if (iVar17 < (int)(uVar61 + 1)) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147b84((long *)(lVar45 + 0x40),iVar17 + 1,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
        lVar45 = *in_stack_00000150;
        if (lVar45 == 0) goto LAB_0249920c;
      }
      lVar32 = *(long *)(lVar45 + 0x40);
      if (lVar32 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar32 + 0x18) <= uVar61)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar32 = lVar32 + (long)(int)uVar61 * 0x18;
      *(uint *)(lVar32 + 0x28) = uVar15;
      *(int *)(lVar32 + 0x2c) = iVar16;
      *(uint *)(lVar32 + 0x30) = (iVar16 - uVar15) + 1;
      *(long **)(lVar32 + 0x20) = unaff_x19;
      lVar32 = *(long *)(lVar45 + 0x50);
      *(int *)(lVar45 + 0x24) = *(int *)(lVar45 + 0x24) + 1;
      if (lVar32 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar32 + 0x18) <= uVar7)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar32 = lVar32 + lVar36 * 0x5c;
      bVar8 = false;
      iStack00000000000000ac = iStack00000000000000ac + 1;
      *(int *)(lVar32 + 0x30) = *(int *)(lVar32 + 0x30) + 1;
    }
    else {
      if (!bVar8) {
        uVar15 = uVar19;
      }
      if (uVar19 == *in_stack_00000148 - 1) {
        lVar45 = *in_stack_00000150;
        if (lVar45 == 0) goto LAB_0249920c;
        lVar32 = *(long *)(lVar45 + 0x40);
        if (lVar32 == 0) goto LAB_0249920c;
        uVar61 = *(uint *)(lVar45 + 0x24);
        iVar16 = *(int *)(lVar32 + 0x18);
        if (iVar16 < (int)(uVar61 + 1)) {
          if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01147b84((long *)(lVar45 + 0x40),iVar16 + 1,
                       *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
          lVar45 = *in_stack_00000150;
          if (lVar45 == 0) goto LAB_0249920c;
        }
        lVar32 = *(long *)(lVar45 + 0x40);
        if (lVar32 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar32 + 0x18) <= uVar61)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar32 = lVar32 + (long)(int)uVar61 * 0x18;
        *(uint *)(lVar32 + 0x28) = uVar15;
        *(uint *)(lVar32 + 0x2c) = uVar19;
        *(long **)(lVar32 + 0x20) = unaff_x19;
        *(uint *)(lVar32 + 0x30) = uVar37 - uVar15;
        lVar32 = *(long *)(lVar45 + 0x50);
        *(int *)(lVar45 + 0x24) = *(int *)(lVar45 + 0x24) + 1;
        if (lVar32 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar32 + 0x18) <= uVar7)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar32 = lVar32 + lVar36 * 0x5c;
        iStack00000000000000ac = iStack00000000000000ac + 1;
        *(int *)(lVar32 + 0x30) = *(int *)(lVar32 + 0x30) + 1;
      }
LAB_02497aa4:
      bVar8 = true;
    }
LAB_02497aac:
    if ((*in_stack_00000150 == 0) || (lVar45 = *(long *)(*in_stack_00000150 + 0x38), lVar45 == 0))
    goto LAB_0249920c;
    uVar61 = *(uint *)(lVar45 + 0x18);
    if (uVar61 <= uVar19)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar45 + lVar40 * 0x178 + 400) >> 2 & 1) == 0) {
      if (bVar12) {
LAB_02497adc:
        if (uVar61 <= uVar37 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar36 = *unaff_x19;
        uVar61 = *(uint *)(lVar45 + lVar30 + -0x330);
        uVar75 = *(undefined4 *)(lVar45 + lVar30 + -0x2f8);
LAB_0249805c:
        pcVar34 = *(code **)(lVar36 + 0x908);
LAB_02498064:
        uVar62 = (ulong)uVar61;
        uVar26 = (ulong)(uint)fStack0000000000000050;
        uVar60 = (ulong)(uint)fStack0000000000000054;
        (*pcVar34)(fStack0000000000000058,uVar26,uVar60,uVar62,fStack00000000000000d0,0,
                   _bStack000000000000005c,uVar75);
        puVar10 = System_Threading_Mutex_TypeInfo;
        lVar45 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar45 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar45 = *(long *)puVar10;
        }
LAB_024980b4:
        bVar12 = false;
        fVar49 = 0.0;
        fStack00000000000000d0 = *(float *)(*(long *)(lVar45 + 0xb8) + 0x15a8);
        fStack00000000000000cc = 0.0;
      }
      else {
LAB_02497fc4:
        bVar12 = false;
      }
    }
    else {
      lVar45 = lVar45 + lVar40 * 0x178;
      iVar16 = *(int *)(lVar45 + 0x68);
      *(int *)(lVar45 + 0x16c) = iVar18;
      if ((((int)unaff_x19[100] < (int)uVar19) || ((int)unaff_x19[0x65] < (int)uVar7)) ||
         (((int)unaff_x19[0x5b] == 5 && (iVar16 + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar24 = FUN_016f68bc(uVar42,0);
      if ((uVar42 != 0x200b) && ((uVar24 & 1) == 0)) {
        lVar45 = *in_stack_00000150;
        if ((lVar45 == 0) || (lVar36 = *(long *)(lVar45 + 0x38), lVar36 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar36 + 0x18) <= uVar19)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar51 = *(float *)(lVar36 + lVar40 * 0x178 + 0x160);
        if (fVar49 <= fVar51) {
          fVar49 = fVar51;
        }
        if (fStack00000000000000cc <= ABS(fVar68)) {
          fStack00000000000000cc = ABS(fVar68);
        }
        if ((float)iVar16 != fStack000000000000004c) {
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
        if (*(uint *)(lVar45 + 0x18) <= uVar19)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (unaff_x19[0x1e] == 0) goto LAB_0249920c;
        fVar52 = *(float *)(lVar45 + lVar40 * 0x178 + 0x14c);
        fVar51 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
        fVar52 = fVar52 + fVar49 * fVar51;
        if (fVar52 <= fStack00000000000000d0) {
          fStack00000000000000d0 = fVar52;
        }
        uVar26 = (ulong)(uint)fStack00000000000000d0;
        fStack000000000000004c = (float)iVar16;
      }
      if (!bVar12) {
        bVar12 = false;
        if ((((uVar42 == 0xd) || ((uVar42 | 1) == 0xb)) || ((int)uVar6 < (int)uVar19)) ||
           ((bool)(bVar1 ^ 1))) goto LAB_024980d0;
        if (uVar19 == uVar6) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar24 = FUN_016fa418(uVar42,0);
          if ((uVar24 & 1) != 0) goto LAB_02497fc4;
        }
        if ((*in_stack_00000150 == 0) ||
           (lVar45 = *(long *)(*in_stack_00000150 + 0x38), lVar45 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar45 + 0x18) <= uVar19)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar45 = lVar45 + lVar40 * 0x178;
        _bStack000000000000005c = *(float *)(lVar45 + 0x160);
        fStack0000000000000058 = *(float *)(lVar45 + 0x11c);
        bVar12 = fVar49 != 0.0;
        fVar51 = _bStack000000000000005c;
        if (bVar12) {
          fVar51 = fVar49;
        }
        fVar49 = fVar51;
        uStack0000000000000060 = *(uint *)(lVar45 + 0x168);
        fStack0000000000000054 = 0.0;
        fVar51 = fVar68;
        if (bVar12) {
          fVar51 = fStack00000000000000cc;
        }
        uVar26 = (ulong)(uint)fVar51;
        fStack0000000000000050 = fStack00000000000000d0;
        fStack00000000000000cc = fVar51;
      }
      if (*in_stack_00000148 == 1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar45 = *(long *)(*in_stack_00000150 + 0x38), lVar45 != 0)) {
          if (uVar19 < *(uint *)(lVar45 + 0x18)) {
            lVar45 = lVar45 + lVar40 * 0x178;
            lVar36 = *unaff_x19;
            uVar61 = *(uint *)(lVar45 + 0x128);
            uVar75 = *(undefined4 *)(lVar45 + 0x160);
            goto LAB_0249805c;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      if ((uVar19 == uVar5) || ((int)uVar6 <= (int)uVar19)) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar24 = FUN_016f68bc(uVar42,0);
        if ((*in_stack_00000150 != 0) &&
           (lVar45 = *(long *)(*in_stack_00000150 + 0x38), lVar45 != 0)) {
          if (uVar42 == 0x200b || (uVar24 & 1) != 0) {
            lVar36 = lVar22;
            if (*(uint *)(lVar45 + 0x18) <= uVar6)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          else {
            lVar36 = lVar40;
            if (*(uint *)(lVar45 + 0x18) <= uVar19)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          lVar45 = lVar45 + lVar36 * 0x178;
          uVar61 = *(uint *)(lVar45 + 0x128);
          uVar75 = *(undefined4 *)(lVar45 + 0x160);
          pcVar34 = *(code **)(*unaff_x19 + 0x908);
          goto LAB_02498064;
        }
        goto LAB_0249920c;
      }
      if (!bVar1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar45 = *(long *)(*in_stack_00000150 + 0x38), lVar45 != 0)) {
          uVar61 = *(uint *)(lVar45 + 0x18);
          goto LAB_02497adc;
        }
        goto LAB_0249920c;
      }
      if ((int)uVar19 < (int)(*in_stack_00000148 - 1)) {
        if ((*in_stack_00000150 == 0) ||
           (lVar45 = *(long *)(*in_stack_00000150 + 0x38), lVar45 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar45 + 0x18) <= uVar37)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar24 = FUN_024a9e4c(uStack0000000000000060,*(undefined4 *)(lVar45 + lVar30),0);
        if ((uVar24 & 1) == 0) {
          if ((*in_stack_00000150 != 0) &&
             (lVar45 = *(long *)(*in_stack_00000150 + 0x38), lVar45 != 0)) {
            if (uVar19 < *(uint *)(lVar45 + 0x18)) {
              lVar45 = lVar45 + lVar40 * 0x178;
              uVar62 = (ulong)*(uint *)(lVar45 + 0x128);
              uVar60 = (ulong)(uint)fStack0000000000000054;
              uVar26 = (ulong)(uint)fStack0000000000000050;
              (**(code **)(*unaff_x19 + 0x908))
                        (fStack0000000000000058,uVar26,uVar60,uVar62,fStack00000000000000d0,0,
                         _bStack000000000000005c,*(undefined4 *)(lVar45 + 0x160));
              puVar10 = System_Threading_Mutex_TypeInfo;
              lVar45 = *(long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(lVar45 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar45 = *(long *)puVar10;
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
    if ((*in_stack_00000150 == 0) || (lVar45 = *(long *)(*in_stack_00000150 + 0x38), lVar45 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar45 + 0x18) <= uVar19)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if (lVar38 == 0) goto LAB_0249920c;
    uVar61 = *(uint *)(lVar45 + lVar40 * 0x178 + 400);
    fVar51 = (float)FUN_026fd1f0(lVar38 + 0x50,0);
    if ((uVar61 >> 6 & 1) == 0) {
      if (bVar13) {
        if ((*in_stack_00000150 == 0) ||
           (lVar45 = *(long *)(*in_stack_00000150 + 0x38), lVar45 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar45 + 0x18) <= uVar37 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar61 = *(uint *)(lVar45 + lVar30 + -0x330);
        pcVar34 = *(code **)(*unaff_x19 + 0x908);
        fVar71 = fStack0000000000000088 * fVar51 + *(float *)(lVar45 + lVar30 + -0x30c);
LAB_02498648:
        uVar62 = (ulong)uVar61;
        uVar26 = (ulong)(uint)in_stack_00000078._4_4_;
        uVar60 = (ulong)in_stack_00000068._4_4_;
        (*pcVar34)(fStack0000000000000080,uVar26,uVar60,uVar62,fVar71,0,fStack0000000000000088,
                   fStack0000000000000088);
      }
LAB_0249867c:
      bVar13 = false;
    }
    else {
      lVar45 = *in_stack_00000150;
      if ((lVar45 == 0) || (lVar36 = *(long *)(lVar45 + 0x38), lVar36 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar36 + 0x18) <= uVar19)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      *(int *)(lVar36 + lVar40 * 0x178 + 0x174) = iVar18;
      if ((((int)unaff_x19[100] < (int)uVar19) || ((int)unaff_x19[0x65] < (int)uVar7)) ||
         (((int)unaff_x19[0x5b] == 5 &&
          (*(int *)(lVar36 + lVar40 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((((uVar42 == 0xd) || ((uVar42 | 1) == 0xb)) || ((int)uVar6 < (int)uVar19)) ||
         (bVar13 || !bVar1)) {
LAB_02498228:
        if (!bVar13) goto LAB_0249867c;
      }
      else {
        if (uVar19 == uVar6) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar24 = FUN_016fa418(uVar42,0);
          if ((uVar24 & 1) != 0) goto LAB_02498228;
          lVar45 = *in_stack_00000150;
          if (lVar45 == 0) goto LAB_0249920c;
        }
        lVar45 = *(long *)(lVar45 + 0x38);
        if (lVar45 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar45 + 0x18) <= uVar19)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar45 = lVar45 + lVar40 * 0x178;
        fStack0000000000000034 = *(float *)(lVar45 + 0x60);
        fStack0000000000000088 = *(float *)(lVar45 + 0x160);
        fStack0000000000000030 = *(float *)(lVar45 + 0x14c);
        uVar26 = (ulong)(uint)fStack0000000000000030;
        fStack0000000000000080 = *(float *)(lVar45 + 0x11c);
        in_stack_00000078._4_4_ = fVar51 * fStack0000000000000088 + fStack0000000000000030;
        in_stack_00000068._4_4_ = 0;
      }
      uVar61 = *in_stack_00000148;
      if (uVar61 == 1) {
LAB_024983ac:
        if ((*in_stack_00000150 != 0) &&
           (lVar45 = *(long *)(*in_stack_00000150 + 0x38), lVar45 != 0)) {
          if (uVar19 < *(uint *)(lVar45 + 0x18)) {
            lVar45 = lVar45 + lVar40 * 0x178;
            lVar22 = *unaff_x19;
            uVar61 = *(uint *)(lVar45 + 0x128);
            fVar71 = *(float *)(lVar45 + 0x14c);
LAB_024983d8:
            pcVar34 = *(code **)(lVar22 + 0x908);
FUN_02498644:
            fVar71 = fVar51 * fStack0000000000000088 + fVar71;
            goto LAB_02498648;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      if (uVar19 == uVar5) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar24 = FUN_016f68bc(uVar42,0);
        if ((*in_stack_00000150 != 0) &&
           (lVar45 = *(long *)(*in_stack_00000150 + 0x38), lVar45 != 0)) {
          uVar61 = *(uint *)(lVar45 + 0x18);
          if (uVar42 == 0x200b || (uVar24 & 1) != 0) {
            if (uVar61 <= uVar6)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          else {
LAB_02498620:
            lVar22 = lVar40;
            if (uVar61 <= uVar19)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
LAB_02498628:
          lVar45 = lVar45 + lVar22 * 0x178;
          fVar71 = *(float *)(lVar45 + 0x14c);
          uVar61 = *(uint *)(lVar45 + 0x128);
          pcVar34 = *(code **)(*unaff_x19 + 0x908);
          goto FUN_02498644;
        }
        goto LAB_0249920c;
      }
      if ((int)uVar19 < (int)uVar61) {
        lVar45 = *in_stack_00000150;
        if ((lVar45 != 0) && (lVar36 = *(long *)(lVar45 + 0x38), lVar36 != 0)) {
          if (uVar37 < *(uint *)(lVar36 + 0x18)) {
            if (*(float *)(lVar36 + lVar30 + -0x108) == fStack0000000000000034) {
              fVar52 = *(float *)(lVar36 + lVar30 + -0x1c);
              if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar26 = (ulong)(uint)fStack0000000000000030;
              uVar24 = FUN_024aa280(fVar71 + fVar52,uVar26,0);
              if ((uVar24 & 1) != 0) {
                uVar61 = *in_stack_00000148;
                goto 
                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractor_OnSelectEntering
                ;
              }
              lVar45 = *in_stack_00000150;
              if (lVar45 == 0) goto LAB_0249920c;
            }
            lVar45 = *(long *)(lVar45 + 0x38);
            if (lVar45 != 0) {
              uVar61 = *(uint *)(lVar45 + 0x18);
              if ((int)uVar19 <= (int)uVar6) goto LAB_02498620;
              if (uVar6 < uVar61) goto LAB_02498628;
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
      if ((int)uVar19 < (int)uVar61) {
        iVar16 = FUN_02681c0c(lVar38,0);
        if (*(uint *)(lVar25 + 0x18) <= uVar37)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar45 = *(long *)(lVar25 + lVar30 + -0x130);
        if (lVar45 == 0) goto LAB_0249920c;
        iVar17 = FUN_02681c0c(lVar45,0);
        if (iVar16 != iVar17) goto LAB_024983ac;
      }
      if (!bVar1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar45 = *(long *)(*in_stack_00000150 + 0x38), lVar45 != 0)) {
          if (uVar37 - 2 < *(uint *)(lVar45 + 0x18)) {
            lVar22 = *unaff_x19;
            uVar61 = *(uint *)(lVar45 + lVar30 + -0x330);
            fVar71 = *(float *)(lVar45 + lVar30 + -0x30c);
            goto LAB_024983d8;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      bVar13 = true;
    }
    if ((*in_stack_00000150 == 0) || (lVar45 = *(long *)(*in_stack_00000150 + 0x38), lVar45 == 0))
    goto LAB_0249920c;
    uVar61 = (uint)*(undefined8 *)(lVar45 + 0x18);
    if (uVar61 <= uVar19)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar45 + lVar40 * 0x178 + 0x191) >> 1 & 1) == 0) {
      if (bVar9) {
        uVar60 = (ulong)uStack00000000000000a0;
        uVar62 = (ulong)(uint)fStack00000000000000a4;
        uVar26 = (ulong)(uint)fStack00000000000000b4;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar26,uVar60,uVar62,fStack00000000000000a8,uVar60);
      }
LAB_024986e8:
      bVar9 = false;
    }
    else {
      if ((((int)unaff_x19[100] < (int)uVar19) || ((int)unaff_x19[0x65] < (int)uVar7)) ||
         (((int)unaff_x19[0x5b] == 5 &&
          (*(int *)(lVar45 + lVar40 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar9) {
        if ((((uVar42 == 0xd) || ((uVar42 | 1) == 0xb)) || ((int)uVar6 < (int)uVar19)) || (!bVar1))
        goto LAB_024986e8;
        if (uVar19 == uVar6) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar24 = FUN_016fa418(uVar42,0);
          if ((uVar24 & 1) != 0) goto LAB_024986e8;
        }
        puVar10 = System_Threading_Mutex_TypeInfo;
        lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar22 = *(long *)puVar10;
        }
        if ((*in_stack_00000150 == 0) ||
           (lVar45 = *(long *)(*in_stack_00000150 + 0x38), lVar45 == 0)) goto LAB_0249920c;
        uVar61 = (uint)*(undefined8 *)(lVar45 + 0x18);
        if (uVar61 <= uVar19)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar22 = *(long *)(lVar22 + 0xb8);
        lVar36 = lVar45 + lVar40 * 0x178;
        in_stack_00001798 = *(undefined8 *)(lVar36 + 0x184);
        in_stack_00001790 = *(undefined8 *)(lVar36 + 0x17c);
        fStack00000000000000b0 = *(float *)(lVar22 + 0x1598);
        in_stack_000017a0 = *(float *)(lVar36 + 0x18c);
        fStack00000000000000b4 = *(float *)(lVar22 + 0x159c);
        fStack00000000000000a4 = *(float *)(lVar22 + 0x15a0);
        fStack00000000000000a8 = *(float *)(lVar22 + 0x15a4);
        uStack00000000000000a0 = 0;
      }
      if (uVar61 <= uVar19)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar45 = lVar45 + lVar40 * 0x178;
      fVar53 = *(float *)(lVar45 + 0x188);
      uVar21 = *(undefined8 *)(lVar45 + 0x17c);
      fVar65 = *(float *)(lVar45 + 0x184);
      uVar20 = *(undefined8 *)(lVar45 + 0x184);
      fVar54 = *(float *)(lVar45 + 0x18c);
      fVar71 = *(float *)(lVar45 + 0x11c);
      fVar52 = *(float *)(lVar45 + 0x128);
      fVar72 = *(float *)(lVar45 + 0x148);
      fVar51 = *(float *)(lVar45 + 0x150);
      in_stack_00000158 = uVar21;
      fStack0000000000000160 = fVar65;
      fStack0000000000000164 = fVar53;
      in_stack_00000168 = fVar54;
      in_stack_00000170 = in_stack_00001790;
      in_stack_00000178 = in_stack_00001798;
      in_stack_00000180 = in_stack_000017a0;
      uVar24 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
      lVar45 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
      if ((uVar24 & 1) == 0) {
        if (*(int *)(lVar45 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar45);
        }
        fVar71 = fVar71 - (float)((ulong)in_stack_00001790 >> 0x20);
        if (fVar71 <= fStack00000000000000b0) {
          fStack00000000000000b0 = fVar71;
        }
        fVar51 = fVar51 - in_stack_000017a0;
        uVar26 = (ulong)(uint)fVar51;
        fVar52 = fVar52 + (float)in_stack_00001798;
        uVar60 = (ulong)(uint)fVar52;
        if (fVar51 <= fStack00000000000000b4) {
          fStack00000000000000b4 = fVar51;
        }
        fVar72 = fVar72 + (float)((ulong)in_stack_00001798 >> 0x20);
        uVar62 = (ulong)(uint)fVar72;
        if (fStack00000000000000a4 <= fVar52) {
          fStack00000000000000a4 = fVar52;
        }
        if (fStack00000000000000a8 <= fVar72) {
          fStack00000000000000a8 = fVar72;
        }
      }
      else {
        if (*(int *)(lVar45 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar45);
        }
        fVar71 = (fVar71 + (fStack00000000000000a4 - (float)in_stack_00001798)) * 0.5;
        uVar62 = (ulong)(uint)fVar71;
        if (fVar51 <= fStack00000000000000b4) {
          fStack00000000000000b4 = fVar51;
        }
        uVar26 = (ulong)(uint)fStack00000000000000b4;
        uVar60 = (ulong)uStack00000000000000a0;
        if (fStack00000000000000a8 <= fVar72) {
          fStack00000000000000a8 = fVar72;
        }
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar26,uVar60,uVar62,fStack00000000000000a8,uVar60);
        fStack00000000000000b4 = fVar51 - fVar54;
        fStack00000000000000a4 = fVar52 + fVar65;
        uStack00000000000000a0 = 0;
        fStack00000000000000a8 = fVar72 + fVar53;
        fStack00000000000000b0 = fVar71;
        in_stack_00001790 = uVar21;
        in_stack_00001798 = uVar20;
        in_stack_000017a0 = fVar54;
      }
      if (((*in_stack_00000148 == 1) || (uVar19 == uVar5)) ||
         (((int)uVar6 <= (int)uVar19 || (!bVar1)))) {
        uVar60 = (ulong)uStack00000000000000a0;
        uVar62 = (ulong)(uint)fStack00000000000000a4;
        uVar26 = (ulong)(uint)fStack00000000000000b4;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar26,uVar60,uVar62,fStack00000000000000a8,uVar60);
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
    }
    uVar19 = *in_stack_00000148;
    iVar48 = iVar48 + 1;
    lVar30 = lVar30 + 0x178;
    bVar1 = (int)uVar37 < (int)uVar19;
    uVar61 = uVar7;
    uVar37 = uVar37 + 1;
  } while (bVar1);
  lVar25 = *in_stack_00000150;
  if (lVar25 != 0) {
    iVar18 = uVar7 + 1;
LAB_02498c58:
    puVar11 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    puVar10 = PTR_DAT_033ed410;
    *(uint *)(lVar25 + 0x18) = uVar19;
    lVar30 = unaff_x19[0xd3];
    *(int *)(lVar25 + 0x2c) = iVar18;
    iVar18 = iStack00000000000000ac;
    if ((int)uVar19 < 1) {
      iVar18 = 1;
    }
    if (iStack00000000000000ac == 0) {
      iVar18 = 1;
    }
    *(int *)(lVar25 + 0x1c) = (int)lVar30;
    *(int *)(lVar25 + 0x24) = iVar18;
    *(int *)(lVar25 + 0x30) = (int)unaff_x19[0x95] + 1;
    if (((int)unaff_x19[0x62] != 0xff) ||
       (uVar24 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar24 & 1) == 0)) {
LAB_02496098:
      if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__ + 0xe0) == 0
         ) {
        thunk_FUN_00d32864();
      }
      FUN_024a942c();
      return;
    }
    lVar25 = unaff_x19[0xde];
    if (lVar25 != 0) {
      (**(code **)(lVar25 + 0x18))
                (*(undefined8 *)(lVar25 + 0x40),*in_stack_00000150,*(undefined8 *)(lVar25 + 0x28));
    }
    if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
    iVar18 = FUN_02859dc4(unaff_x19[0xe4],0);
    if (iVar18 != 0x19) {
      lVar25 = unaff_x19[0xe4];
      if (lVar25 == 0) goto LAB_0249920c;
      uVar19 = FUN_02859dc4(lVar25,0);
      FUN_02859e00(lVar25,uVar19 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
      if ((*in_stack_00000150 == 0) || (lVar25 = *(long *)(*in_stack_00000150 + 0x60), lVar25 == 0))
      goto LAB_0249920c;
      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(int *)(lVar25 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      FUN_024e8000(lVar25 + 0x20,1,0);
    }
    if (unaff_x19[0x73] != 0) {
      UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
                (unaff_x19[0x73],0);
      if ((unaff_x19[0x6c] != 0) && (lVar25 = *(long *)(unaff_x19[0x6c] + 0x60), lVar25 != 0)) {
        if (*(int *)(lVar25 + 0x18) == 0) {
UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (unaff_x19[0x73] != 0) {
          FUN_0266b9c4(unaff_x19[0x73],*(undefined8 *)(lVar25 + 0x30),0);
          if ((unaff_x19[0x6c] != 0) && (lVar25 = *(long *)(unaff_x19[0x6c] + 0x60), lVar25 != 0)) {
            if (*(int *)(lVar25 + 0x18) == 0)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            if (unaff_x19[0x73] != 0) {
              FUN_0266bbc8(unaff_x19[0x73],*(undefined8 *)(lVar25 + 0x48),0);
              if ((unaff_x19[0x6c] != 0) &&
                 (lVar25 = *(long *)(unaff_x19[0x6c] + 0x60), lVar25 != 0)) {
                if (*(int *)(lVar25 + 0x18) == 0)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                if (unaff_x19[0x73] != 0) {
                  FUN_0266bc74(unaff_x19[0x73],*(undefined8 *)(lVar25 + 0x50),0);
                  if ((unaff_x19[0x6c] != 0) &&
                     (lVar25 = *(long *)(unaff_x19[0x6c] + 0x60), lVar25 != 0)) {
                    if (*(int *)(lVar25 + 0x18) == 0)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    if (unaff_x19[0x73] != 0) {
                      FUN_0266c1dc(unaff_x19[0x73],*(undefined8 *)(lVar25 + 0x58),0);
                      if (unaff_x19[0x73] != 0) {
                        FUN_0266ed90(unaff_x19[0x73],0);
                        if (unaff_x19[0xe3] != 0) {
                          FUN_02858f1c(unaff_x19[0xe3],unaff_x19[0x73],0);
                          if (unaff_x19[0xe3] != 0) {
                            uVar20 = FUN_02858bac(unaff_x19[0xe3],0);
                            if (unaff_x19[0xe3] != 0) {
                              uVar19 = FUN_02858a14(unaff_x19[0xe3],0);
                              lVar25 = *in_stack_00000150;
                              if (lVar25 != 0) {
                                lVar45 = 0;
                                lVar30 = 0;
                                do {
                                  uVar24 = lVar30 + 1;
                                  if ((long)*(int *)(lVar25 + 0x34) <= (long)uVar24)
                                  goto LAB_02496098;
                                  lVar25 = *(long *)(lVar25 + 0x60);
                                  if (lVar25 == 0) break;
                                  if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  if (*(uint *)(lVar25 + 0x18) <= uVar24)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  FUN_024e7ecc(lVar25 + lVar45 + 0x70,0);
                                  lVar25 = unaff_x19[0xe0];
                                  if (lVar25 == 0) break;
                                  if (*(uint *)(lVar25 + 0x18) <= uVar24)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  uVar21 = *(undefined8 *)(lVar25 + lVar30 * 8 + 0x28);
                                  if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  uVar27 = FUN_0268b4e0(uVar21,0,0);
                                  if ((uVar27 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
                                      if ((*in_stack_00000150 == 0) ||
                                         (lVar25 = *(long *)(*in_stack_00000150 + 0x60), lVar25 == 0
                                         )) break;
                                      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                                        thunk_FUN_00d32864();
                                      }
                                      if (*(uint *)(lVar25 + 0x18) <= uVar24)
                                      goto 
                                      UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                      ;
                                      FUN_024e8000(lVar25 + lVar45 + 0x70,1,0);
                                    }
                                    lVar25 = unaff_x19[0xe0];
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar24)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar25 = *(long *)(lVar25 + lVar30 * 8 + 0x28);
                                    if (lVar25 == 0) break;
                                    lVar25 = FUN_024f0144(lVar25,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar22 = *(long *)(*in_stack_00000150 + 0x60), lVar22 == 0))
                                    break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar24)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar25 == 0) break;
                                    FUN_0266b9c4(lVar25,*(undefined8 *)(lVar22 + lVar45 + 0x80),0);
                                    lVar25 = unaff_x19[0xe0];
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar24)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar25 = *(long *)(lVar25 + lVar30 * 8 + 0x28);
                                    if (lVar25 == 0) break;
                                    lVar25 = FUN_024f0144(lVar25,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar22 = *(long *)(*in_stack_00000150 + 0x60), lVar22 == 0))
                                    break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar24)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar25 == 0) break;
                                    FUN_0266bbc8(lVar25,*(undefined8 *)(lVar22 + lVar45 + 0x98),0);
                                    lVar25 = unaff_x19[0xe0];
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar24)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar25 = *(long *)(lVar25 + lVar30 * 8 + 0x28);
                                    if (lVar25 == 0) break;
                                    lVar25 = FUN_024f0144(lVar25,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar22 = *(long *)(*in_stack_00000150 + 0x60), lVar22 == 0))
                                    break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar24)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar25 == 0) break;
                                    FUN_0266bc74(lVar25,*(undefined8 *)(lVar22 + lVar45 + 0xa0),0);
                                    lVar25 = unaff_x19[0xe0];
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar24)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar25 = *(long *)(lVar25 + lVar30 * 8 + 0x28);
                                    if (lVar25 == 0) break;
                                    lVar25 = FUN_024f0144(lVar25,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar22 = *(long *)(*in_stack_00000150 + 0x60), lVar22 == 0))
                                    break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar24)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar25 == 0) break;
                                    FUN_0266c1dc(lVar25,*(undefined8 *)(lVar22 + lVar45 + 0xa8),0);
                                    lVar25 = unaff_x19[0xe0];
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar24)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar25 = *(long *)(lVar25 + lVar30 * 8 + 0x28);
                                    if ((lVar25 == 0) ||
                                       (lVar25 = FUN_024f0144(lVar25,0), lVar25 == 0)) break;
                                    FUN_0266ed90(lVar25,0);
                                    lVar25 = unaff_x19[0xe0];
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar24)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar25 = *(long *)(lVar25 + lVar30 * 8 + 0x28);
                                    if (lVar25 == 0) break;
                                    lVar25 = FUN_02738ef4(lVar25,0);
                                    lVar22 = unaff_x19[0xe0];
                                    if (lVar22 == 0) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar24)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar22 = *(long *)(lVar22 + lVar30 * 8 + 0x28);
                                    if ((lVar22 == 0) ||
                                       (uVar21 = FUN_024f0144(lVar22,0), lVar25 == 0)) break;
                                    FUN_02858f1c(lVar25,uVar21,0);
                                    lVar25 = unaff_x19[0xe0];
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar24)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar25 = *(long *)(lVar25 + lVar30 * 8 + 0x28);
                                    if ((lVar25 == 0) ||
                                       (lVar25 = FUN_02738ef4(lVar25,0), lVar25 == 0)) break;
                                    FUN_02858b14(uVar20,uVar26,uVar60,uVar62,lVar25,0);
                                    lVar25 = unaff_x19[0xe0];
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar24)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar25 = *(long *)(lVar25 + lVar30 * 8 + 0x28);
                                    if ((lVar25 == 0) ||
                                       (lVar25 = FUN_02738ef4(lVar25,0), lVar25 == 0)) break;
                                    FUN_02858a50(lVar25,uVar19 & 1,0);
                                    lVar25 = unaff_x19[0xe0];
                                    if (lVar25 == 0) break;
                                    if (*(uint *)(lVar25 + 0x18) <= uVar24)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    plVar43 = *(long **)(lVar25 + lVar30 * 8 + 0x28);
                                    uVar15 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar43 == (long *)0x0) break;
                                    (**(code **)(*plVar43 + 0x2c8))
                                              (plVar43,uVar15 & 1,*(undefined8 *)(*plVar43 + 0x2d0))
                                    ;
                                  }
                                  lVar25 = *in_stack_00000150;
                                  lVar30 = lVar30 + 1;
                                  lVar45 = lVar45 + 0x50;
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
      }
    }
  }
LAB_0249920c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


