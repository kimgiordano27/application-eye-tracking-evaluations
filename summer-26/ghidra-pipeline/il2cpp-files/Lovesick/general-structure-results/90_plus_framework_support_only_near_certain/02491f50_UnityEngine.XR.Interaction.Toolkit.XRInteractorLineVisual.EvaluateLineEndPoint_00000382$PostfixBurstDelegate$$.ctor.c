/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual.EvaluateLineEndPoint_00000382$PostfixBurstDelegate$$.ctor
ENTRY_POINT: 02491f50
PROGRAM: Lovesick-libil2cpp.so
SCORE: 150
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_21;validity_or_gating_hits_21;weak_vector_component_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_3
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual_EvaluateLineEndPoint_00000382_PostfixBurstDelegate___ctor
               (long param_1)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  undefined2 uVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  double __x;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  int *piVar28;
  ulong uVar29;
  ulong uVar30;
  undefined8 uVar31;
  undefined1 uVar32;
  char cVar33;
  uint uVar34;
  undefined4 *puVar35;
  long lVar36;
  long lVar37;
  float *pfVar38;
  code *pcVar39;
  uint uVar40;
  float *pfVar41;
  uint uVar42;
  uint uVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long *unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  uint uVar48;
  uint uVar49;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 *puVar50;
  long lVar51;
  long *plVar52;
  undefined8 *unaff_x26;
  long *unaff_x28;
  int iVar53;
  long *unaff_x29;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  ulong uVar70;
  double dVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float unaff_s11;
  float fVar81;
  float fVar82;
  float fVar83;
  float unaff_s13;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  undefined4 uVar88;
  float fVar89;
  float fVar90;
  uint uStack0000000000000020;
  float fStack0000000000000030;
  float fStack0000000000000034;
  int iStack000000000000004c;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  float fStack000000000000005c;
  uint uStack000000000000006c;
  float fStack000000000000007c;
  float fStack0000000000000080;
  float fStack0000000000000084;
  undefined8 uStack0000000000000090;
  uint in_stack_000000a0;
  float fStack00000000000000a4;
  float fStack00000000000000a8;
  int iStack00000000000000ac;
  float fStack00000000000000b0;
  float fStack00000000000000b4;
  undefined8 in_stack_000000b8;
  undefined8 uStack00000000000000c0;
  float fStack00000000000000c8;
  float fStack00000000000000cc;
  float fStack00000000000000d0;
  float fStack00000000000000d4;
  float fStack00000000000000e8;
  float fStack00000000000000ec;
  float fStack00000000000000f4;
  float fStack0000000000000134;
  long *in_stack_00000138;
  undefined8 in_stack_00000158;
  float fStack0000000000000160;
  float fStack0000000000000164;
  float in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  float in_stack_00000180;
  double dVar91;
  undefined4 uVar92;
  undefined4 in_stack_00000bfc;
  undefined8 in_stack_00000c00;
  long in_stack_000016d8;
  uint in_stack_0000176c;
  uint uVar93;
  undefined8 in_stack_00001790;
  undefined8 in_stack_00001798;
  float in_stack_000017a0;
  undefined8 in_stack_000017a8;
  char in_stack_000017b4;
  float fVar94;
  uint in_stack_000017bc;
  
  puVar10 = 
  Method_UnityEngine_XR_Interaction_Toolkit_AR_ARBaseGestureInteractable_OnGestureStarted<TwistGesture>__
  ;
  puVar50 = *(undefined8 **)(unaff_x24 + 0xb70);
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    param_1 = *unaff_x20;
  }
  puVar35 = *(undefined4 **)(param_1 + 0xb8);
  dVar91 = 0.0;
  UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
            (*puVar35,puVar35[1],puVar35[2],puVar35[3],&stack0x00000880);
  uVar31 = *puVar50;
  unaff_x26[0x73] = unaff_x26[1];
  unaff_x26[0x72] = *unaff_x26;
                    /* try { // try from 02491fb0 to 02591fb7 has its CatchHandler @ 0249213c */
  FUN_013b7dec(in_stack_000000b8,&stack0x00000c10,uVar31);
  unaff_x19[0xaf] = 0;
                    /* try { // try from 02491fc0 to 02591fc7 has its CatchHandler @ 02492130 */
  FUN_013b7dec(unaff_x19 + 0xb0,0,*(undefined8 *)puVar10);
  puVar10 = 
  UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Theme_Primitives_Vector3AffordanceTheme_TypeInfo
  ;
  if (unaff_x19[0x1f] != 0) {
                    /* try { // try from 02491fd8 to 02591fdb has its CatchHandler @ 02492124 */
                    /* try { // try from 02491fdc to 02591feb has its CatchHandler @ 02492134 */
    *(uint *)(unaff_x19 + 0xbd) = (uint)*(byte *)(unaff_x19[0x1f] + 0x1b8);
    puVar11 = Method_System_Collections_Generic_Dictionary<SystemLanguage,_string>_Add__;
                    /* try { // try from 02491ff4 to 02592013 has its CatchHandler @ 02492170 */
    FUN_013b7dec(unaff_x19 + 0xb9,&stack0x00000bf8,*(undefined8 *)puVar10);
    FUN_013b7d38(unaff_x19 + 0xbe,*(undefined8 *)puVar11);
    *(undefined1 *)((long)unaff_x19 + 0x46c) = 0;
    *(undefined4 *)(unaff_x19 + 0x9a) = 0;
    *(undefined4 *)(unaff_x19 + 0x57) = 0xc6fffe00;
    if (unaff_x19[0x1f] != 0) {
      fVar54 = (float)FUN_026fd130(unaff_x19[0x1f] + 0x50,0);
      if (*in_stack_00000138 != 0) {
        fVar55 = (float)FUN_026fd140(*in_stack_00000138 + 0x50,0);
        if (*in_stack_00000138 != 0) {
          fVar56 = (float)FUN_026fd180(*in_stack_00000138 + 0x50,0);
          *(undefined8 *)((long)unaff_x19 + 0x2a4) = 0;
          *(undefined4 *)(unaff_x19 + 199) = 0;
          unaff_x19[0x80] = 0;
          uVar92 = 0;
          FUN_013b7dec(unaff_x19 + 0x81,&stack0x00000bf8,*unaff_x23);
          *(undefined1 *)(unaff_x19 + 0x85) = 0;
          *(undefined4 *)((long)unaff_x19 + 0x48c) = 0;
          *(undefined4 *)(unaff_x19 + 0x92) = *(undefined4 *)((long)unaff_x19 + 0x31c);
          *(undefined8 *)((long)unaff_x19 + 0x494) = 0;
          *(undefined4 *)((long)unaff_x19 + 0x49c) = 0;
          lVar22 = *unaff_x29;
          if (*(int *)(lVar22 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar22 = *unaff_x29;
          }
          lVar23 = unaff_x19[0x6c];
          uVar31 = *(undefined8 *)(*(long *)(lVar22 + 0xb8) + 0x15a8);
          unaff_x19[0x94] = 0;
          unaff_x19[0x99] = 0;
          *(undefined1 *)((long)unaff_x19 + 700) = 0;
          lVar22 = NEON_rev64(uVar31,4);
          *(undefined4 *)((long)unaff_x19 + 0x2dc) = 0xffffffff;
          unaff_x19[0x98] = lVar22;
          *(undefined4 *)(unaff_x19 + 0x95) = 0;
          if ((lVar23 != 0) && (*(long *)(lVar23 + 0x58) != 0)) {
            uVar21 = (int)unaff_x19[0x66] - 1;
            uVar93 = *(int *)(*(long *)(lVar23 + 0x58) + 0x18) - 1;
            if ((int)uVar21 <= (int)uVar93) {
              uVar93 = uVar21;
            }
            uVar3 = 0;
            if (-1 < (int)uVar21) {
              uVar3 = uVar93;
            }
            FUN_024f1d04(lVar23,0);
            fVar57 = *(float *)(unaff_x19 + 0x67);
            *(undefined4 *)(unaff_x19 + 0x6b) = 0xbf800000;
            fVar86 = *(float *)(unaff_x19 + 0x6a);
            unaff_x19[0x69] = 0;
            lVar22 = *unaff_x29;
            fVar58 = *(float *)((long)unaff_x19 + 0x33c);
            fVar89 = *(float *)((long)unaff_x19 + 0x354);
            fVar59 = *(float *)((long)unaff_x19 + 0x344);
            if (*(int *)(lVar22 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar22 = *unaff_x29;
            }
            *(undefined8 *)((long)unaff_x19 + 0x4d4) =
                 *(undefined8 *)(*(long *)(lVar22 + 0xb8) + 0x1598);
            *(undefined8 *)((long)unaff_x19 + 0x4dc) =
                 *(undefined8 *)(*(long *)(lVar22 + 0xb8) + 0x15a0);
            puVar10 = 
            Method_MedleyBossMemoryGame_<StartPhaseCoroutine>d__41_System_Collections_IEnumerator_Reset__
            ;
            if (unaff_x19[0x6c] != 0) {
              FUN_024f1b84(unaff_x19[0x6c],0);
              *(undefined4 *)((long)unaff_x19 + 0x4b4) = 0;
              *(undefined4 *)((long)unaff_x19 + 0x4bc) = 0;
              *(undefined8 *)((long)unaff_x19 + 0x4ac) = 0;
              fVar94 = 0.0;
              *(undefined1 *)((long)unaff_x26 + 0xf34) = 0;
              *(undefined1 *)((long)unaff_x19 + 0x334) = 0;
              *(undefined1 *)((long)unaff_x19 + 0x2d2) = 0;
              FUN_024f102c(&stack0x000017a8,0xffffffff,0,0);
              FUN_024d69d4();
              FUN_024d69d4();
              FUN_024d69d4();
              FUN_024d69d4();
              FUN_024d69d4();
              FUN_013b7d38(*(long *)(*unaff_x29 + 0xb8) + 0x11f0,*(undefined8 *)puVar10);
              fVar73 = DAT_028aa3e4;
              fVar82 = DAT_028aa028;
              uVar93 = 0;
              lVar22 = unaff_x19[0x8e];
              if (lVar22 != 0) {
                puVar1 = (uint *)((long)unaff_x19 + 0x48c);
                uVar21 = unaff_w21 - 1;
                uVar27 = (ulong)(uint)fStack0000000000000054;
                fVar54 = fVar54 - (fVar55 - fVar56);
                lVar23 = (long)unaff_x19 + 0x42c;
                fVar55 = 0.0;
                if (fVar86 <= 0.0) {
                  fVar86 = 0.0;
                }
                if (fVar89 <= 0.0) {
                  fVar89 = 0.0;
                }
                plVar2 = unaff_x19 + 0x6c;
                fVar86 = fVar86 + _LAB_028aa024;
                uVar70 = (ulong)(uint)fVar86;
                fVar72 = fVar89 + _LAB_028aa024;
                fVar56 = unaff_s11 * DAT_028aa028 * unaff_s13;
                bVar8 = true;
                fStack0000000000000034 = 0.0;
                bVar12 = false;
                iVar20 = 0;
                bVar9 = 1;
                fStack00000000000000d4 = fVar86;
LAB_02492378:
                fVar87 = (float)uVar27;
                fVar62 = 1.0;
                if ((int)*(uint *)(lVar22 + 0x18) <= (int)uVar93) {
LAB_02495f1c:
                  fVar54 = (float)uVar70;
                  if (((char)unaff_x19[0x46] != '\0') &&
                     (fVar54 = DAT_02956ccc,
                     DAT_02956ccc <
                     *(float *)((long)unaff_x19 + 0x234) - *(float *)(unaff_x19 + 0x47))) {
                    fVar54 = *(float *)((long)unaff_x19 + 0x1dc);
                    fVar55 = *(float *)((long)unaff_x19 + 0x24c);
                    if ((fVar54 < fVar55) &&
                       (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                      if (*(float *)((long)unaff_x19 + 0x2cc) < *(float *)(unaff_x19 + 0x59) / 100.0
                         ) {
                        *(undefined4 *)((long)unaff_x19 + 0x2cc) = 0;
                      }
                      fVar56 = (*(float *)((long)unaff_x19 + 0x234) - fVar54) * 0.5;
                      if (fVar56 <= DAT_028aa298) {
                        fVar56 = DAT_028aa298;
                      }
                      *(float *)(unaff_x19 + 0x47) = fVar54;
                      fVar56 = (fVar54 + fVar56) * 20.0 + 0.5;
                      fVar54 = DAT_02958220;
                      if (fVar56 != INFINITY) {
                        fVar54 = (float)(int)fVar56 / 20.0;
                      }
                      if (fVar55 <= fVar54) {
                        fVar54 = fVar55;
                      }
LAB_02495fd8:
                      *(float *)((long)unaff_x19 + 0x1dc) = fVar54;
                      return;
                    }
                  }
                  *(undefined1 *)((long)unaff_x19 + 0x244) = 1;
                  if ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c)) {
                    uVar31 = FUN_0176eb1c((long)unaff_x19 + 0x23c,0);
                    uVar24 = FUN_017840ac((long)unaff_x19 + 0x1dc,0);
                    uVar31 = FUN_0160073c(*(undefined8 *)
                                           Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlah_s16__,
                                          uVar31,*(undefined8 *)
                                                  Method_UnityEngine_GameObject_GetComponents<Component>__
                                          ,uVar24,0);
                    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                      thunk_FUN_00d32864(*unaff_x28);
                    }
                    FUN_02660dac(uVar31,0);
                  }
                  if ((*puVar1 == 0) || ((*puVar1 == 1 && (in_stack_000017bc == 3)))) {
                    (**(code **)(*unaff_x19 + 0x948))();
                    goto LAB_02496098;
                  }
                  lVar22 = *unaff_x29;
                  if (*(int *)(lVar22 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar22 = *unaff_x29;
                  }
                  puVar10 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
                  lVar22 = **(long **)(lVar22 + 0xb8);
                  if (lVar22 == 0) goto LAB_0249920c;
                  if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0xd0))
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  iVar20 = *(int *)(lVar22 + (long)(int)*(uint *)(unaff_x19 + 0xd0) * 0x38 + 0x54)
                           << 2;
                  if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x60), lVar22 == 0))
                  goto LAB_0249920c;
                  if (*(int *)(*(long *)PTR_DAT_033ed410 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  if (*(int *)(lVar22 + 0x18) == 0)
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  FUN_024e7d94(lVar22 + 0x20,0,0);
                  if (DAT_03774d76 == '\0') {
                    thunk_FUN_00d48444(
                                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                      );
                    DAT_03774d76 = '\x01';
                  }
                  puVar11 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
                  iVar16 = (int)unaff_x19[0x4d];
                  fStack00000000000000c8 =
                       **(float **)
                         (*(long *)
                           Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                         + 0xb8);
                  uStack00000000000000c0 =
                       *(undefined8 *)
                        (*(float **)
                          (*(long *)
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          + 0xb8) + 1);
                  lVar22 = unaff_x19[0xe2];
                  uStack0000000000000090 = uStack00000000000000c0;
                  fVar55 = fStack00000000000000c8;
                  if (iVar16 < 0x401) {
                    if (iVar16 == 0x100) {
                      if (lVar22 == 0) goto LAB_0249920c;
                      if (*(uint *)(lVar22 + 0x18) < 2)
                      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                      uVar31 = *(undefined8 *)(lVar22 + 0x30);
                      if ((int)unaff_x19[0x5b] == 5) {
                        if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x58), lVar23 == 0))
                        goto LAB_0249920c;
                        if (*(uint *)(lVar23 + 0x18) <= uVar3)
                        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                        fVar54 = *(float *)(lVar23 + (long)(int)uVar3 * 0x14 + 0x28);
                      }
                      else {
                        fVar54 = *(float *)(unaff_x19 + 0x96);
                      }
                      fVar55 = fVar57 + 0.0 + *(float *)(lVar22 + 0x2c);
                      fVar54 = (0.0 - fVar54) - fVar58;
                    }
                    else if (iVar16 == 0x200) {
                      if (lVar22 == 0) goto LAB_0249920c;
                      if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0))
                      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                      fVar55 = (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
                      uVar31 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                                        (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20)) *
                                        0.5,((float)*(undefined8 *)(lVar22 + 0x24) +
                                            (float)*(undefined8 *)(lVar22 + 0x30)) * 0.5);
                      if ((int)unaff_x19[0x5b] == 5) {
                        if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x58), lVar22 == 0))
                        goto LAB_0249920c;
                        if (*(uint *)(lVar22 + 0x18) <= uVar3)
                        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                        lVar22 = lVar22 + (long)(int)uVar3 * 0x14;
                        fVar55 = fVar57 + 0.0 + fVar55;
                        fVar54 = ((fVar58 + *(float *)(lVar22 + 0x28) + *(float *)(lVar22 + 0x30)) -
                                 fVar59) * -0.5 + 0.0;
                      }
                      else {
                        fVar55 = fVar57 + 0.0 + fVar55;
                        fVar54 = ((fVar58 + *(float *)(unaff_x19 + 0x96) + fVar94) - fVar59) * -0.5
                                 + 0.0;
                      }
                    }
                    else {
                      if (iVar16 != 0x400) goto LAB_024965d0;
                      if (lVar22 == 0) goto LAB_0249920c;
                      if (*(int *)(lVar22 + 0x18) == 0)
                      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                      uVar31 = *(undefined8 *)(lVar22 + 0x24);
                      if ((int)unaff_x19[0x5b] == 5) {
                        if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x58), lVar23 == 0))
                        goto LAB_0249920c;
                        if (*(uint *)(lVar23 + 0x18) <= uVar3)
                        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                        fVar94 = *(float *)(lVar23 + (long)(int)uVar3 * 0x14 + 0x30);
                      }
                      fVar55 = fVar57 + 0.0 + *(float *)(lVar22 + 0x20);
                      fVar54 = fVar59 + (0.0 - fVar94);
                    }
                    uStack0000000000000090 =
                         CONCAT44((float)((ulong)uVar31 >> 0x20) + 0.0,(float)uVar31 + fVar54);
                  }
                  else if (iVar16 == 0x800) {
                    if (lVar22 == 0) goto LAB_0249920c;
                    if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0))
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    fVar54 = ((float)*(undefined8 *)(lVar22 + 0x24) +
                             (float)*(undefined8 *)(lVar22 + 0x30)) * 0.5;
                    fVar55 = fVar57 + 0.0 +
                             (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
                    uStack0000000000000090 =
                         CONCAT44(((float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                                  (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20)) * 0.5 +
                                  0.0,fVar54 + 0.0);
                  }
                  else {
                    if (iVar16 == 0x1000) {
                      if (lVar22 == 0) goto LAB_0249920c;
                      if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0))
                      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                      fVar54 = (float)*(undefined8 *)(lVar22 + 0x24) +
                               (float)*(undefined8 *)(lVar22 + 0x30);
                      fVar56 = (float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                               (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20);
                      fVar58 = fVar58 + *(float *)(unaff_x19 + 0x9c) + *(float *)(unaff_x19 + 0x9b);
                      fVar55 = fVar57 + 0.0 +
                               (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
                    }
                    else {
                      if (iVar16 != 0x2000) goto LAB_024965d0;
                      if (lVar22 == 0) goto LAB_0249920c;
                      if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0))
                      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                      fVar54 = (float)*(undefined8 *)(lVar22 + 0x24) +
                               (float)*(undefined8 *)(lVar22 + 0x30);
                      fVar56 = (float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                               (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20);
                      fVar58 = *(float *)((long)unaff_x19 + 0x4b4) - fVar58;
                      fVar55 = fVar57 + 0.0 +
                               (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
                    }
                    fVar54 = fVar54 * 0.5;
                    uStack0000000000000090 =
                         CONCAT44(fVar56 * 0.5 + 0.0,fVar54 + (0.0 - (fVar58 - fVar59) * 0.5));
                  }
LAB_024965d0:
                  if (unaff_x19[0xe4] != 0) {
                    uVar31 = FUN_0285a188(unaff_x19[0xe4],0);
                    if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                      thunk_FUN_00d32864(*(long *)puVar10);
                    }
                    uVar27 = FUN_0268b4e0(uVar31,0,0);
                    lVar22 = FUN_024c933c();
                    if (lVar22 != 0) {
                      FUN_026a125c(lVar22,0);
                      *(float *)(unaff_x19 + 0xe1) = fVar54;
                      if (unaff_x19[0xe4] != 0) {
                        iVar16 = FUN_02859798(unaff_x19[0xe4],0);
                        if (unaff_x19[0xe4] != 0) {
                          fVar56 = (float)FUN_028598f0(unaff_x19[0xe4],0);
                          __x = DAT_028aa048;
                          dVar71 = modf(DAT_028aa048,(double *)&stack0x00000880);
                          if (dVar71 == 0.5) {
                            fVar58 = (float)dVar91;
                            if (((long)dVar91 & 1U) != 0) {
                              fVar58 = (float)dVar91 + 1.0;
                            }
                          }
                          else {
                            fVar58 = 255.0;
                          }
                          dVar71 = modf(__x,(double *)&stack0x00000880);
                          if (dVar71 == 0.5) {
                            fVar57 = (float)dVar91;
                            if (((long)dVar91 & 1U) != 0) {
                              fVar57 = (float)dVar91 + 1.0;
                            }
                          }
                          else {
                            fVar57 = 255.0;
                          }
                          dVar71 = modf(__x,(double *)&stack0x00000880);
                          if (dVar71 == 0.5) {
                            fVar59 = (float)dVar91;
                            if (((long)dVar91 & 1U) != 0) {
                              fVar59 = (float)dVar91 + 1.0;
                            }
                          }
                          else {
                            fVar59 = 255.0;
                          }
                          dVar71 = modf(__x,(double *)&stack0x00000880);
                          if (dVar71 == 0.5) {
                            fVar86 = (float)dVar91;
                            if (((long)dVar91 & 1U) != 0) {
                              fVar86 = (float)dVar91 + 1.0;
                            }
                          }
                          else {
                            fVar86 = 255.0;
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
                          lVar22 = *(long *)puVar11;
                          if (*(int *)(lVar22 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                            lVar22 = *(long *)puVar11;
                          }
                          puVar35 = *(undefined4 **)(lVar22 + 0xb8);
                          uVar70 = (ulong)(uint)puVar35[1];
                          uVar25 = (ulong)(uint)puVar35[2];
                          uVar29 = (ulong)(uint)puVar35[3];
                          UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
                                    (*puVar35,uVar70,uVar25,uVar29,&stack0x00001790,0x4000ffff,0);
                          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          lVar22 = *plVar2;
                          if (lVar22 != 0) {
                            uVar93 = *puVar1;
                            if ((int)uVar93 < 1) {
                              iStack00000000000000ac = 0;
                              iVar20 = 0;
                              goto LAB_02498c58;
                            }
                            lVar22 = *(long *)(lVar22 + 0x38);
                            fVar54 = ABS(fVar54);
                            fVar89 = 1.0;
                            if ((uVar27 & 1) == 0) {
                              fVar89 = fVar54;
                            }
                            if (lVar22 != 0) {
                              bVar13 = false;
                              bVar8 = false;
                              bVar7 = false;
                              bVar12 = false;
                              uVar21 = (int)fVar58 & 0xffU | ((int)fVar57 & 0xffU) << 8 |
                                       ((int)fVar59 & 0xffU) << 0x10 | (int)fVar86 << 0x18;
                              fStack00000000000000d0 =
                                   *(float *)(*(long *)(*unaff_x29 + 0xb8) + 0x15a8);
                              fStack00000000000000cc = 0.0;
                              fStack0000000000000058 = fStack00000000000000b0;
                              fStack000000000000005c = 0.0;
                              fStack0000000000000034 = 0.0;
                              fVar57 = 0.0;
                              fStack0000000000000030 = 0.0;
                              uVar15 = 0;
                              iVar53 = 0;
                              lVar23 = 0x2e0;
                              fVar59 = 0.0;
                              fVar58 = 0.0;
                              iStack00000000000000ac = 0;
                              uStack0000000000000020 = 0;
                              iStack000000000000004c = 0;
                              fStack00000000000000a4 = fStack00000000000000b0;
                              fStack00000000000000a8 = fStack00000000000000b4;
                              fStack0000000000000050 = fStack00000000000000b4;
                              fStack0000000000000054 = (float)in_stack_000000a0;
                              fStack000000000000007c = fStack00000000000000b4;
                              fStack0000000000000080 = fStack00000000000000b0;
                              uStack000000000000006c = in_stack_000000a0;
                              uVar17 = 0;
                              uVar43 = 1;
                              goto LAB_02496a50;
                            }
                          }
                        }
                      }
                    }
                  }
                  goto LAB_0249920c;
                }
                if (*(uint *)(lVar22 + 0x18) <= uVar93)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                uVar15 = *(uint *)(lVar22 + (long)(int)uVar93 * 0xc + 0x20);
                if (uVar15 == 0) goto LAB_02495f1c;
                if (5 < iVar20) {
                  uVar31 = FUN_0176eb1c(&stack0x000017bc,0);
                  uVar24 = FUN_0176eb1c(&stack0x00001788,0);
                  uVar31 = FUN_0160073c(*(undefined8 *)
                                         UnityEngine_Rendering_Universal_DebugValidationMode_var,
                                        uVar31,*(undefined8 *)
                                                Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                                        ,uVar24,0);
                  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                    thunk_FUN_00d32864(*unaff_x28);
                  }
                  FUN_026610e4(uVar31,0);
                  in_stack_000017a8 = CONCAT44(3,*puVar1);
                }
                if ((*(char *)((long)unaff_x19 + 0x2fa) != '\0') && (uVar15 == 0x3c)) {
                  *(undefined1 *)((long)unaff_x19 + 0x429) = 1;
                  *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
                  uVar25 = FUN_024d0688();
                  if (((uVar25 & 1) == 0) ||
                     (uVar93 = in_stack_0000176c, *(int *)((long)unaff_x19 + 0x63c) != 0))
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_XRInteractorReticleVisual__get_prefabScalingFactor
                  ;
                  goto LAB_02492630;
                }
                if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x38), lVar22 == 0))
                goto LAB_0249920c;
                if (*(uint *)(lVar22 + 0x18) <= *puVar1)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                lVar22 = lVar22 + (long)(int)*puVar1 * 0x178;
                *(undefined4 *)((long)unaff_x19 + 0x63c) = *(undefined4 *)(lVar22 + 0x2c);
                *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar22 + 0x58);
                unaff_x19[0x1f] = *(long *)(lVar22 + 0x38);
UnityEngine_XR_Interaction_Toolkit_XRInteractorReticleVisual__get_prefabScalingFactor:
                if ((unaff_x19[0x6c] == 0) ||
                   (lVar22 = *(long *)(unaff_x19[0x6c] + 0x38), lVar22 == 0)) goto LAB_0249920c;
                uVar17 = *puVar1;
                if (*(uint *)(lVar22 + 0x18) <= uVar17)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                lVar51 = (long)(int)uVar17;
                cVar33 = *(char *)(lVar22 + lVar51 * 0x178 + 0x5c);
                *(undefined1 *)((long)unaff_x19 + 0x429) = 0;
                lVar37 = unaff_x19[0x23];
                if ((uint)in_stack_000017a8 == uVar17) {
                  uVar15 = (uint)((ulong)in_stack_000017a8 >> 0x20);
                  bVar7 = true;
                  *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
                  if (uVar15 == 0x2026) {
                    lVar26 = unaff_x19[0xc9];
                    lVar22 = lVar22 + lVar51 * 0x178;
                    *(undefined4 *)(lVar22 + 0x2c) = 0;
                    *(long *)(lVar22 + 0x30) = lVar26;
                    *(long *)(lVar22 + 0x38) = unaff_x19[0xca];
                    *(long *)(lVar22 + 0x50) = unaff_x19[0xcb];
                    *(int *)(lVar22 + 0x58) = (int)unaff_x19[0xcc];
                    *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                    in_stack_000017a8 = CONCAT44(3,uVar17 + 1);
                  }
                  else if (uVar15 == 3) {
                    if ((*in_stack_00000138 == 0) ||
                       (lVar26 = FUN_024b11ac(*in_stack_00000138,0), lVar26 == 0))
                    goto LAB_0249920c;
                    uVar92 = 3;
                    FUN_01299bc0(lVar26,&stack0x00000bf8,&stack0x00000880,
                                 *(undefined8 *)PTR_DAT_033ef3c8);
                    if (*(uint *)(lVar22 + 0x18) <= uVar17)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    bVar7 = true;
                    *(double *)(lVar22 + lVar51 * 0x178 + 0x30) = dVar91;
                    uVar17 = *(uint *)((long)unaff_x19 + 0x48c);
                    *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                  }
                }
                else {
                  bVar7 = false;
                }
                if (((int)uVar17 < *(int *)((long)unaff_x19 + 0x31c)) && (uVar15 != 3)) {
                  if ((*plVar2 != 0) && (lVar22 = *(long *)(*plVar2 + 0x38), lVar22 != 0)) {
                    if (uVar17 < *(uint *)(lVar22 + 0x18)) {
                      lVar22 = lVar22 + (long)(int)uVar17 * 0x178;
                      *(undefined1 *)(lVar22 + 0x194) = 0;
                      *(undefined2 *)(lVar22 + 0x20) = 0x200b;
                      *(undefined4 *)(lVar22 + 100) = 0;
                      *puVar1 = uVar17 + 1;
                      goto LAB_02492630;
                    }
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  }
                  goto LAB_0249920c;
                }
                iVar16 = *(int *)((long)unaff_x19 + 0x63c);
                fStack00000000000000f4 = fVar62;
                if (iVar16 == 0) {
                  uVar17 = *(uint *)((long)unaff_x19 + 0x254);
                  if ((uVar17 >> 4 & 1) == 0) {
                    if ((uVar17 >> 3 & 1) == 0) {
                      if ((uVar17 >> 5 & 1) != 0) {
                        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0
                           ) {
                          thunk_FUN_00d32864();
                        }
                        uVar25 = FUN_016f92d4(uVar15,0);
                        if ((uVar25 & 1) != 0) {
                          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) ==
                              0) {
                            thunk_FUN_00d32864();
                          }
                          uVar15 = FUN_016f95a8(uVar15,0);
                          uVar15 = uVar15 & 0xffff;
                          fStack00000000000000f4 = fVar73;
                        }
                      }
                    }
                    else {
                      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0)
                      {
                        thunk_FUN_00d32864();
                      }
                      uVar25 = FUN_016f9218(uVar15,0);
                      if ((uVar25 & 1) != 0) {
                        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0
                           ) {
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
                    uVar25 = FUN_016f92d4(uVar15,0);
                    fStack00000000000000f4 = 1.0;
                    if ((uVar25 & 1) != 0) {
                      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0)
                      {
                        thunk_FUN_00d32864();
                      }
                      uVar15 = FUN_016f95a8(uVar15,0);
LAB_02492a0c:
                      uVar15 = uVar15 & 0xffff;
                      fStack00000000000000f4 = 1.0;
                    }
                  }
                  iVar16 = *(int *)((long)unaff_x19 + 0x63c);
                  if (iVar16 == 0) goto LAB_02492a20;
LAB_0249265c:
                  if (iVar16 == 1) {
                    if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x38), lVar22 == 0))
                    goto LAB_0249920c;
                    if (*(uint *)(lVar22 + 0x18) <= *puVar1)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    lVar22 = lVar22 + (long)(int)*puVar1 * 0x178;
                    lVar51 = *(long *)(lVar22 + 0x40);
                    unaff_x19[0xd2] = lVar51;
                    *(undefined4 *)((long)unaff_x19 + 0x69c) = *(undefined4 *)(lVar22 + 0x48);
                    if ((lVar51 == 0) || (lVar22 = FUN_024ebfa0(lVar51,0), lVar22 == 0))
                    goto LAB_0249920c;
                    FUN_0132138c(lVar22,*(undefined4 *)((long)unaff_x19 + 0x69c),&stack0x00000880,
                                 *(undefined8 *)System_Func<KeyValuePair<int,_int>,_int>_TypeInfo);
                    if (dVar91 == 0.0) goto LAB_02492630;
                    if (uVar15 == 0x3c) {
                      uVar15 = *(int *)((long)unaff_x19 + 0x69c) + 0xe000;
                    }
                    else {
                      lVar22 = *unaff_x29;
                      if (*(int *)(lVar22 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                        lVar22 = *unaff_x29;
                      }
                      *(undefined4 *)((long)unaff_x19 + 0x1b4) =
                           *(undefined4 *)(*(long *)(lVar22 + 0xb8) + 0x68);
                    }
                    if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
                    fVar55 = *(float *)(unaff_x19 + 0x3c);
                    memmove(&stack0x00001700,(void *)(unaff_x19[0x1f] + 0x50),0x60);
                    iVar16 = FUN_026fd110(&stack0x00001700,0);
                    if (*in_stack_00000138 == 0) goto LAB_0249920c;
                    memmove(&stack0x00001700,(void *)(*in_stack_00000138 + 0x50),0x60);
                    fVar60 = (float)FUN_026fd120(&stack0x00001700,0);
                    fVar87 = fStack0000000000000084;
                    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
                      fVar87 = 1.0;
                    }
                    if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
                    fVar87 = (fVar55 / (float)iVar16) * fVar60 * fVar87;
                    iVar16 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
                    fVar55 = *(float *)(unaff_x19 + 0x3c);
                    if (iVar16 < 1) {
                      if (*in_stack_00000138 == 0) goto LAB_0249920c;
                      iVar16 = FUN_026fd110(*in_stack_00000138 + 0x50,0);
                      if (*in_stack_00000138 == 0) goto LAB_0249920c;
                      fVar60 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
                      fVar83 = fStack0000000000000084;
                      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
                        fVar83 = fVar62;
                      }
                      if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
                      fVar78 = (float)FUN_026fd140(unaff_x19[0x1f] + 0x50,0);
                      if (*(long *)((long)dVar91 + 0x20) == 0) goto LAB_0249920c;
                      FUN_026fd62c(&stack0x00000880,*(long *)((long)dVar91 + 0x20),0);
                      unaff_x26[0x1cd] = unaff_x26[1];
                      unaff_x26[0x1cc] = *unaff_x26;
                      fVar61 = (float)FUN_026fd45c(&stack0x000016e0,0);
                      if (*(long *)((long)dVar91 + 0x20) == 0) goto LAB_0249920c;
                      fVar63 = *(float *)((long)dVar91 + 0x2c);
                      fVar84 = (float)FUN_026fd668(*(long *)((long)dVar91 + 0x20),0);
                      if (*in_stack_00000138 == 0) goto LAB_0249920c;
                      fVar62 = (float)FUN_026fd140(*in_stack_00000138 + 0x50,0);
                      if (*in_stack_00000138 == 0) goto LAB_0249920c;
                      fVar75 = (float)FUN_026fd170(*in_stack_00000138 + 0x50,0);
                      if (*in_stack_00000138 == 0) goto LAB_0249920c;
                      fVar64 = *(float *)((long)unaff_x19 + 0x3fc);
                      fStack0000000000000134 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
                      if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
                      fStack0000000000000134 = fVar87 * fVar75 * fVar64 * fStack0000000000000134;
                      fVar83 = (fVar55 / (float)iVar16) * fVar60 * fVar83;
                      fVar87 = fVar83 * (fVar78 / fVar61) * fVar63 * fVar84;
                      fVar83 = fVar83 / fVar87;
                      fVar62 = fVar83 * fVar62;
                      fVar55 = (float)FUN_026fd180(unaff_x19[0x1f] + 0x50,0);
                      fVar83 = fVar83 * fVar55;
                    }
                    else {
                      if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
                      iVar16 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
                      if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
                      fVar60 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
                      if (*(long *)((long)dVar91 + 0x20) == 0) goto LAB_0249920c;
                      fVar83 = *(float *)((long)dVar91 + 0x2c);
                      fVar78 = fStack0000000000000084;
                      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
                        fVar78 = 1.0;
                      }
                      fVar61 = (float)FUN_026fd668(*(long *)((long)dVar91 + 0x20),0);
                      if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
                      fVar62 = (float)FUN_026fd140(unaff_x19[0xd2] + 0x48,0);
                      if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
                      fVar63 = (float)FUN_026fd170(unaff_x19[0xd2] + 0x48,0);
                      if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
                      fVar84 = *(float *)((long)unaff_x19 + 0x3fc);
                      fStack0000000000000134 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
                      if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
                      fStack0000000000000134 = fVar87 * fVar63 * fVar84 * fStack0000000000000134;
                      fVar87 = (fVar55 / (float)iVar16) * fVar60 * fVar78 * fVar83 * fVar61;
                      fVar83 = (float)FUN_026fd180(unaff_x19[0xd2] + 0x48,0);
                    }
                    lVar22 = unaff_x19[0x6c];
                    unaff_x19[200] = (long)dVar91;
                    if ((lVar22 != 0) && (lVar51 = *(long *)(lVar22 + 0x38), lVar51 != 0)) {
                      if (*puVar1 < *(uint *)(lVar51 + 0x18)) {
                        lVar51 = lVar51 + (long)(int)*puVar1 * 0x178;
                        *(undefined4 *)(lVar51 + 0x2c) = 1;
                        *(float *)(lVar51 + 0x160) = fVar87;
                        fVar55 = 0.0;
                        *(long *)(lVar51 + 0x40) = unaff_x19[0xd2];
                        *(long *)(lVar51 + 0x38) = unaff_x19[0x1f];
                        *(int *)(lVar51 + 0x58) = (int)unaff_x19[0x23];
                        *(int *)(unaff_x19 + 0x23) = (int)lVar37;
                        goto LAB_02492e14;
                      }
                      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    }
                    goto LAB_0249920c;
                  }
                  lVar22 = *plVar2;
                  fVar60 = 0.0;
                  if (uVar15 != 3 && uVar15 != 0xad) {
                    fVar60 = fVar87;
                  }
                  fStack0000000000000134 = 0.0;
                  if (lVar22 == 0) goto LAB_0249920c;
                  fVar62 = 0.0;
                  fVar83 = 0.0;
                }
                else {
                  if (iVar16 != 0) goto LAB_0249265c;
LAB_02492a20:
                  if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x38), lVar22 == 0))
                  goto LAB_0249920c;
                  uVar43 = *puVar1;
                  uVar17 = *(uint *)(lVar22 + 0x18);
                  if (uVar17 <= uVar43)
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  lVar37 = *(long *)(lVar22 + (long)(int)uVar43 * 0x178 + 0x30);
                  unaff_x19[200] = lVar37;
                  if (lVar37 == 0) goto LAB_02492630;
                  lVar51 = lVar22 + (long)(int)uVar43 * 0x178;
                  lVar37 = *(long *)(lVar51 + 0x38);
                  unaff_x19[0x1f] = lVar37;
                  unaff_x19[0x22] = *(long *)(lVar51 + 0x50);
                  *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar51 + 0x58);
                  if (bVar7) {
                    lVar51 = unaff_x19[0x8e];
                    if (lVar51 == 0) goto LAB_0249920c;
                    if (*(uint *)(lVar51 + 0x18) <= uVar93)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    if ((*(int *)(lVar51 + (long)(int)uVar93 * 0xc + 0x20) != 10) ||
                       (uVar43 == *(uint *)(unaff_x19 + 0x92))) goto LAB_02492ab4;
                    if (uVar17 <= uVar43 - 1)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    if (lVar37 == 0) goto LAB_0249920c;
                    fVar55 = *(float *)(lVar22 + (long)(int)(uVar43 - 1) * 0x178 + 0x60);
                    iVar16 = FUN_026fd110(lVar37 + 0x50,0);
                    lVar22 = *in_stack_00000138;
                  }
                  else {
LAB_02492ab4:
                    if (lVar37 == 0) goto LAB_0249920c;
                    fVar55 = *(float *)(unaff_x19 + 0x3c);
                    iVar16 = FUN_026fd110(lVar37 + 0x50,0);
                    lVar22 = unaff_x19[0x1f];
                  }
                  if (lVar22 == 0) goto LAB_0249920c;
                  fVar78 = (float)FUN_026fd120(lVar22 + 0x50,0);
                  fVar60 = fStack0000000000000084;
                  if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
                    fVar60 = fVar62;
                  }
                  fVar83 = 0.0;
                  fVar62 = 0.0;
                  if (!(bool)(bVar7 & uVar15 == 0x2026)) {
                    if (*in_stack_00000138 == 0) goto LAB_0249920c;
                    fVar62 = (float)FUN_026fd140(*in_stack_00000138 + 0x50,0);
                    if (*in_stack_00000138 == 0) goto LAB_0249920c;
                    fVar83 = (float)FUN_026fd180(*in_stack_00000138 + 0x50,0);
                  }
                  lVar22 = unaff_x19[200];
                  if ((lVar22 == 0) || (*(long *)(lVar22 + 0x20) == 0)) goto LAB_0249920c;
                  fVar61 = *(float *)((long)unaff_x19 + 0x3fc);
                  fVar63 = *(float *)(lVar22 + 0x2c);
                  fVar87 = (float)FUN_026fd668(*(long *)(lVar22 + 0x20),0);
                  if (*in_stack_00000138 == 0) goto LAB_0249920c;
                  fVar84 = (float)FUN_026fd170(*in_stack_00000138 + 0x50,0);
                  if (*in_stack_00000138 == 0) goto LAB_0249920c;
                  fVar75 = *(float *)((long)unaff_x19 + 0x3fc);
                  fStack0000000000000134 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
                  lVar22 = unaff_x19[0x6c];
                  if ((lVar22 == 0) || (lVar37 = *(long *)(lVar22 + 0x38), lVar37 == 0))
                  goto LAB_0249920c;
                  if (*(uint *)(lVar37 + 0x18) <= *puVar1)
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  lVar37 = lVar37 + (long)(int)*puVar1 * 0x178;
                  *(undefined4 *)(lVar37 + 0x2c) = 0;
                  fVar60 = ((fStack00000000000000f4 * fVar55) / (float)iVar16) * fVar78 * fVar60;
                  fVar87 = fVar60 * fVar61 * fVar63 * fVar87;
                  *(float *)(lVar37 + 0x160) = fVar87;
                  uVar17 = *(uint *)(unaff_x19 + 0x23);
                  fStack0000000000000134 = fVar60 * fVar84 * fVar75 * fStack0000000000000134;
                  if (uVar17 == 0) {
                    fVar55 = *(float *)(unaff_x19 + 0xc2);
                  }
                  else {
                    lVar37 = unaff_x19[0xe0];
                    if (lVar37 == 0) goto LAB_0249920c;
                    if (*(uint *)(lVar37 + 0x18) <= uVar17)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    lVar37 = *(long *)(lVar37 + (long)(int)uVar17 * 8 + 0x20);
                    if (lVar37 == 0) goto LAB_0249920c;
                    fVar55 = *(float *)(lVar37 + 0x104);
                  }
LAB_02492e14:
                  fVar60 = 0.0;
                  if (uVar15 != 3 && uVar15 != 0xad) {
                    fVar60 = fVar87;
                  }
                }
                lVar22 = *(long *)(lVar22 + 0x38);
                if (lVar22 == 0) goto LAB_0249920c;
                if (*(uint *)(lVar22 + 0x18) <= *puVar1)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                lVar22 = lVar22 + (long)(int)*puVar1 * 0x178;
                *(short *)(lVar22 + 0x20) = (short)uVar15;
                *(int *)(lVar22 + 0x60) = (int)unaff_x19[0x3c];
                *(undefined4 *)(lVar22 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4e4);
                if ((unaff_x19[0x6c] == 0) ||
                   (lVar22 = *(long *)(unaff_x19[0x6c] + 0x38), lVar22 == 0)) goto LAB_0249920c;
                if (*(uint *)(lVar22 + 0x18) <= *puVar1)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                *(int *)(lVar22 + (long)(int)*puVar1 * 0x178 + 0x168) = (int)unaff_x19[0x2a];
                if ((unaff_x19[0x6c] == 0) ||
                   (lVar22 = *(long *)(unaff_x19[0x6c] + 0x38), lVar22 == 0)) goto LAB_0249920c;
                if (*(uint *)(lVar22 + 0x18) <= *puVar1)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                *(undefined4 *)(lVar22 + (long)(int)*puVar1 * 0x178 + 0x170) =
                     *(undefined4 *)((long)unaff_x19 + 0x154);
                if ((unaff_x19[0x6c] == 0) ||
                   (lVar22 = *(long *)(unaff_x19[0x6c] + 0x38), lVar22 == 0)) goto LAB_0249920c;
                uVar17 = *puVar1;
                FUN_013b78b8(in_stack_000000b8,&stack0x00000880,
                             *(undefined8 *)TMPro_TMP_Dropdown_OptionData_TypeInfo);
                if (*(uint *)(lVar22 + 0x18) <= uVar17)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                lVar22 = lVar22 + (long)(int)uVar17 * 0x178;
                uVar24 = unaff_x26[1];
                uVar31 = *unaff_x26;
                *(undefined4 *)(lVar22 + 0x18c) = 0;
                *(undefined8 *)(lVar22 + 0x184) = uVar24;
                *(undefined8 *)(lVar22 + 0x17c) = uVar31;
                if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x38), lVar22 == 0))
                goto LAB_0249920c;
                if (*(uint *)(lVar22 + 0x18) <= *puVar1)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                *(undefined4 *)(lVar22 + (long)(int)*puVar1 * 0x178 + 400) =
                     *(undefined4 *)((long)unaff_x19 + 0x254);
                if ((unaff_x19[200] == 0) ||
                   (lVar22 = *(long *)(unaff_x19[200] + 0x20), lVar22 == 0)) goto LAB_0249920c;
                FUN_026fd62c(&stack0x00000bf8,lVar22,0);
                puVar10 = 
                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                ;
                unaff_x26[0x1df] = in_stack_00000c00;
                unaff_x26[0x1de] = CONCAT44(in_stack_00000bfc,uVar92);
                if ((int)uVar15 < 0x10000) {
                  if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar17 = FUN_016f68bc(uVar15,0);
                  uVar17 = uVar17 & 1;
                }
                else {
                  uVar17 = 0;
                }
                fStack00000000000000cc = *(float *)(unaff_x19 + 0x54);
                *(undefined4 *)((long)unaff_x19 + 0x2f4) = 0;
                if (*(char *)((long)unaff_x19 + 0x2f1) == '\0') {
                  fVar63 = 0.0;
                  fVar61 = 0.0;
                  fVar78 = 0.0;
                }
                else {
                  if (unaff_x19[200] == 0) goto LAB_0249920c;
                  uVar34 = *puVar1;
                  uVar43 = *(uint *)(unaff_x19[200] + 0x28);
                  if ((int)uVar34 < (int)uVar21) {
                    if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x38), lVar22 == 0))
                    goto LAB_0249920c;
                    if (*(uint *)(lVar22 + 0x18) <= uVar34 + 1)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    lVar22 = *(long *)(lVar22 + (long)(int)(uVar34 + 1) * 0x178 + 0x30);
                    if ((((lVar22 == 0) || (*in_stack_00000138 == 0)) ||
                        (lVar37 = *(long *)(*in_stack_00000138 + 0x128), lVar37 == 0)) ||
                       (lVar37 = *(long *)(lVar37 + 0x18), lVar37 == 0)) goto LAB_0249920c;
                    dVar91 = (double)(ulong)(uVar43 | *(int *)(lVar22 + 0x28) << 0x10);
                    uVar27 = FUN_0129eff4(lVar37,&stack0x00000880,&stack0x000016d8,
                                          *(undefined8 *)
                                           Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                                         );
                    uVar88 = 0;
                    if ((uVar27 & 1) == 0) {
                      fVar63 = 0.0;
                      fVar61 = 0.0;
                      fVar78 = 0.0;
                    }
                    else {
                      if (in_stack_000016d8 == 0) goto LAB_0249920c;
                      fVar78 = *(float *)(in_stack_000016d8 + 0x14);
                      fVar61 = *(float *)(in_stack_000016d8 + 0x18);
                      fVar63 = *(float *)(in_stack_000016d8 + 0x1c);
                      uVar88 = *(undefined4 *)(in_stack_000016d8 + 0x20);
                      if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
                        fStack00000000000000cc = 0.0;
                      }
                    }
                    uVar34 = *puVar1;
                  }
                  else {
                    uVar88 = 0;
                    fVar63 = 0.0;
                    fVar61 = 0.0;
                    fVar78 = 0.0;
                  }
                  if (0 < (int)uVar34) {
                    if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x38), lVar22 == 0))
                    goto LAB_0249920c;
                    if (*(uint *)(lVar22 + 0x18) <= (uint)((long)(int)uVar34 + -1))
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    lVar22 = *(long *)(lVar22 + ((long)(int)uVar34 + -1) * 0x178 + 0x30);
                    if (((lVar22 == 0) || (*in_stack_00000138 == 0)) ||
                       ((lVar37 = *(long *)(*in_stack_00000138 + 0x128), lVar37 == 0 ||
                        (lVar37 = *(long *)(lVar37 + 0x18), lVar37 == 0)))) goto LAB_0249920c;
                    dVar91 = (double)(ulong)(*(uint *)(lVar22 + 0x28) | uVar43 << 0x10);
                    uVar27 = FUN_0129eff4(lVar37,&stack0x00000880,&stack0x000016d8,
                                          *(undefined8 *)
                                           Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                                         );
                    if ((uVar27 & 1) != 0) {
                      if ((in_stack_000016d8 == 0) ||
                         (fVar78 = (float)FUN_024bb1bc(fVar78,fVar61,fVar63,uVar88,
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
                  *(float *)((long)unaff_x19 + 0x2f4) = fVar63;
                }
                if ((char)unaff_x19[0x1d] != '\0') {
                  fVar75 = *(float *)(unaff_x19 + 199);
                  fVar84 = (float)FUN_026fd474(&stack0x00001770,0);
                  fVar75 = fVar75 - fVar60 * fVar84 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
                  *(float *)(unaff_x19 + 199) = fVar75;
                  if ((uVar17 != 0) || (uVar15 == 0x200b)) {
                    *(float *)(unaff_x19 + 199) =
                         fVar75 - fVar56 * *(float *)((long)unaff_x19 + 0x2ac);
                  }
                }
                fVar75 = *(float *)(unaff_x19 + 0x55);
                fVar84 = 0.0;
                if (fVar75 != 0.0) {
                  fVar84 = (float)FUN_026fd454(&stack0x00001770,0);
                  fVar64 = (float)FUN_026fd464(&stack0x00001770,0);
                  fVar84 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                           (fVar75 * 0.5 - fVar60 * (fVar84 * 0.5 + fVar64));
                  *(float *)(unaff_x19 + 199) = *(float *)(unaff_x19 + 199) + fVar84;
                }
                if (((cVar33 == '\0') && (*(int *)((long)unaff_x19 + 0x63c) == 0)) &&
                   ((*(byte *)((long)unaff_x19 + 0x254) & 1) != 0)) {
                  lVar22 = unaff_x19[0x22];
                  if (*(int *)(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar27 = FUN_02681b9c(lVar22,0,0);
                  fVar65 = 0.0;
                  if ((uVar27 & 1) != 0) {
                    lVar22 = unaff_x19[0x22];
                    if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    if (lVar22 == 0) goto LAB_0249920c;
                    uVar27 = FUN_0267e1d8(lVar22,*(undefined4 *)
                                                  (*(long *)(*(long *)puVar10 + 0xb8) + 0x54),0);
                    fVar65 = 0.0;
                    if ((uVar27 & 1) != 0) {
                      lVar22 = unaff_x19[0x22];
                      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      if (lVar22 == 0) goto LAB_0249920c;
                      fVar75 = (float)FUN_0267f610(lVar22,*(undefined4 *)
                                                           (*(long *)(*(long *)puVar10 + 0xb8) +
                                                           0x54),0);
                      if ((*in_stack_00000138 == 0) || (unaff_x19[0x22] == 0)) goto LAB_0249920c;
                      fVar64 = *(float *)(*in_stack_00000138 + 0x1b0);
                      fVar65 = (float)FUN_0267f610(unaff_x19[0x22],
                                                   *(undefined4 *)
                                                    (*(long *)(*(long *)puVar10 + 0xb8) + 0xcc),0);
                      fVar65 = fVar65 * fVar75 * fVar64 * 0.25;
                      if (fVar75 < fVar55 + fVar65) {
                        fVar55 = fVar75 - fVar65;
                      }
                    }
                  }
                  if (*in_stack_00000138 == 0) goto LAB_0249920c;
                  fVar75 = *(float *)(*in_stack_00000138 + 0x1b4);
                }
                else {
                  lVar22 = unaff_x19[0x22];
                  if (*(int *)(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar27 = FUN_02681b9c(lVar22,0,0);
                  fVar75 = 0.0;
                  if ((uVar27 & 1) != 0) {
                    lVar22 = unaff_x19[0x22];
                    if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    if (lVar22 == 0) goto LAB_0249920c;
                    uVar27 = FUN_0267e1d8(lVar22,*(undefined4 *)
                                                  (*(long *)(*(long *)puVar10 + 0xb8) + 0x54),0);
                    if ((uVar27 & 1) != 0) {
                      lVar22 = unaff_x19[0x22];
                      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      if (lVar22 == 0) goto LAB_0249920c;
                      uVar27 = FUN_0267e1d8(lVar22,*(undefined4 *)
                                                    (*(long *)(*(long *)puVar10 + 0xb8) + 0xcc),0);
                      if ((uVar27 & 1) != 0) {
                        lVar22 = unaff_x19[0x22];
                        if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        if (lVar22 != 0) {
                          fVar64 = (float)FUN_0267f610(lVar22,*(undefined4 *)
                                                               (*(long *)(*(long *)puVar10 + 0xb8) +
                                                               0x54),0);
                          if ((*in_stack_00000138 != 0) && (unaff_x19[0x22] != 0)) {
                            fVar76 = *(float *)(*in_stack_00000138 + 0x1a8);
                            fVar65 = (float)FUN_0267f610(unaff_x19[0x22],
                                                         *(undefined4 *)
                                                          (*(long *)(*(long *)puVar10 + 0xb8) + 0xcc
                                                          ),0);
                            fVar65 = fVar65 * fVar64 * fVar76 * 0.25;
                            if (fVar64 < fVar55 + fVar65) {
                              fVar55 = fVar64 - fVar65;
                            }
                            goto LAB_024934bc;
                          }
                        }
                        goto LAB_0249920c;
                      }
                    }
                  }
                  fVar65 = 0.0;
                }
LAB_024934bc:
                fVar77 = *(float *)(unaff_x19 + 199);
                fVar64 = (float)FUN_026fd464(&stack0x00001770,0);
                fVar77 = fVar77 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                                  fVar60 * (fVar78 + ((fVar64 - fVar55) - fVar65));
                fVar78 = (float)FUN_026fd46c(&stack0x00001770,0);
                fVar76 = *(float *)((long)unaff_x19 + 0x614) +
                         ((fStack0000000000000134 + fVar60 * (fVar61 + fVar55 + fVar78)) -
                         *(float *)(unaff_x19 + 0x9a));
                fVar78 = (float)FUN_026fd45c(&stack0x00001770,0);
                fVar80 = fVar76 - fVar60 * (fVar55 + fVar55 + fVar78);
                fVar78 = (float)FUN_026fd454(&stack0x00001770,0);
                fVar64 = fVar77 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                                  fVar60 * (fVar65 + fVar65 + fVar55 + fVar55 + fVar78);
                fVar78 = fVar77;
                fVar61 = fVar64;
                if (((*(int *)((long)unaff_x19 + 0x63c) == 0) && (cVar33 == '\0')) &&
                   ((*(byte *)((long)unaff_x19 + 0x254) >> 1 & 1) != 0)) {
                  fVar74 = (float)(int)unaff_x19[0xbd] * fVar82;
                  fVar78 = (float)FUN_026fd46c(&stack0x00001770,0);
                  fVar68 = fVar74 * fVar60 * (fVar65 + fVar55 + fVar78);
                  fVar78 = (float)FUN_026fd46c(&stack0x00001770,0);
                  fVar61 = (float)FUN_026fd45c(&stack0x00001770,0);
                  fVar76 = fVar76 + 0.0;
                  fVar80 = fVar80 + 0.0;
                  fVar74 = fVar74 * fVar60 * (((fVar78 - fVar61) - fVar55) - fVar65);
                  fVar61 = fVar64 + fVar74;
                  fVar78 = fVar77 + fVar68;
                  fVar67 = (fVar68 - fVar74) * 0.5;
                  fVar77 = (fVar77 + fVar74) - fVar67;
                  fVar64 = (fVar64 + fVar68) - fVar67;
                  fVar78 = fVar78 - fVar67;
                  fVar61 = fVar61 - fVar67;
                }
                if (*(char *)((long)unaff_x19 + 0x46c) == '\0') {
                  fVar68 = 0.0;
                  fVar69 = 0.0;
                  fVar79 = 0.0;
                  fVar67 = 0.0;
                  fVar90 = fVar80;
                  fVar74 = fVar76;
                  fStack00000000000000e8 = fVar78;
                  fStack00000000000000ec = fVar77;
                }
                else {
                  thunk_FUN_026935f0(lVar23,0);
                  fVar81 = (fVar64 + fVar77) * 0.5;
                  fVar85 = (fVar80 + fVar76) * 0.5;
                  fVar76 = fVar76 - fVar85;
                  fVar67 = 0.0;
                  fVar74 = fVar76;
                  fVar66 = (float)FUN_02692df0(fVar78 - fVar81,lVar23,0);
                  fVar67 = fVar67 + 0.0;
                  fVar80 = fVar80 - fVar85;
                  fVar68 = 0.0;
                  fVar78 = fVar80;
                  fVar77 = (float)FUN_02692df0(fVar77 - fVar81,lVar23,0);
                  fVar68 = fVar68 + 0.0;
                  fVar79 = 0.0;
                  fVar64 = (float)FUN_02692df0(fVar64 - fVar81,lVar23,0);
                  fVar64 = fVar81 + fVar64;
                  fVar76 = fVar85 + fVar76;
                  fVar79 = fVar79 + 0.0;
                  fVar69 = 0.0;
                  fVar61 = (float)FUN_02692df0(fVar61 - fVar81,lVar23,0);
                  fVar61 = fVar81 + fVar61;
                  fVar80 = fVar85 + fVar80;
                  fVar69 = fVar69 + 0.0;
                  fVar90 = fVar85 + fVar78;
                  fVar74 = fVar85 + fVar74;
                  fStack00000000000000e8 = fVar81 + fVar66;
                  fStack00000000000000ec = fVar81 + fVar77;
                }
                if (*plVar2 == 0) goto LAB_0249920c;
                lVar22 = *(long *)(*plVar2 + 0x38);
                uVar27 = (ulong)(uint)fVar60;
                if (lVar22 == 0) goto LAB_0249920c;
                if (*(uint *)(lVar22 + 0x18) <= *puVar1)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                lVar22 = lVar22 + (long)(int)*puVar1 * 0x178;
                *(float *)(lVar22 + 0x120) = fVar90;
                *(float *)(lVar22 + 0x11c) = fStack00000000000000ec;
                *(float *)(lVar22 + 0x124) = fVar68;
                if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x38), lVar22 == 0))
                goto LAB_0249920c;
                if (*(uint *)(lVar22 + 0x18) <= *puVar1)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                lVar22 = lVar22 + (long)(int)*puVar1 * 0x178;
                *(float *)(lVar22 + 0x114) = fVar74;
                *(float *)(lVar22 + 0x110) = fStack00000000000000e8;
                *(float *)(lVar22 + 0x118) = fVar67;
                if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x38), lVar22 == 0))
                goto LAB_0249920c;
                if (*(uint *)(lVar22 + 0x18) <= *puVar1)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                lVar22 = lVar22 + (long)(int)*puVar1 * 0x178;
                *(float *)(lVar22 + 0x128) = fVar64;
                *(float *)(lVar22 + 300) = fVar76;
                *(float *)(lVar22 + 0x130) = fVar79;
                if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x38), lVar22 == 0))
                goto LAB_0249920c;
                if (*(uint *)(lVar22 + 0x18) <= *puVar1)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                lVar22 = lVar22 + (long)(int)*puVar1 * 0x178;
                *(float *)(lVar22 + 0x134) = fVar61;
                *(float *)(lVar22 + 0x138) = fVar80;
                *(float *)(lVar22 + 0x13c) = fVar69;
                if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x38), lVar22 == 0))
                goto LAB_0249920c;
                uVar43 = *puVar1;
                lVar37 = (long)(int)uVar43;
                if (*(uint *)(lVar22 + 0x18) <= uVar43)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                lVar51 = lVar22 + lVar37 * 0x178;
                *(int *)(lVar51 + 0x140) = (int)unaff_x19[199];
                fVar61 = *(float *)(unaff_x19 + 0x9a);
                uVar70 = (ulong)(uint)fVar61;
                fVar78 = *(float *)((long)unaff_x19 + 0x614);
                *(float *)(lVar51 + 0x15c) = (fVar64 - fStack00000000000000ec) / (fVar74 - fVar90);
                *(float *)(lVar51 + 0x14c) = (fStack0000000000000134 - fVar61) + fVar78;
                fVar62 = fVar62 * fVar60;
                if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
                  fVar62 = fVar62 / fStack00000000000000f4;
                  fVar83 = (fVar83 * fVar60) / fStack00000000000000f4;
                }
                else {
                  fVar83 = fVar83 * fVar60;
                }
                uVar34 = *(uint *)(unaff_x19 + 0x92);
                bVar13 = uVar17 != 0;
                fVar62 = fVar78 + fVar62;
                bVar14 = uVar43 != uVar34;
                if (bVar14 && bVar13) {
                  fVar78 = *(float *)(unaff_x19 + 0x98);
                  lVar22 = lVar22 + lVar37 * 0x178;
                  *(float *)(lVar22 + 0x154) = fVar78;
                  fVar83 = *(float *)((long)unaff_x19 + 0x4c4);
                  *(float *)(lVar22 + 0x148) = fVar78 - fVar61;
                  *(float *)(lVar22 + 0x158) = fVar83;
                  *(float *)(unaff_x19 + 0x97) = fVar78 - fVar61;
                  fVar83 = fVar83 - fVar61;
                  *(float *)(lVar22 + 0x150) = fVar83;
                }
                else {
                  fVar83 = fVar78 + fVar83;
                  fVar64 = fVar62;
                  fVar76 = fVar83;
                  if (fVar78 != 0.0) {
                    fVar64 = (fVar62 - fVar78) / *(float *)((long)unaff_x19 + 0x3fc);
                    fVar76 = (fVar83 - fVar78) / *(float *)((long)unaff_x19 + 0x3fc);
                    if (fVar64 <= fVar62) {
                      fVar64 = fVar62;
                    }
                    if (fVar83 <= fVar76) {
                      fVar76 = fVar83;
                    }
                  }
                  lVar22 = lVar22 + lVar37 * 0x178;
                  fVar78 = fVar64;
                  if (fVar64 <= *(float *)(unaff_x19 + 0x98)) {
                    fVar78 = *(float *)(unaff_x19 + 0x98);
                  }
                  fVar80 = fVar76;
                  if (*(float *)((long)unaff_x19 + 0x4c4) <= fVar76) {
                    fVar80 = *(float *)((long)unaff_x19 + 0x4c4);
                  }
                  *(float *)((long)unaff_x19 + 0x4c4) = fVar80;
                  fVar83 = fVar83 - fVar61;
                  *(float *)(unaff_x19 + 0x98) = fVar78;
                  *(float *)(lVar22 + 0x154) = fVar64;
                  *(float *)(lVar22 + 0x158) = fVar76;
                  *(float *)(lVar22 + 0x148) = fVar62 - fVar61;
                  *(float *)(unaff_x19 + 0x97) = fVar62 - fVar61;
                  *(float *)(lVar22 + 0x150) = fVar83;
                }
                *(float *)((long)unaff_x19 + 0x4bc) = fVar83;
                if (((int)unaff_x19[0x94] == 0) || (*(char *)((long)unaff_x19 + 0x334) != '\0')) {
                  if (!bVar14 || !bVar13) {
                    *(float *)(unaff_x19 + 0x96) = fVar78;
                    if (unaff_x19[0x1f] != 0) {
                      fVar78 = *(float *)((long)unaff_x19 + 0x4b4);
                      fVar83 = (float)FUN_026fd150(unaff_x19[0x1f] + 0x50,0);
                      fStack00000000000000f4 = (fVar60 * fVar83) / fStack00000000000000f4;
                      uVar70 = (ulong)*(uint *)(unaff_x19 + 0x9a);
                      if (fVar78 <= fStack00000000000000f4) {
                        fVar78 = fStack00000000000000f4;
                      }
                      *(float *)((long)unaff_x19 + 0x4b4) = fVar78;
                      goto LAB_02493948;
                    }
                    goto LAB_0249920c;
                  }
                }
                else {
LAB_02493948:
                  if ((!bVar14 || !bVar13) && (float)uVar70 == 0.0) {
                    fVar78 = *(float *)((long)unaff_x19 + 0x4ac);
                    if (*(float *)((long)unaff_x19 + 0x4ac) <= fVar62) {
                      fVar78 = fVar62;
                    }
                    *(float *)((long)unaff_x19 + 0x4ac) = fVar78;
                  }
                }
                lVar22 = *plVar2;
                if ((lVar22 == 0) || (lVar37 = *(long *)(lVar22 + 0x38), lVar37 == 0))
                goto LAB_0249920c;
                uVar49 = *puVar1;
                if (*(uint *)(lVar37 + 0x18) <= uVar49)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                lVar37 = lVar37 + (long)(int)uVar49 * 0x178;
                *(undefined1 *)(lVar37 + 0x194) = 0;
                uVar40 = *(uint *)(unaff_x19 + 0x4e);
                if ((uVar15 != 9) &&
                   (((((uVar17 != 0 || (uVar15 == 3)) || (uVar15 == 0x200b)) || (uVar15 == 0xad)) &&
                    ((!(bool)(uVar15 == 0xad & (bVar12 ^ 1U)) &&
                     (*(int *)((long)unaff_x19 + 0x63c) != 1)))))) {
                  if (((uVar15 & 0xfffffffe) == 10) && ((int)unaff_x19[0x5b] == 6)) {
                    fVar62 = (float)uVar70;
                    fVar87 = 0.0;
                    if ((0.0 < fVar62) && (fVar87 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0'))
                    {
                      fVar87 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
                    }
                    uVar70 = (ulong)(uint)fVar72;
                    if (fVar72 < (*(float *)(unaff_x19 + 0x96) -
                                 (*(float *)((long)unaff_x19 + 0x4c4) - fVar62)) + fVar87) {
                      if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
                        *(uint *)((long)unaff_x19 + 0x2dc) = uVar49;
                      }
                      unaff_x28 = (long *)StringLiteral_302;
                      unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
                      unaff_x26 = (undefined8 *)&stack0x00000880;
                      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      uVar93 = FUN_024d66ec();
                      lVar22 = unaff_x19[0x5c];
                      if (*(int *)(*(long *)
                                    System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                  + 0xe0) == 0) {
                        thunk_FUN_00d32864(*(long *)
                                            System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                          );
                      }
                      uVar25 = FUN_02681b9c(lVar22,0,0);
                      if ((uVar25 & 1) != 0) {
                        plVar52 = (long *)unaff_x19[0x5c];
                        uVar31 = (**(code **)(*unaff_x19 + 0x548))();
                        if (plVar52 == (long *)0x0) goto LAB_0249920c;
                        (**(code **)(*plVar52 + 0x558))
                                  (plVar52,uVar31,*(undefined8 *)(*plVar52 + 0x560));
                        lVar22 = unaff_x19[0x5c];
                        if (lVar22 == 0) goto LAB_0249920c;
                        *(int *)(lVar22 + 0x3f8) = (int)unaff_x19[0x7f];
                        FUN_024c910c(lVar22,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
                        plVar52 = (long *)unaff_x19[0x5c];
                        if (plVar52 == (long *)0x0) goto LAB_0249920c;
                        (**(code **)(*plVar52 + 0x7d8))
                                  (plVar52,0,0,*(undefined8 *)(*plVar52 + 0x7e0));
                        *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                      }
                      in_stack_000017a8 = CONCAT44(3,uVar49);
                      goto LAB_02492630;
                    }
                  }
                  if ((((uVar15 - 0x2007 < 0x23) &&
                       ((1L << ((ulong)(uVar15 - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
                      (uVar15 - 10 < 2)) || (uVar15 == 0xa0)) {
LAB_024944e4:
                    if (((uVar15 != 0xad) && (uVar15 != 0x200b)) && (uVar15 != 0x2060)) {
                      lVar22 = *plVar2;
                      if ((lVar22 == 0) || (lVar37 = *(long *)(lVar22 + 0x50), lVar37 == 0))
                      goto LAB_0249920c;
                      if (*(uint *)(lVar37 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
                      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                      lVar37 = lVar37 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                      *(int *)(lVar37 + 0x2c) = *(int *)(lVar37 + 0x2c) + 1;
                      *(int *)(lVar22 + 0x20) = *(int *)(lVar22 + 0x20) + 1;
                    }
                  }
                  else {
                    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar27 = FUN_016fa418(uVar15,0);
                    if ((uVar27 & 1) != 0) goto LAB_024944e4;
                  }
                  if (uVar15 == 0xa0) {
                    if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x50), lVar22 == 0))
                    goto LAB_0249920c;
                    if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
LAB_024949c4:
                    *(int *)(lVar22 + 0x20) = *(int *)(lVar22 + 0x20) + 1;
                  }
LAB_02494abc:
                  if (((int)unaff_x19[0x5b] == 1) && ((uVar15 == 0x2d || (!bVar7)))) {
                    if (unaff_x19[0xca] == 0) goto LAB_0249920c;
                    fVar87 = *(float *)(unaff_x19 + 0x3c);
                    iVar16 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
                    if (unaff_x19[0xca] == 0) goto LAB_0249920c;
                    fVar78 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
                    lVar22 = unaff_x19[0xc9];
                    fVar62 = fStack0000000000000084;
                    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
                      fVar62 = 1.0;
                    }
                    if ((lVar22 == 0) || (*(long *)(lVar22 + 0x20) == 0)) goto LAB_0249920c;
                    fVar61 = *(float *)((long)unaff_x19 + 0x3fc);
                    fVar65 = *(float *)(lVar22 + 0x2c);
                    fVar83 = (float)FUN_026fd668(*(long *)(lVar22 + 0x20),0);
                    fVar64 = *(float *)(unaff_x19 + 0x69);
                    fVar83 = fVar61 * (fVar87 / (float)iVar16) * fVar78 * fVar62 * fVar65 * fVar83;
                    fVar87 = *(float *)((long)unaff_x19 + 0x34c);
                    if ((uVar15 == 10) &&
                       (*(int *)((long)unaff_x19 + 0x48c) != (int)unaff_x19[0x92])) {
                      if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x38), lVar22 == 0))
                      goto LAB_0249920c;
                      uVar49 = *(int *)((long)unaff_x19 + 0x48c) - 1;
                      if (*(uint *)(lVar22 + 0x18) <= uVar49)
                      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                      if (unaff_x19[0xca] == 0) goto LAB_0249920c;
                      fVar62 = *(float *)(lVar22 + (long)(int)uVar49 * 0x178 + 0x60);
                      iVar16 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
                      if (unaff_x19[0xca] == 0) goto LAB_0249920c;
                      fVar61 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
                      lVar22 = unaff_x19[0xc9];
                      fVar78 = fStack0000000000000084;
                      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
                        fVar78 = 1.0;
                      }
                      if ((lVar22 == 0) || (*(long *)(lVar22 + 0x20) == 0)) goto LAB_0249920c;
                      fVar65 = *(float *)((long)unaff_x19 + 0x3fc);
                      fVar76 = *(float *)(lVar22 + 0x2c);
                      fVar83 = (float)FUN_026fd668(*(long *)(lVar22 + 0x20),0);
                      if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x50), lVar22 == 0))
                      goto LAB_0249920c;
                      if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
                      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                      lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                      fVar64 = *(float *)(lVar22 + 0x60);
                      fVar87 = *(float *)(lVar22 + 100);
                      fVar83 = fVar65 * (fVar62 / (float)iVar16) * fVar61 * fVar78 * fVar76 * fVar83
                      ;
                    }
                    fVar65 = *(float *)(unaff_x19 + 0x9a);
                    fVar78 = *(float *)(unaff_x19 + 0x96);
                    fVar76 = *(float *)((long)unaff_x19 + 0x4c4);
                    fVar62 = 0.0;
                    fVar61 = 0.0;
                    if ((0.0 < fVar65) && (fVar61 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0'))
                    {
                      fVar61 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
                    }
                    fVar80 = *(float *)(unaff_x19 + 199);
                    if ((char)unaff_x19[0x1d] == '\0') {
                      if ((unaff_x19[0xc9] == 0) ||
                         (lVar22 = *(long *)(unaff_x19[0xc9] + 0x20), lVar22 == 0))
                      goto LAB_0249920c;
                      FUN_026fd62c(&stack0x00000880,lVar22,0);
                      fVar62 = (float)FUN_026fd474(&stack0x000016e0,0);
                    }
                    puVar10 = System_Threading_Mutex_TypeInfo;
                    fVar77 = *(float *)(unaff_x19 + 0x6b);
                    fVar87 = (fVar86 - fVar64) - fVar87;
                    bVar13 = true;
                    if ((fVar77 <= fVar87) && (bVar13 = false, !NAN(fVar77))) {
                      bVar13 = fVar77 == -1.0;
                    }
                    if (!bVar13) {
                      fVar87 = fVar77;
                    }
                    fVar64 = _DAT_0294c6e8;
                    if ((uVar40 & 0x18) == 0) {
                      fVar64 = 1.0;
                    }
                    if (((fVar78 - (fVar76 - fVar65)) + fVar61 < fVar72) &&
                       (ABS(fVar80) + fVar83 * fVar62 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc))
                        < fVar64 * fVar87)) {
                      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      FUN_024d69d4();
                      lVar22 = *(long *)(*(long *)puVar10 + 0xb8);
                      memcpy(&stack0x00000508,(void *)(lVar22 + 0x788),0x378);
                      FUN_013b86dc(lVar22 + 0x11f0,&stack0x00000508,
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_List<TextStyle>_get_Item__);
                    }
                  }
                  uVar27 = (ulong)(uint)fVar60;
                  fVar87 = 1.0;
                  lVar22 = *plVar2;
                  if ((lVar22 == 0) || (lVar37 = *(long *)(lVar22 + 0x38), lVar37 == 0))
                  goto LAB_0249920c;
                  if (*(uint *)(lVar37 + 0x18) <= *puVar1)
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  uVar49 = *(uint *)(unaff_x19 + 0x94);
                  lVar37 = lVar37 + (long)(int)*puVar1 * 0x178;
                  *(uint *)(lVar37 + 100) = uVar49;
                  *(int *)(lVar37 + 0x68) = (int)unaff_x19[0x95];
                  if ((bVar7) || ((uVar15 < 0xe && ((1 << (ulong)(uVar15 & 0x1f) & 0x2c00U) != 0))))
                  {
                    lVar22 = *(long *)(lVar22 + 0x50);
                    if (lVar22 == 0) goto LAB_0249920c;
                    if (*(uint *)(lVar22 + 0x18) <= uVar49)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    if (*(int *)(lVar22 + (long)(int)uVar49 * 0x5c + 0x24) == 1) goto LAB_02494e68;
                  }
                  else {
                    lVar22 = *(long *)(lVar22 + 0x50);
                    if (lVar22 == 0) goto LAB_0249920c;
LAB_02494e68:
                    if (*(uint *)(lVar22 + 0x18) <= uVar49)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    *(int *)(lVar22 + (long)(int)uVar49 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
                  }
                  if (uVar15 == 9) {
                    if (*in_stack_00000138 == 0) goto LAB_0249920c;
                    fVar87 = (float)FUN_026fd208(*in_stack_00000138 + 0x50,0);
                    if (*in_stack_00000138 == 0) goto LAB_0249920c;
                    fVar83 = *(float *)(unaff_x19 + 199);
                    fVar62 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000138 + 0x1b9));
                    fVar87 = fVar60 * fVar87 * fVar62;
                    fVar78 = fVar87 * (float)(int)(fVar83 / fVar87);
                    uVar70 = (ulong)(uint)fVar78;
                    if (fVar78 <= fVar83) {
                      fVar78 = fVar83 + fVar87;
                    }
LAB_02495058:
                    *(float *)(unaff_x19 + 199) = fVar78;
                  }
                  else if (*(float *)(unaff_x19 + 0x55) == 0.0) {
                    if ((char)unaff_x19[0x1d] == '\0') {
                      if (*(char *)((long)unaff_x19 + 0x46c) != '\0') {
                        fVar87 = (float)thunk_FUN_026935f0(lVar23,0);
                      }
                      fVar78 = *(float *)(unaff_x19 + 199);
                      fVar83 = (float)FUN_026fd474(&stack0x00001770,0);
                      if (unaff_x19[0x1f] != 0) {
                        fVar62 = 1.0 - *(float *)((long)unaff_x19 + 0x2cc);
                        fVar78 = fVar78 + fVar62 * (*(float *)((long)unaff_x19 + 0x2a4) +
                                                   fVar60 * (fVar63 + fVar87 * fVar83) +
                                                   fVar56 * (fVar75 + fStack00000000000000cc +
                                                                      *(float *)(unaff_x19[0x1f] +
                                                                                0x1ac)));
                        *(float *)(unaff_x19 + 199) = fVar78;
                        goto joined_r0x02494fac;
                      }
                      goto LAB_0249920c;
                    }
                    if (*in_stack_00000138 == 0) goto LAB_0249920c;
                    fVar78 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                             (*(float *)((long)unaff_x19 + 0x2a4) +
                             fVar60 * fVar63 +
                             fVar56 * (fVar75 + fStack00000000000000cc +
                                                *(float *)(*in_stack_00000138 + 0x1ac)));
                    uVar70 = (ulong)(uint)fVar78;
                    fVar78 = *(float *)(unaff_x19 + 199) - fVar78;
                    *(float *)(unaff_x19 + 199) = fVar78;
                    if ((uVar17 != 0) || (uVar15 == 0x200b)) {
                      fVar87 = fVar56 * *(float *)((long)unaff_x19 + 0x2ac);
                      uVar70 = (ulong)(uint)fVar87;
                      fVar78 = fVar78 - fVar87;
                      goto LAB_02495058;
                    }
                  }
                  else {
                    if (*in_stack_00000138 == 0) goto LAB_0249920c;
                    fVar62 = *(float *)(unaff_x19 + 199);
                    fVar78 = fVar62 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                                      (*(float *)((long)unaff_x19 + 0x2a4) +
                                      (*(float *)(unaff_x19 + 0x55) - fVar84) +
                                      fVar56 * (fStack00000000000000cc +
                                               *(float *)(*in_stack_00000138 + 0x1ac)));
                    *(float *)(unaff_x19 + 199) = fVar78;
joined_r0x02494fac:
                    if ((uVar17 != 0) || (uVar70 = (ulong)(uint)fVar62, uVar15 == 0x200b)) {
                      fVar87 = fVar56 * *(float *)((long)unaff_x19 + 0x2ac);
                      uVar70 = (ulong)(uint)fVar87;
                      fVar78 = fVar78 + fVar87;
                      goto LAB_02495058;
                    }
                  }
                  lVar22 = *plVar2;
                  if ((lVar22 == 0) || (lVar37 = *(long *)(lVar22 + 0x38), lVar37 == 0))
                  goto LAB_0249920c;
                  uVar49 = *puVar1;
                  uVar40 = (uint)*(undefined8 *)(lVar37 + 0x18);
                  if (uVar40 <= uVar49)
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  *(float *)(lVar37 + (long)(int)uVar49 * 0x178 + 0x144) = fVar78;
                  uVar42 = uVar15;
                  if ((int)uVar15 < 0xd) {
                    if ((uVar15 - 10 < 2) || (uVar15 == 3)) goto LAB_024950bc;
FUN_02495710:
                    if (((bool)(bVar7 & uVar15 == 0x2d)) || (uVar49 == uVar21)) goto LAB_024950bc;
                  }
                  else {
                    if (1 < uVar15 - 0x2028) {
                      if (uVar15 != 0xd) goto FUN_02495710;
                      uVar70 = 0;
                      *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
                      if (uVar49 != uVar21) goto LAB_0249572c;
                    }
LAB_024950bc:
                    if (0.0 < *(float *)(unaff_x19 + 0x9a)) {
                      fVar87 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
                      if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) ==
                          0) {
                        thunk_FUN_00d32864();
                      }
                      if (((fVar82 < ABS(fVar87)) && (*(char *)((long)unaff_x19 + 700) == '\0')) &&
                         (*(char *)((long)unaff_x19 + 0x334) == '\0')) {
                        FUN_024d6ca8(fVar87);
                        *(float *)((long)unaff_x19 + 0x4bc) =
                             *(float *)((long)unaff_x19 + 0x4bc) - fVar87;
                        *(float *)(unaff_x19 + 0x9a) = fVar87 + *(float *)(unaff_x19 + 0x9a);
                        puVar10 = System_Threading_Mutex_TypeInfo;
                        lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
                        if (*(int *)(lVar22 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                          lVar22 = *(long *)puVar10;
                        }
                        lVar37 = *(long *)(lVar22 + 0xb8);
                        if (*(int *)(lVar37 + 0x7ac) == (int)unaff_x19[0x94]) {
                          if (*(int *)(lVar22 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                            lVar37 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
                          }
                          FUN_013b8de4(lVar37 + 0x11f0,&stack0x00000880,
                                       *(undefined8 *)
                                        Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                                      );
                          lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
                          memcpy((void *)(*(long *)(lVar22 + 0xb8) + 0x788),&stack0x00000880,0x378);
                          lVar22 = *(long *)(lVar22 + 0xb8);
                          *(float *)(lVar22 + 0x7bc) = fVar87 + *(float *)(lVar22 + 0x7bc);
                          *(float *)(lVar22 + 0x800) = fVar87 + *(float *)(lVar22 + 0x800);
                          memcpy(&stack0x00000190,(void *)(lVar22 + 0x788),0x378);
                          FUN_013b86dc(lVar22 + 0x11f0,&stack0x00000190,
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_List<TextStyle>_get_Item__
                                      );
                        }
                      }
                    }
                    fVar78 = *(float *)(unaff_x19 + 0x9a);
                    *(undefined1 *)((long)unaff_x19 + 0x334) = 0;
                    fVar62 = *(float *)((long)unaff_x19 + 0x4c4) - fVar78;
                    fVar87 = *(float *)((long)unaff_x19 + 0x4bc);
                    if (fVar62 <= *(float *)((long)unaff_x19 + 0x4bc)) {
                      fVar87 = fVar62;
                    }
                    *(float *)((long)unaff_x19 + 0x4bc) = fVar87;
                    fVar83 = *(float *)(unaff_x19 + 0x98);
                    if (in_stack_000017b4 == '\0') {
                      fVar94 = fVar87;
                    }
                    if ((*(char *)((long)unaff_x19 + 0x32c) != '\0') &&
                       (((int)unaff_x19[100] <= *(int *)((long)unaff_x19 + 0x48c) ||
                        ((int)unaff_x19[0x65] <= (int)unaff_x19[0x94])))) {
                      in_stack_000017b4 = '\x01';
                    }
                    lVar22 = *plVar2;
                    if ((lVar22 == 0) || (lVar37 = *(long *)(lVar22 + 0x50), lVar37 == 0))
                    goto LAB_0249920c;
                    uVar49 = *(uint *)(unaff_x19 + 0x94);
                    if (*(uint *)(lVar37 + 0x18) <= uVar49)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    lVar51 = lVar37 + (long)(int)uVar49 * 0x5c;
                    *(int *)(lVar51 + 0x34) = (int)unaff_x19[0x92];
                    iVar16 = (int)unaff_x19[0x92];
                    if ((int)unaff_x19[0x92] <= *(int *)((long)unaff_x19 + 0x494)) {
                      iVar16 = *(int *)((long)unaff_x19 + 0x494);
                    }
                    *(int *)((long)unaff_x19 + 0x494) = iVar16;
                    *(int *)(lVar51 + 0x38) = iVar16;
                    *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x48c);
                    *(undefined4 *)(lVar51 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x48c);
                    iVar16 = *(int *)((long)unaff_x19 + 0x494);
                    if (*(int *)((long)unaff_x19 + 0x494) <= *(int *)((long)unaff_x19 + 0x49c)) {
                      iVar16 = *(int *)((long)unaff_x19 + 0x49c);
                    }
                    *(int *)((long)unaff_x19 + 0x49c) = iVar16;
                    *(int *)(lVar51 + 0x40) = iVar16;
                    *(int *)(lVar51 + 0x24) =
                         (*(int *)(lVar51 + 0x3c) - *(int *)(lVar51 + 0x34)) + 1;
                    *(undefined4 *)(lVar51 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
                    lVar22 = *(long *)(lVar22 + 0x38);
                    if (lVar22 == 0) goto LAB_0249920c;
                    if (*(uint *)(lVar22 + 0x18) <= *(uint *)((long)unaff_x19 + 0x494))
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    uVar88 = *(undefined4 *)
                              (lVar22 + (long)(int)*(uint *)((long)unaff_x19 + 0x494) * 0x178 +
                              0x11c);
                    lVar37 = lVar37 + (long)(int)uVar49 * 0x5c;
                    *(float *)(lVar37 + 0x70) = fVar62;
                    *(undefined4 *)(lVar37 + 0x6c) = uVar88;
                    lVar22 = *plVar2;
                    if ((lVar22 == 0) || (lVar37 = *(long *)(lVar22 + 0x50), lVar37 == 0))
                    goto LAB_0249920c;
                    if (*(uint *)(lVar37 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    lVar22 = *(long *)(lVar22 + 0x38);
                    if (lVar22 == 0) goto LAB_0249920c;
                    if (*(uint *)(lVar22 + 0x18) <= *(uint *)((long)unaff_x19 + 0x49c))
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    uVar88 = *(undefined4 *)
                              (lVar22 + (long)(int)*(uint *)((long)unaff_x19 + 0x49c) * 0x178 +
                              0x128);
                    fVar83 = fVar83 - fVar78;
                    lVar37 = lVar37 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                    *(float *)(lVar37 + 0x78) = fVar83;
                    *(undefined4 *)(lVar37 + 0x74) = uVar88;
                    lVar22 = *plVar2;
                    if ((lVar22 == 0) || (lVar51 = *(long *)(lVar22 + 0x50), lVar51 == 0))
                    goto LAB_0249920c;
                    lVar26 = (long)(int)*(uint *)(unaff_x19 + 0x94);
                    if (*(uint *)(lVar51 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    lVar37 = lVar51 + lVar26 * 0x5c;
                    *(float *)(lVar37 + 0x44) = *(float *)(lVar37 + 0x74) - fVar60 * fVar55;
                    *(float *)(lVar37 + 0x5c) = fStack00000000000000d4;
                    if (*(int *)(lVar37 + 0x24) == 1) {
                      *(int *)(lVar51 + lVar26 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
                    }
                    if ((*in_stack_00000138 == 0) ||
                       (lVar37 = *(long *)(lVar22 + 0x38), lVar37 == 0)) goto LAB_0249920c;
                    lVar46 = (long)(int)*(uint *)((long)unaff_x19 + 0x49c);
                    uVar40 = (uint)*(undefined8 *)(lVar37 + 0x18);
                    if (uVar40 <= *(uint *)((long)unaff_x19 + 0x49c))
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    if ((*(char *)(lVar37 + lVar46 * 0x178 + 0x194) == '\0') &&
                       (lVar46 = (long)(int)*(uint *)(unaff_x19 + 0x93),
                       uVar40 <= *(uint *)(unaff_x19 + 0x93)))
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    fVar60 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                             (fVar56 * (fVar75 + fStack00000000000000cc +
                                                 *(float *)(*in_stack_00000138 + 0x1ac)) -
                             *(float *)((long)unaff_x19 + 0x2a4));
                    fVar87 = -fVar60;
                    if ((char)unaff_x19[0x1d] != '\0') {
                      fVar87 = fVar60;
                    }
                    lVar51 = lVar51 + lVar26 * 0x5c;
                    *(float *)(lVar51 + 0x58) = *(float *)(lVar37 + lVar46 * 0x178 + 0x144) + fVar87
                    ;
                    fVar87 = *(float *)(unaff_x19 + 0x9a);
                    *(float *)(lVar51 + 0x48) = fStack0000000000000054 * fVar54 + (fVar83 - fVar62);
                    *(float *)(lVar51 + 0x4c) = fVar83;
                    uVar70 = (ulong)(uint)(0.0 - fVar87);
                    *(float *)(lVar51 + 0x50) = 0.0 - fVar87;
                    *(float *)(lVar51 + 0x54) = fVar62;
                    unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
                    if ((int)uVar15 < 0x2d) {
                      if (uVar15 - 10 < 2) {
UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__OnSelectEntering:
                        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        unaff_x28 = (long *)StringLiteral_302;
                        unaff_x26 = (undefined8 *)&stack0x00000880;
                        FUN_024d69d4();
                        lVar22 = unaff_x19[0x6c];
                        *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
                        iVar16 = (int)unaff_x19[0x94] + 1;
                        *(int *)(unaff_x19 + 0x94) = iVar16;
                        *(int *)(unaff_x19 + 0x92) = *(int *)((long)unaff_x19 + 0x48c) + 1;
                        if ((lVar22 != 0) && (*(long *)(lVar22 + 0x50) != 0)) {
                          if (*(int *)(*(long *)(lVar22 + 0x50) + 0x18) <= iVar16) {
                            FUN_024d6e60();
                            lVar22 = unaff_x19[0x6c];
                            if (lVar22 == 0) goto LAB_0249920c;
                          }
                          lVar22 = *(long *)(lVar22 + 0x38);
                          if (lVar22 != 0) {
                            if (*puVar1 < *(uint *)(lVar22 + 0x18)) {
                              fVar87 = *(float *)(lVar22 + (long)(int)*puVar1 * 0x178 + 0x154);
                              if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
                                fVar62 = 0.0;
                                if ((uVar15 == 0x2029) || (uVar15 == 10)) {
                                  fVar62 = *(float *)((long)unaff_x19 + 0x2c4);
                                }
                                uVar32 = 0;
                                fVar62 = *(float *)(unaff_x19 + 0x9a) +
                                         fVar87 + (0.0 - *(float *)((long)unaff_x19 + 0x4c4)) +
                                         fStack0000000000000054 *
                                         (fVar54 + *(float *)((long)unaff_x19 + 0x2b4)) +
                                         fVar56 * (*(float *)(unaff_x19 + 0x56) + fVar62);
                              }
                              else {
                                if ((uVar15 == 0x2029) || (fVar62 = 0.0, uVar15 == 10)) {
                                  fVar62 = *(float *)((long)unaff_x19 + 0x2c4);
                                }
                                uVar32 = 1;
                                fVar62 = *(float *)(unaff_x19 + 0x9a) +
                                         *(float *)(unaff_x19 + 0x57) +
                                         fVar56 * (*(float *)(unaff_x19 + 0x56) + fVar62);
                              }
                              *(float *)(unaff_x19 + 0x9a) = fVar62;
                              *(undefined1 *)((long)unaff_x19 + 700) = uVar32;
                              lVar22 = *unaff_x29;
                              if (*(int *)(lVar22 + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                                lVar22 = *unaff_x29;
                              }
                              uVar31 = *(undefined8 *)(*(long *)(lVar22 + 0xb8) + 0x15a8);
                              *(float *)(unaff_x19 + 0x99) = fVar87;
                              uVar70 = NEON_rev64(uVar31,4);
                              unaff_x19[0x98] = uVar70;
                              *(float *)(unaff_x19 + 199) =
                                   *(float *)(unaff_x19 + 0x80) + 0.0 +
                                   *(float *)((long)unaff_x19 + 0x404);
                              FUN_024d69d4();
                              FUN_024d69d4();
                              *(int *)((long)unaff_x19 + 0x48c) =
                                   *(int *)((long)unaff_x19 + 0x48c) + 1;
                              bVar8 = true;
                              bVar9 = 1;
                              goto LAB_02492630;
                            }
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                          }
                        }
                        goto LAB_0249920c;
                      }
                      if (uVar15 == 3) {
                        if (unaff_x19[0x8e] == 0) goto LAB_0249920c;
                        uVar93 = (uint)*(undefined8 *)(unaff_x19[0x8e] + 0x18);
                        uVar42 = 3;
                      }
                    }
                    else if ((uVar15 - 0x2028 < 2) || (uVar15 == 0x2d))
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__OnSelectEntering;
                  }
LAB_0249572c:
                  uVar49 = *puVar1;
                  if (uVar40 <= uVar49)
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  if (*(char *)(lVar37 + (long)(int)uVar49 * 0x178 + 0x194) != '\0') {
                    lVar37 = lVar37 + (long)(int)uVar49 * 0x178;
                    uVar25 = *(ulong *)(lVar37 + 0x11c);
                    uVar70 = *(ulong *)((long)unaff_x19 + 0x4d4);
                    *(ulong *)((long)unaff_x19 + 0x4d4) =
                         uVar25 ^ (uVar25 ^ uVar70) &
                                  CONCAT44(-(uint)((float)(uVar70 >> 0x20) < (float)(uVar25 >> 0x20)
                                                  ),-(uint)((float)uVar70 < (float)uVar25));
                    uVar25 = *(ulong *)((long)unaff_x19 + 0x4dc);
                    uVar70 = *(ulong *)(lVar37 + 0x128);
                    *(ulong *)((long)unaff_x19 + 0x4dc) =
                         uVar70 ^ (uVar70 ^ uVar25) &
                                  CONCAT44(-(uint)((float)(uVar70 >> 0x20) < (float)(uVar25 >> 0x20)
                                                  ),-(uint)((float)uVar70 < (float)uVar25));
                  }
                  if (((int)unaff_x19[0x5b] == 5) &&
                     ((0xd < uVar42 || ((1 << (ulong)(uVar42 & 0x1f) & 0x2c00U) == 0)))) {
                    lVar37 = *(long *)(lVar22 + 0x58);
                    if (lVar37 == 0) goto LAB_0249920c;
                    iVar16 = (int)unaff_x19[0x95] + 1;
                    if (*(int *)(lVar37 + 0x18) < iVar16) {
                      if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      FUN_01147c08((long *)(lVar22 + 0x58),iVar16,1,
                                   *(undefined8 *)
                                    Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerMove__
                                  );
                      lVar22 = *plVar2;
                      if (lVar22 == 0) goto LAB_0249920c;
                    }
                    lVar37 = *(long *)(lVar22 + 0x58);
                    if (lVar37 == 0) goto LAB_0249920c;
                    uVar40 = *(uint *)(unaff_x19 + 0x95);
                    lVar51 = (long)(int)uVar40;
                    uVar49 = *(uint *)(lVar37 + 0x18);
                    if (uVar49 <= uVar40)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    lVar26 = lVar37 + lVar51 * 0x14;
                    fVar62 = *(float *)(lVar26 + 0x30);
                    uVar70 = (ulong)(uint)fVar62;
                    *(undefined4 *)(lVar26 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
                    fVar87 = *(float *)((long)unaff_x19 + 0x4bc);
                    if (fVar62 <= *(float *)((long)unaff_x19 + 0x4bc)) {
                      fVar87 = fVar62;
                    }
                    *(float *)(lVar26 + 0x30) = fVar87;
                    uVar42 = *(uint *)((long)unaff_x19 + 0x48c);
                    if (uVar42 == 0 && uVar40 == 0) {
                      *(uint *)(lVar37 + lVar51 * 0x14 + 0x20) = uVar42;
                    }
                    else {
                      uVar48 = uVar42 - 1;
                      if (0 < (int)uVar42) {
                        lVar22 = *(long *)(lVar22 + 0x38);
                        if (lVar22 == 0) goto LAB_0249920c;
                        if (*(uint *)(lVar22 + 0x18) <= uVar48)
                        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                        if (uVar40 != *(uint *)(lVar22 + (long)(int)uVar48 * 0x178 + 0x68)) {
                          if (uVar40 - 1 < uVar49) {
                            *(uint *)(lVar37 + 0x20 + (long)(int)(uVar40 - 1) * 0x14 + 4) = uVar48;
                            *(uint *)(lVar37 + 0x20 + lVar51 * 0x14) = uVar42;
                            goto LAB_024957b0;
                          }
                          goto 
                          UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                        }
                      }
                      if (uVar42 == uVar21) {
                        *(uint *)(lVar37 + lVar51 * 0x14 + 0x24) = uVar21;
                      }
                    }
                  }
LAB_024957b0:
                  puVar10 = System_Threading_Mutex_TypeInfo;
                  if (((char)unaff_x19[0x5a] != '\0') ||
                     ((*(uint *)(unaff_x19 + 0x5b) < 7 &&
                      ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5b) & 0x1f) & 0x4aU) != 0)))) {
                    if ((uVar17 == 0) &&
                       (((uVar15 != 0x2d && (uVar15 != 0x200b)) && (uVar15 != 0xad)))) {
                      if (*(char *)((long)unaff_x19 + 0x2d2) == '\0') {
LAB_02495868:
                        if (((((0x2bfd < uVar15 - 0xac01) && (0x1d < uVar15 - 0xa961)) &&
                             (0xfd < uVar15 - 0x1101)) ||
                            (uVar25 = FUN_024e95f0(0), (uVar25 & 1) != 0)) &&
                           ((((0xed < uVar15 - 0xff01 && (0x1d < uVar15 - 0xfe31)) &&
                             (0x717d < uVar15 - 0x2e81)) && (0x1fd < uVar15 - 0xf901))))
                        goto LAB_024958f0;
                        lVar22 = FUN_024e94b0(0);
                        if ((lVar22 == 0) || (*(long *)(lVar22 + 0x10) == 0)) goto LAB_0249920c;
                        dVar91 = (double)(ulong)uVar15;
                        uVar25 = FUN_0129aa60(*(long *)(lVar22 + 0x10),&stack0x00000880,
                                              *(undefined8 *)
                                               System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                                             );
                        if ((int)*puVar1 < (int)uVar21) {
                          lVar22 = FUN_024e94b0(0);
                          if (((lVar22 != 0) && (*plVar2 != 0)) &&
                             (lVar37 = *(long *)(*plVar2 + 0x38), lVar37 != 0)) {
                            if (*(uint *)(lVar37 + 0x18) <= *puVar1 + 1)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                            if (*(long *)(lVar22 + 0x18) != 0) {
                              dVar91 = (double)(ulong)*(ushort *)
                                                       (lVar37 + (long)(int)(*puVar1 + 1) * 0x178 +
                                                       0x20);
                              uVar29 = FUN_0129aa60(*(long *)(lVar22 + 0x18),&stack0x00000880,
                                                    *(undefined8 *)
                                                                                                          
                                                  System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                                                  );
                              if ((uVar25 & 1) != 0) goto LAB_02495adc;
                              if ((uVar29 & 1) == 0) goto LAB_02495bc4;
                              if (bVar9 != 0) goto joined_r0x02495af4;
                              goto LAB_024959d4;
                            }
                          }
                          goto LAB_0249920c;
                        }
                        if ((uVar25 & 1) == 0) {
LAB_02495bc4:
                          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          FUN_024d69d4();
                          bVar9 = 0;
                          goto LAB_02495b70;
                        }
LAB_02495adc:
                        if (uVar43 != uVar34 || ((bVar9 ^ 0xff) & 1) != 0) goto LAB_02495b70;
joined_r0x02495af4:
                        if (uVar17 != 0) goto LAB_02495af8;
                      }
                      else {
LAB_024958f0:
                        if (bVar9 == 0) {
LAB_024959d4:
                          bVar9 = 0;
                          goto LAB_02495b70;
                        }
                        if (!(bool)(uVar15 == 0xad & (bVar12 ^ 1U))) goto joined_r0x02495af4;
LAB_02495af8:
                        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        FUN_024d69d4();
                      }
                      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      FUN_024d69d4();
                      bVar9 = 1;
                    }
                    else {
                      if (*(char *)((long)unaff_x19 + 0x2d2) == '\x01') goto LAB_024958f0;
                      if (((uVar15 - 0x2007 < 0x29) &&
                          ((1L << ((ulong)(uVar15 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
                         ((uVar15 == 0xa0 || (uVar15 == 0x2060)))) goto LAB_02495868;
                      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      FUN_024d69d4();
                      bVar9 = 0;
                      *(undefined4 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0xe78) = 0xffffffff;
                    }
                  }
LAB_02495b70:
                  unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
                  if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  unaff_x28 = (long *)StringLiteral_302;
                  unaff_x26 = (undefined8 *)&stack0x00000880;
                  FUN_024d69d4();
                  *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
                  goto LAB_02492630;
                }
                *(undefined1 *)(lVar37 + 0x194) = 1;
                pfVar38 = (float *)((long)unaff_x19 + 0x34c);
                pfVar41 = (float *)(unaff_x19 + 0x69);
                if (bVar7) {
                  lVar22 = *(long *)(lVar22 + 0x50);
                  if (lVar22 == 0) goto LAB_0249920c;
                  if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                  pfVar41 = (float *)(lVar22 + 0x60);
                  pfVar38 = (float *)(lVar22 + 100);
                }
                fVar78 = *pfVar41;
                fVar83 = *pfVar38;
                fVar62 = *(float *)(unaff_x19 + 0x6b);
                fVar61 = *(float *)(unaff_x19 + 199);
                fStack00000000000000d4 = (fVar86 - fVar78) - fVar83;
                bVar13 = true;
                if ((fVar62 <= fStack00000000000000d4) && (bVar13 = false, !NAN(fVar62))) {
                  bVar13 = fVar62 == -1.0;
                }
                if (!bVar13) {
                  fStack00000000000000d4 = fVar62;
                }
                fVar62 = 0.0;
                if ((char)unaff_x19[0x1d] == '\0') {
                  fVar62 = (float)FUN_026fd474(&stack0x00001770,0);
                  uVar70 = (ulong)*(uint *)(unaff_x19 + 0x9a);
                }
                fVar80 = *(float *)((long)unaff_x19 + 0x4c4);
                fVar64 = *(float *)((long)unaff_x19 + 0x2cc);
                fVar76 = (float)uVar70;
                if (uVar15 != 0xad) {
                  fVar87 = fVar60;
                }
                fVar77 = 0.0;
                if ((0.0 < fVar76) && (fVar77 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
                  fVar77 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
                }
                fVar77 = (*(float *)(unaff_x19 + 0x96) - (fVar80 - fVar76)) + fVar77;
                uVar49 = *puVar1;
                if (fVar77 <= fVar72) {
UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor__get_playHapticsOnHoverExited:
                  unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
                  fVar76 = 1.0 - fVar64;
                  uVar70 = (ulong)(uint)fVar76;
                  fVar62 = ABS(fVar61) + fVar62 * fVar76 * fVar87;
                  fVar87 = _DAT_0294c6e8;
                  if ((uVar40 & 0x18) == 0) {
                    fVar87 = 1.0;
                  }
                  if (fVar62 <= fVar87 * fStack00000000000000d4) {
LAB_02494950:
                    if (uVar15 != 0xad) {
                      if (uVar15 == 9) {
                        lVar22 = *plVar2;
                        if ((lVar22 != 0) && (lVar37 = *(long *)(lVar22 + 0x38), lVar37 != 0)) {
                          uVar49 = *puVar1;
                          if (*(uint *)(lVar37 + 0x18) <= uVar49)
                          goto 
                          UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                          *(undefined1 *)(lVar37 + (long)(int)uVar49 * 0x178 + 0x194) = 0;
                          *(uint *)((long)unaff_x19 + 0x49c) = uVar49;
                          lVar37 = *(long *)(lVar22 + 0x50);
                          if (lVar37 != 0) {
                            if (*(uint *)(unaff_x19 + 0x94) < *(uint *)(lVar37 + 0x18)) {
                              lVar37 = lVar37 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                              *(int *)(lVar37 + 0x2c) = *(int *)(lVar37 + 0x2c) + 1;
                              goto LAB_024949c4;
                            }
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                          }
                        }
                      }
                      else {
                        if (*(int *)((long)unaff_x19 + 0x63c) == 1) {
                          (**(code **)(*unaff_x19 + 0x8c8))();
                        }
                        else if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
                          (**(code **)(*unaff_x19 + 0x8b8))(fVar55,fVar65);
                        }
                        if (bVar8) {
                          *(uint *)((long)unaff_x19 + 0x494) = *puVar1;
                        }
                        *(uint *)((long)unaff_x19 + 0x49c) = *puVar1;
                        *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
                        if ((unaff_x19[0x6c] != 0) &&
                           (lVar22 = *(long *)(unaff_x19[0x6c] + 0x50), lVar22 != 0)) {
                          if (*(uint *)(unaff_x19 + 0x94) < *(uint *)(lVar22 + 0x18)) {
                            lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                            bVar8 = false;
                            *(float *)(lVar22 + 0x60) = fVar78;
                            *(float *)(lVar22 + 100) = fVar83;
                            goto LAB_02494abc;
                          }
                          goto 
                          UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                        }
                      }
                      goto LAB_0249920c;
                    }
                    if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x38), lVar22 == 0))
                    goto LAB_0249920c;
                    if (*(uint *)(lVar22 + 0x18) <= *puVar1)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    *(undefined1 *)(lVar22 + (long)(int)*puVar1 * 0x178 + 0x194) = 0;
                    goto LAB_02494abc;
                  }
                  if (((char)unaff_x19[0x5a] != '\0') && (uVar49 != *(uint *)(unaff_x19 + 0x92))) {
                    if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar93 = FUN_024d66ec();
                    if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
                      lVar22 = *plVar2;
                      if ((lVar22 == 0) || (lVar37 = *(long *)(lVar22 + 0x38), lVar37 == 0))
                      goto LAB_0249920c;
                      if (*(uint *)(lVar37 + 0x18) <= *puVar1)
                      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                      fVar61 = *(float *)(unaff_x19 + 0x9a);
                      fVar64 = 0.0;
                      if ((0.0 < fVar61) && (fVar64 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')
                         ) {
                        fVar64 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
                      }
                      fVar64 = fVar56 * *(float *)(unaff_x19 + 0x56) +
                               *(float *)(lVar37 + (long)(int)*puVar1 * 0x178 + 0x154) +
                               (fVar64 - *(float *)((long)unaff_x19 + 0x4c4)) +
                               fStack0000000000000054 *
                               (fVar54 + *(float *)((long)unaff_x19 + 0x2b4));
                    }
                    else {
                      lVar22 = unaff_x19[0x6c];
                      *(undefined1 *)((long)unaff_x19 + 700) = 1;
                      if (lVar22 == 0) goto LAB_0249920c;
                      fVar61 = *(float *)(unaff_x19 + 0x9a);
                      fVar64 = *(float *)(unaff_x19 + 0x57) + fVar56 * *(float *)(unaff_x19 + 0x56);
                    }
                    puVar10 = System_Threading_Mutex_TypeInfo;
                    lVar22 = *(long *)(lVar22 + 0x38);
                    if (lVar22 != 0) {
                      uVar42 = *(uint *)((long)unaff_x19 + 0x48c);
                      if ((*(uint *)(lVar22 + 0x18) <= uVar42) ||
                         (uVar48 = uVar42 - 1, *(uint *)(lVar22 + 0x18) <= uVar48))
                      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                      uVar70 = (ulong)(uint)(fVar64 + *(float *)(unaff_x19 + 0x96));
                      fVar76 = (fVar64 + *(float *)(unaff_x19 + 0x96) + fVar61) -
                               *(float *)(lVar22 + (long)(int)uVar42 * 0x178 + 0x158);
                      if ((bVar12 || *(short *)(lVar22 + (long)(int)uVar48 * 0x178 + 0x20) != 0xad)
                         || ((fVar72 <= fVar76 && ((int)unaff_x19[0x5b] != 0)))) {
                        if (*(short *)(lVar22 + (long)(int)uVar42 * 0x178 + 0x20) == 0xad) {
                          bVar12 = true;
                        }
                        else {
                          if ((bVar9 & *(byte *)(unaff_x19 + 0x46)) != 0) {
                            fVar64 = *(float *)((long)unaff_x19 + 0x2cc);
                            fVar61 = *(float *)(unaff_x19 + 0x59) / 100.0;
                            if ((fVar61 <= fVar64) ||
                               ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c))) {
                              fVar64 = *(float *)((long)unaff_x19 + 0x1dc);
                              uVar70 = (ulong)(uint)fVar64;
                              fVar61 = *(float *)(unaff_x19 + 0x49);
                              if ((fVar61 < fVar64) &&
                                 (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
                              goto LAB_02499210;
                              goto LAB_024946c0;
                            }
LAB_024992ac:
                            fVar54 = fVar62;
                            if (0.0 < fVar64) {
                              fVar54 = fVar62 / (1.0 - fVar64);
                            }
                            fVar64 = fVar64 + (fVar62 - fVar87 * (fStack00000000000000d4 +
                                                                 DAT_02958218)) / fVar54;
LAB_0249929c:
                            if (fVar61 <= fVar64) {
                              fVar64 = fVar61;
                            }
                            *(float *)((long)unaff_x19 + 0x2cc) = fVar64;
                            return;
                          }
LAB_024946c0:
                          lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
                          if (*(int *)(lVar22 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                            lVar22 = *(long *)puVar10;
                          }
                          iVar16 = *(int *)(*(long *)(lVar22 + 0xb8) + 0xe78);
                          if ((((float)iVar16 != fStack0000000000000034) && (iVar16 != -1)) &&
                             (bVar9 == 1)) {
                            if (*(int *)(lVar22 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar93 = FUN_024d66ec();
                            if ((unaff_x19[0x6c] == 0) ||
                               (lVar22 = *(long *)(unaff_x19[0x6c] + 0x38), lVar22 == 0))
                            goto LAB_0249920c;
                            uVar48 = *puVar1 - 1;
                            if (*(uint *)(lVar22 + 0x18) <= uVar48)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                            fStack0000000000000034 = (float)iVar16;
                            if (*(short *)(lVar22 + (long)(int)uVar48 * 0x178 + 0x20) == 0xad) {
                              *puVar1 = uVar48;
                              goto LAB_024947b4;
                            }
                          }
                          if (fVar72 < fVar76) {
                            if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
                              *(undefined4 *)((long)unaff_x19 + 0x2dc) =
                                   *(undefined4 *)((long)unaff_x19 + 0x48c);
                            }
                            unaff_x28 = (long *)StringLiteral_302;
                            unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
                            if ((char)unaff_x19[0x46] != '\0') {
                              fVar61 = *(float *)(unaff_x19 + 0x58);
                              if ((fVar61 < *(float *)((long)unaff_x19 + 0x2b4)) &&
                                 (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                                fVar54 = *(float *)((long)unaff_x19 + 0x2b4) +
                                         ((fVar89 - fVar76) / (float)((int)unaff_x19[0x94] + 1)) /
                                         fStack0000000000000054;
                                if (fVar54 <= fVar61) {
                                  fVar54 = fVar61;
                                }
LAB_024964c8:
                                *(float *)((long)unaff_x19 + 0x2b4) = fVar54;
                                return;
                              }
                              fVar64 = *(float *)((long)unaff_x19 + 0x2cc);
                              fVar61 = *(float *)(unaff_x19 + 0x59) / 100.0;
                              if ((fVar64 < fVar61) &&
                                 (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
                              goto LAB_024992ac;
                              fVar64 = *(float *)((long)unaff_x19 + 0x1dc);
                              uVar70 = (ulong)(uint)fVar64;
                              fVar61 = *(float *)(unaff_x19 + 0x49);
                              if ((fVar61 < fVar64) &&
                                 (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
                              goto LAB_02499210;
                            }
                            switch((int)unaff_x19[0x5b]) {
                            case 0:
                            case 2:
                            case 4:
                              uVar70 = uVar27;
                              FUN_024d7014(fStack0000000000000054,uVar27,fVar56,
                                           *(undefined4 *)((long)unaff_x19 + 0x2f4),fVar75,
                                           fStack00000000000000cc,fStack00000000000000d4,fVar54);
                              break;
                            case 1:
                              lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
                              if (*(int *)(lVar22 + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                                lVar22 = *unaff_x29;
                              }
                              lVar37 = *(long *)(lVar22 + 0xb8);
                              lVar22 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
                              if ((*(byte *)(lVar22 + 0x132) & 1) == 0) {
                                lVar22 = FUN_00d5941c(lVar22);
                              }
                              lVar22 = *(long *)(*(long *)(lVar22 + 0xc0) + 8);
                              if ((*(byte *)(lVar22 + 0x132) & 1) == 0) {
                                lVar22 = FUN_00d5941c();
                              }
                              piVar28 = (int *)thunk_FUN_00d32ed4(lVar37 + 0x11f0,
                                                                  *(long *)(lVar22 + 0x80) + 0xa0);
                              if (*piVar28 == 0) {
                                bVar12 = false;
                                goto LAB_02495f00;
                              }
                              lVar22 = *unaff_x29;
                              if (*(int *)(lVar22 + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                                lVar22 = *unaff_x29;
                              }
                              FUN_013b8de4(*(long *)(lVar22 + 0xb8) + 0x11f0,&stack0x00000880,
                                           *(undefined8 *)
                                            Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                                          );
                              memcpy(&stack0x00000fe8,&stack0x00000880,0x378);
                              iVar16 = FUN_024d66ec();
                              bVar12 = false;
                              goto LAB_02494364;
                            case 3:
                              if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                              }
                              uVar93 = FUN_024d66ec();
                              bVar12 = false;
                              goto LAB_0249408c;
                            case 5:
                              *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
                              uVar70 = uVar27;
                              FUN_024d7014(fStack0000000000000054,uVar27,fVar56,
                                           *(undefined4 *)((long)unaff_x19 + 0x2f4),fVar75,
                                           fStack00000000000000cc,fStack00000000000000d4,fVar54);
                              *(undefined4 *)(unaff_x19 + 0x99) = 0;
                              *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                              *(undefined8 *)((long)unaff_x19 + 0x4ac) = 0;
                              *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
                              break;
                            case 6:
                              lVar22 = unaff_x19[0x5c];
                              if (*(int *)(*(long *)
                                            System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                          + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                              }
                              uVar25 = FUN_02681b9c(lVar22,0,0);
                              if ((uVar25 & 1) != 0) {
                                plVar52 = (long *)unaff_x19[0x5c];
                                uVar31 = (**(code **)(*unaff_x19 + 0x548))();
                                if (plVar52 == (long *)0x0) goto LAB_0249920c;
                                (**(code **)(*plVar52 + 0x558))
                                          (plVar52,uVar31,*(undefined8 *)(*plVar52 + 0x560));
                                lVar22 = unaff_x19[0x5c];
                                if (lVar22 == 0) goto LAB_0249920c;
                                *(int *)(lVar22 + 0x3f8) = (int)unaff_x19[0x7f];
                                FUN_024c910c(lVar22,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
                                plVar52 = (long *)unaff_x19[0x5c];
                                if (plVar52 == (long *)0x0) goto LAB_0249920c;
                                (**(code **)(*plVar52 + 0x7d8))
                                          (plVar52,0,0,*(undefined8 *)(*plVar52 + 0x7e0));
                                *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                              }
                              bVar12 = false;
                              goto LAB_02494484;
                            default:
                              bVar12 = false;
                              goto LAB_02494950;
                            }
                            bVar12 = false;
                            bVar9 = 1;
                            bVar8 = true;
                            goto LAB_024944c4;
                          }
                          uVar70 = uVar27;
                          FUN_024d7014(fStack0000000000000054,uVar27,fVar56,
                                       *(undefined4 *)((long)unaff_x19 + 0x2f4),fVar75,
                                       fStack00000000000000cc,fStack00000000000000d4,fVar54);
                          bVar9 = 1;
                          bVar12 = false;
                          bVar8 = true;
                        }
                      }
                      else {
                        *puVar1 = uVar48;
LAB_024947b4:
                        in_stack_000017a8 = CONCAT44(0x2d,uVar48);
                        uVar93 = uVar93 - 1;
                        bVar12 = false;
                      }
                      unaff_x26 = (undefined8 *)&stack0x00000880;
                      unaff_x28 = (long *)StringLiteral_302;
                      unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
                      goto LAB_02492630;
                    }
                    goto LAB_0249920c;
                  }
                  if (((char)unaff_x19[0x46] != '\0') &&
                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                    fVar61 = *(float *)(unaff_x19 + 0x59) / 100.0;
                    if (fVar64 < fVar61) {
                      fVar54 = fVar62 / fVar76;
                      if (fVar64 <= 0.0) {
                        fVar54 = fVar62;
                      }
                      fVar64 = fVar64 + (fVar62 - fVar87 * (fStack00000000000000d4 + DAT_02958218))
                                        / fVar54;
                      goto LAB_0249929c;
                    }
                    fVar64 = *(float *)((long)unaff_x19 + 0x1dc);
                    uVar70 = (ulong)(uint)fVar64;
                    fVar61 = *(float *)(unaff_x19 + 0x49);
                    if (fVar64 <= fVar61) goto LAB_02493e34;
LAB_02499210:
                    fVar54 = (fVar64 - *(float *)(unaff_x19 + 0x47)) * 0.5;
                    if (fVar54 <= DAT_028aa298) {
                      fVar54 = DAT_028aa298;
                    }
                    *(float *)((long)unaff_x19 + 0x234) = fVar64;
                    fVar55 = (fVar64 - fVar54) * 20.0 + 0.5;
                    fVar54 = DAT_02958220;
                    if (fVar55 != INFINITY) {
                      fVar54 = (float)(int)fVar55 / 20.0;
                    }
                    if (fVar54 <= fVar61) {
                      fVar54 = fVar61;
                    }
                    goto LAB_02495fd8;
                  }
LAB_02493e34:
                  iVar16 = (int)unaff_x19[0x5b];
                  if (iVar16 == 1) {
                    lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
                    if (*(int *)(lVar22 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                      lVar22 = *unaff_x29;
                    }
                    unaff_x28 = (long *)StringLiteral_302;
                    lVar37 = *(long *)(lVar22 + 0xb8);
                    lVar22 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
                    if ((*(byte *)(lVar22 + 0x132) & 1) == 0) {
                      lVar22 = FUN_00d5941c(lVar22);
                    }
                    lVar22 = *(long *)(*(long *)(lVar22 + 0xc0) + 8);
                    if ((*(byte *)(lVar22 + 0x132) & 1) == 0) {
                      lVar22 = FUN_00d5941c();
                    }
                    piVar28 = (int *)thunk_FUN_00d32ed4(lVar37 + 0x11f0,
                                                        *(long *)(lVar22 + 0x80) + 0xa0);
                    if (*piVar28 == 0) goto LAB_02495f00;
                    lVar22 = *unaff_x29;
                    if (*(int *)(lVar22 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                      lVar22 = *unaff_x29;
                    }
                    FUN_013b8de4(*(long *)(lVar22 + 0xb8) + 0x11f0,&stack0x00000880,
                                 *(undefined8 *)
                                  Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                                );
                    memcpy(&stack0x00000c70,&stack0x00000880,0x378);
                    goto LAB_02494358;
                  }
                  if (iVar16 != 6) {
                    if (iVar16 == 3) {
                      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      goto LAB_02493ec0;
                    }
                    goto LAB_02494950;
                  }
                  if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  unaff_x28 = (long *)StringLiteral_302;
                  uVar93 = FUN_024d66ec();
                  lVar22 = unaff_x19[0x5c];
                  if (*(int *)(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              + 0xe0) == 0) {
                    thunk_FUN_00d32864(*(long *)
                                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                      );
                  }
                  uVar25 = FUN_02681b9c(lVar22,0,0);
                  if ((uVar25 & 1) != 0) {
                    plVar52 = (long *)unaff_x19[0x5c];
                    uVar31 = (**(code **)(*unaff_x19 + 0x548))();
                    if (plVar52 == (long *)0x0) goto LAB_0249920c;
                    (**(code **)(*plVar52 + 0x558))
                              (plVar52,uVar31,*(undefined8 *)(*plVar52 + 0x560));
                    lVar22 = unaff_x19[0x5c];
                    if (lVar22 == 0) goto LAB_0249920c;
                    *(int *)(lVar22 + 0x3f8) = (int)unaff_x19[0x7f];
                    FUN_024c910c(lVar22,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
                    plVar52 = (long *)unaff_x19[0x5c];
                    if (plVar52 == (long *)0x0) goto LAB_0249920c;
                    (**(code **)(*plVar52 + 0x7d8))(plVar52,0,0,*(undefined8 *)(*plVar52 + 0x7e0));
                    *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                  }
LAB_02494484:
                  unaff_x26 = (undefined8 *)&stack0x00000880;
                  in_stack_000017a8 = CONCAT44(3,*puVar1);
                }
                else {
                  if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
                    *(uint *)((long)unaff_x19 + 0x2dc) = uVar49;
                  }
                  unaff_x28 = (long *)StringLiteral_302;
                  unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
                  uVar31 = DAT_02941c08;
                  if ((char)unaff_x19[0x46] != '\0') {
                    fVar74 = *(float *)(unaff_x19 + 0x58);
                    if (((fVar74 < *(float *)((long)unaff_x19 + 0x2b4)) && (0.0 < fVar76)) &&
                       (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                      fVar54 = *(float *)((long)unaff_x19 + 0x2b4) +
                               ((fVar89 - fVar77) / (float)(int)unaff_x19[0x94]) /
                               fStack0000000000000054;
                      if (fVar54 <= fVar74) {
                        fVar54 = fVar74;
                      }
                      goto LAB_024964c8;
                    }
                    fVar77 = *(float *)((long)unaff_x19 + 0x1dc);
                    fVar76 = *(float *)(unaff_x19 + 0x49);
                    uVar70 = (ulong)(uint)fVar76;
                    if ((fVar76 < fVar77) &&
                       (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                      fVar54 = (fVar77 - *(float *)(unaff_x19 + 0x47)) * 0.5;
                      if (fVar54 <= DAT_028aa298) {
                        fVar54 = DAT_028aa298;
                      }
                      fVar55 = (fVar77 - fVar54) * 20.0 + 0.5;
                      fVar54 = DAT_02958220;
                      if (fVar55 != INFINITY) {
                        fVar54 = (float)(int)fVar55 / 20.0;
                      }
                      if (fVar54 <= fVar76) {
                        fVar54 = fVar76;
                      }
                      *(float *)((long)unaff_x19 + 0x234) = fVar77;
                      goto LAB_02495fd8;
                    }
                  }
                  switch((int)unaff_x19[0x5b]) {
                  case 1:
                    lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
                    if (*(int *)(lVar22 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                      lVar22 = *unaff_x29;
                    }
                    lVar37 = *(long *)(lVar22 + 0xb8);
                    lVar22 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
                    if ((*(byte *)(lVar22 + 0x132) & 1) == 0) {
                      lVar22 = FUN_00d5941c(lVar22);
                    }
                    unaff_x28 = (long *)StringLiteral_302;
                    lVar22 = *(long *)(*(long *)(lVar22 + 0xc0) + 8);
                    if ((*(byte *)(lVar22 + 0x132) & 1) == 0) {
                      lVar22 = FUN_00d5941c();
                    }
                    piVar28 = (int *)thunk_FUN_00d32ed4(lVar37 + 0x11f0,
                                                        *(long *)(lVar22 + 0x80) + 0xa0);
                    if (*piVar28 == 0) {
LAB_02495f00:
                      in_stack_000017a8 = DAT_02941c08;
                      unaff_x26 = (undefined8 *)&stack0x00000880;
                      puVar1[0] = 0;
                      puVar1[1] = 0;
                      uVar93 = 0xffffffff;
                    }
                    else {
                      lVar22 = *unaff_x29;
                      if (*(int *)(lVar22 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                        lVar22 = *unaff_x29;
                      }
                      FUN_013b8de4(*(long *)(lVar22 + 0xb8) + 0x11f0,&stack0x00000880,
                                   *(undefined8 *)
                                    Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                                  );
                      memcpy(&stack0x00001360,&stack0x00000880,0x378);
LAB_02494358:
                      iVar16 = FUN_024d66ec();
LAB_02494364:
                      unaff_x26 = (undefined8 *)&stack0x00000880;
                      iVar53 = *(int *)((long)unaff_x19 + 0x48c) + -1;
                      *(int *)((long)unaff_x19 + 0x48c) = iVar53;
                      in_stack_000017a8 = CONCAT44(0x2026,iVar53);
                      iVar20 = iVar20 + 1;
                      uVar93 = iVar16 - 1;
                    }
                    break;
                  default:
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor__get_playHapticsOnHoverExited
                    ;
                  case 3:
                    if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
LAB_02493ec0:
                    unaff_x28 = (long *)StringLiteral_302;
                    uVar93 = FUN_024d66ec();
                    goto LAB_0249408c;
                  case 5:
                    if ((uVar49 != 0) && (-1 < (int)uVar93)) {
                      fVar87 = *(float *)(unaff_x19 + 0x98);
                      unaff_x26 = (undefined8 *)&stack0x00000880;
                      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      uVar93 = FUN_024d66ec();
                      if (fVar87 - fVar80 <= fVar72) {
                        *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
                        *(undefined4 *)(unaff_x19 + 0x92) = *(undefined4 *)((long)unaff_x19 + 0x48c)
                        ;
                        uVar70 = *(ulong *)(*(long *)(*unaff_x29 + 0xb8) + 0x15a8);
                        *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
                        *(undefined4 *)(unaff_x19 + 0x99) = 0;
                        lVar22 = NEON_rev64(uVar70,4);
                        unaff_x19[0x98] = lVar22;
                        *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                        *(undefined8 *)((long)unaff_x19 + 0x4ac) = 0;
                        *(int *)(unaff_x19 + 0x94) = (int)unaff_x19[0x94] + 1;
                        *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
                        break;
                      }
                      goto LAB_0249408c;
                    }
                    uVar93 = 0xffffffff;
                    *puVar1 = 0;
                    in_stack_000017a8 = uVar31;
LAB_024944c4:
                    unaff_x26 = (undefined8 *)&stack0x00000880;
                    unaff_x28 = (long *)StringLiteral_302;
                    unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
                    break;
                  case 6:
                    if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar93 = FUN_024d66ec();
                    unaff_x28 = (long *)StringLiteral_302;
                    lVar22 = unaff_x19[0x5c];
                    if (*(int *)(*(long *)
                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                + 0xe0) == 0) {
                      thunk_FUN_00d32864(*(long *)
                                          System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                        );
                    }
                    uVar25 = FUN_02681b9c(lVar22,0,0);
                    if ((uVar25 & 1) != 0) {
                      plVar52 = (long *)unaff_x19[0x5c];
                      uVar31 = (**(code **)(*unaff_x19 + 0x548))();
                      if (plVar52 == (long *)0x0) goto LAB_0249920c;
                      (**(code **)(*plVar52 + 0x558))
                                (plVar52,uVar31,*(undefined8 *)(*plVar52 + 0x560));
                      lVar22 = unaff_x19[0x5c];
                      if (lVar22 == 0) goto LAB_0249920c;
                      *(int *)(lVar22 + 0x3f8) = (int)unaff_x19[0x7f];
                      FUN_024c910c(lVar22,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
                      plVar52 = (long *)unaff_x19[0x5c];
                      if (plVar52 == (long *)0x0) goto LAB_0249920c;
                      (**(code **)(*plVar52 + 0x7d8))(plVar52,0,0,*(undefined8 *)(*plVar52 + 0x7e0))
                      ;
                      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                    }
LAB_0249408c:
                    unaff_x26 = (undefined8 *)&stack0x00000880;
                    in_stack_000017a8 = CONCAT44(3,uVar49);
                  }
                }
LAB_02492630:
                uVar93 = uVar93 + 1;
                lVar22 = unaff_x19[0x8e];
                in_stack_000017bc = uVar15;
                if (lVar22 == 0) goto LAB_0249920c;
                goto LAB_02492378;
              }
            }
          }
        }
      }
    }
  }
  goto LAB_0249920c;
LAB_02496a50:
  do {
    uVar93 = uVar43 - 1;
    if (*(uint *)(lVar22 + 0x18) <= uVar93)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*plVar2 == 0) || (lVar37 = *(long *)(*plVar2 + 0x50), lVar37 == 0)) goto LAB_0249920c;
    lVar26 = (long)(int)uVar93;
    lVar51 = lVar22 + lVar26 * 0x178;
    uVar34 = *(uint *)(lVar51 + 100);
    if (*(uint *)(lVar37 + 0x18) <= uVar34)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar44 = *(long *)(lVar51 + 0x38);
    uVar5 = *(ushort *)(lVar51 + 0x20);
    lVar46 = (long)(int)uVar34;
    lVar37 = lVar37 + lVar46 * 0x5c;
    uVar40 = *(uint *)(lVar37 + 0x3c);
    iVar18 = *(int *)(lVar37 + 0x28);
    iVar19 = *(int *)(lVar37 + 0x2c);
    uVar42 = *(uint *)(lVar37 + 0x40);
    lVar51 = (long)(int)uVar42;
    uVar49 = *(uint *)(lVar37 + 0x68);
    fVar60 = *(float *)(lVar37 + 0x5c);
    fVar83 = *(float *)(lVar37 + 0x60);
    iVar4 = *(int *)(lVar37 + 0x20);
    fVar73 = *(float *)(lVar37 + 0x4c);
    fVar72 = *(float *)(lVar37 + 0x54);
    fVar86 = *(float *)(lVar37 + 0x58);
    fVar62 = *(float *)(lVar37 + 0x6c);
    fVar87 = *(float *)(lVar37 + 0x70);
    fVar82 = *(float *)(lVar37 + 0x74);
    fVar94 = *(float *)(lVar37 + 0x78);
    fVar78 = fVar60 + fVar83;
    uVar48 = (uint)uVar5;
    if ((int)uVar49 < 9) {
      switch(uVar49) {
      case 1:
        if ((char)unaff_x19[0x1d] == '\0') {
          fStack00000000000000c8 = fVar83 + 0.0;
        }
        else {
          fStack00000000000000c8 = 0.0 - fVar86;
        }
        break;
      case 2:
LAB_02496c1c:
        fStack00000000000000c8 = (fVar83 + fVar60 * 0.5) - fVar86 * 0.5;
        break;
      default:
        goto switchD_02496b58_caseD_3;
      case 4:
        fStack00000000000000c8 = fVar78 - fVar86;
        if ((char)unaff_x19[0x1d] != '\0') {
          fStack00000000000000c8 = fVar78;
        }
        break;
      case 8:
        goto switchD_02496b58_caseD_8;
      }
LAB_02496c90:
      uStack00000000000000c0 = 0;
    }
    else if (uVar49 == 0x10) {
switchD_02496b58_caseD_8:
      if (uVar5 < 0xad) {
        if ((uVar48 != 3) && (uVar48 != 10)) goto LAB_02496bac;
      }
      else if ((uVar48 != 0xad) && ((uVar48 != 0x200b && (uVar48 != 0x2060)))) {
LAB_02496bac:
        if (*(uint *)(lVar22 + 0x18) <= uVar40)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar6 = *(undefined2 *)(lVar22 + (long)(int)uVar40 * 0x178 + 0x20);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar27 = FUN_016f9f84(uVar6,0);
        if ((uVar27 & 1) == 0) {
          bVar14 = (int)uVar34 < (int)unaff_x19[0x94];
        }
        else {
          bVar14 = false;
        }
        if ((fVar86 <= fVar60) && (!bVar14 && (uVar49 >> 4 & 1) == 0)) {
          fStack00000000000000c8 = fVar83;
          if ((char)unaff_x19[0x1d] != '\0') {
            fStack00000000000000c8 = fVar78;
          }
          goto LAB_02496c90;
        }
        if (((uVar43 == 1) || (uVar34 != uVar17)) || (uVar93 == *(uint *)((long)unaff_x19 + 0x31c)))
        {
          fStack00000000000000c8 = fVar83;
          if ((char)unaff_x19[0x1d] != '\0') {
            fStack00000000000000c8 = fVar78;
          }
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uStack0000000000000020 = FUN_016fa418(uVar5,0);
          uStack00000000000000c0 = 0;
        }
        else {
          cVar33 = (char)unaff_x19[0x1d];
          fVar78 = -fVar86;
          if (cVar33 != '\0') {
            fVar78 = fVar86;
          }
          if (*(uint *)(lVar22 + 0x18) <= uVar40)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar86 = 1.0;
          iVar19 = (int)*(char *)(lVar22 + (long)(int)uVar40 * 0x178 + 0x194) +
                   (-iVar4 - (uStack0000000000000020 & 1)) + iVar19 + -1;
          if (0 < iVar19) {
            fVar86 = *(float *)((long)unaff_x19 + 0x2d4);
          }
          if (iVar19 < 1) {
            iVar19 = 1;
          }
          if (uVar48 == 9) {
LAB_02498bb8:
            fVar86 = 1.0 - fVar86;
          }
          else {
            if (uVar48 != 0xa0) {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar27 = FUN_016fa418(uVar5,0);
              cVar33 = (char)unaff_x19[0x1d];
              if ((uVar27 & 1) != 0) goto LAB_02498bb8;
            }
            iVar19 = (iVar4 - (~uStack0000000000000020 & 1)) + iVar18;
          }
          fVar86 = ((fVar60 + fVar78) * fVar86) / (float)iVar19;
          if (cVar33 == '\0') {
            fStack00000000000000c8 = fStack00000000000000c8 + fVar86;
            uStack00000000000000c0 =
                 CONCAT44((float)((ulong)uStack00000000000000c0 >> 0x20) + 0.0,
                          (float)uStack00000000000000c0 + 0.0);
          }
          else {
            fStack00000000000000c8 = fStack00000000000000c8 - fVar86;
          }
        }
      }
    }
    else if (uVar49 == 0x20) {
      fVar86 = fVar62 + fVar82;
      goto LAB_02496c1c;
    }
switchD_02496b58_caseD_3:
    uVar49 = (uint)*(undefined8 *)(lVar22 + 0x18);
    if (uVar49 <= uVar93)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar37 = lVar22 + lVar26 * 0x178;
    fVar78 = fVar55 + fStack00000000000000c8;
    fVar86 = (float)uStack0000000000000090 + (float)uStack00000000000000c0;
    fVar60 = (float)((ulong)uStack0000000000000090 >> 0x20) +
             (float)((ulong)uStack00000000000000c0 >> 0x20);
    if (*(char *)(lVar37 + 0x194) == '\0') goto LAB_02497688;
    iVar18 = *(int *)(lVar22 + lVar26 * 0x178 + 0x2c);
    if (iVar18 != 0) goto LAB_02497374;
    fVar59 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)uVar34,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
    case 0:
      lVar36 = lVar22 + lVar26 * 0x178;
      *(undefined4 *)(lVar36 + 0x84) = 0;
      *(undefined4 *)(lVar36 + 0xac) = 0;
      *(undefined4 *)(lVar36 + 0xd4) = 0x3f800000;
      fVar59 = 1.0;
      break;
    case 1:
      fVar94 = *(float *)(lVar22 + lVar26 * 0x178 + 0x70);
      if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
        lVar36 = lVar22 + lVar26 * 0x178;
        fVar82 = (fStack00000000000000c8 + fVar94) - *(float *)((long)unaff_x19 + 0x4d4);
        fVar94 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4d4);
        goto LAB_02496df8;
      }
      lVar36 = lVar22 + lVar26 * 0x178;
      fVar82 = fVar82 - fVar62;
      *(float *)(lVar36 + 0x84) = fVar59 + (fVar94 - fVar62) / fVar82;
      *(float *)(lVar36 + 0xac) = fVar59 + (*(float *)(lVar36 + 0x98) - fVar62) / fVar82;
      *(float *)(lVar36 + 0xd4) = fVar59 + (*(float *)(lVar36 + 0xc0) - fVar62) / fVar82;
      fVar59 = fVar59 + (*(float *)(lVar36 + 0xe8) - fVar62) / fVar82;
      break;
    case 2:
      lVar36 = lVar22 + lVar26 * 0x178;
      fVar94 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4d4);
      fVar82 = (fStack00000000000000c8 + *(float *)(lVar36 + 0x70)) -
               *(float *)((long)unaff_x19 + 0x4d4);
LAB_02496df8:
      *(float *)(lVar36 + 0x84) = fVar59 + fVar82 / fVar94;
      *(float *)(lVar36 + 0xac) =
           fVar59 + ((fStack00000000000000c8 + *(float *)(lVar36 + 0x98)) -
                    *(float *)((long)unaff_x19 + 0x4d4)) /
                    (*(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4d4));
      *(float *)(lVar36 + 0xd4) =
           fVar59 + ((fStack00000000000000c8 + *(float *)(lVar36 + 0xc0)) -
                    *(float *)((long)unaff_x19 + 0x4d4)) /
                    (*(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4d4));
      fVar59 = fVar59 + ((fStack00000000000000c8 + *(float *)(lVar36 + 0xe8)) -
                        *(float *)((long)unaff_x19 + 0x4d4)) /
                        (*(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4d4));
      break;
    case 3:
      switch((int)unaff_x19[0x61]) {
      case 0:
        lVar36 = lVar22 + lVar26 * 0x178;
        *(undefined4 *)(lVar36 + 0x88) = 0;
        *(undefined4 *)(lVar36 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar36 + 0xd8) = 0;
        *(undefined4 *)(lVar36 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar36 = lVar22 + lVar26 * 0x178;
        fVar94 = fVar94 - fVar87;
        fVar82 = fVar59 + (*(float *)(lVar36 + 0x74) - fVar87) / fVar94;
        fVar94 = fVar59 + (*(float *)(lVar36 + 0x9c) - fVar87) / fVar94;
        *(float *)(lVar36 + 0x88) = fVar82;
        *(float *)(lVar36 + 0xb0) = fVar94;
        *(float *)(lVar36 + 0xd8) = fVar82;
        *(float *)(lVar36 + 0x100) = fVar94;
        break;
      case 2:
        lVar36 = lVar22 + lVar26 * 0x178;
        fVar82 = fVar59 + (*(float *)(lVar36 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                          (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
        *(float *)(lVar36 + 0x88) = fVar82;
        fVar94 = *(float *)(unaff_x19 + 0x9b);
        fVar87 = *(float *)(unaff_x19 + 0x9c);
        *(float *)(lVar36 + 0xd8) = fVar82;
        fVar82 = fVar59 + (*(float *)(lVar36 + 0x9c) - fVar94) / (fVar87 - fVar94);
        *(float *)(lVar36 + 0xb0) = fVar82;
        *(float *)(lVar36 + 0x100) = fVar82;
        break;
      case 3:
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
        uVar49 = (uint)*(undefined8 *)(lVar22 + 0x18);
      }
      if (uVar49 <= uVar93)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar36 = lVar22 + lVar26 * 0x178;
      fVar82 = *(float *)(lVar36 + 0x15c);
      fVar94 = (1.0 - (*(float *)(lVar36 + 0x88) + *(float *)(lVar36 + 0xb0)) * fVar82) * 0.5;
      fVar87 = fVar59 + *(float *)(lVar36 + 0x88) * fVar82 + fVar94;
      fVar59 = fVar59 + fVar94 + *(float *)(lVar36 + 0xb0) * fVar82;
      *(float *)(lVar36 + 0x84) = fVar87;
      *(float *)(lVar36 + 0xac) = fVar87;
      *(float *)(lVar36 + 0xd4) = fVar59;
      break;
    default:
      goto switchD_02496d4c_default;
    }
    *(float *)(lVar22 + lVar26 * 0x178 + 0xfc) = fVar59;
switchD_02496d4c_default:
    switch((int)unaff_x19[0x61]) {
    case 0:
      if (uVar49 <= uVar93)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar36 = lVar22 + lVar26 * 0x178;
      *(undefined4 *)(lVar36 + 0x88) = 0;
      *(undefined4 *)(lVar36 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar36 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar36 + 0x100) = 0;
      break;
    case 1:
      if (uVar93 < uVar49) {
        lVar36 = lVar22 + lVar26 * 0x178;
        fVar73 = fVar73 - fVar72;
        fVar59 = (*(float *)(lVar36 + 0x74) - fVar72) / fVar73;
        fVar73 = (*(float *)(lVar36 + 0x9c) - fVar72) / fVar73;
        *(float *)(lVar36 + 0x88) = fVar59;
        goto LAB_02497174;
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    case 2:
      if (uVar49 <= uVar93)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar36 = lVar22 + lVar26 * 0x178;
      fVar59 = (*(float *)(lVar36 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
      *(float *)(lVar36 + 0x88) = fVar59;
      fVar73 = (*(float *)(lVar36 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
LAB_02497174:
      *(float *)(lVar36 + 0xb0) = fVar73;
      *(float *)(lVar36 + 0xd8) = fVar73;
      *(float *)(lVar36 + 0x100) = fVar59;
      break;
    case 3:
      if (uVar49 <= uVar93)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar36 = lVar22 + lVar26 * 0x178;
      fVar73 = *(float *)(lVar36 + 0x15c);
      fVar82 = (1.0 - (*(float *)(lVar36 + 0x84) + *(float *)(lVar36 + 0xd4)) / fVar73) * 0.5;
      fVar59 = *(float *)(lVar36 + 0x84) / fVar73 + fVar82;
      fVar82 = fVar82 + *(float *)(lVar36 + 0xd4) / fVar73;
      *(float *)(lVar36 + 0x88) = fVar59;
      *(float *)(lVar36 + 0xb0) = fVar82;
      *(float *)(lVar36 + 0x100) = fVar59;
      *(float *)(lVar36 + 0xd8) = fVar82;
    }
    if (uVar49 <= uVar93)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar36 = lVar22 + lVar26 * 0x178;
    fVar59 = *(float *)(lVar36 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
    if ((*(char *)(lVar36 + 0x5c) == '\0') && ((*(byte *)(lVar22 + lVar26 * 0x178 + 400) & 1) != 0))
    {
      fVar59 = -fVar59;
    }
    fVar82 = fVar54;
    if (((iVar16 == 2) || (fVar82 = fVar89, iVar16 == 1)) || (fVar82 = fVar54 / fVar56, iVar16 == 0)
       ) {
      fVar59 = fVar82 * fVar59;
    }
    lVar36 = lVar22 + lVar26 * 0x178;
    fVar73 = *(float *)(lVar36 + 0x88);
    fVar94 = *(float *)(lVar36 + 0x84);
    fVar82 = -2.1474836e+09;
    if (fVar94 != INFINITY) {
      fVar82 = (float)(int)fVar94;
    }
    fVar87 = *(float *)(lVar36 + 0xd4);
    fVar62 = *(float *)(lVar36 + 0xd8);
    fVar72 = -2.1474836e+09;
    if (fVar73 != INFINITY) {
      fVar72 = (float)(int)fVar73;
    }
    uVar92 = FUN_024e0374(fVar94 - fVar82,fVar73 - fVar72);
    *(undefined4 *)(lVar36 + 0x84) = uVar92;
    if (*(uint *)(lVar22 + 0x18) <= uVar93)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar62 = fVar62 - fVar72;
    *(float *)(lVar36 + 0x88) = fVar59;
    uVar92 = FUN_024e0374(fVar94 - fVar82,fVar62);
    *(undefined4 *)(lVar22 + lVar26 * 0x178 + 0xac) = uVar92;
    if (*(uint *)(lVar22 + 0x18) <= uVar93)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar87 = fVar87 - fVar82;
    *(float *)(lVar22 + lVar26 * 0x178 + 0xb0) = fVar59;
    fVar82 = (float)FUN_024e0374(fVar87,fVar62);
    *(float *)(lVar36 + 0xd4) = fVar82;
    if (*(uint *)(lVar22 + 0x18) <= uVar93)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar36 + 0xd8) = fVar59;
    uVar92 = FUN_024e0374(fVar87,fVar73 - fVar72);
    *(undefined4 *)(lVar22 + lVar26 * 0x178 + 0xfc) = uVar92;
    uVar49 = (uint)*(undefined8 *)(lVar22 + 0x18);
    if (uVar49 <= uVar93)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar22 + lVar26 * 0x178 + 0x100) = fVar59;
LAB_02497374:
    if (((int)unaff_x19[100] <= (int)uVar93) ||
       (*(int *)((long)unaff_x19 + 0x324) <= iStack00000000000000ac)) goto LAB_02497490;
    if (((int)uVar34 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] != 5)) {
      if (uVar49 <= uVar93)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar37 = lVar22 + lVar26 * 0x178;
      *(ulong *)(lVar37 + 0x70) =
           CONCAT44(fVar86 + (float)((ulong)*(undefined8 *)(lVar37 + 0x70) >> 0x20),
                    fVar78 + (float)*(undefined8 *)(lVar37 + 0x70));
      *(float *)(lVar37 + 0x78) = fVar60 + *(float *)(lVar37 + 0x78);
      if (*(uint *)(lVar22 + 0x18) <= uVar93)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar37 = lVar22 + lVar26 * 0x178;
      *(ulong *)(lVar37 + 0x98) =
           CONCAT44(fVar86 + (float)((ulong)*(undefined8 *)(lVar37 + 0x98) >> 0x20),
                    fVar78 + (float)*(undefined8 *)(lVar37 + 0x98));
      *(float *)(lVar37 + 0xa0) = fVar60 + *(float *)(lVar37 + 0xa0);
      if (*(uint *)(lVar22 + 0x18) <= uVar93)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar37 = lVar22 + lVar26 * 0x178;
      *(ulong *)(lVar37 + 0xc0) =
           CONCAT44(fVar86 + (float)((ulong)*(undefined8 *)(lVar37 + 0xc0) >> 0x20),
                    fVar78 + (float)*(undefined8 *)(lVar37 + 0xc0));
      *(float *)(lVar37 + 200) = fVar60 + *(float *)(lVar37 + 200);
      if (*(uint *)(lVar22 + 0x18) <= uVar93)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar37 = lVar22 + lVar26 * 0x178;
      *(ulong *)(lVar37 + 0xe8) =
           CONCAT44(fVar86 + (float)((ulong)*(undefined8 *)(lVar37 + 0xe8) >> 0x20),
                    fVar78 + (float)*(undefined8 *)(lVar37 + 0xe8));
      *(float *)(lVar37 + 0xf0) = fVar60 + *(float *)(lVar37 + 0xf0);
      if (iVar18 == 0) goto LAB_02497668;
LAB_02497598:
      if (iVar18 == 1) {
        pcVar39 = *(code **)(*unaff_x19 + 0x8f8);
        goto LAB_02497674;
      }
    }
    else {
      if (((int)uVar34 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] == 5)) {
        if (uVar49 <= uVar93)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (*(uint *)(lVar22 + lVar26 * 0x178 + 0x68) != uVar3) goto LAB_02497490;
        lVar37 = lVar22 + lVar26 * 0x178;
        *(ulong *)(lVar37 + 0x70) =
             CONCAT44(fVar86 + (float)((ulong)*(undefined8 *)(lVar37 + 0x70) >> 0x20),
                      fVar78 + (float)*(undefined8 *)(lVar37 + 0x70));
        *(float *)(lVar37 + 0x78) = fVar60 + *(float *)(lVar37 + 0x78);
        if (*(uint *)(lVar22 + 0x18) <= uVar93)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar37 = lVar22 + lVar26 * 0x178;
        *(ulong *)(lVar37 + 0x98) =
             CONCAT44(fVar86 + (float)((ulong)*(undefined8 *)(lVar37 + 0x98) >> 0x20),
                      fVar78 + (float)*(undefined8 *)(lVar37 + 0x98));
        *(float *)(lVar37 + 0xa0) = fVar60 + *(float *)(lVar37 + 0xa0);
        if (*(uint *)(lVar22 + 0x18) <= uVar93)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar37 = lVar22 + lVar26 * 0x178;
        *(ulong *)(lVar37 + 0xc0) =
             CONCAT44(fVar86 + (float)((ulong)*(undefined8 *)(lVar37 + 0xc0) >> 0x20),
                      fVar78 + (float)*(undefined8 *)(lVar37 + 0xc0));
        *(float *)(lVar37 + 200) = fVar60 + *(float *)(lVar37 + 200);
        if (*(uint *)(lVar22 + 0x18) <= uVar93)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar37 = lVar22 + lVar26 * 0x178;
        *(ulong *)(lVar37 + 0xe8) =
             CONCAT44(fVar86 + (float)((ulong)*(undefined8 *)(lVar37 + 0xe8) >> 0x20),
                      fVar78 + (float)*(undefined8 *)(lVar37 + 0xe8));
        *(float *)(lVar37 + 0xf0) = fVar60 + *(float *)(lVar37 + 0xf0);
      }
      else {
LAB_02497490:
        if (uVar49 <= uVar93)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        puVar10 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
        lVar36 = lVar22 + lVar26 * 0x178;
        uVar92 = *(undefined4 *)
                  (*(undefined8 **)
                    (*(long *)
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                    + 0xb8) + 1);
        *(undefined8 *)(lVar36 + 0x70) =
             **(undefined8 **)
               (*(long *)
                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
               0xb8);
        *(undefined4 *)(lVar36 + 0x78) = uVar92;
        if (*(uint *)(lVar22 + 0x18) <= uVar93)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar36 = lVar22 + lVar26 * 0x178;
        uVar92 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar10 + 0xb8) + 1);
        *(undefined8 *)(lVar36 + 0x98) = **(undefined8 **)(*(long *)puVar10 + 0xb8);
        *(undefined4 *)(lVar36 + 0xa0) = uVar92;
        if (*(uint *)(lVar22 + 0x18) <= uVar93)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar36 = lVar22 + lVar26 * 0x178;
        uVar92 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar10 + 0xb8) + 1);
        *(undefined8 *)(lVar36 + 0xc0) = **(undefined8 **)(*(long *)puVar10 + 0xb8);
        *(undefined4 *)(lVar36 + 200) = uVar92;
        if (*(uint *)(lVar22 + 0x18) <= uVar93)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar36 = lVar22 + lVar26 * 0x178;
        uVar92 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar10 + 0xb8) + 1);
        *(undefined8 *)(lVar36 + 0xe8) = **(undefined8 **)(*(long *)puVar10 + 0xb8);
        *(undefined4 *)(lVar36 + 0xf0) = uVar92;
        if (*(uint *)(lVar22 + 0x18) <= uVar93)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        *(undefined1 *)(lVar37 + 0x194) = 0;
      }
      if (iVar18 != 0) goto LAB_02497598;
LAB_02497668:
      pcVar39 = *(code **)(*unaff_x19 + 0x8d8);
LAB_02497674:
      (*pcVar39)();
    }
LAB_02497688:
    if ((*plVar2 == 0) || (lVar37 = *(long *)(*plVar2 + 0x38), lVar37 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar37 + 0x18) <= uVar93)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar37 = lVar37 + lVar26 * 0x178;
    uVar31 = *(undefined8 *)(lVar37 + 0x11c);
    *(undefined8 *)(lVar37 + 0x11c) =
         CONCAT44(fVar86 + (float)((ulong)uVar31 >> 0x20),fVar78 + (float)uVar31);
    *(float *)(lVar37 + 0x124) = fVar60 + *(float *)(lVar37 + 0x124);
    if ((*plVar2 == 0) || (lVar37 = *(long *)(*plVar2 + 0x38), lVar37 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar37 + 0x18) <= uVar93)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar37 = lVar37 + lVar26 * 0x178;
    *(ulong *)(lVar37 + 0x110) =
         CONCAT44(fVar86 + (float)((ulong)*(undefined8 *)(lVar37 + 0x110) >> 0x20),
                  fVar78 + (float)*(undefined8 *)(lVar37 + 0x110));
    *(float *)(lVar37 + 0x118) = fVar60 + *(float *)(lVar37 + 0x118);
    if ((*plVar2 == 0) || (lVar37 = *(long *)(*plVar2 + 0x38), lVar37 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar37 + 0x18) <= uVar93)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar37 = lVar37 + lVar26 * 0x178;
    *(ulong *)(lVar37 + 0x128) =
         CONCAT44(fVar86 + (float)((ulong)*(undefined8 *)(lVar37 + 0x128) >> 0x20),
                  fVar78 + (float)*(undefined8 *)(lVar37 + 0x128));
    *(float *)(lVar37 + 0x130) = fVar60 + *(float *)(lVar37 + 0x130);
    if ((*plVar2 == 0) || (lVar37 = *(long *)(*plVar2 + 0x38), lVar37 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar37 + 0x18) <= uVar93)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar37 = lVar37 + lVar26 * 0x178;
    *(float *)(lVar37 + 0x134) = fVar78 + *(float *)(lVar37 + 0x134);
    *(ulong *)(lVar37 + 0x138) =
         CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar37 + 0x138) >> 0x20),
                  fVar86 + (float)*(undefined8 *)(lVar37 + 0x138));
    lVar37 = *plVar2;
    if ((lVar37 == 0) || (lVar36 = *(long *)(lVar37 + 0x38), lVar36 == 0)) goto LAB_0249920c;
    uVar49 = *(uint *)(lVar36 + 0x18);
    if (uVar49 <= uVar93)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar45 = lVar36 + lVar26 * 0x178;
    uVar70 = CONCAT44(fVar78 + (float)((ulong)*(undefined8 *)(lVar45 + 0x140) >> 0x20),
                      fVar78 + (float)*(undefined8 *)(lVar45 + 0x140));
    fVar82 = fVar86 + *(float *)(lVar45 + 0x150);
    uVar25 = (ulong)(uint)fVar82;
    uVar29 = CONCAT44(fVar86 + (float)((ulong)*(undefined8 *)(lVar45 + 0x148) >> 0x20),
                      fVar86 + (float)*(undefined8 *)(lVar45 + 0x148));
    *(ulong *)(lVar45 + 0x140) = uVar70;
    *(ulong *)(lVar45 + 0x148) = uVar29;
    *(float *)(lVar45 + 0x150) = fVar82;
    if (uVar34 == uVar17) {
      uVar17 = *puVar1 - 1;
      if (uVar93 == uVar17) goto LAB_0249788c;
    }
    else {
      lVar37 = *(long *)(lVar37 + 0x50);
      if (lVar37 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar37 + 0x18) <= uVar17)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar45 = (long)(int)uVar17;
      lVar47 = lVar37 + lVar45 * 0x5c;
      uVar29 = (ulong)(uint)*(float *)(lVar47 + 0x58);
      fVar82 = fVar86 + *(float *)(lVar47 + 0x54);
      uVar70 = (ulong)(uint)fVar82;
      fVar73 = fVar78 + *(float *)(lVar47 + 0x58);
      uVar25 = (ulong)(uint)fVar73;
      *(ulong *)(lVar47 + 0x4c) =
           CONCAT44(fVar86 + (float)((ulong)*(undefined8 *)(lVar47 + 0x4c) >> 0x20),
                    fVar86 + (float)*(undefined8 *)(lVar47 + 0x4c));
      *(float *)(lVar47 + 0x54) = fVar82;
      *(float *)(lVar47 + 0x58) = fVar73;
      if (uVar49 <= *(uint *)(lVar47 + 0x34))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      uVar92 = *(undefined4 *)(lVar36 + (long)(int)*(uint *)(lVar47 + 0x34) * 0x178 + 0x11c);
      lVar37 = lVar37 + lVar45 * 0x5c;
      *(float *)(lVar37 + 0x70) = fVar82;
      *(undefined4 *)(lVar37 + 0x6c) = uVar92;
      lVar37 = *plVar2;
      if ((lVar37 == 0) || (lVar36 = *(long *)(lVar37 + 0x50), lVar36 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar36 + 0x18) <= uVar17)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar37 = *(long *)(lVar37 + 0x38);
      if (lVar37 == 0) goto LAB_0249920c;
      uVar17 = *(uint *)(lVar36 + lVar45 * 0x5c + 0x40);
      if (*(uint *)(lVar37 + 0x18) <= uVar17)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar36 = lVar36 + lVar45 * 0x5c;
      *(undefined4 *)(lVar36 + 0x74) = *(undefined4 *)(lVar37 + (long)(int)uVar17 * 0x178 + 0x128);
      *(undefined4 *)(lVar36 + 0x78) = *(undefined4 *)(lVar36 + 0x4c);
      uVar17 = *puVar1 - 1;
LAB_0249788c:
      if (uVar93 == uVar17) {
        lVar37 = *plVar2;
        if ((lVar37 == 0) || (lVar36 = *(long *)(lVar37 + 0x50), lVar36 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar36 + 0x18) <= uVar34)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar45 = lVar36 + lVar46 * 0x5c;
        uVar29 = (ulong)(uint)*(float *)(lVar45 + 0x58);
        uVar70 = CONCAT44(fVar86 + (float)((ulong)*(undefined8 *)(lVar45 + 0x4c) >> 0x20),
                          fVar86 + (float)*(undefined8 *)(lVar45 + 0x4c));
        fVar82 = fVar86 + *(float *)(lVar45 + 0x54);
        fVar78 = fVar78 + *(float *)(lVar45 + 0x58);
        uVar25 = (ulong)(uint)fVar78;
        *(ulong *)(lVar45 + 0x4c) = uVar70;
        *(float *)(lVar45 + 0x54) = fVar82;
        *(float *)(lVar45 + 0x58) = fVar78;
        lVar37 = *(long *)(lVar37 + 0x38);
        if (lVar37 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar37 + 0x18) <= *(uint *)(lVar45 + 0x34))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar92 = *(undefined4 *)(lVar37 + (long)(int)*(uint *)(lVar45 + 0x34) * 0x178 + 0x11c);
        lVar36 = lVar36 + lVar46 * 0x5c;
        *(float *)(lVar36 + 0x70) = fVar82;
        *(undefined4 *)(lVar36 + 0x6c) = uVar92;
        lVar37 = *plVar2;
        if ((lVar37 == 0) || (lVar36 = *(long *)(lVar37 + 0x50), lVar36 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar36 + 0x18) <= uVar34)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar37 = *(long *)(lVar37 + 0x38);
        if (lVar37 == 0) goto LAB_0249920c;
        uVar17 = *(uint *)(lVar36 + lVar46 * 0x5c + 0x40);
        if (*(uint *)(lVar37 + 0x18) <= uVar17)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar36 = lVar36 + lVar46 * 0x5c;
        *(undefined4 *)(lVar36 + 0x74) = *(undefined4 *)(lVar37 + (long)(int)uVar17 * 0x178 + 0x128)
        ;
        *(undefined4 *)(lVar36 + 0x78) = *(undefined4 *)(lVar36 + 0x4c);
      }
    }
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar27 = FUN_016f9468(uVar48,0);
    if (((((uVar27 & 1) == 0) && (1 < uVar48 - 0x2010)) && (uVar48 != 0xad)) && (uVar48 != 0x2d)) {
      if (bVar8) {
        if (((uVar43 != 1) && ((int)uVar93 < (int)(*(uint *)(lVar22 + 0x18) - 1))) &&
           (((int)uVar93 < (int)*puVar1 && ((uVar48 == 0x2019 || (uVar48 == 0x27)))))) {
          if (*(uint *)(lVar22 + 0x18) <= uVar43 - 2)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar6 = *(undefined2 *)(lVar22 + lVar23 + -0x438);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar27 = FUN_016f9468(uVar6,0);
          if ((uVar27 & 1) != 0) {
            if (*(uint *)(lVar22 + 0x18) <= uVar43)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            uVar6 = *(undefined2 *)(lVar22 + lVar23 + -0x148);
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar27 = FUN_016f9468(uVar6,0);
            if ((uVar27 & 1) != 0) goto LAB_02497aa4;
          }
        }
      }
      else {
        if (uVar43 != 1) {
LAB_024985a0:
          bVar8 = false;
          goto LAB_02497aac;
        }
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar27 = FUN_016f93a0(uVar48,0);
        if ((uVar27 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar27 = FUN_016f68bc(uVar48,0);
          if (((uVar48 != 0x200b) && ((uVar27 & 1) == 0)) && (*puVar1 != 1)) goto LAB_024985a0;
        }
      }
      if (uVar93 == *puVar1 - 1) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar27 = FUN_016f9468(uVar48,0);
        iVar18 = iVar53;
        if ((uVar27 & 1) == 0) goto LAB_02497de0;
      }
      else {
LAB_02497de0:
        iVar18 = uVar43 - 2;
      }
      lVar37 = *plVar2;
      if (lVar37 == 0) goto LAB_0249920c;
      lVar36 = *(long *)(lVar37 + 0x40);
      if (lVar36 == 0) goto LAB_0249920c;
      uVar17 = *(uint *)(lVar37 + 0x24);
      iVar19 = *(int *)(lVar36 + 0x18);
      if (iVar19 < (int)(uVar17 + 1)) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147b84((long *)(lVar37 + 0x40),iVar19 + 1,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
        lVar37 = *plVar2;
        if (lVar37 == 0) goto LAB_0249920c;
      }
      lVar36 = *(long *)(lVar37 + 0x40);
      if (lVar36 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar36 + 0x18) <= uVar17)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar36 = lVar36 + (long)(int)uVar17 * 0x18;
      *(uint *)(lVar36 + 0x28) = uVar15;
      *(int *)(lVar36 + 0x2c) = iVar18;
      *(uint *)(lVar36 + 0x30) = (iVar18 - uVar15) + 1;
      *(long **)(lVar36 + 0x20) = unaff_x19;
      lVar36 = *(long *)(lVar37 + 0x50);
      *(int *)(lVar37 + 0x24) = *(int *)(lVar37 + 0x24) + 1;
      if (lVar36 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar36 + 0x18) <= uVar34)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar36 = lVar36 + lVar46 * 0x5c;
      bVar8 = false;
      iStack00000000000000ac = iStack00000000000000ac + 1;
      *(int *)(lVar36 + 0x30) = *(int *)(lVar36 + 0x30) + 1;
    }
    else {
      if (!bVar8) {
        uVar15 = uVar93;
      }
      if (uVar93 == *puVar1 - 1) {
        lVar37 = *plVar2;
        if (lVar37 == 0) goto LAB_0249920c;
        lVar36 = *(long *)(lVar37 + 0x40);
        if (lVar36 == 0) goto LAB_0249920c;
        uVar17 = *(uint *)(lVar37 + 0x24);
        iVar18 = *(int *)(lVar36 + 0x18);
        if (iVar18 < (int)(uVar17 + 1)) {
          if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01147b84((long *)(lVar37 + 0x40),iVar18 + 1,
                       *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
          lVar37 = *plVar2;
          if (lVar37 == 0) goto LAB_0249920c;
        }
        lVar36 = *(long *)(lVar37 + 0x40);
        if (lVar36 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar36 + 0x18) <= uVar17)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar36 = lVar36 + (long)(int)uVar17 * 0x18;
        *(uint *)(lVar36 + 0x28) = uVar15;
        *(uint *)(lVar36 + 0x2c) = uVar93;
        *(long **)(lVar36 + 0x20) = unaff_x19;
        *(uint *)(lVar36 + 0x30) = uVar43 - uVar15;
        lVar36 = *(long *)(lVar37 + 0x50);
        *(int *)(lVar37 + 0x24) = *(int *)(lVar37 + 0x24) + 1;
        if (lVar36 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar36 + 0x18) <= uVar34)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar36 = lVar36 + lVar46 * 0x5c;
        iStack00000000000000ac = iStack00000000000000ac + 1;
        *(int *)(lVar36 + 0x30) = *(int *)(lVar36 + 0x30) + 1;
      }
LAB_02497aa4:
      bVar8 = true;
    }
LAB_02497aac:
    if ((*plVar2 == 0) || (lVar37 = *(long *)(*plVar2 + 0x38), lVar37 == 0)) goto LAB_0249920c;
    uVar17 = *(uint *)(lVar37 + 0x18);
    if (uVar17 <= uVar93)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar37 + lVar26 * 0x178 + 400) >> 2 & 1) == 0) {
      if (bVar12) {
LAB_02497adc:
        if (uVar17 <= uVar43 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar46 = *unaff_x19;
        uVar17 = *(uint *)(lVar37 + lVar23 + -0x330);
        uVar92 = *(undefined4 *)(lVar37 + lVar23 + -0x2f8);
LAB_0249805c:
        pcVar39 = *(code **)(lVar46 + 0x908);
LAB_02498064:
        uVar29 = (ulong)uVar17;
        uVar70 = (ulong)(uint)fStack0000000000000050;
        uVar25 = (ulong)(uint)fStack0000000000000054;
        (*pcVar39)(fStack0000000000000058,uVar70,uVar25,uVar29,fStack00000000000000d0,0,
                   fStack000000000000005c,uVar92);
        puVar10 = System_Threading_Mutex_TypeInfo;
        lVar37 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar37 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar37 = *(long *)puVar10;
        }
LAB_024980b4:
        bVar12 = false;
        fVar58 = 0.0;
        fStack00000000000000d0 = *(float *)(*(long *)(lVar37 + 0xb8) + 0x15a8);
        fStack00000000000000cc = 0.0;
      }
      else {
LAB_02497fc4:
        bVar12 = false;
      }
    }
    else {
      lVar37 = lVar37 + lVar26 * 0x178;
      iVar18 = *(int *)(lVar37 + 0x68);
      *(int *)(lVar37 + 0x16c) = iVar20;
      if ((((int)unaff_x19[100] < (int)uVar93) || ((int)unaff_x19[0x65] < (int)uVar34)) ||
         (((int)unaff_x19[0x5b] == 5 && (iVar18 + 1 != (int)unaff_x19[0x66])))) {
        bVar14 = false;
      }
      else {
        bVar14 = true;
      }
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar27 = FUN_016f68bc(uVar48,0);
      if ((uVar48 != 0x200b) && ((uVar27 & 1) == 0)) {
        lVar37 = *plVar2;
        if ((lVar37 == 0) || (lVar46 = *(long *)(lVar37 + 0x38), lVar46 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar46 + 0x18) <= uVar93)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar82 = *(float *)(lVar46 + lVar26 * 0x178 + 0x160);
        if (fVar58 <= fVar82) {
          fVar58 = fVar82;
        }
        if (fStack00000000000000cc <= ABS(fVar59)) {
          fStack00000000000000cc = ABS(fVar59);
        }
        if (iVar18 != iStack000000000000004c) {
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar37 = *plVar2;
            if (lVar37 == 0) goto LAB_0249920c;
            lVar46 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          else {
            lVar46 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          fStack00000000000000d0 = *(float *)(lVar46 + 0x15a8);
        }
        lVar37 = *(long *)(lVar37 + 0x38);
        if (lVar37 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar37 + 0x18) <= uVar93)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (unaff_x19[0x1e] == 0) goto LAB_0249920c;
        fVar73 = *(float *)(lVar37 + lVar26 * 0x178 + 0x14c);
        fVar82 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
        fVar73 = fVar73 + fVar58 * fVar82;
        if (fVar73 <= fStack00000000000000d0) {
          fStack00000000000000d0 = fVar73;
        }
        uVar70 = (ulong)(uint)fStack00000000000000d0;
        iStack000000000000004c = iVar18;
      }
      if (!bVar12) {
        bVar12 = false;
        if ((((uVar48 == 0xd) || ((uVar48 | 1) == 0xb)) || ((int)uVar42 < (int)uVar93)) ||
           ((bool)(bVar14 ^ 1))) goto LAB_024980d0;
        if (uVar93 == uVar42) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar27 = FUN_016fa418(uVar48,0);
          if ((uVar27 & 1) != 0) goto LAB_02497fc4;
        }
        if ((*plVar2 == 0) || (lVar37 = *(long *)(*plVar2 + 0x38), lVar37 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar37 + 0x18) <= uVar93)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar37 = lVar37 + lVar26 * 0x178;
        fStack000000000000005c = *(float *)(lVar37 + 0x160);
        fStack0000000000000058 = *(float *)(lVar37 + 0x11c);
        bVar12 = fVar58 != 0.0;
        fVar82 = fStack000000000000005c;
        if (bVar12) {
          fVar82 = fVar58;
        }
        fVar58 = fVar82;
        uVar21 = *(uint *)(lVar37 + 0x168);
        fStack0000000000000054 = 0.0;
        fVar82 = fVar59;
        if (bVar12) {
          fVar82 = fStack00000000000000cc;
        }
        uVar70 = (ulong)(uint)fVar82;
        fStack0000000000000050 = fStack00000000000000d0;
        fStack00000000000000cc = fVar82;
      }
      if (*puVar1 == 1) {
        if ((*plVar2 != 0) && (lVar37 = *(long *)(*plVar2 + 0x38), lVar37 != 0)) {
          if (uVar93 < *(uint *)(lVar37 + 0x18)) {
            lVar37 = lVar37 + lVar26 * 0x178;
            lVar46 = *unaff_x19;
            uVar17 = *(uint *)(lVar37 + 0x128);
            uVar92 = *(undefined4 *)(lVar37 + 0x160);
            goto LAB_0249805c;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      if ((uVar93 == uVar40) || ((int)uVar42 <= (int)uVar93)) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar27 = FUN_016f68bc(uVar48,0);
        if ((*plVar2 != 0) && (lVar37 = *(long *)(*plVar2 + 0x38), lVar37 != 0)) {
          if (uVar48 == 0x200b || (uVar27 & 1) != 0) {
            lVar46 = lVar51;
            if (*(uint *)(lVar37 + 0x18) <= uVar42)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          else {
            lVar46 = lVar26;
            if (*(uint *)(lVar37 + 0x18) <= uVar93)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          lVar37 = lVar37 + lVar46 * 0x178;
          uVar17 = *(uint *)(lVar37 + 0x128);
          uVar92 = *(undefined4 *)(lVar37 + 0x160);
          pcVar39 = *(code **)(*unaff_x19 + 0x908);
          goto LAB_02498064;
        }
        goto LAB_0249920c;
      }
      if (!bVar14) {
        if ((*plVar2 != 0) && (lVar37 = *(long *)(*plVar2 + 0x38), lVar37 != 0)) {
          uVar17 = *(uint *)(lVar37 + 0x18);
          goto LAB_02497adc;
        }
        goto LAB_0249920c;
      }
      if ((int)uVar93 < (int)(*puVar1 - 1)) {
        if ((*plVar2 == 0) || (lVar37 = *(long *)(*plVar2 + 0x38), lVar37 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar37 + 0x18) <= uVar43)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar27 = FUN_024a9e4c(uVar21,*(undefined4 *)(lVar37 + lVar23),0);
        if ((uVar27 & 1) == 0) {
          if ((*plVar2 != 0) && (lVar37 = *(long *)(*plVar2 + 0x38), lVar37 != 0)) {
            if (uVar93 < *(uint *)(lVar37 + 0x18)) {
              lVar37 = lVar37 + lVar26 * 0x178;
              uVar29 = (ulong)*(uint *)(lVar37 + 0x128);
              uVar25 = (ulong)(uint)fStack0000000000000054;
              uVar70 = (ulong)(uint)fStack0000000000000050;
              (**(code **)(*unaff_x19 + 0x908))
                        (fStack0000000000000058,uVar70,uVar25,uVar29,fStack00000000000000d0,0,
                         fStack000000000000005c,*(undefined4 *)(lVar37 + 0x160));
              puVar10 = System_Threading_Mutex_TypeInfo;
              lVar37 = *(long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(lVar37 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar37 = *(long *)puVar10;
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
    if ((*plVar2 == 0) || (lVar37 = *(long *)(*plVar2 + 0x38), lVar37 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar37 + 0x18) <= uVar93)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if (lVar44 == 0) goto LAB_0249920c;
    uVar17 = *(uint *)(lVar37 + lVar26 * 0x178 + 400);
    fVar82 = (float)FUN_026fd1f0(lVar44 + 0x50,0);
    if ((uVar17 >> 6 & 1) == 0) {
      if (bVar7) {
        if ((*plVar2 == 0) || (lVar37 = *(long *)(*plVar2 + 0x38), lVar37 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar37 + 0x18) <= uVar43 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar17 = *(uint *)(lVar37 + lVar23 + -0x330);
        pcVar39 = *(code **)(*unaff_x19 + 0x908);
        fVar86 = fVar57 * fVar82 + *(float *)(lVar37 + lVar23 + -0x30c);
LAB_02498648:
        uVar29 = (ulong)uVar17;
        uVar70 = (ulong)(uint)fStack000000000000007c;
        uVar25 = (ulong)uStack000000000000006c;
        (*pcVar39)(fStack0000000000000080,uVar70,uVar25,uVar29,fVar86,0,fVar57,fVar57);
      }
LAB_0249867c:
      bVar7 = false;
    }
    else {
      lVar37 = *plVar2;
      if ((lVar37 == 0) || (lVar46 = *(long *)(lVar37 + 0x38), lVar46 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar46 + 0x18) <= uVar93)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      *(int *)(lVar46 + lVar26 * 0x178 + 0x174) = iVar20;
      if ((((int)unaff_x19[100] < (int)uVar93) || ((int)unaff_x19[0x65] < (int)uVar34)) ||
         (((int)unaff_x19[0x5b] == 5 &&
          (*(int *)(lVar46 + lVar26 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
        bVar14 = false;
      }
      else {
        bVar14 = true;
      }
      if ((((uVar48 == 0xd) || ((uVar48 | 1) == 0xb)) || ((int)uVar42 < (int)uVar93)) ||
         (bVar7 || !bVar14)) {
LAB_02498228:
        if (!bVar7) goto LAB_0249867c;
      }
      else {
        if (uVar93 == uVar42) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar27 = FUN_016fa418(uVar48,0);
          if ((uVar27 & 1) != 0) goto LAB_02498228;
          lVar37 = *plVar2;
          if (lVar37 == 0) goto LAB_0249920c;
        }
        lVar37 = *(long *)(lVar37 + 0x38);
        if (lVar37 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar37 + 0x18) <= uVar93)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar37 = lVar37 + lVar26 * 0x178;
        fStack0000000000000034 = *(float *)(lVar37 + 0x60);
        fVar57 = *(float *)(lVar37 + 0x160);
        fStack0000000000000030 = *(float *)(lVar37 + 0x14c);
        uVar70 = (ulong)(uint)fStack0000000000000030;
        fStack0000000000000080 = *(float *)(lVar37 + 0x11c);
        fStack000000000000007c = fVar82 * fVar57 + fStack0000000000000030;
        uStack000000000000006c = 0;
      }
      uVar17 = *puVar1;
      if (uVar17 == 1) {
LAB_024983ac:
        if ((*plVar2 != 0) && (lVar37 = *(long *)(*plVar2 + 0x38), lVar37 != 0)) {
          if (uVar93 < *(uint *)(lVar37 + 0x18)) {
            lVar37 = lVar37 + lVar26 * 0x178;
            lVar51 = *unaff_x19;
            uVar17 = *(uint *)(lVar37 + 0x128);
            fVar86 = *(float *)(lVar37 + 0x14c);
LAB_024983d8:
            pcVar39 = *(code **)(lVar51 + 0x908);
FUN_02498644:
            fVar86 = fVar82 * fVar57 + fVar86;
            goto LAB_02498648;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      if (uVar93 == uVar40) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar27 = FUN_016f68bc(uVar48,0);
        if ((*plVar2 != 0) && (lVar37 = *(long *)(*plVar2 + 0x38), lVar37 != 0)) {
          uVar17 = *(uint *)(lVar37 + 0x18);
          if (uVar48 == 0x200b || (uVar27 & 1) != 0) {
            if (uVar17 <= uVar42)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          else {
LAB_02498620:
            lVar51 = lVar26;
            if (uVar17 <= uVar93)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
LAB_02498628:
          lVar37 = lVar37 + lVar51 * 0x178;
          fVar86 = *(float *)(lVar37 + 0x14c);
          uVar17 = *(uint *)(lVar37 + 0x128);
          pcVar39 = *(code **)(*unaff_x19 + 0x908);
          goto FUN_02498644;
        }
        goto LAB_0249920c;
      }
      if ((int)uVar93 < (int)uVar17) {
        lVar37 = *plVar2;
        if ((lVar37 != 0) && (lVar46 = *(long *)(lVar37 + 0x38), lVar46 != 0)) {
          if (uVar43 < *(uint *)(lVar46 + 0x18)) {
            if (*(float *)(lVar46 + lVar23 + -0x108) == fStack0000000000000034) {
              fVar73 = *(float *)(lVar46 + lVar23 + -0x1c);
              if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar70 = (ulong)(uint)fStack0000000000000030;
              uVar27 = FUN_024aa280(fVar86 + fVar73,uVar70,0);
              if ((uVar27 & 1) != 0) {
                uVar17 = *puVar1;
                goto 
                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractor_OnSelectEntering
                ;
              }
              lVar37 = *plVar2;
              if (lVar37 == 0) goto LAB_0249920c;
            }
            lVar37 = *(long *)(lVar37 + 0x38);
            if (lVar37 != 0) {
              uVar17 = *(uint *)(lVar37 + 0x18);
              if ((int)uVar93 <= (int)uVar42) goto LAB_02498620;
              if (uVar42 < uVar17) goto LAB_02498628;
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
      if ((int)uVar93 < (int)uVar17) {
        iVar18 = FUN_02681c0c(lVar44,0);
        if (*(uint *)(lVar22 + 0x18) <= uVar43)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar37 = *(long *)(lVar22 + lVar23 + -0x130);
        if (lVar37 == 0) goto LAB_0249920c;
        iVar19 = FUN_02681c0c(lVar37,0);
        if (iVar18 != iVar19) goto LAB_024983ac;
      }
      if (!bVar14) {
        if ((*plVar2 != 0) && (lVar37 = *(long *)(*plVar2 + 0x38), lVar37 != 0)) {
          if (uVar43 - 2 < *(uint *)(lVar37 + 0x18)) {
            lVar51 = *unaff_x19;
            uVar17 = *(uint *)(lVar37 + lVar23 + -0x330);
            fVar86 = *(float *)(lVar37 + lVar23 + -0x30c);
            goto LAB_024983d8;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      bVar7 = true;
    }
    if ((*plVar2 == 0) || (lVar37 = *(long *)(*plVar2 + 0x38), lVar37 == 0)) goto LAB_0249920c;
    uVar17 = (uint)*(undefined8 *)(lVar37 + 0x18);
    if (uVar17 <= uVar93)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar37 + lVar26 * 0x178 + 0x191) >> 1 & 1) == 0) {
      if (bVar13) {
        uVar25 = (ulong)in_stack_000000a0;
        uVar29 = (ulong)(uint)fStack00000000000000a4;
        uVar70 = (ulong)(uint)fStack00000000000000b4;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar70,uVar25,uVar29,fStack00000000000000a8,uVar25);
      }
LAB_024986e8:
      bVar13 = false;
    }
    else {
      if ((((int)unaff_x19[100] < (int)uVar93) || ((int)unaff_x19[0x65] < (int)uVar34)) ||
         (((int)unaff_x19[0x5b] == 5 &&
          (*(int *)(lVar37 + lVar26 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
        bVar14 = false;
      }
      else {
        bVar14 = true;
      }
      if (!bVar13) {
        if ((((uVar48 == 0xd) || ((uVar48 | 1) == 0xb)) || ((int)uVar42 < (int)uVar93)) || (!bVar14)
           ) goto LAB_024986e8;
        if (uVar93 == uVar42) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar27 = FUN_016fa418(uVar48,0);
          if ((uVar27 & 1) != 0) goto LAB_024986e8;
        }
        puVar10 = System_Threading_Mutex_TypeInfo;
        lVar51 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar51 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar51 = *(long *)puVar10;
        }
        if ((*plVar2 == 0) || (lVar37 = *(long *)(*plVar2 + 0x38), lVar37 == 0)) goto LAB_0249920c;
        uVar17 = (uint)*(undefined8 *)(lVar37 + 0x18);
        if (uVar17 <= uVar93)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar51 = *(long *)(lVar51 + 0xb8);
        lVar46 = lVar37 + lVar26 * 0x178;
        in_stack_00001798 = *(undefined8 *)(lVar46 + 0x184);
        in_stack_00001790 = *(undefined8 *)(lVar46 + 0x17c);
        fStack00000000000000b0 = *(float *)(lVar51 + 0x1598);
        in_stack_000017a0 = *(float *)(lVar46 + 0x18c);
        fStack00000000000000b4 = *(float *)(lVar51 + 0x159c);
        fStack00000000000000a4 = *(float *)(lVar51 + 0x15a0);
        fStack00000000000000a8 = *(float *)(lVar51 + 0x15a4);
        in_stack_000000a0 = 0;
      }
      if (uVar17 <= uVar93)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar37 = lVar37 + lVar26 * 0x178;
      fVar72 = *(float *)(lVar37 + 0x188);
      uVar24 = *(undefined8 *)(lVar37 + 0x17c);
      fVar62 = *(float *)(lVar37 + 0x184);
      uVar31 = *(undefined8 *)(lVar37 + 0x184);
      fVar87 = *(float *)(lVar37 + 0x18c);
      fVar86 = *(float *)(lVar37 + 0x11c);
      fVar73 = *(float *)(lVar37 + 0x128);
      fVar94 = *(float *)(lVar37 + 0x148);
      fVar82 = *(float *)(lVar37 + 0x150);
      in_stack_00000158 = uVar24;
      fStack0000000000000160 = fVar62;
      fStack0000000000000164 = fVar72;
      in_stack_00000168 = fVar87;
      in_stack_00000170 = in_stack_00001790;
      in_stack_00000178 = in_stack_00001798;
      in_stack_00000180 = in_stack_000017a0;
      uVar27 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
      lVar37 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
      if ((uVar27 & 1) == 0) {
        if (*(int *)(lVar37 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar37);
        }
        fVar86 = fVar86 - (float)((ulong)in_stack_00001790 >> 0x20);
        if (fVar86 <= fStack00000000000000b0) {
          fStack00000000000000b0 = fVar86;
        }
        fVar82 = fVar82 - in_stack_000017a0;
        uVar70 = (ulong)(uint)fVar82;
        fVar73 = fVar73 + (float)in_stack_00001798;
        uVar25 = (ulong)(uint)fVar73;
        if (fVar82 <= fStack00000000000000b4) {
          fStack00000000000000b4 = fVar82;
        }
        fVar94 = fVar94 + (float)((ulong)in_stack_00001798 >> 0x20);
        uVar29 = (ulong)(uint)fVar94;
        if (fStack00000000000000a4 <= fVar73) {
          fStack00000000000000a4 = fVar73;
        }
        if (fStack00000000000000a8 <= fVar94) {
          fStack00000000000000a8 = fVar94;
        }
      }
      else {
        if (*(int *)(lVar37 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar37);
        }
        fVar86 = (fVar86 + (fStack00000000000000a4 - (float)in_stack_00001798)) * 0.5;
        uVar29 = (ulong)(uint)fVar86;
        if (fVar82 <= fStack00000000000000b4) {
          fStack00000000000000b4 = fVar82;
        }
        uVar70 = (ulong)(uint)fStack00000000000000b4;
        uVar25 = (ulong)in_stack_000000a0;
        if (fStack00000000000000a8 <= fVar94) {
          fStack00000000000000a8 = fVar94;
        }
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar70,uVar25,uVar29,fStack00000000000000a8,uVar25);
        fStack00000000000000b4 = fVar82 - fVar87;
        fStack00000000000000a4 = fVar73 + fVar62;
        in_stack_000000a0 = 0;
        fStack00000000000000a8 = fVar94 + fVar72;
        fStack00000000000000b0 = fVar86;
        in_stack_00001790 = uVar24;
        in_stack_00001798 = uVar31;
        in_stack_000017a0 = fVar87;
      }
      if (((*puVar1 == 1) || (uVar93 == uVar40)) || (((int)uVar42 <= (int)uVar93 || (!bVar14)))) {
        uVar25 = (ulong)in_stack_000000a0;
        uVar29 = (ulong)(uint)fStack00000000000000a4;
        uVar70 = (ulong)(uint)fStack00000000000000b4;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar70,uVar25,uVar29,fStack00000000000000a8,uVar25);
        bVar13 = false;
      }
      else {
        bVar13 = true;
      }
    }
    uVar93 = *puVar1;
    iVar53 = iVar53 + 1;
    lVar23 = lVar23 + 0x178;
    bVar14 = (int)uVar43 < (int)uVar93;
    uVar17 = uVar34;
    uVar43 = uVar43 + 1;
  } while (bVar14);
  lVar22 = *plVar2;
  if (lVar22 == 0) goto LAB_0249920c;
  iVar20 = uVar34 + 1;
LAB_02498c58:
  puVar11 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  puVar10 = PTR_DAT_033ed410;
  *(uint *)(lVar22 + 0x18) = uVar93;
  lVar23 = unaff_x19[0xd3];
  *(int *)(lVar22 + 0x2c) = iVar20;
  iVar20 = iStack00000000000000ac;
  if ((int)uVar93 < 1) {
    iVar20 = 1;
  }
  if (iStack00000000000000ac == 0) {
    iVar20 = 1;
  }
  *(int *)(lVar22 + 0x1c) = (int)lVar23;
  *(int *)(lVar22 + 0x24) = iVar20;
  *(int *)(lVar22 + 0x30) = (int)unaff_x19[0x95] + 1;
  if (((int)unaff_x19[0x62] != 0xff) ||
     (uVar27 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar27 & 1) == 0)) {
LAB_02496098:
    if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__ + 0xe0) == 0)
    {
      thunk_FUN_00d32864();
    }
    FUN_024a942c();
    return;
  }
  lVar22 = unaff_x19[0xde];
  if (lVar22 != 0) {
    (**(code **)(lVar22 + 0x18))
              (*(undefined8 *)(lVar22 + 0x40),*plVar2,*(undefined8 *)(lVar22 + 0x28));
  }
  if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
  iVar20 = FUN_02859dc4(unaff_x19[0xe4],0);
  if (iVar20 != 0x19) {
    lVar22 = unaff_x19[0xe4];
    if (lVar22 == 0) goto LAB_0249920c;
    uVar93 = FUN_02859dc4(lVar22,0);
    FUN_02859e00(lVar22,uVar93 | 0x19,0);
  }
  if (*(int *)((long)unaff_x19 + 0x314) != 0) {
    if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x60), lVar22 == 0)) goto LAB_0249920c;
    if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    if (*(int *)(lVar22 + 0x18) == 0)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    FUN_024e8000(lVar22 + 0x20,1,0);
  }
  if (unaff_x19[0x73] != 0) {
    UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
              (unaff_x19[0x73],0);
    if ((unaff_x19[0x6c] != 0) && (lVar22 = *(long *)(unaff_x19[0x6c] + 0x60), lVar22 != 0)) {
      if (*(int *)(lVar22 + 0x18) == 0) {
UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      if (unaff_x19[0x73] != 0) {
        FUN_0266b9c4(unaff_x19[0x73],*(undefined8 *)(lVar22 + 0x30),0);
        if ((unaff_x19[0x6c] != 0) && (lVar22 = *(long *)(unaff_x19[0x6c] + 0x60), lVar22 != 0)) {
          if (*(int *)(lVar22 + 0x18) == 0)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          if (unaff_x19[0x73] != 0) {
            FUN_0266bbc8(unaff_x19[0x73],*(undefined8 *)(lVar22 + 0x48),0);
            if ((unaff_x19[0x6c] != 0) && (lVar22 = *(long *)(unaff_x19[0x6c] + 0x60), lVar22 != 0))
            {
              if (*(int *)(lVar22 + 0x18) == 0)
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              if (unaff_x19[0x73] != 0) {
                FUN_0266bc74(unaff_x19[0x73],*(undefined8 *)(lVar22 + 0x50),0);
                if ((unaff_x19[0x6c] != 0) &&
                   (lVar22 = *(long *)(unaff_x19[0x6c] + 0x60), lVar22 != 0)) {
                  if (*(int *)(lVar22 + 0x18) == 0)
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  if (unaff_x19[0x73] != 0) {
                    FUN_0266c1dc(unaff_x19[0x73],*(undefined8 *)(lVar22 + 0x58),0);
                    if (unaff_x19[0x73] != 0) {
                      FUN_0266ed90(unaff_x19[0x73],0);
                      if (unaff_x19[0xe3] != 0) {
                        FUN_02858f1c(unaff_x19[0xe3],unaff_x19[0x73],0);
                        if (unaff_x19[0xe3] != 0) {
                          uVar31 = FUN_02858bac(unaff_x19[0xe3],0);
                          if (unaff_x19[0xe3] != 0) {
                            uVar93 = FUN_02858a14(unaff_x19[0xe3],0);
                            lVar22 = *plVar2;
                            if (lVar22 != 0) {
                              lVar37 = 0;
                              lVar23 = 0;
                              do {
                                uVar27 = lVar23 + 1;
                                if ((long)*(int *)(lVar22 + 0x34) <= (long)uVar27)
                                goto LAB_02496098;
                                lVar22 = *(long *)(lVar22 + 0x60);
                                if (lVar22 == 0) break;
                                if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                if (*(uint *)(lVar22 + 0x18) <= uVar27)
                                goto 
                                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                ;
                                FUN_024e7ecc(lVar22 + lVar37 + 0x70,0);
                                lVar22 = unaff_x19[0xe0];
                                if (lVar22 == 0) break;
                                if (*(uint *)(lVar22 + 0x18) <= uVar27)
                                goto 
                                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                ;
                                uVar24 = *(undefined8 *)(lVar22 + lVar23 * 8 + 0x28);
                                if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                uVar30 = FUN_0268b4e0(uVar24,0,0);
                                if ((uVar30 & 1) == 0) {
                                  if (*(int *)((long)unaff_x19 + 0x314) != 0) {
                                    if ((*plVar2 == 0) ||
                                       (lVar22 = *(long *)(*plVar2 + 0x60), lVar22 == 0)) break;
                                    if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                                      thunk_FUN_00d32864();
                                    }
                                    if (*(uint *)(lVar22 + 0x18) <= uVar27)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    FUN_024e8000(lVar22 + lVar37 + 0x70,1,0);
                                  }
                                  lVar22 = unaff_x19[0xe0];
                                  if (lVar22 == 0) break;
                                  if (*(uint *)(lVar22 + 0x18) <= uVar27)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  lVar22 = *(long *)(lVar22 + lVar23 * 8 + 0x28);
                                  if (lVar22 == 0) break;
                                  lVar22 = FUN_024f0144(lVar22,0);
                                  if ((*plVar2 == 0) ||
                                     (lVar51 = *(long *)(*plVar2 + 0x60), lVar51 == 0)) break;
                                  if (*(uint *)(lVar51 + 0x18) <= uVar27)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  if (lVar22 == 0) break;
                                  FUN_0266b9c4(lVar22,*(undefined8 *)(lVar51 + lVar37 + 0x80),0);
                                  lVar22 = unaff_x19[0xe0];
                                  if (lVar22 == 0) break;
                                  if (*(uint *)(lVar22 + 0x18) <= uVar27)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  lVar22 = *(long *)(lVar22 + lVar23 * 8 + 0x28);
                                  if (lVar22 == 0) break;
                                  lVar22 = FUN_024f0144(lVar22,0);
                                  if ((*plVar2 == 0) ||
                                     (lVar51 = *(long *)(*plVar2 + 0x60), lVar51 == 0)) break;
                                  if (*(uint *)(lVar51 + 0x18) <= uVar27)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  if (lVar22 == 0) break;
                                  FUN_0266bbc8(lVar22,*(undefined8 *)(lVar51 + lVar37 + 0x98),0);
                                  lVar22 = unaff_x19[0xe0];
                                  if (lVar22 == 0) break;
                                  if (*(uint *)(lVar22 + 0x18) <= uVar27)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  lVar22 = *(long *)(lVar22 + lVar23 * 8 + 0x28);
                                  if (lVar22 == 0) break;
                                  lVar22 = FUN_024f0144(lVar22,0);
                                  if ((*plVar2 == 0) ||
                                     (lVar51 = *(long *)(*plVar2 + 0x60), lVar51 == 0)) break;
                                  if (*(uint *)(lVar51 + 0x18) <= uVar27)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  if (lVar22 == 0) break;
                                  FUN_0266bc74(lVar22,*(undefined8 *)(lVar51 + lVar37 + 0xa0),0);
                                  lVar22 = unaff_x19[0xe0];
                                  if (lVar22 == 0) break;
                                  if (*(uint *)(lVar22 + 0x18) <= uVar27)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  lVar22 = *(long *)(lVar22 + lVar23 * 8 + 0x28);
                                  if (lVar22 == 0) break;
                                  lVar22 = FUN_024f0144(lVar22,0);
                                  if ((*plVar2 == 0) ||
                                     (lVar51 = *(long *)(*plVar2 + 0x60), lVar51 == 0)) break;
                                  if (*(uint *)(lVar51 + 0x18) <= uVar27)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  if (lVar22 == 0) break;
                                  FUN_0266c1dc(lVar22,*(undefined8 *)(lVar51 + lVar37 + 0xa8),0);
                                  lVar22 = unaff_x19[0xe0];
                                  if (lVar22 == 0) break;
                                  if (*(uint *)(lVar22 + 0x18) <= uVar27)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  lVar22 = *(long *)(lVar22 + lVar23 * 8 + 0x28);
                                  if ((lVar22 == 0) ||
                                     (lVar22 = FUN_024f0144(lVar22,0), lVar22 == 0)) break;
                                  FUN_0266ed90(lVar22,0);
                                  lVar22 = unaff_x19[0xe0];
                                  if (lVar22 == 0) break;
                                  if (*(uint *)(lVar22 + 0x18) <= uVar27)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  lVar22 = *(long *)(lVar22 + lVar23 * 8 + 0x28);
                                  if (lVar22 == 0) break;
                                  lVar22 = FUN_02738ef4(lVar22,0);
                                  lVar51 = unaff_x19[0xe0];
                                  if (lVar51 == 0) break;
                                  if (*(uint *)(lVar51 + 0x18) <= uVar27)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  lVar51 = *(long *)(lVar51 + lVar23 * 8 + 0x28);
                                  if ((lVar51 == 0) ||
                                     (uVar24 = FUN_024f0144(lVar51,0), lVar22 == 0)) break;
                                  FUN_02858f1c(lVar22,uVar24,0);
                                  lVar22 = unaff_x19[0xe0];
                                  if (lVar22 == 0) break;
                                  if (*(uint *)(lVar22 + 0x18) <= uVar27)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  lVar22 = *(long *)(lVar22 + lVar23 * 8 + 0x28);
                                  if ((lVar22 == 0) ||
                                     (lVar22 = FUN_02738ef4(lVar22,0), lVar22 == 0)) break;
                                  FUN_02858b14(uVar31,uVar70,uVar25,uVar29,lVar22,0);
                                  lVar22 = unaff_x19[0xe0];
                                  if (lVar22 == 0) break;
                                  if (*(uint *)(lVar22 + 0x18) <= uVar27)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  lVar22 = *(long *)(lVar22 + lVar23 * 8 + 0x28);
                                  if ((lVar22 == 0) ||
                                     (lVar22 = FUN_02738ef4(lVar22,0), lVar22 == 0)) break;
                                  FUN_02858a50(lVar22,uVar93 & 1,0);
                                  lVar22 = unaff_x19[0xe0];
                                  if (lVar22 == 0) break;
                                  if (*(uint *)(lVar22 + 0x18) <= uVar27)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  plVar52 = *(long **)(lVar22 + lVar23 * 8 + 0x28);
                                  uVar21 = (**(code **)(*unaff_x19 + 0x2b8))();
                                  if (plVar52 == (long *)0x0) break;
                                  (**(code **)(*plVar52 + 0x2c8))
                                            (plVar52,uVar21 & 1,*(undefined8 *)(*plVar52 + 0x2d0));
                                }
                                lVar22 = *plVar2;
                                lVar23 = lVar23 + 1;
                                lVar37 = lVar37 + 0x50;
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
    }
  }
LAB_0249920c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


