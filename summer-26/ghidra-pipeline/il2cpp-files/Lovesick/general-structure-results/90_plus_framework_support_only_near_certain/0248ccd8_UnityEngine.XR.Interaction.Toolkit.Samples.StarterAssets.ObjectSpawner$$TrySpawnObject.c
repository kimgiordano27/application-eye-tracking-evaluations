/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ObjectSpawner$$TrySpawnObject
ENTRY_POINT: 0248ccd8
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

void UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ObjectSpawner__TrySpawnObject
               (undefined1 param_1 [16],ulong param_2)

{
  bool bVar1;
  int iVar2;
  undefined2 uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  double __x;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  int *piVar19;
  undefined1 uVar20;
  char cVar21;
  undefined4 *puVar22;
  long lVar23;
  long lVar24;
  long *plVar25;
  float *pfVar26;
  long lVar27;
  code *pcVar28;
  uint uVar29;
  uint uVar30;
  float *pfVar31;
  uint uVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long *unaff_x19;
  uint unaff_w20;
  int iVar37;
  long unaff_x21;
  long unaff_x22;
  uint uVar38;
  uint unaff_w23;
  uint unaff_w24;
  int unaff_w25;
  long *plVar39;
  uint unaff_w26;
  long lVar40;
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
  double dVar51;
  ulong uVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined4 uVar56;
  float fVar57;
  float fVar58;
  float unaff_s8;
  float fVar59;
  float fVar60;
  float unaff_s9;
  float fVar61;
  float fVar62;
  float unaff_s10;
  float fVar63;
  float unaff_s11;
  float fVar64;
  float unaff_s12;
  float fVar65;
  float fVar66;
  ulong unaff_d13;
  float fVar67;
  undefined4 uVar68;
  ulong unaff_d14;
  undefined8 in_stack_00000018;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  uint in_stack_00000030;
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
  undefined8 in_stack_000000d8;
  float fStack00000000000000e0;
  float fStack00000000000000e4;
  float fStack00000000000000e8;
  float fStack00000000000000ec;
  uint uStack0000000000000114;
  ulong in_stack_00000118;
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
  undefined8 in_stack_00001790;
  undefined8 in_stack_00001798;
  float in_stack_000017a0;
  undefined8 in_stack_000017a8;
  float in_stack_000017b8;
  uint in_stack_000017bc;
  
code_r0x0248ccd8:
  uVar11 = (uint)unaff_x22;
  uVar12 = FUN_024d66ec();
  if ((unaff_x19[0x6c] != 0) && (lVar27 = *(long *)(unaff_x19[0x6c] + 0x38), lVar27 != 0)) {
    uVar38 = *in_stack_00000148 - 1;
    if (uVar38 < *(uint *)(lVar27 + 0x18)) {
      iVar37 = (int)unaff_x21;
      if (*(short *)(lVar27 + (long)(int)uVar38 * (long)iVar37 + 0x20) != 0xad) goto LAB_0248cd90;
      bVar5 = false;
      in_stack_000017a8 = CONCAT44(0x2d,uVar38);
      *in_stack_00000148 = uVar38;
      plVar25 = (long *)System_Threading_Mutex_TypeInfo;
      plVar42 = (long *)StringLiteral_302;
      uVar12 = uVar12 - 1;
LAB_0248ab98:
      fVar57 = (float)unaff_d13;
      fVar45 = 1.0;
      uVar12 = uVar12 + 1;
      lVar27 = unaff_x19[0x8e];
      if (lVar27 != 0) {
        if ((int)uVar12 < (int)*(uint *)(lVar27 + 0x18)) {
          if (*(uint *)(lVar27 + 0x18) <= uVar12)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          uVar11 = *(uint *)(lVar27 + (long)(int)uVar12 * 0xc + 0x20);
          if (uVar11 == 0) goto LAB_0248e4dc;
          if (5 < in_stack_00000140._4_4_) {
            uVar15 = FUN_0176eb1c(&stack0x000017bc,0);
            uVar16 = FUN_0176eb1c(&stack0x00001788,0);
            uVar15 = FUN_0160073c(*(undefined8 *)
                                   UnityEngine_Rendering_Universal_DebugValidationMode_var,uVar15,
                                  *(undefined8 *)
                                   Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                                  ,uVar16,0);
            if (*(int *)(*plVar42 + 0xe0) == 0) {
              thunk_FUN_00d32864(*plVar42);
            }
            FUN_026610e4(uVar15,0);
            in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
          }
          if ((*(char *)((long)unaff_x19 + 0x2fa) != '\0') && (uVar11 == 0x3c))
          goto code_r0x0248a9ac;
          if ((*in_stack_00000150 != 0) &&
             (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 != 0)) {
            if (*in_stack_00000148 < *(uint *)(lVar27 + 0x18)) {
              lVar27 = lVar27 + (int)*in_stack_00000148 * unaff_x21;
              *(undefined4 *)((long)unaff_x19 + 0x63c) = *(undefined4 *)(lVar27 + 0x2c);
              *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar27 + 0x58);
              unaff_x19[0x1f] = *(long *)(lVar27 + 0x38);
              goto 
              UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager__GetInputAction
              ;
            }
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          }
          goto LAB_02491464;
        }
LAB_0248e4dc:
        fVar57 = (float)param_2;
        if (((char)unaff_x19[0x46] != '\0') &&
           (fVar57 = DAT_02956ccc,
           DAT_02956ccc < *(float *)((long)unaff_x19 + 0x234) - *(float *)(unaff_x19 + 0x47))) {
          fVar57 = *(float *)((long)unaff_x19 + 0x1dc);
          fVar45 = *(float *)((long)unaff_x19 + 0x24c);
          if ((fVar57 < fVar45) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
            if (*(float *)((long)unaff_x19 + 0x2cc) < *(float *)(unaff_x19 + 0x59) / 100.0) {
              *(undefined4 *)((long)unaff_x19 + 0x2cc) = 0;
            }
            fVar50 = (*(float *)((long)unaff_x19 + 0x234) - fVar57) * 0.5;
            if (fVar50 <= DAT_028aa298) {
              fVar50 = DAT_028aa298;
            }
            *(float *)(unaff_x19 + 0x47) = fVar57;
            fVar50 = (fVar57 + fVar50) * 20.0 + 0.5;
            fVar57 = DAT_02958220;
            if (fVar50 != INFINITY) {
              fVar57 = (float)(int)fVar50 / 20.0;
            }
            if (fVar45 <= fVar57) {
              fVar57 = fVar45;
            }
            goto LAB_0248e598;
          }
        }
        *(undefined1 *)((long)unaff_x19 + 0x244) = 1;
        if ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c)) {
          uVar15 = FUN_0176eb1c(_fStack0000000000000038,0);
          uVar16 = FUN_017840ac(in_stack_00000040,0);
          uVar15 = FUN_0160073c(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlah_s16__
                                ,uVar15,*(undefined8 *)
                                         Method_UnityEngine_GameObject_GetComponents<Component>__,
                                uVar16,0);
          if (*(int *)(*plVar42 + 0xe0) == 0) {
            thunk_FUN_00d32864(*plVar42);
          }
          FUN_02660dac(uVar15,0);
        }
        puVar7 = Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__;
        if ((*in_stack_00000148 == 0) || ((*in_stack_00000148 == 1 && (in_stack_000017bc == 3)))) {
          (**(code **)(*unaff_x19 + 0x958))();
          lVar27 = *(long *)puVar7;
          goto LAB_02491474;
        }
        lVar27 = *plVar25;
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar27 = *plVar25;
        }
        plVar25 = (long *)PTR_DAT_033ed410;
        lVar27 = **(long **)(lVar27 + 0xb8);
        if (lVar27 == 0) goto LAB_02491464;
        if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0xd0))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        iVar37 = *(int *)(lVar27 + (long)(int)*(uint *)(unaff_x19 + 0xd0) * 0x38 + 0x54) << 2;
        if ((*in_stack_00000150 == 0) ||
           (lVar27 = *(long *)(*in_stack_00000150 + 0x60), lVar27 == 0)) goto LAB_02491464;
        if (*(int *)(*(long *)PTR_DAT_033ed410 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (*(int *)(lVar27 + 0x18) == 0)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        FUN_024e7d94(lVar27 + 0x20,0,0);
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        iVar10 = (int)unaff_x19[0x4d];
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
        lVar27 = unaff_x19[0xea];
        in_stack_00000088 = (float *)in_stack_000000b8;
        fStack0000000000000090 = in_stack_000000c0._4_4_;
        if (iVar10 < 0x401) {
          if (iVar10 == 0x100) {
            if (lVar27 == 0) goto LAB_02491464;
            if (*(uint *)(lVar27 + 0x18) < 2)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            uVar15 = *(undefined8 *)(lVar27 + 0x30);
            if ((int)unaff_x19[0x5b] == 5) {
              if ((*in_stack_00000150 == 0) ||
                 (lVar24 = *(long *)(*in_stack_00000150 + 0x58), lVar24 == 0)) goto LAB_02491464;
              if (*(uint *)(lVar24 + 0x18) <= in_stack_00000030)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              fVar57 = *(float *)(lVar24 + (long)(int)in_stack_00000030 * 0x14 + 0x28);
            }
            else {
              fVar57 = *(float *)(unaff_x19 + 0x96);
            }
            fStack0000000000000090 = fStack000000000000002c + 0.0 + *(float *)(lVar27 + 0x2c);
            fVar57 = (0.0 - fVar57) - fStack0000000000000020;
          }
          else if (iVar10 == 0x200) {
            if (lVar27 == 0) goto LAB_02491464;
            if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0))
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            fStack0000000000000090 = (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
            uVar15 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20)) * 0.5,
                              ((float)*(undefined8 *)(lVar27 + 0x24) +
                              (float)*(undefined8 *)(lVar27 + 0x30)) * 0.5);
            if ((int)unaff_x19[0x5b] == 5) {
              if ((*in_stack_00000150 == 0) ||
                 (lVar27 = *(long *)(*in_stack_00000150 + 0x58), lVar27 == 0)) goto LAB_02491464;
              if (*(uint *)(lVar27 + 0x18) <= in_stack_00000030)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              lVar27 = lVar27 + (long)(int)in_stack_00000030 * 0x14;
              fStack0000000000000090 = fStack000000000000002c + 0.0 + fStack0000000000000090;
              fVar57 = ((fStack0000000000000020 + *(float *)(lVar27 + 0x28) +
                        *(float *)(lVar27 + 0x30)) - fStack0000000000000024) * -0.5 + 0.0;
            }
            else {
              fStack0000000000000090 = fStack000000000000002c + 0.0 + fStack0000000000000090;
              fVar57 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x96) + in_stack_000017b8)
                       - fStack0000000000000024) * -0.5 + 0.0;
            }
          }
          else {
            if (iVar10 != 0x400) goto LAB_0248eb64;
            if (lVar27 == 0) goto LAB_02491464;
            if (*(int *)(lVar27 + 0x18) == 0)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            uVar15 = *(undefined8 *)(lVar27 + 0x24);
            if ((int)unaff_x19[0x5b] == 5) {
              if ((*in_stack_00000150 == 0) ||
                 (lVar24 = *(long *)(*in_stack_00000150 + 0x58), lVar24 == 0)) goto LAB_02491464;
              if (*(uint *)(lVar24 + 0x18) <= in_stack_00000030)
              goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
              in_stack_000017b8 = *(float *)(lVar24 + (long)(int)in_stack_00000030 * 0x14 + 0x30);
            }
            fStack0000000000000090 = fStack000000000000002c + 0.0 + *(float *)(lVar27 + 0x20);
            fVar57 = fStack0000000000000024 + (0.0 - in_stack_000017b8);
          }
          in_stack_00000088 =
               (float *)CONCAT44((float)((ulong)uVar15 >> 0x20) + 0.0,(float)uVar15 + fVar57);
        }
        else if (iVar10 == 0x800) {
          if (lVar27 == 0) goto LAB_02491464;
          if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0))
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          fVar57 = ((float)*(undefined8 *)(lVar27 + 0x24) + (float)*(undefined8 *)(lVar27 + 0x30)) *
                   0.5;
          fStack0000000000000090 =
               fStack000000000000002c + 0.0 +
               (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
          in_stack_00000088 =
               (float *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                                 (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20)) * 0.5 + 0.0
                                 ,fVar57 + 0.0);
        }
        else {
          if (iVar10 == 0x1000) {
            if (lVar27 == 0) goto LAB_02491464;
            if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0))
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            fVar57 = (float)*(undefined8 *)(lVar27 + 0x24) + (float)*(undefined8 *)(lVar27 + 0x30);
            fVar45 = (float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                     (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20);
            fStack0000000000000020 =
                 fStack0000000000000020 + *(float *)(unaff_x19 + 0x9c) +
                 *(float *)(unaff_x19 + 0x9b);
            fStack0000000000000090 =
                 fStack000000000000002c + 0.0 +
                 (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
          }
          else {
            if (iVar10 != 0x2000) goto LAB_0248eb64;
            if (lVar27 == 0) goto LAB_02491464;
            if ((*(int *)(lVar27 + 0x18) == 1) || (*(int *)(lVar27 + 0x18) == 0))
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            fVar57 = (float)*(undefined8 *)(lVar27 + 0x24) + (float)*(undefined8 *)(lVar27 + 0x30);
            fVar45 = (float)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20) +
                     (float)((ulong)*(undefined8 *)(lVar27 + 0x30) >> 0x20);
            fStack0000000000000020 = *(float *)((long)unaff_x19 + 0x4b4) - fStack0000000000000020;
            fStack0000000000000090 =
                 fStack000000000000002c + 0.0 +
                 (*(float *)(lVar27 + 0x20) + *(float *)(lVar27 + 0x2c)) * 0.5;
          }
          fVar57 = fVar57 * 0.5;
          in_stack_00000088 =
               (float *)CONCAT44(fVar45 * 0.5 + 0.0,
                                 fVar57 + (0.0 - (fStack0000000000000020 - fStack0000000000000024) *
                                                 0.5));
        }
LAB_0248eb64:
        lVar27 = FUN_0249b7f8();
        if (lVar27 == 0) goto LAB_02491464;
        FUN_026a125c(lVar27,0);
        __x = DAT_028aa048;
        *(float *)((long)unaff_x19 + 0x6dc) = fVar57;
        dVar51 = modf(__x,(double *)&stack0x00000880);
        puVar7 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
        if (dVar51 == 0.5) {
          fVar45 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
          if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
            fVar45 = fVar45 + 1.0;
          }
        }
        else {
          fVar45 = 255.0;
        }
        dVar51 = modf(__x,(double *)&stack0x00000880);
        if (dVar51 == 0.5) {
          fVar50 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
          if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
            fVar50 = fVar50 + 1.0;
          }
        }
        else {
          fVar50 = 255.0;
        }
        dVar51 = modf(__x,(double *)&stack0x00000880);
        if (dVar51 == 0.5) {
          fVar67 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
          if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
            fVar67 = fVar67 + 1.0;
          }
        }
        else {
          fVar67 = 255.0;
        }
        dVar51 = modf(__x,(double *)&stack0x00000880);
        if (dVar51 == 0.5) {
          fVar43 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
          if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
            fVar43 = fVar43 + 1.0;
          }
        }
        else {
          fVar43 = 255.0;
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
        lVar27 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar27 = *(long *)puVar7;
        }
        puVar22 = *(undefined4 **)(lVar27 + 0xb8);
        UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
                  (*puVar22,puVar22[1],puVar22[2],puVar22[3],&stack0x00001790,0x4000ffff,0);
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar27 = *in_stack_00000150;
        if (lVar27 == 0) goto LAB_02491464;
        uVar12 = *in_stack_00000148;
        if ((int)uVar12 < 1) {
          iStack00000000000000a4 = 0;
          iVar37 = 0;
          plVar42 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
          goto LAB_02491068;
        }
        lVar27 = *(long *)(lVar27 + 0x38);
        if (lVar27 == 0) goto LAB_02491464;
        iVar10 = 0;
        bVar6 = false;
        bVar9 = false;
        bVar8 = false;
        iStack00000000000000a4 = 0;
        fStack0000000000000024 = 0.0;
        bVar5 = false;
        uStack0000000000000114 = 0;
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
             (int)fVar45 & 0xffU | ((int)fVar50 & 0xffU) << 8 | ((int)fVar67 & 0xffU) << 0x10 |
             (int)fVar43 << 0x18;
        fVar50 = 0.0;
        fVar45 = 0.0;
        lStack0000000000000128 = 0x2e0;
        fStack0000000000000098 = fStack00000000000000a8;
        in_stack_000000a0 = fStack00000000000000ac;
        fStack000000000000004c = fStack00000000000000ac;
        fStack0000000000000050 = (float)uStack0000000000000094;
        in_stack_00000078._4_4_ = fStack00000000000000a8;
        fStack000000000000006c = fStack00000000000000ac;
        uStack0000000000000060 = uStack0000000000000094;
        uVar11 = 0;
        uVar38 = 1;
        goto LAB_0248ef74;
      }
      goto LAB_02491464;
    }
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  }
  goto LAB_02491464;
code_r0x0248a9ac:
  *(undefined1 *)((long)unaff_x19 + 0x429) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
  uVar17 = FUN_024d0688();
  if (((uVar17 & 1) != 0) &&
     (uVar12 = in_stack_0000176c, in_stack_000017bc = uVar11, *(int *)((long)unaff_x19 + 0x63c) == 0
     )) goto LAB_0248ab98;

  UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager__GetInputAction
  :
  if ((unaff_x19[0x6c] == 0) || (lVar27 = *(long *)(unaff_x19[0x6c] + 0x38), lVar27 == 0))
  goto LAB_02491464;
  uVar38 = *in_stack_00000148;
  if (*(uint *)(lVar27 + 0x18) <= uVar38)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar40 = (long)(int)uVar38;
  cVar21 = *(char *)(lVar27 + lVar40 * unaff_x21 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x429) = 0;
  lVar24 = unaff_x19[0x23];
  if ((uint)in_stack_000017a8 == uVar38) {
    uVar11 = (uint)((ulong)in_stack_000017a8 >> 0x20);
    unaff_w20 = 1;
    *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
    if (uVar11 == 0x2026) {
      lVar18 = unaff_x19[0xc9];
      lVar27 = lVar27 + lVar40 * unaff_x21;
      *(undefined4 *)(lVar27 + 0x2c) = 0;
      *(long *)(lVar27 + 0x30) = lVar18;
      *(long *)(lVar27 + 0x38) = unaff_x19[0xca];
      *(long *)(lVar27 + 0x50) = unaff_x19[0xcb];
      *(int *)(lVar27 + 0x58) = (int)unaff_x19[0xcc];
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
      in_stack_000017a8 = CONCAT44(3,uVar38 + 1);
    }
    else if (uVar11 == 3) {
      if ((*unaff_x27 == 0) || (lVar18 = FUN_024b11ac(*unaff_x27,0), lVar18 == 0))
      goto LAB_02491464;
      in_stack_00000bf8 = 3;
      FUN_01299bc0(lVar18,&stack0x00000bf8,&stack0x00000880,*(undefined8 *)PTR_DAT_033ef3c8);
      if (*(uint *)(lVar27 + 0x18) <= uVar38)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      unaff_w20 = 1;
      *(ulong *)(lVar27 + lVar40 * unaff_x21 + 0x30) = CONCAT44(in_stack_00000884,in_stack_00000880)
      ;
      uVar38 = *(uint *)((long)unaff_x19 + 0x48c);
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
    }
  }
  else {
    unaff_w20 = 0;
  }
  plVar25 = (long *)System_Threading_Mutex_TypeInfo;
  in_stack_000017bc = uVar11;
  if (((int)uVar38 < *(int *)((long)unaff_x19 + 0x31c)) && (uVar11 != 3)) {
    if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar27 + 0x18) <= uVar38)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar27 = lVar27 + (long)(int)uVar38 * (long)iVar37;
    *(undefined1 *)(lVar27 + 0x194) = 0;
    *(undefined2 *)(lVar27 + 0x20) = 0x200b;
    *(undefined4 *)(lVar27 + 100) = 0;
    *in_stack_00000148 = uVar38 + 1;
    goto LAB_0248ab98;
  }
  iVar10 = *(int *)((long)unaff_x19 + 0x63c);
  fVar50 = fVar45;
  if (iVar10 == 0) {
    uVar38 = *(uint *)((long)unaff_x19 + 0x254);
    if ((uVar38 >> 4 & 1) == 0) {
      if ((uVar38 >> 3 & 1) == 0) {
        if ((uVar38 >> 5 & 1) != 0) {
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
            fVar50 = fStack0000000000000028;
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
      fVar50 = 1.0;
      if ((uVar17 & 1) != 0) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar11 = FUN_016f95a8(uVar11,0);
LAB_0248af70:
        uVar11 = uVar11 & 0xffff;
        fVar50 = 1.0;
      }
    }
    iVar10 = *(int *)((long)unaff_x19 + 0x63c);
    in_stack_000017bc = uVar11;
    if (iVar10 == 0) goto LAB_0248af84;
LAB_0248abc8:
    if (iVar10 == 1) {
      if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar27 = lVar27 + (int)*in_stack_00000148 * unaff_x21;
      lVar40 = *(long *)(lVar27 + 0x40);
      unaff_x19[0xd2] = lVar40;
      *(undefined4 *)((long)unaff_x19 + 0x69c) = *(undefined4 *)(lVar27 + 0x48);
      if ((lVar40 == 0) || (lVar27 = FUN_024ebfa0(lVar40,0), lVar27 == 0)) goto LAB_02491464;
      FUN_0132138c(lVar27,*(undefined4 *)((long)unaff_x19 + 0x69c),&stack0x00000880,
                   *(undefined8 *)System_Func<KeyValuePair<int,_int>,_int>_TypeInfo);
      puVar7 = System_Threading_Mutex_TypeInfo;
      lVar40 = CONCAT44(in_stack_00000884,in_stack_00000880);
      plVar25 = (long *)System_Threading_Mutex_TypeInfo;
      if (lVar40 == 0) goto LAB_0248ab98;
      if (in_stack_000017bc == 0x3c) {
        in_stack_000017bc = *(int *)((long)unaff_x19 + 0x69c) + 0xe000;
      }
      else {
        lVar27 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar27 = *(long *)puVar7;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1b4) = *(undefined4 *)(*(long *)(lVar27 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x1f] == 0) goto LAB_02491464;
      fVar57 = *(float *)(unaff_x19 + 0x3c);
      memmove(&stack0x00001700,(void *)(unaff_x19[0x1f] + 0x50),0x60);
      iVar10 = FUN_026fd110(&stack0x00001700,0);
      if (*unaff_x27 == 0) goto LAB_02491464;
      memmove(&stack0x00001700,(void *)(*unaff_x27 + 0x50),0x60);
      fVar43 = (float)FUN_026fd120(&stack0x00001700,0);
      fVar67 = fStack0000000000000084;
      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
        fVar67 = 1.0;
      }
      if (unaff_x19[0xd2] == 0) goto LAB_02491464;
      fVar67 = (fVar57 / (float)iVar10) * fVar43 * fVar67;
      iVar10 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
      fVar57 = *(float *)(unaff_x19 + 0x3c);
      if (iVar10 < 1) {
        if (*unaff_x27 == 0) goto LAB_02491464;
        iVar10 = FUN_026fd110(*unaff_x27 + 0x50,0);
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar43 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
        fVar64 = fStack0000000000000084;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar64 = fVar45;
        }
        if (unaff_x19[0x1f] == 0) goto LAB_02491464;
        fVar61 = (float)FUN_026fd140(unaff_x19[0x1f] + 0x50,0);
        if (*(long *)(lVar40 + 0x20) == 0) goto LAB_02491464;
        FUN_026fd62c(&stack0x00000880,*(long *)(lVar40 + 0x20),0);
        unaff_x28[0x1cd] = unaff_x28[1];
        unaff_x28[0x1cc] = *unaff_x28;
        fVar44 = (float)FUN_026fd45c(&stack0x000016e0,0);
        if (*(long *)(lVar40 + 0x20) == 0) goto LAB_02491464;
        fVar46 = *(float *)(lVar40 + 0x2c);
        fVar65 = (float)FUN_026fd668(*(long *)(lVar40 + 0x20),0);
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar45 = (float)FUN_026fd140(*unaff_x27 + 0x50,0);
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar62 = (float)FUN_026fd170(*unaff_x27 + 0x50,0);
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar58 = *(float *)((long)unaff_x19 + 0x3fc);
        fVar47 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
        if (unaff_x19[0x1f] == 0) goto LAB_02491464;
        fVar47 = fVar67 * fVar62 * fVar58 * fVar47;
        fVar64 = (fVar57 / (float)iVar10) * fVar43 * fVar64;
        fVar57 = fVar64 * (fVar61 / fVar44) * fVar46 * fVar65;
        fVar64 = fVar64 / fVar57;
        fVar45 = fVar64 * fVar45;
        fVar67 = (float)FUN_026fd180(unaff_x19[0x1f] + 0x50,0);
        fVar64 = fVar64 * fVar67;
      }
      else {
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        iVar10 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        fVar43 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
        if (*(long *)(lVar40 + 0x20) == 0) goto LAB_02491464;
        fVar64 = *(float *)(lVar40 + 0x2c);
        fVar61 = fStack0000000000000084;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar61 = 1.0;
        }
        fVar44 = (float)FUN_026fd668(*(long *)(lVar40 + 0x20),0);
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        fVar45 = (float)FUN_026fd140(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        fVar46 = (float)FUN_026fd170(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        fVar65 = *(float *)((long)unaff_x19 + 0x3fc);
        fVar47 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        fVar47 = fVar67 * fVar46 * fVar65 * fVar47;
        fVar57 = (fVar57 / (float)iVar10) * fVar43 * fVar61 * fVar64 * fVar44;
        fVar64 = (float)FUN_026fd180(unaff_x19[0xd2] + 0x48,0);
      }
      lVar27 = unaff_x19[0x6c];
      unaff_x19[200] = lVar40;
      if ((lVar27 == 0) || (lVar40 = *(long *)(lVar27 + 0x38), lVar40 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar40 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar40 = lVar40 + (int)*in_stack_00000148 * unaff_x21;
      *(undefined4 *)(lVar40 + 0x2c) = 1;
      *(float *)(lVar40 + 0x160) = fVar57;
      in_stack_00000130._4_4_ = 0.0;
      *(long *)(lVar40 + 0x40) = unaff_x19[0xd2];
      *(long *)(lVar40 + 0x38) = unaff_x19[0x1f];
      *(int *)(lVar40 + 0x58) = (int)unaff_x19[0x23];
      *(int *)(unaff_x19 + 0x23) = (int)lVar24;
      goto LAB_0248b384;
    }
    lVar27 = *in_stack_00000150;
    fVar67 = 0.0;
    if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
      fVar67 = fVar57;
    }
    fVar47 = 0.0;
    if (lVar27 == 0) goto LAB_02491464;
    fVar45 = 0.0;
    fVar64 = 0.0;
  }
  else {
    if (iVar10 != 0) goto LAB_0248abc8;
LAB_0248af84:
    if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
    goto LAB_02491464;
    uVar38 = *in_stack_00000148;
    uVar11 = *(uint *)(lVar27 + 0x18);
    if (uVar11 <= uVar38)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar24 = *(long *)(lVar27 + (int)uVar38 * unaff_x21 + 0x30);
    unaff_x19[200] = lVar24;
    plVar25 = (long *)System_Threading_Mutex_TypeInfo;
    if (lVar24 == 0) goto LAB_0248ab98;
    lVar40 = lVar27 + (int)uVar38 * unaff_x21;
    lVar24 = *(long *)(lVar40 + 0x38);
    unaff_x19[0x1f] = lVar24;
    unaff_x19[0x22] = *(long *)(lVar40 + 0x50);
    *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar40 + 0x58);
    if (unaff_w20 == 0) {
LAB_0248b014:
      if (lVar24 == 0) goto LAB_02491464;
      fVar67 = *(float *)(unaff_x19 + 0x3c);
      iVar10 = FUN_026fd110(lVar24 + 0x50,0);
      lVar27 = unaff_x19[0x1f];
    }
    else {
      lVar40 = unaff_x19[0x8e];
      if (lVar40 == 0) goto LAB_02491464;
      if (*(uint *)(lVar40 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if ((*(int *)(lVar40 + (long)(int)uVar12 * 0xc + 0x20) != 10) ||
         (uVar38 == *(uint *)(unaff_x19 + 0x92))) goto LAB_0248b014;
      if (uVar11 <= uVar38 - 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (lVar24 == 0) goto LAB_02491464;
      fVar67 = *(float *)(lVar27 + (long)(int)(uVar38 - 1) * (long)iVar37 + 0x60);
      iVar10 = FUN_026fd110(lVar24 + 0x50,0);
      lVar27 = *unaff_x27;
    }
    if (lVar27 == 0) goto LAB_02491464;
    fVar61 = (float)FUN_026fd120(lVar27 + 0x50,0);
    fVar43 = fStack0000000000000084;
    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
      fVar43 = fVar45;
    }
    fVar64 = 0.0;
    fVar45 = 0.0;
    if ((unaff_w20 & in_stack_000017bc == 0x2026) == 0) {
      if (*unaff_x27 == 0) goto LAB_02491464;
      fVar45 = (float)FUN_026fd140(*unaff_x27 + 0x50,0);
      if (*unaff_x27 == 0) goto LAB_02491464;
      fVar64 = (float)FUN_026fd180(*unaff_x27 + 0x50,0);
    }
    lVar27 = unaff_x19[200];
    if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_02491464;
    fVar44 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar46 = *(float *)(lVar27 + 0x2c);
    fVar57 = (float)FUN_026fd668(*(long *)(lVar27 + 0x20),0);
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar65 = (float)FUN_026fd170(*unaff_x27 + 0x50,0);
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar62 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar47 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
    lVar27 = unaff_x19[0x6c];
    if ((lVar27 == 0) || (lVar24 = *(long *)(lVar27 + 0x38), lVar24 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar24 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar24 = lVar24 + (int)*in_stack_00000148 * unaff_x21;
    *(undefined4 *)(lVar24 + 0x2c) = 0;
    fVar43 = ((fVar50 * fVar67) / (float)iVar10) * fVar61 * fVar43;
    fVar57 = fVar43 * fVar44 * fVar46 * fVar57;
    *(float *)(lVar24 + 0x160) = fVar57;
    uVar11 = *(uint *)(unaff_x19 + 0x23);
    fVar47 = fVar43 * fVar65 * fVar62 * fVar47;
    if (uVar11 == 0) {
      in_stack_00000130._4_4_ = *(float *)(unaff_x19 + 0xc2);
    }
    else {
      lVar24 = unaff_x19[0xe0];
      if (lVar24 == 0) goto LAB_02491464;
      if (*(uint *)(lVar24 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar24 = *(long *)(lVar24 + (long)(int)uVar11 * 8 + 0x20);
      if (lVar24 == 0) goto LAB_02491464;
      in_stack_00000130._4_4_ = *(float *)(lVar24 + 0x4c);
    }
LAB_0248b384:
    fVar67 = 0.0;
    if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
      fVar67 = fVar57;
    }
  }
  lVar27 = *(long *)(lVar27 + 0x38);
  if (lVar27 == 0) goto LAB_02491464;
  if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar27 = lVar27 + (int)*in_stack_00000148 * unaff_x21;
  *(short *)(lVar27 + 0x20) = (short)in_stack_000017bc;
  *(int *)(lVar27 + 0x60) = (int)unaff_x19[0x3c];
  *(undefined4 *)(lVar27 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4e4);
  if ((unaff_x19[0x6c] == 0) || (lVar27 = *(long *)(unaff_x19[0x6c] + 0x38), lVar27 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(int *)(lVar27 + (int)*in_stack_00000148 * unaff_x21 + 0x168) = (int)unaff_x19[0x2a];
  if ((unaff_x19[0x6c] == 0) || (lVar27 = *(long *)(unaff_x19[0x6c] + 0x38), lVar27 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(undefined4 *)(lVar27 + (int)*in_stack_00000148 * unaff_x21 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x154);
  if ((unaff_x19[0x6c] == 0) || (lVar27 = *(long *)(unaff_x19[0x6c] + 0x38), lVar27 == 0))
  goto LAB_02491464;
  uVar11 = *in_stack_00000148;
  FUN_013b78b8(in_stack_000000b8,&stack0x00000880,
               *(undefined8 *)TMPro_TMP_Dropdown_OptionData_TypeInfo);
  if (*(uint *)(lVar27 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  uVar16 = unaff_x28[1];
  uVar15 = *unaff_x28;
  lVar27 = lVar27 + (int)uVar11 * unaff_x21;
  *(undefined4 *)(lVar27 + 0x18c) = in_stack_00000890;
  *(undefined8 *)(lVar27 + 0x184) = uVar16;
  *(undefined8 *)(lVar27 + 0x17c) = uVar15;
  if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(undefined4 *)(lVar27 + (int)*in_stack_00000148 * unaff_x21 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x254);
  if ((unaff_x19[200] == 0) || (lVar27 = *(long *)(unaff_x19[200] + 0x20), lVar27 == 0))
  goto LAB_02491464;
  FUN_026fd62c(&stack0x00000bf8,lVar27,0);
  unaff_x28[0x1df] = in_stack_00000c00;
  unaff_x28[0x1de] = CONCAT44(in_stack_00000bfc,in_stack_00000bf8);
  if ((int)in_stack_000017bc < 0x10000) {
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar11 = FUN_016f68bc(in_stack_000017bc,0);
    unaff_w29 = uVar11 & 1;
  }
  else {
    unaff_w29 = 0;
  }
  fStack00000000000000cc = *(float *)(unaff_x19 + 0x54);
  *(undefined4 *)((long)unaff_x19 + 0x2f4) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f1) == '\0') {
    in_stack_000000b0 = 0.0;
    fVar61 = 0.0;
    fVar43 = 0.0;
  }
  else {
    if (unaff_x19[200] == 0) goto LAB_02491464;
    uVar38 = *in_stack_00000148;
    uVar11 = *(uint *)(unaff_x19[200] + 0x28);
    if ((int)uVar38 < (int)in_stack_00000078._4_4_) {
      if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar27 + 0x18) <= uVar38 + 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar27 = *(long *)(lVar27 + (long)(int)(uVar38 + 1) * (long)iVar37 + 0x30);
      if ((((lVar27 == 0) || (*unaff_x27 == 0)) ||
          (lVar24 = *(long *)(*unaff_x27 + 0x128), lVar24 == 0)) ||
         (lVar24 = *(long *)(lVar24 + 0x18), lVar24 == 0)) goto LAB_02491464;
      in_stack_00000880 = uVar11 | *(int *)(lVar27 + 0x28) << 0x10;
      uVar17 = FUN_0129eff4(lVar24,&stack0x00000880,&stack0x000016d8,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                           );
      uVar68 = 0;
      if ((uVar17 & 1) == 0) {
        in_stack_000000b0 = 0.0;
        fVar61 = 0.0;
        fVar43 = 0.0;
      }
      else {
        if (in_stack_000016d8 == 0) goto LAB_02491464;
        fVar43 = *(float *)(in_stack_000016d8 + 0x14);
        fVar61 = *(float *)(in_stack_000016d8 + 0x18);
        in_stack_000000b0 = *(float *)(in_stack_000016d8 + 0x1c);
        uVar68 = *(undefined4 *)(in_stack_000016d8 + 0x20);
        if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
          fStack00000000000000cc = 0.0;
        }
      }
      uVar38 = *in_stack_00000148;
    }
    else {
      uVar68 = 0;
      in_stack_000000b0 = 0.0;
      fVar61 = 0.0;
      fVar43 = 0.0;
    }
    if (0 < (int)uVar38) {
      if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar27 + 0x18) <= (uint)((long)(int)uVar38 + -1))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar27 = *(long *)(lVar27 + ((long)(int)uVar38 + -1) * unaff_x21 + 0x30);
      if (((lVar27 == 0) || (*unaff_x27 == 0)) ||
         ((lVar24 = *(long *)(*unaff_x27 + 0x128), lVar24 == 0 ||
          (lVar24 = *(long *)(lVar24 + 0x18), lVar24 == 0)))) goto LAB_02491464;
      in_stack_00000880 = *(uint *)(lVar27 + 0x28) | uVar11 << 0x10;
      uVar17 = FUN_0129eff4(lVar24,&stack0x00000880,&stack0x000016d8,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                           );
      if ((uVar17 & 1) != 0) {
        if ((in_stack_000016d8 == 0) ||
           (fVar43 = (float)FUN_024bb1bc(fVar43,fVar61,in_stack_000000b0,uVar68,
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
    fVar44 = (float)FUN_026fd474(&stack0x00001770,0);
    fVar46 = fVar46 - fVar67 * fVar44 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
    *(float *)(unaff_x19 + 199) = fVar46;
    if ((unaff_w29 != 0) || (in_stack_000017bc == 0x200b)) {
      *(float *)(unaff_x19 + 199) =
           fVar46 - fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
    }
  }
  fVar44 = *(float *)(unaff_x19 + 0x55);
  fStack0000000000000080 = 0.0;
  if (fVar44 != 0.0) {
    fVar46 = (float)FUN_026fd454(&stack0x00001770,0);
    fVar65 = (float)FUN_026fd464(&stack0x00001770,0);
    fStack0000000000000080 =
         (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
         (fVar44 * 0.5 - fVar67 * (fVar46 * 0.5 + fVar65));
    *(float *)(unaff_x19 + 199) = *(float *)(unaff_x19 + 199) + fStack0000000000000080;
  }
  if (((cVar21 == '\0') && (*(int *)((long)unaff_x19 + 0x63c) == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x254) & 1) != 0)) {
    lVar27 = unaff_x19[0x22];
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar17 = FUN_02681b9c(lVar27,0,0);
    fVar46 = 0.0;
    if ((uVar17 & 1) != 0) {
      lVar27 = unaff_x19[0x22];
      if (*(int *)(*(long *)
                    Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar25 = (long *)
                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
      ;
      if (lVar27 == 0) goto LAB_02491464;
      uVar17 = FUN_0267e1d8(lVar27,*(undefined4 *)
                                    (*(long *)(*(long *)
                                                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                              + 0xb8) + 0x54),0);
      if ((uVar17 & 1) != 0) {
        lVar27 = unaff_x19[0x22];
        if (*(int *)(*plVar25 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          plVar25 = (long *)
                    Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
          ;
        }
        if (lVar27 == 0) goto LAB_02491464;
        fVar44 = (float)FUN_0267f610(lVar27,*(undefined4 *)(*(long *)(*plVar25 + 0xb8) + 0x54),0);
        if ((*unaff_x27 == 0) || (unaff_x19[0x22] == 0)) goto LAB_02491464;
        fVar65 = *(float *)(*unaff_x27 + 0x1b0);
        fVar46 = (float)FUN_0267f610(unaff_x19[0x22],
                                     *(undefined4 *)
                                      (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                + 0xb8) + 0xcc),0);
        fVar46 = fVar46 * fVar44 * fVar65 * 0.25;
        if (fVar44 < in_stack_00000130._4_4_ + fVar46) {
          in_stack_00000130._4_4_ = fVar44 - fVar46;
        }
      }
    }
    if (*unaff_x27 == 0) goto LAB_02491464;
    in_stack_000000c0._4_4_ = *(float *)(*unaff_x27 + 0x1b4);
  }
  else {
    lVar27 = unaff_x19[0x22];
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar17 = FUN_02681b9c(lVar27,0,0);
    in_stack_000000c0._4_4_ = 0.0;
    if ((uVar17 & 1) != 0) {
      lVar27 = unaff_x19[0x22];
      if (*(int *)(*(long *)
                    Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                  + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      plVar25 = (long *)
                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
      ;
      if (lVar27 == 0) goto LAB_02491464;
      uVar17 = FUN_0267e1d8(lVar27,*(undefined4 *)
                                    (*(long *)(*(long *)
                                                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                              + 0xb8) + 0x54),0);
      if ((uVar17 & 1) != 0) {
        lVar27 = unaff_x19[0x22];
        if (*(int *)(*plVar25 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          plVar25 = (long *)
                    Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
          ;
        }
        if (lVar27 == 0) goto LAB_02491464;
        uVar17 = FUN_0267e1d8(lVar27,*(undefined4 *)(*(long *)(*plVar25 + 0xb8) + 0xcc),0);
        if ((uVar17 & 1) != 0) {
          lVar27 = unaff_x19[0x22];
          if (*(int *)(*plVar25 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            plVar25 = (long *)
                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
            ;
          }
          if (lVar27 == 0) goto LAB_02491464;
          fVar44 = (float)FUN_0267f610(lVar27,*(undefined4 *)(*(long *)(*plVar25 + 0xb8) + 0x54),0);
          if ((*unaff_x27 == 0) || (unaff_x19[0x22] == 0)) goto LAB_02491464;
          fVar65 = *(float *)(*unaff_x27 + 0x1a8);
          fVar46 = (float)FUN_0267f610(unaff_x19[0x22],
                                       *(undefined4 *)
                                        (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                  + 0xb8) + 0xcc),0);
          fVar46 = fVar46 * fVar44 * fVar65 * 0.25;
          if (fVar44 < in_stack_00000130._4_4_ + fVar46) {
            in_stack_00000130._4_4_ = fVar44 - fVar46;
          }
          goto LAB_0248ba68;
        }
      }
    }
    fVar46 = 0.0;
  }
LAB_0248ba68:
  fVar58 = *(float *)(unaff_x19 + 199);
  fVar44 = (float)FUN_026fd464(&stack0x00001770,0);
  fVar58 = fVar58 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                    fVar67 * (fVar43 + ((fVar44 - in_stack_00000130._4_4_) - fVar46));
  fVar43 = (float)FUN_026fd46c(&stack0x00001770,0);
  fVar65 = *(float *)((long)unaff_x19 + 0x614) +
           ((fVar47 + fVar67 * (fVar61 + in_stack_00000130._4_4_ + fVar43)) -
           *(float *)(unaff_x19 + 0x9a));
  fVar43 = (float)FUN_026fd45c(&stack0x00001770,0);
  fVar62 = fVar65 - fVar67 * (in_stack_00000130._4_4_ + in_stack_00000130._4_4_ + fVar43);
  fVar43 = (float)FUN_026fd454(&stack0x00001770,0);
  fVar44 = fVar58 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                    fVar67 * (fVar46 + fVar46 +
                             in_stack_00000130._4_4_ + in_stack_00000130._4_4_ + fVar43);
  fVar43 = fVar58;
  fVar61 = fVar44;
  if (((*(int *)((long)unaff_x19 + 0x63c) == 0) && (cVar21 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x254) >> 1 & 1) != 0)) {
    fVar60 = (float)(int)unaff_x19[0xbd] * fStack000000000000004c;
    fVar43 = (float)FUN_026fd46c(&stack0x00001770,0);
    fVar49 = fVar60 * fVar67 * (fVar46 + in_stack_00000130._4_4_ + fVar43);
    fVar43 = (float)FUN_026fd46c(&stack0x00001770,0);
    fVar61 = (float)FUN_026fd45c(&stack0x00001770,0);
    fVar65 = fVar65 + 0.0;
    fVar62 = fVar62 + 0.0;
    fVar60 = fVar60 * fVar67 * (((fVar43 - fVar61) - in_stack_00000130._4_4_) - fVar46);
    fVar61 = fVar44 + fVar60;
    fVar43 = fVar58 + fVar49;
    fVar55 = (fVar49 - fVar60) * 0.5;
    fVar58 = (fVar58 + fVar60) - fVar55;
    fVar44 = (fVar44 + fVar49) - fVar55;
    fVar43 = fVar43 - fVar55;
    fVar61 = fVar61 - fVar55;
  }
  in_stack_00000118 = (ulong)(uint)fVar67;
  if (*(char *)((long)unaff_x19 + 0x46c) == '\0') {
    fVar49 = 0.0;
    fVar59 = 0.0;
    fStack00000000000000e0 = 0.0;
    fStack00000000000000e4 = 0.0;
    fVar55 = fVar62;
    fVar60 = fVar65;
    fStack00000000000000e8 = fVar43;
    fStack00000000000000ec = fVar58;
  }
  else {
    thunk_FUN_026935f0(_uStack0000000000000060,0);
    fVar63 = (fVar44 + fVar58) * 0.5;
    fVar66 = (fVar62 + fVar65) * 0.5;
    fVar65 = fVar65 - fVar66;
    fVar53 = 0.0;
    fVar60 = fVar65;
    fVar48 = (float)FUN_02692df0(fVar43 - fVar63,_uStack0000000000000060,0);
    fVar62 = fVar62 - fVar66;
    fVar54 = 0.0;
    fVar43 = fVar62;
    fVar58 = (float)FUN_02692df0(fVar58 - fVar63,_uStack0000000000000060,0);
    fVar59 = 0.0;
    fVar44 = (float)FUN_02692df0(fVar44 - fVar63,_uStack0000000000000060,0);
    fVar44 = fVar63 + fVar44;
    fVar65 = fVar66 + fVar65;
    fVar59 = fVar59 + 0.0;
    fVar49 = 0.0;
    fVar61 = (float)FUN_02692df0(fVar61 - fVar63,_uStack0000000000000060,0);
    fVar61 = fVar63 + fVar61;
    fVar62 = fVar66 + fVar62;
    fVar49 = fVar49 + 0.0;
    fVar55 = fVar66 + fVar43;
    fVar60 = fVar66 + fVar60;
    fStack00000000000000e8 = fVar63 + fVar48;
    fStack00000000000000ec = fVar63 + fVar58;
    fStack00000000000000e0 = fVar54 + 0.0;
    fStack00000000000000e4 = fVar53 + 0.0;
  }
  if (*in_stack_00000150 == 0) goto LAB_02491464;
  lVar27 = *(long *)(*in_stack_00000150 + 0x38);
  unaff_d13 = (ulong)(uint)fVar67;
  if (lVar27 == 0) goto LAB_02491464;
  if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar27 = lVar27 + (int)*in_stack_00000148 * unaff_x21;
  *(float *)(lVar27 + 0x120) = fVar55;
  *(float *)(lVar27 + 0x11c) = fStack00000000000000ec;
  *(float *)(lVar27 + 0x124) = fStack00000000000000e0;
  if (*in_stack_00000150 == 0) goto LAB_02491464;
  lVar27 = *(long *)(*in_stack_00000150 + 0x38);
  if (lVar27 == 0) goto LAB_02491464;
  if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar27 = lVar27 + (int)*in_stack_00000148 * unaff_x21;
  *(float *)(lVar27 + 0x114) = fVar60;
  *(float *)(lVar27 + 0x110) = fStack00000000000000e8;
  *(float *)(lVar27 + 0x118) = fStack00000000000000e4;
  if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar27 = lVar27 + (int)*in_stack_00000148 * unaff_x21;
  *(float *)(lVar27 + 0x128) = fVar44;
  *(float *)(lVar27 + 300) = fVar65;
  *(float *)(lVar27 + 0x130) = fVar59;
  if (*in_stack_00000150 == 0) goto LAB_02491464;
  lVar27 = *(long *)(*in_stack_00000150 + 0x38);
  unaff_d14 = (ulong)(uint)fVar46;
  if (lVar27 == 0) goto LAB_02491464;
  if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar27 = lVar27 + (int)*in_stack_00000148 * unaff_x21;
  *(float *)(lVar27 + 0x134) = fVar61;
  *(float *)(lVar27 + 0x138) = fVar62;
  *(float *)(lVar27 + 0x13c) = fVar49;
  if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
  goto LAB_02491464;
  uVar11 = *in_stack_00000148;
  unaff_x22 = (long)(int)uVar11;
  if (*(uint *)(lVar27 + 0x18) <= uVar11)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar24 = lVar27 + unaff_x22 * unaff_x21;
  *(int *)(lVar24 + 0x140) = (int)unaff_x19[199];
  fVar61 = *(float *)(unaff_x19 + 0x9a);
  param_2 = (ulong)(uint)fVar61;
  fVar43 = *(float *)((long)unaff_x19 + 0x614);
  *(float *)(lVar24 + 0x15c) = (fVar44 - fStack00000000000000ec) / (fVar60 - fVar55);
  *(float *)(lVar24 + 0x14c) = (fVar47 - fVar61) + fVar43;
  fVar45 = fVar45 * fVar67;
  if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
    fVar45 = fVar45 / fVar50;
    fVar64 = (fVar64 * fVar67) / fVar50;
  }
  else {
    fVar64 = fVar64 * fVar67;
  }
  unaff_w24 = *(uint *)(unaff_x19 + 0x92);
  bVar8 = unaff_w29 != 0;
  fVar45 = fVar43 + fVar45;
  bVar9 = uVar11 != unaff_w24;
  if (bVar9 && bVar8) {
    fVar43 = *(float *)(unaff_x19 + 0x98);
    lVar27 = lVar27 + unaff_x22 * unaff_x21;
    *(float *)(lVar27 + 0x154) = fVar43;
    fVar64 = *(float *)((long)unaff_x19 + 0x4c4);
    *(float *)(lVar27 + 0x148) = fVar43 - fVar61;
    *(float *)(lVar27 + 0x158) = fVar64;
    *(float *)(unaff_x19 + 0x97) = fVar43 - fVar61;
    fVar64 = fVar64 - fVar61;
    *(float *)(lVar27 + 0x150) = fVar64;
  }
  else {
    fVar64 = fVar43 + fVar64;
    fVar44 = fVar45;
    fVar46 = fVar64;
    if (fVar43 != 0.0) {
      fVar44 = (fVar45 - fVar43) / *(float *)((long)unaff_x19 + 0x3fc);
      fVar46 = (fVar64 - fVar43) / *(float *)((long)unaff_x19 + 0x3fc);
      if (fVar44 <= fVar45) {
        fVar44 = fVar45;
      }
      if (fVar64 <= fVar46) {
        fVar46 = fVar64;
      }
    }
    lVar27 = lVar27 + unaff_x22 * unaff_x21;
    fVar43 = fVar44;
    if (fVar44 <= *(float *)(unaff_x19 + 0x98)) {
      fVar43 = *(float *)(unaff_x19 + 0x98);
    }
    fVar65 = fVar46;
    if (*(float *)((long)unaff_x19 + 0x4c4) <= fVar46) {
      fVar65 = *(float *)((long)unaff_x19 + 0x4c4);
    }
    *(float *)((long)unaff_x19 + 0x4c4) = fVar65;
    fVar64 = fVar64 - fVar61;
    *(float *)(unaff_x19 + 0x98) = fVar43;
    *(float *)(lVar27 + 0x154) = fVar44;
    *(float *)(lVar27 + 0x158) = fVar46;
    *(float *)(lVar27 + 0x148) = fVar45 - fVar61;
    *(float *)(unaff_x19 + 0x97) = fVar45 - fVar61;
    *(float *)(lVar27 + 0x150) = fVar64;
  }
  *(float *)((long)unaff_x19 + 0x4bc) = fVar64;
  if (((int)unaff_x19[0x94] == 0) || (*(char *)((long)unaff_x19 + 0x334) != '\0')) {
    if (!bVar9 || !bVar8) {
      *(float *)(unaff_x19 + 0x96) = fVar43;
      if (unaff_x19[0x1f] == 0) goto LAB_02491464;
      fVar43 = *(float *)((long)unaff_x19 + 0x4b4);
      fVar61 = (float)FUN_026fd150(unaff_x19[0x1f] + 0x50,0);
      fVar50 = (fVar67 * fVar61) / fVar50;
      param_2 = (ulong)*(uint *)(unaff_x19 + 0x9a);
      if (fVar43 <= fVar50) {
        fVar43 = fVar50;
      }
      *(float *)((long)unaff_x19 + 0x4b4) = fVar43;
      goto LAB_0248bef4;
    }
  }
  else {
LAB_0248bef4:
    if ((!bVar9 || !bVar8) && (float)param_2 == 0.0) {
      fVar50 = *(float *)(in_stack_00000070 + 0x208);
      if (*(float *)(in_stack_00000070 + 0x208) <= fVar45) {
        fVar50 = fVar45;
      }
      *(float *)(in_stack_00000070 + 0x208) = fVar50;
    }
  }
  lVar27 = *in_stack_00000150;
  if ((lVar27 == 0) || (lVar24 = *(long *)(lVar27 + 0x38), lVar24 == 0)) goto LAB_02491464;
  uVar38 = *in_stack_00000148;
  if (*(uint *)(lVar24 + 0x18) <= uVar38)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar24 = lVar24 + (int)uVar38 * unaff_x21;
  *(undefined1 *)(lVar24 + 0x194) = 0;
  unaff_w26 = *(uint *)(unaff_x19 + 0x4e) & 0x18;
  if ((in_stack_000017bc == 9) ||
     (((((unaff_w29 == 0 && (in_stack_000017bc != 3)) && (in_stack_000017bc != 0x200b)) &&
       (in_stack_000017bc != 0xad)) ||
      (((bool)(in_stack_000017bc == 0xad & (bVar5 ^ 1U)) || (*(int *)((long)unaff_x19 + 0x63c) == 1)
       ))))) {
    *(undefined1 *)(lVar24 + 0x194) = 1;
    pfVar26 = in_stack_00000088;
    pfVar31 = _fStack0000000000000098;
    if (unaff_w20 != 0) {
      lVar27 = *(long *)(lVar27 + 0x50);
      if (lVar27 == 0) goto LAB_02491464;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      pfVar31 = (float *)(lVar27 + 0x60);
      pfVar26 = (float *)(lVar27 + 100);
    }
    unaff_s8 = *pfVar31;
    unaff_s9 = *pfVar26;
    fVar45 = *(float *)(unaff_x19 + 0x6b);
    fVar50 = *(float *)(unaff_x19 + 199);
    in_stack_000000d8._4_4_ = (fStack0000000000000090 - unaff_s8) - unaff_s9;
    bVar8 = true;
    if ((fVar45 <= in_stack_000000d8._4_4_) && (bVar8 = false, !NAN(fVar45))) {
      bVar8 = fVar45 == -1.0;
    }
    if (!bVar8) {
      in_stack_000000d8._4_4_ = fVar45;
    }
    fVar45 = 0.0;
    if ((char)unaff_x19[0x1d] == '\0') {
      fVar45 = (float)FUN_026fd474(&stack0x00001770,0);
      param_2 = (ulong)*(uint *)(unaff_x19 + 0x9a);
    }
    fVar64 = *(float *)((long)unaff_x19 + 0x4c4);
    fVar43 = *(float *)((long)unaff_x19 + 0x2cc);
    fVar61 = (float)param_2;
    if (in_stack_000017bc != 0xad) {
      fVar57 = fVar67;
    }
    fVar67 = 0.0;
    if ((0.0 < fVar61) && (fVar67 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
      fVar67 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
    }
    fVar67 = (*(float *)(unaff_x19 + 0x96) - (fVar64 - fVar61)) + fVar67;
    unaff_w23 = *in_stack_00000148;
    if (in_stack_000000a0 < fVar67) {
      if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
        *(uint *)((long)unaff_x19 + 0x2dc) = unaff_w23;
      }
      plVar42 = (long *)StringLiteral_302;
      plVar25 = (long *)System_Threading_Mutex_TypeInfo;
      uVar15 = DAT_02941c08;
      if ((char)unaff_x19[0x46] != '\0') {
        fVar44 = *(float *)(unaff_x19 + 0x58);
        if (((fVar44 < *(float *)((long)unaff_x19 + 0x2b4)) && (0.0 < fVar61)) &&
           (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
          fVar57 = *(float *)((long)unaff_x19 + 0x2b4) +
                   ((in_stack_00000018._4_4_ - fVar67) / (float)(int)unaff_x19[0x94]) /
                   fStack0000000000000054;
          if (fVar57 <= fVar44) {
            fVar57 = fVar44;
          }
          goto LAB_0248ea5c;
        }
        fVar61 = *(float *)((long)unaff_x19 + 0x1dc);
        fVar67 = *(float *)(unaff_x19 + 0x49);
        param_2 = (ulong)(uint)fVar67;
        if ((fVar67 < fVar61) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
          fVar57 = (fVar61 - *(float *)(unaff_x19 + 0x47)) * 0.5;
          if (fVar57 <= DAT_028aa298) {
            fVar57 = DAT_028aa298;
          }
          fVar45 = (fVar61 - fVar57) * 20.0 + 0.5;
          fVar57 = DAT_02958220;
          if (fVar45 != INFINITY) {
            fVar57 = (float)(int)fVar45 / 20.0;
          }
          if (fVar57 <= fVar67) {
            fVar57 = fVar67;
          }
          *(float *)((long)unaff_x19 + 0x234) = fVar61;
          goto LAB_0248e598;
        }
      }
      switch((int)unaff_x19[0x5b]) {
      case 1:
        lVar27 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar27 = *plVar25;
        }
        lVar24 = *(long *)(lVar27 + 0xb8);
        lVar27 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
        if ((*(byte *)(lVar27 + 0x132) & 1) == 0) {
          lVar27 = FUN_00d5941c(lVar27);
        }
        plVar42 = (long *)StringLiteral_302;
        lVar27 = *(long *)(*(long *)(lVar27 + 0xc0) + 8);
        if ((*(byte *)(lVar27 + 0x132) & 1) == 0) {
          lVar27 = FUN_00d5941c();
        }
        piVar19 = (int *)thunk_FUN_00d32ed4(lVar24 + 0x11f0,*(long *)(lVar27 + 0x80) + 0xa0);
        if (*piVar19 == 0) goto LAB_0248e4bc;
        lVar27 = *plVar25;
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar27 = *plVar25;
        }
        FUN_013b8de4(*(long *)(lVar27 + 0xb8) + 0x11f0,&stack0x00000880,
                     *(undefined8 *)
                      Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                    );
        memcpy(&stack0x00001360,&stack0x00000880,0x378);
LAB_0248c8f4:
        iVar10 = FUN_024d66ec();
        goto LAB_0248c900;
      default:
        goto switchD_0248c274_caseD_2;
      case 3:
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
LAB_0248c524:
        plVar42 = (long *)StringLiteral_302;
        uVar12 = FUN_024d66ec();
        break;
      case 5:
        if ((unaff_w23 == 0) || ((int)uVar12 < 0)) {
          *in_stack_00000148 = 0;
          plVar25 = (long *)System_Threading_Mutex_TypeInfo;
          plVar42 = (long *)StringLiteral_302;
          uVar12 = 0xffffffff;
          in_stack_000017a8 = uVar15;
          goto LAB_0248ab98;
        }
        fVar57 = *(float *)(unaff_x19 + 0x98);
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar12 = FUN_024d66ec();
        if (fVar57 - fVar64 <= in_stack_000000a0) {
          *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
          *(undefined4 *)(unaff_x19 + 0x92) = *(undefined4 *)((long)unaff_x19 + 0x48c);
          param_2 = *(ulong *)(*(long *)(*plVar25 + 0xb8) + 0x15a8);
          *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
          *(undefined4 *)(unaff_x19 + 0x99) = 0;
          lVar27 = NEON_rev64(param_2,4);
          unaff_x19[0x98] = lVar27;
          *(undefined4 *)(unaff_x19 + 0x9a) = 0;
          *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
          *(int *)(unaff_x19 + 0x94) = (int)unaff_x19[0x94] + 1;
          *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
          goto LAB_0248ab98;
        }
        break;
      case 6:
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar12 = FUN_024d66ec();
        plVar42 = (long *)StringLiteral_302;
        lVar27 = unaff_x19[0x5c];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            );
        }
        uVar17 = FUN_02681b9c(lVar27,0,0);
        if ((uVar17 & 1) != 0) {
          plVar39 = (long *)unaff_x19[0x5c];
          uVar15 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar39 == (long *)0x0) goto LAB_02491464;
          (**(code **)(*plVar39 + 0x558))(plVar39,uVar15,*(undefined8 *)(*plVar39 + 0x560));
          lVar27 = unaff_x19[0x5c];
          if (lVar27 == 0) goto LAB_02491464;
          *(int *)(lVar27 + 0x3f8) = (int)unaff_x19[0x7f];
          FUN_024c910c(lVar27,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
          plVar39 = (long *)unaff_x19[0x5c];
          if (plVar39 == (long *)0x0) goto LAB_02491464;
          (**(code **)(*plVar39 + 0x7d8))(plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        }
      }
      goto LAB_0248c628;
    }
switchD_0248c274_caseD_2:
    plVar25 = (long *)System_Threading_Mutex_TypeInfo;
    fVar67 = 1.0 - fVar43;
    param_2 = (ulong)(uint)fVar67;
    unaff_s10 = ABS(fVar50) + fVar45 * fVar67 * fVar57;
    unaff_s12 = _DAT_0294c6e8;
    if (unaff_w26 == 0) {
      unaff_s12 = 1.0;
    }
    if (unaff_s12 * in_stack_000000d8._4_4_ < unaff_s10) {
      if (((char)unaff_x19[0x5a] == '\0') || (unaff_w23 == *(uint *)(unaff_x19 + 0x92))) {
        if (((char)unaff_x19[0x46] == '\0') ||
           ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c))) {
LAB_0248c3dc:
          iVar10 = (int)unaff_x19[0x5b];
          if (iVar10 == 1) {
            lVar27 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar27 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar27 = *plVar25;
            }
            plVar42 = (long *)StringLiteral_302;
            lVar24 = *(long *)(lVar27 + 0xb8);
            lVar27 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
            if ((*(byte *)(lVar27 + 0x132) & 1) == 0) {
              lVar27 = FUN_00d5941c(lVar27);
            }
            lVar27 = *(long *)(*(long *)(lVar27 + 0xc0) + 8);
            if ((*(byte *)(lVar27 + 0x132) & 1) == 0) {
              lVar27 = FUN_00d5941c();
            }
            piVar19 = (int *)thunk_FUN_00d32ed4(lVar24 + 0x11f0,*(long *)(lVar27 + 0x80) + 0xa0);
            if (*piVar19 == 0) goto LAB_0248e4bc;
            lVar27 = *plVar25;
            if (*(int *)(lVar27 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar27 = *plVar25;
            }
            FUN_013b8de4(*(long *)(lVar27 + 0xb8) + 0x11f0,&stack0x00000880,
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
            plVar42 = (long *)StringLiteral_302;
            uVar12 = FUN_024d66ec();
            lVar27 = unaff_x19[0x5c];
            if (*(int *)(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                        0xe0) == 0) {
              thunk_FUN_00d32864(*(long *)
                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                );
            }
            uVar17 = FUN_02681b9c(lVar27,0,0);
            if ((uVar17 & 1) != 0) {
              plVar39 = (long *)unaff_x19[0x5c];
              uVar15 = (**(code **)(*unaff_x19 + 0x548))();
              if (plVar39 == (long *)0x0) goto LAB_02491464;
              (**(code **)(*plVar39 + 0x558))(plVar39,uVar15,*(undefined8 *)(*plVar39 + 0x560));
              lVar27 = unaff_x19[0x5c];
              if (lVar27 == 0) goto LAB_02491464;
              *(int *)(lVar27 + 0x3f8) = (int)unaff_x19[0x7f];
              FUN_024c910c(lVar27,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
              plVar39 = (long *)unaff_x19[0x5c];
              if (plVar39 == (long *)0x0) goto LAB_02491464;
              (**(code **)(*plVar39 + 0x7d8))(plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7e0));
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
          goto LAB_0248cf18;
        }
        fVar57 = *(float *)(unaff_x19 + 0x59) / 100.0;
        if (fVar43 < fVar57) {
          fVar45 = unaff_s10 / fVar67;
          if (fVar43 <= 0.0) {
            fVar45 = unaff_s10;
          }
          fVar43 = fVar43 + (unaff_s10 - unaff_s12 * (in_stack_000000d8._4_4_ + DAT_02958218)) /
                            fVar45;
          goto LAB_0249154c;
        }
        fVar57 = *(float *)((long)unaff_x19 + 0x1dc);
        param_2 = (ulong)(uint)fVar57;
        fVar45 = *(float *)(unaff_x19 + 0x49);
        if (fVar57 <= fVar45) goto LAB_0248c3dc;
LAB_024914c0:
        fVar50 = (fVar57 - *(float *)(unaff_x19 + 0x47)) * 0.5;
        if (fVar50 <= DAT_028aa298) {
          fVar50 = DAT_028aa298;
        }
        *(float *)((long)unaff_x19 + 0x234) = fVar57;
        fVar50 = (fVar57 - fVar50) * 20.0 + 0.5;
        fVar57 = DAT_02958220;
        if (fVar50 != INFINITY) {
          fVar57 = (float)(int)fVar50 / 20.0;
        }
        if (fVar57 <= fVar45) {
          fVar57 = fVar45;
        }
LAB_0248e598:
        *(float *)((long)unaff_x19 + 0x1dc) = fVar57;
        return;
      }
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar12 = FUN_024d66ec();
      if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
        lVar27 = *in_stack_00000150;
        if ((lVar27 == 0) || (lVar24 = *(long *)(lVar27 + 0x38), lVar24 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar24 + 0x18) <= *in_stack_00000148)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fVar57 = *(float *)(unaff_x19 + 0x9a);
        fVar45 = 0.0;
        if ((0.0 < fVar57) && (fVar45 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
          fVar45 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
        }
        fVar45 = fStack00000000000000c8 * *(float *)(unaff_x19 + 0x56) +
                 *(float *)(lVar24 + (int)*in_stack_00000148 * unaff_x21 + 0x154) +
                 (fVar45 - *(float *)((long)unaff_x19 + 0x4c4)) +
                 fStack0000000000000054 *
                 (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4));
      }
      else {
        lVar27 = unaff_x19[0x6c];
        *(undefined1 *)((long)unaff_x19 + 700) = 1;
        if (lVar27 == 0) goto LAB_02491464;
        fVar57 = *(float *)(unaff_x19 + 0x9a);
        fVar45 = *(float *)(unaff_x19 + 0x57) +
                 fStack00000000000000c8 * *(float *)(unaff_x19 + 0x56);
      }
      puVar7 = System_Threading_Mutex_TypeInfo;
      lVar27 = *(long *)(lVar27 + 0x38);
      if (lVar27 == 0) goto LAB_02491464;
      uVar38 = *(uint *)((long)unaff_x19 + 0x48c);
      if ((*(uint *)(lVar27 + 0x18) <= uVar38) ||
         (uVar29 = uVar38 - 1, *(uint *)(lVar27 + 0x18) <= uVar29))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      param_2 = (ulong)(uint)(fVar45 + *(float *)(unaff_x19 + 0x96));
      unaff_s11 = (fVar45 + *(float *)(unaff_x19 + 0x96) + fVar57) -
                  *(float *)(lVar27 + (int)uVar38 * unaff_x21 + 0x158);
      if ((!bVar5 && *(short *)(lVar27 + (long)(int)uVar29 * (long)iVar37 + 0x20) == 0xad) &&
         ((unaff_s11 < in_stack_000000a0 || ((int)unaff_x19[0x5b] == 0)))) {
        bVar5 = false;
        in_stack_000017a8 = CONCAT44(0x2d,uVar29);
        *in_stack_00000148 = uVar29;
        plVar25 = (long *)System_Threading_Mutex_TypeInfo;
        plVar42 = (long *)StringLiteral_302;
        uVar12 = uVar12 - 1;
        goto LAB_0248ab98;
      }
      if (*(short *)(lVar27 + (int)uVar38 * unaff_x21 + 0x20) == 0xad) {
        bVar5 = true;
        plVar25 = (long *)System_Threading_Mutex_TypeInfo;
        plVar42 = (long *)StringLiteral_302;
        goto LAB_0248ab98;
      }
      if ((bStack000000000000005c & *(byte *)(unaff_x19 + 0x46) & 1) != 0) {
        fVar43 = *(float *)((long)unaff_x19 + 0x2cc);
        fVar57 = *(float *)(unaff_x19 + 0x59) / 100.0;
        if ((fVar57 <= fVar43) || ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c))) {
          fVar57 = *(float *)((long)unaff_x19 + 0x1dc);
          param_2 = (ulong)(uint)fVar57;
          fVar45 = *(float *)(unaff_x19 + 0x49);
          if ((fVar45 < fVar57) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
          goto LAB_024914c0;
          goto LAB_0248cc70;
        }
LAB_0249155c:
        fVar45 = unaff_s10;
        if (0.0 < fVar43) {
          fVar45 = unaff_s10 / (1.0 - fVar43);
        }
        fVar43 = fVar43 + (unaff_s10 - unaff_s12 * (in_stack_000000d8._4_4_ + DAT_02958218)) /
                          fVar45;
LAB_0249154c:
        if (fVar57 <= fVar43) {
          fVar43 = fVar57;
        }
        *(float *)((long)unaff_x19 + 0x2cc) = fVar43;
        return;
      }
LAB_0248cc70:
      lVar27 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar27 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar27 = *(long *)puVar7;
      }
      iVar10 = *(int *)(*(long *)(lVar27 + 0xb8) + 0xe78);
      if (((iVar10 != unaff_w25) && (iVar10 != -1)) && (((bStack000000000000005c ^ 1) & 1) == 0))
      goto code_r0x0248ccb4;
LAB_0248cd90:
      if (unaff_s11 <= in_stack_000000a0) {
        param_2 = unaff_d13;
        FUN_024d7014(fStack0000000000000054,unaff_d13,fStack00000000000000c8,
                     *(undefined4 *)((long)unaff_x19 + 0x2f4),in_stack_000000c0._4_4_,
                     fStack00000000000000cc,in_stack_000000d8._4_4_,fStack0000000000000048);
        bStack000000000000005c = 1;
        bVar5 = false;
        fStack0000000000000058 = 1.4013e-45;
        plVar25 = (long *)System_Threading_Mutex_TypeInfo;
        plVar42 = (long *)StringLiteral_302;
        goto LAB_0248ab98;
      }
      if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
        *(undefined4 *)((long)unaff_x19 + 0x2dc) = *(undefined4 *)((long)unaff_x19 + 0x48c);
      }
      plVar42 = (long *)StringLiteral_302;
      plVar25 = (long *)System_Threading_Mutex_TypeInfo;
      if ((char)unaff_x19[0x46] != '\0') {
        fVar45 = *(float *)(unaff_x19 + 0x58);
        if ((fVar45 < *(float *)((long)unaff_x19 + 0x2b4)) &&
           (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
          fVar57 = *(float *)((long)unaff_x19 + 0x2b4) +
                   ((in_stack_00000018._4_4_ - unaff_s11) / (float)((int)unaff_x19[0x94] + 1)) /
                   fStack0000000000000054;
          if (fVar57 <= fVar45) {
            fVar57 = fVar45;
          }
LAB_0248ea5c:
          *(float *)((long)unaff_x19 + 0x2b4) = fVar57;
          return;
        }
        fVar43 = *(float *)((long)unaff_x19 + 0x2cc);
        fVar57 = *(float *)(unaff_x19 + 0x59) / 100.0;
        if ((fVar43 < fVar57) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
        goto LAB_0249155c;
        fVar57 = *(float *)((long)unaff_x19 + 0x1dc);
        param_2 = (ulong)(uint)fVar57;
        fVar45 = *(float *)(unaff_x19 + 0x49);
        if ((fVar45 < fVar57) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
        goto LAB_024914c0;
      }
      switch((int)unaff_x19[0x5b]) {
      case 0:
      case 2:
      case 4:
        param_2 = unaff_d13;
        FUN_024d7014(fStack0000000000000054,unaff_d13,fStack00000000000000c8,
                     *(undefined4 *)((long)unaff_x19 + 0x2f4),in_stack_000000c0._4_4_,
                     fStack00000000000000cc,in_stack_000000d8._4_4_,fStack0000000000000048);
        break;
      case 1:
        lVar27 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar27 = *plVar25;
        }
        lVar24 = *(long *)(lVar27 + 0xb8);
        lVar27 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
        if ((*(byte *)(lVar27 + 0x132) & 1) == 0) {
          lVar27 = FUN_00d5941c(lVar27);
        }
        lVar27 = *(long *)(*(long *)(lVar27 + 0xc0) + 8);
        if ((*(byte *)(lVar27 + 0x132) & 1) == 0) {
          lVar27 = FUN_00d5941c();
        }
        piVar19 = (int *)thunk_FUN_00d32ed4(lVar24 + 0x11f0,*(long *)(lVar27 + 0x80) + 0xa0);
        if (*piVar19 == 0) {
          bVar5 = false;
LAB_0248e4bc:
          in_stack_000017a8 = DAT_02941c08;
          in_stack_00000148[0] = 0;
          in_stack_00000148[1] = 0;
          uVar12 = 0xffffffff;
          goto LAB_0248ab98;
        }
        lVar27 = *plVar25;
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar27 = *plVar25;
        }
        FUN_013b8de4(*(long *)(lVar27 + 0xb8) + 0x11f0,&stack0x00000880,
                     *(undefined8 *)
                      Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                    );
        memcpy(&stack0x00000fe8,&stack0x00000880,0x378);
        iVar10 = FUN_024d66ec();
        bVar5 = false;
LAB_0248c900:
        iVar13 = *(int *)((long)unaff_x19 + 0x48c) + -1;
        *(int *)((long)unaff_x19 + 0x48c) = iVar13;
        in_stack_00000140._4_4_ = in_stack_00000140._4_4_ + 1;
        uVar12 = iVar10 - 1;
        in_stack_000017a8 = CONCAT44(0x2026,iVar13);
        goto LAB_0248ab98;
      case 3:
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar12 = FUN_024d66ec();
        bVar5 = false;
LAB_0248c628:
        in_stack_000017a8 = CONCAT44(3,unaff_w23);
        goto LAB_0248ab98;
      case 5:
        *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
        param_2 = unaff_d13;
        FUN_024d7014(fStack0000000000000054,unaff_d13,fStack00000000000000c8,
                     *(undefined4 *)((long)unaff_x19 + 0x2f4),in_stack_000000c0._4_4_,
                     fStack00000000000000cc,in_stack_000000d8._4_4_,fStack0000000000000048);
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
        uVar17 = FUN_02681b9c(lVar27,0,0);
        if ((uVar17 & 1) != 0) {
          plVar39 = (long *)unaff_x19[0x5c];
          uVar15 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar39 == (long *)0x0) goto LAB_02491464;
          (**(code **)(*plVar39 + 0x558))(plVar39,uVar15,*(undefined8 *)(*plVar39 + 0x560));
          lVar27 = unaff_x19[0x5c];
          if (lVar27 == 0) goto LAB_02491464;
          *(int *)(lVar27 + 0x3f8) = (int)unaff_x19[0x7f];
          FUN_024c910c(lVar27,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
          plVar39 = (long *)unaff_x19[0x5c];
          if (plVar39 == (long *)0x0) goto LAB_02491464;
          (**(code **)(*plVar39 + 0x7d8))(plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        }
        bVar5 = false;
LAB_0248ca1c:
        in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
        goto LAB_0248ab98;
      default:
        bVar5 = false;
        goto LAB_0248cf18;
      }
      bVar5 = false;
      bStack000000000000005c = 1;
      fStack0000000000000058 = 1.4013e-45;
      plVar25 = (long *)System_Threading_Mutex_TypeInfo;
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
          (**(code **)(*unaff_x19 + 0x8b8))(in_stack_00000130._4_4_,unaff_d14);
        }
        uVar38 = *in_stack_00000148;
        if (((uint)fStack0000000000000058 & 1) != 0) {
          *(uint *)(in_stack_00000070 + 0x1f0) = uVar38;
        }
        *(uint *)((long)unaff_x19 + 0x49c) = uVar38;
        *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
        if ((unaff_x19[0x6c] == 0) || (lVar27 = *(long *)(unaff_x19[0x6c] + 0x50), lVar27 == 0))
        goto LAB_02491464;
        if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
        fStack0000000000000058 = 0.0;
        *(float *)(lVar27 + 0x60) = unaff_s8;
        *(float *)(lVar27 + 100) = unaff_s9;
        goto FUN_0248d088;
      }
      lVar27 = *in_stack_00000150;
      if ((lVar27 == 0) || (lVar24 = *(long *)(lVar27 + 0x38), lVar24 == 0)) goto LAB_02491464;
      uVar38 = *in_stack_00000148;
      if (*(uint *)(lVar24 + 0x18) <= uVar38)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      *(undefined1 *)(lVar24 + (int)uVar38 * unaff_x21 + 0x194) = 0;
      *(uint *)((long)unaff_x19 + 0x49c) = uVar38;
      lVar24 = *(long *)(lVar27 + 0x50);
      if (lVar24 == 0) goto LAB_02491464;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      *(int *)(lVar24 + 0x2c) = *(int *)(lVar24 + 0x2c) + 1;
      goto LAB_0248cf8c;
    }
    if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(undefined1 *)(lVar27 + (int)*in_stack_00000148 * unaff_x21 + 0x194) = 0;
  }
  else {
    if (((in_stack_000017bc & 0xfffffffe) == 10) && ((int)unaff_x19[0x5b] == 6)) {
      fVar45 = (float)param_2;
      fVar57 = 0.0;
      if ((0.0 < fVar45) && (fVar57 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
        fVar57 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
      }
      param_2 = (ulong)(uint)in_stack_000000a0;
      if (in_stack_000000a0 <
          (*(float *)(unaff_x19 + 0x96) - (*(float *)((long)unaff_x19 + 0x4c4) - fVar45)) + fVar57)
      {
        if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
          *(uint *)((long)unaff_x19 + 0x2dc) = uVar38;
        }
        plVar42 = (long *)StringLiteral_302;
        plVar25 = (long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar12 = FUN_024d66ec();
        lVar27 = unaff_x19[0x5c];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            );
        }
        uVar17 = FUN_02681b9c(lVar27,0,0);
        if ((uVar17 & 1) != 0) {
          plVar39 = (long *)unaff_x19[0x5c];
          uVar15 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar39 == (long *)0x0) goto LAB_02491464;
          (**(code **)(*plVar39 + 0x558))(plVar39,uVar15,*(undefined8 *)(*plVar39 + 0x560));
          lVar27 = unaff_x19[0x5c];
          if (lVar27 == 0) goto LAB_02491464;
          *(int *)(lVar27 + 0x3f8) = (int)unaff_x19[0x7f];
          FUN_024c910c(lVar27,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
          plVar39 = (long *)unaff_x19[0x5c];
          if (plVar39 == (long *)0x0) goto LAB_02491464;
          (**(code **)(*plVar39 + 0x7d8))(plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        }
        in_stack_000017a8 = CONCAT44(3,uVar38);
        goto LAB_0248ab98;
      }
    }
    if ((((in_stack_000017bc - 0x2007 < 0x23) &&
         ((1L << ((ulong)(in_stack_000017bc - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
        (in_stack_000017bc - 10 < 2)) || (in_stack_000017bc == 0xa0)) {
UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ObjectSpawner__get_objectPrefabs:
      if (((in_stack_000017bc != 0xad) && (in_stack_000017bc != 0x200b)) &&
         (in_stack_000017bc != 0x2060)) {
        lVar27 = *in_stack_00000150;
        if ((lVar27 == 0) || (lVar24 = *(long *)(lVar27 + 0x50), lVar24 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
        *(int *)(lVar24 + 0x2c) = *(int *)(lVar24 + 0x2c) + 1;
        *(int *)(lVar27 + 0x20) = *(int *)(lVar27 + 0x20) + 1;
      }
    }
    else {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar17 = FUN_016fa418(in_stack_000017bc,0);
      if ((uVar17 & 1) != 0)
      goto UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ObjectSpawner__get_objectPrefabs
      ;
    }
    if (in_stack_000017bc == 0xa0) {
      if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x50), lVar27 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
LAB_0248cf8c:
      *(int *)(lVar27 + 0x20) = *(int *)(lVar27 + 0x20) + 1;
    }
  }
FUN_0248d088:
  if (((int)unaff_x19[0x5b] == 1) && ((in_stack_000017bc == 0x2d || (unaff_w20 != 1)))) {
    if (unaff_x19[0xca] == 0) goto LAB_02491464;
    fVar57 = *(float *)(unaff_x19 + 0x3c);
    iVar10 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
    if (unaff_x19[0xca] == 0) goto LAB_02491464;
    fVar50 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
    lVar27 = unaff_x19[0xc9];
    fVar45 = fStack0000000000000084;
    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
      fVar45 = 1.0;
    }
    if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_02491464;
    fVar43 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar64 = *(float *)(lVar27 + 0x2c);
    fVar67 = (float)FUN_026fd668(*(long *)(lVar27 + 0x20),0);
    fVar61 = *_fStack0000000000000098;
    fVar67 = fVar43 * (fVar57 / (float)iVar10) * fVar50 * fVar45 * fVar64 * fVar67;
    fVar57 = *in_stack_00000088;
    if ((in_stack_000017bc == 10) && (*(int *)((long)unaff_x19 + 0x48c) != (int)unaff_x19[0x92])) {
      if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x38), lVar27 == 0))
      goto LAB_02491464;
      uVar38 = *(int *)((long)unaff_x19 + 0x48c) - 1;
      if (*(uint *)(lVar27 + 0x18) <= uVar38)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (unaff_x19[0xca] == 0) goto LAB_02491464;
      fVar45 = *(float *)(lVar27 + (long)(int)uVar38 * (long)iVar37 + 0x60);
      iVar10 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
      if (unaff_x19[0xca] == 0) goto LAB_02491464;
      fVar43 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
      lVar27 = unaff_x19[0xc9];
      fVar50 = fStack0000000000000084;
      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
        fVar50 = 1.0;
      }
      if ((lVar27 == 0) || (*(long *)(lVar27 + 0x20) == 0)) goto LAB_02491464;
      fVar64 = *(float *)((long)unaff_x19 + 0x3fc);
      fVar44 = *(float *)(lVar27 + 0x2c);
      fVar67 = (float)FUN_026fd668(*(long *)(lVar27 + 0x20),0);
      if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x50), lVar27 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar27 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar27 = lVar27 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      fVar61 = *(float *)(lVar27 + 0x60);
      fVar57 = *(float *)(lVar27 + 100);
      fVar67 = fVar64 * (fVar45 / (float)iVar10) * fVar43 * fVar50 * fVar44 * fVar67;
    }
    fVar64 = *(float *)(unaff_x19 + 0x9a);
    fVar50 = *(float *)(unaff_x19 + 0x96);
    fVar44 = *(float *)((long)unaff_x19 + 0x4c4);
    fVar45 = 0.0;
    fVar43 = 0.0;
    if ((0.0 < fVar64) && (fVar43 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
      fVar43 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
    }
    fVar46 = *(float *)(unaff_x19 + 199);
    if ((char)unaff_x19[0x1d] == '\0') {
      if ((unaff_x19[0xc9] == 0) || (lVar27 = *(long *)(unaff_x19[0xc9] + 0x20), lVar27 == 0))
      goto LAB_02491464;
      FUN_026fd62c(&stack0x00000880,lVar27,0);
      unaff_x28[0x1cd] = unaff_x28[1];
      unaff_x28[0x1cc] = *unaff_x28;
      fVar45 = (float)FUN_026fd474(&stack0x000016e0,0);
    }
    puVar7 = System_Threading_Mutex_TypeInfo;
    fVar65 = *(float *)(unaff_x19 + 0x6b);
    fVar57 = (fStack0000000000000090 - fVar61) - fVar57;
    bVar8 = true;
    if ((fVar65 <= fVar57) && (bVar8 = false, !NAN(fVar65))) {
      bVar8 = fVar65 == -1.0;
    }
    if (!bVar8) {
      fVar57 = fVar65;
    }
    unaff_d13 = in_stack_00000118 & 0xffffffff;
    fVar61 = _DAT_0294c6e8;
    if (unaff_w26 == 0) {
      fVar61 = 1.0;
    }
    if (((fVar50 - (fVar44 - fVar64)) + fVar43 < in_stack_000000a0) &&
       (ABS(fVar46) + fVar67 * fVar45 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) <
        fVar61 * fVar57)) {
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_024d69d4();
      lVar27 = *(long *)(*(long *)puVar7 + 0xb8);
      memcpy(&stack0x00000508,(void *)(lVar27 + 0x788),0x378);
      FUN_013b86dc(lVar27 + 0x11f0,&stack0x00000508,
                   *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__);
    }
  }
  fVar57 = 1.0;
  lVar27 = *in_stack_00000150;
  if ((lVar27 == 0) || (lVar24 = *(long *)(lVar27 + 0x38), lVar24 == 0)) goto LAB_02491464;
  if (*(uint *)(lVar24 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  uVar38 = *(uint *)(unaff_x19 + 0x94);
  lVar24 = lVar24 + (int)*in_stack_00000148 * unaff_x21;
  *(uint *)(lVar24 + 100) = uVar38;
  *(int *)(lVar24 + 0x68) = (int)unaff_x19[0x95];
  if (((unaff_w20 & 1) == 0) &&
     ((0xd < in_stack_000017bc || ((1 << (ulong)(in_stack_000017bc & 0x1f) & 0x2c00U) == 0)))) {
    lVar27 = *(long *)(lVar27 + 0x50);
    if (lVar27 == 0) goto LAB_02491464;
LAB_0248d42c:
    if (*(uint *)(lVar27 + 0x18) <= uVar38)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(int *)(lVar27 + (long)(int)uVar38 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
  }
  else {
    lVar27 = *(long *)(lVar27 + 0x50);
    if (lVar27 == 0) goto LAB_02491464;
    if (*(uint *)(lVar27 + 0x18) <= uVar38)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    if (*(int *)(lVar27 + (long)(int)uVar38 * 0x5c + 0x24) == 1) goto LAB_0248d42c;
  }
  fVar45 = (float)unaff_d13;
  if (in_stack_000017bc == 9) {
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar57 = (float)FUN_026fd208(*unaff_x27 + 0x50,0);
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar43 = *(float *)(unaff_x19 + 199);
    fVar50 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x27 + 0x1b9));
    fVar57 = fVar45 * fVar57 * fVar50;
    fVar67 = fVar57 * (float)(int)(fVar43 / fVar57);
    param_2 = (ulong)(uint)fVar67;
    if (fVar67 <= fVar43) {
      fVar67 = fVar43 + fVar57;
    }
LAB_0248d614:
    *(float *)(unaff_x19 + 199) = fVar67;
  }
  else if (*(float *)(unaff_x19 + 0x55) == 0.0) {
    if ((char)unaff_x19[0x1d] == '\0') {
      if (*(char *)((long)unaff_x19 + 0x46c) != '\0') {
        fVar57 = (float)thunk_FUN_026935f0(_uStack0000000000000060,0);
      }
      fVar67 = *(float *)(unaff_x19 + 199);
      fVar43 = (float)FUN_026fd474(&stack0x00001770,0);
      if (unaff_x19[0x1f] == 0) goto LAB_02491464;
      fVar50 = 1.0 - *(float *)((long)unaff_x19 + 0x2cc);
      fVar67 = fVar67 + fVar50 * (*(float *)((long)unaff_x19 + 0x2a4) +
                                 fVar45 * (in_stack_000000b0 + fVar57 * fVar43) +
                                 fStack00000000000000c8 *
                                 (in_stack_000000c0._4_4_ +
                                 fStack00000000000000cc + *(float *)(unaff_x19[0x1f] + 0x1ac)));
      *(float *)(unaff_x19 + 199) = fVar67;
      goto joined_r0x0248d568;
    }
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar67 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (*(float *)((long)unaff_x19 + 0x2a4) +
             fVar45 * in_stack_000000b0 +
             fStack00000000000000c8 *
             (in_stack_000000c0._4_4_ + fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac)));
    param_2 = (ulong)(uint)fVar67;
    fVar67 = *(float *)(unaff_x19 + 199) - fVar67;
    *(float *)(unaff_x19 + 199) = fVar67;
    if ((unaff_w29 != 0) || (in_stack_000017bc == 0x200b)) {
      fVar57 = fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
      param_2 = (ulong)(uint)fVar57;
      fVar67 = fVar67 - fVar57;
      goto LAB_0248d614;
    }
  }
  else {
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar50 = *(float *)(unaff_x19 + 199);
    fVar67 = fVar50 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                      (*(float *)((long)unaff_x19 + 0x2a4) +
                      (*(float *)(unaff_x19 + 0x55) - fStack0000000000000080) +
                      fStack00000000000000c8 *
                      (fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac)));
    *(float *)(unaff_x19 + 199) = fVar67;
joined_r0x0248d568:
    if ((unaff_w29 != 0) || (param_2 = (ulong)(uint)fVar50, in_stack_000017bc == 0x200b)) {
      fVar57 = fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
      param_2 = (ulong)(uint)fVar57;
      fVar67 = fVar67 + fVar57;
      goto LAB_0248d614;
    }
  }
  lVar27 = *in_stack_00000150;
  if ((lVar27 == 0) || (lVar24 = *(long *)(lVar27 + 0x38), lVar24 == 0)) goto LAB_02491464;
  uVar38 = *in_stack_00000148;
  uVar29 = (uint)*(undefined8 *)(lVar24 + 0x18);
  if (uVar29 <= uVar38)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar24 + (int)uVar38 * unaff_x21 + 0x144) = fVar67;
  uVar32 = in_stack_000017bc;
  if ((int)in_stack_000017bc < 0xd) {
    if ((in_stack_000017bc - 10 < 2) || (in_stack_000017bc == 3)) goto LAB_0248d6b8;
LAB_0248d69c:
    if (((unaff_w20 & in_stack_000017bc == 0x2d) != 0) || ((float)uVar38 == in_stack_00000078._4_4_)
       ) goto LAB_0248d6b8;
  }
  else {
    if (1 < in_stack_000017bc - 0x2028) {
      if (in_stack_000017bc != 0xd) goto LAB_0248d69c;
      param_2 = 0;
      *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
      if ((float)uVar38 != in_stack_00000078._4_4_) goto LAB_0248dc08;
    }
LAB_0248d6b8:
    if (0.0 < *(float *)(unaff_x19 + 0x9a)) {
      fVar57 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
      if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (((fStack000000000000004c < ABS(fVar57)) && (*(char *)((long)unaff_x19 + 700) == '\0')) &&
         (*(char *)((long)unaff_x19 + 0x334) == '\0')) {
        FUN_024d6ca8(fVar57);
        *(float *)((long)unaff_x19 + 0x4bc) = *(float *)((long)unaff_x19 + 0x4bc) - fVar57;
        *(float *)(unaff_x19 + 0x9a) = fVar57 + *(float *)(unaff_x19 + 0x9a);
        puVar7 = System_Threading_Mutex_TypeInfo;
        lVar27 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar27 = *(long *)puVar7;
        }
        lVar24 = *(long *)(lVar27 + 0xb8);
        if (*(int *)(lVar24 + 0x7ac) == (int)unaff_x19[0x94]) {
          if (*(int *)(lVar27 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar24 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          FUN_013b8de4(lVar24 + 0x11f0,&stack0x00000880,
                       *(undefined8 *)
                        Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                      );
          lVar27 = *(long *)System_Threading_Mutex_TypeInfo;
          memcpy((void *)(*(long *)(lVar27 + 0xb8) + 0x788),&stack0x00000880,0x378);
          lVar27 = *(long *)(lVar27 + 0xb8);
          *(float *)(lVar27 + 0x7bc) = fVar57 + *(float *)(lVar27 + 0x7bc);
          *(float *)(lVar27 + 0x800) = fVar57 + *(float *)(lVar27 + 0x800);
          memcpy(&stack0x00000190,(void *)(lVar27 + 0x788),0x378);
          FUN_013b86dc(lVar27 + 0x11f0,&stack0x00000190,
                       *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__);
        }
      }
    }
    fVar67 = *(float *)(unaff_x19 + 0x9a);
    *(undefined1 *)((long)unaff_x19 + 0x334) = 0;
    fVar50 = *(float *)((long)unaff_x19 + 0x4c4) - fVar67;
    fVar57 = *(float *)((long)unaff_x19 + 0x4bc);
    if (fVar50 <= *(float *)((long)unaff_x19 + 0x4bc)) {
      fVar57 = fVar50;
    }
    *(float *)((long)unaff_x19 + 0x4bc) = fVar57;
    fVar43 = *(float *)(unaff_x19 + 0x98);
    if (*(char *)((long)unaff_x28 + 0xf34) == '\0') {
      in_stack_000017b8 = fVar57;
    }
    if ((*(char *)((long)unaff_x19 + 0x32c) != '\0') &&
       (((int)unaff_x19[100] <= *(int *)((long)unaff_x19 + 0x48c) ||
        ((int)unaff_x19[0x65] <= (int)unaff_x19[0x94])))) {
      *(undefined1 *)((long)unaff_x28 + 0xf34) = 1;
    }
    lVar27 = *in_stack_00000150;
    if ((lVar27 == 0) || (lVar24 = *(long *)(lVar27 + 0x50), lVar24 == 0)) goto LAB_02491464;
    uVar38 = *(uint *)(unaff_x19 + 0x94);
    if (*(uint *)(lVar24 + 0x18) <= uVar38)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar40 = lVar24 + (long)(int)uVar38 * 0x5c;
    *(int *)(lVar40 + 0x34) = (int)unaff_x19[0x92];
    iVar10 = (int)unaff_x19[0x92];
    if ((int)unaff_x19[0x92] <= *(int *)((long)unaff_x19 + 0x494)) {
      iVar10 = *(int *)((long)unaff_x19 + 0x494);
    }
    *(int *)((long)unaff_x19 + 0x494) = iVar10;
    *(int *)(lVar40 + 0x38) = iVar10;
    *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x48c);
    *(undefined4 *)(lVar40 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x48c);
    iVar10 = *(int *)((long)unaff_x19 + 0x494);
    if (*(int *)((long)unaff_x19 + 0x494) <= *(int *)((long)unaff_x19 + 0x49c)) {
      iVar10 = *(int *)((long)unaff_x19 + 0x49c);
    }
    *(int *)((long)unaff_x19 + 0x49c) = iVar10;
    *(int *)(lVar40 + 0x40) = iVar10;
    *(int *)(lVar40 + 0x24) = (*(int *)(lVar40 + 0x3c) - *(int *)(lVar40 + 0x34)) + 1;
    *(undefined4 *)(lVar40 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
    lVar27 = *(long *)(lVar27 + 0x38);
    if (lVar27 == 0) goto LAB_02491464;
    if (*(uint *)(lVar27 + 0x18) <= *(uint *)((long)unaff_x19 + 0x494))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    uVar68 = *(undefined4 *)(lVar27 + (int)*(uint *)((long)unaff_x19 + 0x494) * unaff_x21 + 0x11c);
    lVar24 = lVar24 + (long)(int)uVar38 * 0x5c;
    *(float *)(lVar24 + 0x70) = fVar50;
    *(undefined4 *)(lVar24 + 0x6c) = uVar68;
    lVar27 = *in_stack_00000150;
    if ((lVar27 == 0) || (lVar24 = *(long *)(lVar27 + 0x50), lVar24 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar24 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar27 = *(long *)(lVar27 + 0x38);
    if (lVar27 == 0) goto LAB_02491464;
    if (*(uint *)(lVar27 + 0x18) <= *(uint *)((long)unaff_x19 + 0x49c))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    fVar43 = fVar43 - fVar67;
    lVar24 = lVar24 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
    *(undefined4 *)(lVar24 + 0x74) =
         *(undefined4 *)(lVar27 + (int)*(uint *)((long)unaff_x19 + 0x49c) * unaff_x21 + 0x128);
    *(float *)(lVar24 + 0x78) = fVar43;
    lVar27 = *in_stack_00000150;
    if ((lVar27 == 0) || (lVar40 = *(long *)(lVar27 + 0x50), lVar40 == 0)) goto LAB_02491464;
    lVar18 = (long)(int)*(uint *)(unaff_x19 + 0x94);
    if (*(uint *)(lVar40 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar24 = lVar40 + lVar18 * 0x5c;
    *(float *)(lVar24 + 0x44) = *(float *)(lVar24 + 0x74) - fVar45 * in_stack_00000130._4_4_;
    *(float *)(lVar24 + 0x5c) = in_stack_000000d8._4_4_;
    if (*(int *)(lVar24 + 0x24) == 1) {
      *(int *)(lVar40 + lVar18 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
    }
    if ((*unaff_x27 == 0) || (lVar24 = *(long *)(lVar27 + 0x38), lVar24 == 0)) goto LAB_02491464;
    lVar35 = (long)(int)*(uint *)((long)unaff_x19 + 0x49c);
    uVar29 = (uint)*(undefined8 *)(lVar24 + 0x18);
    if (uVar29 <= *(uint *)((long)unaff_x19 + 0x49c))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    if ((*(char *)(lVar24 + lVar35 * unaff_x21 + 0x194) == '\0') &&
       (lVar35 = (long)(int)*(uint *)(unaff_x19 + 0x93), uVar29 <= *(uint *)(unaff_x19 + 0x93)))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    fVar45 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (fStack00000000000000c8 *
              (in_stack_000000c0._4_4_ + fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac)) -
             *(float *)((long)unaff_x19 + 0x2a4));
    fVar57 = -fVar45;
    if ((char)unaff_x19[0x1d] != '\0') {
      fVar57 = fVar45;
    }
    lVar40 = lVar40 + lVar18 * 0x5c;
    *(float *)(lVar40 + 0x58) = *(float *)(lVar24 + lVar35 * unaff_x21 + 0x144) + fVar57;
    fVar57 = *(float *)(unaff_x19 + 0x9a);
    *(float *)(lVar40 + 0x48) = fStack0000000000000050 + (fVar43 - fVar50);
    *(float *)(lVar40 + 0x4c) = fVar43;
    param_2 = (ulong)(uint)(0.0 - fVar57);
    *(float *)(lVar40 + 0x50) = 0.0 - fVar57;
    *(float *)(lVar40 + 0x54) = fVar50;
    plVar25 = (long *)System_Threading_Mutex_TypeInfo;
    if ((int)in_stack_000017bc < 0x2d) {
      if (in_stack_000017bc - 10 < 2) {
LAB_0248dad8:
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar42 = (long *)StringLiteral_302;
        FUN_024d69d4();
        lVar27 = unaff_x19[0x6c];
        *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
        iVar10 = (int)unaff_x19[0x94] + 1;
        *(int *)(unaff_x19 + 0x94) = iVar10;
        *(int *)(unaff_x19 + 0x92) = *(int *)((long)unaff_x19 + 0x48c) + 1;
        if ((lVar27 == 0) || (*(long *)(lVar27 + 0x50) == 0)) goto LAB_02491464;
        if (*(int *)(*(long *)(lVar27 + 0x50) + 0x18) <= iVar10) {
          FUN_024d6e60();
          lVar27 = unaff_x19[0x6c];
          if (lVar27 == 0) goto LAB_02491464;
        }
        lVar27 = *(long *)(lVar27 + 0x38);
        if (lVar27 == 0) goto LAB_02491464;
        if (*(uint *)(lVar27 + 0x18) <= *in_stack_00000148)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fVar57 = *(float *)(lVar27 + (int)*in_stack_00000148 * unaff_x21 + 0x154);
        if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
          fVar45 = 0.0;
          if ((in_stack_000017bc == 0x2029) || (in_stack_000017bc == 10)) {
            fVar45 = *(float *)((long)unaff_x19 + 0x2c4);
          }
          uVar20 = 0;
          fVar45 = *(float *)(unaff_x19 + 0x9a) +
                   fVar57 + (0.0 - *(float *)((long)unaff_x19 + 0x4c4)) +
                   fStack0000000000000054 *
                   (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4)) +
                   fStack00000000000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar45);
        }
        else {
          if ((in_stack_000017bc == 0x2029) || (fVar45 = 0.0, in_stack_000017bc == 10)) {
            fVar45 = *(float *)((long)unaff_x19 + 0x2c4);
          }
          uVar20 = 1;
          fVar45 = *(float *)(unaff_x19 + 0x9a) +
                   *(float *)(unaff_x19 + 0x57) +
                   fStack00000000000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar45);
        }
        *(float *)(unaff_x19 + 0x9a) = fVar45;
        *(undefined1 *)((long)unaff_x19 + 700) = uVar20;
        lVar27 = *plVar25;
        if (*(int *)(lVar27 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar27 = *plVar25;
        }
        uVar15 = *(undefined8 *)(*(long *)(lVar27 + 0xb8) + 0x15a8);
        *(float *)(unaff_x19 + 0x99) = fVar57;
        param_2 = NEON_rev64(uVar15,4);
        unaff_x19[0x98] = param_2;
        *(float *)(unaff_x19 + 199) =
             *(float *)(unaff_x19 + 0x80) + 0.0 + *(float *)((long)unaff_x19 + 0x404);
        FUN_024d69d4();
        FUN_024d69d4();
        *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
        fStack0000000000000058 = 1.4013e-45;
        bStack000000000000005c = 1;
        goto LAB_0248ab98;
      }
      if (in_stack_000017bc == 3) {
        if (unaff_x19[0x8e] == 0) goto LAB_02491464;
        uVar12 = (uint)*(undefined8 *)(unaff_x19[0x8e] + 0x18);
        uVar32 = 3;
      }
    }
    else if ((in_stack_000017bc - 0x2028 < 2) || (in_stack_000017bc == 0x2d)) goto LAB_0248dad8;
  }
LAB_0248dc08:
  uVar38 = *in_stack_00000148;
  if (uVar29 <= uVar38)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if (*(char *)(lVar24 + (int)uVar38 * unaff_x21 + 0x194) != '\0') {
    lVar24 = lVar24 + (int)uVar38 * unaff_x21;
    uVar52 = *(ulong *)(lVar24 + 0x11c);
    uVar17 = *(ulong *)(in_stack_00000070 + 0x230);
    *(ulong *)(in_stack_00000070 + 0x230) =
         uVar52 ^ (uVar52 ^ uVar17) &
                  CONCAT44(-(uint)((float)(uVar17 >> 0x20) < (float)(uVar52 >> 0x20)),
                           -(uint)((float)uVar17 < (float)uVar52));
    uVar17 = *(ulong *)(in_stack_00000070 + 0x238);
    param_2 = *(ulong *)(lVar24 + 0x128);
    *(ulong *)(in_stack_00000070 + 0x238) =
         param_2 ^ (param_2 ^ uVar17) &
                   CONCAT44(-(uint)((float)(param_2 >> 0x20) < (float)(uVar17 >> 0x20)),
                            -(uint)((float)param_2 < (float)uVar17));
  }
  if (((int)unaff_x19[0x5b] == 5) &&
     ((0xd < uVar32 || ((1 << (ulong)(uVar32 & 0x1f) & 0x2c00U) == 0)))) {
    lVar24 = *(long *)(lVar27 + 0x58);
    if (lVar24 == 0) goto LAB_02491464;
    iVar10 = (int)unaff_x19[0x95] + 1;
    if (*(int *)(lVar24 + 0x18) < iVar10) {
      if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01147c08((long *)(lVar27 + 0x58),iVar10,1,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerMove__);
      lVar27 = *in_stack_00000150;
      if (lVar27 == 0) goto LAB_02491464;
    }
    lVar24 = *(long *)(lVar27 + 0x58);
    if (lVar24 == 0) goto LAB_02491464;
    uVar29 = *(uint *)(unaff_x19 + 0x95);
    lVar40 = (long)(int)uVar29;
    uVar38 = *(uint *)(lVar24 + 0x18);
    if (uVar38 <= uVar29)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar18 = lVar24 + lVar40 * 0x14;
    fVar45 = *(float *)(lVar18 + 0x30);
    param_2 = (ulong)(uint)fVar45;
    *(undefined4 *)(lVar18 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
    fVar57 = *(float *)((long)unaff_x19 + 0x4bc);
    if (fVar45 <= *(float *)((long)unaff_x19 + 0x4bc)) {
      fVar57 = fVar45;
    }
    *(float *)(lVar18 + 0x30) = fVar57;
    uVar32 = *(uint *)((long)unaff_x19 + 0x48c);
    if (uVar32 == 0 && uVar29 == 0) {
      *(uint *)(lVar24 + lVar40 * 0x14 + 0x20) = uVar32;
    }
    else {
      uVar4 = uVar32 - 1;
      if (0 < (int)uVar32) {
        lVar27 = *(long *)(lVar27 + 0x38);
        if (lVar27 == 0) goto LAB_02491464;
        if (*(uint *)(lVar27 + 0x18) <= uVar4)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        if (uVar29 != *(uint *)(lVar27 + (long)(int)uVar4 * (long)iVar37 + 0x68)) {
          if (uVar38 <= uVar29 - 1)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          *(uint *)(lVar24 + 0x20 + (long)(int)(uVar29 - 1) * 0x14 + 4) = uVar4;
          *(uint *)(lVar24 + 0x20 + lVar40 * 0x14) = uVar32;
          goto LAB_0248dc84;
        }
      }
      if ((float)uVar32 == in_stack_00000078._4_4_) {
        *(float *)(lVar24 + lVar40 * 0x14 + 0x24) = in_stack_00000078._4_4_;
      }
    }
  }
LAB_0248dc84:
  plVar25 = (long *)System_Threading_Mutex_TypeInfo;
  if (((char)unaff_x19[0x5a] == '\0') &&
     ((6 < *(uint *)(unaff_x19 + 0x5b) ||
      ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5b) & 0x1f) & 0x4aU) == 0)))) goto LAB_0248e168;
  if ((unaff_w29 == 0) &&
     (((in_stack_000017bc != 0x2d && (in_stack_000017bc != 0x200b)) && (in_stack_000017bc != 0xad)))
     ) {
    if (*(char *)((long)unaff_x19 + 0x2d2) != '\0') goto LAB_0248ded4;
LAB_0248de4c:
    if (((((0x2bfd < in_stack_000017bc - 0xac01) && (0x1d < in_stack_000017bc - 0xa961)) &&
         (0xfd < in_stack_000017bc - 0x1101)) || (uVar17 = FUN_024e95f0(0), (uVar17 & 1) != 0)) &&
       ((((0xed < in_stack_000017bc - 0xff01 && (0x1d < in_stack_000017bc - 0xfe31)) &&
         (0x717d < in_stack_000017bc - 0x2e81)) && (0x1fd < in_stack_000017bc - 0xf901))))
    goto LAB_0248ded4;
    lVar27 = FUN_024e94b0(0);
    if ((lVar27 == 0) || (*(long *)(lVar27 + 0x10) == 0)) goto LAB_02491464;
    uVar17 = FUN_0129aa60(*(long *)(lVar27 + 0x10),&stack0x00000880,
                          *(undefined8 *)
                           System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                         );
    if ((int)in_stack_00000078._4_4_ <= (int)*in_stack_00000148) {
      in_stack_00000880 = in_stack_000017bc;
      if ((uVar17 & 1) == 0) {
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
      if (uVar11 != unaff_w24 || ((bStack000000000000005c ^ 0xff) & 1) != 0) goto LAB_0248e168;
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__get_invalidColorGradient;
    }
    lVar27 = FUN_024e94b0(0);
    if (((lVar27 == 0) || (*in_stack_00000150 == 0)) ||
       (lVar24 = *(long *)(*in_stack_00000150 + 0x38), lVar24 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar24 + 0x18) <= *in_stack_00000148 + 1)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    if (*(long *)(lVar27 + 0x18) == 0) goto LAB_02491464;
    in_stack_00000880 =
         (uint)*(ushort *)(lVar24 + (long)(int)(*in_stack_00000148 + 1) * (long)iVar37 + 0x20);
    uVar52 = FUN_0129aa60(*(long *)(lVar27 + 0x18),&stack0x00000880,
                          *(undefined8 *)
                           System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                         );
    if ((uVar17 & 1) != 0) goto LAB_0248e0dc;
    if ((uVar52 & 1) == 0) goto LAB_0248e1b0;
    plVar25 = (long *)System_Threading_Mutex_TypeInfo;
    if ((bStack000000000000005c & 1) == 0) {
      bStack000000000000005c = 0;
      goto LAB_0248e168;
    }
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
        *(undefined4 *)(*(long *)(*plVar25 + 0xb8) + 0xe78) = 0xffffffff;
        goto LAB_0248e168;
      }
      goto LAB_0248de4c;
    }
LAB_0248ded4:
    if ((bStack000000000000005c & 1) == 0) {
      bStack000000000000005c = 0;
      plVar25 = (long *)System_Threading_Mutex_TypeInfo;
      goto LAB_0248e168;
    }
    if (!(bool)(in_stack_000017bc == 0xad & (bVar5 ^ 1U))) {
UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__get_invalidColorGradient:
      plVar25 = (long *)System_Threading_Mutex_TypeInfo;
      if (unaff_w29 == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__get_smoothMovement;
    }
LAB_0248e100:
    plVar25 = (long *)System_Threading_Mutex_TypeInfo;
    if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_024d69d4();
  }
UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__get_smoothMovement:
  if (*(int *)(*plVar25 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_024d69d4();
  bStack000000000000005c = 1;
LAB_0248e168:
  if (*(int *)(*plVar25 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar42 = (long *)StringLiteral_302;
  FUN_024d69d4();
  *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
  goto LAB_0248ab98;
code_r0x0248ccb4:
  unaff_w25 = iVar10;
  if (*(int *)(lVar27 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  goto code_r0x0248ccd8;
LAB_0248ef74:
  uVar12 = uVar38 - 1;
  if (*(uint *)(lVar27 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*in_stack_00000150 == 0) || (lVar24 = *(long *)(*in_stack_00000150 + 0x50), lVar24 == 0))
  goto LAB_02491464;
  lVar18 = (long)(int)uVar12;
  lVar40 = lVar27 + lVar18 * 0x178;
  uVar29 = *(uint *)(lVar40 + 100);
  if (*(uint *)(lVar24 + 0x18) <= uVar29)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar33 = *(long *)(lVar40 + 0x38);
  uVar30 = (uint)*(ushort *)(lVar40 + 0x20);
  lVar35 = (long)(int)uVar29;
  lVar24 = lVar24 + lVar35 * 0x5c;
  uVar32 = *(uint *)(lVar24 + 0x3c);
  uVar4 = *(uint *)(lVar24 + 0x40);
  lVar40 = (long)(int)uVar4;
  iVar13 = *(int *)(lVar24 + 0x28);
  iVar14 = *(int *)(lVar24 + 0x2c);
  uVar41 = *(uint *)(lVar24 + 0x68);
  fVar47 = *(float *)(lVar24 + 0x5c);
  fVar62 = *(float *)(lVar24 + 0x60);
  iVar2 = *(int *)(lVar24 + 0x20);
  fVar61 = *(float *)(lVar24 + 0x4c);
  fVar44 = *(float *)(lVar24 + 0x54);
  fVar67 = *(float *)(lVar24 + 0x58);
  fVar65 = *(float *)(lVar24 + 0x6c);
  fVar46 = *(float *)(lVar24 + 0x70);
  fVar43 = *(float *)(lVar24 + 0x74);
  fVar64 = *(float *)(lVar24 + 0x78);
  fVar58 = fVar47 + fVar62;
  if ((int)uVar41 < 9) {
    switch(uVar41) {
    case 1:
      if ((char)unaff_x19[0x1d] == '\0') {
        in_stack_000000c0._4_4_ = fVar62 + 0.0;
      }
      else {
        in_stack_000000c0._4_4_ = 0.0 - fVar67;
      }
      break;
    case 2:
LAB_0248f124:
      in_stack_000000c0._4_4_ = (fVar62 + fVar47 * 0.5) - fVar67 * 0.5;
      break;
    default:
      goto switchD_0248f070_caseD_3;
    case 4:
      in_stack_000000c0._4_4_ = fVar58 - fVar67;
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
      if (*(uint *)(lVar27 + 0x18) <= uVar32)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar3 = *(undefined2 *)(lVar27 + (long)(int)uVar32 * 0x178 + 0x20);
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar17 = FUN_016f9f84(uVar3,0);
      if ((uVar17 & 1) == 0) {
        bVar1 = (int)uVar29 < (int)unaff_x19[0x94];
      }
      else {
        bVar1 = false;
      }
      if ((fVar67 <= fVar47) && (!bVar1 && (uVar41 >> 4 & 1) == 0)) {
        in_stack_000000c0._4_4_ = fVar62;
        if ((char)unaff_x19[0x1d] != '\0') {
          in_stack_000000c0._4_4_ = fVar58;
        }
        goto LAB_0248f194;
      }
      if (((uVar38 == 1) || (uVar29 != uVar11)) || (uVar12 == *(uint *)((long)unaff_x19 + 0x31c))) {
        in_stack_000000c0._4_4_ = fVar62;
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
        cVar21 = (char)unaff_x19[0x1d];
        fVar62 = -fVar67;
        if (cVar21 != '\0') {
          fVar62 = fVar67;
        }
        if (*(uint *)(lVar27 + 0x18) <= uVar32)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fVar67 = 1.0;
        iVar14 = (int)*(char *)(lVar27 + (long)(int)uVar32 * 0x178 + 0x194) +
                 (-iVar2 - ((uint)fStack0000000000000024 & 1)) + iVar14 + -1;
        if (0 < iVar14) {
          fVar67 = *(float *)((long)unaff_x19 + 0x2d4);
        }
        if (iVar14 < 1) {
          iVar14 = 1;
        }
        if (uVar30 == 9) {
LAB_02490fe0:
          fVar67 = 1.0 - fVar67;
        }
        else {
          if (uVar30 != 0xa0) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar17 = FUN_016fa418(uVar30,0);
            cVar21 = (char)unaff_x19[0x1d];
            if ((uVar17 & 1) != 0) goto LAB_02490fe0;
          }
          iVar14 = (iVar2 - (~(uint)fStack0000000000000024 & 1)) + iVar13;
        }
        fVar67 = ((fVar47 + fVar62) * fVar67) / (float)iVar14;
        if (cVar21 == '\0') {
          in_stack_000000c0._4_4_ = in_stack_000000c0._4_4_ + fVar67;
          in_stack_000000b8 =
               CONCAT44((float)((ulong)in_stack_000000b8 >> 0x20) + 0.0,
                        (float)in_stack_000000b8 + 0.0);
        }
        else {
          in_stack_000000c0._4_4_ = in_stack_000000c0._4_4_ - fVar67;
        }
      }
    }
  }
  else if (uVar41 == 0x20) {
    fVar67 = fVar65 + fVar43;
    goto LAB_0248f124;
  }
switchD_0248f070_caseD_3:
  uVar41 = (uint)*(undefined8 *)(lVar27 + 0x18);
  if (uVar41 <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar24 = lVar27 + lVar18 * 0x178;
  fVar62 = fStack0000000000000090 + in_stack_000000c0._4_4_;
  fVar67 = SUB84(in_stack_00000088,0) + (float)in_stack_000000b8;
  fVar47 = (float)((ulong)in_stack_00000088 >> 0x20) + (float)((ulong)in_stack_000000b8 >> 0x20);
  plVar42 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(char *)(lVar24 + 0x194) == '\0') goto LAB_0248fabc;
  iVar13 = *(int *)(lVar27 + lVar18 * 0x178 + 0x2c);
  if (iVar13 != 0) goto LAB_0248f808;
  fVar50 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)uVar29,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
  case 0:
    lVar23 = lVar27 + lVar18 * 0x178;
    *(undefined4 *)(lVar23 + 0x84) = 0;
    *(undefined4 *)(lVar23 + 0xac) = 0;
    *(undefined4 *)(lVar23 + 0xd4) = 0x3f800000;
    fVar50 = 1.0;
    break;
  case 1:
    fVar64 = *(float *)(lVar27 + lVar18 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
      lVar23 = lVar27 + lVar18 * 0x178;
      fVar43 = (in_stack_000000c0._4_4_ + fVar64) - *(float *)(in_stack_00000070 + 0x230);
      fVar64 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
      goto LAB_0248f2dc;
    }
    lVar23 = lVar27 + lVar18 * 0x178;
    fVar43 = fVar43 - fVar65;
    *(float *)(lVar23 + 0x84) = fVar50 + (fVar64 - fVar65) / fVar43;
    *(float *)(lVar23 + 0xac) = fVar50 + (*(float *)(lVar23 + 0x98) - fVar65) / fVar43;
    *(float *)(lVar23 + 0xd4) = fVar50 + (*(float *)(lVar23 + 0xc0) - fVar65) / fVar43;
    fVar50 = fVar50 + (*(float *)(lVar23 + 0xe8) - fVar65) / fVar43;
    break;
  case 2:
    lVar23 = lVar27 + lVar18 * 0x178;
    fVar64 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
    fVar43 = (in_stack_000000c0._4_4_ + *(float *)(lVar23 + 0x70)) -
             *(float *)(in_stack_00000070 + 0x230);
LAB_0248f2dc:
    *(float *)(lVar23 + 0x84) = fVar50 + fVar43 / fVar64;
    *(float *)(lVar23 + 0xac) =
         fVar50 + ((in_stack_000000c0._4_4_ + *(float *)(lVar23 + 0x98)) -
                  *(float *)(in_stack_00000070 + 0x230)) /
                  (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
    *(float *)(lVar23 + 0xd4) =
         fVar50 + ((in_stack_000000c0._4_4_ + *(float *)(lVar23 + 0xc0)) -
                  *(float *)(in_stack_00000070 + 0x230)) /
                  (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
    fVar50 = fVar50 + ((in_stack_000000c0._4_4_ + *(float *)(lVar23 + 0xe8)) -
                      *(float *)(in_stack_00000070 + 0x230)) /
                      (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x61]) {
    case 0:
      lVar23 = lVar27 + lVar18 * 0x178;
      *(undefined4 *)(lVar23 + 0x88) = 0;
      *(undefined4 *)(lVar23 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar23 + 0xd8) = 0;
      *(undefined4 *)(lVar23 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar23 = lVar27 + lVar18 * 0x178;
      fVar64 = fVar64 - fVar46;
      fVar43 = fVar50 + (*(float *)(lVar23 + 0x74) - fVar46) / fVar64;
      fVar64 = fVar50 + (*(float *)(lVar23 + 0x9c) - fVar46) / fVar64;
      *(float *)(lVar23 + 0x88) = fVar43;
      *(float *)(lVar23 + 0xb0) = fVar64;
      *(float *)(lVar23 + 0xd8) = fVar43;
      *(float *)(lVar23 + 0x100) = fVar64;
      break;
    case 2:
      lVar23 = lVar27 + lVar18 * 0x178;
      fVar43 = fVar50 + (*(float *)(lVar23 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                        (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
      *(float *)(lVar23 + 0x88) = fVar43;
      fVar64 = *(float *)(unaff_x19 + 0x9b);
      fVar46 = *(float *)(unaff_x19 + 0x9c);
      *(float *)(lVar23 + 0xd8) = fVar43;
      fVar43 = fVar50 + (*(float *)(lVar23 + 0x9c) - fVar64) / (fVar46 - fVar64);
      *(float *)(lVar23 + 0xb0) = fVar43;
      *(float *)(lVar23 + 0x100) = fVar43;
      break;
    case 3:
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
      uVar41 = (uint)*(undefined8 *)(lVar27 + 0x18);
    }
    if (uVar41 <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar23 = lVar27 + lVar18 * 0x178;
    fVar43 = *(float *)(lVar23 + 0x15c);
    fVar64 = (1.0 - (*(float *)(lVar23 + 0x88) + *(float *)(lVar23 + 0xb0)) * fVar43) * 0.5;
    fVar46 = fVar50 + *(float *)(lVar23 + 0x88) * fVar43 + fVar64;
    fVar50 = fVar50 + fVar64 + *(float *)(lVar23 + 0xb0) * fVar43;
    *(float *)(lVar23 + 0x84) = fVar46;
    *(float *)(lVar23 + 0xac) = fVar46;
    *(float *)(lVar23 + 0xd4) = fVar50;
    break;
  default:
    goto switchD_0248f240_default;
  }
  *(float *)(lVar27 + lVar18 * 0x178 + 0xfc) = fVar50;
switchD_0248f240_default:
  switch((int)unaff_x19[0x61]) {
  case 0:
    if (uVar41 <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar23 = lVar27 + lVar18 * 0x178;
    *(undefined4 *)(lVar23 + 0x88) = 0;
    *(undefined4 *)(lVar23 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar23 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar23 + 0x100) = 0;
    break;
  case 1:
    if (uVar12 < uVar41) {
      lVar23 = lVar27 + lVar18 * 0x178;
      fVar61 = fVar61 - fVar44;
      fVar50 = (*(float *)(lVar23 + 0x74) - fVar44) / fVar61;
      fVar61 = (*(float *)(lVar23 + 0x9c) - fVar44) / fVar61;
      *(float *)(lVar23 + 0x88) = fVar50;
      goto LAB_0248f644;
    }
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  case 2:
    if (uVar41 <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar23 = lVar27 + lVar18 * 0x178;
    fVar50 = (*(float *)(lVar23 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
             (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
    *(float *)(lVar23 + 0x88) = fVar50;
    fVar61 = (*(float *)(lVar23 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
             (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
LAB_0248f644:
    *(float *)(lVar23 + 0xb0) = fVar61;
    *(float *)(lVar23 + 0xd8) = fVar61;
    *(float *)(lVar23 + 0x100) = fVar50;
    break;
  case 3:
    if (uVar41 <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar23 = lVar27 + lVar18 * 0x178;
    fVar61 = *(float *)(lVar23 + 0x15c);
    fVar43 = (1.0 - (*(float *)(lVar23 + 0x84) + *(float *)(lVar23 + 0xd4)) / fVar61) * 0.5;
    fVar50 = *(float *)(lVar23 + 0x84) / fVar61 + fVar43;
    fVar43 = fVar43 + *(float *)(lVar23 + 0xd4) / fVar61;
    *(float *)(lVar23 + 0x88) = fVar50;
    *(float *)(lVar23 + 0xb0) = fVar43;
    *(float *)(lVar23 + 0x100) = fVar50;
    *(float *)(lVar23 + 0xd8) = fVar43;
  }
  if (uVar41 <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar23 = lVar27 + lVar18 * 0x178;
  fVar50 = ABS(fVar57) * *(float *)(lVar23 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
  if ((*(char *)(lVar23 + 0x5c) == '\0') && ((*(byte *)(lVar27 + lVar18 * 0x178 + 400) & 1) != 0)) {
    fVar50 = -fVar50;
  }
  lVar23 = lVar27 + lVar18 * 0x178;
  fVar61 = *(float *)(lVar23 + 0x88);
  fVar64 = *(float *)(lVar23 + 0x84);
  fVar43 = -2.1474836e+09;
  if (fVar64 != INFINITY) {
    fVar43 = (float)(int)fVar64;
  }
  fVar46 = *(float *)(lVar23 + 0xd4);
  fVar65 = *(float *)(lVar23 + 0xd8);
  fVar44 = -2.1474836e+09;
  if (fVar61 != INFINITY) {
    fVar44 = (float)(int)fVar61;
  }
  uVar68 = FUN_024e0374(fVar64 - fVar43,fVar61 - fVar44);
  *(undefined4 *)(lVar23 + 0x84) = uVar68;
  if (*(uint *)(lVar27 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  fVar65 = fVar65 - fVar44;
  *(float *)(lVar23 + 0x88) = fVar50;
  uVar68 = FUN_024e0374(fVar64 - fVar43,fVar65);
  *(undefined4 *)(lVar27 + lVar18 * 0x178 + 0xac) = uVar68;
  if (*(uint *)(lVar27 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  fVar46 = fVar46 - fVar43;
  *(float *)(lVar27 + lVar18 * 0x178 + 0xb0) = fVar50;
  fVar43 = (float)FUN_024e0374(fVar46,fVar65);
  *(float *)(lVar23 + 0xd4) = fVar43;
  if (*(uint *)(lVar27 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar23 + 0xd8) = fVar50;
  uVar68 = FUN_024e0374(fVar46,fVar61 - fVar44);
  *(undefined4 *)(lVar27 + lVar18 * 0x178 + 0xfc) = uVar68;
  uVar41 = (uint)*(undefined8 *)(lVar27 + 0x18);
  if (uVar41 <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar27 + lVar18 * 0x178 + 0x100) = fVar50;
LAB_0248f808:
  if (((int)uVar12 < (int)unaff_x19[100]) &&
     (iStack00000000000000a4 < *(int *)((long)unaff_x19 + 0x324))) {
    if (((int)uVar29 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] != 5)) {
      if (uVar41 <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar24 = lVar27 + lVar18 * 0x178;
      *(ulong *)(lVar24 + 0x70) =
           CONCAT44(fVar67 + (float)((ulong)*(undefined8 *)(lVar24 + 0x70) >> 0x20),
                    fVar62 + (float)*(undefined8 *)(lVar24 + 0x70));
      *(float *)(lVar24 + 0x78) = fVar47 + *(float *)(lVar24 + 0x78);
      plVar42 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      if (*(uint *)(lVar27 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar24 = lVar27 + lVar18 * 0x178;
      *(ulong *)(lVar24 + 0x98) =
           CONCAT44(fVar67 + (float)((ulong)*(undefined8 *)(lVar24 + 0x98) >> 0x20),
                    fVar62 + (float)*(undefined8 *)(lVar24 + 0x98));
      *(float *)(lVar24 + 0xa0) = fVar47 + *(float *)(lVar24 + 0xa0);
      uVar41 = *(uint *)(lVar27 + 0x18);
LAB_0248fa4c:
      if (uVar41 <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar24 = lVar27 + lVar18 * 0x178;
      *(ulong *)(lVar24 + 0xc0) =
           CONCAT44(fVar67 + (float)((ulong)*(undefined8 *)(lVar24 + 0xc0) >> 0x20),
                    fVar62 + (float)*(undefined8 *)(lVar24 + 0xc0));
      *(float *)(lVar24 + 200) = fVar47 + *(float *)(lVar24 + 200);
      if (*(uint *)(lVar27 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar24 = lVar27 + lVar18 * 0x178;
      *(ulong *)(lVar24 + 0xe8) =
           CONCAT44(fVar67 + (float)((ulong)*(undefined8 *)(lVar24 + 0xe8) >> 0x20),
                    fVar62 + (float)*(undefined8 *)(lVar24 + 0xe8));
      *(float *)(lVar24 + 0xf0) = fVar47 + *(float *)(lVar24 + 0xf0);
      if (iVar13 != 0) goto LAB_0248f9d0;
LAB_0248fa9c:
      pcVar28 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0248faa8:
      (*pcVar28)();
      goto LAB_0248fabc;
    }
    if (((int)uVar29 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] == 5)) {
      if (uVar12 < uVar41) {
        if (*(uint *)(lVar27 + lVar18 * 0x178 + 0x68) != in_stack_00000030) goto LAB_0248f8d8;
        lVar24 = lVar27 + lVar18 * 0x178;
        *(ulong *)(lVar24 + 0x70) =
             CONCAT44(fVar67 + (float)((ulong)*(undefined8 *)(lVar24 + 0x70) >> 0x20),
                      fVar62 + (float)*(undefined8 *)(lVar24 + 0x70));
        *(float *)(lVar24 + 0x78) = fVar47 + *(float *)(lVar24 + 0x78);
        if (uVar12 < *(uint *)(lVar27 + 0x18)) {
          lVar24 = lVar27 + lVar18 * 0x178;
          *(ulong *)(lVar24 + 0x98) =
               CONCAT44(fVar67 + (float)((ulong)*(undefined8 *)(lVar24 + 0x98) >> 0x20),
                        fVar62 + (float)*(undefined8 *)(lVar24 + 0x98));
          *(float *)(lVar24 + 0xa0) = fVar47 + *(float *)(lVar24 + 0xa0);
          uVar41 = *(uint *)(lVar27 + 0x18);
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
  lVar23 = lVar27 + lVar18 * 0x178;
  uVar68 = *(undefined4 *)
            (*(undefined8 **)
              (*(long *)
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
              0xb8) + 1);
  *(undefined8 *)(lVar23 + 0x70) =
       **(undefined8 **)
         (*(long *)Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
         0xb8);
  *(undefined4 *)(lVar23 + 0x78) = uVar68;
  plVar42 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(uint *)(lVar27 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar23 = lVar27 + lVar18 * 0x178;
  uVar68 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar23 + 0x98) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar23 + 0xa0) = uVar68;
  if (*(uint *)(lVar27 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar23 = lVar27 + lVar18 * 0x178;
  uVar68 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar23 + 0xc0) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar23 + 200) = uVar68;
  if (*(uint *)(lVar27 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar23 = lVar27 + lVar18 * 0x178;
  uVar68 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar7 + 0xb8) + 1);
  *(undefined8 *)(lVar23 + 0xe8) = **(undefined8 **)(*(long *)puVar7 + 0xb8);
  *(undefined4 *)(lVar23 + 0xf0) = uVar68;
  if (*(uint *)(lVar27 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(undefined1 *)(lVar24 + 0x194) = 0;
  if (iVar13 == 0) goto LAB_0248fa9c;
LAB_0248f9d0:
  if (iVar13 == 1) {
    pcVar28 = *(code **)(*unaff_x19 + 0x8f8);
    goto LAB_0248faa8;
  }
LAB_0248fabc:
  if ((*in_stack_00000150 == 0) || (lVar24 = *(long *)(*in_stack_00000150 + 0x38), lVar24 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar24 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar24 = lVar24 + lVar18 * 0x178;
  uVar15 = *(undefined8 *)(lVar24 + 0x11c);
  *(undefined8 *)(lVar24 + 0x11c) =
       CONCAT44(fVar67 + (float)((ulong)uVar15 >> 0x20),fVar62 + (float)uVar15);
  *(float *)(lVar24 + 0x124) = fVar47 + *(float *)(lVar24 + 0x124);
  if ((*in_stack_00000150 == 0) || (lVar24 = *(long *)(*in_stack_00000150 + 0x38), lVar24 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar24 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar24 = lVar24 + lVar18 * 0x178;
  *(ulong *)(lVar24 + 0x110) =
       CONCAT44(fVar67 + (float)((ulong)*(undefined8 *)(lVar24 + 0x110) >> 0x20),
                fVar62 + (float)*(undefined8 *)(lVar24 + 0x110));
  *(float *)(lVar24 + 0x118) = fVar47 + *(float *)(lVar24 + 0x118);
  if ((*in_stack_00000150 == 0) || (lVar24 = *(long *)(*in_stack_00000150 + 0x38), lVar24 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar24 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar24 = lVar24 + lVar18 * 0x178;
  *(ulong *)(lVar24 + 0x128) =
       CONCAT44(fVar67 + (float)((ulong)*(undefined8 *)(lVar24 + 0x128) >> 0x20),
                fVar62 + (float)*(undefined8 *)(lVar24 + 0x128));
  *(float *)(lVar24 + 0x130) = fVar47 + *(float *)(lVar24 + 0x130);
  if ((*in_stack_00000150 == 0) || (lVar24 = *(long *)(*in_stack_00000150 + 0x38), lVar24 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar24 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar24 = lVar24 + lVar18 * 0x178;
  *(float *)(lVar24 + 0x134) = fVar62 + *(float *)(lVar24 + 0x134);
  *(ulong *)(lVar24 + 0x138) =
       CONCAT44(fVar47 + (float)((ulong)*(undefined8 *)(lVar24 + 0x138) >> 0x20),
                fVar67 + (float)*(undefined8 *)(lVar24 + 0x138));
  lVar24 = *in_stack_00000150;
  if ((lVar24 == 0) || (lVar23 = *(long *)(lVar24 + 0x38), lVar23 == 0)) goto LAB_02491464;
  uVar41 = *(uint *)(lVar23 + 0x18);
  if (uVar41 <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar34 = lVar23 + lVar18 * 0x178;
  *(ulong *)(lVar34 + 0x140) =
       CONCAT44(fVar62 + (float)((ulong)*(undefined8 *)(lVar34 + 0x140) >> 0x20),
                fVar62 + (float)*(undefined8 *)(lVar34 + 0x140));
  *(ulong *)(lVar34 + 0x148) =
       CONCAT44(fVar67 + (float)((ulong)*(undefined8 *)(lVar34 + 0x148) >> 0x20),
                fVar67 + (float)*(undefined8 *)(lVar34 + 0x148));
  *(float *)(lVar34 + 0x150) = fVar67 + *(float *)(lVar34 + 0x150);
  if (uVar29 == uVar11) {
    uVar11 = *in_stack_00000148 - 1;
    if (uVar12 == uVar11) goto LAB_0248fccc;
  }
  else {
    lVar24 = *(long *)(lVar24 + 0x50);
    if (lVar24 == 0) goto LAB_02491464;
    if (*(uint *)(lVar24 + 0x18) <= uVar11)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar34 = (long)(int)uVar11;
    lVar36 = lVar24 + lVar34 * 0x5c;
    fVar43 = fVar67 + *(float *)(lVar36 + 0x54);
    *(ulong *)(lVar36 + 0x4c) =
         CONCAT44(fVar67 + (float)((ulong)*(undefined8 *)(lVar36 + 0x4c) >> 0x20),
                  fVar67 + (float)*(undefined8 *)(lVar36 + 0x4c));
    *(float *)(lVar36 + 0x54) = fVar43;
    *(float *)(lVar36 + 0x58) = fVar62 + *(float *)(lVar36 + 0x58);
    if (uVar41 <= *(uint *)(lVar36 + 0x34))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    uVar68 = *(undefined4 *)(lVar23 + (long)(int)*(uint *)(lVar36 + 0x34) * 0x178 + 0x11c);
    lVar24 = lVar24 + lVar34 * 0x5c;
    *(float *)(lVar24 + 0x70) = fVar43;
    *(undefined4 *)(lVar24 + 0x6c) = uVar68;
    lVar24 = *in_stack_00000150;
    if ((lVar24 == 0) || (lVar23 = *(long *)(lVar24 + 0x50), lVar23 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar23 + 0x18) <= uVar11)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar24 = *(long *)(lVar24 + 0x38);
    if (lVar24 == 0) goto LAB_02491464;
    uVar11 = *(uint *)(lVar23 + lVar34 * 0x5c + 0x40);
    if (*(uint *)(lVar24 + 0x18) <= uVar11)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar23 = lVar23 + lVar34 * 0x5c;
    *(undefined4 *)(lVar23 + 0x74) = *(undefined4 *)(lVar24 + (long)(int)uVar11 * 0x178 + 0x128);
    *(undefined4 *)(lVar23 + 0x78) = *(undefined4 *)(lVar23 + 0x4c);
    uVar11 = *in_stack_00000148 - 1;
LAB_0248fccc:
    if (uVar12 == uVar11) {
      lVar24 = *in_stack_00000150;
      if ((lVar24 == 0) || (lVar23 = *(long *)(lVar24 + 0x50), lVar23 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar23 + 0x18) <= uVar29)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar34 = lVar23 + lVar35 * 0x5c;
      fVar43 = fVar67 + *(float *)(lVar34 + 0x54);
      *(ulong *)(lVar34 + 0x4c) =
           CONCAT44(fVar67 + (float)((ulong)*(undefined8 *)(lVar34 + 0x4c) >> 0x20),
                    fVar67 + (float)*(undefined8 *)(lVar34 + 0x4c));
      *(float *)(lVar34 + 0x54) = fVar43;
      *(float *)(lVar34 + 0x58) = fVar62 + *(float *)(lVar34 + 0x58);
      lVar24 = *(long *)(lVar24 + 0x38);
      if (lVar24 == 0) goto LAB_02491464;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(lVar34 + 0x34))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar68 = *(undefined4 *)(lVar24 + (long)(int)*(uint *)(lVar34 + 0x34) * 0x178 + 0x11c);
      lVar23 = lVar23 + lVar35 * 0x5c;
      *(float *)(lVar23 + 0x70) = fVar43;
      *(undefined4 *)(lVar23 + 0x6c) = uVar68;
      lVar24 = *in_stack_00000150;
      if ((lVar24 == 0) || (lVar23 = *(long *)(lVar24 + 0x50), lVar23 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar23 + 0x18) <= uVar29)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar24 = *(long *)(lVar24 + 0x38);
      if (lVar24 == 0) goto LAB_02491464;
      uVar11 = *(uint *)(lVar23 + lVar35 * 0x5c + 0x40);
      if (*(uint *)(lVar24 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar23 = lVar23 + lVar35 * 0x5c;
      *(undefined4 *)(lVar23 + 0x74) = *(undefined4 *)(lVar24 + (long)(int)uVar11 * 0x178 + 0x128);
      *(undefined4 *)(lVar23 + 0x78) = *(undefined4 *)(lVar23 + 0x4c);
    }
  }
  if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar17 = FUN_016f9468(uVar30,0);
  if (((((uVar17 & 1) == 0) && (1 < uVar30 - 0x2010)) && (uVar30 != 0xad)) && (uVar30 != 0x2d)) {
    if (bVar5) {
      if (((uVar38 != 1) && ((int)uVar12 < (int)(*(uint *)(lVar27 + 0x18) - 1))) &&
         (((int)uVar12 < (int)*in_stack_00000148 && ((uVar30 == 0x2019 || (uVar30 == 0x27)))))) {
        if (*(uint *)(lVar27 + 0x18) <= uVar38 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        uVar3 = *(undefined2 *)(lVar27 + lStack0000000000000128 + -0x438);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar17 = FUN_016f9468(uVar3,0);
        if ((uVar17 & 1) != 0) {
          if (*(uint *)(lVar27 + 0x18) <= uVar38)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          uVar3 = *(undefined2 *)(lVar27 + lStack0000000000000128 + -0x148);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar17 = FUN_016f9468(uVar3,0);
          if ((uVar17 & 1) != 0) goto LAB_0248fee0;
        }
      }
    }
    else {
      if (uVar38 != 1) {
LAB_024909a0:
        bVar5 = false;
        goto LAB_0248fee8;
      }
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar17 = FUN_016f93a0(uVar30,0);
      if ((uVar17 & 1) != 0) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar17 = FUN_016f68bc(uVar30,0);
        if (((uVar30 != 0x200b) && ((uVar17 & 1) == 0)) && (*in_stack_00000148 != 1))
        goto LAB_024909a0;
      }
    }
    if (uVar12 == *in_stack_00000148 - 1) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar17 = FUN_016f9468(uVar30,0);
      iVar13 = iVar10;
      if ((uVar17 & 1) == 0) goto LAB_02490204;
    }
    else {
LAB_02490204:
      iVar13 = uVar38 - 2;
    }
    lVar24 = *in_stack_00000150;
    if (lVar24 == 0) goto LAB_02491464;
    lVar23 = *(long *)(lVar24 + 0x40);
    if (lVar23 == 0) goto LAB_02491464;
    uVar11 = *(uint *)(lVar24 + 0x24);
    iVar14 = *(int *)(lVar23 + 0x18);
    if (iVar14 < (int)(uVar11 + 1)) {
      if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01147b84((long *)(lVar24 + 0x40),iVar14 + 1,
                   *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
      lVar24 = *in_stack_00000150;
      if (lVar24 == 0) goto LAB_02491464;
    }
    lVar23 = *(long *)(lVar24 + 0x40);
    if (lVar23 == 0) goto LAB_02491464;
    if (*(uint *)(lVar23 + 0x18) <= uVar11)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar23 = lVar23 + (long)(int)uVar11 * 0x18;
    *(long **)(lVar23 + 0x20) = unaff_x19;
    *(uint *)(lVar23 + 0x28) = uStack0000000000000114;
    *(int *)(lVar23 + 0x2c) = iVar13;
    *(uint *)(lVar23 + 0x30) = (iVar13 - uStack0000000000000114) + 1;
    lVar23 = *(long *)(lVar24 + 0x50);
    *(int *)(lVar24 + 0x24) = *(int *)(lVar24 + 0x24) + 1;
    if (lVar23 == 0) goto LAB_02491464;
    if (*(uint *)(lVar23 + 0x18) <= uVar29)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar23 = lVar23 + lVar35 * 0x5c;
    bVar5 = false;
    iStack00000000000000a4 = iStack00000000000000a4 + 1;
    *(int *)(lVar23 + 0x30) = *(int *)(lVar23 + 0x30) + 1;
  }
  else {
    if (!bVar5) {
      uStack0000000000000114 = uVar12;
    }
    if (uVar12 == *in_stack_00000148 - 1) {
      lVar24 = *in_stack_00000150;
      if (lVar24 == 0) goto LAB_02491464;
      lVar23 = *(long *)(lVar24 + 0x40);
      if (lVar23 == 0) goto LAB_02491464;
      uVar11 = *(uint *)(lVar24 + 0x24);
      iVar13 = *(int *)(lVar23 + 0x18);
      if (iVar13 < (int)(uVar11 + 1)) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147b84((long *)(lVar24 + 0x40),iVar13 + 1,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
        lVar24 = *in_stack_00000150;
        if (lVar24 == 0) goto LAB_02491464;
      }
      lVar23 = *(long *)(lVar24 + 0x40);
      if (lVar23 == 0) goto LAB_02491464;
      if (*(uint *)(lVar23 + 0x18) <= uVar11)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar23 = lVar23 + (long)(int)uVar11 * 0x18;
      *(long **)(lVar23 + 0x20) = unaff_x19;
      *(uint *)(lVar23 + 0x28) = uStack0000000000000114;
      *(uint *)(lVar23 + 0x2c) = uVar12;
      *(uint *)(lVar23 + 0x30) = uVar38 - uStack0000000000000114;
      lVar23 = *(long *)(lVar24 + 0x50);
      *(int *)(lVar24 + 0x24) = *(int *)(lVar24 + 0x24) + 1;
      if (lVar23 == 0) goto LAB_02491464;
      if (*(uint *)(lVar23 + 0x18) <= uVar29)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar23 = lVar23 + lVar35 * 0x5c;
      iStack00000000000000a4 = iStack00000000000000a4 + 1;
      *(int *)(lVar23 + 0x30) = *(int *)(lVar23 + 0x30) + 1;
    }
LAB_0248fee0:
    bVar5 = true;
  }
LAB_0248fee8:
  if ((*in_stack_00000150 == 0) || (lVar24 = *(long *)(*in_stack_00000150 + 0x38), lVar24 == 0))
  goto LAB_02491464;
  uVar11 = *(uint *)(lVar24 + 0x18);
  if (uVar11 <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*(byte *)(lVar24 + lVar18 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar8) {
LAB_0248ff18:
      if (uVar11 <= uVar38 - 2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar35 = *unaff_x19;
      uVar68 = *(undefined4 *)(lVar24 + lStack0000000000000128 + -0x330);
      uVar56 = *(undefined4 *)(lVar24 + lStack0000000000000128 + -0x2f8);
LAB_02490474:
      pcVar28 = *(code **)(lVar35 + 0x908);
LAB_0249047c:
      (*pcVar28)(fStack0000000000000054,fStack000000000000004c,fStack0000000000000050,uVar68,
                 fStack00000000000000cc,0,fStack0000000000000058,uVar56);
      puVar7 = System_Threading_Mutex_TypeInfo;
      lVar24 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar24 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar24 = *(long *)puVar7;
      }
LAB_024904cc:
      bVar8 = false;
      fVar45 = 0.0;
      fStack00000000000000cc = *(float *)(*(long *)(lVar24 + 0xb8) + 0x15a8);
      fStack00000000000000c8 = 0.0;
    }
    else {
LAB_024903d8:
      bVar8 = false;
    }
  }
  else {
    lVar24 = lVar24 + lVar18 * 0x178;
    iVar13 = *(int *)(lVar24 + 0x68);
    *(int *)(lVar24 + 0x16c) = iVar37;
    if ((((int)unaff_x19[100] < (int)uVar12) || ((int)unaff_x19[0x65] < (int)uVar29)) ||
       (((int)unaff_x19[0x5b] == 5 && (iVar13 + 1 != (int)unaff_x19[0x66])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar17 = FUN_016f68bc(uVar30,0);
    if ((uVar30 != 0x200b) && ((uVar17 & 1) == 0)) {
      lVar24 = *in_stack_00000150;
      if ((lVar24 == 0) || (lVar35 = *(long *)(lVar24 + 0x38), lVar35 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar35 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      fVar43 = *(float *)(lVar35 + lVar18 * 0x178 + 0x160);
      if (fVar45 <= fVar43) {
        fVar45 = fVar43;
      }
      if (fStack00000000000000c8 <= ABS(fVar50)) {
        fStack00000000000000c8 = ABS(fVar50);
      }
      if ((float)iVar13 != fStack0000000000000048) {
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar24 = *in_stack_00000150;
          if (lVar24 == 0) goto LAB_02491464;
          lVar35 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
        }
        else {
          lVar35 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
        }
        fStack00000000000000cc = *(float *)(lVar35 + 0x15a8);
      }
      lVar24 = *(long *)(lVar24 + 0x38);
      if (lVar24 == 0) goto LAB_02491464;
      if (*(uint *)(lVar24 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (unaff_x19[0x1e] == 0) goto LAB_02491464;
      fVar61 = *(float *)(lVar24 + lVar18 * 0x178 + 0x14c);
      fVar43 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
      fVar61 = fVar61 + fVar45 * fVar43;
      fStack0000000000000048 = (float)iVar13;
      if (fVar61 <= fStack00000000000000cc) {
        fStack00000000000000cc = fVar61;
      }
    }
    if (!bVar8) {
      bVar8 = false;
      if ((((uVar30 == 0xd) || ((uVar30 | 1) == 0xb)) || ((int)uVar4 < (int)uVar12)) || (!bVar1))
      goto LAB_024904e8;
      if (uVar12 == uVar4) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar17 = FUN_016fa418(uVar30,0);
        if ((uVar17 & 1) != 0) goto LAB_024903d8;
      }
      if ((*in_stack_00000150 == 0) || (lVar24 = *(long *)(*in_stack_00000150 + 0x38), lVar24 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar24 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar24 = lVar24 + lVar18 * 0x178;
      fStack0000000000000058 = *(float *)(lVar24 + 0x160);
      fStack0000000000000054 = *(float *)(lVar24 + 0x11c);
      bVar8 = fVar45 != 0.0;
      fVar43 = fStack0000000000000058;
      if (bVar8) {
        fVar43 = fVar45;
      }
      fVar45 = fVar43;
      _bStack000000000000005c = *(uint *)(lVar24 + 0x168);
      fStack0000000000000050 = 0.0;
      fVar43 = fVar50;
      if (bVar8) {
        fVar43 = fStack00000000000000c8;
      }
      fStack000000000000004c = fStack00000000000000cc;
      fStack00000000000000c8 = fVar43;
    }
    if (*in_stack_00000148 == 1) {
      if ((*in_stack_00000150 != 0) && (lVar24 = *(long *)(*in_stack_00000150 + 0x38), lVar24 != 0))
      {
        if (uVar12 < *(uint *)(lVar24 + 0x18)) {
          lVar24 = lVar24 + lVar18 * 0x178;
          lVar35 = *unaff_x19;
          uVar68 = *(undefined4 *)(lVar24 + 0x128);
          uVar56 = *(undefined4 *)(lVar24 + 0x160);
          goto LAB_02490474;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
    if ((uVar12 == uVar32) || ((int)uVar4 <= (int)uVar12)) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar17 = FUN_016f68bc(uVar30,0);
      if ((*in_stack_00000150 != 0) && (lVar24 = *(long *)(*in_stack_00000150 + 0x38), lVar24 != 0))
      {
        if (uVar30 == 0x200b || (uVar17 & 1) != 0) {
          lVar35 = lVar40;
          if (*(uint *)(lVar24 + 0x18) <= uVar4)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        else {
          lVar35 = lVar18;
          if (*(uint *)(lVar24 + 0x18) <= uVar12)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        lVar24 = lVar24 + lVar35 * 0x178;
        uVar68 = *(undefined4 *)(lVar24 + 0x128);
        uVar56 = *(undefined4 *)(lVar24 + 0x160);
        pcVar28 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_0249047c;
      }
      goto LAB_02491464;
    }
    if (!bVar1) {
      if ((*in_stack_00000150 != 0) && (lVar24 = *(long *)(*in_stack_00000150 + 0x38), lVar24 != 0))
      {
        uVar11 = *(uint *)(lVar24 + 0x18);
        goto LAB_0248ff18;
      }
      goto LAB_02491464;
    }
    if ((int)uVar12 < (int)(*in_stack_00000148 - 1)) {
      if ((*in_stack_00000150 == 0) || (lVar24 = *(long *)(*in_stack_00000150 + 0x38), lVar24 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar24 + 0x18) <= uVar38)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar17 = FUN_024a9e4c(_bStack000000000000005c,*(undefined4 *)(lVar24 + lStack0000000000000128)
                            ,0);
      if ((uVar17 & 1) == 0) {
        if ((*in_stack_00000150 != 0) &&
           (lVar24 = *(long *)(*in_stack_00000150 + 0x38), lVar24 != 0)) {
          if (uVar12 < *(uint *)(lVar24 + 0x18)) {
            lVar24 = lVar24 + lVar18 * 0x178;
            (**(code **)(*unaff_x19 + 0x908))
                      (fStack0000000000000054,fStack000000000000004c,fStack0000000000000050,
                       *(undefined4 *)(lVar24 + 0x128),fStack00000000000000cc,0,
                       fStack0000000000000058,*(undefined4 *)(lVar24 + 0x160));
            puVar7 = System_Threading_Mutex_TypeInfo;
            lVar24 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar24 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar24 = *(long *)puVar7;
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
  if ((*in_stack_00000150 == 0) || (lVar24 = *(long *)(*in_stack_00000150 + 0x38), lVar24 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar24 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if (lVar33 == 0) goto LAB_02491464;
  uVar11 = *(uint *)(lVar24 + lVar18 * 0x178 + 400);
  fVar43 = (float)FUN_026fd1f0(lVar33 + 0x50,0);
  if ((uVar11 >> 6 & 1) == 0) {
    if (bVar9) {
      if ((*in_stack_00000150 == 0) || (lVar24 = *(long *)(*in_stack_00000150 + 0x38), lVar24 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar24 + 0x18) <= uVar38 - 2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar68 = *(undefined4 *)(lVar24 + lStack0000000000000128 + -0x330);
      pcVar28 = *(code **)(*unaff_x19 + 0x908);
      fVar67 = fStack0000000000000084 * fVar43 +
               *(float *)(lVar24 + lStack0000000000000128 + -0x30c);
LAB_02490a68:
      (*pcVar28)(in_stack_00000078._4_4_,fStack000000000000006c,uStack0000000000000060,uVar68,fVar67
                 ,0,fStack0000000000000084,fStack0000000000000084);
    }
LAB_02490a9c:
    bVar9 = false;
  }
  else {
    lVar24 = *in_stack_00000150;
    if ((lVar24 == 0) || (lVar35 = *(long *)(lVar24 + 0x38), lVar35 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar35 + 0x18) <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(int *)(lVar35 + lVar18 * 0x178 + 0x174) = iVar37;
    if ((((int)unaff_x19[100] < (int)uVar12) || ((int)unaff_x19[0x65] < (int)uVar29)) ||
       (((int)unaff_x19[0x5b] == 5 &&
        (*(int *)(lVar35 + lVar18 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar30 == 0xd) || ((uVar30 | 1) == 0xb)) || ((int)uVar4 < (int)uVar12)) ||
       (bVar9 || !bVar1)) {
LAB_02490668:
      if (!bVar9) goto LAB_02490a9c;
    }
    else {
      if (uVar12 == uVar4) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar17 = FUN_016fa418(uVar30,0);
        if ((uVar17 & 1) != 0) goto LAB_02490668;
        lVar24 = *in_stack_00000150;
        if (lVar24 == 0) goto LAB_02491464;
      }
      lVar24 = *(long *)(lVar24 + 0x38);
      if (lVar24 == 0) goto LAB_02491464;
      if (*(uint *)(lVar24 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar24 = lVar24 + lVar18 * 0x178;
      fStack0000000000000038 = *(float *)(lVar24 + 0x60);
      fStack0000000000000084 = *(float *)(lVar24 + 0x160);
      fStack0000000000000034 = *(float *)(lVar24 + 0x14c);
      in_stack_00000078._4_4_ = *(float *)(lVar24 + 0x11c);
      fStack000000000000006c = fVar43 * fStack0000000000000084 + fStack0000000000000034;
      uStack0000000000000060 = 0;
    }
    uVar11 = *in_stack_00000148;
    if (uVar11 == 1) {
      if (*in_stack_00000150 != 0) {
        lVar24 = *(long *)(*in_stack_00000150 + 0x38);
joined_r0x024907c8:
        if (lVar24 != 0) {
          if (uVar12 < *(uint *)(lVar24 + 0x18)) {
            lVar24 = lVar24 + lVar18 * 0x178;
            lVar40 = *unaff_x19;
            uVar68 = *(undefined4 *)(lVar24 + 0x128);
            fVar67 = *(float *)(lVar24 + 0x14c);
LAB_024907e8:
            pcVar28 = *(code **)(lVar40 + 0x908);
LAB_02490a64:
            fVar67 = fVar43 * fStack0000000000000084 + fVar67;
            goto LAB_02490a68;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
      }
      goto LAB_02491464;
    }
    if (uVar12 == uVar32) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar17 = FUN_016f68bc(uVar30,0);
      if ((*in_stack_00000150 != 0) && (lVar24 = *(long *)(*in_stack_00000150 + 0x38), lVar24 != 0))
      {
        uVar11 = *(uint *)(lVar24 + 0x18);
        if (uVar30 == 0x200b || (uVar17 & 1) != 0) {
          if (uVar11 <= uVar4)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        else {
LAB_02490a40:
          lVar40 = lVar18;
          if (uVar11 <= uVar12)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
LAB_02490a48:
        lVar24 = lVar24 + lVar40 * 0x178;
        fVar67 = *(float *)(lVar24 + 0x14c);
        uVar68 = *(undefined4 *)(lVar24 + 0x128);
        pcVar28 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_02490a64;
      }
      goto LAB_02491464;
    }
    if ((int)uVar12 < (int)uVar11) {
      lVar24 = *in_stack_00000150;
      if ((lVar24 != 0) && (lVar35 = *(long *)(lVar24 + 0x38), lVar35 != 0)) {
        if (uVar38 < *(uint *)(lVar35 + 0x18)) {
          if (*(float *)(lVar35 + lStack0000000000000128 + -0x108) == fStack0000000000000038) {
            fVar61 = *(float *)(lVar35 + lStack0000000000000128 + -0x1c);
            if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar17 = FUN_024aa280(fVar67 + fVar61,fStack0000000000000034,0);
            if ((uVar17 & 1) != 0) {
              uVar11 = *in_stack_00000148;
              goto LAB_024908ec;
            }
            lVar24 = *in_stack_00000150;
            if (lVar24 == 0) goto LAB_02491464;
          }
          lVar24 = *(long *)(lVar24 + 0x38);
          if (lVar24 != 0) {
            uVar11 = *(uint *)(lVar24 + 0x18);
            if ((int)uVar12 <= (int)uVar4) goto LAB_02490a40;
            if (uVar4 < uVar11) goto LAB_02490a48;
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          }
          goto LAB_02491464;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
LAB_024908ec:
    if ((int)uVar12 < (int)uVar11) {
      iVar13 = FUN_02681c0c(lVar33,0);
      if (*(uint *)(lVar27 + 0x18) <= uVar38)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar24 = *(long *)(lVar27 + lStack0000000000000128 + -0x130);
      if (lVar24 == 0) goto LAB_02491464;
      iVar14 = FUN_02681c0c(lVar24,0);
      if (iVar13 != iVar14) {
        if (*in_stack_00000150 != 0) {
          lVar24 = *(long *)(*in_stack_00000150 + 0x38);
          goto joined_r0x024907c8;
        }
        goto LAB_02491464;
      }
    }
    if (!bVar1) {
      if ((*in_stack_00000150 != 0) && (lVar24 = *(long *)(*in_stack_00000150 + 0x38), lVar24 != 0))
      {
        if (uVar38 - 2 < *(uint *)(lVar24 + 0x18)) {
          lVar40 = *unaff_x19;
          uVar68 = *(undefined4 *)(lVar24 + lStack0000000000000128 + -0x330);
          fVar67 = *(float *)(lVar24 + lStack0000000000000128 + -0x30c);
          goto LAB_024907e8;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
    bVar9 = true;
  }
  if ((*in_stack_00000150 == 0) || (lVar24 = *(long *)(*in_stack_00000150 + 0x38), lVar24 == 0))
  goto LAB_02491464;
  uVar11 = (uint)*(undefined8 *)(lVar24 + 0x18);
  if (uVar11 <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*(byte *)(lVar24 + lVar18 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar6) {
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,
                 fStack0000000000000098,in_stack_000000a0,uStack0000000000000094);
    }
LAB_02490b04:
    bVar6 = false;
  }
  else {
    if ((((int)unaff_x19[100] < (int)uVar12) || ((int)unaff_x19[0x65] < (int)uVar29)) ||
       (((int)unaff_x19[0x5b] == 5 &&
        (*(int *)(lVar24 + lVar18 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar6) {
      if ((((uVar30 == 0xd) || ((uVar30 | 1) == 0xb)) || ((int)uVar4 < (int)uVar12)) || (!bVar1))
      goto LAB_02490b04;
      if (uVar12 == uVar4) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar17 = FUN_016fa418(uVar30,0);
        if ((uVar17 & 1) != 0) goto LAB_02490b04;
      }
      puVar7 = System_Threading_Mutex_TypeInfo;
      lVar40 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar40 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar40 = *(long *)puVar7;
      }
      if ((*in_stack_00000150 == 0) || (lVar24 = *(long *)(*in_stack_00000150 + 0x38), lVar24 == 0))
      goto LAB_02491464;
      uVar11 = (uint)*(undefined8 *)(lVar24 + 0x18);
      if (uVar11 <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar40 = *(long *)(lVar40 + 0xb8);
      lVar35 = lVar24 + lVar18 * 0x178;
      in_stack_00001798 = *(undefined8 *)(lVar35 + 0x184);
      in_stack_00001790 = *(undefined8 *)(lVar35 + 0x17c);
      fStack00000000000000a8 = *(float *)(lVar40 + 0x1598);
      in_stack_000017a0 = *(float *)(lVar35 + 0x18c);
      fStack00000000000000ac = *(float *)(lVar40 + 0x159c);
      fStack0000000000000098 = *(float *)(lVar40 + 0x15a0);
      in_stack_000000a0 = *(float *)(lVar40 + 0x15a4);
      uStack0000000000000094 = 0;
    }
    if (uVar11 <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar24 = lVar24 + lVar18 * 0x178;
    fVar43 = *(float *)(lVar24 + 0x128);
    fVar44 = *(float *)(lVar24 + 0x188);
    uVar16 = *(undefined8 *)(lVar24 + 0x17c);
    fVar65 = *(float *)(lVar24 + 0x184);
    uVar15 = *(undefined8 *)(lVar24 + 0x184);
    fVar46 = *(float *)(lVar24 + 0x18c);
    fVar67 = *(float *)(lVar24 + 0x11c);
    fVar61 = *(float *)(lVar24 + 0x148);
    fVar64 = *(float *)(lVar24 + 0x150);
    in_stack_00000158 = uVar16;
    fStack0000000000000160 = fVar65;
    fStack0000000000000164 = fVar44;
    in_stack_00000168 = fVar46;
    in_stack_00000170 = in_stack_00001790;
    in_stack_00000178 = in_stack_00001798;
    in_stack_00000180 = in_stack_000017a0;
    uVar17 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
    lVar24 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
    if ((uVar17 & 1) == 0) {
      if (*(int *)(lVar24 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar24);
      }
      fVar43 = fVar43 + (float)in_stack_00001798;
      fVar67 = fVar67 - (float)((ulong)in_stack_00001790 >> 0x20);
      fVar61 = fVar61 + (float)((ulong)in_stack_00001798 >> 0x20);
      if (fVar67 <= fStack00000000000000a8) {
        fStack00000000000000a8 = fVar67;
      }
      if (fVar64 - in_stack_000017a0 <= fStack00000000000000ac) {
        fStack00000000000000ac = fVar64 - in_stack_000017a0;
      }
      if (fStack0000000000000098 <= fVar43) {
        fStack0000000000000098 = fVar43;
      }
      if (in_stack_000000a0 <= fVar61) {
        in_stack_000000a0 = fVar61;
      }
    }
    else {
      if (*(int *)(lVar24 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar24);
      }
      fVar67 = (fVar67 + (fStack0000000000000098 - (float)in_stack_00001798)) * 0.5;
      if (fVar64 <= fStack00000000000000ac) {
        fStack00000000000000ac = fVar64;
      }
      if (in_stack_000000a0 <= fVar61) {
        in_stack_000000a0 = fVar61;
      }
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,fVar67,
                 in_stack_000000a0,uStack0000000000000094);
      fStack00000000000000ac = fVar64 - fVar46;
      fStack0000000000000098 = fVar43 + fVar65;
      uStack0000000000000094 = 0;
      in_stack_000000a0 = fVar61 + fVar44;
      fStack00000000000000a8 = fVar67;
      in_stack_00001790 = uVar16;
      in_stack_00001798 = uVar15;
      in_stack_000017a0 = fVar46;
    }
    if (((*in_stack_00000148 == 1) || (uVar12 == uVar32)) ||
       (((int)uVar4 <= (int)uVar12 || (!bVar1)))) {
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,
                 fStack0000000000000098,in_stack_000000a0,uStack0000000000000094);
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
  }
  uVar12 = *in_stack_00000148;
  iVar10 = iVar10 + 1;
  lStack0000000000000128 = lStack0000000000000128 + 0x178;
  bVar1 = (int)uVar12 <= (int)uVar38;
  uVar11 = uVar29;
  uVar38 = uVar38 + 1;
  if (bVar1) goto LAB_02491038;
  goto LAB_0248ef74;
LAB_02491038:
  lVar27 = *in_stack_00000150;
  if (lVar27 != 0) {
    iVar37 = uVar29 + 1;
    plVar25 = (long *)PTR_DAT_033ed410;
LAB_02491068:
    *(uint *)(lVar27 + 0x18) = uVar12;
    lVar24 = unaff_x19[0xd3];
    *(int *)(lVar27 + 0x2c) = iVar37;
    iVar37 = iStack00000000000000a4;
    if ((int)uVar12 < 1) {
      iVar37 = 1;
    }
    if (iStack00000000000000a4 == 0) {
      iVar37 = 1;
    }
    *(int *)(lVar27 + 0x1c) = (int)lVar24;
    *(int *)(lVar27 + 0x24) = iVar37;
    *(int *)(lVar27 + 0x30) = (int)unaff_x19[0x95] + 1;
    if (((int)unaff_x19[0x62] != 0xff) ||
       (uVar17 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar17 & 1) == 0)) {
LAB_02491468:
      lVar27 = *(long *)Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__;
LAB_02491474:
      if (*(int *)(lVar27 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_024a942c();
      return;
    }
    lVar27 = unaff_x19[0xda];
    if (lVar27 != 0) {
      (**(code **)(lVar27 + 0x18))
                (*(undefined8 *)(lVar27 + 0x40),*in_stack_00000150,*(undefined8 *)(lVar27 + 0x28));
    }
    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
      if ((*in_stack_00000150 == 0) || (lVar27 = *(long *)(*in_stack_00000150 + 0x60), lVar27 == 0))
      goto LAB_02491464;
      if (*(int *)(*plVar25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(int *)(lVar27 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      FUN_024e8000(lVar27 + 0x20,1,0);
    }
    if (unaff_x19[0x73] != 0) {
      UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
                (unaff_x19[0x73],0);
      if ((unaff_x19[0x6c] != 0) && (lVar27 = *(long *)(unaff_x19[0x6c] + 0x60), lVar27 != 0)) {
        if (*(int *)(lVar27 + 0x18) == 0) {
UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (unaff_x19[0x73] != 0) {
          FUN_0266b9c4(unaff_x19[0x73],*(undefined8 *)(lVar27 + 0x30),0);
          if ((unaff_x19[0x6c] != 0) && (lVar27 = *(long *)(unaff_x19[0x6c] + 0x60), lVar27 != 0)) {
            if (*(int *)(lVar27 + 0x18) == 0)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            if (unaff_x19[0x73] != 0) {
              FUN_0266bbc8(unaff_x19[0x73],*(undefined8 *)(lVar27 + 0x48),0);
              if ((unaff_x19[0x6c] != 0) &&
                 (lVar27 = *(long *)(unaff_x19[0x6c] + 0x60), lVar27 != 0)) {
                if (*(int *)(lVar27 + 0x18) == 0)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                if (unaff_x19[0x73] != 0) {
                  FUN_0266bc74(unaff_x19[0x73],*(undefined8 *)(lVar27 + 0x50),0);
                  if ((unaff_x19[0x6c] != 0) &&
                     (lVar27 = *(long *)(unaff_x19[0x6c] + 0x60), lVar27 != 0)) {
                    if (*(int *)(lVar27 + 0x18) == 0)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    if (unaff_x19[0x73] != 0) {
                      FUN_0266c1dc(unaff_x19[0x73],*(undefined8 *)(lVar27 + 0x58),0);
                      if (unaff_x19[0x73] != 0) {
                        FUN_0266ed90(unaff_x19[0x73],0);
                        lVar27 = *in_stack_00000150;
                        if (lVar27 != 0) {
                          lVar40 = 0;
                          lVar24 = 0;
                          do {
                            uVar17 = lVar24 + 1;
                            if ((long)*(int *)(lVar27 + 0x34) <= (long)uVar17) goto LAB_02491468;
                            lVar27 = *(long *)(lVar27 + 0x60);
                            if (lVar27 == 0) break;
                            if (*(int *)(*plVar25 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            if (*(uint *)(lVar27 + 0x18) <= uVar17)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            FUN_024e7ecc(lVar27 + lVar40 + 0x70,0);
                            lVar27 = unaff_x19[0xe0];
                            if (lVar27 == 0) break;
                            if (*(uint *)(lVar27 + 0x18) <= uVar17)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            uVar15 = *(undefined8 *)(lVar27 + lVar24 * 8 + 0x28);
                            if (*(int *)(*plVar42 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar52 = FUN_0268b4e0(uVar15,0,0);
                            if ((uVar52 & 1) == 0) {
                              if (*(int *)((long)unaff_x19 + 0x314) != 0) {
                                if ((*in_stack_00000150 == 0) ||
                                   (lVar27 = *(long *)(*in_stack_00000150 + 0x60), lVar27 == 0))
                                break;
                                if (*(int *)(*plVar25 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                if (*(uint *)(lVar27 + 0x18) <= uVar17)
                                goto 
                                UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                                ;
                                FUN_024e8000(lVar27 + lVar40 + 0x70,1,0);
                              }
                              lVar27 = unaff_x19[0xe0];
                              if (lVar27 == 0) break;
                              if (*(uint *)(lVar27 + 0x18) <= uVar17)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar27 = *(long *)(lVar27 + lVar24 * 8 + 0x28);
                              if (lVar27 == 0) break;
                              lVar27 = FUN_024eefa0(lVar27,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar18 = *(long *)(*in_stack_00000150 + 0x60), lVar18 == 0))
                              break;
                              if (*(uint *)(lVar18 + 0x18) <= uVar17)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar27 == 0) break;
                              FUN_0266b9c4(lVar27,*(undefined8 *)(lVar18 + lVar40 + 0x80),0);
                              lVar27 = unaff_x19[0xe0];
                              if (lVar27 == 0) break;
                              if (*(uint *)(lVar27 + 0x18) <= uVar17)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar27 = *(long *)(lVar27 + lVar24 * 8 + 0x28);
                              if (lVar27 == 0) break;
                              lVar27 = FUN_024eefa0(lVar27,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar18 = *(long *)(*in_stack_00000150 + 0x60), lVar18 == 0))
                              break;
                              if (*(uint *)(lVar18 + 0x18) <= uVar17)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar27 == 0) break;
                              FUN_0266bbc8(lVar27,*(undefined8 *)(lVar18 + lVar40 + 0x98),0);
                              lVar27 = unaff_x19[0xe0];
                              if (lVar27 == 0) break;
                              if (*(uint *)(lVar27 + 0x18) <= uVar17)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar27 = *(long *)(lVar27 + lVar24 * 8 + 0x28);
                              if (lVar27 == 0) break;
                              lVar27 = FUN_024eefa0(lVar27,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar18 = *(long *)(*in_stack_00000150 + 0x60), lVar18 == 0))
                              break;
                              if (*(uint *)(lVar18 + 0x18) <= uVar17)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar27 == 0) break;
                              FUN_0266bc74(lVar27,*(undefined8 *)(lVar18 + lVar40 + 0xa0),0);
                              lVar27 = unaff_x19[0xe0];
                              if (lVar27 == 0) break;
                              if (*(uint *)(lVar27 + 0x18) <= uVar17)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar27 = *(long *)(lVar27 + lVar24 * 8 + 0x28);
                              if (lVar27 == 0) break;
                              lVar27 = FUN_024eefa0(lVar27,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar18 = *(long *)(*in_stack_00000150 + 0x60), lVar18 == 0))
                              break;
                              if (*(uint *)(lVar18 + 0x18) <= uVar17)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar27 == 0) break;
                              FUN_0266c1dc(lVar27,*(undefined8 *)(lVar18 + lVar40 + 0xa8),0);
                              lVar27 = unaff_x19[0xe0];
                              if (lVar27 == 0) break;
                              if (*(uint *)(lVar27 + 0x18) <= uVar17)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar27 = *(long *)(lVar27 + lVar24 * 8 + 0x28);
                              if ((lVar27 == 0) || (lVar27 = FUN_024eefa0(lVar27,0), lVar27 == 0))
                              break;
                              FUN_0266ed90(lVar27,0);
                            }
                            lVar27 = *in_stack_00000150;
                            lVar24 = lVar24 + 1;
                            lVar40 = lVar40 + 0x50;
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
LAB_02491464:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


