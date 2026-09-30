/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor$$Awake
ENTRY_POINT: 02493edc
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

void UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor__Awake
               (undefined1 param_1 [16],ulong param_2,undefined1 param_3 [16],float param_4)

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
  uint in_w8;
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
  long *plVar41;
  uint uVar42;
  uint unaff_w23;
  long lVar43;
  long *plVar44;
  long unaff_x27;
  long *plVar45;
  int iVar46;
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
  float fVar57;
  long lVar58;
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
  uint in_stack_00000880;
  undefined4 in_stack_00000884;
  undefined8 in_stack_00000888;
  undefined4 in_stack_00000890;
  long in_stack_000016d8;
  uint in_stack_0000176c;
  undefined8 in_stack_00001790;
  undefined8 in_stack_00001798;
  float in_stack_000017a0;
  undefined8 in_stack_000017a8;
  char in_stack_000017b4;
  float in_stack_000017b8;
  uint in_stack_000017bc;
  
code_r0x02493edc:
  plVar45 = (long *)StringLiteral_302;
  plVar41 = (long *)System_Threading_Mutex_TypeInfo;
                    /* catch(type#1 @ 03274860) { ... } // from try @ 02493e84 with catch @ 02493edc
                        */
  if ((int)in_w8 < 0) goto LAB_02494498;
                    /* catch(type#1 @ 03274860) { ... } // from try @ 02493e98 with catch @ 02493ee0
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 02493e74 with catch @ 02493ee4
                        */
  fVar57 = *(float *)(unaff_x19 + 0x98);
                    /* try { // try from 02493ef4 to 02593ef7 has its CatchHandler @ 02493f34 */
                    /* try { // try from 02493ef8 to 02593f3b has its CatchHandler @ 02493ce8 */
  if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  in_w8 = FUN_024d66ec();
                    /* catch() { ... } // from try @ 02493ef4 with catch @ 02493f34 */
  if (fStack00000000000000a4 < fVar57 - param_4) goto LAB_0249408c;
                    /* try { // try from 02493f3c to 02593f43 has its CatchHandler @ 02493f58 */
  *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
                    /* try { // try from 02493f44 to 02593f4f has its CatchHandler @ 02493ce8 */
  *(undefined4 *)(unaff_x19 + 0x92) = *(undefined4 *)((long)unaff_x19 + 0x48c);
                    /* try { // try from 02493f50 to 02593f57 has its CatchHandler @ 02493f58 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02493f3c with catch @ 02493f58
                       catch(type#2 @ 00000000) { ... } // from try @ 02493f50 with catch @ 02493f58
                        */
  param_2 = *(ulong *)(*(long *)(*plVar41 + 0xb8) + 0x15a8);
  *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
  *(undefined4 *)(unaff_x19 + 0x99) = 0;
  lVar58 = NEON_rev64(param_2,4);
  unaff_x19[0x98] = lVar58;
  *(undefined4 *)(unaff_x19 + 0x9a) = 0;
  *(undefined8 *)(in_stack_00000070 + 0x208) = 0;
  *(int *)(unaff_x19 + 0x94) = (int)unaff_x19[0x94] + 1;
  *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
LAB_02492630:
  fVar57 = (float)unaff_d13;
  in_w8 = in_w8 + 1;
  lVar58 = unaff_x19[0x8e];
  if (lVar58 != 0) {
    if ((int)in_w8 < (int)*(uint *)(lVar58 + 0x18)) {
      if (*(uint *)(lVar58 + 0x18) <= in_w8)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      uVar14 = *(uint *)(lVar58 + (long)(int)in_w8 * 0xc + 0x20);
      if (uVar14 == 0) goto LAB_02495f1c;
      if (5 < in_stack_00000140) {
        uVar19 = FUN_0176eb1c(&stack0x000017bc,0);
        uVar20 = FUN_0176eb1c(&stack0x00001788,0);
        uVar19 = FUN_0160073c(*(undefined8 *)UnityEngine_Rendering_Universal_DebugValidationMode_var
                              ,uVar19,*(undefined8 *)
                                       Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                              ,uVar20,0);
        if (*(int *)(*plVar45 + 0xe0) == 0) {
          thunk_FUN_00d32864(*plVar45);
        }
        FUN_026610e4(uVar19,0);
        in_stack_000017a8 = CONCAT44(3,*in_stack_00000148);
      }
      if ((*(char *)((long)unaff_x19 + 0x2fa) != '\0') && (uVar14 == 0x3c)) goto code_r0x02492440;
      if ((*in_stack_00000150 != 0) && (lVar58 = *(long *)(*in_stack_00000150 + 0x38), lVar58 != 0))
      {
        if (*in_stack_00000148 < *(uint *)(lVar58 + 0x18)) {
          lVar58 = lVar58 + (int)*in_stack_00000148 * unaff_x27;
          *(undefined4 *)((long)unaff_x19 + 0x63c) = *(undefined4 *)(lVar58 + 0x2c);
          *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar58 + 0x58);
          unaff_x19[0x1f] = *(long *)(lVar58 + 0x38);
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorReticleVisual__get_prefabScalingFactor
          ;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      }
      goto LAB_0249920c;
    }
LAB_02495f1c:
    fVar57 = (float)param_2;
    if (((char)unaff_x19[0x46] != '\0') &&
       (fVar57 = DAT_02956ccc,
       DAT_02956ccc < *(float *)((long)unaff_x19 + 0x234) - *(float *)(unaff_x19 + 0x47))) {
      fVar57 = *(float *)((long)unaff_x19 + 0x1dc);
      fVar74 = *(float *)((long)unaff_x19 + 0x24c);
      if ((fVar57 < fVar74) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
        if (*(float *)((long)unaff_x19 + 0x2cc) < *(float *)(unaff_x19 + 0x59) / 100.0) {
          *(undefined4 *)((long)unaff_x19 + 0x2cc) = 0;
        }
        fVar47 = (*(float *)((long)unaff_x19 + 0x234) - fVar57) * 0.5;
        if (fVar47 <= DAT_028aa298) {
          fVar47 = DAT_028aa298;
        }
        *(float *)(unaff_x19 + 0x47) = fVar57;
        fVar47 = (fVar57 + fVar47) * 20.0 + 0.5;
        fVar57 = DAT_02958220;
        if (fVar47 != INFINITY) {
          fVar57 = (float)(int)fVar47 / 20.0;
        }
        if (fVar74 <= fVar57) {
          fVar57 = fVar74;
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
      if (*(int *)(*plVar45 + 0xe0) == 0) {
        thunk_FUN_00d32864(*plVar45);
      }
      FUN_02660dac(uVar19,0);
    }
    if ((*in_stack_00000148 == 0) || ((*in_stack_00000148 == 1 && (in_stack_000017bc == 3)))) {
      (**(code **)(*unaff_x19 + 0x948))();
      goto LAB_02496098;
    }
    lVar58 = *plVar41;
    if (*(int *)(lVar58 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar58 = *plVar41;
    }
    puVar9 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    lVar58 = **(long **)(lVar58 + 0xb8);
    if (lVar58 == 0) goto LAB_0249920c;
    if (*(uint *)(lVar58 + 0x18) <= *(uint *)(unaff_x19 + 0xd0))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    iVar15 = *(int *)(lVar58 + (long)(int)*(uint *)(unaff_x19 + 0xd0) * 0x38 + 0x54) << 2;
    if ((*in_stack_00000150 == 0) || (lVar58 = *(long *)(*in_stack_00000150 + 0x60), lVar58 == 0))
    goto LAB_0249920c;
    if (*(int *)(*(long *)PTR_DAT_033ed410 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (*(int *)(lVar58 + 0x18) == 0)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    FUN_024e7d94(lVar58 + 0x20,0,0);
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
    lVar58 = unaff_x19[0xe2];
    _in_stack_00000090 = uStack00000000000000c0;
    fStack0000000000000098 = in_stack_000000c8;
    if (iVar13 < 0x401) {
      if (iVar13 == 0x100) {
        if (lVar58 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar58 + 0x18) < 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar19 = *(undefined8 *)(lVar58 + 0x30);
        if ((int)unaff_x19[0x5b] == 5) {
          if ((*in_stack_00000150 == 0) ||
             (lVar29 = *(long *)(*in_stack_00000150 + 0x58), lVar29 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar29 + 0x18) <= uStack000000000000002c)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar57 = *(float *)(lVar29 + (long)(int)uStack000000000000002c * 0x14 + 0x28);
        }
        else {
          fVar57 = *(float *)(unaff_x19 + 0x96);
        }
        fStack0000000000000098 = fStack0000000000000030 + 0.0 + *(float *)(lVar58 + 0x2c);
        fVar57 = (0.0 - fVar57) - fStack0000000000000020;
      }
      else if (iVar13 == 0x200) {
        if (lVar58 == 0) goto LAB_0249920c;
        if ((*(int *)(lVar58 + 0x18) == 1) || (*(int *)(lVar58 + 0x18) == 0))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fStack0000000000000098 = (*(float *)(lVar58 + 0x20) + *(float *)(lVar58 + 0x2c)) * 0.5;
        uVar19 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar58 + 0x24) >> 0x20) +
                          (float)((ulong)*(undefined8 *)(lVar58 + 0x30) >> 0x20)) * 0.5,
                          ((float)*(undefined8 *)(lVar58 + 0x24) +
                          (float)*(undefined8 *)(lVar58 + 0x30)) * 0.5);
        if ((int)unaff_x19[0x5b] == 5) {
          if ((*in_stack_00000150 == 0) ||
             (lVar58 = *(long *)(*in_stack_00000150 + 0x58), lVar58 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar58 + 0x18) <= uStack000000000000002c)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          lVar58 = lVar58 + (long)(int)uStack000000000000002c * 0x14;
          fStack0000000000000098 = fStack0000000000000030 + 0.0 + fStack0000000000000098;
          fVar57 = ((fStack0000000000000020 + *(float *)(lVar58 + 0x28) + *(float *)(lVar58 + 0x30))
                   - fStack0000000000000024) * -0.5 + 0.0;
        }
        else {
          fStack0000000000000098 = fStack0000000000000030 + 0.0 + fStack0000000000000098;
          fVar57 = ((fStack0000000000000020 + *(float *)(unaff_x19 + 0x96) + in_stack_000017b8) -
                   fStack0000000000000024) * -0.5 + 0.0;
        }
      }
      else {
        if (iVar13 != 0x400) goto LAB_024965d0;
        if (lVar58 == 0) goto LAB_0249920c;
        if (*(int *)(lVar58 + 0x18) == 0)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar19 = *(undefined8 *)(lVar58 + 0x24);
        if ((int)unaff_x19[0x5b] == 5) {
          if ((*in_stack_00000150 == 0) ||
             (lVar29 = *(long *)(*in_stack_00000150 + 0x58), lVar29 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar29 + 0x18) <= uStack000000000000002c)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          in_stack_000017b8 = *(float *)(lVar29 + (long)(int)uStack000000000000002c * 0x14 + 0x30);
        }
        fStack0000000000000098 = fStack0000000000000030 + 0.0 + *(float *)(lVar58 + 0x20);
        fVar57 = fStack0000000000000024 + (0.0 - in_stack_000017b8);
      }
      _in_stack_00000090 = CONCAT44((float)((ulong)uVar19 >> 0x20) + 0.0,(float)uVar19 + fVar57);
    }
    else if (iVar13 == 0x800) {
      if (lVar58 == 0) goto LAB_0249920c;
      if ((*(int *)(lVar58 + 0x18) == 1) || (*(int *)(lVar58 + 0x18) == 0))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      fVar57 = ((float)*(undefined8 *)(lVar58 + 0x24) + (float)*(undefined8 *)(lVar58 + 0x30)) * 0.5
      ;
      fStack0000000000000098 =
           fStack0000000000000030 + 0.0 +
           (*(float *)(lVar58 + 0x20) + *(float *)(lVar58 + 0x2c)) * 0.5;
      _in_stack_00000090 =
           CONCAT44(((float)((ulong)*(undefined8 *)(lVar58 + 0x24) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(lVar58 + 0x30) >> 0x20)) * 0.5 + 0.0,fVar57 + 0.0
                   );
    }
    else {
      if (iVar13 == 0x1000) {
        if (lVar58 == 0) goto LAB_0249920c;
        if ((*(int *)(lVar58 + 0x18) == 1) || (*(int *)(lVar58 + 0x18) == 0))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar57 = (float)*(undefined8 *)(lVar58 + 0x24) + (float)*(undefined8 *)(lVar58 + 0x30);
        fVar74 = (float)((ulong)*(undefined8 *)(lVar58 + 0x24) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(lVar58 + 0x30) >> 0x20);
        fStack0000000000000020 =
             fStack0000000000000020 + *(float *)(unaff_x19 + 0x9c) + *(float *)(unaff_x19 + 0x9b);
        fStack0000000000000098 =
             fStack0000000000000030 + 0.0 +
             (*(float *)(lVar58 + 0x20) + *(float *)(lVar58 + 0x2c)) * 0.5;
      }
      else {
        if (iVar13 != 0x2000) goto LAB_024965d0;
        if (lVar58 == 0) goto LAB_0249920c;
        if ((*(int *)(lVar58 + 0x18) == 1) || (*(int *)(lVar58 + 0x18) == 0))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar57 = (float)*(undefined8 *)(lVar58 + 0x24) + (float)*(undefined8 *)(lVar58 + 0x30);
        fVar74 = (float)((ulong)*(undefined8 *)(lVar58 + 0x24) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(lVar58 + 0x30) >> 0x20);
        fStack0000000000000020 = *(float *)((long)unaff_x19 + 0x4b4) - fStack0000000000000020;
        fStack0000000000000098 =
             fStack0000000000000030 + 0.0 +
             (*(float *)(lVar58 + 0x20) + *(float *)(lVar58 + 0x2c)) * 0.5;
      }
      fVar57 = fVar57 * 0.5;
      _in_stack_00000090 =
           CONCAT44(fVar74 * 0.5 + 0.0,
                    fVar57 + (0.0 - (fStack0000000000000020 - fStack0000000000000024) * 0.5));
    }
LAB_024965d0:
    if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
    uVar19 = FUN_0285a188(unaff_x19[0xe4],0);
    if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)puVar9);
    }
    uVar21 = FUN_0268b4e0(uVar19,0,0);
    lVar58 = FUN_024c933c();
    if (lVar58 == 0) goto LAB_0249920c;
    FUN_026a125c(lVar58,0);
    *(float *)(unaff_x19 + 0xe1) = fVar57;
    if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
    iVar13 = FUN_02859798(unaff_x19[0xe4],0);
    if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
    fVar74 = (float)FUN_028598f0(unaff_x19[0xe4],0);
    __x = DAT_028aa048;
    dVar59 = modf(DAT_028aa048,(double *)&stack0x00000880);
    if (dVar59 == 0.5) {
      fVar47 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
      if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
        fVar47 = fVar47 + 1.0;
      }
    }
    else {
      fVar47 = 255.0;
    }
    dVar59 = modf(__x,(double *)&stack0x00000880);
    if (dVar59 == 0.5) {
      fVar68 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
      if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
        fVar68 = fVar68 + 1.0;
      }
    }
    else {
      fVar68 = 255.0;
    }
    dVar59 = modf(__x,(double *)&stack0x00000880);
    if (dVar59 == 0.5) {
      fVar71 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
      if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) != 0) {
        fVar71 = fVar71 + 1.0;
      }
    }
    else {
      fVar71 = 255.0;
    }
    dVar59 = modf(__x,(double *)&stack0x00000880);
    if (dVar59 == 0.5) {
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
    lVar58 = *(long *)puVar10;
    if (*(int *)(lVar58 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar58 = *(long *)puVar10;
    }
    puVar27 = *(undefined4 **)(lVar58 + 0xb8);
    uVar60 = (ulong)(uint)puVar27[1];
    uVar61 = (ulong)(uint)puVar27[2];
    uVar63 = (ulong)(uint)puVar27[3];
    UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
              (*puVar27,uVar60,uVar61,uVar63,&stack0x00001790,0x4000ffff,0);
    if (*(int *)(*plVar41 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar58 = *in_stack_00000150;
    if (lVar58 == 0) goto LAB_0249920c;
    uVar14 = *in_stack_00000148;
    if ((int)uVar14 < 1) {
      iStack00000000000000ac = 0;
      iVar15 = 0;
      goto LAB_02498c58;
    }
    lVar58 = *(long *)(lVar58 + 0x38);
    fVar57 = ABS(fVar57);
    fVar48 = 1.0;
    if ((uVar21 & 1) == 0) {
      fVar48 = fVar57;
    }
    if (lVar58 == 0) goto LAB_0249920c;
    bVar8 = false;
    bVar7 = false;
    bVar12 = false;
    bVar11 = false;
    uStack0000000000000060 =
         (int)fVar47 & 0xffU | ((int)fVar68 & 0xffU) << 8 | ((int)fVar71 & 0xffU) << 0x10 |
         (int)fVar49 << 0x18;
    fStack00000000000000d0 = *(float *)(*(long *)(*plVar41 + 0xb8) + 0x15a8);
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
    uVar62 = 0;
    uVar35 = 1;
    goto LAB_02496a50;
  }
  goto LAB_0249920c;
code_r0x02492440:
  *(undefined1 *)((long)unaff_x19 + 0x429) = 1;
  *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
  uVar21 = FUN_024d0688();
  if (((uVar21 & 1) != 0) &&
     (in_w8 = in_stack_0000176c, in_stack_000017bc = uVar14, *(int *)((long)unaff_x19 + 0x63c) == 0)
     ) goto LAB_02492630;
UnityEngine_XR_Interaction_Toolkit_XRInteractorReticleVisual__get_prefabScalingFactor:
  if ((unaff_x19[0x6c] == 0) || (lVar58 = *(long *)(unaff_x19[0x6c] + 0x38), lVar58 == 0))
  goto LAB_0249920c;
  uVar18 = *in_stack_00000148;
  if (*(uint *)(lVar58 + 0x18) <= uVar18)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar43 = (long)(int)uVar18;
  cVar26 = *(char *)(lVar58 + lVar43 * unaff_x27 + 0x5c);
  *(undefined1 *)((long)unaff_x19 + 0x429) = 0;
  lVar29 = unaff_x19[0x23];
  if ((uint)in_stack_000017a8 == uVar18) {
    uVar14 = (uint)((ulong)in_stack_000017a8 >> 0x20);
    bVar7 = true;
    *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
    if (uVar14 == 0x2026) {
      lVar22 = unaff_x19[0xc9];
      lVar58 = lVar58 + lVar43 * unaff_x27;
      *(undefined4 *)(lVar58 + 0x2c) = 0;
      *(long *)(lVar58 + 0x30) = lVar22;
      *(long *)(lVar58 + 0x38) = unaff_x19[0xca];
      *(long *)(lVar58 + 0x50) = unaff_x19[0xcb];
      *(int *)(lVar58 + 0x58) = (int)unaff_x19[0xcc];
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
      in_stack_000017a8 = CONCAT44(3,uVar18 + 1);
    }
    else if (uVar14 == 3) {
      if ((*in_stack_00000138 == 0) || (lVar22 = FUN_024b11ac(*in_stack_00000138,0), lVar22 == 0))
      goto LAB_0249920c;
      FUN_01299bc0(lVar22,&stack0x00000bf8,&stack0x00000880,*(undefined8 *)PTR_DAT_033ef3c8);
      if (*(uint *)(lVar58 + 0x18) <= uVar18)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      bVar7 = true;
      *(ulong *)(lVar58 + lVar43 * unaff_x27 + 0x30) = CONCAT44(in_stack_00000884,in_stack_00000880)
      ;
      uVar18 = *(uint *)((long)unaff_x19 + 0x48c);
      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
    }
  }
  else {
    bVar7 = false;
  }
  iVar15 = (int)unaff_x27;
  in_stack_000017bc = uVar14;
  if (((int)uVar18 < *(int *)((long)unaff_x19 + 0x31c)) && (uVar14 != 3)) {
    if ((*in_stack_00000150 == 0) || (lVar58 = *(long *)(*in_stack_00000150 + 0x38), lVar58 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar58 + 0x18) <= uVar18)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar58 = lVar58 + (long)(int)uVar18 * (long)iVar15;
    *(undefined1 *)(lVar58 + 0x194) = 0;
    *(undefined2 *)(lVar58 + 0x20) = 0x200b;
    *(undefined4 *)(lVar58 + 100) = 0;
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
      if ((*in_stack_00000150 == 0) || (lVar58 = *(long *)(*in_stack_00000150 + 0x38), lVar58 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar58 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar58 = lVar58 + (int)*in_stack_00000148 * unaff_x27;
      lVar43 = *(long *)(lVar58 + 0x40);
      unaff_x19[0xd2] = lVar43;
      *(undefined4 *)((long)unaff_x19 + 0x69c) = *(undefined4 *)(lVar58 + 0x48);
      if ((lVar43 == 0) || (lVar58 = FUN_024ebfa0(lVar43,0), lVar58 == 0)) goto LAB_0249920c;
      FUN_0132138c(lVar58,*(undefined4 *)((long)unaff_x19 + 0x69c),&stack0x00000880,
                   *(undefined8 *)System_Func<KeyValuePair<int,_int>,_int>_TypeInfo);
      lVar43 = CONCAT44(in_stack_00000884,in_stack_00000880);
      if (lVar43 == 0) goto LAB_02492630;
      if (in_stack_000017bc == 0x3c) {
        in_stack_000017bc = *(int *)((long)unaff_x19 + 0x69c) + 0xe000;
      }
      else {
        lVar58 = *plVar41;
        if (*(int *)(lVar58 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar58 = *plVar41;
        }
        *(undefined4 *)((long)unaff_x19 + 0x1b4) = *(undefined4 *)(*(long *)(lVar58 + 0xb8) + 0x68);
      }
      if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
      fVar57 = *(float *)(unaff_x19 + 0x3c);
      memmove(&stack0x00001700,(void *)(unaff_x19[0x1f] + 0x50),0x60);
      iVar13 = FUN_026fd110(&stack0x00001700,0);
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      memmove(&stack0x00001700,(void *)(*in_stack_00000138 + 0x50),0x60);
      fVar47 = (float)FUN_026fd120(&stack0x00001700,0);
      fVar74 = fStack0000000000000084;
      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
        fVar74 = unaff_s12;
      }
      if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
      fVar74 = (fVar57 / (float)iVar13) * fVar47 * fVar74;
      iVar13 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
      fVar57 = *(float *)(unaff_x19 + 0x3c);
      if (iVar13 < 1) {
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        iVar13 = FUN_026fd110(*in_stack_00000138 + 0x50,0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar47 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
        fVar71 = fStack0000000000000084;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar71 = unaff_s12;
        }
        if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
        fVar68 = (float)FUN_026fd140(unaff_x19[0x1f] + 0x50,0);
        if (*(long *)(lVar43 + 0x20) == 0) goto LAB_0249920c;
        FUN_026fd62c(&stack0x00000880,*(long *)(lVar43 + 0x20),0);
        fVar48 = (float)FUN_026fd45c(&stack0x000016e0,0);
        if (*(long *)(lVar43 + 0x20) == 0) goto LAB_0249920c;
        fVar50 = *(float *)(lVar43 + 0x2c);
        fVar72 = (float)FUN_026fd668(*(long *)(lVar43 + 0x20),0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar49 = (float)FUN_026fd140(*in_stack_00000138 + 0x50,0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar51 = (float)FUN_026fd170(*in_stack_00000138 + 0x50,0);
        if (*in_stack_00000138 == 0) goto LAB_0249920c;
        fVar52 = *(float *)((long)unaff_x19 + 0x3fc);
        fStack0000000000000134 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
        if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
        fStack0000000000000134 = fVar74 * fVar51 * fVar52 * fStack0000000000000134;
        fVar71 = (fVar57 / (float)iVar13) * fVar47 * fVar71;
        fVar57 = fVar71 * (fVar68 / fVar48) * fVar50 * fVar72;
        fVar71 = fVar71 / fVar57;
        fVar49 = fVar71 * fVar49;
        fVar74 = (float)FUN_026fd180(unaff_x19[0x1f] + 0x50,0);
        fVar71 = fVar71 * fVar74;
      }
      else {
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        iVar13 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar47 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
        if (*(long *)(lVar43 + 0x20) == 0) goto LAB_0249920c;
        fVar71 = *(float *)(lVar43 + 0x2c);
        fVar68 = fStack0000000000000084;
        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
          fVar68 = 1.0;
        }
        fVar48 = (float)FUN_026fd668(*(long *)(lVar43 + 0x20),0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar49 = (float)FUN_026fd140(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar50 = (float)FUN_026fd170(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fVar72 = *(float *)((long)unaff_x19 + 0x3fc);
        fStack0000000000000134 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
        if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
        fStack0000000000000134 = fVar74 * fVar50 * fVar72 * fStack0000000000000134;
        fVar57 = (fVar57 / (float)iVar13) * fVar47 * fVar68 * fVar71 * fVar48;
        fVar71 = (float)FUN_026fd180(unaff_x19[0xd2] + 0x48,0);
      }
      lVar58 = unaff_x19[0x6c];
      unaff_x19[200] = lVar43;
      if ((lVar58 == 0) || (lVar43 = *(long *)(lVar58 + 0x38), lVar43 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar43 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar43 = lVar43 + (int)*in_stack_00000148 * unaff_x27;
      *(undefined4 *)(lVar43 + 0x2c) = 1;
      *(float *)(lVar43 + 0x160) = fVar57;
      in_stack_00000128 = 0.0;
      *(long *)(lVar43 + 0x40) = unaff_x19[0xd2];
      *(long *)(lVar43 + 0x38) = unaff_x19[0x1f];
      *(int *)(lVar43 + 0x58) = (int)unaff_x19[0x23];
      *(int *)(unaff_x19 + 0x23) = (int)lVar29;
      goto LAB_02492e14;
    }
    lVar58 = *in_stack_00000150;
    fVar74 = 0.0;
    if (in_stack_000017bc != 3 && in_stack_000017bc != 0xad) {
      fVar74 = fVar57;
    }
    fStack0000000000000134 = 0.0;
    if (lVar58 == 0) goto LAB_0249920c;
    fVar49 = 0.0;
    fVar71 = 0.0;
  }
  else {
    if (iVar13 != 0) goto LAB_0249265c;
LAB_02492a20:
    if ((*in_stack_00000150 == 0) || (lVar58 = *(long *)(*in_stack_00000150 + 0x38), lVar58 == 0))
    goto LAB_0249920c;
    uVar18 = *in_stack_00000148;
    uVar14 = *(uint *)(lVar58 + 0x18);
    if (uVar14 <= uVar18)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar29 = *(long *)(lVar58 + (int)uVar18 * unaff_x27 + 0x30);
    unaff_x19[200] = lVar29;
    if (lVar29 == 0) goto LAB_02492630;
    lVar43 = lVar58 + (int)uVar18 * unaff_x27;
    lVar29 = *(long *)(lVar43 + 0x38);
    unaff_x19[0x1f] = lVar29;
    unaff_x19[0x22] = *(long *)(lVar43 + 0x50);
    *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar43 + 0x58);
    if (bVar7) {
      lVar43 = unaff_x19[0x8e];
      if (lVar43 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar43 + 0x18) <= in_w8)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if ((*(int *)(lVar43 + (long)(int)in_w8 * 0xc + 0x20) != 10) ||
         (uVar18 == *(uint *)(unaff_x19 + 0x92))) goto LAB_02492ab4;
      if (uVar14 <= uVar18 - 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (lVar29 == 0) goto LAB_0249920c;
      fVar74 = *(float *)(lVar58 + (long)(int)(uVar18 - 1) * (long)iVar15 + 0x60);
      iVar13 = FUN_026fd110(lVar29 + 0x50,0);
      lVar58 = *in_stack_00000138;
    }
    else {
LAB_02492ab4:
      if (lVar29 == 0) goto LAB_0249920c;
      fVar74 = *(float *)(unaff_x19 + 0x3c);
      iVar13 = FUN_026fd110(lVar29 + 0x50,0);
      lVar58 = unaff_x19[0x1f];
    }
    if (lVar58 == 0) goto LAB_0249920c;
    fVar68 = (float)FUN_026fd120(lVar58 + 0x50,0);
    fVar47 = fStack0000000000000084;
    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
      fVar47 = unaff_s12;
    }
    fVar71 = 0.0;
    fVar49 = 0.0;
    if (!(bool)(bVar7 & in_stack_000017bc == 0x2026)) {
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      fVar49 = (float)FUN_026fd140(*in_stack_00000138 + 0x50,0);
      if (*in_stack_00000138 == 0) goto LAB_0249920c;
      fVar71 = (float)FUN_026fd180(*in_stack_00000138 + 0x50,0);
    }
    lVar58 = unaff_x19[200];
    if ((lVar58 == 0) || (*(long *)(lVar58 + 0x20) == 0)) goto LAB_0249920c;
    fVar48 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar50 = *(float *)(lVar58 + 0x2c);
    fVar57 = (float)FUN_026fd668(*(long *)(lVar58 + 0x20),0);
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar72 = (float)FUN_026fd170(*in_stack_00000138 + 0x50,0);
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar51 = *(float *)((long)unaff_x19 + 0x3fc);
    fStack0000000000000134 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
    lVar58 = unaff_x19[0x6c];
    if ((lVar58 == 0) || (lVar29 = *(long *)(lVar58 + 0x38), lVar29 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000148)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar29 = lVar29 + (int)*in_stack_00000148 * unaff_x27;
    *(undefined4 *)(lVar29 + 0x2c) = 0;
    fVar47 = ((fStack00000000000000f4 * fVar74) / (float)iVar13) * fVar68 * fVar47;
    fVar57 = fVar47 * fVar48 * fVar50 * fVar57;
    *(float *)(lVar29 + 0x160) = fVar57;
    uVar14 = *(uint *)(unaff_x19 + 0x23);
    fStack0000000000000134 = fVar47 * fVar72 * fVar51 * fStack0000000000000134;
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
      fVar74 = fVar57;
    }
  }
  lVar58 = *(long *)(lVar58 + 0x38);
  if (lVar58 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar58 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar58 = lVar58 + (int)*in_stack_00000148 * unaff_x27;
  *(short *)(lVar58 + 0x20) = (short)in_stack_000017bc;
  *(int *)(lVar58 + 0x60) = (int)unaff_x19[0x3c];
  *(undefined4 *)(lVar58 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4e4);
  if ((unaff_x19[0x6c] == 0) || (lVar58 = *(long *)(unaff_x19[0x6c] + 0x38), lVar58 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar58 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  *(int *)(lVar58 + (int)*in_stack_00000148 * unaff_x27 + 0x168) = (int)unaff_x19[0x2a];
  if ((unaff_x19[0x6c] == 0) || (lVar58 = *(long *)(unaff_x19[0x6c] + 0x38), lVar58 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar58 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  *(undefined4 *)(lVar58 + (int)*in_stack_00000148 * unaff_x27 + 0x170) =
       *(undefined4 *)((long)unaff_x19 + 0x154);
  if ((unaff_x19[0x6c] == 0) || (lVar58 = *(long *)(unaff_x19[0x6c] + 0x38), lVar58 == 0))
  goto LAB_0249920c;
  uVar14 = *in_stack_00000148;
  FUN_013b78b8(in_stack_000000b8,&stack0x00000880,
               *(undefined8 *)TMPro_TMP_Dropdown_OptionData_TypeInfo);
  if (*(uint *)(lVar58 + 0x18) <= uVar14)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar58 = lVar58 + (int)uVar14 * unaff_x27;
  *(undefined4 *)(lVar58 + 0x18c) = in_stack_00000890;
  *(undefined8 *)(lVar58 + 0x184) = in_stack_00000888;
  *(ulong *)(lVar58 + 0x17c) = CONCAT44(in_stack_00000884,in_stack_00000880);
  if ((*in_stack_00000150 == 0) || (lVar58 = *(long *)(*in_stack_00000150 + 0x38), lVar58 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar58 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  *(undefined4 *)(lVar58 + (int)*in_stack_00000148 * unaff_x27 + 400) =
       *(undefined4 *)((long)unaff_x19 + 0x254);
  if ((unaff_x19[200] == 0) || (lVar58 = *(long *)(unaff_x19[200] + 0x20), lVar58 == 0))
  goto LAB_0249920c;
  FUN_026fd62c(&stack0x00000bf8,lVar58,0);
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
    fVar68 = 0.0;
    fVar47 = 0.0;
  }
  else {
    if (unaff_x19[200] == 0) goto LAB_0249920c;
    uVar62 = *in_stack_00000148;
    uVar18 = *(uint *)(unaff_x19[200] + 0x28);
    if ((int)uVar62 < (int)in_stack_00000078._4_4_) {
      if ((*in_stack_00000150 == 0) || (lVar58 = *(long *)(*in_stack_00000150 + 0x38), lVar58 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar58 + 0x18) <= uVar62 + 1)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar58 = *(long *)(lVar58 + (long)(int)(uVar62 + 1) * (long)iVar15 + 0x30);
      if ((((lVar58 == 0) || (*in_stack_00000138 == 0)) ||
          (lVar29 = *(long *)(*in_stack_00000138 + 0x128), lVar29 == 0)) ||
         (lVar29 = *(long *)(lVar29 + 0x18), lVar29 == 0)) goto LAB_0249920c;
      in_stack_00000880 = uVar18 | *(int *)(lVar58 + 0x28) << 0x10;
      uVar21 = FUN_0129eff4(lVar29,&stack0x00000880,&stack0x000016d8,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                           );
      uVar75 = 0;
      if ((uVar21 & 1) == 0) {
        fVar48 = 0.0;
        fVar68 = 0.0;
        fVar47 = 0.0;
      }
      else {
        if (in_stack_000016d8 == 0) goto LAB_0249920c;
        fVar47 = *(float *)(in_stack_000016d8 + 0x14);
        fVar68 = *(float *)(in_stack_000016d8 + 0x18);
        fVar48 = *(float *)(in_stack_000016d8 + 0x1c);
        uVar75 = *(undefined4 *)(in_stack_000016d8 + 0x20);
        if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
          fStack00000000000000cc = 0.0;
        }
      }
      uVar62 = *in_stack_00000148;
    }
    else {
      uVar75 = 0;
      fVar48 = 0.0;
      fVar68 = 0.0;
      fVar47 = 0.0;
    }
    if (0 < (int)uVar62) {
      if ((*in_stack_00000150 == 0) || (lVar58 = *(long *)(*in_stack_00000150 + 0x38), lVar58 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar58 + 0x18) <= (uint)((long)(int)uVar62 + -1))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar58 = *(long *)(lVar58 + ((long)(int)uVar62 + -1) * unaff_x27 + 0x30);
      if (((lVar58 == 0) || (*in_stack_00000138 == 0)) ||
         ((lVar29 = *(long *)(*in_stack_00000138 + 0x128), lVar29 == 0 ||
          (lVar29 = *(long *)(lVar29 + 0x18), lVar29 == 0)))) goto LAB_0249920c;
      in_stack_00000880 = *(uint *)(lVar58 + 0x28) | uVar18 << 0x10;
      uVar21 = FUN_0129eff4(lVar29,&stack0x00000880,&stack0x000016d8,
                            *(undefined8 *)
                             Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                           );
      if ((uVar21 & 1) != 0) {
        if ((in_stack_000016d8 == 0) ||
           (fVar47 = (float)FUN_024bb1bc(fVar47,fVar68,fVar48,uVar75,
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
    fVar72 = *(float *)(unaff_x19 + 199);
    fVar50 = (float)FUN_026fd474(&stack0x00001770,0);
    fVar72 = fVar72 - fVar74 * fVar50 * (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc));
    *(float *)(unaff_x19 + 199) = fVar72;
    if ((uVar14 != 0) || (in_stack_000017bc == 0x200b)) {
      *(float *)(unaff_x19 + 199) = fVar72 - in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac)
      ;
    }
  }
  fVar72 = *(float *)(unaff_x19 + 0x55);
  fVar50 = 0.0;
  if (fVar72 != 0.0) {
    fVar50 = (float)FUN_026fd454(&stack0x00001770,0);
    fVar51 = (float)FUN_026fd464(&stack0x00001770,0);
    fVar50 = (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (fVar72 * 0.5 - fVar74 * (fVar50 * 0.5 + fVar51));
    *(float *)(unaff_x19 + 199) = *(float *)(unaff_x19 + 199) + fVar50;
  }
  if (((cVar26 == '\0') && (*(int *)((long)unaff_x19 + 0x63c) == 0)) &&
     ((*(byte *)((long)unaff_x19 + 0x254) & 1) != 0)) {
    lVar58 = unaff_x19[0x22];
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar21 = FUN_02681b9c(lVar58,0,0);
    fVar52 = 0.0;
    if ((uVar21 & 1) != 0) {
      lVar58 = unaff_x19[0x22];
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (lVar58 == 0) goto LAB_0249920c;
      uVar21 = FUN_0267e1d8(lVar58,*(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x54),0);
      fVar52 = 0.0;
      if ((uVar21 & 1) != 0) {
        lVar58 = unaff_x19[0x22];
        if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (lVar58 == 0) goto LAB_0249920c;
        fVar72 = (float)FUN_0267f610(lVar58,*(undefined4 *)
                                             (*(long *)(*(long *)puVar9 + 0xb8) + 0x54),0);
        if ((*in_stack_00000138 == 0) || (unaff_x19[0x22] == 0)) goto LAB_0249920c;
        fVar51 = *(float *)(*in_stack_00000138 + 0x1b0);
        fVar52 = (float)FUN_0267f610(unaff_x19[0x22],
                                     *(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xcc),0);
        fVar52 = fVar52 * fVar72 * fVar51 * 0.25;
        if (fVar72 < in_stack_00000128 + fVar52) {
          in_stack_00000128 = fVar72 - fVar52;
        }
      }
    }
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar72 = *(float *)(*in_stack_00000138 + 0x1b4);
  }
  else {
    lVar58 = unaff_x19[0x22];
    if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar21 = FUN_02681b9c(lVar58,0,0);
    fVar72 = 0.0;
    if ((uVar21 & 1) != 0) {
      lVar58 = unaff_x19[0x22];
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (lVar58 == 0) goto LAB_0249920c;
      uVar21 = FUN_0267e1d8(lVar58,*(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0x54),0);
      if ((uVar21 & 1) != 0) {
        lVar58 = unaff_x19[0x22];
        if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (lVar58 == 0) goto LAB_0249920c;
        uVar21 = FUN_0267e1d8(lVar58,*(undefined4 *)(*(long *)(*(long *)puVar9 + 0xb8) + 0xcc),0);
        if ((uVar21 & 1) != 0) {
          lVar58 = unaff_x19[0x22];
          if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          if (lVar58 == 0) goto LAB_0249920c;
          fVar51 = (float)FUN_0267f610(lVar58,*(undefined4 *)
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
                    fVar74 * (fVar47 + ((fVar51 - in_stack_00000128) - fVar52));
  fVar47 = (float)FUN_026fd46c(&stack0x00001770,0);
  fVar64 = *(float *)((long)unaff_x19 + 0x614) +
           ((fStack0000000000000134 + fVar74 * (fVar68 + in_stack_00000128 + fVar47)) -
           *(float *)(unaff_x19 + 0x9a));
  fVar47 = (float)FUN_026fd45c(&stack0x00001770,0);
  fVar69 = fVar64 - fVar74 * (in_stack_00000128 + in_stack_00000128 + fVar47);
  fVar47 = (float)FUN_026fd454(&stack0x00001770,0);
  fVar51 = fVar65 + (unaff_s12 - *(float *)((long)unaff_x19 + 0x2cc)) *
                    fVar74 * (fVar52 + fVar52 + in_stack_00000128 + in_stack_00000128 + fVar47);
  fVar47 = fVar65;
  fVar68 = fVar51;
  if (((*(int *)((long)unaff_x19 + 0x63c) == 0) && (cVar26 == '\0')) &&
     ((*(byte *)((long)unaff_x19 + 0x254) >> 1 & 1) != 0)) {
    fVar67 = (float)(int)unaff_x19[0xbd] * fStack000000000000004c;
    fVar47 = (float)FUN_026fd46c(&stack0x00001770,0);
    fVar55 = fVar67 * fVar74 * (fVar52 + in_stack_00000128 + fVar47);
    fVar47 = (float)FUN_026fd46c(&stack0x00001770,0);
    fVar68 = (float)FUN_026fd45c(&stack0x00001770,0);
    fVar64 = fVar64 + 0.0;
    fVar69 = fVar69 + 0.0;
    fVar67 = fVar67 * fVar74 * (((fVar47 - fVar68) - in_stack_00000128) - fVar52);
    fVar68 = fVar51 + fVar67;
    fVar47 = fVar65 + fVar55;
    fVar54 = (fVar55 - fVar67) * 0.5;
    fVar65 = (fVar65 + fVar67) - fVar54;
    fVar51 = (fVar51 + fVar55) - fVar54;
    fVar47 = fVar47 - fVar54;
    fVar68 = fVar68 - fVar54;
  }
  if (*(char *)((long)unaff_x19 + 0x46c) == '\0') {
    fVar55 = 0.0;
    fVar56 = 0.0;
    fVar66 = 0.0;
    fVar54 = 0.0;
    fVar76 = fVar69;
    fVar67 = fVar64;
    fStack00000000000000e8 = fVar47;
    fStack00000000000000ec = fVar65;
  }
  else {
    thunk_FUN_026935f0(_uStack0000000000000060,0);
    fVar70 = (fVar51 + fVar65) * 0.5;
    fVar73 = (fVar69 + fVar64) * 0.5;
    fVar64 = fVar64 - fVar73;
    fVar54 = 0.0;
    fVar67 = fVar64;
    fVar53 = (float)FUN_02692df0(fVar47 - fVar70,_uStack0000000000000060,0);
    fVar54 = fVar54 + 0.0;
    fVar69 = fVar69 - fVar73;
    fVar55 = 0.0;
    fVar47 = fVar69;
    fVar65 = (float)FUN_02692df0(fVar65 - fVar70,_uStack0000000000000060,0);
    fVar55 = fVar55 + 0.0;
    fVar66 = 0.0;
    fVar51 = (float)FUN_02692df0(fVar51 - fVar70,_uStack0000000000000060,0);
    fVar51 = fVar70 + fVar51;
    fVar64 = fVar73 + fVar64;
    fVar66 = fVar66 + 0.0;
    fVar56 = 0.0;
    fVar68 = (float)FUN_02692df0(fVar68 - fVar70,_uStack0000000000000060,0);
    fVar68 = fVar70 + fVar68;
    fVar69 = fVar73 + fVar69;
    fVar56 = fVar56 + 0.0;
    fVar76 = fVar73 + fVar47;
    fVar67 = fVar73 + fVar67;
    fStack00000000000000e8 = fVar70 + fVar53;
    fStack00000000000000ec = fVar70 + fVar65;
  }
  if (*in_stack_00000150 == 0) goto LAB_0249920c;
  lVar58 = *(long *)(*in_stack_00000150 + 0x38);
  unaff_d13 = (ulong)(uint)fVar74;
  if (lVar58 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar58 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar58 = lVar58 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar58 + 0x120) = fVar76;
  *(float *)(lVar58 + 0x11c) = fStack00000000000000ec;
  *(float *)(lVar58 + 0x124) = fVar55;
  if (*in_stack_00000150 == 0) goto LAB_0249920c;
  lVar58 = *(long *)(*in_stack_00000150 + 0x38);
  unaff_s12 = 1.0;
  if (lVar58 == 0) goto LAB_0249920c;
  if (*(uint *)(lVar58 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar58 = lVar58 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar58 + 0x114) = fVar67;
  *(float *)(lVar58 + 0x110) = fStack00000000000000e8;
  *(float *)(lVar58 + 0x118) = fVar54;
  if ((*in_stack_00000150 == 0) || (lVar58 = *(long *)(*in_stack_00000150 + 0x38), lVar58 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar58 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar58 = lVar58 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar58 + 0x128) = fVar51;
  *(float *)(lVar58 + 300) = fVar64;
  *(float *)(lVar58 + 0x130) = fVar66;
  if ((*in_stack_00000150 == 0) || (lVar58 = *(long *)(*in_stack_00000150 + 0x38), lVar58 == 0))
  goto LAB_0249920c;
  if (*(uint *)(lVar58 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar58 = lVar58 + (int)*in_stack_00000148 * unaff_x27;
  *(float *)(lVar58 + 0x134) = fVar68;
  *(float *)(lVar58 + 0x138) = fVar69;
  *(float *)(lVar58 + 0x13c) = fVar56;
  if ((*in_stack_00000150 == 0) || (lVar58 = *(long *)(*in_stack_00000150 + 0x38), lVar58 == 0))
  goto LAB_0249920c;
  uVar18 = *in_stack_00000148;
  lVar29 = (long)(int)uVar18;
  if (*(uint *)(lVar58 + 0x18) <= uVar18)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar43 = lVar58 + lVar29 * unaff_x27;
  *(int *)(lVar43 + 0x140) = (int)unaff_x19[199];
  fVar68 = *(float *)(unaff_x19 + 0x9a);
  param_2 = (ulong)(uint)fVar68;
  fVar47 = *(float *)((long)unaff_x19 + 0x614);
  *(float *)(lVar43 + 0x15c) = (fVar51 - fStack00000000000000ec) / (fVar67 - fVar76);
  *(float *)(lVar43 + 0x14c) = (fStack0000000000000134 - fVar68) + fVar47;
  fVar49 = fVar49 * fVar74;
  if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
    fVar49 = fVar49 / fStack00000000000000f4;
    fVar71 = (fVar71 * fVar74) / fStack00000000000000f4;
  }
  else {
    fVar71 = fVar71 * fVar74;
  }
  uVar62 = *(uint *)(unaff_x19 + 0x92);
  bVar11 = uVar14 != 0;
  fVar49 = fVar47 + fVar49;
  bVar12 = uVar18 != uVar62;
  if (bVar12 && bVar11) {
    fVar47 = *(float *)(unaff_x19 + 0x98);
    lVar58 = lVar58 + lVar29 * unaff_x27;
    *(float *)(lVar58 + 0x154) = fVar47;
    fVar71 = *(float *)((long)unaff_x19 + 0x4c4);
    *(float *)(lVar58 + 0x148) = fVar47 - fVar68;
    *(float *)(lVar58 + 0x158) = fVar71;
    *(float *)(unaff_x19 + 0x97) = fVar47 - fVar68;
    fVar71 = fVar71 - fVar68;
    *(float *)(lVar58 + 0x150) = fVar71;
  }
  else {
    fVar71 = fVar47 + fVar71;
    fVar51 = fVar49;
    fVar64 = fVar71;
    if (fVar47 != 0.0) {
      fVar51 = (fVar49 - fVar47) / *(float *)((long)unaff_x19 + 0x3fc);
      fVar64 = (fVar71 - fVar47) / *(float *)((long)unaff_x19 + 0x3fc);
      if (fVar51 <= fVar49) {
        fVar51 = fVar49;
      }
      if (fVar71 <= fVar64) {
        fVar64 = fVar71;
      }
    }
    lVar58 = lVar58 + lVar29 * unaff_x27;
    fVar47 = fVar51;
    if (fVar51 <= *(float *)(unaff_x19 + 0x98)) {
      fVar47 = *(float *)(unaff_x19 + 0x98);
    }
    fVar69 = fVar64;
    if (*(float *)((long)unaff_x19 + 0x4c4) <= fVar64) {
      fVar69 = *(float *)((long)unaff_x19 + 0x4c4);
    }
    *(float *)((long)unaff_x19 + 0x4c4) = fVar69;
    fVar71 = fVar71 - fVar68;
    *(float *)(unaff_x19 + 0x98) = fVar47;
    *(float *)(lVar58 + 0x154) = fVar51;
    *(float *)(lVar58 + 0x158) = fVar64;
    *(float *)(lVar58 + 0x148) = fVar49 - fVar68;
    *(float *)(unaff_x19 + 0x97) = fVar49 - fVar68;
    *(float *)(lVar58 + 0x150) = fVar71;
  }
  *(float *)((long)unaff_x19 + 0x4bc) = fVar71;
  if (((int)unaff_x19[0x94] == 0) || (*(char *)((long)unaff_x19 + 0x334) != '\0')) {
    if (!bVar12 || !bVar11) {
      *(float *)(unaff_x19 + 0x96) = fVar47;
      if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
      fVar47 = *(float *)((long)unaff_x19 + 0x4b4);
      fVar68 = (float)FUN_026fd150(unaff_x19[0x1f] + 0x50,0);
      fStack00000000000000f4 = (fVar74 * fVar68) / fStack00000000000000f4;
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
  lVar58 = *in_stack_00000150;
  if ((lVar58 == 0) || (lVar29 = *(long *)(lVar58 + 0x38), lVar29 == 0)) goto LAB_0249920c;
  uVar35 = *in_stack_00000148;
  if (*(uint *)(lVar29 + 0x18) <= uVar35)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  lVar29 = lVar29 + (int)uVar35 * unaff_x27;
  *(undefined1 *)(lVar29 + 0x194) = 0;
  uVar32 = *(uint *)(unaff_x19 + 0x4e);
  if ((in_stack_000017bc == 9) ||
     (((((uVar14 == 0 && (in_stack_000017bc != 3)) && (in_stack_000017bc != 0x200b)) &&
       (in_stack_000017bc != 0xad)) ||
      (((in_stack_000017bc == 0xad & (in_stack_00000068._4_1_ ^ 0xff)) != 0 ||
       (*(int *)((long)unaff_x19 + 0x63c) == 1)))))) {
    *(undefined1 *)(lVar29 + 0x194) = 1;
    pfVar30 = _fStack0000000000000088;
    pfVar33 = _fStack0000000000000098;
    if (bVar7) {
      lVar58 = *(long *)(lVar58 + 0x50);
      if (lVar58 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar58 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar58 = lVar58 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      pfVar33 = (float *)(lVar58 + 0x60);
      pfVar30 = (float *)(lVar58 + 100);
    }
    fVar68 = *pfVar33;
    fVar71 = *pfVar30;
    fVar47 = *(float *)(unaff_x19 + 0x6b);
    fVar49 = *(float *)(unaff_x19 + 199);
    fStack00000000000000d4 = (in_stack_00000090 - fVar68) - fVar71;
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
    param_4 = *(float *)((long)unaff_x19 + 0x4c4);
    fVar51 = *(float *)((long)unaff_x19 + 0x2cc);
    fVar64 = (float)param_2;
    if (in_stack_000017bc != 0xad) {
      fVar57 = fVar74;
    }
    fVar69 = 0.0;
    if ((0.0 < fVar64) && (fVar69 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
      fVar69 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
    }
    fVar69 = (*(float *)(unaff_x19 + 0x96) - (param_4 - fVar64)) + fVar69;
    unaff_w23 = *in_stack_00000148;
    if (fStack00000000000000a4 < fVar69) {
      if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
        *(uint *)((long)unaff_x19 + 0x2dc) = unaff_w23;
      }
      plVar41 = (long *)System_Threading_Mutex_TypeInfo;
      if ((char)unaff_x19[0x46] != '\0') {
        fVar65 = *(float *)(unaff_x19 + 0x58);
        if (((fVar65 < *(float *)((long)unaff_x19 + 0x2b4)) && (0.0 < fVar64)) &&
           (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
          fVar57 = *(float *)((long)unaff_x19 + 0x2b4) +
                   ((in_stack_00000018._4_4_ - fVar69) / (float)(int)unaff_x19[0x94]) /
                   fStack0000000000000054;
          if (fVar57 <= fVar65) {
            fVar57 = fVar65;
          }
          goto LAB_024964c8;
        }
        fVar69 = *(float *)((long)unaff_x19 + 0x1dc);
        fVar64 = *(float *)(unaff_x19 + 0x49);
        param_2 = (ulong)(uint)fVar64;
        if ((fVar64 < fVar69) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
          fVar57 = (fVar69 - *(float *)(unaff_x19 + 0x47)) * 0.5;
          if (fVar57 <= DAT_028aa298) {
            fVar57 = DAT_028aa298;
          }
          fVar74 = (fVar69 - fVar57) * 20.0 + 0.5;
          fVar57 = DAT_02958220;
          if (fVar74 != INFINITY) {
            fVar57 = (float)(int)fVar74 / 20.0;
          }
          if (fVar57 <= fVar64) {
            fVar57 = fVar64;
          }
          *(float *)((long)unaff_x19 + 0x234) = fVar69;
LAB_02495fd8:
          *(float *)((long)unaff_x19 + 0x1dc) = fVar57;
          return;
        }
      }
      switch((int)unaff_x19[0x5b]) {
      case 1:
        lVar58 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar58 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar58 = *plVar41;
        }
        lVar29 = *(long *)(lVar58 + 0xb8);
        lVar58 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
        if ((*(byte *)(lVar58 + 0x132) & 1) == 0) {
          lVar58 = FUN_00d5941c(lVar58);
        }
        plVar45 = (long *)StringLiteral_302;
        lVar58 = *(long *)(*(long *)(lVar58 + 0xc0) + 8);
        if ((*(byte *)(lVar58 + 0x132) & 1) == 0) {
          lVar58 = FUN_00d5941c();
        }
        piVar23 = (int *)thunk_FUN_00d32ed4(lVar29 + 0x11f0,*(long *)(lVar58 + 0x80) + 0xa0);
        if (*piVar23 == 0) goto LAB_02495f00;
        lVar58 = *plVar41;
        if (*(int *)(lVar58 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar58 = *plVar41;
        }
        FUN_013b8de4(*(long *)(lVar58 + 0xb8) + 0x11f0,&stack0x00000880,
                     *(undefined8 *)
                      Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                    );
        memcpy(&stack0x00001360,&stack0x00000880,0x378);
LAB_02494358:
        iVar15 = FUN_024d66ec();
        goto LAB_02494364;
      default:
        goto 
        UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor__get_playHapticsOnHoverExited;
      case 3:
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
LAB_02493ec0:
        plVar45 = (long *)StringLiteral_302;
        in_w8 = FUN_024d66ec();
        break;
      case 5:
        if (unaff_w23 == 0) {
LAB_02494498:
          in_stack_000017a8 = DAT_02941c08;
          in_w8 = 0xffffffff;
          *in_stack_00000148 = 0;
          plVar45 = (long *)StringLiteral_302;
          plVar41 = (long *)System_Threading_Mutex_TypeInfo;
          goto LAB_02492630;
        }
        goto code_r0x02493edc;
      case 6:
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_w8 = FUN_024d66ec();
        plVar45 = (long *)StringLiteral_302;
        lVar58 = unaff_x19[0x5c];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            );
        }
        uVar21 = FUN_02681b9c(lVar58,0,0);
        if ((uVar21 & 1) != 0) {
          plVar44 = (long *)unaff_x19[0x5c];
          uVar19 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar44 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar44 + 0x558))(plVar44,uVar19,*(undefined8 *)(*plVar44 + 0x560));
          lVar58 = unaff_x19[0x5c];
          if (lVar58 == 0) goto LAB_0249920c;
          *(int *)(lVar58 + 0x3f8) = (int)unaff_x19[0x7f];
          FUN_024c910c(lVar58,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
          plVar44 = (long *)unaff_x19[0x5c];
          if (plVar44 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar44 + 0x7d8))(plVar44,0,0,*(undefined8 *)(*plVar44 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        }
        goto LAB_0249408c;
      }
LAB_02493ecc:
      unaff_s12 = 1.0;
LAB_0249408c:
      in_stack_000017a8 = CONCAT44(3,unaff_w23);
      goto LAB_02492630;
    }
UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor__get_playHapticsOnHoverExited:
    plVar41 = (long *)System_Threading_Mutex_TypeInfo;
    fVar64 = 1.0 - fVar51;
    param_2 = (ulong)(uint)fVar64;
    fVar47 = ABS(fVar49) + fVar47 * fVar64 * fVar57;
    fVar57 = _DAT_0294c6e8;
    if ((uVar32 & 0x18) == 0) {
      fVar57 = 1.0;
    }
    if (fVar57 * fStack00000000000000d4 < fVar47) {
      if (((char)unaff_x19[0x5a] != '\0') && (unaff_w23 != *(uint *)(unaff_x19 + 0x92))) {
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_w8 = FUN_024d66ec();
        if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
          lVar58 = *in_stack_00000150;
          if ((lVar58 == 0) || (lVar29 = *(long *)(lVar58 + 0x38), lVar29 == 0)) goto LAB_0249920c;
          if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000148)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar49 = *(float *)(unaff_x19 + 0x9a);
          fVar51 = 0.0;
          if ((0.0 < fVar49) && (fVar51 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
            fVar51 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
          }
          fVar51 = in_stack_000000c8 * *(float *)(unaff_x19 + 0x56) +
                   *(float *)(lVar29 + (int)*in_stack_00000148 * unaff_x27 + 0x154) +
                   (fVar51 - *(float *)((long)unaff_x19 + 0x4c4)) +
                   fStack0000000000000054 *
                   (fStack0000000000000048 + *(float *)((long)unaff_x19 + 0x2b4));
        }
        else {
          lVar58 = unaff_x19[0x6c];
          *(undefined1 *)((long)unaff_x19 + 700) = 1;
          if (lVar58 == 0) goto LAB_0249920c;
          fVar49 = *(float *)(unaff_x19 + 0x9a);
          fVar51 = *(float *)(unaff_x19 + 0x57) + in_stack_000000c8 * *(float *)(unaff_x19 + 0x56);
        }
        puVar9 = System_Threading_Mutex_TypeInfo;
        lVar58 = *(long *)(lVar58 + 0x38);
        if (lVar58 == 0) goto LAB_0249920c;
        uVar35 = *(uint *)((long)unaff_x19 + 0x48c);
        if ((*(uint *)(lVar58 + 0x18) <= uVar35) ||
           (uVar42 = uVar35 - 1, *(uint *)(lVar58 + 0x18) <= uVar42))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        param_2 = (ulong)(uint)(fVar51 + *(float *)(unaff_x19 + 0x96));
        fVar49 = (fVar51 + *(float *)(unaff_x19 + 0x96) + fVar49) -
                 *(float *)(lVar58 + (int)uVar35 * unaff_x27 + 0x158);
        if (((in_stack_00000068._4_1_ & 1) == 0 &&
             *(short *)(lVar58 + (long)(int)uVar42 * (long)iVar15 + 0x20) == 0xad) &&
           ((fVar49 < fStack00000000000000a4 || ((int)unaff_x19[0x5b] == 0)))) {
          *in_stack_00000148 = uVar42;
LAB_024947b4:
          in_stack_000017a8 = CONCAT44(0x2d,uVar42);
          in_w8 = in_w8 - 1;
          in_stack_00000068._4_1_ = 0;
LAB_02494938:
          unaff_s12 = 1.0;
          plVar45 = (long *)StringLiteral_302;
          plVar41 = (long *)System_Threading_Mutex_TypeInfo;
          goto LAB_02492630;
        }
        if (*(short *)(lVar58 + (int)uVar35 * unaff_x27 + 0x20) == 0xad) {
          in_stack_00000068._4_1_ = 1;
          goto LAB_02494938;
        }
        if ((bStack000000000000005c & *(byte *)(unaff_x19 + 0x46) & 1) != 0) {
          fVar51 = *(float *)((long)unaff_x19 + 0x2cc);
          fVar69 = *(float *)(unaff_x19 + 0x59) / 100.0;
          if ((fVar69 <= fVar51) || ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c))) {
            fVar64 = *(float *)((long)unaff_x19 + 0x1dc);
            param_2 = (ulong)(uint)fVar64;
            fVar51 = *(float *)(unaff_x19 + 0x49);
            if ((fVar51 < fVar64) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
            goto LAB_02499210;
            goto LAB_024946c0;
          }
LAB_024992ac:
          fVar74 = fVar47;
          if (0.0 < fVar51) {
            fVar74 = fVar47 / (1.0 - fVar51);
          }
          fVar51 = fVar51 + (fVar47 - fVar57 * (fStack00000000000000d4 + DAT_02958218)) / fVar74;
LAB_0249929c:
          if (fVar69 <= fVar51) {
            fVar51 = fVar69;
          }
          *(float *)((long)unaff_x19 + 0x2cc) = fVar51;
          return;
        }
LAB_024946c0:
        lVar58 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar58 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar58 = *(long *)puVar9;
        }
        iVar13 = *(int *)(*(long *)(lVar58 + 0xb8) + 0xe78);
        if ((((float)iVar13 != fStack0000000000000034) && (iVar13 != -1)) &&
           (((bStack000000000000005c ^ 1) & 1) == 0)) {
          if (*(int *)(lVar58 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          in_w8 = FUN_024d66ec();
          if ((unaff_x19[0x6c] == 0) || (lVar58 = *(long *)(unaff_x19[0x6c] + 0x38), lVar58 == 0))
          goto LAB_0249920c;
          uVar42 = *in_stack_00000148 - 1;
          if (*(uint *)(lVar58 + 0x18) <= uVar42)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fStack0000000000000034 = (float)iVar13;
          if (*(short *)(lVar58 + (long)(int)uVar42 * (long)iVar15 + 0x20) == 0xad) {
            *in_stack_00000148 = uVar42;
            goto LAB_024947b4;
          }
        }
        if (fVar49 <= fStack00000000000000a4) {
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
        plVar45 = (long *)StringLiteral_302;
        plVar41 = (long *)System_Threading_Mutex_TypeInfo;
        if ((char)unaff_x19[0x46] != '\0') {
          fVar51 = *(float *)(unaff_x19 + 0x58);
          if ((fVar51 < *(float *)((long)unaff_x19 + 0x2b4)) &&
             (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
            fVar57 = *(float *)((long)unaff_x19 + 0x2b4) +
                     ((in_stack_00000018._4_4_ - fVar49) / (float)((int)unaff_x19[0x94] + 1)) /
                     fStack0000000000000054;
            if (fVar57 <= fVar51) {
              fVar57 = fVar51;
            }
LAB_024964c8:
            *(float *)((long)unaff_x19 + 0x2b4) = fVar57;
            return;
          }
          fVar51 = *(float *)((long)unaff_x19 + 0x2cc);
          fVar69 = *(float *)(unaff_x19 + 0x59) / 100.0;
          if ((fVar51 < fVar69) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
          goto LAB_024992ac;
          fVar64 = *(float *)((long)unaff_x19 + 0x1dc);
          param_2 = (ulong)(uint)fVar64;
          fVar51 = *(float *)(unaff_x19 + 0x49);
          if ((fVar51 < fVar64) && (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
LAB_02499210:
            fVar57 = (fVar64 - *(float *)(unaff_x19 + 0x47)) * 0.5;
            if (fVar57 <= DAT_028aa298) {
              fVar57 = DAT_028aa298;
            }
            *(float *)((long)unaff_x19 + 0x234) = fVar64;
            fVar74 = (fVar64 - fVar57) * 20.0 + 0.5;
            fVar57 = DAT_02958220;
            if (fVar74 != INFINITY) {
              fVar57 = (float)(int)fVar74 / 20.0;
            }
            if (fVar57 <= fVar51) {
              fVar57 = fVar51;
            }
            goto LAB_02495fd8;
          }
        }
        unaff_s12 = 1.0;
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
          lVar58 = *(long *)System_Threading_Mutex_TypeInfo;
          if (*(int *)(lVar58 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar58 = *plVar41;
          }
          lVar29 = *(long *)(lVar58 + 0xb8);
          lVar58 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
          if ((*(byte *)(lVar58 + 0x132) & 1) == 0) {
            lVar58 = FUN_00d5941c(lVar58);
          }
          lVar58 = *(long *)(*(long *)(lVar58 + 0xc0) + 8);
          if ((*(byte *)(lVar58 + 0x132) & 1) == 0) {
            lVar58 = FUN_00d5941c();
          }
          piVar23 = (int *)thunk_FUN_00d32ed4(lVar29 + 0x11f0,*(long *)(lVar58 + 0x80) + 0xa0);
          if (*piVar23 == 0) {
            in_stack_00000068._4_1_ = 0;
LAB_02495f00:
            in_stack_000017a8 = DAT_02941c08;
            unaff_s12 = 1.0;
            in_stack_00000148[0] = 0;
            in_stack_00000148[1] = 0;
            in_w8 = 0xffffffff;
            goto LAB_02492630;
          }
          lVar58 = *plVar41;
          if (*(int *)(lVar58 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar58 = *plVar41;
          }
          FUN_013b8de4(*(long *)(lVar58 + 0xb8) + 0x11f0,&stack0x00000880,
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
          in_w8 = iVar15 - 1;
          goto LAB_02492630;
        case 3:
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          in_w8 = FUN_024d66ec();
          in_stack_00000068._4_1_ = 0;
          goto LAB_02493ecc;
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
          lVar58 = unaff_x19[0x5c];
          if (*(int *)(*(long *)
                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo +
                      0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar21 = FUN_02681b9c(lVar58,0,0);
          if ((uVar21 & 1) != 0) {
            plVar44 = (long *)unaff_x19[0x5c];
            uVar19 = (**(code **)(*unaff_x19 + 0x548))();
            if (plVar44 == (long *)0x0) goto LAB_0249920c;
            (**(code **)(*plVar44 + 0x558))(plVar44,uVar19,*(undefined8 *)(*plVar44 + 0x560));
            lVar58 = unaff_x19[0x5c];
            if (lVar58 == 0) goto LAB_0249920c;
            *(int *)(lVar58 + 0x3f8) = (int)unaff_x19[0x7f];
            FUN_024c910c(lVar58,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
            plVar44 = (long *)unaff_x19[0x5c];
            if (plVar44 == (long *)0x0) goto LAB_0249920c;
            (**(code **)(*plVar44 + 0x7d8))(plVar44,0,0,*(undefined8 *)(*plVar44 + 0x7e0));
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
        plVar45 = (long *)StringLiteral_302;
        plVar41 = (long *)System_Threading_Mutex_TypeInfo;
        goto LAB_02492630;
      }
      if (((char)unaff_x19[0x46] != '\0') &&
         (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
        fVar69 = *(float *)(unaff_x19 + 0x59) / 100.0;
        if (fVar51 < fVar69) {
          fVar74 = fVar47 / fVar64;
          if (fVar51 <= 0.0) {
            fVar74 = fVar47;
          }
          fVar51 = fVar51 + (fVar47 - fVar57 * (fStack00000000000000d4 + DAT_02958218)) / fVar74;
          goto LAB_0249929c;
        }
        fVar64 = *(float *)((long)unaff_x19 + 0x1dc);
        param_2 = (ulong)(uint)fVar64;
        fVar51 = *(float *)(unaff_x19 + 0x49);
        if (fVar51 < fVar64) goto LAB_02499210;
      }
      iVar13 = (int)unaff_x19[0x5b];
      if (iVar13 == 1) {
        lVar58 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar58 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar58 = *plVar41;
        }
        plVar45 = (long *)StringLiteral_302;
        lVar29 = *(long *)(lVar58 + 0xb8);
        lVar58 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
        if ((*(byte *)(lVar58 + 0x132) & 1) == 0) {
          lVar58 = FUN_00d5941c(lVar58);
        }
        lVar58 = *(long *)(*(long *)(lVar58 + 0xc0) + 8);
        if ((*(byte *)(lVar58 + 0x132) & 1) == 0) {
          lVar58 = FUN_00d5941c();
        }
        piVar23 = (int *)thunk_FUN_00d32ed4(lVar29 + 0x11f0,*(long *)(lVar58 + 0x80) + 0xa0);
        if (*piVar23 == 0) goto LAB_02495f00;
        lVar58 = *plVar41;
        if (*(int *)(lVar58 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar58 = *plVar41;
        }
        FUN_013b8de4(*(long *)(lVar58 + 0xb8) + 0x11f0,&stack0x00000880,
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
        plVar45 = (long *)StringLiteral_302;
        in_w8 = FUN_024d66ec();
        lVar58 = unaff_x19[0x5c];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            );
        }
        uVar21 = FUN_02681b9c(lVar58,0,0);
        if ((uVar21 & 1) != 0) {
          plVar44 = (long *)unaff_x19[0x5c];
          uVar19 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar44 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar44 + 0x558))(plVar44,uVar19,*(undefined8 *)(*plVar44 + 0x560));
          lVar58 = unaff_x19[0x5c];
          if (lVar58 == 0) goto LAB_0249920c;
          *(int *)(lVar58 + 0x3f8) = (int)unaff_x19[0x7f];
          FUN_024c910c(lVar58,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
          plVar44 = (long *)unaff_x19[0x5c];
          if (plVar44 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar44 + 0x7d8))(plVar44,0,0,*(undefined8 *)(*plVar44 + 0x7e0));
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
    }
LAB_02494950:
    if (in_stack_000017bc == 0xad) {
      if ((*in_stack_00000150 == 0) || (lVar58 = *(long *)(*in_stack_00000150 + 0x38), lVar58 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar58 + 0x18) <= *in_stack_00000148)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      *(undefined1 *)(lVar58 + (int)*in_stack_00000148 * unaff_x27 + 0x194) = 0;
    }
    else {
      if (in_stack_000017bc == 9) {
        lVar58 = *in_stack_00000150;
        if ((lVar58 == 0) || (lVar29 = *(long *)(lVar58 + 0x38), lVar29 == 0)) goto LAB_0249920c;
        uVar35 = *in_stack_00000148;
        if (*(uint *)(lVar29 + 0x18) <= uVar35)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        *(undefined1 *)(lVar29 + (int)uVar35 * unaff_x27 + 0x194) = 0;
        *(uint *)((long)unaff_x19 + 0x49c) = uVar35;
        lVar29 = *(long *)(lVar58 + 0x50);
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
        (**(code **)(*unaff_x19 + 0x8b8))(in_stack_00000128,fVar52);
      }
      uVar35 = *in_stack_00000148;
      if (((uint)fStack0000000000000058 & 1) != 0) {
        *(uint *)(in_stack_00000070 + 0x1f0) = uVar35;
      }
      *(uint *)((long)unaff_x19 + 0x49c) = uVar35;
      *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
      if ((unaff_x19[0x6c] == 0) || (lVar58 = *(long *)(unaff_x19[0x6c] + 0x50), lVar58 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar58 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar58 = lVar58 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      fStack0000000000000058 = 0.0;
      *(float *)(lVar58 + 0x60) = fVar68;
      *(float *)(lVar58 + 100) = fVar71;
    }
  }
  else {
    if (((in_stack_000017bc & 0xfffffffe) == 10) && ((int)unaff_x19[0x5b] == 6)) {
      fVar47 = (float)param_2;
      fVar57 = 0.0;
      if ((0.0 < fVar47) && (fVar57 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
        fVar57 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
      }
      param_2 = (ulong)(uint)fStack00000000000000a4;
      if (fStack00000000000000a4 <
          (*(float *)(unaff_x19 + 0x96) - (*(float *)((long)unaff_x19 + 0x4c4) - fVar47)) + fVar57)
      {
        if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
          *(uint *)((long)unaff_x19 + 0x2dc) = uVar35;
        }
        plVar45 = (long *)StringLiteral_302;
        plVar41 = (long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_w8 = FUN_024d66ec();
        lVar58 = unaff_x19[0x5c];
        if (*(int *)(*(long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                    + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            );
        }
        uVar21 = FUN_02681b9c(lVar58,0,0);
        if ((uVar21 & 1) != 0) {
          plVar44 = (long *)unaff_x19[0x5c];
          uVar19 = (**(code **)(*unaff_x19 + 0x548))();
          if (plVar44 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar44 + 0x558))(plVar44,uVar19,*(undefined8 *)(*plVar44 + 0x560));
          lVar58 = unaff_x19[0x5c];
          if (lVar58 == 0) goto LAB_0249920c;
          *(int *)(lVar58 + 0x3f8) = (int)unaff_x19[0x7f];
          FUN_024c910c(lVar58,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
          plVar44 = (long *)unaff_x19[0x5c];
          if (plVar44 == (long *)0x0) goto LAB_0249920c;
          (**(code **)(*plVar44 + 0x7d8))(plVar44,0,0,*(undefined8 *)(*plVar44 + 0x7e0));
          *(undefined1 *)(unaff_x19 + 0x5e) = 1;
        }
        in_stack_000017a8 = CONCAT44(3,uVar35);
        goto LAB_02492630;
      }
    }
    if ((((in_stack_000017bc - 0x2007 < 0x23) &&
         ((1L << ((ulong)(in_stack_000017bc - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
        (in_stack_000017bc - 10 < 2)) || (in_stack_000017bc == 0xa0)) {
LAB_024944e4:
      if (((in_stack_000017bc != 0xad) && (in_stack_000017bc != 0x200b)) &&
         (in_stack_000017bc != 0x2060)) {
        lVar58 = *in_stack_00000150;
        if ((lVar58 == 0) || (lVar29 = *(long *)(lVar58 + 0x50), lVar29 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
        *(int *)(lVar29 + 0x2c) = *(int *)(lVar29 + 0x2c) + 1;
        *(int *)(lVar58 + 0x20) = *(int *)(lVar58 + 0x20) + 1;
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
      if ((*in_stack_00000150 == 0) || (lVar58 = *(long *)(*in_stack_00000150 + 0x50), lVar58 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar58 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar58 = lVar58 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
LAB_024949c4:
      *(int *)(lVar58 + 0x20) = *(int *)(lVar58 + 0x20) + 1;
    }
  }
  if (((int)unaff_x19[0x5b] == 1) && ((in_stack_000017bc == 0x2d || (!bVar7)))) {
    if (unaff_x19[0xca] == 0) goto LAB_0249920c;
    fVar57 = *(float *)(unaff_x19 + 0x3c);
    iVar13 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
    if (unaff_x19[0xca] == 0) goto LAB_0249920c;
    fVar68 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
    lVar58 = unaff_x19[0xc9];
    fVar47 = fStack0000000000000084;
    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
      fVar47 = 1.0;
    }
    if ((lVar58 == 0) || (*(long *)(lVar58 + 0x20) == 0)) goto LAB_0249920c;
    fVar49 = *(float *)((long)unaff_x19 + 0x3fc);
    fVar52 = *(float *)(lVar58 + 0x2c);
    fVar71 = (float)FUN_026fd668(*(long *)(lVar58 + 0x20),0);
    fVar51 = *_fStack0000000000000098;
    fVar71 = fVar49 * (fVar57 / (float)iVar13) * fVar68 * fVar47 * fVar52 * fVar71;
    fVar57 = *_fStack0000000000000088;
    if ((in_stack_000017bc == 10) && (*(int *)((long)unaff_x19 + 0x48c) != (int)unaff_x19[0x92])) {
      if ((*in_stack_00000150 == 0) || (lVar58 = *(long *)(*in_stack_00000150 + 0x38), lVar58 == 0))
      goto LAB_0249920c;
      uVar35 = *(int *)((long)unaff_x19 + 0x48c) - 1;
      if (*(uint *)(lVar58 + 0x18) <= uVar35)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      if (unaff_x19[0xca] == 0) goto LAB_0249920c;
      fVar47 = *(float *)(lVar58 + (long)(int)uVar35 * (long)iVar15 + 0x60);
      iVar13 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
      if (unaff_x19[0xca] == 0) goto LAB_0249920c;
      fVar49 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
      lVar58 = unaff_x19[0xc9];
      fVar68 = fStack0000000000000084;
      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
        fVar68 = 1.0;
      }
      if ((lVar58 == 0) || (*(long *)(lVar58 + 0x20) == 0)) goto LAB_0249920c;
      fVar52 = *(float *)((long)unaff_x19 + 0x3fc);
      fVar64 = *(float *)(lVar58 + 0x2c);
      fVar71 = (float)FUN_026fd668(*(long *)(lVar58 + 0x20),0);
      if ((*in_stack_00000150 == 0) || (lVar58 = *(long *)(*in_stack_00000150 + 0x50), lVar58 == 0))
      goto LAB_0249920c;
      if (*(uint *)(lVar58 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar58 = lVar58 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
      fVar51 = *(float *)(lVar58 + 0x60);
      fVar57 = *(float *)(lVar58 + 100);
      fVar71 = fVar52 * (fVar47 / (float)iVar13) * fVar49 * fVar68 * fVar64 * fVar71;
    }
    fVar52 = *(float *)(unaff_x19 + 0x9a);
    fVar68 = *(float *)(unaff_x19 + 0x96);
    fVar64 = *(float *)((long)unaff_x19 + 0x4c4);
    fVar47 = 0.0;
    fVar49 = 0.0;
    if ((0.0 < fVar52) && (fVar49 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
      fVar49 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
    }
    fVar69 = *(float *)(unaff_x19 + 199);
    if ((char)unaff_x19[0x1d] == '\0') {
      if ((unaff_x19[0xc9] == 0) || (lVar58 = *(long *)(unaff_x19[0xc9] + 0x20), lVar58 == 0))
      goto LAB_0249920c;
      FUN_026fd62c(&stack0x00000880,lVar58,0);
      fVar47 = (float)FUN_026fd474(&stack0x000016e0,0);
    }
    puVar9 = System_Threading_Mutex_TypeInfo;
    fVar65 = *(float *)(unaff_x19 + 0x6b);
    fVar57 = (in_stack_00000090 - fVar51) - fVar57;
    bVar11 = true;
    if ((fVar65 <= fVar57) && (bVar11 = false, !NAN(fVar65))) {
      bVar11 = fVar65 == -1.0;
    }
    if (!bVar11) {
      fVar57 = fVar65;
    }
    fVar51 = _DAT_0294c6e8;
    if ((uVar32 & 0x18) == 0) {
      fVar51 = 1.0;
    }
    if (((fVar68 - (fVar64 - fVar52)) + fVar49 < fStack00000000000000a4) &&
       (ABS(fVar69) + fVar71 * fVar47 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) <
        fVar51 * fVar57)) {
      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_024d69d4();
      lVar58 = *(long *)(*(long *)puVar9 + 0xb8);
      memcpy(&stack0x00000508,(void *)(lVar58 + 0x788),0x378);
      FUN_013b86dc(lVar58 + 0x11f0,&stack0x00000508,
                   *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__);
    }
  }
  unaff_d13 = (ulong)(uint)fVar74;
  unaff_s12 = 1.0;
  lVar58 = *in_stack_00000150;
  if ((lVar58 == 0) || (lVar29 = *(long *)(lVar58 + 0x38), lVar29 == 0)) goto LAB_0249920c;
  if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000148)
  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  uVar35 = *(uint *)(unaff_x19 + 0x94);
  lVar29 = lVar29 + (int)*in_stack_00000148 * unaff_x27;
  *(uint *)(lVar29 + 100) = uVar35;
  *(int *)(lVar29 + 0x68) = (int)unaff_x19[0x95];
  if ((bVar7) ||
     ((in_stack_000017bc < 0xe && ((1 << (ulong)(in_stack_000017bc & 0x1f) & 0x2c00U) != 0)))) {
    lVar58 = *(long *)(lVar58 + 0x50);
    if (lVar58 == 0) goto LAB_0249920c;
    if (*(uint *)(lVar58 + 0x18) <= uVar35)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if (*(int *)(lVar58 + (long)(int)uVar35 * 0x5c + 0x24) == 1) goto LAB_02494e68;
  }
  else {
    lVar58 = *(long *)(lVar58 + 0x50);
    if (lVar58 == 0) goto LAB_0249920c;
LAB_02494e68:
    if (*(uint *)(lVar58 + 0x18) <= uVar35)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(int *)(lVar58 + (long)(int)uVar35 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
  }
  if (in_stack_000017bc == 9) {
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar57 = (float)FUN_026fd208(*in_stack_00000138 + 0x50,0);
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar68 = *(float *)(unaff_x19 + 199);
    fVar47 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000138 + 0x1b9));
    fVar57 = fVar74 * fVar57 * fVar47;
    fVar47 = fVar57 * (float)(int)(fVar68 / fVar57);
    param_2 = (ulong)(uint)fVar47;
    if (fVar47 <= fVar68) {
      fVar47 = fVar68 + fVar57;
    }
LAB_02495058:
    *(float *)(unaff_x19 + 199) = fVar47;
  }
  else if (*(float *)(unaff_x19 + 0x55) == 0.0) {
    if ((char)unaff_x19[0x1d] == '\0') {
      fVar68 = unaff_s12;
      if (*(char *)((long)unaff_x19 + 0x46c) != '\0') {
        fVar68 = (float)thunk_FUN_026935f0(_uStack0000000000000060,0);
      }
      fVar47 = *(float *)(unaff_x19 + 199);
      fVar71 = (float)FUN_026fd474(&stack0x00001770,0);
      if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
      fVar57 = 1.0 - *(float *)((long)unaff_x19 + 0x2cc);
      fVar47 = fVar47 + fVar57 * (*(float *)((long)unaff_x19 + 0x2a4) +
                                 fVar74 * (fVar48 + fVar68 * fVar71) +
                                 in_stack_000000c8 *
                                 (fVar72 + fStack00000000000000cc +
                                           *(float *)(unaff_x19[0x1f] + 0x1ac)));
      *(float *)(unaff_x19 + 199) = fVar47;
      goto joined_r0x02494fac;
    }
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar47 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
             (*(float *)((long)unaff_x19 + 0x2a4) +
             fVar74 * fVar48 +
             in_stack_000000c8 *
             (fVar72 + fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac)));
    param_2 = (ulong)(uint)fVar47;
    fVar47 = *(float *)(unaff_x19 + 199) - fVar47;
    *(float *)(unaff_x19 + 199) = fVar47;
    if ((uVar14 != 0) || (in_stack_000017bc == 0x200b)) {
      fVar57 = in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
      param_2 = (ulong)(uint)fVar57;
      fVar47 = fVar47 - fVar57;
      goto LAB_02495058;
    }
  }
  else {
    if (*in_stack_00000138 == 0) goto LAB_0249920c;
    fVar57 = *(float *)(unaff_x19 + 199);
    fVar47 = fVar57 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                      (*(float *)((long)unaff_x19 + 0x2a4) +
                      (*(float *)(unaff_x19 + 0x55) - fVar50) +
                      in_stack_000000c8 *
                      (fStack00000000000000cc + *(float *)(*in_stack_00000138 + 0x1ac)));
    *(float *)(unaff_x19 + 199) = fVar47;
joined_r0x02494fac:
    if ((uVar14 != 0) || (param_2 = (ulong)(uint)fVar57, in_stack_000017bc == 0x200b)) {
      fVar57 = in_stack_000000c8 * *(float *)((long)unaff_x19 + 0x2ac);
      param_2 = (ulong)(uint)fVar57;
      fVar47 = fVar47 + fVar57;
      goto LAB_02495058;
    }
  }
  lVar58 = *in_stack_00000150;
  if ((lVar58 == 0) || (lVar29 = *(long *)(lVar58 + 0x38), lVar29 == 0)) goto LAB_0249920c;
  uVar35 = *in_stack_00000148;
  uVar32 = (uint)*(undefined8 *)(lVar29 + 0x18);
  if (uVar32 <= uVar35) goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
  *(float *)(lVar29 + (int)uVar35 * unaff_x27 + 0x144) = fVar47;
  uVar42 = in_stack_000017bc;
  if ((int)in_stack_000017bc < 0xd) {
    if ((in_stack_000017bc - 10 < 2) || (in_stack_000017bc == 3)) goto LAB_024950bc;
FUN_02495710:
    if (((bool)(bVar7 & in_stack_000017bc == 0x2d)) || ((float)uVar35 == in_stack_00000078._4_4_))
    goto LAB_024950bc;
  }
  else {
    if (1 < in_stack_000017bc - 0x2028) {
      if (in_stack_000017bc != 0xd) goto FUN_02495710;
      param_2 = 0;
      *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
      if ((float)uVar35 != in_stack_00000078._4_4_) goto LAB_0249572c;
    }
LAB_024950bc:
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
        puVar9 = System_Threading_Mutex_TypeInfo;
        lVar58 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar58 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar58 = *(long *)puVar9;
        }
        lVar29 = *(long *)(lVar58 + 0xb8);
        if (*(int *)(lVar29 + 0x7ac) == (int)unaff_x19[0x94]) {
          if (*(int *)(lVar58 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar29 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          FUN_013b8de4(lVar29 + 0x11f0,&stack0x00000880,
                       *(undefined8 *)
                        Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                      );
          lVar58 = *(long *)System_Threading_Mutex_TypeInfo;
          memcpy((void *)(*(long *)(lVar58 + 0xb8) + 0x788),&stack0x00000880,0x378);
          lVar58 = *(long *)(lVar58 + 0xb8);
          *(float *)(lVar58 + 0x7bc) = fVar57 + *(float *)(lVar58 + 0x7bc);
          *(float *)(lVar58 + 0x800) = fVar57 + *(float *)(lVar58 + 0x800);
          memcpy(&stack0x00000190,(void *)(lVar58 + 0x788),0x378);
          FUN_013b86dc(lVar58 + 0x11f0,&stack0x00000190,
                       *(undefined8 *)Method_System_Collections_Generic_List<TextStyle>_get_Item__);
        }
      }
    }
    fVar68 = *(float *)(unaff_x19 + 0x9a);
    *(undefined1 *)((long)unaff_x19 + 0x334) = 0;
    fVar47 = *(float *)((long)unaff_x19 + 0x4c4) - fVar68;
    fVar57 = *(float *)((long)unaff_x19 + 0x4bc);
    if (fVar47 <= *(float *)((long)unaff_x19 + 0x4bc)) {
      fVar57 = fVar47;
    }
    *(float *)((long)unaff_x19 + 0x4bc) = fVar57;
    fVar71 = *(float *)(unaff_x19 + 0x98);
    if (in_stack_000017b4 == '\0') {
      in_stack_000017b8 = fVar57;
    }
    if ((*(char *)((long)unaff_x19 + 0x32c) != '\0') &&
       (((int)unaff_x19[100] <= *(int *)((long)unaff_x19 + 0x48c) ||
        ((int)unaff_x19[0x65] <= (int)unaff_x19[0x94])))) {
      in_stack_000017b4 = '\x01';
    }
    lVar58 = *in_stack_00000150;
    if ((lVar58 == 0) || (lVar29 = *(long *)(lVar58 + 0x50), lVar29 == 0)) goto LAB_0249920c;
    uVar35 = *(uint *)(unaff_x19 + 0x94);
    if (*(uint *)(lVar29 + 0x18) <= uVar35)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar43 = lVar29 + (long)(int)uVar35 * 0x5c;
    *(int *)(lVar43 + 0x34) = (int)unaff_x19[0x92];
    iVar13 = (int)unaff_x19[0x92];
    if ((int)unaff_x19[0x92] <= *(int *)((long)unaff_x19 + 0x494)) {
      iVar13 = *(int *)((long)unaff_x19 + 0x494);
    }
    *(int *)((long)unaff_x19 + 0x494) = iVar13;
    *(int *)(lVar43 + 0x38) = iVar13;
    *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x48c);
    *(undefined4 *)(lVar43 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x48c);
    iVar13 = *(int *)((long)unaff_x19 + 0x494);
    if (*(int *)((long)unaff_x19 + 0x494) <= *(int *)((long)unaff_x19 + 0x49c)) {
      iVar13 = *(int *)((long)unaff_x19 + 0x49c);
    }
    *(int *)((long)unaff_x19 + 0x49c) = iVar13;
    *(int *)(lVar43 + 0x40) = iVar13;
    *(int *)(lVar43 + 0x24) = (*(int *)(lVar43 + 0x3c) - *(int *)(lVar43 + 0x34)) + 1;
    *(undefined4 *)(lVar43 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
    lVar58 = *(long *)(lVar58 + 0x38);
    if (lVar58 == 0) goto LAB_0249920c;
    if (*(uint *)(lVar58 + 0x18) <= *(uint *)((long)unaff_x19 + 0x494))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    uVar75 = *(undefined4 *)(lVar58 + (int)*(uint *)((long)unaff_x19 + 0x494) * unaff_x27 + 0x11c);
    lVar29 = lVar29 + (long)(int)uVar35 * 0x5c;
    *(float *)(lVar29 + 0x70) = fVar47;
    *(undefined4 *)(lVar29 + 0x6c) = uVar75;
    lVar58 = *in_stack_00000150;
    if ((lVar58 == 0) || (lVar29 = *(long *)(lVar58 + 0x50), lVar29 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar29 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar58 = *(long *)(lVar58 + 0x38);
    if (lVar58 == 0) goto LAB_0249920c;
    if (*(uint *)(lVar58 + 0x18) <= *(uint *)((long)unaff_x19 + 0x49c))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    uVar75 = *(undefined4 *)(lVar58 + (int)*(uint *)((long)unaff_x19 + 0x49c) * unaff_x27 + 0x128);
    fVar71 = fVar71 - fVar68;
    lVar29 = lVar29 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
    *(float *)(lVar29 + 0x78) = fVar71;
    *(undefined4 *)(lVar29 + 0x74) = uVar75;
    lVar58 = *in_stack_00000150;
    if ((lVar58 == 0) || (lVar43 = *(long *)(lVar58 + 0x50), lVar43 == 0)) goto LAB_0249920c;
    lVar22 = (long)(int)*(uint *)(unaff_x19 + 0x94);
    if (*(uint *)(lVar43 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar29 = lVar43 + lVar22 * 0x5c;
    *(float *)(lVar29 + 0x44) = *(float *)(lVar29 + 0x74) - fVar74 * in_stack_00000128;
    *(float *)(lVar29 + 0x5c) = fStack00000000000000d4;
    if (*(int *)(lVar29 + 0x24) == 1) {
      *(int *)(lVar43 + lVar22 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
    }
    if ((*in_stack_00000138 == 0) || (lVar29 = *(long *)(lVar58 + 0x38), lVar29 == 0))
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
    fVar57 = -fVar74;
    if ((char)unaff_x19[0x1d] != '\0') {
      fVar57 = fVar74;
    }
    lVar43 = lVar43 + lVar22 * 0x5c;
    *(float *)(lVar43 + 0x58) = *(float *)(lVar29 + lVar38 * unaff_x27 + 0x144) + fVar57;
    fVar57 = *(float *)(unaff_x19 + 0x9a);
    *(float *)(lVar43 + 0x48) = fStack0000000000000050 + (fVar71 - fVar47);
    *(float *)(lVar43 + 0x4c) = fVar71;
    param_2 = (ulong)(uint)(0.0 - fVar57);
    *(float *)(lVar43 + 0x50) = 0.0 - fVar57;
    *(float *)(lVar43 + 0x54) = fVar47;
    plVar41 = (long *)System_Threading_Mutex_TypeInfo;
    if ((int)in_stack_000017bc < 0x2d) {
      if (in_stack_000017bc - 10 < 2) {
UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__OnSelectEntering:
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar45 = (long *)StringLiteral_302;
        FUN_024d69d4();
        lVar58 = unaff_x19[0x6c];
        *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
        iVar15 = (int)unaff_x19[0x94] + 1;
        *(int *)(unaff_x19 + 0x94) = iVar15;
        *(int *)(unaff_x19 + 0x92) = *(int *)((long)unaff_x19 + 0x48c) + 1;
        if ((lVar58 == 0) || (*(long *)(lVar58 + 0x50) == 0)) goto LAB_0249920c;
        if (*(int *)(*(long *)(lVar58 + 0x50) + 0x18) <= iVar15) {
          FUN_024d6e60();
          lVar58 = unaff_x19[0x6c];
          if (lVar58 == 0) goto LAB_0249920c;
        }
        lVar58 = *(long *)(lVar58 + 0x38);
        if (lVar58 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar58 + 0x18) <= *in_stack_00000148)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar57 = *(float *)(lVar58 + (int)*in_stack_00000148 * unaff_x27 + 0x154);
        if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
          fVar74 = 0.0;
          if ((in_stack_000017bc == 0x2029) || (in_stack_000017bc == 10)) {
            fVar74 = *(float *)((long)unaff_x19 + 0x2c4);
          }
          uVar25 = 0;
          fVar74 = *(float *)(unaff_x19 + 0x9a) +
                   fVar57 + (0.0 - *(float *)((long)unaff_x19 + 0x4c4)) +
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
        lVar58 = *plVar41;
        if (*(int *)(lVar58 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar58 = *plVar41;
        }
        uVar19 = *(undefined8 *)(*(long *)(lVar58 + 0xb8) + 0x15a8);
        *(float *)(unaff_x19 + 0x99) = fVar57;
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
      }
      if (in_stack_000017bc == 3) {
        if (unaff_x19[0x8e] == 0) goto LAB_0249920c;
        in_w8 = (uint)*(undefined8 *)(unaff_x19[0x8e] + 0x18);
        uVar42 = 3;
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
    uVar60 = *(ulong *)(lVar29 + 0x11c);
    uVar21 = *(ulong *)(in_stack_00000070 + 0x230);
    *(ulong *)(in_stack_00000070 + 0x230) =
         uVar60 ^ (uVar60 ^ uVar21) &
                  CONCAT44(-(uint)((float)(uVar21 >> 0x20) < (float)(uVar60 >> 0x20)),
                           -(uint)((float)uVar21 < (float)uVar60));
    uVar21 = *(ulong *)(in_stack_00000070 + 0x238);
    param_2 = *(ulong *)(lVar29 + 0x128);
    *(ulong *)(in_stack_00000070 + 0x238) =
         param_2 ^ (param_2 ^ uVar21) &
                   CONCAT44(-(uint)((float)(param_2 >> 0x20) < (float)(uVar21 >> 0x20)),
                            -(uint)((float)param_2 < (float)uVar21));
  }
  if (((int)unaff_x19[0x5b] == 5) &&
     ((0xd < uVar42 || ((1 << (ulong)(uVar42 & 0x1f) & 0x2c00U) == 0)))) {
    lVar29 = *(long *)(lVar58 + 0x58);
    if (lVar29 == 0) goto LAB_0249920c;
    iVar13 = (int)unaff_x19[0x95] + 1;
    if (*(int *)(lVar29 + 0x18) < iVar13) {
      if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01147c08((long *)(lVar58 + 0x58),iVar13,1,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerMove__);
      lVar58 = *in_stack_00000150;
      if (lVar58 == 0) goto LAB_0249920c;
    }
    lVar29 = *(long *)(lVar58 + 0x58);
    if (lVar29 == 0) goto LAB_0249920c;
    uVar32 = *(uint *)(unaff_x19 + 0x95);
    lVar43 = (long)(int)uVar32;
    uVar35 = *(uint *)(lVar29 + 0x18);
    if (uVar35 <= uVar32)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar22 = lVar29 + lVar43 * 0x14;
    fVar74 = *(float *)(lVar22 + 0x30);
    param_2 = (ulong)(uint)fVar74;
    *(undefined4 *)(lVar22 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
    fVar57 = *(float *)((long)unaff_x19 + 0x4bc);
    if (fVar74 <= *(float *)((long)unaff_x19 + 0x4bc)) {
      fVar57 = fVar74;
    }
    *(float *)(lVar22 + 0x30) = fVar57;
    uVar42 = *(uint *)((long)unaff_x19 + 0x48c);
    if (uVar42 == 0 && uVar32 == 0) {
      *(uint *)(lVar29 + lVar43 * 0x14 + 0x20) = uVar42;
    }
    else {
      uVar6 = uVar42 - 1;
      if (0 < (int)uVar42) {
        lVar58 = *(long *)(lVar58 + 0x38);
        if (lVar58 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar58 + 0x18) <= uVar6)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (uVar32 != *(uint *)(lVar58 + (long)(int)uVar6 * (long)iVar15 + 0x68)) {
          if (uVar35 <= uVar32 - 1)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          *(uint *)(lVar29 + 0x20 + (long)(int)(uVar32 - 1) * 0x14 + 4) = uVar6;
          *(uint *)(lVar29 + 0x20 + lVar43 * 0x14) = uVar42;
          goto LAB_024957b0;
        }
      }
      if ((float)uVar42 == in_stack_00000078._4_4_) {
        *(float *)(lVar29 + lVar43 * 0x14 + 0x24) = in_stack_00000078._4_4_;
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
    lVar58 = FUN_024e94b0(0);
    if ((lVar58 == 0) || (*(long *)(lVar58 + 0x10) == 0)) goto LAB_0249920c;
    uVar21 = FUN_0129aa60(*(long *)(lVar58 + 0x10),&stack0x00000880,
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
      if (uVar18 != uVar62 || ((bStack000000000000005c ^ 0xff) & 1) != 0) goto LAB_02495b70;
      goto LAB_02495af4;
    }
    lVar58 = FUN_024e94b0(0);
    if (((lVar58 == 0) || (*in_stack_00000150 == 0)) ||
       (lVar29 = *(long *)(*in_stack_00000150 + 0x38), lVar29 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar29 + 0x18) <= *in_stack_00000148 + 1)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if (*(long *)(lVar58 + 0x18) == 0) goto LAB_0249920c;
    in_stack_00000880 =
         (uint)*(ushort *)(lVar29 + (long)(int)(*in_stack_00000148 + 1) * (long)iVar15 + 0x20);
    uVar60 = FUN_0129aa60(*(long *)(lVar58 + 0x18),&stack0x00000880,
                          *(undefined8 *)
                           System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                         );
    if ((uVar21 & 1) != 0) goto LAB_02495adc;
    if ((uVar60 & 1) == 0) goto LAB_02495bc4;
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
  plVar41 = (long *)System_Threading_Mutex_TypeInfo;
  if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar45 = (long *)StringLiteral_302;
  FUN_024d69d4();
  *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
  goto LAB_02492630;
LAB_02496a50:
  do {
    uVar14 = uVar35 - 1;
    if (*(uint *)(lVar58 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*in_stack_00000150 == 0) || (lVar43 = *(long *)(*in_stack_00000150 + 0x50), lVar43 == 0))
    goto LAB_0249920c;
    lVar38 = (long)(int)uVar14;
    lVar22 = lVar58 + lVar38 * 0x178;
    uVar32 = *(uint *)(lVar22 + 100);
    if (*(uint *)(lVar43 + 0x18) <= uVar32)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar36 = *(long *)(lVar22 + 0x38);
    uVar3 = *(ushort *)(lVar22 + 0x20);
    lVar34 = (long)(int)uVar32;
    lVar43 = lVar43 + lVar34 * 0x5c;
    uVar6 = *(uint *)(lVar43 + 0x3c);
    iVar16 = *(int *)(lVar43 + 0x28);
    iVar17 = *(int *)(lVar43 + 0x2c);
    uVar5 = *(uint *)(lVar43 + 0x40);
    lVar22 = (long)(int)uVar5;
    uVar42 = *(uint *)(lVar43 + 0x68);
    fVar69 = *(float *)(lVar43 + 0x5c);
    fVar67 = *(float *)(lVar43 + 0x60);
    iVar2 = *(int *)(lVar43 + 0x20);
    fVar50 = *(float *)(lVar43 + 0x4c);
    fVar51 = *(float *)(lVar43 + 0x54);
    fVar71 = *(float *)(lVar43 + 0x58);
    fVar64 = *(float *)(lVar43 + 0x6c);
    fVar52 = *(float *)(lVar43 + 0x70);
    fVar49 = *(float *)(lVar43 + 0x74);
    fVar72 = *(float *)(lVar43 + 0x78);
    fVar65 = fVar69 + fVar67;
    uVar40 = (uint)uVar3;
    if ((int)uVar42 < 9) {
      switch(uVar42) {
      case 1:
        if ((char)unaff_x19[0x1d] == '\0') {
          in_stack_000000c8 = fVar67 + 0.0;
        }
        else {
          in_stack_000000c8 = 0.0 - fVar71;
        }
        break;
      case 2:
LAB_02496c1c:
        in_stack_000000c8 = (fVar67 + fVar69 * 0.5) - fVar71 * 0.5;
        break;
      default:
        goto switchD_02496b58_caseD_3;
      case 4:
        in_stack_000000c8 = fVar65 - fVar71;
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
    else if (uVar42 == 0x10) {
switchD_02496b58_caseD_8:
      if (uVar3 < 0xad) {
        if ((uVar40 != 3) && (uVar40 != 10)) goto LAB_02496bac;
      }
      else if ((uVar40 != 0xad) && ((uVar40 != 0x200b && (uVar40 != 0x2060)))) {
LAB_02496bac:
        if (*(uint *)(lVar58 + 0x18) <= uVar6)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar4 = *(undefined2 *)(lVar58 + (long)(int)uVar6 * 0x178 + 0x20);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar21 = FUN_016f9f84(uVar4,0);
        if ((uVar21 & 1) == 0) {
          bVar1 = (int)uVar32 < (int)unaff_x19[0x94];
        }
        else {
          bVar1 = false;
        }
        if ((fVar71 <= fVar69) && (!bVar1 && (uVar42 >> 4 & 1) == 0)) {
          in_stack_000000c8 = fVar67;
          if ((char)unaff_x19[0x1d] != '\0') {
            in_stack_000000c8 = fVar65;
          }
          goto LAB_02496c90;
        }
        if (((uVar35 == 1) || (uVar32 != uVar62)) || (uVar14 == *(uint *)((long)unaff_x19 + 0x31c)))
        {
          in_stack_000000c8 = fVar67;
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
          fVar65 = -fVar71;
          if (cVar26 != '\0') {
            fVar65 = fVar71;
          }
          if (*(uint *)(lVar58 + 0x18) <= uVar6)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar71 = 1.0;
          iVar17 = (int)*(char *)(lVar58 + (long)(int)uVar6 * 0x178 + 0x194) +
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
              uVar21 = FUN_016fa418(uVar3,0);
              cVar26 = (char)unaff_x19[0x1d];
              if ((uVar21 & 1) != 0) goto LAB_02498bb8;
            }
            iVar17 = (iVar2 - (~(uint)fStack0000000000000020 & 1)) + iVar16;
          }
          fVar71 = ((fVar69 + fVar65) * fVar71) / (float)iVar17;
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
    else if (uVar42 == 0x20) {
      fVar71 = fVar64 + fVar49;
      goto LAB_02496c1c;
    }
switchD_02496b58_caseD_3:
    uVar42 = (uint)*(undefined8 *)(lVar58 + 0x18);
    if (uVar42 <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar43 = lVar58 + lVar38 * 0x178;
    fVar65 = fStack0000000000000098 + in_stack_000000c8;
    fVar71 = (float)_in_stack_00000090 + (float)uStack00000000000000c0;
    fVar69 = (float)((ulong)_in_stack_00000090 >> 0x20) +
             (float)((ulong)uStack00000000000000c0 >> 0x20);
    if (*(char *)(lVar43 + 0x194) == '\0') goto LAB_02497688;
    iVar16 = *(int *)(lVar58 + lVar38 * 0x178 + 0x2c);
    if (iVar16 != 0) goto LAB_02497374;
    fVar68 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)uVar32,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
    case 0:
      lVar28 = lVar58 + lVar38 * 0x178;
      *(undefined4 *)(lVar28 + 0x84) = 0;
      *(undefined4 *)(lVar28 + 0xac) = 0;
      *(undefined4 *)(lVar28 + 0xd4) = 0x3f800000;
      fVar68 = 1.0;
      break;
    case 1:
      fVar72 = *(float *)(lVar58 + lVar38 * 0x178 + 0x70);
      if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
        lVar28 = lVar58 + lVar38 * 0x178;
        fVar49 = (in_stack_000000c8 + fVar72) - *(float *)(in_stack_00000070 + 0x230);
        fVar72 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
        goto LAB_02496df8;
      }
      lVar28 = lVar58 + lVar38 * 0x178;
      fVar49 = fVar49 - fVar64;
      *(float *)(lVar28 + 0x84) = fVar68 + (fVar72 - fVar64) / fVar49;
      *(float *)(lVar28 + 0xac) = fVar68 + (*(float *)(lVar28 + 0x98) - fVar64) / fVar49;
      *(float *)(lVar28 + 0xd4) = fVar68 + (*(float *)(lVar28 + 0xc0) - fVar64) / fVar49;
      fVar68 = fVar68 + (*(float *)(lVar28 + 0xe8) - fVar64) / fVar49;
      break;
    case 2:
      lVar28 = lVar58 + lVar38 * 0x178;
      fVar72 = *(float *)(in_stack_00000070 + 0x238) - *(float *)(in_stack_00000070 + 0x230);
      fVar49 = (in_stack_000000c8 + *(float *)(lVar28 + 0x70)) -
               *(float *)(in_stack_00000070 + 0x230);
LAB_02496df8:
      *(float *)(lVar28 + 0x84) = fVar68 + fVar49 / fVar72;
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
        lVar28 = lVar58 + lVar38 * 0x178;
        *(undefined4 *)(lVar28 + 0x88) = 0;
        *(undefined4 *)(lVar28 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar28 + 0xd8) = 0;
        *(undefined4 *)(lVar28 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar28 = lVar58 + lVar38 * 0x178;
        fVar72 = fVar72 - fVar52;
        fVar49 = fVar68 + (*(float *)(lVar28 + 0x74) - fVar52) / fVar72;
        fVar72 = fVar68 + (*(float *)(lVar28 + 0x9c) - fVar52) / fVar72;
        *(float *)(lVar28 + 0x88) = fVar49;
        *(float *)(lVar28 + 0xb0) = fVar72;
        *(float *)(lVar28 + 0xd8) = fVar49;
        *(float *)(lVar28 + 0x100) = fVar72;
        break;
      case 2:
        lVar28 = lVar58 + lVar38 * 0x178;
        fVar49 = fVar68 + (*(float *)(lVar28 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                          (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
        *(float *)(lVar28 + 0x88) = fVar49;
        fVar72 = *(float *)(unaff_x19 + 0x9b);
        fVar52 = *(float *)(unaff_x19 + 0x9c);
        *(float *)(lVar28 + 0xd8) = fVar49;
        fVar49 = fVar68 + (*(float *)(lVar28 + 0x9c) - fVar72) / (fVar52 - fVar72);
        *(float *)(lVar28 + 0xb0) = fVar49;
        *(float *)(lVar28 + 0x100) = fVar49;
        break;
      case 3:
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
        uVar42 = (uint)*(undefined8 *)(lVar58 + 0x18);
      }
      if (uVar42 <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = lVar58 + lVar38 * 0x178;
      fVar49 = *(float *)(lVar28 + 0x15c);
      fVar72 = (1.0 - (*(float *)(lVar28 + 0x88) + *(float *)(lVar28 + 0xb0)) * fVar49) * 0.5;
      fVar52 = fVar68 + *(float *)(lVar28 + 0x88) * fVar49 + fVar72;
      fVar68 = fVar68 + fVar72 + *(float *)(lVar28 + 0xb0) * fVar49;
      *(float *)(lVar28 + 0x84) = fVar52;
      *(float *)(lVar28 + 0xac) = fVar52;
      *(float *)(lVar28 + 0xd4) = fVar68;
      break;
    default:
      goto switchD_02496d4c_default;
    }
    *(float *)(lVar58 + lVar38 * 0x178 + 0xfc) = fVar68;
switchD_02496d4c_default:
    switch((int)unaff_x19[0x61]) {
    case 0:
      if (uVar42 <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = lVar58 + lVar38 * 0x178;
      *(undefined4 *)(lVar28 + 0x88) = 0;
      *(undefined4 *)(lVar28 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar28 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar28 + 0x100) = 0;
      break;
    case 1:
      if (uVar14 < uVar42) {
        lVar28 = lVar58 + lVar38 * 0x178;
        fVar50 = fVar50 - fVar51;
        fVar68 = (*(float *)(lVar28 + 0x74) - fVar51) / fVar50;
        fVar50 = (*(float *)(lVar28 + 0x9c) - fVar51) / fVar50;
        *(float *)(lVar28 + 0x88) = fVar68;
        goto LAB_02497174;
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    case 2:
      if (uVar42 <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = lVar58 + lVar38 * 0x178;
      fVar68 = (*(float *)(lVar28 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
      *(float *)(lVar28 + 0x88) = fVar68;
      fVar50 = (*(float *)(lVar28 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
LAB_02497174:
      *(float *)(lVar28 + 0xb0) = fVar50;
      *(float *)(lVar28 + 0xd8) = fVar50;
      *(float *)(lVar28 + 0x100) = fVar68;
      break;
    case 3:
      if (uVar42 <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = lVar58 + lVar38 * 0x178;
      fVar50 = *(float *)(lVar28 + 0x15c);
      fVar49 = (1.0 - (*(float *)(lVar28 + 0x84) + *(float *)(lVar28 + 0xd4)) / fVar50) * 0.5;
      fVar68 = *(float *)(lVar28 + 0x84) / fVar50 + fVar49;
      fVar49 = fVar49 + *(float *)(lVar28 + 0xd4) / fVar50;
      *(float *)(lVar28 + 0x88) = fVar68;
      *(float *)(lVar28 + 0xb0) = fVar49;
      *(float *)(lVar28 + 0x100) = fVar68;
      *(float *)(lVar28 + 0xd8) = fVar49;
    }
    if (uVar42 <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar28 = lVar58 + lVar38 * 0x178;
    fVar68 = *(float *)(lVar28 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
    if ((*(char *)(lVar28 + 0x5c) == '\0') && ((*(byte *)(lVar58 + lVar38 * 0x178 + 400) & 1) != 0))
    {
      fVar68 = -fVar68;
    }
    fVar49 = fVar57;
    if (((iVar13 == 2) || (fVar49 = fVar48, iVar13 == 1)) || (fVar49 = fVar57 / fVar74, iVar13 == 0)
       ) {
      fVar68 = fVar49 * fVar68;
    }
    lVar28 = lVar58 + lVar38 * 0x178;
    fVar50 = *(float *)(lVar28 + 0x88);
    fVar72 = *(float *)(lVar28 + 0x84);
    fVar49 = -2.1474836e+09;
    if (fVar72 != INFINITY) {
      fVar49 = (float)(int)fVar72;
    }
    fVar52 = *(float *)(lVar28 + 0xd4);
    fVar64 = *(float *)(lVar28 + 0xd8);
    fVar51 = -2.1474836e+09;
    if (fVar50 != INFINITY) {
      fVar51 = (float)(int)fVar50;
    }
    uVar75 = FUN_024e0374(fVar72 - fVar49,fVar50 - fVar51);
    *(undefined4 *)(lVar28 + 0x84) = uVar75;
    if (*(uint *)(lVar58 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar64 = fVar64 - fVar51;
    *(float *)(lVar28 + 0x88) = fVar68;
    uVar75 = FUN_024e0374(fVar72 - fVar49,fVar64);
    *(undefined4 *)(lVar58 + lVar38 * 0x178 + 0xac) = uVar75;
    if (*(uint *)(lVar58 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar52 = fVar52 - fVar49;
    *(float *)(lVar58 + lVar38 * 0x178 + 0xb0) = fVar68;
    fVar49 = (float)FUN_024e0374(fVar52,fVar64);
    *(float *)(lVar28 + 0xd4) = fVar49;
    if (*(uint *)(lVar58 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar28 + 0xd8) = fVar68;
    uVar75 = FUN_024e0374(fVar52,fVar50 - fVar51);
    *(undefined4 *)(lVar58 + lVar38 * 0x178 + 0xfc) = uVar75;
    uVar42 = (uint)*(undefined8 *)(lVar58 + 0x18);
    if (uVar42 <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar58 + lVar38 * 0x178 + 0x100) = fVar68;
LAB_02497374:
    if (((int)unaff_x19[100] <= (int)uVar14) ||
       (*(int *)((long)unaff_x19 + 0x324) <= iStack00000000000000ac)) goto LAB_02497490;
    if (((int)uVar32 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] != 5)) {
      if (uVar42 <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar43 = lVar58 + lVar38 * 0x178;
      *(ulong *)(lVar43 + 0x70) =
           CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar43 + 0x70) >> 0x20),
                    fVar65 + (float)*(undefined8 *)(lVar43 + 0x70));
      *(float *)(lVar43 + 0x78) = fVar69 + *(float *)(lVar43 + 0x78);
      if (*(uint *)(lVar58 + 0x18) <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar43 = lVar58 + lVar38 * 0x178;
      *(ulong *)(lVar43 + 0x98) =
           CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar43 + 0x98) >> 0x20),
                    fVar65 + (float)*(undefined8 *)(lVar43 + 0x98));
      *(float *)(lVar43 + 0xa0) = fVar69 + *(float *)(lVar43 + 0xa0);
      if (*(uint *)(lVar58 + 0x18) <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar43 = lVar58 + lVar38 * 0x178;
      *(ulong *)(lVar43 + 0xc0) =
           CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar43 + 0xc0) >> 0x20),
                    fVar65 + (float)*(undefined8 *)(lVar43 + 0xc0));
      *(float *)(lVar43 + 200) = fVar69 + *(float *)(lVar43 + 200);
      if (*(uint *)(lVar58 + 0x18) <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar43 = lVar58 + lVar38 * 0x178;
      *(ulong *)(lVar43 + 0xe8) =
           CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar43 + 0xe8) >> 0x20),
                    fVar65 + (float)*(undefined8 *)(lVar43 + 0xe8));
      *(float *)(lVar43 + 0xf0) = fVar69 + *(float *)(lVar43 + 0xf0);
      if (iVar16 == 0) goto LAB_02497668;
LAB_02497598:
      if (iVar16 == 1) {
        pcVar31 = *(code **)(*unaff_x19 + 0x8f8);
        goto LAB_02497674;
      }
    }
    else {
      if (((int)uVar32 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] == 5)) {
        if (uVar42 <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (*(uint *)(lVar58 + lVar38 * 0x178 + 0x68) != uStack000000000000002c) goto LAB_02497490;
        lVar43 = lVar58 + lVar38 * 0x178;
        *(ulong *)(lVar43 + 0x70) =
             CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar43 + 0x70) >> 0x20),
                      fVar65 + (float)*(undefined8 *)(lVar43 + 0x70));
        *(float *)(lVar43 + 0x78) = fVar69 + *(float *)(lVar43 + 0x78);
        if (*(uint *)(lVar58 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar43 = lVar58 + lVar38 * 0x178;
        *(ulong *)(lVar43 + 0x98) =
             CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar43 + 0x98) >> 0x20),
                      fVar65 + (float)*(undefined8 *)(lVar43 + 0x98));
        *(float *)(lVar43 + 0xa0) = fVar69 + *(float *)(lVar43 + 0xa0);
        if (*(uint *)(lVar58 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar43 = lVar58 + lVar38 * 0x178;
        *(ulong *)(lVar43 + 0xc0) =
             CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar43 + 0xc0) >> 0x20),
                      fVar65 + (float)*(undefined8 *)(lVar43 + 0xc0));
        *(float *)(lVar43 + 200) = fVar69 + *(float *)(lVar43 + 200);
        if (*(uint *)(lVar58 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar43 = lVar58 + lVar38 * 0x178;
        *(ulong *)(lVar43 + 0xe8) =
             CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar43 + 0xe8) >> 0x20),
                      fVar65 + (float)*(undefined8 *)(lVar43 + 0xe8));
        *(float *)(lVar43 + 0xf0) = fVar69 + *(float *)(lVar43 + 0xf0);
      }
      else {
LAB_02497490:
        if (uVar42 <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        puVar9 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
        lVar28 = lVar58 + lVar38 * 0x178;
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
        if (*(uint *)(lVar58 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar28 = lVar58 + lVar38 * 0x178;
        uVar75 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
        *(undefined8 *)(lVar28 + 0x98) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
        *(undefined4 *)(lVar28 + 0xa0) = uVar75;
        if (*(uint *)(lVar58 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar28 = lVar58 + lVar38 * 0x178;
        uVar75 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
        *(undefined8 *)(lVar28 + 0xc0) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
        *(undefined4 *)(lVar28 + 200) = uVar75;
        if (*(uint *)(lVar58 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar28 = lVar58 + lVar38 * 0x178;
        uVar75 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar9 + 0xb8) + 1);
        *(undefined8 *)(lVar28 + 0xe8) = **(undefined8 **)(*(long *)puVar9 + 0xb8);
        *(undefined4 *)(lVar28 + 0xf0) = uVar75;
        if (*(uint *)(lVar58 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        *(undefined1 *)(lVar43 + 0x194) = 0;
      }
      if (iVar16 != 0) goto LAB_02497598;
LAB_02497668:
      pcVar31 = *(code **)(*unaff_x19 + 0x8d8);
LAB_02497674:
      (*pcVar31)();
    }
LAB_02497688:
    if ((*in_stack_00000150 == 0) || (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar43 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar43 = lVar43 + lVar38 * 0x178;
    uVar19 = *(undefined8 *)(lVar43 + 0x11c);
    *(undefined8 *)(lVar43 + 0x11c) =
         CONCAT44(fVar71 + (float)((ulong)uVar19 >> 0x20),fVar65 + (float)uVar19);
    *(float *)(lVar43 + 0x124) = fVar69 + *(float *)(lVar43 + 0x124);
    if ((*in_stack_00000150 == 0) || (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar43 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar43 = lVar43 + lVar38 * 0x178;
    *(ulong *)(lVar43 + 0x110) =
         CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar43 + 0x110) >> 0x20),
                  fVar65 + (float)*(undefined8 *)(lVar43 + 0x110));
    *(float *)(lVar43 + 0x118) = fVar69 + *(float *)(lVar43 + 0x118);
    if ((*in_stack_00000150 == 0) || (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar43 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar43 = lVar43 + lVar38 * 0x178;
    *(ulong *)(lVar43 + 0x128) =
         CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar43 + 0x128) >> 0x20),
                  fVar65 + (float)*(undefined8 *)(lVar43 + 0x128));
    *(float *)(lVar43 + 0x130) = fVar69 + *(float *)(lVar43 + 0x130);
    if ((*in_stack_00000150 == 0) || (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar43 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar43 = lVar43 + lVar38 * 0x178;
    *(float *)(lVar43 + 0x134) = fVar65 + *(float *)(lVar43 + 0x134);
    *(ulong *)(lVar43 + 0x138) =
         CONCAT44(fVar69 + (float)((ulong)*(undefined8 *)(lVar43 + 0x138) >> 0x20),
                  fVar71 + (float)*(undefined8 *)(lVar43 + 0x138));
    lVar43 = *in_stack_00000150;
    if ((lVar43 == 0) || (lVar28 = *(long *)(lVar43 + 0x38), lVar28 == 0)) goto LAB_0249920c;
    uVar42 = *(uint *)(lVar28 + 0x18);
    if (uVar42 <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar37 = lVar28 + lVar38 * 0x178;
    uVar60 = CONCAT44(fVar65 + (float)((ulong)*(undefined8 *)(lVar37 + 0x140) >> 0x20),
                      fVar65 + (float)*(undefined8 *)(lVar37 + 0x140));
    fVar49 = fVar71 + *(float *)(lVar37 + 0x150);
    uVar61 = (ulong)(uint)fVar49;
    uVar63 = CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar37 + 0x148) >> 0x20),
                      fVar71 + (float)*(undefined8 *)(lVar37 + 0x148));
    *(ulong *)(lVar37 + 0x140) = uVar60;
    *(ulong *)(lVar37 + 0x148) = uVar63;
    *(float *)(lVar37 + 0x150) = fVar49;
    if (uVar32 == uVar62) {
      uVar62 = *in_stack_00000148 - 1;
      if (uVar14 == uVar62) goto LAB_0249788c;
    }
    else {
      lVar43 = *(long *)(lVar43 + 0x50);
      if (lVar43 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar43 + 0x18) <= uVar62)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar37 = (long)(int)uVar62;
      lVar39 = lVar43 + lVar37 * 0x5c;
      uVar63 = (ulong)(uint)*(float *)(lVar39 + 0x58);
      fVar49 = fVar71 + *(float *)(lVar39 + 0x54);
      uVar60 = (ulong)(uint)fVar49;
      fVar50 = fVar65 + *(float *)(lVar39 + 0x58);
      uVar61 = (ulong)(uint)fVar50;
      *(ulong *)(lVar39 + 0x4c) =
           CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar39 + 0x4c) >> 0x20),
                    fVar71 + (float)*(undefined8 *)(lVar39 + 0x4c));
      *(float *)(lVar39 + 0x54) = fVar49;
      *(float *)(lVar39 + 0x58) = fVar50;
      if (uVar42 <= *(uint *)(lVar39 + 0x34))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      uVar75 = *(undefined4 *)(lVar28 + (long)(int)*(uint *)(lVar39 + 0x34) * 0x178 + 0x11c);
      lVar43 = lVar43 + lVar37 * 0x5c;
      *(float *)(lVar43 + 0x70) = fVar49;
      *(undefined4 *)(lVar43 + 0x6c) = uVar75;
      lVar43 = *in_stack_00000150;
      if ((lVar43 == 0) || (lVar28 = *(long *)(lVar43 + 0x50), lVar28 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar28 + 0x18) <= uVar62)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar43 = *(long *)(lVar43 + 0x38);
      if (lVar43 == 0) goto LAB_0249920c;
      uVar62 = *(uint *)(lVar28 + lVar37 * 0x5c + 0x40);
      if (*(uint *)(lVar43 + 0x18) <= uVar62)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = lVar28 + lVar37 * 0x5c;
      *(undefined4 *)(lVar28 + 0x74) = *(undefined4 *)(lVar43 + (long)(int)uVar62 * 0x178 + 0x128);
      *(undefined4 *)(lVar28 + 0x78) = *(undefined4 *)(lVar28 + 0x4c);
      uVar62 = *in_stack_00000148 - 1;
LAB_0249788c:
      if (uVar14 == uVar62) {
        lVar43 = *in_stack_00000150;
        if ((lVar43 == 0) || (lVar28 = *(long *)(lVar43 + 0x50), lVar28 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar28 + 0x18) <= uVar32)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar37 = lVar28 + lVar34 * 0x5c;
        uVar63 = (ulong)(uint)*(float *)(lVar37 + 0x58);
        uVar60 = CONCAT44(fVar71 + (float)((ulong)*(undefined8 *)(lVar37 + 0x4c) >> 0x20),
                          fVar71 + (float)*(undefined8 *)(lVar37 + 0x4c));
        fVar49 = fVar71 + *(float *)(lVar37 + 0x54);
        fVar65 = fVar65 + *(float *)(lVar37 + 0x58);
        uVar61 = (ulong)(uint)fVar65;
        *(ulong *)(lVar37 + 0x4c) = uVar60;
        *(float *)(lVar37 + 0x54) = fVar49;
        *(float *)(lVar37 + 0x58) = fVar65;
        lVar43 = *(long *)(lVar43 + 0x38);
        if (lVar43 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar43 + 0x18) <= *(uint *)(lVar37 + 0x34))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar75 = *(undefined4 *)(lVar43 + (long)(int)*(uint *)(lVar37 + 0x34) * 0x178 + 0x11c);
        lVar28 = lVar28 + lVar34 * 0x5c;
        *(float *)(lVar28 + 0x70) = fVar49;
        *(undefined4 *)(lVar28 + 0x6c) = uVar75;
        lVar43 = *in_stack_00000150;
        if ((lVar43 == 0) || (lVar28 = *(long *)(lVar43 + 0x50), lVar28 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar28 + 0x18) <= uVar32)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar43 = *(long *)(lVar43 + 0x38);
        if (lVar43 == 0) goto LAB_0249920c;
        uVar62 = *(uint *)(lVar28 + lVar34 * 0x5c + 0x40);
        if (*(uint *)(lVar43 + 0x18) <= uVar62)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar28 = lVar28 + lVar34 * 0x5c;
        *(undefined4 *)(lVar28 + 0x74) = *(undefined4 *)(lVar43 + (long)(int)uVar62 * 0x178 + 0x128)
        ;
        *(undefined4 *)(lVar28 + 0x78) = *(undefined4 *)(lVar28 + 0x4c);
      }
    }
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar21 = FUN_016f9468(uVar40,0);
    if (((((uVar21 & 1) == 0) && (1 < uVar40 - 0x2010)) && (uVar40 != 0xad)) && (uVar40 != 0x2d)) {
      if (bVar7) {
        if (((uVar35 != 1) && ((int)uVar14 < (int)(*(uint *)(lVar58 + 0x18) - 1))) &&
           (((int)uVar14 < (int)*in_stack_00000148 && ((uVar40 == 0x2019 || (uVar40 == 0x27)))))) {
          if (*(uint *)(lVar58 + 0x18) <= uVar35 - 2)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar4 = *(undefined2 *)(lVar58 + lVar29 + -0x438);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar21 = FUN_016f9468(uVar4,0);
          if ((uVar21 & 1) != 0) {
            if (*(uint *)(lVar58 + 0x18) <= uVar35)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            uVar4 = *(undefined2 *)(lVar58 + lVar29 + -0x148);
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar21 = FUN_016f9468(uVar4,0);
            if ((uVar21 & 1) != 0) goto LAB_02497aa4;
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
        uVar21 = FUN_016f93a0(uVar40,0);
        if ((uVar21 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar21 = FUN_016f68bc(uVar40,0);
          if (((uVar40 != 0x200b) && ((uVar21 & 1) == 0)) && (*in_stack_00000148 != 1))
          goto LAB_024985a0;
        }
      }
      if (uVar14 == *in_stack_00000148 - 1) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar21 = FUN_016f9468(uVar40,0);
        iVar16 = iVar46;
        if ((uVar21 & 1) == 0) goto LAB_02497de0;
      }
      else {
LAB_02497de0:
        iVar16 = uVar35 - 2;
      }
      lVar43 = *in_stack_00000150;
      if (lVar43 == 0) goto LAB_0249920c;
      lVar28 = *(long *)(lVar43 + 0x40);
      if (lVar28 == 0) goto LAB_0249920c;
      uVar62 = *(uint *)(lVar43 + 0x24);
      iVar17 = *(int *)(lVar28 + 0x18);
      if (iVar17 < (int)(uVar62 + 1)) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147b84((long *)(lVar43 + 0x40),iVar17 + 1,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
        lVar43 = *in_stack_00000150;
        if (lVar43 == 0) goto LAB_0249920c;
      }
      lVar28 = *(long *)(lVar43 + 0x40);
      if (lVar28 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar28 + 0x18) <= uVar62)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar28 = lVar28 + (long)(int)uVar62 * 0x18;
      *(uint *)(lVar28 + 0x28) = uVar18;
      *(int *)(lVar28 + 0x2c) = iVar16;
      *(uint *)(lVar28 + 0x30) = (iVar16 - uVar18) + 1;
      *(long **)(lVar28 + 0x20) = unaff_x19;
      lVar28 = *(long *)(lVar43 + 0x50);
      *(int *)(lVar43 + 0x24) = *(int *)(lVar43 + 0x24) + 1;
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
        lVar43 = *in_stack_00000150;
        if (lVar43 == 0) goto LAB_0249920c;
        lVar28 = *(long *)(lVar43 + 0x40);
        if (lVar28 == 0) goto LAB_0249920c;
        uVar62 = *(uint *)(lVar43 + 0x24);
        iVar16 = *(int *)(lVar28 + 0x18);
        if (iVar16 < (int)(uVar62 + 1)) {
          if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01147b84((long *)(lVar43 + 0x40),iVar16 + 1,
                       *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
          lVar43 = *in_stack_00000150;
          if (lVar43 == 0) goto LAB_0249920c;
        }
        lVar28 = *(long *)(lVar43 + 0x40);
        if (lVar28 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar28 + 0x18) <= uVar62)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar28 = lVar28 + (long)(int)uVar62 * 0x18;
        *(uint *)(lVar28 + 0x28) = uVar18;
        *(uint *)(lVar28 + 0x2c) = uVar14;
        *(long **)(lVar28 + 0x20) = unaff_x19;
        *(uint *)(lVar28 + 0x30) = uVar35 - uVar18;
        lVar28 = *(long *)(lVar43 + 0x50);
        *(int *)(lVar43 + 0x24) = *(int *)(lVar43 + 0x24) + 1;
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
    if ((*in_stack_00000150 == 0) || (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 == 0))
    goto LAB_0249920c;
    uVar62 = *(uint *)(lVar43 + 0x18);
    if (uVar62 <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar43 + lVar38 * 0x178 + 400) >> 2 & 1) == 0) {
      if (bVar11) {
LAB_02497adc:
        if (uVar62 <= uVar35 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar34 = *unaff_x19;
        uVar62 = *(uint *)(lVar43 + lVar29 + -0x330);
        uVar75 = *(undefined4 *)(lVar43 + lVar29 + -0x2f8);
LAB_0249805c:
        pcVar31 = *(code **)(lVar34 + 0x908);
LAB_02498064:
        uVar63 = (ulong)uVar62;
        uVar60 = (ulong)(uint)fStack0000000000000050;
        uVar61 = (ulong)(uint)fStack0000000000000054;
        (*pcVar31)(fStack0000000000000058,uVar60,uVar61,uVar63,fStack00000000000000d0,0,
                   _bStack000000000000005c,uVar75);
        puVar9 = System_Threading_Mutex_TypeInfo;
        lVar43 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar43 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar43 = *(long *)puVar9;
        }
LAB_024980b4:
        bVar11 = false;
        fVar47 = 0.0;
        fStack00000000000000d0 = *(float *)(*(long *)(lVar43 + 0xb8) + 0x15a8);
        fStack00000000000000cc = 0.0;
      }
      else {
LAB_02497fc4:
        bVar11 = false;
      }
    }
    else {
      lVar43 = lVar43 + lVar38 * 0x178;
      iVar16 = *(int *)(lVar43 + 0x68);
      *(int *)(lVar43 + 0x16c) = iVar15;
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
      uVar21 = FUN_016f68bc(uVar40,0);
      if ((uVar40 != 0x200b) && ((uVar21 & 1) == 0)) {
        lVar43 = *in_stack_00000150;
        if ((lVar43 == 0) || (lVar34 = *(long *)(lVar43 + 0x38), lVar34 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar34 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar49 = *(float *)(lVar34 + lVar38 * 0x178 + 0x160);
        if (fVar47 <= fVar49) {
          fVar47 = fVar49;
        }
        if (fStack00000000000000cc <= ABS(fVar68)) {
          fStack00000000000000cc = ABS(fVar68);
        }
        if ((float)iVar16 != fStack000000000000004c) {
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar43 = *in_stack_00000150;
            if (lVar43 == 0) goto LAB_0249920c;
            lVar34 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          else {
            lVar34 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          fStack00000000000000d0 = *(float *)(lVar34 + 0x15a8);
        }
        lVar43 = *(long *)(lVar43 + 0x38);
        if (lVar43 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar43 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (unaff_x19[0x1e] == 0) goto LAB_0249920c;
        fVar50 = *(float *)(lVar43 + lVar38 * 0x178 + 0x14c);
        fVar49 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
        fVar50 = fVar50 + fVar47 * fVar49;
        if (fVar50 <= fStack00000000000000d0) {
          fStack00000000000000d0 = fVar50;
        }
        uVar60 = (ulong)(uint)fStack00000000000000d0;
        fStack000000000000004c = (float)iVar16;
      }
      if (!bVar11) {
        bVar11 = false;
        if ((((uVar40 == 0xd) || ((uVar40 | 1) == 0xb)) || ((int)uVar5 < (int)uVar14)) ||
           ((bool)(bVar1 ^ 1))) goto LAB_024980d0;
        if (uVar14 == uVar5) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar21 = FUN_016fa418(uVar40,0);
          if ((uVar21 & 1) != 0) goto LAB_02497fc4;
        }
        if ((*in_stack_00000150 == 0) ||
           (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar43 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar43 = lVar43 + lVar38 * 0x178;
        _bStack000000000000005c = *(float *)(lVar43 + 0x160);
        fStack0000000000000058 = *(float *)(lVar43 + 0x11c);
        bVar11 = fVar47 != 0.0;
        fVar49 = _bStack000000000000005c;
        if (bVar11) {
          fVar49 = fVar47;
        }
        fVar47 = fVar49;
        uStack0000000000000060 = *(uint *)(lVar43 + 0x168);
        fStack0000000000000054 = 0.0;
        fVar49 = fVar68;
        if (bVar11) {
          fVar49 = fStack00000000000000cc;
        }
        uVar60 = (ulong)(uint)fVar49;
        fStack0000000000000050 = fStack00000000000000d0;
        fStack00000000000000cc = fVar49;
      }
      if (*in_stack_00000148 == 1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 != 0)) {
          if (uVar14 < *(uint *)(lVar43 + 0x18)) {
            lVar43 = lVar43 + lVar38 * 0x178;
            lVar34 = *unaff_x19;
            uVar62 = *(uint *)(lVar43 + 0x128);
            uVar75 = *(undefined4 *)(lVar43 + 0x160);
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
        uVar21 = FUN_016f68bc(uVar40,0);
        if ((*in_stack_00000150 != 0) &&
           (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 != 0)) {
          if (uVar40 == 0x200b || (uVar21 & 1) != 0) {
            lVar34 = lVar22;
            if (*(uint *)(lVar43 + 0x18) <= uVar5)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          else {
            lVar34 = lVar38;
            if (*(uint *)(lVar43 + 0x18) <= uVar14)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          lVar43 = lVar43 + lVar34 * 0x178;
          uVar62 = *(uint *)(lVar43 + 0x128);
          uVar75 = *(undefined4 *)(lVar43 + 0x160);
          pcVar31 = *(code **)(*unaff_x19 + 0x908);
          goto LAB_02498064;
        }
        goto LAB_0249920c;
      }
      if (!bVar1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 != 0)) {
          uVar62 = *(uint *)(lVar43 + 0x18);
          goto LAB_02497adc;
        }
        goto LAB_0249920c;
      }
      if ((int)uVar14 < (int)(*in_stack_00000148 - 1)) {
        if ((*in_stack_00000150 == 0) ||
           (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar43 + 0x18) <= uVar35)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar21 = FUN_024a9e4c(uStack0000000000000060,*(undefined4 *)(lVar43 + lVar29),0);
        if ((uVar21 & 1) == 0) {
          if ((*in_stack_00000150 != 0) &&
             (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 != 0)) {
            if (uVar14 < *(uint *)(lVar43 + 0x18)) {
              lVar43 = lVar43 + lVar38 * 0x178;
              uVar63 = (ulong)*(uint *)(lVar43 + 0x128);
              uVar61 = (ulong)(uint)fStack0000000000000054;
              uVar60 = (ulong)(uint)fStack0000000000000050;
              (**(code **)(*unaff_x19 + 0x908))
                        (fStack0000000000000058,uVar60,uVar61,uVar63,fStack00000000000000d0,0,
                         _bStack000000000000005c,*(undefined4 *)(lVar43 + 0x160));
              puVar9 = System_Threading_Mutex_TypeInfo;
              lVar43 = *(long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(lVar43 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar43 = *(long *)puVar9;
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
    if ((*in_stack_00000150 == 0) || (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 == 0))
    goto LAB_0249920c;
    if (*(uint *)(lVar43 + 0x18) <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if (lVar36 == 0) goto LAB_0249920c;
    uVar62 = *(uint *)(lVar43 + lVar38 * 0x178 + 400);
    fVar49 = (float)FUN_026fd1f0(lVar36 + 0x50,0);
    if ((uVar62 >> 6 & 1) == 0) {
      if (bVar12) {
        if ((*in_stack_00000150 == 0) ||
           (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar43 + 0x18) <= uVar35 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar62 = *(uint *)(lVar43 + lVar29 + -0x330);
        pcVar31 = *(code **)(*unaff_x19 + 0x908);
        fVar71 = fStack0000000000000088 * fVar49 + *(float *)(lVar43 + lVar29 + -0x30c);
LAB_02498648:
        uVar63 = (ulong)uVar62;
        uVar60 = (ulong)(uint)in_stack_00000078._4_4_;
        uVar61 = (ulong)in_stack_00000068._4_4_;
        (*pcVar31)(fStack0000000000000080,uVar60,uVar61,uVar63,fVar71,0,fStack0000000000000088,
                   fStack0000000000000088);
      }
LAB_0249867c:
      bVar12 = false;
    }
    else {
      lVar43 = *in_stack_00000150;
      if ((lVar43 == 0) || (lVar34 = *(long *)(lVar43 + 0x38), lVar34 == 0)) goto LAB_0249920c;
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
         (bVar12 || !bVar1)) {
LAB_02498228:
        if (!bVar12) goto LAB_0249867c;
      }
      else {
        if (uVar14 == uVar5) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar21 = FUN_016fa418(uVar40,0);
          if ((uVar21 & 1) != 0) goto LAB_02498228;
          lVar43 = *in_stack_00000150;
          if (lVar43 == 0) goto LAB_0249920c;
        }
        lVar43 = *(long *)(lVar43 + 0x38);
        if (lVar43 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar43 + 0x18) <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar43 = lVar43 + lVar38 * 0x178;
        fStack0000000000000034 = *(float *)(lVar43 + 0x60);
        fStack0000000000000088 = *(float *)(lVar43 + 0x160);
        fStack0000000000000030 = *(float *)(lVar43 + 0x14c);
        uVar60 = (ulong)(uint)fStack0000000000000030;
        fStack0000000000000080 = *(float *)(lVar43 + 0x11c);
        in_stack_00000078._4_4_ = fVar49 * fStack0000000000000088 + fStack0000000000000030;
        in_stack_00000068._4_4_ = 0;
      }
      uVar62 = *in_stack_00000148;
      if (uVar62 == 1) {
LAB_024983ac:
        if ((*in_stack_00000150 != 0) &&
           (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 != 0)) {
          if (uVar14 < *(uint *)(lVar43 + 0x18)) {
            lVar43 = lVar43 + lVar38 * 0x178;
            lVar22 = *unaff_x19;
            uVar62 = *(uint *)(lVar43 + 0x128);
            fVar71 = *(float *)(lVar43 + 0x14c);
LAB_024983d8:
            pcVar31 = *(code **)(lVar22 + 0x908);
FUN_02498644:
            fVar71 = fVar49 * fStack0000000000000088 + fVar71;
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
        uVar21 = FUN_016f68bc(uVar40,0);
        if ((*in_stack_00000150 != 0) &&
           (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 != 0)) {
          uVar62 = *(uint *)(lVar43 + 0x18);
          if (uVar40 == 0x200b || (uVar21 & 1) != 0) {
            if (uVar62 <= uVar5)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          else {
LAB_02498620:
            lVar22 = lVar38;
            if (uVar62 <= uVar14)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
LAB_02498628:
          lVar43 = lVar43 + lVar22 * 0x178;
          fVar71 = *(float *)(lVar43 + 0x14c);
          uVar62 = *(uint *)(lVar43 + 0x128);
          pcVar31 = *(code **)(*unaff_x19 + 0x908);
          goto FUN_02498644;
        }
        goto LAB_0249920c;
      }
      if ((int)uVar14 < (int)uVar62) {
        lVar43 = *in_stack_00000150;
        if ((lVar43 != 0) && (lVar34 = *(long *)(lVar43 + 0x38), lVar34 != 0)) {
          if (uVar35 < *(uint *)(lVar34 + 0x18)) {
            if (*(float *)(lVar34 + lVar29 + -0x108) == fStack0000000000000034) {
              fVar50 = *(float *)(lVar34 + lVar29 + -0x1c);
              if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar60 = (ulong)(uint)fStack0000000000000030;
              uVar21 = FUN_024aa280(fVar71 + fVar50,uVar60,0);
              if ((uVar21 & 1) != 0) {
                uVar62 = *in_stack_00000148;
                goto 
                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractor_OnSelectEntering
                ;
              }
              lVar43 = *in_stack_00000150;
              if (lVar43 == 0) goto LAB_0249920c;
            }
            lVar43 = *(long *)(lVar43 + 0x38);
            if (lVar43 != 0) {
              uVar62 = *(uint *)(lVar43 + 0x18);
              if ((int)uVar14 <= (int)uVar5) goto LAB_02498620;
              if (uVar5 < uVar62) goto LAB_02498628;
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
      if ((int)uVar14 < (int)uVar62) {
        iVar16 = FUN_02681c0c(lVar36,0);
        if (*(uint *)(lVar58 + 0x18) <= uVar35)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar43 = *(long *)(lVar58 + lVar29 + -0x130);
        if (lVar43 == 0) goto LAB_0249920c;
        iVar17 = FUN_02681c0c(lVar43,0);
        if (iVar16 != iVar17) goto LAB_024983ac;
      }
      if (!bVar1) {
        if ((*in_stack_00000150 != 0) &&
           (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 != 0)) {
          if (uVar35 - 2 < *(uint *)(lVar43 + 0x18)) {
            lVar22 = *unaff_x19;
            uVar62 = *(uint *)(lVar43 + lVar29 + -0x330);
            fVar71 = *(float *)(lVar43 + lVar29 + -0x30c);
            goto LAB_024983d8;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      bVar12 = true;
    }
    if ((*in_stack_00000150 == 0) || (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 == 0))
    goto LAB_0249920c;
    uVar62 = (uint)*(undefined8 *)(lVar43 + 0x18);
    if (uVar62 <= uVar14)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar43 + lVar38 * 0x178 + 0x191) >> 1 & 1) == 0) {
      if (bVar8) {
        uVar61 = (ulong)uStack00000000000000a0;
        uVar63 = (ulong)(uint)fStack00000000000000a4;
        uVar60 = (ulong)(uint)fStack00000000000000b4;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar60,uVar61,uVar63,fStack00000000000000a8,uVar61);
      }
LAB_024986e8:
      bVar8 = false;
    }
    else {
      if ((((int)unaff_x19[100] < (int)uVar14) || ((int)unaff_x19[0x65] < (int)uVar32)) ||
         (((int)unaff_x19[0x5b] == 5 &&
          (*(int *)(lVar43 + lVar38 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar8) {
        if ((((uVar40 == 0xd) || ((uVar40 | 1) == 0xb)) || ((int)uVar5 < (int)uVar14)) || (!bVar1))
        goto LAB_024986e8;
        if (uVar14 == uVar5) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar21 = FUN_016fa418(uVar40,0);
          if ((uVar21 & 1) != 0) goto LAB_024986e8;
        }
        puVar9 = System_Threading_Mutex_TypeInfo;
        lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar22 = *(long *)puVar9;
        }
        if ((*in_stack_00000150 == 0) ||
           (lVar43 = *(long *)(*in_stack_00000150 + 0x38), lVar43 == 0)) goto LAB_0249920c;
        uVar62 = (uint)*(undefined8 *)(lVar43 + 0x18);
        if (uVar62 <= uVar14)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar22 = *(long *)(lVar22 + 0xb8);
        lVar34 = lVar43 + lVar38 * 0x178;
        in_stack_00001798 = *(undefined8 *)(lVar34 + 0x184);
        in_stack_00001790 = *(undefined8 *)(lVar34 + 0x17c);
        fStack00000000000000b0 = *(float *)(lVar22 + 0x1598);
        in_stack_000017a0 = *(float *)(lVar34 + 0x18c);
        fStack00000000000000b4 = *(float *)(lVar22 + 0x159c);
        fStack00000000000000a4 = *(float *)(lVar22 + 0x15a0);
        fStack00000000000000a8 = *(float *)(lVar22 + 0x15a4);
        uStack00000000000000a0 = 0;
      }
      if (uVar62 <= uVar14)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar43 = lVar43 + lVar38 * 0x178;
      fVar51 = *(float *)(lVar43 + 0x188);
      uVar20 = *(undefined8 *)(lVar43 + 0x17c);
      fVar64 = *(float *)(lVar43 + 0x184);
      uVar19 = *(undefined8 *)(lVar43 + 0x184);
      fVar52 = *(float *)(lVar43 + 0x18c);
      fVar71 = *(float *)(lVar43 + 0x11c);
      fVar50 = *(float *)(lVar43 + 0x128);
      fVar72 = *(float *)(lVar43 + 0x148);
      fVar49 = *(float *)(lVar43 + 0x150);
      in_stack_00000158 = uVar20;
      fStack0000000000000160 = fVar64;
      fStack0000000000000164 = fVar51;
      in_stack_00000168 = fVar52;
      in_stack_00000170 = in_stack_00001790;
      in_stack_00000178 = in_stack_00001798;
      in_stack_00000180 = in_stack_000017a0;
      uVar21 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
      lVar43 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
      if ((uVar21 & 1) == 0) {
        if (*(int *)(lVar43 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar43);
        }
        fVar71 = fVar71 - (float)((ulong)in_stack_00001790 >> 0x20);
        if (fVar71 <= fStack00000000000000b0) {
          fStack00000000000000b0 = fVar71;
        }
        fVar49 = fVar49 - in_stack_000017a0;
        uVar60 = (ulong)(uint)fVar49;
        fVar50 = fVar50 + (float)in_stack_00001798;
        uVar61 = (ulong)(uint)fVar50;
        if (fVar49 <= fStack00000000000000b4) {
          fStack00000000000000b4 = fVar49;
        }
        fVar72 = fVar72 + (float)((ulong)in_stack_00001798 >> 0x20);
        uVar63 = (ulong)(uint)fVar72;
        if (fStack00000000000000a4 <= fVar50) {
          fStack00000000000000a4 = fVar50;
        }
        if (fStack00000000000000a8 <= fVar72) {
          fStack00000000000000a8 = fVar72;
        }
      }
      else {
        if (*(int *)(lVar43 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar43);
        }
        fVar71 = (fVar71 + (fStack00000000000000a4 - (float)in_stack_00001798)) * 0.5;
        uVar63 = (ulong)(uint)fVar71;
        if (fVar49 <= fStack00000000000000b4) {
          fStack00000000000000b4 = fVar49;
        }
        uVar60 = (ulong)(uint)fStack00000000000000b4;
        uVar61 = (ulong)uStack00000000000000a0;
        if (fStack00000000000000a8 <= fVar72) {
          fStack00000000000000a8 = fVar72;
        }
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar60,uVar61,uVar63,fStack00000000000000a8,uVar61);
        fStack00000000000000b4 = fVar49 - fVar52;
        fStack00000000000000a4 = fVar50 + fVar64;
        uStack00000000000000a0 = 0;
        fStack00000000000000a8 = fVar72 + fVar51;
        fStack00000000000000b0 = fVar71;
        in_stack_00001790 = uVar20;
        in_stack_00001798 = uVar19;
        in_stack_000017a0 = fVar52;
      }
      if (((*in_stack_00000148 == 1) || (uVar14 == uVar6)) ||
         (((int)uVar5 <= (int)uVar14 || (!bVar1)))) {
        uVar61 = (ulong)uStack00000000000000a0;
        uVar63 = (ulong)(uint)fStack00000000000000a4;
        uVar60 = (ulong)(uint)fStack00000000000000b4;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar60,uVar61,uVar63,fStack00000000000000a8,uVar61);
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
    }
    uVar14 = *in_stack_00000148;
    iVar46 = iVar46 + 1;
    lVar29 = lVar29 + 0x178;
    bVar1 = (int)uVar35 < (int)uVar14;
    uVar62 = uVar32;
    uVar35 = uVar35 + 1;
  } while (bVar1);
  lVar58 = *in_stack_00000150;
  if (lVar58 != 0) {
    iVar15 = uVar32 + 1;
LAB_02498c58:
    puVar10 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    puVar9 = PTR_DAT_033ed410;
    *(uint *)(lVar58 + 0x18) = uVar14;
    lVar29 = unaff_x19[0xd3];
    *(int *)(lVar58 + 0x2c) = iVar15;
    iVar15 = iStack00000000000000ac;
    if ((int)uVar14 < 1) {
      iVar15 = 1;
    }
    if (iStack00000000000000ac == 0) {
      iVar15 = 1;
    }
    *(int *)(lVar58 + 0x1c) = (int)lVar29;
    *(int *)(lVar58 + 0x24) = iVar15;
    *(int *)(lVar58 + 0x30) = (int)unaff_x19[0x95] + 1;
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
    lVar58 = unaff_x19[0xde];
    if (lVar58 != 0) {
      (**(code **)(lVar58 + 0x18))
                (*(undefined8 *)(lVar58 + 0x40),*in_stack_00000150,*(undefined8 *)(lVar58 + 0x28));
    }
    if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
    iVar15 = FUN_02859dc4(unaff_x19[0xe4],0);
    if (iVar15 != 0x19) {
      lVar58 = unaff_x19[0xe4];
      if (lVar58 == 0) goto LAB_0249920c;
      uVar14 = FUN_02859dc4(lVar58,0);
      FUN_02859e00(lVar58,uVar14 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
      if ((*in_stack_00000150 == 0) || (lVar58 = *(long *)(*in_stack_00000150 + 0x60), lVar58 == 0))
      goto LAB_0249920c;
      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(int *)(lVar58 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      FUN_024e8000(lVar58 + 0x20,1,0);
    }
    if (unaff_x19[0x73] != 0) {
      UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
                (unaff_x19[0x73],0);
      if ((unaff_x19[0x6c] != 0) && (lVar58 = *(long *)(unaff_x19[0x6c] + 0x60), lVar58 != 0)) {
        if (*(int *)(lVar58 + 0x18) == 0) {
UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (unaff_x19[0x73] != 0) {
          FUN_0266b9c4(unaff_x19[0x73],*(undefined8 *)(lVar58 + 0x30),0);
          if ((unaff_x19[0x6c] != 0) && (lVar58 = *(long *)(unaff_x19[0x6c] + 0x60), lVar58 != 0)) {
            if (*(int *)(lVar58 + 0x18) == 0)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            if (unaff_x19[0x73] != 0) {
              FUN_0266bbc8(unaff_x19[0x73],*(undefined8 *)(lVar58 + 0x48),0);
              if ((unaff_x19[0x6c] != 0) &&
                 (lVar58 = *(long *)(unaff_x19[0x6c] + 0x60), lVar58 != 0)) {
                if (*(int *)(lVar58 + 0x18) == 0)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                if (unaff_x19[0x73] != 0) {
                  FUN_0266bc74(unaff_x19[0x73],*(undefined8 *)(lVar58 + 0x50),0);
                  if ((unaff_x19[0x6c] != 0) &&
                     (lVar58 = *(long *)(unaff_x19[0x6c] + 0x60), lVar58 != 0)) {
                    if (*(int *)(lVar58 + 0x18) == 0)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    if (unaff_x19[0x73] != 0) {
                      FUN_0266c1dc(unaff_x19[0x73],*(undefined8 *)(lVar58 + 0x58),0);
                      if (unaff_x19[0x73] != 0) {
                        FUN_0266ed90(unaff_x19[0x73],0);
                        if (unaff_x19[0xe3] != 0) {
                          FUN_02858f1c(unaff_x19[0xe3],unaff_x19[0x73],0);
                          if (unaff_x19[0xe3] != 0) {
                            uVar19 = FUN_02858bac(unaff_x19[0xe3],0);
                            if (unaff_x19[0xe3] != 0) {
                              uVar14 = FUN_02858a14(unaff_x19[0xe3],0);
                              lVar58 = *in_stack_00000150;
                              if (lVar58 != 0) {
                                lVar43 = 0;
                                lVar29 = 0;
                                do {
                                  uVar21 = lVar29 + 1;
                                  if ((long)*(int *)(lVar58 + 0x34) <= (long)uVar21)
                                  goto LAB_02496098;
                                  lVar58 = *(long *)(lVar58 + 0x60);
                                  if (lVar58 == 0) break;
                                  if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  if (*(uint *)(lVar58 + 0x18) <= uVar21)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  FUN_024e7ecc(lVar58 + lVar43 + 0x70,0);
                                  lVar58 = unaff_x19[0xe0];
                                  if (lVar58 == 0) break;
                                  if (*(uint *)(lVar58 + 0x18) <= uVar21)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  uVar20 = *(undefined8 *)(lVar58 + lVar29 * 8 + 0x28);
                                  if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  uVar24 = FUN_0268b4e0(uVar20,0,0);
                                  if ((uVar24 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
                                      if ((*in_stack_00000150 == 0) ||
                                         (lVar58 = *(long *)(*in_stack_00000150 + 0x60), lVar58 == 0
                                         )) break;
                                      if (*(int *)(*(long *)puVar9 + 0xe0) == 0) {
                                        thunk_FUN_00d32864();
                                      }
                                      if (*(uint *)(lVar58 + 0x18) <= uVar21)
                                      goto 
                                      UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                      ;
                                      FUN_024e8000(lVar58 + lVar43 + 0x70,1,0);
                                    }
                                    lVar58 = unaff_x19[0xe0];
                                    if (lVar58 == 0) break;
                                    if (*(uint *)(lVar58 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar58 = *(long *)(lVar58 + lVar29 * 8 + 0x28);
                                    if (lVar58 == 0) break;
                                    lVar58 = FUN_024f0144(lVar58,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar22 = *(long *)(*in_stack_00000150 + 0x60), lVar22 == 0))
                                    break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar58 == 0) break;
                                    FUN_0266b9c4(lVar58,*(undefined8 *)(lVar22 + lVar43 + 0x80),0);
                                    lVar58 = unaff_x19[0xe0];
                                    if (lVar58 == 0) break;
                                    if (*(uint *)(lVar58 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar58 = *(long *)(lVar58 + lVar29 * 8 + 0x28);
                                    if (lVar58 == 0) break;
                                    lVar58 = FUN_024f0144(lVar58,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar22 = *(long *)(*in_stack_00000150 + 0x60), lVar22 == 0))
                                    break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar58 == 0) break;
                                    FUN_0266bbc8(lVar58,*(undefined8 *)(lVar22 + lVar43 + 0x98),0);
                                    lVar58 = unaff_x19[0xe0];
                                    if (lVar58 == 0) break;
                                    if (*(uint *)(lVar58 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar58 = *(long *)(lVar58 + lVar29 * 8 + 0x28);
                                    if (lVar58 == 0) break;
                                    lVar58 = FUN_024f0144(lVar58,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar22 = *(long *)(*in_stack_00000150 + 0x60), lVar22 == 0))
                                    break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar58 == 0) break;
                                    FUN_0266bc74(lVar58,*(undefined8 *)(lVar22 + lVar43 + 0xa0),0);
                                    lVar58 = unaff_x19[0xe0];
                                    if (lVar58 == 0) break;
                                    if (*(uint *)(lVar58 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar58 = *(long *)(lVar58 + lVar29 * 8 + 0x28);
                                    if (lVar58 == 0) break;
                                    lVar58 = FUN_024f0144(lVar58,0);
                                    if ((*in_stack_00000150 == 0) ||
                                       (lVar22 = *(long *)(*in_stack_00000150 + 0x60), lVar22 == 0))
                                    break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar58 == 0) break;
                                    FUN_0266c1dc(lVar58,*(undefined8 *)(lVar22 + lVar43 + 0xa8),0);
                                    lVar58 = unaff_x19[0xe0];
                                    if (lVar58 == 0) break;
                                    if (*(uint *)(lVar58 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar58 = *(long *)(lVar58 + lVar29 * 8 + 0x28);
                                    if ((lVar58 == 0) ||
                                       (lVar58 = FUN_024f0144(lVar58,0), lVar58 == 0)) break;
                                    FUN_0266ed90(lVar58,0);
                                    lVar58 = unaff_x19[0xe0];
                                    if (lVar58 == 0) break;
                                    if (*(uint *)(lVar58 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar58 = *(long *)(lVar58 + lVar29 * 8 + 0x28);
                                    if (lVar58 == 0) break;
                                    lVar58 = FUN_02738ef4(lVar58,0);
                                    lVar22 = unaff_x19[0xe0];
                                    if (lVar22 == 0) break;
                                    if (*(uint *)(lVar22 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar22 = *(long *)(lVar22 + lVar29 * 8 + 0x28);
                                    if ((lVar22 == 0) ||
                                       (uVar20 = FUN_024f0144(lVar22,0), lVar58 == 0)) break;
                                    FUN_02858f1c(lVar58,uVar20,0);
                                    lVar58 = unaff_x19[0xe0];
                                    if (lVar58 == 0) break;
                                    if (*(uint *)(lVar58 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar58 = *(long *)(lVar58 + lVar29 * 8 + 0x28);
                                    if ((lVar58 == 0) ||
                                       (lVar58 = FUN_02738ef4(lVar58,0), lVar58 == 0)) break;
                                    FUN_02858b14(uVar19,uVar60,uVar61,uVar63,lVar58,0);
                                    lVar58 = unaff_x19[0xe0];
                                    if (lVar58 == 0) break;
                                    if (*(uint *)(lVar58 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar58 = *(long *)(lVar58 + lVar29 * 8 + 0x28);
                                    if ((lVar58 == 0) ||
                                       (lVar58 = FUN_02738ef4(lVar58,0), lVar58 == 0)) break;
                                    FUN_02858a50(lVar58,uVar14 & 1,0);
                                    lVar58 = unaff_x19[0xe0];
                                    if (lVar58 == 0) break;
                                    if (*(uint *)(lVar58 + 0x18) <= uVar21)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    plVar41 = *(long **)(lVar58 + lVar29 * 8 + 0x28);
                                    uVar18 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar41 == (long *)0x0) break;
                                    (**(code **)(*plVar41 + 0x2c8))
                                              (plVar41,uVar18 & 1,*(undefined8 *)(*plVar41 + 0x2d0))
                                    ;
                                  }
                                  lVar58 = *in_stack_00000150;
                                  lVar29 = lVar29 + 1;
                                  lVar43 = lVar43 + 0x50;
                                } while (lVar58 != 0);
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


