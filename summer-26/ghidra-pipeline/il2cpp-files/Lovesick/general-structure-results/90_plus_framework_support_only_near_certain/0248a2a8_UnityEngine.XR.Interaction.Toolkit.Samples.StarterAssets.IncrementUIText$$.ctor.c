/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets.IncrementUIText$$.ctor
ENTRY_POINT: 0248a2a8
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


/* WARNING: Removing unreachable block (ram,0x0248a2b4) */
/* WARNING: Removing unreachable block (ram,0x0248a34c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_IncrementUIText___ctor(float param_1)

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
  undefined *puVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  int *piVar29;
  ulong uVar30;
  undefined8 uVar31;
  undefined1 uVar32;
  char cVar33;
  uint uVar34;
  undefined4 *puVar35;
  long lVar36;
  uint uVar37;
  long lVar38;
  long *plVar39;
  float *pfVar40;
  code *pcVar41;
  uint uVar42;
  float *pfVar43;
  uint uVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long *unaff_x19;
  int unaff_w21;
  undefined8 *unaff_x23;
  long *plVar48;
  long lVar49;
  uint uVar50;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
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
  float fVar65;
  float fVar66;
  double dVar67;
  ulong uVar68;
  double dVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  undefined4 uVar75;
  float unaff_s8;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  double unaff_d9;
  float unaff_s10;
  float fVar81;
  float unaff_s11;
  float fVar82;
  float fVar83;
  float unaff_s13;
  float fVar84;
  float fVar85;
  float unaff_s14;
  float fVar86;
  float fVar87;
  undefined4 uVar88;
  float fVar89;
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
  double in_stack_00000880;
  undefined4 uVar90;
  undefined4 in_stack_00000bfc;
  undefined8 in_stack_00000c00;
  long in_stack_000016d8;
  uint in_stack_0000176c;
  uint uVar91;
  undefined8 in_stack_00001790;
  undefined8 in_stack_00001798;
  float in_stack_000017a0;
  undefined8 in_stack_000017a8;
  float fVar92;
  uint in_stack_000017bc;
  
  fVar51 = unaff_s14 * 255.0;
  if (unaff_s14 < 0.0) {
    fVar51 = 0.0;
  }
  dVar67 = modf((double)fVar51,(double *)&stack0x00000880);
  puVar13 = Method_System_Collections_Generic_List<uint>_ToArray__;
  puVar12 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
  if (0.0 <= fVar51) {
    if (dVar67 == 0.5) {
      fVar51 = 1.0;
      goto LAB_0248a308;
    }
    fVar52 = (float)(int)(fVar51 + 0.5);
  }
  else if (dVar67 == unaff_d9) {
    fVar51 = -1.0;
LAB_0248a308:
    fVar52 = (float)in_stack_00000880;
    if (((long)in_stack_00000880 & 1U) != 0) {
      fVar52 = (float)in_stack_00000880 + fVar51;
    }
  }
  else {
    fVar52 = (float)(int)(fVar51 + -0.5);
  }
  fVar51 = unaff_s10 * 255.0;
  if (unaff_s10 < 0.0) {
    fVar51 = 0.0;
  }
  dVar67 = modf((double)fVar51,(double *)&stack0x00000880);
  if (0.0 <= fVar51) {
    if (dVar67 == 0.5) {
      fVar51 = 1.0;
      goto LAB_0248a3a8;
    }
    fVar53 = (float)(int)(fVar51 + 0.5);
  }
  else if (dVar67 == unaff_d9) {
    fVar51 = -1.0;
LAB_0248a3a8:
    fVar53 = (float)in_stack_00000880;
    if (((long)in_stack_00000880 & 1U) != 0) {
      fVar53 = (float)in_stack_00000880 + fVar51;
    }
  }
  else {
    fVar53 = (float)(int)(fVar51 + -0.5);
  }
  uVar91 = (int)unaff_s8 & 0xffU | ((int)(float)(int)param_1 & 0xffU) << 8 |
           ((int)fVar52 & 0xffU) << 0x10 | (int)fVar53 << 0x18;
  *(uint *)((long)unaff_x19 + 0x13c) = uVar91;
  *(uint *)((long)unaff_x19 + 0x4e4) = uVar91;
  *(uint *)(unaff_x19 + 0x2a) = uVar91;
  *(uint *)((long)unaff_x19 + 0x154) = uVar91;
  FUN_013b7dec(unaff_x19 + 0x9d,&stack0x00000880,*(undefined8 *)puVar13);
  FUN_013b7dec(unaff_x19 + 0xa1,&stack0x00000880,*(undefined8 *)puVar13);
  FUN_013b7dec(unaff_x19 + 0xa5,&stack0x00000880,*(undefined8 *)puVar13);
  uVar90 = *(undefined4 *)((long)unaff_x19 + 0x4e4);
  if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (DAT_037825d3 == '\0') {
    thunk_FUN_00d48444(Unity_AI_Navigation_NavMeshLink_TypeInfo);
    DAT_037825d3 = '\x01';
  }
  puVar14 = 
  Method_UnityEngine_XR_Interaction_Toolkit_AR_ARBaseGestureInteractable_OnGestureStarted<TwistGesture>__
  ;
  puVar13 = Method_System_Collections_Generic_List<SoundData>_GetEnumerator__;
  lVar23 = *(long *)puVar12;
  if (*(int *)(lVar23 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar23 = *(long *)puVar12;
  }
  puVar35 = *(undefined4 **)(lVar23 + 0xb8);
  dVar67 = 0.0;
  UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
            (*puVar35,puVar35[1],puVar35[2],puVar35[3],&stack0x00000880,uVar90,0);
  uVar31 = *(undefined8 *)puVar13;
  unaff_x28[0x73] = unaff_x28[1];
  unaff_x28[0x72] = *unaff_x28;
  FUN_013b7dec(unaff_x19 + 0xa9,&stack0x00000c10,uVar31);
  unaff_x19[0xaf] = 0;
  FUN_013b7dec(unaff_x19 + 0xb0,0,*(undefined8 *)puVar14);
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
    plVar39 = (long *)System_Threading_Mutex_TypeInfo;
    if (unaff_x19[0x1f] != 0) {
      fVar51 = (float)FUN_026fd130(unaff_x19[0x1f] + 0x50,0);
      if (*unaff_x27 != 0) {
        fVar52 = (float)FUN_026fd140(*unaff_x27 + 0x50,0);
        if (*unaff_x27 != 0) {
          fVar53 = (float)FUN_026fd180(*unaff_x27 + 0x50,0);
          *(undefined8 *)((long)unaff_x19 + 0x2a4) = 0;
          *(undefined4 *)(unaff_x19 + 199) = 0;
          unaff_x19[0x80] = 0;
          uVar90 = 0;
          FUN_013b7dec(unaff_x19 + 0x81,&stack0x00000bf8,*unaff_x23);
          *(undefined1 *)(unaff_x19 + 0x85) = 0;
          *(undefined4 *)((long)unaff_x19 + 0x48c) = 0;
          *(undefined4 *)(unaff_x19 + 0x92) = *(undefined4 *)((long)unaff_x19 + 0x31c);
          *(undefined8 *)((long)unaff_x19 + 0x494) = 0;
          *(undefined4 *)((long)unaff_x19 + 0x49c) = 0;
          lVar23 = *plVar39;
          if (*(int *)(lVar23 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar23 = *plVar39;
          }
          lVar24 = unaff_x19[0x6c];
          uVar31 = *(undefined8 *)(*(long *)(lVar23 + 0xb8) + 0x15a8);
          unaff_x19[0x94] = 0;
          unaff_x19[0x99] = 0;
          *(undefined1 *)((long)unaff_x19 + 700) = 0;
          lVar23 = NEON_rev64(uVar31,4);
          *(undefined4 *)((long)unaff_x19 + 0x2dc) = 0xffffffff;
          unaff_x19[0x98] = lVar23;
          *(undefined4 *)(unaff_x19 + 0x95) = 0;
          if ((lVar24 != 0) && (*(long *)(lVar24 + 0x58) != 0)) {
            uVar37 = (int)unaff_x19[0x66] - 1;
            uVar91 = *(int *)(*(long *)(lVar24 + 0x58) + 0x18) - 1;
            if ((int)uVar37 <= (int)uVar91) {
              uVar91 = uVar37;
            }
            uVar3 = 0;
            if (-1 < (int)uVar37) {
              uVar3 = uVar91;
            }
            FUN_024f1d04(lVar24,0);
            fVar54 = *(float *)(unaff_x19 + 0x67);
            *(undefined4 *)(unaff_x19 + 0x6b) = 0xbf800000;
            fVar86 = *(float *)(unaff_x19 + 0x6a);
            unaff_x19[0x69] = 0;
            lVar23 = *plVar39;
            fVar55 = *(float *)((long)unaff_x19 + 0x33c);
            fVar89 = *(float *)((long)unaff_x19 + 0x354);
            fVar56 = *(float *)((long)unaff_x19 + 0x344);
            if (*(int *)(lVar23 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar23 = *plVar39;
            }
            *(undefined8 *)((long)unaff_x19 + 0x4d4) =
                 *(undefined8 *)(*(long *)(lVar23 + 0xb8) + 0x1598);
            *(undefined8 *)((long)unaff_x19 + 0x4dc) =
                 *(undefined8 *)(*(long *)(lVar23 + 0xb8) + 0x15a0);
            puVar12 = 
            Method_MedleyBossMemoryGame_<StartPhaseCoroutine>d__41_System_Collections_IEnumerator_Reset__
            ;
            if (unaff_x19[0x6c] != 0) {
              FUN_024f1b84(unaff_x19[0x6c],0);
              *(undefined4 *)((long)unaff_x19 + 0x4b4) = 0;
              *(undefined4 *)((long)unaff_x19 + 0x4bc) = 0;
              *(undefined8 *)((long)unaff_x19 + 0x4ac) = 0;
              fVar92 = 0.0;
              *(undefined1 *)((long)unaff_x28 + 0xf34) = 0;
              *(undefined1 *)((long)unaff_x19 + 0x334) = 0;
              *(undefined1 *)((long)unaff_x19 + 0x2d2) = 0;
              FUN_024f102c(&stack0x000017a8,0xffffffff,0,0);
              FUN_024d69d4();
              FUN_024d69d4();
              FUN_024d69d4();
              FUN_024d69d4();
              FUN_024d69d4();
              FUN_013b7d38(*(long *)(*plVar39 + 0xb8) + 0x11f0,*(undefined8 *)puVar12);
              fVar73 = DAT_028aa3e4;
              fVar74 = DAT_028aa028;
              uVar91 = 0;
              lVar23 = unaff_x19[0x8e];
              if (lVar23 != 0) {
                puVar1 = (uint *)((long)unaff_x19 + 0x48c);
                uVar37 = unaff_w21 - 1;
                uVar28 = (ulong)(uint)fStack0000000000000054;
                fVar51 = fVar51 - (fVar52 - fVar53);
                lVar24 = (long)unaff_x19 + 0x42c;
                fStack0000000000000134 = 0.0;
                if (fVar86 <= 0.0) {
                  fVar86 = 0.0;
                }
                if (fVar89 <= 0.0) {
                  fVar89 = 0.0;
                }
                plVar2 = unaff_x19 + 0x6c;
                fVar86 = fVar86 + _LAB_028aa024;
                uVar68 = (ulong)(uint)fVar86;
                fVar53 = fVar89 + _LAB_028aa024;
                fVar52 = unaff_s11 * DAT_028aa028 * unaff_s13;
                bVar10 = true;
                fStack0000000000000034 = 0.0;
                bVar15 = false;
                iStack0000000000000144 = 0;
                bVar11 = 1;
                fStack00000000000000dc = fVar86;
LAB_0248a8e0:
                fVar76 = (float)uVar28;
                fVar58 = 1.0;
                if ((int)*(uint *)(lVar23 + 0x18) <= (int)uVar91) {
LAB_0248e4dc:
                  fVar51 = (float)uVar68;
                  if (((char)unaff_x19[0x46] != '\0') &&
                     (fVar51 = DAT_02956ccc,
                     DAT_02956ccc <
                     *(float *)((long)unaff_x19 + 0x234) - *(float *)(unaff_x19 + 0x47))) {
                    fVar51 = *(float *)((long)unaff_x19 + 0x1dc);
                    fVar52 = *(float *)((long)unaff_x19 + 0x24c);
                    if ((fVar51 < fVar52) &&
                       (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                      if (*(float *)((long)unaff_x19 + 0x2cc) < *(float *)(unaff_x19 + 0x59) / 100.0
                         ) {
                        *(undefined4 *)((long)unaff_x19 + 0x2cc) = 0;
                      }
                      fVar53 = (*(float *)((long)unaff_x19 + 0x234) - fVar51) * 0.5;
                      if (fVar53 <= DAT_028aa298) {
                        fVar53 = DAT_028aa298;
                      }
                      *(float *)(unaff_x19 + 0x47) = fVar51;
                      fVar53 = (fVar51 + fVar53) * 20.0 + 0.5;
                      fVar51 = DAT_02958220;
                      if (fVar53 != INFINITY) {
                        fVar51 = (float)(int)fVar53 / 20.0;
                      }
                      if (fVar52 <= fVar51) {
                        fVar51 = fVar52;
                      }
LAB_0248e598:
                      *(float *)((long)unaff_x19 + 0x1dc) = fVar51;
                      return;
                    }
                  }
                  *(undefined1 *)((long)unaff_x19 + 0x244) = 1;
                  if ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c)) {
                    uVar31 = FUN_0176eb1c((long)unaff_x19 + 0x23c,0);
                    uVar25 = FUN_017840ac((long)unaff_x19 + 0x1dc,0);
                    uVar31 = FUN_0160073c(*(undefined8 *)
                                           Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlah_s16__,
                                          uVar31,*(undefined8 *)
                                                  Method_UnityEngine_GameObject_GetComponents<Component>__
                                          ,uVar25,0);
                    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                      thunk_FUN_00d32864(*unaff_x29);
                    }
                    FUN_02660dac(uVar31,0);
                  }
                  puVar12 = Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__;
                  if ((*puVar1 == 0) || ((*puVar1 == 1 && (in_stack_000017bc == 3)))) {
                    (**(code **)(*unaff_x19 + 0x958))();
                    lVar23 = *(long *)puVar12;
                    goto LAB_02491474;
                  }
                  lVar23 = *plVar39;
                  if (*(int *)(lVar23 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar23 = *plVar39;
                  }
                  plVar39 = (long *)PTR_DAT_033ed410;
                  lVar23 = **(long **)(lVar23 + 0xb8);
                  if (lVar23 == 0) goto LAB_02491464;
                  if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0xd0))
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                  iVar19 = *(int *)(lVar23 + (long)(int)*(uint *)(unaff_x19 + 0xd0) * 0x38 + 0x54)
                           << 2;
                  if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x60), lVar23 == 0))
                  goto LAB_02491464;
                  if (*(int *)(*(long *)PTR_DAT_033ed410 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  if (*(int *)(lVar23 + 0x18) == 0)
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                  FUN_024e7d94(lVar23 + 0x20,0,0);
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
                  lVar23 = unaff_x19[0xea];
                  uStack0000000000000088 = uStack00000000000000b8;
                  fStack0000000000000090 = fStack00000000000000c4;
                  if (iVar7 < 0x401) {
                    if (iVar7 == 0x100) {
                      if (lVar23 == 0) goto LAB_02491464;
                      if (*(uint *)(lVar23 + 0x18) < 2)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      uVar31 = *(undefined8 *)(lVar23 + 0x30);
                      if ((int)unaff_x19[0x5b] == 5) {
                        if ((*plVar2 == 0) || (lVar24 = *(long *)(*plVar2 + 0x58), lVar24 == 0))
                        goto LAB_02491464;
                        if (*(uint *)(lVar24 + 0x18) <= uVar3)
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                        ;
                        fVar51 = *(float *)(lVar24 + (long)(int)uVar3 * 0x14 + 0x28);
                      }
                      else {
                        fVar51 = *(float *)(unaff_x19 + 0x96);
                      }
                      fStack0000000000000090 = fVar54 + 0.0 + *(float *)(lVar23 + 0x2c);
                      fVar51 = (0.0 - fVar51) - fVar55;
                    }
                    else if (iVar7 == 0x200) {
                      if (lVar23 == 0) goto LAB_02491464;
                      if ((*(int *)(lVar23 + 0x18) == 1) || (*(int *)(lVar23 + 0x18) == 0))
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      fStack0000000000000090 =
                           (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5;
                      uVar31 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20) +
                                        (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20)) *
                                        0.5,((float)*(undefined8 *)(lVar23 + 0x24) +
                                            (float)*(undefined8 *)(lVar23 + 0x30)) * 0.5);
                      if ((int)unaff_x19[0x5b] == 5) {
                        if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x58), lVar23 == 0))
                        goto LAB_02491464;
                        if (*(uint *)(lVar23 + 0x18) <= uVar3)
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                        ;
                        lVar23 = lVar23 + (long)(int)uVar3 * 0x14;
                        fStack0000000000000090 = fVar54 + 0.0 + fStack0000000000000090;
                        fVar51 = ((fVar55 + *(float *)(lVar23 + 0x28) + *(float *)(lVar23 + 0x30)) -
                                 fVar56) * -0.5 + 0.0;
                      }
                      else {
                        fStack0000000000000090 = fVar54 + 0.0 + fStack0000000000000090;
                        fVar51 = ((fVar55 + *(float *)(unaff_x19 + 0x96) + fVar92) - fVar56) * -0.5
                                 + 0.0;
                      }
                    }
                    else {
                      if (iVar7 != 0x400) goto LAB_0248eb64;
                      if (lVar23 == 0) goto LAB_02491464;
                      if (*(int *)(lVar23 + 0x18) == 0)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      uVar31 = *(undefined8 *)(lVar23 + 0x24);
                      if ((int)unaff_x19[0x5b] == 5) {
                        if ((*plVar2 == 0) || (lVar24 = *(long *)(*plVar2 + 0x58), lVar24 == 0))
                        goto LAB_02491464;
                        if (*(uint *)(lVar24 + 0x18) <= uVar3)
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                        ;
                        fVar92 = *(float *)(lVar24 + (long)(int)uVar3 * 0x14 + 0x30);
                      }
                      fStack0000000000000090 = fVar54 + 0.0 + *(float *)(lVar23 + 0x20);
                      fVar51 = fVar56 + (0.0 - fVar92);
                    }
                    uStack0000000000000088 =
                         CONCAT44((float)((ulong)uVar31 >> 0x20) + 0.0,(float)uVar31 + fVar51);
                  }
                  else if (iVar7 == 0x800) {
                    if (lVar23 == 0) goto LAB_02491464;
                    if ((*(int *)(lVar23 + 0x18) == 1) || (*(int *)(lVar23 + 0x18) == 0))
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    fVar51 = ((float)*(undefined8 *)(lVar23 + 0x24) +
                             (float)*(undefined8 *)(lVar23 + 0x30)) * 0.5;
                    fStack0000000000000090 =
                         fVar54 + 0.0 +
                         (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5;
                    uStack0000000000000088 =
                         CONCAT44(((float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20) +
                                  (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20)) * 0.5 +
                                  0.0,fVar51 + 0.0);
                  }
                  else {
                    if (iVar7 == 0x1000) {
                      if (lVar23 == 0) goto LAB_02491464;
                      if ((*(int *)(lVar23 + 0x18) == 1) || (*(int *)(lVar23 + 0x18) == 0))
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      fVar51 = (float)*(undefined8 *)(lVar23 + 0x24) +
                               (float)*(undefined8 *)(lVar23 + 0x30);
                      fVar52 = (float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20) +
                               (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20);
                      fVar55 = fVar55 + *(float *)(unaff_x19 + 0x9c) + *(float *)(unaff_x19 + 0x9b);
                      fStack0000000000000090 =
                           fVar54 + 0.0 +
                           (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5;
                    }
                    else {
                      if (iVar7 != 0x2000) goto LAB_0248eb64;
                      if (lVar23 == 0) goto LAB_02491464;
                      if ((*(int *)(lVar23 + 0x18) == 1) || (*(int *)(lVar23 + 0x18) == 0))
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      fVar51 = (float)*(undefined8 *)(lVar23 + 0x24) +
                               (float)*(undefined8 *)(lVar23 + 0x30);
                      fVar52 = (float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20) +
                               (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20);
                      fVar55 = *(float *)((long)unaff_x19 + 0x4b4) - fVar55;
                      fStack0000000000000090 =
                           fVar54 + 0.0 +
                           (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5;
                    }
                    fVar51 = fVar51 * 0.5;
                    uStack0000000000000088 =
                         CONCAT44(fVar52 * 0.5 + 0.0,fVar51 + (0.0 - (fVar55 - fVar56) * 0.5));
                  }
LAB_0248eb64:
                  lVar23 = FUN_0249b7f8();
                  if (lVar23 != 0) {
                    FUN_026a125c(lVar23,0);
                    __x = DAT_028aa048;
                    *(float *)((long)unaff_x19 + 0x6dc) = fVar51;
                    dVar69 = modf(__x,(double *)&stack0x00000880);
                    puVar12 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
                    if (dVar69 == 0.5) {
                      fVar52 = (float)dVar67;
                      if (((long)dVar67 & 1U) != 0) {
                        fVar52 = (float)dVar67 + 1.0;
                      }
                    }
                    else {
                      fVar52 = 255.0;
                    }
                    dVar69 = modf(__x,(double *)&stack0x00000880);
                    if (dVar69 == 0.5) {
                      fVar53 = (float)dVar67;
                      if (((long)dVar67 & 1U) != 0) {
                        fVar53 = (float)dVar67 + 1.0;
                      }
                    }
                    else {
                      fVar53 = 255.0;
                    }
                    dVar69 = modf(__x,(double *)&stack0x00000880);
                    if (dVar69 == 0.5) {
                      fVar55 = (float)dVar67;
                      if (((long)dVar67 & 1U) != 0) {
                        fVar55 = (float)dVar67 + 1.0;
                      }
                    }
                    else {
                      fVar55 = 255.0;
                    }
                    dVar69 = modf(__x,(double *)&stack0x00000880);
                    if (dVar69 == 0.5) {
                      fVar54 = (float)dVar67;
                      if (((long)dVar67 & 1U) != 0) {
                        fVar54 = (float)dVar67 + 1.0;
                      }
                    }
                    else {
                      fVar54 = 255.0;
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
                    lVar23 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
                    if (*(int *)(lVar23 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                      lVar23 = *(long *)puVar12;
                    }
                    puVar35 = *(undefined4 **)(lVar23 + 0xb8);
                    UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
                              (*puVar35,puVar35[1],puVar35[2],puVar35[3],&stack0x00001790,0x4000ffff
                               ,0);
                    if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    lVar23 = *plVar2;
                    if (lVar23 != 0) {
                      uVar91 = *puVar1;
                      if ((int)uVar91 < 1) {
                        iStack00000000000000a4 = 0;
                        iVar19 = 0;
                        plVar48 = (long *)
                                  System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                        ;
                        goto LAB_02491068;
                      }
                      lVar23 = *(long *)(lVar23 + 0x38);
                      if (lVar23 != 0) {
                        iVar7 = 0;
                        bVar16 = false;
                        bVar9 = false;
                        bVar15 = false;
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
                        fVar56 = 0.0;
                        in_stack_00000080._4_4_ = 0.0;
                        fStack0000000000000034 = 0.0;
                        uStack000000000000005c =
                             (int)fVar52 & 0xffU | ((int)fVar53 & 0xffU) << 8 |
                             ((int)fVar55 & 0xffU) << 0x10 | (int)fVar54 << 0x18;
                        fVar55 = 0.0;
                        fVar52 = 0.0;
                        lStack0000000000000128 = 0x2e0;
                        fStack00000000000000a0 = fStack00000000000000ac;
                        fStack000000000000004c = fStack00000000000000ac;
                        uStack0000000000000050 = uStack0000000000000094;
                        fStack000000000000007c = fStack00000000000000a8;
                        fStack000000000000006c = fStack00000000000000ac;
                        uVar37 = 0;
                        uVar18 = 1;
                        fVar53 = fStack00000000000000a8;
                        uVar90 = uStack0000000000000094;
                        goto LAB_0248ef74;
                      }
                    }
                  }
                  goto LAB_02491464;
                }
                if (*(uint *)(lVar23 + 0x18) <= uVar91)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                uVar18 = *(uint *)(lVar23 + (long)(int)uVar91 * 0xc + 0x20);
                if (uVar18 == 0) goto LAB_0248e4dc;
                if (5 < iStack0000000000000144) {
                  uVar31 = FUN_0176eb1c(&stack0x000017bc,0);
                  uVar25 = FUN_0176eb1c(&stack0x00001788,0);
                  uVar31 = FUN_0160073c(*(undefined8 *)
                                         UnityEngine_Rendering_Universal_DebugValidationMode_var,
                                        uVar31,*(undefined8 *)
                                                Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                                        ,uVar25,0);
                  if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                    thunk_FUN_00d32864(*unaff_x29);
                  }
                  FUN_026610e4(uVar31,0);
                  in_stack_000017a8 = CONCAT44(3,*puVar1);
                }
                if ((*(char *)((long)unaff_x19 + 0x2fa) == '\0') || (uVar18 != 0x3c)) {
                  if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0))
                  goto LAB_02491464;
                  if (*(uint *)(lVar23 + 0x18) <= *puVar1)
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                  lVar23 = lVar23 + (long)(int)*puVar1 * 0x178;
                  *(undefined4 *)((long)unaff_x19 + 0x63c) = *(undefined4 *)(lVar23 + 0x2c);
                  *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar23 + 0x58);
                  unaff_x19[0x1f] = *(long *)(lVar23 + 0x38);

                  UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager__GetInputAction
                  :
                  if ((unaff_x19[0x6c] == 0) ||
                     (lVar23 = *(long *)(unaff_x19[0x6c] + 0x38), lVar23 == 0)) goto LAB_02491464;
                  uVar20 = *puVar1;
                  if (*(uint *)(lVar23 + 0x18) <= uVar20)
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                  lVar49 = (long)(int)uVar20;
                  cVar33 = *(char *)(lVar23 + lVar49 * 0x178 + 0x5c);
                  *(undefined1 *)((long)unaff_x19 + 0x429) = 0;
                  lVar38 = unaff_x19[0x23];
                  if ((uint)in_stack_000017a8 == uVar20) {
                    uVar18 = (uint)((ulong)in_stack_000017a8 >> 0x20);
                    bVar9 = true;
                    *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
                    if (uVar18 == 0x2026) {
                      lVar27 = unaff_x19[0xc9];
                      lVar23 = lVar23 + lVar49 * 0x178;
                      *(undefined4 *)(lVar23 + 0x2c) = 0;
                      *(long *)(lVar23 + 0x30) = lVar27;
                      *(long *)(lVar23 + 0x38) = unaff_x19[0xca];
                      *(long *)(lVar23 + 0x50) = unaff_x19[0xcb];
                      *(int *)(lVar23 + 0x58) = (int)unaff_x19[0xcc];
                      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                      in_stack_000017a8 = CONCAT44(3,uVar20 + 1);
                    }
                    else if (uVar18 == 3) {
                      if ((*unaff_x27 == 0) || (lVar27 = FUN_024b11ac(*unaff_x27,0), lVar27 == 0))
                      goto LAB_02491464;
                      uVar90 = 3;
                      FUN_01299bc0(lVar27,&stack0x00000bf8,&stack0x00000880,
                                   *(undefined8 *)PTR_DAT_033ef3c8);
                      if (*(uint *)(lVar23 + 0x18) <= uVar20)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      bVar9 = true;
                      *(double *)(lVar23 + lVar49 * 0x178 + 0x30) = dVar67;
                      uVar20 = *(uint *)((long)unaff_x19 + 0x48c);
                      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                    }
                  }
                  else {
                    bVar9 = false;
                  }
                  plVar39 = (long *)System_Threading_Mutex_TypeInfo;
                  if (((int)uVar20 < *(int *)((long)unaff_x19 + 0x31c)) && (uVar18 != 3)) {
                    if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0))
                    goto LAB_02491464;
                    if (*(uint *)(lVar23 + 0x18) <= uVar20)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    lVar23 = lVar23 + (long)(int)uVar20 * 0x178;
                    *(undefined1 *)(lVar23 + 0x194) = 0;
                    *(undefined2 *)(lVar23 + 0x20) = 0x200b;
                    *(undefined4 *)(lVar23 + 100) = 0;
                    *puVar1 = uVar20 + 1;
                  }
                  else {
                    iVar19 = *(int *)((long)unaff_x19 + 0x63c);
                    fVar66 = fVar58;
                    if (iVar19 == 0) {
                      uVar20 = *(uint *)((long)unaff_x19 + 0x254);
                      if ((uVar20 >> 4 & 1) == 0) {
                        if ((uVar20 >> 3 & 1) == 0) {
                          if ((uVar20 >> 5 & 1) != 0) {
                            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0)
                                == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar26 = FUN_016f92d4(uVar18,0);
                            if ((uVar26 & 1) != 0) {
                              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0
                                          ) == 0) {
                                thunk_FUN_00d32864();
                              }
                              uVar18 = FUN_016f95a8(uVar18,0);
                              uVar18 = uVar18 & 0xffff;
                              fVar66 = fVar73;
                            }
                          }
                        }
                        else {
                          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) ==
                              0) {
                            thunk_FUN_00d32864();
                          }
                          uVar26 = FUN_016f9218(uVar18,0);
                          if ((uVar26 & 1) != 0) {
                            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0)
                                == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar18 = FUN_016f9724(uVar18,0);
                            goto LAB_0248af70;
                          }
                        }
                      }
                      else {
                        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0
                           ) {
                          thunk_FUN_00d32864();
                        }
                        uVar26 = FUN_016f92d4(uVar18,0);
                        fVar66 = 1.0;
                        if ((uVar26 & 1) != 0) {
                          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) ==
                              0) {
                            thunk_FUN_00d32864();
                          }
                          uVar18 = FUN_016f95a8(uVar18,0);
LAB_0248af70:
                          uVar18 = uVar18 & 0xffff;
                          fVar66 = 1.0;
                        }
                      }
                      iVar19 = *(int *)((long)unaff_x19 + 0x63c);
                      if (iVar19 != 0) goto LAB_0248abc8;
LAB_0248af84:
                      if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0))
                      goto LAB_02491464;
                      uVar4 = *puVar1;
                      uVar20 = *(uint *)(lVar23 + 0x18);
                      if (uVar20 <= uVar4)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      lVar38 = *(long *)(lVar23 + (long)(int)uVar4 * 0x178 + 0x30);
                      unaff_x19[200] = lVar38;
                      plVar39 = (long *)System_Threading_Mutex_TypeInfo;
                      if (lVar38 == 0) goto LAB_0248ab98;
                      lVar49 = lVar23 + (long)(int)uVar4 * 0x178;
                      lVar38 = *(long *)(lVar49 + 0x38);
                      unaff_x19[0x1f] = lVar38;
                      unaff_x19[0x22] = *(long *)(lVar49 + 0x50);
                      *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar49 + 0x58);
                      if (bVar9) {
                        lVar49 = unaff_x19[0x8e];
                        if (lVar49 == 0) goto LAB_02491464;
                        if (*(uint *)(lVar49 + 0x18) <= uVar91)
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                        ;
                        if ((*(int *)(lVar49 + (long)(int)uVar91 * 0xc + 0x20) != 10) ||
                           (uVar4 == *(uint *)(unaff_x19 + 0x92))) goto LAB_0248b014;
                        if (uVar20 <= uVar4 - 1)
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                        ;
                        if (lVar38 == 0) goto LAB_02491464;
                        fVar87 = *(float *)(lVar23 + (long)(int)(uVar4 - 1) * 0x178 + 0x60);
                        iVar19 = FUN_026fd110(lVar38 + 0x50,0);
                        lVar23 = *unaff_x27;
                      }
                      else {
LAB_0248b014:
                        if (lVar38 == 0) goto LAB_02491464;
                        fVar87 = *(float *)(unaff_x19 + 0x3c);
                        iVar19 = FUN_026fd110(lVar38 + 0x50,0);
                        lVar23 = unaff_x19[0x1f];
                      }
                      if (lVar23 == 0) goto LAB_02491464;
                      fVar59 = (float)FUN_026fd120(lVar23 + 0x50,0);
                      fVar83 = in_stack_00000080._4_4_;
                      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
                        fVar83 = fVar58;
                      }
                      fVar57 = 0.0;
                      fVar60 = 0.0;
                      if (!(bool)(bVar9 & uVar18 == 0x2026)) {
                        if (*unaff_x27 == 0) goto LAB_02491464;
                        fVar60 = (float)FUN_026fd140(*unaff_x27 + 0x50,0);
                        if (*unaff_x27 == 0) goto LAB_02491464;
                        fVar57 = (float)FUN_026fd180(*unaff_x27 + 0x50,0);
                      }
                      lVar23 = unaff_x19[200];
                      if ((lVar23 == 0) || (*(long *)(lVar23 + 0x20) == 0)) goto LAB_02491464;
                      fVar58 = *(float *)((long)unaff_x19 + 0x3fc);
                      fVar61 = *(float *)(lVar23 + 0x2c);
                      fVar76 = (float)FUN_026fd668(*(long *)(lVar23 + 0x20),0);
                      if (*unaff_x27 == 0) goto LAB_02491464;
                      fVar84 = (float)FUN_026fd170(*unaff_x27 + 0x50,0);
                      if (*unaff_x27 == 0) goto LAB_02491464;
                      fVar63 = *(float *)((long)unaff_x19 + 0x3fc);
                      fVar62 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
                      lVar23 = unaff_x19[0x6c];
                      if ((lVar23 == 0) || (lVar38 = *(long *)(lVar23 + 0x38), lVar38 == 0))
                      goto LAB_02491464;
                      if (*(uint *)(lVar38 + 0x18) <= *puVar1)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      lVar38 = lVar38 + (long)(int)*puVar1 * 0x178;
                      *(undefined4 *)(lVar38 + 0x2c) = 0;
                      fVar83 = ((fVar66 * fVar87) / (float)iVar19) * fVar59 * fVar83;
                      fVar76 = fVar83 * fVar58 * fVar61 * fVar76;
                      *(float *)(lVar38 + 0x160) = fVar76;
                      uVar20 = *(uint *)(unaff_x19 + 0x23);
                      fVar62 = fVar83 * fVar84 * fVar63 * fVar62;
                      if (uVar20 == 0) {
                        fStack0000000000000134 = *(float *)(unaff_x19 + 0xc2);
                      }
                      else {
                        lVar38 = unaff_x19[0xe0];
                        if (lVar38 == 0) goto LAB_02491464;
                        if (*(uint *)(lVar38 + 0x18) <= uVar20)
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                        ;
                        lVar38 = *(long *)(lVar38 + (long)(int)uVar20 * 8 + 0x20);
                        if (lVar38 == 0) goto LAB_02491464;
                        fStack0000000000000134 = *(float *)(lVar38 + 0x4c);
                      }
LAB_0248b384:
                      fVar58 = 0.0;
                      if (uVar18 != 3 && uVar18 != 0xad) {
                        fVar58 = fVar76;
                      }
                    }
                    else {
                      if (iVar19 == 0) goto LAB_0248af84;
LAB_0248abc8:
                      if (iVar19 == 1) {
                        if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0))
                        goto LAB_02491464;
                        if (*(uint *)(lVar23 + 0x18) <= *puVar1)
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                        ;
                        lVar23 = lVar23 + (long)(int)*puVar1 * 0x178;
                        lVar49 = *(long *)(lVar23 + 0x40);
                        unaff_x19[0xd2] = lVar49;
                        *(undefined4 *)((long)unaff_x19 + 0x69c) = *(undefined4 *)(lVar23 + 0x48);
                        if ((lVar49 == 0) || (lVar23 = FUN_024ebfa0(lVar49,0), lVar23 == 0))
                        goto LAB_02491464;
                        FUN_0132138c(lVar23,*(undefined4 *)((long)unaff_x19 + 0x69c),
                                     &stack0x00000880,
                                     *(undefined8 *)
                                      System_Func<KeyValuePair<int,_int>,_int>_TypeInfo);
                        puVar12 = System_Threading_Mutex_TypeInfo;
                        plVar39 = (long *)System_Threading_Mutex_TypeInfo;
                        if (dVar67 == 0.0) goto LAB_0248ab98;
                        if (uVar18 == 0x3c) {
                          uVar18 = *(int *)((long)unaff_x19 + 0x69c) + 0xe000;
                        }
                        else {
                          lVar23 = *(long *)System_Threading_Mutex_TypeInfo;
                          if (*(int *)(lVar23 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                            lVar23 = *(long *)puVar12;
                          }
                          *(undefined4 *)((long)unaff_x19 + 0x1b4) =
                               *(undefined4 *)(*(long *)(lVar23 + 0xb8) + 0x68);
                        }
                        if (unaff_x19[0x1f] == 0) goto LAB_02491464;
                        fVar76 = *(float *)(unaff_x19 + 0x3c);
                        memmove(&stack0x00001700,(void *)(unaff_x19[0x1f] + 0x50),0x60);
                        iVar19 = FUN_026fd110(&stack0x00001700,0);
                        if (*unaff_x27 == 0) goto LAB_02491464;
                        memmove(&stack0x00001700,(void *)(*unaff_x27 + 0x50),0x60);
                        fVar57 = (float)FUN_026fd120(&stack0x00001700,0);
                        fVar87 = in_stack_00000080._4_4_;
                        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
                          fVar87 = 1.0;
                        }
                        if (unaff_x19[0xd2] == 0) goto LAB_02491464;
                        fVar87 = (fVar76 / (float)iVar19) * fVar57 * fVar87;
                        iVar19 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
                        fVar76 = *(float *)(unaff_x19 + 0x3c);
                        if (iVar19 < 1) {
                          if (*unaff_x27 == 0) goto LAB_02491464;
                          iVar19 = FUN_026fd110(*unaff_x27 + 0x50,0);
                          if (*unaff_x27 == 0) goto LAB_02491464;
                          fVar83 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
                          fVar57 = in_stack_00000080._4_4_;
                          if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
                            fVar57 = fVar58;
                          }
                          if (unaff_x19[0x1f] == 0) goto LAB_02491464;
                          fVar58 = (float)FUN_026fd140(unaff_x19[0x1f] + 0x50,0);
                          if (*(long *)((long)dVar67 + 0x20) == 0) goto LAB_02491464;
                          FUN_026fd62c(&stack0x00000880,*(long *)((long)dVar67 + 0x20),0);
                          unaff_x28[0x1cd] = unaff_x28[1];
                          unaff_x28[0x1cc] = *unaff_x28;
                          fVar59 = (float)FUN_026fd45c(&stack0x000016e0,0);
                          if (*(long *)((long)dVar67 + 0x20) == 0) goto LAB_02491464;
                          fVar61 = *(float *)((long)dVar67 + 0x2c);
                          fVar84 = (float)FUN_026fd668(*(long *)((long)dVar67 + 0x20),0);
                          if (*unaff_x27 == 0) goto LAB_02491464;
                          fVar60 = (float)FUN_026fd140(*unaff_x27 + 0x50,0);
                          if (*unaff_x27 == 0) goto LAB_02491464;
                          fVar63 = (float)FUN_026fd170(*unaff_x27 + 0x50,0);
                          if (*unaff_x27 == 0) goto LAB_02491464;
                          fVar77 = *(float *)((long)unaff_x19 + 0x3fc);
                          fVar62 = (float)FUN_026fd120(*unaff_x27 + 0x50,0);
                          if (unaff_x19[0x1f] == 0) goto LAB_02491464;
                          fVar62 = fVar87 * fVar63 * fVar77 * fVar62;
                          fVar57 = (fVar76 / (float)iVar19) * fVar83 * fVar57;
                          fVar76 = fVar57 * (fVar58 / fVar59) * fVar61 * fVar84;
                          fVar57 = fVar57 / fVar76;
                          fVar60 = fVar57 * fVar60;
                          fVar58 = (float)FUN_026fd180(unaff_x19[0x1f] + 0x50,0);
                          fVar57 = fVar57 * fVar58;
                        }
                        else {
                          if (unaff_x19[0xd2] == 0) goto LAB_02491464;
                          iVar19 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
                          if (unaff_x19[0xd2] == 0) goto LAB_02491464;
                          fVar58 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
                          if (*(long *)((long)dVar67 + 0x20) == 0) goto LAB_02491464;
                          fVar83 = *(float *)((long)dVar67 + 0x2c);
                          fVar57 = in_stack_00000080._4_4_;
                          if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
                            fVar57 = 1.0;
                          }
                          fVar59 = (float)FUN_026fd668(*(long *)((long)dVar67 + 0x20),0);
                          if (unaff_x19[0xd2] == 0) goto LAB_02491464;
                          fVar60 = (float)FUN_026fd140(unaff_x19[0xd2] + 0x48,0);
                          if (unaff_x19[0xd2] == 0) goto LAB_02491464;
                          fVar61 = (float)FUN_026fd170(unaff_x19[0xd2] + 0x48,0);
                          if (unaff_x19[0xd2] == 0) goto LAB_02491464;
                          fVar84 = *(float *)((long)unaff_x19 + 0x3fc);
                          fVar62 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
                          if (unaff_x19[0xd2] == 0) goto LAB_02491464;
                          fVar62 = fVar87 * fVar61 * fVar84 * fVar62;
                          fVar76 = (fVar76 / (float)iVar19) * fVar58 * fVar57 * fVar83 * fVar59;
                          fVar57 = (float)FUN_026fd180(unaff_x19[0xd2] + 0x48,0);
                        }
                        lVar23 = unaff_x19[0x6c];
                        unaff_x19[200] = (long)dVar67;
                        if ((lVar23 != 0) && (lVar49 = *(long *)(lVar23 + 0x38), lVar49 != 0)) {
                          if (*puVar1 < *(uint *)(lVar49 + 0x18)) {
                            lVar49 = lVar49 + (long)(int)*puVar1 * 0x178;
                            *(undefined4 *)(lVar49 + 0x2c) = 1;
                            *(float *)(lVar49 + 0x160) = fVar76;
                            fStack0000000000000134 = 0.0;
                            *(long *)(lVar49 + 0x40) = unaff_x19[0xd2];
                            *(long *)(lVar49 + 0x38) = unaff_x19[0x1f];
                            *(int *)(lVar49 + 0x58) = (int)unaff_x19[0x23];
                            *(int *)(unaff_x19 + 0x23) = (int)lVar38;
                            goto LAB_0248b384;
                          }
                          goto 
                          UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                          ;
                        }
                        goto LAB_02491464;
                      }
                      lVar23 = *plVar2;
                      fVar58 = 0.0;
                      if (uVar18 != 3 && uVar18 != 0xad) {
                        fVar58 = fVar76;
                      }
                      fVar62 = 0.0;
                      if (lVar23 == 0) goto LAB_02491464;
                      fVar60 = 0.0;
                      fVar57 = 0.0;
                    }
                    lVar23 = *(long *)(lVar23 + 0x38);
                    if (lVar23 == 0) goto LAB_02491464;
                    if (*(uint *)(lVar23 + 0x18) <= *puVar1)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    lVar23 = lVar23 + (long)(int)*puVar1 * 0x178;
                    *(short *)(lVar23 + 0x20) = (short)uVar18;
                    *(int *)(lVar23 + 0x60) = (int)unaff_x19[0x3c];
                    *(undefined4 *)(lVar23 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4e4);
                    if ((unaff_x19[0x6c] == 0) ||
                       (lVar23 = *(long *)(unaff_x19[0x6c] + 0x38), lVar23 == 0)) goto LAB_02491464;
                    if (*(uint *)(lVar23 + 0x18) <= *puVar1)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    *(int *)(lVar23 + (long)(int)*puVar1 * 0x178 + 0x168) = (int)unaff_x19[0x2a];
                    if ((unaff_x19[0x6c] == 0) ||
                       (lVar23 = *(long *)(unaff_x19[0x6c] + 0x38), lVar23 == 0)) goto LAB_02491464;
                    if (*(uint *)(lVar23 + 0x18) <= *puVar1)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    *(undefined4 *)(lVar23 + (long)(int)*puVar1 * 0x178 + 0x170) =
                         *(undefined4 *)((long)unaff_x19 + 0x154);
                    if ((unaff_x19[0x6c] == 0) ||
                       (lVar23 = *(long *)(unaff_x19[0x6c] + 0x38), lVar23 == 0)) goto LAB_02491464;
                    uVar20 = *puVar1;
                    FUN_013b78b8(unaff_x19 + 0xa9,&stack0x00000880,
                                 *(undefined8 *)TMPro_TMP_Dropdown_OptionData_TypeInfo);
                    if (*(uint *)(lVar23 + 0x18) <= uVar20)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    uVar25 = unaff_x28[1];
                    uVar31 = *unaff_x28;
                    lVar23 = lVar23 + (long)(int)uVar20 * 0x178;
                    *(undefined4 *)(lVar23 + 0x18c) = 0;
                    *(undefined8 *)(lVar23 + 0x184) = uVar25;
                    *(undefined8 *)(lVar23 + 0x17c) = uVar31;
                    if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0))
                    goto LAB_02491464;
                    if (*(uint *)(lVar23 + 0x18) <= *puVar1)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    *(undefined4 *)(lVar23 + (long)(int)*puVar1 * 0x178 + 400) =
                         *(undefined4 *)((long)unaff_x19 + 0x254);
                    if ((unaff_x19[200] == 0) ||
                       (lVar23 = *(long *)(unaff_x19[200] + 0x20), lVar23 == 0)) goto LAB_02491464;
                    FUN_026fd62c(&stack0x00000bf8,lVar23,0);
                    unaff_x28[0x1df] = in_stack_00000c00;
                    unaff_x28[0x1de] = CONCAT44(in_stack_00000bfc,uVar90);
                    if ((int)uVar18 < 0x10000) {
                      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0)
                      {
                        thunk_FUN_00d32864();
                      }
                      uVar20 = FUN_016f68bc(uVar18,0);
                      uVar20 = uVar20 & 1;
                    }
                    else {
                      uVar20 = 0;
                    }
                    fStack00000000000000cc = *(float *)(unaff_x19 + 0x54);
                    *(undefined4 *)((long)unaff_x19 + 0x2f4) = 0;
                    if (*(char *)((long)unaff_x19 + 0x2f1) == '\0') {
                      fVar59 = 0.0;
                      fVar83 = 0.0;
                      fVar87 = 0.0;
                    }
                    else {
                      if (unaff_x19[200] == 0) goto LAB_02491464;
                      uVar34 = *puVar1;
                      uVar4 = *(uint *)(unaff_x19[200] + 0x28);
                      if ((int)uVar34 < (int)uVar37) {
                        if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0))
                        goto LAB_02491464;
                        if (*(uint *)(lVar23 + 0x18) <= uVar34 + 1)
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                        ;
                        lVar23 = *(long *)(lVar23 + (long)(int)(uVar34 + 1) * 0x178 + 0x30);
                        if ((((lVar23 == 0) || (*unaff_x27 == 0)) ||
                            (lVar38 = *(long *)(*unaff_x27 + 0x128), lVar38 == 0)) ||
                           (lVar38 = *(long *)(lVar38 + 0x18), lVar38 == 0)) goto LAB_02491464;
                        dVar67 = (double)(ulong)(uVar4 | *(int *)(lVar23 + 0x28) << 0x10);
                        uVar28 = FUN_0129eff4(lVar38,&stack0x00000880,&stack0x000016d8,
                                              *(undefined8 *)
                                               Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                                             );
                        uVar88 = 0;
                        if ((uVar28 & 1) == 0) {
                          fVar59 = 0.0;
                          fVar83 = 0.0;
                          fVar87 = 0.0;
                        }
                        else {
                          if (in_stack_000016d8 == 0) goto LAB_02491464;
                          fVar87 = *(float *)(in_stack_000016d8 + 0x14);
                          fVar83 = *(float *)(in_stack_000016d8 + 0x18);
                          fVar59 = *(float *)(in_stack_000016d8 + 0x1c);
                          uVar88 = *(undefined4 *)(in_stack_000016d8 + 0x20);
                          if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
                            fStack00000000000000cc = 0.0;
                          }
                        }
                        uVar34 = *puVar1;
                      }
                      else {
                        uVar88 = 0;
                        fVar59 = 0.0;
                        fVar83 = 0.0;
                        fVar87 = 0.0;
                      }
                      if (0 < (int)uVar34) {
                        if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0))
                        goto LAB_02491464;
                        if (*(uint *)(lVar23 + 0x18) <= (uint)((long)(int)uVar34 + -1))
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                        ;
                        lVar23 = *(long *)(lVar23 + ((long)(int)uVar34 + -1) * 0x178 + 0x30);
                        if (((lVar23 == 0) || (*unaff_x27 == 0)) ||
                           ((lVar38 = *(long *)(*unaff_x27 + 0x128), lVar38 == 0 ||
                            (lVar38 = *(long *)(lVar38 + 0x18), lVar38 == 0)))) goto LAB_02491464;
                        dVar67 = (double)(ulong)(*(uint *)(lVar23 + 0x28) | uVar4 << 0x10);
                        uVar28 = FUN_0129eff4(lVar38,&stack0x00000880,&stack0x000016d8,
                                              *(undefined8 *)
                                               Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                                             );
                        if ((uVar28 & 1) != 0) {
                          if ((in_stack_000016d8 == 0) ||
                             (fVar87 = (float)FUN_024bb1bc(fVar87,fVar83,fVar59,uVar88,
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
                      *(float *)((long)unaff_x19 + 0x2f4) = fVar59;
                    }
                    if ((char)unaff_x19[0x1d] != '\0') {
                      fVar84 = *(float *)(unaff_x19 + 199);
                      fVar61 = (float)FUN_026fd474(&stack0x00001770,0);
                      fVar84 = fVar84 - fVar58 * fVar61 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc)
                                                          );
                      *(float *)(unaff_x19 + 199) = fVar84;
                      if ((uVar20 != 0) || (uVar18 == 0x200b)) {
                        *(float *)(unaff_x19 + 199) =
                             fVar84 - fVar52 * *(float *)((long)unaff_x19 + 0x2ac);
                      }
                    }
                    fVar84 = *(float *)(unaff_x19 + 0x55);
                    fVar61 = 0.0;
                    if (fVar84 != 0.0) {
                      fVar61 = (float)FUN_026fd454(&stack0x00001770,0);
                      fVar63 = (float)FUN_026fd464(&stack0x00001770,0);
                      fVar61 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                               (fVar84 * 0.5 - fVar58 * (fVar61 * 0.5 + fVar63));
                      *(float *)(unaff_x19 + 199) = *(float *)(unaff_x19 + 199) + fVar61;
                    }
                    if (((cVar33 == '\0') && (*(int *)((long)unaff_x19 + 0x63c) == 0)) &&
                       ((*(byte *)((long)unaff_x19 + 0x254) & 1) != 0)) {
                      lVar23 = unaff_x19[0x22];
                      if (*(int *)(*(long *)
                                    System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                  + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      uVar28 = FUN_02681b9c(lVar23,0,0);
                      fVar63 = 0.0;
                      if ((uVar28 & 1) != 0) {
                        lVar23 = unaff_x19[0x22];
                        if (*(int *)(*(long *)
                                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                    + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        plVar39 = (long *)
                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                        ;
                        if (lVar23 == 0) goto LAB_02491464;
                        uVar28 = FUN_0267e1d8(lVar23,*(undefined4 *)
                                                      (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                  + 0xb8) + 0x54),0);
                        if ((uVar28 & 1) != 0) {
                          lVar23 = unaff_x19[0x22];
                          if (*(int *)(*plVar39 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                            plVar39 = (long *)
                                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                            ;
                          }
                          if (lVar23 == 0) goto LAB_02491464;
                          fVar84 = (float)FUN_0267f610(lVar23,*(undefined4 *)
                                                               (*(long *)(*plVar39 + 0xb8) + 0x54),0
                                                      );
                          if ((*unaff_x27 == 0) || (unaff_x19[0x22] == 0)) goto LAB_02491464;
                          fVar77 = *(float *)(*unaff_x27 + 0x1b0);
                          fVar63 = (float)FUN_0267f610(unaff_x19[0x22],
                                                       *(undefined4 *)
                                                        (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                  + 0xb8) + 0xcc),0);
                          fVar63 = fVar63 * fVar84 * fVar77 * 0.25;
                          if (fVar84 < fStack0000000000000134 + fVar63) {
                            fStack0000000000000134 = fVar84 - fVar63;
                          }
                        }
                      }
                      if (*unaff_x27 == 0) goto LAB_02491464;
                      fStack00000000000000c4 = *(float *)(*unaff_x27 + 0x1b4);
                    }
                    else {
                      lVar23 = unaff_x19[0x22];
                      if (*(int *)(*(long *)
                                    System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                  + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      uVar28 = FUN_02681b9c(lVar23,0,0);
                      fStack00000000000000c4 = 0.0;
                      if ((uVar28 & 1) != 0) {
                        lVar23 = unaff_x19[0x22];
                        if (*(int *)(*(long *)
                                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                    + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        plVar39 = (long *)
                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                        ;
                        if (lVar23 == 0) goto LAB_02491464;
                        uVar28 = FUN_0267e1d8(lVar23,*(undefined4 *)
                                                      (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                  + 0xb8) + 0x54),0);
                        if ((uVar28 & 1) != 0) {
                          lVar23 = unaff_x19[0x22];
                          if (*(int *)(*plVar39 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                            plVar39 = (long *)
                                      Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                            ;
                          }
                          if (lVar23 == 0) goto LAB_02491464;
                          uVar28 = FUN_0267e1d8(lVar23,*(undefined4 *)
                                                        (*(long *)(*plVar39 + 0xb8) + 0xcc),0);
                          if ((uVar28 & 1) != 0) {
                            lVar23 = unaff_x19[0x22];
                            if (*(int *)(*plVar39 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                              plVar39 = (long *)
                                        Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                              ;
                            }
                            if (lVar23 != 0) {
                              fVar84 = (float)FUN_0267f610(lVar23,*(undefined4 *)
                                                                   (*(long *)(*plVar39 + 0xb8) +
                                                                   0x54),0);
                              if ((*unaff_x27 != 0) && (unaff_x19[0x22] != 0)) {
                                fVar77 = *(float *)(*unaff_x27 + 0x1a8);
                                fVar63 = (float)FUN_0267f610(unaff_x19[0x22],
                                                             *(undefined4 *)
                                                              (*(long *)(*(long *)
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                                                  + 0xb8) + 0xcc),0);
                                fVar63 = fVar63 * fVar84 * fVar77 * 0.25;
                                if (fVar84 < fStack0000000000000134 + fVar63) {
                                  fStack0000000000000134 = fVar84 - fVar63;
                                }
                                goto LAB_0248ba68;
                              }
                            }
                            goto LAB_02491464;
                          }
                        }
                      }
                      fVar63 = 0.0;
                    }
LAB_0248ba68:
                    fVar78 = *(float *)(unaff_x19 + 199);
                    fVar84 = (float)FUN_026fd464(&stack0x00001770,0);
                    fVar78 = fVar78 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                                      fVar58 * (fVar87 + ((fVar84 - fStack0000000000000134) - fVar63
                                                         ));
                    fVar87 = (float)FUN_026fd46c(&stack0x00001770,0);
                    fVar77 = *(float *)((long)unaff_x19 + 0x614) +
                             ((fVar62 + fVar58 * (fVar83 + fStack0000000000000134 + fVar87)) -
                             *(float *)(unaff_x19 + 0x9a));
                    fVar87 = (float)FUN_026fd45c(&stack0x00001770,0);
                    fVar81 = fVar77 - fVar58 * (fStack0000000000000134 + fStack0000000000000134 +
                                               fVar87);
                    fVar87 = (float)FUN_026fd454(&stack0x00001770,0);
                    fVar84 = fVar78 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                                      fVar58 * (fVar63 + fVar63 +
                                               fStack0000000000000134 + fStack0000000000000134 +
                                               fVar87);
                    fVar87 = fVar78;
                    fVar83 = fVar84;
                    if (((*(int *)((long)unaff_x19 + 0x63c) == 0) && (cVar33 == '\0')) &&
                       ((*(byte *)((long)unaff_x19 + 0x254) >> 1 & 1) != 0)) {
                      fVar80 = (float)(int)unaff_x19[0xbd] * fVar74;
                      fVar87 = (float)FUN_026fd46c(&stack0x00001770,0);
                      fVar65 = fVar80 * fVar58 * (fVar63 + fStack0000000000000134 + fVar87);
                      fVar87 = (float)FUN_026fd46c(&stack0x00001770,0);
                      fVar83 = (float)FUN_026fd45c(&stack0x00001770,0);
                      fVar77 = fVar77 + 0.0;
                      fVar81 = fVar81 + 0.0;
                      fVar80 = fVar80 * fVar58 * (((fVar87 - fVar83) - fStack0000000000000134) -
                                                 fVar63);
                      fVar83 = fVar84 + fVar80;
                      fVar87 = fVar78 + fVar65;
                      fVar72 = (fVar65 - fVar80) * 0.5;
                      fVar78 = (fVar78 + fVar80) - fVar72;
                      fVar84 = (fVar84 + fVar65) - fVar72;
                      fVar87 = fVar87 - fVar72;
                      fVar83 = fVar83 - fVar72;
                    }
                    if (*(char *)((long)unaff_x19 + 0x46c) == '\0') {
                      fVar65 = 0.0;
                      fVar79 = 0.0;
                      fStack00000000000000e0 = 0.0;
                      fStack00000000000000e4 = 0.0;
                      fVar72 = fVar81;
                      fVar80 = fVar77;
                      fStack00000000000000e8 = fVar87;
                      fStack00000000000000ec = fVar78;
                    }
                    else {
                      thunk_FUN_026935f0(lVar24,0);
                      fVar82 = (fVar84 + fVar78) * 0.5;
                      fVar85 = (fVar81 + fVar77) * 0.5;
                      fVar77 = fVar77 - fVar85;
                      fVar70 = 0.0;
                      fVar80 = fVar77;
                      fVar64 = (float)FUN_02692df0(fVar87 - fVar82,lVar24,0);
                      fVar81 = fVar81 - fVar85;
                      fVar71 = 0.0;
                      fVar87 = fVar81;
                      fVar78 = (float)FUN_02692df0(fVar78 - fVar82,lVar24,0);
                      fVar79 = 0.0;
                      fVar84 = (float)FUN_02692df0(fVar84 - fVar82,lVar24,0);
                      fVar84 = fVar82 + fVar84;
                      fVar77 = fVar85 + fVar77;
                      fVar79 = fVar79 + 0.0;
                      fVar65 = 0.0;
                      fVar83 = (float)FUN_02692df0(fVar83 - fVar82,lVar24,0);
                      fVar83 = fVar82 + fVar83;
                      fVar81 = fVar85 + fVar81;
                      fVar65 = fVar65 + 0.0;
                      fVar72 = fVar85 + fVar87;
                      fVar80 = fVar85 + fVar80;
                      fStack00000000000000e8 = fVar82 + fVar64;
                      fStack00000000000000ec = fVar82 + fVar78;
                      fStack00000000000000e0 = fVar71 + 0.0;
                      fStack00000000000000e4 = fVar70 + 0.0;
                    }
                    if (*plVar2 == 0) goto LAB_02491464;
                    lVar23 = *(long *)(*plVar2 + 0x38);
                    uVar28 = (ulong)(uint)fVar58;
                    if (lVar23 == 0) goto LAB_02491464;
                    if (*(uint *)(lVar23 + 0x18) <= *puVar1)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    lVar23 = lVar23 + (long)(int)*puVar1 * 0x178;
                    *(float *)(lVar23 + 0x120) = fVar72;
                    *(float *)(lVar23 + 0x11c) = fStack00000000000000ec;
                    *(float *)(lVar23 + 0x124) = fStack00000000000000e0;
                    if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0))
                    goto LAB_02491464;
                    if (*(uint *)(lVar23 + 0x18) <= *puVar1)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    lVar23 = lVar23 + (long)(int)*puVar1 * 0x178;
                    *(float *)(lVar23 + 0x114) = fVar80;
                    *(float *)(lVar23 + 0x110) = fStack00000000000000e8;
                    *(float *)(lVar23 + 0x118) = fStack00000000000000e4;
                    if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0))
                    goto LAB_02491464;
                    if (*(uint *)(lVar23 + 0x18) <= *puVar1)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    lVar23 = lVar23 + (long)(int)*puVar1 * 0x178;
                    *(float *)(lVar23 + 0x128) = fVar84;
                    *(float *)(lVar23 + 300) = fVar77;
                    *(float *)(lVar23 + 0x130) = fVar79;
                    if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0))
                    goto LAB_02491464;
                    if (*(uint *)(lVar23 + 0x18) <= *puVar1)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    lVar23 = lVar23 + (long)(int)*puVar1 * 0x178;
                    *(float *)(lVar23 + 0x134) = fVar83;
                    *(float *)(lVar23 + 0x138) = fVar81;
                    *(float *)(lVar23 + 0x13c) = fVar65;
                    if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0))
                    goto LAB_02491464;
                    uVar4 = *puVar1;
                    lVar38 = (long)(int)uVar4;
                    if (*(uint *)(lVar23 + 0x18) <= uVar4)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    lVar49 = lVar23 + lVar38 * 0x178;
                    *(int *)(lVar49 + 0x140) = (int)unaff_x19[199];
                    fVar83 = *(float *)(unaff_x19 + 0x9a);
                    uVar68 = (ulong)(uint)fVar83;
                    fVar87 = *(float *)((long)unaff_x19 + 0x614);
                    *(float *)(lVar49 + 0x15c) =
                         (fVar84 - fStack00000000000000ec) / (fVar80 - fVar72);
                    *(float *)(lVar49 + 0x14c) = (fVar62 - fVar83) + fVar87;
                    fVar60 = fVar60 * fVar58;
                    if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
                      fVar60 = fVar60 / fVar66;
                      fVar57 = (fVar57 * fVar58) / fVar66;
                    }
                    else {
                      fVar57 = fVar57 * fVar58;
                    }
                    uVar34 = *(uint *)(unaff_x19 + 0x92);
                    bVar16 = uVar20 != 0;
                    fVar60 = fVar87 + fVar60;
                    bVar17 = uVar4 != uVar34;
                    if (bVar17 && bVar16) {
                      fVar87 = *(float *)(unaff_x19 + 0x98);
                      lVar23 = lVar23 + lVar38 * 0x178;
                      *(float *)(lVar23 + 0x154) = fVar87;
                      fVar57 = *(float *)((long)unaff_x19 + 0x4c4);
                      *(float *)(lVar23 + 0x148) = fVar87 - fVar83;
                      *(float *)(lVar23 + 0x158) = fVar57;
                      *(float *)(unaff_x19 + 0x97) = fVar87 - fVar83;
                      fVar57 = fVar57 - fVar83;
                      *(float *)(lVar23 + 0x150) = fVar57;
                    }
                    else {
                      fVar57 = fVar87 + fVar57;
                      fVar84 = fVar60;
                      fVar62 = fVar57;
                      if (fVar87 != 0.0) {
                        fVar84 = (fVar60 - fVar87) / *(float *)((long)unaff_x19 + 0x3fc);
                        fVar62 = (fVar57 - fVar87) / *(float *)((long)unaff_x19 + 0x3fc);
                        if (fVar84 <= fVar60) {
                          fVar84 = fVar60;
                        }
                        if (fVar57 <= fVar62) {
                          fVar62 = fVar57;
                        }
                      }
                      lVar23 = lVar23 + lVar38 * 0x178;
                      fVar87 = fVar84;
                      if (fVar84 <= *(float *)(unaff_x19 + 0x98)) {
                        fVar87 = *(float *)(unaff_x19 + 0x98);
                      }
                      fVar77 = fVar62;
                      if (*(float *)((long)unaff_x19 + 0x4c4) <= fVar62) {
                        fVar77 = *(float *)((long)unaff_x19 + 0x4c4);
                      }
                      *(float *)((long)unaff_x19 + 0x4c4) = fVar77;
                      fVar57 = fVar57 - fVar83;
                      *(float *)(unaff_x19 + 0x98) = fVar87;
                      *(float *)(lVar23 + 0x154) = fVar84;
                      *(float *)(lVar23 + 0x158) = fVar62;
                      *(float *)(lVar23 + 0x148) = fVar60 - fVar83;
                      *(float *)(unaff_x19 + 0x97) = fVar60 - fVar83;
                      *(float *)(lVar23 + 0x150) = fVar57;
                    }
                    *(float *)((long)unaff_x19 + 0x4bc) = fVar57;
                    if (((int)unaff_x19[0x94] == 0) || (*(char *)((long)unaff_x19 + 0x334) != '\0'))
                    {
                      if (!bVar17 || !bVar16) {
                        *(float *)(unaff_x19 + 0x96) = fVar87;
                        if (unaff_x19[0x1f] != 0) {
                          fVar87 = *(float *)((long)unaff_x19 + 0x4b4);
                          fVar57 = (float)FUN_026fd150(unaff_x19[0x1f] + 0x50,0);
                          fVar66 = (fVar58 * fVar57) / fVar66;
                          uVar68 = (ulong)*(uint *)(unaff_x19 + 0x9a);
                          if (fVar87 <= fVar66) {
                            fVar87 = fVar66;
                          }
                          *(float *)((long)unaff_x19 + 0x4b4) = fVar87;
                          goto LAB_0248bef4;
                        }
                        goto LAB_02491464;
                      }
                    }
                    else {
LAB_0248bef4:
                      if ((!bVar17 || !bVar16) && (float)uVar68 == 0.0) {
                        fVar66 = *(float *)((long)unaff_x19 + 0x4ac);
                        if (*(float *)((long)unaff_x19 + 0x4ac) <= fVar60) {
                          fVar66 = fVar60;
                        }
                        *(float *)((long)unaff_x19 + 0x4ac) = fVar66;
                      }
                    }
                    lVar23 = *plVar2;
                    if ((lVar23 == 0) || (lVar38 = *(long *)(lVar23 + 0x38), lVar38 == 0))
                    goto LAB_02491464;
                    uVar50 = *puVar1;
                    if (*(uint *)(lVar38 + 0x18) <= uVar50)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    lVar38 = lVar38 + (long)(int)uVar50 * 0x178;
                    *(undefined1 *)(lVar38 + 0x194) = 0;
                    uVar42 = *(uint *)(unaff_x19 + 0x4e);
                    if ((uVar18 == 9) ||
                       (((((uVar20 == 0 && (uVar18 != 3)) && (uVar18 != 0x200b)) && (uVar18 != 0xad)
                         ) || (((bool)(uVar18 == 0xad & (bVar15 ^ 1U)) ||
                               (*(int *)((long)unaff_x19 + 0x63c) == 1)))))) {
                      *(undefined1 *)(lVar38 + 0x194) = 1;
                      pfVar40 = (float *)((long)unaff_x19 + 0x34c);
                      pfVar43 = (float *)(unaff_x19 + 0x69);
                      if (bVar9) {
                        lVar23 = *(long *)(lVar23 + 0x50);
                        if (lVar23 == 0) goto LAB_02491464;
                        if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                        ;
                        lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                        pfVar43 = (float *)(lVar23 + 0x60);
                        pfVar40 = (float *)(lVar23 + 100);
                      }
                      fVar87 = *pfVar43;
                      fVar57 = *pfVar40;
                      fVar66 = *(float *)(unaff_x19 + 0x6b);
                      fVar83 = *(float *)(unaff_x19 + 199);
                      fStack00000000000000dc = (fVar86 - fVar87) - fVar57;
                      bVar16 = true;
                      if ((fVar66 <= fStack00000000000000dc) && (bVar16 = false, !NAN(fVar66))) {
                        bVar16 = fVar66 == -1.0;
                      }
                      if (!bVar16) {
                        fStack00000000000000dc = fVar66;
                      }
                      fVar66 = 0.0;
                      if ((char)unaff_x19[0x1d] == '\0') {
                        fVar66 = (float)FUN_026fd474(&stack0x00001770,0);
                        uVar68 = (ulong)*(uint *)(unaff_x19 + 0x9a);
                      }
                      fVar62 = *(float *)((long)unaff_x19 + 0x4c4);
                      fVar84 = *(float *)((long)unaff_x19 + 0x2cc);
                      fVar60 = (float)uVar68;
                      if (uVar18 != 0xad) {
                        fVar76 = fVar58;
                      }
                      fVar77 = 0.0;
                      if ((0.0 < fVar60) && (fVar77 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')
                         ) {
                        fVar77 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
                      }
                      fVar77 = (*(float *)(unaff_x19 + 0x96) - (fVar62 - fVar60)) + fVar77;
                      uVar50 = *puVar1;
                      if (fVar53 < fVar77) {
                        if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
                          *(uint *)((long)unaff_x19 + 0x2dc) = uVar50;
                        }
                        unaff_x29 = (long *)StringLiteral_302;
                        plVar39 = (long *)System_Threading_Mutex_TypeInfo;
                        uVar31 = DAT_02941c08;
                        if ((char)unaff_x19[0x46] != '\0') {
                          fVar81 = *(float *)(unaff_x19 + 0x58);
                          if (((fVar81 < *(float *)((long)unaff_x19 + 0x2b4)) && (0.0 < fVar60)) &&
                             (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                            fVar51 = *(float *)((long)unaff_x19 + 0x2b4) +
                                     ((fVar89 - fVar77) / (float)(int)unaff_x19[0x94]) /
                                     fStack0000000000000054;
                            if (fVar51 <= fVar81) {
                              fVar51 = fVar81;
                            }
                            goto LAB_0248ea5c;
                          }
                          fVar77 = *(float *)((long)unaff_x19 + 0x1dc);
                          fVar60 = *(float *)(unaff_x19 + 0x49);
                          uVar68 = (ulong)(uint)fVar60;
                          if ((fVar60 < fVar77) &&
                             (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                            fVar51 = (fVar77 - *(float *)(unaff_x19 + 0x47)) * 0.5;
                            if (fVar51 <= DAT_028aa298) {
                              fVar51 = DAT_028aa298;
                            }
                            fVar52 = (fVar77 - fVar51) * 20.0 + 0.5;
                            fVar51 = DAT_02958220;
                            if (fVar52 != INFINITY) {
                              fVar51 = (float)(int)fVar52 / 20.0;
                            }
                            if (fVar51 <= fVar60) {
                              fVar51 = fVar60;
                            }
                            *(float *)((long)unaff_x19 + 0x234) = fVar77;
                            goto LAB_0248e598;
                          }
                        }
                        switch((int)unaff_x19[0x5b]) {
                        case 1:
                          lVar23 = *(long *)System_Threading_Mutex_TypeInfo;
                          if (*(int *)(lVar23 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                            lVar23 = *plVar39;
                          }
                          lVar38 = *(long *)(lVar23 + 0xb8);
                          lVar23 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
                          if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                            lVar23 = FUN_00d5941c(lVar23);
                          }
                          unaff_x29 = (long *)StringLiteral_302;
                          lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 8);
                          if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                            lVar23 = FUN_00d5941c();
                          }
                          piVar29 = (int *)thunk_FUN_00d32ed4(lVar38 + 0x11f0,
                                                              *(long *)(lVar23 + 0x80) + 0xa0);
                          if (*piVar29 == 0) {
LAB_0248e4bc:
                            in_stack_000017a8 = DAT_02941c08;
                            puVar1[0] = 0;
                            puVar1[1] = 0;
                            uVar91 = 0xffffffff;
                          }
                          else {
                            lVar23 = *plVar39;
                            if (*(int *)(lVar23 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                              lVar23 = *plVar39;
                            }
                            FUN_013b8de4(*(long *)(lVar23 + 0xb8) + 0x11f0,&stack0x00000880,
                                         *(undefined8 *)
                                          Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                                        );
                            memcpy(&stack0x00001360,&stack0x00000880,0x378);
LAB_0248c8f4:
                            iVar19 = FUN_024d66ec();
LAB_0248c900:
                            iVar7 = *(int *)((long)unaff_x19 + 0x48c) + -1;
                            *(int *)((long)unaff_x19 + 0x48c) = iVar7;
                            iStack0000000000000144 = iStack0000000000000144 + 1;
                            uVar91 = iVar19 - 1;
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
                          uVar91 = FUN_024d66ec();
                          break;
                        case 5:
                          if ((uVar50 == 0) || ((int)uVar91 < 0)) {
                            *puVar1 = 0;
                            plVar39 = (long *)System_Threading_Mutex_TypeInfo;
                            unaff_x29 = (long *)StringLiteral_302;
                            uVar91 = 0xffffffff;
                            in_stack_000017a8 = uVar31;
                          }
                          else {
                            fVar76 = *(float *)(unaff_x19 + 0x98);
                            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar91 = FUN_024d66ec();
                            if (fVar53 < fVar76 - fVar62) break;
                            *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
                            *(undefined4 *)(unaff_x19 + 0x92) =
                                 *(undefined4 *)((long)unaff_x19 + 0x48c);
                            uVar68 = *(ulong *)(*(long *)(*plVar39 + 0xb8) + 0x15a8);
                            *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
                            *(undefined4 *)(unaff_x19 + 0x99) = 0;
                            lVar23 = NEON_rev64(uVar68,4);
                            unaff_x19[0x98] = lVar23;
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
                          uVar91 = FUN_024d66ec();
                          unaff_x29 = (long *)StringLiteral_302;
                          lVar23 = unaff_x19[0x5c];
                          if (*(int *)(*(long *)
                                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                      + 0xe0) == 0) {
                            thunk_FUN_00d32864(*(long *)
                                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                              );
                          }
                          uVar26 = FUN_02681b9c(lVar23,0,0);
                          if ((uVar26 & 1) != 0) {
                            plVar48 = (long *)unaff_x19[0x5c];
                            uVar31 = (**(code **)(*unaff_x19 + 0x548))();
                            if (plVar48 == (long *)0x0) goto LAB_02491464;
                            (**(code **)(*plVar48 + 0x558))
                                      (plVar48,uVar31,*(undefined8 *)(*plVar48 + 0x560));
                            lVar23 = unaff_x19[0x5c];
                            if (lVar23 == 0) goto LAB_02491464;
                            *(int *)(lVar23 + 0x3f8) = (int)unaff_x19[0x7f];
                            FUN_024c910c(lVar23,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
                            plVar48 = (long *)unaff_x19[0x5c];
                            if (plVar48 == (long *)0x0) goto LAB_02491464;
                            (**(code **)(*plVar48 + 0x7d8))
                                      (plVar48,0,0,*(undefined8 *)(*plVar48 + 0x7e0));
                            *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                          }
                        }
LAB_0248c628:
                        in_stack_000017a8 = CONCAT44(3,uVar50);
                        goto LAB_0248ab98;
                      }
switchD_0248c274_caseD_2:
                      plVar39 = (long *)System_Threading_Mutex_TypeInfo;
                      fVar60 = 1.0 - fVar84;
                      uVar68 = (ulong)(uint)fVar60;
                      fVar66 = ABS(fVar83) + fVar66 * fVar60 * fVar76;
                      fVar76 = _DAT_0294c6e8;
                      if ((uVar42 & 0x18) == 0) {
                        fVar76 = 1.0;
                      }
                      if (fVar76 * fStack00000000000000dc < fVar66) {
                        if (((char)unaff_x19[0x5a] == '\0') ||
                           (uVar50 == *(uint *)(unaff_x19 + 0x92))) {
                          if (((char)unaff_x19[0x46] != '\0') &&
                             (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                            fVar83 = *(float *)(unaff_x19 + 0x59) / 100.0;
                            if (fVar84 < fVar83) {
                              fVar51 = fVar66 / fVar60;
                              if (fVar84 <= 0.0) {
                                fVar51 = fVar66;
                              }
                              fVar84 = fVar84 + (fVar66 - fVar76 * (fStack00000000000000dc +
                                                                   DAT_02958218)) / fVar51;
                              goto LAB_0249154c;
                            }
                            fVar84 = *(float *)((long)unaff_x19 + 0x1dc);
                            uVar68 = (ulong)(uint)fVar84;
                            fVar83 = *(float *)(unaff_x19 + 0x49);
                            if (fVar84 <= fVar83) goto LAB_0248c3dc;
LAB_024914c0:
                            fVar51 = (fVar84 - *(float *)(unaff_x19 + 0x47)) * 0.5;
                            if (fVar51 <= DAT_028aa298) {
                              fVar51 = DAT_028aa298;
                            }
                            *(float *)((long)unaff_x19 + 0x234) = fVar84;
                            fVar52 = (fVar84 - fVar51) * 20.0 + 0.5;
                            fVar51 = DAT_02958220;
                            if (fVar52 != INFINITY) {
                              fVar51 = (float)(int)fVar52 / 20.0;
                            }
                            if (fVar51 <= fVar83) {
                              fVar51 = fVar83;
                            }
                            goto LAB_0248e598;
                          }
LAB_0248c3dc:
                          iVar19 = (int)unaff_x19[0x5b];
                          if (iVar19 == 1) {
                            lVar23 = *(long *)System_Threading_Mutex_TypeInfo;
                            if (*(int *)(lVar23 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                              lVar23 = *plVar39;
                            }
                            unaff_x29 = (long *)StringLiteral_302;
                            lVar38 = *(long *)(lVar23 + 0xb8);
                            lVar23 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
                            if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                              lVar23 = FUN_00d5941c(lVar23);
                            }
                            lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 8);
                            if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                              lVar23 = FUN_00d5941c();
                            }
                            piVar29 = (int *)thunk_FUN_00d32ed4(lVar38 + 0x11f0,
                                                                *(long *)(lVar23 + 0x80) + 0xa0);
                            if (*piVar29 != 0) {
                              lVar23 = *plVar39;
                              if (*(int *)(lVar23 + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                                lVar23 = *plVar39;
                              }
                              FUN_013b8de4(*(long *)(lVar23 + 0xb8) + 0x11f0,&stack0x00000880,
                                           *(undefined8 *)
                                            Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                                          );
                              memcpy(&stack0x00000c70,&stack0x00000880,0x378);
                              goto LAB_0248c8f4;
                            }
                            goto LAB_0248e4bc;
                          }
                          if (iVar19 != 6) {
                            if (iVar19 == 3) {
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
                          uVar91 = FUN_024d66ec();
                          lVar23 = unaff_x19[0x5c];
                          if (*(int *)(*(long *)
                                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                      + 0xe0) == 0) {
                            thunk_FUN_00d32864(*(long *)
                                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                              );
                          }
                          uVar26 = FUN_02681b9c(lVar23,0,0);
                          if ((uVar26 & 1) != 0) {
                            plVar48 = (long *)unaff_x19[0x5c];
                            uVar31 = (**(code **)(*unaff_x19 + 0x548))();
                            if (plVar48 == (long *)0x0) goto LAB_02491464;
                            (**(code **)(*plVar48 + 0x558))
                                      (plVar48,uVar31,*(undefined8 *)(*plVar48 + 0x560));
                            lVar23 = unaff_x19[0x5c];
                            if (lVar23 == 0) goto LAB_02491464;
                            *(int *)(lVar23 + 0x3f8) = (int)unaff_x19[0x7f];
                            FUN_024c910c(lVar23,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
                            plVar48 = (long *)unaff_x19[0x5c];
                            if (plVar48 == (long *)0x0) goto LAB_02491464;
                            (**(code **)(*plVar48 + 0x7d8))
                                      (plVar48,0,0,*(undefined8 *)(*plVar48 + 0x7e0));
                            *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                          }
LAB_0248ca1c:
                          in_stack_000017a8 = CONCAT44(3,*puVar1);
                        }
                        else {
                          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          uVar91 = FUN_024d66ec();
                          if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
                            lVar23 = *plVar2;
                            if ((lVar23 == 0) || (lVar38 = *(long *)(lVar23 + 0x38), lVar38 == 0))
                            goto LAB_02491464;
                            if (*(uint *)(lVar38 + 0x18) <= *puVar1)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            fVar83 = *(float *)(unaff_x19 + 0x9a);
                            fVar84 = 0.0;
                            if ((0.0 < fVar83) &&
                               (fVar84 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
                              fVar84 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
                            }
                            fVar84 = fVar52 * *(float *)(unaff_x19 + 0x56) +
                                     *(float *)(lVar38 + (long)(int)*puVar1 * 0x178 + 0x154) +
                                     (fVar84 - *(float *)((long)unaff_x19 + 0x4c4)) +
                                     fStack0000000000000054 *
                                     (fVar51 + *(float *)((long)unaff_x19 + 0x2b4));
                          }
                          else {
                            lVar23 = unaff_x19[0x6c];
                            *(undefined1 *)((long)unaff_x19 + 700) = 1;
                            if (lVar23 == 0) goto LAB_02491464;
                            fVar83 = *(float *)(unaff_x19 + 0x9a);
                            fVar84 = *(float *)(unaff_x19 + 0x57) +
                                     fVar52 * *(float *)(unaff_x19 + 0x56);
                          }
                          puVar12 = System_Threading_Mutex_TypeInfo;
                          lVar23 = *(long *)(lVar23 + 0x38);
                          if (lVar23 == 0) goto LAB_02491464;
                          uVar44 = *(uint *)((long)unaff_x19 + 0x48c);
                          if ((*(uint *)(lVar23 + 0x18) <= uVar44) ||
                             (uVar8 = uVar44 - 1, *(uint *)(lVar23 + 0x18) <= uVar8))
                          goto 
                          UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                          ;
                          uVar68 = (ulong)(uint)(fVar84 + *(float *)(unaff_x19 + 0x96));
                          fVar60 = (fVar84 + *(float *)(unaff_x19 + 0x96) + fVar83) -
                                   *(float *)(lVar23 + (long)(int)uVar44 * 0x178 + 0x158);
                          if ((bVar15 || *(short *)(lVar23 + (long)(int)uVar8 * 0x178 + 0x20) !=
                                         0xad) ||
                             ((fVar53 <= fVar60 && ((int)unaff_x19[0x5b] != 0)))) {
                            if (*(short *)(lVar23 + (long)(int)uVar44 * 0x178 + 0x20) == 0xad) {
                              bVar15 = true;
                              plVar39 = (long *)System_Threading_Mutex_TypeInfo;
                              unaff_x29 = (long *)StringLiteral_302;
                            }
                            else {
                              if ((bVar11 & *(byte *)(unaff_x19 + 0x46)) != 0) {
                                fVar84 = *(float *)((long)unaff_x19 + 0x2cc);
                                fVar83 = *(float *)(unaff_x19 + 0x59) / 100.0;
                                if ((fVar83 <= fVar84) ||
                                   ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c))) {
                                  fVar84 = *(float *)((long)unaff_x19 + 0x1dc);
                                  uVar68 = (ulong)(uint)fVar84;
                                  fVar83 = *(float *)(unaff_x19 + 0x49);
                                  if ((fVar83 < fVar84) &&
                                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
                                  goto LAB_024914c0;
                                  goto LAB_0248cc70;
                                }
LAB_0249155c:
                                fVar51 = fVar66;
                                if (0.0 < fVar84) {
                                  fVar51 = fVar66 / (1.0 - fVar84);
                                }
                                fVar84 = fVar84 + (fVar66 - fVar76 * (fStack00000000000000dc +
                                                                     DAT_02958218)) / fVar51;
LAB_0249154c:
                                if (fVar83 <= fVar84) {
                                  fVar84 = fVar83;
                                }
                                *(float *)((long)unaff_x19 + 0x2cc) = fVar84;
                                return;
                              }
LAB_0248cc70:
                              lVar23 = *(long *)System_Threading_Mutex_TypeInfo;
                              if (*(int *)(lVar23 + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                                lVar23 = *(long *)puVar12;
                              }
                              iVar19 = *(int *)(*(long *)(lVar23 + 0xb8) + 0xe78);
                              if ((((float)iVar19 != fStack0000000000000034) && (iVar19 != -1)) &&
                                 (bVar11 == 1)) {
                                if (*(int *)(lVar23 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                uVar91 = FUN_024d66ec();
                                if ((unaff_x19[0x6c] == 0) ||
                                   (lVar23 = *(long *)(unaff_x19[0x6c] + 0x38), lVar23 == 0))
                                goto LAB_02491464;
                                uVar44 = *puVar1 - 1;
                                if (*(uint *)(lVar23 + 0x18) <= uVar44)
                                goto 
                                UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                                ;
                                fStack0000000000000034 = (float)iVar19;
                                if (*(short *)(lVar23 + (long)(int)uVar44 * 0x178 + 0x20) == 0xad) {
                                  uVar91 = uVar91 - 1;
                                  bVar15 = false;
                                  in_stack_000017a8 = CONCAT44(0x2d,uVar44);
                                  *puVar1 = uVar44;
                                  plVar39 = (long *)System_Threading_Mutex_TypeInfo;
                                  unaff_x29 = (long *)StringLiteral_302;
                                  goto LAB_0248ab98;
                                }
                              }
                              if (fVar53 < fVar60) {
                                if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
                                  *(undefined4 *)((long)unaff_x19 + 0x2dc) =
                                       *(undefined4 *)((long)unaff_x19 + 0x48c);
                                }
                                unaff_x29 = (long *)StringLiteral_302;
                                plVar39 = (long *)System_Threading_Mutex_TypeInfo;
                                if ((char)unaff_x19[0x46] != '\0') {
                                  fVar83 = *(float *)(unaff_x19 + 0x58);
                                  if ((fVar83 < *(float *)((long)unaff_x19 + 0x2b4)) &&
                                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                                    fVar51 = *(float *)((long)unaff_x19 + 0x2b4) +
                                             ((fVar89 - fVar60) / (float)((int)unaff_x19[0x94] + 1))
                                             / fStack0000000000000054;
                                    if (fVar51 <= fVar83) {
                                      fVar51 = fVar83;
                                    }
LAB_0248ea5c:
                                    *(float *)((long)unaff_x19 + 0x2b4) = fVar51;
                                    return;
                                  }
                                  fVar84 = *(float *)((long)unaff_x19 + 0x2cc);
                                  fVar83 = *(float *)(unaff_x19 + 0x59) / 100.0;
                                  if ((fVar84 < fVar83) &&
                                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
                                  goto LAB_0249155c;
                                  fVar84 = *(float *)((long)unaff_x19 + 0x1dc);
                                  uVar68 = (ulong)(uint)fVar84;
                                  fVar83 = *(float *)(unaff_x19 + 0x49);
                                  if ((fVar83 < fVar84) &&
                                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
                                  goto LAB_024914c0;
                                }
                                switch((int)unaff_x19[0x5b]) {
                                case 0:
                                case 2:
                                case 4:
                                  uVar68 = uVar28;
                                  FUN_024d7014(fStack0000000000000054,uVar28,fVar52,
                                               *(undefined4 *)((long)unaff_x19 + 0x2f4),
                                               fStack00000000000000c4,fStack00000000000000cc,
                                               fStack00000000000000dc,fVar51);
                                  break;
                                case 1:
                                  lVar23 = *(long *)System_Threading_Mutex_TypeInfo;
                                  if (*(int *)(lVar23 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                    lVar23 = *plVar39;
                                  }
                                  lVar38 = *(long *)(lVar23 + 0xb8);
                                  lVar23 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
                                  if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                                    lVar23 = FUN_00d5941c(lVar23);
                                  }
                                  lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 8);
                                  if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                                    lVar23 = FUN_00d5941c();
                                  }
                                  piVar29 = (int *)thunk_FUN_00d32ed4(lVar38 + 0x11f0,
                                                                      *(long *)(lVar23 + 0x80) +
                                                                      0xa0);
                                  if (*piVar29 == 0) {
                                    bVar15 = false;
                                    goto LAB_0248e4bc;
                                  }
                                  lVar23 = *plVar39;
                                  if (*(int *)(lVar23 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                    lVar23 = *plVar39;
                                  }
                                  FUN_013b8de4(*(long *)(lVar23 + 0xb8) + 0x11f0,&stack0x00000880,
                                               *(undefined8 *)
                                                Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                                              );
                                  memcpy(&stack0x00000fe8,&stack0x00000880,0x378);
                                  iVar19 = FUN_024d66ec();
                                  bVar15 = false;
                                  goto LAB_0248c900;
                                case 3:
                                  if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0
                                     ) {
                                    thunk_FUN_00d32864();
                                  }
                                  uVar91 = FUN_024d66ec();
                                  bVar15 = false;
                                  goto LAB_0248c628;
                                case 5:
                                  *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
                                  uVar68 = uVar28;
                                  FUN_024d7014(fStack0000000000000054,uVar28,fVar52,
                                               *(undefined4 *)((long)unaff_x19 + 0x2f4),
                                               fStack00000000000000c4,fStack00000000000000cc,
                                               fStack00000000000000dc,fVar51);
                                  *(undefined4 *)(unaff_x19 + 0x99) = 0;
                                  *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                                  *(undefined8 *)((long)unaff_x19 + 0x4ac) = 0;
                                  *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
                                  break;
                                case 6:
                                  lVar23 = unaff_x19[0x5c];
                                  if (*(int *)(*(long *)
                                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                              + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  uVar26 = FUN_02681b9c(lVar23,0,0);
                                  if ((uVar26 & 1) != 0) {
                                    plVar48 = (long *)unaff_x19[0x5c];
                                    uVar31 = (**(code **)(*unaff_x19 + 0x548))();
                                    if (plVar48 == (long *)0x0) goto LAB_02491464;
                                    (**(code **)(*plVar48 + 0x558))
                                              (plVar48,uVar31,*(undefined8 *)(*plVar48 + 0x560));
                                    lVar23 = unaff_x19[0x5c];
                                    if (lVar23 == 0) goto LAB_02491464;
                                    *(int *)(lVar23 + 0x3f8) = (int)unaff_x19[0x7f];
                                    FUN_024c910c(lVar23,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
                                    plVar48 = (long *)unaff_x19[0x5c];
                                    if (plVar48 == (long *)0x0) goto LAB_02491464;
                                    (**(code **)(*plVar48 + 0x7d8))
                                              (plVar48,0,0,*(undefined8 *)(*plVar48 + 0x7e0));
                                    *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                                  }
                                  bVar15 = false;
                                  goto LAB_0248ca1c;
                                default:
                                  bVar15 = false;
                                  goto LAB_0248cf18;
                                }
                                bVar15 = false;
                                bVar11 = 1;
                                bVar10 = true;
                                plVar39 = (long *)System_Threading_Mutex_TypeInfo;
                                unaff_x29 = (long *)StringLiteral_302;
                              }
                              else {
                                uVar68 = uVar28;
                                FUN_024d7014(fStack0000000000000054,uVar28,fVar52,
                                             *(undefined4 *)((long)unaff_x19 + 0x2f4),
                                             fStack00000000000000c4,fStack00000000000000cc,
                                             fStack00000000000000dc,fVar51);
                                bVar11 = 1;
                                bVar15 = false;
                                bVar10 = true;
                                plVar39 = (long *)System_Threading_Mutex_TypeInfo;
                                unaff_x29 = (long *)StringLiteral_302;
                              }
                            }
                          }
                          else {
                            uVar91 = uVar91 - 1;
                            bVar15 = false;
                            in_stack_000017a8 = CONCAT44(0x2d,uVar8);
                            *puVar1 = uVar8;
                            plVar39 = (long *)System_Threading_Mutex_TypeInfo;
                            unaff_x29 = (long *)StringLiteral_302;
                          }
                        }
                        goto LAB_0248ab98;
                      }
LAB_0248cf18:
                      if (uVar18 != 0xad) {
                        if (uVar18 == 9) {
                          lVar23 = *plVar2;
                          if ((lVar23 != 0) && (lVar38 = *(long *)(lVar23 + 0x38), lVar38 != 0)) {
                            uVar50 = *puVar1;
                            if (*(uint *)(lVar38 + 0x18) <= uVar50)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            *(undefined1 *)(lVar38 + (long)(int)uVar50 * 0x178 + 0x194) = 0;
                            *(uint *)((long)unaff_x19 + 0x49c) = uVar50;
                            lVar38 = *(long *)(lVar23 + 0x50);
                            if (lVar38 != 0) {
                              if (*(uint *)(unaff_x19 + 0x94) < *(uint *)(lVar38 + 0x18)) {
                                lVar38 = lVar38 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                                *(int *)(lVar38 + 0x2c) = *(int *)(lVar38 + 0x2c) + 1;
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
                            (**(code **)(*unaff_x19 + 0x8b8))(fStack0000000000000134,fVar63);
                          }
                          if (bVar10) {
                            *(uint *)((long)unaff_x19 + 0x494) = *puVar1;
                          }
                          *(uint *)((long)unaff_x19 + 0x49c) = *puVar1;
                          *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
                          if ((unaff_x19[0x6c] != 0) &&
                             (lVar23 = *(long *)(unaff_x19[0x6c] + 0x50), lVar23 != 0)) {
                            if (*(uint *)(unaff_x19 + 0x94) < *(uint *)(lVar23 + 0x18)) {
                              lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                              bVar10 = false;
                              *(float *)(lVar23 + 0x60) = fVar87;
                              *(float *)(lVar23 + 100) = fVar57;
                              goto FUN_0248d088;
                            }
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                          }
                        }
                        goto LAB_02491464;
                      }
                      if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0))
                      goto LAB_02491464;
                      if (*(uint *)(lVar23 + 0x18) <= *puVar1)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      *(undefined1 *)(lVar23 + (long)(int)*puVar1 * 0x178 + 0x194) = 0;
                    }
                    else {
                      if (((uVar18 & 0xfffffffe) == 10) && ((int)unaff_x19[0x5b] == 6)) {
                        fVar66 = (float)uVar68;
                        fVar76 = 0.0;
                        if ((0.0 < fVar66) &&
                           (fVar76 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
                          fVar76 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
                        }
                        uVar68 = (ulong)(uint)fVar53;
                        if (fVar53 < (*(float *)(unaff_x19 + 0x96) -
                                     (*(float *)((long)unaff_x19 + 0x4c4) - fVar66)) + fVar76) {
                          if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
                            *(uint *)((long)unaff_x19 + 0x2dc) = uVar50;
                          }
                          unaff_x29 = (long *)StringLiteral_302;
                          plVar39 = (long *)System_Threading_Mutex_TypeInfo;
                          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          uVar91 = FUN_024d66ec();
                          lVar23 = unaff_x19[0x5c];
                          if (*(int *)(*(long *)
                                        System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                      + 0xe0) == 0) {
                            thunk_FUN_00d32864(*(long *)
                                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                                              );
                          }
                          uVar26 = FUN_02681b9c(lVar23,0,0);
                          if ((uVar26 & 1) != 0) {
                            plVar48 = (long *)unaff_x19[0x5c];
                            uVar31 = (**(code **)(*unaff_x19 + 0x548))();
                            if (plVar48 == (long *)0x0) goto LAB_02491464;
                            (**(code **)(*plVar48 + 0x558))
                                      (plVar48,uVar31,*(undefined8 *)(*plVar48 + 0x560));
                            lVar23 = unaff_x19[0x5c];
                            if (lVar23 == 0) goto LAB_02491464;
                            *(int *)(lVar23 + 0x3f8) = (int)unaff_x19[0x7f];
                            FUN_024c910c(lVar23,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
                            plVar48 = (long *)unaff_x19[0x5c];
                            if (plVar48 == (long *)0x0) goto LAB_02491464;
                            (**(code **)(*plVar48 + 0x7d8))
                                      (plVar48,0,0,*(undefined8 *)(*plVar48 + 0x7e0));
                            *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                          }
                          in_stack_000017a8 = CONCAT44(3,uVar50);
                          goto LAB_0248ab98;
                        }
                      }
                      if ((((uVar18 - 0x2007 < 0x23) &&
                           ((1L << ((ulong)(uVar18 - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
                          (uVar18 - 10 < 2)) || (uVar18 == 0xa0)) {
UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ObjectSpawner__get_objectPrefabs:
                        if (((uVar18 != 0xad) && (uVar18 != 0x200b)) && (uVar18 != 0x2060)) {
                          lVar23 = *plVar2;
                          if ((lVar23 == 0) || (lVar38 = *(long *)(lVar23 + 0x50), lVar38 == 0))
                          goto LAB_02491464;
                          if (*(uint *)(lVar38 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
                          goto 
                          UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                          ;
                          lVar38 = lVar38 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                          *(int *)(lVar38 + 0x2c) = *(int *)(lVar38 + 0x2c) + 1;
                          *(int *)(lVar23 + 0x20) = *(int *)(lVar23 + 0x20) + 1;
                        }
                      }
                      else {
                        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0
                           ) {
                          thunk_FUN_00d32864();
                        }
                        uVar28 = FUN_016fa418(uVar18,0);
                        if ((uVar28 & 1) != 0)
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ObjectSpawner__get_objectPrefabs
                        ;
                      }
                      if (uVar18 == 0xa0) {
                        if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x50), lVar23 == 0))
                        goto LAB_02491464;
                        if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                        ;
                        lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
LAB_0248cf8c:
                        *(int *)(lVar23 + 0x20) = *(int *)(lVar23 + 0x20) + 1;
                      }
                    }
FUN_0248d088:
                    if (((int)unaff_x19[0x5b] == 1) && ((uVar18 == 0x2d || (!bVar9)))) {
                      if (unaff_x19[0xca] == 0) goto LAB_02491464;
                      fVar76 = *(float *)(unaff_x19 + 0x3c);
                      iVar19 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
                      if (unaff_x19[0xca] == 0) goto LAB_02491464;
                      fVar87 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
                      lVar23 = unaff_x19[0xc9];
                      fVar66 = in_stack_00000080._4_4_;
                      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
                        fVar66 = 1.0;
                      }
                      if ((lVar23 == 0) || (*(long *)(lVar23 + 0x20) == 0)) goto LAB_02491464;
                      fVar83 = *(float *)((long)unaff_x19 + 0x3fc);
                      fVar60 = *(float *)(lVar23 + 0x2c);
                      fVar57 = (float)FUN_026fd668(*(long *)(lVar23 + 0x20),0);
                      fVar84 = *(float *)(unaff_x19 + 0x69);
                      fVar57 = fVar83 * (fVar76 / (float)iVar19) * fVar87 * fVar66 * fVar60 * fVar57
                      ;
                      fVar76 = *(float *)((long)unaff_x19 + 0x34c);
                      if ((uVar18 == 10) &&
                         (*(int *)((long)unaff_x19 + 0x48c) != (int)unaff_x19[0x92])) {
                        if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0))
                        goto LAB_02491464;
                        uVar50 = *(int *)((long)unaff_x19 + 0x48c) - 1;
                        if (*(uint *)(lVar23 + 0x18) <= uVar50)
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                        ;
                        if (unaff_x19[0xca] == 0) goto LAB_02491464;
                        fVar66 = *(float *)(lVar23 + (long)(int)uVar50 * 0x178 + 0x60);
                        iVar19 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
                        if (unaff_x19[0xca] == 0) goto LAB_02491464;
                        fVar83 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
                        lVar23 = unaff_x19[0xc9];
                        fVar87 = in_stack_00000080._4_4_;
                        if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
                          fVar87 = 1.0;
                        }
                        if ((lVar23 == 0) || (*(long *)(lVar23 + 0x20) == 0)) goto LAB_02491464;
                        fVar60 = *(float *)((long)unaff_x19 + 0x3fc);
                        fVar63 = *(float *)(lVar23 + 0x2c);
                        fVar57 = (float)FUN_026fd668(*(long *)(lVar23 + 0x20),0);
                        if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x50), lVar23 == 0))
                        goto LAB_02491464;
                        if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
                        goto 
                        UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                        ;
                        lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                        fVar84 = *(float *)(lVar23 + 0x60);
                        fVar76 = *(float *)(lVar23 + 100);
                        fVar57 = fVar60 * (fVar66 / (float)iVar19) * fVar83 * fVar87 * fVar63 *
                                 fVar57;
                      }
                      fVar60 = *(float *)(unaff_x19 + 0x9a);
                      fVar87 = *(float *)(unaff_x19 + 0x96);
                      fVar63 = *(float *)((long)unaff_x19 + 0x4c4);
                      fVar66 = 0.0;
                      fVar83 = 0.0;
                      if ((0.0 < fVar60) && (fVar83 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')
                         ) {
                        fVar83 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
                      }
                      fVar62 = *(float *)(unaff_x19 + 199);
                      if ((char)unaff_x19[0x1d] == '\0') {
                        if ((unaff_x19[0xc9] == 0) ||
                           (lVar23 = *(long *)(unaff_x19[0xc9] + 0x20), lVar23 == 0))
                        goto LAB_02491464;
                        FUN_026fd62c(&stack0x00000880,lVar23,0);
                        unaff_x28[0x1cd] = unaff_x28[1];
                        unaff_x28[0x1cc] = *unaff_x28;
                        fVar66 = (float)FUN_026fd474(&stack0x000016e0,0);
                      }
                      puVar12 = System_Threading_Mutex_TypeInfo;
                      fVar77 = *(float *)(unaff_x19 + 0x6b);
                      fVar76 = (fVar86 - fVar84) - fVar76;
                      bVar16 = true;
                      if ((fVar77 <= fVar76) && (bVar16 = false, !NAN(fVar77))) {
                        bVar16 = fVar77 == -1.0;
                      }
                      if (!bVar16) {
                        fVar76 = fVar77;
                      }
                      fVar84 = _DAT_0294c6e8;
                      if ((uVar42 & 0x18) == 0) {
                        fVar84 = 1.0;
                      }
                      if (((fVar87 - (fVar63 - fVar60)) + fVar83 < fVar53) &&
                         (ABS(fVar62) +
                          fVar57 * fVar66 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) <
                          fVar84 * fVar76)) {
                        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        FUN_024d69d4();
                        lVar23 = *(long *)(*(long *)puVar12 + 0xb8);
                        memcpy(&stack0x00000508,(void *)(lVar23 + 0x788),0x378);
                        FUN_013b86dc(lVar23 + 0x11f0,&stack0x00000508,
                                     *(undefined8 *)
                                      Method_System_Collections_Generic_List<TextStyle>_get_Item__);
                      }
                    }
                    uVar28 = (ulong)(uint)fVar58;
                    fVar76 = 1.0;
                    lVar23 = *plVar2;
                    if ((lVar23 == 0) || (lVar38 = *(long *)(lVar23 + 0x38), lVar38 == 0))
                    goto LAB_02491464;
                    if (*(uint *)(lVar38 + 0x18) <= *puVar1)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    uVar50 = *(uint *)(unaff_x19 + 0x94);
                    lVar38 = lVar38 + (long)(int)*puVar1 * 0x178;
                    *(uint *)(lVar38 + 100) = uVar50;
                    *(int *)(lVar38 + 0x68) = (int)unaff_x19[0x95];
                    if ((bVar9) ||
                       ((uVar18 < 0xe && ((1 << (ulong)(uVar18 & 0x1f) & 0x2c00U) != 0)))) {
                      lVar23 = *(long *)(lVar23 + 0x50);
                      if (lVar23 == 0) goto LAB_02491464;
                      if (*(uint *)(lVar23 + 0x18) <= uVar50)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      if (*(int *)(lVar23 + (long)(int)uVar50 * 0x5c + 0x24) == 1)
                      goto LAB_0248d42c;
                    }
                    else {
                      lVar23 = *(long *)(lVar23 + 0x50);
                      if (lVar23 == 0) goto LAB_02491464;
LAB_0248d42c:
                      if (*(uint *)(lVar23 + 0x18) <= uVar50)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      *(int *)(lVar23 + (long)(int)uVar50 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
                    }
                    if (uVar18 == 9) {
                      if (*unaff_x27 == 0) goto LAB_02491464;
                      fVar76 = (float)FUN_026fd208(*unaff_x27 + 0x50,0);
                      if (*unaff_x27 == 0) goto LAB_02491464;
                      fVar57 = *(float *)(unaff_x19 + 199);
                      fVar66 = (float)NEON_ucvtf((uint)*(byte *)(*unaff_x27 + 0x1b9));
                      fVar76 = fVar58 * fVar76 * fVar66;
                      fVar87 = fVar76 * (float)(int)(fVar57 / fVar76);
                      uVar68 = (ulong)(uint)fVar87;
                      if (fVar87 <= fVar57) {
                        fVar87 = fVar57 + fVar76;
                      }
LAB_0248d614:
                      *(float *)(unaff_x19 + 199) = fVar87;
                    }
                    else if (*(float *)(unaff_x19 + 0x55) == 0.0) {
                      if ((char)unaff_x19[0x1d] == '\0') {
                        if (*(char *)((long)unaff_x19 + 0x46c) != '\0') {
                          fVar76 = (float)thunk_FUN_026935f0(lVar24,0);
                        }
                        fVar87 = *(float *)(unaff_x19 + 199);
                        fVar57 = (float)FUN_026fd474(&stack0x00001770,0);
                        if (unaff_x19[0x1f] != 0) {
                          fVar66 = 1.0 - *(float *)((long)unaff_x19 + 0x2cc);
                          fVar87 = fVar87 + fVar66 * (*(float *)((long)unaff_x19 + 0x2a4) +
                                                     fVar58 * (fVar59 + fVar76 * fVar57) +
                                                     fVar52 * (fStack00000000000000c4 +
                                                              fStack00000000000000cc +
                                                              *(float *)(unaff_x19[0x1f] + 0x1ac)));
                          *(float *)(unaff_x19 + 199) = fVar87;
                          goto joined_r0x0248d568;
                        }
                        goto LAB_02491464;
                      }
                      if (*unaff_x27 == 0) goto LAB_02491464;
                      fVar87 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                               (*(float *)((long)unaff_x19 + 0x2a4) +
                               fVar58 * fVar59 +
                               fVar52 * (fStack00000000000000c4 +
                                        fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac)));
                      uVar68 = (ulong)(uint)fVar87;
                      fVar87 = *(float *)(unaff_x19 + 199) - fVar87;
                      *(float *)(unaff_x19 + 199) = fVar87;
                      if ((uVar20 != 0) || (uVar18 == 0x200b)) {
                        fVar76 = fVar52 * *(float *)((long)unaff_x19 + 0x2ac);
                        uVar68 = (ulong)(uint)fVar76;
                        fVar87 = fVar87 - fVar76;
                        goto LAB_0248d614;
                      }
                    }
                    else {
                      if (*unaff_x27 == 0) goto LAB_02491464;
                      fVar66 = *(float *)(unaff_x19 + 199);
                      fVar87 = fVar66 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                                        (*(float *)((long)unaff_x19 + 0x2a4) +
                                        (*(float *)(unaff_x19 + 0x55) - fVar61) +
                                        fVar52 * (fStack00000000000000cc +
                                                 *(float *)(*unaff_x27 + 0x1ac)));
                      *(float *)(unaff_x19 + 199) = fVar87;
joined_r0x0248d568:
                      if ((uVar20 != 0) || (uVar68 = (ulong)(uint)fVar66, uVar18 == 0x200b)) {
                        fVar76 = fVar52 * *(float *)((long)unaff_x19 + 0x2ac);
                        uVar68 = (ulong)(uint)fVar76;
                        fVar87 = fVar87 + fVar76;
                        goto LAB_0248d614;
                      }
                    }
                    lVar23 = *plVar2;
                    if ((lVar23 == 0) || (lVar38 = *(long *)(lVar23 + 0x38), lVar38 == 0))
                    goto LAB_02491464;
                    uVar50 = *puVar1;
                    uVar42 = (uint)*(undefined8 *)(lVar38 + 0x18);
                    if (uVar42 <= uVar50)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    *(float *)(lVar38 + (long)(int)uVar50 * 0x178 + 0x144) = fVar87;
                    uVar44 = uVar18;
                    if ((int)uVar18 < 0xd) {
                      if ((uVar18 - 10 < 2) || (uVar18 == 3)) goto LAB_0248d6b8;
LAB_0248d69c:
                      if (((bool)(bVar9 & uVar18 == 0x2d)) || (uVar50 == uVar37)) goto LAB_0248d6b8;
                    }
                    else {
                      if (1 < uVar18 - 0x2028) {
                        if (uVar18 != 0xd) goto LAB_0248d69c;
                        uVar68 = 0;
                        *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
                        if (uVar50 != uVar37) goto LAB_0248dc08;
                      }
LAB_0248d6b8:
                      if (0.0 < *(float *)(unaff_x19 + 0x9a)) {
                        fVar76 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
                        if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0)
                            == 0) {
                          thunk_FUN_00d32864();
                        }
                        if (((fVar74 < ABS(fVar76)) && (*(char *)((long)unaff_x19 + 700) == '\0'))
                           && (*(char *)((long)unaff_x19 + 0x334) == '\0')) {
                          FUN_024d6ca8(fVar76);
                          *(float *)((long)unaff_x19 + 0x4bc) =
                               *(float *)((long)unaff_x19 + 0x4bc) - fVar76;
                          *(float *)(unaff_x19 + 0x9a) = fVar76 + *(float *)(unaff_x19 + 0x9a);
                          puVar12 = System_Threading_Mutex_TypeInfo;
                          lVar23 = *(long *)System_Threading_Mutex_TypeInfo;
                          if (*(int *)(lVar23 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                            lVar23 = *(long *)puVar12;
                          }
                          lVar38 = *(long *)(lVar23 + 0xb8);
                          if (*(int *)(lVar38 + 0x7ac) == (int)unaff_x19[0x94]) {
                            if (*(int *)(lVar23 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                              lVar38 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
                            }
                            FUN_013b8de4(lVar38 + 0x11f0,&stack0x00000880,
                                         *(undefined8 *)
                                          Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                                        );
                            lVar23 = *(long *)System_Threading_Mutex_TypeInfo;
                            memcpy((void *)(*(long *)(lVar23 + 0xb8) + 0x788),&stack0x00000880,0x378
                                  );
                            lVar23 = *(long *)(lVar23 + 0xb8);
                            *(float *)(lVar23 + 0x7bc) = fVar76 + *(float *)(lVar23 + 0x7bc);
                            *(float *)(lVar23 + 0x800) = fVar76 + *(float *)(lVar23 + 0x800);
                            memcpy(&stack0x00000190,(void *)(lVar23 + 0x788),0x378);
                            FUN_013b86dc(lVar23 + 0x11f0,&stack0x00000190,
                                         *(undefined8 *)
                                          Method_System_Collections_Generic_List<TextStyle>_get_Item__
                                        );
                          }
                        }
                      }
                      fVar87 = *(float *)(unaff_x19 + 0x9a);
                      *(undefined1 *)((long)unaff_x19 + 0x334) = 0;
                      fVar66 = *(float *)((long)unaff_x19 + 0x4c4) - fVar87;
                      fVar76 = *(float *)((long)unaff_x19 + 0x4bc);
                      if (fVar66 <= *(float *)((long)unaff_x19 + 0x4bc)) {
                        fVar76 = fVar66;
                      }
                      *(float *)((long)unaff_x19 + 0x4bc) = fVar76;
                      fVar57 = *(float *)(unaff_x19 + 0x98);
                      if (*(char *)((long)unaff_x28 + 0xf34) == '\0') {
                        fVar92 = fVar76;
                      }
                      if ((*(char *)((long)unaff_x19 + 0x32c) != '\0') &&
                         (((int)unaff_x19[100] <= *(int *)((long)unaff_x19 + 0x48c) ||
                          ((int)unaff_x19[0x65] <= (int)unaff_x19[0x94])))) {
                        *(undefined1 *)((long)unaff_x28 + 0xf34) = 1;
                      }
                      lVar23 = *plVar2;
                      if ((lVar23 == 0) || (lVar38 = *(long *)(lVar23 + 0x50), lVar38 == 0))
                      goto LAB_02491464;
                      uVar50 = *(uint *)(unaff_x19 + 0x94);
                      if (*(uint *)(lVar38 + 0x18) <= uVar50)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      lVar49 = lVar38 + (long)(int)uVar50 * 0x5c;
                      *(int *)(lVar49 + 0x34) = (int)unaff_x19[0x92];
                      iVar19 = (int)unaff_x19[0x92];
                      if ((int)unaff_x19[0x92] <= *(int *)((long)unaff_x19 + 0x494)) {
                        iVar19 = *(int *)((long)unaff_x19 + 0x494);
                      }
                      *(int *)((long)unaff_x19 + 0x494) = iVar19;
                      *(int *)(lVar49 + 0x38) = iVar19;
                      *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x48c);
                      *(undefined4 *)(lVar49 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x48c);
                      iVar19 = *(int *)((long)unaff_x19 + 0x494);
                      if (*(int *)((long)unaff_x19 + 0x494) <= *(int *)((long)unaff_x19 + 0x49c)) {
                        iVar19 = *(int *)((long)unaff_x19 + 0x49c);
                      }
                      *(int *)((long)unaff_x19 + 0x49c) = iVar19;
                      *(int *)(lVar49 + 0x40) = iVar19;
                      *(int *)(lVar49 + 0x24) =
                           (*(int *)(lVar49 + 0x3c) - *(int *)(lVar49 + 0x34)) + 1;
                      *(undefined4 *)(lVar49 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
                      lVar23 = *(long *)(lVar23 + 0x38);
                      if (lVar23 == 0) goto LAB_02491464;
                      if (*(uint *)(lVar23 + 0x18) <= *(uint *)((long)unaff_x19 + 0x494))
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      uVar88 = *(undefined4 *)
                                (lVar23 + (long)(int)*(uint *)((long)unaff_x19 + 0x494) * 0x178 +
                                0x11c);
                      lVar38 = lVar38 + (long)(int)uVar50 * 0x5c;
                      *(float *)(lVar38 + 0x70) = fVar66;
                      *(undefined4 *)(lVar38 + 0x6c) = uVar88;
                      lVar23 = *plVar2;
                      if ((lVar23 == 0) || (lVar38 = *(long *)(lVar23 + 0x50), lVar38 == 0))
                      goto LAB_02491464;
                      if (*(uint *)(lVar38 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      lVar23 = *(long *)(lVar23 + 0x38);
                      if (lVar23 == 0) goto LAB_02491464;
                      if (*(uint *)(lVar23 + 0x18) <= *(uint *)((long)unaff_x19 + 0x49c))
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      fVar57 = fVar57 - fVar87;
                      lVar38 = lVar38 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                      *(undefined4 *)(lVar38 + 0x74) =
                           *(undefined4 *)
                            (lVar23 + (long)(int)*(uint *)((long)unaff_x19 + 0x49c) * 0x178 + 0x128)
                      ;
                      *(float *)(lVar38 + 0x78) = fVar57;
                      lVar23 = *plVar2;
                      if ((lVar23 == 0) || (lVar49 = *(long *)(lVar23 + 0x50), lVar49 == 0))
                      goto LAB_02491464;
                      lVar27 = (long)(int)*(uint *)(unaff_x19 + 0x94);
                      if (*(uint *)(lVar49 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      lVar38 = lVar49 + lVar27 * 0x5c;
                      *(float *)(lVar38 + 0x44) =
                           *(float *)(lVar38 + 0x74) - fVar58 * fStack0000000000000134;
                      *(float *)(lVar38 + 0x5c) = fStack00000000000000dc;
                      if (*(int *)(lVar38 + 0x24) == 1) {
                        *(int *)(lVar49 + lVar27 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
                      }
                      if ((*unaff_x27 == 0) || (lVar38 = *(long *)(lVar23 + 0x38), lVar38 == 0))
                      goto LAB_02491464;
                      lVar46 = (long)(int)*(uint *)((long)unaff_x19 + 0x49c);
                      uVar42 = (uint)*(undefined8 *)(lVar38 + 0x18);
                      if (uVar42 <= *(uint *)((long)unaff_x19 + 0x49c))
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      if ((*(char *)(lVar38 + lVar46 * 0x178 + 0x194) == '\0') &&
                         (lVar46 = (long)(int)*(uint *)(unaff_x19 + 0x93),
                         uVar42 <= *(uint *)(unaff_x19 + 0x93)))
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      fVar58 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                               (fVar52 * (fStack00000000000000c4 +
                                         fStack00000000000000cc + *(float *)(*unaff_x27 + 0x1ac)) -
                               *(float *)((long)unaff_x19 + 0x2a4));
                      fVar76 = -fVar58;
                      if ((char)unaff_x19[0x1d] != '\0') {
                        fVar76 = fVar58;
                      }
                      lVar49 = lVar49 + lVar27 * 0x5c;
                      *(float *)(lVar49 + 0x58) =
                           *(float *)(lVar38 + lVar46 * 0x178 + 0x144) + fVar76;
                      fVar76 = *(float *)(unaff_x19 + 0x9a);
                      *(float *)(lVar49 + 0x48) =
                           fStack0000000000000054 * fVar51 + (fVar57 - fVar66);
                      *(float *)(lVar49 + 0x4c) = fVar57;
                      uVar68 = (ulong)(uint)(0.0 - fVar76);
                      *(float *)(lVar49 + 0x50) = 0.0 - fVar76;
                      *(float *)(lVar49 + 0x54) = fVar66;
                      plVar39 = (long *)System_Threading_Mutex_TypeInfo;
                      if ((int)uVar18 < 0x2d) {
                        if (uVar18 - 10 < 2) {
LAB_0248dad8:
                          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          unaff_x29 = (long *)StringLiteral_302;
                          FUN_024d69d4();
                          lVar23 = unaff_x19[0x6c];
                          *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
                          iVar19 = (int)unaff_x19[0x94] + 1;
                          *(int *)(unaff_x19 + 0x94) = iVar19;
                          *(int *)(unaff_x19 + 0x92) = *(int *)((long)unaff_x19 + 0x48c) + 1;
                          if ((lVar23 != 0) && (*(long *)(lVar23 + 0x50) != 0)) {
                            if (*(int *)(*(long *)(lVar23 + 0x50) + 0x18) <= iVar19) {
                              FUN_024d6e60();
                              lVar23 = unaff_x19[0x6c];
                              if (lVar23 == 0) goto LAB_02491464;
                            }
                            lVar23 = *(long *)(lVar23 + 0x38);
                            if (lVar23 != 0) {
                              if (*puVar1 < *(uint *)(lVar23 + 0x18)) {
                                fVar76 = *(float *)(lVar23 + (long)(int)*puVar1 * 0x178 + 0x154);
                                if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
                                  fVar58 = 0.0;
                                  if ((uVar18 == 0x2029) || (uVar18 == 10)) {
                                    fVar58 = *(float *)((long)unaff_x19 + 0x2c4);
                                  }
                                  uVar32 = 0;
                                  fVar58 = *(float *)(unaff_x19 + 0x9a) +
                                           fVar76 + (0.0 - *(float *)((long)unaff_x19 + 0x4c4)) +
                                           fStack0000000000000054 *
                                           (fVar51 + *(float *)((long)unaff_x19 + 0x2b4)) +
                                           fVar52 * (*(float *)(unaff_x19 + 0x56) + fVar58);
                                }
                                else {
                                  if ((uVar18 == 0x2029) || (fVar58 = 0.0, uVar18 == 10)) {
                                    fVar58 = *(float *)((long)unaff_x19 + 0x2c4);
                                  }
                                  uVar32 = 1;
                                  fVar58 = *(float *)(unaff_x19 + 0x9a) +
                                           *(float *)(unaff_x19 + 0x57) +
                                           fVar52 * (*(float *)(unaff_x19 + 0x56) + fVar58);
                                }
                                *(float *)(unaff_x19 + 0x9a) = fVar58;
                                *(undefined1 *)((long)unaff_x19 + 700) = uVar32;
                                lVar23 = *plVar39;
                                if (*(int *)(lVar23 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                  lVar23 = *plVar39;
                                }
                                uVar31 = *(undefined8 *)(*(long *)(lVar23 + 0xb8) + 0x15a8);
                                *(float *)(unaff_x19 + 0x99) = fVar76;
                                uVar68 = NEON_rev64(uVar31,4);
                                unaff_x19[0x98] = uVar68;
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
                        if (uVar18 == 3) {
                          if (unaff_x19[0x8e] == 0) goto LAB_02491464;
                          uVar91 = (uint)*(undefined8 *)(unaff_x19[0x8e] + 0x18);
                          uVar44 = 3;
                        }
                      }
                      else if ((uVar18 - 0x2028 < 2) || (uVar18 == 0x2d)) goto LAB_0248dad8;
                    }
LAB_0248dc08:
                    uVar50 = *puVar1;
                    if (uVar42 <= uVar50)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    if (*(char *)(lVar38 + (long)(int)uVar50 * 0x178 + 0x194) != '\0') {
                      lVar38 = lVar38 + (long)(int)uVar50 * 0x178;
                      uVar26 = *(ulong *)(lVar38 + 0x11c);
                      uVar68 = *(ulong *)((long)unaff_x19 + 0x4d4);
                      *(ulong *)((long)unaff_x19 + 0x4d4) =
                           uVar26 ^ (uVar26 ^ uVar68) &
                                    CONCAT44(-(uint)((float)(uVar68 >> 0x20) <
                                                    (float)(uVar26 >> 0x20)),
                                             -(uint)((float)uVar68 < (float)uVar26));
                      uVar26 = *(ulong *)((long)unaff_x19 + 0x4dc);
                      uVar68 = *(ulong *)(lVar38 + 0x128);
                      *(ulong *)((long)unaff_x19 + 0x4dc) =
                           uVar68 ^ (uVar68 ^ uVar26) &
                                    CONCAT44(-(uint)((float)(uVar68 >> 0x20) <
                                                    (float)(uVar26 >> 0x20)),
                                             -(uint)((float)uVar68 < (float)uVar26));
                    }
                    if (((int)unaff_x19[0x5b] == 5) &&
                       ((0xd < uVar44 || ((1 << (ulong)(uVar44 & 0x1f) & 0x2c00U) == 0)))) {
                      lVar38 = *(long *)(lVar23 + 0x58);
                      if (lVar38 == 0) goto LAB_02491464;
                      iVar19 = (int)unaff_x19[0x95] + 1;
                      if (*(int *)(lVar38 + 0x18) < iVar19) {
                        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        FUN_01147c08((long *)(lVar23 + 0x58),iVar19,1,
                                     *(undefined8 *)
                                      Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerMove__
                                    );
                        lVar23 = *plVar2;
                        if (lVar23 == 0) goto LAB_02491464;
                      }
                      lVar38 = *(long *)(lVar23 + 0x58);
                      if (lVar38 == 0) goto LAB_02491464;
                      uVar42 = *(uint *)(unaff_x19 + 0x95);
                      lVar49 = (long)(int)uVar42;
                      uVar50 = *(uint *)(lVar38 + 0x18);
                      if (uVar50 <= uVar42)
                      goto 
                      UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                      ;
                      lVar27 = lVar38 + lVar49 * 0x14;
                      fVar58 = *(float *)(lVar27 + 0x30);
                      uVar68 = (ulong)(uint)fVar58;
                      *(undefined4 *)(lVar27 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
                      fVar76 = *(float *)((long)unaff_x19 + 0x4bc);
                      if (fVar58 <= *(float *)((long)unaff_x19 + 0x4bc)) {
                        fVar76 = fVar58;
                      }
                      *(float *)(lVar27 + 0x30) = fVar76;
                      uVar44 = *(uint *)((long)unaff_x19 + 0x48c);
                      if (uVar44 == 0 && uVar42 == 0) {
                        *(uint *)(lVar38 + lVar49 * 0x14 + 0x20) = uVar44;
                      }
                      else {
                        uVar8 = uVar44 - 1;
                        if (0 < (int)uVar44) {
                          lVar23 = *(long *)(lVar23 + 0x38);
                          if (lVar23 == 0) goto LAB_02491464;
                          if (*(uint *)(lVar23 + 0x18) <= uVar8)
                          goto 
                          UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                          ;
                          if (uVar42 != *(uint *)(lVar23 + (long)(int)uVar8 * 0x178 + 0x68)) {
                            if (uVar42 - 1 < uVar50) {
                              *(uint *)(lVar38 + 0x20 + (long)(int)(uVar42 - 1) * 0x14 + 4) = uVar8;
                              *(uint *)(lVar38 + 0x20 + lVar49 * 0x14) = uVar44;
                              goto LAB_0248dc84;
                            }
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                          }
                        }
                        if (uVar44 == uVar37) {
                          *(uint *)(lVar38 + lVar49 * 0x14 + 0x24) = uVar37;
                        }
                      }
                    }
LAB_0248dc84:
                    plVar39 = (long *)System_Threading_Mutex_TypeInfo;
                    if (((char)unaff_x19[0x5a] != '\0') ||
                       ((*(uint *)(unaff_x19 + 0x5b) < 7 &&
                        ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5b) & 0x1f) & 0x4aU) != 0)))) {
                      if ((uVar20 == 0) &&
                         (((uVar18 != 0x2d && (uVar18 != 0x200b)) && (uVar18 != 0xad)))) {
                        if (*(char *)((long)unaff_x19 + 0x2d2) == '\0') {
LAB_0248de4c:
                          if (((((0x2bfd < uVar18 - 0xac01) && (0x1d < uVar18 - 0xa961)) &&
                               (0xfd < uVar18 - 0x1101)) ||
                              (uVar26 = FUN_024e95f0(0), (uVar26 & 1) != 0)) &&
                             ((((0xed < uVar18 - 0xff01 && (0x1d < uVar18 - 0xfe31)) &&
                               (0x717d < uVar18 - 0x2e81)) && (0x1fd < uVar18 - 0xf901))))
                          goto LAB_0248ded4;
                          lVar23 = FUN_024e94b0(0);
                          if ((lVar23 == 0) || (*(long *)(lVar23 + 0x10) == 0)) goto LAB_02491464;
                          dVar67 = (double)(ulong)uVar18;
                          uVar26 = FUN_0129aa60(*(long *)(lVar23 + 0x10),&stack0x00000880,
                                                *(undefined8 *)
                                                 System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                                               );
                          if ((int)*puVar1 < (int)uVar37) {
                            lVar23 = FUN_024e94b0(0);
                            if (((lVar23 == 0) || (*plVar2 == 0)) ||
                               (lVar38 = *(long *)(*plVar2 + 0x38), lVar38 == 0)) goto LAB_02491464;
                            if (*(uint *)(lVar38 + 0x18) <= *puVar1 + 1)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            if (*(long *)(lVar23 + 0x18) == 0) goto LAB_02491464;
                            dVar67 = (double)(ulong)*(ushort *)
                                                     (lVar38 + (long)(int)(*puVar1 + 1) * 0x178 +
                                                     0x20);
                            uVar30 = FUN_0129aa60(*(long *)(lVar23 + 0x18),&stack0x00000880,
                                                  *(undefined8 *)
                                                                                                      
                                                  System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                                                 );
                            if ((uVar26 & 1) != 0) goto LAB_0248e0dc;
                            if ((uVar30 & 1) == 0) goto LAB_0248e1b0;
                            plVar39 = (long *)System_Threading_Mutex_TypeInfo;
                            if (bVar11 == 0) {
                              bVar11 = 0;
                              goto LAB_0248e168;
                            }
                          }
                          else {
                            if ((uVar26 & 1) == 0) {
LAB_0248e1b0:
                              plVar39 = (long *)System_Threading_Mutex_TypeInfo;
                              if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                              }
                              FUN_024d69d4();
                              bVar11 = 0;
                              goto LAB_0248e168;
                            }
LAB_0248e0dc:
                            plVar39 = (long *)System_Threading_Mutex_TypeInfo;
                            if (uVar4 != uVar34 || ((bVar11 ^ 0xff) & 1) != 0) goto LAB_0248e168;
                          }
joined_r0x0248e0fc:
                          System_Threading_Mutex_TypeInfo = (undefined *)plVar39;
                          if (uVar20 != 0) {
LAB_0248e100:
                            plVar39 = (long *)System_Threading_Mutex_TypeInfo;
                            if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            FUN_024d69d4();
                          }
                          if (*(int *)(*plVar39 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          FUN_024d69d4();
                          bVar11 = 1;
                        }
                        else {
LAB_0248ded4:
                          plVar39 = (long *)System_Threading_Mutex_TypeInfo;
                          if (bVar11 != 0) {
                            if (!(bool)(uVar18 == 0xad & (bVar15 ^ 1U))) goto joined_r0x0248e0fc;
                            goto LAB_0248e100;
                          }
                          bVar11 = 0;
                        }
                      }
                      else {
                        if (*(char *)((long)unaff_x19 + 0x2d2) == '\x01') goto LAB_0248ded4;
                        if (((uVar18 - 0x2007 < 0x29) &&
                            ((1L << ((ulong)(uVar18 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
                           ((uVar18 == 0xa0 || (uVar18 == 0x2060)))) goto LAB_0248de4c;
                        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        FUN_024d69d4();
                        bVar11 = 0;
                        *(undefined4 *)(*(long *)(*plVar39 + 0xb8) + 0xe78) = 0xffffffff;
                      }
                    }
LAB_0248e168:
                    if (*(int *)(*plVar39 + 0xe0) == 0) {
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
                  uVar26 = FUN_024d0688();
                  if (((uVar26 & 1) == 0) ||
                     (uVar91 = in_stack_0000176c, *(int *)((long)unaff_x19 + 0x63c) != 0))
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_Samples_StarterAssets_ActionBasedControllerManager__GetInputAction
                  ;
                }
LAB_0248ab98:
                uVar91 = uVar91 + 1;
                lVar23 = unaff_x19[0x8e];
                in_stack_000017bc = uVar18;
                if (lVar23 == 0) goto LAB_02491464;
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
  uVar91 = uVar18 - 1;
  if (*(uint *)(lVar23 + 0x18) <= uVar91)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*plVar2 == 0) || (lVar24 = *(long *)(*plVar2 + 0x50), lVar24 == 0)) goto LAB_02491464;
  lVar49 = (long)(int)uVar91;
  lVar38 = lVar23 + lVar49 * 0x178;
  uVar20 = *(uint *)(lVar38 + 100);
  if (*(uint *)(lVar24 + 0x18) <= uVar20)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar46 = *(long *)(lVar38 + 0x38);
  uVar42 = (uint)*(ushort *)(lVar38 + 0x20);
  lVar27 = (long)(int)uVar20;
  lVar24 = lVar24 + lVar27 * 0x5c;
  uVar4 = *(uint *)(lVar24 + 0x3c);
  uVar34 = *(uint *)(lVar24 + 0x40);
  lVar38 = (long)(int)uVar34;
  iVar21 = *(int *)(lVar24 + 0x28);
  iVar22 = *(int *)(lVar24 + 0x2c);
  uVar50 = *(uint *)(lVar24 + 0x68);
  fVar58 = *(float *)(lVar24 + 0x5c);
  fVar66 = *(float *)(lVar24 + 0x60);
  iVar5 = *(int *)(lVar24 + 0x20);
  fVar89 = *(float *)(lVar24 + 0x4c);
  fVar73 = *(float *)(lVar24 + 0x54);
  fVar54 = *(float *)(lVar24 + 0x58);
  fVar76 = *(float *)(lVar24 + 0x6c);
  fVar92 = *(float *)(lVar24 + 0x70);
  fVar86 = *(float *)(lVar24 + 0x74);
  fVar74 = *(float *)(lVar24 + 0x78);
  fVar87 = fVar58 + fVar66;
  if ((int)uVar50 < 9) {
    switch(uVar50) {
    case 1:
      if ((char)unaff_x19[0x1d] == '\0') {
        fStack00000000000000c4 = fVar66 + 0.0;
      }
      else {
        fStack00000000000000c4 = 0.0 - fVar54;
      }
      break;
    case 2:
LAB_0248f124:
      fStack00000000000000c4 = (fVar66 + fVar58 * 0.5) - fVar54 * 0.5;
      break;
    default:
      goto switchD_0248f070_caseD_3;
    case 4:
      fStack00000000000000c4 = fVar87 - fVar54;
      if ((char)unaff_x19[0x1d] != '\0') {
        fStack00000000000000c4 = fVar87;
      }
      break;
    case 8:
      goto switchD_0248f070_caseD_8;
    }
LAB_0248f194:
    uStack00000000000000b8 = 0;
  }
  else if (uVar50 == 0x10) {
switchD_0248f070_caseD_8:
    if (uVar42 < 0xad) {
      if ((uVar42 != 3) && (uVar42 != 10)) goto LAB_0248f0c8;
    }
    else if ((uVar42 != 0xad) && ((uVar42 != 0x200b && (uVar42 != 0x2060)))) {
LAB_0248f0c8:
      if (*(uint *)(lVar23 + 0x18) <= uVar4)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar6 = *(undefined2 *)(lVar23 + (long)(int)uVar4 * 0x178 + 0x20);
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar28 = FUN_016f9f84(uVar6,0);
      if ((uVar28 & 1) == 0) {
        bVar17 = (int)uVar20 < (int)unaff_x19[0x94];
      }
      else {
        bVar17 = false;
      }
      if ((fVar54 <= fVar58) && (!bVar17 && (uVar50 >> 4 & 1) == 0)) {
        fStack00000000000000c4 = fVar66;
        if ((char)unaff_x19[0x1d] != '\0') {
          fStack00000000000000c4 = fVar87;
        }
        goto LAB_0248f194;
      }
      if (((uVar18 == 1) || (uVar20 != uVar37)) || (uVar91 == *(uint *)((long)unaff_x19 + 0x31c))) {
        fStack00000000000000c4 = fVar66;
        if ((char)unaff_x19[0x1d] != '\0') {
          fStack00000000000000c4 = fVar87;
        }
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uStack0000000000000024 = FUN_016fa418(uVar42,0);
        uStack00000000000000b8 = 0;
      }
      else {
        cVar33 = (char)unaff_x19[0x1d];
        fVar66 = -fVar54;
        if (cVar33 != '\0') {
          fVar66 = fVar54;
        }
        if (*(uint *)(lVar23 + 0x18) <= uVar4)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        fVar54 = 1.0;
        iVar22 = (int)*(char *)(lVar23 + (long)(int)uVar4 * 0x178 + 0x194) +
                 (-iVar5 - (uStack0000000000000024 & 1)) + iVar22 + -1;
        if (0 < iVar22) {
          fVar54 = *(float *)((long)unaff_x19 + 0x2d4);
        }
        if (iVar22 < 1) {
          iVar22 = 1;
        }
        if (uVar42 == 9) {
LAB_02490fe0:
          fVar54 = 1.0 - fVar54;
        }
        else {
          if (uVar42 != 0xa0) {
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar28 = FUN_016fa418(uVar42,0);
            cVar33 = (char)unaff_x19[0x1d];
            if ((uVar28 & 1) != 0) goto LAB_02490fe0;
          }
          iVar22 = (iVar5 - (~uStack0000000000000024 & 1)) + iVar21;
        }
        fVar54 = ((fVar58 + fVar66) * fVar54) / (float)iVar22;
        if (cVar33 == '\0') {
          fStack00000000000000c4 = fStack00000000000000c4 + fVar54;
          uStack00000000000000b8 =
               CONCAT44((float)((ulong)uStack00000000000000b8 >> 0x20) + 0.0,
                        (float)uStack00000000000000b8 + 0.0);
        }
        else {
          fStack00000000000000c4 = fStack00000000000000c4 - fVar54;
        }
      }
    }
  }
  else if (uVar50 == 0x20) {
    fVar54 = fVar76 + fVar86;
    goto LAB_0248f124;
  }
switchD_0248f070_caseD_3:
  uVar50 = (uint)*(undefined8 *)(lVar23 + 0x18);
  if (uVar50 <= uVar91)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar24 = lVar23 + lVar49 * 0x178;
  fVar66 = fStack0000000000000090 + fStack00000000000000c4;
  fVar54 = (float)uStack0000000000000088 + (float)uStack00000000000000b8;
  fVar58 = (float)((ulong)uStack0000000000000088 >> 0x20) +
           (float)((ulong)uStack00000000000000b8 >> 0x20);
  plVar48 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(char *)(lVar24 + 0x194) == '\0') goto LAB_0248fabc;
  iVar21 = *(int *)(lVar23 + lVar49 * 0x178 + 0x2c);
  if (iVar21 != 0) goto LAB_0248f808;
  fVar55 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)uVar20,1.0);
  switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
  case 0:
    lVar36 = lVar23 + lVar49 * 0x178;
    *(undefined4 *)(lVar36 + 0x84) = 0;
    *(undefined4 *)(lVar36 + 0xac) = 0;
    *(undefined4 *)(lVar36 + 0xd4) = 0x3f800000;
    fVar55 = 1.0;
    break;
  case 1:
    fVar74 = *(float *)(lVar23 + lVar49 * 0x178 + 0x70);
    if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
      lVar36 = lVar23 + lVar49 * 0x178;
      fVar86 = (fStack00000000000000c4 + fVar74) - *(float *)((long)unaff_x19 + 0x4d4);
      fVar74 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4d4);
      goto LAB_0248f2dc;
    }
    lVar36 = lVar23 + lVar49 * 0x178;
    fVar86 = fVar86 - fVar76;
    *(float *)(lVar36 + 0x84) = fVar55 + (fVar74 - fVar76) / fVar86;
    *(float *)(lVar36 + 0xac) = fVar55 + (*(float *)(lVar36 + 0x98) - fVar76) / fVar86;
    *(float *)(lVar36 + 0xd4) = fVar55 + (*(float *)(lVar36 + 0xc0) - fVar76) / fVar86;
    fVar55 = fVar55 + (*(float *)(lVar36 + 0xe8) - fVar76) / fVar86;
    break;
  case 2:
    lVar36 = lVar23 + lVar49 * 0x178;
    fVar74 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4d4);
    fVar86 = (fStack00000000000000c4 + *(float *)(lVar36 + 0x70)) -
             *(float *)((long)unaff_x19 + 0x4d4);
LAB_0248f2dc:
    *(float *)(lVar36 + 0x84) = fVar55 + fVar86 / fVar74;
    *(float *)(lVar36 + 0xac) =
         fVar55 + ((fStack00000000000000c4 + *(float *)(lVar36 + 0x98)) -
                  *(float *)((long)unaff_x19 + 0x4d4)) /
                  (*(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4d4));
    *(float *)(lVar36 + 0xd4) =
         fVar55 + ((fStack00000000000000c4 + *(float *)(lVar36 + 0xc0)) -
                  *(float *)((long)unaff_x19 + 0x4d4)) /
                  (*(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4d4));
    fVar55 = fVar55 + ((fStack00000000000000c4 + *(float *)(lVar36 + 0xe8)) -
                      *(float *)((long)unaff_x19 + 0x4d4)) /
                      (*(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4d4));
    break;
  case 3:
    switch((int)unaff_x19[0x61]) {
    case 0:
      lVar36 = lVar23 + lVar49 * 0x178;
      *(undefined4 *)(lVar36 + 0x88) = 0;
      *(undefined4 *)(lVar36 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar36 + 0xd8) = 0;
      *(undefined4 *)(lVar36 + 0x100) = 0x3f800000;
      break;
    case 1:
      lVar36 = lVar23 + lVar49 * 0x178;
      fVar74 = fVar74 - fVar92;
      fVar86 = fVar55 + (*(float *)(lVar36 + 0x74) - fVar92) / fVar74;
      fVar74 = fVar55 + (*(float *)(lVar36 + 0x9c) - fVar92) / fVar74;
      *(float *)(lVar36 + 0x88) = fVar86;
      *(float *)(lVar36 + 0xb0) = fVar74;
      *(float *)(lVar36 + 0xd8) = fVar86;
      *(float *)(lVar36 + 0x100) = fVar74;
      break;
    case 2:
      lVar36 = lVar23 + lVar49 * 0x178;
      fVar86 = fVar55 + (*(float *)(lVar36 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                        (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
      *(float *)(lVar36 + 0x88) = fVar86;
      fVar74 = *(float *)(unaff_x19 + 0x9b);
      fVar92 = *(float *)(unaff_x19 + 0x9c);
      *(float *)(lVar36 + 0xd8) = fVar86;
      fVar86 = fVar55 + (*(float *)(lVar36 + 0x9c) - fVar74) / (fVar92 - fVar74);
      *(float *)(lVar36 + 0xb0) = fVar86;
      *(float *)(lVar36 + 0x100) = fVar86;
      break;
    case 3:
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
      uVar50 = (uint)*(undefined8 *)(lVar23 + 0x18);
    }
    if (uVar50 <= uVar91)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar36 = lVar23 + lVar49 * 0x178;
    fVar86 = *(float *)(lVar36 + 0x15c);
    fVar74 = (1.0 - (*(float *)(lVar36 + 0x88) + *(float *)(lVar36 + 0xb0)) * fVar86) * 0.5;
    fVar92 = fVar55 + *(float *)(lVar36 + 0x88) * fVar86 + fVar74;
    fVar55 = fVar55 + fVar74 + *(float *)(lVar36 + 0xb0) * fVar86;
    *(float *)(lVar36 + 0x84) = fVar92;
    *(float *)(lVar36 + 0xac) = fVar92;
    *(float *)(lVar36 + 0xd4) = fVar55;
    break;
  default:
    goto switchD_0248f240_default;
  }
  *(float *)(lVar23 + lVar49 * 0x178 + 0xfc) = fVar55;
switchD_0248f240_default:
  switch((int)unaff_x19[0x61]) {
  case 0:
    if (uVar50 <= uVar91)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar36 = lVar23 + lVar49 * 0x178;
    *(undefined4 *)(lVar36 + 0x88) = 0;
    *(undefined4 *)(lVar36 + 0xb0) = 0x3f800000;
    *(undefined4 *)(lVar36 + 0xd8) = 0x3f800000;
    *(undefined4 *)(lVar36 + 0x100) = 0;
    break;
  case 1:
    if (uVar91 < uVar50) {
      lVar36 = lVar23 + lVar49 * 0x178;
      fVar89 = fVar89 - fVar73;
      fVar55 = (*(float *)(lVar36 + 0x74) - fVar73) / fVar89;
      fVar89 = (*(float *)(lVar36 + 0x9c) - fVar73) / fVar89;
      *(float *)(lVar36 + 0x88) = fVar55;
      goto LAB_0248f644;
    }
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  case 2:
    if (uVar50 <= uVar91)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar36 = lVar23 + lVar49 * 0x178;
    fVar55 = (*(float *)(lVar36 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
             (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
    *(float *)(lVar36 + 0x88) = fVar55;
    fVar89 = (*(float *)(lVar36 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
             (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
LAB_0248f644:
    *(float *)(lVar36 + 0xb0) = fVar89;
    *(float *)(lVar36 + 0xd8) = fVar89;
    *(float *)(lVar36 + 0x100) = fVar55;
    break;
  case 3:
    if (uVar50 <= uVar91)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar36 = lVar23 + lVar49 * 0x178;
    fVar89 = *(float *)(lVar36 + 0x15c);
    fVar86 = (1.0 - (*(float *)(lVar36 + 0x84) + *(float *)(lVar36 + 0xd4)) / fVar89) * 0.5;
    fVar55 = *(float *)(lVar36 + 0x84) / fVar89 + fVar86;
    fVar86 = fVar86 + *(float *)(lVar36 + 0xd4) / fVar89;
    *(float *)(lVar36 + 0x88) = fVar55;
    *(float *)(lVar36 + 0xb0) = fVar86;
    *(float *)(lVar36 + 0x100) = fVar55;
    *(float *)(lVar36 + 0xd8) = fVar86;
  }
  if (uVar50 <= uVar91)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar36 = lVar23 + lVar49 * 0x178;
  fVar55 = ABS(fVar51) * *(float *)(lVar36 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
  if ((*(char *)(lVar36 + 0x5c) == '\0') && ((*(byte *)(lVar23 + lVar49 * 0x178 + 400) & 1) != 0)) {
    fVar55 = -fVar55;
  }
  lVar36 = lVar23 + lVar49 * 0x178;
  fVar89 = *(float *)(lVar36 + 0x88);
  fVar74 = *(float *)(lVar36 + 0x84);
  fVar86 = -2.1474836e+09;
  if (fVar74 != INFINITY) {
    fVar86 = (float)(int)fVar74;
  }
  fVar92 = *(float *)(lVar36 + 0xd4);
  fVar76 = *(float *)(lVar36 + 0xd8);
  fVar73 = -2.1474836e+09;
  if (fVar89 != INFINITY) {
    fVar73 = (float)(int)fVar89;
  }
  uVar88 = FUN_024e0374(fVar74 - fVar86,fVar89 - fVar73);
  *(undefined4 *)(lVar36 + 0x84) = uVar88;
  if (*(uint *)(lVar23 + 0x18) <= uVar91)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  fVar76 = fVar76 - fVar73;
  *(float *)(lVar36 + 0x88) = fVar55;
  uVar88 = FUN_024e0374(fVar74 - fVar86,fVar76);
  *(undefined4 *)(lVar23 + lVar49 * 0x178 + 0xac) = uVar88;
  if (*(uint *)(lVar23 + 0x18) <= uVar91)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  fVar92 = fVar92 - fVar86;
  *(float *)(lVar23 + lVar49 * 0x178 + 0xb0) = fVar55;
  fVar86 = (float)FUN_024e0374(fVar92,fVar76);
  *(float *)(lVar36 + 0xd4) = fVar86;
  if (*(uint *)(lVar23 + 0x18) <= uVar91)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar36 + 0xd8) = fVar55;
  uVar88 = FUN_024e0374(fVar92,fVar89 - fVar73);
  *(undefined4 *)(lVar23 + lVar49 * 0x178 + 0xfc) = uVar88;
  uVar50 = (uint)*(undefined8 *)(lVar23 + 0x18);
  if (uVar50 <= uVar91)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(float *)(lVar23 + lVar49 * 0x178 + 0x100) = fVar55;
LAB_0248f808:
  if (((int)uVar91 < (int)unaff_x19[100]) &&
     (iStack00000000000000a4 < *(int *)((long)unaff_x19 + 0x324))) {
    if (((int)uVar20 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] != 5)) {
      if (uVar50 <= uVar91)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar24 = lVar23 + lVar49 * 0x178;
      *(ulong *)(lVar24 + 0x70) =
           CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar24 + 0x70) >> 0x20),
                    fVar66 + (float)*(undefined8 *)(lVar24 + 0x70));
      *(float *)(lVar24 + 0x78) = fVar58 + *(float *)(lVar24 + 0x78);
      plVar48 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
      if (*(uint *)(lVar23 + 0x18) <= uVar91)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar24 = lVar23 + lVar49 * 0x178;
      *(ulong *)(lVar24 + 0x98) =
           CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar24 + 0x98) >> 0x20),
                    fVar66 + (float)*(undefined8 *)(lVar24 + 0x98));
      *(float *)(lVar24 + 0xa0) = fVar58 + *(float *)(lVar24 + 0xa0);
      uVar50 = *(uint *)(lVar23 + 0x18);
LAB_0248fa4c:
      if (uVar50 <= uVar91)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar24 = lVar23 + lVar49 * 0x178;
      *(ulong *)(lVar24 + 0xc0) =
           CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar24 + 0xc0) >> 0x20),
                    fVar66 + (float)*(undefined8 *)(lVar24 + 0xc0));
      *(float *)(lVar24 + 200) = fVar58 + *(float *)(lVar24 + 200);
      if (*(uint *)(lVar23 + 0x18) <= uVar91)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar24 = lVar23 + lVar49 * 0x178;
      *(ulong *)(lVar24 + 0xe8) =
           CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar24 + 0xe8) >> 0x20),
                    fVar66 + (float)*(undefined8 *)(lVar24 + 0xe8));
      *(float *)(lVar24 + 0xf0) = fVar58 + *(float *)(lVar24 + 0xf0);
      if (iVar21 == 0) goto LAB_0248fa9c;
LAB_0248f9d0:
      if (iVar21 == 1) {
        pcVar41 = *(code **)(*unaff_x19 + 0x8f8);
        goto LAB_0248faa8;
      }
      goto LAB_0248fabc;
    }
    if (((int)uVar20 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] == 5)) {
      if (uVar91 < uVar50) {
        if (*(uint *)(lVar23 + lVar49 * 0x178 + 0x68) != uVar3) goto LAB_0248f8d8;
        lVar24 = lVar23 + lVar49 * 0x178;
        *(ulong *)(lVar24 + 0x70) =
             CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar24 + 0x70) >> 0x20),
                      fVar66 + (float)*(undefined8 *)(lVar24 + 0x70));
        *(float *)(lVar24 + 0x78) = fVar58 + *(float *)(lVar24 + 0x78);
        if (uVar91 < *(uint *)(lVar23 + 0x18)) {
          lVar24 = lVar23 + lVar49 * 0x178;
          *(ulong *)(lVar24 + 0x98) =
               CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar24 + 0x98) >> 0x20),
                        fVar66 + (float)*(undefined8 *)(lVar24 + 0x98));
          *(float *)(lVar24 + 0xa0) = fVar58 + *(float *)(lVar24 + 0xa0);
          uVar50 = *(uint *)(lVar23 + 0x18);
          plVar48 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
          goto LAB_0248fa4c;
        }
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    }
  }
LAB_0248f8d8:
  if (uVar50 <= uVar91)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if (DAT_03774d76 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03774d76 = '\x01';
  }
  puVar12 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
  lVar36 = lVar23 + lVar49 * 0x178;
  uVar88 = *(undefined4 *)
            (*(undefined8 **)
              (*(long *)
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
              0xb8) + 1);
  *(undefined8 *)(lVar36 + 0x70) =
       **(undefined8 **)
         (*(long *)Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
         0xb8);
  *(undefined4 *)(lVar36 + 0x78) = uVar88;
  plVar48 = (long *)System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if (*(uint *)(lVar23 + 0x18) <= uVar91)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar36 = lVar23 + lVar49 * 0x178;
  uVar88 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar12 + 0xb8) + 1);
  *(undefined8 *)(lVar36 + 0x98) = **(undefined8 **)(*(long *)puVar12 + 0xb8);
  *(undefined4 *)(lVar36 + 0xa0) = uVar88;
  if (*(uint *)(lVar23 + 0x18) <= uVar91)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar36 = lVar23 + lVar49 * 0x178;
  uVar88 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar12 + 0xb8) + 1);
  *(undefined8 *)(lVar36 + 0xc0) = **(undefined8 **)(*(long *)puVar12 + 0xb8);
  *(undefined4 *)(lVar36 + 200) = uVar88;
  if (*(uint *)(lVar23 + 0x18) <= uVar91)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar36 = lVar23 + lVar49 * 0x178;
  uVar88 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar12 + 0xb8) + 1);
  *(undefined8 *)(lVar36 + 0xe8) = **(undefined8 **)(*(long *)puVar12 + 0xb8);
  *(undefined4 *)(lVar36 + 0xf0) = uVar88;
  if (*(uint *)(lVar23 + 0x18) <= uVar91)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  *(undefined1 *)(lVar24 + 0x194) = 0;
  if (iVar21 != 0) goto LAB_0248f9d0;
LAB_0248fa9c:
  pcVar41 = *(code **)(*unaff_x19 + 0x8d8);
LAB_0248faa8:
  (*pcVar41)();
LAB_0248fabc:
  if ((*plVar2 == 0) || (lVar24 = *(long *)(*plVar2 + 0x38), lVar24 == 0)) goto LAB_02491464;
  if (*(uint *)(lVar24 + 0x18) <= uVar91)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar24 = lVar24 + lVar49 * 0x178;
  uVar31 = *(undefined8 *)(lVar24 + 0x11c);
  *(undefined8 *)(lVar24 + 0x11c) =
       CONCAT44(fVar54 + (float)((ulong)uVar31 >> 0x20),fVar66 + (float)uVar31);
  *(float *)(lVar24 + 0x124) = fVar58 + *(float *)(lVar24 + 0x124);
  if ((*plVar2 == 0) || (lVar24 = *(long *)(*plVar2 + 0x38), lVar24 == 0)) goto LAB_02491464;
  if (*(uint *)(lVar24 + 0x18) <= uVar91)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar24 = lVar24 + lVar49 * 0x178;
  *(ulong *)(lVar24 + 0x110) =
       CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar24 + 0x110) >> 0x20),
                fVar66 + (float)*(undefined8 *)(lVar24 + 0x110));
  *(float *)(lVar24 + 0x118) = fVar58 + *(float *)(lVar24 + 0x118);
  if ((*plVar2 == 0) || (lVar24 = *(long *)(*plVar2 + 0x38), lVar24 == 0)) goto LAB_02491464;
  if (*(uint *)(lVar24 + 0x18) <= uVar91)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar24 = lVar24 + lVar49 * 0x178;
  *(ulong *)(lVar24 + 0x128) =
       CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar24 + 0x128) >> 0x20),
                fVar66 + (float)*(undefined8 *)(lVar24 + 0x128));
  *(float *)(lVar24 + 0x130) = fVar58 + *(float *)(lVar24 + 0x130);
  if ((*plVar2 == 0) || (lVar24 = *(long *)(*plVar2 + 0x38), lVar24 == 0)) goto LAB_02491464;
  if (*(uint *)(lVar24 + 0x18) <= uVar91)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar24 = lVar24 + lVar49 * 0x178;
  *(float *)(lVar24 + 0x134) = fVar66 + *(float *)(lVar24 + 0x134);
  *(ulong *)(lVar24 + 0x138) =
       CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar24 + 0x138) >> 0x20),
                fVar54 + (float)*(undefined8 *)(lVar24 + 0x138));
  lVar24 = *plVar2;
  if ((lVar24 == 0) || (lVar36 = *(long *)(lVar24 + 0x38), lVar36 == 0)) goto LAB_02491464;
  uVar50 = *(uint *)(lVar36 + 0x18);
  if (uVar50 <= uVar91)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  lVar45 = lVar36 + lVar49 * 0x178;
  *(ulong *)(lVar45 + 0x140) =
       CONCAT44(fVar66 + (float)((ulong)*(undefined8 *)(lVar45 + 0x140) >> 0x20),
                fVar66 + (float)*(undefined8 *)(lVar45 + 0x140));
  *(ulong *)(lVar45 + 0x148) =
       CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar45 + 0x148) >> 0x20),
                fVar54 + (float)*(undefined8 *)(lVar45 + 0x148));
  *(float *)(lVar45 + 0x150) = fVar54 + *(float *)(lVar45 + 0x150);
  if (uVar20 == uVar37) {
    uVar37 = *puVar1 - 1;
    if (uVar91 == uVar37) goto LAB_0248fccc;
  }
  else {
    lVar24 = *(long *)(lVar24 + 0x50);
    if (lVar24 == 0) goto LAB_02491464;
    if (*(uint *)(lVar24 + 0x18) <= uVar37)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar45 = (long)(int)uVar37;
    lVar47 = lVar24 + lVar45 * 0x5c;
    fVar86 = fVar54 + *(float *)(lVar47 + 0x54);
    *(ulong *)(lVar47 + 0x4c) =
         CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar47 + 0x4c) >> 0x20),
                  fVar54 + (float)*(undefined8 *)(lVar47 + 0x4c));
    *(float *)(lVar47 + 0x54) = fVar86;
    *(float *)(lVar47 + 0x58) = fVar66 + *(float *)(lVar47 + 0x58);
    if (uVar50 <= *(uint *)(lVar47 + 0x34))
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    uVar88 = *(undefined4 *)(lVar36 + (long)(int)*(uint *)(lVar47 + 0x34) * 0x178 + 0x11c);
    lVar24 = lVar24 + lVar45 * 0x5c;
    *(float *)(lVar24 + 0x70) = fVar86;
    *(undefined4 *)(lVar24 + 0x6c) = uVar88;
    lVar24 = *plVar2;
    if ((lVar24 == 0) || (lVar36 = *(long *)(lVar24 + 0x50), lVar36 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar36 + 0x18) <= uVar37)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar24 = *(long *)(lVar24 + 0x38);
    if (lVar24 == 0) goto LAB_02491464;
    uVar37 = *(uint *)(lVar36 + lVar45 * 0x5c + 0x40);
    if (*(uint *)(lVar24 + 0x18) <= uVar37)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar36 = lVar36 + lVar45 * 0x5c;
    *(undefined4 *)(lVar36 + 0x74) = *(undefined4 *)(lVar24 + (long)(int)uVar37 * 0x178 + 0x128);
    *(undefined4 *)(lVar36 + 0x78) = *(undefined4 *)(lVar36 + 0x4c);
    uVar37 = *puVar1 - 1;
LAB_0248fccc:
    if (uVar91 == uVar37) {
      lVar24 = *plVar2;
      if ((lVar24 == 0) || (lVar36 = *(long *)(lVar24 + 0x50), lVar36 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar36 + 0x18) <= uVar20)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar45 = lVar36 + lVar27 * 0x5c;
      fVar86 = fVar54 + *(float *)(lVar45 + 0x54);
      *(ulong *)(lVar45 + 0x4c) =
           CONCAT44(fVar54 + (float)((ulong)*(undefined8 *)(lVar45 + 0x4c) >> 0x20),
                    fVar54 + (float)*(undefined8 *)(lVar45 + 0x4c));
      *(float *)(lVar45 + 0x54) = fVar86;
      *(float *)(lVar45 + 0x58) = fVar66 + *(float *)(lVar45 + 0x58);
      lVar24 = *(long *)(lVar24 + 0x38);
      if (lVar24 == 0) goto LAB_02491464;
      if (*(uint *)(lVar24 + 0x18) <= *(uint *)(lVar45 + 0x34))
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar88 = *(undefined4 *)(lVar24 + (long)(int)*(uint *)(lVar45 + 0x34) * 0x178 + 0x11c);
      lVar36 = lVar36 + lVar27 * 0x5c;
      *(float *)(lVar36 + 0x70) = fVar86;
      *(undefined4 *)(lVar36 + 0x6c) = uVar88;
      lVar24 = *plVar2;
      if ((lVar24 == 0) || (lVar36 = *(long *)(lVar24 + 0x50), lVar36 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar36 + 0x18) <= uVar20)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar24 = *(long *)(lVar24 + 0x38);
      if (lVar24 == 0) goto LAB_02491464;
      uVar37 = *(uint *)(lVar36 + lVar27 * 0x5c + 0x40);
      if (*(uint *)(lVar24 + 0x18) <= uVar37)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar36 = lVar36 + lVar27 * 0x5c;
      *(undefined4 *)(lVar36 + 0x74) = *(undefined4 *)(lVar24 + (long)(int)uVar37 * 0x178 + 0x128);
      *(undefined4 *)(lVar36 + 0x78) = *(undefined4 *)(lVar36 + 0x4c);
    }
  }
  if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar28 = FUN_016f9468(uVar42,0);
  if (((((uVar28 & 1) == 0) && (1 < uVar42 - 0x2010)) && (uVar42 != 0xad)) && (uVar42 != 0x2d)) {
    if (bVar10) {
      if (((uVar18 != 1) && ((int)uVar91 < (int)(*(uint *)(lVar23 + 0x18) - 1))) &&
         (((int)uVar91 < (int)*puVar1 && ((uVar42 == 0x2019 || (uVar42 == 0x27)))))) {
        if (*(uint *)(lVar23 + 0x18) <= uVar18 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        uVar6 = *(undefined2 *)(lVar23 + lStack0000000000000128 + -0x438);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar28 = FUN_016f9468(uVar6,0);
        if ((uVar28 & 1) != 0) {
          if (*(uint *)(lVar23 + 0x18) <= uVar18)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          uVar6 = *(undefined2 *)(lVar23 + lStack0000000000000128 + -0x148);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar28 = FUN_016f9468(uVar6,0);
          if ((uVar28 & 1) != 0) goto LAB_0248fee0;
        }
      }
    }
    else {
      if (uVar18 != 1) {
LAB_024909a0:
        bVar10 = false;
        goto LAB_0248fee8;
      }
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar28 = FUN_016f93a0(uVar42,0);
      if ((uVar28 & 1) != 0) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar28 = FUN_016f68bc(uVar42,0);
        if (((uVar42 != 0x200b) && ((uVar28 & 1) == 0)) && (*puVar1 != 1)) goto LAB_024909a0;
      }
    }
    if (uVar91 == *puVar1 - 1) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar28 = FUN_016f9468(uVar42,0);
      iVar21 = iVar7;
      if ((uVar28 & 1) == 0) goto LAB_02490204;
    }
    else {
LAB_02490204:
      iVar21 = uVar18 - 2;
    }
    lVar24 = *plVar2;
    if (lVar24 == 0) goto LAB_02491464;
    lVar36 = *(long *)(lVar24 + 0x40);
    if (lVar36 == 0) goto LAB_02491464;
    uVar37 = *(uint *)(lVar24 + 0x24);
    iVar22 = *(int *)(lVar36 + 0x18);
    if (iVar22 < (int)(uVar37 + 1)) {
      if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01147b84((long *)(lVar24 + 0x40),iVar22 + 1,
                   *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
      lVar24 = *plVar2;
      if (lVar24 == 0) goto LAB_02491464;
    }
    lVar36 = *(long *)(lVar24 + 0x40);
    if (lVar36 == 0) goto LAB_02491464;
    if (*(uint *)(lVar36 + 0x18) <= uVar37)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar36 = lVar36 + (long)(int)uVar37 * 0x18;
    *(long **)(lVar36 + 0x20) = unaff_x19;
    *(uint *)(lVar36 + 0x28) = uStack0000000000000114;
    *(int *)(lVar36 + 0x2c) = iVar21;
    *(uint *)(lVar36 + 0x30) = (iVar21 - uStack0000000000000114) + 1;
    lVar36 = *(long *)(lVar24 + 0x50);
    *(int *)(lVar24 + 0x24) = *(int *)(lVar24 + 0x24) + 1;
    if (lVar36 == 0) goto LAB_02491464;
    if (*(uint *)(lVar36 + 0x18) <= uVar20)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar36 = lVar36 + lVar27 * 0x5c;
    bVar10 = false;
    iStack00000000000000a4 = iStack00000000000000a4 + 1;
    *(int *)(lVar36 + 0x30) = *(int *)(lVar36 + 0x30) + 1;
  }
  else {
    if (!bVar10) {
      uStack0000000000000114 = uVar91;
    }
    if (uVar91 == *puVar1 - 1) {
      lVar24 = *plVar2;
      if (lVar24 == 0) goto LAB_02491464;
      lVar36 = *(long *)(lVar24 + 0x40);
      if (lVar36 == 0) goto LAB_02491464;
      uVar37 = *(uint *)(lVar24 + 0x24);
      iVar21 = *(int *)(lVar36 + 0x18);
      if (iVar21 < (int)(uVar37 + 1)) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147b84((long *)(lVar24 + 0x40),iVar21 + 1,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
        lVar24 = *plVar2;
        if (lVar24 == 0) goto LAB_02491464;
      }
      lVar36 = *(long *)(lVar24 + 0x40);
      if (lVar36 == 0) goto LAB_02491464;
      if (*(uint *)(lVar36 + 0x18) <= uVar37)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar36 = lVar36 + (long)(int)uVar37 * 0x18;
      *(long **)(lVar36 + 0x20) = unaff_x19;
      *(uint *)(lVar36 + 0x28) = uStack0000000000000114;
      *(uint *)(lVar36 + 0x2c) = uVar91;
      *(uint *)(lVar36 + 0x30) = uVar18 - uStack0000000000000114;
      lVar36 = *(long *)(lVar24 + 0x50);
      *(int *)(lVar24 + 0x24) = *(int *)(lVar24 + 0x24) + 1;
      if (lVar36 == 0) goto LAB_02491464;
      if (*(uint *)(lVar36 + 0x18) <= uVar20)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar36 = lVar36 + lVar27 * 0x5c;
      iStack00000000000000a4 = iStack00000000000000a4 + 1;
      *(int *)(lVar36 + 0x30) = *(int *)(lVar36 + 0x30) + 1;
    }
LAB_0248fee0:
    bVar10 = true;
  }
LAB_0248fee8:
  if ((*plVar2 == 0) || (lVar24 = *(long *)(*plVar2 + 0x38), lVar24 == 0)) goto LAB_02491464;
  uVar37 = *(uint *)(lVar24 + 0x18);
  if (uVar37 <= uVar91)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*(byte *)(lVar24 + lVar49 * 0x178 + 400) >> 2 & 1) == 0) {
    if (bVar15) {
LAB_0248ff18:
      if (uVar37 <= uVar18 - 2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar27 = *unaff_x19;
      uVar88 = *(undefined4 *)(lVar24 + lStack0000000000000128 + -0x330);
      uVar75 = *(undefined4 *)(lVar24 + lStack0000000000000128 + -0x2f8);
LAB_02490474:
      pcVar41 = *(code **)(lVar27 + 0x908);
LAB_0249047c:
      (*pcVar41)(fStack0000000000000054,fStack000000000000004c,uStack0000000000000050,uVar88,
                 fStack00000000000000cc,0,fStack0000000000000058,uVar75);
      puVar12 = System_Threading_Mutex_TypeInfo;
      lVar24 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar24 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar24 = *(long *)puVar12;
      }
LAB_024904cc:
      bVar15 = false;
      fVar52 = 0.0;
      fStack00000000000000cc = *(float *)(*(long *)(lVar24 + 0xb8) + 0x15a8);
      fStack00000000000000c8 = 0.0;
    }
    else {
LAB_024903d8:
      bVar15 = false;
    }
  }
  else {
    lVar24 = lVar24 + lVar49 * 0x178;
    iVar21 = *(int *)(lVar24 + 0x68);
    *(int *)(lVar24 + 0x16c) = iVar19;
    if ((((int)unaff_x19[100] < (int)uVar91) || ((int)unaff_x19[0x65] < (int)uVar20)) ||
       (((int)unaff_x19[0x5b] == 5 && (iVar21 + 1 != (int)unaff_x19[0x66])))) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar28 = FUN_016f68bc(uVar42,0);
    if ((uVar42 != 0x200b) && ((uVar28 & 1) == 0)) {
      lVar24 = *plVar2;
      if ((lVar24 == 0) || (lVar27 = *(long *)(lVar24 + 0x38), lVar27 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar27 + 0x18) <= uVar91)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      fVar86 = *(float *)(lVar27 + lVar49 * 0x178 + 0x160);
      if (fVar52 <= fVar86) {
        fVar52 = fVar86;
      }
      if (fStack00000000000000c8 <= ABS(fVar55)) {
        fStack00000000000000c8 = ABS(fVar55);
      }
      if (iVar21 != iStack0000000000000048) {
        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar24 = *plVar2;
          if (lVar24 == 0) goto LAB_02491464;
          lVar27 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
        }
        else {
          lVar27 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
        }
        fStack00000000000000cc = *(float *)(lVar27 + 0x15a8);
      }
      lVar24 = *(long *)(lVar24 + 0x38);
      if (lVar24 == 0) goto LAB_02491464;
      if (*(uint *)(lVar24 + 0x18) <= uVar91)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      if (unaff_x19[0x1e] == 0) goto LAB_02491464;
      fVar89 = *(float *)(lVar24 + lVar49 * 0x178 + 0x14c);
      fVar86 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
      fVar89 = fVar89 + fVar52 * fVar86;
      iStack0000000000000048 = iVar21;
      if (fVar89 <= fStack00000000000000cc) {
        fStack00000000000000cc = fVar89;
      }
    }
    if (!bVar15) {
      bVar15 = false;
      if ((((uVar42 == 0xd) || ((uVar42 | 1) == 0xb)) || ((int)uVar34 < (int)uVar91)) || (!bVar17))
      goto LAB_024904e8;
      if (uVar91 == uVar34) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar28 = FUN_016fa418(uVar42,0);
        if ((uVar28 & 1) != 0) goto LAB_024903d8;
      }
      if ((*plVar2 == 0) || (lVar24 = *(long *)(*plVar2 + 0x38), lVar24 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar24 + 0x18) <= uVar91)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar24 = lVar24 + lVar49 * 0x178;
      fStack0000000000000058 = *(float *)(lVar24 + 0x160);
      fStack0000000000000054 = *(float *)(lVar24 + 0x11c);
      bVar15 = fVar52 != 0.0;
      fVar86 = fStack0000000000000058;
      if (bVar15) {
        fVar86 = fVar52;
      }
      fVar52 = fVar86;
      uStack000000000000005c = *(uint *)(lVar24 + 0x168);
      uStack0000000000000050 = 0;
      fVar86 = fVar55;
      if (bVar15) {
        fVar86 = fStack00000000000000c8;
      }
      fStack000000000000004c = fStack00000000000000cc;
      fStack00000000000000c8 = fVar86;
    }
    if (*puVar1 == 1) {
      if ((*plVar2 != 0) && (lVar24 = *(long *)(*plVar2 + 0x38), lVar24 != 0)) {
        if (uVar91 < *(uint *)(lVar24 + 0x18)) {
          lVar24 = lVar24 + lVar49 * 0x178;
          lVar27 = *unaff_x19;
          uVar88 = *(undefined4 *)(lVar24 + 0x128);
          uVar75 = *(undefined4 *)(lVar24 + 0x160);
          goto LAB_02490474;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
    if ((uVar91 == uVar4) || ((int)uVar34 <= (int)uVar91)) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar28 = FUN_016f68bc(uVar42,0);
      if ((*plVar2 != 0) && (lVar24 = *(long *)(*plVar2 + 0x38), lVar24 != 0)) {
        if (uVar42 == 0x200b || (uVar28 & 1) != 0) {
          lVar27 = lVar38;
          if (*(uint *)(lVar24 + 0x18) <= uVar34)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        else {
          lVar27 = lVar49;
          if (*(uint *)(lVar24 + 0x18) <= uVar91)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        lVar24 = lVar24 + lVar27 * 0x178;
        uVar88 = *(undefined4 *)(lVar24 + 0x128);
        uVar75 = *(undefined4 *)(lVar24 + 0x160);
        pcVar41 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_0249047c;
      }
      goto LAB_02491464;
    }
    if (!bVar17) {
      if ((*plVar2 != 0) && (lVar24 = *(long *)(*plVar2 + 0x38), lVar24 != 0)) {
        uVar37 = *(uint *)(lVar24 + 0x18);
        goto LAB_0248ff18;
      }
      goto LAB_02491464;
    }
    if ((int)uVar91 < (int)(*puVar1 - 1)) {
      if ((*plVar2 == 0) || (lVar24 = *(long *)(*plVar2 + 0x38), lVar24 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar24 + 0x18) <= uVar18)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar28 = FUN_024a9e4c(uStack000000000000005c,*(undefined4 *)(lVar24 + lStack0000000000000128),
                            0);
      if ((uVar28 & 1) == 0) {
        if ((*plVar2 != 0) && (lVar24 = *(long *)(*plVar2 + 0x38), lVar24 != 0)) {
          if (uVar91 < *(uint *)(lVar24 + 0x18)) {
            lVar24 = lVar24 + lVar49 * 0x178;
            (**(code **)(*unaff_x19 + 0x908))
                      (fStack0000000000000054,fStack000000000000004c,uStack0000000000000050,
                       *(undefined4 *)(lVar24 + 0x128),fStack00000000000000cc,0,
                       fStack0000000000000058,*(undefined4 *)(lVar24 + 0x160));
            puVar12 = System_Threading_Mutex_TypeInfo;
            lVar24 = *(long *)System_Threading_Mutex_TypeInfo;
            if (*(int *)(lVar24 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar24 = *(long *)puVar12;
            }
            goto LAB_024904cc;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        goto LAB_02491464;
      }
    }
    bVar15 = true;
  }
LAB_024904e8:
  if ((*plVar2 == 0) || (lVar24 = *(long *)(*plVar2 + 0x38), lVar24 == 0)) goto LAB_02491464;
  if (*(uint *)(lVar24 + 0x18) <= uVar91)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if (lVar46 == 0) goto LAB_02491464;
  uVar37 = *(uint *)(lVar24 + lVar49 * 0x178 + 400);
  fVar86 = (float)FUN_026fd1f0(lVar46 + 0x50,0);
  if ((uVar37 >> 6 & 1) == 0) {
    if (bVar9) {
      if ((*plVar2 == 0) || (lVar24 = *(long *)(*plVar2 + 0x38), lVar24 == 0)) goto LAB_02491464;
      if (*(uint *)(lVar24 + 0x18) <= uVar18 - 2)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      uVar88 = *(undefined4 *)(lVar24 + lStack0000000000000128 + -0x330);
      pcVar41 = *(code **)(*unaff_x19 + 0x908);
      fVar54 = in_stack_00000080._4_4_ * fVar86 +
               *(float *)(lVar24 + lStack0000000000000128 + -0x30c);
LAB_02490a68:
      (*pcVar41)(fStack000000000000007c,fStack000000000000006c,uVar90,uVar88,fVar54,0,
                 in_stack_00000080._4_4_,in_stack_00000080._4_4_);
    }
LAB_02490a9c:
    bVar9 = false;
  }
  else {
    lVar24 = *plVar2;
    if ((lVar24 == 0) || (lVar27 = *(long *)(lVar24 + 0x38), lVar27 == 0)) goto LAB_02491464;
    if (*(uint *)(lVar27 + 0x18) <= uVar91)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    *(int *)(lVar27 + lVar49 * 0x178 + 0x174) = iVar19;
    if ((((int)unaff_x19[100] < (int)uVar91) || ((int)unaff_x19[0x65] < (int)uVar20)) ||
       (((int)unaff_x19[0x5b] == 5 &&
        (*(int *)(lVar27 + lVar49 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    if ((((uVar42 == 0xd) || ((uVar42 | 1) == 0xb)) || ((int)uVar34 < (int)uVar91)) ||
       (bVar9 || !bVar17)) {
LAB_02490668:
      if (!bVar9) goto LAB_02490a9c;
    }
    else {
      if (uVar91 == uVar34) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar28 = FUN_016fa418(uVar42,0);
        if ((uVar28 & 1) != 0) goto LAB_02490668;
        lVar24 = *plVar2;
        if (lVar24 == 0) goto LAB_02491464;
      }
      lVar24 = *(long *)(lVar24 + 0x38);
      if (lVar24 == 0) goto LAB_02491464;
      if (*(uint *)(lVar24 + 0x18) <= uVar91)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar24 = lVar24 + lVar49 * 0x178;
      fVar56 = *(float *)(lVar24 + 0x60);
      in_stack_00000080._4_4_ = *(float *)(lVar24 + 0x160);
      fStack0000000000000034 = *(float *)(lVar24 + 0x14c);
      fStack000000000000007c = *(float *)(lVar24 + 0x11c);
      fStack000000000000006c = fVar86 * in_stack_00000080._4_4_ + fStack0000000000000034;
      uVar90 = 0;
    }
    uVar37 = *puVar1;
    if (uVar37 == 1) {
      if (*plVar2 != 0) {
        lVar24 = *(long *)(*plVar2 + 0x38);
joined_r0x024907c8:
        if (lVar24 != 0) {
          if (uVar91 < *(uint *)(lVar24 + 0x18)) {
            lVar24 = lVar24 + lVar49 * 0x178;
            lVar38 = *unaff_x19;
            uVar88 = *(undefined4 *)(lVar24 + 0x128);
            fVar54 = *(float *)(lVar24 + 0x14c);
LAB_024907e8:
            pcVar41 = *(code **)(lVar38 + 0x908);
LAB_02490a64:
            fVar54 = fVar86 * in_stack_00000080._4_4_ + fVar54;
            goto LAB_02490a68;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
      }
      goto LAB_02491464;
    }
    if (uVar91 == uVar4) {
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar28 = FUN_016f68bc(uVar42,0);
      if ((*plVar2 != 0) && (lVar24 = *(long *)(*plVar2 + 0x38), lVar24 != 0)) {
        uVar37 = *(uint *)(lVar24 + 0x18);
        if (uVar42 == 0x200b || (uVar28 & 1) != 0) {
          if (uVar37 <= uVar34)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
        else {
LAB_02490a40:
          lVar38 = lVar49;
          if (uVar37 <= uVar91)
          goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
        }
LAB_02490a48:
        lVar24 = lVar24 + lVar38 * 0x178;
        fVar54 = *(float *)(lVar24 + 0x14c);
        uVar88 = *(undefined4 *)(lVar24 + 0x128);
        pcVar41 = *(code **)(*unaff_x19 + 0x908);
        goto LAB_02490a64;
      }
      goto LAB_02491464;
    }
    if ((int)uVar91 < (int)uVar37) {
      lVar24 = *plVar2;
      if ((lVar24 != 0) && (lVar27 = *(long *)(lVar24 + 0x38), lVar27 != 0)) {
        if (uVar18 < *(uint *)(lVar27 + 0x18)) {
          if (*(float *)(lVar27 + lStack0000000000000128 + -0x108) == fVar56) {
            fVar89 = *(float *)(lVar27 + lStack0000000000000128 + -0x1c);
            if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar28 = FUN_024aa280(fVar54 + fVar89,fStack0000000000000034,0);
            if ((uVar28 & 1) != 0) {
              uVar37 = *puVar1;
              goto LAB_024908ec;
            }
            lVar24 = *plVar2;
            if (lVar24 == 0) goto LAB_02491464;
          }
          lVar24 = *(long *)(lVar24 + 0x38);
          if (lVar24 != 0) {
            uVar37 = *(uint *)(lVar24 + 0x18);
            if ((int)uVar91 <= (int)uVar34) goto LAB_02490a40;
            if (uVar34 < uVar37) goto LAB_02490a48;
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
          }
          goto LAB_02491464;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
LAB_024908ec:
    if ((int)uVar91 < (int)uVar37) {
      iVar21 = FUN_02681c0c(lVar46,0);
      if (*(uint *)(lVar23 + 0x18) <= uVar18)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar24 = *(long *)(lVar23 + lStack0000000000000128 + -0x130);
      if (lVar24 == 0) goto LAB_02491464;
      iVar22 = FUN_02681c0c(lVar24,0);
      if (iVar21 != iVar22) {
        if (*plVar2 != 0) {
          lVar24 = *(long *)(*plVar2 + 0x38);
          goto joined_r0x024907c8;
        }
        goto LAB_02491464;
      }
    }
    if (!bVar17) {
      if ((*plVar2 != 0) && (lVar24 = *(long *)(*plVar2 + 0x38), lVar24 != 0)) {
        if (uVar18 - 2 < *(uint *)(lVar24 + 0x18)) {
          lVar38 = *unaff_x19;
          uVar88 = *(undefined4 *)(lVar24 + lStack0000000000000128 + -0x330);
          fVar54 = *(float *)(lVar24 + lStack0000000000000128 + -0x30c);
          goto LAB_024907e8;
        }
        goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      }
      goto LAB_02491464;
    }
    bVar9 = true;
  }
  if ((*plVar2 == 0) || (lVar24 = *(long *)(*plVar2 + 0x38), lVar24 == 0)) goto LAB_02491464;
  uVar37 = (uint)*(undefined8 *)(lVar24 + 0x18);
  if (uVar37 <= uVar91)
  goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
  if ((*(byte *)(lVar24 + lVar49 * 0x178 + 0x191) >> 1 & 1) == 0) {
    if (bVar16) {
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,fVar53,
                 fStack00000000000000a0,uStack0000000000000094);
    }
LAB_02490b04:
    bVar16 = false;
  }
  else {
    if ((((int)unaff_x19[100] < (int)uVar91) || ((int)unaff_x19[0x65] < (int)uVar20)) ||
       (((int)unaff_x19[0x5b] == 5 &&
        (*(int *)(lVar24 + lVar49 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    if (!bVar16) {
      if ((((uVar42 == 0xd) || ((uVar42 | 1) == 0xb)) || ((int)uVar34 < (int)uVar91)) || (!bVar17))
      goto LAB_02490b04;
      if (uVar91 == uVar34) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar28 = FUN_016fa418(uVar42,0);
        if ((uVar28 & 1) != 0) goto LAB_02490b04;
      }
      puVar12 = System_Threading_Mutex_TypeInfo;
      lVar38 = *(long *)System_Threading_Mutex_TypeInfo;
      if (*(int *)(lVar38 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar38 = *(long *)puVar12;
      }
      if ((*plVar2 == 0) || (lVar24 = *(long *)(*plVar2 + 0x38), lVar24 == 0)) goto LAB_02491464;
      uVar37 = (uint)*(undefined8 *)(lVar24 + 0x18);
      if (uVar37 <= uVar91)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      lVar38 = *(long *)(lVar38 + 0xb8);
      lVar27 = lVar24 + lVar49 * 0x178;
      in_stack_00001798 = *(undefined8 *)(lVar27 + 0x184);
      in_stack_00001790 = *(undefined8 *)(lVar27 + 0x17c);
      fStack00000000000000a8 = *(float *)(lVar38 + 0x1598);
      in_stack_000017a0 = *(float *)(lVar27 + 0x18c);
      fStack00000000000000ac = *(float *)(lVar38 + 0x159c);
      fVar53 = *(float *)(lVar38 + 0x15a0);
      fStack00000000000000a0 = *(float *)(lVar38 + 0x15a4);
      uStack0000000000000094 = 0;
    }
    if (uVar37 <= uVar91)
    goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
    lVar24 = lVar24 + lVar49 * 0x178;
    fVar86 = *(float *)(lVar24 + 0x128);
    fVar73 = *(float *)(lVar24 + 0x188);
    uVar25 = *(undefined8 *)(lVar24 + 0x17c);
    fVar76 = *(float *)(lVar24 + 0x184);
    uVar31 = *(undefined8 *)(lVar24 + 0x184);
    fVar92 = *(float *)(lVar24 + 0x18c);
    fVar54 = *(float *)(lVar24 + 0x11c);
    fVar89 = *(float *)(lVar24 + 0x148);
    fVar74 = *(float *)(lVar24 + 0x150);
    in_stack_00000158 = uVar25;
    fStack0000000000000160 = fVar76;
    fStack0000000000000164 = fVar73;
    in_stack_00000168 = fVar92;
    in_stack_00000170 = in_stack_00001790;
    in_stack_00000178 = in_stack_00001798;
    in_stack_00000180 = in_stack_000017a0;
    uVar28 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
    lVar24 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
    if ((uVar28 & 1) == 0) {
      if (*(int *)(lVar24 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar24);
      }
      fVar86 = fVar86 + (float)in_stack_00001798;
      fVar54 = fVar54 - (float)((ulong)in_stack_00001790 >> 0x20);
      fVar89 = fVar89 + (float)((ulong)in_stack_00001798 >> 0x20);
      if (fVar54 <= fStack00000000000000a8) {
        fStack00000000000000a8 = fVar54;
      }
      if (fVar74 - in_stack_000017a0 <= fStack00000000000000ac) {
        fStack00000000000000ac = fVar74 - in_stack_000017a0;
      }
      if (fVar53 <= fVar86) {
        fVar53 = fVar86;
      }
      if (fStack00000000000000a0 <= fVar89) {
        fStack00000000000000a0 = fVar89;
      }
    }
    else {
      if (*(int *)(lVar24 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar24);
      }
      fVar54 = (fVar54 + (fVar53 - (float)in_stack_00001798)) * 0.5;
      if (fVar74 <= fStack00000000000000ac) {
        fStack00000000000000ac = fVar74;
      }
      if (fStack00000000000000a0 <= fVar89) {
        fStack00000000000000a0 = fVar89;
      }
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,fVar54,
                 fStack00000000000000a0,uStack0000000000000094);
      fStack00000000000000ac = fVar74 - fVar92;
      fVar53 = fVar86 + fVar76;
      uStack0000000000000094 = 0;
      fStack00000000000000a0 = fVar89 + fVar73;
      fStack00000000000000a8 = fVar54;
      in_stack_00001790 = uVar25;
      in_stack_00001798 = uVar31;
      in_stack_000017a0 = fVar92;
    }
    if (((*puVar1 == 1) || (uVar91 == uVar4)) || (((int)uVar34 <= (int)uVar91 || (!bVar17)))) {
      (**(code **)(*unaff_x19 + 0x918))
                (fStack00000000000000a8,fStack00000000000000ac,uStack0000000000000094,fVar53,
                 fStack00000000000000a0,uStack0000000000000094);
      bVar16 = false;
    }
    else {
      bVar16 = true;
    }
  }
  uVar91 = *puVar1;
  iVar7 = iVar7 + 1;
  lStack0000000000000128 = lStack0000000000000128 + 0x178;
  bVar17 = (int)uVar91 <= (int)uVar18;
  uVar37 = uVar20;
  uVar18 = uVar18 + 1;
  if (bVar17) goto LAB_02491038;
  goto LAB_0248ef74;
LAB_02491038:
  lVar23 = *plVar2;
  if (lVar23 != 0) {
    iVar19 = uVar20 + 1;
    plVar39 = (long *)PTR_DAT_033ed410;
LAB_02491068:
    *(uint *)(lVar23 + 0x18) = uVar91;
    lVar24 = unaff_x19[0xd3];
    *(int *)(lVar23 + 0x2c) = iVar19;
    iVar19 = iStack00000000000000a4;
    if ((int)uVar91 < 1) {
      iVar19 = 1;
    }
    if (iStack00000000000000a4 == 0) {
      iVar19 = 1;
    }
    *(int *)(lVar23 + 0x1c) = (int)lVar24;
    *(int *)(lVar23 + 0x24) = iVar19;
    *(int *)(lVar23 + 0x30) = (int)unaff_x19[0x95] + 1;
    if (((int)unaff_x19[0x62] != 0xff) ||
       (uVar28 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar28 & 1) == 0)) {
LAB_02491468:
      lVar23 = *(long *)Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__;
LAB_02491474:
      if (*(int *)(lVar23 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_024a942c();
      return;
    }
    lVar23 = unaff_x19[0xda];
    if (lVar23 != 0) {
      (**(code **)(lVar23 + 0x18))
                (*(undefined8 *)(lVar23 + 0x40),*plVar2,*(undefined8 *)(lVar23 + 0x28));
    }
    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
      if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x60), lVar23 == 0)) goto LAB_02491464;
      if (*(int *)(*plVar39 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(int *)(lVar23 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
      FUN_024e8000(lVar23 + 0x20,1,0);
    }
    if (unaff_x19[0x73] != 0) {
      UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
                (unaff_x19[0x73],0);
      if ((unaff_x19[0x6c] != 0) && (lVar23 = *(long *)(unaff_x19[0x6c] + 0x60), lVar23 != 0)) {
        if (*(int *)(lVar23 + 0x18) == 0) {
UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (unaff_x19[0x73] != 0) {
          FUN_0266b9c4(unaff_x19[0x73],*(undefined8 *)(lVar23 + 0x30),0);
          if ((unaff_x19[0x6c] != 0) && (lVar23 = *(long *)(unaff_x19[0x6c] + 0x60), lVar23 != 0)) {
            if (*(int *)(lVar23 + 0x18) == 0)
            goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
            if (unaff_x19[0x73] != 0) {
              FUN_0266bbc8(unaff_x19[0x73],*(undefined8 *)(lVar23 + 0x48),0);
              if ((unaff_x19[0x6c] != 0) &&
                 (lVar23 = *(long *)(unaff_x19[0x6c] + 0x60), lVar23 != 0)) {
                if (*(int *)(lVar23 + 0x18) == 0)
                goto UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                if (unaff_x19[0x73] != 0) {
                  FUN_0266bc74(unaff_x19[0x73],*(undefined8 *)(lVar23 + 0x50),0);
                  if ((unaff_x19[0x6c] != 0) &&
                     (lVar23 = *(long *)(unaff_x19[0x6c] + 0x60), lVar23 != 0)) {
                    if (*(int *)(lVar23 + 0x18) == 0)
                    goto 
                    UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle;
                    if (unaff_x19[0x73] != 0) {
                      FUN_0266c1dc(unaff_x19[0x73],*(undefined8 *)(lVar23 + 0x58),0);
                      if (unaff_x19[0x73] != 0) {
                        FUN_0266ed90(unaff_x19[0x73],0);
                        lVar23 = *plVar2;
                        if (lVar23 != 0) {
                          lVar38 = 0;
                          lVar24 = 0;
                          do {
                            uVar28 = lVar24 + 1;
                            if ((long)*(int *)(lVar23 + 0x34) <= (long)uVar28) goto LAB_02491468;
                            lVar23 = *(long *)(lVar23 + 0x60);
                            if (lVar23 == 0) break;
                            if (*(int *)(*plVar39 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            if (*(uint *)(lVar23 + 0x18) <= uVar28)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            FUN_024e7ecc(lVar23 + lVar38 + 0x70,0);
                            lVar23 = unaff_x19[0xe0];
                            if (lVar23 == 0) break;
                            if (*(uint *)(lVar23 + 0x18) <= uVar28)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                            ;
                            uVar31 = *(undefined8 *)(lVar23 + lVar24 * 8 + 0x28);
                            if (*(int *)(*plVar48 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar68 = FUN_0268b4e0(uVar31,0,0);
                            if ((uVar68 & 1) == 0) {
                              if (*(int *)((long)unaff_x19 + 0x314) != 0) {
                                if ((*plVar2 == 0) ||
                                   (lVar23 = *(long *)(*plVar2 + 0x60), lVar23 == 0)) break;
                                if (*(int *)(*plVar39 + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                if (*(uint *)(lVar23 + 0x18) <= uVar28)
                                goto 
                                UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                                ;
                                FUN_024e8000(lVar23 + lVar38 + 0x70,1,0);
                              }
                              lVar23 = unaff_x19[0xe0];
                              if (lVar23 == 0) break;
                              if (*(uint *)(lVar23 + 0x18) <= uVar28)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar23 = *(long *)(lVar23 + lVar24 * 8 + 0x28);
                              if (lVar23 == 0) break;
                              lVar23 = FUN_024eefa0(lVar23,0);
                              if ((*plVar2 == 0) ||
                                 (lVar49 = *(long *)(*plVar2 + 0x60), lVar49 == 0)) break;
                              if (*(uint *)(lVar49 + 0x18) <= uVar28)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar23 == 0) break;
                              FUN_0266b9c4(lVar23,*(undefined8 *)(lVar49 + lVar38 + 0x80),0);
                              lVar23 = unaff_x19[0xe0];
                              if (lVar23 == 0) break;
                              if (*(uint *)(lVar23 + 0x18) <= uVar28)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar23 = *(long *)(lVar23 + lVar24 * 8 + 0x28);
                              if (lVar23 == 0) break;
                              lVar23 = FUN_024eefa0(lVar23,0);
                              if ((*plVar2 == 0) ||
                                 (lVar49 = *(long *)(*plVar2 + 0x60), lVar49 == 0)) break;
                              if (*(uint *)(lVar49 + 0x18) <= uVar28)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar23 == 0) break;
                              FUN_0266bbc8(lVar23,*(undefined8 *)(lVar49 + lVar38 + 0x98),0);
                              lVar23 = unaff_x19[0xe0];
                              if (lVar23 == 0) break;
                              if (*(uint *)(lVar23 + 0x18) <= uVar28)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar23 = *(long *)(lVar23 + lVar24 * 8 + 0x28);
                              if (lVar23 == 0) break;
                              lVar23 = FUN_024eefa0(lVar23,0);
                              if ((*plVar2 == 0) ||
                                 (lVar49 = *(long *)(*plVar2 + 0x60), lVar49 == 0)) break;
                              if (*(uint *)(lVar49 + 0x18) <= uVar28)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar23 == 0) break;
                              FUN_0266bc74(lVar23,*(undefined8 *)(lVar49 + lVar38 + 0xa0),0);
                              lVar23 = unaff_x19[0xe0];
                              if (lVar23 == 0) break;
                              if (*(uint *)(lVar23 + 0x18) <= uVar28)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar23 = *(long *)(lVar23 + lVar24 * 8 + 0x28);
                              if (lVar23 == 0) break;
                              lVar23 = FUN_024eefa0(lVar23,0);
                              if ((*plVar2 == 0) ||
                                 (lVar49 = *(long *)(*plVar2 + 0x60), lVar49 == 0)) break;
                              if (*(uint *)(lVar49 + 0x18) <= uVar28)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              if (lVar23 == 0) break;
                              FUN_0266c1dc(lVar23,*(undefined8 *)(lVar49 + lVar38 + 0xa8),0);
                              lVar23 = unaff_x19[0xe0];
                              if (lVar23 == 0) break;
                              if (*(uint *)(lVar23 + 0x18) <= uVar28)
                              goto 
                              UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__AttachCustomReticle
                              ;
                              lVar23 = *(long *)(lVar23 + lVar24 * 8 + 0x28);
                              if ((lVar23 == 0) || (lVar23 = FUN_024eefa0(lVar23,0), lVar23 == 0))
                              break;
                              FUN_0266ed90(lVar23,0);
                            }
                            lVar23 = *plVar2;
                            lVar24 = lVar24 + 1;
                            lVar38 = lVar38 + 0x50;
                          } while (lVar23 != 0);
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
  goto LAB_02491464;
}


