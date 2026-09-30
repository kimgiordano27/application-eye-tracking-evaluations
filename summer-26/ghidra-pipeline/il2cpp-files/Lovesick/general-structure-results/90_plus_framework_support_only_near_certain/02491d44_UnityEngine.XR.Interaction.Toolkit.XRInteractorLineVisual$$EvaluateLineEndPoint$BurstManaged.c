/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual$$EvaluateLineEndPoint$BurstManaged
ENTRY_POINT: 02491d44
PROGRAM: Lovesick-libil2cpp.so
SCORE: 140
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_21;validity_or_gating_hits_21;weak_vector_component_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02491d4c) */
/* WARNING: Removing unreachable block (ram,0x02491de0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual__EvaluateLineEndPoint_BurstManaged
               (void)

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
  undefined *puVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  int *piVar29;
  ulong uVar30;
  ulong uVar31;
  undefined8 uVar32;
  undefined1 uVar33;
  char cVar34;
  uint uVar35;
  undefined4 *puVar36;
  long lVar37;
  long lVar38;
  float *pfVar39;
  code *pcVar40;
  uint uVar41;
  float *pfVar42;
  uint uVar43;
  uint uVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long *unaff_x19;
  int unaff_w21;
  uint uVar49;
  uint uVar50;
  undefined8 *unaff_x23;
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
  float fVar70;
  double dVar71;
  ulong uVar72;
  double dVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float unaff_s8;
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
  float unaff_s12;
  float fVar84;
  float unaff_s13;
  float fVar85;
  float fVar86;
  float unaff_s14;
  float fVar87;
  float fVar88;
  undefined4 uVar89;
  float fVar90;
  float fVar91;
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
  double in_stack_00000880;
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
  
  fVar54 = unaff_s14 * 255.0;
  if (unaff_s14 < 0.0) {
    fVar54 = 0.0;
  }
  dVar71 = modf((double)fVar54,(double *)&stack0x00000880);
  puVar10 = Method_System_Collections_Generic_List<uint>_ToArray__;
  if (0.0 <= fVar54) {
    if (dVar71 == 0.5) {
      fVar54 = 1.0;
      goto LAB_02491da0;
    }
    fVar55 = (float)(int)(fVar54 + 0.5);
  }
  else if (dVar71 == unaff_d9) {
    fVar54 = -1.0;
LAB_02491da0:
    fVar55 = (float)in_stack_00000880;
    if (((long)in_stack_00000880 & 1U) != 0) {
      fVar55 = (float)in_stack_00000880 + fVar54;
    }
  }
  else {
    fVar55 = (float)(int)(fVar54 + -0.5);
  }
  fVar54 = unaff_s10 * 255.0;
  if (unaff_s10 < 0.0) {
    fVar54 = 0.0;
  }
  dVar71 = modf((double)fVar54,(double *)&stack0x00000880);
  if (0.0 <= fVar54) {
    if (dVar71 == 0.5) {
      fVar54 = 1.0;
      goto LAB_02491e38;
    }
    fVar56 = (float)(int)(fVar54 + 0.5);
  }
  else {
                    /* try { // try from 02491e14 to 02591faf has its CatchHandler @ 02491e14
                       catch() { ... } // from try @ 02491e14 with catch @ 02491e14
                       catch() { ... } // from try @ 02492014 with catch @ 02491e14
                       catch() { ... } // from try @ 024920e0 with catch @ 02491e14
                       catch() { ... } // from try @ 02492114 with catch @ 02491e14
                       catch() { ... } // from try @ 02492154 with catch @ 02491e14
                       catch() { ... } // from try @ 02492184 with catch @ 02491e14
                       catch() { ... } // from try @ 02492670 with catch @ 02491e14 */
    if (dVar71 == unaff_d9) {
      fVar54 = -1.0;
LAB_02491e38:
      fVar56 = (float)in_stack_00000880;
      if (((long)in_stack_00000880 & 1U) != 0) {
        fVar56 = (float)in_stack_00000880 + fVar54;
      }
    }
    else {
      fVar56 = (float)(int)(fVar54 + -0.5);
    }
  }
  uVar93 = (int)unaff_s8 & 0xffU | ((int)unaff_s12 & 0xffU) << 8 | ((int)fVar55 & 0xffU) << 0x10 |
           (int)fVar56 << 0x18;
  *(uint *)((long)unaff_x19 + 0x13c) = uVar93;
  *(uint *)((long)unaff_x19 + 0x4e4) = uVar93;
  *(uint *)(unaff_x19 + 0x2a) = uVar93;
  *(uint *)((long)unaff_x19 + 0x154) = uVar93;
  FUN_013b7dec(unaff_x19 + 0x9d,&stack0x00000880,*(undefined8 *)puVar10);
  FUN_013b7dec(unaff_x19 + 0xa1,&stack0x00000880,*(undefined8 *)puVar10);
  FUN_013b7dec(unaff_x19 + 0xa5,&stack0x00000880,*(undefined8 *)puVar10);
  puVar10 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
  uVar92 = *(undefined4 *)((long)unaff_x19 + 0x4e4);
  if (*(int *)(*(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (DAT_037825d3 == '\0') {
    thunk_FUN_00d48444(Unity_AI_Navigation_NavMeshLink_TypeInfo);
    DAT_037825d3 = '\x01';
  }
  puVar12 = 
  Method_UnityEngine_XR_Interaction_Toolkit_AR_ARBaseGestureInteractable_OnGestureStarted<TwistGesture>__
  ;
  puVar11 = Method_System_Collections_Generic_List<SoundData>_GetEnumerator__;
  lVar23 = *(long *)puVar10;
  if (*(int *)(lVar23 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar23 = *(long *)puVar10;
  }
  puVar36 = *(undefined4 **)(lVar23 + 0xb8);
  dVar71 = 0.0;
  UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
            (*puVar36,puVar36[1],puVar36[2],puVar36[3],&stack0x00000880,uVar92,0);
  uVar32 = *(undefined8 *)puVar11;
  unaff_x26[0x73] = unaff_x26[1];
  unaff_x26[0x72] = *unaff_x26;
  FUN_013b7dec(unaff_x19 + 0xa9,&stack0x00000c10,uVar32);
  unaff_x19[0xaf] = 0;
  FUN_013b7dec(unaff_x19 + 0xb0,0,*(undefined8 *)puVar12);
  puVar10 = 
  UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Theme_Primitives_Vector3AffordanceTheme_TypeInfo
  ;
  if (unaff_x19[0x1f] != 0) {
    *(uint *)(unaff_x19 + 0xbd) = (uint)*(byte *)(unaff_x19[0x1f] + 0x1b8);
    puVar11 = Method_System_Collections_Generic_Dictionary<SystemLanguage,_string>_Add__;
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
          lVar23 = *unaff_x29;
          if (*(int *)(lVar23 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar23 = *unaff_x29;
          }
          lVar24 = unaff_x19[0x6c];
          uVar32 = *(undefined8 *)(*(long *)(lVar23 + 0xb8) + 0x15a8);
          unaff_x19[0x94] = 0;
          unaff_x19[0x99] = 0;
          *(undefined1 *)((long)unaff_x19 + 700) = 0;
          lVar23 = NEON_rev64(uVar32,4);
          *(undefined4 *)((long)unaff_x19 + 0x2dc) = 0xffffffff;
          unaff_x19[0x98] = lVar23;
          *(undefined4 *)(unaff_x19 + 0x95) = 0;
          if ((lVar24 != 0) && (*(long *)(lVar24 + 0x58) != 0)) {
            uVar22 = (int)unaff_x19[0x66] - 1;
            uVar93 = *(int *)(*(long *)(lVar24 + 0x58) + 0x18) - 1;
            if ((int)uVar22 <= (int)uVar93) {
              uVar93 = uVar22;
            }
            uVar3 = 0;
            if (-1 < (int)uVar22) {
              uVar3 = uVar93;
            }
            FUN_024f1d04(lVar24,0);
            fVar57 = *(float *)(unaff_x19 + 0x67);
            *(undefined4 *)(unaff_x19 + 0x6b) = 0xbf800000;
            fVar87 = *(float *)(unaff_x19 + 0x6a);
            unaff_x19[0x69] = 0;
            lVar23 = *unaff_x29;
            fVar58 = *(float *)((long)unaff_x19 + 0x33c);
            fVar90 = *(float *)((long)unaff_x19 + 0x354);
            fVar59 = *(float *)((long)unaff_x19 + 0x344);
            if (*(int *)(lVar23 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar23 = *unaff_x29;
            }
            *(undefined8 *)((long)unaff_x19 + 0x4d4) =
                 *(undefined8 *)(*(long *)(lVar23 + 0xb8) + 0x1598);
            *(undefined8 *)((long)unaff_x19 + 0x4dc) =
                 *(undefined8 *)(*(long *)(lVar23 + 0xb8) + 0x15a0);
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
              fVar75 = DAT_028aa3e4;
              fVar83 = DAT_028aa028;
              uVar93 = 0;
              lVar23 = unaff_x19[0x8e];
              if (lVar23 != 0) {
                puVar1 = (uint *)((long)unaff_x19 + 0x48c);
                uVar22 = unaff_w21 - 1;
                uVar28 = (ulong)(uint)fStack0000000000000054;
                fVar54 = fVar54 - (fVar55 - fVar56);
                lVar24 = (long)unaff_x19 + 0x42c;
                fVar55 = 0.0;
                if (fVar87 <= 0.0) {
                  fVar87 = 0.0;
                }
                if (fVar90 <= 0.0) {
                  fVar90 = 0.0;
                }
                plVar2 = unaff_x19 + 0x6c;
                fVar87 = fVar87 + _LAB_028aa024;
                uVar72 = (ulong)(uint)fVar87;
                fVar74 = fVar90 + _LAB_028aa024;
                fVar56 = unaff_s11 * DAT_028aa028 * unaff_s13;
                bVar8 = true;
                fStack0000000000000034 = 0.0;
                bVar13 = false;
                iVar21 = 0;
                bVar9 = 1;
                fStack00000000000000d4 = fVar87;
LAB_02492378:
                fVar88 = (float)uVar28;
                fVar61 = 1.0;
                if ((int)*(uint *)(lVar23 + 0x18) <= (int)uVar93) {
LAB_02495f1c:
                  fVar54 = (float)uVar72;
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
                    uVar32 = FUN_0176eb1c((long)unaff_x19 + 0x23c,0);
                    uVar25 = FUN_017840ac((long)unaff_x19 + 0x1dc,0);
                    uVar32 = FUN_0160073c(*(undefined8 *)
                                           Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlah_s16__,
                                          uVar32,*(undefined8 *)
                                                  Method_UnityEngine_GameObject_GetComponents<Component>__
                                          ,uVar25,0);
                    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                      thunk_FUN_00d32864(*unaff_x28);
                    }
                    FUN_02660dac(uVar32,0);
                  }
                  if ((*puVar1 == 0) || ((*puVar1 == 1 && (in_stack_000017bc == 3)))) {
                    (**(code **)(*unaff_x19 + 0x948))();
                    goto LAB_02496098;
                  }
                  lVar23 = *unaff_x29;
                  if (*(int *)(lVar23 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar23 = *unaff_x29;
                  }
                  puVar10 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
                  lVar23 = **(long **)(lVar23 + 0xb8);
                  if (lVar23 == 0) goto LAB_0249920c;
                  if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0xd0))
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  iVar21 = *(int *)(lVar23 + (long)(int)*(uint *)(unaff_x19 + 0xd0) * 0x38 + 0x54)
                           << 2;
                  if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x60), lVar23 == 0))
                  goto LAB_0249920c;
                  if (*(int *)(*(long *)PTR_DAT_033ed410 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  if (*(int *)(lVar23 + 0x18) == 0)
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  FUN_024e7d94(lVar23 + 0x20,0,0);
                  if (DAT_03774d76 == '\0') {
                    thunk_FUN_00d48444(
                                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                      );
                    DAT_03774d76 = '\x01';
                  }
                  puVar11 = Unity_AI_Navigation_NavMeshLink_TypeInfo;
                  iVar17 = (int)unaff_x19[0x4d];
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
                  lVar23 = unaff_x19[0xe2];
                  uStack0000000000000090 = uStack00000000000000c0;
                  fVar55 = fStack00000000000000c8;
                  if (iVar17 < 0x401) {
                    if (iVar17 == 0x100) {
                      if (lVar23 == 0) goto LAB_0249920c;
                      if (*(uint *)(lVar23 + 0x18) < 2)
                      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                      uVar32 = *(undefined8 *)(lVar23 + 0x30);
                      if ((int)unaff_x19[0x5b] == 5) {
                        if ((*plVar2 == 0) || (lVar24 = *(long *)(*plVar2 + 0x58), lVar24 == 0))
                        goto LAB_0249920c;
                        if (*(uint *)(lVar24 + 0x18) <= uVar3)
                        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                        fVar54 = *(float *)(lVar24 + (long)(int)uVar3 * 0x14 + 0x28);
                      }
                      else {
                        fVar54 = *(float *)(unaff_x19 + 0x96);
                      }
                      fVar55 = fVar57 + 0.0 + *(float *)(lVar23 + 0x2c);
                      fVar54 = (0.0 - fVar54) - fVar58;
                    }
                    else if (iVar17 == 0x200) {
                      if (lVar23 == 0) goto LAB_0249920c;
                      if ((*(int *)(lVar23 + 0x18) == 1) || (*(int *)(lVar23 + 0x18) == 0))
                      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                      fVar55 = (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5;
                      uVar32 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20) +
                                        (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20)) *
                                        0.5,((float)*(undefined8 *)(lVar23 + 0x24) +
                                            (float)*(undefined8 *)(lVar23 + 0x30)) * 0.5);
                      if ((int)unaff_x19[0x5b] == 5) {
                        if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x58), lVar23 == 0))
                        goto LAB_0249920c;
                        if (*(uint *)(lVar23 + 0x18) <= uVar3)
                        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                        lVar23 = lVar23 + (long)(int)uVar3 * 0x14;
                        fVar55 = fVar57 + 0.0 + fVar55;
                        fVar54 = ((fVar58 + *(float *)(lVar23 + 0x28) + *(float *)(lVar23 + 0x30)) -
                                 fVar59) * -0.5 + 0.0;
                      }
                      else {
                        fVar55 = fVar57 + 0.0 + fVar55;
                        fVar54 = ((fVar58 + *(float *)(unaff_x19 + 0x96) + fVar94) - fVar59) * -0.5
                                 + 0.0;
                      }
                    }
                    else {
                      if (iVar17 != 0x400) goto LAB_024965d0;
                      if (lVar23 == 0) goto LAB_0249920c;
                      if (*(int *)(lVar23 + 0x18) == 0)
                      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                      uVar32 = *(undefined8 *)(lVar23 + 0x24);
                      if ((int)unaff_x19[0x5b] == 5) {
                        if ((*plVar2 == 0) || (lVar24 = *(long *)(*plVar2 + 0x58), lVar24 == 0))
                        goto LAB_0249920c;
                        if (*(uint *)(lVar24 + 0x18) <= uVar3)
                        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                        fVar94 = *(float *)(lVar24 + (long)(int)uVar3 * 0x14 + 0x30);
                      }
                      fVar55 = fVar57 + 0.0 + *(float *)(lVar23 + 0x20);
                      fVar54 = fVar59 + (0.0 - fVar94);
                    }
                    uStack0000000000000090 =
                         CONCAT44((float)((ulong)uVar32 >> 0x20) + 0.0,(float)uVar32 + fVar54);
                  }
                  else if (iVar17 == 0x800) {
                    if (lVar23 == 0) goto LAB_0249920c;
                    if ((*(int *)(lVar23 + 0x18) == 1) || (*(int *)(lVar23 + 0x18) == 0))
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    fVar54 = ((float)*(undefined8 *)(lVar23 + 0x24) +
                             (float)*(undefined8 *)(lVar23 + 0x30)) * 0.5;
                    fVar55 = fVar57 + 0.0 +
                             (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5;
                    uStack0000000000000090 =
                         CONCAT44(((float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20) +
                                  (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20)) * 0.5 +
                                  0.0,fVar54 + 0.0);
                  }
                  else {
                    if (iVar17 == 0x1000) {
                      if (lVar23 == 0) goto LAB_0249920c;
                      if ((*(int *)(lVar23 + 0x18) == 1) || (*(int *)(lVar23 + 0x18) == 0))
                      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                      fVar54 = (float)*(undefined8 *)(lVar23 + 0x24) +
                               (float)*(undefined8 *)(lVar23 + 0x30);
                      fVar56 = (float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20) +
                               (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20);
                      fVar58 = fVar58 + *(float *)(unaff_x19 + 0x9c) + *(float *)(unaff_x19 + 0x9b);
                      fVar55 = fVar57 + 0.0 +
                               (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5;
                    }
                    else {
                      if (iVar17 != 0x2000) goto LAB_024965d0;
                      if (lVar23 == 0) goto LAB_0249920c;
                      if ((*(int *)(lVar23 + 0x18) == 1) || (*(int *)(lVar23 + 0x18) == 0))
                      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                      fVar54 = (float)*(undefined8 *)(lVar23 + 0x24) +
                               (float)*(undefined8 *)(lVar23 + 0x30);
                      fVar56 = (float)((ulong)*(undefined8 *)(lVar23 + 0x24) >> 0x20) +
                               (float)((ulong)*(undefined8 *)(lVar23 + 0x30) >> 0x20);
                      fVar58 = *(float *)((long)unaff_x19 + 0x4b4) - fVar58;
                      fVar55 = fVar57 + 0.0 +
                               (*(float *)(lVar23 + 0x20) + *(float *)(lVar23 + 0x2c)) * 0.5;
                    }
                    fVar54 = fVar54 * 0.5;
                    uStack0000000000000090 =
                         CONCAT44(fVar56 * 0.5 + 0.0,fVar54 + (0.0 - (fVar58 - fVar59) * 0.5));
                  }
LAB_024965d0:
                  if (unaff_x19[0xe4] != 0) {
                    uVar32 = FUN_0285a188(unaff_x19[0xe4],0);
                    if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                      thunk_FUN_00d32864(*(long *)puVar10);
                    }
                    uVar28 = FUN_0268b4e0(uVar32,0,0);
                    lVar23 = FUN_024c933c();
                    if (lVar23 != 0) {
                      FUN_026a125c(lVar23,0);
                      *(float *)(unaff_x19 + 0xe1) = fVar54;
                      if (unaff_x19[0xe4] != 0) {
                        iVar17 = FUN_02859798(unaff_x19[0xe4],0);
                        if (unaff_x19[0xe4] != 0) {
                          fVar56 = (float)FUN_028598f0(unaff_x19[0xe4],0);
                          __x = DAT_028aa048;
                          dVar73 = modf(DAT_028aa048,(double *)&stack0x00000880);
                          if (dVar73 == 0.5) {
                            fVar58 = (float)dVar71;
                            if (((long)dVar71 & 1U) != 0) {
                              fVar58 = (float)dVar71 + 1.0;
                            }
                          }
                          else {
                            fVar58 = 255.0;
                          }
                          dVar73 = modf(__x,(double *)&stack0x00000880);
                          if (dVar73 == 0.5) {
                            fVar57 = (float)dVar71;
                            if (((long)dVar71 & 1U) != 0) {
                              fVar57 = (float)dVar71 + 1.0;
                            }
                          }
                          else {
                            fVar57 = 255.0;
                          }
                          dVar73 = modf(__x,(double *)&stack0x00000880);
                          if (dVar73 == 0.5) {
                            fVar59 = (float)dVar71;
                            if (((long)dVar71 & 1U) != 0) {
                              fVar59 = (float)dVar71 + 1.0;
                            }
                          }
                          else {
                            fVar59 = 255.0;
                          }
                          dVar73 = modf(__x,(double *)&stack0x00000880);
                          if (dVar73 == 0.5) {
                            fVar87 = (float)dVar71;
                            if (((long)dVar71 & 1U) != 0) {
                              fVar87 = (float)dVar71 + 1.0;
                            }
                          }
                          else {
                            fVar87 = 255.0;
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
                          lVar23 = *(long *)puVar11;
                          if (*(int *)(lVar23 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                            lVar23 = *(long *)puVar11;
                          }
                          puVar36 = *(undefined4 **)(lVar23 + 0xb8);
                          uVar72 = (ulong)(uint)puVar36[1];
                          uVar26 = (ulong)(uint)puVar36[2];
                          uVar30 = (ulong)(uint)puVar36[3];
                          UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
                                    (*puVar36,uVar72,uVar26,uVar30,&stack0x00001790,0x4000ffff,0);
                          if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          lVar23 = *plVar2;
                          if (lVar23 != 0) {
                            uVar93 = *puVar1;
                            if ((int)uVar93 < 1) {
                              iStack00000000000000ac = 0;
                              iVar21 = 0;
                              goto LAB_02498c58;
                            }
                            lVar23 = *(long *)(lVar23 + 0x38);
                            fVar54 = ABS(fVar54);
                            fVar90 = 1.0;
                            if ((uVar28 & 1) == 0) {
                              fVar90 = fVar54;
                            }
                            if (lVar23 != 0) {
                              bVar14 = false;
                              bVar8 = false;
                              bVar7 = false;
                              bVar13 = false;
                              uVar22 = (int)fVar58 & 0xffU | ((int)fVar57 & 0xffU) << 8 |
                                       ((int)fVar59 & 0xffU) << 0x10 | (int)fVar87 << 0x18;
                              fStack00000000000000d0 =
                                   *(float *)(*(long *)(*unaff_x29 + 0xb8) + 0x15a8);
                              fStack00000000000000cc = 0.0;
                              fStack0000000000000058 = fStack00000000000000b0;
                              fStack000000000000005c = 0.0;
                              fStack0000000000000034 = 0.0;
                              fVar57 = 0.0;
                              fStack0000000000000030 = 0.0;
                              uVar16 = 0;
                              iVar53 = 0;
                              lVar24 = 0x2e0;
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
                              uVar18 = 0;
                              uVar44 = 1;
                              goto LAB_02496a50;
                            }
                          }
                        }
                      }
                    }
                  }
                  goto LAB_0249920c;
                }
                if (*(uint *)(lVar23 + 0x18) <= uVar93)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                uVar16 = *(uint *)(lVar23 + (long)(int)uVar93 * 0xc + 0x20);
                if (uVar16 == 0) goto LAB_02495f1c;
                if (5 < iVar21) {
                  uVar32 = FUN_0176eb1c(&stack0x000017bc,0);
                  uVar25 = FUN_0176eb1c(&stack0x00001788,0);
                  uVar32 = FUN_0160073c(*(undefined8 *)
                                         UnityEngine_Rendering_Universal_DebugValidationMode_var,
                                        uVar32,*(undefined8 *)
                                                Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                                        ,uVar25,0);
                  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                    thunk_FUN_00d32864(*unaff_x28);
                  }
                  FUN_026610e4(uVar32,0);
                  in_stack_000017a8 = CONCAT44(3,*puVar1);
                }
                if ((*(char *)((long)unaff_x19 + 0x2fa) != '\0') && (uVar16 == 0x3c)) {
                  *(undefined1 *)((long)unaff_x19 + 0x429) = 1;
                  *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
                  uVar26 = FUN_024d0688();
                  if (((uVar26 & 1) == 0) ||
                     (uVar93 = in_stack_0000176c, *(int *)((long)unaff_x19 + 0x63c) != 0))
                  goto 
                  UnityEngine_XR_Interaction_Toolkit_XRInteractorReticleVisual__get_prefabScalingFactor
                  ;
                  goto LAB_02492630;
                }
                if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0))
                goto LAB_0249920c;
                if (*(uint *)(lVar23 + 0x18) <= *puVar1)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                lVar23 = lVar23 + (long)(int)*puVar1 * 0x178;
                *(undefined4 *)((long)unaff_x19 + 0x63c) = *(undefined4 *)(lVar23 + 0x2c);
                *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar23 + 0x58);
                unaff_x19[0x1f] = *(long *)(lVar23 + 0x38);
UnityEngine_XR_Interaction_Toolkit_XRInteractorReticleVisual__get_prefabScalingFactor:
                if ((unaff_x19[0x6c] == 0) ||
                   (lVar23 = *(long *)(unaff_x19[0x6c] + 0x38), lVar23 == 0)) goto LAB_0249920c;
                uVar18 = *puVar1;
                if (*(uint *)(lVar23 + 0x18) <= uVar18)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                lVar51 = (long)(int)uVar18;
                cVar34 = *(char *)(lVar23 + lVar51 * 0x178 + 0x5c);
                *(undefined1 *)((long)unaff_x19 + 0x429) = 0;
                lVar38 = unaff_x19[0x23];
                if ((uint)in_stack_000017a8 == uVar18) {
                  uVar16 = (uint)((ulong)in_stack_000017a8 >> 0x20);
                  bVar7 = true;
                  *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
                  if (uVar16 == 0x2026) {
                    lVar27 = unaff_x19[0xc9];
                    lVar23 = lVar23 + lVar51 * 0x178;
                    *(undefined4 *)(lVar23 + 0x2c) = 0;
                    *(long *)(lVar23 + 0x30) = lVar27;
                    *(long *)(lVar23 + 0x38) = unaff_x19[0xca];
                    *(long *)(lVar23 + 0x50) = unaff_x19[0xcb];
                    *(int *)(lVar23 + 0x58) = (int)unaff_x19[0xcc];
                    *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                    in_stack_000017a8 = CONCAT44(3,uVar18 + 1);
                  }
                  else if (uVar16 == 3) {
                    if ((*in_stack_00000138 == 0) ||
                       (lVar27 = FUN_024b11ac(*in_stack_00000138,0), lVar27 == 0))
                    goto LAB_0249920c;
                    uVar92 = 3;
                    FUN_01299bc0(lVar27,&stack0x00000bf8,&stack0x00000880,
                                 *(undefined8 *)PTR_DAT_033ef3c8);
                    if (*(uint *)(lVar23 + 0x18) <= uVar18)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    bVar7 = true;
                    *(double *)(lVar23 + lVar51 * 0x178 + 0x30) = dVar71;
                    uVar18 = *(uint *)((long)unaff_x19 + 0x48c);
                    *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                  }
                }
                else {
                  bVar7 = false;
                }
                if (((int)uVar18 < *(int *)((long)unaff_x19 + 0x31c)) && (uVar16 != 3)) {
                  if ((*plVar2 != 0) && (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 != 0)) {
                    if (uVar18 < *(uint *)(lVar23 + 0x18)) {
                      lVar23 = lVar23 + (long)(int)uVar18 * 0x178;
                      *(undefined1 *)(lVar23 + 0x194) = 0;
                      *(undefined2 *)(lVar23 + 0x20) = 0x200b;
                      *(undefined4 *)(lVar23 + 100) = 0;
                      *puVar1 = uVar18 + 1;
                      goto LAB_02492630;
                    }
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  }
                  goto LAB_0249920c;
                }
                iVar17 = *(int *)((long)unaff_x19 + 0x63c);
                fStack00000000000000f4 = fVar61;
                if (iVar17 == 0) {
                  uVar18 = *(uint *)((long)unaff_x19 + 0x254);
                  if ((uVar18 >> 4 & 1) == 0) {
                    if ((uVar18 >> 3 & 1) == 0) {
                      if ((uVar18 >> 5 & 1) != 0) {
                        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0
                           ) {
                          thunk_FUN_00d32864();
                        }
                        uVar26 = FUN_016f92d4(uVar16,0);
                        if ((uVar26 & 1) != 0) {
                          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) ==
                              0) {
                            thunk_FUN_00d32864();
                          }
                          uVar16 = FUN_016f95a8(uVar16,0);
                          uVar16 = uVar16 & 0xffff;
                          fStack00000000000000f4 = fVar75;
                        }
                      }
                    }
                    else {
                      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0)
                      {
                        thunk_FUN_00d32864();
                      }
                      uVar26 = FUN_016f9218(uVar16,0);
                      if ((uVar26 & 1) != 0) {
                        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0
                           ) {
                          thunk_FUN_00d32864();
                        }
                        uVar16 = FUN_016f9724(uVar16,0);
                        goto LAB_02492a0c;
                      }
                    }
                  }
                  else {
                    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar26 = FUN_016f92d4(uVar16,0);
                    fStack00000000000000f4 = 1.0;
                    if ((uVar26 & 1) != 0) {
                      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0)
                      {
                        thunk_FUN_00d32864();
                      }
                      uVar16 = FUN_016f95a8(uVar16,0);
LAB_02492a0c:
                      uVar16 = uVar16 & 0xffff;
                      fStack00000000000000f4 = 1.0;
                    }
                  }
                  iVar17 = *(int *)((long)unaff_x19 + 0x63c);
                  if (iVar17 != 0) goto LAB_0249265c;
LAB_02492a20:
                  if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0))
                  goto LAB_0249920c;
                  uVar44 = *puVar1;
                  uVar18 = *(uint *)(lVar23 + 0x18);
                  if (uVar18 <= uVar44)
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  lVar38 = *(long *)(lVar23 + (long)(int)uVar44 * 0x178 + 0x30);
                  unaff_x19[200] = lVar38;
                  if (lVar38 == 0) goto LAB_02492630;
                  lVar51 = lVar23 + (long)(int)uVar44 * 0x178;
                  lVar38 = *(long *)(lVar51 + 0x38);
                  unaff_x19[0x1f] = lVar38;
                  unaff_x19[0x22] = *(long *)(lVar51 + 0x50);
                  *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar51 + 0x58);
                  if (bVar7) {
                    lVar51 = unaff_x19[0x8e];
                    if (lVar51 == 0) goto LAB_0249920c;
                    if (*(uint *)(lVar51 + 0x18) <= uVar93)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    if ((*(int *)(lVar51 + (long)(int)uVar93 * 0xc + 0x20) != 10) ||
                       (uVar44 == *(uint *)(unaff_x19 + 0x92))) goto LAB_02492ab4;
                    if (uVar18 <= uVar44 - 1)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    if (lVar38 == 0) goto LAB_0249920c;
                    fVar55 = *(float *)(lVar23 + (long)(int)(uVar44 - 1) * 0x178 + 0x60);
                    iVar17 = FUN_026fd110(lVar38 + 0x50,0);
                    lVar23 = *in_stack_00000138;
                  }
                  else {
LAB_02492ab4:
                    if (lVar38 == 0) goto LAB_0249920c;
                    fVar55 = *(float *)(unaff_x19 + 0x3c);
                    iVar17 = FUN_026fd110(lVar38 + 0x50,0);
                    lVar23 = unaff_x19[0x1f];
                  }
                  if (lVar23 == 0) goto LAB_0249920c;
                  fVar62 = (float)FUN_026fd120(lVar23 + 0x50,0);
                  fVar84 = fStack0000000000000084;
                  if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
                    fVar84 = fVar61;
                  }
                  fVar60 = 0.0;
                  fVar63 = 0.0;
                  if (!(bool)(bVar7 & uVar16 == 0x2026)) {
                    if (*in_stack_00000138 == 0) goto LAB_0249920c;
                    fVar63 = (float)FUN_026fd140(*in_stack_00000138 + 0x50,0);
                    if (*in_stack_00000138 == 0) goto LAB_0249920c;
                    fVar60 = (float)FUN_026fd180(*in_stack_00000138 + 0x50,0);
                  }
                  lVar23 = unaff_x19[200];
                  if ((lVar23 == 0) || (*(long *)(lVar23 + 0x20) == 0)) goto LAB_0249920c;
                  fVar61 = *(float *)((long)unaff_x19 + 0x3fc);
                  fVar64 = *(float *)(lVar23 + 0x2c);
                  fVar88 = (float)FUN_026fd668(*(long *)(lVar23 + 0x20),0);
                  if (*in_stack_00000138 == 0) goto LAB_0249920c;
                  fVar85 = (float)FUN_026fd170(*in_stack_00000138 + 0x50,0);
                  if (*in_stack_00000138 == 0) goto LAB_0249920c;
                  fVar77 = *(float *)((long)unaff_x19 + 0x3fc);
                  fStack0000000000000134 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
                  lVar23 = unaff_x19[0x6c];
                  if ((lVar23 == 0) || (lVar38 = *(long *)(lVar23 + 0x38), lVar38 == 0))
                  goto LAB_0249920c;
                  if (*(uint *)(lVar38 + 0x18) <= *puVar1)
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  lVar38 = lVar38 + (long)(int)*puVar1 * 0x178;
                  *(undefined4 *)(lVar38 + 0x2c) = 0;
                  fVar84 = ((fStack00000000000000f4 * fVar55) / (float)iVar17) * fVar62 * fVar84;
                  fVar88 = fVar84 * fVar61 * fVar64 * fVar88;
                  *(float *)(lVar38 + 0x160) = fVar88;
                  uVar18 = *(uint *)(unaff_x19 + 0x23);
                  fStack0000000000000134 = fVar84 * fVar85 * fVar77 * fStack0000000000000134;
                  if (uVar18 == 0) {
                    fVar55 = *(float *)(unaff_x19 + 0xc2);
                  }
                  else {
                    lVar38 = unaff_x19[0xe0];
                    if (lVar38 == 0) goto LAB_0249920c;
                    if (*(uint *)(lVar38 + 0x18) <= uVar18)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    lVar38 = *(long *)(lVar38 + (long)(int)uVar18 * 8 + 0x20);
                    if (lVar38 == 0) goto LAB_0249920c;
                    fVar55 = *(float *)(lVar38 + 0x104);
                  }
LAB_02492e14:
                  fVar61 = 0.0;
                  if (uVar16 != 3 && uVar16 != 0xad) {
                    fVar61 = fVar88;
                  }
                }
                else {
                  if (iVar17 == 0) goto LAB_02492a20;
LAB_0249265c:
                  if (iVar17 == 1) {
                    if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0))
                    goto LAB_0249920c;
                    if (*(uint *)(lVar23 + 0x18) <= *puVar1)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    lVar23 = lVar23 + (long)(int)*puVar1 * 0x178;
                    lVar51 = *(long *)(lVar23 + 0x40);
                    unaff_x19[0xd2] = lVar51;
                    *(undefined4 *)((long)unaff_x19 + 0x69c) = *(undefined4 *)(lVar23 + 0x48);
                    if ((lVar51 == 0) || (lVar23 = FUN_024ebfa0(lVar51,0), lVar23 == 0))
                    goto LAB_0249920c;
                    FUN_0132138c(lVar23,*(undefined4 *)((long)unaff_x19 + 0x69c),&stack0x00000880,
                                 *(undefined8 *)System_Func<KeyValuePair<int,_int>,_int>_TypeInfo);
                    if (dVar71 == 0.0) goto LAB_02492630;
                    if (uVar16 == 0x3c) {
                      uVar16 = *(int *)((long)unaff_x19 + 0x69c) + 0xe000;
                    }
                    else {
                      lVar23 = *unaff_x29;
                      if (*(int *)(lVar23 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                        lVar23 = *unaff_x29;
                      }
                      *(undefined4 *)((long)unaff_x19 + 0x1b4) =
                           *(undefined4 *)(*(long *)(lVar23 + 0xb8) + 0x68);
                    }
                    if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
                    fVar55 = *(float *)(unaff_x19 + 0x3c);
                    memmove(&stack0x00001700,(void *)(unaff_x19[0x1f] + 0x50),0x60);
                    iVar17 = FUN_026fd110(&stack0x00001700,0);
                    if (*in_stack_00000138 == 0) goto LAB_0249920c;
                    memmove(&stack0x00001700,(void *)(*in_stack_00000138 + 0x50),0x60);
                    fVar60 = (float)FUN_026fd120(&stack0x00001700,0);
                    fVar88 = fStack0000000000000084;
                    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
                      fVar88 = 1.0;
                    }
                    if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
                    fVar88 = (fVar55 / (float)iVar17) * fVar60 * fVar88;
                    iVar17 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
                    fVar55 = *(float *)(unaff_x19 + 0x3c);
                    if (iVar17 < 1) {
                      if (*in_stack_00000138 == 0) goto LAB_0249920c;
                      iVar17 = FUN_026fd110(*in_stack_00000138 + 0x50,0);
                      if (*in_stack_00000138 == 0) goto LAB_0249920c;
                      fVar84 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
                      fVar60 = fStack0000000000000084;
                      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
                        fVar60 = fVar61;
                      }
                      if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
                      fVar61 = (float)FUN_026fd140(unaff_x19[0x1f] + 0x50,0);
                      if (*(long *)((long)dVar71 + 0x20) == 0) goto LAB_0249920c;
                      FUN_026fd62c(&stack0x00000880,*(long *)((long)dVar71 + 0x20),0);
                      unaff_x26[0x1cd] = unaff_x26[1];
                      unaff_x26[0x1cc] = *unaff_x26;
                      fVar62 = (float)FUN_026fd45c(&stack0x000016e0,0);
                      if (*(long *)((long)dVar71 + 0x20) == 0) goto LAB_0249920c;
                      fVar64 = *(float *)((long)dVar71 + 0x2c);
                      fVar85 = (float)FUN_026fd668(*(long *)((long)dVar71 + 0x20),0);
                      if (*in_stack_00000138 == 0) goto LAB_0249920c;
                      fVar63 = (float)FUN_026fd140(*in_stack_00000138 + 0x50,0);
                      if (*in_stack_00000138 == 0) goto LAB_0249920c;
                      fVar77 = (float)FUN_026fd170(*in_stack_00000138 + 0x50,0);
                      if (*in_stack_00000138 == 0) goto LAB_0249920c;
                      fVar65 = *(float *)((long)unaff_x19 + 0x3fc);
                      fStack0000000000000134 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
                      if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
                      fStack0000000000000134 = fVar88 * fVar77 * fVar65 * fStack0000000000000134;
                      fVar60 = (fVar55 / (float)iVar17) * fVar84 * fVar60;
                      fVar88 = fVar60 * (fVar61 / fVar62) * fVar64 * fVar85;
                      fVar60 = fVar60 / fVar88;
                      fVar63 = fVar60 * fVar63;
                      fVar55 = (float)FUN_026fd180(unaff_x19[0x1f] + 0x50,0);
                      fVar60 = fVar60 * fVar55;
                    }
                    else {
                      if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
                      iVar17 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
                      if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
                      fVar61 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
                      if (*(long *)((long)dVar71 + 0x20) == 0) goto LAB_0249920c;
                      fVar84 = *(float *)((long)dVar71 + 0x2c);
                      fVar60 = fStack0000000000000084;
                      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
                        fVar60 = 1.0;
                      }
                      fVar62 = (float)FUN_026fd668(*(long *)((long)dVar71 + 0x20),0);
                      if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
                      fVar63 = (float)FUN_026fd140(unaff_x19[0xd2] + 0x48,0);
                      if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
                      fVar64 = (float)FUN_026fd170(unaff_x19[0xd2] + 0x48,0);
                      if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
                      fVar85 = *(float *)((long)unaff_x19 + 0x3fc);
                      fStack0000000000000134 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
                      if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
                      fStack0000000000000134 = fVar88 * fVar64 * fVar85 * fStack0000000000000134;
                      fVar88 = (fVar55 / (float)iVar17) * fVar61 * fVar60 * fVar84 * fVar62;
                      fVar60 = (float)FUN_026fd180(unaff_x19[0xd2] + 0x48,0);
                    }
                    lVar23 = unaff_x19[0x6c];
                    unaff_x19[200] = (long)dVar71;
                    if ((lVar23 != 0) && (lVar51 = *(long *)(lVar23 + 0x38), lVar51 != 0)) {
                      if (*puVar1 < *(uint *)(lVar51 + 0x18)) {
                        lVar51 = lVar51 + (long)(int)*puVar1 * 0x178;
                        *(undefined4 *)(lVar51 + 0x2c) = 1;
                        *(float *)(lVar51 + 0x160) = fVar88;
                        fVar55 = 0.0;
                        *(long *)(lVar51 + 0x40) = unaff_x19[0xd2];
                        *(long *)(lVar51 + 0x38) = unaff_x19[0x1f];
                        *(int *)(lVar51 + 0x58) = (int)unaff_x19[0x23];
                        *(int *)(unaff_x19 + 0x23) = (int)lVar38;
                        goto LAB_02492e14;
                      }
                      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    }
                    goto LAB_0249920c;
                  }
                  lVar23 = *plVar2;
                  fVar61 = 0.0;
                  if (uVar16 != 3 && uVar16 != 0xad) {
                    fVar61 = fVar88;
                  }
                  fStack0000000000000134 = 0.0;
                  if (lVar23 == 0) goto LAB_0249920c;
                  fVar63 = 0.0;
                  fVar60 = 0.0;
                }
                lVar23 = *(long *)(lVar23 + 0x38);
                if (lVar23 == 0) goto LAB_0249920c;
                if (*(uint *)(lVar23 + 0x18) <= *puVar1)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                lVar23 = lVar23 + (long)(int)*puVar1 * 0x178;
                *(short *)(lVar23 + 0x20) = (short)uVar16;
                *(int *)(lVar23 + 0x60) = (int)unaff_x19[0x3c];
                *(undefined4 *)(lVar23 + 0x164) = *(undefined4 *)((long)unaff_x19 + 0x4e4);
                if ((unaff_x19[0x6c] == 0) ||
                   (lVar23 = *(long *)(unaff_x19[0x6c] + 0x38), lVar23 == 0)) goto LAB_0249920c;
                if (*(uint *)(lVar23 + 0x18) <= *puVar1)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                *(int *)(lVar23 + (long)(int)*puVar1 * 0x178 + 0x168) = (int)unaff_x19[0x2a];
                if ((unaff_x19[0x6c] == 0) ||
                   (lVar23 = *(long *)(unaff_x19[0x6c] + 0x38), lVar23 == 0)) goto LAB_0249920c;
                if (*(uint *)(lVar23 + 0x18) <= *puVar1)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                *(undefined4 *)(lVar23 + (long)(int)*puVar1 * 0x178 + 0x170) =
                     *(undefined4 *)((long)unaff_x19 + 0x154);
                if ((unaff_x19[0x6c] == 0) ||
                   (lVar23 = *(long *)(unaff_x19[0x6c] + 0x38), lVar23 == 0)) goto LAB_0249920c;
                uVar18 = *puVar1;
                FUN_013b78b8(unaff_x19 + 0xa9,&stack0x00000880,
                             *(undefined8 *)TMPro_TMP_Dropdown_OptionData_TypeInfo);
                if (*(uint *)(lVar23 + 0x18) <= uVar18)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                lVar23 = lVar23 + (long)(int)uVar18 * 0x178;
                uVar25 = unaff_x26[1];
                uVar32 = *unaff_x26;
                *(undefined4 *)(lVar23 + 0x18c) = 0;
                *(undefined8 *)(lVar23 + 0x184) = uVar25;
                *(undefined8 *)(lVar23 + 0x17c) = uVar32;
                if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0))
                goto LAB_0249920c;
                if (*(uint *)(lVar23 + 0x18) <= *puVar1)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                *(undefined4 *)(lVar23 + (long)(int)*puVar1 * 0x178 + 400) =
                     *(undefined4 *)((long)unaff_x19 + 0x254);
                if ((unaff_x19[200] == 0) ||
                   (lVar23 = *(long *)(unaff_x19[200] + 0x20), lVar23 == 0)) goto LAB_0249920c;
                FUN_026fd62c(&stack0x00000bf8,lVar23,0);
                puVar10 = 
                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
                ;
                unaff_x26[0x1df] = in_stack_00000c00;
                unaff_x26[0x1de] = CONCAT44(in_stack_00000bfc,uVar92);
                if ((int)uVar16 < 0x10000) {
                  if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar18 = FUN_016f68bc(uVar16,0);
                  uVar18 = uVar18 & 1;
                }
                else {
                  uVar18 = 0;
                }
                fStack00000000000000cc = *(float *)(unaff_x19 + 0x54);
                *(undefined4 *)((long)unaff_x19 + 0x2f4) = 0;
                if (*(char *)((long)unaff_x19 + 0x2f1) == '\0') {
                  fVar64 = 0.0;
                  fVar62 = 0.0;
                  fVar84 = 0.0;
                }
                else {
                  if (unaff_x19[200] == 0) goto LAB_0249920c;
                  uVar35 = *puVar1;
                  uVar44 = *(uint *)(unaff_x19[200] + 0x28);
                  if ((int)uVar35 < (int)uVar22) {
                    if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0))
                    goto LAB_0249920c;
                    if (*(uint *)(lVar23 + 0x18) <= uVar35 + 1)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    lVar23 = *(long *)(lVar23 + (long)(int)(uVar35 + 1) * 0x178 + 0x30);
                    if ((((lVar23 == 0) || (*in_stack_00000138 == 0)) ||
                        (lVar38 = *(long *)(*in_stack_00000138 + 0x128), lVar38 == 0)) ||
                       (lVar38 = *(long *)(lVar38 + 0x18), lVar38 == 0)) goto LAB_0249920c;
                    dVar71 = (double)(ulong)(uVar44 | *(int *)(lVar23 + 0x28) << 0x10);
                    uVar28 = FUN_0129eff4(lVar38,&stack0x00000880,&stack0x000016d8,
                                          *(undefined8 *)
                                           Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                                         );
                    uVar89 = 0;
                    if ((uVar28 & 1) == 0) {
                      fVar64 = 0.0;
                      fVar62 = 0.0;
                      fVar84 = 0.0;
                    }
                    else {
                      if (in_stack_000016d8 == 0) goto LAB_0249920c;
                      fVar84 = *(float *)(in_stack_000016d8 + 0x14);
                      fVar62 = *(float *)(in_stack_000016d8 + 0x18);
                      fVar64 = *(float *)(in_stack_000016d8 + 0x1c);
                      uVar89 = *(undefined4 *)(in_stack_000016d8 + 0x20);
                      if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
                        fStack00000000000000cc = 0.0;
                      }
                    }
                    uVar35 = *puVar1;
                  }
                  else {
                    uVar89 = 0;
                    fVar64 = 0.0;
                    fVar62 = 0.0;
                    fVar84 = 0.0;
                  }
                  if (0 < (int)uVar35) {
                    if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0))
                    goto LAB_0249920c;
                    if (*(uint *)(lVar23 + 0x18) <= (uint)((long)(int)uVar35 + -1))
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    lVar23 = *(long *)(lVar23 + ((long)(int)uVar35 + -1) * 0x178 + 0x30);
                    if (((lVar23 == 0) || (*in_stack_00000138 == 0)) ||
                       ((lVar38 = *(long *)(*in_stack_00000138 + 0x128), lVar38 == 0 ||
                        (lVar38 = *(long *)(lVar38 + 0x18), lVar38 == 0)))) goto LAB_0249920c;
                    dVar71 = (double)(ulong)(*(uint *)(lVar23 + 0x28) | uVar44 << 0x10);
                    uVar28 = FUN_0129eff4(lVar38,&stack0x00000880,&stack0x000016d8,
                                          *(undefined8 *)
                                           Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                                         );
                    if ((uVar28 & 1) != 0) {
                      if ((in_stack_000016d8 == 0) ||
                         (fVar84 = (float)FUN_024bb1bc(fVar84,fVar62,fVar64,uVar89,
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
                  *(float *)((long)unaff_x19 + 0x2f4) = fVar64;
                }
                if ((char)unaff_x19[0x1d] != '\0') {
                  fVar77 = *(float *)(unaff_x19 + 199);
                  fVar85 = (float)FUN_026fd474(&stack0x00001770,0);
                  fVar77 = fVar77 - fVar61 * fVar85 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
                  *(float *)(unaff_x19 + 199) = fVar77;
                  if ((uVar18 != 0) || (uVar16 == 0x200b)) {
                    *(float *)(unaff_x19 + 199) =
                         fVar77 - fVar56 * *(float *)((long)unaff_x19 + 0x2ac);
                  }
                }
                fVar77 = *(float *)(unaff_x19 + 0x55);
                fVar85 = 0.0;
                if (fVar77 != 0.0) {
                  fVar85 = (float)FUN_026fd454(&stack0x00001770,0);
                  fVar65 = (float)FUN_026fd464(&stack0x00001770,0);
                  fVar85 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                           (fVar77 * 0.5 - fVar61 * (fVar85 * 0.5 + fVar65));
                  *(float *)(unaff_x19 + 199) = *(float *)(unaff_x19 + 199) + fVar85;
                }
                if (((cVar34 == '\0') && (*(int *)((long)unaff_x19 + 0x63c) == 0)) &&
                   ((*(byte *)((long)unaff_x19 + 0x254) & 1) != 0)) {
                  lVar23 = unaff_x19[0x22];
                  if (*(int *)(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar28 = FUN_02681b9c(lVar23,0,0);
                  fVar66 = 0.0;
                  if ((uVar28 & 1) != 0) {
                    lVar23 = unaff_x19[0x22];
                    if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    if (lVar23 == 0) goto LAB_0249920c;
                    uVar28 = FUN_0267e1d8(lVar23,*(undefined4 *)
                                                  (*(long *)(*(long *)puVar10 + 0xb8) + 0x54),0);
                    fVar66 = 0.0;
                    if ((uVar28 & 1) != 0) {
                      lVar23 = unaff_x19[0x22];
                      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      if (lVar23 == 0) goto LAB_0249920c;
                      fVar77 = (float)FUN_0267f610(lVar23,*(undefined4 *)
                                                           (*(long *)(*(long *)puVar10 + 0xb8) +
                                                           0x54),0);
                      if ((*in_stack_00000138 == 0) || (unaff_x19[0x22] == 0)) goto LAB_0249920c;
                      fVar65 = *(float *)(*in_stack_00000138 + 0x1b0);
                      fVar66 = (float)FUN_0267f610(unaff_x19[0x22],
                                                   *(undefined4 *)
                                                    (*(long *)(*(long *)puVar10 + 0xb8) + 0xcc),0);
                      fVar66 = fVar66 * fVar77 * fVar65 * 0.25;
                      if (fVar77 < fVar55 + fVar66) {
                        fVar55 = fVar77 - fVar66;
                      }
                    }
                  }
                  if (*in_stack_00000138 == 0) goto LAB_0249920c;
                  fVar77 = *(float *)(*in_stack_00000138 + 0x1b4);
                }
                else {
                  lVar23 = unaff_x19[0x22];
                  if (*(int *)(*(long *)
                                System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                              + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar28 = FUN_02681b9c(lVar23,0,0);
                  fVar77 = 0.0;
                  if ((uVar28 & 1) != 0) {
                    lVar23 = unaff_x19[0x22];
                    if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    if (lVar23 == 0) goto LAB_0249920c;
                    uVar28 = FUN_0267e1d8(lVar23,*(undefined4 *)
                                                  (*(long *)(*(long *)puVar10 + 0xb8) + 0x54),0);
                    if ((uVar28 & 1) != 0) {
                      lVar23 = unaff_x19[0x22];
                      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      if (lVar23 == 0) goto LAB_0249920c;
                      uVar28 = FUN_0267e1d8(lVar23,*(undefined4 *)
                                                    (*(long *)(*(long *)puVar10 + 0xb8) + 0xcc),0);
                      if ((uVar28 & 1) != 0) {
                        lVar23 = unaff_x19[0x22];
                        if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        if (lVar23 != 0) {
                          fVar65 = (float)FUN_0267f610(lVar23,*(undefined4 *)
                                                               (*(long *)(*(long *)puVar10 + 0xb8) +
                                                               0x54),0);
                          if ((*in_stack_00000138 != 0) && (unaff_x19[0x22] != 0)) {
                            fVar78 = *(float *)(*in_stack_00000138 + 0x1a8);
                            fVar66 = (float)FUN_0267f610(unaff_x19[0x22],
                                                         *(undefined4 *)
                                                          (*(long *)(*(long *)puVar10 + 0xb8) + 0xcc
                                                          ),0);
                            fVar66 = fVar66 * fVar65 * fVar78 * 0.25;
                            if (fVar65 < fVar55 + fVar66) {
                              fVar55 = fVar65 - fVar66;
                            }
                            goto LAB_024934bc;
                          }
                        }
                        goto LAB_0249920c;
                      }
                    }
                  }
                  fVar66 = 0.0;
                }
LAB_024934bc:
                fVar79 = *(float *)(unaff_x19 + 199);
                fVar65 = (float)FUN_026fd464(&stack0x00001770,0);
                fVar79 = fVar79 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                                  fVar61 * (fVar84 + ((fVar65 - fVar55) - fVar66));
                fVar84 = (float)FUN_026fd46c(&stack0x00001770,0);
                fVar78 = *(float *)((long)unaff_x19 + 0x614) +
                         ((fStack0000000000000134 + fVar61 * (fVar62 + fVar55 + fVar84)) -
                         *(float *)(unaff_x19 + 0x9a));
                fVar84 = (float)FUN_026fd45c(&stack0x00001770,0);
                fVar81 = fVar78 - fVar61 * (fVar55 + fVar55 + fVar84);
                fVar84 = (float)FUN_026fd454(&stack0x00001770,0);
                fVar65 = fVar79 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                                  fVar61 * (fVar66 + fVar66 + fVar55 + fVar55 + fVar84);
                fVar84 = fVar79;
                fVar62 = fVar65;
                if (((*(int *)((long)unaff_x19 + 0x63c) == 0) && (cVar34 == '\0')) &&
                   ((*(byte *)((long)unaff_x19 + 0x254) >> 1 & 1) != 0)) {
                  fVar76 = (float)(int)unaff_x19[0xbd] * fVar83;
                  fVar84 = (float)FUN_026fd46c(&stack0x00001770,0);
                  fVar69 = fVar76 * fVar61 * (fVar66 + fVar55 + fVar84);
                  fVar84 = (float)FUN_026fd46c(&stack0x00001770,0);
                  fVar62 = (float)FUN_026fd45c(&stack0x00001770,0);
                  fVar78 = fVar78 + 0.0;
                  fVar81 = fVar81 + 0.0;
                  fVar76 = fVar76 * fVar61 * (((fVar84 - fVar62) - fVar55) - fVar66);
                  fVar62 = fVar65 + fVar76;
                  fVar84 = fVar79 + fVar69;
                  fVar68 = (fVar69 - fVar76) * 0.5;
                  fVar79 = (fVar79 + fVar76) - fVar68;
                  fVar65 = (fVar65 + fVar69) - fVar68;
                  fVar84 = fVar84 - fVar68;
                  fVar62 = fVar62 - fVar68;
                }
                if (*(char *)((long)unaff_x19 + 0x46c) == '\0') {
                  fVar69 = 0.0;
                  fVar70 = 0.0;
                  fVar80 = 0.0;
                  fVar68 = 0.0;
                  fVar91 = fVar81;
                  fVar76 = fVar78;
                  fStack00000000000000e8 = fVar84;
                  fStack00000000000000ec = fVar79;
                }
                else {
                  thunk_FUN_026935f0(lVar24,0);
                  fVar82 = (fVar65 + fVar79) * 0.5;
                  fVar86 = (fVar81 + fVar78) * 0.5;
                  fVar78 = fVar78 - fVar86;
                  fVar68 = 0.0;
                  fVar76 = fVar78;
                  fVar67 = (float)FUN_02692df0(fVar84 - fVar82,lVar24,0);
                  fVar68 = fVar68 + 0.0;
                  fVar81 = fVar81 - fVar86;
                  fVar69 = 0.0;
                  fVar84 = fVar81;
                  fVar79 = (float)FUN_02692df0(fVar79 - fVar82,lVar24,0);
                  fVar69 = fVar69 + 0.0;
                  fVar80 = 0.0;
                  fVar65 = (float)FUN_02692df0(fVar65 - fVar82,lVar24,0);
                  fVar65 = fVar82 + fVar65;
                  fVar78 = fVar86 + fVar78;
                  fVar80 = fVar80 + 0.0;
                  fVar70 = 0.0;
                  fVar62 = (float)FUN_02692df0(fVar62 - fVar82,lVar24,0);
                  fVar62 = fVar82 + fVar62;
                  fVar81 = fVar86 + fVar81;
                  fVar70 = fVar70 + 0.0;
                  fVar91 = fVar86 + fVar84;
                  fVar76 = fVar86 + fVar76;
                  fStack00000000000000e8 = fVar82 + fVar67;
                  fStack00000000000000ec = fVar82 + fVar79;
                }
                if (*plVar2 == 0) goto LAB_0249920c;
                lVar23 = *(long *)(*plVar2 + 0x38);
                uVar28 = (ulong)(uint)fVar61;
                if (lVar23 == 0) goto LAB_0249920c;
                if (*(uint *)(lVar23 + 0x18) <= *puVar1)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                lVar23 = lVar23 + (long)(int)*puVar1 * 0x178;
                *(float *)(lVar23 + 0x120) = fVar91;
                *(float *)(lVar23 + 0x11c) = fStack00000000000000ec;
                *(float *)(lVar23 + 0x124) = fVar69;
                if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0))
                goto LAB_0249920c;
                if (*(uint *)(lVar23 + 0x18) <= *puVar1)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                lVar23 = lVar23 + (long)(int)*puVar1 * 0x178;
                *(float *)(lVar23 + 0x114) = fVar76;
                *(float *)(lVar23 + 0x110) = fStack00000000000000e8;
                *(float *)(lVar23 + 0x118) = fVar68;
                if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0))
                goto LAB_0249920c;
                if (*(uint *)(lVar23 + 0x18) <= *puVar1)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                lVar23 = lVar23 + (long)(int)*puVar1 * 0x178;
                *(float *)(lVar23 + 0x128) = fVar65;
                *(float *)(lVar23 + 300) = fVar78;
                *(float *)(lVar23 + 0x130) = fVar80;
                if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0))
                goto LAB_0249920c;
                if (*(uint *)(lVar23 + 0x18) <= *puVar1)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                lVar23 = lVar23 + (long)(int)*puVar1 * 0x178;
                *(float *)(lVar23 + 0x134) = fVar62;
                *(float *)(lVar23 + 0x138) = fVar81;
                *(float *)(lVar23 + 0x13c) = fVar70;
                if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0))
                goto LAB_0249920c;
                uVar44 = *puVar1;
                lVar38 = (long)(int)uVar44;
                if (*(uint *)(lVar23 + 0x18) <= uVar44)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                lVar51 = lVar23 + lVar38 * 0x178;
                *(int *)(lVar51 + 0x140) = (int)unaff_x19[199];
                fVar62 = *(float *)(unaff_x19 + 0x9a);
                uVar72 = (ulong)(uint)fVar62;
                fVar84 = *(float *)((long)unaff_x19 + 0x614);
                *(float *)(lVar51 + 0x15c) = (fVar65 - fStack00000000000000ec) / (fVar76 - fVar91);
                *(float *)(lVar51 + 0x14c) = (fStack0000000000000134 - fVar62) + fVar84;
                fVar63 = fVar63 * fVar61;
                if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
                  fVar63 = fVar63 / fStack00000000000000f4;
                  fVar60 = (fVar60 * fVar61) / fStack00000000000000f4;
                }
                else {
                  fVar60 = fVar60 * fVar61;
                }
                uVar35 = *(uint *)(unaff_x19 + 0x92);
                bVar14 = uVar18 != 0;
                fVar63 = fVar84 + fVar63;
                bVar15 = uVar44 != uVar35;
                if (bVar15 && bVar14) {
                  fVar84 = *(float *)(unaff_x19 + 0x98);
                  lVar23 = lVar23 + lVar38 * 0x178;
                  *(float *)(lVar23 + 0x154) = fVar84;
                  fVar60 = *(float *)((long)unaff_x19 + 0x4c4);
                  *(float *)(lVar23 + 0x148) = fVar84 - fVar62;
                  *(float *)(lVar23 + 0x158) = fVar60;
                  *(float *)(unaff_x19 + 0x97) = fVar84 - fVar62;
                  fVar60 = fVar60 - fVar62;
                  *(float *)(lVar23 + 0x150) = fVar60;
                }
                else {
                  fVar60 = fVar84 + fVar60;
                  fVar65 = fVar63;
                  fVar78 = fVar60;
                  if (fVar84 != 0.0) {
                    fVar65 = (fVar63 - fVar84) / *(float *)((long)unaff_x19 + 0x3fc);
                    fVar78 = (fVar60 - fVar84) / *(float *)((long)unaff_x19 + 0x3fc);
                    if (fVar65 <= fVar63) {
                      fVar65 = fVar63;
                    }
                    if (fVar60 <= fVar78) {
                      fVar78 = fVar60;
                    }
                  }
                  lVar23 = lVar23 + lVar38 * 0x178;
                  fVar84 = fVar65;
                  if (fVar65 <= *(float *)(unaff_x19 + 0x98)) {
                    fVar84 = *(float *)(unaff_x19 + 0x98);
                  }
                  fVar81 = fVar78;
                  if (*(float *)((long)unaff_x19 + 0x4c4) <= fVar78) {
                    fVar81 = *(float *)((long)unaff_x19 + 0x4c4);
                  }
                  *(float *)((long)unaff_x19 + 0x4c4) = fVar81;
                  fVar60 = fVar60 - fVar62;
                  *(float *)(unaff_x19 + 0x98) = fVar84;
                  *(float *)(lVar23 + 0x154) = fVar65;
                  *(float *)(lVar23 + 0x158) = fVar78;
                  *(float *)(lVar23 + 0x148) = fVar63 - fVar62;
                  *(float *)(unaff_x19 + 0x97) = fVar63 - fVar62;
                  *(float *)(lVar23 + 0x150) = fVar60;
                }
                *(float *)((long)unaff_x19 + 0x4bc) = fVar60;
                if (((int)unaff_x19[0x94] == 0) || (*(char *)((long)unaff_x19 + 0x334) != '\0')) {
                  if (!bVar15 || !bVar14) {
                    *(float *)(unaff_x19 + 0x96) = fVar84;
                    if (unaff_x19[0x1f] != 0) {
                      fVar60 = *(float *)((long)unaff_x19 + 0x4b4);
                      fVar84 = (float)FUN_026fd150(unaff_x19[0x1f] + 0x50,0);
                      fStack00000000000000f4 = (fVar61 * fVar84) / fStack00000000000000f4;
                      uVar72 = (ulong)*(uint *)(unaff_x19 + 0x9a);
                      if (fVar60 <= fStack00000000000000f4) {
                        fVar60 = fStack00000000000000f4;
                      }
                      *(float *)((long)unaff_x19 + 0x4b4) = fVar60;
                      goto LAB_02493948;
                    }
                    goto LAB_0249920c;
                  }
                }
                else {
LAB_02493948:
                  if ((!bVar15 || !bVar14) && (float)uVar72 == 0.0) {
                    fVar60 = *(float *)((long)unaff_x19 + 0x4ac);
                    if (*(float *)((long)unaff_x19 + 0x4ac) <= fVar63) {
                      fVar60 = fVar63;
                    }
                    *(float *)((long)unaff_x19 + 0x4ac) = fVar60;
                  }
                }
                lVar23 = *plVar2;
                if ((lVar23 == 0) || (lVar38 = *(long *)(lVar23 + 0x38), lVar38 == 0))
                goto LAB_0249920c;
                uVar50 = *puVar1;
                if (*(uint *)(lVar38 + 0x18) <= uVar50)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                lVar38 = lVar38 + (long)(int)uVar50 * 0x178;
                *(undefined1 *)(lVar38 + 0x194) = 0;
                uVar41 = *(uint *)(unaff_x19 + 0x4e);
                if ((uVar16 != 9) &&
                   (((((uVar18 != 0 || (uVar16 == 3)) || (uVar16 == 0x200b)) || (uVar16 == 0xad)) &&
                    ((!(bool)(uVar16 == 0xad & (bVar13 ^ 1U)) &&
                     (*(int *)((long)unaff_x19 + 0x63c) != 1)))))) {
                  if (((uVar16 & 0xfffffffe) == 10) && ((int)unaff_x19[0x5b] == 6)) {
                    fVar60 = (float)uVar72;
                    fVar88 = 0.0;
                    if ((0.0 < fVar60) && (fVar88 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0'))
                    {
                      fVar88 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
                    }
                    uVar72 = (ulong)(uint)fVar74;
                    if (fVar74 < (*(float *)(unaff_x19 + 0x96) -
                                 (*(float *)((long)unaff_x19 + 0x4c4) - fVar60)) + fVar88) {
                      if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
                        *(uint *)((long)unaff_x19 + 0x2dc) = uVar50;
                      }
                      unaff_x28 = (long *)StringLiteral_302;
                      unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
                      unaff_x26 = (undefined8 *)&stack0x00000880;
                      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      uVar93 = FUN_024d66ec();
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
                        plVar52 = (long *)unaff_x19[0x5c];
                        uVar32 = (**(code **)(*unaff_x19 + 0x548))();
                        if (plVar52 == (long *)0x0) goto LAB_0249920c;
                        (**(code **)(*plVar52 + 0x558))
                                  (plVar52,uVar32,*(undefined8 *)(*plVar52 + 0x560));
                        lVar23 = unaff_x19[0x5c];
                        if (lVar23 == 0) goto LAB_0249920c;
                        *(int *)(lVar23 + 0x3f8) = (int)unaff_x19[0x7f];
                        FUN_024c910c(lVar23,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
                        plVar52 = (long *)unaff_x19[0x5c];
                        if (plVar52 == (long *)0x0) goto LAB_0249920c;
                        (**(code **)(*plVar52 + 0x7d8))
                                  (plVar52,0,0,*(undefined8 *)(*plVar52 + 0x7e0));
                        *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                      }
                      in_stack_000017a8 = CONCAT44(3,uVar50);
                      goto LAB_02492630;
                    }
                  }
                  if ((((uVar16 - 0x2007 < 0x23) &&
                       ((1L << ((ulong)(uVar16 - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
                      (uVar16 - 10 < 2)) || (uVar16 == 0xa0)) {
LAB_024944e4:
                    if (((uVar16 != 0xad) && (uVar16 != 0x200b)) && (uVar16 != 0x2060)) {
                      lVar23 = *plVar2;
                      if ((lVar23 == 0) || (lVar38 = *(long *)(lVar23 + 0x50), lVar38 == 0))
                      goto LAB_0249920c;
                      if (*(uint *)(lVar38 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
                      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                      lVar38 = lVar38 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                      *(int *)(lVar38 + 0x2c) = *(int *)(lVar38 + 0x2c) + 1;
                      *(int *)(lVar23 + 0x20) = *(int *)(lVar23 + 0x20) + 1;
                    }
                  }
                  else {
                    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar28 = FUN_016fa418(uVar16,0);
                    if ((uVar28 & 1) != 0) goto LAB_024944e4;
                  }
                  if (uVar16 == 0xa0) {
                    if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x50), lVar23 == 0))
                    goto LAB_0249920c;
                    if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
LAB_024949c4:
                    *(int *)(lVar23 + 0x20) = *(int *)(lVar23 + 0x20) + 1;
                  }
LAB_02494abc:
                  if (((int)unaff_x19[0x5b] == 1) && ((uVar16 == 0x2d || (!bVar7)))) {
                    if (unaff_x19[0xca] == 0) goto LAB_0249920c;
                    fVar88 = *(float *)(unaff_x19 + 0x3c);
                    iVar17 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
                    if (unaff_x19[0xca] == 0) goto LAB_0249920c;
                    fVar84 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
                    lVar23 = unaff_x19[0xc9];
                    fVar60 = fStack0000000000000084;
                    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
                      fVar60 = 1.0;
                    }
                    if ((lVar23 == 0) || (*(long *)(lVar23 + 0x20) == 0)) goto LAB_0249920c;
                    fVar63 = *(float *)((long)unaff_x19 + 0x3fc);
                    fVar66 = *(float *)(lVar23 + 0x2c);
                    fVar62 = (float)FUN_026fd668(*(long *)(lVar23 + 0x20),0);
                    fVar65 = *(float *)(unaff_x19 + 0x69);
                    fVar62 = fVar63 * (fVar88 / (float)iVar17) * fVar84 * fVar60 * fVar66 * fVar62;
                    fVar88 = *(float *)((long)unaff_x19 + 0x34c);
                    if ((uVar16 == 10) &&
                       (*(int *)((long)unaff_x19 + 0x48c) != (int)unaff_x19[0x92])) {
                      if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0))
                      goto LAB_0249920c;
                      uVar50 = *(int *)((long)unaff_x19 + 0x48c) - 1;
                      if (*(uint *)(lVar23 + 0x18) <= uVar50)
                      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                      if (unaff_x19[0xca] == 0) goto LAB_0249920c;
                      fVar60 = *(float *)(lVar23 + (long)(int)uVar50 * 0x178 + 0x60);
                      iVar17 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
                      if (unaff_x19[0xca] == 0) goto LAB_0249920c;
                      fVar63 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
                      lVar23 = unaff_x19[0xc9];
                      fVar84 = fStack0000000000000084;
                      if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
                        fVar84 = 1.0;
                      }
                      if ((lVar23 == 0) || (*(long *)(lVar23 + 0x20) == 0)) goto LAB_0249920c;
                      fVar66 = *(float *)((long)unaff_x19 + 0x3fc);
                      fVar78 = *(float *)(lVar23 + 0x2c);
                      fVar62 = (float)FUN_026fd668(*(long *)(lVar23 + 0x20),0);
                      if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x50), lVar23 == 0))
                      goto LAB_0249920c;
                      if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
                      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                      lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                      fVar65 = *(float *)(lVar23 + 0x60);
                      fVar88 = *(float *)(lVar23 + 100);
                      fVar62 = fVar66 * (fVar60 / (float)iVar17) * fVar63 * fVar84 * fVar78 * fVar62
                      ;
                    }
                    fVar66 = *(float *)(unaff_x19 + 0x9a);
                    fVar84 = *(float *)(unaff_x19 + 0x96);
                    fVar78 = *(float *)((long)unaff_x19 + 0x4c4);
                    fVar60 = 0.0;
                    fVar63 = 0.0;
                    if ((0.0 < fVar66) && (fVar63 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0'))
                    {
                      fVar63 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
                    }
                    fVar81 = *(float *)(unaff_x19 + 199);
                    if ((char)unaff_x19[0x1d] == '\0') {
                      if ((unaff_x19[0xc9] == 0) ||
                         (lVar23 = *(long *)(unaff_x19[0xc9] + 0x20), lVar23 == 0))
                      goto LAB_0249920c;
                      FUN_026fd62c(&stack0x00000880,lVar23,0);
                      fVar60 = (float)FUN_026fd474(&stack0x000016e0,0);
                    }
                    puVar10 = System_Threading_Mutex_TypeInfo;
                    fVar79 = *(float *)(unaff_x19 + 0x6b);
                    fVar88 = (fVar87 - fVar65) - fVar88;
                    bVar14 = true;
                    if ((fVar79 <= fVar88) && (bVar14 = false, !NAN(fVar79))) {
                      bVar14 = fVar79 == -1.0;
                    }
                    if (!bVar14) {
                      fVar88 = fVar79;
                    }
                    fVar65 = _DAT_0294c6e8;
                    if ((uVar41 & 0x18) == 0) {
                      fVar65 = 1.0;
                    }
                    if (((fVar84 - (fVar78 - fVar66)) + fVar63 < fVar74) &&
                       (ABS(fVar81) + fVar62 * fVar60 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc))
                        < fVar65 * fVar88)) {
                      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      FUN_024d69d4();
                      lVar23 = *(long *)(*(long *)puVar10 + 0xb8);
                      memcpy(&stack0x00000508,(void *)(lVar23 + 0x788),0x378);
                      FUN_013b86dc(lVar23 + 0x11f0,&stack0x00000508,
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_List<TextStyle>_get_Item__);
                    }
                  }
                  uVar28 = (ulong)(uint)fVar61;
                  fVar88 = 1.0;
                  lVar23 = *plVar2;
                  if ((lVar23 == 0) || (lVar38 = *(long *)(lVar23 + 0x38), lVar38 == 0))
                  goto LAB_0249920c;
                  if (*(uint *)(lVar38 + 0x18) <= *puVar1)
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  uVar50 = *(uint *)(unaff_x19 + 0x94);
                  lVar38 = lVar38 + (long)(int)*puVar1 * 0x178;
                  *(uint *)(lVar38 + 100) = uVar50;
                  *(int *)(lVar38 + 0x68) = (int)unaff_x19[0x95];
                  if ((bVar7) || ((uVar16 < 0xe && ((1 << (ulong)(uVar16 & 0x1f) & 0x2c00U) != 0))))
                  {
                    lVar23 = *(long *)(lVar23 + 0x50);
                    if (lVar23 == 0) goto LAB_0249920c;
                    if (*(uint *)(lVar23 + 0x18) <= uVar50)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    if (*(int *)(lVar23 + (long)(int)uVar50 * 0x5c + 0x24) == 1) goto LAB_02494e68;
                  }
                  else {
                    lVar23 = *(long *)(lVar23 + 0x50);
                    if (lVar23 == 0) goto LAB_0249920c;
LAB_02494e68:
                    if (*(uint *)(lVar23 + 0x18) <= uVar50)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    *(int *)(lVar23 + (long)(int)uVar50 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
                  }
                  if (uVar16 == 9) {
                    if (*in_stack_00000138 == 0) goto LAB_0249920c;
                    fVar88 = (float)FUN_026fd208(*in_stack_00000138 + 0x50,0);
                    if (*in_stack_00000138 == 0) goto LAB_0249920c;
                    fVar62 = *(float *)(unaff_x19 + 199);
                    fVar60 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000138 + 0x1b9));
                    fVar88 = fVar61 * fVar88 * fVar60;
                    fVar84 = fVar88 * (float)(int)(fVar62 / fVar88);
                    uVar72 = (ulong)(uint)fVar84;
                    if (fVar84 <= fVar62) {
                      fVar84 = fVar62 + fVar88;
                    }
LAB_02495058:
                    *(float *)(unaff_x19 + 199) = fVar84;
                  }
                  else if (*(float *)(unaff_x19 + 0x55) == 0.0) {
                    if ((char)unaff_x19[0x1d] == '\0') {
                      if (*(char *)((long)unaff_x19 + 0x46c) != '\0') {
                        fVar88 = (float)thunk_FUN_026935f0(lVar24,0);
                      }
                      fVar84 = *(float *)(unaff_x19 + 199);
                      fVar62 = (float)FUN_026fd474(&stack0x00001770,0);
                      if (unaff_x19[0x1f] != 0) {
                        fVar60 = 1.0 - *(float *)((long)unaff_x19 + 0x2cc);
                        fVar84 = fVar84 + fVar60 * (*(float *)((long)unaff_x19 + 0x2a4) +
                                                   fVar61 * (fVar64 + fVar88 * fVar62) +
                                                   fVar56 * (fVar77 + fStack00000000000000cc +
                                                                      *(float *)(unaff_x19[0x1f] +
                                                                                0x1ac)));
                        *(float *)(unaff_x19 + 199) = fVar84;
                        goto joined_r0x02494fac;
                      }
                      goto LAB_0249920c;
                    }
                    if (*in_stack_00000138 == 0) goto LAB_0249920c;
                    fVar84 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                             (*(float *)((long)unaff_x19 + 0x2a4) +
                             fVar61 * fVar64 +
                             fVar56 * (fVar77 + fStack00000000000000cc +
                                                *(float *)(*in_stack_00000138 + 0x1ac)));
                    uVar72 = (ulong)(uint)fVar84;
                    fVar84 = *(float *)(unaff_x19 + 199) - fVar84;
                    *(float *)(unaff_x19 + 199) = fVar84;
                    if ((uVar18 != 0) || (uVar16 == 0x200b)) {
                      fVar88 = fVar56 * *(float *)((long)unaff_x19 + 0x2ac);
                      uVar72 = (ulong)(uint)fVar88;
                      fVar84 = fVar84 - fVar88;
                      goto LAB_02495058;
                    }
                  }
                  else {
                    if (*in_stack_00000138 == 0) goto LAB_0249920c;
                    fVar60 = *(float *)(unaff_x19 + 199);
                    fVar84 = fVar60 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                                      (*(float *)((long)unaff_x19 + 0x2a4) +
                                      (*(float *)(unaff_x19 + 0x55) - fVar85) +
                                      fVar56 * (fStack00000000000000cc +
                                               *(float *)(*in_stack_00000138 + 0x1ac)));
                    *(float *)(unaff_x19 + 199) = fVar84;
joined_r0x02494fac:
                    if ((uVar18 != 0) || (uVar72 = (ulong)(uint)fVar60, uVar16 == 0x200b)) {
                      fVar88 = fVar56 * *(float *)((long)unaff_x19 + 0x2ac);
                      uVar72 = (ulong)(uint)fVar88;
                      fVar84 = fVar84 + fVar88;
                      goto LAB_02495058;
                    }
                  }
                  lVar23 = *plVar2;
                  if ((lVar23 == 0) || (lVar38 = *(long *)(lVar23 + 0x38), lVar38 == 0))
                  goto LAB_0249920c;
                  uVar50 = *puVar1;
                  uVar41 = (uint)*(undefined8 *)(lVar38 + 0x18);
                  if (uVar41 <= uVar50)
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  *(float *)(lVar38 + (long)(int)uVar50 * 0x178 + 0x144) = fVar84;
                  uVar43 = uVar16;
                  if ((int)uVar16 < 0xd) {
                    if ((uVar16 - 10 < 2) || (uVar16 == 3)) goto LAB_024950bc;
FUN_02495710:
                    if (((bool)(bVar7 & uVar16 == 0x2d)) || (uVar50 == uVar22)) goto LAB_024950bc;
                  }
                  else {
                    if (1 < uVar16 - 0x2028) {
                      if (uVar16 != 0xd) goto FUN_02495710;
                      uVar72 = 0;
                      *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
                      if (uVar50 != uVar22) goto LAB_0249572c;
                    }
LAB_024950bc:
                    if (0.0 < *(float *)(unaff_x19 + 0x9a)) {
                      fVar88 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
                      if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) ==
                          0) {
                        thunk_FUN_00d32864();
                      }
                      if (((fVar83 < ABS(fVar88)) && (*(char *)((long)unaff_x19 + 700) == '\0')) &&
                         (*(char *)((long)unaff_x19 + 0x334) == '\0')) {
                        FUN_024d6ca8(fVar88);
                        *(float *)((long)unaff_x19 + 0x4bc) =
                             *(float *)((long)unaff_x19 + 0x4bc) - fVar88;
                        *(float *)(unaff_x19 + 0x9a) = fVar88 + *(float *)(unaff_x19 + 0x9a);
                        puVar10 = System_Threading_Mutex_TypeInfo;
                        lVar23 = *(long *)System_Threading_Mutex_TypeInfo;
                        if (*(int *)(lVar23 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                          lVar23 = *(long *)puVar10;
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
                          memcpy((void *)(*(long *)(lVar23 + 0xb8) + 0x788),&stack0x00000880,0x378);
                          lVar23 = *(long *)(lVar23 + 0xb8);
                          *(float *)(lVar23 + 0x7bc) = fVar88 + *(float *)(lVar23 + 0x7bc);
                          *(float *)(lVar23 + 0x800) = fVar88 + *(float *)(lVar23 + 0x800);
                          memcpy(&stack0x00000190,(void *)(lVar23 + 0x788),0x378);
                          FUN_013b86dc(lVar23 + 0x11f0,&stack0x00000190,
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_List<TextStyle>_get_Item__
                                      );
                        }
                      }
                    }
                    fVar84 = *(float *)(unaff_x19 + 0x9a);
                    *(undefined1 *)((long)unaff_x19 + 0x334) = 0;
                    fVar60 = *(float *)((long)unaff_x19 + 0x4c4) - fVar84;
                    fVar88 = *(float *)((long)unaff_x19 + 0x4bc);
                    if (fVar60 <= *(float *)((long)unaff_x19 + 0x4bc)) {
                      fVar88 = fVar60;
                    }
                    *(float *)((long)unaff_x19 + 0x4bc) = fVar88;
                    fVar62 = *(float *)(unaff_x19 + 0x98);
                    if (in_stack_000017b4 == '\0') {
                      fVar94 = fVar88;
                    }
                    if ((*(char *)((long)unaff_x19 + 0x32c) != '\0') &&
                       (((int)unaff_x19[100] <= *(int *)((long)unaff_x19 + 0x48c) ||
                        ((int)unaff_x19[0x65] <= (int)unaff_x19[0x94])))) {
                      in_stack_000017b4 = '\x01';
                    }
                    lVar23 = *plVar2;
                    if ((lVar23 == 0) || (lVar38 = *(long *)(lVar23 + 0x50), lVar38 == 0))
                    goto LAB_0249920c;
                    uVar50 = *(uint *)(unaff_x19 + 0x94);
                    if (*(uint *)(lVar38 + 0x18) <= uVar50)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    lVar51 = lVar38 + (long)(int)uVar50 * 0x5c;
                    *(int *)(lVar51 + 0x34) = (int)unaff_x19[0x92];
                    iVar17 = (int)unaff_x19[0x92];
                    if ((int)unaff_x19[0x92] <= *(int *)((long)unaff_x19 + 0x494)) {
                      iVar17 = *(int *)((long)unaff_x19 + 0x494);
                    }
                    *(int *)((long)unaff_x19 + 0x494) = iVar17;
                    *(int *)(lVar51 + 0x38) = iVar17;
                    *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x48c);
                    *(undefined4 *)(lVar51 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x48c);
                    iVar17 = *(int *)((long)unaff_x19 + 0x494);
                    if (*(int *)((long)unaff_x19 + 0x494) <= *(int *)((long)unaff_x19 + 0x49c)) {
                      iVar17 = *(int *)((long)unaff_x19 + 0x49c);
                    }
                    *(int *)((long)unaff_x19 + 0x49c) = iVar17;
                    *(int *)(lVar51 + 0x40) = iVar17;
                    *(int *)(lVar51 + 0x24) =
                         (*(int *)(lVar51 + 0x3c) - *(int *)(lVar51 + 0x34)) + 1;
                    *(undefined4 *)(lVar51 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
                    lVar23 = *(long *)(lVar23 + 0x38);
                    if (lVar23 == 0) goto LAB_0249920c;
                    if (*(uint *)(lVar23 + 0x18) <= *(uint *)((long)unaff_x19 + 0x494))
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    uVar89 = *(undefined4 *)
                              (lVar23 + (long)(int)*(uint *)((long)unaff_x19 + 0x494) * 0x178 +
                              0x11c);
                    lVar38 = lVar38 + (long)(int)uVar50 * 0x5c;
                    *(float *)(lVar38 + 0x70) = fVar60;
                    *(undefined4 *)(lVar38 + 0x6c) = uVar89;
                    lVar23 = *plVar2;
                    if ((lVar23 == 0) || (lVar38 = *(long *)(lVar23 + 0x50), lVar38 == 0))
                    goto LAB_0249920c;
                    if (*(uint *)(lVar38 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    lVar23 = *(long *)(lVar23 + 0x38);
                    if (lVar23 == 0) goto LAB_0249920c;
                    if (*(uint *)(lVar23 + 0x18) <= *(uint *)((long)unaff_x19 + 0x49c))
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    uVar89 = *(undefined4 *)
                              (lVar23 + (long)(int)*(uint *)((long)unaff_x19 + 0x49c) * 0x178 +
                              0x128);
                    fVar62 = fVar62 - fVar84;
                    lVar38 = lVar38 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                    *(float *)(lVar38 + 0x78) = fVar62;
                    *(undefined4 *)(lVar38 + 0x74) = uVar89;
                    lVar23 = *plVar2;
                    if ((lVar23 == 0) || (lVar51 = *(long *)(lVar23 + 0x50), lVar51 == 0))
                    goto LAB_0249920c;
                    lVar27 = (long)(int)*(uint *)(unaff_x19 + 0x94);
                    if (*(uint *)(lVar51 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    lVar38 = lVar51 + lVar27 * 0x5c;
                    *(float *)(lVar38 + 0x44) = *(float *)(lVar38 + 0x74) - fVar61 * fVar55;
                    *(float *)(lVar38 + 0x5c) = fStack00000000000000d4;
                    if (*(int *)(lVar38 + 0x24) == 1) {
                      *(int *)(lVar51 + lVar27 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
                    }
                    if ((*in_stack_00000138 == 0) ||
                       (lVar38 = *(long *)(lVar23 + 0x38), lVar38 == 0)) goto LAB_0249920c;
                    lVar47 = (long)(int)*(uint *)((long)unaff_x19 + 0x49c);
                    uVar41 = (uint)*(undefined8 *)(lVar38 + 0x18);
                    if (uVar41 <= *(uint *)((long)unaff_x19 + 0x49c))
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    if ((*(char *)(lVar38 + lVar47 * 0x178 + 0x194) == '\0') &&
                       (lVar47 = (long)(int)*(uint *)(unaff_x19 + 0x93),
                       uVar41 <= *(uint *)(unaff_x19 + 0x93)))
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    fVar61 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                             (fVar56 * (fVar77 + fStack00000000000000cc +
                                                 *(float *)(*in_stack_00000138 + 0x1ac)) -
                             *(float *)((long)unaff_x19 + 0x2a4));
                    fVar88 = -fVar61;
                    if ((char)unaff_x19[0x1d] != '\0') {
                      fVar88 = fVar61;
                    }
                    lVar51 = lVar51 + lVar27 * 0x5c;
                    *(float *)(lVar51 + 0x58) = *(float *)(lVar38 + lVar47 * 0x178 + 0x144) + fVar88
                    ;
                    fVar88 = *(float *)(unaff_x19 + 0x9a);
                    *(float *)(lVar51 + 0x48) = fStack0000000000000054 * fVar54 + (fVar62 - fVar60);
                    *(float *)(lVar51 + 0x4c) = fVar62;
                    uVar72 = (ulong)(uint)(0.0 - fVar88);
                    *(float *)(lVar51 + 0x50) = 0.0 - fVar88;
                    *(float *)(lVar51 + 0x54) = fVar60;
                    unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
                    if ((int)uVar16 < 0x2d) {
                      if (uVar16 - 10 < 2) {
UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__OnSelectEntering:
                        if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        unaff_x28 = (long *)StringLiteral_302;
                        unaff_x26 = (undefined8 *)&stack0x00000880;
                        FUN_024d69d4();
                        lVar23 = unaff_x19[0x6c];
                        *(undefined4 *)((long)unaff_x19 + 0x4a4) = 0;
                        iVar17 = (int)unaff_x19[0x94] + 1;
                        *(int *)(unaff_x19 + 0x94) = iVar17;
                        *(int *)(unaff_x19 + 0x92) = *(int *)((long)unaff_x19 + 0x48c) + 1;
                        if ((lVar23 != 0) && (*(long *)(lVar23 + 0x50) != 0)) {
                          if (*(int *)(*(long *)(lVar23 + 0x50) + 0x18) <= iVar17) {
                            FUN_024d6e60();
                            lVar23 = unaff_x19[0x6c];
                            if (lVar23 == 0) goto LAB_0249920c;
                          }
                          lVar23 = *(long *)(lVar23 + 0x38);
                          if (lVar23 != 0) {
                            if (*puVar1 < *(uint *)(lVar23 + 0x18)) {
                              fVar88 = *(float *)(lVar23 + (long)(int)*puVar1 * 0x178 + 0x154);
                              if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
                                fVar61 = 0.0;
                                if ((uVar16 == 0x2029) || (uVar16 == 10)) {
                                  fVar61 = *(float *)((long)unaff_x19 + 0x2c4);
                                }
                                uVar33 = 0;
                                fVar61 = *(float *)(unaff_x19 + 0x9a) +
                                         fVar88 + (0.0 - *(float *)((long)unaff_x19 + 0x4c4)) +
                                         fStack0000000000000054 *
                                         (fVar54 + *(float *)((long)unaff_x19 + 0x2b4)) +
                                         fVar56 * (*(float *)(unaff_x19 + 0x56) + fVar61);
                              }
                              else {
                                if ((uVar16 == 0x2029) || (fVar61 = 0.0, uVar16 == 10)) {
                                  fVar61 = *(float *)((long)unaff_x19 + 0x2c4);
                                }
                                uVar33 = 1;
                                fVar61 = *(float *)(unaff_x19 + 0x9a) +
                                         *(float *)(unaff_x19 + 0x57) +
                                         fVar56 * (*(float *)(unaff_x19 + 0x56) + fVar61);
                              }
                              *(float *)(unaff_x19 + 0x9a) = fVar61;
                              *(undefined1 *)((long)unaff_x19 + 700) = uVar33;
                              lVar23 = *unaff_x29;
                              if (*(int *)(lVar23 + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                                lVar23 = *unaff_x29;
                              }
                              uVar32 = *(undefined8 *)(*(long *)(lVar23 + 0xb8) + 0x15a8);
                              *(float *)(unaff_x19 + 0x99) = fVar88;
                              uVar72 = NEON_rev64(uVar32,4);
                              unaff_x19[0x98] = uVar72;
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
                      if (uVar16 == 3) {
                        if (unaff_x19[0x8e] == 0) goto LAB_0249920c;
                        uVar93 = (uint)*(undefined8 *)(unaff_x19[0x8e] + 0x18);
                        uVar43 = 3;
                      }
                    }
                    else if ((uVar16 - 0x2028 < 2) || (uVar16 == 0x2d))
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__OnSelectEntering;
                  }
LAB_0249572c:
                  uVar50 = *puVar1;
                  if (uVar41 <= uVar50)
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  if (*(char *)(lVar38 + (long)(int)uVar50 * 0x178 + 0x194) != '\0') {
                    lVar38 = lVar38 + (long)(int)uVar50 * 0x178;
                    uVar26 = *(ulong *)(lVar38 + 0x11c);
                    uVar72 = *(ulong *)((long)unaff_x19 + 0x4d4);
                    *(ulong *)((long)unaff_x19 + 0x4d4) =
                         uVar26 ^ (uVar26 ^ uVar72) &
                                  CONCAT44(-(uint)((float)(uVar72 >> 0x20) < (float)(uVar26 >> 0x20)
                                                  ),-(uint)((float)uVar72 < (float)uVar26));
                    uVar26 = *(ulong *)((long)unaff_x19 + 0x4dc);
                    uVar72 = *(ulong *)(lVar38 + 0x128);
                    *(ulong *)((long)unaff_x19 + 0x4dc) =
                         uVar72 ^ (uVar72 ^ uVar26) &
                                  CONCAT44(-(uint)((float)(uVar72 >> 0x20) < (float)(uVar26 >> 0x20)
                                                  ),-(uint)((float)uVar72 < (float)uVar26));
                  }
                  if (((int)unaff_x19[0x5b] == 5) &&
                     ((0xd < uVar43 || ((1 << (ulong)(uVar43 & 0x1f) & 0x2c00U) == 0)))) {
                    lVar38 = *(long *)(lVar23 + 0x58);
                    if (lVar38 == 0) goto LAB_0249920c;
                    iVar17 = (int)unaff_x19[0x95] + 1;
                    if (*(int *)(lVar38 + 0x18) < iVar17) {
                      if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      FUN_01147c08((long *)(lVar23 + 0x58),iVar17,1,
                                   *(undefined8 *)
                                    Method_UnityEngine_UIElements_BaseVerticalCollectionView_OnPointerMove__
                                  );
                      lVar23 = *plVar2;
                      if (lVar23 == 0) goto LAB_0249920c;
                    }
                    lVar38 = *(long *)(lVar23 + 0x58);
                    if (lVar38 == 0) goto LAB_0249920c;
                    uVar41 = *(uint *)(unaff_x19 + 0x95);
                    lVar51 = (long)(int)uVar41;
                    uVar50 = *(uint *)(lVar38 + 0x18);
                    if (uVar50 <= uVar41)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    lVar27 = lVar38 + lVar51 * 0x14;
                    fVar61 = *(float *)(lVar27 + 0x30);
                    uVar72 = (ulong)(uint)fVar61;
                    *(undefined4 *)(lVar27 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
                    fVar88 = *(float *)((long)unaff_x19 + 0x4bc);
                    if (fVar61 <= *(float *)((long)unaff_x19 + 0x4bc)) {
                      fVar88 = fVar61;
                    }
                    *(float *)(lVar27 + 0x30) = fVar88;
                    uVar43 = *(uint *)((long)unaff_x19 + 0x48c);
                    if (uVar43 == 0 && uVar41 == 0) {
                      *(uint *)(lVar38 + lVar51 * 0x14 + 0x20) = uVar43;
                    }
                    else {
                      uVar49 = uVar43 - 1;
                      if (0 < (int)uVar43) {
                        lVar23 = *(long *)(lVar23 + 0x38);
                        if (lVar23 == 0) goto LAB_0249920c;
                        if (*(uint *)(lVar23 + 0x18) <= uVar49)
                        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                        if (uVar41 != *(uint *)(lVar23 + (long)(int)uVar49 * 0x178 + 0x68)) {
                          if (uVar41 - 1 < uVar50) {
                            *(uint *)(lVar38 + 0x20 + (long)(int)(uVar41 - 1) * 0x14 + 4) = uVar49;
                            *(uint *)(lVar38 + 0x20 + lVar51 * 0x14) = uVar43;
                            goto LAB_024957b0;
                          }
                          goto 
                          UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                        }
                      }
                      if (uVar43 == uVar22) {
                        *(uint *)(lVar38 + lVar51 * 0x14 + 0x24) = uVar22;
                      }
                    }
                  }
LAB_024957b0:
                  puVar10 = System_Threading_Mutex_TypeInfo;
                  if (((char)unaff_x19[0x5a] != '\0') ||
                     ((*(uint *)(unaff_x19 + 0x5b) < 7 &&
                      ((1 << (ulong)(*(uint *)(unaff_x19 + 0x5b) & 0x1f) & 0x4aU) != 0)))) {
                    if ((uVar18 == 0) &&
                       (((uVar16 != 0x2d && (uVar16 != 0x200b)) && (uVar16 != 0xad)))) {
                      if (*(char *)((long)unaff_x19 + 0x2d2) == '\0') {
LAB_02495868:
                        if (((((0x2bfd < uVar16 - 0xac01) && (0x1d < uVar16 - 0xa961)) &&
                             (0xfd < uVar16 - 0x1101)) ||
                            (uVar26 = FUN_024e95f0(0), (uVar26 & 1) != 0)) &&
                           ((((0xed < uVar16 - 0xff01 && (0x1d < uVar16 - 0xfe31)) &&
                             (0x717d < uVar16 - 0x2e81)) && (0x1fd < uVar16 - 0xf901))))
                        goto LAB_024958f0;
                        lVar23 = FUN_024e94b0(0);
                        if ((lVar23 == 0) || (*(long *)(lVar23 + 0x10) == 0)) goto LAB_0249920c;
                        dVar71 = (double)(ulong)uVar16;
                        uVar26 = FUN_0129aa60(*(long *)(lVar23 + 0x10),&stack0x00000880,
                                              *(undefined8 *)
                                               System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                                             );
                        if ((int)*puVar1 < (int)uVar22) {
                          lVar23 = FUN_024e94b0(0);
                          if (((lVar23 != 0) && (*plVar2 != 0)) &&
                             (lVar38 = *(long *)(*plVar2 + 0x38), lVar38 != 0)) {
                            if (*(uint *)(lVar38 + 0x18) <= *puVar1 + 1)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                            if (*(long *)(lVar23 + 0x18) != 0) {
                              dVar71 = (double)(ulong)*(ushort *)
                                                       (lVar38 + (long)(int)(*puVar1 + 1) * 0x178 +
                                                       0x20);
                              uVar30 = FUN_0129aa60(*(long *)(lVar23 + 0x18),&stack0x00000880,
                                                    *(undefined8 *)
                                                                                                          
                                                  System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                                                  );
                              if ((uVar26 & 1) != 0) goto LAB_02495adc;
                              if ((uVar30 & 1) == 0) goto LAB_02495bc4;
                              if (bVar9 != 0) goto joined_r0x02495af4;
                              goto LAB_024959d4;
                            }
                          }
                          goto LAB_0249920c;
                        }
                        if ((uVar26 & 1) == 0) {
LAB_02495bc4:
                          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          FUN_024d69d4();
                          bVar9 = 0;
                          goto LAB_02495b70;
                        }
LAB_02495adc:
                        if (uVar44 != uVar35 || ((bVar9 ^ 0xff) & 1) != 0) goto LAB_02495b70;
joined_r0x02495af4:
                        if (uVar18 != 0) goto LAB_02495af8;
                      }
                      else {
LAB_024958f0:
                        if (bVar9 == 0) {
LAB_024959d4:
                          bVar9 = 0;
                          goto LAB_02495b70;
                        }
                        if (!(bool)(uVar16 == 0xad & (bVar13 ^ 1U))) goto joined_r0x02495af4;
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
                      if (((uVar16 - 0x2007 < 0x29) &&
                          ((1L << ((ulong)(uVar16 - 0x2007) & 0x3f) & 0x10000000401U) != 0)) ||
                         ((uVar16 == 0xa0 || (uVar16 == 0x2060)))) goto LAB_02495868;
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
                *(undefined1 *)(lVar38 + 0x194) = 1;
                pfVar39 = (float *)((long)unaff_x19 + 0x34c);
                pfVar42 = (float *)(unaff_x19 + 0x69);
                if (bVar7) {
                  lVar23 = *(long *)(lVar23 + 0x50);
                  if (lVar23 == 0) goto LAB_0249920c;
                  if (*(uint *)(lVar23 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                  pfVar42 = (float *)(lVar23 + 0x60);
                  pfVar39 = (float *)(lVar23 + 100);
                }
                fVar84 = *pfVar42;
                fVar62 = *pfVar39;
                fVar60 = *(float *)(unaff_x19 + 0x6b);
                fVar63 = *(float *)(unaff_x19 + 199);
                fStack00000000000000d4 = (fVar87 - fVar84) - fVar62;
                bVar14 = true;
                if ((fVar60 <= fStack00000000000000d4) && (bVar14 = false, !NAN(fVar60))) {
                  bVar14 = fVar60 == -1.0;
                }
                if (!bVar14) {
                  fStack00000000000000d4 = fVar60;
                }
                fVar60 = 0.0;
                if ((char)unaff_x19[0x1d] == '\0') {
                  fVar60 = (float)FUN_026fd474(&stack0x00001770,0);
                  uVar72 = (ulong)*(uint *)(unaff_x19 + 0x9a);
                }
                fVar81 = *(float *)((long)unaff_x19 + 0x4c4);
                fVar65 = *(float *)((long)unaff_x19 + 0x2cc);
                fVar78 = (float)uVar72;
                if (uVar16 != 0xad) {
                  fVar88 = fVar61;
                }
                fVar79 = 0.0;
                if ((0.0 < fVar78) && (fVar79 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
                  fVar79 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
                }
                fVar79 = (*(float *)(unaff_x19 + 0x96) - (fVar81 - fVar78)) + fVar79;
                uVar50 = *puVar1;
                if (fVar79 <= fVar74) {
UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor__get_playHapticsOnHoverExited:
                  unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
                  fVar78 = 1.0 - fVar65;
                  uVar72 = (ulong)(uint)fVar78;
                  fVar60 = ABS(fVar63) + fVar60 * fVar78 * fVar88;
                  fVar88 = _DAT_0294c6e8;
                  if ((uVar41 & 0x18) == 0) {
                    fVar88 = 1.0;
                  }
                  if (fVar60 <= fVar88 * fStack00000000000000d4) {
LAB_02494950:
                    if (uVar16 != 0xad) {
                      if (uVar16 == 9) {
                        lVar23 = *plVar2;
                        if ((lVar23 != 0) && (lVar38 = *(long *)(lVar23 + 0x38), lVar38 != 0)) {
                          uVar50 = *puVar1;
                          if (*(uint *)(lVar38 + 0x18) <= uVar50)
                          goto 
                          UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                          *(undefined1 *)(lVar38 + (long)(int)uVar50 * 0x178 + 0x194) = 0;
                          *(uint *)((long)unaff_x19 + 0x49c) = uVar50;
                          lVar38 = *(long *)(lVar23 + 0x50);
                          if (lVar38 != 0) {
                            if (*(uint *)(unaff_x19 + 0x94) < *(uint *)(lVar38 + 0x18)) {
                              lVar38 = lVar38 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                              *(int *)(lVar38 + 0x2c) = *(int *)(lVar38 + 0x2c) + 1;
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
                          (**(code **)(*unaff_x19 + 0x8b8))(fVar55,fVar66);
                        }
                        if (bVar8) {
                          *(uint *)((long)unaff_x19 + 0x494) = *puVar1;
                        }
                        *(uint *)((long)unaff_x19 + 0x49c) = *puVar1;
                        *(int *)((long)unaff_x19 + 0x4a4) = *(int *)((long)unaff_x19 + 0x4a4) + 1;
                        if ((unaff_x19[0x6c] != 0) &&
                           (lVar23 = *(long *)(unaff_x19[0x6c] + 0x50), lVar23 != 0)) {
                          if (*(uint *)(unaff_x19 + 0x94) < *(uint *)(lVar23 + 0x18)) {
                            lVar23 = lVar23 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                            bVar8 = false;
                            *(float *)(lVar23 + 0x60) = fVar84;
                            *(float *)(lVar23 + 100) = fVar62;
                            goto LAB_02494abc;
                          }
                          goto 
                          UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                        }
                      }
                      goto LAB_0249920c;
                    }
                    if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x38), lVar23 == 0))
                    goto LAB_0249920c;
                    if (*(uint *)(lVar23 + 0x18) <= *puVar1)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    *(undefined1 *)(lVar23 + (long)(int)*puVar1 * 0x178 + 0x194) = 0;
                    goto LAB_02494abc;
                  }
                  if (((char)unaff_x19[0x5a] != '\0') && (uVar50 != *(uint *)(unaff_x19 + 0x92))) {
                    if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar93 = FUN_024d66ec();
                    if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
                      lVar23 = *plVar2;
                      if ((lVar23 == 0) || (lVar38 = *(long *)(lVar23 + 0x38), lVar38 == 0))
                      goto LAB_0249920c;
                      if (*(uint *)(lVar38 + 0x18) <= *puVar1)
                      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                      fVar63 = *(float *)(unaff_x19 + 0x9a);
                      fVar65 = 0.0;
                      if ((0.0 < fVar63) && (fVar65 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')
                         ) {
                        fVar65 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
                      }
                      fVar65 = fVar56 * *(float *)(unaff_x19 + 0x56) +
                               *(float *)(lVar38 + (long)(int)*puVar1 * 0x178 + 0x154) +
                               (fVar65 - *(float *)((long)unaff_x19 + 0x4c4)) +
                               fStack0000000000000054 *
                               (fVar54 + *(float *)((long)unaff_x19 + 0x2b4));
                    }
                    else {
                      lVar23 = unaff_x19[0x6c];
                      *(undefined1 *)((long)unaff_x19 + 700) = 1;
                      if (lVar23 == 0) goto LAB_0249920c;
                      fVar63 = *(float *)(unaff_x19 + 0x9a);
                      fVar65 = *(float *)(unaff_x19 + 0x57) + fVar56 * *(float *)(unaff_x19 + 0x56);
                    }
                    puVar10 = System_Threading_Mutex_TypeInfo;
                    lVar23 = *(long *)(lVar23 + 0x38);
                    if (lVar23 != 0) {
                      uVar43 = *(uint *)((long)unaff_x19 + 0x48c);
                      if ((*(uint *)(lVar23 + 0x18) <= uVar43) ||
                         (uVar49 = uVar43 - 1, *(uint *)(lVar23 + 0x18) <= uVar49))
                      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                      uVar72 = (ulong)(uint)(fVar65 + *(float *)(unaff_x19 + 0x96));
                      fVar78 = (fVar65 + *(float *)(unaff_x19 + 0x96) + fVar63) -
                               *(float *)(lVar23 + (long)(int)uVar43 * 0x178 + 0x158);
                      if ((bVar13 || *(short *)(lVar23 + (long)(int)uVar49 * 0x178 + 0x20) != 0xad)
                         || ((fVar74 <= fVar78 && ((int)unaff_x19[0x5b] != 0)))) {
                        if (*(short *)(lVar23 + (long)(int)uVar43 * 0x178 + 0x20) == 0xad) {
                          bVar13 = true;
                        }
                        else {
                          if ((bVar9 & *(byte *)(unaff_x19 + 0x46)) != 0) {
                            fVar65 = *(float *)((long)unaff_x19 + 0x2cc);
                            fVar63 = *(float *)(unaff_x19 + 0x59) / 100.0;
                            if ((fVar63 <= fVar65) ||
                               ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c))) {
                              fVar65 = *(float *)((long)unaff_x19 + 0x1dc);
                              uVar72 = (ulong)(uint)fVar65;
                              fVar63 = *(float *)(unaff_x19 + 0x49);
                              if ((fVar63 < fVar65) &&
                                 (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
                              goto LAB_02499210;
                              goto LAB_024946c0;
                            }
LAB_024992ac:
                            fVar54 = fVar60;
                            if (0.0 < fVar65) {
                              fVar54 = fVar60 / (1.0 - fVar65);
                            }
                            fVar65 = fVar65 + (fVar60 - fVar88 * (fStack00000000000000d4 +
                                                                 DAT_02958218)) / fVar54;
LAB_0249929c:
                            if (fVar63 <= fVar65) {
                              fVar65 = fVar63;
                            }
                            *(float *)((long)unaff_x19 + 0x2cc) = fVar65;
                            return;
                          }
LAB_024946c0:
                          lVar23 = *(long *)System_Threading_Mutex_TypeInfo;
                          if (*(int *)(lVar23 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                            lVar23 = *(long *)puVar10;
                          }
                          iVar17 = *(int *)(*(long *)(lVar23 + 0xb8) + 0xe78);
                          if ((((float)iVar17 != fStack0000000000000034) && (iVar17 != -1)) &&
                             (bVar9 == 1)) {
                            if (*(int *)(lVar23 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            uVar93 = FUN_024d66ec();
                            if ((unaff_x19[0x6c] == 0) ||
                               (lVar23 = *(long *)(unaff_x19[0x6c] + 0x38), lVar23 == 0))
                            goto LAB_0249920c;
                            uVar49 = *puVar1 - 1;
                            if (*(uint *)(lVar23 + 0x18) <= uVar49)
                            goto 
                            UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                            fStack0000000000000034 = (float)iVar17;
                            if (*(short *)(lVar23 + (long)(int)uVar49 * 0x178 + 0x20) == 0xad) {
                              *puVar1 = uVar49;
                              goto LAB_024947b4;
                            }
                          }
                          if (fVar74 < fVar78) {
                            if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
                              *(undefined4 *)((long)unaff_x19 + 0x2dc) =
                                   *(undefined4 *)((long)unaff_x19 + 0x48c);
                            }
                            unaff_x28 = (long *)StringLiteral_302;
                            unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
                            if ((char)unaff_x19[0x46] != '\0') {
                              fVar63 = *(float *)(unaff_x19 + 0x58);
                              if ((fVar63 < *(float *)((long)unaff_x19 + 0x2b4)) &&
                                 (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                                fVar54 = *(float *)((long)unaff_x19 + 0x2b4) +
                                         ((fVar90 - fVar78) / (float)((int)unaff_x19[0x94] + 1)) /
                                         fStack0000000000000054;
                                if (fVar54 <= fVar63) {
                                  fVar54 = fVar63;
                                }
LAB_024964c8:
                                *(float *)((long)unaff_x19 + 0x2b4) = fVar54;
                                return;
                              }
                              fVar65 = *(float *)((long)unaff_x19 + 0x2cc);
                              fVar63 = *(float *)(unaff_x19 + 0x59) / 100.0;
                              if ((fVar65 < fVar63) &&
                                 (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
                              goto LAB_024992ac;
                              fVar65 = *(float *)((long)unaff_x19 + 0x1dc);
                              uVar72 = (ulong)(uint)fVar65;
                              fVar63 = *(float *)(unaff_x19 + 0x49);
                              if ((fVar63 < fVar65) &&
                                 (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
                              goto LAB_02499210;
                            }
                            switch((int)unaff_x19[0x5b]) {
                            case 0:
                            case 2:
                            case 4:
                              uVar72 = uVar28;
                              FUN_024d7014(fStack0000000000000054,uVar28,fVar56,
                                           *(undefined4 *)((long)unaff_x19 + 0x2f4),fVar77,
                                           fStack00000000000000cc,fStack00000000000000d4,fVar54);
                              break;
                            case 1:
                              lVar23 = *(long *)System_Threading_Mutex_TypeInfo;
                              if (*(int *)(lVar23 + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                                lVar23 = *unaff_x29;
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
                                                                  *(long *)(lVar23 + 0x80) + 0xa0);
                              if (*piVar29 == 0) {
                                bVar13 = false;
                                goto LAB_02495f00;
                              }
                              lVar23 = *unaff_x29;
                              if (*(int *)(lVar23 + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                                lVar23 = *unaff_x29;
                              }
                              FUN_013b8de4(*(long *)(lVar23 + 0xb8) + 0x11f0,&stack0x00000880,
                                           *(undefined8 *)
                                            Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                                          );
                              memcpy(&stack0x00000fe8,&stack0x00000880,0x378);
                              iVar17 = FUN_024d66ec();
                              bVar13 = false;
                              goto LAB_02494364;
                            case 3:
                              if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                              }
                              uVar93 = FUN_024d66ec();
                              bVar13 = false;
                              goto LAB_0249408c;
                            case 5:
                              *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
                              uVar72 = uVar28;
                              FUN_024d7014(fStack0000000000000054,uVar28,fVar56,
                                           *(undefined4 *)((long)unaff_x19 + 0x2f4),fVar77,
                                           fStack00000000000000cc,fStack00000000000000d4,fVar54);
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
                                plVar52 = (long *)unaff_x19[0x5c];
                                uVar32 = (**(code **)(*unaff_x19 + 0x548))();
                                if (plVar52 == (long *)0x0) goto LAB_0249920c;
                                (**(code **)(*plVar52 + 0x558))
                                          (plVar52,uVar32,*(undefined8 *)(*plVar52 + 0x560));
                                lVar23 = unaff_x19[0x5c];
                                if (lVar23 == 0) goto LAB_0249920c;
                                *(int *)(lVar23 + 0x3f8) = (int)unaff_x19[0x7f];
                                FUN_024c910c(lVar23,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
                                plVar52 = (long *)unaff_x19[0x5c];
                                if (plVar52 == (long *)0x0) goto LAB_0249920c;
                                (**(code **)(*plVar52 + 0x7d8))
                                          (plVar52,0,0,*(undefined8 *)(*plVar52 + 0x7e0));
                                *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                              }
                              bVar13 = false;
                              goto LAB_02494484;
                            default:
                              bVar13 = false;
                              goto LAB_02494950;
                            }
                            bVar13 = false;
                            bVar9 = 1;
                            bVar8 = true;
                            goto LAB_024944c4;
                          }
                          uVar72 = uVar28;
                          FUN_024d7014(fStack0000000000000054,uVar28,fVar56,
                                       *(undefined4 *)((long)unaff_x19 + 0x2f4),fVar77,
                                       fStack00000000000000cc,fStack00000000000000d4,fVar54);
                          bVar9 = 1;
                          bVar13 = false;
                          bVar8 = true;
                        }
                      }
                      else {
                        *puVar1 = uVar49;
LAB_024947b4:
                        in_stack_000017a8 = CONCAT44(0x2d,uVar49);
                        uVar93 = uVar93 - 1;
                        bVar13 = false;
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
                    fVar63 = *(float *)(unaff_x19 + 0x59) / 100.0;
                    if (fVar65 < fVar63) {
                      fVar54 = fVar60 / fVar78;
                      if (fVar65 <= 0.0) {
                        fVar54 = fVar60;
                      }
                      fVar65 = fVar65 + (fVar60 - fVar88 * (fStack00000000000000d4 + DAT_02958218))
                                        / fVar54;
                      goto LAB_0249929c;
                    }
                    fVar65 = *(float *)((long)unaff_x19 + 0x1dc);
                    uVar72 = (ulong)(uint)fVar65;
                    fVar63 = *(float *)(unaff_x19 + 0x49);
                    if (fVar65 <= fVar63) goto LAB_02493e34;
LAB_02499210:
                    fVar54 = (fVar65 - *(float *)(unaff_x19 + 0x47)) * 0.5;
                    if (fVar54 <= DAT_028aa298) {
                      fVar54 = DAT_028aa298;
                    }
                    *(float *)((long)unaff_x19 + 0x234) = fVar65;
                    fVar55 = (fVar65 - fVar54) * 20.0 + 0.5;
                    fVar54 = DAT_02958220;
                    if (fVar55 != INFINITY) {
                      fVar54 = (float)(int)fVar55 / 20.0;
                    }
                    if (fVar54 <= fVar63) {
                      fVar54 = fVar63;
                    }
                    goto LAB_02495fd8;
                  }
LAB_02493e34:
                  iVar17 = (int)unaff_x19[0x5b];
                  if (iVar17 == 1) {
                    lVar23 = *(long *)System_Threading_Mutex_TypeInfo;
                    if (*(int *)(lVar23 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                      lVar23 = *unaff_x29;
                    }
                    unaff_x28 = (long *)StringLiteral_302;
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
                    if (*piVar29 == 0) goto LAB_02495f00;
                    lVar23 = *unaff_x29;
                    if (*(int *)(lVar23 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                      lVar23 = *unaff_x29;
                    }
                    FUN_013b8de4(*(long *)(lVar23 + 0xb8) + 0x11f0,&stack0x00000880,
                                 *(undefined8 *)
                                  Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                                );
                    memcpy(&stack0x00000c70,&stack0x00000880,0x378);
                    goto LAB_02494358;
                  }
                  if (iVar17 != 6) {
                    if (iVar17 == 3) {
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
                    plVar52 = (long *)unaff_x19[0x5c];
                    uVar32 = (**(code **)(*unaff_x19 + 0x548))();
                    if (plVar52 == (long *)0x0) goto LAB_0249920c;
                    (**(code **)(*plVar52 + 0x558))
                              (plVar52,uVar32,*(undefined8 *)(*plVar52 + 0x560));
                    lVar23 = unaff_x19[0x5c];
                    if (lVar23 == 0) goto LAB_0249920c;
                    *(int *)(lVar23 + 0x3f8) = (int)unaff_x19[0x7f];
                    FUN_024c910c(lVar23,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
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
                    *(uint *)((long)unaff_x19 + 0x2dc) = uVar50;
                  }
                  unaff_x28 = (long *)StringLiteral_302;
                  unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
                  uVar32 = DAT_02941c08;
                  if ((char)unaff_x19[0x46] != '\0') {
                    fVar76 = *(float *)(unaff_x19 + 0x58);
                    if (((fVar76 < *(float *)((long)unaff_x19 + 0x2b4)) && (0.0 < fVar78)) &&
                       (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                      fVar54 = *(float *)((long)unaff_x19 + 0x2b4) +
                               ((fVar90 - fVar79) / (float)(int)unaff_x19[0x94]) /
                               fStack0000000000000054;
                      if (fVar54 <= fVar76) {
                        fVar54 = fVar76;
                      }
                      goto LAB_024964c8;
                    }
                    fVar79 = *(float *)((long)unaff_x19 + 0x1dc);
                    fVar78 = *(float *)(unaff_x19 + 0x49);
                    uVar72 = (ulong)(uint)fVar78;
                    if ((fVar78 < fVar79) &&
                       (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                      fVar54 = (fVar79 - *(float *)(unaff_x19 + 0x47)) * 0.5;
                      if (fVar54 <= DAT_028aa298) {
                        fVar54 = DAT_028aa298;
                      }
                      fVar55 = (fVar79 - fVar54) * 20.0 + 0.5;
                      fVar54 = DAT_02958220;
                      if (fVar55 != INFINITY) {
                        fVar54 = (float)(int)fVar55 / 20.0;
                      }
                      if (fVar54 <= fVar78) {
                        fVar54 = fVar78;
                      }
                      *(float *)((long)unaff_x19 + 0x234) = fVar79;
                      goto LAB_02495fd8;
                    }
                  }
                  switch((int)unaff_x19[0x5b]) {
                  case 1:
                    lVar23 = *(long *)System_Threading_Mutex_TypeInfo;
                    if (*(int *)(lVar23 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                      lVar23 = *unaff_x29;
                    }
                    lVar38 = *(long *)(lVar23 + 0xb8);
                    lVar23 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
                    if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                      lVar23 = FUN_00d5941c(lVar23);
                    }
                    unaff_x28 = (long *)StringLiteral_302;
                    lVar23 = *(long *)(*(long *)(lVar23 + 0xc0) + 8);
                    if ((*(byte *)(lVar23 + 0x132) & 1) == 0) {
                      lVar23 = FUN_00d5941c();
                    }
                    piVar29 = (int *)thunk_FUN_00d32ed4(lVar38 + 0x11f0,
                                                        *(long *)(lVar23 + 0x80) + 0xa0);
                    if (*piVar29 == 0) {
LAB_02495f00:
                      in_stack_000017a8 = DAT_02941c08;
                      unaff_x26 = (undefined8 *)&stack0x00000880;
                      puVar1[0] = 0;
                      puVar1[1] = 0;
                      uVar93 = 0xffffffff;
                    }
                    else {
                      lVar23 = *unaff_x29;
                      if (*(int *)(lVar23 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                        lVar23 = *unaff_x29;
                      }
                      FUN_013b8de4(*(long *)(lVar23 + 0xb8) + 0x11f0,&stack0x00000880,
                                   *(undefined8 *)
                                    Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                                  );
                      memcpy(&stack0x00001360,&stack0x00000880,0x378);
LAB_02494358:
                      iVar17 = FUN_024d66ec();
LAB_02494364:
                      unaff_x26 = (undefined8 *)&stack0x00000880;
                      iVar53 = *(int *)((long)unaff_x19 + 0x48c) + -1;
                      *(int *)((long)unaff_x19 + 0x48c) = iVar53;
                      in_stack_000017a8 = CONCAT44(0x2026,iVar53);
                      iVar21 = iVar21 + 1;
                      uVar93 = iVar17 - 1;
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
                    if ((uVar50 != 0) && (-1 < (int)uVar93)) {
                      fVar88 = *(float *)(unaff_x19 + 0x98);
                      unaff_x26 = (undefined8 *)&stack0x00000880;
                      if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      uVar93 = FUN_024d66ec();
                      if (fVar88 - fVar81 <= fVar74) {
                        *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
                        *(undefined4 *)(unaff_x19 + 0x92) = *(undefined4 *)((long)unaff_x19 + 0x48c)
                        ;
                        uVar72 = *(ulong *)(*(long *)(*unaff_x29 + 0xb8) + 0x15a8);
                        *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
                        *(undefined4 *)(unaff_x19 + 0x99) = 0;
                        lVar23 = NEON_rev64(uVar72,4);
                        unaff_x19[0x98] = lVar23;
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
                    in_stack_000017a8 = uVar32;
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
                      plVar52 = (long *)unaff_x19[0x5c];
                      uVar32 = (**(code **)(*unaff_x19 + 0x548))();
                      if (plVar52 == (long *)0x0) goto LAB_0249920c;
                      (**(code **)(*plVar52 + 0x558))
                                (plVar52,uVar32,*(undefined8 *)(*plVar52 + 0x560));
                      lVar23 = unaff_x19[0x5c];
                      if (lVar23 == 0) goto LAB_0249920c;
                      *(int *)(lVar23 + 0x3f8) = (int)unaff_x19[0x7f];
                      FUN_024c910c(lVar23,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
                      plVar52 = (long *)unaff_x19[0x5c];
                      if (plVar52 == (long *)0x0) goto LAB_0249920c;
                      (**(code **)(*plVar52 + 0x7d8))(plVar52,0,0,*(undefined8 *)(*plVar52 + 0x7e0))
                      ;
                      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                    }
LAB_0249408c:
                    unaff_x26 = (undefined8 *)&stack0x00000880;
                    in_stack_000017a8 = CONCAT44(3,uVar50);
                  }
                }
LAB_02492630:
                uVar93 = uVar93 + 1;
                lVar23 = unaff_x19[0x8e];
                in_stack_000017bc = uVar16;
                if (lVar23 == 0) goto LAB_0249920c;
                goto LAB_02492378;
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
LAB_02496a50:
  do {
    uVar93 = uVar44 - 1;
    if (*(uint *)(lVar23 + 0x18) <= uVar93)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*plVar2 == 0) || (lVar38 = *(long *)(*plVar2 + 0x50), lVar38 == 0)) goto LAB_0249920c;
    lVar27 = (long)(int)uVar93;
    lVar51 = lVar23 + lVar27 * 0x178;
    uVar35 = *(uint *)(lVar51 + 100);
    if (*(uint *)(lVar38 + 0x18) <= uVar35)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar45 = *(long *)(lVar51 + 0x38);
    uVar5 = *(ushort *)(lVar51 + 0x20);
    lVar47 = (long)(int)uVar35;
    lVar38 = lVar38 + lVar47 * 0x5c;
    uVar41 = *(uint *)(lVar38 + 0x3c);
    iVar19 = *(int *)(lVar38 + 0x28);
    iVar20 = *(int *)(lVar38 + 0x2c);
    uVar43 = *(uint *)(lVar38 + 0x40);
    lVar51 = (long)(int)uVar43;
    uVar50 = *(uint *)(lVar38 + 0x68);
    fVar60 = *(float *)(lVar38 + 0x5c);
    fVar62 = *(float *)(lVar38 + 0x60);
    iVar4 = *(int *)(lVar38 + 0x20);
    fVar75 = *(float *)(lVar38 + 0x4c);
    fVar74 = *(float *)(lVar38 + 0x54);
    fVar87 = *(float *)(lVar38 + 0x58);
    fVar61 = *(float *)(lVar38 + 0x6c);
    fVar88 = *(float *)(lVar38 + 0x70);
    fVar83 = *(float *)(lVar38 + 0x74);
    fVar94 = *(float *)(lVar38 + 0x78);
    fVar84 = fVar60 + fVar62;
    uVar49 = (uint)uVar5;
    if ((int)uVar50 < 9) {
      switch(uVar50) {
      case 1:
        if ((char)unaff_x19[0x1d] == '\0') {
          fStack00000000000000c8 = fVar62 + 0.0;
        }
        else {
          fStack00000000000000c8 = 0.0 - fVar87;
        }
        break;
      case 2:
LAB_02496c1c:
        fStack00000000000000c8 = (fVar62 + fVar60 * 0.5) - fVar87 * 0.5;
        break;
      default:
        goto switchD_02496b58_caseD_3;
      case 4:
        fStack00000000000000c8 = fVar84 - fVar87;
        if ((char)unaff_x19[0x1d] != '\0') {
          fStack00000000000000c8 = fVar84;
        }
        break;
      case 8:
        goto switchD_02496b58_caseD_8;
      }
LAB_02496c90:
      uStack00000000000000c0 = 0;
    }
    else if (uVar50 == 0x10) {
switchD_02496b58_caseD_8:
      if (uVar5 < 0xad) {
        if ((uVar49 != 3) && (uVar49 != 10)) goto LAB_02496bac;
      }
      else if ((uVar49 != 0xad) && ((uVar49 != 0x200b && (uVar49 != 0x2060)))) {
LAB_02496bac:
        if (*(uint *)(lVar23 + 0x18) <= uVar41)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar6 = *(undefined2 *)(lVar23 + (long)(int)uVar41 * 0x178 + 0x20);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar28 = FUN_016f9f84(uVar6,0);
        if ((uVar28 & 1) == 0) {
          bVar15 = (int)uVar35 < (int)unaff_x19[0x94];
        }
        else {
          bVar15 = false;
        }
        if ((fVar87 <= fVar60) && (!bVar15 && (uVar50 >> 4 & 1) == 0)) {
          fStack00000000000000c8 = fVar62;
          if ((char)unaff_x19[0x1d] != '\0') {
            fStack00000000000000c8 = fVar84;
          }
          goto LAB_02496c90;
        }
        if (((uVar44 == 1) || (uVar35 != uVar18)) || (uVar93 == *(uint *)((long)unaff_x19 + 0x31c)))
        {
          fStack00000000000000c8 = fVar62;
          if ((char)unaff_x19[0x1d] != '\0') {
            fStack00000000000000c8 = fVar84;
          }
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uStack0000000000000020 = FUN_016fa418(uVar5,0);
          uStack00000000000000c0 = 0;
        }
        else {
          cVar34 = (char)unaff_x19[0x1d];
          fVar84 = -fVar87;
          if (cVar34 != '\0') {
            fVar84 = fVar87;
          }
          if (*(uint *)(lVar23 + 0x18) <= uVar41)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar87 = 1.0;
          iVar20 = (int)*(char *)(lVar23 + (long)(int)uVar41 * 0x178 + 0x194) +
                   (-iVar4 - (uStack0000000000000020 & 1)) + iVar20 + -1;
          if (0 < iVar20) {
            fVar87 = *(float *)((long)unaff_x19 + 0x2d4);
          }
          if (iVar20 < 1) {
            iVar20 = 1;
          }
          if (uVar49 == 9) {
LAB_02498bb8:
            fVar87 = 1.0 - fVar87;
          }
          else {
            if (uVar49 != 0xa0) {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar28 = FUN_016fa418(uVar5,0);
              cVar34 = (char)unaff_x19[0x1d];
              if ((uVar28 & 1) != 0) goto LAB_02498bb8;
            }
            iVar20 = (iVar4 - (~uStack0000000000000020 & 1)) + iVar19;
          }
          fVar87 = ((fVar60 + fVar84) * fVar87) / (float)iVar20;
          if (cVar34 == '\0') {
            fStack00000000000000c8 = fStack00000000000000c8 + fVar87;
            uStack00000000000000c0 =
                 CONCAT44((float)((ulong)uStack00000000000000c0 >> 0x20) + 0.0,
                          (float)uStack00000000000000c0 + 0.0);
          }
          else {
            fStack00000000000000c8 = fStack00000000000000c8 - fVar87;
          }
        }
      }
    }
    else if (uVar50 == 0x20) {
      fVar87 = fVar61 + fVar83;
      goto LAB_02496c1c;
    }
switchD_02496b58_caseD_3:
    uVar50 = (uint)*(undefined8 *)(lVar23 + 0x18);
    if (uVar50 <= uVar93)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar38 = lVar23 + lVar27 * 0x178;
    fVar84 = fVar55 + fStack00000000000000c8;
    fVar87 = (float)uStack0000000000000090 + (float)uStack00000000000000c0;
    fVar60 = (float)((ulong)uStack0000000000000090 >> 0x20) +
             (float)((ulong)uStack00000000000000c0 >> 0x20);
    if (*(char *)(lVar38 + 0x194) == '\0') goto LAB_02497688;
    iVar19 = *(int *)(lVar23 + lVar27 * 0x178 + 0x2c);
    if (iVar19 != 0) goto LAB_02497374;
    fVar59 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)uVar35,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
    case 0:
      lVar37 = lVar23 + lVar27 * 0x178;
      *(undefined4 *)(lVar37 + 0x84) = 0;
      *(undefined4 *)(lVar37 + 0xac) = 0;
      *(undefined4 *)(lVar37 + 0xd4) = 0x3f800000;
      fVar59 = 1.0;
      break;
    case 1:
      fVar94 = *(float *)(lVar23 + lVar27 * 0x178 + 0x70);
      if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
        lVar37 = lVar23 + lVar27 * 0x178;
        fVar83 = (fStack00000000000000c8 + fVar94) - *(float *)((long)unaff_x19 + 0x4d4);
        fVar94 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4d4);
        goto LAB_02496df8;
      }
      lVar37 = lVar23 + lVar27 * 0x178;
      fVar83 = fVar83 - fVar61;
      *(float *)(lVar37 + 0x84) = fVar59 + (fVar94 - fVar61) / fVar83;
      *(float *)(lVar37 + 0xac) = fVar59 + (*(float *)(lVar37 + 0x98) - fVar61) / fVar83;
      *(float *)(lVar37 + 0xd4) = fVar59 + (*(float *)(lVar37 + 0xc0) - fVar61) / fVar83;
      fVar59 = fVar59 + (*(float *)(lVar37 + 0xe8) - fVar61) / fVar83;
      break;
    case 2:
      lVar37 = lVar23 + lVar27 * 0x178;
      fVar94 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4d4);
      fVar83 = (fStack00000000000000c8 + *(float *)(lVar37 + 0x70)) -
               *(float *)((long)unaff_x19 + 0x4d4);
LAB_02496df8:
      *(float *)(lVar37 + 0x84) = fVar59 + fVar83 / fVar94;
      *(float *)(lVar37 + 0xac) =
           fVar59 + ((fStack00000000000000c8 + *(float *)(lVar37 + 0x98)) -
                    *(float *)((long)unaff_x19 + 0x4d4)) /
                    (*(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4d4));
      *(float *)(lVar37 + 0xd4) =
           fVar59 + ((fStack00000000000000c8 + *(float *)(lVar37 + 0xc0)) -
                    *(float *)((long)unaff_x19 + 0x4d4)) /
                    (*(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4d4));
      fVar59 = fVar59 + ((fStack00000000000000c8 + *(float *)(lVar37 + 0xe8)) -
                        *(float *)((long)unaff_x19 + 0x4d4)) /
                        (*(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4d4));
      break;
    case 3:
      switch((int)unaff_x19[0x61]) {
      case 0:
        lVar37 = lVar23 + lVar27 * 0x178;
        *(undefined4 *)(lVar37 + 0x88) = 0;
        *(undefined4 *)(lVar37 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar37 + 0xd8) = 0;
        *(undefined4 *)(lVar37 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar37 = lVar23 + lVar27 * 0x178;
        fVar94 = fVar94 - fVar88;
        fVar83 = fVar59 + (*(float *)(lVar37 + 0x74) - fVar88) / fVar94;
        fVar94 = fVar59 + (*(float *)(lVar37 + 0x9c) - fVar88) / fVar94;
        *(float *)(lVar37 + 0x88) = fVar83;
        *(float *)(lVar37 + 0xb0) = fVar94;
        *(float *)(lVar37 + 0xd8) = fVar83;
        *(float *)(lVar37 + 0x100) = fVar94;
        break;
      case 2:
        lVar37 = lVar23 + lVar27 * 0x178;
        fVar83 = fVar59 + (*(float *)(lVar37 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                          (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
        *(float *)(lVar37 + 0x88) = fVar83;
        fVar94 = *(float *)(unaff_x19 + 0x9b);
        fVar88 = *(float *)(unaff_x19 + 0x9c);
        *(float *)(lVar37 + 0xd8) = fVar83;
        fVar83 = fVar59 + (*(float *)(lVar37 + 0x9c) - fVar94) / (fVar88 - fVar94);
        *(float *)(lVar37 + 0xb0) = fVar83;
        *(float *)(lVar37 + 0x100) = fVar83;
        break;
      case 3:
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
        uVar50 = (uint)*(undefined8 *)(lVar23 + 0x18);
      }
      if (uVar50 <= uVar93)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar37 = lVar23 + lVar27 * 0x178;
      fVar83 = *(float *)(lVar37 + 0x15c);
      fVar94 = (1.0 - (*(float *)(lVar37 + 0x88) + *(float *)(lVar37 + 0xb0)) * fVar83) * 0.5;
      fVar88 = fVar59 + *(float *)(lVar37 + 0x88) * fVar83 + fVar94;
      fVar59 = fVar59 + fVar94 + *(float *)(lVar37 + 0xb0) * fVar83;
      *(float *)(lVar37 + 0x84) = fVar88;
      *(float *)(lVar37 + 0xac) = fVar88;
      *(float *)(lVar37 + 0xd4) = fVar59;
      break;
    default:
      goto switchD_02496d4c_default;
    }
    *(float *)(lVar23 + lVar27 * 0x178 + 0xfc) = fVar59;
switchD_02496d4c_default:
    switch((int)unaff_x19[0x61]) {
    case 0:
      if (uVar50 <= uVar93)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar37 = lVar23 + lVar27 * 0x178;
      *(undefined4 *)(lVar37 + 0x88) = 0;
      *(undefined4 *)(lVar37 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar37 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar37 + 0x100) = 0;
      break;
    case 1:
      if (uVar93 < uVar50) {
        lVar37 = lVar23 + lVar27 * 0x178;
        fVar75 = fVar75 - fVar74;
        fVar59 = (*(float *)(lVar37 + 0x74) - fVar74) / fVar75;
        fVar75 = (*(float *)(lVar37 + 0x9c) - fVar74) / fVar75;
        *(float *)(lVar37 + 0x88) = fVar59;
        goto LAB_02497174;
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    case 2:
      if (uVar50 <= uVar93)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar37 = lVar23 + lVar27 * 0x178;
      fVar59 = (*(float *)(lVar37 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
      *(float *)(lVar37 + 0x88) = fVar59;
      fVar75 = (*(float *)(lVar37 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
LAB_02497174:
      *(float *)(lVar37 + 0xb0) = fVar75;
      *(float *)(lVar37 + 0xd8) = fVar75;
      *(float *)(lVar37 + 0x100) = fVar59;
      break;
    case 3:
      if (uVar50 <= uVar93)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar37 = lVar23 + lVar27 * 0x178;
      fVar75 = *(float *)(lVar37 + 0x15c);
      fVar83 = (1.0 - (*(float *)(lVar37 + 0x84) + *(float *)(lVar37 + 0xd4)) / fVar75) * 0.5;
      fVar59 = *(float *)(lVar37 + 0x84) / fVar75 + fVar83;
      fVar83 = fVar83 + *(float *)(lVar37 + 0xd4) / fVar75;
      *(float *)(lVar37 + 0x88) = fVar59;
      *(float *)(lVar37 + 0xb0) = fVar83;
      *(float *)(lVar37 + 0x100) = fVar59;
      *(float *)(lVar37 + 0xd8) = fVar83;
    }
    if (uVar50 <= uVar93)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar37 = lVar23 + lVar27 * 0x178;
    fVar59 = *(float *)(lVar37 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
    if ((*(char *)(lVar37 + 0x5c) == '\0') && ((*(byte *)(lVar23 + lVar27 * 0x178 + 400) & 1) != 0))
    {
      fVar59 = -fVar59;
    }
    fVar83 = fVar54;
    if (((iVar17 == 2) || (fVar83 = fVar90, iVar17 == 1)) || (fVar83 = fVar54 / fVar56, iVar17 == 0)
       ) {
      fVar59 = fVar83 * fVar59;
    }
    lVar37 = lVar23 + lVar27 * 0x178;
    fVar75 = *(float *)(lVar37 + 0x88);
    fVar94 = *(float *)(lVar37 + 0x84);
    fVar83 = -2.1474836e+09;
    if (fVar94 != INFINITY) {
      fVar83 = (float)(int)fVar94;
    }
    fVar88 = *(float *)(lVar37 + 0xd4);
    fVar61 = *(float *)(lVar37 + 0xd8);
    fVar74 = -2.1474836e+09;
    if (fVar75 != INFINITY) {
      fVar74 = (float)(int)fVar75;
    }
    uVar92 = FUN_024e0374(fVar94 - fVar83,fVar75 - fVar74);
    *(undefined4 *)(lVar37 + 0x84) = uVar92;
    if (*(uint *)(lVar23 + 0x18) <= uVar93)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar61 = fVar61 - fVar74;
    *(float *)(lVar37 + 0x88) = fVar59;
    uVar92 = FUN_024e0374(fVar94 - fVar83,fVar61);
    *(undefined4 *)(lVar23 + lVar27 * 0x178 + 0xac) = uVar92;
    if (*(uint *)(lVar23 + 0x18) <= uVar93)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar88 = fVar88 - fVar83;
    *(float *)(lVar23 + lVar27 * 0x178 + 0xb0) = fVar59;
    fVar83 = (float)FUN_024e0374(fVar88,fVar61);
    *(float *)(lVar37 + 0xd4) = fVar83;
    if (*(uint *)(lVar23 + 0x18) <= uVar93)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar37 + 0xd8) = fVar59;
    uVar92 = FUN_024e0374(fVar88,fVar75 - fVar74);
    *(undefined4 *)(lVar23 + lVar27 * 0x178 + 0xfc) = uVar92;
    uVar50 = (uint)*(undefined8 *)(lVar23 + 0x18);
    if (uVar50 <= uVar93)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar23 + lVar27 * 0x178 + 0x100) = fVar59;
LAB_02497374:
    if (((int)unaff_x19[100] <= (int)uVar93) ||
       (*(int *)((long)unaff_x19 + 0x324) <= iStack00000000000000ac)) goto LAB_02497490;
    if (((int)uVar35 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] != 5)) {
      if (uVar50 <= uVar93)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar38 = lVar23 + lVar27 * 0x178;
      *(ulong *)(lVar38 + 0x70) =
           CONCAT44(fVar87 + (float)((ulong)*(undefined8 *)(lVar38 + 0x70) >> 0x20),
                    fVar84 + (float)*(undefined8 *)(lVar38 + 0x70));
      *(float *)(lVar38 + 0x78) = fVar60 + *(float *)(lVar38 + 0x78);
      if (*(uint *)(lVar23 + 0x18) <= uVar93)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar38 = lVar23 + lVar27 * 0x178;
      *(ulong *)(lVar38 + 0x98) =
           CONCAT44(fVar87 + (float)((ulong)*(undefined8 *)(lVar38 + 0x98) >> 0x20),
                    fVar84 + (float)*(undefined8 *)(lVar38 + 0x98));
      *(float *)(lVar38 + 0xa0) = fVar60 + *(float *)(lVar38 + 0xa0);
      if (*(uint *)(lVar23 + 0x18) <= uVar93)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar38 = lVar23 + lVar27 * 0x178;
      *(ulong *)(lVar38 + 0xc0) =
           CONCAT44(fVar87 + (float)((ulong)*(undefined8 *)(lVar38 + 0xc0) >> 0x20),
                    fVar84 + (float)*(undefined8 *)(lVar38 + 0xc0));
      *(float *)(lVar38 + 200) = fVar60 + *(float *)(lVar38 + 200);
      if (*(uint *)(lVar23 + 0x18) <= uVar93)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar38 = lVar23 + lVar27 * 0x178;
      *(ulong *)(lVar38 + 0xe8) =
           CONCAT44(fVar87 + (float)((ulong)*(undefined8 *)(lVar38 + 0xe8) >> 0x20),
                    fVar84 + (float)*(undefined8 *)(lVar38 + 0xe8));
      *(float *)(lVar38 + 0xf0) = fVar60 + *(float *)(lVar38 + 0xf0);
      if (iVar19 != 0) goto LAB_02497598;
LAB_02497668:
      pcVar40 = *(code **)(*unaff_x19 + 0x8d8);
LAB_02497674:
      (*pcVar40)();
    }
    else {
      if (((int)uVar35 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] == 5)) {
        if (uVar50 <= uVar93)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (*(uint *)(lVar23 + lVar27 * 0x178 + 0x68) != uVar3) goto LAB_02497490;
        lVar38 = lVar23 + lVar27 * 0x178;
        *(ulong *)(lVar38 + 0x70) =
             CONCAT44(fVar87 + (float)((ulong)*(undefined8 *)(lVar38 + 0x70) >> 0x20),
                      fVar84 + (float)*(undefined8 *)(lVar38 + 0x70));
        *(float *)(lVar38 + 0x78) = fVar60 + *(float *)(lVar38 + 0x78);
        if (*(uint *)(lVar23 + 0x18) <= uVar93)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar38 = lVar23 + lVar27 * 0x178;
        *(ulong *)(lVar38 + 0x98) =
             CONCAT44(fVar87 + (float)((ulong)*(undefined8 *)(lVar38 + 0x98) >> 0x20),
                      fVar84 + (float)*(undefined8 *)(lVar38 + 0x98));
        *(float *)(lVar38 + 0xa0) = fVar60 + *(float *)(lVar38 + 0xa0);
        if (*(uint *)(lVar23 + 0x18) <= uVar93)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar38 = lVar23 + lVar27 * 0x178;
        *(ulong *)(lVar38 + 0xc0) =
             CONCAT44(fVar87 + (float)((ulong)*(undefined8 *)(lVar38 + 0xc0) >> 0x20),
                      fVar84 + (float)*(undefined8 *)(lVar38 + 0xc0));
        *(float *)(lVar38 + 200) = fVar60 + *(float *)(lVar38 + 200);
        if (*(uint *)(lVar23 + 0x18) <= uVar93)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar38 = lVar23 + lVar27 * 0x178;
        *(ulong *)(lVar38 + 0xe8) =
             CONCAT44(fVar87 + (float)((ulong)*(undefined8 *)(lVar38 + 0xe8) >> 0x20),
                      fVar84 + (float)*(undefined8 *)(lVar38 + 0xe8));
        *(float *)(lVar38 + 0xf0) = fVar60 + *(float *)(lVar38 + 0xf0);
      }
      else {
LAB_02497490:
        if (uVar50 <= uVar93)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        puVar10 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
        lVar37 = lVar23 + lVar27 * 0x178;
        uVar92 = *(undefined4 *)
                  (*(undefined8 **)
                    (*(long *)
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                    + 0xb8) + 1);
        *(undefined8 *)(lVar37 + 0x70) =
             **(undefined8 **)
               (*(long *)
                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
               0xb8);
        *(undefined4 *)(lVar37 + 0x78) = uVar92;
        if (*(uint *)(lVar23 + 0x18) <= uVar93)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar37 = lVar23 + lVar27 * 0x178;
        uVar92 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar10 + 0xb8) + 1);
        *(undefined8 *)(lVar37 + 0x98) = **(undefined8 **)(*(long *)puVar10 + 0xb8);
        *(undefined4 *)(lVar37 + 0xa0) = uVar92;
        if (*(uint *)(lVar23 + 0x18) <= uVar93)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar37 = lVar23 + lVar27 * 0x178;
        uVar92 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar10 + 0xb8) + 1);
        *(undefined8 *)(lVar37 + 0xc0) = **(undefined8 **)(*(long *)puVar10 + 0xb8);
        *(undefined4 *)(lVar37 + 200) = uVar92;
        if (*(uint *)(lVar23 + 0x18) <= uVar93)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar37 = lVar23 + lVar27 * 0x178;
        uVar92 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar10 + 0xb8) + 1);
        *(undefined8 *)(lVar37 + 0xe8) = **(undefined8 **)(*(long *)puVar10 + 0xb8);
        *(undefined4 *)(lVar37 + 0xf0) = uVar92;
        if (*(uint *)(lVar23 + 0x18) <= uVar93)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        *(undefined1 *)(lVar38 + 0x194) = 0;
      }
      if (iVar19 == 0) goto LAB_02497668;
LAB_02497598:
      if (iVar19 == 1) {
        pcVar40 = *(code **)(*unaff_x19 + 0x8f8);
        goto LAB_02497674;
      }
    }
LAB_02497688:
    if ((*plVar2 == 0) || (lVar38 = *(long *)(*plVar2 + 0x38), lVar38 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar38 + 0x18) <= uVar93)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar38 = lVar38 + lVar27 * 0x178;
    uVar32 = *(undefined8 *)(lVar38 + 0x11c);
    *(undefined8 *)(lVar38 + 0x11c) =
         CONCAT44(fVar87 + (float)((ulong)uVar32 >> 0x20),fVar84 + (float)uVar32);
    *(float *)(lVar38 + 0x124) = fVar60 + *(float *)(lVar38 + 0x124);
    if ((*plVar2 == 0) || (lVar38 = *(long *)(*plVar2 + 0x38), lVar38 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar38 + 0x18) <= uVar93)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar38 = lVar38 + lVar27 * 0x178;
    *(ulong *)(lVar38 + 0x110) =
         CONCAT44(fVar87 + (float)((ulong)*(undefined8 *)(lVar38 + 0x110) >> 0x20),
                  fVar84 + (float)*(undefined8 *)(lVar38 + 0x110));
    *(float *)(lVar38 + 0x118) = fVar60 + *(float *)(lVar38 + 0x118);
    if ((*plVar2 == 0) || (lVar38 = *(long *)(*plVar2 + 0x38), lVar38 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar38 + 0x18) <= uVar93)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar38 = lVar38 + lVar27 * 0x178;
    *(ulong *)(lVar38 + 0x128) =
         CONCAT44(fVar87 + (float)((ulong)*(undefined8 *)(lVar38 + 0x128) >> 0x20),
                  fVar84 + (float)*(undefined8 *)(lVar38 + 0x128));
    *(float *)(lVar38 + 0x130) = fVar60 + *(float *)(lVar38 + 0x130);
    if ((*plVar2 == 0) || (lVar38 = *(long *)(*plVar2 + 0x38), lVar38 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar38 + 0x18) <= uVar93)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar38 = lVar38 + lVar27 * 0x178;
    *(float *)(lVar38 + 0x134) = fVar84 + *(float *)(lVar38 + 0x134);
    *(ulong *)(lVar38 + 0x138) =
         CONCAT44(fVar60 + (float)((ulong)*(undefined8 *)(lVar38 + 0x138) >> 0x20),
                  fVar87 + (float)*(undefined8 *)(lVar38 + 0x138));
    lVar38 = *plVar2;
    if ((lVar38 == 0) || (lVar37 = *(long *)(lVar38 + 0x38), lVar37 == 0)) goto LAB_0249920c;
    uVar50 = *(uint *)(lVar37 + 0x18);
    if (uVar50 <= uVar93)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar46 = lVar37 + lVar27 * 0x178;
    uVar72 = CONCAT44(fVar84 + (float)((ulong)*(undefined8 *)(lVar46 + 0x140) >> 0x20),
                      fVar84 + (float)*(undefined8 *)(lVar46 + 0x140));
    fVar83 = fVar87 + *(float *)(lVar46 + 0x150);
    uVar26 = (ulong)(uint)fVar83;
    uVar30 = CONCAT44(fVar87 + (float)((ulong)*(undefined8 *)(lVar46 + 0x148) >> 0x20),
                      fVar87 + (float)*(undefined8 *)(lVar46 + 0x148));
    *(ulong *)(lVar46 + 0x140) = uVar72;
    *(ulong *)(lVar46 + 0x148) = uVar30;
    *(float *)(lVar46 + 0x150) = fVar83;
    if (uVar35 == uVar18) {
      uVar18 = *puVar1 - 1;
      if (uVar93 == uVar18) goto LAB_0249788c;
    }
    else {
      lVar38 = *(long *)(lVar38 + 0x50);
      if (lVar38 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar38 + 0x18) <= uVar18)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar46 = (long)(int)uVar18;
      lVar48 = lVar38 + lVar46 * 0x5c;
      uVar30 = (ulong)(uint)*(float *)(lVar48 + 0x58);
      fVar83 = fVar87 + *(float *)(lVar48 + 0x54);
      uVar72 = (ulong)(uint)fVar83;
      fVar75 = fVar84 + *(float *)(lVar48 + 0x58);
      uVar26 = (ulong)(uint)fVar75;
      *(ulong *)(lVar48 + 0x4c) =
           CONCAT44(fVar87 + (float)((ulong)*(undefined8 *)(lVar48 + 0x4c) >> 0x20),
                    fVar87 + (float)*(undefined8 *)(lVar48 + 0x4c));
      *(float *)(lVar48 + 0x54) = fVar83;
      *(float *)(lVar48 + 0x58) = fVar75;
      if (uVar50 <= *(uint *)(lVar48 + 0x34))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      uVar92 = *(undefined4 *)(lVar37 + (long)(int)*(uint *)(lVar48 + 0x34) * 0x178 + 0x11c);
      lVar38 = lVar38 + lVar46 * 0x5c;
      *(float *)(lVar38 + 0x70) = fVar83;
      *(undefined4 *)(lVar38 + 0x6c) = uVar92;
      lVar38 = *plVar2;
      if ((lVar38 == 0) || (lVar37 = *(long *)(lVar38 + 0x50), lVar37 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar37 + 0x18) <= uVar18)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar38 = *(long *)(lVar38 + 0x38);
      if (lVar38 == 0) goto LAB_0249920c;
      uVar18 = *(uint *)(lVar37 + lVar46 * 0x5c + 0x40);
      if (*(uint *)(lVar38 + 0x18) <= uVar18)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar37 = lVar37 + lVar46 * 0x5c;
      *(undefined4 *)(lVar37 + 0x74) = *(undefined4 *)(lVar38 + (long)(int)uVar18 * 0x178 + 0x128);
      *(undefined4 *)(lVar37 + 0x78) = *(undefined4 *)(lVar37 + 0x4c);
      uVar18 = *puVar1 - 1;
LAB_0249788c:
      if (uVar93 == uVar18) {
        lVar38 = *plVar2;
        if ((lVar38 == 0) || (lVar37 = *(long *)(lVar38 + 0x50), lVar37 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar37 + 0x18) <= uVar35)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar46 = lVar37 + lVar47 * 0x5c;
        uVar30 = (ulong)(uint)*(float *)(lVar46 + 0x58);
        uVar72 = CONCAT44(fVar87 + (float)((ulong)*(undefined8 *)(lVar46 + 0x4c) >> 0x20),
                          fVar87 + (float)*(undefined8 *)(lVar46 + 0x4c));
        fVar83 = fVar87 + *(float *)(lVar46 + 0x54);
        fVar84 = fVar84 + *(float *)(lVar46 + 0x58);
        uVar26 = (ulong)(uint)fVar84;
        *(ulong *)(lVar46 + 0x4c) = uVar72;
        *(float *)(lVar46 + 0x54) = fVar83;
        *(float *)(lVar46 + 0x58) = fVar84;
        lVar38 = *(long *)(lVar38 + 0x38);
        if (lVar38 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar38 + 0x18) <= *(uint *)(lVar46 + 0x34))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar92 = *(undefined4 *)(lVar38 + (long)(int)*(uint *)(lVar46 + 0x34) * 0x178 + 0x11c);
        lVar37 = lVar37 + lVar47 * 0x5c;
        *(float *)(lVar37 + 0x70) = fVar83;
        *(undefined4 *)(lVar37 + 0x6c) = uVar92;
        lVar38 = *plVar2;
        if ((lVar38 == 0) || (lVar37 = *(long *)(lVar38 + 0x50), lVar37 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar37 + 0x18) <= uVar35)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar38 = *(long *)(lVar38 + 0x38);
        if (lVar38 == 0) goto LAB_0249920c;
        uVar18 = *(uint *)(lVar37 + lVar47 * 0x5c + 0x40);
        if (*(uint *)(lVar38 + 0x18) <= uVar18)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar37 = lVar37 + lVar47 * 0x5c;
        *(undefined4 *)(lVar37 + 0x74) = *(undefined4 *)(lVar38 + (long)(int)uVar18 * 0x178 + 0x128)
        ;
        *(undefined4 *)(lVar37 + 0x78) = *(undefined4 *)(lVar37 + 0x4c);
      }
    }
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar28 = FUN_016f9468(uVar49,0);
    if (((((uVar28 & 1) == 0) && (1 < uVar49 - 0x2010)) && (uVar49 != 0xad)) && (uVar49 != 0x2d)) {
      if (bVar8) {
        if (((uVar44 != 1) && ((int)uVar93 < (int)(*(uint *)(lVar23 + 0x18) - 1))) &&
           (((int)uVar93 < (int)*puVar1 && ((uVar49 == 0x2019 || (uVar49 == 0x27)))))) {
          if (*(uint *)(lVar23 + 0x18) <= uVar44 - 2)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar6 = *(undefined2 *)(lVar23 + lVar24 + -0x438);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar28 = FUN_016f9468(uVar6,0);
          if ((uVar28 & 1) != 0) {
            if (*(uint *)(lVar23 + 0x18) <= uVar44)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            uVar6 = *(undefined2 *)(lVar23 + lVar24 + -0x148);
            if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar28 = FUN_016f9468(uVar6,0);
            if ((uVar28 & 1) != 0) goto LAB_02497aa4;
          }
        }
      }
      else {
        if (uVar44 != 1) {
LAB_024985a0:
          bVar8 = false;
          goto LAB_02497aac;
        }
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar28 = FUN_016f93a0(uVar49,0);
        if ((uVar28 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar28 = FUN_016f68bc(uVar49,0);
          if (((uVar49 != 0x200b) && ((uVar28 & 1) == 0)) && (*puVar1 != 1)) goto LAB_024985a0;
        }
      }
      if (uVar93 == *puVar1 - 1) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar28 = FUN_016f9468(uVar49,0);
        iVar19 = iVar53;
        if ((uVar28 & 1) == 0) goto LAB_02497de0;
      }
      else {
LAB_02497de0:
        iVar19 = uVar44 - 2;
      }
      lVar38 = *plVar2;
      if (lVar38 == 0) goto LAB_0249920c;
      lVar37 = *(long *)(lVar38 + 0x40);
      if (lVar37 == 0) goto LAB_0249920c;
      uVar18 = *(uint *)(lVar38 + 0x24);
      iVar20 = *(int *)(lVar37 + 0x18);
      if (iVar20 < (int)(uVar18 + 1)) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147b84((long *)(lVar38 + 0x40),iVar20 + 1,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
        lVar38 = *plVar2;
        if (lVar38 == 0) goto LAB_0249920c;
      }
      lVar37 = *(long *)(lVar38 + 0x40);
      if (lVar37 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar37 + 0x18) <= uVar18)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar37 = lVar37 + (long)(int)uVar18 * 0x18;
      *(uint *)(lVar37 + 0x28) = uVar16;
      *(int *)(lVar37 + 0x2c) = iVar19;
      *(uint *)(lVar37 + 0x30) = (iVar19 - uVar16) + 1;
      *(long **)(lVar37 + 0x20) = unaff_x19;
      lVar37 = *(long *)(lVar38 + 0x50);
      *(int *)(lVar38 + 0x24) = *(int *)(lVar38 + 0x24) + 1;
      if (lVar37 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar37 + 0x18) <= uVar35)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar37 = lVar37 + lVar47 * 0x5c;
      bVar8 = false;
      iStack00000000000000ac = iStack00000000000000ac + 1;
      *(int *)(lVar37 + 0x30) = *(int *)(lVar37 + 0x30) + 1;
    }
    else {
      if (!bVar8) {
        uVar16 = uVar93;
      }
      if (uVar93 == *puVar1 - 1) {
        lVar38 = *plVar2;
        if (lVar38 == 0) goto LAB_0249920c;
        lVar37 = *(long *)(lVar38 + 0x40);
        if (lVar37 == 0) goto LAB_0249920c;
        uVar18 = *(uint *)(lVar38 + 0x24);
        iVar19 = *(int *)(lVar37 + 0x18);
        if (iVar19 < (int)(uVar18 + 1)) {
          if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01147b84((long *)(lVar38 + 0x40),iVar19 + 1,
                       *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
          lVar38 = *plVar2;
          if (lVar38 == 0) goto LAB_0249920c;
        }
        lVar37 = *(long *)(lVar38 + 0x40);
        if (lVar37 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar37 + 0x18) <= uVar18)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar37 = lVar37 + (long)(int)uVar18 * 0x18;
        *(uint *)(lVar37 + 0x28) = uVar16;
        *(uint *)(lVar37 + 0x2c) = uVar93;
        *(long **)(lVar37 + 0x20) = unaff_x19;
        *(uint *)(lVar37 + 0x30) = uVar44 - uVar16;
        lVar37 = *(long *)(lVar38 + 0x50);
        *(int *)(lVar38 + 0x24) = *(int *)(lVar38 + 0x24) + 1;
        if (lVar37 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar37 + 0x18) <= uVar35)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar37 = lVar37 + lVar47 * 0x5c;
        iStack00000000000000ac = iStack00000000000000ac + 1;
        *(int *)(lVar37 + 0x30) = *(int *)(lVar37 + 0x30) + 1;
      }
LAB_02497aa4:
      bVar8 = true;
    }
LAB_02497aac:
    if ((*plVar2 == 0) || (lVar38 = *(long *)(*plVar2 + 0x38), lVar38 == 0)) goto LAB_0249920c;
    uVar18 = *(uint *)(lVar38 + 0x18);
    if (uVar18 <= uVar93)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar38 + lVar27 * 0x178 + 400) >> 2 & 1) == 0) {
      if (bVar13) {
LAB_02497adc:
        if (uVar18 <= uVar44 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar47 = *unaff_x19;
        uVar18 = *(uint *)(lVar38 + lVar24 + -0x330);
        uVar92 = *(undefined4 *)(lVar38 + lVar24 + -0x2f8);
LAB_0249805c:
        pcVar40 = *(code **)(lVar47 + 0x908);
LAB_02498064:
        uVar30 = (ulong)uVar18;
        uVar72 = (ulong)(uint)fStack0000000000000050;
        uVar26 = (ulong)(uint)fStack0000000000000054;
        (*pcVar40)(fStack0000000000000058,uVar72,uVar26,uVar30,fStack00000000000000d0,0,
                   fStack000000000000005c,uVar92);
        puVar10 = System_Threading_Mutex_TypeInfo;
        lVar38 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar38 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar38 = *(long *)puVar10;
        }
LAB_024980b4:
        bVar13 = false;
        fVar58 = 0.0;
        fStack00000000000000d0 = *(float *)(*(long *)(lVar38 + 0xb8) + 0x15a8);
        fStack00000000000000cc = 0.0;
      }
      else {
LAB_02497fc4:
        bVar13 = false;
      }
    }
    else {
      lVar38 = lVar38 + lVar27 * 0x178;
      iVar19 = *(int *)(lVar38 + 0x68);
      *(int *)(lVar38 + 0x16c) = iVar21;
      if ((((int)unaff_x19[100] < (int)uVar93) || ((int)unaff_x19[0x65] < (int)uVar35)) ||
         (((int)unaff_x19[0x5b] == 5 && (iVar19 + 1 != (int)unaff_x19[0x66])))) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar28 = FUN_016f68bc(uVar49,0);
      if ((uVar49 != 0x200b) && ((uVar28 & 1) == 0)) {
        lVar38 = *plVar2;
        if ((lVar38 == 0) || (lVar47 = *(long *)(lVar38 + 0x38), lVar47 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar47 + 0x18) <= uVar93)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar83 = *(float *)(lVar47 + lVar27 * 0x178 + 0x160);
        if (fVar58 <= fVar83) {
          fVar58 = fVar83;
        }
        if (fStack00000000000000cc <= ABS(fVar59)) {
          fStack00000000000000cc = ABS(fVar59);
        }
        if (iVar19 != iStack000000000000004c) {
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar38 = *plVar2;
            if (lVar38 == 0) goto LAB_0249920c;
            lVar47 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          else {
            lVar47 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          fStack00000000000000d0 = *(float *)(lVar47 + 0x15a8);
        }
        lVar38 = *(long *)(lVar38 + 0x38);
        if (lVar38 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar38 + 0x18) <= uVar93)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (unaff_x19[0x1e] == 0) goto LAB_0249920c;
        fVar75 = *(float *)(lVar38 + lVar27 * 0x178 + 0x14c);
        fVar83 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
        fVar75 = fVar75 + fVar58 * fVar83;
        if (fVar75 <= fStack00000000000000d0) {
          fStack00000000000000d0 = fVar75;
        }
        uVar72 = (ulong)(uint)fStack00000000000000d0;
        iStack000000000000004c = iVar19;
      }
      if (!bVar13) {
        bVar13 = false;
        if ((((uVar49 == 0xd) || ((uVar49 | 1) == 0xb)) || ((int)uVar43 < (int)uVar93)) ||
           ((bool)(bVar15 ^ 1))) goto LAB_024980d0;
        if (uVar93 == uVar43) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar28 = FUN_016fa418(uVar49,0);
          if ((uVar28 & 1) != 0) goto LAB_02497fc4;
        }
        if ((*plVar2 == 0) || (lVar38 = *(long *)(*plVar2 + 0x38), lVar38 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar38 + 0x18) <= uVar93)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar38 = lVar38 + lVar27 * 0x178;
        fStack000000000000005c = *(float *)(lVar38 + 0x160);
        fStack0000000000000058 = *(float *)(lVar38 + 0x11c);
        bVar13 = fVar58 != 0.0;
        fVar83 = fStack000000000000005c;
        if (bVar13) {
          fVar83 = fVar58;
        }
        fVar58 = fVar83;
        uVar22 = *(uint *)(lVar38 + 0x168);
        fStack0000000000000054 = 0.0;
        fVar83 = fVar59;
        if (bVar13) {
          fVar83 = fStack00000000000000cc;
        }
        uVar72 = (ulong)(uint)fVar83;
        fStack0000000000000050 = fStack00000000000000d0;
        fStack00000000000000cc = fVar83;
      }
      if (*puVar1 == 1) {
        if ((*plVar2 != 0) && (lVar38 = *(long *)(*plVar2 + 0x38), lVar38 != 0)) {
          if (uVar93 < *(uint *)(lVar38 + 0x18)) {
            lVar38 = lVar38 + lVar27 * 0x178;
            lVar47 = *unaff_x19;
            uVar18 = *(uint *)(lVar38 + 0x128);
            uVar92 = *(undefined4 *)(lVar38 + 0x160);
            goto LAB_0249805c;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      if ((uVar93 == uVar41) || ((int)uVar43 <= (int)uVar93)) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar28 = FUN_016f68bc(uVar49,0);
        if ((*plVar2 != 0) && (lVar38 = *(long *)(*plVar2 + 0x38), lVar38 != 0)) {
          if (uVar49 == 0x200b || (uVar28 & 1) != 0) {
            lVar47 = lVar51;
            if (*(uint *)(lVar38 + 0x18) <= uVar43)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          else {
            lVar47 = lVar27;
            if (*(uint *)(lVar38 + 0x18) <= uVar93)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          lVar38 = lVar38 + lVar47 * 0x178;
          uVar18 = *(uint *)(lVar38 + 0x128);
          uVar92 = *(undefined4 *)(lVar38 + 0x160);
          pcVar40 = *(code **)(*unaff_x19 + 0x908);
          goto LAB_02498064;
        }
        goto LAB_0249920c;
      }
      if (!bVar15) {
        if ((*plVar2 != 0) && (lVar38 = *(long *)(*plVar2 + 0x38), lVar38 != 0)) {
          uVar18 = *(uint *)(lVar38 + 0x18);
          goto LAB_02497adc;
        }
        goto LAB_0249920c;
      }
      if ((int)uVar93 < (int)(*puVar1 - 1)) {
        if ((*plVar2 == 0) || (lVar38 = *(long *)(*plVar2 + 0x38), lVar38 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar38 + 0x18) <= uVar44)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar28 = FUN_024a9e4c(uVar22,*(undefined4 *)(lVar38 + lVar24),0);
        if ((uVar28 & 1) == 0) {
          if ((*plVar2 != 0) && (lVar38 = *(long *)(*plVar2 + 0x38), lVar38 != 0)) {
            if (uVar93 < *(uint *)(lVar38 + 0x18)) {
              lVar38 = lVar38 + lVar27 * 0x178;
              uVar30 = (ulong)*(uint *)(lVar38 + 0x128);
              uVar26 = (ulong)(uint)fStack0000000000000054;
              uVar72 = (ulong)(uint)fStack0000000000000050;
              (**(code **)(*unaff_x19 + 0x908))
                        (fStack0000000000000058,uVar72,uVar26,uVar30,fStack00000000000000d0,0,
                         fStack000000000000005c,*(undefined4 *)(lVar38 + 0x160));
              puVar10 = System_Threading_Mutex_TypeInfo;
              lVar38 = *(long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(lVar38 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar38 = *(long *)puVar10;
              }
              goto LAB_024980b4;
            }
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          goto LAB_0249920c;
        }
      }
      bVar13 = true;
    }
LAB_024980d0:
    if ((*plVar2 == 0) || (lVar38 = *(long *)(*plVar2 + 0x38), lVar38 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar38 + 0x18) <= uVar93)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if (lVar45 == 0) goto LAB_0249920c;
    uVar18 = *(uint *)(lVar38 + lVar27 * 0x178 + 400);
    fVar83 = (float)FUN_026fd1f0(lVar45 + 0x50,0);
    if ((uVar18 >> 6 & 1) == 0) {
      if (bVar7) {
        if ((*plVar2 == 0) || (lVar38 = *(long *)(*plVar2 + 0x38), lVar38 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar38 + 0x18) <= uVar44 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar18 = *(uint *)(lVar38 + lVar24 + -0x330);
        pcVar40 = *(code **)(*unaff_x19 + 0x908);
        fVar87 = fVar57 * fVar83 + *(float *)(lVar38 + lVar24 + -0x30c);
LAB_02498648:
        uVar30 = (ulong)uVar18;
        uVar72 = (ulong)(uint)fStack000000000000007c;
        uVar26 = (ulong)uStack000000000000006c;
        (*pcVar40)(fStack0000000000000080,uVar72,uVar26,uVar30,fVar87,0,fVar57,fVar57);
      }
LAB_0249867c:
      bVar7 = false;
    }
    else {
      lVar38 = *plVar2;
      if ((lVar38 == 0) || (lVar47 = *(long *)(lVar38 + 0x38), lVar47 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar47 + 0x18) <= uVar93)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      *(int *)(lVar47 + lVar27 * 0x178 + 0x174) = iVar21;
      if ((((int)unaff_x19[100] < (int)uVar93) || ((int)unaff_x19[0x65] < (int)uVar35)) ||
         (((int)unaff_x19[0x5b] == 5 &&
          (*(int *)(lVar47 + lVar27 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
      if ((((uVar49 == 0xd) || ((uVar49 | 1) == 0xb)) || ((int)uVar43 < (int)uVar93)) ||
         (bVar7 || !bVar15)) {
LAB_02498228:
        if (!bVar7) goto LAB_0249867c;
      }
      else {
        if (uVar93 == uVar43) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar28 = FUN_016fa418(uVar49,0);
          if ((uVar28 & 1) != 0) goto LAB_02498228;
          lVar38 = *plVar2;
          if (lVar38 == 0) goto LAB_0249920c;
        }
        lVar38 = *(long *)(lVar38 + 0x38);
        if (lVar38 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar38 + 0x18) <= uVar93)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar38 = lVar38 + lVar27 * 0x178;
        fStack0000000000000034 = *(float *)(lVar38 + 0x60);
        fVar57 = *(float *)(lVar38 + 0x160);
        fStack0000000000000030 = *(float *)(lVar38 + 0x14c);
        uVar72 = (ulong)(uint)fStack0000000000000030;
        fStack0000000000000080 = *(float *)(lVar38 + 0x11c);
        fStack000000000000007c = fVar83 * fVar57 + fStack0000000000000030;
        uStack000000000000006c = 0;
      }
      uVar18 = *puVar1;
      if (uVar18 == 1) {
LAB_024983ac:
        if ((*plVar2 != 0) && (lVar38 = *(long *)(*plVar2 + 0x38), lVar38 != 0)) {
          if (uVar93 < *(uint *)(lVar38 + 0x18)) {
            lVar38 = lVar38 + lVar27 * 0x178;
            lVar51 = *unaff_x19;
            uVar18 = *(uint *)(lVar38 + 0x128);
            fVar87 = *(float *)(lVar38 + 0x14c);
LAB_024983d8:
            pcVar40 = *(code **)(lVar51 + 0x908);
FUN_02498644:
            fVar87 = fVar83 * fVar57 + fVar87;
            goto LAB_02498648;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      if (uVar93 == uVar41) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar28 = FUN_016f68bc(uVar49,0);
        if ((*plVar2 != 0) && (lVar38 = *(long *)(*plVar2 + 0x38), lVar38 != 0)) {
          uVar18 = *(uint *)(lVar38 + 0x18);
          if (uVar49 == 0x200b || (uVar28 & 1) != 0) {
            if (uVar18 <= uVar43)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          else {
LAB_02498620:
            lVar51 = lVar27;
            if (uVar18 <= uVar93)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
LAB_02498628:
          lVar38 = lVar38 + lVar51 * 0x178;
          fVar87 = *(float *)(lVar38 + 0x14c);
          uVar18 = *(uint *)(lVar38 + 0x128);
          pcVar40 = *(code **)(*unaff_x19 + 0x908);
          goto FUN_02498644;
        }
        goto LAB_0249920c;
      }
      if ((int)uVar93 < (int)uVar18) {
        lVar38 = *plVar2;
        if ((lVar38 != 0) && (lVar47 = *(long *)(lVar38 + 0x38), lVar47 != 0)) {
          if (uVar44 < *(uint *)(lVar47 + 0x18)) {
            if (*(float *)(lVar47 + lVar24 + -0x108) == fStack0000000000000034) {
              fVar75 = *(float *)(lVar47 + lVar24 + -0x1c);
              if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar72 = (ulong)(uint)fStack0000000000000030;
              uVar28 = FUN_024aa280(fVar87 + fVar75,uVar72,0);
              if ((uVar28 & 1) != 0) {
                uVar18 = *puVar1;
                goto 
                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractor_OnSelectEntering
                ;
              }
              lVar38 = *plVar2;
              if (lVar38 == 0) goto LAB_0249920c;
            }
            lVar38 = *(long *)(lVar38 + 0x38);
            if (lVar38 != 0) {
              uVar18 = *(uint *)(lVar38 + 0x18);
              if ((int)uVar93 <= (int)uVar43) goto LAB_02498620;
              if (uVar43 < uVar18) goto LAB_02498628;
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
      if ((int)uVar93 < (int)uVar18) {
        iVar19 = FUN_02681c0c(lVar45,0);
        if (*(uint *)(lVar23 + 0x18) <= uVar44)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar38 = *(long *)(lVar23 + lVar24 + -0x130);
        if (lVar38 == 0) goto LAB_0249920c;
        iVar20 = FUN_02681c0c(lVar38,0);
        if (iVar19 != iVar20) goto LAB_024983ac;
      }
      if (!bVar15) {
        if ((*plVar2 != 0) && (lVar38 = *(long *)(*plVar2 + 0x38), lVar38 != 0)) {
          if (uVar44 - 2 < *(uint *)(lVar38 + 0x18)) {
            lVar51 = *unaff_x19;
            uVar18 = *(uint *)(lVar38 + lVar24 + -0x330);
            fVar87 = *(float *)(lVar38 + lVar24 + -0x30c);
            goto LAB_024983d8;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      bVar7 = true;
    }
    if ((*plVar2 == 0) || (lVar38 = *(long *)(*plVar2 + 0x38), lVar38 == 0)) goto LAB_0249920c;
    uVar18 = (uint)*(undefined8 *)(lVar38 + 0x18);
    if (uVar18 <= uVar93)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar38 + lVar27 * 0x178 + 0x191) >> 1 & 1) == 0) {
      if (bVar14) {
        uVar26 = (ulong)in_stack_000000a0;
        uVar30 = (ulong)(uint)fStack00000000000000a4;
        uVar72 = (ulong)(uint)fStack00000000000000b4;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar72,uVar26,uVar30,fStack00000000000000a8,uVar26);
      }
LAB_024986e8:
      bVar14 = false;
    }
    else {
      if ((((int)unaff_x19[100] < (int)uVar93) || ((int)unaff_x19[0x65] < (int)uVar35)) ||
         (((int)unaff_x19[0x5b] == 5 &&
          (*(int *)(lVar38 + lVar27 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
      if (!bVar14) {
        if ((((uVar49 == 0xd) || ((uVar49 | 1) == 0xb)) || ((int)uVar43 < (int)uVar93)) || (!bVar15)
           ) goto LAB_024986e8;
        if (uVar93 == uVar43) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar28 = FUN_016fa418(uVar49,0);
          if ((uVar28 & 1) != 0) goto LAB_024986e8;
        }
        puVar10 = System_Threading_Mutex_TypeInfo;
        lVar51 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar51 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar51 = *(long *)puVar10;
        }
        if ((*plVar2 == 0) || (lVar38 = *(long *)(*plVar2 + 0x38), lVar38 == 0)) goto LAB_0249920c;
        uVar18 = (uint)*(undefined8 *)(lVar38 + 0x18);
        if (uVar18 <= uVar93)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar51 = *(long *)(lVar51 + 0xb8);
        lVar47 = lVar38 + lVar27 * 0x178;
        in_stack_00001798 = *(undefined8 *)(lVar47 + 0x184);
        in_stack_00001790 = *(undefined8 *)(lVar47 + 0x17c);
        fStack00000000000000b0 = *(float *)(lVar51 + 0x1598);
        in_stack_000017a0 = *(float *)(lVar47 + 0x18c);
        fStack00000000000000b4 = *(float *)(lVar51 + 0x159c);
        fStack00000000000000a4 = *(float *)(lVar51 + 0x15a0);
        fStack00000000000000a8 = *(float *)(lVar51 + 0x15a4);
        in_stack_000000a0 = 0;
      }
      if (uVar18 <= uVar93)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar38 = lVar38 + lVar27 * 0x178;
      fVar74 = *(float *)(lVar38 + 0x188);
      uVar25 = *(undefined8 *)(lVar38 + 0x17c);
      fVar61 = *(float *)(lVar38 + 0x184);
      uVar32 = *(undefined8 *)(lVar38 + 0x184);
      fVar88 = *(float *)(lVar38 + 0x18c);
      fVar87 = *(float *)(lVar38 + 0x11c);
      fVar75 = *(float *)(lVar38 + 0x128);
      fVar94 = *(float *)(lVar38 + 0x148);
      fVar83 = *(float *)(lVar38 + 0x150);
      in_stack_00000158 = uVar25;
      fStack0000000000000160 = fVar61;
      fStack0000000000000164 = fVar74;
      in_stack_00000168 = fVar88;
      in_stack_00000170 = in_stack_00001790;
      in_stack_00000178 = in_stack_00001798;
      in_stack_00000180 = in_stack_000017a0;
      uVar28 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
      lVar38 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
      if ((uVar28 & 1) == 0) {
        if (*(int *)(lVar38 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar38);
        }
        fVar87 = fVar87 - (float)((ulong)in_stack_00001790 >> 0x20);
        if (fVar87 <= fStack00000000000000b0) {
          fStack00000000000000b0 = fVar87;
        }
        fVar83 = fVar83 - in_stack_000017a0;
        uVar72 = (ulong)(uint)fVar83;
        fVar75 = fVar75 + (float)in_stack_00001798;
        uVar26 = (ulong)(uint)fVar75;
        if (fVar83 <= fStack00000000000000b4) {
          fStack00000000000000b4 = fVar83;
        }
        fVar94 = fVar94 + (float)((ulong)in_stack_00001798 >> 0x20);
        uVar30 = (ulong)(uint)fVar94;
        if (fStack00000000000000a4 <= fVar75) {
          fStack00000000000000a4 = fVar75;
        }
        if (fStack00000000000000a8 <= fVar94) {
          fStack00000000000000a8 = fVar94;
        }
      }
      else {
        if (*(int *)(lVar38 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar38);
        }
        fVar87 = (fVar87 + (fStack00000000000000a4 - (float)in_stack_00001798)) * 0.5;
        uVar30 = (ulong)(uint)fVar87;
        if (fVar83 <= fStack00000000000000b4) {
          fStack00000000000000b4 = fVar83;
        }
        uVar72 = (ulong)(uint)fStack00000000000000b4;
        uVar26 = (ulong)in_stack_000000a0;
        if (fStack00000000000000a8 <= fVar94) {
          fStack00000000000000a8 = fVar94;
        }
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar72,uVar26,uVar30,fStack00000000000000a8,uVar26);
        fStack00000000000000b4 = fVar83 - fVar88;
        fStack00000000000000a4 = fVar75 + fVar61;
        in_stack_000000a0 = 0;
        fStack00000000000000a8 = fVar94 + fVar74;
        fStack00000000000000b0 = fVar87;
        in_stack_00001790 = uVar25;
        in_stack_00001798 = uVar32;
        in_stack_000017a0 = fVar88;
      }
      if (((*puVar1 == 1) || (uVar93 == uVar41)) || (((int)uVar43 <= (int)uVar93 || (!bVar15)))) {
        uVar26 = (ulong)in_stack_000000a0;
        uVar30 = (ulong)(uint)fStack00000000000000a4;
        uVar72 = (ulong)(uint)fStack00000000000000b4;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar72,uVar26,uVar30,fStack00000000000000a8,uVar26);
        bVar14 = false;
      }
      else {
        bVar14 = true;
      }
    }
    uVar93 = *puVar1;
    iVar53 = iVar53 + 1;
    lVar24 = lVar24 + 0x178;
    bVar15 = (int)uVar44 < (int)uVar93;
    uVar18 = uVar35;
    uVar44 = uVar44 + 1;
  } while (bVar15);
  lVar23 = *plVar2;
  if (lVar23 != 0) {
    iVar21 = uVar35 + 1;
LAB_02498c58:
    puVar11 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    puVar10 = PTR_DAT_033ed410;
    *(uint *)(lVar23 + 0x18) = uVar93;
    lVar24 = unaff_x19[0xd3];
    *(int *)(lVar23 + 0x2c) = iVar21;
    iVar21 = iStack00000000000000ac;
    if ((int)uVar93 < 1) {
      iVar21 = 1;
    }
    if (iStack00000000000000ac == 0) {
      iVar21 = 1;
    }
    *(int *)(lVar23 + 0x1c) = (int)lVar24;
    *(int *)(lVar23 + 0x24) = iVar21;
    *(int *)(lVar23 + 0x30) = (int)unaff_x19[0x95] + 1;
    if (((int)unaff_x19[0x62] != 0xff) ||
       (uVar28 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar28 & 1) == 0)) {
LAB_02496098:
      if (*(int *)(*(long *)Method_UnityEngine_Events_UnityEvent<VoiceSession>_Invoke__ + 0xe0) == 0
         ) {
        thunk_FUN_00d32864();
      }
      FUN_024a942c();
      return;
    }
    lVar23 = unaff_x19[0xde];
    if (lVar23 != 0) {
      (**(code **)(lVar23 + 0x18))
                (*(undefined8 *)(lVar23 + 0x40),*plVar2,*(undefined8 *)(lVar23 + 0x28));
    }
    if (unaff_x19[0xe4] == 0) goto LAB_0249920c;
    iVar21 = FUN_02859dc4(unaff_x19[0xe4],0);
    if (iVar21 != 0x19) {
      lVar23 = unaff_x19[0xe4];
      if (lVar23 == 0) goto LAB_0249920c;
      uVar93 = FUN_02859dc4(lVar23,0);
      FUN_02859e00(lVar23,uVar93 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
      if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x60), lVar23 == 0)) goto LAB_0249920c;
      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      if (*(int *)(lVar23 + 0x18) == 0)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      FUN_024e8000(lVar23 + 0x20,1,0);
    }
    if (unaff_x19[0x73] != 0) {
      UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTranslate__get_SameFunc
                (unaff_x19[0x73],0);
      if ((unaff_x19[0x6c] != 0) && (lVar23 = *(long *)(unaff_x19[0x6c] + 0x60), lVar23 != 0)) {
        if (*(int *)(lVar23 + 0x18) == 0) {
UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        if (unaff_x19[0x73] != 0) {
          FUN_0266b9c4(unaff_x19[0x73],*(undefined8 *)(lVar23 + 0x30),0);
          if ((unaff_x19[0x6c] != 0) && (lVar23 = *(long *)(unaff_x19[0x6c] + 0x60), lVar23 != 0)) {
            if (*(int *)(lVar23 + 0x18) == 0)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
            if (unaff_x19[0x73] != 0) {
              FUN_0266bbc8(unaff_x19[0x73],*(undefined8 *)(lVar23 + 0x48),0);
              if ((unaff_x19[0x6c] != 0) &&
                 (lVar23 = *(long *)(unaff_x19[0x6c] + 0x60), lVar23 != 0)) {
                if (*(int *)(lVar23 + 0x18) == 0)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                if (unaff_x19[0x73] != 0) {
                  FUN_0266bc74(unaff_x19[0x73],*(undefined8 *)(lVar23 + 0x50),0);
                  if ((unaff_x19[0x6c] != 0) &&
                     (lVar23 = *(long *)(unaff_x19[0x6c] + 0x60), lVar23 != 0)) {
                    if (*(int *)(lVar23 + 0x18) == 0)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    if (unaff_x19[0x73] != 0) {
                      FUN_0266c1dc(unaff_x19[0x73],*(undefined8 *)(lVar23 + 0x58),0);
                      if (unaff_x19[0x73] != 0) {
                        FUN_0266ed90(unaff_x19[0x73],0);
                        if (unaff_x19[0xe3] != 0) {
                          FUN_02858f1c(unaff_x19[0xe3],unaff_x19[0x73],0);
                          if (unaff_x19[0xe3] != 0) {
                            uVar32 = FUN_02858bac(unaff_x19[0xe3],0);
                            if (unaff_x19[0xe3] != 0) {
                              uVar93 = FUN_02858a14(unaff_x19[0xe3],0);
                              lVar23 = *plVar2;
                              if (lVar23 != 0) {
                                lVar38 = 0;
                                lVar24 = 0;
                                do {
                                  uVar28 = lVar24 + 1;
                                  if ((long)*(int *)(lVar23 + 0x34) <= (long)uVar28)
                                  goto LAB_02496098;
                                  lVar23 = *(long *)(lVar23 + 0x60);
                                  if (lVar23 == 0) break;
                                  if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  if (*(uint *)(lVar23 + 0x18) <= uVar28)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  FUN_024e7ecc(lVar23 + lVar38 + 0x70,0);
                                  lVar23 = unaff_x19[0xe0];
                                  if (lVar23 == 0) break;
                                  if (*(uint *)(lVar23 + 0x18) <= uVar28)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  uVar25 = *(undefined8 *)(lVar23 + lVar24 * 8 + 0x28);
                                  if (*(int *)(*(long *)puVar11 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  uVar31 = FUN_0268b4e0(uVar25,0,0);
                                  if ((uVar31 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x314) != 0) {
                                      if ((*plVar2 == 0) ||
                                         (lVar23 = *(long *)(*plVar2 + 0x60), lVar23 == 0)) break;
                                      if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                                        thunk_FUN_00d32864();
                                      }
                                      if (*(uint *)(lVar23 + 0x18) <= uVar28)
                                      goto 
                                      UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                      ;
                                      FUN_024e8000(lVar23 + lVar38 + 0x70,1,0);
                                    }
                                    lVar23 = unaff_x19[0xe0];
                                    if (lVar23 == 0) break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar28)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar23 = *(long *)(lVar23 + lVar24 * 8 + 0x28);
                                    if (lVar23 == 0) break;
                                    lVar23 = FUN_024f0144(lVar23,0);
                                    if ((*plVar2 == 0) ||
                                       (lVar51 = *(long *)(*plVar2 + 0x60), lVar51 == 0)) break;
                                    if (*(uint *)(lVar51 + 0x18) <= uVar28)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar23 == 0) break;
                                    FUN_0266b9c4(lVar23,*(undefined8 *)(lVar51 + lVar38 + 0x80),0);
                                    lVar23 = unaff_x19[0xe0];
                                    if (lVar23 == 0) break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar28)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar23 = *(long *)(lVar23 + lVar24 * 8 + 0x28);
                                    if (lVar23 == 0) break;
                                    lVar23 = FUN_024f0144(lVar23,0);
                                    if ((*plVar2 == 0) ||
                                       (lVar51 = *(long *)(*plVar2 + 0x60), lVar51 == 0)) break;
                                    if (*(uint *)(lVar51 + 0x18) <= uVar28)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar23 == 0) break;
                                    FUN_0266bbc8(lVar23,*(undefined8 *)(lVar51 + lVar38 + 0x98),0);
                                    lVar23 = unaff_x19[0xe0];
                                    if (lVar23 == 0) break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar28)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar23 = *(long *)(lVar23 + lVar24 * 8 + 0x28);
                                    if (lVar23 == 0) break;
                                    lVar23 = FUN_024f0144(lVar23,0);
                                    if ((*plVar2 == 0) ||
                                       (lVar51 = *(long *)(*plVar2 + 0x60), lVar51 == 0)) break;
                                    if (*(uint *)(lVar51 + 0x18) <= uVar28)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar23 == 0) break;
                                    FUN_0266bc74(lVar23,*(undefined8 *)(lVar51 + lVar38 + 0xa0),0);
                                    lVar23 = unaff_x19[0xe0];
                                    if (lVar23 == 0) break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar28)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar23 = *(long *)(lVar23 + lVar24 * 8 + 0x28);
                                    if (lVar23 == 0) break;
                                    lVar23 = FUN_024f0144(lVar23,0);
                                    if ((*plVar2 == 0) ||
                                       (lVar51 = *(long *)(*plVar2 + 0x60), lVar51 == 0)) break;
                                    if (*(uint *)(lVar51 + 0x18) <= uVar28)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    if (lVar23 == 0) break;
                                    FUN_0266c1dc(lVar23,*(undefined8 *)(lVar51 + lVar38 + 0xa8),0);
                                    lVar23 = unaff_x19[0xe0];
                                    if (lVar23 == 0) break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar28)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar23 = *(long *)(lVar23 + lVar24 * 8 + 0x28);
                                    if ((lVar23 == 0) ||
                                       (lVar23 = FUN_024f0144(lVar23,0), lVar23 == 0)) break;
                                    FUN_0266ed90(lVar23,0);
                                    lVar23 = unaff_x19[0xe0];
                                    if (lVar23 == 0) break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar28)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar23 = *(long *)(lVar23 + lVar24 * 8 + 0x28);
                                    if (lVar23 == 0) break;
                                    lVar23 = FUN_02738ef4(lVar23,0);
                                    lVar51 = unaff_x19[0xe0];
                                    if (lVar51 == 0) break;
                                    if (*(uint *)(lVar51 + 0x18) <= uVar28)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar51 = *(long *)(lVar51 + lVar24 * 8 + 0x28);
                                    if ((lVar51 == 0) ||
                                       (uVar25 = FUN_024f0144(lVar51,0), lVar23 == 0)) break;
                                    FUN_02858f1c(lVar23,uVar25,0);
                                    lVar23 = unaff_x19[0xe0];
                                    if (lVar23 == 0) break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar28)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar23 = *(long *)(lVar23 + lVar24 * 8 + 0x28);
                                    if ((lVar23 == 0) ||
                                       (lVar23 = FUN_02738ef4(lVar23,0), lVar23 == 0)) break;
                                    FUN_02858b14(uVar32,uVar72,uVar26,uVar30,lVar23,0);
                                    lVar23 = unaff_x19[0xe0];
                                    if (lVar23 == 0) break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar28)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    lVar23 = *(long *)(lVar23 + lVar24 * 8 + 0x28);
                                    if ((lVar23 == 0) ||
                                       (lVar23 = FUN_02738ef4(lVar23,0), lVar23 == 0)) break;
                                    FUN_02858a50(lVar23,uVar93 & 1,0);
                                    lVar23 = unaff_x19[0xe0];
                                    if (lVar23 == 0) break;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar28)
                                    goto 
                                    UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                    ;
                                    plVar52 = *(long **)(lVar23 + lVar24 * 8 + 0x28);
                                    uVar22 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar52 == (long *)0x0) break;
                                    (**(code **)(*plVar52 + 0x2c8))
                                              (plVar52,uVar22 & 1,*(undefined8 *)(*plVar52 + 0x2d0))
                                    ;
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
      }
    }
  }
  goto LAB_0249920c;
}


