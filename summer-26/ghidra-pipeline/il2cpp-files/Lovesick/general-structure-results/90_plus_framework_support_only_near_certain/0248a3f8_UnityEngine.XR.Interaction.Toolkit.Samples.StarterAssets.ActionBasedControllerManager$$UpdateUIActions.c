/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.ActionBasedControllerManager$$UpdateUIActions
ENTRY_POINT: 0248a3f8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 145
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_21;validity_or_gating_hits_21;weak_vector_component_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager__UpdateUIActions
               (float param_1)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  byte bVar11;
  double __x;
  undefined *puVar12;
  undefined *puVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  int *piVar28;
  ulong uVar29;
  undefined8 uVar30;
  undefined1 uVar31;
  char cVar32;
  uint in_w8;
  uint uVar33;
  undefined4 *puVar34;
  long lVar35;
  uint in_w9;
  uint uVar36;
  long lVar37;
  long *plVar38;
  float *pfVar39;
  code *pcVar40;
  uint in_w10;
  uint uVar41;
  float *pfVar42;
  uint uVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long *unaff_x19;
  undefined8 *unaff_x20;
  int unaff_w21;
  undefined8 *unaff_x23;
  long *unaff_x25;
  long *plVar47;
  long lVar48;
  uint uVar49;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
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
  ulong uVar65;
  double dVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined4 uVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float unaff_s11;
  float fVar80;
  float fVar81;
  float unaff_s13;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  undefined4 uVar86;
  float fVar87;
  uint uStack0000000000000024;
  float fStack0000000000000034;
  int iStack0000000000000048;
  float fStack000000000000004c;
  undefined4 uStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  uint uStack000000000000005c;
  float fStack000000000000006c;
  float fStack000000000000007c;
  undefined8 in_stack_00000080;
  undefined8 uStack0000000000000088;
  float fStack0000000000000090;
  undefined4 uStack0000000000000094;
  float fStack00000000000000a0;
  int iStack00000000000000a4;
  float fStack00000000000000a8;
  float fStack00000000000000ac;
  undefined8 uStack00000000000000b8;
  float fStack00000000000000c4;
  float fStack00000000000000c8;
  float fStack00000000000000cc;
  float fStack00000000000000dc;
  float fStack00000000000000e0;
  float fStack00000000000000e4;
  float fStack00000000000000e8;
  float fStack00000000000000ec;
  uint uStack0000000000000114;
  long lStack0000000000000128;
  float fStack0000000000000134;
  int iStack0000000000000144;
  undefined8 in_stack_00000158;
  float fStack0000000000000160;
  float fStack0000000000000164;
  float in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  float in_stack_00000180;
  double dVar88;
  undefined4 uVar89;
  undefined4 in_stack_00000bfc;
  undefined8 in_stack_00000c00;
  long in_stack_000016d8;
  uint in_stack_0000176c;
  uint uVar90;
  undefined8 in_stack_00001790;
  undefined8 in_stack_00001798;
  float in_stack_000017a0;
  undefined8 in_stack_000017a8;
  float fVar91;
  uint in_stack_000017bc;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0248a3e0 with catch @ 0248a3fc
                       catch(type#2 @ 00000000) { ... } // from try @ 0248a3f4 with catch @ 0248a3fc
                        */
  uVar90 = in_w8 & 0xff | (in_w9 & 0xff) << 8 | (in_w10 & 0xff) << 0x10 | (int)param_1 << 0x18;
  *(uint *)((long)unaff_x19 + 0x13c) = uVar90;
  *(uint *)((long)unaff_x19 + 0x4e4) = uVar90;
  *(uint *)(unaff_x19 + 0x2a) = uVar90;
  *(uint *)((long)unaff_x19 + 0x154) = uVar90;
  FUN_013b7dec(unaff_x19 + 0x9d,&stack0x00000880,*unaff_x20);
  FUN_013b7dec(unaff_x19 + 0xa1,&stack0x00000880,*unaff_x20);
                    /* try { // try from 0248a470 to 0258a587 has its CatchHandler @ 0248a470
                       catch() { ... } // from try @ 0248a470 with catch @ 0248a470
                       catch() { ... } // from try @ 0248a614 with catch @ 0248a470
                       catch() { ... } // from try @ 0248a658 with catch @ 0248a470
                       catch() { ... } // from try @ 0248a694 with catch @ 0248a470
                       catch() { ... } // from try @ 0248a6c4 with catch @ 0248a470 */
  FUN_013b7dec(unaff_x19 + 0xa5,&stack0x00000880,*unaff_x20);
  uVar89 = *(undefined4 *)((long)unaff_x19 + 0x4e4);
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (DAT_037825d3 == '\0') {
    thunk_FUN_00d48444(Unity_AI_Navigation_NavMeshLink_TypeInfo);
    DAT_037825d3 = '\x01';
  }
  puVar13 = 
  Method_UnityEngine_XR_Interaction_Toolkit_AR_ARBaseGestureInteractable_OnGestureStarted<TwistGesture>__
  ;
  puVar12 = Method_System_Collections_Generic_List<SoundData>_GetEnumerator__;
  lVar22 = *unaff_x25;
  if (*(int *)(lVar22 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar22 = *unaff_x25;
  }
  puVar34 = *(undefined4 **)(lVar22 + 0xb8);
  dVar88 = 0.0;
  UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
            (*puVar34,puVar34[1],puVar34[2],puVar34[3],&stack0x00000880,uVar89,0);
  uVar30 = *(undefined8 *)puVar12;
  unaff_x28[0x73] = unaff_x28[1];
  unaff_x28[0x72] = *unaff_x28;
  FUN_013b7dec(unaff_x19 + 0xa9,&stack0x00000c10,uVar30);
  unaff_x19[0xaf] = 0;
  FUN_013b7dec(unaff_x19 + 0xb0,0,*(undefined8 *)puVar13);
  puVar12 = 
  UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Theme_Primitives_Vector3AffordanceTheme_TypeInfo
  ;
  if (unaff_x19[0x1f] != 0) {
    *(uint *)(unaff_x19 + 0xbd) = (uint)*(byte *)(unaff_x19[0x1f] + 0x1b8);
    puVar13 = Method_System_Collections_Generic_Dictionary<SystemLanguage,_string>_Add__;
    FUN_013b7dec(unaff_x19 + 0xb9,&stack0x00000bf8,*(undefined8 *)puVar12);
    FUN_013b7d38(unaff_x19 + 0xbe,*(undefined8 *)puVar13);
    *(undefined1 *)((long)unaff_x19 + 0x46c) = 0;
    *(undefined4 *)(unaff_x19 + 0x9a) = 0;
    *(undefined4 *)(unaff_x19 + 0x57) = 0xc6fffe00;
    plVar38 = (long *)System_Threading_Mutex_TypeInfo;
    if (unaff_x19[0x1f] != 0) {
      fVar50 = (float)FUN_026fd130(unaff_x19[0x1f] + 0x50,0);
      if (*unaff_x27 != 0) {
        fVar51 = (float)FUN_026fd140(*unaff_x27 + 0x50,0);
        if (*unaff_x27 != 0) {
          fVar52 = (float)FUN_026fd180(*unaff_x27 + 0x50,0);
          *(undefined8 *)((long)unaff_x19 + 0x2a4) = 0;
          *(undefined4 *)(unaff_x19 + 199) = 0;
          unaff_x19[0x80] = 0;
          uVar89 = 0;
          FUN_013b7dec(unaff_x19 + 0x81,&stack0x00000bf8,*unaff_x23);
          *(undefined1 *)(unaff_x19 + 0x85) = 0;
          *(undefined4 *)((long)unaff_x19 + 0x48c) = 0;
          *(undefined4 *)(unaff_x19 + 0x92) = *(undefined4 *)((long)unaff_x19 + 0x31c);
          *(undefined8 *)((long)unaff_x19 + 0x494) = 0;
          *(undefined4 *)((long)unaff_x19 + 0x49c) = 0;
          lVar22 = *plVar38;
          if (*(int *)(lVar22 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar22 = *plVar38;
          }
          lVar23 = unaff_x19[0x6c];
          uVar30 = *(undefined8 *)(*(long *)(lVar22 + 0xb8) + 0x15a8);
          unaff_x19[0x94] = 0;
          unaff_x19[0x99] = 0;
          *(undefined1 *)((long)unaff_x19 + 700) = 0;
          lVar22 = NEON_rev64(uVar30,4);
          *(undefined4 *)((long)unaff_x19 + 0x2dc) = 0xffffffff;
          unaff_x19[0x98] = lVar22;
          *(undefined4 *)(unaff_x19 + 0x95) = 0;
          if ((lVar23 != 0) && (*(long *)(lVar23 + 0x58) != 0)) {
            uVar36 = (int)unaff_x19[0x66] - 1;
            uVar90 = *(int *)(*(long *)(lVar23 + 0x58) + 0x18) - 1;
            if ((int)uVar36 <= (int)uVar90) {
              uVar90 = uVar36;
            }
            uVar3 = 0;
            if (-1 < (int)uVar36) {
              uVar3 = uVar90;
            }
            FUN_024f1d04(lVar23,0);
            fVar53 = *(float *)(unaff_x19 + 0x67);
            *(undefined4 *)(unaff_x19 + 0x6b) = 0xbf800000;
            fVar84 = *(float *)(unaff_x19 + 0x6a);
            unaff_x19[0x69] = 0;
            lVar22 = *plVar38;
            fVar54 = *(float *)((long)unaff_x19 + 0x33c);
            fVar87 = *(float *)((long)unaff_x19 + 0x354);
            fVar55 = *(float *)((long)unaff_x19 + 0x344);
            if (*(int *)(lVar22 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar22 = *plVar38;
            }
            *(undefined8 *)((long)unaff_x19 + 0x4d4) =
                 *(undefined8 *)(*(long *)(lVar22 + 0xb8) + 0x1598);
            *(undefined8 *)((long)unaff_x19 + 0x4dc) =
                 *(undefined8 *)(*(long *)(lVar22 + 0xb8) + 0x15a0);
            puVar12 = 
            Method_MedleyBossMemoryGame_<StartPhaseCoroutine>d__41_System_Collections_IEnumerator_Reset__
            ;
            if (unaff_x19[0x6c] != 0) {
              FUN_024f1b84(unaff_x19[0x6c],0);
              *(undefined4 *)((long)unaff_x19 + 0x4b4) = 0;
              *(undefined4 *)((long)unaff_x19 + 0x4bc) = 0;
              *(undefined8 *)((long)unaff_x19 + 0x4ac) = 0;
              fVar91 = 0.0;
              *(undefined1 *)((long)unaff_x28 + 0xf34) = 0;
              *(undefined1 *)((long)unaff_x19 + 0x334) = 0;
              *(undefined1 *)((long)unaff_x19 + 0x2d2) = 0;
              FUN_024f102c(&stack0x000017a8,0xffffffff,0,0);
              FUN_024d69d4();
              FUN_024d69d4();
              FUN_024d69d4();
              FUN_024d69d4();
              FUN_024d69d4();
              FUN_013b7d38(*(long *)(*plVar38 + 0xb8) + 0x11f0,*(undefined8 *)puVar12);
              fVar70 = DAT_028aa3e4;
              fVar71 = DAT_028aa028;
              uVar90 = 0;
              lVar22 = unaff_x19[0x8e];
              if (lVar22 != 0) {
                puVar1 = (uint *)((long)unaff_x19 + 0x48c);
                uVar36 = unaff_w21 - 1;
                uVar27 = (ulong)(uint)fStack0000000000000054;
                fVar50 = fVar50 - (fVar51 - fVar52);
                lVar23 = (long)unaff_x19 + 0x42c;
                fStack0000000000000134 = 0.0;
                if (fVar84 <= 0.0) {
                  fVar84 = 0.0;
                }
                if (fVar87 <= 0.0) {
                  fVar87 = 0.0;
                }
                plVar2 = unaff_x19 + 0x6c;
                fVar84 = fVar84 + _LAB_028aa024;
                uVar65 = (ulong)(uint)fVar84;
                fVar52 = fVar87 + _LAB_028aa024;
                fVar51 = unaff_s11 * DAT_028aa028 * unaff_s13;
                bVar10 = true;
                fStack0000000000000034 = 0.0;
                bVar14 = false;
                iStack0000000000000144 = 0;
                bVar11 = 1;
                fStack00000000000000dc = fVar84;
LAB_0248a8e0:
                fVar73 = (float)uVar27;
                fVar58 = 1.0;
                if ((int)*(uint *)(lVar22 + 0x18) <= (int)uVar90) {
LAB_0248e4dc:
                  fVar50 = (float)uVar65;
                  if (((char)unaff_x19[0x46] != '\0') &&
                     (fVar50 = DAT_02956ccc,
                     DAT_02956ccc <
                     *(float *)((long)unaff_x19 + 0x234) - *(float *)(unaff_x19 + 0x47))) {
                    fVar50 = *(float *)((long)unaff_x19 + 0x1dc);
                    fVar51 = *(float *)((long)unaff_x19 + 0x24c);
                    if ((fVar50 < fVar51) &&
                       (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                      if (*(float *)((long)unaff_x19 + 0x2cc) < *(float *)(unaff_x19 + 0x59) / 100.0
                         ) {
                        *(undefined4 *)((long)unaff_x19 + 0x2cc) = 0;
                      }
                      fVar52 = (*(float *)((long)unaff_x19 + 0x234) - fVar50) * 0.5;
                      if (fVar52 <= DAT_028aa298) {
                        fVar52 = DAT_028aa298;
                      }
                      *(float *)(unaff_x19 + 0x47) = fVar50;
                      fVar52 = (fVar50 + fVar52) * 20.0 + 0.5;
                      fVar50 = DAT_02958220;
                      if (fVar52 != INFINITY) {
                        fVar50 = (float)(int)fVar52 / 20.0;
                      }
                      if (fVar51 <= fVar50) {
                        fVar50 = fVar51;
                      }
LAB_0248e598:
                      *(float *)((long)unaff_x19 + 0x1dc) = fVar50;
                      return;
                    }
                  }
                  *(undefined1 *)((long)unaff_x19 + 0x244) = 1;
                  if ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c)) {
                    uVar30 = FUN_0176eb1c((long)unaff_x19 + 0x23c,0);
                    uVar24 = FUN_017840ac((long)unaff_x19 + 0x1dc,0);
                    uVar30 = FUN_0160073c(*(undefined8 *)
                                           Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlah_s16__,
                                          uVar30,*(undefined8 *)
                                                  Method_UnityEngine_GameObject_GetComponents<Component>__
                                          ,uVar24,0);
                    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                      thunk_FUN_00d32864(*unaff_x29);
                    }
                    FUN_02660dac(uVar30,0);
                  }
                  puVar12 = Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__;
                  if ((*puVar1 == 0) || ((*puVar1 == 1 && (in_stack_000017bc == 3)))) {
                    (**(code **)(*unaff_x19 + 0x958))();
                    lVar22 = *(long *)puVar12;
                    goto LAB_02491474;
                  }
                  lVar22 = *plVar38;
                  if (*(int *)(lVar22 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar22 = *plVar38;
                  }
                  plVar38 = (long *)PTR_DAT_033ed410;
                  lVar22 = **(long **)(lVar22 + 0xb8);
                  if (lVar22 == 0) goto LAB_02491464;
                  if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0xd0))
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                  iVar18 = *(int *)(lVar22 + (long)(int)*(uint *)(unaff_x19 + 0xd0) * 0x38 + 0x54)
                           << 2;
                  if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x60), lVar22 == 0))
                  goto LAB_02491464;
                  if (*(int *)(*(long *)PTR_DAT_033ed410 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  if (*(int *)(lVar22 + 0x18) == 0)
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                  FUN_024e7d94(lVar22 + 0x20,0,0);
                  if (DAT_03774d76 == '\0') {
                    thunk_FUN_00d48444(
                                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                      );
                    DAT_03774d76 = '\x01';
                  }
                  iVar7 = (int)unaff_x19[0x4d];
                  fStack00000000000000c4 =
                       **(float **)
                         (*(long *)
                           Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                         + 0xb8);
                  uStack00000000000000b8 =
                       *(undefined8 *)
                        (*(float **)
                          (*(long *)
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          + 0xb8) + 1);
                  lVar22 = unaff_x19[0xea];
                  uStack0000000000000088 = uStack00000000000000b8;
                  fStack0000000000000090 = fStack00000000000000c4;
                  if (iVar7 < 0x401) {
                    if (iVar7 == 0x100) {
                      if (lVar22 == 0) goto LAB_02491464;
                      if (*(uint *)(lVar22 + 0x18) < 2)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      uVar30 = *(undefined8 *)(lVar22 + 0x30);
                      if ((int)unaff_x19[0x5b] == 5) {
                        if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x58), lVar23 == 0))
                        goto LAB_02491464;
                        if (*(uint *)(lVar23 + 0x18) <= uVar3)
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                        ;
                        fVar50 = *(float *)(lVar23 + (long)(int)uVar3 * 0x14 + 0x28);
                      }
                      else {
                        fVar50 = *(float *)(unaff_x19 + 0x96);
                      }
                      fStack0000000000000090 = fVar53 + 0.0 + *(float *)(lVar22 + 0x2c);
                      fVar50 = (0.0 - fVar50) - fVar54;
                    }
                    else if (iVar7 == 0x200) {
                      if (lVar22 == 0) goto LAB_02491464;
                      if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0))
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      fStack0000000000000090 =
                           (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
                      uVar30 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                                        (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20)) *
                                        0.5,((float)*(undefined8 *)(lVar22 + 0x24) +
                                            (float)*(undefined8 *)(lVar22 + 0x30)) * 0.5);
                      if ((int)unaff_x19[0x5b] == 5) {
                        if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x58), lVar22 == 0))
                        goto LAB_02491464;
                        if (*(uint *)(lVar22 + 0x18) <= uVar3)
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                        ;
                        lVar22 = lVar22 + (long)(int)uVar3 * 0x14;
                        fStack0000000000000090 = fVar53 + 0.0 + fStack0000000000000090;
                        fVar50 = ((fVar54 + *(float *)(lVar22 + 0x28) + *(float *)(lVar22 + 0x30)) -
                                 fVar55) * -0.5 + 0.0;
                      }
                      else {
                        fStack0000000000000090 = fVar53 + 0.0 + fStack0000000000000090;
                        fVar50 = ((fVar54 + *(float *)(unaff_x19 + 0x96) + fVar91) - fVar55) * -0.5
                                 + 0.0;
                      }
                    }
                    else {
                      if (iVar7 != 0x400) goto LAB_0248eb64;
                      if (lVar22 == 0) goto LAB_02491464;
                      if (*(int *)(lVar22 + 0x18) == 0)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      uVar30 = *(undefined8 *)(lVar22 + 0x24);
                      if ((int)unaff_x19[0x5b] == 5) {
                        if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x58), lVar23 == 0))
                        goto LAB_02491464;
                        if (*(uint *)(lVar23 + 0x18) <= uVar3)
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                        ;
                        fVar91 = *(float *)(lVar23 + (long)(int)uVar3 * 0x14 + 0x30);
                      }
                      fStack0000000000000090 = fVar53 + 0.0 + *(float *)(lVar22 + 0x20);
                      fVar50 = fVar55 + (0.0 - fVar91);
                    }
                    uStack0000000000000088 =
                         CONCAT44((float)((ulong)uVar30 >> 0x20) + 0.0,(float)uVar30 + fVar50);
                  }
                  else if (iVar7 == 0x800) {
                    if (lVar22 == 0) goto LAB_02491464;
                    if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0))
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    fVar50 = ((float)*(undefined8 *)(lVar22 + 0x24) +
                             (float)*(undefined8 *)(lVar22 + 0x30)) * 0.5;
                    fStack0000000000000090 =
                         fVar53 + 0.0 +
                         (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
                    uStack0000000000000088 =
                         CONCAT44(((float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                                  (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20)) * 0.5 +
                                  0.0,fVar50 + 0.0);
                  }
                  else {
                    if (iVar7 == 0x1000) {
                      if (lVar22 == 0) goto LAB_02491464;
                      if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0))
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      fVar50 = (float)*(undefined8 *)(lVar22 + 0x24) +
                               (float)*(undefined8 *)(lVar22 + 0x30);
                      fVar51 = (float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                               (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20);
                      fVar54 = fVar54 + *(float *)(unaff_x19 + 0x9c) + *(float *)(unaff_x19 + 0x9b);
                      fStack0000000000000090 =
                           fVar53 + 0.0 +
                           (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
                    }
                    else {
                      if (iVar7 != 0x2000) goto LAB_0248eb64;
                      if (lVar22 == 0) goto LAB_02491464;
                      if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0))
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      fVar50 = (float)*(undefined8 *)(lVar22 + 0x24) +
                               (float)*(undefined8 *)(lVar22 + 0x30);
                      fVar51 = (float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                               (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20);
                      fVar54 = *(float *)((long)unaff_x19 + 0x4b4) - fVar54;
                      fStack0000000000000090 =
                           fVar53 + 0.0 +
                           (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
                    }
                    fVar50 = fVar50 * 0.5;
                    uStack0000000000000088 =
                         CONCAT44(fVar51 * 0.5 + 0.0,fVar50 + (0.0 - (fVar54 - fVar55) * 0.5));
                  }
LAB_0248eb64:
                  lVar22 = FUN_0249b7f8();
                  if (lVar22 != 0) {
                    FUN_026a125c(lVar22,0);
                    __x = DAT_028aa048;
                    *(float *)((long)unaff_x19 + 0x6dc) = fVar50;
                    dVar66 = modf(__x,(double *)&stack0x00000880);
                    puVar12 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
                    if (dVar66 == 0.5) {
                      fVar51 = (float)dVar88;
                      if (((long)dVar88 & 1U) != 0) {
                        fVar51 = (float)dVar88 + 1.0;
                      }
                    }
                    else {
                      fVar51 = 255.0;
                    }
                    dVar66 = modf(__x,(double *)&stack0x00000880);
                    if (dVar66 == 0.5) {
                      fVar52 = (float)dVar88;
                      if (((long)dVar88 & 1U) != 0) {
                        fVar52 = (float)dVar88 + 1.0;
                      }
                    }
                    else {
                      fVar52 = 255.0;
                    }
                    dVar66 = modf(__x,(double *)&stack0x00000880);
                    if (dVar66 == 0.5) {
                      fVar54 = (float)dVar88;
                      if (((long)dVar88 & 1U) != 0) {
                        fVar54 = (float)dVar88 + 1.0;
                      }
                    }
                    else {
                      fVar54 = 255.0;
                    }
                    dVar66 = modf(__x,(double *)&stack0x00000880);
                    if (dVar66 == 0.5) {
                      fVar53 = (float)dVar88;
                      if (((long)dVar88 & 1U) != 0) {
                        fVar53 = (float)dVar88 + 1.0;
                      }
                    }
                    else {
                      fVar53 = 255.0;
                    }
                    modf(__x,(double *)&stack0x00000880);
                    modf(__x,(double *)&stack0x00000880);
                    modf(__x,(double *)&stack0x00000880);
                    modf(__x,(double *)&stack0x00000880);
                    if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    if (DAT_037825d3 == '\0') {
                      thunk_FUN_00d48444(Unity_AI_Navigation_NavMeshLink_TypeInfo);
                      DAT_037825d3 = '\x01';
                    }
                    puVar12 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
                    lVar22 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
                    if (*(int *)(lVar22 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                      lVar22 = *(long *)puVar12;
                    }
                    puVar34 = *(undefined4 **)(lVar22 + 0xb8);
                    UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
                              (*puVar34,puVar34[1],puVar34[2],puVar34[3],&stack0x00001790,0x4000ffff
                               ,0);
                    if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    lVar22 = *plVar2;
                    if (lVar22 != 0) {
                      uVar90 = *puVar1;
                      if ((int)uVar90 < 1) {
                        iStack00000000000000a4 = 0;
                        iVar18 = 0;
                        plVar47 = (long *)
                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                        ;
                        goto LAB_02491068;
                      }
                      lVar22 = *(long *)(lVar22 + 0x38);
                      if (lVar22 != 0) {
                        iVar7 = 0;
                        bVar15 = false;
                        bVar9 = false;
                        bVar14 = false;
                        iStack00000000000000a4 = 0;
                        uStack0000000000000024 = 0;
                        bVar10 = false;
                        uStack0000000000000114 = 0;
                        iStack0000000000000048 = 0;
                        fStack00000000000000cc =
                             *(float *)(*(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8) +
                                       0x15a8);
                        fStack00000000000000c8 = 0.0;
                        fStack0000000000000054 = fStack00000000000000a8;
                        fStack0000000000000058 = 0.0;
                        fVar55 = 0.0;
                        in_stack_00000080._4_4_ = 0.0;
                        fStack0000000000000034 = 0.0;
                        uStack000000000000005c =
                             (int)fVar51 & 0xffU | ((int)fVar52 & 0xffU) << 8 |
                             ((int)fVar54 & 0xffU) << 0x10 | (int)fVar53 << 0x18;
                        fVar54 = 0.0;
                        fVar51 = 0.0;
                        lStack0000000000000128 = 0x2e0;
                        fStack00000000000000a0 = fStack00000000000000ac;
                        fStack000000000000004c = fStack00000000000000ac;
                        uStack0000000000000050 = uStack0000000000000094;
                        fStack000000000000007c = fStack00000000000000a8;
                        fStack000000000000006c = fStack00000000000000ac;
                        uVar36 = 0;
                        uVar17 = 1;
                        fVar52 = fStack00000000000000a8;
                        uVar89 = uStack0000000000000094;
                        goto LAB_0248ef74;
                      }
                    }
                  }
                  goto LAB_02491464;
                }
                if (*(uint *)(lVar22 + 0x18) <= uVar90)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                uVar17 = *(uint *)(lVar22 + (long)(int)uVar90 * 0xc + 0x20);
                if (uVar17 == 0) goto LAB_0248e4dc;
                if (5 < iStack0000000000000144) {
                  uVar30 = FUN_0176eb1c(&stack0x000017bc,0);
                  uVar24 = FUN_0176eb1c(&stack0x00001788,0);
                  uVar30 = FUN_0160073c(*(undefined8 *)
                                         UnityEngine_Rendering_Universal_DebugValidationMode_var,
                                        uVar30,*(undefined8 *)
                                                Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                                        ,uVar24,0);
                  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                    thunk_FUN_00d32864(*unaff_x29);
                  }
                  FUN_026610e4(uVar30,0);
                  in_stack_000017a8 = CONCAT44(3,*puVar1);
                }
                if ((*(char *)((long)unaff_x19 + 0x2fa) == '\0') || (uVar17 != 0x3c)) {
                  if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x38), lVar22 == 0))
                  goto LAB_02491464;
                  if (*(uint *)(lVar22 + 0x18) <= *puVar1)
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                  lVar22 = lVar22 + (long)(int)*puVar1 * 0x178;
                  *(undefined4 *)((long)unaff_x19 + 0x63c) = *(undefined4 *)(lVar22 + 0x2c);
                  *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar22 + 0x58);
                  unaff_x19[0x1f] = *(long *)(lVar22 + 0x38);

                  UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager__GetInputAction
                  :
                  if ((unaff_x19[0x6c] == 0) ||
                     (lVar22 = *(long *)(unaff_x19[0x6c] + 0x38), lVar22 == 0)) goto LAB_02491464;
                  uVar19 = *puVar1;
                  if (*(uint *)(lVar22 + 0x18) <= uVar19)
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                  lVar48 = (long)(int)uVar19;
                  cVar32 = *(char *)(lVar22 + lVar48 * 0x178 + 0x5c);
                  *(undefined1 *)((long)unaff_x19 + 0x429) = 0;
                  lVar37 = unaff_x19[0x23];
                  if ((uint)in_stack_000017a8 == uVar19) {
                    uVar17 = (uint)((ulong)in_stack_000017a8 >> 0x20);
                    bVar9 = true;
                    *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
                    if (uVar17 == 0x2026) {
                      lVar26 = unaff_x19[0xc9];
                      lVar22 = lVar22 + lVar48 * 0x178;
                      *(undefined4 *)(lVar22 + 0x2c) = 0;
                      *(long *)(lVar22 + 0x30) = lVar26;
                      *(long *)(lVar22 + 0x38) = unaff_x19[0xca];
                      *(long *)(lVar22 + 0x50) = unaff_x19[0xcb];
                      *(int *)(lVar22 + 0x58) = (int)unaff_x19[0xcc];
                      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                      in_stack_000017a8 = CONCAT44(3,uVar19 + 1);
                    }
                    else if (uVar17 == 3) {
                      if ((*unaff_x27 == 0) || (lVar26 = FUN_024b11ac(*unaff_x27,0), lVar26 == 0))
                      goto LAB_02491464;
                      uVar89 = 3;
                      FUN_01299bc0(lVar26,&stack0x00000bf8,&stack0x00000880,
                                   *(undefined8 *)PTR_DAT_033ef3c8);
                      if (*(uint *)(lVar22 + 0x18) <= uVar19)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      bVar9 = true;
                      *(double *)(lVar22 + lVar48 * 0x178 + 0x30) = dVar88;
                      uVar19 = *(uint *)((long)unaff_x19 + 0x48c);
                      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                    }
                  }
                  else {
                    bVar9 = false;
                  }
                  plVar38 = (long *)System_Threading_Mutex_TypeInfo;
                  if (((int)uVar19 < *(int *)((long)unaff_x19 + 0x31c)) && (uVar17 != 3)) {
                    if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x38), lVar22 == 0))
                    goto LAB_02491464;
                    if (*(uint *)(lVar22 + 0x18) <= uVar19)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    lVar22 = lVar22 + (long)(int)uVar19 * 0x178;
                    *(undefined1 *)(lVar22 + 0x194) = 0;
                    *(undefined2 *)(lVar22 + 0x20) = 0x200b;
                    *(undefined4 *)(lVar22 + 100) = 0;
                    *puVar1 = uVar19 + 1;
                  }
                  else {
                    iVar18 = *(int *)((long)unaff_x19 + 0x63c);
                    fVar64 = fVar58;
                    if (iVar18 == 0) {
                      uVar19 = *(uint *)((long)unaff_x19 + 0x254);
                      if ((uVar19 >> 4 & 1) == 0) {
                        if ((uVar19 >> 3 & 1) == 0) {
                          if ((uVar19 >> 5 & 1) != 0) {
                            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0)
                                == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar25 = FUN_016f92d4(uVar17,0);
                            if ((uVar25 & 1) != 0) {
                              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0
                                          ) == 0) {
                                thunk_FUN_00d32864();
                              }
                              uVar17 = FUN_016f95a8(uVar17,0);
                              uVar17 = uVar17 & 0xffff;
                              fVar64 = fVar70;
                            }
                          }
                        }
                        else {
                          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) ==
                              0) {
                            thunk_FUN_00d32864();
                          }
                          uVar25 = FUN_016f9218(uVar17,0);
                          if ((uVar25 & 1) != 0) {
                            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0)
                                == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar17 = FUN_016f9724(uVar17,0);
                            goto LAB_0248af70;
                          }
                        }
                      }
                      else {
                        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0
                           ) {
                          thunk_FUN_00d32864();
                        }
                        uVar25 = FUN_016f92d4(uVar17,0);
                        fVar64 = 1.0;
                        if ((uVar25 & 1) != 0) {
                          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) ==
                              0) {
                            thunk_FUN_00d32864();
                          }
                          uVar17 = FUN_016f95a8(uVar17,0);
LAB_0248af70:
                          uVar17 = uVar17 & 0xffff;
                          fVar64 = 1.0;
                        }
                      }
                      iVar18 = *(int *)((long)unaff_x19 + 0x63c);
                      if (iVar18 == 0) goto LAB_0248af84;
LAB_0248abc8:
                      if (iVar18 == 1) {
                        if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x38), lVar22 == 0))
                        goto LAB_02491464;
                        if (*(uint *)(lVar22 + 0x18) <= *puVar1)
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                        ;
                        lVar22 = lVar22 + (long)(int)*puVar1 * 0x178;
                        lVar48 = *(long *)(lVar22 + 0x40);
                        unaff_x19[0xd2] = lVar48;
                        *(undefined4 *)((long)unaff_x19 + 0x69c) = *(undefined4 *)(lVar22 + 0x48);
                        if ((lVar48 == 0) || (lVar22 = FUN_024ebfa0(lVar48,0), lVar22 == 0))
                        goto LAB_02491464;
                        FUN_0132138c(lVar22,*(undefined4 *)((long)unaff_x19 + 0x69c),
                                     &stack0x00000880,
                                     *(undefined8 *)
                                      System_Func<KeyValuePair<int,_int>,_int>_TypeInfo);
                        puVar12 = System_Threading_Mutex_TypeInfo;
                        plVar38 = (long *)System_Threading_Mutex_TypeInfo;
                        if (dVar88 == 0.0) goto LAB_0248ab98;
                        if (uVar17 == 0x3c) {
                          uVar17 = *(int *)((long)unaff_x19 + 0x69c) + 0xe000;
                        }
                        else {
                          lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
                          if (*(int *)(lVar22 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                            lVar22 = *(long *)puVar12;
                          }
                          *(undefined4 *)((long)unaff_x19 + 0x1b4) =
                               *(undefined4 *)(*(long *)(lVar22 + 0xb8) + 0x68);
                        }
                        if (unaff_x19[0x1f] == 0) goto LAB_02491464;
                        fVar73 = *(float *)(unaff_x19 + 0x3c);
                        memmove(&stack0x00001700,(void *)(unaff_x19[0x1f] + 0x50),0x60);
                        iVar18 = FUN_026fd110(&stack0x00001700,0);
                        if (*unaff_x27 == 0) goto LAB_02491464;
                        memmove(&stack0x00001700,(void *)(*unaff_x27 + 0x50),0x60);
                        fVar56 = (float)FUN_026fd120(&stack0x00001700,0);
                        fVar85 = in_stack_00000080._4_4_;
                        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
                          fVar85 = 1.0;
                        }
                        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
                        fVar85 = (fVar73 / (float)iVar18) * fVar56 * fVar85;
                        iVar18 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
                        fVar73 = *(float *)(unaff_x19 + 0x3c);
                        if (iVar18 < 1) {
                          if (*unaff_x27 == 0) goto LAB_02491464;
                          iVar18 = FUN_026fd110(*unaff_x27 + 0x50,0);
                          if (*unaff_x27 == 0) goto LAB_02491464;
                          fVar56 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
                          fVar81 = in_stack_00000080._4_4_;
                          if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
                            fVar81 = fVar58;
                          }
                          if (unaff_x19[0x1f] == 0) goto LAB_02491464;
                          fVar78 = (float)FUN_026fd140(unaff_x19[0x1f] + 0x50,0);
                          if (*(long *)((long)dVar88 + 0x20) == 0) goto LAB_02491464;
                          FUN_026fd62c(&stack0x00000880,*(long *)((long)dVar88 + 0x20),0);
                          unaff_x28[0x1cd] = unaff_x28[1];
                          unaff_x28[0x1cc] = *unaff_x28;
                          fVar57 = (float)FUN_026fd45c(&stack0x000016e0,0);
                          if (*(long *)((long)dVar88 + 0x20) == 0) goto LAB_02491464;
                          fVar59 = *(float *)((long)dVar88 + 0x2c);
                          fVar82 = (float)FUN_026fd668(*(long *)((long)dVar88 + 0x20),0);
                          if (*unaff_x27 == 0) goto LAB_02491464;
                          fVar58 = (float)FUN_026fd140(*unaff_x27 + 0x50,0);
                          if (*unaff_x27 == 0) goto LAB_02491464;
                          fVar61 = (float)FUN_026fd170(*unaff_x27 + 0x50,0);
                          if (*unaff_x27 == 0) goto LAB_02491464;
                          fVar74 = *(float *)((long)unaff_x19 + 0x3fc);
                          fVar60 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
                          if (unaff_x19[0x1f] == 0) goto LAB_02491464;
                          fVar60 = fVar85 * fVar61 * fVar74 * fVar60;
                          fVar81 = (fVar73 / (float)iVar18) * fVar56 * fVar81;
                          fVar73 = fVar81 * (fVar78 / fVar57) * fVar59 * fVar82;
                          fVar81 = fVar81 / fVar73;
                          fVar58 = fVar81 * fVar58;
                          fVar85 = (float)FUN_026fd180(unaff_x19[0x1f] + 0x50,0);
                          fVar81 = fVar81 * fVar85;
                        }
                        else {
                          if (unaff_x19[0xd2] == 0) goto LAB_02491464;
                          iVar18 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
                          if (unaff_x19[0xd2] == 0) goto LAB_02491464;
                          fVar56 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
                          if (*(long *)((long)dVar88 + 0x20) == 0) goto LAB_02491464;
                          fVar81 = *(float *)((long)dVar88 + 0x2c);
                          fVar78 = in_stack_00000080._4_4_;
                          if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
                            fVar78 = 1.0;
                          }
                          fVar57 = (float)FUN_026fd668(*(long *)((long)dVar88 + 0x20),0);
                          if (unaff_x19[0xd2] == 0) goto LAB_02491464;
                          fVar58 = (float)FUN_026fd140(unaff_x19[0xd2] + 0x48,0);
                          if (unaff_x19[0xd2] == 0) goto LAB_02491464;
                          fVar59 = (float)FUN_026fd170(unaff_x19[0xd2] + 0x48,0);
                          if (unaff_x19[0xd2] == 0) goto LAB_02491464;
                          fVar82 = *(float *)((long)unaff_x19 + 0x3fc);
                          fVar60 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
                          if (unaff_x19[0xd2] == 0) goto LAB_02491464;
                          fVar60 = fVar85 * fVar59 * fVar82 * fVar60;
                          fVar73 = (fVar73 / (float)iVar18) * fVar56 * fVar78 * fVar81 * fVar57;
                          fVar81 = (float)FUN_026fd180(unaff_x19[0xd2] + 0x48,0);
                        }
                        lVar22 = unaff_x19[0x6c];
                        unaff_x19[200] = (long)dVar88;
                        if ((lVar22 != 0) && (lVar48 = *(long *)(lVar22 + 0x38), lVar48 != 0)) {
                          if (*puVar1 < *(uint *)(lVar48 + 0x18)) {
                            lVar48 = lVar48 + (long)(int)*puVar1 * 0x178;
                            *(undefined4 *)(lVar48 + 0x2c) = 1;
                            *(float *)(lVar48 + 0x160) = fVar73;
                            fStack0000000000000134 = 0.0;
                            *(long *)(lVar48 + 0x40) = unaff_x19[0xd2];
                            *(long *)(lVar48 + 0x38) = unaff_x19[0x1f];
                            *(int *)(lVar48 + 0x58) = (int)unaff_x19[0x23];
                            *(int *)(unaff_x19 + 0x23) = (int)lVar37;
                            goto LAB_0248b384;
                          }
                          goto 
                          UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                          ;
                        }
                        goto LAB_02491464;
                      }
                      lVar22 = *plVar2;
                      fVar85 = 0.0;
                      if (uVar17 != 3 && uVar17 != 0xad) {
                        fVar85 = fVar73;
                      }
                      fVar60 = 0.0;
                      if (lVar22 == 0) goto LAB_02491464;
                      fVar58 = 0.0;
                      fVar81 = 0.0;
                    }
                    else {
                      if (iVar18 != 0) goto LAB_0248abc8;
LAB_0248af84:
                      if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x38), lVar22 == 0))
                      goto LAB_02491464;
                      uVar4 = *puVar1;
                      uVar19 = *(uint *)(lVar22 + 0x18);
                      if (uVar19 <= uVar4)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      lVar37 = *(long *)(lVar22 + (long)(int)uVar4 * 0x178 + 0x30);
                      unaff_x19[200] = lVar37;
                      plVar38 = (long *)System_Threading_Mutex_TypeInfo;
                      if (lVar37 == 0) goto LAB_0248ab98;
                      lVar48 = lVar22 + (long)(int)uVar4 * 0x178;
                      lVar37 = *(long *)(lVar48 + 0x38);
                      unaff_x19[0x1f] = lVar37;
                      unaff_x19[0x22] = *(long *)(lVar48 + 0x50);
                      *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar48 + 0x58);
                      if (bVar9) {
                        lVar48 = unaff_x19[0x8e];
                        if (lVar48 == 0) goto LAB_02491464;
                        if (*(uint *)(lVar48 + 0x18) <= uVar90)
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                        ;
                        if ((*(int *)(lVar48 + (long)(int)uVar90 * 0xc + 0x20) != 10) ||
                           (uVar4 == *(uint *)(unaff_x19 + 0x92))) goto LAB_0248b014;
                        if (uVar19 <= uVar4 - 1)
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                        ;
                        if (lVar37 == 0) goto LAB_02491464;
                        fVar85 = *(float *)(lVar22 + (long)(int)(uVar4 - 1) * 0x178 + 0x60);
                        iVar18 = FUN_026fd110(lVar37 + 0x50,0);
                        lVar22 = *unaff_x27;
                      }
                      else {
LAB_0248b014:
                        if (lVar37 == 0) goto LAB_02491464;
                        fVar85 = *(float *)(unaff_x19 + 0x3c);
                        iVar18 = FUN_026fd110(lVar37 + 0x50,0);
                        lVar22 = unaff_x19[0x1f];
                      }
                      if (lVar22 == 0) goto LAB_02491464;
                      fVar78 = (float)FUN_026fd120(lVar22 + 0x50,0);
                      fVar56 = in_stack_00000080._4_4_;
                      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
                        fVar56 = fVar58;
                      }
                      fVar81 = 0.0;
                      fVar58 = 0.0;
                      if (!(bool)(bVar9 & uVar17 == 0x2026)) {
                        if (*unaff_x27 == 0) goto LAB_02491464;
                        fVar58 = (float)FUN_026fd140(*unaff_x27 + 0x50,0);
                        if (*unaff_x27 == 0) goto LAB_02491464;
                        fVar81 = (float)FUN_026fd180(*unaff_x27 + 0x50,0);
                      }
                      lVar22 = unaff_x19[200];
                      if ((lVar22 == 0) || (*(long *)(lVar22 + 0x20) == 0)) goto LAB_02491464;
                      fVar57 = *(float *)((long)unaff_x19 + 0x3fc);
                      fVar59 = *(float *)(lVar22 + 0x2c);
                      fVar73 = (float)FUN_026fd668(*(long *)(lVar22 + 0x20),0);
                      if (*unaff_x27 == 0) goto LAB_02491464;
                      fVar82 = (float)FUN_026fd170(*unaff_x27 + 0x50,0);
                      if (*unaff_x27 == 0) goto LAB_02491464;
                      fVar61 = *(float *)((long)unaff_x19 + 0x3fc);
                      fVar60 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
                      lVar22 = unaff_x19[0x6c];
                      if ((lVar22 == 0) || (lVar37 = *(long *)(lVar22 + 0x38), lVar37 == 0))
                      goto LAB_02491464;
                      if (*(uint *)(lVar37 + 0x18) <= *puVar1)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      lVar37 = lVar37 + (long)(int)*puVar1 * 0x178;
                      *(undefined4 *)(lVar37 + 0x2c) = 0;
                      fVar56 = ((fVar64 * fVar85) / (float)iVar18) * fVar78 * fVar56;
                      fVar73 = fVar56 * fVar57 * fVar59 * fVar73;
                      *(float *)(lVar37 + 0x160) = fVar73;
                      uVar19 = *(uint *)(unaff_x19 + 0x23);
                      fVar60 = fVar56 * fVar82 * fVar61 * fVar60;
                      if (uVar19 == 0) {
                        fStack0000000000000134 = *(float *)(unaff_x19 + 0xc2);
                      }
                      else {
                        lVar37 = unaff_x19[0xe0];
                        if (lVar37 == 0) goto LAB_02491464;
                        if (*(uint *)(lVar37 + 0x18) <= uVar19)
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                        ;
                        lVar37 = *(long *)(lVar37 + (long)(int)uVar19 * 8 + 0x20);
                        if (lVar37 == 0) goto LAB_02491464;
                        fStack0000000000000134 = *(float *)(lVar37 + 0x4c);
                      }
LAB_0248b384:
                      fVar85 = 0.0;
                      if (uVar17 != 3 && uVar17 != 0xad) {
                        fVar85 = fVar73;
                      }
                    }
                    lVar22 = *(long *)(lVar22 + 0x38);
                    if (lVar22 == 0) goto LAB_02491464;
                    if (*(uint *)(lVar22 + 0x18) <= *puVar1)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    lVar22 = lVar22 + (long)(int)*puVar1 * 0x178;
                    *(short *)(lVar22 + 0x20) = (short)uVar17;
                    *(int *)(lVar22 + 0x60) = (int)unaff_x19[0x3c];
                    *(undefined4 *)(lVar22 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4e4);
                    if ((unaff_x19[0x6c] == 0) ||
                       (lVar22 = *(long *)(unaff_x19[0x6c] + 0x38), lVar22 == 0)) goto LAB_02491464;
                    if (*(uint *)(lVar22 + 0x18) <= *puVar1)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    *(int *)(lVar22 + (long)(int)*puVar1 * 0x178 + 0x168) = (int)unaff_x19[0x2a];
                    if ((unaff_x19[0x6c] == 0) ||
                       (lVar22 = *(long *)(unaff_x19[0x6c] + 0x38), lVar22 == 0)) goto LAB_02491464;
                    if (*(uint *)(lVar22 + 0x18) <= *puVar1)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    *(undefined4 *)(lVar22 + (long)(int)*puVar1 * 0x178 + 0x170) =
                         *(undefined4 *)((long)unaff_x19 + 0x154);
                    if ((unaff_x19[0x6c] == 0) ||
                       (lVar22 = *(long *)(unaff_x19[0x6c] + 0x38), lVar22 == 0)) goto LAB_02491464;
                    uVar19 = *puVar1;
                    FUN_013b78b8(unaff_x19 + 0xa9,&stack0x00000880,
                                 *(undefined8 *)TMPro_TMP_Dropdown_OptionData_TypeInfo);
                    if (*(uint *)(lVar22 + 0x18) <= uVar19)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    uVar24 = unaff_x28[1];
                    uVar30 = *unaff_x28;
                    lVar22 = lVar22 + (long)(int)uVar19 * 0x178;
                    *(undefined4 *)(lVar22 + 0x18c) = 0;
                    *(undefined8 *)(lVar22 + 0x184) = uVar24;
                    *(undefined8 *)(lVar22 + 0x17c) = uVar30;
                    if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x38), lVar22 == 0))
                    goto LAB_02491464;
                    if (*(uint *)(lVar22 + 0x18) <= *puVar1)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    *(undefined4 *)(lVar22 + (long)(int)*puVar1 * 0x178 + 400) =
                         *(undefined4 *)((long)unaff_x19 + 0x254);
                    if ((unaff_x19[200] == 0) ||
                       (lVar22 = *(long *)(unaff_x19[200] + 0x20), lVar22 == 0)) goto LAB_02491464;
                    FUN_026fd62c(&stack0x00000bf8,lVar22,0);
                    unaff_x28[0x1df] = in_stack_00000c00;
                    unaff_x28[0x1de] = CONCAT44(in_stack_00000bfc,uVar89);
                    if ((int)uVar17 < 0x10000) {
                      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0)
                      {
                        thunk_FUN_00d32864();
                      }
                      uVar19 = FUN_016f68bc(uVar17,0);
                      uVar19 = uVar19 & 1;
                    }
                    else {
                      uVar19 = 0;
                    }
                    fStack00000000000000cc = *(float *)(unaff_x19 + 0x54);
                    *(undefined4 *)((long)unaff_x19 + 0x2f4) = 0;
                    if (*(char *)((long)unaff_x19 + 0x2f1) == '\0') {
                      fVar57 = 0.0;
                      fVar78 = 0.0;
                      fVar56 = 0.0;
                    }
                    else {
                      if (unaff_x19[200] == 0) goto LAB_02491464;
                      uVar33 = *puVar1;
                      uVar4 = *(uint *)(unaff_x19[200] + 0x28);
                      if ((int)uVar33 < (int)uVar36) {
                        if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x38), lVar22 == 0))
                        goto LAB_02491464;
                        if (*(uint *)(lVar22 + 0x18) <= uVar33 + 1)
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                        ;
                        lVar22 = *(long *)(lVar22 + (long)(int)(uVar33 + 1) * 0x178 + 0x30);
                        if ((((lVar22 == 0) || (*unaff_x27 == 0)) ||
                            (lVar37 = *(long *)(*unaff_x27 + 0x128), lVar37 == 0)) ||
                           (lVar37 = *(long *)(lVar37 + 0x18), lVar37 == 0)) goto LAB_02491464;
                        dVar88 = (double)(ulong)(uVar4 | *(int *)(lVar22 + 0x28) << 0x10);
                        uVar27 = FUN_0129eff4(lVar37,&stack0x00000880,&stack0x000016d8,
                                              *(undefined8 *)
                                               Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                                             );
                        uVar86 = 0;
                        if ((uVar27 & 1) == 0) {
                          fVar57 = 0.0;
                          fVar78 = 0.0;
                          fVar56 = 0.0;
                        }
                        else {
                          if (in_stack_000016d8 == 0) goto LAB_02491464;
                          fVar56 = *(float *)(in_stack_000016d8 + 0x14);
                          fVar78 = *(float *)(in_stack_000016d8 + 0x18);
                          fVar57 = *(float *)(in_stack_000016d8 + 0x1c);
                          uVar86 = *(undefined4 *)(in_stack_000016d8 + 0x20);
                          if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
                            fStack00000000000000cc = 0.0;
                          }
                        }
                        uVar33 = *puVar1;
                      }
                      else {
                        uVar86 = 0;
                        fVar57 = 0.0;
                        fVar78 = 0.0;
                        fVar56 = 0.0;
                      }
                      if (0 < (int)uVar33) {
                        if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x38), lVar22 == 0))
                        goto LAB_02491464;
                        if (*(uint *)(lVar22 + 0x18) <= (uint)((long)(int)uVar33 + -1))
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                        ;
                        lVar22 = *(long *)(lVar22 + ((long)(int)uVar33 + -1) * 0x178 + 0x30);
                        if (((lVar22 == 0) || (*unaff_x27 == 0)) ||
                           ((lVar37 = *(long *)(*unaff_x27 + 0x128), lVar37 == 0 ||
                            (lVar37 = *(long *)(lVar37 + 0x18), lVar37 == 0)))) goto LAB_02491464;
                        dVar88 = (double)(ulong)(*(uint *)(lVar22 + 0x28) | uVar4 << 0x10);
                        uVar27 = FUN_0129eff4(lVar37,&stack0x00000880,&stack0x000016d8,
                                              *(undefined8 *)
                                               Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                                             );
                        if ((uVar27 & 1) != 0) {
                          if ((in_stack_000016d8 == 0) ||
                             (fVar56 = (float)FUN_024bb1bc(fVar56,fVar78,fVar57,uVar86,
                                                           *(undefined4 *)(in_stack_000016d8 + 0x28)
                                                           ,*(undefined4 *)
                                                             (in_stack_000016d8 + 0x2c),
                                                           *(undefined4 *)(in_stack_000016d8 + 0x30)
                                                           ,*(undefined4 *)
                                                             (in_stack_000016d8 + 0x34),0),
                             in_stack_000016d8 == 0)) goto LAB_02491464;
                          if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
                            fStack00000000000000cc = 0.0;
                          }
                        }
                      }
                      *(float *)((long)unaff_x19 + 0x2f4) = fVar57;
                    }
                    if ((char)unaff_x19[0x1d] != '\0') {
                      fVar82 = *(float *)(unaff_x19 + 199);
                      fVar59 = (float)FUN_026fd474(&stack0x00001770,0);
                      fVar82 = fVar82 - fVar85 * fVar59 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc)
                                                          );
                      *(float *)(unaff_x19 + 199) = fVar82;
                      if ((uVar19 != 0) || (uVar17 == 0x200b)) {
                        *(float *)(unaff_x19 + 199) =
                             fVar82 - fVar51 * *(float *)((long)unaff_x19 + 0x2ac);
                      }
                    }
                    fVar82 = *(float *)(unaff_x19 + 0x55);
                    fVar59 = 0.0;
                    if (fVar82 != 0.0) {
                      fVar59 = (float)FUN_026fd454(&stack0x00001770,0);
                      fVar61 = (float)FUN_026fd464(&stack0x00001770,0);
                      fVar59 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                               (fVar82 * 0.5 - fVar85 * (fVar59 * 0.5 + fVar61));
                      *(float *)(unaff_x19 + 199) = *(float *)(unaff_x19 + 199) + fVar59;
                    }
                    if (((cVar32 == '\0') && (*(int *)((long)unaff_x19 + 0x63c) == 0)) &&
                       ((*(byte *)((long)unaff_x19 + 0x254) & 1) != 0)) {
                      lVar22 = unaff_x19[0x22];
                      if (*(int *)(*(long *)
                                    System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                  + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      uVar27 = FUN_02681b9c(lVar22,0,0);
                      fVar61 = 0.0;
                      if ((uVar27 & 1) != 0) {
                        lVar22 = unaff_x19[0x22];
                        if (*(int *)(*(long *)
                                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                    + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        plVar38 = (long *)
                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                        ;
                        if (lVar22 == 0) goto LAB_02491464;
                        uVar27 = FUN_0267e1d8(lVar22,*(undefined4 *)
                                                      (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                  + 0xb8) + 0x54),0);
                        if ((uVar27 & 1) != 0) {
                          lVar22 = unaff_x19[0x22];
                          if (*(int *)(*plVar38 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                            plVar38 = (long *)
                                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                            ;
                          }
                          if (lVar22 == 0) goto LAB_02491464;
                          fVar82 = (float)FUN_0267f610(lVar22,*(undefined4 *)
                                                               (*(long *)(*plVar38 + 0xb8) + 0x54),0
                                                      );
                          if ((*unaff_x27 == 0) || (unaff_x19[0x22] == 0)) goto LAB_02491464;
                          fVar74 = *(float *)(*unaff_x27 + 0x1b0);
                          fVar61 = (float)FUN_0267f610(unaff_x19[0x22],
                                                       *(undefined4 *)
                                                        (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                  + 0xb8) + 0xcc),0);
                          fVar61 = fVar61 * fVar82 * fVar74 * 0.25;
                          if (fVar82 < fStack0000000000000134 + fVar61) {
                            fStack0000000000000134 = fVar82 - fVar61;
                          }
                        }
                      }
                      if (*unaff_x27 == 0) goto LAB_02491464;
                      fStack00000000000000c4 = *(float *)(*unaff_x27 + 0x1b4);
                    }
                    else {
                      lVar22 = unaff_x19[0x22];
                      if (*(int *)(*(long *)
                                    System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                  + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      uVar27 = FUN_02681b9c(lVar22,0,0);
                      fStack00000000000000c4 = 0.0;
                      if ((uVar27 & 1) != 0) {
                        lVar22 = unaff_x19[0x22];
                        if (*(int *)(*(long *)
                                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                    + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        plVar38 = (long *)
                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                        ;
                        if (lVar22 == 0) goto LAB_02491464;
                        uVar27 = FUN_0267e1d8(lVar22,*(undefined4 *)
                                                      (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                  + 0xb8) + 0x54),0);
                        if ((uVar27 & 1) != 0) {
                          lVar22 = unaff_x19[0x22];
                          if (*(int *)(*plVar38 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                            plVar38 = (long *)
                                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                            ;
                          }
                          if (lVar22 == 0) goto LAB_02491464;
                          uVar27 = FUN_0267e1d8(lVar22,*(undefined4 *)
                                                        (*(long *)(*plVar38 + 0xb8) + 0xcc),0);
                          if ((uVar27 & 1) != 0) {
                            lVar22 = unaff_x19[0x22];
                            if (*(int *)(*plVar38 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                              plVar38 = (long *)
                                        Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                              ;
                            }
                            if (lVar22 != 0) {
                              fVar82 = (float)FUN_0267f610(lVar22,*(undefined4 *)
                                                                   (*(long *)(*plVar38 + 0xb8) +
                                                                   0x54),0);
                              if ((*unaff_x27 != 0) && (unaff_x19[0x22] != 0)) {
                                fVar74 = *(float *)(*unaff_x27 + 0x1a8);
                                fVar61 = (float)FUN_0267f610(unaff_x19[0x22],
                                                             *(undefined4 *)
                                                              (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                  + 0xb8) + 0xcc),0);
                                fVar61 = fVar61 * fVar82 * fVar74 * 0.25;
                                if (fVar82 < fStack0000000000000134 + fVar61) {
                                  fStack0000000000000134 = fVar82 - fVar61;
                                }
                                goto LAB_0248ba68;
                              }
                            }
                            goto LAB_02491464;
                          }
                        }
                      }
                      fVar61 = 0.0;
                    }
LAB_0248ba68:
                    fVar75 = *(float *)(unaff_x19 + 199);
                    fVar82 = (float)FUN_026fd464(&stack0x00001770,0);
                    fVar75 = fVar75 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                                      fVar85 * (fVar56 + ((fVar82 - fStack0000000000000134) - fVar61
                                                         ));
                    fVar56 = (float)FUN_026fd46c(&stack0x00001770,0);
                    fVar74 = *(float *)((long)unaff_x19 + 0x614) +
                             ((fVar60 + fVar85 * (fVar78 + fStack0000000000000134 + fVar56)) -
                             *(float *)(unaff_x19 + 0x9a));
                    fVar56 = (float)FUN_026fd45c(&stack0x00001770,0);
                    fVar79 = fVar74 - fVar85 * (fStack0000000000000134 + fStack0000000000000134 +
                                               fVar56);
                    fVar56 = (float)FUN_026fd454(&stack0x00001770,0);
                    fVar82 = fVar75 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                                      fVar85 * (fVar61 + fVar61 +
                                               fStack0000000000000134 + fStack0000000000000134 +
                                               fVar56);
                    fVar56 = fVar75;
                    fVar78 = fVar82;
                    if (((*(int *)((long)unaff_x19 + 0x63c) == 0) && (cVar32 == '\0')) &&
                       ((*(byte *)((long)unaff_x19 + 0x254) >> 1 & 1) != 0)) {
                      fVar77 = (float)(int)unaff_x19[0xbd] * fVar71;
                      fVar56 = (float)FUN_026fd46c(&stack0x00001770,0);
                      fVar63 = fVar77 * fVar85 * (fVar61 + fStack0000000000000134 + fVar56);
                      fVar56 = (float)FUN_026fd46c(&stack0x00001770,0);
                      fVar78 = (float)FUN_026fd45c(&stack0x00001770,0);
                      fVar74 = fVar74 + 0.0;
                      fVar79 = fVar79 + 0.0;
                      fVar77 = fVar77 * fVar85 * (((fVar56 - fVar78) - fStack0000000000000134) -
                                                 fVar61);
                      fVar78 = fVar82 + fVar77;
                      fVar56 = fVar75 + fVar63;
                      fVar69 = (fVar63 - fVar77) * 0.5;
                      fVar75 = (fVar75 + fVar77) - fVar69;
                      fVar82 = (fVar82 + fVar63) - fVar69;
                      fVar56 = fVar56 - fVar69;
                      fVar78 = fVar78 - fVar69;
                    }
                    if (*(char *)((long)unaff_x19 + 0x46c) == '\0') {
                      fVar63 = 0.0;
                      fVar76 = 0.0;
                      fStack00000000000000e0 = 0.0;
                      fStack00000000000000e4 = 0.0;
                      fVar69 = fVar79;
                      fVar77 = fVar74;
                      fStack00000000000000e8 = fVar56;
                      fStack00000000000000ec = fVar75;
                    }
                    else {
                      thunk_FUN_026935f0(lVar23,0);
                      fVar80 = (fVar82 + fVar75) * 0.5;
                      fVar83 = (fVar79 + fVar74) * 0.5;
                      fVar74 = fVar74 - fVar83;
                      fVar67 = 0.0;
                      fVar77 = fVar74;
                      fVar62 = (float)FUN_02692df0(fVar56 - fVar80,lVar23,0);
                      fVar79 = fVar79 - fVar83;
                      fVar68 = 0.0;
                      fVar56 = fVar79;
                      fVar75 = (float)FUN_02692df0(fVar75 - fVar80,lVar23,0);
                      fVar76 = 0.0;
                      fVar82 = (float)FUN_02692df0(fVar82 - fVar80,lVar23,0);
                      fVar82 = fVar80 + fVar82;
                      fVar74 = fVar83 + fVar74;
                      fVar76 = fVar76 + 0.0;
                      fVar63 = 0.0;
                      fVar78 = (float)FUN_02692df0(fVar78 - fVar80,lVar23,0);
                      fVar78 = fVar80 + fVar78;
                      fVar79 = fVar83 + fVar79;
                      fVar63 = fVar63 + 0.0;
                      fVar69 = fVar83 + fVar56;
                      fVar77 = fVar83 + fVar77;
                      fStack00000000000000e8 = fVar80 + fVar62;
                      fStack00000000000000ec = fVar80 + fVar75;
                      fStack00000000000000e0 = fVar68 + 0.0;
                      fStack00000000000000e4 = fVar67 + 0.0;
                    }
                    if (*plVar2 == 0) goto LAB_02491464;
                    lVar22 = *(long *)(*plVar2 + 0x38);
                    uVar27 = (ulong)(uint)fVar85;
                    if (lVar22 == 0) goto LAB_02491464;
                    if (*(uint *)(lVar22 + 0x18) <= *puVar1)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    lVar22 = lVar22 + (long)(int)*puVar1 * 0x178;
                    *(float *)(lVar22 + 0x120) = fVar69;
                    *(float *)(lVar22 + 0x11c) = fStack00000000000000ec;
                    *(float *)(lVar22 + 0x124) = fStack00000000000000e0;
                    if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x38), lVar22 == 0))
                    goto LAB_02491464;
                    if (*(uint *)(lVar22 + 0x18) <= *puVar1)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    lVar22 = lVar22 + (long)(int)*puVar1 * 0x178;
                    *(float *)(lVar22 + 0x114) = fVar77;
                    *(float *)(lVar22 + 0x110) = fStack00000000000000e8;
                    *(float *)(lVar22 + 0x118) = fStack00000000000000e4;
                    if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x38), lVar22 == 0))
                    goto LAB_02491464;
                    if (*(uint *)(lVar22 + 0x18) <= *puVar1)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    lVar22 = lVar22 + (long)(int)*puVar1 * 0x178;
                    *(float *)(lVar22 + 0x128) = fVar82;
                    *(float *)(lVar22 + 300) = fVar74;
                    *(float *)(lVar22 + 0x130) = fVar76;
                    if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x38), lVar22 == 0))
                    goto LAB_02491464;
                    if (*(uint *)(lVar22 + 0x18) <= *puVar1)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    lVar22 = lVar22 + (long)(int)*puVar1 * 0x178;
                    *(float *)(lVar22 + 0x134) = fVar78;
                    *(float *)(lVar22 + 0x138) = fVar79;
                    *(float *)(lVar22 + 0x13c) = fVar63;
                    if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x38), lVar22 == 0))
                    goto LAB_02491464;
                    uVar4 = *puVar1;
                    lVar37 = (long)(int)uVar4;
                    if (*(uint *)(lVar22 + 0x18) <= uVar4)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    lVar48 = lVar22 + lVar37 * 0x178;
                    *(int *)(lVar48 + 0x140) = (int)unaff_x19[199];
                    fVar78 = *(float *)(unaff_x19 + 0x9a);
                    uVar65 = (ulong)(uint)fVar78;
                    fVar56 = *(float *)((long)unaff_x19 + 0x614);
                    *(float *)(lVar48 + 0x15c) =
                         (fVar82 - fStack00000000000000ec) / (fVar77 - fVar69);
                    *(float *)(lVar48 + 0x14c) = (fVar60 - fVar78) + fVar56;
                    fVar58 = fVar58 * fVar85;
                    if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
                      fVar58 = fVar58 / fVar64;
                      fVar81 = (fVar81 * fVar85) / fVar64;
                    }
                    else {
                      fVar81 = fVar81 * fVar85;
                    }
                    uVar33 = *(uint *)(unaff_x19 + 0x92);
                    bVar15 = uVar19 != 0;
                    fVar58 = fVar56 + fVar58;
                    bVar16 = uVar4 != uVar33;
                    if (bVar16 && bVar15) {
                      fVar56 = *(float *)(unaff_x19 + 0x98);
                      lVar22 = lVar22 + lVar37 * 0x178;
                      *(float *)(lVar22 + 0x154) = fVar56;
                      fVar81 = *(float *)((long)unaff_x19 + 0x4c4);
                      *(float *)(lVar22 + 0x148) = fVar56 - fVar78;
                      *(float *)(lVar22 + 0x158) = fVar81;
                      *(float *)(unaff_x19 + 0x97) = fVar56 - fVar78;
                      fVar81 = fVar81 - fVar78;
                      *(float *)(lVar22 + 0x150) = fVar81;
                    }
                    else {
                      fVar81 = fVar56 + fVar81;
                      fVar82 = fVar58;
                      fVar60 = fVar81;
                      if (fVar56 != 0.0) {
                        fVar82 = (fVar58 - fVar56) / *(float *)((long)unaff_x19 + 0x3fc);
                        fVar60 = (fVar81 - fVar56) / *(float *)((long)unaff_x19 + 0x3fc);
                        if (fVar82 <= fVar58) {
                          fVar82 = fVar58;
                        }
                        if (fVar81 <= fVar60) {
                          fVar60 = fVar81;
                        }
                      }
                      lVar22 = lVar22 + lVar37 * 0x178;
                      fVar56 = fVar82;
                      if (fVar82 <= *(float *)(unaff_x19 + 0x98)) {
                        fVar56 = *(float *)(unaff_x19 + 0x98);
                      }
                      fVar74 = fVar60;
                      if (*(float *)((long)unaff_x19 + 0x4c4) <= fVar60) {
                        fVar74 = *(float *)((long)unaff_x19 + 0x4c4);
                      }
                      *(float *)((long)unaff_x19 + 0x4c4) = fVar74;
                      fVar81 = fVar81 - fVar78;
                      *(float *)(unaff_x19 + 0x98) = fVar56;
                      *(float *)(lVar22 + 0x154) = fVar82;
                      *(float *)(lVar22 + 0x158) = fVar60;
                      *(float *)(lVar22 + 0x148) = fVar58 - fVar78;
                      *(float *)(unaff_x19 + 0x97) = fVar58 - fVar78;
                      *(float *)(lVar22 + 0x150) = fVar81;
                    }
                    *(float *)((long)unaff_x19 + 0x4bc) = fVar81;
                    if (((int)unaff_x19[0x94] == 0) || (*(char *)((long)unaff_x19 + 0x334) != '\0'))
                    {
                      if (!bVar16 || !bVar15) {
                        *(float *)(unaff_x19 + 0x96) = fVar56;
                        if (unaff_x19[0x1f] != 0) {
                          fVar56 = *(float *)((long)unaff_x19 + 0x4b4);
                          fVar78 = (float)FUN_026fd150(unaff_x19[0x1f] + 0x50,0);
                          fVar64 = (fVar85 * fVar78) / fVar64;
                          uVar65 = (ulong)*(uint *)(unaff_x19 + 0x9a);
                          if (fVar56 <= fVar64) {
                            fVar56 = fVar64;
                          }
                          *(float *)((long)unaff_x19 + 0x4b4) = fVar56;
                          goto LAB_0248bef4;
                        }
                        goto LAB_02491464;
                      }
                    }
                    else {
LAB_0248bef4:
                      if ((!bVar16 || !bVar15) && (float)uVar65 == 0.0) {
                        fVar64 = *(float *)((long)unaff_x19 + 0x4ac);
                        if (*(float *)((long)unaff_x19 + 0x4ac) <= fVar58) {
                          fVar64 = fVar58;
                        }
                        *(float *)((long)unaff_x19 + 0x4ac) = fVar64;
                      }
                    }
                    lVar22 = *plVar2;
                    if ((lVar22 == 0) || (lVar37 = *(long *)(lVar22 + 0x38), lVar37 == 0))
                    goto LAB_02491464;
                    uVar49 = *puVar1;
                    if (*(uint *)(lVar37 + 0x18) <= uVar49)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    lVar37 = lVar37 + (long)(int)uVar49 * 0x178;
                    *(undefined1 *)(lVar37 + 0x194) = 0;
                    uVar41 = *(uint *)(unaff_x19 + 0x4e);
                    if ((uVar17 == 9) ||
                       (((((uVar19 == 0 && (uVar17 != 3)) && (uVar17 != 0x200b)) && (uVar17 != 0xad)
                         ) || (((bool)(uVar17 == 0xad & (bVar14 ^ 1U)) ||
                               (*(int *)((long)unaff_x19 + 0x63c) == 1)))))) {
                      *(undefined1 *)(lVar37 + 0x194) = 1;
                      pfVar39 = (float *)((long)unaff_x19 + 0x34c);
                      pfVar42 = (float *)(unaff_x19 + 0x69);
                      if (bVar9) {
                        lVar22 = *(long *)(lVar22 + 0x50);
                        if (lVar22 == 0) goto LAB_02491464;
                        if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                        ;
                        lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                        pfVar42 = (float *)(lVar22 + 0x60);
                        pfVar39 = (float *)(lVar22 + 100);
                      }
                      fVar64 = *pfVar42;
                      fVar56 = *pfVar39;
                      fVar58 = *(float *)(unaff_x19 + 0x6b);
                      fVar78 = *(float *)(unaff_x19 + 199);
                      fStack00000000000000dc = (fVar84 - fVar64) - fVar56;
                      bVar15 = true;
                      if ((fVar58 <= fStack00000000000000dc) && (bVar15 = false, !NAN(fVar58))) {
                        bVar15 = fVar58 == -1.0;
                      }
                      if (!bVar15) {
                        fStack00000000000000dc = fVar58;
                      }
                      fVar58 = 0.0;
                      if ((char)unaff_x19[0x1d] == '\0') {
                        fVar58 = (float)FUN_026fd474(&stack0x00001770,0);
                        uVar65 = (ulong)*(uint *)(unaff_x19 + 0x9a);
                      }
                      fVar60 = *(float *)((long)unaff_x19 + 0x4c4);
                      fVar81 = *(float *)((long)unaff_x19 + 0x2cc);
                      fVar82 = (float)uVar65;
                      if (uVar17 != 0xad) {
                        fVar73 = fVar85;
                      }
                      fVar74 = 0.0;
                      if ((0.0 < fVar82) && (fVar74 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')
                         ) {
                        fVar74 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
                      }
                      fVar74 = (*(float *)(unaff_x19 + 0x96) - (fVar60 - fVar82)) + fVar74;
                      uVar49 = *puVar1;
                      if (fVar52 < fVar74) {
                        if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
                          *(uint *)((long)unaff_x19 + 0x2dc) = uVar49;
                        }
                        unaff_x29 = (long *)StringLiteral_302;
                        plVar38 = (long *)System_Threading_Mutex_TypeInfo;
                        uVar30 = DAT_02941c08;
                        if ((char)unaff_x19[0x46] != '\0') {
                          fVar79 = *(float *)(unaff_x19 + 0x58);
                          if (((fVar79 < *(float *)((long)unaff_x19 + 0x2b4)) && (0.0 < fVar82)) &&
                             (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                            fVar50 = *(float *)((long)unaff_x19 + 0x2b4) +
                                     ((fVar87 - fVar74) / (float)(int)unaff_x19[0x94]) /
                                     fStack0000000000000054;
                            if (fVar50 <= fVar79) {
                              fVar50 = fVar79;
                            }
                            goto LAB_0248ea5c;
                          }
                          fVar74 = *(float *)((long)unaff_x19 + 0x1dc);
                          fVar82 = *(float *)(unaff_x19 + 0x49);
                          uVar65 = (ulong)(uint)fVar82;
                          if ((fVar82 < fVar74) &&
                             (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                            fVar50 = (fVar74 - *(float *)(unaff_x19 + 0x47)) * 0.5;
                            if (fVar50 <= DAT_028aa298) {
                              fVar50 = DAT_028aa298;
                            }
                            fVar51 = (fVar74 - fVar50) * 20.0 + 0.5;
                            fVar50 = DAT_02958220;
                            if (fVar51 != INFINITY) {
                              fVar50 = (float)(int)fVar51 / 20.0;
                            }
                            if (fVar50 <= fVar82) {
                              fVar50 = fVar82;
                            }
                            *(float *)((long)unaff_x19 + 0x234) = fVar74;
                            goto LAB_0248e598;
                          }
                        }
                        switch((int)unaff_x19[0x5b]) {
                        case 1:
                          lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
                          if (*(int *)(lVar22 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                            lVar22 = *plVar38;
                          }
                          lVar37 = *(long *)(lVar22 + 0xb8);
                          lVar22 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
                          if ((*(byte *)(lVar22 + 0x132) & 1) == 0) {
                            lVar22 = FUN_00d5941c(lVar22);
                          }
                          unaff_x29 = (long *)StringLiteral_302;
                          lVar22 = *(long *)(*(long *)(lVar22 + 0xc0) + 8);
                          if ((*(byte *)(lVar22 + 0x132) & 1) == 0) {
                            lVar22 = FUN_00d5941c();
                          }
                          piVar28 = (int *)thunk_FUN_00d32ed4(lVar37 + 0x11f0,
                                                              *(long *)(lVar22 + 0x80) + 0xa0);
                          if (*piVar28 == 0) {
LAB_0248e4bc:
                            in_stack_000017a8 = DAT_02941c08;
                            puVar1[0] = 0;
                            puVar1[1] = 0;
                            uVar90 = 0xffffffff;
                          }
                          else {
                            lVar22 = *plVar38;
                            if (*(int *)(lVar22 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                              lVar22 = *plVar38;
                            }
                            FUN_013b8de4(*(long *)(lVar22 + 0xb8) + 0x11f0,&stack0x00000880,
                                         *(undefined8 *)
                                          Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                                        );
                            memcpy(&stack0x00001360,&stack0x00000880,0x378);
LAB_0248c8f4:
                            iVar18 = FUN_024d66ec();
LAB_0248c900:
                            iVar7 = *(int *)((long)unaff_x19 + 0x48c) + -1;
                            *(int *)((long)unaff_x19 + 0x48c) = iVar7;
                            iStack0000000000000144 = iStack0000000000000144 + 1;
                            uVar90 = iVar18 - 1;
                            in_stack_000017a8 = CONCAT44(0x2026,iVar7);
                          }
                          goto LAB_0248ab98;
                        default:
                          goto switchD_0248c274_caseD_2;
                        case 3:
                          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
LAB_0248c524:
                          unaff_x29 = (long *)StringLiteral_302;
                          uVar90 = FUN_024d66ec();
                          break;
                        case 5:
                          if ((uVar49 == 0) || ((int)uVar90 < 0)) {
                            *puVar1 = 0;
                            plVar38 = (long *)System_Threading_Mutex_TypeInfo;
                            unaff_x29 = (long *)StringLiteral_302;
                            uVar90 = 0xffffffff;
                            in_stack_000017a8 = uVar30;
                          }
                          else {
                            fVar73 = *(float *)(unaff_x19 + 0x98);
                            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar90 = FUN_024d66ec();
                            if (fVar52 < fVar73 - fVar60) break;
                            *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
                            *(undefined4 *)(unaff_x19 + 0x92) =
                                 *(undefined4 *)((long)unaff_x19 + 0x48c);
                            uVar65 = *(ulong *)(*(long *)(*plVar38 + 0xb8) + 0x15a8);
                            *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
                            *(undefined4 *)(unaff_x19 + 0x99) = 0;
                            lVar22 = NEON_rev64(uVar65,4);
                            unaff_x19[0x98] = lVar22;
                            *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                            *(undefined8 *)((long)unaff_x19 + 0x4ac) = 0;
                            *(int *)(unaff_x19 + 0x94) = (int)unaff_x19[0x94] + 1;
                            *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
                          }
                          goto LAB_0248ab98;
                        case 6:
                          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          uVar90 = FUN_024d66ec();
                          unaff_x29 = (long *)StringLiteral_302;
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
                            plVar47 = (long *)unaff_x19[0x5c];
                            uVar30 = (**(code **)(*unaff_x19 + 0x548))();
                            if (plVar47 == (long *)0x0) goto LAB_02491464;
                            (**(code **)(*plVar47 + 0x558))
                                      (plVar47,uVar30,*(undefined8 *)(*plVar47 + 0x560));
                            lVar22 = unaff_x19[0x5c];
                            if (lVar22 == 0) goto LAB_02491464;
                            *(int *)(lVar22 + 0x3f8) = (int)unaff_x19[0x7f];
                            FUN_024c910c(lVar22,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
                            plVar47 = (long *)unaff_x19[0x5c];
                            if (plVar47 == (long *)0x0) goto LAB_02491464;
                            (**(code **)(*plVar47 + 0x7d8))
                                      (plVar47,0,0,*(undefined8 *)(*plVar47 + 0x7e0));
                            *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                          }
                        }
LAB_0248c628:
                        in_stack_000017a8 = CONCAT44(3,uVar49);
                        goto LAB_0248ab98;
                      }
switchD_0248c274_caseD_2:
                      plVar38 = (long *)System_Threading_Mutex_TypeInfo;
                      fVar82 = 1.0 - fVar81;
                      uVar65 = (ulong)(uint)fVar82;
                      fVar58 = ABS(fVar78) + fVar58 * fVar82 * fVar73;
                      fVar73 = _DAT_0294c6e8;
                      if ((uVar41 & 0x18) == 0) {
                        fVar73 = 1.0;
                      }
                      if (fVar73 * fStack00000000000000dc < fVar58) {
                        if (((char)unaff_x19[0x5a] == '\0') ||
                           (uVar49 == *(uint *)(unaff_x19 + 0x92))) {
                          if (((char)unaff_x19[0x46] != '\0') &&
                             (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                            fVar78 = *(float *)(unaff_x19 + 0x59) / 100.0;
                            if (fVar81 < fVar78) {
                              fVar50 = fVar58 / fVar82;
                              if (fVar81 <= 0.0) {
                                fVar50 = fVar58;
                              }
                              fVar81 = fVar81 + (fVar58 - fVar73 * (fStack00000000000000dc +
                                                                   DAT_02958218)) / fVar50;
                              goto LAB_0249154c;
                            }
                            fVar81 = *(float *)((long)unaff_x19 + 0x1dc);
                            uVar65 = (ulong)(uint)fVar81;
                            fVar78 = *(float *)(unaff_x19 + 0x49);
                            if (fVar81 <= fVar78) goto LAB_0248c3dc;
LAB_024914c0:
                            fVar50 = (fVar81 - *(float *)(unaff_x19 + 0x47)) * 0.5;
                            if (fVar50 <= DAT_028aa298) {
                              fVar50 = DAT_028aa298;
                            }
                            *(float *)((long)unaff_x19 + 0x234) = fVar81;
                            fVar51 = (fVar81 - fVar50) * 20.0 + 0.5;
                            fVar50 = DAT_02958220;
                            if (fVar51 != INFINITY) {
                              fVar50 = (float)(int)fVar51 / 20.0;
                            }
                            if (fVar50 <= fVar78) {
                              fVar50 = fVar78;
                            }
                            goto LAB_0248e598;
                          }
LAB_0248c3dc:
                          iVar18 = (int)unaff_x19[0x5b];
                          if (iVar18 == 1) {
                            lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
                            if (*(int *)(lVar22 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                              lVar22 = *plVar38;
                            }
                            unaff_x29 = (long *)StringLiteral_302;
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
                            if (*piVar28 != 0) {
                              lVar22 = *plVar38;
                              if (*(int *)(lVar22 + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                                lVar22 = *plVar38;
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
                          if (iVar18 != 6) {
                            if (iVar18 == 3) {
                              if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                              }
                              goto LAB_0248c524;
                            }
                            goto LAB_0248cf18;
                          }
                          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          unaff_x29 = (long *)StringLiteral_302;
                          uVar90 = FUN_024d66ec();
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
                            plVar47 = (long *)unaff_x19[0x5c];
                            uVar30 = (**(code **)(*unaff_x19 + 0x548))();
                            if (plVar47 == (long *)0x0) goto LAB_02491464;
                            (**(code **)(*plVar47 + 0x558))
                                      (plVar47,uVar30,*(undefined8 *)(*plVar47 + 0x560));
                            lVar22 = unaff_x19[0x5c];
                            if (lVar22 == 0) goto LAB_02491464;
                            *(int *)(lVar22 + 0x3f8) = (int)unaff_x19[0x7f];
                            FUN_024c910c(lVar22,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
                            plVar47 = (long *)unaff_x19[0x5c];
                            if (plVar47 == (long *)0x0) goto LAB_02491464;
                            (**(code **)(*plVar47 + 0x7d8))
                                      (plVar47,0,0,*(undefined8 *)(*plVar47 + 0x7e0));
                            *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                          }
LAB_0248ca1c:
                          in_stack_000017a8 = CONCAT44(3,*puVar1);
                        }
                        else {
                          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          uVar90 = FUN_024d66ec();
                          if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
                            lVar22 = *plVar2;
                            if ((lVar22 == 0) || (lVar37 = *(long *)(lVar22 + 0x38), lVar37 == 0))
                            goto LAB_02491464;
                            if (*(uint *)(lVar37 + 0x18) <= *puVar1)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            fVar78 = *(float *)(unaff_x19 + 0x9a);
                            fVar81 = 0.0;
                            if ((0.0 < fVar78) &&
                               (fVar81 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
                              fVar81 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
                            }
                            fVar81 = fVar51 * *(float *)(unaff_x19 + 0x56) +
                                     *(float *)(lVar37 + (long)(int)*puVar1 * 0x178 + 0x154) +
                                     (fVar81 - *(float *)((long)unaff_x19 + 0x4c4)) +
                                     fStack0000000000000054 *
                                     (fVar50 + *(float *)((long)unaff_x19 + 0x2b4));
                          }
                          else {
                            lVar22 = unaff_x19[0x6c];
                            *(undefined1 *)((long)unaff_x19 + 700) = 1;
                            if (lVar22 == 0) goto LAB_02491464;
                            fVar78 = *(float *)(unaff_x19 + 0x9a);
                            fVar81 = *(float *)(unaff_x19 + 0x57) +
                                     fVar51 * *(float *)(unaff_x19 + 0x56);
                          }
                          puVar12 = System_Threading_Mutex_TypeInfo;
                          lVar22 = *(long *)(lVar22 + 0x38);
                          if (lVar22 == 0) goto LAB_02491464;
                          uVar43 = *(uint *)((long)unaff_x19 + 0x48c);
                          if ((*(uint *)(lVar22 + 0x18) <= uVar43) ||
                             (uVar8 = uVar43 - 1, *(uint *)(lVar22 + 0x18) <= uVar8))
                          goto 
                          UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                          ;
                          uVar65 = (ulong)(uint)(fVar81 + *(float *)(unaff_x19 + 0x96));
                          fVar82 = (fVar81 + *(float *)(unaff_x19 + 0x96) + fVar78) -
                                   *(float *)(lVar22 + (long)(int)uVar43 * 0x178 + 0x158);
                          if ((bVar14 || *(short *)(lVar22 + (long)(int)uVar8 * 0x178 + 0x20) !=
                                         0xad) ||
                             ((fVar52 <= fVar82 && ((int)unaff_x19[0x5b] != 0)))) {
                            if (*(short *)(lVar22 + (long)(int)uVar43 * 0x178 + 0x20) == 0xad) {
                              bVar14 = true;
                              plVar38 = (long *)System_Threading_Mutex_TypeInfo;
                              unaff_x29 = (long *)StringLiteral_302;
                            }
                            else {
                              if ((bVar11 & *(byte *)(unaff_x19 + 0x46)) != 0) {
                                fVar81 = *(float *)((long)unaff_x19 + 0x2cc);
                                fVar78 = *(float *)(unaff_x19 + 0x59) / 100.0;
                                if ((fVar78 <= fVar81) ||
                                   ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c))) {
                                  fVar81 = *(float *)((long)unaff_x19 + 0x1dc);
                                  uVar65 = (ulong)(uint)fVar81;
                                  fVar78 = *(float *)(unaff_x19 + 0x49);
                                  if ((fVar78 < fVar81) &&
                                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
                                  goto LAB_024914c0;
                                  goto LAB_0248cc70;
                                }
LAB_0249155c:
                                fVar50 = fVar58;
                                if (0.0 < fVar81) {
                                  fVar50 = fVar58 / (1.0 - fVar81);
                                }
                                fVar81 = fVar81 + (fVar58 - fVar73 * (fStack00000000000000dc +
                                                                     DAT_02958218)) / fVar50;
LAB_0249154c:
                                if (fVar78 <= fVar81) {
                                  fVar81 = fVar78;
                                }
                                *(float *)((long)unaff_x19 + 0x2cc) = fVar81;
                                return;
                              }
LAB_0248cc70:
                              lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
                              if (*(int *)(lVar22 + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                                lVar22 = *(long *)puVar12;
                              }
                              iVar18 = *(int *)(*(long *)(lVar22 + 0xb8) + 0xe78);
                              if ((((float)iVar18 != fStack0000000000000034) && (iVar18 != -1)) &&
                                 (bVar11 == 1)) {
                                if (*(int *)(lVar22 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                uVar90 = FUN_024d66ec();
                                if ((unaff_x19[0x6c] == 0) ||
                                   (lVar22 = *(long *)(unaff_x19[0x6c] + 0x38), lVar22 == 0))
                                goto LAB_02491464;
                                uVar43 = *puVar1 - 1;
                                if (*(uint *)(lVar22 + 0x18) <= uVar43)
                                goto 
                                UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                                ;
                                fStack0000000000000034 = (float)iVar18;
                                if (*(short *)(lVar22 + (long)(int)uVar43 * 0x178 + 0x20) == 0xad) {
                                  uVar90 = uVar90 - 1;
                                  bVar14 = false;
                                  in_stack_000017a8 = CONCAT44(0x2d,uVar43);
                                  *puVar1 = uVar43;
                                  plVar38 = (long *)System_Threading_Mutex_TypeInfo;
                                  unaff_x29 = (long *)StringLiteral_302;
                                  goto LAB_0248ab98;
                                }
                              }
                              if (fVar52 < fVar82) {
                                if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
                                  *(undefined4 *)((long)unaff_x19 + 0x2dc) =
                                       *(undefined4 *)((long)unaff_x19 + 0x48c);
                                }
                                unaff_x29 = (long *)StringLiteral_302;
                                plVar38 = (long *)System_Threading_Mutex_TypeInfo;
                                if ((char)unaff_x19[0x46] != '\0') {
                                  fVar78 = *(float *)(unaff_x19 + 0x58);
                                  if ((fVar78 < *(float *)((long)unaff_x19 + 0x2b4)) &&
                                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                                    fVar50 = *(float *)((long)unaff_x19 + 0x2b4) +
                                             ((fVar87 - fVar82) / (float)((int)unaff_x19[0x94] + 1))
                                             / fStack0000000000000054;
                                    if (fVar50 <= fVar78) {
                                      fVar50 = fVar78;
                                    }
LAB_0248ea5c:
                                    *(float *)((long)unaff_x19 + 0x2b4) = fVar50;
                                    return;
                                  }
                                  fVar81 = *(float *)((long)unaff_x19 + 0x2cc);
                                  fVar78 = *(float *)(unaff_x19 + 0x59) / 100.0;
                                  if ((fVar81 < fVar78) &&
                                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
                                  goto LAB_0249155c;
                                  fVar81 = *(float *)((long)unaff_x19 + 0x1dc);
                                  uVar65 = (ulong)(uint)fVar81;
                                  fVar78 = *(float *)(unaff_x19 + 0x49);
                                  if ((fVar78 < fVar81) &&
                                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
                                  goto LAB_024914c0;
                                }
                                switch((int)unaff_x19[0x5b]) {
                                case 0:
                                case 2:
                                case 4:
                                  uVar65 = uVar27;
                                  FUN_024d7014(fStack0000000000000054,uVar27,fVar51,
                                               *(undefined4 *)((long)unaff_x19 + 0x2f4),
                                               fStack00000000000000c4,fStack00000000000000cc,
                                               fStack00000000000000dc,fVar50);
                                  break;
                                case 1:
                                  lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
                                  if (*(int *)(lVar22 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                    lVar22 = *plVar38;
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
                                                                      *(long *)(lVar22 + 0x80) +
                                                                      0xa0);
                                  if (*piVar28 == 0) {
                                    bVar14 = false;
                                    goto LAB_0248e4bc;
                                  }
                                  lVar22 = *plVar38;
                                  if (*(int *)(lVar22 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                    lVar22 = *plVar38;
                                  }
                                  FUN_013b8de4(*(long *)(lVar22 + 0xb8) + 0x11f0,&stack0x00000880,
                                               *(undefined8 *)
                                                Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                                              );
                                  memcpy(&stack0x00000fe8,&stack0x00000880,0x378);
                                  iVar18 = FUN_024d66ec();
                                  bVar14 = false;
                                  goto LAB_0248c900;
                                case 3:
                                  if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0
                                     ) {
                                    thunk_FUN_00d32864();
                                  }
                                  uVar90 = FUN_024d66ec();
                                  bVar14 = false;
                                  goto LAB_0248c628;
                                case 5:
                                  *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
                                  uVar65 = uVar27;
                                  FUN_024d7014(fStack0000000000000054,uVar27,fVar51,
                                               *(undefined4 *)((long)unaff_x19 + 0x2f4),
                                               fStack00000000000000c4,fStack00000000000000cc,
                                               fStack00000000000000dc,fVar50);
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
                                    plVar47 = (long *)unaff_x19[0x5c];
                                    uVar30 = (**(code **)(*unaff_x19 + 0x548))();
                                    if (plVar47 == (long *)0x0) goto LAB_02491464;
                                    (**(code **)(*plVar47 + 0x558))
                                              (plVar47,uVar30,*(undefined8 *)(*plVar47 + 0x560));
                                    lVar22 = unaff_x19[0x5c];
                                    if (lVar22 == 0) goto LAB_02491464;
                                    *(int *)(lVar22 + 0x3f8) = (int)unaff_x19[0x7f];
                                    FUN_024c910c(lVar22,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
                                    plVar47 = (long *)unaff_x19[0x5c];
                                    if (plVar47 == (long *)0x0) goto LAB_02491464;
                                    (**(code **)(*plVar47 + 0x7d8))
                                              (plVar47,0,0,*(undefined8 *)(*plVar47 + 0x7e0));
                                    *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                                  }
                                  bVar14 = false;
                                  goto LAB_0248ca1c;
                                default:
                                  bVar14 = false;
                                  goto LAB_0248cf18;
                                }
                                bVar14 = false;
                                bVar11 = 1;
                                bVar10 = true;
                                plVar38 = (long *)System_Threading_Mutex_TypeInfo;
                                unaff_x29 = (long *)StringLiteral_302;
                              }
                              else {
                                uVar65 = uVar27;
                                FUN_024d7014(fStack0000000000000054,uVar27,fVar51,
                                             *(undefined4 *)((long)unaff_x19 + 0x2f4),
                                             fStack00000000000000c4,fStack00000000000000cc,
                                             fStack00000000000000dc,fVar50);
                                bVar11 = 1;
                                bVar14 = false;
                                bVar10 = true;
                                plVar38 = (long *)System_Threading_Mutex_TypeInfo;
                                unaff_x29 = (long *)StringLiteral_302;
                              }
                            }
                          }
                          else {
                            uVar90 = uVar90 - 1;
                            bVar14 = false;
                            in_stack_000017a8 = CONCAT44(0x2d,uVar8);
                            *puVar1 = uVar8;
                            plVar38 = (long *)System_Threading_Mutex_TypeInfo;
                            unaff_x29 = (long *)StringLiteral_302;
                          }
                        }
                        goto LAB_0248ab98;
                      }
LAB_0248cf18:
                      if (uVar17 != 0xad) {
                        if (uVar17 == 9) {
                          lVar22 = *plVar2;
                          if ((lVar22 != 0) && (lVar37 = *(long *)(lVar22 + 0x38), lVar37 != 0)) {
                            uVar49 = *puVar1;
                            if (*(uint *)(lVar37 + 0x18) <= uVar49)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            *(undefined1 *)(lVar37 + (long)(int)uVar49 * 0x178 + 0x194) = 0;
                            *(uint *)((long)unaff_x19 + 0x49c) = uVar49;
                            lVar37 = *(long *)(lVar22 + 0x50);
                            if (lVar37 != 0) {
                              if (*(uint *)(unaff_x19 + 0x94) < *(uint *)(lVar37 + 0x18)) {
                                lVar37 = lVar37 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                                *(int *)(lVar37 + 0x2c) = *(int *)(lVar37 + 0x2c) + 1;
                                goto LAB_0248cf8c;
                              }
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                            }
                          }
                        }
                        else {
                          if (*(int *)((long)unaff_x19 + 0x63c) == 1) {
                            (**(code **)(*unaff_x19 + 0x8c8))();
                          }
                          else if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
                            (**(code **)(*unaff_x19 + 0x8b8))(fStack0000000000000134,fVar61);
                          }
                          if (bVar10) {
                            *(uint *)((long)unaff_x19 + 0x494) = *puVar1;
                          }
                          *(uint *)((long)unaff_x19 + 0x49c) = *puVar1;
                          *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
                          if ((unaff_x19[0x6c] != 0) &&
                             (lVar22 = *(long *)(unaff_x19[0x6c] + 0x50), lVar22 != 0)) {
                            if (*(uint *)(unaff_x19 + 0x94) < *(uint *)(lVar22 + 0x18)) {
                              lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                              bVar10 = false;
                              *(float *)(lVar22 + 0x60) = fVar64;
                              *(float *)(lVar22 + 100) = fVar56;
                              goto FUN_0248d088;
                            }
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                          }
                        }
                        goto LAB_02491464;
                      }
                      if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x38), lVar22 == 0))
                      goto LAB_02491464;
                      if (*(uint *)(lVar22 + 0x18) <= *puVar1)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      *(undefined1 *)(lVar22 + (long)(int)*puVar1 * 0x178 + 0x194) = 0;
                    }
                    else {
                      if (((uVar17 & 0xfffffffe) == 10) && ((int)unaff_x19[0x5b] == 6)) {
                        fVar58 = (float)uVar65;
                        fVar73 = 0.0;
                        if ((0.0 < fVar58) &&
                           (fVar73 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
                          fVar73 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
                        }
                        uVar65 = (ulong)(uint)fVar52;
                        if (fVar52 < (*(float *)(unaff_x19 + 0x96) -
                                     (*(float *)((long)unaff_x19 + 0x4c4) - fVar58)) + fVar73) {
                          if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
                            *(uint *)((long)unaff_x19 + 0x2dc) = uVar49;
                          }
                          unaff_x29 = (long *)StringLiteral_302;
                          plVar38 = (long *)System_Threading_Mutex_TypeInfo;
                          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          uVar90 = FUN_024d66ec();
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
                            plVar47 = (long *)unaff_x19[0x5c];
                            uVar30 = (**(code **)(*unaff_x19 + 0x548))();
                            if (plVar47 == (long *)0x0) goto LAB_02491464;
                            (**(code **)(*plVar47 + 0x558))
                                      (plVar47,uVar30,*(undefined8 *)(*plVar47 + 0x560));
                            lVar22 = unaff_x19[0x5c];
                            if (lVar22 == 0) goto LAB_02491464;
                            *(int *)(lVar22 + 0x3f8) = (int)unaff_x19[0x7f];
                            FUN_024c910c(lVar22,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
                            plVar47 = (long *)unaff_x19[0x5c];
                            if (plVar47 == (long *)0x0) goto LAB_02491464;
                            (**(code **)(*plVar47 + 0x7d8))
                                      (plVar47,0,0,*(undefined8 *)(*plVar47 + 0x7e0));
                            *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                          }
                          in_stack_000017a8 = CONCAT44(3,uVar49);
                          goto LAB_0248ab98;
                        }
                      }
                      if ((((uVar17 - 0x2007 < 0x23) &&
                           ((1L << ((ulong)(uVar17 - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
                          (uVar17 - 10 < 2)) || (uVar17 == 0xa0)) {
UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ObjectSpawner__get_objectPrefabs:
                        if (((uVar17 != 0xad) && (uVar17 != 0x200b)) && (uVar17 != 0x2060)) {
                          lVar22 = *plVar2;
                          if ((lVar22 == 0) || (lVar37 = *(long *)(lVar22 + 0x50), lVar37 == 0))
                          goto LAB_02491464;
                          if (*(uint *)(lVar37 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
                          goto 
                          UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                          ;
                          lVar37 = lVar37 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                          *(int *)(lVar37 + 0x2c) = *(int *)(lVar37 + 0x2c) + 1;
                          *(int *)(lVar22 + 0x20) = *(int *)(lVar22 + 0x20) + 1;
                        }
                      }
                      else {
                        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0
                           ) {
                          thunk_FUN_00d32864();
                        }
                        uVar27 = FUN_016fa418(uVar17,0);
                        if ((uVar27 & 1) != 0)
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ObjectSpawner__get_objectPrefabs
                        ;
                      }
                      if (uVar17 == 0xa0) {
                        if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x50), lVar22 == 0))
                        goto LAB_02491464;
                        if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                        ;
                        lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
LAB_0248cf8c:
                        *(int *)(lVar22 + 0x20) = *(int *)(lVar22 + 0x20) + 1;
                      }
                    }
FUN_0248d088:
                    if (((int)unaff_x19[0x5b] == 1) && ((uVar17 == 0x2d || (!bVar9)))) {
                      if (unaff_x19[0xca] == 0) goto LAB_02491464;
                      fVar73 = *(float *)(unaff_x19 + 0x3c);
                      iVar18 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
                      if (unaff_x19[0xca] == 0) goto LAB_02491464;
                      fVar64 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
                      lVar22 = unaff_x19[0xc9];
                      fVar58 = in_stack_00000080._4_4_;
                      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
                        fVar58 = 1.0;
                      }
                      if ((lVar22 == 0) || (*(long *)(lVar22 + 0x20) == 0)) goto LAB_02491464;
                      fVar78 = *(float *)((long)unaff_x19 + 0x3fc);
                      fVar82 = *(float *)(lVar22 + 0x2c);
                      fVar56 = (float)FUN_026fd668(*(long *)(lVar22 + 0x20),0);
                      fVar81 = *(float *)(unaff_x19 + 0x69);
                      fVar56 = fVar78 * (fVar73 / (float)iVar18) * fVar64 * fVar58 * fVar82 * fVar56
                      ;
                      fVar73 = *(float *)((long)unaff_x19 + 0x34c);
                      if ((uVar17 == 10) &&
                         (*(int *)((long)unaff_x19 + 0x48c) != (int)unaff_x19[0x92])) {
                        if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x38), lVar22 == 0))
                        goto LAB_02491464;
                        uVar49 = *(int *)((long)unaff_x19 + 0x48c) - 1;
                        if (*(uint *)(lVar22 + 0x18) <= uVar49)
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                        ;
                        if (unaff_x19[0xca] == 0) goto LAB_02491464;
                        fVar58 = *(float *)(lVar22 + (long)(int)uVar49 * 0x178 + 0x60);
                        iVar18 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
                        if (unaff_x19[0xca] == 0) goto LAB_02491464;
                        fVar78 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
                        lVar22 = unaff_x19[0xc9];
                        fVar64 = in_stack_00000080._4_4_;
                        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
                          fVar64 = 1.0;
                        }
                        if ((lVar22 == 0) || (*(long *)(lVar22 + 0x20) == 0)) goto LAB_02491464;
                        fVar82 = *(float *)((long)unaff_x19 + 0x3fc);
                        fVar60 = *(float *)(lVar22 + 0x2c);
                        fVar56 = (float)FUN_026fd668(*(long *)(lVar22 + 0x20),0);
                        if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x50), lVar22 == 0))
                        goto LAB_02491464;
                        if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                        ;
                        lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                        fVar81 = *(float *)(lVar22 + 0x60);
                        fVar73 = *(float *)(lVar22 + 100);
                        fVar56 = fVar82 * (fVar58 / (float)iVar18) * fVar78 * fVar64 * fVar60 *
                                 fVar56;
                      }
                      fVar82 = *(float *)(unaff_x19 + 0x9a);
                      fVar64 = *(float *)(unaff_x19 + 0x96);
                      fVar60 = *(float *)((long)unaff_x19 + 0x4c4);
                      fVar58 = 0.0;
                      fVar78 = 0.0;
                      if ((0.0 < fVar82) && (fVar78 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')
                         ) {
                        fVar78 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
                      }
                      fVar61 = *(float *)(unaff_x19 + 199);
                      if ((char)unaff_x19[0x1d] == '\0') {
                        if ((unaff_x19[0xc9] == 0) ||
                           (lVar22 = *(long *)(unaff_x19[0xc9] + 0x20), lVar22 == 0))
                        goto LAB_02491464;
                        FUN_026fd62c(&stack0x00000880,lVar22,0);
                        unaff_x28[0x1cd] = unaff_x28[1];
                        unaff_x28[0x1cc] = *unaff_x28;
                        fVar58 = (float)FUN_026fd474(&stack0x000016e0,0);
                      }
                      puVar12 = System_Threading_Mutex_TypeInfo;
                      fVar74 = *(float *)(unaff_x19 + 0x6b);
                      fVar73 = (fVar84 - fVar81) - fVar73;
                      bVar15 = true;
                      if ((fVar74 <= fVar73) && (bVar15 = false, !NAN(fVar74))) {
                        bVar15 = fVar74 == -1.0;
                      }
                      if (!bVar15) {
                        fVar73 = fVar74;
                      }
                      fVar81 = _DAT_0294c6e8;
                      if ((uVar41 & 0x18) == 0) {
                        fVar81 = 1.0;
                      }
                      if (((fVar64 - (fVar60 - fVar82)) + fVar78 < fVar52) &&
                         (ABS(fVar61) +
                          fVar56 * fVar58 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) <
                          fVar81 * fVar73)) {
                        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        FUN_024d69d4();
                        lVar22 = *(long *)(*(long *)puVar12 + 0xb8);
                        memcpy(&stack0x00000508,(void *)(lVar22 + 0x788),0x378);
                        FUN_013b86dc(lVar22 + 0x11f0,&stack0x00000508,
                                     *(undefined8 *)
                                      Method_System_Collections_Generic_List<TextStyle>_get_Item__);
                      }
                    }
                    uVar27 = (ulong)(uint)fVar85;
                    fVar73 = 1.0;
                    lVar22 = *plVar2;
                    if ((lVar22 == 0) || (lVar37 = *(long *)(lVar22 + 0x38), lVar37 == 0))
                    goto LAB_02491464;
                    if (*(uint *)(lVar37 + 0x18) <= *puVar1)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    uVar49 = *(uint *)(unaff_x19 + 0x94);
                    lVar37 = lVar37 + (long)(int)*puVar1 * 0x178;
                    *(uint *)(lVar37 + 100) = uVar49;
                    *(int *)(lVar37 + 0x68) = (int)unaff_x19[0x95];
                    if ((bVar9) ||
                       ((uVar17 < 0xe && ((1 << (ulong)(uVar17 & 0x1f) & 0x2c00U) != 0)))) {
                      lVar22 = *(long *)(lVar22 + 0x50);
                      if (lVar22 == 0) goto LAB_02491464;
                      if (*(uint *)(lVar22 + 0x18) <= uVar49)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      if (*(int *)(lVar22 + (long)(int)uVar49 * 0x5c + 0x24) == 1)
                      goto LAB_0248d42c;
                    }
                    else {
                      lVar22 = *(long *)(lVar22 + 0x50);
                      if (lVar22 == 0) goto LAB_02491464;
LAB_0248d42c:
                      if (*(uint *)(lVar22 + 0x18) <= uVar49)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      *(int *)(lVar22 + (long)(int)uVar49 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
                    }
                    if (uVar17 == 9) {
                      if (*unaff_x27 == 0) goto LAB_02491464;
                      fVar73 = (float)FUN_026fd208(*unaff_x27 + 0x50,0);
                      if (*unaff_x27 == 0) goto LAB_02491464;
                      fVar56 = *(float *)(unaff_x19 + 199);
                      fVar58 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x27 + 0x1b9));
                      fVar73 = fVar85 * fVar73 * fVar58;
                      fVar64 = fVar73 * (float)(int)(fVar56 / fVar73);
                      uVar65 = (ulong)(uint)fVar64;
                      if (fVar64 <= fVar56) {
                        fVar64 = fVar56 + fVar73;
                      }
LAB_0248d614:
                      *(float *)(unaff_x19 + 199) = fVar64;
                    }
                    else if (*(float *)(unaff_x19 + 0x55) == 0.0) {
                      if ((char)unaff_x19[0x1d] == '\0') {
                        if (*(char *)((long)unaff_x19 + 0x46c) != '\0') {
                          fVar73 = (float)thunk_FUN_026935f0(lVar23,0);
                        }
                        fVar64 = *(float *)(unaff_x19 + 199);
                        fVar56 = (float)FUN_026fd474(&stack0x00001770,0);
                        if (unaff_x19[0x1f] != 0) {
                          fVar58 = 1.0 - *(float *)((long)unaff_x19 + 0x2cc);
                          fVar64 = fVar64 + fVar58 * (*(float *)((long)unaff_x19 + 0x2a4) +
                                                     fVar85 * (fVar57 + fVar73 * fVar56) +
                                                     fVar51 * (fStack00000000000000c4 +
                                                              fStack00000000000000cc +
                                                              *(float *)(unaff_x19[0x1f] + 0x1ac)));
                          *(float *)(unaff_x19 + 199) = fVar64;
                          goto joined_r0x0248d568;
                        }
                        goto LAB_02491464;
                      }
                      if (*unaff_x27 == 0) goto LAB_02491464;
                      fVar64 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                               (*(float *)((long)unaff_x19 + 0x2a4) +
                               fVar85 * fVar57 +
                               fVar51 * (fStack00000000000000c4 +
                                        fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac)));
                      uVar65 = (ulong)(uint)fVar64;
                      fVar64 = *(float *)(unaff_x19 + 199) - fVar64;
                      *(float *)(unaff_x19 + 199) = fVar64;
                      if ((uVar19 != 0) || (uVar17 == 0x200b)) {
                        fVar73 = fVar51 * *(float *)((long)unaff_x19 + 0x2ac);
                        uVar65 = (ulong)(uint)fVar73;
                        fVar64 = fVar64 - fVar73;
                        goto LAB_0248d614;
                      }
                    }
                    else {
                      if (*unaff_x27 == 0) goto LAB_02491464;
                      fVar58 = *(float *)(unaff_x19 + 199);
                      fVar64 = fVar58 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                                        (*(float *)((long)unaff_x19 + 0x2a4) +
                                        (*(float *)(unaff_x19 + 0x55) - fVar59) +
                                        fVar51 * (fStack00000000000000cc +
                                                 *(float *)(*unaff_x27 + 0x1ac)));
                      *(float *)(unaff_x19 + 199) = fVar64;
joined_r0x0248d568:
                      if ((uVar19 != 0) || (uVar65 = (ulong)(uint)fVar58, uVar17 == 0x200b)) {
                        fVar73 = fVar51 * *(float *)((long)unaff_x19 + 0x2ac);
                        uVar65 = (ulong)(uint)fVar73;
                        fVar64 = fVar64 + fVar73;
                        goto LAB_0248d614;
                      }
                    }
                    lVar22 = *plVar2;
                    if ((lVar22 == 0) || (lVar37 = *(long *)(lVar22 + 0x38), lVar37 == 0))
                    goto LAB_02491464;
                    uVar49 = *puVar1;
                    uVar41 = (uint)*(undefined8 *)(lVar37 + 0x18);
                    if (uVar41 <= uVar49)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    *(float *)(lVar37 + (long)(int)uVar49 * 0x178 + 0x144) = fVar64;
                    uVar43 = uVar17;
                    if ((int)uVar17 < 0xd) {
                      if ((uVar17 - 10 < 2) || (uVar17 == 3)) goto LAB_0248d6b8;
LAB_0248d69c:
                      if (((bool)(bVar9 & uVar17 == 0x2d)) || (uVar49 == uVar36)) goto LAB_0248d6b8;
                    }
                    else {
                      if (1 < uVar17 - 0x2028) {
                        if (uVar17 != 0xd) goto LAB_0248d69c;
                        uVar65 = 0;
                        *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
                        if (uVar49 != uVar36) goto LAB_0248dc08;
                      }
LAB_0248d6b8:
                      if (0.0 < *(float *)(unaff_x19 + 0x9a)) {
                        fVar73 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
                        if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0)
                            == 0) {
                          thunk_FUN_00d32864();
                        }
                        if (((fVar71 < ABS(fVar73)) && (*(char *)((long)unaff_x19 + 700) == '\0'))
                           && (*(char *)((long)unaff_x19 + 0x334) == '\0')) {
                          FUN_024d6ca8(fVar73);
                          *(float *)((long)unaff_x19 + 0x4bc) =
                               *(float *)((long)unaff_x19 + 0x4bc) - fVar73;
                          *(float *)(unaff_x19 + 0x9a) = fVar73 + *(float *)(unaff_x19 + 0x9a);
                          puVar12 = System_Threading_Mutex_TypeInfo;
                          lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
                          if (*(int *)(lVar22 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                            lVar22 = *(long *)puVar12;
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
                            memcpy((void *)(*(long *)(lVar22 + 0xb8) + 0x788),&stack0x00000880,0x378
                                  );
                            lVar22 = *(long *)(lVar22 + 0xb8);
                            *(float *)(lVar22 + 0x7bc) = fVar73 + *(float *)(lVar22 + 0x7bc);
                            *(float *)(lVar22 + 0x800) = fVar73 + *(float *)(lVar22 + 0x800);
                            memcpy(&stack0x00000190,(void *)(lVar22 + 0x788),0x378);
                            FUN_013b86dc(lVar22 + 0x11f0,&stack0x00000190,
                                         *(undefined8 *)
                                          Method_System_Collections_Generic_List<TextStyle>_get_Item__
                                        );
                          }
                        }
                      }
                      fVar64 = *(float *)(unaff_x19 + 0x9a);
                      *(undefined1 *)((long)unaff_x19 + 0x334) = 0;
                      fVar58 = *(float *)((long)unaff_x19 + 0x4c4) - fVar64;
                      fVar73 = *(float *)((long)unaff_x19 + 0x4bc);
                      if (fVar58 <= *(float *)((long)unaff_x19 + 0x4bc)) {
                        fVar73 = fVar58;
                      }
                      *(float *)((long)unaff_x19 + 0x4bc) = fVar73;
                      fVar56 = *(float *)(unaff_x19 + 0x98);
                      if (*(char *)((long)unaff_x28 + 0xf34) == '\0') {
                        fVar91 = fVar73;
                      }
                      if ((*(char *)((long)unaff_x19 + 0x32c) != '\0') &&
                         (((int)unaff_x19[100] <= *(int *)((long)unaff_x19 + 0x48c) ||
                          ((int)unaff_x19[0x65] <= (int)unaff_x19[0x94])))) {
                        *(undefined1 *)((long)unaff_x28 + 0xf34) = 1;
                      }
                      lVar22 = *plVar2;
                      if ((lVar22 == 0) || (lVar37 = *(long *)(lVar22 + 0x50), lVar37 == 0))
                      goto LAB_02491464;
                      uVar49 = *(uint *)(unaff_x19 + 0x94);
                      if (*(uint *)(lVar37 + 0x18) <= uVar49)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      lVar48 = lVar37 + (long)(int)uVar49 * 0x5c;
                      *(int *)(lVar48 + 0x34) = (int)unaff_x19[0x92];
                      iVar18 = (int)unaff_x19[0x92];
                      if ((int)unaff_x19[0x92] <= *(int *)((long)unaff_x19 + 0x494)) {
                        iVar18 = *(int *)((long)unaff_x19 + 0x494);
                      }
                      *(int *)((long)unaff_x19 + 0x494) = iVar18;
                      *(int *)(lVar48 + 0x38) = iVar18;
                      *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x48c);
                      *(undefined4 *)(lVar48 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x48c);
                      iVar18 = *(int *)((long)unaff_x19 + 0x494);
                      if (*(int *)((long)unaff_x19 + 0x494) <= *(int *)((long)unaff_x19 + 0x49c)) {
                        iVar18 = *(int *)((long)unaff_x19 + 0x49c);
                      }
                      *(int *)((long)unaff_x19 + 0x49c) = iVar18;
                      *(int *)(lVar48 + 0x40) = iVar18;
                      *(int *)(lVar48 + 0x24) =
                           (*(int *)(lVar48 + 0x3c) - *(int *)(lVar48 + 0x34)) + 1;
                      *(undefined4 *)(lVar48 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
                      lVar22 = *(long *)(lVar22 + 0x38);
                      if (lVar22 == 0) goto LAB_02491464;
                      if (*(uint *)(lVar22 + 0x18) <= *(uint *)((long)unaff_x19 + 0x494))
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      uVar86 = *(undefined4 *)
                                (lVar22 + (long)(int)*(uint *)((long)unaff_x19 + 0x494) * 0x178 +
                                0x11c);
                      lVar37 = lVar37 + (long)(int)uVar49 * 0x5c;
                      *(float *)(lVar37 + 0x70) = fVar58;
                      *(undefined4 *)(lVar37 + 0x6c) = uVar86;
                      lVar22 = *plVar2;
                      if ((lVar22 == 0) || (lVar37 = *(long *)(lVar22 + 0x50), lVar37 == 0))
                      goto LAB_02491464;
                      if (*(uint *)(lVar37 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      lVar22 = *(long *)(lVar22 + 0x38);
                      if (lVar22 == 0) goto LAB_02491464;
                      if (*(uint *)(lVar22 + 0x18) <= *(uint *)((long)unaff_x19 + 0x49c))
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      fVar56 = fVar56 - fVar64;
                      lVar37 = lVar37 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                      *(undefined4 *)(lVar37 + 0x74) =
                           *(undefined4 *)
                            (lVar22 + (long)(int)*(uint *)((long)unaff_x19 + 0x49c) * 0x178 + 0x128)
                      ;
                      *(float *)(lVar37 + 0x78) = fVar56;
                      lVar22 = *plVar2;
                      if ((lVar22 == 0) || (lVar48 = *(long *)(lVar22 + 0x50), lVar48 == 0))
                      goto LAB_02491464;
                      lVar26 = (long)(int)*(uint *)(unaff_x19 + 0x94);
                      if (*(uint *)(lVar48 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      lVar37 = lVar48 + lVar26 * 0x5c;
                      *(float *)(lVar37 + 0x44) =
                           *(float *)(lVar37 + 0x74) - fVar85 * fStack0000000000000134;
                      *(float *)(lVar37 + 0x5c) = fStack00000000000000dc;
                      if (*(int *)(lVar37 + 0x24) == 1) {
                        *(int *)(lVar48 + lVar26 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
                      }
                      if ((*unaff_x27 == 0) || (lVar37 = *(long *)(lVar22 + 0x38), lVar37 == 0))
                      goto LAB_02491464;
                      lVar45 = (long)(int)*(uint *)((long)unaff_x19 + 0x49c);
                      uVar41 = (uint)*(undefined8 *)(lVar37 + 0x18);
                      if (uVar41 <= *(uint *)((long)unaff_x19 + 0x49c))
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      if ((*(char *)(lVar37 + lVar45 * 0x178 + 0x194) == '\0') &&
                         (lVar45 = (long)(int)*(uint *)(unaff_x19 + 0x93),
                         uVar41 <= *(uint *)(unaff_x19 + 0x93)))
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      fVar64 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                               (fVar51 * (fStack00000000000000c4 +
                                         fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac)) -
                               *(float *)((long)unaff_x19 + 0x2a4));
                      fVar73 = -fVar64;
                      if ((char)unaff_x19[0x1d] != '\0') {
                        fVar73 = fVar64;
                      }
                      lVar48 = lVar48 + lVar26 * 0x5c;
                      *(float *)(lVar48 + 0x58) =
                           *(float *)(lVar37 + lVar45 * 0x178 + 0x144) + fVar73;
                      fVar73 = *(float *)(unaff_x19 + 0x9a);
                      *(float *)(lVar48 + 0x48) =
                           fStack0000000000000054 * fVar50 + (fVar56 - fVar58);
                      *(float *)(lVar48 + 0x4c) = fVar56;
                      uVar65 = (ulong)(uint)(0.0 - fVar73);
                      *(float *)(lVar48 + 0x50) = 0.0 - fVar73;
                      *(float *)(lVar48 + 0x54) = fVar58;
                      plVar38 = (long *)System_Threading_Mutex_TypeInfo;
                      if ((int)uVar17 < 0x2d) {
                        if (uVar17 - 10 < 2) {
LAB_0248dad8:
                          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          unaff_x29 = (long *)StringLiteral_302;
                          FUN_024d69d4();
                          lVar22 = unaff_x19[0x6c];
                          *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
                          iVar18 = (int)unaff_x19[0x94] + 1;
                          *(int *)(unaff_x19 + 0x94) = iVar18;
                          *(int *)(unaff_x19 + 0x92) = *(int *)((long)unaff_x19 + 0x48c) + 1;
                          if ((lVar22 != 0) && (*(long *)(lVar22 + 0x50) != 0)) {
                            if (*(int *)(*(long *)(lVar22 + 0x50) + 0x18) <= iVar18) {
                              FUN_024d6e60();
                              lVar22 = unaff_x19[0x6c];
                              if (lVar22 == 0) goto LAB_02491464;
                            }
                            lVar22 = *(long *)(lVar22 + 0x38);
                            if (lVar22 != 0) {
                              if (*puVar1 < *(uint *)(lVar22 + 0x18)) {
                                fVar73 = *(float *)(lVar22 + (long)(int)*puVar1 * 0x178 + 0x154);
                                if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
                                  fVar58 = 0.0;
                                  if ((uVar17 == 0x2029) || (uVar17 == 10)) {
                                    fVar58 = *(float *)((long)unaff_x19 + 0x2c4);
                                  }
                                  uVar31 = 0;
                                  fVar58 = *(float *)(unaff_x19 + 0x9a) +
                                           fVar73 + (0.0 - *(float *)((long)unaff_x19 + 0x4c4)) +
                                           fStack0000000000000054 *
                                           (fVar50 + *(float *)((long)unaff_x19 + 0x2b4)) +
                                           fVar51 * (*(float *)(unaff_x19 + 0x56) + fVar58);
                                }
                                else {
                                  if ((uVar17 == 0x2029) || (fVar58 = 0.0, uVar17 == 10)) {
                                    fVar58 = *(float *)((long)unaff_x19 + 0x2c4);
                                  }
                                  uVar31 = 1;
                                  fVar58 = *(float *)(unaff_x19 + 0x9a) +
                                           *(float *)(unaff_x19 + 0x57) +
                                           fVar51 * (*(float *)(unaff_x19 + 0x56) + fVar58);
                                }
                                *(float *)(unaff_x19 + 0x9a) = fVar58;
                                *(undefined1 *)((long)unaff_x19 + 700) = uVar31;
                                lVar22 = *plVar38;
                                if (*(int *)(lVar22 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                  lVar22 = *plVar38;
                                }
                                uVar30 = *(undefined8 *)(*(long *)(lVar22 + 0xb8) + 0x15a8);
                                *(float *)(unaff_x19 + 0x99) = fVar73;
                                uVar65 = NEON_rev64(uVar30,4);
                                unaff_x19[0x98] = uVar65;
                                *(float *)(unaff_x19 + 199) =
                                     *(float *)(unaff_x19 + 0x80) + 0.0 +
                                     *(float *)((long)unaff_x19 + 0x404);
                                FUN_024d69d4();
                                FUN_024d69d4();
                                *(int *)((long)unaff_x19 + 0x48c) =
                                     *(int *)((long)unaff_x19 + 0x48c) + 1;
                                bVar10 = true;
                                bVar11 = 1;
                                goto LAB_0248ab98;
                              }
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                            }
                          }
                          goto LAB_02491464;
                        }
                        if (uVar17 == 3) {
                          if (unaff_x19[0x8e] == 0) goto LAB_02491464;
                          uVar90 = (uint)*(undefined8 *)(unaff_x19[0x8e] + 0x18);
                          uVar43 = 3;
                        }
                      }
                      else if ((uVar17 - 0x2028 < 2) || (uVar17 == 0x2d)) goto LAB_0248dad8;
                    }
LAB_0248dc08:
                    uVar49 = *puVar1;
                    if (uVar41 <= uVar49)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    if (*(char *)(lVar37 + (long)(int)uVar49 * 0x178 + 0x194) != '\0') {
                      lVar37 = lVar37 + (long)(int)uVar49 * 0x178;
                      uVar25 = *(ulong *)(lVar37 + 0x11c);
                      uVar65 = *(ulong *)((long)unaff_x19 + 0x4d4);
                      *(ulong *)((long)unaff_x19 + 0x4d4) =
                           uVar25 ^ (uVar25 ^ uVar65) &
                                    CONCAT44(-(uint)((float)(uVar65 >> 0x20) <
                                                    (float)(uVar25 >> 0x20)),
                                             -(uint)((float)uVar65 < (float)uVar25));
                      uVar25 = *(ulong *)((long)unaff_x19 + 0x4dc);
                      uVar65 = *(ulong *)(lVar37 + 0x128);
                      *(ulong *)((long)unaff_x19 + 0x4dc) =
                           uVar65 ^ (uVar65 ^ uVar25) &
                                    CONCAT44(-(uint)((float)(uVar65 >> 0x20) <
                                                    (float)(uVar25 >> 0x20)),
                                             -(uint)((float)uVar65 < (float)uVar25));
                    }
                    if (((int)unaff_x19[0x5b] == 5) &&
                       ((0xd < uVar43 || ((1 << (ulong)(uVar43 & 0x1f) & 0x2c00U) == 0)))) {
                      lVar37 = *(long *)(lVar22 + 0x58);
                      if (lVar37 == 0) goto LAB_02491464;
                      iVar18 = (int)unaff_x19[0x95] + 1;
                      if (*(int *)(lVar37 + 0x18) < iVar18) {
                        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        FUN_01147c08((long *)(lVar22 + 0x58),iVar18,1,
                                     *(undefined8 *)
                                      Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerMove__
                                    );
                        lVar22 = *plVar2;
                        if (lVar22 == 0) goto LAB_02491464;
                      }
                      lVar37 = *(long *)(lVar22 + 0x58);
                      if (lVar37 == 0) goto LAB_02491464;
                      uVar41 = *(uint *)(unaff_x19 + 0x95);
                      lVar48 = (long)(int)uVar41;
                      uVar49 = *(uint *)(lVar37 + 0x18);
                      if (uVar49 <= uVar41)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      lVar26 = lVar37 + lVar48 * 0x14;
                      fVar58 = *(float *)(lVar26 + 0x30);
                      uVar65 = (ulong)(uint)fVar58;
                      *(undefined4 *)(lVar26 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
                      fVar73 = *(float *)((long)unaff_x19 + 0x4bc);
                      if (fVar58 <= *(float *)((long)unaff_x19 + 0x4bc)) {
                        fVar73 = fVar58;
                      }
                      *(float *)(lVar26 + 0x30) = fVar73;
                      uVar43 = *(uint *)((long)unaff_x19 + 0x48c);
                      if (uVar43 == 0 && uVar41 == 0) {
                        *(uint *)(lVar37 + lVar48 * 0x14 + 0x20) = uVar43;
                      }
                      else {
                        uVar8 = uVar43 - 1;
                        if (0 < (int)uVar43) {
                          lVar22 = *(long *)(lVar22 + 0x38);
                          if (lVar22 == 0) goto LAB_02491464;
                          if (*(uint *)(lVar22 + 0x18) <= uVar8)
                          goto 
                          UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                          ;
                          if (uVar41 != *(uint *)(lVar22 + (long)(int)uVar8 * 0x178 + 0x68)) {
                            if (uVar41 - 1 < uVar49) {
                              *(uint *)(lVar37 + 0x20 + (long)(int)(uVar41 - 1) * 0x14 + 4) = uVar8;
                              *(uint *)(lVar37 + 0x20 + lVar48 * 0x14) = uVar43;
                              goto LAB_0248dc84;
                            }
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                          }
                        }
                        if (uVar43 == uVar36) {
                          *(uint *)(lVar37 + lVar48 * 0x14 + 0x24) = uVar36;
                        }
                      }
                    }
LAB_0248dc84:
                    plVar38 = (long *)System_Threading_Mutex_TypeInfo;
                    if (((char)unaff_x19[0x5a] != '\0') ||
                       ((*(uint *)(unaff_x19 + 0x5b) < 7 &&
                        ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5b) & 0x1f) & 0x4aU) != 0)))) {
                      if ((uVar19 == 0) &&
                         (((uVar17 != 0x2d && (uVar17 != 0x200b)) && (uVar17 != 0xad)))) {
                        if (*(char *)((long)unaff_x19 + 0x2d2) == '\0') {
LAB_0248de4c:
                          if (((((0x2bfd < uVar17 - 0xac01) && (0x1d < uVar17 - 0xa961)) &&
                               (0xfd < uVar17 - 0x1101)) ||
                              (uVar25 = FUN_024e95f0(0), (uVar25 & 1) != 0)) &&
                             ((((0xed < uVar17 - 0xff01 && (0x1d < uVar17 - 0xfe31)) &&
                               (0x717d < uVar17 - 0x2e81)) && (0x1fd < uVar17 - 0xf901))))
                          goto LAB_0248ded4;
                          lVar22 = FUN_024e94b0(0);
                          if ((lVar22 == 0) || (*(long *)(lVar22 + 0x10) == 0)) goto LAB_02491464;
                          dVar88 = (double)(ulong)uVar17;
                          uVar25 = FUN_0129aa60(*(long *)(lVar22 + 0x10),&stack0x00000880,
                                                *(undefined8 *)
                                                 System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                                               );
                          if ((int)*puVar1 < (int)uVar36) {
                            lVar22 = FUN_024e94b0(0);
                            if (((lVar22 == 0) || (*plVar2 == 0)) ||
                               (lVar37 = *(long *)(*plVar2 + 0x38), lVar37 == 0)) goto LAB_02491464;
                            if (*(uint *)(lVar37 + 0x18) <= *puVar1 + 1)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            if (*(long *)(lVar22 + 0x18) == 0) goto LAB_02491464;
                            dVar88 = (double)(ulong)*(ushort *)
                                                     (lVar37 + (long)(int)(*puVar1 + 1) * 0x178 +
                                                     0x20);
                            uVar29 = FUN_0129aa60(*(long *)(lVar22 + 0x18),&stack0x00000880,
                                                  *(undefined8 *)
                                                                                                      
                                                  System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                                                 );
                            if ((uVar25 & 1) != 0) goto LAB_0248e0dc;
                            if ((uVar29 & 1) == 0) goto LAB_0248e1b0;
                            plVar38 = (long *)System_Threading_Mutex_TypeInfo;
                            if (bVar11 == 0) {
                              bVar11 = 0;
                              goto LAB_0248e168;
                            }
                          }
                          else {
                            if ((uVar25 & 1) == 0) {
LAB_0248e1b0:
                              plVar38 = (long *)System_Threading_Mutex_TypeInfo;
                              if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                              }
                              FUN_024d69d4();
                              bVar11 = 0;
                              goto LAB_0248e168;
                            }
LAB_0248e0dc:
                            plVar38 = (long *)System_Threading_Mutex_TypeInfo;
                            if (uVar4 != uVar33 || ((bVar11 ^ 0xff) & 1) != 0) goto LAB_0248e168;
                          }
joined_r0x0248e0fc:
                          System_Threading_Mutex_TypeInfo = (undefined *)plVar38;
                          if (uVar19 != 0) {
LAB_0248e100:
                            plVar38 = (long *)System_Threading_Mutex_TypeInfo;
                            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            FUN_024d69d4();
                          }
                          if (*(int *)(*plVar38 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          FUN_024d69d4();
                          bVar11 = 1;
                        }
                        else {
LAB_0248ded4:
                          plVar38 = (long *)System_Threading_Mutex_TypeInfo;
                          if (bVar11 != 0) {
                            if (!(bool)(uVar17 == 0xad & (bVar14 ^ 1U))) goto joined_r0x0248e0fc;
                            goto LAB_0248e100;
                          }
                          bVar11 = 0;
                        }
                      }
                      else {
                        if (*(char *)((long)unaff_x19 + 0x2d2) == '\x01') goto LAB_0248ded4;
                        if (((uVar17 - 0x2007 < 0x29) &&
                            ((1L << ((ulong)(uVar17 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
                           ((uVar17 == 0xa0 || (uVar17 == 0x2060)))) goto LAB_0248de4c;
                        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        FUN_024d69d4();
                        bVar11 = 0;
                        *(undefined4 *)(*(long *)(*plVar38 + 0xb8) + 0xe78) = 0xffffffff;
                      }
                    }
LAB_0248e168:
                    if (*(int *)(*plVar38 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    unaff_x29 = (long *)StringLiteral_302;
                    FUN_024d69d4();
                    *(int *)((long)unaff_x19 + 0x48c) = *(int *)((long)unaff_x19 + 0x48c) + 1;
                  }
                }
                else {
                  *(undefined1 *)((long)unaff_x19 + 0x429) = 1;
                  *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
                  uVar25 = FUN_024d0688();
                  if (((uVar25 & 1) == 0) ||
                     (uVar90 = in_stack_0000176c, *(int *)((long)unaff_x19 + 0x63c) != 0))
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager__GetInputAction
                  ;
                }
LAB_0248ab98:
                uVar90 = uVar90 + 1;
                lVar22 = unaff_x19[0x8e];
                in_stack_000017bc = uVar17;
                if (lVar22 == 0) goto LAB_02491464;
                goto LAB_0248a8e0;
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
LAB_0248ef74:
  uVar90 = uVar17 - 1;
  if (*(uint *)(lVar22 + 0x18) <= uVar90)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x50), lVar23 == 0)) goto LAB_02491464;
  lVar48 = (long)(int)uVar90;
  lVar37 = lVar22 + lVar48 * 0x178;
  uVar19 = *(uint *)(lVar37 + 100);
  if (*(uint *)(lVar23 + 0x18) <= uVar19)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar45 = *(long *)(lVar37 + 0x38);
  uVar41 = (uint)*(ushort *)(lVar37 + 0x20);
  lVar26 = (long)(int)uVar19;
  lVar23 = lVar23 + lVar26 * 0x5c;
  uVar4 = *(uint *)(lVar23 + 0x3c);
  uVar33 = *(uint *)(lVar23 + 0x40);
  lVar37 = (long)(int)uVar33;
  iVar20 = *(int *)(lVar23 + 0x28);
  iVar21 = *(int *)(lVar23 + 0x2c);
  uVar49 = *(uint *)(lVar23 + 0x68);
  fVar58 = *(float *)(lVar23 + 0x5c);
  fVar64 = *(float *)(lVar23 + 0x60);
  iVar5 = *(int *)(lVar23 + 0x20);
  fVar87 = *(float *)(lVar23 + 0x4c);
  fVar70 = *(float *)(lVar23 + 0x54);
  fVar53 = *(float *)(lVar23 + 0x58);
  fVar73 = *(float *)(lVar23 + 0x6c);
  fVar91 = *(float *)(lVar23 + 0x70);
  fVar84 = *(float *)(lVar23 + 0x74);
  fVar71 = *(float *)(lVar23 + 0x78);
  fVar85 = fVar58 + fVar64;
  if ((int)uVar49 < 9) {
    switch(uVar49) {
    case 1:
      if ((char)unaff_x19[0x1d] == '\0') {
        fStack00000000000000c4 = fVar64 + 0.0;
      }
      else {
        fStack00000000000000c4 = 0.0 - fVar53;
      }
      break;
    case 2:
LAB_0248f124:
      fStack00000000000000c4 = (fVar64 + fVar58 * 0.5) - fVar53 * 0.5;
      break;
    default:
      goto switchD_0248f070_caseD_3;
    case 4:
      fStack00000000000000c4 = fVar85 - fVar53;
      if ((char)unaff_x19[0x1d] != '\0') {
        fStack00000000000000c4 = fVar85;
      }
      break;
    case 8:
      goto switchD_0248f070_caseD_8;
    }
LAB_0248f194:
    uStack00000000000000b8 = 0;
  }
  else if (uVar49 == 0x10) {
switchD_0248f070_caseD_8:
    if (uVar41 < 0xad) {
      if ((uVar41 != 3) && (uVar41 != 10)) goto LAB_0248f0c8;
    }
    else if ((uVar41 != 0xad) && ((uVar41 != 0x200b && (uVar41 != 0x2060)))) {
LAB_0248f0c8:
      if (*(uint *)(lVar22 + 0x18) <= uVar4)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar6 = *(undefined2 *)(lVar22 + (long)(int)uVar4 * 0x178 + 0x20);
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar27 = FUN_016f9f84(uVar6,0);
      if ((uVar27 & 1) == 0) {
        bVar16 = (int)uVar19 < (int)unaff_x19[0x94];
      }
      else {
        bVar16 = false;
      }
      if ((fVar53 <= fVar58) && (!bVar16 && (uVar49 >> 4 & 1) == 0)) {
        fStack00000000000000c4 = fVar64;
        if ((char)unaff_x19[0x1d] != '\0') {
          fStack00000000000000c4 = fVar85;
        }
        goto LAB_0248f194;
      }
      if (((uVar17 == 1) || (uVar19 != uVar36)) || (uVar90 == *(uint *)((long)unaff_x19 + 0x31c))) {
        fStack00000000000000c4 = fVar64;
        if ((char)unaff_x19[0x1d] != '\0') {
          fStack00000000000000c4 = fVar85;
        }
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uStack0000000000000024 = FUN_016fa418(uVar41,0);
        uStack00000000000000b8 = 0;
      }
      else {
        cVar32 = (char)unaff_x19[0x1d];
        fVar64 = -fVar53;
        if (cVar32 != '\0') {
          fVar64 = fVar53;
        }
        if (*(uint *)(lVar22 + 0x18) <= uVar4)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fVar53 = 1.0;
        iVar21 = (int)*(char *)(lVar22 + (long)(int)uVar4 * 0x178 + 0x194) +
                 (-iVar5 - (uStack0000000000000024 & 1)) + iVar21 + -1;
        if (0 < iVar21) {
          fVar53 = *(float *)((long)unaff_x19 + 0x2d4);
        }
        if (iVar21 < 1) {
          iVar21 = 1;
        }
        if (uVar41 == 9) {
LAB_02490fe0:
          fVar53 = 1.0 - fVar53;
        }
        else {
          if (uVar41 != 0xa0) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar27 = FUN_016fa418(uVar41,0);
            cVar32 = (char)unaff_x19[0x1d];
            if ((uVar27 & 1) != 0) goto LAB_02490fe0;
          }
          iVar21 = (iVar5 - (~uStack0000000000000024 & 1)) + iVar20;
        }
        fVar53 = ((fVar58 + fVar64) * fVar53) / (float)iVar21;
        if (cVar32 == '\0') {
          fStack00000000000000c4 = fStack00000000000000c4 + fVar53;
          uStack00000000000000b8 =
               CONCAT44((float)((ulong)uStack00000000000000b8 >> 0x20) + 0.0,
                        (float)uStack00000000000000b8 + 0.0);
        }
        else {
          fStack00000000000000c4 = fStack00000000000000c4 - fVar53;
        }
      }
    }
  }
  else if (uVar49 == 0x20) {
    fVar53 = fVar73 + fVar84;
    goto LAB_0248f124;
  }
switchD_0248f070_caseD_3:
  uVar49 = (uint)*(undefined8 *)(lVar22 + 0x18);
  if (uVar49 <= uVar90)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar23 = lVar22 + lVar48 * 0x178;
  fVar64 = fStack0000000000000090 + fStack00000000000000c4;
  fVar53 = (float)uStack0000000000000088 + (float)uStack00000000000000b8;
  fVar58 = (float)((ulong)uStack0000000000000088 >> 0x20) +
           (float)((ulong)uStack00000000000000b8 >> 0x20);
  plVar47 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(char *)(lVar23 + 0x194) == '\0') goto LAB_0248fabc;
  iVar20 = *(int *)(lVar22 + lVar48 * 0x178 + 0x2c);
  if (iVar20 != 0) goto LAB_0248f808;
  fVar54 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)uVar19,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
  case 0:
    lVar35 = lVar22 + lVar48 * 0x178;
    *(undefined4 *)(lVar35 + 0x84) = 0;
    *(undefined4 *)(lVar35 + 0xac) = 0;
    *(undefined4 *)(lVar35 + 0xd4) = 0x3f800000;
    fVar54 = 1.0;
    break;
  case 1:
    fVar71 = *(float *)(lVar22 + lVar48 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
      lVar35 = lVar22 + lVar48 * 0x178;
      fVar84 = (fStack00000000000000c4 + fVar71) - *(float *)((long)unaff_x19 + 0x4d4);
      fVar71 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4d4);
      goto LAB_0248f2dc;
    }
    lVar35 = lVar22 + lVar48 * 0x178;
    fVar84 = fVar84 - fVar73;
    *(float *)(lVar35 + 0x84) = fVar54 + (fVar71 - fVar73) / fVar84;
    *(float *)(lVar35 + 0xac) = fVar54 + (*(float *)(lVar35 + 0x98) - fVar73) / fVar84;
    *(float *)(lVar35 + 0xd4) = fVar54 + (*(float *)(lVar35 + 0xc0) - fVar73) / fVar84;
    fVar54 = fVar54 + (*(float *)(lVar35 + 0xe8) - fVar73) / fVar84;
    break;
  case 2:
    lVar35 = lVar22 + lVar48 * 0x178;
    fVar71 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4d4);
    fVar84 = (fStack00000000000000c4 + *(float *)(lVar35 + 0x70)) -
             *(float *)((long)unaff_x19 + 0x4d4);
LAB_0248f2dc:
    *(float *)(lVar35 + 0x84) = fVar54 + fVar84 / fVar71;
    *(float *)(lVar35 + 0xac) =
         fVar54 + ((fStack00000000000000c4 + *(float *)(lVar35 + 0x98)) -
                  *(float *)((long)unaff_x19 + 0x4d4)) /
                  (*(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4d4));
    *(float *)(lVar35 + 0xd4) =
         fVar54 + ((fStack00000000000000c4 + *(float *)(lVar35 + 0xc0)) -
                  *(float *)((long)unaff_x19 + 0x4d4)) /
                  (*(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4d4));
    fVar54 = fVar54 + ((fStack00000000000000c4 + *(float *)(lVar35 + 0xe8)) -
                      *(float *)((long)unaff_x19 + 0x4d4)) /
                      (*(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4d4));
    break;
  case 3:
    switch((int)unaff_x19[0x61]) {
    case 0:
      lVar35 = lVar22 + lVar48 * 0x178;
      *(undefined4 *)(lVar35 + 0x88) = 0;
      *(undefined4 *)(lVar35 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar35 + 0xd8) = 0;
      *(undefined4 *)(lVar35 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar35 = lVar22 + lVar48 * 0x178;
      fVar71 = fVar71 - fVar91;
      fVar84 = fVar54 + (*(float *)(lVar35 + 0x74) - fVar91) / fVar71;
      fVar71 = fVar54 + (*(float *)(lVar35 + 0x9c) - fVar91) / fVar71;
      *(float *)(lVar35 + 0x88) = fVar84;
      *(float *)(lVar35 + 0xb0) = fVar71;
      *(float *)(lVar35 + 0xd8) = fVar84;
      *(float *)(lVar35 + 0x100) = fVar71;
      break;
    case 2:
      lVar35 = lVar22 + lVar48 * 0x178;
      fVar84 = fVar54 + (*(float *)(lVar35 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                        (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
      *(float *)(lVar35 + 0x88) = fVar84;
      fVar71 = *(float *)(unaff_x19 + 0x9b);
      fVar91 = *(float *)(unaff_x19 + 0x9c);
      *(float *)(lVar35 + 0xd8) = fVar84;
      fVar84 = fVar54 + (*(float *)(lVar35 + 0x9c) - fVar71) / (fVar91 - fVar71);
      *(float *)(lVar35 + 0xb0) = fVar84;
      *(float *)(lVar35 + 0x100) = fVar84;
      break;
    case 3:
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
      uVar49 = (uint)*(undefined8 *)(lVar22 + 0x18);
    }
    if (uVar49 <= uVar90)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar35 = lVar22 + lVar48 * 0x178;
    fVar84 = *(float *)(lVar35 + 0x15c);
    fVar71 = (1.0 - (*(float *)(lVar35 + 0x88) + *(float *)(lVar35 + 0xb0)) * fVar84) * 0.5;
    fVar91 = fVar54 + *(float *)(lVar35 + 0x88) * fVar84 + fVar71;
    fVar54 = fVar54 + fVar71 + *(float *)(lVar35 + 0xb0) * fVar84;
    *(float *)(lVar35 + 0x84) = fVar91;
    *(float *)(lVar35 + 0xac) = fVar91;
    *(float *)(lVar35 + 0xd4) = fVar54;
    break;
  default:
    goto switchD_0248f240_default;
  }
  *(float *)(lVar22 + lVar48 * 0x178 + 0xfc) = fVar54;
switchD_0248f240_default:
  switch((int)unaff_x19[0x61]) {
  case 0:
    if (uVar49 <= uVar90)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar35 = lVar22 + lVar48 * 0x178;
    *(undefined4 *)(lVar35 + 0x88) = 0;
    *(undefined4 *)(lVar35 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar35 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar35 + 0x100) = 0;
    break;
  case 1:
    if (uVar90 < uVar49) {
      lVar35 = lVar22 + lVar48 * 0x178;
      fVar87 = fVar87 - fVar70;
      fVar54 = (*(float *)(lVar35 + 0x74) - fVar70) / fVar87;
      fVar87 = (*(float *)(lVar35 + 0x9c) - fVar70) / fVar87;
      *(float *)(lVar35 + 0x88) = fVar54;
      goto LAB_0248f644;
    }
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  case 2:
    if (uVar49 <= uVar90)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar35 = lVar22 + lVar48 * 0x178;
    fVar54 = (*(float *)(lVar35 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
             (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
    *(float *)(lVar35 + 0x88) = fVar54;
    fVar87 = (*(float *)(lVar35 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
             (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
LAB_0248f644:
    *(float *)(lVar35 + 0xb0) = fVar87;
    *(float *)(lVar35 + 0xd8) = fVar87;
    *(float *)(lVar35 + 0x100) = fVar54;
    break;
  case 3:
    if (uVar49 <= uVar90)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar35 = lVar22 + lVar48 * 0x178;
    fVar87 = *(float *)(lVar35 + 0x15c);
    fVar84 = (1.0 - (*(float *)(lVar35 + 0x84) + *(float *)(lVar35 + 0xd4)) / fVar87) * 0.5;
    fVar54 = *(float *)(lVar35 + 0x84) / fVar87 + fVar84;
    fVar84 = fVar84 + *(float *)(lVar35 + 0xd4) / fVar87;
    *(float *)(lVar35 + 0x88) = fVar54;
    *(float *)(lVar35 + 0xb0) = fVar84;
    *(float *)(lVar35 + 0x100) = fVar54;
    *(float *)(lVar35 + 0xd8) = fVar84;
  }
  if (uVar49 <= uVar90)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar35 = lVar22 + lVar48 * 0x178;
  fVar54 = ABS(fVar50) * *(float *)(lVar35 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
  if ((*(char *)(lVar35 + 0x5c) == '\0') && ((*(byte *)(lVar22 + lVar48 * 0x178 + 400) & 1) != 0)) {
    fVar54 = -fVar54;
  }
  lVar35 = lVar22 + lVar48 * 0x178;
  fVar87 = *(float *)(lVar35 + 0x88);
  fVar71 = *(float *)(lVar35 + 0x84);
  fVar84 = -2.1474836e+09;
  if (fVar71 != INFINITY) {
    fVar84 = (float)(int)fVar71;
  }
  fVar91 = *(float *)(lVar35 + 0xd4);
  fVar73 = *(float *)(lVar35 + 0xd8);
  fVar70 = -2.1474836e+09;
  if (fVar87 != INFINITY) {
    fVar70 = (float)(int)fVar87;
  }
  uVar86 = FUN_024e0374(fVar71 - fVar84,fVar87 - fVar70);
  *(undefined4 *)(lVar35 + 0x84) = uVar86;
  if (*(uint *)(lVar22 + 0x18) <= uVar90)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  fVar73 = fVar73 - fVar70;
  *(float *)(lVar35 + 0x88) = fVar54;
  uVar86 = FUN_024e0374(fVar71 - fVar84,fVar73);
  *(undefined4 *)(lVar22 + lVar48 * 0x178 + 0xac) = uVar86;
  if (*(uint *)(lVar22 + 0x18) <= uVar90)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  fVar91 = fVar91 - fVar84;
  *(float *)(lVar22 + lVar48 * 0x178 + 0xb0) = fVar54;
  fVar84 = (float)FUN_024e0374(fVar91,fVar73);
  *(float *)(lVar35 + 0xd4) = fVar84;
  if (*(uint *)(lVar22 + 0x18) <= uVar90)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar35 + 0xd8) = fVar54;
  uVar86 = FUN_024e0374(fVar91,fVar87 - fVar70);
  *(undefined4 *)(lVar22 + lVar48 * 0x178 + 0xfc) = uVar86;
  uVar49 = (uint)*(undefined8 *)(lVar22 + 0x18);
  if (uVar49 <= uVar90)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar22 + lVar48 * 0x178 + 0x100) = fVar54;
LAB_0248f808:
  if (((int)uVar90 < (int)unaff_x19[100]) &&
     (iStack00000000000000a4 < *(int *)((long)unaff_x19 + 0x324))) {
    if (((int)uVar19 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] != 5)) {
      if (uVar49 <= uVar90)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar23 = lVar22 + lVar48 * 0x178;
      *(ulong *)(lVar23 + 0x70) =
           CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar23 + 0x70) >> 0x20),
                    fVar64 + (float)*(undefined8 *)(lVar23 + 0x70));
      *(float *)(lVar23 + 0x78) = fVar58 + *(float *)(lVar23 + 0x78);
      plVar47 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      if (*(uint *)(lVar22 + 0x18) <= uVar90)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar23 = lVar22 + lVar48 * 0x178;
      *(ulong *)(lVar23 + 0x98) =
           CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar23 + 0x98) >> 0x20),
                    fVar64 + (float)*(undefined8 *)(lVar23 + 0x98));
      *(float *)(lVar23 + 0xa0) = fVar58 + *(float *)(lVar23 + 0xa0);
      uVar49 = *(uint *)(lVar22 + 0x18);
LAB_0248fa4c:
      if (uVar49 <= uVar90)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar23 = lVar22 + lVar48 * 0x178;
      *(ulong *)(lVar23 + 0xc0) =
           CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar23 + 0xc0) >> 0x20),
                    fVar64 + (float)*(undefined8 *)(lVar23 + 0xc0));
      *(float *)(lVar23 + 200) = fVar58 + *(float *)(lVar23 + 200);
      if (*(uint *)(lVar22 + 0x18) <= uVar90)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar23 = lVar22 + lVar48 * 0x178;
      *(ulong *)(lVar23 + 0xe8) =
           CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar23 + 0xe8) >> 0x20),
                    fVar64 + (float)*(undefined8 *)(lVar23 + 0xe8));
      *(float *)(lVar23 + 0xf0) = fVar58 + *(float *)(lVar23 + 0xf0);
      if (iVar20 != 0) goto LAB_0248f9d0;
LAB_0248fa9c:
      pcVar40 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0248faa8:
      (*pcVar40)();
      goto LAB_0248fabc;
    }
    if (((int)uVar19 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] == 5)) {
      if (uVar90 < uVar49) {
        if (*(uint *)(lVar22 + lVar48 * 0x178 + 0x68) != uVar3) goto LAB_0248f8d8;
        lVar23 = lVar22 + lVar48 * 0x178;
        *(ulong *)(lVar23 + 0x70) =
             CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar23 + 0x70) >> 0x20),
                      fVar64 + (float)*(undefined8 *)(lVar23 + 0x70));
        *(float *)(lVar23 + 0x78) = fVar58 + *(float *)(lVar23 + 0x78);
        if (uVar90 < *(uint *)(lVar22 + 0x18)) {
          lVar23 = lVar22 + lVar48 * 0x178;
          *(ulong *)(lVar23 + 0x98) =
               CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar23 + 0x98) >> 0x20),
                        fVar64 + (float)*(undefined8 *)(lVar23 + 0x98));
          *(float *)(lVar23 + 0xa0) = fVar58 + *(float *)(lVar23 + 0xa0);
          uVar49 = *(uint *)(lVar22 + 0x18);
          plVar47 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
          goto LAB_0248fa4c;
        }
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    }
  }
LAB_0248f8d8:
  if (uVar49 <= uVar90)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if (DAT_03774d76 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03774d76 = '\x01';
  }
  puVar12 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  lVar35 = lVar22 + lVar48 * 0x178;
  uVar86 = *(undefined4 *)
            (*(undefined8 **)
              (*(long *)
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
              0xb8) + 1);
  *(undefined8 *)(lVar35 + 0x70) =
       **(undefined8 **)
         (*(long *)Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
         0xb8);
  *(undefined4 *)(lVar35 + 0x78) = uVar86;
  plVar47 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(uint *)(lVar22 + 0x18) <= uVar90)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar35 = lVar22 + lVar48 * 0x178;
  uVar86 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar12 + 0xb8) + 1);
  *(undefined8 *)(lVar35 + 0x98) = **(undefined8 **)(*(long *)puVar12 + 0xb8);
  *(undefined4 *)(lVar35 + 0xa0) = uVar86;
  if (*(uint *)(lVar22 + 0x18) <= uVar90)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar35 = lVar22 + lVar48 * 0x178;
  uVar86 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar12 + 0xb8) + 1);
  *(undefined8 *)(lVar35 + 0xc0) = **(undefined8 **)(*(long *)puVar12 + 0xb8);
  *(undefined4 *)(lVar35 + 200) = uVar86;
  if (*(uint *)(lVar22 + 0x18) <= uVar90)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar35 = lVar22 + lVar48 * 0x178;
  uVar86 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar12 + 0xb8) + 1);
  *(undefined8 *)(lVar35 + 0xe8) = **(undefined8 **)(*(long *)puVar12 + 0xb8);
  *(undefined4 *)(lVar35 + 0xf0) = uVar86;
  if (*(uint *)(lVar22 + 0x18) <= uVar90)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(undefined1 *)(lVar23 + 0x194) = 0;
  if (iVar20 == 0) goto LAB_0248fa9c;
LAB_0248f9d0:
  if (iVar20 == 1) {
    pcVar40 = *(code **)(*unaff_x19 + 0x8f8);
    goto LAB_0248faa8;
  }
LAB_0248fabc:
  if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0)) goto LAB_02491464;
  if (*(uint *)(lVar23 + 0x18) <= uVar90)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar23 = lVar23 + lVar48 * 0x178;
  uVar30 = *(undefined8 *)(lVar23 + 0x11c);
  *(undefined8 *)(lVar23 + 0x11c) =
       CONCAT44(fVar53 + (float)((ulong)uVar30 >> 0x20),fVar64 + (float)uVar30);
  *(float *)(lVar23 + 0x124) = fVar58 + *(float *)(lVar23 + 0x124);
  if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0)) goto LAB_02491464;
  if (*(uint *)(lVar23 + 0x18) <= uVar90)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar23 = lVar23 + lVar48 * 0x178;
  *(ulong *)(lVar23 + 0x110) =
       CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar23 + 0x110) >> 0x20),
                fVar64 + (float)*(undefined8 *)(lVar23 + 0x110));
  *(float *)(lVar23 + 0x118) = fVar58 + *(float *)(lVar23 + 0x118);
  if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0)) goto LAB_02491464;
  if (*(uint *)(lVar23 + 0x18) <= uVar90)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar23 = lVar23 + lVar48 * 0x178;
  *(ulong *)(lVar23 + 0x128) =
       CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar23 + 0x128) >> 0x20),
                fVar64 + (float)*(undefined8 *)(lVar23 + 0x128));
  *(float *)(lVar23 + 0x130) = fVar58 + *(float *)(lVar23 + 0x130);
  if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0)) goto LAB_02491464;
  if (*(uint *)(lVar23 + 0x18) <= uVar90)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar23 = lVar23 + lVar48 * 0x178;
  *(float *)(lVar23 + 0x134) = fVar64 + *(float *)(lVar23 + 0x134);
  *(ulong *)(lVar23 + 0x138) =
       CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar23 + 0x138) >> 0x20),
                fVar53 + (float)*(undefined8 *)(lVar23 + 0x138));
  lVar23 = *plVar2;
  if ((lVar23 == 0) || (lVar35 = *(long *)(lVar23 + 0x38), lVar35 == 0)) goto LAB_02491464;
  uVar49 = *(uint *)(lVar35 + 0x18);
  if (uVar49 <= uVar90)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar44 = lVar35 + lVar48 * 0x178;
  *(ulong *)(lVar44 + 0x140) =
       CONCAT44(fVar64 + (float)((ulong)*(undefined8 *)(lVar44 + 0x140) >> 0x20),
                fVar64 + (float)*(undefined8 *)(lVar44 + 0x140));
  *(ulong *)(lVar44 + 0x148) =
       CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar44 + 0x148) >> 0x20),
                fVar53 + (float)*(undefined8 *)(lVar44 + 0x148));
  *(float *)(lVar44 + 0x150) = fVar53 + *(float *)(lVar44 + 0x150);
  if (uVar19 == uVar36) {
    uVar36 = *puVar1 - 1;
    if (uVar90 == uVar36) goto LAB_0248fccc;
  }
  else {
    lVar23 = *(long *)(lVar23 + 0x50);
    if (lVar23 == 0) goto LAB_02491464;
    if (*(uint *)(lVar23 + 0x18) <= uVar36)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar44 = (long)(int)uVar36;
    lVar46 = lVar23 + lVar44 * 0x5c;
    fVar84 = fVar53 + *(float *)(lVar46 + 0x54);
    *(ulong *)(lVar46 + 0x4c) =
         CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar46 + 0x4c) >> 0x20),
                  fVar53 + (float)*(undefined8 *)(lVar46 + 0x4c));
    *(float *)(lVar46 + 0x54) = fVar84;
    *(float *)(lVar46 + 0x58) = fVar64 + *(float *)(lVar46 + 0x58);
    if (uVar49 <= *(uint *)(lVar46 + 0x34))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    uVar86 = *(undefined4 *)(lVar35 + (long)(int)*(uint *)(lVar46 + 0x34) * 0x178 + 0x11c);
    lVar23 = lVar23 + lVar44 * 0x5c;
    *(float *)(lVar23 + 0x70) = fVar84;
    *(undefined4 *)(lVar23 + 0x6c) = uVar86;
    lVar23 = *plVar2;
    if ((lVar23 == 0) || (lVar35 = *(long *)(lVar23 + 0x50), lVar35 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar35 + 0x18) <= uVar36)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar23 = *(long *)(lVar23 + 0x38);
    if (lVar23 == 0) goto LAB_02491464;
    uVar36 = *(uint *)(lVar35 + lVar44 * 0x5c + 0x40);
    if (*(uint *)(lVar23 + 0x18) <= uVar36)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar35 = lVar35 + lVar44 * 0x5c;
    *(undefined4 *)(lVar35 + 0x74) = *(undefined4 *)(lVar23 + (long)(int)uVar36 * 0x178 + 0x128);
    *(undefined4 *)(lVar35 + 0x78) = *(undefined4 *)(lVar35 + 0x4c);
    uVar36 = *puVar1 - 1;
LAB_0248fccc:
    if (uVar90 == uVar36) {
      lVar23 = *plVar2;
      if ((lVar23 == 0) || (lVar35 = *(long *)(lVar23 + 0x50), lVar35 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar35 + 0x18) <= uVar19)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar44 = lVar35 + lVar26 * 0x5c;
      fVar84 = fVar53 + *(float *)(lVar44 + 0x54);
      *(ulong *)(lVar44 + 0x4c) =
           CONCAT44(fVar53 + (float)((ulong)*(undefined8 *)(lVar44 + 0x4c) >> 0x20),
                    fVar53 + (float)*(undefined8 *)(lVar44 + 0x4c));
      *(float *)(lVar44 + 0x54) = fVar84;
      *(float *)(lVar44 + 0x58) = fVar64 + *(float *)(lVar44 + 0x58);
      lVar23 = *(long *)(lVar23 + 0x38);
      if (lVar23 == 0) goto LAB_02491464;
      if (*(uint *)(lVar23 + 0x18) <= *(uint *)(lVar44 + 0x34))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar86 = *(undefined4 *)(lVar23 + (long)(int)*(uint *)(lVar44 + 0x34) * 0x178 + 0x11c);
      lVar35 = lVar35 + lVar26 * 0x5c;
      *(float *)(lVar35 + 0x70) = fVar84;
      *(undefined4 *)(lVar35 + 0x6c) = uVar86;
      lVar23 = *plVar2;
      if ((lVar23 == 0) || (lVar35 = *(long *)(lVar23 + 0x50), lVar35 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar35 + 0x18) <= uVar19)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar23 = *(long *)(lVar23 + 0x38);
      if (lVar23 == 0) goto LAB_02491464;
      uVar36 = *(uint *)(lVar35 + lVar26 * 0x5c + 0x40);
      if (*(uint *)(lVar23 + 0x18) <= uVar36)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar35 = lVar35 + lVar26 * 0x5c;
      *(undefined4 *)(lVar35 + 0x74) = *(undefined4 *)(lVar23 + (long)(int)uVar36 * 0x178 + 0x128);
      *(undefined4 *)(lVar35 + 0x78) = *(undefined4 *)(lVar35 + 0x4c);
    }
  }
  if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar27 = FUN_016f9468(uVar41,0);
  if (((((uVar27 & 1) == 0) && (1 < uVar41 - 0x2010)) && (uVar41 != 0xad)) && (uVar41 != 0x2d)) {
    if (bVar10) {
      if (((uVar17 != 1) && ((int)uVar90 < (int)(*(uint *)(lVar22 + 0x18) - 1))) &&
         (((int)uVar90 < (int)*puVar1 && ((uVar41 == 0x2019 || (uVar41 == 0x27)))))) {
        if (*(uint *)(lVar22 + 0x18) <= uVar17 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        uVar6 = *(undefined2 *)(lVar22 + lStack0000000000000128 + -0x438);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar27 = FUN_016f9468(uVar6,0);
        if ((uVar27 & 1) != 0) {
          if (*(uint *)(lVar22 + 0x18) <= uVar17)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          uVar6 = *(undefined2 *)(lVar22 + lStack0000000000000128 + -0x148);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar27 = FUN_016f9468(uVar6,0);
          if ((uVar27 & 1) != 0) goto LAB_0248fee0;
        }
      }
    }
    else {
      if (uVar17 != 1) {
LAB_024909a0:
        bVar10 = false;
        goto LAB_0248fee8;
      }
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar27 = FUN_016f93a0(uVar41,0);
      if ((uVar27 & 1) != 0) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar27 = FUN_016f68bc(uVar41,0);
        if (((uVar41 != 0x200b) && ((uVar27 & 1) == 0)) && (*puVar1 != 1)) goto LAB_024909a0;
      }
    }
    if (uVar90 == *puVar1 - 1) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar27 = FUN_016f9468(uVar41,0);
      iVar20 = iVar7;
      if ((uVar27 & 1) == 0) goto LAB_02490204;
    }
    else {
LAB_02490204:
      iVar20 = uVar17 - 2;
    }
    lVar23 = *plVar2;
    if (lVar23 == 0) goto LAB_02491464;
    lVar35 = *(long *)(lVar23 + 0x40);
    if (lVar35 == 0) goto LAB_02491464;
    uVar36 = *(uint *)(lVar23 + 0x24);
    iVar21 = *(int *)(lVar35 + 0x18);
    if (iVar21 < (int)(uVar36 + 1)) {
      if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01147b84((long *)(lVar23 + 0x40),iVar21 + 1,
                   *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
      lVar23 = *plVar2;
      if (lVar23 == 0) goto LAB_02491464;
    }
    lVar35 = *(long *)(lVar23 + 0x40);
    if (lVar35 == 0) goto LAB_02491464;
    if (*(uint *)(lVar35 + 0x18) <= uVar36)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar35 = lVar35 + (long)(int)uVar36 * 0x18;
    *(long **)(lVar35 + 0x20) = unaff_x19;
    *(uint *)(lVar35 + 0x28) = uStack0000000000000114;
    *(int *)(lVar35 + 0x2c) = iVar20;
    *(uint *)(lVar35 + 0x30) = (iVar20 - uStack0000000000000114) + 1;
    lVar35 = *(long *)(lVar23 + 0x50);
    *(int *)(lVar23 + 0x24) = *(int *)(lVar23 + 0x24) + 1;
    if (lVar35 == 0) goto LAB_02491464;
    if (*(uint *)(lVar35 + 0x18) <= uVar19)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar35 = lVar35 + lVar26 * 0x5c;
    bVar10 = false;
    iStack00000000000000a4 = iStack00000000000000a4 + 1;
    *(int *)(lVar35 + 0x30) = *(int *)(lVar35 + 0x30) + 1;
  }
  else {
    if (!bVar10) {
      uStack0000000000000114 = uVar90;
    }
    if (uVar90 == *puVar1 - 1) {
      lVar23 = *plVar2;
      if (lVar23 == 0) goto LAB_02491464;
      lVar35 = *(long *)(lVar23 + 0x40);
      if (lVar35 == 0) goto LAB_02491464;
      uVar36 = *(uint *)(lVar23 + 0x24);
      iVar20 = *(int *)(lVar35 + 0x18);
      if (iVar20 < (int)(uVar36 + 1)) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147b84((long *)(lVar23 + 0x40),iVar20 + 1,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
        lVar23 = *plVar2;
        if (lVar23 == 0) goto LAB_02491464;
      }
      lVar35 = *(long *)(lVar23 + 0x40);
      if (lVar35 == 0) goto LAB_02491464;
      if (*(uint *)(lVar35 + 0x18) <= uVar36)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar35 = lVar35 + (long)(int)uVar36 * 0x18;
      *(long **)(lVar35 + 0x20) = unaff_x19;
      *(uint *)(lVar35 + 0x28) = uStack0000000000000114;
      *(uint *)(lVar35 + 0x2c) = uVar90;
      *(uint *)(lVar35 + 0x30) = uVar17 - uStack0000000000000114;
      lVar35 = *(long *)(lVar23 + 0x50);
      *(int *)(lVar23 + 0x24) = *(int *)(lVar23 + 0x24) + 1;
      if (lVar35 == 0) goto LAB_02491464;
      if (*(uint *)(lVar35 + 0x18) <= uVar19)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar35 = lVar35 + lVar26 * 0x5c;
      iStack00000000000000a4 = iStack00000000000000a4 + 1;
      *(int *)(lVar35 + 0x30) = *(int *)(lVar35 + 0x30) + 1;
    }
LAB_0248fee0:
    bVar10 = true;
  }
LAB_0248fee8:
  if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0)) goto LAB_02491464;
  uVar36 = *(uint *)(lVar23 + 0x18);
  if (uVar36 <= uVar90)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*(byte *)(lVar23 + lVar48 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar14) {
LAB_0248ff18:
      if (uVar36 <= uVar17 - 2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar26 = *unaff_x19;
      uVar86 = *(undefined4 *)(lVar23 + lStack0000000000000128 + -0x330);
      uVar72 = *(undefined4 *)(lVar23 + lStack0000000000000128 + -0x2f8);
LAB_02490474:
      pcVar40 = *(code **)(lVar26 + 0x908);
LAB_0249047c:
      (*pcVar40)(fStack0000000000000054,fStack000000000000004c,uStack0000000000000050,uVar86,
                 fStack00000000000000cc,0,fStack0000000000000058,uVar72);
      puVar12 = System_Threading_Mutex_TypeInfo;
      lVar23 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar23 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar23 = *(long *)puVar12;
      }
LAB_024904cc:
      bVar14 = false;
      fVar51 = 0.0;
      fStack00000000000000cc = *(float *)(*(long *)(lVar23 + 0xb8) + 0x15a8);
      fStack00000000000000c8 = 0.0;
    }
    else {
LAB_024903d8:
      bVar14 = false;
    }
  }
  else {
    lVar23 = lVar23 + lVar48 * 0x178;
    iVar20 = *(int *)(lVar23 + 0x68);
    *(int *)(lVar23 + 0x16c) = iVar18;
    if ((((int)unaff_x19[100] < (int)uVar90) || ((int)unaff_x19[0x65] < (int)uVar19)) ||
       (((int)unaff_x19[0x5b] == 5 && (iVar20 + 1 != (int)unaff_x19[0x66])))) {
      bVar16 = false;
    }
    else {
      bVar16 = true;
    }
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar27 = FUN_016f68bc(uVar41,0);
    if ((uVar41 != 0x200b) && ((uVar27 & 1) == 0)) {
      lVar23 = *plVar2;
      if ((lVar23 == 0) || (lVar26 = *(long *)(lVar23 + 0x38), lVar26 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar26 + 0x18) <= uVar90)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      fVar84 = *(float *)(lVar26 + lVar48 * 0x178 + 0x160);
      if (fVar51 <= fVar84) {
        fVar51 = fVar84;
      }
      if (fStack00000000000000c8 <= ABS(fVar54)) {
        fStack00000000000000c8 = ABS(fVar54);
      }
      if (iVar20 != iStack0000000000000048) {
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar23 = *plVar2;
          if (lVar23 == 0) goto LAB_02491464;
          lVar26 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
        }
        else {
          lVar26 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
        }
        fStack00000000000000cc = *(float *)(lVar26 + 0x15a8);
      }
      lVar23 = *(long *)(lVar23 + 0x38);
      if (lVar23 == 0) goto LAB_02491464;
      if (*(uint *)(lVar23 + 0x18) <= uVar90)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (unaff_x19[0x1e] == 0) goto LAB_02491464;
      fVar87 = *(float *)(lVar23 + lVar48 * 0x178 + 0x14c);
      fVar84 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
      fVar87 = fVar87 + fVar51 * fVar84;
      iStack0000000000000048 = iVar20;
      if (fVar87 <= fStack00000000000000cc) {
        fStack00000000000000cc = fVar87;
      }
    }
    if (!bVar14) {
      bVar14 = false;
      if ((((uVar41 == 0xd) || ((uVar41 | 1) == 0xb)) || ((int)uVar33 < (int)uVar90)) || (!bVar16))
      goto LAB_024904e8;
      if (uVar90 == uVar33) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar27 = FUN_016fa418(uVar41,0);
        if ((uVar27 & 1) != 0) goto LAB_024903d8;
      }
      if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar23 + 0x18) <= uVar90)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar23 = lVar23 + lVar48 * 0x178;
      fStack0000000000000058 = *(float *)(lVar23 + 0x160);
      fStack0000000000000054 = *(float *)(lVar23 + 0x11c);
      bVar14 = fVar51 != 0.0;
      fVar84 = fStack0000000000000058;
      if (bVar14) {
        fVar84 = fVar51;
      }
      fVar51 = fVar84;
      uStack000000000000005c = *(uint *)(lVar23 + 0x168);
      uStack0000000000000050 = 0;
      fVar84 = fVar54;
      if (bVar14) {
        fVar84 = fStack00000000000000c8;
      }
      fStack000000000000004c = fStack00000000000000cc;
      fStack00000000000000c8 = fVar84;
    }
    if (*puVar1 == 1) {
      if ((*plVar2 != 0) && (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 != 0)) {
        if (uVar90 < *(uint *)(lVar23 + 0x18)) {
          lVar23 = lVar23 + lVar48 * 0x178;
          lVar26 = *unaff_x19;
          uVar86 = *(undefined4 *)(lVar23 + 0x128);
          uVar72 = *(undefined4 *)(lVar23 + 0x160);
          goto LAB_02490474;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
    if ((uVar90 == uVar4) || ((int)uVar33 <= (int)uVar90)) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar27 = FUN_016f68bc(uVar41,0);
      if ((*plVar2 != 0) && (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 != 0)) {
        if (uVar41 == 0x200b || (uVar27 & 1) != 0) {
          lVar26 = lVar37;
          if (*(uint *)(lVar23 + 0x18) <= uVar33)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        else {
          lVar26 = lVar48;
          if (*(uint *)(lVar23 + 0x18) <= uVar90)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        lVar23 = lVar23 + lVar26 * 0x178;
        uVar86 = *(undefined4 *)(lVar23 + 0x128);
        uVar72 = *(undefined4 *)(lVar23 + 0x160);
        pcVar40 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_0249047c;
      }
      goto LAB_02491464;
    }
    if (!bVar16) {
      if ((*plVar2 != 0) && (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 != 0)) {
        uVar36 = *(uint *)(lVar23 + 0x18);
        goto LAB_0248ff18;
      }
      goto LAB_02491464;
    }
    if ((int)uVar90 < (int)(*puVar1 - 1)) {
      if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar23 + 0x18) <= uVar17)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar27 = FUN_024a9e4c(uStack000000000000005c,*(undefined4 *)(lVar23 + lStack0000000000000128),
                            0);
      if ((uVar27 & 1) == 0) {
        if ((*plVar2 != 0) && (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 != 0)) {
          if (uVar90 < *(uint *)(lVar23 + 0x18)) {
            lVar23 = lVar23 + lVar48 * 0x178;
            (**(code **)(*unaff_x19 + 0x908))
                      (fStack0000000000000054,fStack000000000000004c,uStack0000000000000050,
                       *(undefined4 *)(lVar23 + 0x128),fStack00000000000000cc,0,
                       fStack0000000000000058,*(undefined4 *)(lVar23 + 0x160));
            puVar12 = System_Threading_Mutex_TypeInfo;
            lVar23 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar23 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar23 = *(long *)puVar12;
            }
            goto LAB_024904cc;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        goto LAB_02491464;
      }
    }
    bVar14 = true;
  }
LAB_024904e8:
  if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0)) goto LAB_02491464;
  if (*(uint *)(lVar23 + 0x18) <= uVar90)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if (lVar45 == 0) goto LAB_02491464;
  uVar36 = *(uint *)(lVar23 + lVar48 * 0x178 + 400);
  fVar84 = (float)FUN_026fd1f0(lVar45 + 0x50,0);
  if ((uVar36 >> 6 & 1) == 0) {
    if (bVar9) {
      if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar23 + 0x18) <= uVar17 - 2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar86 = *(undefined4 *)(lVar23 + lStack0000000000000128 + -0x330);
      pcVar40 = *(code **)(*unaff_x19 + 0x908);
      fVar53 = in_stack_00000080._4_4_ * fVar84 +
               *(float *)(lVar23 + lStack0000000000000128 + -0x30c);
LAB_02490a68:
      (*pcVar40)(fStack000000000000007c,fStack000000000000006c,uVar89,uVar86,fVar53,0,
                 in_stack_00000080._4_4_,in_stack_00000080._4_4_);
    }
LAB_02490a9c:
    bVar9 = false;
  }
  else {
    lVar23 = *plVar2;
    if ((lVar23 == 0) || (lVar26 = *(long *)(lVar23 + 0x38), lVar26 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar26 + 0x18) <= uVar90)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(int *)(lVar26 + lVar48 * 0x178 + 0x174) = iVar18;
    if ((((int)unaff_x19[100] < (int)uVar90) || ((int)unaff_x19[0x65] < (int)uVar19)) ||
       (((int)unaff_x19[0x5b] == 5 &&
        (*(int *)(lVar26 + lVar48 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
      bVar16 = false;
    }
    else {
      bVar16 = true;
    }
    if ((((uVar41 == 0xd) || ((uVar41 | 1) == 0xb)) || ((int)uVar33 < (int)uVar90)) ||
       (bVar9 || !bVar16)) {
LAB_02490668:
      if (!bVar9) goto LAB_02490a9c;
    }
    else {
      if (uVar90 == uVar33) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar27 = FUN_016fa418(uVar41,0);
        if ((uVar27 & 1) != 0) goto LAB_02490668;
        lVar23 = *plVar2;
        if (lVar23 == 0) goto LAB_02491464;
      }
      lVar23 = *(long *)(lVar23 + 0x38);
      if (lVar23 == 0) goto LAB_02491464;
      if (*(uint *)(lVar23 + 0x18) <= uVar90)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar23 = lVar23 + lVar48 * 0x178;
      fVar55 = *(float *)(lVar23 + 0x60);
      in_stack_00000080._4_4_ = *(float *)(lVar23 + 0x160);
      fStack0000000000000034 = *(float *)(lVar23 + 0x14c);
      fStack000000000000007c = *(float *)(lVar23 + 0x11c);
      fStack000000000000006c = fVar84 * in_stack_00000080._4_4_ + fStack0000000000000034;
      uVar89 = 0;
    }
    uVar36 = *puVar1;
    if (uVar36 == 1) {
      if (*plVar2 != 0) {
        lVar23 = *(long *)(*plVar2 + 0x38);
joined_r0x024907c8:
        if (lVar23 != 0) {
          if (uVar90 < *(uint *)(lVar23 + 0x18)) {
            lVar23 = lVar23 + lVar48 * 0x178;
            lVar37 = *unaff_x19;
            uVar86 = *(undefined4 *)(lVar23 + 0x128);
            fVar53 = *(float *)(lVar23 + 0x14c);
LAB_024907e8:
            pcVar40 = *(code **)(lVar37 + 0x908);
LAB_02490a64:
            fVar53 = fVar84 * in_stack_00000080._4_4_ + fVar53;
            goto LAB_02490a68;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
      }
      goto LAB_02491464;
    }
    if (uVar90 == uVar4) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar27 = FUN_016f68bc(uVar41,0);
      if ((*plVar2 != 0) && (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 != 0)) {
        uVar36 = *(uint *)(lVar23 + 0x18);
        if (uVar41 == 0x200b || (uVar27 & 1) != 0) {
          if (uVar36 <= uVar33)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        else {
LAB_02490a40:
          lVar37 = lVar48;
          if (uVar36 <= uVar90)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
LAB_02490a48:
        lVar23 = lVar23 + lVar37 * 0x178;
        fVar53 = *(float *)(lVar23 + 0x14c);
        uVar86 = *(undefined4 *)(lVar23 + 0x128);
        pcVar40 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_02490a64;
      }
      goto LAB_02491464;
    }
    if ((int)uVar90 < (int)uVar36) {
      lVar23 = *plVar2;
      if ((lVar23 != 0) && (lVar26 = *(long *)(lVar23 + 0x38), lVar26 != 0)) {
        if (uVar17 < *(uint *)(lVar26 + 0x18)) {
          if (*(float *)(lVar26 + lStack0000000000000128 + -0x108) == fVar55) {
            fVar87 = *(float *)(lVar26 + lStack0000000000000128 + -0x1c);
            if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar27 = FUN_024aa280(fVar53 + fVar87,fStack0000000000000034,0);
            if ((uVar27 & 1) != 0) {
              uVar36 = *puVar1;
              goto LAB_024908ec;
            }
            lVar23 = *plVar2;
            if (lVar23 == 0) goto LAB_02491464;
          }
          lVar23 = *(long *)(lVar23 + 0x38);
          if (lVar23 != 0) {
            uVar36 = *(uint *)(lVar23 + 0x18);
            if ((int)uVar90 <= (int)uVar33) goto LAB_02490a40;
            if (uVar33 < uVar36) goto LAB_02490a48;
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          }
          goto LAB_02491464;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
LAB_024908ec:
    if ((int)uVar90 < (int)uVar36) {
      iVar20 = FUN_02681c0c(lVar45,0);
      if (*(uint *)(lVar22 + 0x18) <= uVar17)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar23 = *(long *)(lVar22 + lStack0000000000000128 + -0x130);
      if (lVar23 == 0) goto LAB_02491464;
      iVar21 = FUN_02681c0c(lVar23,0);
      if (iVar20 != iVar21) {
        if (*plVar2 != 0) {
          lVar23 = *(long *)(*plVar2 + 0x38);
          goto joined_r0x024907c8;
        }
        goto LAB_02491464;
      }
    }
    if (!bVar16) {
      if ((*plVar2 != 0) && (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 != 0)) {
        if (uVar17 - 2 < *(uint *)(lVar23 + 0x18)) {
          lVar37 = *unaff_x19;
          uVar86 = *(undefined4 *)(lVar23 + lStack0000000000000128 + -0x330);
          fVar53 = *(float *)(lVar23 + lStack0000000000000128 + -0x30c);
          goto LAB_024907e8;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
    bVar9 = true;
  }
  if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0)) goto LAB_02491464;
  uVar36 = (uint)*(undefined8 *)(lVar23 + 0x18);
  if (uVar36 <= uVar90)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*(byte *)(lVar23 + lVar48 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar15) {
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,fVar52,
                 fStack00000000000000a0,uStack0000000000000094);
    }
LAB_02490b04:
    bVar15 = false;
  }
  else {
    if ((((int)unaff_x19[100] < (int)uVar90) || ((int)unaff_x19[0x65] < (int)uVar19)) ||
       (((int)unaff_x19[0x5b] == 5 &&
        (*(int *)(lVar23 + lVar48 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
      bVar16 = false;
    }
    else {
      bVar16 = true;
    }
    if (!bVar15) {
      if ((((uVar41 == 0xd) || ((uVar41 | 1) == 0xb)) || ((int)uVar33 < (int)uVar90)) || (!bVar16))
      goto LAB_02490b04;
      if (uVar90 == uVar33) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar27 = FUN_016fa418(uVar41,0);
        if ((uVar27 & 1) != 0) goto LAB_02490b04;
      }
      puVar12 = System_Threading_Mutex_TypeInfo;
      lVar37 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar37 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar37 = *(long *)puVar12;
      }
      if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0)) goto LAB_02491464;
      uVar36 = (uint)*(undefined8 *)(lVar23 + 0x18);
      if (uVar36 <= uVar90)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar37 = *(long *)(lVar37 + 0xb8);
      lVar26 = lVar23 + lVar48 * 0x178;
      in_stack_00001798 = *(undefined8 *)(lVar26 + 0x184);
      in_stack_00001790 = *(undefined8 *)(lVar26 + 0x17c);
      fStack00000000000000a8 = *(float *)(lVar37 + 0x1598);
      in_stack_000017a0 = *(float *)(lVar26 + 0x18c);
      fStack00000000000000ac = *(float *)(lVar37 + 0x159c);
      fVar52 = *(float *)(lVar37 + 0x15a0);
      fStack00000000000000a0 = *(float *)(lVar37 + 0x15a4);
      uStack0000000000000094 = 0;
    }
    if (uVar36 <= uVar90)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar23 = lVar23 + lVar48 * 0x178;
    fVar84 = *(float *)(lVar23 + 0x128);
    fVar70 = *(float *)(lVar23 + 0x188);
    uVar24 = *(undefined8 *)(lVar23 + 0x17c);
    fVar73 = *(float *)(lVar23 + 0x184);
    uVar30 = *(undefined8 *)(lVar23 + 0x184);
    fVar91 = *(float *)(lVar23 + 0x18c);
    fVar53 = *(float *)(lVar23 + 0x11c);
    fVar87 = *(float *)(lVar23 + 0x148);
    fVar71 = *(float *)(lVar23 + 0x150);
    in_stack_00000158 = uVar24;
    fStack0000000000000160 = fVar73;
    fStack0000000000000164 = fVar70;
    in_stack_00000168 = fVar91;
    in_stack_00000170 = in_stack_00001790;
    in_stack_00000178 = in_stack_00001798;
    in_stack_00000180 = in_stack_000017a0;
    uVar27 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
    lVar23 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
    if ((uVar27 & 1) == 0) {
      if (*(int *)(lVar23 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar23);
      }
      fVar84 = fVar84 + (float)in_stack_00001798;
      fVar53 = fVar53 - (float)((ulong)in_stack_00001790 >> 0x20);
      fVar87 = fVar87 + (float)((ulong)in_stack_00001798 >> 0x20);
      if (fVar53 <= fStack00000000000000a8) {
        fStack00000000000000a8 = fVar53;
      }
      if (fVar71 - in_stack_000017a0 <= fStack00000000000000ac) {
        fStack00000000000000ac = fVar71 - in_stack_000017a0;
      }
      if (fVar52 <= fVar84) {
        fVar52 = fVar84;
      }
      if (fStack00000000000000a0 <= fVar87) {
        fStack00000000000000a0 = fVar87;
      }
    }
    else {
      if (*(int *)(lVar23 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar23);
      }
      fVar53 = (fVar53 + (fVar52 - (float)in_stack_00001798)) * 0.5;
      if (fVar71 <= fStack00000000000000ac) {
        fStack00000000000000ac = fVar71;
      }
      if (fStack00000000000000a0 <= fVar87) {
        fStack00000000000000a0 = fVar87;
      }
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,fVar53,
                 fStack00000000000000a0,uStack0000000000000094);
      fStack00000000000000ac = fVar71 - fVar91;
      fVar52 = fVar84 + fVar73;
      uStack0000000000000094 = 0;
      fStack00000000000000a0 = fVar87 + fVar70;
      fStack00000000000000a8 = fVar53;
      in_stack_00001790 = uVar24;
      in_stack_00001798 = uVar30;
      in_stack_000017a0 = fVar91;
    }
    if (((*puVar1 == 1) || (uVar90 == uVar4)) || (((int)uVar33 <= (int)uVar90 || (!bVar16)))) {
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,fVar52,
                 fStack00000000000000a0,uStack0000000000000094);
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
  }
  uVar90 = *puVar1;
  iVar7 = iVar7 + 1;
  lStack0000000000000128 = lStack0000000000000128 + 0x178;
  bVar16 = (int)uVar90 <= (int)uVar17;
  uVar36 = uVar19;
  uVar17 = uVar17 + 1;
  if (bVar16) goto LAB_02491038;
  goto LAB_0248ef74;
LAB_02491038:
  lVar22 = *plVar2;
  if (lVar22 == 0) goto LAB_02491464;
  iVar18 = uVar19 + 1;
  plVar38 = (long *)PTR_DAT_033ed410;
LAB_02491068:
  *(uint *)(lVar22 + 0x18) = uVar90;
  lVar23 = unaff_x19[0xd3];
  *(int *)(lVar22 + 0x2c) = iVar18;
  iVar18 = iStack00000000000000a4;
  if ((int)uVar90 < 1) {
    iVar18 = 1;
  }
  if (iStack00000000000000a4 == 0) {
    iVar18 = 1;
  }
  *(int *)(lVar22 + 0x1c) = (int)lVar23;
  *(int *)(lVar22 + 0x24) = iVar18;
  *(int *)(lVar22 + 0x30) = (int)unaff_x19[0x95] + 1;
  if (((int)unaff_x19[0x62] != 0xff) ||
     (uVar27 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar27 & 1) == 0)) {
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
              (*(undefined8 *)(lVar22 + 0x40),*plVar2,*(undefined8 *)(lVar22 + 0x28));
  }
  if (*(int *)((long)unaff_x19 + 0x314) != 0) {
    if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x60), lVar22 == 0)) goto LAB_02491464;
    if (*(int *)(*plVar38 + 0xe0) == 0) {
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
            if ((unaff_x19[0x6c] != 0) && (lVar22 = *(long *)(unaff_x19[0x6c] + 0x60), lVar22 != 0))
            {
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
                      lVar22 = *plVar2;
                      if (lVar22 != 0) {
                        lVar37 = 0;
                        lVar23 = 0;
                        do {
                          uVar27 = lVar23 + 1;
                          if ((long)*(int *)(lVar22 + 0x34) <= (long)uVar27) goto LAB_02491468;
                          lVar22 = *(long *)(lVar22 + 0x60);
                          if (lVar22 == 0) break;
                          if (*(int *)(*plVar38 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          if (*(uint *)(lVar22 + 0x18) <= uVar27)
                          goto 
                          UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                          ;
                          FUN_024e7ecc(lVar22 + lVar37 + 0x70,0);
                          lVar22 = unaff_x19[0xe0];
                          if (lVar22 == 0) break;
                          if (*(uint *)(lVar22 + 0x18) <= uVar27)
                          goto 
                          UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                          ;
                          uVar30 = *(undefined8 *)(lVar22 + lVar23 * 8 + 0x28);
                          if (*(int *)(*plVar47 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          uVar65 = FUN_0268b4e0(uVar30,0,0);
                          if ((uVar65 & 1) == 0) {
                            if (*(int *)((long)unaff_x19 + 0x314) != 0) {
                              if ((*plVar2 == 0) ||
                                 (lVar22 = *(long *)(*plVar2 + 0x60), lVar22 == 0)) break;
                              if (*(int *)(*plVar38 + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                              }
                              if (*(uint *)(lVar22 + 0x18) <= uVar27)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              FUN_024e8000(lVar22 + lVar37 + 0x70,1,0);
                            }
                            lVar22 = unaff_x19[0xe0];
                            if (lVar22 == 0) break;
                            if (*(uint *)(lVar22 + 0x18) <= uVar27)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            lVar22 = *(long *)(lVar22 + lVar23 * 8 + 0x28);
                            if (lVar22 == 0) break;
                            lVar22 = FUN_024eefa0(lVar22,0);
                            if ((*plVar2 == 0) || (lVar48 = *(long *)(*plVar2 + 0x60), lVar48 == 0))
                            break;
                            if (*(uint *)(lVar48 + 0x18) <= uVar27)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            if (lVar22 == 0) break;
                            FUN_0266b9c4(lVar22,*(undefined8 *)(lVar48 + lVar37 + 0x80),0);
                            lVar22 = unaff_x19[0xe0];
                            if (lVar22 == 0) break;
                            if (*(uint *)(lVar22 + 0x18) <= uVar27)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            lVar22 = *(long *)(lVar22 + lVar23 * 8 + 0x28);
                            if (lVar22 == 0) break;
                            lVar22 = FUN_024eefa0(lVar22,0);
                            if ((*plVar2 == 0) || (lVar48 = *(long *)(*plVar2 + 0x60), lVar48 == 0))
                            break;
                            if (*(uint *)(lVar48 + 0x18) <= uVar27)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            if (lVar22 == 0) break;
                            FUN_0266bbc8(lVar22,*(undefined8 *)(lVar48 + lVar37 + 0x98),0);
                            lVar22 = unaff_x19[0xe0];
                            if (lVar22 == 0) break;
                            if (*(uint *)(lVar22 + 0x18) <= uVar27)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            lVar22 = *(long *)(lVar22 + lVar23 * 8 + 0x28);
                            if (lVar22 == 0) break;
                            lVar22 = FUN_024eefa0(lVar22,0);
                            if ((*plVar2 == 0) || (lVar48 = *(long *)(*plVar2 + 0x60), lVar48 == 0))
                            break;
                            if (*(uint *)(lVar48 + 0x18) <= uVar27)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            if (lVar22 == 0) break;
                            FUN_0266bc74(lVar22,*(undefined8 *)(lVar48 + lVar37 + 0xa0),0);
                            lVar22 = unaff_x19[0xe0];
                            if (lVar22 == 0) break;
                            if (*(uint *)(lVar22 + 0x18) <= uVar27)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            lVar22 = *(long *)(lVar22 + lVar23 * 8 + 0x28);
                            if (lVar22 == 0) break;
                            lVar22 = FUN_024eefa0(lVar22,0);
                            if ((*plVar2 == 0) || (lVar48 = *(long *)(*plVar2 + 0x60), lVar48 == 0))
                            break;
                            if (*(uint *)(lVar48 + 0x18) <= uVar27)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            if (lVar22 == 0) break;
                            FUN_0266c1dc(lVar22,*(undefined8 *)(lVar48 + lVar37 + 0xa8),0);
                            lVar22 = unaff_x19[0xe0];
                            if (lVar22 == 0) break;
                            if (*(uint *)(lVar22 + 0x18) <= uVar27)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            lVar22 = *(long *)(lVar22 + lVar23 * 8 + 0x28);
                            if ((lVar22 == 0) || (lVar22 = FUN_024eefa0(lVar22,0), lVar22 == 0))
                            break;
                            FUN_0266ed90(lVar22,0);
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
  goto LAB_02491464;
}


