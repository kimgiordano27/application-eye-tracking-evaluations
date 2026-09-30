/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.DynamicMoveProvider$$.ctor
ENTRY_POINT: 0248c244
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

void UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_DynamicMoveProvider___ctor
               (float param_1,ulong param_2,float param_3,float param_4,float param_5,float param_6)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  double __x;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
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
  int in_w8;
  long lVar22;
  undefined4 *puVar23;
  long lVar24;
  uint uVar25;
  long lVar26;
  long *plVar27;
  float *pfVar28;
  code *pcVar29;
  uint uVar30;
  uint uVar31;
  float *pfVar32;
  uint uVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long *unaff_x19;
  uint unaff_w20;
  int iVar38;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  uint unaff_w24;
  uint unaff_w25;
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
  float fVar51;
  double dVar52;
  float fVar53;
  ulong uVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined4 uVar58;
  float fVar59;
  float unaff_s8;
  float fVar60;
  float unaff_s9;
  float fVar61;
  float unaff_s10;
  float fVar62;
  float fVar63;
  float fVar64;
  float unaff_s12;
  float fVar65;
  float fVar66;
  ulong unaff_d13;
  undefined4 uVar67;
  ulong unaff_d14;
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
  uint in_stack_00001788;
  undefined8 in_stack_00001790;
  undefined8 in_stack_00001798;
  float in_stack_000017a0;
  undefined8 in_stack_000017a8;
  float in_stack_000017b8;
  uint in_stack_000017bc;
  
code_r0x0248c244:
  fVar43 = unaff_s12;
  uVar15 = in_stack_000017a8;
  if (in_w8 < (int)unaff_x19[0x48]) {
    fVar43 = (param_6 - *(float *)(unaff_x19 + 0x47)) * 0.5;
    if (fVar43 <= DAT_028aa298) {
      fVar43 = DAT_028aa298;
    }
    fVar50 = (param_6 - fVar43) * 20.0 + 0.5;
    fVar43 = DAT_02958220;
    if (fVar50 != INFINITY) {
      fVar43 = (float)(int)fVar50 / 20.0;
    }
    if (fVar43 <= (float)param_2) {
      fVar43 = (float)param_2;
    }
    *(float *)((long)unaff_x19 + 0x234) = param_6;
LAB_0248e598:
    *(float *)((long)unaff_x19 + 0x1dc) = fVar43;
    return;
  }
LAB_0248c250:
  plVar42 = (long *)StringLiteral_302;
  plVar27 = (long *)System_Threading_Mutex_TypeInfo;
  in_stack_000017a8 = DAT_02941c08;
  uVar12 = (uint)unaff_x22;
  iVar38 = (int)unaff_x21;
  switch((int)unaff_x19[0x5b]) {
  case 1:
    lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
    if (*(int *)(lVar22 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar22 = *plVar27;
    }
    lVar26 = *(long *)(lVar22 + 0xb8);
    lVar22 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
    if ((*(byte *)(lVar22 + 0x132) & 1) == 0) {
      lVar22 = FUN_00d5941c(lVar22);
    }
    plVar42 = (long *)StringLiteral_302;
    lVar22 = *(long *)(*(long *)(lVar22 + 0xc0) + 8);
    if ((*(byte *)(lVar22 + 0x132) & 1) == 0) {
      lVar22 = FUN_00d5941c();
    }
    piVar19 = (int *)thunk_FUN_00d32ed4(lVar26 + 0x11f0,*(long *)(lVar22 + 0x80) + 0xa0);
    if (*piVar19 == 0) goto LAB_0248e4bc;
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
    iVar11 = FUN_024d66ec();
LAB_0248c900:
    iVar13 = *(int *)((long)unaff_x19 + 0x48c) + -1;
    *(int *)((long)unaff_x19 + 0x48c) = iVar13;
    in_stack_00000140._4_4_ = in_stack_00000140._4_4_ + 1;
    in_stack_00001788 = iVar11 - 1;
    in_stack_000017a8 = CONCAT44(0x2026,iVar13);
    unaff_w25 = in_stack_000017bc;
LAB_0248ab98:
    param_5 = (float)unaff_d13;
    in_stack_00001788 = in_stack_00001788 + 1;
    lVar22 = unaff_x19[0x8e];
    if (lVar22 != 0) {
      if ((int)in_stack_00001788 < (int)*(uint *)(lVar22 + 0x18)) {
        if (*(uint *)(lVar22 + 0x18) <= in_stack_00001788)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        uVar12 = *(uint *)(lVar22 + (long)(int)in_stack_00001788 * 0xc + 0x20);
        if (uVar12 == 0) goto LAB_0248e4dc;
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
        if ((*(char *)((long)unaff_x19 + 0x2fa) != '\0') && (uVar12 == 0x3c)) goto code_r0x0248a9ac;
        if ((*in_stack_00000150 != 0) &&
           (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 != 0)) {
          if (*in_stack_00000148 < *(uint *)(lVar22 + 0x18)) {
            lVar22 = lVar22 + (int)*in_stack_00000148 * unaff_x21;
            *(undefined4 *)((long)unaff_x19 + 0x63c) = *(undefined4 *)(lVar22 + 0x2c);
            *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar22 + 0x58);
            unaff_x19[0x1f] = *(long *)(lVar22 + 0x38);
            goto 
            UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager__GetInputAction
            ;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        break;
      }
LAB_0248e4dc:
      fVar43 = (float)param_2;
      if (((char)unaff_x19[0x46] != '\0') &&
         (fVar43 = DAT_02956ccc,
         DAT_02956ccc < *(float *)((long)unaff_x19 + 0x234) - *(float *)(unaff_x19 + 0x47))) {
        fVar43 = *(float *)((long)unaff_x19 + 0x1dc);
        fVar50 = *(float *)((long)unaff_x19 + 0x24c);
        if ((fVar43 < fVar50) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
          if (*(float *)((long)unaff_x19 + 0x2cc) < *(float *)(unaff_x19 + 0x59) / 100.0) {
            *(undefined4 *)((long)unaff_x19 + 0x2cc) = 0;
          }
          fVar53 = (*(float *)((long)unaff_x19 + 0x234) - fVar43) * 0.5;
          if (fVar53 <= DAT_028aa298) {
            fVar53 = DAT_028aa298;
          }
          *(float *)(unaff_x19 + 0x47) = fVar43;
          fVar53 = (fVar43 + fVar53) * 20.0 + 0.5;
          fVar43 = DAT_02958220;
          if (fVar53 != INFINITY) {
            fVar43 = (float)(int)fVar53 / 20.0;
          }
          if (fVar50 <= fVar43) {
            fVar43 = fVar50;
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
                                      Method_UnityEngine_GameObject_GetComponents<Component>__,
                              uVar16,0);
        if (*(int *)(*plVar42 + 0xe0) == 0) {
          thunk_FUN_00d32864(*plVar42);
        }
        FUN_02660dac(uVar15,0);
      }
      puVar8 = Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__;
      if ((*in_stack_00000148 == 0) || ((*in_stack_00000148 == 1 && (unaff_w25 == 3)))) {
        (**(code **)(*unaff_x19 + 0x958))();
        lVar22 = *(long *)puVar8;
        goto LAB_02491474;
      }
      lVar22 = *plVar27;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar22 = *plVar27;
      }
      plVar27 = (long *)PTR_DAT_033ed410;
      lVar22 = **(long **)(lVar22 + 0xb8);
      if (lVar22 == 0) break;
      if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0xd0))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      iVar38 = *(int *)(lVar22 + (long)(int)*(uint *)(unaff_x19 + 0xd0) * 0x38 + 0x54) << 2;
      if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x60), lVar22 == 0))
      break;
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
      iVar11 = (int)unaff_x19[0x4d];
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
      lVar22 = unaff_x19[0xea];
      in_stack_00000088 = (float *)in_stack_000000b8;
      fStack0000000000000090 = in_stack_000000c0._4_4_;
      if (iVar11 < 0x401) {
        if (iVar11 == 0x100) {
          if (lVar22 == 0) break;
          if (*(uint *)(lVar22 + 0x18) < 2)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          uVar15 = *(undefined8 *)(lVar22 + 0x30);
          if ((int)unaff_x19[0x5b] == 5) {
            if ((*in_stack_00000150 == 0) ||
               (lVar26 = *(long *)(*in_stack_00000150 + 0x58), lVar26 == 0)) break;
            if (*(uint *)(lVar26 + 0x18) <= uStack0000000000000030)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            fVar43 = *(float *)(lVar26 + (long)(int)uStack0000000000000030 * 0x14 + 0x28);
          }
          else {
            fVar43 = *(float *)(unaff_x19 + 0x96);
          }
          fStack0000000000000090 = fStack000000000000002c + 0.0 + *(float *)(lVar22 + 0x2c);
          fVar43 = (0.0 - fVar43) - fStack0000000000000020;
        }
        else if (iVar11 == 0x200) {
          if (lVar22 == 0) break;
          if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0))
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          fStack0000000000000090 = (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
          uVar15 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20)) * 0.5,
                            ((float)*(undefined8 *)(lVar22 + 0x24) +
                            (float)*(undefined8 *)(lVar22 + 0x30)) * 0.5);
          if ((int)unaff_x19[0x5b] == 5) {
            if ((*in_stack_00000150 == 0) ||
               (lVar22 = *(long *)(*in_stack_00000150 + 0x58), lVar22 == 0)) break;
            if (*(uint *)(lVar22 + 0x18) <= uStack0000000000000030)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            lVar22 = lVar22 + (long)(int)uStack0000000000000030 * 0x14;
            fStack0000000000000090 = fStack000000000000002c + 0.0 + fStack0000000000000090;
            fVar43 = ((fStack0000000000000020 + *(float *)(lVar22 + 0x28) +
                      *(float *)(lVar22 + 0x30)) - fStack0000000000000024) * -0.5 + 0.0;
          }
          else {
            fStack0000000000000090 = fStack000000000000002c + 0.0 + fStack0000000000000090;
            fVar43 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x96) + in_stack_000017b8) -
                     fStack0000000000000024) * -0.5 + 0.0;
          }
        }
        else {
          if (iVar11 != 0x400) goto LAB_0248eb64;
          if (lVar22 == 0) break;
          if (*(int *)(lVar22 + 0x18) == 0)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          uVar15 = *(undefined8 *)(lVar22 + 0x24);
          if ((int)unaff_x19[0x5b] == 5) {
            if ((*in_stack_00000150 == 0) ||
               (lVar26 = *(long *)(*in_stack_00000150 + 0x58), lVar26 == 0)) break;
            if (*(uint *)(lVar26 + 0x18) <= uStack0000000000000030)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            in_stack_000017b8 = *(float *)(lVar26 + (long)(int)uStack0000000000000030 * 0x14 + 0x30)
            ;
          }
          fStack0000000000000090 = fStack000000000000002c + 0.0 + *(float *)(lVar22 + 0x20);
          fVar43 = fStack0000000000000024 + (0.0 - in_stack_000017b8);
        }
        in_stack_00000088 =
             (float *)CONCAT44((float)((ulong)uVar15 >> 0x20) + 0.0,(float)uVar15 + fVar43);
      }
      else if (iVar11 == 0x800) {
        if (lVar22 == 0) break;
        if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fVar43 = ((float)*(undefined8 *)(lVar22 + 0x24) + (float)*(undefined8 *)(lVar22 + 0x30)) *
                 0.5;
        fStack0000000000000090 =
             fStack000000000000002c + 0.0 +
             (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
        in_stack_00000088 =
             (float *)CONCAT44(((float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                               (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20)) * 0.5 + 0.0,
                               fVar43 + 0.0);
      }
      else {
        if (iVar11 == 0x1000) {
          if (lVar22 == 0) break;
          if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0))
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          fVar43 = (float)*(undefined8 *)(lVar22 + 0x24) + (float)*(undefined8 *)(lVar22 + 0x30);
          fVar50 = (float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                   (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20);
          fStack0000000000000020 =
               fStack0000000000000020 + *(float *)(unaff_x19 + 0x9c) + *(float *)(unaff_x19 + 0x9b);
          fStack0000000000000090 =
               fStack000000000000002c + 0.0 +
               (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
        }
        else {
          if (iVar11 != 0x2000) goto LAB_0248eb64;
          if (lVar22 == 0) break;
          if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0))
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          fVar43 = (float)*(undefined8 *)(lVar22 + 0x24) + (float)*(undefined8 *)(lVar22 + 0x30);
          fVar50 = (float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                   (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20);
          fStack0000000000000020 = *(float *)((long)unaff_x19 + 0x4b4) - fStack0000000000000020;
          fStack0000000000000090 =
               fStack000000000000002c + 0.0 +
               (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
        }
        fVar43 = fVar43 * 0.5;
        in_stack_00000088 =
             (float *)CONCAT44(fVar50 * 0.5 + 0.0,
                               fVar43 + (0.0 - (fStack0000000000000020 - fStack0000000000000024) *
                                               0.5));
      }
LAB_0248eb64:
      lVar22 = FUN_0249b7f8();
      if (lVar22 == 0) break;
      FUN_026a125c(lVar22,0);
      __x = DAT_028aa048;
      *(float *)((long)unaff_x19 + 0x6dc) = fVar43;
      dVar52 = modf(__x,(double *)&stack0x00000880);
      puVar8 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
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
        fVar62 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
        if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
          fVar62 = fVar62 + 1.0;
        }
      }
      else {
        fVar62 = 255.0;
      }
      dVar52 = modf(__x,(double *)&stack0x00000880);
      if (dVar52 == 0.5) {
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
      if (*(int *)(*(long *)puVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (DAT_037825d3 == '\0') {
        thunk_FUN_00d48444(Unity_AI_Navigation_NavMeshLink_TypeInfo);
        DAT_037825d3 = '\x01';
      }
      puVar8 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
      lVar22 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
      if (*(int *)(lVar22 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar22 = *(long *)puVar8;
      }
      puVar23 = *(undefined4 **)(lVar22 + 0xb8);
      UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
                (*puVar23,puVar23[1],puVar23[2],puVar23[3],&stack0x00001790,0x4000ffff,0);
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      lVar22 = *in_stack_00000150;
      if (lVar22 == 0) break;
      uVar12 = *in_stack_00000148;
      if ((int)uVar12 < 1) {
        iStack00000000000000a4 = 0;
        iVar38 = 0;
        plVar42 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
        goto LAB_02491068;
      }
      lVar22 = *(long *)(lVar22 + 0x38);
      if (lVar22 == 0) break;
      iVar11 = 0;
      bVar7 = false;
      bVar6 = false;
      bVar10 = false;
      iStack00000000000000a4 = 0;
      fStack0000000000000024 = 0.0;
      bVar9 = false;
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
           (int)fVar50 & 0xffU | ((int)fVar53 & 0xffU) << 8 | ((int)fVar62 & 0xffU) << 0x10 |
           (int)fVar51 << 0x18;
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
      uVar25 = 0;
      uVar30 = 1;
      goto LAB_0248ef74;
    }
    break;
  default:
    goto switchD_0248c274_caseD_2;
  case 3:
    if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) != 0) goto LAB_0248c524;
    thunk_FUN_00d32864();
    goto LAB_0248c524;
  case 5:
    unaff_w25 = in_stack_000017bc;
    if ((unaff_w23 != 0) && (-1 < (int)in_stack_00001788)) {
      fVar50 = *(float *)(unaff_x19 + 0x98);
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      in_stack_00001788 = FUN_024d66ec();
      if (in_stack_000000a0 < fVar50 - param_4) goto LAB_0248c628;
      *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
      *(undefined4 *)(unaff_x19 + 0x92) = *(undefined4 *)((long)unaff_x19 + 0x48c);
      param_2 = *(ulong *)(*(long *)(*plVar27 + 0xb8) + 0x15a8);
      *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
      *(undefined4 *)(unaff_x19 + 0x99) = 0;
      lVar22 = NEON_rev64(param_2,4);
      unaff_x19[0x98] = lVar22;
      *(undefined4 *)(unaff_x19 + 0x9a) = 0;
      *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
      *(int *)(unaff_x19 + 0x94) = (int)unaff_x19[0x94] + 1;
      *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
      in_stack_000017a8 = uVar15;
      goto LAB_0248ab98;
    }
    *in_stack_00000148 = 0;
    plVar27 = (long *)System_Threading_Mutex_TypeInfo;
    plVar42 = (long *)StringLiteral_302;
    in_stack_00001788 = 0xffffffff;
    goto LAB_0248ab98;
  case 6:
    if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    in_stack_00001788 = FUN_024d66ec();
    plVar42 = (long *)StringLiteral_302;
    lVar22 = unaff_x19[0x5c];
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)
                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    }
    uVar17 = FUN_02681b9c(lVar22,0,0);
    if ((uVar17 & 1) == 0) goto LAB_0248c628;
    plVar39 = (long *)unaff_x19[0x5c];
    uVar15 = (**(code **)(*unaff_x19 + 0x548))();
    if (plVar39 != (long *)0x0) {
      (**(code **)(*plVar39 + 0x558))(plVar39,uVar15,*(undefined8 *)(*plVar39 + 0x560));
      lVar22 = unaff_x19[0x5c];
      if (lVar22 != 0) {
        *(int *)(lVar22 + 0x3f8) = (int)unaff_x19[0x7f];
        FUN_024c910c(lVar22,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
        plVar39 = (long *)unaff_x19[0x5c];
        if (plVar39 != (long *)0x0) {
          (**(code **)(*plVar39 + 0x7d8))(plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
          goto LAB_0248c628;
        }
      }
    }
  }
  goto LAB_02491464;
code_r0x0248a9ac:
  *(undefined1 *)((long)unaff_x19 + 0x429) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
  uVar17 = FUN_024d0688();
  if (((uVar17 & 1) != 0) &&
     (in_stack_00001788 = in_stack_0000176c, unaff_w25 = uVar12,
     *(int *)((long)unaff_x19 + 0x63c) == 0)) goto LAB_0248ab98;

  UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager__GetInputAction
  :
  if ((unaff_x19[0x6c] == 0) || (lVar22 = *(long *)(unaff_x19[0x6c] + 0x38), lVar22 == 0))
  goto LAB_02491464;
  uVar25 = *in_stack_00000148;
  if (*(uint *)(lVar22 + 0x18) <= uVar25)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar40 = (long)(int)uVar25;
  cVar21 = *(char *)(lVar22 + lVar40 * unaff_x21 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x429) = 0;
  lVar26 = unaff_x19[0x23];
  if ((uint)in_stack_000017a8 == uVar25) {
    uVar12 = (uint)((ulong)in_stack_000017a8 >> 0x20);
    unaff_w20 = 1;
    *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
    if (uVar12 == 0x2026) {
      lVar18 = unaff_x19[0xc9];
      lVar22 = lVar22 + lVar40 * unaff_x21;
      *(undefined4 *)(lVar22 + 0x2c) = 0;
      *(long *)(lVar22 + 0x30) = lVar18;
      *(long *)(lVar22 + 0x38) = unaff_x19[0xca];
      *(long *)(lVar22 + 0x50) = unaff_x19[0xcb];
      *(int *)(lVar22 + 0x58) = (int)unaff_x19[0xcc];
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
      in_stack_000017a8 = CONCAT44(3,uVar25 + 1);
    }
    else if (uVar12 == 3) {
      if ((*unaff_x27 == 0) || (lVar18 = FUN_024b11ac(*unaff_x27,0), lVar18 == 0))
      goto LAB_02491464;
      in_stack_00000bf8 = 3;
      FUN_01299bc0(lVar18,&stack0x00000bf8,&stack0x00000880,*(undefined8 *)PTR_DAT_033ef3c8);
      if (*(uint *)(lVar22 + 0x18) <= uVar25)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      unaff_w20 = 1;
      *(ulong *)(lVar22 + lVar40 * unaff_x21 + 0x30) = CONCAT44(in_stack_00000884,in_stack_00000880)
      ;
      uVar25 = *(uint *)((long)unaff_x19 + 0x48c);
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
    }
  }
  else {
    unaff_w20 = 0;
  }
  plVar27 = (long *)System_Threading_Mutex_TypeInfo;
  unaff_w25 = uVar12;
  if (((int)uVar25 < *(int *)((long)unaff_x19 + 0x31c)) && (uVar12 != 3)) {
    if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 == 0))
    goto LAB_02491464;
    if (*(uint *)(lVar22 + 0x18) <= uVar25)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar22 = lVar22 + (long)(int)uVar25 * (long)iVar38;
    *(undefined1 *)(lVar22 + 0x194) = 0;
    *(undefined2 *)(lVar22 + 0x20) = 0x200b;
    *(undefined4 *)(lVar22 + 100) = 0;
    *in_stack_00000148 = uVar25 + 1;
    goto LAB_0248ab98;
  }
  iVar11 = *(int *)((long)unaff_x19 + 0x63c);
  fVar50 = fVar43;
  if (iVar11 == 0) {
    uVar25 = *(uint *)((long)unaff_x19 + 0x254);
    if ((uVar25 >> 4 & 1) == 0) {
      if ((uVar25 >> 3 & 1) == 0) {
        if ((uVar25 >> 5 & 1) != 0) {
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
            fVar50 = fStack0000000000000028;
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
    unaff_w25 = uVar12;
    if (iVar11 == 0) goto LAB_0248af84;
LAB_0248abc8:
    if (iVar11 == 1) {
      if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar22 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar22 = lVar22 + (int)*in_stack_00000148 * unaff_x21;
      lVar40 = *(long *)(lVar22 + 0x40);
      unaff_x19[0xd2] = lVar40;
      *(undefined4 *)((long)unaff_x19 + 0x69c) = *(undefined4 *)(lVar22 + 0x48);
      if ((lVar40 == 0) || (lVar22 = FUN_024ebfa0(lVar40,0), lVar22 == 0)) goto LAB_02491464;
      FUN_0132138c(lVar22,*(undefined4 *)((long)unaff_x19 + 0x69c),&stack0x00000880,
                   *(undefined8 *)System_Func<KeyValuePair<int,_int>,_int>_TypeInfo);
      puVar8 = System_Threading_Mutex_TypeInfo;
      lVar40 = CONCAT44(in_stack_00000884,in_stack_00000880);
      plVar27 = (long *)System_Threading_Mutex_TypeInfo;
      if (lVar40 == 0) goto LAB_0248ab98;
      if (unaff_w25 == 0x3c) {
        unaff_w25 = *(int *)((long)unaff_x19 + 0x69c) + 0xe000;
      }
      else {
        lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar22 = *(long *)puVar8;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1b4) = *(undefined4 *)(*(long *)(lVar22 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x1f] == 0) goto LAB_02491464;
      fVar53 = *(float *)(unaff_x19 + 0x3c);
      memmove(&stack0x00001700,(void *)(unaff_x19[0x1f] + 0x50),0x60);
      iVar11 = FUN_026fd110(&stack0x00001700,0);
      if (*unaff_x27 == 0) goto LAB_02491464;
      memmove(&stack0x00001700,(void *)(*unaff_x27 + 0x50),0x60);
      fVar51 = (float)FUN_026fd120(&stack0x00001700,0);
      fVar62 = fStack0000000000000084;
      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
        fVar62 = fVar43;
      }
      if (unaff_x19[0xd2] == 0) goto LAB_02491464;
      fVar62 = (fVar53 / (float)iVar11) * fVar51 * fVar62;
      iVar11 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
      fVar53 = *(float *)(unaff_x19 + 0x3c);
      if (iVar11 < 1) {
        if (*unaff_x27 == 0) goto LAB_02491464;
        iVar11 = FUN_026fd110(*unaff_x27 + 0x50,0);
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar51 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
        fVar64 = fStack0000000000000084;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar64 = fVar43;
        }
        if (unaff_x19[0x1f] == 0) goto LAB_02491464;
        fVar43 = (float)FUN_026fd140(unaff_x19[0x1f] + 0x50,0);
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
        fVar59 = (float)FUN_026fd170(*unaff_x27 + 0x50,0);
        if (*unaff_x27 == 0) goto LAB_02491464;
        fVar61 = *(float *)((long)unaff_x19 + 0x3fc);
        fVar47 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
        if (unaff_x19[0x1f] == 0) goto LAB_02491464;
        fVar47 = fVar62 * fVar59 * fVar61 * fVar47;
        fVar64 = (fVar53 / (float)iVar11) * fVar51 * fVar64;
        param_5 = fVar64 * (fVar43 / fVar44) * fVar46 * fVar65;
        fVar64 = fVar64 / param_5;
        fVar45 = fVar64 * fVar45;
        fVar43 = (float)FUN_026fd180(unaff_x19[0x1f] + 0x50,0);
        fVar64 = fVar64 * fVar43;
      }
      else {
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        iVar11 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
        fVar43 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
        if (*(long *)(lVar40 + 0x20) == 0) goto LAB_02491464;
        fVar64 = *(float *)(lVar40 + 0x2c);
        fVar51 = fStack0000000000000084;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar51 = 1.0;
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
        fVar47 = fVar62 * fVar46 * fVar65 * fVar47;
        param_5 = (fVar53 / (float)iVar11) * fVar43 * fVar51 * fVar64 * fVar44;
        fVar64 = (float)FUN_026fd180(unaff_x19[0xd2] + 0x48,0);
      }
      lVar22 = unaff_x19[0x6c];
      unaff_x19[200] = lVar40;
      if ((lVar22 == 0) || (lVar40 = *(long *)(lVar22 + 0x38), lVar40 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar40 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar40 = lVar40 + (int)*in_stack_00000148 * unaff_x21;
      *(undefined4 *)(lVar40 + 0x2c) = 1;
      *(float *)(lVar40 + 0x160) = param_5;
      in_stack_00000130._4_4_ = 0.0;
      *(long *)(lVar40 + 0x40) = unaff_x19[0xd2];
      *(long *)(lVar40 + 0x38) = unaff_x19[0x1f];
      *(int *)(lVar40 + 0x58) = (int)unaff_x19[0x23];
      *(int *)(unaff_x19 + 0x23) = (int)lVar26;
      goto LAB_0248b384;
    }
    lVar22 = *in_stack_00000150;
    fVar53 = 0.0;
    if (unaff_w25 != 3 && unaff_w25 != 0xad) {
      fVar53 = param_5;
    }
    fVar47 = 0.0;
    if (lVar22 == 0) goto LAB_02491464;
    fVar45 = 0.0;
    fVar64 = 0.0;
  }
  else {
    if (iVar11 != 0) goto LAB_0248abc8;
LAB_0248af84:
    if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 == 0))
    goto LAB_02491464;
    uVar25 = *in_stack_00000148;
    uVar12 = *(uint *)(lVar22 + 0x18);
    if (uVar12 <= uVar25)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar26 = *(long *)(lVar22 + (int)uVar25 * unaff_x21 + 0x30);
    unaff_x19[200] = lVar26;
    plVar27 = (long *)System_Threading_Mutex_TypeInfo;
    if (lVar26 == 0) goto LAB_0248ab98;
    lVar40 = lVar22 + (int)uVar25 * unaff_x21;
    lVar26 = *(long *)(lVar40 + 0x38);
    unaff_x19[0x1f] = lVar26;
    unaff_x19[0x22] = *(long *)(lVar40 + 0x50);
    *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar40 + 0x58);
    if (unaff_w20 == 0) {
LAB_0248b014:
      if (lVar26 == 0) goto LAB_02491464;
      fVar53 = *(float *)(unaff_x19 + 0x3c);
      iVar11 = FUN_026fd110(lVar26 + 0x50,0);
      lVar22 = unaff_x19[0x1f];
    }
    else {
      lVar40 = unaff_x19[0x8e];
      if (lVar40 == 0) goto LAB_02491464;
      if (*(uint *)(lVar40 + 0x18) <= in_stack_00001788)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if ((*(int *)(lVar40 + (long)(int)in_stack_00001788 * 0xc + 0x20) != 10) ||
         (uVar25 == *(uint *)(unaff_x19 + 0x92))) goto LAB_0248b014;
      if (uVar12 <= uVar25 - 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (lVar26 == 0) goto LAB_02491464;
      fVar53 = *(float *)(lVar22 + (long)(int)(uVar25 - 1) * (long)iVar38 + 0x60);
      iVar11 = FUN_026fd110(lVar26 + 0x50,0);
      lVar22 = *unaff_x27;
    }
    if (lVar22 == 0) goto LAB_02491464;
    fVar51 = (float)FUN_026fd120(lVar22 + 0x50,0);
    fVar62 = fStack0000000000000084;
    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
      fVar62 = fVar43;
    }
    fVar64 = 0.0;
    fVar45 = 0.0;
    if ((unaff_w20 & unaff_w25 == 0x2026) == 0) {
      if (*unaff_x27 == 0) goto LAB_02491464;
      fVar45 = (float)FUN_026fd140(*unaff_x27 + 0x50,0);
      if (*unaff_x27 == 0) goto LAB_02491464;
      fVar64 = (float)FUN_026fd180(*unaff_x27 + 0x50,0);
    }
    lVar22 = unaff_x19[200];
    if ((lVar22 == 0) || (*(long *)(lVar22 + 0x20) == 0)) goto LAB_02491464;
    fVar43 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar44 = *(float *)(lVar22 + 0x2c);
    param_5 = (float)FUN_026fd668(*(long *)(lVar22 + 0x20),0);
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar46 = (float)FUN_026fd170(*unaff_x27 + 0x50,0);
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar65 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar47 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
    lVar22 = unaff_x19[0x6c];
    if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x38), lVar26 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar26 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar26 = lVar26 + (int)*in_stack_00000148 * unaff_x21;
    *(undefined4 *)(lVar26 + 0x2c) = 0;
    fVar62 = ((fVar50 * fVar53) / (float)iVar11) * fVar51 * fVar62;
    param_5 = fVar62 * fVar43 * fVar44 * param_5;
    *(float *)(lVar26 + 0x160) = param_5;
    uVar12 = *(uint *)(unaff_x19 + 0x23);
    fVar47 = fVar62 * fVar46 * fVar65 * fVar47;
    if (uVar12 == 0) {
      in_stack_00000130._4_4_ = *(float *)(unaff_x19 + 0xc2);
    }
    else {
      lVar26 = unaff_x19[0xe0];
      if (lVar26 == 0) goto LAB_02491464;
      if (*(uint *)(lVar26 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar26 = *(long *)(lVar26 + (long)(int)uVar12 * 8 + 0x20);
      if (lVar26 == 0) goto LAB_02491464;
      in_stack_00000130._4_4_ = *(float *)(lVar26 + 0x4c);
    }
LAB_0248b384:
    fVar43 = 1.0;
    fVar53 = 0.0;
    if (unaff_w25 != 3 && unaff_w25 != 0xad) {
      fVar53 = param_5;
    }
  }
  lVar22 = *(long *)(lVar22 + 0x38);
  if (lVar22 == 0) goto LAB_02491464;
  if (*(uint *)(lVar22 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar22 = lVar22 + (int)*in_stack_00000148 * unaff_x21;
  *(short *)(lVar22 + 0x20) = (short)unaff_w25;
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
  uVar12 = *in_stack_00000148;
  FUN_013b78b8(in_stack_000000b8,&stack0x00000880,
               *(undefined8 *)TMPro_TMP_Dropdown_OptionData_TypeInfo);
  if (*(uint *)(lVar22 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  uVar16 = unaff_x28[1];
  uVar15 = *unaff_x28;
  lVar22 = lVar22 + (int)uVar12 * unaff_x21;
  *(undefined4 *)(lVar22 + 0x18c) = in_stack_00000890;
  *(undefined8 *)(lVar22 + 0x184) = uVar16;
  *(undefined8 *)(lVar22 + 0x17c) = uVar15;
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
  if ((int)unaff_w25 < 0x10000) {
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar12 = FUN_016f68bc(unaff_w25,0);
    unaff_w29 = uVar12 & 1;
  }
  else {
    unaff_w29 = 0;
  }
  fStack00000000000000cc = *(float *)(unaff_x19 + 0x54);
  *(undefined4 *)((long)unaff_x19 + 0x2f4) = 0;
  if (*(char *)((long)unaff_x19 + 0x2f1) == '\0') {
    in_stack_000000b0 = 0.0;
    fVar51 = 0.0;
    fVar62 = 0.0;
  }
  else {
    if (unaff_x19[200] == 0) goto LAB_02491464;
    uVar25 = *in_stack_00000148;
    uVar12 = *(uint *)(unaff_x19[200] + 0x28);
    if ((int)uVar25 < (int)in_stack_00000078._4_4_) {
      if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar22 + 0x18) <= uVar25 + 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar22 = *(long *)(lVar22 + (long)(int)(uVar25 + 1) * (long)iVar38 + 0x30);
      if ((((lVar22 == 0) || (*unaff_x27 == 0)) ||
          (lVar26 = *(long *)(*unaff_x27 + 0x128), lVar26 == 0)) ||
         (lVar26 = *(long *)(lVar26 + 0x18), lVar26 == 0)) goto LAB_02491464;
      in_stack_00000880 = uVar12 | *(int *)(lVar22 + 0x28) << 0x10;
      uVar17 = FUN_0129eff4(lVar26,&stack0x00000880,&stack0x000016d8,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                           );
      uVar67 = 0;
      if ((uVar17 & 1) == 0) {
        in_stack_000000b0 = 0.0;
        fVar51 = 0.0;
        fVar62 = 0.0;
      }
      else {
        if (in_stack_000016d8 == 0) goto LAB_02491464;
        fVar62 = *(float *)(in_stack_000016d8 + 0x14);
        fVar51 = *(float *)(in_stack_000016d8 + 0x18);
        in_stack_000000b0 = *(float *)(in_stack_000016d8 + 0x1c);
        uVar67 = *(undefined4 *)(in_stack_000016d8 + 0x20);
        if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
          fStack00000000000000cc = 0.0;
        }
      }
      uVar25 = *in_stack_00000148;
    }
    else {
      uVar67 = 0;
      in_stack_000000b0 = 0.0;
      fVar51 = 0.0;
      fVar62 = 0.0;
    }
    if (0 < (int)uVar25) {
      if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar22 + 0x18) <= (uint)((long)(int)uVar25 + -1))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar22 = *(long *)(lVar22 + ((long)(int)uVar25 + -1) * unaff_x21 + 0x30);
      if (((lVar22 == 0) || (*unaff_x27 == 0)) ||
         ((lVar26 = *(long *)(*unaff_x27 + 0x128), lVar26 == 0 ||
          (lVar26 = *(long *)(lVar26 + 0x18), lVar26 == 0)))) goto LAB_02491464;
      in_stack_00000880 = *(uint *)(lVar22 + 0x28) | uVar12 << 0x10;
      uVar17 = FUN_0129eff4(lVar26,&stack0x00000880,&stack0x000016d8,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                           );
      if ((uVar17 & 1) != 0) {
        if ((in_stack_000016d8 == 0) ||
           (fVar62 = (float)FUN_024bb1bc(fVar62,fVar51,in_stack_000000b0,uVar67,
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
    fVar46 = fVar46 - fVar53 * fVar44 * (fVar43 - *(float *)((long)unaff_x19 + 0x2cc));
    *(float *)(unaff_x19 + 199) = fVar46;
    if ((unaff_w29 != 0) || (unaff_w25 == 0x200b)) {
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
         (fVar43 - *(float *)((long)unaff_x19 + 0x2cc)) *
         (fVar44 * 0.5 - fVar53 * (fVar46 * 0.5 + fVar65));
    *(float *)(unaff_x19 + 199) = *(float *)(unaff_x19 + 199) + fStack0000000000000080;
  }
  if (((cVar21 == '\0') && (*(int *)((long)unaff_x19 + 0x63c) == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x254) & 1) != 0)) {
    lVar22 = unaff_x19[0x22];
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar17 = FUN_02681b9c(lVar22,0,0);
    fVar46 = 0.0;
    if ((uVar17 & 1) != 0) {
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
      uVar17 = FUN_0267e1d8(lVar22,*(undefined4 *)
                                    (*(long *)(*(long *)
                                                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                              + 0xb8) + 0x54),0);
      if ((uVar17 & 1) != 0) {
        lVar22 = unaff_x19[0x22];
        if (*(int *)(*plVar27 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          plVar27 = (long *)
                    Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
          ;
        }
        if (lVar22 == 0) goto LAB_02491464;
        fVar44 = (float)FUN_0267f610(lVar22,*(undefined4 *)(*(long *)(*plVar27 + 0xb8) + 0x54),0);
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
    lVar22 = unaff_x19[0x22];
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar17 = FUN_02681b9c(lVar22,0,0);
    in_stack_000000c0._4_4_ = 0.0;
    if ((uVar17 & 1) != 0) {
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
      uVar17 = FUN_0267e1d8(lVar22,*(undefined4 *)
                                    (*(long *)(*(long *)
                                                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                              + 0xb8) + 0x54),0);
      if ((uVar17 & 1) != 0) {
        lVar22 = unaff_x19[0x22];
        if (*(int *)(*plVar27 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          plVar27 = (long *)
                    Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
          ;
        }
        if (lVar22 == 0) goto LAB_02491464;
        uVar17 = FUN_0267e1d8(lVar22,*(undefined4 *)(*(long *)(*plVar27 + 0xb8) + 0xcc),0);
        if ((uVar17 & 1) != 0) {
          lVar22 = unaff_x19[0x22];
          if (*(int *)(*plVar27 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            plVar27 = (long *)
                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
            ;
          }
          if (lVar22 == 0) goto LAB_02491464;
          fVar44 = (float)FUN_0267f610(lVar22,*(undefined4 *)(*(long *)(*plVar27 + 0xb8) + 0x54),0);
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
  fVar59 = *(float *)(unaff_x19 + 199);
  fVar44 = (float)FUN_026fd464(&stack0x00001770,0);
  fVar59 = fVar59 + (fVar43 - *(float *)((long)unaff_x19 + 0x2cc)) *
                    fVar53 * (fVar62 + ((fVar44 - in_stack_00000130._4_4_) - fVar46));
  fVar62 = (float)FUN_026fd46c(&stack0x00001770,0);
  fVar44 = *(float *)((long)unaff_x19 + 0x614) +
           ((fVar47 + fVar53 * (fVar51 + in_stack_00000130._4_4_ + fVar62)) -
           *(float *)(unaff_x19 + 0x9a));
  fVar62 = (float)FUN_026fd45c(&stack0x00001770,0);
  fVar65 = fVar44 - fVar53 * (in_stack_00000130._4_4_ + in_stack_00000130._4_4_ + fVar62);
  fVar62 = (float)FUN_026fd454(&stack0x00001770,0);
  fVar51 = fVar59 + (fVar43 - *(float *)((long)unaff_x19 + 0x2cc)) *
                    fVar53 * (fVar46 + fVar46 +
                             in_stack_00000130._4_4_ + in_stack_00000130._4_4_ + fVar62);
  fVar43 = fVar59;
  fVar62 = fVar51;
  if (((*(int *)((long)unaff_x19 + 0x63c) == 0) && (cVar21 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x254) >> 1 & 1) != 0)) {
    fVar61 = (float)(int)unaff_x19[0xbd] * fStack000000000000004c;
    fVar43 = (float)FUN_026fd46c(&stack0x00001770,0);
    fVar49 = fVar61 * fVar53 * (fVar46 + in_stack_00000130._4_4_ + fVar43);
    fVar43 = (float)FUN_026fd46c(&stack0x00001770,0);
    fVar62 = (float)FUN_026fd45c(&stack0x00001770,0);
    fVar44 = fVar44 + 0.0;
    fVar65 = fVar65 + 0.0;
    fVar61 = fVar61 * fVar53 * (((fVar43 - fVar62) - in_stack_00000130._4_4_) - fVar46);
    fVar62 = fVar51 + fVar61;
    fVar43 = fVar59 + fVar49;
    fVar57 = (fVar49 - fVar61) * 0.5;
    fVar59 = (fVar59 + fVar61) - fVar57;
    fVar51 = (fVar51 + fVar49) - fVar57;
    fVar43 = fVar43 - fVar57;
    fVar62 = fVar62 - fVar57;
  }
  in_stack_00000118 = (ulong)(uint)fVar53;
  if (*(char *)((long)unaff_x19 + 0x46c) == '\0') {
    fVar49 = 0.0;
    fVar60 = 0.0;
    fStack00000000000000e0 = 0.0;
    fStack00000000000000e4 = 0.0;
    fVar57 = fVar65;
    fVar61 = fVar44;
    fStack00000000000000e8 = fVar43;
    fStack00000000000000ec = fVar59;
  }
  else {
    thunk_FUN_026935f0(_uStack0000000000000060,0);
    fVar63 = (fVar51 + fVar59) * 0.5;
    fVar66 = (fVar65 + fVar44) * 0.5;
    fVar44 = fVar44 - fVar66;
    fVar55 = 0.0;
    fVar61 = fVar44;
    fVar48 = (float)FUN_02692df0(fVar43 - fVar63,_uStack0000000000000060,0);
    fVar65 = fVar65 - fVar66;
    fVar56 = 0.0;
    fVar43 = fVar65;
    fVar59 = (float)FUN_02692df0(fVar59 - fVar63,_uStack0000000000000060,0);
    fVar60 = 0.0;
    fVar51 = (float)FUN_02692df0(fVar51 - fVar63,_uStack0000000000000060,0);
    fVar51 = fVar63 + fVar51;
    fVar44 = fVar66 + fVar44;
    fVar60 = fVar60 + 0.0;
    fVar49 = 0.0;
    fVar62 = (float)FUN_02692df0(fVar62 - fVar63,_uStack0000000000000060,0);
    fVar62 = fVar63 + fVar62;
    fVar65 = fVar66 + fVar65;
    fVar49 = fVar49 + 0.0;
    fVar57 = fVar66 + fVar43;
    fVar61 = fVar66 + fVar61;
    fStack00000000000000e8 = fVar63 + fVar48;
    fStack00000000000000ec = fVar63 + fVar59;
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
  *(float *)(lVar22 + 0x120) = fVar57;
  *(float *)(lVar22 + 0x11c) = fStack00000000000000ec;
  *(float *)(lVar22 + 0x124) = fStack00000000000000e0;
  if (*in_stack_00000150 == 0) goto LAB_02491464;
  lVar22 = *(long *)(*in_stack_00000150 + 0x38);
  unaff_s12 = 1.0;
  fVar43 = 1.0;
  if (lVar22 == 0) goto LAB_02491464;
  if (*(uint *)(lVar22 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar22 = lVar22 + (int)*in_stack_00000148 * unaff_x21;
  *(float *)(lVar22 + 0x114) = fVar61;
  *(float *)(lVar22 + 0x110) = fStack00000000000000e8;
  *(float *)(lVar22 + 0x118) = fStack00000000000000e4;
  if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar22 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar22 = lVar22 + (int)*in_stack_00000148 * unaff_x21;
  *(float *)(lVar22 + 0x128) = fVar51;
  *(float *)(lVar22 + 300) = fVar44;
  *(float *)(lVar22 + 0x130) = fVar60;
  if (*in_stack_00000150 == 0) goto LAB_02491464;
  lVar22 = *(long *)(*in_stack_00000150 + 0x38);
  unaff_d14 = (ulong)(uint)fVar46;
  if (lVar22 == 0) goto LAB_02491464;
  if (*(uint *)(lVar22 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar22 = lVar22 + (int)*in_stack_00000148 * unaff_x21;
  *(float *)(lVar22 + 0x134) = fVar62;
  *(float *)(lVar22 + 0x138) = fVar65;
  *(float *)(lVar22 + 0x13c) = fVar49;
  if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 == 0))
  goto LAB_02491464;
  uVar12 = *in_stack_00000148;
  unaff_x22 = (long)(int)uVar12;
  if (*(uint *)(lVar22 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar26 = lVar22 + unaff_x22 * unaff_x21;
  *(int *)(lVar26 + 0x140) = (int)unaff_x19[199];
  fVar44 = *(float *)(unaff_x19 + 0x9a);
  param_2 = (ulong)(uint)fVar44;
  fVar62 = *(float *)((long)unaff_x19 + 0x614);
  *(float *)(lVar26 + 0x15c) = (fVar51 - fStack00000000000000ec) / (fVar61 - fVar57);
  *(float *)(lVar26 + 0x14c) = (fVar47 - fVar44) + fVar62;
  fVar45 = fVar45 * fVar53;
  if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
    fVar45 = fVar45 / fVar50;
    fVar64 = (fVar64 * fVar53) / fVar50;
  }
  else {
    fVar64 = fVar64 * fVar53;
  }
  unaff_w24 = *(uint *)(unaff_x19 + 0x92);
  bVar9 = unaff_w29 != 0;
  fVar45 = fVar62 + fVar45;
  bVar10 = uVar12 != unaff_w24;
  if (bVar10 && bVar9) {
    fVar62 = *(float *)(unaff_x19 + 0x98);
    lVar22 = lVar22 + unaff_x22 * unaff_x21;
    *(float *)(lVar22 + 0x154) = fVar62;
    fVar64 = *(float *)((long)unaff_x19 + 0x4c4);
    *(float *)(lVar22 + 0x148) = fVar62 - fVar44;
    *(float *)(lVar22 + 0x158) = fVar64;
    *(float *)(unaff_x19 + 0x97) = fVar62 - fVar44;
    fVar64 = fVar64 - fVar44;
    *(float *)(lVar22 + 0x150) = fVar64;
  }
  else {
    fVar64 = fVar62 + fVar64;
    fVar51 = fVar45;
    fVar46 = fVar64;
    if (fVar62 != 0.0) {
      fVar51 = (fVar45 - fVar62) / *(float *)((long)unaff_x19 + 0x3fc);
      fVar46 = (fVar64 - fVar62) / *(float *)((long)unaff_x19 + 0x3fc);
      if (fVar51 <= fVar45) {
        fVar51 = fVar45;
      }
      if (fVar64 <= fVar46) {
        fVar46 = fVar64;
      }
    }
    lVar22 = lVar22 + unaff_x22 * unaff_x21;
    fVar62 = fVar51;
    if (fVar51 <= *(float *)(unaff_x19 + 0x98)) {
      fVar62 = *(float *)(unaff_x19 + 0x98);
    }
    fVar47 = fVar46;
    if (*(float *)((long)unaff_x19 + 0x4c4) <= fVar46) {
      fVar47 = *(float *)((long)unaff_x19 + 0x4c4);
    }
    *(float *)((long)unaff_x19 + 0x4c4) = fVar47;
    fVar64 = fVar64 - fVar44;
    *(float *)(unaff_x19 + 0x98) = fVar62;
    *(float *)(lVar22 + 0x154) = fVar51;
    *(float *)(lVar22 + 0x158) = fVar46;
    *(float *)(lVar22 + 0x148) = fVar45 - fVar44;
    *(float *)(unaff_x19 + 0x97) = fVar45 - fVar44;
    *(float *)(lVar22 + 0x150) = fVar64;
  }
  *(float *)((long)unaff_x19 + 0x4bc) = fVar64;
  if (((int)unaff_x19[0x94] == 0) || (*(char *)((long)unaff_x19 + 0x334) != '\0')) {
    if (!bVar10 || !bVar9) {
      *(float *)(unaff_x19 + 0x96) = fVar62;
      if (unaff_x19[0x1f] == 0) goto LAB_02491464;
      fVar62 = *(float *)((long)unaff_x19 + 0x4b4);
      fVar51 = (float)FUN_026fd150(unaff_x19[0x1f] + 0x50,0);
      fVar50 = (fVar53 * fVar51) / fVar50;
      param_2 = (ulong)*(uint *)(unaff_x19 + 0x9a);
      if (fVar62 <= fVar50) {
        fVar62 = fVar50;
      }
      *(float *)((long)unaff_x19 + 0x4b4) = fVar62;
      goto LAB_0248bef4;
    }
  }
  else {
LAB_0248bef4:
    if ((!bVar10 || !bVar9) && (float)param_2 == 0.0) {
      fVar50 = *(float *)(in_stack_00000070 + 0x208);
      if (*(float *)(in_stack_00000070 + 0x208) <= fVar45) {
        fVar50 = fVar45;
      }
      *(float *)(in_stack_00000070 + 0x208) = fVar50;
    }
  }
  lVar22 = *in_stack_00000150;
  if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x38), lVar26 == 0)) goto LAB_02491464;
  uVar25 = *in_stack_00000148;
  if (*(uint *)(lVar26 + 0x18) <= uVar25)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar26 = lVar26 + (int)uVar25 * unaff_x21;
  *(undefined1 *)(lVar26 + 0x194) = 0;
  unaff_w26 = *(uint *)(unaff_x19 + 0x4e) & 0x18;
  in_stack_000017bc = unaff_w25;
  if ((unaff_w25 == 9) ||
     (((((unaff_w29 == 0 && (unaff_w25 != 3)) && (unaff_w25 != 0x200b)) && (unaff_w25 != 0xad)) ||
      (((unaff_w25 == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) != 0 ||
       (*(int *)((long)unaff_x19 + 0x63c) == 1)))))) {
    *(undefined1 *)(lVar26 + 0x194) = 1;
    pfVar28 = in_stack_00000088;
    pfVar32 = _fStack0000000000000098;
    if (unaff_w20 != 0) {
      lVar22 = *(long *)(lVar22 + 0x50);
      if (lVar22 == 0) goto LAB_02491464;
      if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      pfVar32 = (float *)(lVar22 + 0x60);
      pfVar28 = (float *)(lVar22 + 100);
    }
    unaff_s8 = *pfVar32;
    unaff_s9 = *pfVar28;
    fVar50 = *(float *)(unaff_x19 + 0x6b);
    unaff_s10 = *(float *)(unaff_x19 + 199);
    in_stack_000000d8._4_4_ = (fStack0000000000000090 - unaff_s8) - unaff_s9;
    bVar9 = true;
    if ((fVar50 <= in_stack_000000d8._4_4_) && (bVar9 = false, !NAN(fVar50))) {
      bVar9 = fVar50 == -1.0;
    }
    if (!bVar9) {
      in_stack_000000d8._4_4_ = fVar50;
    }
    param_1 = 0.0;
    if ((char)unaff_x19[0x1d] == '\0') {
      param_1 = (float)FUN_026fd474(&stack0x00001770,0);
      param_2 = (ulong)*(uint *)(unaff_x19 + 0x9a);
    }
    param_4 = *(float *)((long)unaff_x19 + 0x4c4);
    param_3 = *(float *)((long)unaff_x19 + 0x2cc);
    fVar50 = (float)param_2;
    if (unaff_w25 != 0xad) {
      param_5 = fVar53;
    }
    fVar53 = 0.0;
    if ((0.0 < fVar50) && (fVar53 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
      fVar53 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
    }
    fVar53 = (*(float *)(unaff_x19 + 0x96) - (param_4 - fVar50)) + fVar53;
    unaff_w23 = *in_stack_00000148;
    uVar15 = in_stack_000017a8;
    if (in_stack_000000a0 < fVar53) {
      if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
        *(uint *)((long)unaff_x19 + 0x2dc) = unaff_w23;
      }
      fVar43 = unaff_s12;
      if ((char)unaff_x19[0x46] == '\0') goto LAB_0248c250;
      fVar43 = *(float *)(unaff_x19 + 0x58);
      if (((*(float *)((long)unaff_x19 + 0x2b4) <= fVar43) || (fVar50 <= 0.0)) ||
         ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c))) {
        param_6 = *(float *)((long)unaff_x19 + 0x1dc);
        param_2 = (ulong)(uint)*(float *)(unaff_x19 + 0x49);
        fVar43 = unaff_s12;
        if (param_6 <= *(float *)(unaff_x19 + 0x49)) goto LAB_0248c250;
        in_w8 = *(int *)((long)unaff_x19 + 0x23c);
        goto code_r0x0248c244;
      }
      fVar50 = *(float *)((long)unaff_x19 + 0x2b4) +
               ((in_stack_00000018._4_4_ - fVar53) / (float)(int)unaff_x19[0x94]) /
               fStack0000000000000054;
      if (fVar50 <= fVar43) {
        fVar50 = fVar43;
      }
LAB_0248ea5c:
      *(float *)((long)unaff_x19 + 0x2b4) = fVar50;
      return;
    }
switchD_0248c274_caseD_2:
    in_stack_000017a8 = uVar15;
    plVar27 = (long *)System_Threading_Mutex_TypeInfo;
    fVar53 = fVar43 - param_3;
    param_2 = (ulong)(uint)fVar53;
    fVar62 = ABS(unaff_s10) + param_1 * fVar53 * param_5;
    fVar50 = _DAT_0294c6e8;
    if (unaff_w26 == 0) {
      fVar50 = fVar43;
    }
    if (fVar50 * in_stack_000000d8._4_4_ < fVar62) {
      if (((char)unaff_x19[0x5a] != '\0') && (unaff_w23 != *(uint *)(unaff_x19 + 0x92))) {
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00001788 = FUN_024d66ec();
        if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
          lVar22 = *in_stack_00000150;
          if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x38), lVar26 == 0)) goto LAB_02491464;
          if (*(uint *)(lVar26 + 0x18) <= *in_stack_00000148)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          fVar43 = *(float *)(unaff_x19 + 0x9a);
          fVar53 = 0.0;
          if ((0.0 < fVar43) && (fVar53 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
            fVar53 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
          }
          fVar53 = fStack00000000000000c8 * *(float *)(unaff_x19 + 0x56) +
                   *(float *)(lVar26 + (int)*in_stack_00000148 * unaff_x21 + 0x154) +
                   (fVar53 - *(float *)((long)unaff_x19 + 0x4c4)) +
                   fStack0000000000000054 *
                   (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4));
        }
        else {
          lVar22 = unaff_x19[0x6c];
          *(undefined1 *)((long)unaff_x19 + 700) = 1;
          if (lVar22 == 0) goto LAB_02491464;
          fVar43 = *(float *)(unaff_x19 + 0x9a);
          fVar53 = *(float *)(unaff_x19 + 0x57) +
                   fStack00000000000000c8 * *(float *)(unaff_x19 + 0x56);
        }
        puVar8 = System_Threading_Mutex_TypeInfo;
        lVar22 = *(long *)(lVar22 + 0x38);
        if (lVar22 == 0) goto LAB_02491464;
        uVar25 = *(uint *)((long)unaff_x19 + 0x48c);
        if ((*(uint *)(lVar22 + 0x18) <= uVar25) ||
           (uVar30 = uVar25 - 1, *(uint *)(lVar22 + 0x18) <= uVar30))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        param_2 = (ulong)(uint)(fVar53 + *(float *)(unaff_x19 + 0x96));
        fVar43 = (fVar53 + *(float *)(unaff_x19 + 0x96) + fVar43) -
                 *(float *)(lVar22 + (int)uVar25 * unaff_x21 + 0x158);
        if (((in_stack_00000068._4_1_ & 1) == 0 &&
             *(short *)(lVar22 + (long)(int)uVar30 * (long)iVar38 + 0x20) == 0xad) &&
           ((fVar43 < in_stack_000000a0 || ((int)unaff_x19[0x5b] == 0)))) {
          in_stack_00001788 = in_stack_00001788 - 1;
          in_stack_00000068._4_1_ = 0;
          in_stack_000017a8 = CONCAT44(0x2d,uVar30);
          *in_stack_00000148 = uVar30;
          goto LAB_0248cf04;
        }
        if (*(short *)(lVar22 + (int)uVar25 * unaff_x21 + 0x20) == 0xad) {
          in_stack_00000068._4_1_ = 1;
          goto LAB_0248cf04;
        }
        if ((bStack000000000000005c & *(byte *)(unaff_x19 + 0x46) & 1) != 0) {
          param_3 = *(float *)((long)unaff_x19 + 0x2cc);
          fVar51 = *(float *)(unaff_x19 + 0x59) / 100.0;
          if ((fVar51 <= param_3) || ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c))) {
            fVar51 = *(float *)((long)unaff_x19 + 0x1dc);
            param_2 = (ulong)(uint)fVar51;
            fVar53 = *(float *)(unaff_x19 + 0x49);
            if ((fVar53 < fVar51) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
            goto LAB_024914c0;
            goto LAB_0248cc70;
          }
LAB_0249155c:
          fVar43 = fVar62;
          if (0.0 < param_3) {
            fVar43 = fVar62 / (1.0 - param_3);
          }
          param_3 = param_3 + (fVar62 - fVar50 * (in_stack_000000d8._4_4_ + DAT_02958218)) / fVar43;
LAB_0249154c:
          if (fVar51 <= param_3) {
            param_3 = fVar51;
          }
          *(float *)((long)unaff_x19 + 0x2cc) = param_3;
          return;
        }
LAB_0248cc70:
        lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar22 = *(long *)puVar8;
        }
        iVar11 = *(int *)(*(long *)(lVar22 + 0xb8) + 0xe78);
        if ((((float)iVar11 != fStack0000000000000034) && (iVar11 != -1)) &&
           (((bStack000000000000005c ^ 1) & 1) == 0)) {
          if (*(int *)(lVar22 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          in_stack_00001788 = FUN_024d66ec();
          if ((unaff_x19[0x6c] == 0) || (lVar22 = *(long *)(unaff_x19[0x6c] + 0x38), lVar22 == 0))
          goto LAB_02491464;
          uVar25 = *in_stack_00000148 - 1;
          if (*(uint *)(lVar22 + 0x18) <= uVar25)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          fStack0000000000000034 = (float)iVar11;
          if (*(short *)(lVar22 + (long)(int)uVar25 * (long)iVar38 + 0x20) == 0xad) {
            in_stack_00001788 = in_stack_00001788 - 1;
            in_stack_00000068._4_1_ = 0;
            in_stack_000017a8 = CONCAT44(0x2d,uVar25);
            *in_stack_00000148 = uVar25;
            goto LAB_0248cf04;
          }
        }
        if (fVar43 <= in_stack_000000a0) {
          param_2 = unaff_d13;
          FUN_024d7014(fStack0000000000000054,unaff_d13,fStack00000000000000c8,
                       *(undefined4 *)((long)unaff_x19 + 0x2f4),in_stack_000000c0._4_4_,
                       fStack00000000000000cc,in_stack_000000d8._4_4_,fStack0000000000000048);
          bStack000000000000005c = 1;
          in_stack_00000068._4_1_ = 0;
          fStack0000000000000058 = 1.4013e-45;
LAB_0248cf04:
          fVar43 = 1.0;
          plVar27 = (long *)System_Threading_Mutex_TypeInfo;
          plVar42 = (long *)StringLiteral_302;
          unaff_w25 = in_stack_000017bc;
          goto LAB_0248ab98;
        }
        if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
          *(undefined4 *)((long)unaff_x19 + 0x2dc) = *(undefined4 *)((long)unaff_x19 + 0x48c);
        }
        plVar42 = (long *)StringLiteral_302;
        plVar27 = (long *)System_Threading_Mutex_TypeInfo;
        if ((char)unaff_x19[0x46] != '\0') {
          fVar53 = *(float *)(unaff_x19 + 0x58);
          if ((fVar53 < *(float *)((long)unaff_x19 + 0x2b4)) &&
             (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
            fVar50 = *(float *)((long)unaff_x19 + 0x2b4) +
                     ((in_stack_00000018._4_4_ - fVar43) / (float)((int)unaff_x19[0x94] + 1)) /
                     fStack0000000000000054;
            if (fVar50 <= fVar53) {
              fVar50 = fVar53;
            }
            goto LAB_0248ea5c;
          }
          param_3 = *(float *)((long)unaff_x19 + 0x2cc);
          fVar51 = *(float *)(unaff_x19 + 0x59) / 100.0;
          if ((param_3 < fVar51) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
          goto LAB_0249155c;
          fVar51 = *(float *)((long)unaff_x19 + 0x1dc);
          param_2 = (ulong)(uint)fVar51;
          fVar53 = *(float *)(unaff_x19 + 0x49);
          if ((fVar53 < fVar51) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
LAB_024914c0:
            fVar43 = (fVar51 - *(float *)(unaff_x19 + 0x47)) * 0.5;
            if (fVar43 <= DAT_028aa298) {
              fVar43 = DAT_028aa298;
            }
            *(float *)((long)unaff_x19 + 0x234) = fVar51;
            fVar50 = (fVar51 - fVar43) * 20.0 + 0.5;
            fVar43 = DAT_02958220;
            if (fVar50 != INFINITY) {
              fVar43 = (float)(int)fVar50 / 20.0;
            }
            if (fVar43 <= fVar53) {
              fVar43 = fVar53;
            }
            goto LAB_0248e598;
          }
        }
        fVar43 = 1.0;
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
          lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
          if (*(int *)(lVar22 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar22 = *plVar27;
          }
          lVar26 = *(long *)(lVar22 + 0xb8);
          lVar22 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
          if ((*(byte *)(lVar22 + 0x132) & 1) == 0) {
            lVar22 = FUN_00d5941c(lVar22);
          }
          lVar22 = *(long *)(*(long *)(lVar22 + 0xc0) + 8);
          if ((*(byte *)(lVar22 + 0x132) & 1) == 0) {
            lVar22 = FUN_00d5941c();
          }
          piVar19 = (int *)thunk_FUN_00d32ed4(lVar26 + 0x11f0,*(long *)(lVar22 + 0x80) + 0xa0);
          if (*piVar19 != 0)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__SetupBlockedReticle;
          in_stack_00000068._4_1_ = 0;
LAB_0248e4bc:
          in_stack_000017a8 = DAT_02941c08;
          in_stack_00000148[0] = 0;
          in_stack_00000148[1] = 0;
          in_stack_00001788 = 0xffffffff;
          unaff_w25 = in_stack_000017bc;
          goto LAB_0248ab98;
        case 3:
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          in_stack_00001788 = FUN_024d66ec();
          in_stack_00000068._4_1_ = 0;
LAB_0248c628:
          in_stack_000017a8 = CONCAT44(3,unaff_w23);
          unaff_w25 = in_stack_000017bc;
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
          lVar22 = unaff_x19[0x5c];
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar17 = FUN_02681b9c(lVar22,0,0);
          if ((uVar17 & 1) != 0) {
            plVar39 = (long *)unaff_x19[0x5c];
            uVar15 = (**(code **)(*unaff_x19 + 0x548))();
            if (plVar39 == (long *)0x0) goto LAB_02491464;
            (**(code **)(*plVar39 + 0x558))(plVar39,uVar15,*(undefined8 *)(*plVar39 + 0x560));
            lVar22 = unaff_x19[0x5c];
            if (lVar22 == 0) goto LAB_02491464;
            *(int *)(lVar22 + 0x3f8) = (int)unaff_x19[0x7f];
            FUN_024c910c(lVar22,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
            plVar39 = (long *)unaff_x19[0x5c];
            if (plVar39 == (long *)0x0) goto LAB_02491464;
            (**(code **)(*plVar39 + 0x7d8))(plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7e0));
            *(undefined1 *)(unaff_x19 + 0x5e) = 1;
          }
          in_stack_00000068._4_1_ = 0;
LAB_0248ca1c:
          fVar43 = 1.0;
          in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
          unaff_w25 = in_stack_000017bc;
          goto LAB_0248ab98;
        default:
          in_stack_00000068._4_1_ = 0;
          unaff_w25 = in_stack_000017bc;
          goto LAB_0248cf18;
        }
        in_stack_00000068._4_1_ = 0;
        bStack000000000000005c = 1;
        fStack0000000000000058 = 1.4013e-45;
        plVar27 = (long *)System_Threading_Mutex_TypeInfo;
        plVar42 = (long *)StringLiteral_302;
        unaff_w25 = in_stack_000017bc;
        goto LAB_0248ab98;
      }
      if (((char)unaff_x19[0x46] != '\0') &&
         (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
        fVar51 = *(float *)(unaff_x19 + 0x59) / 100.0;
        if (param_3 < fVar51) {
          fVar43 = fVar62 / fVar53;
          if (param_3 <= 0.0) {
            fVar43 = fVar62;
          }
          param_3 = param_3 + (fVar62 - fVar50 * (in_stack_000000d8._4_4_ + DAT_02958218)) / fVar43;
          goto LAB_0249154c;
        }
        fVar51 = *(float *)((long)unaff_x19 + 0x1dc);
        param_2 = (ulong)(uint)fVar51;
        fVar53 = *(float *)(unaff_x19 + 0x49);
        if (fVar53 < fVar51) goto LAB_024914c0;
      }
      iVar11 = (int)unaff_x19[0x5b];
      if (iVar11 == 1) {
        fVar43 = 1.0;
        lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar22 = *plVar27;
        }
        plVar42 = (long *)StringLiteral_302;
        lVar26 = *(long *)(lVar22 + 0xb8);
        lVar22 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
        if ((*(byte *)(lVar22 + 0x132) & 1) == 0) {
          lVar22 = FUN_00d5941c(lVar22);
        }
        lVar22 = *(long *)(*(long *)(lVar22 + 0xc0) + 8);
        if ((*(byte *)(lVar22 + 0x132) & 1) == 0) {
          lVar22 = FUN_00d5941c();
        }
        piVar19 = (int *)thunk_FUN_00d32ed4(lVar26 + 0x11f0,*(long *)(lVar22 + 0x80) + 0xa0);
        if (*piVar19 != 0) {
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
        goto LAB_0248e4bc;
      }
      fVar43 = 1.0;
      if (iVar11 == 6) {
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar42 = (long *)StringLiteral_302;
        in_stack_00001788 = FUN_024d66ec();
        lVar22 = unaff_x19[0x5c];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            );
        }
        uVar17 = FUN_02681b9c(lVar22,0,0);
        if ((uVar17 & 1) != 0) {
          plVar39 = (long *)unaff_x19[0x5c];
          uVar15 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar39 == (long *)0x0) goto LAB_02491464;
          (**(code **)(*plVar39 + 0x558))(plVar39,uVar15,*(undefined8 *)(*plVar39 + 0x560));
          lVar22 = unaff_x19[0x5c];
          if (lVar22 == 0) goto LAB_02491464;
          *(int *)(lVar22 + 0x3f8) = (int)unaff_x19[0x7f];
          FUN_024c910c(lVar22,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
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
LAB_0248c524:
        plVar42 = (long *)StringLiteral_302;
        in_stack_00001788 = FUN_024d66ec();
        goto LAB_0248c628;
      }
    }
LAB_0248cf18:
    if (unaff_w25 == 0xad) {
      if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar22 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      *(undefined1 *)(lVar22 + (int)*in_stack_00000148 * unaff_x21 + 0x194) = 0;
      unaff_w25 = in_stack_000017bc;
    }
    else {
      if (unaff_w25 == 9) {
        lVar22 = *in_stack_00000150;
        if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x38), lVar26 == 0)) goto LAB_02491464;
        uVar25 = *in_stack_00000148;
        if (*(uint *)(lVar26 + 0x18) <= uVar25)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        *(undefined1 *)(lVar26 + (int)uVar25 * unaff_x21 + 0x194) = 0;
        *(uint *)((long)unaff_x19 + 0x49c) = uVar25;
        lVar26 = *(long *)(lVar22 + 0x50);
        if (lVar26 == 0) goto LAB_02491464;
        if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
        *(int *)(lVar26 + 0x2c) = *(int *)(lVar26 + 0x2c) + 1;
        goto LAB_0248cf8c;
      }
      if (*(int *)((long)unaff_x19 + 0x63c) == 1) {
        (**(code **)(*unaff_x19 + 0x8c8))();
      }
      else if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
        (**(code **)(*unaff_x19 + 0x8b8))(in_stack_00000130._4_4_,unaff_d14);
      }
      uVar25 = *in_stack_00000148;
      if (((uint)fStack0000000000000058 & 1) != 0) {
        *(uint *)(in_stack_00000070 + 0x1f0) = uVar25;
      }
      *(uint *)((long)unaff_x19 + 0x49c) = uVar25;
      *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
      if ((unaff_x19[0x6c] == 0) || (lVar22 = *(long *)(unaff_x19[0x6c] + 0x50), lVar22 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      fStack0000000000000058 = 0.0;
      *(float *)(lVar22 + 0x60) = unaff_s8;
      *(float *)(lVar22 + 100) = unaff_s9;
      unaff_w25 = in_stack_000017bc;
    }
  }
  else {
    if (((unaff_w25 & 0xfffffffe) == 10) && ((int)unaff_x19[0x5b] == 6)) {
      fVar50 = (float)param_2;
      fVar43 = 0.0;
      if ((0.0 < fVar50) && (fVar43 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
        fVar43 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
      }
      param_2 = (ulong)(uint)in_stack_000000a0;
      if (in_stack_000000a0 <
          (*(float *)(unaff_x19 + 0x96) - (*(float *)((long)unaff_x19 + 0x4c4) - fVar50)) + fVar43)
      {
        if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
          *(uint *)((long)unaff_x19 + 0x2dc) = uVar25;
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
        uVar17 = FUN_02681b9c(lVar22,0,0);
        if ((uVar17 & 1) != 0) {
          plVar39 = (long *)unaff_x19[0x5c];
          uVar15 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar39 == (long *)0x0) goto LAB_02491464;
          (**(code **)(*plVar39 + 0x558))(plVar39,uVar15,*(undefined8 *)(*plVar39 + 0x560));
          lVar22 = unaff_x19[0x5c];
          if (lVar22 == 0) goto LAB_02491464;
          *(int *)(lVar22 + 0x3f8) = (int)unaff_x19[0x7f];
          FUN_024c910c(lVar22,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
          plVar39 = (long *)unaff_x19[0x5c];
          if (plVar39 == (long *)0x0) goto LAB_02491464;
          (**(code **)(*plVar39 + 0x7d8))(plVar39,0,0,*(undefined8 *)(*plVar39 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        }
        fVar43 = unaff_s12;
        in_stack_000017a8 = CONCAT44(3,uVar25);
        goto LAB_0248ab98;
      }
    }
    if ((((unaff_w25 - 0x2007 < 0x23) &&
         ((1L << ((ulong)(unaff_w25 - 0x2007) & 0x3f) & 0x600000001U) != 0)) || (unaff_w25 - 10 < 2)
        ) || (unaff_w25 == 0xa0)) {
UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ObjectSpawner__get_objectPrefabs:
      if (((unaff_w25 != 0xad) && (unaff_w25 != 0x200b)) && (unaff_w25 != 0x2060)) {
        lVar22 = *in_stack_00000150;
        if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x50), lVar26 == 0)) goto LAB_02491464;
        if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
        *(int *)(lVar26 + 0x2c) = *(int *)(lVar26 + 0x2c) + 1;
        *(int *)(lVar22 + 0x20) = *(int *)(lVar22 + 0x20) + 1;
      }
    }
    else {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar17 = FUN_016fa418(unaff_w25,0);
      if ((uVar17 & 1) != 0)
      goto UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ObjectSpawner__get_objectPrefabs
      ;
    }
    if (unaff_w25 == 0xa0) {
      if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x50), lVar22 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
LAB_0248cf8c:
      *(int *)(lVar22 + 0x20) = *(int *)(lVar22 + 0x20) + 1;
      unaff_w25 = in_stack_000017bc;
    }
  }
  if (((int)unaff_x19[0x5b] == 1) && ((unaff_w25 == 0x2d || (unaff_w20 != 1)))) {
    if (unaff_x19[0xca] == 0) goto LAB_02491464;
    fVar43 = *(float *)(unaff_x19 + 0x3c);
    iVar11 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
    if (unaff_x19[0xca] == 0) goto LAB_02491464;
    fVar53 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
    lVar22 = unaff_x19[0xc9];
    fVar50 = fStack0000000000000084;
    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
      fVar50 = 1.0;
    }
    if ((lVar22 == 0) || (*(long *)(lVar22 + 0x20) == 0)) goto LAB_02491464;
    fVar51 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar45 = *(float *)(lVar22 + 0x2c);
    fVar62 = (float)FUN_026fd668(*(long *)(lVar22 + 0x20),0);
    fVar64 = *_fStack0000000000000098;
    fVar62 = fVar51 * (fVar43 / (float)iVar11) * fVar53 * fVar50 * fVar45 * fVar62;
    fVar43 = *in_stack_00000088;
    if ((unaff_w25 == 10) && (*(int *)((long)unaff_x19 + 0x48c) != (int)unaff_x19[0x92])) {
      if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x38), lVar22 == 0))
      goto LAB_02491464;
      uVar25 = *(int *)((long)unaff_x19 + 0x48c) - 1;
      if (*(uint *)(lVar22 + 0x18) <= uVar25)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (unaff_x19[0xca] == 0) goto LAB_02491464;
      fVar50 = *(float *)(lVar22 + (long)(int)uVar25 * (long)iVar38 + 0x60);
      iVar11 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
      if (unaff_x19[0xca] == 0) goto LAB_02491464;
      fVar51 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
      lVar22 = unaff_x19[0xc9];
      fVar53 = fStack0000000000000084;
      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
        fVar53 = 1.0;
      }
      if ((lVar22 == 0) || (*(long *)(lVar22 + 0x20) == 0)) goto LAB_02491464;
      fVar45 = *(float *)((long)unaff_x19 + 0x3fc);
      fVar44 = *(float *)(lVar22 + 0x2c);
      fVar62 = (float)FUN_026fd668(*(long *)(lVar22 + 0x20),0);
      if ((*in_stack_00000150 == 0) || (lVar22 = *(long *)(*in_stack_00000150 + 0x50), lVar22 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      fVar64 = *(float *)(lVar22 + 0x60);
      fVar43 = *(float *)(lVar22 + 100);
      fVar62 = fVar45 * (fVar50 / (float)iVar11) * fVar51 * fVar53 * fVar44 * fVar62;
    }
    fVar45 = *(float *)(unaff_x19 + 0x9a);
    fVar53 = *(float *)(unaff_x19 + 0x96);
    fVar44 = *(float *)((long)unaff_x19 + 0x4c4);
    fVar50 = 0.0;
    fVar51 = 0.0;
    if ((0.0 < fVar45) && (fVar51 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
      fVar51 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
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
    puVar8 = System_Threading_Mutex_TypeInfo;
    fVar47 = *(float *)(unaff_x19 + 0x6b);
    fVar43 = (fStack0000000000000090 - fVar64) - fVar43;
    bVar9 = true;
    if ((fVar47 <= fVar43) && (bVar9 = false, !NAN(fVar47))) {
      bVar9 = fVar47 == -1.0;
    }
    if (!bVar9) {
      fVar43 = fVar47;
    }
    unaff_d13 = in_stack_00000118 & 0xffffffff;
    fVar64 = _DAT_0294c6e8;
    if (unaff_w26 == 0) {
      fVar64 = 1.0;
    }
    if (((fVar53 - (fVar44 - fVar45)) + fVar51 < in_stack_000000a0) &&
       (ABS(fVar46) + fVar62 * fVar50 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) <
        fVar64 * fVar43)) {
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_024d69d4();
      lVar22 = *(long *)(*(long *)puVar8 + 0xb8);
      memcpy(&stack0x00000508,(void *)(lVar22 + 0x788),0x378);
      FUN_013b86dc(lVar22 + 0x11f0,&stack0x00000508,
                   *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__);
    }
  }
  fVar43 = 1.0;
  lVar22 = *in_stack_00000150;
  if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x38), lVar26 == 0)) goto LAB_02491464;
  if (*(uint *)(lVar26 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  uVar25 = *(uint *)(unaff_x19 + 0x94);
  lVar26 = lVar26 + (int)*in_stack_00000148 * unaff_x21;
  *(uint *)(lVar26 + 100) = uVar25;
  *(int *)(lVar26 + 0x68) = (int)unaff_x19[0x95];
  if (((unaff_w20 & 1) == 0) &&
     ((0xd < unaff_w25 || ((1 << (ulong)(unaff_w25 & 0x1f) & 0x2c00U) == 0)))) {
    lVar22 = *(long *)(lVar22 + 0x50);
    if (lVar22 == 0) goto LAB_02491464;
LAB_0248d42c:
    if (*(uint *)(lVar22 + 0x18) <= uVar25)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(int *)(lVar22 + (long)(int)uVar25 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
  }
  else {
    lVar22 = *(long *)(lVar22 + 0x50);
    if (lVar22 == 0) goto LAB_02491464;
    if (*(uint *)(lVar22 + 0x18) <= uVar25)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    if (*(int *)(lVar22 + (long)(int)uVar25 * 0x5c + 0x24) == 1) goto LAB_0248d42c;
  }
  fVar50 = (float)unaff_d13;
  if (unaff_w25 == 9) {
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar53 = (float)FUN_026fd208(*unaff_x27 + 0x50,0);
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar51 = *(float *)(unaff_x19 + 199);
    fVar62 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x27 + 0x1b9));
    fVar53 = fVar50 * fVar53 * fVar62;
    fVar62 = fVar53 * (float)(int)(fVar51 / fVar53);
    param_2 = (ulong)(uint)fVar62;
    if (fVar62 <= fVar51) {
      fVar62 = fVar51 + fVar53;
    }
LAB_0248d614:
    *(float *)(unaff_x19 + 199) = fVar62;
  }
  else if (*(float *)(unaff_x19 + 0x55) == 0.0) {
    if ((char)unaff_x19[0x1d] == '\0') {
      fVar51 = fVar43;
      if (*(char *)((long)unaff_x19 + 0x46c) != '\0') {
        fVar51 = (float)thunk_FUN_026935f0(_uStack0000000000000060,0);
      }
      fVar62 = *(float *)(unaff_x19 + 199);
      fVar64 = (float)FUN_026fd474(&stack0x00001770,0);
      if (unaff_x19[0x1f] == 0) goto LAB_02491464;
      fVar53 = 1.0 - *(float *)((long)unaff_x19 + 0x2cc);
      fVar62 = fVar62 + fVar53 * (*(float *)((long)unaff_x19 + 0x2a4) +
                                 fVar50 * (in_stack_000000b0 + fVar51 * fVar64) +
                                 fStack00000000000000c8 *
                                 (in_stack_000000c0._4_4_ +
                                 fStack00000000000000cc + *(float *)(unaff_x19[0x1f] + 0x1ac)));
      *(float *)(unaff_x19 + 199) = fVar62;
      goto joined_r0x0248d568;
    }
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar62 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (*(float *)((long)unaff_x19 + 0x2a4) +
             fVar50 * in_stack_000000b0 +
             fStack00000000000000c8 *
             (in_stack_000000c0._4_4_ + fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac)));
    param_2 = (ulong)(uint)fVar62;
    fVar62 = *(float *)(unaff_x19 + 199) - fVar62;
    *(float *)(unaff_x19 + 199) = fVar62;
    if ((unaff_w29 != 0) || (unaff_w25 == 0x200b)) {
      fVar53 = fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
      param_2 = (ulong)(uint)fVar53;
      fVar62 = fVar62 - fVar53;
      goto LAB_0248d614;
    }
  }
  else {
    if (*unaff_x27 == 0) goto LAB_02491464;
    fVar53 = *(float *)(unaff_x19 + 199);
    fVar62 = fVar53 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                      (*(float *)((long)unaff_x19 + 0x2a4) +
                      (*(float *)(unaff_x19 + 0x55) - fStack0000000000000080) +
                      fStack00000000000000c8 *
                      (fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac)));
    *(float *)(unaff_x19 + 199) = fVar62;
joined_r0x0248d568:
    if ((unaff_w29 != 0) || (param_2 = (ulong)(uint)fVar53, unaff_w25 == 0x200b)) {
      fVar53 = fStack00000000000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
      param_2 = (ulong)(uint)fVar53;
      fVar62 = fVar62 + fVar53;
      goto LAB_0248d614;
    }
  }
  lVar22 = *in_stack_00000150;
  if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x38), lVar26 == 0)) goto LAB_02491464;
  uVar25 = *in_stack_00000148;
  uVar30 = (uint)*(undefined8 *)(lVar26 + 0x18);
  if (uVar30 <= uVar25)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar26 + (int)uVar25 * unaff_x21 + 0x144) = fVar62;
  uVar33 = unaff_w25;
  if ((int)unaff_w25 < 0xd) {
    if ((unaff_w25 - 10 < 2) || (unaff_w25 == 3)) goto LAB_0248d6b8;
LAB_0248d69c:
    if (((unaff_w20 & unaff_w25 == 0x2d) != 0) || ((float)uVar25 == in_stack_00000078._4_4_))
    goto LAB_0248d6b8;
  }
  else {
    if (1 < unaff_w25 - 0x2028) {
      if (unaff_w25 != 0xd) goto LAB_0248d69c;
      param_2 = 0;
      *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
      if ((float)uVar25 != in_stack_00000078._4_4_) goto LAB_0248dc08;
    }
LAB_0248d6b8:
    if (0.0 < *(float *)(unaff_x19 + 0x9a)) {
      fVar53 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
      if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (((fStack000000000000004c < ABS(fVar53)) && (*(char *)((long)unaff_x19 + 700) == '\0')) &&
         (*(char *)((long)unaff_x19 + 0x334) == '\0')) {
        FUN_024d6ca8(fVar53);
        *(float *)((long)unaff_x19 + 0x4bc) = *(float *)((long)unaff_x19 + 0x4bc) - fVar53;
        *(float *)(unaff_x19 + 0x9a) = fVar53 + *(float *)(unaff_x19 + 0x9a);
        puVar8 = System_Threading_Mutex_TypeInfo;
        lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar22 = *(long *)puVar8;
        }
        lVar26 = *(long *)(lVar22 + 0xb8);
        if (*(int *)(lVar26 + 0x7ac) == (int)unaff_x19[0x94]) {
          if (*(int *)(lVar22 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar26 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          FUN_013b8de4(lVar26 + 0x11f0,&stack0x00000880,
                       *(undefined8 *)
                        Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                      );
          lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
          memcpy((void *)(*(long *)(lVar22 + 0xb8) + 0x788),&stack0x00000880,0x378);
          lVar22 = *(long *)(lVar22 + 0xb8);
          *(float *)(lVar22 + 0x7bc) = fVar53 + *(float *)(lVar22 + 0x7bc);
          *(float *)(lVar22 + 0x800) = fVar53 + *(float *)(lVar22 + 0x800);
          memcpy(&stack0x00000190,(void *)(lVar22 + 0x788),0x378);
          FUN_013b86dc(lVar22 + 0x11f0,&stack0x00000190,
                       *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__);
        }
      }
    }
    fVar51 = *(float *)(unaff_x19 + 0x9a);
    *(undefined1 *)((long)unaff_x19 + 0x334) = 0;
    fVar62 = *(float *)((long)unaff_x19 + 0x4c4) - fVar51;
    fVar53 = *(float *)((long)unaff_x19 + 0x4bc);
    if (fVar62 <= *(float *)((long)unaff_x19 + 0x4bc)) {
      fVar53 = fVar62;
    }
    *(float *)((long)unaff_x19 + 0x4bc) = fVar53;
    fVar64 = *(float *)(unaff_x19 + 0x98);
    if (*(char *)((long)unaff_x28 + 0xf34) == '\0') {
      in_stack_000017b8 = fVar53;
    }
    if ((*(char *)((long)unaff_x19 + 0x32c) != '\0') &&
       (((int)unaff_x19[100] <= *(int *)((long)unaff_x19 + 0x48c) ||
        ((int)unaff_x19[0x65] <= (int)unaff_x19[0x94])))) {
      *(undefined1 *)((long)unaff_x28 + 0xf34) = 1;
    }
    lVar22 = *in_stack_00000150;
    if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x50), lVar26 == 0)) goto LAB_02491464;
    uVar25 = *(uint *)(unaff_x19 + 0x94);
    if (*(uint *)(lVar26 + 0x18) <= uVar25)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar40 = lVar26 + (long)(int)uVar25 * 0x5c;
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
    lVar22 = *(long *)(lVar22 + 0x38);
    if (lVar22 == 0) goto LAB_02491464;
    if (*(uint *)(lVar22 + 0x18) <= *(uint *)((long)unaff_x19 + 0x494))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    uVar67 = *(undefined4 *)(lVar22 + (int)*(uint *)((long)unaff_x19 + 0x494) * unaff_x21 + 0x11c);
    lVar26 = lVar26 + (long)(int)uVar25 * 0x5c;
    *(float *)(lVar26 + 0x70) = fVar62;
    *(undefined4 *)(lVar26 + 0x6c) = uVar67;
    lVar22 = *in_stack_00000150;
    if ((lVar22 == 0) || (lVar26 = *(long *)(lVar22 + 0x50), lVar26 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar26 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar22 = *(long *)(lVar22 + 0x38);
    if (lVar22 == 0) goto LAB_02491464;
    if (*(uint *)(lVar22 + 0x18) <= *(uint *)((long)unaff_x19 + 0x49c))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    fVar64 = fVar64 - fVar51;
    lVar26 = lVar26 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
    *(undefined4 *)(lVar26 + 0x74) =
         *(undefined4 *)(lVar22 + (int)*(uint *)((long)unaff_x19 + 0x49c) * unaff_x21 + 0x128);
    *(float *)(lVar26 + 0x78) = fVar64;
    lVar22 = *in_stack_00000150;
    if ((lVar22 == 0) || (lVar40 = *(long *)(lVar22 + 0x50), lVar40 == 0)) goto LAB_02491464;
    lVar18 = (long)(int)*(uint *)(unaff_x19 + 0x94);
    if (*(uint *)(lVar40 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar26 = lVar40 + lVar18 * 0x5c;
    *(float *)(lVar26 + 0x44) = *(float *)(lVar26 + 0x74) - fVar50 * in_stack_00000130._4_4_;
    *(float *)(lVar26 + 0x5c) = in_stack_000000d8._4_4_;
    if (*(int *)(lVar26 + 0x24) == 1) {
      *(int *)(lVar40 + lVar18 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
    }
    if ((*unaff_x27 == 0) || (lVar26 = *(long *)(lVar22 + 0x38), lVar26 == 0)) goto LAB_02491464;
    lVar36 = (long)(int)*(uint *)((long)unaff_x19 + 0x49c);
    uVar30 = (uint)*(undefined8 *)(lVar26 + 0x18);
    if (uVar30 <= *(uint *)((long)unaff_x19 + 0x49c))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    if ((*(char *)(lVar26 + lVar36 * unaff_x21 + 0x194) == '\0') &&
       (lVar36 = (long)(int)*(uint *)(unaff_x19 + 0x93), uVar30 <= *(uint *)(unaff_x19 + 0x93)))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    fVar53 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (fStack00000000000000c8 *
              (in_stack_000000c0._4_4_ + fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac)) -
             *(float *)((long)unaff_x19 + 0x2a4));
    fVar50 = -fVar53;
    if ((char)unaff_x19[0x1d] != '\0') {
      fVar50 = fVar53;
    }
    lVar40 = lVar40 + lVar18 * 0x5c;
    *(float *)(lVar40 + 0x58) = *(float *)(lVar26 + lVar36 * unaff_x21 + 0x144) + fVar50;
    fVar50 = *(float *)(unaff_x19 + 0x9a);
    *(float *)(lVar40 + 0x48) = fStack0000000000000050 + (fVar64 - fVar62);
    *(float *)(lVar40 + 0x4c) = fVar64;
    param_2 = (ulong)(uint)(0.0 - fVar50);
    *(float *)(lVar40 + 0x50) = 0.0 - fVar50;
    *(float *)(lVar40 + 0x54) = fVar62;
    plVar27 = (long *)System_Threading_Mutex_TypeInfo;
    if ((int)unaff_w25 < 0x2d) {
      if (unaff_w25 - 10 < 2) {
LAB_0248dad8:
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar42 = (long *)StringLiteral_302;
        FUN_024d69d4();
        lVar22 = unaff_x19[0x6c];
        *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
        iVar11 = (int)unaff_x19[0x94] + 1;
        *(int *)(unaff_x19 + 0x94) = iVar11;
        *(int *)(unaff_x19 + 0x92) = *(int *)((long)unaff_x19 + 0x48c) + 1;
        if ((lVar22 == 0) || (*(long *)(lVar22 + 0x50) == 0)) goto LAB_02491464;
        if (*(int *)(*(long *)(lVar22 + 0x50) + 0x18) <= iVar11) {
          FUN_024d6e60();
          lVar22 = unaff_x19[0x6c];
          if (lVar22 == 0) goto LAB_02491464;
        }
        lVar22 = *(long *)(lVar22 + 0x38);
        if (lVar22 == 0) goto LAB_02491464;
        if (*(uint *)(lVar22 + 0x18) <= *in_stack_00000148)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fVar50 = *(float *)(lVar22 + (int)*in_stack_00000148 * unaff_x21 + 0x154);
        if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
          fVar53 = 0.0;
          if ((unaff_w25 == 0x2029) || (unaff_w25 == 10)) {
            fVar53 = *(float *)((long)unaff_x19 + 0x2c4);
          }
          uVar20 = 0;
          fVar53 = *(float *)(unaff_x19 + 0x9a) +
                   fVar50 + (0.0 - *(float *)((long)unaff_x19 + 0x4c4)) +
                   fStack0000000000000054 *
                   (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4)) +
                   fStack00000000000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar53);
        }
        else {
          if ((unaff_w25 == 0x2029) || (fVar53 = 0.0, unaff_w25 == 10)) {
            fVar53 = *(float *)((long)unaff_x19 + 0x2c4);
          }
          uVar20 = 1;
          fVar53 = *(float *)(unaff_x19 + 0x9a) +
                   *(float *)(unaff_x19 + 0x57) +
                   fStack00000000000000c8 * (*(float *)(unaff_x19 + 0x56) + fVar53);
        }
        *(float *)(unaff_x19 + 0x9a) = fVar53;
        *(undefined1 *)((long)unaff_x19 + 700) = uVar20;
        lVar22 = *plVar27;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar22 = *plVar27;
        }
        uVar15 = *(undefined8 *)(*(long *)(lVar22 + 0xb8) + 0x15a8);
        *(float *)(unaff_x19 + 0x99) = fVar50;
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
      if (unaff_w25 == 3) {
        if (unaff_x19[0x8e] == 0) goto LAB_02491464;
        in_stack_00001788 = (uint)*(undefined8 *)(unaff_x19[0x8e] + 0x18);
        uVar33 = 3;
      }
    }
    else if ((unaff_w25 - 0x2028 < 2) || (unaff_w25 == 0x2d)) goto LAB_0248dad8;
  }
LAB_0248dc08:
  uVar25 = *in_stack_00000148;
  if (uVar30 <= uVar25)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if (*(char *)(lVar26 + (int)uVar25 * unaff_x21 + 0x194) != '\0') {
    lVar26 = lVar26 + (int)uVar25 * unaff_x21;
    uVar54 = *(ulong *)(lVar26 + 0x11c);
    uVar17 = *(ulong *)(in_stack_00000070 + 0x230);
    *(ulong *)(in_stack_00000070 + 0x230) =
         uVar54 ^ (uVar54 ^ uVar17) &
                  CONCAT44(-(uint)((float)(uVar17 >> 0x20) < (float)(uVar54 >> 0x20)),
                           -(uint)((float)uVar17 < (float)uVar54));
    uVar17 = *(ulong *)(in_stack_00000070 + 0x238);
    param_2 = *(ulong *)(lVar26 + 0x128);
    *(ulong *)(in_stack_00000070 + 0x238) =
         param_2 ^ (param_2 ^ uVar17) &
                   CONCAT44(-(uint)((float)(param_2 >> 0x20) < (float)(uVar17 >> 0x20)),
                            -(uint)((float)param_2 < (float)uVar17));
  }
  if (((int)unaff_x19[0x5b] == 5) &&
     ((0xd < uVar33 || ((1 << (ulong)(uVar33 & 0x1f) & 0x2c00U) == 0)))) {
    lVar26 = *(long *)(lVar22 + 0x58);
    if (lVar26 == 0) goto LAB_02491464;
    iVar11 = (int)unaff_x19[0x95] + 1;
    if (*(int *)(lVar26 + 0x18) < iVar11) {
      if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01147c08((long *)(lVar22 + 0x58),iVar11,1,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerMove__);
      lVar22 = *in_stack_00000150;
      if (lVar22 == 0) goto LAB_02491464;
    }
    lVar26 = *(long *)(lVar22 + 0x58);
    if (lVar26 == 0) goto LAB_02491464;
    uVar30 = *(uint *)(unaff_x19 + 0x95);
    lVar40 = (long)(int)uVar30;
    uVar25 = *(uint *)(lVar26 + 0x18);
    if (uVar25 <= uVar30)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar18 = lVar26 + lVar40 * 0x14;
    fVar53 = *(float *)(lVar18 + 0x30);
    param_2 = (ulong)(uint)fVar53;
    *(undefined4 *)(lVar18 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
    fVar50 = *(float *)((long)unaff_x19 + 0x4bc);
    if (fVar53 <= *(float *)((long)unaff_x19 + 0x4bc)) {
      fVar50 = fVar53;
    }
    *(float *)(lVar18 + 0x30) = fVar50;
    uVar33 = *(uint *)((long)unaff_x19 + 0x48c);
    if (uVar33 == 0 && uVar30 == 0) {
      *(uint *)(lVar26 + lVar40 * 0x14 + 0x20) = uVar33;
    }
    else {
      uVar5 = uVar33 - 1;
      if (0 < (int)uVar33) {
        lVar22 = *(long *)(lVar22 + 0x38);
        if (lVar22 == 0) goto LAB_02491464;
        if (*(uint *)(lVar22 + 0x18) <= uVar5)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        if (uVar30 != *(uint *)(lVar22 + (long)(int)uVar5 * (long)iVar38 + 0x68)) {
          if (uVar25 <= uVar30 - 1)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          *(uint *)(lVar26 + 0x20 + (long)(int)(uVar30 - 1) * 0x14 + 4) = uVar5;
          *(uint *)(lVar26 + 0x20 + lVar40 * 0x14) = uVar33;
          goto LAB_0248dc84;
        }
      }
      if ((float)uVar33 == in_stack_00000078._4_4_) {
        *(float *)(lVar26 + lVar40 * 0x14 + 0x24) = in_stack_00000078._4_4_;
      }
    }
  }
LAB_0248dc84:
  plVar27 = (long *)System_Threading_Mutex_TypeInfo;
  if (((char)unaff_x19[0x5a] == '\0') &&
     ((6 < *(uint *)(unaff_x19 + 0x5b) ||
      ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5b) & 0x1f) & 0x4aU) == 0)))) goto LAB_0248e168;
  if ((unaff_w29 == 0) && (((unaff_w25 != 0x2d && (unaff_w25 != 0x200b)) && (unaff_w25 != 0xad)))) {
    if (*(char *)((long)unaff_x19 + 0x2d2) != '\0') goto LAB_0248ded4;
LAB_0248de4c:
    if (((((0x2bfd < unaff_w25 - 0xac01) && (0x1d < unaff_w25 - 0xa961)) &&
         (0xfd < unaff_w25 - 0x1101)) || (uVar17 = FUN_024e95f0(0), (uVar17 & 1) != 0)) &&
       ((((0xed < unaff_w25 - 0xff01 && (0x1d < unaff_w25 - 0xfe31)) &&
         (0x717d < unaff_w25 - 0x2e81)) && (0x1fd < unaff_w25 - 0xf901)))) goto LAB_0248ded4;
    lVar22 = FUN_024e94b0(0);
    if ((lVar22 == 0) || (*(long *)(lVar22 + 0x10) == 0)) goto LAB_02491464;
    uVar17 = FUN_0129aa60(*(long *)(lVar22 + 0x10),&stack0x00000880,
                          *(undefined8 *)
                           System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                         );
    if ((int)in_stack_00000078._4_4_ <= (int)*in_stack_00000148) {
      in_stack_00000880 = unaff_w25;
      if ((uVar17 & 1) == 0) {
LAB_0248e1b0:
        plVar27 = (long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_024d69d4();
        bStack000000000000005c = 0;
        goto LAB_0248e168;
      }
LAB_0248e0dc:
      plVar27 = (long *)System_Threading_Mutex_TypeInfo;
      if (uVar12 != unaff_w24 || ((bStack000000000000005c ^ 0xff) & 1) != 0) goto LAB_0248e168;
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__get_invalidColorGradient;
    }
    lVar22 = FUN_024e94b0(0);
    if (((lVar22 == 0) || (*in_stack_00000150 == 0)) ||
       (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar26 + 0x18) <= *in_stack_00000148 + 1)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    if (*(long *)(lVar22 + 0x18) == 0) goto LAB_02491464;
    in_stack_00000880 =
         (uint)*(ushort *)(lVar26 + (long)(int)(*in_stack_00000148 + 1) * (long)iVar38 + 0x20);
    uVar54 = FUN_0129aa60(*(long *)(lVar22 + 0x18),&stack0x00000880,
                          *(undefined8 *)
                           System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                         );
    if ((uVar17 & 1) != 0) goto LAB_0248e0dc;
    if ((uVar54 & 1) == 0) goto LAB_0248e1b0;
    plVar27 = (long *)System_Threading_Mutex_TypeInfo;
    if ((bStack000000000000005c & 1) == 0) {
      bStack000000000000005c = 0;
      goto LAB_0248e168;
    }
    if (unaff_w29 != 0) goto LAB_0248e100;
  }
  else {
    if (*(char *)((long)unaff_x19 + 0x2d2) != '\x01') {
      if (((0x28 < unaff_w25 - 0x2007) ||
          ((1L << ((ulong)(unaff_w25 - 0x2007) & 0x3f) & 0x10000000401U) == 0)) &&
         ((unaff_w25 != 0xa0 && (unaff_w25 != 0x2060)))) {
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
    if ((unaff_w25 == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) == 0) {
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
UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__SetupBlockedReticle:
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
  iVar11 = FUN_024d66ec();
  in_stack_00000068._4_1_ = 0;
  goto LAB_0248c900;
LAB_0248ef74:
  uVar12 = uVar30 - 1;
  if (*(uint *)(lVar22 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*in_stack_00000150 == 0) || (lVar26 = *(long *)(*in_stack_00000150 + 0x50), lVar26 == 0))
  goto LAB_02491464;
  lVar18 = (long)(int)uVar12;
  lVar40 = lVar22 + lVar18 * 0x178;
  uVar33 = *(uint *)(lVar40 + 100);
  if (*(uint *)(lVar26 + 0x18) <= uVar33)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar34 = *(long *)(lVar40 + 0x38);
  uVar31 = (uint)*(ushort *)(lVar40 + 0x20);
  lVar36 = (long)(int)uVar33;
  lVar26 = lVar26 + lVar36 * 0x5c;
  uVar5 = *(uint *)(lVar26 + 0x3c);
  uVar2 = *(uint *)(lVar26 + 0x40);
  lVar40 = (long)(int)uVar2;
  iVar13 = *(int *)(lVar26 + 0x28);
  iVar14 = *(int *)(lVar26 + 0x2c);
  uVar41 = *(uint *)(lVar26 + 0x68);
  fVar65 = *(float *)(lVar26 + 0x5c);
  fVar59 = *(float *)(lVar26 + 0x60);
  iVar3 = *(int *)(lVar26 + 0x20);
  fVar64 = *(float *)(lVar26 + 0x4c);
  fVar44 = *(float *)(lVar26 + 0x54);
  fVar62 = *(float *)(lVar26 + 0x58);
  fVar47 = *(float *)(lVar26 + 0x6c);
  fVar46 = *(float *)(lVar26 + 0x70);
  fVar51 = *(float *)(lVar26 + 0x74);
  fVar45 = *(float *)(lVar26 + 0x78);
  fVar61 = fVar65 + fVar59;
  if ((int)uVar41 < 9) {
    switch(uVar41) {
    case 1:
      if ((char)unaff_x19[0x1d] == '\0') {
        in_stack_000000c0._4_4_ = fVar59 + 0.0;
      }
      else {
        in_stack_000000c0._4_4_ = 0.0 - fVar62;
      }
      break;
    case 2:
LAB_0248f124:
      in_stack_000000c0._4_4_ = (fVar59 + fVar65 * 0.5) - fVar62 * 0.5;
      break;
    default:
      goto switchD_0248f070_caseD_3;
    case 4:
      in_stack_000000c0._4_4_ = fVar61 - fVar62;
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
      if (*(uint *)(lVar22 + 0x18) <= uVar5)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar4 = *(undefined2 *)(lVar22 + (long)(int)uVar5 * 0x178 + 0x20);
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar17 = FUN_016f9f84(uVar4,0);
      if ((uVar17 & 1) == 0) {
        bVar1 = (int)uVar33 < (int)unaff_x19[0x94];
      }
      else {
        bVar1 = false;
      }
      if ((fVar62 <= fVar65) && (!bVar1 && (uVar41 >> 4 & 1) == 0)) {
        in_stack_000000c0._4_4_ = fVar59;
        if ((char)unaff_x19[0x1d] != '\0') {
          in_stack_000000c0._4_4_ = fVar61;
        }
        goto LAB_0248f194;
      }
      if (((uVar30 == 1) || (uVar33 != uVar25)) || (uVar12 == *(uint *)((long)unaff_x19 + 0x31c))) {
        in_stack_000000c0._4_4_ = fVar59;
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
        fVar59 = -fVar62;
        if (cVar21 != '\0') {
          fVar59 = fVar62;
        }
        if (*(uint *)(lVar22 + 0x18) <= uVar5)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fVar62 = 1.0;
        iVar14 = (int)*(char *)(lVar22 + (long)(int)uVar5 * 0x178 + 0x194) +
                 (-iVar3 - ((uint)fStack0000000000000024 & 1)) + iVar14 + -1;
        if (0 < iVar14) {
          fVar62 = *(float *)((long)unaff_x19 + 0x2d4);
        }
        if (iVar14 < 1) {
          iVar14 = 1;
        }
        if (uVar31 == 9) {
LAB_02490fe0:
          fVar62 = 1.0 - fVar62;
        }
        else {
          if (uVar31 != 0xa0) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar17 = FUN_016fa418(uVar31,0);
            cVar21 = (char)unaff_x19[0x1d];
            if ((uVar17 & 1) != 0) goto LAB_02490fe0;
          }
          iVar14 = (iVar3 - (~(uint)fStack0000000000000024 & 1)) + iVar13;
        }
        fVar62 = ((fVar65 + fVar59) * fVar62) / (float)iVar14;
        if (cVar21 == '\0') {
          in_stack_000000c0._4_4_ = in_stack_000000c0._4_4_ + fVar62;
          in_stack_000000b8 =
               CONCAT44((float)((ulong)in_stack_000000b8 >> 0x20) + 0.0,
                        (float)in_stack_000000b8 + 0.0);
        }
        else {
          in_stack_000000c0._4_4_ = in_stack_000000c0._4_4_ - fVar62;
        }
      }
    }
  }
  else if (uVar41 == 0x20) {
    fVar62 = fVar47 + fVar51;
    goto LAB_0248f124;
  }
switchD_0248f070_caseD_3:
  uVar41 = (uint)*(undefined8 *)(lVar22 + 0x18);
  if (uVar41 <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar26 = lVar22 + lVar18 * 0x178;
  fVar59 = fStack0000000000000090 + in_stack_000000c0._4_4_;
  fVar62 = SUB84(in_stack_00000088,0) + (float)in_stack_000000b8;
  fVar65 = (float)((ulong)in_stack_00000088 >> 0x20) + (float)((ulong)in_stack_000000b8 >> 0x20);
  plVar42 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(char *)(lVar26 + 0x194) == '\0') goto LAB_0248fabc;
  iVar13 = *(int *)(lVar22 + lVar18 * 0x178 + 0x2c);
  if (iVar13 != 0) goto LAB_0248f808;
  fVar53 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)uVar33,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
  case 0:
    lVar24 = lVar22 + lVar18 * 0x178;
    *(undefined4 *)(lVar24 + 0x84) = 0;
    *(undefined4 *)(lVar24 + 0xac) = 0;
    *(undefined4 *)(lVar24 + 0xd4) = 0x3f800000;
    fVar53 = 1.0;
    break;
  case 1:
    fVar45 = *(float *)(lVar22 + lVar18 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
      lVar24 = lVar22 + lVar18 * 0x178;
      fVar51 = (in_stack_000000c0._4_4_ + fVar45) - *(float *)(in_stack_00000070 + 0x230);
      fVar45 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
      goto LAB_0248f2dc;
    }
    lVar24 = lVar22 + lVar18 * 0x178;
    fVar51 = fVar51 - fVar47;
    *(float *)(lVar24 + 0x84) = fVar53 + (fVar45 - fVar47) / fVar51;
    *(float *)(lVar24 + 0xac) = fVar53 + (*(float *)(lVar24 + 0x98) - fVar47) / fVar51;
    *(float *)(lVar24 + 0xd4) = fVar53 + (*(float *)(lVar24 + 0xc0) - fVar47) / fVar51;
    fVar53 = fVar53 + (*(float *)(lVar24 + 0xe8) - fVar47) / fVar51;
    break;
  case 2:
    lVar24 = lVar22 + lVar18 * 0x178;
    fVar45 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
    fVar51 = (in_stack_000000c0._4_4_ + *(float *)(lVar24 + 0x70)) -
             *(float *)(in_stack_00000070 + 0x230);
LAB_0248f2dc:
    *(float *)(lVar24 + 0x84) = fVar53 + fVar51 / fVar45;
    *(float *)(lVar24 + 0xac) =
         fVar53 + ((in_stack_000000c0._4_4_ + *(float *)(lVar24 + 0x98)) -
                  *(float *)(in_stack_00000070 + 0x230)) /
                  (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
    *(float *)(lVar24 + 0xd4) =
         fVar53 + ((in_stack_000000c0._4_4_ + *(float *)(lVar24 + 0xc0)) -
                  *(float *)(in_stack_00000070 + 0x230)) /
                  (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230));
    fVar53 = fVar53 + ((in_stack_000000c0._4_4_ + *(float *)(lVar24 + 0xe8)) -
                      *(float *)(in_stack_00000070 + 0x230)) /
                      (*(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230)
                      );
    break;
  case 3:
    switch((int)unaff_x19[0x61]) {
    case 0:
      lVar24 = lVar22 + lVar18 * 0x178;
      *(undefined4 *)(lVar24 + 0x88) = 0;
      *(undefined4 *)(lVar24 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar24 + 0xd8) = 0;
      *(undefined4 *)(lVar24 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar24 = lVar22 + lVar18 * 0x178;
      fVar45 = fVar45 - fVar46;
      fVar51 = fVar53 + (*(float *)(lVar24 + 0x74) - fVar46) / fVar45;
      fVar45 = fVar53 + (*(float *)(lVar24 + 0x9c) - fVar46) / fVar45;
      *(float *)(lVar24 + 0x88) = fVar51;
      *(float *)(lVar24 + 0xb0) = fVar45;
      *(float *)(lVar24 + 0xd8) = fVar51;
      *(float *)(lVar24 + 0x100) = fVar45;
      break;
    case 2:
      lVar24 = lVar22 + lVar18 * 0x178;
      fVar51 = fVar53 + (*(float *)(lVar24 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                        (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
      *(float *)(lVar24 + 0x88) = fVar51;
      fVar45 = *(float *)(unaff_x19 + 0x9b);
      fVar46 = *(float *)(unaff_x19 + 0x9c);
      *(float *)(lVar24 + 0xd8) = fVar51;
      fVar51 = fVar53 + (*(float *)(lVar24 + 0x9c) - fVar45) / (fVar46 - fVar45);
      *(float *)(lVar24 + 0xb0) = fVar51;
      *(float *)(lVar24 + 0x100) = fVar51;
      break;
    case 3:
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
      uVar41 = (uint)*(undefined8 *)(lVar22 + 0x18);
    }
    if (uVar41 <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar24 = lVar22 + lVar18 * 0x178;
    fVar51 = *(float *)(lVar24 + 0x15c);
    fVar45 = (1.0 - (*(float *)(lVar24 + 0x88) + *(float *)(lVar24 + 0xb0)) * fVar51) * 0.5;
    fVar46 = fVar53 + *(float *)(lVar24 + 0x88) * fVar51 + fVar45;
    fVar53 = fVar53 + fVar45 + *(float *)(lVar24 + 0xb0) * fVar51;
    *(float *)(lVar24 + 0x84) = fVar46;
    *(float *)(lVar24 + 0xac) = fVar46;
    *(float *)(lVar24 + 0xd4) = fVar53;
    break;
  default:
    goto switchD_0248f240_default;
  }
  *(float *)(lVar22 + lVar18 * 0x178 + 0xfc) = fVar53;
switchD_0248f240_default:
  switch((int)unaff_x19[0x61]) {
  case 0:
    if (uVar41 <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar24 = lVar22 + lVar18 * 0x178;
    *(undefined4 *)(lVar24 + 0x88) = 0;
    *(undefined4 *)(lVar24 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar24 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar24 + 0x100) = 0;
    break;
  case 1:
    if (uVar12 < uVar41) {
      lVar24 = lVar22 + lVar18 * 0x178;
      fVar64 = fVar64 - fVar44;
      fVar53 = (*(float *)(lVar24 + 0x74) - fVar44) / fVar64;
      fVar64 = (*(float *)(lVar24 + 0x9c) - fVar44) / fVar64;
      *(float *)(lVar24 + 0x88) = fVar53;
      goto LAB_0248f644;
    }
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  case 2:
    if (uVar41 <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar24 = lVar22 + lVar18 * 0x178;
    fVar53 = (*(float *)(lVar24 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
             (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
    *(float *)(lVar24 + 0x88) = fVar53;
    fVar64 = (*(float *)(lVar24 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
             (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
LAB_0248f644:
    *(float *)(lVar24 + 0xb0) = fVar64;
    *(float *)(lVar24 + 0xd8) = fVar64;
    *(float *)(lVar24 + 0x100) = fVar53;
    break;
  case 3:
    if (uVar41 <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar24 = lVar22 + lVar18 * 0x178;
    fVar64 = *(float *)(lVar24 + 0x15c);
    fVar51 = (1.0 - (*(float *)(lVar24 + 0x84) + *(float *)(lVar24 + 0xd4)) / fVar64) * 0.5;
    fVar53 = *(float *)(lVar24 + 0x84) / fVar64 + fVar51;
    fVar51 = fVar51 + *(float *)(lVar24 + 0xd4) / fVar64;
    *(float *)(lVar24 + 0x88) = fVar53;
    *(float *)(lVar24 + 0xb0) = fVar51;
    *(float *)(lVar24 + 0x100) = fVar53;
    *(float *)(lVar24 + 0xd8) = fVar51;
  }
  if (uVar41 <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar24 = lVar22 + lVar18 * 0x178;
  fVar53 = ABS(fVar43) * *(float *)(lVar24 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
  if ((*(char *)(lVar24 + 0x5c) == '\0') && ((*(byte *)(lVar22 + lVar18 * 0x178 + 400) & 1) != 0)) {
    fVar53 = -fVar53;
  }
  lVar24 = lVar22 + lVar18 * 0x178;
  fVar64 = *(float *)(lVar24 + 0x88);
  fVar45 = *(float *)(lVar24 + 0x84);
  fVar51 = -2.1474836e+09;
  if (fVar45 != INFINITY) {
    fVar51 = (float)(int)fVar45;
  }
  fVar46 = *(float *)(lVar24 + 0xd4);
  fVar47 = *(float *)(lVar24 + 0xd8);
  fVar44 = -2.1474836e+09;
  if (fVar64 != INFINITY) {
    fVar44 = (float)(int)fVar64;
  }
  uVar67 = FUN_024e0374(fVar45 - fVar51,fVar64 - fVar44);
  *(undefined4 *)(lVar24 + 0x84) = uVar67;
  if (*(uint *)(lVar22 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  fVar47 = fVar47 - fVar44;
  *(float *)(lVar24 + 0x88) = fVar53;
  uVar67 = FUN_024e0374(fVar45 - fVar51,fVar47);
  *(undefined4 *)(lVar22 + lVar18 * 0x178 + 0xac) = uVar67;
  if (*(uint *)(lVar22 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  fVar46 = fVar46 - fVar51;
  *(float *)(lVar22 + lVar18 * 0x178 + 0xb0) = fVar53;
  fVar51 = (float)FUN_024e0374(fVar46,fVar47);
  *(float *)(lVar24 + 0xd4) = fVar51;
  if (*(uint *)(lVar22 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar24 + 0xd8) = fVar53;
  uVar67 = FUN_024e0374(fVar46,fVar64 - fVar44);
  *(undefined4 *)(lVar22 + lVar18 * 0x178 + 0xfc) = uVar67;
  uVar41 = (uint)*(undefined8 *)(lVar22 + 0x18);
  if (uVar41 <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar22 + lVar18 * 0x178 + 0x100) = fVar53;
LAB_0248f808:
  if (((int)uVar12 < (int)unaff_x19[100]) &&
     (iStack00000000000000a4 < *(int *)((long)unaff_x19 + 0x324))) {
    if (((int)uVar33 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] != 5)) {
      if (uVar41 <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar26 = lVar22 + lVar18 * 0x178;
      *(ulong *)(lVar26 + 0x70) =
           CONCAT44(fVar62 + (float)((ulong)*(undefined8 *)(lVar26 + 0x70) >> 0x20),
                    fVar59 + (float)*(undefined8 *)(lVar26 + 0x70));
      *(float *)(lVar26 + 0x78) = fVar65 + *(float *)(lVar26 + 0x78);
      plVar42 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      if (*(uint *)(lVar22 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar26 = lVar22 + lVar18 * 0x178;
      *(ulong *)(lVar26 + 0x98) =
           CONCAT44(fVar62 + (float)((ulong)*(undefined8 *)(lVar26 + 0x98) >> 0x20),
                    fVar59 + (float)*(undefined8 *)(lVar26 + 0x98));
      *(float *)(lVar26 + 0xa0) = fVar65 + *(float *)(lVar26 + 0xa0);
      uVar41 = *(uint *)(lVar22 + 0x18);
LAB_0248fa4c:
      if (uVar41 <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar26 = lVar22 + lVar18 * 0x178;
      *(ulong *)(lVar26 + 0xc0) =
           CONCAT44(fVar62 + (float)((ulong)*(undefined8 *)(lVar26 + 0xc0) >> 0x20),
                    fVar59 + (float)*(undefined8 *)(lVar26 + 0xc0));
      *(float *)(lVar26 + 200) = fVar65 + *(float *)(lVar26 + 200);
      if (*(uint *)(lVar22 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar26 = lVar22 + lVar18 * 0x178;
      *(ulong *)(lVar26 + 0xe8) =
           CONCAT44(fVar62 + (float)((ulong)*(undefined8 *)(lVar26 + 0xe8) >> 0x20),
                    fVar59 + (float)*(undefined8 *)(lVar26 + 0xe8));
      *(float *)(lVar26 + 0xf0) = fVar65 + *(float *)(lVar26 + 0xf0);
      if (iVar13 != 0) goto LAB_0248f9d0;
LAB_0248fa9c:
      pcVar29 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0248faa8:
      (*pcVar29)();
      goto LAB_0248fabc;
    }
    if (((int)uVar33 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] == 5)) {
      if (uVar12 < uVar41) {
        if (*(uint *)(lVar22 + lVar18 * 0x178 + 0x68) != uStack0000000000000030) goto LAB_0248f8d8;
        lVar26 = lVar22 + lVar18 * 0x178;
        *(ulong *)(lVar26 + 0x70) =
             CONCAT44(fVar62 + (float)((ulong)*(undefined8 *)(lVar26 + 0x70) >> 0x20),
                      fVar59 + (float)*(undefined8 *)(lVar26 + 0x70));
        *(float *)(lVar26 + 0x78) = fVar65 + *(float *)(lVar26 + 0x78);
        if (uVar12 < *(uint *)(lVar22 + 0x18)) {
          lVar26 = lVar22 + lVar18 * 0x178;
          *(ulong *)(lVar26 + 0x98) =
               CONCAT44(fVar62 + (float)((ulong)*(undefined8 *)(lVar26 + 0x98) >> 0x20),
                        fVar59 + (float)*(undefined8 *)(lVar26 + 0x98));
          *(float *)(lVar26 + 0xa0) = fVar65 + *(float *)(lVar26 + 0xa0);
          uVar41 = *(uint *)(lVar22 + 0x18);
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
  puVar8 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  lVar24 = lVar22 + lVar18 * 0x178;
  uVar67 = *(undefined4 *)
            (*(undefined8 **)
              (*(long *)
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
              0xb8) + 1);
  *(undefined8 *)(lVar24 + 0x70) =
       **(undefined8 **)
         (*(long *)Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
         0xb8);
  *(undefined4 *)(lVar24 + 0x78) = uVar67;
  plVar42 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(uint *)(lVar22 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar24 = lVar22 + lVar18 * 0x178;
  uVar67 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar24 + 0x98) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar24 + 0xa0) = uVar67;
  if (*(uint *)(lVar22 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar24 = lVar22 + lVar18 * 0x178;
  uVar67 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar24 + 0xc0) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar24 + 200) = uVar67;
  if (*(uint *)(lVar22 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar24 = lVar22 + lVar18 * 0x178;
  uVar67 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar8 + 0xb8) + 1);
  *(undefined8 *)(lVar24 + 0xe8) = **(undefined8 **)(*(long *)puVar8 + 0xb8);
  *(undefined4 *)(lVar24 + 0xf0) = uVar67;
  if (*(uint *)(lVar22 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(undefined1 *)(lVar26 + 0x194) = 0;
  if (iVar13 == 0) goto LAB_0248fa9c;
LAB_0248f9d0:
  if (iVar13 == 1) {
    pcVar29 = *(code **)(*unaff_x19 + 0x8f8);
    goto LAB_0248faa8;
  }
LAB_0248fabc:
  if ((*in_stack_00000150 == 0) || (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar26 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar26 = lVar26 + lVar18 * 0x178;
  uVar15 = *(undefined8 *)(lVar26 + 0x11c);
  *(undefined8 *)(lVar26 + 0x11c) =
       CONCAT44(fVar62 + (float)((ulong)uVar15 >> 0x20),fVar59 + (float)uVar15);
  *(float *)(lVar26 + 0x124) = fVar65 + *(float *)(lVar26 + 0x124);
  if ((*in_stack_00000150 == 0) || (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar26 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar26 = lVar26 + lVar18 * 0x178;
  *(ulong *)(lVar26 + 0x110) =
       CONCAT44(fVar62 + (float)((ulong)*(undefined8 *)(lVar26 + 0x110) >> 0x20),
                fVar59 + (float)*(undefined8 *)(lVar26 + 0x110));
  *(float *)(lVar26 + 0x118) = fVar65 + *(float *)(lVar26 + 0x118);
  if ((*in_stack_00000150 == 0) || (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar26 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar26 = lVar26 + lVar18 * 0x178;
  *(ulong *)(lVar26 + 0x128) =
       CONCAT44(fVar62 + (float)((ulong)*(undefined8 *)(lVar26 + 0x128) >> 0x20),
                fVar59 + (float)*(undefined8 *)(lVar26 + 0x128));
  *(float *)(lVar26 + 0x130) = fVar65 + *(float *)(lVar26 + 0x130);
  if ((*in_stack_00000150 == 0) || (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar26 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar26 = lVar26 + lVar18 * 0x178;
  *(float *)(lVar26 + 0x134) = fVar59 + *(float *)(lVar26 + 0x134);
  *(ulong *)(lVar26 + 0x138) =
       CONCAT44(fVar65 + (float)((ulong)*(undefined8 *)(lVar26 + 0x138) >> 0x20),
                fVar62 + (float)*(undefined8 *)(lVar26 + 0x138));
  lVar26 = *in_stack_00000150;
  if ((lVar26 == 0) || (lVar24 = *(long *)(lVar26 + 0x38), lVar24 == 0)) goto LAB_02491464;
  uVar41 = *(uint *)(lVar24 + 0x18);
  if (uVar41 <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar35 = lVar24 + lVar18 * 0x178;
  *(ulong *)(lVar35 + 0x140) =
       CONCAT44(fVar59 + (float)((ulong)*(undefined8 *)(lVar35 + 0x140) >> 0x20),
                fVar59 + (float)*(undefined8 *)(lVar35 + 0x140));
  *(ulong *)(lVar35 + 0x148) =
       CONCAT44(fVar62 + (float)((ulong)*(undefined8 *)(lVar35 + 0x148) >> 0x20),
                fVar62 + (float)*(undefined8 *)(lVar35 + 0x148));
  *(float *)(lVar35 + 0x150) = fVar62 + *(float *)(lVar35 + 0x150);
  if (uVar33 == uVar25) {
    uVar25 = *in_stack_00000148 - 1;
    if (uVar12 == uVar25) goto LAB_0248fccc;
  }
  else {
    lVar26 = *(long *)(lVar26 + 0x50);
    if (lVar26 == 0) goto LAB_02491464;
    if (*(uint *)(lVar26 + 0x18) <= uVar25)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar35 = (long)(int)uVar25;
    lVar37 = lVar26 + lVar35 * 0x5c;
    fVar51 = fVar62 + *(float *)(lVar37 + 0x54);
    *(ulong *)(lVar37 + 0x4c) =
         CONCAT44(fVar62 + (float)((ulong)*(undefined8 *)(lVar37 + 0x4c) >> 0x20),
                  fVar62 + (float)*(undefined8 *)(lVar37 + 0x4c));
    *(float *)(lVar37 + 0x54) = fVar51;
    *(float *)(lVar37 + 0x58) = fVar59 + *(float *)(lVar37 + 0x58);
    if (uVar41 <= *(uint *)(lVar37 + 0x34))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    uVar67 = *(undefined4 *)(lVar24 + (long)(int)*(uint *)(lVar37 + 0x34) * 0x178 + 0x11c);
    lVar26 = lVar26 + lVar35 * 0x5c;
    *(float *)(lVar26 + 0x70) = fVar51;
    *(undefined4 *)(lVar26 + 0x6c) = uVar67;
    lVar26 = *in_stack_00000150;
    if ((lVar26 == 0) || (lVar24 = *(long *)(lVar26 + 0x50), lVar24 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar24 + 0x18) <= uVar25)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar26 = *(long *)(lVar26 + 0x38);
    if (lVar26 == 0) goto LAB_02491464;
    uVar25 = *(uint *)(lVar24 + lVar35 * 0x5c + 0x40);
    if (*(uint *)(lVar26 + 0x18) <= uVar25)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar24 = lVar24 + lVar35 * 0x5c;
    *(undefined4 *)(lVar24 + 0x74) = *(undefined4 *)(lVar26 + (long)(int)uVar25 * 0x178 + 0x128);
    *(undefined4 *)(lVar24 + 0x78) = *(undefined4 *)(lVar24 + 0x4c);
    uVar25 = *in_stack_00000148 - 1;
LAB_0248fccc:
    if (uVar12 == uVar25) {
      lVar26 = *in_stack_00000150;
      if ((lVar26 == 0) || (lVar24 = *(long *)(lVar26 + 0x50), lVar24 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar24 + 0x18) <= uVar33)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar35 = lVar24 + lVar36 * 0x5c;
      fVar51 = fVar62 + *(float *)(lVar35 + 0x54);
      *(ulong *)(lVar35 + 0x4c) =
           CONCAT44(fVar62 + (float)((ulong)*(undefined8 *)(lVar35 + 0x4c) >> 0x20),
                    fVar62 + (float)*(undefined8 *)(lVar35 + 0x4c));
      *(float *)(lVar35 + 0x54) = fVar51;
      *(float *)(lVar35 + 0x58) = fVar59 + *(float *)(lVar35 + 0x58);
      lVar26 = *(long *)(lVar26 + 0x38);
      if (lVar26 == 0) goto LAB_02491464;
      if (*(uint *)(lVar26 + 0x18) <= *(uint *)(lVar35 + 0x34))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar67 = *(undefined4 *)(lVar26 + (long)(int)*(uint *)(lVar35 + 0x34) * 0x178 + 0x11c);
      lVar24 = lVar24 + lVar36 * 0x5c;
      *(float *)(lVar24 + 0x70) = fVar51;
      *(undefined4 *)(lVar24 + 0x6c) = uVar67;
      lVar26 = *in_stack_00000150;
      if ((lVar26 == 0) || (lVar24 = *(long *)(lVar26 + 0x50), lVar24 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar24 + 0x18) <= uVar33)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar26 = *(long *)(lVar26 + 0x38);
      if (lVar26 == 0) goto LAB_02491464;
      uVar25 = *(uint *)(lVar24 + lVar36 * 0x5c + 0x40);
      if (*(uint *)(lVar26 + 0x18) <= uVar25)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar24 = lVar24 + lVar36 * 0x5c;
      *(undefined4 *)(lVar24 + 0x74) = *(undefined4 *)(lVar26 + (long)(int)uVar25 * 0x178 + 0x128);
      *(undefined4 *)(lVar24 + 0x78) = *(undefined4 *)(lVar24 + 0x4c);
    }
  }
  if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar17 = FUN_016f9468(uVar31,0);
  if (((((uVar17 & 1) == 0) && (1 < uVar31 - 0x2010)) && (uVar31 != 0xad)) && (uVar31 != 0x2d)) {
    if (bVar9) {
      if (((uVar30 != 1) && ((int)uVar12 < (int)(*(uint *)(lVar22 + 0x18) - 1))) &&
         (((int)uVar12 < (int)*in_stack_00000148 && ((uVar31 == 0x2019 || (uVar31 == 0x27)))))) {
        if (*(uint *)(lVar22 + 0x18) <= uVar30 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        uVar4 = *(undefined2 *)(lVar22 + lStack0000000000000128 + -0x438);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar17 = FUN_016f9468(uVar4,0);
        if ((uVar17 & 1) != 0) {
          if (*(uint *)(lVar22 + 0x18) <= uVar30)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          uVar4 = *(undefined2 *)(lVar22 + lStack0000000000000128 + -0x148);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar17 = FUN_016f9468(uVar4,0);
          if ((uVar17 & 1) != 0) goto LAB_0248fee0;
        }
      }
    }
    else {
      if (uVar30 != 1) {
LAB_024909a0:
        bVar9 = false;
        goto LAB_0248fee8;
      }
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar17 = FUN_016f93a0(uVar31,0);
      if ((uVar17 & 1) != 0) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar17 = FUN_016f68bc(uVar31,0);
        if (((uVar31 != 0x200b) && ((uVar17 & 1) == 0)) && (*in_stack_00000148 != 1))
        goto LAB_024909a0;
      }
    }
    if (uVar12 == *in_stack_00000148 - 1) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar17 = FUN_016f9468(uVar31,0);
      iVar13 = iVar11;
      if ((uVar17 & 1) == 0) goto LAB_02490204;
    }
    else {
LAB_02490204:
      iVar13 = uVar30 - 2;
    }
    lVar26 = *in_stack_00000150;
    if (lVar26 == 0) goto LAB_02491464;
    lVar24 = *(long *)(lVar26 + 0x40);
    if (lVar24 == 0) goto LAB_02491464;
    uVar25 = *(uint *)(lVar26 + 0x24);
    iVar14 = *(int *)(lVar24 + 0x18);
    if (iVar14 < (int)(uVar25 + 1)) {
      if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01147b84((long *)(lVar26 + 0x40),iVar14 + 1,
                   *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
      lVar26 = *in_stack_00000150;
      if (lVar26 == 0) goto LAB_02491464;
    }
    lVar24 = *(long *)(lVar26 + 0x40);
    if (lVar24 == 0) goto LAB_02491464;
    if (*(uint *)(lVar24 + 0x18) <= uVar25)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar24 = lVar24 + (long)(int)uVar25 * 0x18;
    *(long **)(lVar24 + 0x20) = unaff_x19;
    *(uint *)(lVar24 + 0x28) = uStack0000000000000114;
    *(int *)(lVar24 + 0x2c) = iVar13;
    *(uint *)(lVar24 + 0x30) = (iVar13 - uStack0000000000000114) + 1;
    lVar24 = *(long *)(lVar26 + 0x50);
    *(int *)(lVar26 + 0x24) = *(int *)(lVar26 + 0x24) + 1;
    if (lVar24 == 0) goto LAB_02491464;
    if (*(uint *)(lVar24 + 0x18) <= uVar33)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar24 = lVar24 + lVar36 * 0x5c;
    bVar9 = false;
    iStack00000000000000a4 = iStack00000000000000a4 + 1;
    *(int *)(lVar24 + 0x30) = *(int *)(lVar24 + 0x30) + 1;
  }
  else {
    if (!bVar9) {
      uStack0000000000000114 = uVar12;
    }
    if (uVar12 == *in_stack_00000148 - 1) {
      lVar26 = *in_stack_00000150;
      if (lVar26 == 0) goto LAB_02491464;
      lVar24 = *(long *)(lVar26 + 0x40);
      if (lVar24 == 0) goto LAB_02491464;
      uVar25 = *(uint *)(lVar26 + 0x24);
      iVar13 = *(int *)(lVar24 + 0x18);
      if (iVar13 < (int)(uVar25 + 1)) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147b84((long *)(lVar26 + 0x40),iVar13 + 1,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
        lVar26 = *in_stack_00000150;
        if (lVar26 == 0) goto LAB_02491464;
      }
      lVar24 = *(long *)(lVar26 + 0x40);
      if (lVar24 == 0) goto LAB_02491464;
      if (*(uint *)(lVar24 + 0x18) <= uVar25)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar24 = lVar24 + (long)(int)uVar25 * 0x18;
      *(long **)(lVar24 + 0x20) = unaff_x19;
      *(uint *)(lVar24 + 0x28) = uStack0000000000000114;
      *(uint *)(lVar24 + 0x2c) = uVar12;
      *(uint *)(lVar24 + 0x30) = uVar30 - uStack0000000000000114;
      lVar24 = *(long *)(lVar26 + 0x50);
      *(int *)(lVar26 + 0x24) = *(int *)(lVar26 + 0x24) + 1;
      if (lVar24 == 0) goto LAB_02491464;
      if (*(uint *)(lVar24 + 0x18) <= uVar33)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar24 = lVar24 + lVar36 * 0x5c;
      iStack00000000000000a4 = iStack00000000000000a4 + 1;
      *(int *)(lVar24 + 0x30) = *(int *)(lVar24 + 0x30) + 1;
    }
LAB_0248fee0:
    bVar9 = true;
  }
LAB_0248fee8:
  if ((*in_stack_00000150 == 0) || (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 == 0))
  goto LAB_02491464;
  uVar25 = *(uint *)(lVar26 + 0x18);
  if (uVar25 <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*(byte *)(lVar26 + lVar18 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar10) {
LAB_0248ff18:
      if (uVar25 <= uVar30 - 2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar36 = *unaff_x19;
      uVar67 = *(undefined4 *)(lVar26 + lStack0000000000000128 + -0x330);
      uVar58 = *(undefined4 *)(lVar26 + lStack0000000000000128 + -0x2f8);
LAB_02490474:
      pcVar29 = *(code **)(lVar36 + 0x908);
LAB_0249047c:
      (*pcVar29)(fStack0000000000000054,fStack000000000000004c,fStack0000000000000050,uVar67,
                 fStack00000000000000cc,0,fStack0000000000000058,uVar58);
      puVar8 = System_Threading_Mutex_TypeInfo;
      lVar26 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar26 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar26 = *(long *)puVar8;
      }
LAB_024904cc:
      bVar10 = false;
      fVar50 = 0.0;
      fStack00000000000000cc = *(float *)(*(long *)(lVar26 + 0xb8) + 0x15a8);
      fStack00000000000000c8 = 0.0;
    }
    else {
LAB_024903d8:
      bVar10 = false;
    }
  }
  else {
    lVar26 = lVar26 + lVar18 * 0x178;
    iVar13 = *(int *)(lVar26 + 0x68);
    *(int *)(lVar26 + 0x16c) = iVar38;
    if ((((int)unaff_x19[100] < (int)uVar12) || ((int)unaff_x19[0x65] < (int)uVar33)) ||
       (((int)unaff_x19[0x5b] == 5 && (iVar13 + 1 != (int)unaff_x19[0x66])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar17 = FUN_016f68bc(uVar31,0);
    if ((uVar31 != 0x200b) && ((uVar17 & 1) == 0)) {
      lVar26 = *in_stack_00000150;
      if ((lVar26 == 0) || (lVar36 = *(long *)(lVar26 + 0x38), lVar36 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar36 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      fVar51 = *(float *)(lVar36 + lVar18 * 0x178 + 0x160);
      if (fVar50 <= fVar51) {
        fVar50 = fVar51;
      }
      if (fStack00000000000000c8 <= ABS(fVar53)) {
        fStack00000000000000c8 = ABS(fVar53);
      }
      if ((float)iVar13 != fStack0000000000000048) {
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar26 = *in_stack_00000150;
          if (lVar26 == 0) goto LAB_02491464;
          lVar36 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
        }
        else {
          lVar36 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
        }
        fStack00000000000000cc = *(float *)(lVar36 + 0x15a8);
      }
      lVar26 = *(long *)(lVar26 + 0x38);
      if (lVar26 == 0) goto LAB_02491464;
      if (*(uint *)(lVar26 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (unaff_x19[0x1e] == 0) goto LAB_02491464;
      fVar64 = *(float *)(lVar26 + lVar18 * 0x178 + 0x14c);
      fVar51 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
      fVar64 = fVar64 + fVar50 * fVar51;
      fStack0000000000000048 = (float)iVar13;
      if (fVar64 <= fStack00000000000000cc) {
        fStack00000000000000cc = fVar64;
      }
    }
    if (!bVar10) {
      bVar10 = false;
      if ((((uVar31 == 0xd) || ((uVar31 | 1) == 0xb)) || ((int)uVar2 < (int)uVar12)) || (!bVar1))
      goto LAB_024904e8;
      if (uVar12 == uVar2) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar17 = FUN_016fa418(uVar31,0);
        if ((uVar17 & 1) != 0) goto LAB_024903d8;
      }
      if ((*in_stack_00000150 == 0) || (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar26 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar26 = lVar26 + lVar18 * 0x178;
      fStack0000000000000058 = *(float *)(lVar26 + 0x160);
      fStack0000000000000054 = *(float *)(lVar26 + 0x11c);
      bVar10 = fVar50 != 0.0;
      fVar51 = fStack0000000000000058;
      if (bVar10) {
        fVar51 = fVar50;
      }
      fVar50 = fVar51;
      _bStack000000000000005c = *(uint *)(lVar26 + 0x168);
      fStack0000000000000050 = 0.0;
      fVar51 = fVar53;
      if (bVar10) {
        fVar51 = fStack00000000000000c8;
      }
      fStack000000000000004c = fStack00000000000000cc;
      fStack00000000000000c8 = fVar51;
    }
    if (*in_stack_00000148 == 1) {
      if ((*in_stack_00000150 != 0) && (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 != 0))
      {
        if (uVar12 < *(uint *)(lVar26 + 0x18)) {
          lVar26 = lVar26 + lVar18 * 0x178;
          lVar36 = *unaff_x19;
          uVar67 = *(undefined4 *)(lVar26 + 0x128);
          uVar58 = *(undefined4 *)(lVar26 + 0x160);
          goto LAB_02490474;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
    if ((uVar12 == uVar5) || ((int)uVar2 <= (int)uVar12)) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar17 = FUN_016f68bc(uVar31,0);
      if ((*in_stack_00000150 != 0) && (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 != 0))
      {
        if (uVar31 == 0x200b || (uVar17 & 1) != 0) {
          lVar36 = lVar40;
          if (*(uint *)(lVar26 + 0x18) <= uVar2)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        else {
          lVar36 = lVar18;
          if (*(uint *)(lVar26 + 0x18) <= uVar12)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        lVar26 = lVar26 + lVar36 * 0x178;
        uVar67 = *(undefined4 *)(lVar26 + 0x128);
        uVar58 = *(undefined4 *)(lVar26 + 0x160);
        pcVar29 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_0249047c;
      }
      goto LAB_02491464;
    }
    if (!bVar1) {
      if ((*in_stack_00000150 != 0) && (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 != 0))
      {
        uVar25 = *(uint *)(lVar26 + 0x18);
        goto LAB_0248ff18;
      }
      goto LAB_02491464;
    }
    if ((int)uVar12 < (int)(*in_stack_00000148 - 1)) {
      if ((*in_stack_00000150 == 0) || (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar26 + 0x18) <= uVar30)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar17 = FUN_024a9e4c(_bStack000000000000005c,*(undefined4 *)(lVar26 + lStack0000000000000128)
                            ,0);
      if ((uVar17 & 1) == 0) {
        if ((*in_stack_00000150 != 0) &&
           (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 != 0)) {
          if (uVar12 < *(uint *)(lVar26 + 0x18)) {
            lVar26 = lVar26 + lVar18 * 0x178;
            (**(code **)(*unaff_x19 + 0x908))
                      (fStack0000000000000054,fStack000000000000004c,fStack0000000000000050,
                       *(undefined4 *)(lVar26 + 0x128),fStack00000000000000cc,0,
                       fStack0000000000000058,*(undefined4 *)(lVar26 + 0x160));
            puVar8 = System_Threading_Mutex_TypeInfo;
            lVar26 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar26 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar26 = *(long *)puVar8;
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
  if ((*in_stack_00000150 == 0) || (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 == 0))
  goto LAB_02491464;
  if (*(uint *)(lVar26 + 0x18) <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if (lVar34 == 0) goto LAB_02491464;
  uVar25 = *(uint *)(lVar26 + lVar18 * 0x178 + 400);
  fVar51 = (float)FUN_026fd1f0(lVar34 + 0x50,0);
  if ((uVar25 >> 6 & 1) == 0) {
    if (bVar6) {
      if ((*in_stack_00000150 == 0) || (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 == 0))
      goto LAB_02491464;
      if (*(uint *)(lVar26 + 0x18) <= uVar30 - 2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar67 = *(undefined4 *)(lVar26 + lStack0000000000000128 + -0x330);
      pcVar29 = *(code **)(*unaff_x19 + 0x908);
      fVar62 = fStack0000000000000084 * fVar51 +
               *(float *)(lVar26 + lStack0000000000000128 + -0x30c);
LAB_02490a68:
      (*pcVar29)(in_stack_00000078._4_4_,in_stack_00000068._4_4_,uStack0000000000000060,uVar67,
                 fVar62,0,fStack0000000000000084,fStack0000000000000084);
    }
LAB_02490a9c:
    bVar6 = false;
  }
  else {
    lVar26 = *in_stack_00000150;
    if ((lVar26 == 0) || (lVar36 = *(long *)(lVar26 + 0x38), lVar36 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar36 + 0x18) <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(int *)(lVar36 + lVar18 * 0x178 + 0x174) = iVar38;
    if ((((int)unaff_x19[100] < (int)uVar12) || ((int)unaff_x19[0x65] < (int)uVar33)) ||
       (((int)unaff_x19[0x5b] == 5 &&
        (*(int *)(lVar36 + lVar18 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((((uVar31 == 0xd) || ((uVar31 | 1) == 0xb)) || ((int)uVar2 < (int)uVar12)) ||
       (bVar6 || !bVar1)) {
LAB_02490668:
      if (!bVar6) goto LAB_02490a9c;
    }
    else {
      if (uVar12 == uVar2) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar17 = FUN_016fa418(uVar31,0);
        if ((uVar17 & 1) != 0) goto LAB_02490668;
        lVar26 = *in_stack_00000150;
        if (lVar26 == 0) goto LAB_02491464;
      }
      lVar26 = *(long *)(lVar26 + 0x38);
      if (lVar26 == 0) goto LAB_02491464;
      if (*(uint *)(lVar26 + 0x18) <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar26 = lVar26 + lVar18 * 0x178;
      fStack0000000000000038 = *(float *)(lVar26 + 0x60);
      fStack0000000000000084 = *(float *)(lVar26 + 0x160);
      fStack0000000000000034 = *(float *)(lVar26 + 0x14c);
      in_stack_00000078._4_4_ = *(float *)(lVar26 + 0x11c);
      in_stack_00000068._4_4_ = fVar51 * fStack0000000000000084 + fStack0000000000000034;
      uStack0000000000000060 = 0;
    }
    uVar25 = *in_stack_00000148;
    if (uVar25 == 1) {
      if (*in_stack_00000150 != 0) {
        lVar26 = *(long *)(*in_stack_00000150 + 0x38);
joined_r0x024907c8:
        if (lVar26 != 0) {
          if (uVar12 < *(uint *)(lVar26 + 0x18)) {
            lVar26 = lVar26 + lVar18 * 0x178;
            lVar40 = *unaff_x19;
            uVar67 = *(undefined4 *)(lVar26 + 0x128);
            fVar62 = *(float *)(lVar26 + 0x14c);
LAB_024907e8:
            pcVar29 = *(code **)(lVar40 + 0x908);
LAB_02490a64:
            fVar62 = fVar51 * fStack0000000000000084 + fVar62;
            goto LAB_02490a68;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
      }
      goto LAB_02491464;
    }
    if (uVar12 == uVar5) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar17 = FUN_016f68bc(uVar31,0);
      if ((*in_stack_00000150 != 0) && (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 != 0))
      {
        uVar25 = *(uint *)(lVar26 + 0x18);
        if (uVar31 == 0x200b || (uVar17 & 1) != 0) {
          if (uVar25 <= uVar2)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        else {
LAB_02490a40:
          lVar40 = lVar18;
          if (uVar25 <= uVar12)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
LAB_02490a48:
        lVar26 = lVar26 + lVar40 * 0x178;
        fVar62 = *(float *)(lVar26 + 0x14c);
        uVar67 = *(undefined4 *)(lVar26 + 0x128);
        pcVar29 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_02490a64;
      }
      goto LAB_02491464;
    }
    if ((int)uVar12 < (int)uVar25) {
      lVar26 = *in_stack_00000150;
      if ((lVar26 != 0) && (lVar36 = *(long *)(lVar26 + 0x38), lVar36 != 0)) {
        if (uVar30 < *(uint *)(lVar36 + 0x18)) {
          if (*(float *)(lVar36 + lStack0000000000000128 + -0x108) == fStack0000000000000038) {
            fVar64 = *(float *)(lVar36 + lStack0000000000000128 + -0x1c);
            if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar17 = FUN_024aa280(fVar62 + fVar64,fStack0000000000000034,0);
            if ((uVar17 & 1) != 0) {
              uVar25 = *in_stack_00000148;
              goto LAB_024908ec;
            }
            lVar26 = *in_stack_00000150;
            if (lVar26 == 0) goto LAB_02491464;
          }
          lVar26 = *(long *)(lVar26 + 0x38);
          if (lVar26 != 0) {
            uVar25 = *(uint *)(lVar26 + 0x18);
            if ((int)uVar12 <= (int)uVar2) goto LAB_02490a40;
            if (uVar2 < uVar25) goto LAB_02490a48;
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          }
          goto LAB_02491464;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
LAB_024908ec:
    if ((int)uVar12 < (int)uVar25) {
      iVar13 = FUN_02681c0c(lVar34,0);
      if (*(uint *)(lVar22 + 0x18) <= uVar30)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar26 = *(long *)(lVar22 + lStack0000000000000128 + -0x130);
      if (lVar26 == 0) goto LAB_02491464;
      iVar14 = FUN_02681c0c(lVar26,0);
      if (iVar13 != iVar14) {
        if (*in_stack_00000150 != 0) {
          lVar26 = *(long *)(*in_stack_00000150 + 0x38);
          goto joined_r0x024907c8;
        }
        goto LAB_02491464;
      }
    }
    if (!bVar1) {
      if ((*in_stack_00000150 != 0) && (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 != 0))
      {
        if (uVar30 - 2 < *(uint *)(lVar26 + 0x18)) {
          lVar40 = *unaff_x19;
          uVar67 = *(undefined4 *)(lVar26 + lStack0000000000000128 + -0x330);
          fVar62 = *(float *)(lVar26 + lStack0000000000000128 + -0x30c);
          goto LAB_024907e8;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
    bVar6 = true;
  }
  if ((*in_stack_00000150 == 0) || (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 == 0))
  goto LAB_02491464;
  uVar25 = (uint)*(undefined8 *)(lVar26 + 0x18);
  if (uVar25 <= uVar12)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*(byte *)(lVar26 + lVar18 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar7) {
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,
                 fStack0000000000000098,in_stack_000000a0,uStack0000000000000094);
    }
LAB_02490b04:
    bVar7 = false;
  }
  else {
    if ((((int)unaff_x19[100] < (int)uVar12) || ((int)unaff_x19[0x65] < (int)uVar33)) ||
       (((int)unaff_x19[0x5b] == 5 &&
        (*(int *)(lVar26 + lVar18 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar7) {
      if ((((uVar31 == 0xd) || ((uVar31 | 1) == 0xb)) || ((int)uVar2 < (int)uVar12)) || (!bVar1))
      goto LAB_02490b04;
      if (uVar12 == uVar2) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar17 = FUN_016fa418(uVar31,0);
        if ((uVar17 & 1) != 0) goto LAB_02490b04;
      }
      puVar8 = System_Threading_Mutex_TypeInfo;
      lVar40 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar40 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar40 = *(long *)puVar8;
      }
      if ((*in_stack_00000150 == 0) || (lVar26 = *(long *)(*in_stack_00000150 + 0x38), lVar26 == 0))
      goto LAB_02491464;
      uVar25 = (uint)*(undefined8 *)(lVar26 + 0x18);
      if (uVar25 <= uVar12)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar40 = *(long *)(lVar40 + 0xb8);
      lVar36 = lVar26 + lVar18 * 0x178;
      in_stack_00001798 = *(undefined8 *)(lVar36 + 0x184);
      in_stack_00001790 = *(undefined8 *)(lVar36 + 0x17c);
      fStack00000000000000a8 = *(float *)(lVar40 + 0x1598);
      in_stack_000017a0 = *(float *)(lVar36 + 0x18c);
      fStack00000000000000ac = *(float *)(lVar40 + 0x159c);
      fStack0000000000000098 = *(float *)(lVar40 + 0x15a0);
      in_stack_000000a0 = *(float *)(lVar40 + 0x15a4);
      uStack0000000000000094 = 0;
    }
    if (uVar25 <= uVar12)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar26 = lVar26 + lVar18 * 0x178;
    fVar51 = *(float *)(lVar26 + 0x128);
    fVar44 = *(float *)(lVar26 + 0x188);
    uVar16 = *(undefined8 *)(lVar26 + 0x17c);
    fVar47 = *(float *)(lVar26 + 0x184);
    uVar15 = *(undefined8 *)(lVar26 + 0x184);
    fVar46 = *(float *)(lVar26 + 0x18c);
    fVar62 = *(float *)(lVar26 + 0x11c);
    fVar64 = *(float *)(lVar26 + 0x148);
    fVar45 = *(float *)(lVar26 + 0x150);
    in_stack_00000158 = uVar16;
    fStack0000000000000160 = fVar47;
    fStack0000000000000164 = fVar44;
    in_stack_00000168 = fVar46;
    in_stack_00000170 = in_stack_00001790;
    in_stack_00000178 = in_stack_00001798;
    in_stack_00000180 = in_stack_000017a0;
    uVar17 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
    lVar26 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
    if ((uVar17 & 1) == 0) {
      if (*(int *)(lVar26 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar26);
      }
      fVar51 = fVar51 + (float)in_stack_00001798;
      fVar62 = fVar62 - (float)((ulong)in_stack_00001790 >> 0x20);
      fVar64 = fVar64 + (float)((ulong)in_stack_00001798 >> 0x20);
      if (fVar62 <= fStack00000000000000a8) {
        fStack00000000000000a8 = fVar62;
      }
      if (fVar45 - in_stack_000017a0 <= fStack00000000000000ac) {
        fStack00000000000000ac = fVar45 - in_stack_000017a0;
      }
      if (fStack0000000000000098 <= fVar51) {
        fStack0000000000000098 = fVar51;
      }
      if (in_stack_000000a0 <= fVar64) {
        in_stack_000000a0 = fVar64;
      }
    }
    else {
      if (*(int *)(lVar26 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar26);
      }
      fVar62 = (fVar62 + (fStack0000000000000098 - (float)in_stack_00001798)) * 0.5;
      if (fVar45 <= fStack00000000000000ac) {
        fStack00000000000000ac = fVar45;
      }
      if (in_stack_000000a0 <= fVar64) {
        in_stack_000000a0 = fVar64;
      }
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,fVar62,
                 in_stack_000000a0,uStack0000000000000094);
      fStack00000000000000ac = fVar45 - fVar46;
      fStack0000000000000098 = fVar51 + fVar47;
      uStack0000000000000094 = 0;
      in_stack_000000a0 = fVar64 + fVar44;
      fStack00000000000000a8 = fVar62;
      in_stack_00001790 = uVar16;
      in_stack_00001798 = uVar15;
      in_stack_000017a0 = fVar46;
    }
    if (((*in_stack_00000148 == 1) || (uVar12 == uVar5)) ||
       (((int)uVar2 <= (int)uVar12 || (!bVar1)))) {
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,
                 fStack0000000000000098,in_stack_000000a0,uStack0000000000000094);
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
  }
  uVar12 = *in_stack_00000148;
  iVar11 = iVar11 + 1;
  lStack0000000000000128 = lStack0000000000000128 + 0x178;
  bVar1 = (int)uVar12 <= (int)uVar30;
  uVar25 = uVar33;
  uVar30 = uVar30 + 1;
  if (bVar1) goto LAB_02491038;
  goto LAB_0248ef74;
LAB_02491038:
  lVar22 = *in_stack_00000150;
  if (lVar22 != 0) {
    iVar38 = uVar33 + 1;
    plVar27 = (long *)PTR_DAT_033ed410;
LAB_02491068:
    *(uint *)(lVar22 + 0x18) = uVar12;
    lVar26 = unaff_x19[0xd3];
    *(int *)(lVar22 + 0x2c) = iVar38;
    iVar38 = iStack00000000000000a4;
    if ((int)uVar12 < 1) {
      iVar38 = 1;
    }
    if (iStack00000000000000a4 == 0) {
      iVar38 = 1;
    }
    *(int *)(lVar22 + 0x1c) = (int)lVar26;
    *(int *)(lVar22 + 0x24) = iVar38;
    *(int *)(lVar22 + 0x30) = (int)unaff_x19[0x95] + 1;
    if (((int)unaff_x19[0x62] != 0xff) ||
       (uVar17 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar17 & 1) == 0)) {
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
                          lVar40 = 0;
                          lVar26 = 0;
                          do {
                            uVar17 = lVar26 + 1;
                            if ((long)*(int *)(lVar22 + 0x34) <= (long)uVar17) goto LAB_02491468;
                            lVar22 = *(long *)(lVar22 + 0x60);
                            if (lVar22 == 0) break;
                            if (*(int *)(*plVar27 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            if (*(uint *)(lVar22 + 0x18) <= uVar17)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            FUN_024e7ecc(lVar22 + lVar40 + 0x70,0);
                            lVar22 = unaff_x19[0xe0];
                            if (lVar22 == 0) break;
                            if (*(uint *)(lVar22 + 0x18) <= uVar17)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            uVar15 = *(undefined8 *)(lVar22 + lVar26 * 8 + 0x28);
                            if (*(int *)(*plVar42 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar54 = FUN_0268b4e0(uVar15,0,0);
                            if ((uVar54 & 1) == 0) {
                              if (*(int *)((long)unaff_x19 + 0x314) != 0) {
                                if ((*in_stack_00000150 == 0) ||
                                   (lVar22 = *(long *)(*in_stack_00000150 + 0x60), lVar22 == 0))
                                break;
                                if (*(int *)(*plVar27 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                if (*(uint *)(lVar22 + 0x18) <= uVar17)
                                goto 
                                UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                                ;
                                FUN_024e8000(lVar22 + lVar40 + 0x70,1,0);
                              }
                              lVar22 = unaff_x19[0xe0];
                              if (lVar22 == 0) break;
                              if (*(uint *)(lVar22 + 0x18) <= uVar17)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar22 = *(long *)(lVar22 + lVar26 * 8 + 0x28);
                              if (lVar22 == 0) break;
                              lVar22 = FUN_024eefa0(lVar22,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar18 = *(long *)(*in_stack_00000150 + 0x60), lVar18 == 0))
                              break;
                              if (*(uint *)(lVar18 + 0x18) <= uVar17)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar22 == 0) break;
                              FUN_0266b9c4(lVar22,*(undefined8 *)(lVar18 + lVar40 + 0x80),0);
                              lVar22 = unaff_x19[0xe0];
                              if (lVar22 == 0) break;
                              if (*(uint *)(lVar22 + 0x18) <= uVar17)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar22 = *(long *)(lVar22 + lVar26 * 8 + 0x28);
                              if (lVar22 == 0) break;
                              lVar22 = FUN_024eefa0(lVar22,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar18 = *(long *)(*in_stack_00000150 + 0x60), lVar18 == 0))
                              break;
                              if (*(uint *)(lVar18 + 0x18) <= uVar17)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar22 == 0) break;
                              FUN_0266bbc8(lVar22,*(undefined8 *)(lVar18 + lVar40 + 0x98),0);
                              lVar22 = unaff_x19[0xe0];
                              if (lVar22 == 0) break;
                              if (*(uint *)(lVar22 + 0x18) <= uVar17)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar22 = *(long *)(lVar22 + lVar26 * 8 + 0x28);
                              if (lVar22 == 0) break;
                              lVar22 = FUN_024eefa0(lVar22,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar18 = *(long *)(*in_stack_00000150 + 0x60), lVar18 == 0))
                              break;
                              if (*(uint *)(lVar18 + 0x18) <= uVar17)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar22 == 0) break;
                              FUN_0266bc74(lVar22,*(undefined8 *)(lVar18 + lVar40 + 0xa0),0);
                              lVar22 = unaff_x19[0xe0];
                              if (lVar22 == 0) break;
                              if (*(uint *)(lVar22 + 0x18) <= uVar17)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar22 = *(long *)(lVar22 + lVar26 * 8 + 0x28);
                              if (lVar22 == 0) break;
                              lVar22 = FUN_024eefa0(lVar22,0);
                              if ((*in_stack_00000150 == 0) ||
                                 (lVar18 = *(long *)(*in_stack_00000150 + 0x60), lVar18 == 0))
                              break;
                              if (*(uint *)(lVar18 + 0x18) <= uVar17)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar22 == 0) break;
                              FUN_0266c1dc(lVar22,*(undefined8 *)(lVar18 + lVar40 + 0xa8),0);
                              lVar22 = unaff_x19[0xe0];
                              if (lVar22 == 0) break;
                              if (*(uint *)(lVar22 + 0x18) <= uVar17)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar22 = *(long *)(lVar22 + lVar26 * 8 + 0x28);
                              if ((lVar22 == 0) || (lVar22 = FUN_024eefa0(lVar22,0), lVar22 == 0))
                              break;
                              FUN_0266ed90(lVar22,0);
                            }
                            lVar22 = *in_stack_00000150;
                            lVar26 = lVar26 + 1;
                            lVar40 = lVar40 + 0x50;
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


