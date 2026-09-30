/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual.EvaluateLineEndPoint_00000382$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 02492014
PROGRAM: Lovesick-libil2cpp.so
SCORE: 146
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;weak_pose_support;paired_state_refs;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_21;validity_or_gating_hits_21;weak_vector_component_hits_1;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_21;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_3
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UnityEngine_XR_Interaction_Toolkit_XRInteractorLineVisual_EvaluateLineEndPoint_00000382_PostfixBurstDelegate__Invoke
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
  undefined1 uVar31;
  char cVar32;
  uint uVar33;
  undefined4 *puVar34;
  long lVar35;
  uint in_w9;
  long lVar36;
  float *pfVar37;
  code *pcVar38;
  uint uVar39;
  float *pfVar40;
  uint uVar41;
  uint uVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long *unaff_x19;
  int unaff_w21;
  uint uVar47;
  uint uVar48;
  undefined8 *unaff_x23;
  long lVar49;
  long *plVar50;
  undefined8 *unaff_x26;
  long *unaff_x28;
  int iVar51;
  long *unaff_x29;
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
  float fVar67;
  ulong uVar68;
  double dVar69;
  undefined8 uVar70;
  float fVar71;
  float fVar72;
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
  float fVar82;
  float unaff_s13;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  undefined4 uVar87;
  float fVar88;
  float fVar89;
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
  uint in_stack_00000880;
  undefined4 in_stack_00000884;
  undefined4 in_stack_00000890;
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
  char in_stack_000017b4;
  float fVar92;
  uint in_stack_000017bc;
  
                    /* try { // try from 02492014 to 0259207b has its CatchHandler @ 02491e14 */
  *(undefined1 *)((long)unaff_x19 + 0x46c) = 0;
  *(undefined4 *)(unaff_x19 + 0x9a) = 0;
  *(uint *)(unaff_x19 + 0x57) = in_w9 & 0xffff | 0xc6ff0000;
  if (param_1 != 0) {
    fVar52 = (float)FUN_026fd130(param_1 + 0x50,0);
    if (*in_stack_00000138 != 0) {
      fVar53 = (float)FUN_026fd140(*in_stack_00000138 + 0x50,0);
      if (*in_stack_00000138 != 0) {
        fVar54 = (float)FUN_026fd180(*in_stack_00000138 + 0x50,0);
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
        lVar22 = *unaff_x29;
        if (*(int *)(lVar22 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar22 = *unaff_x29;
        }
        lVar23 = unaff_x19[0x6c];
        uVar70 = *(undefined8 *)(*(long *)(lVar22 + 0xb8) + 0x15a8);
        unaff_x19[0x94] = 0;
        unaff_x19[0x99] = 0;
        *(undefined1 *)((long)unaff_x19 + 700) = 0;
        lVar22 = NEON_rev64(uVar70,4);
        *(undefined4 *)((long)unaff_x19 + 0x2dc) = 0xffffffff;
        unaff_x19[0x98] = lVar22;
        *(undefined4 *)(unaff_x19 + 0x95) = 0;
        if ((lVar23 != 0) && (*(long *)(lVar23 + 0x58) != 0)) {
          uVar21 = (int)unaff_x19[0x66] - 1;
          uVar91 = *(int *)(*(long *)(lVar23 + 0x58) + 0x18) - 1;
          if ((int)uVar21 <= (int)uVar91) {
            uVar91 = uVar21;
          }
          uVar3 = 0;
          if (-1 < (int)uVar21) {
            uVar3 = uVar91;
          }
          FUN_024f1d04(lVar23,0);
          fVar55 = *(float *)(unaff_x19 + 0x67);
          *(undefined4 *)(unaff_x19 + 0x6b) = 0xbf800000;
          fVar85 = *(float *)(unaff_x19 + 0x6a);
          unaff_x19[0x69] = 0;
          lVar22 = *unaff_x29;
          fVar56 = *(float *)((long)unaff_x19 + 0x33c);
          fVar88 = *(float *)((long)unaff_x19 + 0x354);
          fVar57 = *(float *)((long)unaff_x19 + 0x344);
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
            fVar92 = 0.0;
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
            fVar72 = DAT_028aa3e4;
            fVar81 = DAT_028aa028;
            uVar91 = 0;
            lVar22 = unaff_x19[0x8e];
            if (lVar22 != 0) {
              puVar1 = (uint *)((long)unaff_x19 + 0x48c);
              uVar21 = unaff_w21 - 1;
              uVar27 = (ulong)(uint)fStack0000000000000054;
              fVar52 = fVar52 - (fVar53 - fVar54);
              lVar23 = (long)unaff_x19 + 0x42c;
              fVar53 = 0.0;
              if (fVar85 <= 0.0) {
                fVar85 = 0.0;
              }
              if (fVar88 <= 0.0) {
                fVar88 = 0.0;
              }
              plVar2 = unaff_x19 + 0x6c;
              fVar85 = fVar85 + _LAB_028aa024;
              uVar68 = (ulong)(uint)fVar85;
              fVar71 = fVar88 + _LAB_028aa024;
              fVar54 = unaff_s11 * DAT_028aa028 * unaff_s13;
              bVar8 = true;
              fStack0000000000000034 = 0.0;
              bVar12 = false;
              iVar20 = 0;
              bVar9 = 1;
              fStack00000000000000d4 = fVar85;
LAB_02492378:
              fVar86 = (float)uVar27;
              fVar60 = 1.0;
              if ((int)*(uint *)(lVar22 + 0x18) <= (int)uVar91) {
LAB_02495f1c:
                fVar52 = (float)uVar68;
                if (((char)unaff_x19[0x46] != '\0') &&
                   (fVar52 = DAT_02956ccc,
                   DAT_02956ccc < *(float *)((long)unaff_x19 + 0x234) - *(float *)(unaff_x19 + 0x47)
                   )) {
                  fVar52 = *(float *)((long)unaff_x19 + 0x1dc);
                  fVar53 = *(float *)((long)unaff_x19 + 0x24c);
                  if ((fVar52 < fVar53) &&
                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                    if (*(float *)((long)unaff_x19 + 0x2cc) < *(float *)(unaff_x19 + 0x59) / 100.0)
                    {
                      *(undefined4 *)((long)unaff_x19 + 0x2cc) = 0;
                    }
                    fVar54 = (*(float *)((long)unaff_x19 + 0x234) - fVar52) * 0.5;
                    if (fVar54 <= DAT_028aa298) {
                      fVar54 = DAT_028aa298;
                    }
                    *(float *)(unaff_x19 + 0x47) = fVar52;
                    fVar54 = (fVar52 + fVar54) * 20.0 + 0.5;
                    fVar52 = DAT_02958220;
                    if (fVar54 != INFINITY) {
                      fVar52 = (float)(int)fVar54 / 20.0;
                    }
                    if (fVar53 <= fVar52) {
                      fVar52 = fVar53;
                    }
LAB_02495fd8:
                    *(float *)((long)unaff_x19 + 0x1dc) = fVar52;
                    return;
                  }
                }
                *(undefined1 *)((long)unaff_x19 + 0x244) = 1;
                if ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c)) {
                  uVar70 = FUN_0176eb1c((long)unaff_x19 + 0x23c,0);
                  uVar24 = FUN_017840ac((long)unaff_x19 + 0x1dc,0);
                  uVar70 = FUN_0160073c(*(undefined8 *)
                                         Method_Unity_Burst_Intrinsics_Arm_Neon_vqrdmlah_s16__,
                                        uVar70,*(undefined8 *)
                                                Method_UnityEngine_GameObject_GetComponents<Component>__
                                        ,uVar24,0);
                  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                    thunk_FUN_00d32864(*unaff_x28);
                  }
                  FUN_02660dac(uVar70,0);
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
                iVar20 = *(int *)(lVar22 + (long)(int)*(uint *)(unaff_x19 + 0xd0) * 0x38 + 0x54) <<
                         2;
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
                fVar53 = fStack00000000000000c8;
                if (iVar16 < 0x401) {
                  if (iVar16 == 0x100) {
                    if (lVar22 == 0) goto LAB_0249920c;
                    if (*(uint *)(lVar22 + 0x18) < 2)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    uVar70 = *(undefined8 *)(lVar22 + 0x30);
                    if ((int)unaff_x19[0x5b] == 5) {
                      if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x58), lVar23 == 0))
                      goto LAB_0249920c;
                      if (*(uint *)(lVar23 + 0x18) <= uVar3)
                      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                      fVar52 = *(float *)(lVar23 + (long)(int)uVar3 * 0x14 + 0x28);
                    }
                    else {
                      fVar52 = *(float *)(unaff_x19 + 0x96);
                    }
                    fVar53 = fVar55 + 0.0 + *(float *)(lVar22 + 0x2c);
                    fVar52 = (0.0 - fVar52) - fVar56;
                  }
                  else if (iVar16 == 0x200) {
                    if (lVar22 == 0) goto LAB_0249920c;
                    if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0))
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    fVar53 = (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
                    uVar70 = CONCAT44(((float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                                      (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20)) * 0.5,
                                      ((float)*(undefined8 *)(lVar22 + 0x24) +
                                      (float)*(undefined8 *)(lVar22 + 0x30)) * 0.5);
                    if ((int)unaff_x19[0x5b] == 5) {
                      if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x58), lVar22 == 0))
                      goto LAB_0249920c;
                      if (*(uint *)(lVar22 + 0x18) <= uVar3)
                      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                      lVar22 = lVar22 + (long)(int)uVar3 * 0x14;
                      fVar53 = fVar55 + 0.0 + fVar53;
                      fVar52 = ((fVar56 + *(float *)(lVar22 + 0x28) + *(float *)(lVar22 + 0x30)) -
                               fVar57) * -0.5 + 0.0;
                    }
                    else {
                      fVar53 = fVar55 + 0.0 + fVar53;
                      fVar52 = ((fVar56 + *(float *)(unaff_x19 + 0x96) + fVar92) - fVar57) * -0.5 +
                               0.0;
                    }
                  }
                  else {
                    if (iVar16 != 0x400) goto LAB_024965d0;
                    if (lVar22 == 0) goto LAB_0249920c;
                    if (*(int *)(lVar22 + 0x18) == 0)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    uVar70 = *(undefined8 *)(lVar22 + 0x24);
                    if ((int)unaff_x19[0x5b] == 5) {
                      if ((*plVar2 == 0) || (lVar23 = *(long *)(*plVar2 + 0x58), lVar23 == 0))
                      goto LAB_0249920c;
                      if (*(uint *)(lVar23 + 0x18) <= uVar3)
                      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                      fVar92 = *(float *)(lVar23 + (long)(int)uVar3 * 0x14 + 0x30);
                    }
                    fVar53 = fVar55 + 0.0 + *(float *)(lVar22 + 0x20);
                    fVar52 = fVar57 + (0.0 - fVar92);
                  }
                  uStack0000000000000090 =
                       CONCAT44((float)((ulong)uVar70 >> 0x20) + 0.0,(float)uVar70 + fVar52);
                }
                else if (iVar16 == 0x800) {
                  if (lVar22 == 0) goto LAB_0249920c;
                  if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0))
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  fVar52 = ((float)*(undefined8 *)(lVar22 + 0x24) +
                           (float)*(undefined8 *)(lVar22 + 0x30)) * 0.5;
                  fVar53 = fVar55 + 0.0 +
                           (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
                  uStack0000000000000090 =
                       CONCAT44(((float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                                (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20)) * 0.5 + 0.0,
                                fVar52 + 0.0);
                }
                else {
                  if (iVar16 == 0x1000) {
                    if (lVar22 == 0) goto LAB_0249920c;
                    if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0))
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    fVar52 = (float)*(undefined8 *)(lVar22 + 0x24) +
                             (float)*(undefined8 *)(lVar22 + 0x30);
                    fVar54 = (float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                             (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20);
                    fVar56 = fVar56 + *(float *)(unaff_x19 + 0x9c) + *(float *)(unaff_x19 + 0x9b);
                    fVar53 = fVar55 + 0.0 +
                             (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
                  }
                  else {
                    if (iVar16 != 0x2000) goto LAB_024965d0;
                    if (lVar22 == 0) goto LAB_0249920c;
                    if ((*(int *)(lVar22 + 0x18) == 1) || (*(int *)(lVar22 + 0x18) == 0))
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    fVar52 = (float)*(undefined8 *)(lVar22 + 0x24) +
                             (float)*(undefined8 *)(lVar22 + 0x30);
                    fVar54 = (float)((ulong)*(undefined8 *)(lVar22 + 0x24) >> 0x20) +
                             (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20);
                    fVar56 = *(float *)((long)unaff_x19 + 0x4b4) - fVar56;
                    fVar53 = fVar55 + 0.0 +
                             (*(float *)(lVar22 + 0x20) + *(float *)(lVar22 + 0x2c)) * 0.5;
                  }
                  fVar52 = fVar52 * 0.5;
                  uStack0000000000000090 =
                       CONCAT44(fVar54 * 0.5 + 0.0,fVar52 + (0.0 - (fVar56 - fVar57) * 0.5));
                }
LAB_024965d0:
                if (unaff_x19[0xe4] != 0) {
                  uVar70 = FUN_0285a188(unaff_x19[0xe4],0);
                  if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                    thunk_FUN_00d32864(*(long *)puVar10);
                  }
                  uVar27 = FUN_0268b4e0(uVar70,0,0);
                  lVar22 = FUN_024c933c();
                  if (lVar22 != 0) {
                    FUN_026a125c(lVar22,0);
                    *(float *)(unaff_x19 + 0xe1) = fVar52;
                    if (unaff_x19[0xe4] != 0) {
                      iVar16 = FUN_02859798(unaff_x19[0xe4],0);
                      if (unaff_x19[0xe4] != 0) {
                        fVar54 = (float)FUN_028598f0(unaff_x19[0xe4],0);
                        __x = DAT_028aa048;
                        dVar69 = modf(DAT_028aa048,(double *)&stack0x00000880);
                        if (dVar69 == 0.5) {
                          fVar56 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
                          if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) !=
                              0) {
                            fVar56 = fVar56 + 1.0;
                          }
                        }
                        else {
                          fVar56 = 255.0;
                        }
                        dVar69 = modf(__x,(double *)&stack0x00000880);
                        if (dVar69 == 0.5) {
                          fVar55 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
                          if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) !=
                              0) {
                            fVar55 = fVar55 + 1.0;
                          }
                        }
                        else {
                          fVar55 = 255.0;
                        }
                        dVar69 = modf(__x,(double *)&stack0x00000880);
                        if (dVar69 == 0.5) {
                          fVar57 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
                          if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) !=
                              0) {
                            fVar57 = fVar57 + 1.0;
                          }
                        }
                        else {
                          fVar57 = 255.0;
                        }
                        dVar69 = modf(__x,(double *)&stack0x00000880);
                        if (dVar69 == 0.5) {
                          fVar85 = (float)(double)CONCAT44(in_stack_00000884,in_stack_00000880);
                          if (((long)(double)CONCAT44(in_stack_00000884,in_stack_00000880) & 1U) !=
                              0) {
                            fVar85 = fVar85 + 1.0;
                          }
                        }
                        else {
                          fVar85 = 255.0;
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
                        puVar34 = *(undefined4 **)(lVar22 + 0xb8);
                        uVar68 = (ulong)(uint)puVar34[1];
                        uVar25 = (ulong)(uint)puVar34[2];
                        uVar29 = (ulong)(uint)puVar34[3];
                        UnityEngine_XR_Interaction_Toolkit_XRSocketInteractor__ResetCollidersAndValidTargets
                                  (*puVar34,uVar68,uVar25,uVar29,&stack0x00001790,0x4000ffff,0);
                        if (*(int *)(*unaff_x29 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        lVar22 = *plVar2;
                        if (lVar22 != 0) {
                          uVar91 = *puVar1;
                          if ((int)uVar91 < 1) {
                            iStack00000000000000ac = 0;
                            iVar20 = 0;
                            goto LAB_02498c58;
                          }
                          lVar22 = *(long *)(lVar22 + 0x38);
                          fVar52 = ABS(fVar52);
                          fVar88 = 1.0;
                          if ((uVar27 & 1) == 0) {
                            fVar88 = fVar52;
                          }
                          if (lVar22 != 0) {
                            bVar13 = false;
                            bVar8 = false;
                            bVar7 = false;
                            bVar12 = false;
                            uVar21 = (int)fVar56 & 0xffU | ((int)fVar55 & 0xffU) << 8 |
                                     ((int)fVar57 & 0xffU) << 0x10 | (int)fVar85 << 0x18;
                            fStack00000000000000d0 =
                                 *(float *)(*(long *)(*unaff_x29 + 0xb8) + 0x15a8);
                            fStack00000000000000cc = 0.0;
                            fStack0000000000000058 = fStack00000000000000b0;
                            fStack000000000000005c = 0.0;
                            fStack0000000000000034 = 0.0;
                            fVar55 = 0.0;
                            fStack0000000000000030 = 0.0;
                            uVar15 = 0;
                            iVar51 = 0;
                            lVar23 = 0x2e0;
                            fVar57 = 0.0;
                            fVar56 = 0.0;
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
                            uVar42 = 1;
                            goto LAB_02496a50;
                          }
                        }
                      }
                    }
                  }
                }
                goto LAB_0249920c;
              }
              if (*(uint *)(lVar22 + 0x18) <= uVar91)
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              uVar15 = *(uint *)(lVar22 + (long)(int)uVar91 * 0xc + 0x20);
              if (uVar15 == 0) goto LAB_02495f1c;
              if (5 < iVar20) {
                uVar70 = FUN_0176eb1c(&stack0x000017bc,0);
                uVar24 = FUN_0176eb1c(&stack0x00001788,0);
                uVar70 = FUN_0160073c(*(undefined8 *)
                                       UnityEngine_Rendering_Universal_DebugValidationMode_var,
                                      uVar70,*(undefined8 *)
                                              Method_OVRTaskBuilder<OVRPlugin_Result>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<ulong,_OVRPlugin_Result>>,_OVRAnchor_Tracker_<SetupDynamicObjectTracker>d__5>__
                                      ,uVar24,0);
                if (*(int *)(*unaff_x28 + 0xe0) == 0) {
                  thunk_FUN_00d32864(*unaff_x28);
                }
                FUN_026610e4(uVar70,0);
                in_stack_000017a8 = CONCAT44(3,*puVar1);
              }
              if ((*(char *)((long)unaff_x19 + 0x2fa) != '\0') && (uVar15 == 0x3c)) {
                *(undefined1 *)((long)unaff_x19 + 0x429) = 1;
                *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
                uVar25 = FUN_024d0688();
                if (((uVar25 & 1) == 0) ||
                   (uVar91 = in_stack_0000176c, *(int *)((long)unaff_x19 + 0x63c) != 0))
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
              lVar49 = (long)(int)uVar17;
              cVar32 = *(char *)(lVar22 + lVar49 * 0x178 + 0x5c);
              *(undefined1 *)((long)unaff_x19 + 0x429) = 0;
              lVar36 = unaff_x19[0x23];
              if ((uint)in_stack_000017a8 == uVar17) {
                uVar15 = (uint)((ulong)in_stack_000017a8 >> 0x20);
                bVar7 = true;
                *(undefined4 *)((long)unaff_x19 + 0x63c) = 0;
                if (uVar15 == 0x2026) {
                  lVar26 = unaff_x19[0xc9];
                  lVar22 = lVar22 + lVar49 * 0x178;
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
                     (lVar26 = FUN_024b11ac(*in_stack_00000138,0), lVar26 == 0)) goto LAB_0249920c;
                  uVar90 = 3;
                  FUN_01299bc0(lVar26,&stack0x00000bf8,&stack0x00000880,
                               *(undefined8 *)PTR_DAT_033ef3c8);
                  if (*(uint *)(lVar22 + 0x18) <= uVar17)
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  bVar7 = true;
                  *(ulong *)(lVar22 + lVar49 * 0x178 + 0x30) =
                       CONCAT44(in_stack_00000884,in_stack_00000880);
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
              fStack00000000000000f4 = fVar60;
              if (iVar16 == 0) {
                uVar17 = *(uint *)((long)unaff_x19 + 0x254);
                if ((uVar17 >> 4 & 1) == 0) {
                  if ((uVar17 >> 3 & 1) == 0) {
                    if ((uVar17 >> 5 & 1) != 0) {
                      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0)
                      {
                        thunk_FUN_00d32864();
                      }
                      uVar25 = FUN_016f92d4(uVar15,0);
                      if ((uVar25 & 1) != 0) {
                        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0
                           ) {
                          thunk_FUN_00d32864();
                        }
                        uVar15 = FUN_016f95a8(uVar15,0);
                        uVar15 = uVar15 & 0xffff;
                        fStack00000000000000f4 = fVar72;
                      }
                    }
                  }
                  else {
                    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar25 = FUN_016f9218(uVar15,0);
                    if ((uVar25 & 1) != 0) {
                      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0)
                      {
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
                    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
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
                  lVar49 = *(long *)(lVar22 + 0x40);
                  unaff_x19[0xd2] = lVar49;
                  *(undefined4 *)((long)unaff_x19 + 0x69c) = *(undefined4 *)(lVar22 + 0x48);
                  if ((lVar49 == 0) || (lVar22 = FUN_024ebfa0(lVar49,0), lVar22 == 0))
                  goto LAB_0249920c;
                  FUN_0132138c(lVar22,*(undefined4 *)((long)unaff_x19 + 0x69c),&stack0x00000880,
                               *(undefined8 *)System_Func<KeyValuePair<int,_int>,_int>_TypeInfo);
                  lVar49 = CONCAT44(in_stack_00000884,in_stack_00000880);
                  if (lVar49 == 0) goto LAB_02492630;
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
                  fVar53 = *(float *)(unaff_x19 + 0x3c);
                  memmove(&stack0x00001700,(void *)(unaff_x19[0x1f] + 0x50),0x60);
                  iVar16 = FUN_026fd110(&stack0x00001700,0);
                  if (*in_stack_00000138 == 0) goto LAB_0249920c;
                  memmove(&stack0x00001700,(void *)(*in_stack_00000138 + 0x50),0x60);
                  fVar58 = (float)FUN_026fd120(&stack0x00001700,0);
                  fVar86 = fStack0000000000000084;
                  if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
                    fVar86 = 1.0;
                  }
                  if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
                  fVar86 = (fVar53 / (float)iVar16) * fVar58 * fVar86;
                  iVar16 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
                  fVar53 = *(float *)(unaff_x19 + 0x3c);
                  if (iVar16 < 1) {
                    if (*in_stack_00000138 == 0) goto LAB_0249920c;
                    iVar16 = FUN_026fd110(*in_stack_00000138 + 0x50,0);
                    if (*in_stack_00000138 == 0) goto LAB_0249920c;
                    fVar58 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
                    fVar82 = fStack0000000000000084;
                    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
                      fVar82 = fVar60;
                    }
                    if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
                    fVar77 = (float)FUN_026fd140(unaff_x19[0x1f] + 0x50,0);
                    if (*(long *)(lVar49 + 0x20) == 0) goto LAB_0249920c;
                    FUN_026fd62c(&stack0x00000880,*(long *)(lVar49 + 0x20),0);
                    unaff_x26[0x1cd] = unaff_x26[1];
                    unaff_x26[0x1cc] = *unaff_x26;
                    fVar59 = (float)FUN_026fd45c(&stack0x000016e0,0);
                    if (*(long *)(lVar49 + 0x20) == 0) goto LAB_0249920c;
                    fVar61 = *(float *)(lVar49 + 0x2c);
                    fVar83 = (float)FUN_026fd668(*(long *)(lVar49 + 0x20),0);
                    if (*in_stack_00000138 == 0) goto LAB_0249920c;
                    fVar60 = (float)FUN_026fd140(*in_stack_00000138 + 0x50,0);
                    if (*in_stack_00000138 == 0) goto LAB_0249920c;
                    fVar74 = (float)FUN_026fd170(*in_stack_00000138 + 0x50,0);
                    if (*in_stack_00000138 == 0) goto LAB_0249920c;
                    fVar62 = *(float *)((long)unaff_x19 + 0x3fc);
                    fStack0000000000000134 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
                    if (unaff_x19[0x1f] == 0) goto LAB_0249920c;
                    fStack0000000000000134 = fVar86 * fVar74 * fVar62 * fStack0000000000000134;
                    fVar82 = (fVar53 / (float)iVar16) * fVar58 * fVar82;
                    fVar86 = fVar82 * (fVar77 / fVar59) * fVar61 * fVar83;
                    fVar82 = fVar82 / fVar86;
                    fVar60 = fVar82 * fVar60;
                    fVar53 = (float)FUN_026fd180(unaff_x19[0x1f] + 0x50,0);
                    fVar82 = fVar82 * fVar53;
                  }
                  else {
                    if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
                    iVar16 = FUN_026fd110(unaff_x19[0xd2] + 0x48,0);
                    if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
                    fVar58 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
                    if (*(long *)(lVar49 + 0x20) == 0) goto LAB_0249920c;
                    fVar82 = *(float *)(lVar49 + 0x2c);
                    fVar77 = fStack0000000000000084;
                    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
                      fVar77 = 1.0;
                    }
                    fVar59 = (float)FUN_026fd668(*(long *)(lVar49 + 0x20),0);
                    if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
                    fVar60 = (float)FUN_026fd140(unaff_x19[0xd2] + 0x48,0);
                    if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
                    fVar61 = (float)FUN_026fd170(unaff_x19[0xd2] + 0x48,0);
                    if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
                    fVar83 = *(float *)((long)unaff_x19 + 0x3fc);
                    fStack0000000000000134 = (float)FUN_026fd120(unaff_x19[0xd2] + 0x48,0);
                    if (unaff_x19[0xd2] == 0) goto LAB_0249920c;
                    fStack0000000000000134 = fVar86 * fVar61 * fVar83 * fStack0000000000000134;
                    fVar86 = (fVar53 / (float)iVar16) * fVar58 * fVar77 * fVar82 * fVar59;
                    fVar82 = (float)FUN_026fd180(unaff_x19[0xd2] + 0x48,0);
                  }
                  lVar22 = unaff_x19[0x6c];
                  unaff_x19[200] = lVar49;
                  if ((lVar22 != 0) && (lVar49 = *(long *)(lVar22 + 0x38), lVar49 != 0)) {
                    if (*puVar1 < *(uint *)(lVar49 + 0x18)) {
                      lVar49 = lVar49 + (long)(int)*puVar1 * 0x178;
                      *(undefined4 *)(lVar49 + 0x2c) = 1;
                      *(float *)(lVar49 + 0x160) = fVar86;
                      fVar53 = 0.0;
                      *(long *)(lVar49 + 0x40) = unaff_x19[0xd2];
                      *(long *)(lVar49 + 0x38) = unaff_x19[0x1f];
                      *(int *)(lVar49 + 0x58) = (int)unaff_x19[0x23];
                      *(int *)(unaff_x19 + 0x23) = (int)lVar36;
                      goto LAB_02492e14;
                    }
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  }
                  goto LAB_0249920c;
                }
                lVar22 = *plVar2;
                fVar58 = 0.0;
                if (uVar15 != 3 && uVar15 != 0xad) {
                  fVar58 = fVar86;
                }
                fStack0000000000000134 = 0.0;
                if (lVar22 == 0) goto LAB_0249920c;
                fVar60 = 0.0;
                fVar82 = 0.0;
              }
              else {
                if (iVar16 != 0) goto LAB_0249265c;
LAB_02492a20:
                if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x38), lVar22 == 0))
                goto LAB_0249920c;
                uVar42 = *puVar1;
                uVar17 = *(uint *)(lVar22 + 0x18);
                if (uVar17 <= uVar42)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                lVar36 = *(long *)(lVar22 + (long)(int)uVar42 * 0x178 + 0x30);
                unaff_x19[200] = lVar36;
                if (lVar36 == 0) goto LAB_02492630;
                lVar49 = lVar22 + (long)(int)uVar42 * 0x178;
                lVar36 = *(long *)(lVar49 + 0x38);
                unaff_x19[0x1f] = lVar36;
                unaff_x19[0x22] = *(long *)(lVar49 + 0x50);
                *(undefined4 *)(unaff_x19 + 0x23) = *(undefined4 *)(lVar49 + 0x58);
                if (bVar7) {
                  lVar49 = unaff_x19[0x8e];
                  if (lVar49 == 0) goto LAB_0249920c;
                  if (*(uint *)(lVar49 + 0x18) <= uVar91)
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  if ((*(int *)(lVar49 + (long)(int)uVar91 * 0xc + 0x20) != 10) ||
                     (uVar42 == *(uint *)(unaff_x19 + 0x92))) goto LAB_02492ab4;
                  if (uVar17 <= uVar42 - 1)
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  if (lVar36 == 0) goto LAB_0249920c;
                  fVar53 = *(float *)(lVar22 + (long)(int)(uVar42 - 1) * 0x178 + 0x60);
                  iVar16 = FUN_026fd110(lVar36 + 0x50,0);
                  lVar22 = *in_stack_00000138;
                }
                else {
LAB_02492ab4:
                  if (lVar36 == 0) goto LAB_0249920c;
                  fVar53 = *(float *)(unaff_x19 + 0x3c);
                  iVar16 = FUN_026fd110(lVar36 + 0x50,0);
                  lVar22 = unaff_x19[0x1f];
                }
                if (lVar22 == 0) goto LAB_0249920c;
                fVar77 = (float)FUN_026fd120(lVar22 + 0x50,0);
                fVar58 = fStack0000000000000084;
                if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
                  fVar58 = fVar60;
                }
                fVar82 = 0.0;
                fVar60 = 0.0;
                if (!(bool)(bVar7 & uVar15 == 0x2026)) {
                  if (*in_stack_00000138 == 0) goto LAB_0249920c;
                  fVar60 = (float)FUN_026fd140(*in_stack_00000138 + 0x50,0);
                  if (*in_stack_00000138 == 0) goto LAB_0249920c;
                  fVar82 = (float)FUN_026fd180(*in_stack_00000138 + 0x50,0);
                }
                lVar22 = unaff_x19[200];
                if ((lVar22 == 0) || (*(long *)(lVar22 + 0x20) == 0)) goto LAB_0249920c;
                fVar59 = *(float *)((long)unaff_x19 + 0x3fc);
                fVar61 = *(float *)(lVar22 + 0x2c);
                fVar86 = (float)FUN_026fd668(*(long *)(lVar22 + 0x20),0);
                if (*in_stack_00000138 == 0) goto LAB_0249920c;
                fVar83 = (float)FUN_026fd170(*in_stack_00000138 + 0x50,0);
                if (*in_stack_00000138 == 0) goto LAB_0249920c;
                fVar74 = *(float *)((long)unaff_x19 + 0x3fc);
                fStack0000000000000134 = (float)FUN_026fd120(*in_stack_00000138 + 0x50,0);
                lVar22 = unaff_x19[0x6c];
                if ((lVar22 == 0) || (lVar36 = *(long *)(lVar22 + 0x38), lVar36 == 0))
                goto LAB_0249920c;
                if (*(uint *)(lVar36 + 0x18) <= *puVar1)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                lVar36 = lVar36 + (long)(int)*puVar1 * 0x178;
                *(undefined4 *)(lVar36 + 0x2c) = 0;
                fVar58 = ((fStack00000000000000f4 * fVar53) / (float)iVar16) * fVar77 * fVar58;
                fVar86 = fVar58 * fVar59 * fVar61 * fVar86;
                *(float *)(lVar36 + 0x160) = fVar86;
                uVar17 = *(uint *)(unaff_x19 + 0x23);
                fStack0000000000000134 = fVar58 * fVar83 * fVar74 * fStack0000000000000134;
                if (uVar17 == 0) {
                  fVar53 = *(float *)(unaff_x19 + 0xc2);
                }
                else {
                  lVar36 = unaff_x19[0xe0];
                  if (lVar36 == 0) goto LAB_0249920c;
                  if (*(uint *)(lVar36 + 0x18) <= uVar17)
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  lVar36 = *(long *)(lVar36 + (long)(int)uVar17 * 8 + 0x20);
                  if (lVar36 == 0) goto LAB_0249920c;
                  fVar53 = *(float *)(lVar36 + 0x104);
                }
LAB_02492e14:
                fVar58 = 0.0;
                if (uVar15 != 3 && uVar15 != 0xad) {
                  fVar58 = fVar86;
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
              uVar70 = *unaff_x26;
              *(undefined4 *)(lVar22 + 0x18c) = in_stack_00000890;
              *(undefined8 *)(lVar22 + 0x184) = uVar24;
              *(undefined8 *)(lVar22 + 0x17c) = uVar70;
              if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x38), lVar22 == 0))
              goto LAB_0249920c;
              if (*(uint *)(lVar22 + 0x18) <= *puVar1)
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              *(undefined4 *)(lVar22 + (long)(int)*puVar1 * 0x178 + 400) =
                   *(undefined4 *)((long)unaff_x19 + 0x254);
              if ((unaff_x19[200] == 0) || (lVar22 = *(long *)(unaff_x19[200] + 0x20), lVar22 == 0))
              goto LAB_0249920c;
              FUN_026fd62c(&stack0x00000bf8,lVar22,0);
              puVar10 = 
              Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>_OnEnable__
              ;
              unaff_x26[0x1df] = in_stack_00000c00;
              unaff_x26[0x1de] = CONCAT44(in_stack_00000bfc,uVar90);
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
                fVar61 = 0.0;
                fVar59 = 0.0;
                fVar77 = 0.0;
              }
              else {
                if (unaff_x19[200] == 0) goto LAB_0249920c;
                uVar33 = *puVar1;
                uVar42 = *(uint *)(unaff_x19[200] + 0x28);
                if ((int)uVar33 < (int)uVar21) {
                  if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x38), lVar22 == 0))
                  goto LAB_0249920c;
                  if (*(uint *)(lVar22 + 0x18) <= uVar33 + 1)
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  lVar22 = *(long *)(lVar22 + (long)(int)(uVar33 + 1) * 0x178 + 0x30);
                  if ((((lVar22 == 0) || (*in_stack_00000138 == 0)) ||
                      (lVar36 = *(long *)(*in_stack_00000138 + 0x128), lVar36 == 0)) ||
                     (lVar36 = *(long *)(lVar36 + 0x18), lVar36 == 0)) goto LAB_0249920c;
                  in_stack_00000880 = uVar42 | *(int *)(lVar22 + 0x28) << 0x10;
                  uVar27 = FUN_0129eff4(lVar36,&stack0x00000880,&stack0x000016d8,
                                        *(undefined8 *)
                                         Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                                       );
                  uVar87 = 0;
                  if ((uVar27 & 1) == 0) {
                    fVar61 = 0.0;
                    fVar59 = 0.0;
                    fVar77 = 0.0;
                  }
                  else {
                    if (in_stack_000016d8 == 0) goto LAB_0249920c;
                    fVar77 = *(float *)(in_stack_000016d8 + 0x14);
                    fVar59 = *(float *)(in_stack_000016d8 + 0x18);
                    fVar61 = *(float *)(in_stack_000016d8 + 0x1c);
                    uVar87 = *(undefined4 *)(in_stack_000016d8 + 0x20);
                    if ((*(byte *)(in_stack_000016d8 + 0x39) & 1) != 0) {
                      fStack00000000000000cc = 0.0;
                    }
                  }
                  uVar33 = *puVar1;
                }
                else {
                  uVar87 = 0;
                  fVar61 = 0.0;
                  fVar59 = 0.0;
                  fVar77 = 0.0;
                }
                if (0 < (int)uVar33) {
                  if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x38), lVar22 == 0))
                  goto LAB_0249920c;
                  if (*(uint *)(lVar22 + 0x18) <= (uint)((long)(int)uVar33 + -1))
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  lVar22 = *(long *)(lVar22 + ((long)(int)uVar33 + -1) * 0x178 + 0x30);
                  if (((lVar22 == 0) || (*in_stack_00000138 == 0)) ||
                     ((lVar36 = *(long *)(*in_stack_00000138 + 0x128), lVar36 == 0 ||
                      (lVar36 = *(long *)(lVar36 + 0x18), lVar36 == 0)))) goto LAB_0249920c;
                  in_stack_00000880 = *(uint *)(lVar22 + 0x28) | uVar42 << 0x10;
                  uVar27 = FUN_0129eff4(lVar36,&stack0x00000880,&stack0x000016d8,
                                        *(undefined8 *)
                                         Method_System_Collections_Generic_List_Enumerator<CharacterManager>_MoveNext__
                                       );
                  if ((uVar27 & 1) != 0) {
                    if ((in_stack_000016d8 == 0) ||
                       (fVar77 = (float)FUN_024bb1bc(fVar77,fVar59,fVar61,uVar87,
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
                *(float *)((long)unaff_x19 + 0x2f4) = fVar61;
              }
              if ((char)unaff_x19[0x1d] != '\0') {
                fVar74 = *(float *)(unaff_x19 + 199);
                fVar83 = (float)FUN_026fd474(&stack0x00001770,0);
                fVar74 = fVar74 - fVar58 * fVar83 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
                *(float *)(unaff_x19 + 199) = fVar74;
                if ((uVar17 != 0) || (uVar15 == 0x200b)) {
                  *(float *)(unaff_x19 + 199) =
                       fVar74 - fVar54 * *(float *)((long)unaff_x19 + 0x2ac);
                }
              }
              fVar74 = *(float *)(unaff_x19 + 0x55);
              fVar83 = 0.0;
              if (fVar74 != 0.0) {
                fVar83 = (float)FUN_026fd454(&stack0x00001770,0);
                fVar62 = (float)FUN_026fd464(&stack0x00001770,0);
                fVar83 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                         (fVar74 * 0.5 - fVar58 * (fVar83 * 0.5 + fVar62));
                *(float *)(unaff_x19 + 199) = *(float *)(unaff_x19 + 199) + fVar83;
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
                fVar63 = 0.0;
                if ((uVar27 & 1) != 0) {
                  lVar22 = unaff_x19[0x22];
                  if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  if (lVar22 == 0) goto LAB_0249920c;
                  uVar27 = FUN_0267e1d8(lVar22,*(undefined4 *)
                                                (*(long *)(*(long *)puVar10 + 0xb8) + 0x54),0);
                  fVar63 = 0.0;
                  if ((uVar27 & 1) != 0) {
                    lVar22 = unaff_x19[0x22];
                    if (*(int *)(*(long *)puVar10 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    if (lVar22 == 0) goto LAB_0249920c;
                    fVar74 = (float)FUN_0267f610(lVar22,*(undefined4 *)
                                                         (*(long *)(*(long *)puVar10 + 0xb8) + 0x54)
                                                 ,0);
                    if ((*in_stack_00000138 == 0) || (unaff_x19[0x22] == 0)) goto LAB_0249920c;
                    fVar62 = *(float *)(*in_stack_00000138 + 0x1b0);
                    fVar63 = (float)FUN_0267f610(unaff_x19[0x22],
                                                 *(undefined4 *)
                                                  (*(long *)(*(long *)puVar10 + 0xb8) + 0xcc),0);
                    fVar63 = fVar63 * fVar74 * fVar62 * 0.25;
                    if (fVar74 < fVar53 + fVar63) {
                      fVar53 = fVar74 - fVar63;
                    }
                  }
                }
                if (*in_stack_00000138 == 0) goto LAB_0249920c;
                fVar74 = *(float *)(*in_stack_00000138 + 0x1b4);
              }
              else {
                lVar22 = unaff_x19[0x22];
                if (*(int *)(*(long *)
                              System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo
                            + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                }
                uVar27 = FUN_02681b9c(lVar22,0,0);
                fVar74 = 0.0;
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
                        fVar62 = (float)FUN_0267f610(lVar22,*(undefined4 *)
                                                             (*(long *)(*(long *)puVar10 + 0xb8) +
                                                             0x54),0);
                        if ((*in_stack_00000138 != 0) && (unaff_x19[0x22] != 0)) {
                          fVar75 = *(float *)(*in_stack_00000138 + 0x1a8);
                          fVar63 = (float)FUN_0267f610(unaff_x19[0x22],
                                                       *(undefined4 *)
                                                        (*(long *)(*(long *)puVar10 + 0xb8) + 0xcc),
                                                       0);
                          fVar63 = fVar63 * fVar62 * fVar75 * 0.25;
                          if (fVar62 < fVar53 + fVar63) {
                            fVar53 = fVar62 - fVar63;
                          }
                          goto LAB_024934bc;
                        }
                      }
                      goto LAB_0249920c;
                    }
                  }
                }
                fVar63 = 0.0;
              }
LAB_024934bc:
              fVar76 = *(float *)(unaff_x19 + 199);
              fVar62 = (float)FUN_026fd464(&stack0x00001770,0);
              fVar76 = fVar76 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                                fVar58 * (fVar77 + ((fVar62 - fVar53) - fVar63));
              fVar77 = (float)FUN_026fd46c(&stack0x00001770,0);
              fVar75 = *(float *)((long)unaff_x19 + 0x614) +
                       ((fStack0000000000000134 + fVar58 * (fVar59 + fVar53 + fVar77)) -
                       *(float *)(unaff_x19 + 0x9a));
              fVar77 = (float)FUN_026fd45c(&stack0x00001770,0);
              fVar79 = fVar75 - fVar58 * (fVar53 + fVar53 + fVar77);
              fVar77 = (float)FUN_026fd454(&stack0x00001770,0);
              fVar62 = fVar76 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                                fVar58 * (fVar63 + fVar63 + fVar53 + fVar53 + fVar77);
              fVar77 = fVar76;
              fVar59 = fVar62;
              if (((*(int *)((long)unaff_x19 + 0x63c) == 0) && (cVar32 == '\0')) &&
                 ((*(byte *)((long)unaff_x19 + 0x254) >> 1 & 1) != 0)) {
                fVar73 = (float)(int)unaff_x19[0xbd] * fVar81;
                fVar77 = (float)FUN_026fd46c(&stack0x00001770,0);
                fVar66 = fVar73 * fVar58 * (fVar63 + fVar53 + fVar77);
                fVar77 = (float)FUN_026fd46c(&stack0x00001770,0);
                fVar59 = (float)FUN_026fd45c(&stack0x00001770,0);
                fVar75 = fVar75 + 0.0;
                fVar79 = fVar79 + 0.0;
                fVar73 = fVar73 * fVar58 * (((fVar77 - fVar59) - fVar53) - fVar63);
                fVar59 = fVar62 + fVar73;
                fVar77 = fVar76 + fVar66;
                fVar65 = (fVar66 - fVar73) * 0.5;
                fVar76 = (fVar76 + fVar73) - fVar65;
                fVar62 = (fVar62 + fVar66) - fVar65;
                fVar77 = fVar77 - fVar65;
                fVar59 = fVar59 - fVar65;
              }
              if (*(char *)((long)unaff_x19 + 0x46c) == '\0') {
                fVar66 = 0.0;
                fVar67 = 0.0;
                fVar78 = 0.0;
                fVar65 = 0.0;
                fVar89 = fVar79;
                fVar73 = fVar75;
                fStack00000000000000e8 = fVar77;
                fStack00000000000000ec = fVar76;
              }
              else {
                thunk_FUN_026935f0(lVar23,0);
                fVar80 = (fVar62 + fVar76) * 0.5;
                fVar84 = (fVar79 + fVar75) * 0.5;
                fVar75 = fVar75 - fVar84;
                fVar65 = 0.0;
                fVar73 = fVar75;
                fVar64 = (float)FUN_02692df0(fVar77 - fVar80,lVar23,0);
                fVar65 = fVar65 + 0.0;
                fVar79 = fVar79 - fVar84;
                fVar66 = 0.0;
                fVar77 = fVar79;
                fVar76 = (float)FUN_02692df0(fVar76 - fVar80,lVar23,0);
                fVar66 = fVar66 + 0.0;
                fVar78 = 0.0;
                fVar62 = (float)FUN_02692df0(fVar62 - fVar80,lVar23,0);
                fVar62 = fVar80 + fVar62;
                fVar75 = fVar84 + fVar75;
                fVar78 = fVar78 + 0.0;
                fVar67 = 0.0;
                fVar59 = (float)FUN_02692df0(fVar59 - fVar80,lVar23,0);
                fVar59 = fVar80 + fVar59;
                fVar79 = fVar84 + fVar79;
                fVar67 = fVar67 + 0.0;
                fVar89 = fVar84 + fVar77;
                fVar73 = fVar84 + fVar73;
                fStack00000000000000e8 = fVar80 + fVar64;
                fStack00000000000000ec = fVar80 + fVar76;
              }
              if (*plVar2 == 0) goto LAB_0249920c;
              lVar22 = *(long *)(*plVar2 + 0x38);
              uVar27 = (ulong)(uint)fVar58;
              if (lVar22 == 0) goto LAB_0249920c;
              if (*(uint *)(lVar22 + 0x18) <= *puVar1)
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              lVar22 = lVar22 + (long)(int)*puVar1 * 0x178;
              *(float *)(lVar22 + 0x120) = fVar89;
              *(float *)(lVar22 + 0x11c) = fStack00000000000000ec;
              *(float *)(lVar22 + 0x124) = fVar66;
              if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x38), lVar22 == 0))
              goto LAB_0249920c;
              if (*(uint *)(lVar22 + 0x18) <= *puVar1)
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              lVar22 = lVar22 + (long)(int)*puVar1 * 0x178;
              *(float *)(lVar22 + 0x114) = fVar73;
              *(float *)(lVar22 + 0x110) = fStack00000000000000e8;
              *(float *)(lVar22 + 0x118) = fVar65;
              if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x38), lVar22 == 0))
              goto LAB_0249920c;
              if (*(uint *)(lVar22 + 0x18) <= *puVar1)
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              lVar22 = lVar22 + (long)(int)*puVar1 * 0x178;
              *(float *)(lVar22 + 0x128) = fVar62;
              *(float *)(lVar22 + 300) = fVar75;
              *(float *)(lVar22 + 0x130) = fVar78;
              if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x38), lVar22 == 0))
              goto LAB_0249920c;
              if (*(uint *)(lVar22 + 0x18) <= *puVar1)
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              lVar22 = lVar22 + (long)(int)*puVar1 * 0x178;
              *(float *)(lVar22 + 0x134) = fVar59;
              *(float *)(lVar22 + 0x138) = fVar79;
              *(float *)(lVar22 + 0x13c) = fVar67;
              if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x38), lVar22 == 0))
              goto LAB_0249920c;
              uVar42 = *puVar1;
              lVar36 = (long)(int)uVar42;
              if (*(uint *)(lVar22 + 0x18) <= uVar42)
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              lVar49 = lVar22 + lVar36 * 0x178;
              *(int *)(lVar49 + 0x140) = (int)unaff_x19[199];
              fVar59 = *(float *)(unaff_x19 + 0x9a);
              uVar68 = (ulong)(uint)fVar59;
              fVar77 = *(float *)((long)unaff_x19 + 0x614);
              *(float *)(lVar49 + 0x15c) = (fVar62 - fStack00000000000000ec) / (fVar73 - fVar89);
              *(float *)(lVar49 + 0x14c) = (fStack0000000000000134 - fVar59) + fVar77;
              fVar60 = fVar60 * fVar58;
              if (*(int *)((long)unaff_x19 + 0x63c) == 0) {
                fVar60 = fVar60 / fStack00000000000000f4;
                fVar82 = (fVar82 * fVar58) / fStack00000000000000f4;
              }
              else {
                fVar82 = fVar82 * fVar58;
              }
              uVar33 = *(uint *)(unaff_x19 + 0x92);
              bVar13 = uVar17 != 0;
              fVar60 = fVar77 + fVar60;
              bVar14 = uVar42 != uVar33;
              if (bVar14 && bVar13) {
                fVar77 = *(float *)(unaff_x19 + 0x98);
                lVar22 = lVar22 + lVar36 * 0x178;
                *(float *)(lVar22 + 0x154) = fVar77;
                fVar82 = *(float *)((long)unaff_x19 + 0x4c4);
                *(float *)(lVar22 + 0x148) = fVar77 - fVar59;
                *(float *)(lVar22 + 0x158) = fVar82;
                *(float *)(unaff_x19 + 0x97) = fVar77 - fVar59;
                fVar82 = fVar82 - fVar59;
                *(float *)(lVar22 + 0x150) = fVar82;
              }
              else {
                fVar82 = fVar77 + fVar82;
                fVar62 = fVar60;
                fVar75 = fVar82;
                if (fVar77 != 0.0) {
                  fVar62 = (fVar60 - fVar77) / *(float *)((long)unaff_x19 + 0x3fc);
                  fVar75 = (fVar82 - fVar77) / *(float *)((long)unaff_x19 + 0x3fc);
                  if (fVar62 <= fVar60) {
                    fVar62 = fVar60;
                  }
                  if (fVar82 <= fVar75) {
                    fVar75 = fVar82;
                  }
                }
                lVar22 = lVar22 + lVar36 * 0x178;
                fVar77 = fVar62;
                if (fVar62 <= *(float *)(unaff_x19 + 0x98)) {
                  fVar77 = *(float *)(unaff_x19 + 0x98);
                }
                fVar79 = fVar75;
                if (*(float *)((long)unaff_x19 + 0x4c4) <= fVar75) {
                  fVar79 = *(float *)((long)unaff_x19 + 0x4c4);
                }
                *(float *)((long)unaff_x19 + 0x4c4) = fVar79;
                fVar82 = fVar82 - fVar59;
                *(float *)(unaff_x19 + 0x98) = fVar77;
                *(float *)(lVar22 + 0x154) = fVar62;
                *(float *)(lVar22 + 0x158) = fVar75;
                *(float *)(lVar22 + 0x148) = fVar60 - fVar59;
                *(float *)(unaff_x19 + 0x97) = fVar60 - fVar59;
                *(float *)(lVar22 + 0x150) = fVar82;
              }
              *(float *)((long)unaff_x19 + 0x4bc) = fVar82;
              if (((int)unaff_x19[0x94] == 0) || (*(char *)((long)unaff_x19 + 0x334) != '\0')) {
                if (!bVar14 || !bVar13) {
                  *(float *)(unaff_x19 + 0x96) = fVar77;
                  if (unaff_x19[0x1f] != 0) {
                    fVar77 = *(float *)((long)unaff_x19 + 0x4b4);
                    fVar82 = (float)FUN_026fd150(unaff_x19[0x1f] + 0x50,0);
                    fStack00000000000000f4 = (fVar58 * fVar82) / fStack00000000000000f4;
                    uVar68 = (ulong)*(uint *)(unaff_x19 + 0x9a);
                    if (fVar77 <= fStack00000000000000f4) {
                      fVar77 = fStack00000000000000f4;
                    }
                    *(float *)((long)unaff_x19 + 0x4b4) = fVar77;
                    goto LAB_02493948;
                  }
                  goto LAB_0249920c;
                }
              }
              else {
LAB_02493948:
                if ((!bVar14 || !bVar13) && (float)uVar68 == 0.0) {
                  fVar77 = *(float *)((long)unaff_x19 + 0x4ac);
                  if (*(float *)((long)unaff_x19 + 0x4ac) <= fVar60) {
                    fVar77 = fVar60;
                  }
                  *(float *)((long)unaff_x19 + 0x4ac) = fVar77;
                }
              }
              lVar22 = *plVar2;
              if ((lVar22 == 0) || (lVar36 = *(long *)(lVar22 + 0x38), lVar36 == 0))
              goto LAB_0249920c;
              uVar48 = *puVar1;
              if (*(uint *)(lVar36 + 0x18) <= uVar48)
              goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
              lVar36 = lVar36 + (long)(int)uVar48 * 0x178;
              *(undefined1 *)(lVar36 + 0x194) = 0;
              uVar39 = *(uint *)(unaff_x19 + 0x4e);
              if ((uVar15 != 9) &&
                 (((((uVar17 != 0 || (uVar15 == 3)) || (uVar15 == 0x200b)) || (uVar15 == 0xad)) &&
                  ((!(bool)(uVar15 == 0xad & (bVar12 ^ 1U)) &&
                   (*(int *)((long)unaff_x19 + 0x63c) != 1)))))) {
                if (((uVar15 & 0xfffffffe) == 10) && ((int)unaff_x19[0x5b] == 6)) {
                  fVar60 = (float)uVar68;
                  fVar86 = 0.0;
                  if ((0.0 < fVar60) && (fVar86 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
                    fVar86 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
                  }
                  uVar68 = (ulong)(uint)fVar71;
                  if (fVar71 < (*(float *)(unaff_x19 + 0x96) -
                               (*(float *)((long)unaff_x19 + 0x4c4) - fVar60)) + fVar86) {
                    if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
                      *(uint *)((long)unaff_x19 + 0x2dc) = uVar48;
                    }
                    unaff_x28 = (long *)StringLiteral_302;
                    unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
                    unaff_x26 = (undefined8 *)&stack0x00000880;
                    if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar91 = FUN_024d66ec();
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
                      plVar50 = (long *)unaff_x19[0x5c];
                      uVar70 = (**(code **)(*unaff_x19 + 0x548))();
                      if (plVar50 == (long *)0x0) goto LAB_0249920c;
                      (**(code **)(*plVar50 + 0x558))
                                (plVar50,uVar70,*(undefined8 *)(*plVar50 + 0x560));
                      lVar22 = unaff_x19[0x5c];
                      if (lVar22 == 0) goto LAB_0249920c;
                      *(int *)(lVar22 + 0x3f8) = (int)unaff_x19[0x7f];
                      FUN_024c910c(lVar22,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
                      plVar50 = (long *)unaff_x19[0x5c];
                      if (plVar50 == (long *)0x0) goto LAB_0249920c;
                      (**(code **)(*plVar50 + 0x7d8))(plVar50,0,0,*(undefined8 *)(*plVar50 + 0x7e0))
                      ;
                      *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                    }
                    in_stack_000017a8 = CONCAT44(3,uVar48);
                    goto LAB_02492630;
                  }
                }
                if ((((uVar15 - 0x2007 < 0x23) &&
                     ((1L << ((ulong)(uVar15 - 0x2007) & 0x3f) & 0x600000001U) != 0)) ||
                    (uVar15 - 10 < 2)) || (uVar15 == 0xa0)) {
LAB_024944e4:
                  if (((uVar15 != 0xad) && (uVar15 != 0x200b)) && (uVar15 != 0x2060)) {
                    lVar22 = *plVar2;
                    if ((lVar22 == 0) || (lVar36 = *(long *)(lVar22 + 0x50), lVar36 == 0))
                    goto LAB_0249920c;
                    if (*(uint *)(lVar36 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    lVar36 = lVar36 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                    *(int *)(lVar36 + 0x2c) = *(int *)(lVar36 + 0x2c) + 1;
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
                  fVar86 = *(float *)(unaff_x19 + 0x3c);
                  iVar16 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
                  if (unaff_x19[0xca] == 0) goto LAB_0249920c;
                  fVar77 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
                  lVar22 = unaff_x19[0xc9];
                  fVar60 = fStack0000000000000084;
                  if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
                    fVar60 = 1.0;
                  }
                  if ((lVar22 == 0) || (*(long *)(lVar22 + 0x20) == 0)) goto LAB_0249920c;
                  fVar59 = *(float *)((long)unaff_x19 + 0x3fc);
                  fVar63 = *(float *)(lVar22 + 0x2c);
                  fVar82 = (float)FUN_026fd668(*(long *)(lVar22 + 0x20),0);
                  fVar62 = *(float *)(unaff_x19 + 0x69);
                  fVar82 = fVar59 * (fVar86 / (float)iVar16) * fVar77 * fVar60 * fVar63 * fVar82;
                  fVar86 = *(float *)((long)unaff_x19 + 0x34c);
                  if ((uVar15 == 10) && (*(int *)((long)unaff_x19 + 0x48c) != (int)unaff_x19[0x92]))
                  {
                    if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x38), lVar22 == 0))
                    goto LAB_0249920c;
                    uVar48 = *(int *)((long)unaff_x19 + 0x48c) - 1;
                    if (*(uint *)(lVar22 + 0x18) <= uVar48)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    if (unaff_x19[0xca] == 0) goto LAB_0249920c;
                    fVar60 = *(float *)(lVar22 + (long)(int)uVar48 * 0x178 + 0x60);
                    iVar16 = FUN_026fd110(unaff_x19[0xca] + 0x50,0);
                    if (unaff_x19[0xca] == 0) goto LAB_0249920c;
                    fVar59 = (float)FUN_026fd120(unaff_x19[0xca] + 0x50,0);
                    lVar22 = unaff_x19[0xc9];
                    fVar77 = fStack0000000000000084;
                    if (*(char *)((long)unaff_x19 + 0x2fd) != '\0') {
                      fVar77 = 1.0;
                    }
                    if ((lVar22 == 0) || (*(long *)(lVar22 + 0x20) == 0)) goto LAB_0249920c;
                    fVar63 = *(float *)((long)unaff_x19 + 0x3fc);
                    fVar75 = *(float *)(lVar22 + 0x2c);
                    fVar82 = (float)FUN_026fd668(*(long *)(lVar22 + 0x20),0);
                    if ((*plVar2 == 0) || (lVar22 = *(long *)(*plVar2 + 0x50), lVar22 == 0))
                    goto LAB_0249920c;
                    if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                    fVar62 = *(float *)(lVar22 + 0x60);
                    fVar86 = *(float *)(lVar22 + 100);
                    fVar82 = fVar63 * (fVar60 / (float)iVar16) * fVar59 * fVar77 * fVar75 * fVar82;
                  }
                  fVar63 = *(float *)(unaff_x19 + 0x9a);
                  fVar77 = *(float *)(unaff_x19 + 0x96);
                  fVar75 = *(float *)((long)unaff_x19 + 0x4c4);
                  fVar60 = 0.0;
                  fVar59 = 0.0;
                  if ((0.0 < fVar63) && (fVar59 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
                    fVar59 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
                  }
                  fVar79 = *(float *)(unaff_x19 + 199);
                  if ((char)unaff_x19[0x1d] == '\0') {
                    if ((unaff_x19[0xc9] == 0) ||
                       (lVar22 = *(long *)(unaff_x19[0xc9] + 0x20), lVar22 == 0)) goto LAB_0249920c;
                    FUN_026fd62c(&stack0x00000880,lVar22,0);
                    fVar60 = (float)FUN_026fd474(&stack0x000016e0,0);
                  }
                  puVar10 = System_Threading_Mutex_TypeInfo;
                  fVar76 = *(float *)(unaff_x19 + 0x6b);
                  fVar86 = (fVar85 - fVar62) - fVar86;
                  bVar13 = true;
                  if ((fVar76 <= fVar86) && (bVar13 = false, !NAN(fVar76))) {
                    bVar13 = fVar76 == -1.0;
                  }
                  if (!bVar13) {
                    fVar86 = fVar76;
                  }
                  fVar62 = _DAT_0294c6e8;
                  if ((uVar39 & 0x18) == 0) {
                    fVar62 = 1.0;
                  }
                  if (((fVar77 - (fVar75 - fVar63)) + fVar59 < fVar71) &&
                     (ABS(fVar79) + fVar82 * fVar60 * (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) <
                      fVar62 * fVar86)) {
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
                uVar27 = (ulong)(uint)fVar58;
                fVar86 = 1.0;
                lVar22 = *plVar2;
                if ((lVar22 == 0) || (lVar36 = *(long *)(lVar22 + 0x38), lVar36 == 0))
                goto LAB_0249920c;
                if (*(uint *)(lVar36 + 0x18) <= *puVar1)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                uVar48 = *(uint *)(unaff_x19 + 0x94);
                lVar36 = lVar36 + (long)(int)*puVar1 * 0x178;
                *(uint *)(lVar36 + 100) = uVar48;
                *(int *)(lVar36 + 0x68) = (int)unaff_x19[0x95];
                if ((bVar7) || ((uVar15 < 0xe && ((1 << (ulong)(uVar15 & 0x1f) & 0x2c00U) != 0)))) {
                  lVar22 = *(long *)(lVar22 + 0x50);
                  if (lVar22 == 0) goto LAB_0249920c;
                  if (*(uint *)(lVar22 + 0x18) <= uVar48)
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  if (*(int *)(lVar22 + (long)(int)uVar48 * 0x5c + 0x24) == 1) goto LAB_02494e68;
                }
                else {
                  lVar22 = *(long *)(lVar22 + 0x50);
                  if (lVar22 == 0) goto LAB_0249920c;
LAB_02494e68:
                  if (*(uint *)(lVar22 + 0x18) <= uVar48)
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  *(int *)(lVar22 + (long)(int)uVar48 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
                }
                if (uVar15 == 9) {
                  if (*in_stack_00000138 == 0) goto LAB_0249920c;
                  fVar86 = (float)FUN_026fd208(*in_stack_00000138 + 0x50,0);
                  if (*in_stack_00000138 == 0) goto LAB_0249920c;
                  fVar82 = *(float *)(unaff_x19 + 199);
                  fVar60 = (float)NEON_ucvtf((uint)*(byte *)(*in_stack_00000138 + 0x1b9));
                  fVar86 = fVar58 * fVar86 * fVar60;
                  fVar77 = fVar86 * (float)(int)(fVar82 / fVar86);
                  uVar68 = (ulong)(uint)fVar77;
                  if (fVar77 <= fVar82) {
                    fVar77 = fVar82 + fVar86;
                  }
LAB_02495058:
                  *(float *)(unaff_x19 + 199) = fVar77;
                }
                else if (*(float *)(unaff_x19 + 0x55) == 0.0) {
                  if ((char)unaff_x19[0x1d] == '\0') {
                    if (*(char *)((long)unaff_x19 + 0x46c) != '\0') {
                      fVar86 = (float)thunk_FUN_026935f0(lVar23,0);
                    }
                    fVar77 = *(float *)(unaff_x19 + 199);
                    fVar82 = (float)FUN_026fd474(&stack0x00001770,0);
                    if (unaff_x19[0x1f] != 0) {
                      fVar60 = 1.0 - *(float *)((long)unaff_x19 + 0x2cc);
                      fVar77 = fVar77 + fVar60 * (*(float *)((long)unaff_x19 + 0x2a4) +
                                                 fVar58 * (fVar61 + fVar86 * fVar82) +
                                                 fVar54 * (fVar74 + fStack00000000000000cc +
                                                                    *(float *)(unaff_x19[0x1f] +
                                                                              0x1ac)));
                      *(float *)(unaff_x19 + 199) = fVar77;
                      goto joined_r0x02494fac;
                    }
                    goto LAB_0249920c;
                  }
                  if (*in_stack_00000138 == 0) goto LAB_0249920c;
                  fVar77 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                           (*(float *)((long)unaff_x19 + 0x2a4) +
                           fVar58 * fVar61 +
                           fVar54 * (fVar74 + fStack00000000000000cc +
                                              *(float *)(*in_stack_00000138 + 0x1ac)));
                  uVar68 = (ulong)(uint)fVar77;
                  fVar77 = *(float *)(unaff_x19 + 199) - fVar77;
                  *(float *)(unaff_x19 + 199) = fVar77;
                  if ((uVar17 != 0) || (uVar15 == 0x200b)) {
                    fVar86 = fVar54 * *(float *)((long)unaff_x19 + 0x2ac);
                    uVar68 = (ulong)(uint)fVar86;
                    fVar77 = fVar77 - fVar86;
                    goto LAB_02495058;
                  }
                }
                else {
                  if (*in_stack_00000138 == 0) goto LAB_0249920c;
                  fVar60 = *(float *)(unaff_x19 + 199);
                  fVar77 = fVar60 + (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                                    (*(float *)((long)unaff_x19 + 0x2a4) +
                                    (*(float *)(unaff_x19 + 0x55) - fVar83) +
                                    fVar54 * (fStack00000000000000cc +
                                             *(float *)(*in_stack_00000138 + 0x1ac)));
                  *(float *)(unaff_x19 + 199) = fVar77;
joined_r0x02494fac:
                  if ((uVar17 != 0) || (uVar68 = (ulong)(uint)fVar60, uVar15 == 0x200b)) {
                    fVar86 = fVar54 * *(float *)((long)unaff_x19 + 0x2ac);
                    uVar68 = (ulong)(uint)fVar86;
                    fVar77 = fVar77 + fVar86;
                    goto LAB_02495058;
                  }
                }
                lVar22 = *plVar2;
                if ((lVar22 == 0) || (lVar36 = *(long *)(lVar22 + 0x38), lVar36 == 0))
                goto LAB_0249920c;
                uVar48 = *puVar1;
                uVar39 = (uint)*(undefined8 *)(lVar36 + 0x18);
                if (uVar39 <= uVar48)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                *(float *)(lVar36 + (long)(int)uVar48 * 0x178 + 0x144) = fVar77;
                uVar41 = uVar15;
                if ((int)uVar15 < 0xd) {
                  if ((uVar15 - 10 < 2) || (uVar15 == 3)) goto LAB_024950bc;
FUN_02495710:
                  if (((bool)(bVar7 & uVar15 == 0x2d)) || (uVar48 == uVar21)) goto LAB_024950bc;
                }
                else {
                  if (1 < uVar15 - 0x2028) {
                    if (uVar15 != 0xd) goto FUN_02495710;
                    uVar68 = 0;
                    *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
                    if (uVar48 != uVar21) goto LAB_0249572c;
                  }
LAB_024950bc:
                  if (0.0 < *(float *)(unaff_x19 + 0x9a)) {
                    fVar86 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
                    if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0
                       ) {
                      thunk_FUN_00d32864();
                    }
                    if (((fVar81 < ABS(fVar86)) && (*(char *)((long)unaff_x19 + 700) == '\0')) &&
                       (*(char *)((long)unaff_x19 + 0x334) == '\0')) {
                      FUN_024d6ca8(fVar86);
                      *(float *)((long)unaff_x19 + 0x4bc) =
                           *(float *)((long)unaff_x19 + 0x4bc) - fVar86;
                      *(float *)(unaff_x19 + 0x9a) = fVar86 + *(float *)(unaff_x19 + 0x9a);
                      puVar10 = System_Threading_Mutex_TypeInfo;
                      lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
                      if (*(int *)(lVar22 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                        lVar22 = *(long *)puVar10;
                      }
                      lVar36 = *(long *)(lVar22 + 0xb8);
                      if (*(int *)(lVar36 + 0x7ac) == (int)unaff_x19[0x94]) {
                        if (*(int *)(lVar22 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                          lVar36 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
                        }
                        FUN_013b8de4(lVar36 + 0x11f0,&stack0x00000880,
                                     *(undefined8 *)
                                      Method_System_Threading_ThreadLocal<__Il2CppFullySharedGenericType>_get_IsValueCreated__
                                    );
                        lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
                        memcpy((void *)(*(long *)(lVar22 + 0xb8) + 0x788),&stack0x00000880,0x378);
                        lVar22 = *(long *)(lVar22 + 0xb8);
                        *(float *)(lVar22 + 0x7bc) = fVar86 + *(float *)(lVar22 + 0x7bc);
                        *(float *)(lVar22 + 0x800) = fVar86 + *(float *)(lVar22 + 0x800);
                        memcpy(&stack0x00000190,(void *)(lVar22 + 0x788),0x378);
                        FUN_013b86dc(lVar22 + 0x11f0,&stack0x00000190,
                                     *(undefined8 *)
                                      Method_System_Collections_Generic_List<TextStyle>_get_Item__);
                      }
                    }
                  }
                  fVar77 = *(float *)(unaff_x19 + 0x9a);
                  *(undefined1 *)((long)unaff_x19 + 0x334) = 0;
                  fVar60 = *(float *)((long)unaff_x19 + 0x4c4) - fVar77;
                  fVar86 = *(float *)((long)unaff_x19 + 0x4bc);
                  if (fVar60 <= *(float *)((long)unaff_x19 + 0x4bc)) {
                    fVar86 = fVar60;
                  }
                  *(float *)((long)unaff_x19 + 0x4bc) = fVar86;
                  fVar82 = *(float *)(unaff_x19 + 0x98);
                  if (in_stack_000017b4 == '\0') {
                    fVar92 = fVar86;
                  }
                  if ((*(char *)((long)unaff_x19 + 0x32c) != '\0') &&
                     (((int)unaff_x19[100] <= *(int *)((long)unaff_x19 + 0x48c) ||
                      ((int)unaff_x19[0x65] <= (int)unaff_x19[0x94])))) {
                    in_stack_000017b4 = '\x01';
                  }
                  lVar22 = *plVar2;
                  if ((lVar22 == 0) || (lVar36 = *(long *)(lVar22 + 0x50), lVar36 == 0))
                  goto LAB_0249920c;
                  uVar48 = *(uint *)(unaff_x19 + 0x94);
                  if (*(uint *)(lVar36 + 0x18) <= uVar48)
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  lVar49 = lVar36 + (long)(int)uVar48 * 0x5c;
                  *(int *)(lVar49 + 0x34) = (int)unaff_x19[0x92];
                  iVar16 = (int)unaff_x19[0x92];
                  if ((int)unaff_x19[0x92] <= *(int *)((long)unaff_x19 + 0x494)) {
                    iVar16 = *(int *)((long)unaff_x19 + 0x494);
                  }
                  *(int *)((long)unaff_x19 + 0x494) = iVar16;
                  *(int *)(lVar49 + 0x38) = iVar16;
                  *(undefined4 *)(unaff_x19 + 0x93) = *(undefined4 *)((long)unaff_x19 + 0x48c);
                  *(undefined4 *)(lVar49 + 0x3c) = *(undefined4 *)((long)unaff_x19 + 0x48c);
                  iVar16 = *(int *)((long)unaff_x19 + 0x494);
                  if (*(int *)((long)unaff_x19 + 0x494) <= *(int *)((long)unaff_x19 + 0x49c)) {
                    iVar16 = *(int *)((long)unaff_x19 + 0x49c);
                  }
                  *(int *)((long)unaff_x19 + 0x49c) = iVar16;
                  *(int *)(lVar49 + 0x40) = iVar16;
                  *(int *)(lVar49 + 0x24) = (*(int *)(lVar49 + 0x3c) - *(int *)(lVar49 + 0x34)) + 1;
                  *(undefined4 *)(lVar49 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4a4);
                  lVar22 = *(long *)(lVar22 + 0x38);
                  if (lVar22 == 0) goto LAB_0249920c;
                  if (*(uint *)(lVar22 + 0x18) <= *(uint *)((long)unaff_x19 + 0x494))
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  uVar87 = *(undefined4 *)
                            (lVar22 + (long)(int)*(uint *)((long)unaff_x19 + 0x494) * 0x178 + 0x11c)
                  ;
                  lVar36 = lVar36 + (long)(int)uVar48 * 0x5c;
                  *(float *)(lVar36 + 0x70) = fVar60;
                  *(undefined4 *)(lVar36 + 0x6c) = uVar87;
                  lVar22 = *plVar2;
                  if ((lVar22 == 0) || (lVar36 = *(long *)(lVar22 + 0x50), lVar36 == 0))
                  goto LAB_0249920c;
                  if (*(uint *)(lVar36 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  lVar22 = *(long *)(lVar22 + 0x38);
                  if (lVar22 == 0) goto LAB_0249920c;
                  if (*(uint *)(lVar22 + 0x18) <= *(uint *)((long)unaff_x19 + 0x49c))
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  uVar87 = *(undefined4 *)
                            (lVar22 + (long)(int)*(uint *)((long)unaff_x19 + 0x49c) * 0x178 + 0x128)
                  ;
                  fVar82 = fVar82 - fVar77;
                  lVar36 = lVar36 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                  *(float *)(lVar36 + 0x78) = fVar82;
                  *(undefined4 *)(lVar36 + 0x74) = uVar87;
                  lVar22 = *plVar2;
                  if ((lVar22 == 0) || (lVar49 = *(long *)(lVar22 + 0x50), lVar49 == 0))
                  goto LAB_0249920c;
                  lVar26 = (long)(int)*(uint *)(unaff_x19 + 0x94);
                  if (*(uint *)(lVar49 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  lVar36 = lVar49 + lVar26 * 0x5c;
                  *(float *)(lVar36 + 0x44) = *(float *)(lVar36 + 0x74) - fVar58 * fVar53;
                  *(float *)(lVar36 + 0x5c) = fStack00000000000000d4;
                  if (*(int *)(lVar36 + 0x24) == 1) {
                    *(int *)(lVar49 + lVar26 * 0x5c + 0x68) = (int)unaff_x19[0x4e];
                  }
                  if ((*in_stack_00000138 == 0) || (lVar36 = *(long *)(lVar22 + 0x38), lVar36 == 0))
                  goto LAB_0249920c;
                  lVar45 = (long)(int)*(uint *)((long)unaff_x19 + 0x49c);
                  uVar39 = (uint)*(undefined8 *)(lVar36 + 0x18);
                  if (uVar39 <= *(uint *)((long)unaff_x19 + 0x49c))
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  if ((*(char *)(lVar36 + lVar45 * 0x178 + 0x194) == '\0') &&
                     (lVar45 = (long)(int)*(uint *)(unaff_x19 + 0x93),
                     uVar39 <= *(uint *)(unaff_x19 + 0x93)))
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  fVar58 = (1.0 - *(float *)((long)unaff_x19 + 0x2cc)) *
                           (fVar54 * (fVar74 + fStack00000000000000cc +
                                               *(float *)(*in_stack_00000138 + 0x1ac)) -
                           *(float *)((long)unaff_x19 + 0x2a4));
                  fVar86 = -fVar58;
                  if ((char)unaff_x19[0x1d] != '\0') {
                    fVar86 = fVar58;
                  }
                  lVar49 = lVar49 + lVar26 * 0x5c;
                  *(float *)(lVar49 + 0x58) = *(float *)(lVar36 + lVar45 * 0x178 + 0x144) + fVar86;
                  fVar86 = *(float *)(unaff_x19 + 0x9a);
                  *(float *)(lVar49 + 0x48) = fStack0000000000000054 * fVar52 + (fVar82 - fVar60);
                  *(float *)(lVar49 + 0x4c) = fVar82;
                  uVar68 = (ulong)(uint)(0.0 - fVar86);
                  *(float *)(lVar49 + 0x50) = 0.0 - fVar86;
                  *(float *)(lVar49 + 0x54) = fVar60;
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
                            fVar86 = *(float *)(lVar22 + (long)(int)*puVar1 * 0x178 + 0x154);
                            if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
                              fVar60 = 0.0;
                              if ((uVar15 == 0x2029) || (uVar15 == 10)) {
                                fVar60 = *(float *)((long)unaff_x19 + 0x2c4);
                              }
                              uVar31 = 0;
                              fVar60 = *(float *)(unaff_x19 + 0x9a) +
                                       fVar86 + (0.0 - *(float *)((long)unaff_x19 + 0x4c4)) +
                                       fStack0000000000000054 *
                                       (fVar52 + *(float *)((long)unaff_x19 + 0x2b4)) +
                                       fVar54 * (*(float *)(unaff_x19 + 0x56) + fVar60);
                            }
                            else {
                              if ((uVar15 == 0x2029) || (fVar60 = 0.0, uVar15 == 10)) {
                                fVar60 = *(float *)((long)unaff_x19 + 0x2c4);
                              }
                              uVar31 = 1;
                              fVar60 = *(float *)(unaff_x19 + 0x9a) +
                                       *(float *)(unaff_x19 + 0x57) +
                                       fVar54 * (*(float *)(unaff_x19 + 0x56) + fVar60);
                            }
                            *(float *)(unaff_x19 + 0x9a) = fVar60;
                            *(undefined1 *)((long)unaff_x19 + 700) = uVar31;
                            lVar22 = *unaff_x29;
                            if (*(int *)(lVar22 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                              lVar22 = *unaff_x29;
                            }
                            uVar70 = *(undefined8 *)(*(long *)(lVar22 + 0xb8) + 0x15a8);
                            *(float *)(unaff_x19 + 0x99) = fVar86;
                            uVar68 = NEON_rev64(uVar70,4);
                            unaff_x19[0x98] = uVar68;
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
                      uVar91 = (uint)*(undefined8 *)(unaff_x19[0x8e] + 0x18);
                      uVar41 = 3;
                    }
                  }
                  else if ((uVar15 - 0x2028 < 2) || (uVar15 == 0x2d))
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__OnSelectEntering;
                }
LAB_0249572c:
                uVar48 = *puVar1;
                if (uVar39 <= uVar48)
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                if (*(char *)(lVar36 + (long)(int)uVar48 * 0x178 + 0x194) != '\0') {
                  lVar36 = lVar36 + (long)(int)uVar48 * 0x178;
                  uVar25 = *(ulong *)(lVar36 + 0x11c);
                  uVar68 = *(ulong *)((long)unaff_x19 + 0x4d4);
                  *(ulong *)((long)unaff_x19 + 0x4d4) =
                       uVar25 ^ (uVar25 ^ uVar68) &
                                CONCAT44(-(uint)((float)(uVar68 >> 0x20) < (float)(uVar25 >> 0x20)),
                                         -(uint)((float)uVar68 < (float)uVar25));
                  uVar25 = *(ulong *)((long)unaff_x19 + 0x4dc);
                  uVar68 = *(ulong *)(lVar36 + 0x128);
                  *(ulong *)((long)unaff_x19 + 0x4dc) =
                       uVar68 ^ (uVar68 ^ uVar25) &
                                CONCAT44(-(uint)((float)(uVar68 >> 0x20) < (float)(uVar25 >> 0x20)),
                                         -(uint)((float)uVar68 < (float)uVar25));
                }
                if (((int)unaff_x19[0x5b] == 5) &&
                   ((0xd < uVar41 || ((1 << (ulong)(uVar41 & 0x1f) & 0x2c00U) == 0)))) {
                  lVar36 = *(long *)(lVar22 + 0x58);
                  if (lVar36 == 0) goto LAB_0249920c;
                  iVar16 = (int)unaff_x19[0x95] + 1;
                  if (*(int *)(lVar36 + 0x18) < iVar16) {
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
                  lVar36 = *(long *)(lVar22 + 0x58);
                  if (lVar36 == 0) goto LAB_0249920c;
                  uVar39 = *(uint *)(unaff_x19 + 0x95);
                  lVar49 = (long)(int)uVar39;
                  uVar48 = *(uint *)(lVar36 + 0x18);
                  if (uVar48 <= uVar39)
                  goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                  lVar26 = lVar36 + lVar49 * 0x14;
                  fVar60 = *(float *)(lVar26 + 0x30);
                  uVar68 = (ulong)(uint)fVar60;
                  *(undefined4 *)(lVar26 + 0x28) = *(undefined4 *)((long)unaff_x19 + 0x4ac);
                  fVar86 = *(float *)((long)unaff_x19 + 0x4bc);
                  if (fVar60 <= *(float *)((long)unaff_x19 + 0x4bc)) {
                    fVar86 = fVar60;
                  }
                  *(float *)(lVar26 + 0x30) = fVar86;
                  uVar41 = *(uint *)((long)unaff_x19 + 0x48c);
                  if (uVar41 == 0 && uVar39 == 0) {
                    *(uint *)(lVar36 + lVar49 * 0x14 + 0x20) = uVar41;
                  }
                  else {
                    uVar47 = uVar41 - 1;
                    if (0 < (int)uVar41) {
                      lVar22 = *(long *)(lVar22 + 0x38);
                      if (lVar22 == 0) goto LAB_0249920c;
                      if (*(uint *)(lVar22 + 0x18) <= uVar47)
                      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                      if (uVar39 != *(uint *)(lVar22 + (long)(int)uVar47 * 0x178 + 0x68)) {
                        if (uVar39 - 1 < uVar48) {
                          *(uint *)(lVar36 + 0x20 + (long)(int)(uVar39 - 1) * 0x14 + 4) = uVar47;
                          *(uint *)(lVar36 + 0x20 + lVar49 * 0x14) = uVar41;
                          goto LAB_024957b0;
                        }
                        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                      }
                    }
                    if (uVar41 == uVar21) {
                      *(uint *)(lVar36 + lVar49 * 0x14 + 0x24) = uVar21;
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
                      uVar25 = FUN_0129aa60(*(long *)(lVar22 + 0x10),&stack0x00000880,
                                            *(undefined8 *)
                                             System_Collections_Generic_Dictionary<Type,_TrackBindingTypeAttribute>_TypeInfo
                                           );
                      if ((int)*puVar1 < (int)uVar21) {
                        lVar22 = FUN_024e94b0(0);
                        if (((lVar22 != 0) && (*plVar2 != 0)) &&
                           (lVar36 = *(long *)(*plVar2 + 0x38), lVar36 != 0)) {
                          if (*(uint *)(lVar36 + 0x18) <= *puVar1 + 1)
                          goto 
                          UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                          if (*(long *)(lVar22 + 0x18) != 0) {
                            in_stack_00000880 =
                                 (uint)*(ushort *)(lVar36 + (long)(int)(*puVar1 + 1) * 0x178 + 0x20)
                            ;
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
                      in_stack_00000880 = uVar15;
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
                      if (uVar42 != uVar33 || ((bVar9 ^ 0xff) & 1) != 0) goto LAB_02495b70;
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
              *(undefined1 *)(lVar36 + 0x194) = 1;
              pfVar37 = (float *)((long)unaff_x19 + 0x34c);
              pfVar40 = (float *)(unaff_x19 + 0x69);
              if (bVar7) {
                lVar22 = *(long *)(lVar22 + 0x50);
                if (lVar22 == 0) goto LAB_0249920c;
                if (*(uint *)(lVar22 + 0x18) <= *(uint *)(unaff_x19 + 0x94))
                goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                lVar22 = lVar22 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                pfVar40 = (float *)(lVar22 + 0x60);
                pfVar37 = (float *)(lVar22 + 100);
              }
              fVar77 = *pfVar40;
              fVar82 = *pfVar37;
              fVar60 = *(float *)(unaff_x19 + 0x6b);
              fVar59 = *(float *)(unaff_x19 + 199);
              fStack00000000000000d4 = (fVar85 - fVar77) - fVar82;
              bVar13 = true;
              if ((fVar60 <= fStack00000000000000d4) && (bVar13 = false, !NAN(fVar60))) {
                bVar13 = fVar60 == -1.0;
              }
              if (!bVar13) {
                fStack00000000000000d4 = fVar60;
              }
              fVar60 = 0.0;
              if ((char)unaff_x19[0x1d] == '\0') {
                fVar60 = (float)FUN_026fd474(&stack0x00001770,0);
                uVar68 = (ulong)*(uint *)(unaff_x19 + 0x9a);
              }
              fVar79 = *(float *)((long)unaff_x19 + 0x4c4);
              fVar62 = *(float *)((long)unaff_x19 + 0x2cc);
              fVar75 = (float)uVar68;
              if (uVar15 != 0xad) {
                fVar86 = fVar58;
              }
              fVar76 = 0.0;
              if ((0.0 < fVar75) && (fVar76 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0')) {
                fVar76 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
              }
              fVar76 = (*(float *)(unaff_x19 + 0x96) - (fVar79 - fVar75)) + fVar76;
              uVar48 = *puVar1;
              if (fVar76 <= fVar71) {
UnityEngine_XR_Interaction_Toolkit_XRBaseControllerInteractor__get_playHapticsOnHoverExited:
                unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
                fVar75 = 1.0 - fVar62;
                uVar68 = (ulong)(uint)fVar75;
                fVar60 = ABS(fVar59) + fVar60 * fVar75 * fVar86;
                fVar86 = _DAT_0294c6e8;
                if ((uVar39 & 0x18) == 0) {
                  fVar86 = 1.0;
                }
                if (fVar60 <= fVar86 * fStack00000000000000d4) {
LAB_02494950:
                  if (uVar15 != 0xad) {
                    if (uVar15 == 9) {
                      lVar22 = *plVar2;
                      if ((lVar22 != 0) && (lVar36 = *(long *)(lVar22 + 0x38), lVar36 != 0)) {
                        uVar48 = *puVar1;
                        if (*(uint *)(lVar36 + 0x18) <= uVar48)
                        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                        *(undefined1 *)(lVar36 + (long)(int)uVar48 * 0x178 + 0x194) = 0;
                        *(uint *)((long)unaff_x19 + 0x49c) = uVar48;
                        lVar36 = *(long *)(lVar22 + 0x50);
                        if (lVar36 != 0) {
                          if (*(uint *)(unaff_x19 + 0x94) < *(uint *)(lVar36 + 0x18)) {
                            lVar36 = lVar36 + (long)(int)*(uint *)(unaff_x19 + 0x94) * 0x5c;
                            *(int *)(lVar36 + 0x2c) = *(int *)(lVar36 + 0x2c) + 1;
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
                        (**(code **)(*unaff_x19 + 0x8b8))(fVar53,fVar63);
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
                          *(float *)(lVar22 + 0x60) = fVar77;
                          *(float *)(lVar22 + 100) = fVar82;
                          goto LAB_02494abc;
                        }
                        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
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
                if (((char)unaff_x19[0x5a] != '\0') && (uVar48 != *(uint *)(unaff_x19 + 0x92))) {
                  if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar91 = FUN_024d66ec();
                  if (*(float *)(unaff_x19 + 0x57) == DAT_02958224) {
                    lVar22 = *plVar2;
                    if ((lVar22 == 0) || (lVar36 = *(long *)(lVar22 + 0x38), lVar36 == 0))
                    goto LAB_0249920c;
                    if (*(uint *)(lVar36 + 0x18) <= *puVar1)
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    fVar59 = *(float *)(unaff_x19 + 0x9a);
                    fVar62 = 0.0;
                    if ((0.0 < fVar59) && (fVar62 = 0.0, *(char *)((long)unaff_x19 + 700) == '\0'))
                    {
                      fVar62 = *(float *)(unaff_x19 + 0x98) - *(float *)(unaff_x19 + 0x99);
                    }
                    fVar62 = fVar54 * *(float *)(unaff_x19 + 0x56) +
                             *(float *)(lVar36 + (long)(int)*puVar1 * 0x178 + 0x154) +
                             (fVar62 - *(float *)((long)unaff_x19 + 0x4c4)) +
                             fStack0000000000000054 * (fVar52 + *(float *)((long)unaff_x19 + 0x2b4))
                    ;
                  }
                  else {
                    lVar22 = unaff_x19[0x6c];
                    *(undefined1 *)((long)unaff_x19 + 700) = 1;
                    if (lVar22 == 0) goto LAB_0249920c;
                    fVar59 = *(float *)(unaff_x19 + 0x9a);
                    fVar62 = *(float *)(unaff_x19 + 0x57) + fVar54 * *(float *)(unaff_x19 + 0x56);
                  }
                  puVar10 = System_Threading_Mutex_TypeInfo;
                  lVar22 = *(long *)(lVar22 + 0x38);
                  if (lVar22 != 0) {
                    uVar41 = *(uint *)((long)unaff_x19 + 0x48c);
                    if ((*(uint *)(lVar22 + 0x18) <= uVar41) ||
                       (uVar47 = uVar41 - 1, *(uint *)(lVar22 + 0x18) <= uVar47))
                    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                    uVar68 = (ulong)(uint)(fVar62 + *(float *)(unaff_x19 + 0x96));
                    fVar75 = (fVar62 + *(float *)(unaff_x19 + 0x96) + fVar59) -
                             *(float *)(lVar22 + (long)(int)uVar41 * 0x178 + 0x158);
                    if ((bVar12 || *(short *)(lVar22 + (long)(int)uVar47 * 0x178 + 0x20) != 0xad) ||
                       ((fVar71 <= fVar75 && ((int)unaff_x19[0x5b] != 0)))) {
                      if (*(short *)(lVar22 + (long)(int)uVar41 * 0x178 + 0x20) == 0xad) {
                        bVar12 = true;
                      }
                      else {
                        if ((bVar9 & *(byte *)(unaff_x19 + 0x46)) != 0) {
                          fVar62 = *(float *)((long)unaff_x19 + 0x2cc);
                          fVar59 = *(float *)(unaff_x19 + 0x59) / 100.0;
                          if ((fVar59 <= fVar62) ||
                             ((int)unaff_x19[0x48] <= *(int *)((long)unaff_x19 + 0x23c))) {
                            fVar62 = *(float *)((long)unaff_x19 + 0x1dc);
                            uVar68 = (ulong)(uint)fVar62;
                            fVar59 = *(float *)(unaff_x19 + 0x49);
                            if ((fVar59 < fVar62) &&
                               (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
                            goto LAB_02499210;
                            goto LAB_024946c0;
                          }
LAB_024992ac:
                          fVar52 = fVar60;
                          if (0.0 < fVar62) {
                            fVar52 = fVar60 / (1.0 - fVar62);
                          }
                          fVar62 = fVar62 + (fVar60 - fVar86 * (fStack00000000000000d4 +
                                                               DAT_02958218)) / fVar52;
LAB_0249929c:
                          if (fVar59 <= fVar62) {
                            fVar62 = fVar59;
                          }
                          *(float *)((long)unaff_x19 + 0x2cc) = fVar62;
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
                          uVar91 = FUN_024d66ec();
                          if ((unaff_x19[0x6c] == 0) ||
                             (lVar22 = *(long *)(unaff_x19[0x6c] + 0x38), lVar22 == 0))
                          goto LAB_0249920c;
                          uVar47 = *puVar1 - 1;
                          if (*(uint *)(lVar22 + 0x18) <= uVar47)
                          goto 
                          UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
                          fStack0000000000000034 = (float)iVar16;
                          if (*(short *)(lVar22 + (long)(int)uVar47 * 0x178 + 0x20) == 0xad) {
                            *puVar1 = uVar47;
                            goto LAB_024947b4;
                          }
                        }
                        if (fVar71 < fVar75) {
                          if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
                            *(undefined4 *)((long)unaff_x19 + 0x2dc) =
                                 *(undefined4 *)((long)unaff_x19 + 0x48c);
                          }
                          unaff_x28 = (long *)StringLiteral_302;
                          unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
                          if ((char)unaff_x19[0x46] != '\0') {
                            fVar59 = *(float *)(unaff_x19 + 0x58);
                            if ((fVar59 < *(float *)((long)unaff_x19 + 0x2b4)) &&
                               (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                              fVar52 = *(float *)((long)unaff_x19 + 0x2b4) +
                                       ((fVar88 - fVar75) / (float)((int)unaff_x19[0x94] + 1)) /
                                       fStack0000000000000054;
                              if (fVar52 <= fVar59) {
                                fVar52 = fVar59;
                              }
LAB_024964c8:
                              *(float *)((long)unaff_x19 + 0x2b4) = fVar52;
                              return;
                            }
                            fVar62 = *(float *)((long)unaff_x19 + 0x2cc);
                            fVar59 = *(float *)(unaff_x19 + 0x59) / 100.0;
                            if ((fVar62 < fVar59) &&
                               (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
                            goto LAB_024992ac;
                            fVar62 = *(float *)((long)unaff_x19 + 0x1dc);
                            uVar68 = (ulong)(uint)fVar62;
                            fVar59 = *(float *)(unaff_x19 + 0x49);
                            if ((fVar59 < fVar62) &&
                               (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48]))
                            goto LAB_02499210;
                          }
                          switch((int)unaff_x19[0x5b]) {
                          case 0:
                          case 2:
                          case 4:
                            uVar68 = uVar27;
                            FUN_024d7014(fStack0000000000000054,uVar27,fVar54,
                                         *(undefined4 *)((long)unaff_x19 + 0x2f4),fVar74,
                                         fStack00000000000000cc,fStack00000000000000d4,fVar52);
                            break;
                          case 1:
                            lVar22 = *(long *)System_Threading_Mutex_TypeInfo;
                            if (*(int *)(lVar22 + 0xe0) == 0) {
                              thunk_FUN_00d32864();
                              lVar22 = *unaff_x29;
                            }
                            lVar36 = *(long *)(lVar22 + 0xb8);
                            lVar22 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
                            if ((*(byte *)(lVar22 + 0x132) & 1) == 0) {
                              lVar22 = FUN_00d5941c(lVar22);
                            }
                            lVar22 = *(long *)(*(long *)(lVar22 + 0xc0) + 8);
                            if ((*(byte *)(lVar22 + 0x132) & 1) == 0) {
                              lVar22 = FUN_00d5941c();
                            }
                            piVar28 = (int *)thunk_FUN_00d32ed4(lVar36 + 0x11f0,
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
                            uVar91 = FUN_024d66ec();
                            bVar12 = false;
                            goto LAB_0249408c;
                          case 5:
                            *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
                            uVar68 = uVar27;
                            FUN_024d7014(fStack0000000000000054,uVar27,fVar54,
                                         *(undefined4 *)((long)unaff_x19 + 0x2f4),fVar74,
                                         fStack00000000000000cc,fStack00000000000000d4,fVar52);
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
                              plVar50 = (long *)unaff_x19[0x5c];
                              uVar70 = (**(code **)(*unaff_x19 + 0x548))();
                              if (plVar50 == (long *)0x0) goto LAB_0249920c;
                              (**(code **)(*plVar50 + 0x558))
                                        (plVar50,uVar70,*(undefined8 *)(*plVar50 + 0x560));
                              lVar22 = unaff_x19[0x5c];
                              if (lVar22 == 0) goto LAB_0249920c;
                              *(int *)(lVar22 + 0x3f8) = (int)unaff_x19[0x7f];
                              FUN_024c910c(lVar22,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
                              plVar50 = (long *)unaff_x19[0x5c];
                              if (plVar50 == (long *)0x0) goto LAB_0249920c;
                              (**(code **)(*plVar50 + 0x7d8))
                                        (plVar50,0,0,*(undefined8 *)(*plVar50 + 0x7e0));
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
                        uVar68 = uVar27;
                        FUN_024d7014(fStack0000000000000054,uVar27,fVar54,
                                     *(undefined4 *)((long)unaff_x19 + 0x2f4),fVar74,
                                     fStack00000000000000cc,fStack00000000000000d4,fVar52);
                        bVar9 = 1;
                        bVar12 = false;
                        bVar8 = true;
                      }
                    }
                    else {
                      *puVar1 = uVar47;
LAB_024947b4:
                      in_stack_000017a8 = CONCAT44(0x2d,uVar47);
                      uVar91 = uVar91 - 1;
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
                  fVar59 = *(float *)(unaff_x19 + 0x59) / 100.0;
                  if (fVar62 < fVar59) {
                    fVar52 = fVar60 / fVar75;
                    if (fVar62 <= 0.0) {
                      fVar52 = fVar60;
                    }
                    fVar62 = fVar62 + (fVar60 - fVar86 * (fStack00000000000000d4 + DAT_02958218)) /
                                      fVar52;
                    goto LAB_0249929c;
                  }
                  fVar62 = *(float *)((long)unaff_x19 + 0x1dc);
                  uVar68 = (ulong)(uint)fVar62;
                  fVar59 = *(float *)(unaff_x19 + 0x49);
                  if (fVar62 <= fVar59) goto LAB_02493e34;
LAB_02499210:
                  fVar52 = (fVar62 - *(float *)(unaff_x19 + 0x47)) * 0.5;
                  if (fVar52 <= DAT_028aa298) {
                    fVar52 = DAT_028aa298;
                  }
                  *(float *)((long)unaff_x19 + 0x234) = fVar62;
                  fVar53 = (fVar62 - fVar52) * 20.0 + 0.5;
                  fVar52 = DAT_02958220;
                  if (fVar53 != INFINITY) {
                    fVar52 = (float)(int)fVar53 / 20.0;
                  }
                  if (fVar52 <= fVar59) {
                    fVar52 = fVar59;
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
                  lVar36 = *(long *)(lVar22 + 0xb8);
                  lVar22 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
                  if ((*(byte *)(lVar22 + 0x132) & 1) == 0) {
                    lVar22 = FUN_00d5941c(lVar22);
                  }
                  lVar22 = *(long *)(*(long *)(lVar22 + 0xc0) + 8);
                  if ((*(byte *)(lVar22 + 0x132) & 1) == 0) {
                    lVar22 = FUN_00d5941c();
                  }
                  piVar28 = (int *)thunk_FUN_00d32ed4(lVar36 + 0x11f0,
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
                uVar91 = FUN_024d66ec();
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
                  plVar50 = (long *)unaff_x19[0x5c];
                  uVar70 = (**(code **)(*unaff_x19 + 0x548))();
                  if (plVar50 == (long *)0x0) goto LAB_0249920c;
                  (**(code **)(*plVar50 + 0x558))(plVar50,uVar70,*(undefined8 *)(*plVar50 + 0x560));
                  lVar22 = unaff_x19[0x5c];
                  if (lVar22 == 0) goto LAB_0249920c;
                  *(int *)(lVar22 + 0x3f8) = (int)unaff_x19[0x7f];
                  FUN_024c910c(lVar22,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
                  plVar50 = (long *)unaff_x19[0x5c];
                  if (plVar50 == (long *)0x0) goto LAB_0249920c;
                  (**(code **)(*plVar50 + 0x7d8))(plVar50,0,0,*(undefined8 *)(*plVar50 + 0x7e0));
                  *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                }
LAB_02494484:
                unaff_x26 = (undefined8 *)&stack0x00000880;
                in_stack_000017a8 = CONCAT44(3,*puVar1);
              }
              else {
                if (*(int *)((long)unaff_x19 + 0x2dc) == -1) {
                  *(uint *)((long)unaff_x19 + 0x2dc) = uVar48;
                }
                unaff_x28 = (long *)StringLiteral_302;
                unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
                uVar70 = DAT_02941c08;
                if ((char)unaff_x19[0x46] != '\0') {
                  fVar73 = *(float *)(unaff_x19 + 0x58);
                  if (((fVar73 < *(float *)((long)unaff_x19 + 0x2b4)) && (0.0 < fVar75)) &&
                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                    fVar52 = *(float *)((long)unaff_x19 + 0x2b4) +
                             ((fVar88 - fVar76) / (float)(int)unaff_x19[0x94]) /
                             fStack0000000000000054;
                    if (fVar52 <= fVar73) {
                      fVar52 = fVar73;
                    }
                    goto LAB_024964c8;
                  }
                  fVar76 = *(float *)((long)unaff_x19 + 0x1dc);
                  fVar75 = *(float *)(unaff_x19 + 0x49);
                  uVar68 = (ulong)(uint)fVar75;
                  if ((fVar75 < fVar76) &&
                     (*(int *)((long)unaff_x19 + 0x23c) < (int)unaff_x19[0x48])) {
                    fVar52 = (fVar76 - *(float *)(unaff_x19 + 0x47)) * 0.5;
                    if (fVar52 <= DAT_028aa298) {
                      fVar52 = DAT_028aa298;
                    }
                    fVar53 = (fVar76 - fVar52) * 20.0 + 0.5;
                    fVar52 = DAT_02958220;
                    if (fVar53 != INFINITY) {
                      fVar52 = (float)(int)fVar53 / 20.0;
                    }
                    if (fVar52 <= fVar75) {
                      fVar52 = fVar75;
                    }
                    *(float *)((long)unaff_x19 + 0x234) = fVar76;
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
                  lVar36 = *(long *)(lVar22 + 0xb8);
                  lVar22 = *(long *)(*(long *)StringLiteral_5656 + 0x20);
                  if ((*(byte *)(lVar22 + 0x132) & 1) == 0) {
                    lVar22 = FUN_00d5941c(lVar22);
                  }
                  unaff_x28 = (long *)StringLiteral_302;
                  lVar22 = *(long *)(*(long *)(lVar22 + 0xc0) + 8);
                  if ((*(byte *)(lVar22 + 0x132) & 1) == 0) {
                    lVar22 = FUN_00d5941c();
                  }
                  piVar28 = (int *)thunk_FUN_00d32ed4(lVar36 + 0x11f0,
                                                      *(long *)(lVar22 + 0x80) + 0xa0);
                  if (*piVar28 == 0) {
LAB_02495f00:
                    in_stack_000017a8 = DAT_02941c08;
                    unaff_x26 = (undefined8 *)&stack0x00000880;
                    puVar1[0] = 0;
                    puVar1[1] = 0;
                    uVar91 = 0xffffffff;
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
                    iVar51 = *(int *)((long)unaff_x19 + 0x48c) + -1;
                    *(int *)((long)unaff_x19 + 0x48c) = iVar51;
                    in_stack_000017a8 = CONCAT44(0x2026,iVar51);
                    iVar20 = iVar20 + 1;
                    uVar91 = iVar16 - 1;
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
                  uVar91 = FUN_024d66ec();
                  goto LAB_0249408c;
                case 5:
                  if ((uVar48 != 0) && (-1 < (int)uVar91)) {
                    fVar86 = *(float *)(unaff_x19 + 0x98);
                    unaff_x26 = (undefined8 *)&stack0x00000880;
                    if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar91 = FUN_024d66ec();
                    if (fVar86 - fVar79 <= fVar71) {
                      *(undefined1 *)((long)unaff_x19 + 0x334) = 1;
                      *(undefined4 *)(unaff_x19 + 0x92) = *(undefined4 *)((long)unaff_x19 + 0x48c);
                      uVar68 = *(ulong *)(*(long *)(*unaff_x29 + 0xb8) + 0x15a8);
                      *(float *)(unaff_x19 + 199) = *(float *)((long)unaff_x19 + 0x404) + 0.0;
                      *(undefined4 *)(unaff_x19 + 0x99) = 0;
                      lVar22 = NEON_rev64(uVar68,4);
                      unaff_x19[0x98] = lVar22;
                      *(undefined4 *)(unaff_x19 + 0x9a) = 0;
                      *(undefined8 *)((long)unaff_x19 + 0x4ac) = 0;
                      *(int *)(unaff_x19 + 0x94) = (int)unaff_x19[0x94] + 1;
                      *(int *)(unaff_x19 + 0x95) = (int)unaff_x19[0x95] + 1;
                      break;
                    }
                    goto LAB_0249408c;
                  }
                  uVar91 = 0xffffffff;
                  *puVar1 = 0;
                  in_stack_000017a8 = uVar70;
LAB_024944c4:
                  unaff_x26 = (undefined8 *)&stack0x00000880;
                  unaff_x28 = (long *)StringLiteral_302;
                  unaff_x29 = (long *)System_Threading_Mutex_TypeInfo;
                  break;
                case 6:
                  if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                  }
                  uVar91 = FUN_024d66ec();
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
                    plVar50 = (long *)unaff_x19[0x5c];
                    uVar70 = (**(code **)(*unaff_x19 + 0x548))();
                    if (plVar50 == (long *)0x0) goto LAB_0249920c;
                    (**(code **)(*plVar50 + 0x558))
                              (plVar50,uVar70,*(undefined8 *)(*plVar50 + 0x560));
                    lVar22 = unaff_x19[0x5c];
                    if (lVar22 == 0) goto LAB_0249920c;
                    *(int *)(lVar22 + 0x3f8) = (int)unaff_x19[0x7f];
                    FUN_024c910c(lVar22,*(undefined4 *)((long)unaff_x19 + 0x48c),0);
                    plVar50 = (long *)unaff_x19[0x5c];
                    if (plVar50 == (long *)0x0) goto LAB_0249920c;
                    (**(code **)(*plVar50 + 0x7d8))(plVar50,0,0,*(undefined8 *)(*plVar50 + 0x7e0));
                    *(undefined1 *)(unaff_x19 + 0x5e) = 1;
                  }
LAB_0249408c:
                  unaff_x26 = (undefined8 *)&stack0x00000880;
                  in_stack_000017a8 = CONCAT44(3,uVar48);
                }
              }
LAB_02492630:
              uVar91 = uVar91 + 1;
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
  goto LAB_0249920c;
LAB_02496a50:
  do {
    uVar91 = uVar42 - 1;
    if (*(uint *)(lVar22 + 0x18) <= uVar91)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*plVar2 == 0) || (lVar36 = *(long *)(*plVar2 + 0x50), lVar36 == 0)) goto LAB_0249920c;
    lVar26 = (long)(int)uVar91;
    lVar49 = lVar22 + lVar26 * 0x178;
    uVar33 = *(uint *)(lVar49 + 100);
    if (*(uint *)(lVar36 + 0x18) <= uVar33)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar43 = *(long *)(lVar49 + 0x38);
    uVar5 = *(ushort *)(lVar49 + 0x20);
    lVar45 = (long)(int)uVar33;
    lVar36 = lVar36 + lVar45 * 0x5c;
    uVar39 = *(uint *)(lVar36 + 0x3c);
    iVar18 = *(int *)(lVar36 + 0x28);
    iVar19 = *(int *)(lVar36 + 0x2c);
    uVar41 = *(uint *)(lVar36 + 0x40);
    lVar49 = (long)(int)uVar41;
    uVar48 = *(uint *)(lVar36 + 0x68);
    fVar58 = *(float *)(lVar36 + 0x5c);
    fVar82 = *(float *)(lVar36 + 0x60);
    iVar4 = *(int *)(lVar36 + 0x20);
    fVar72 = *(float *)(lVar36 + 0x4c);
    fVar71 = *(float *)(lVar36 + 0x54);
    fVar85 = *(float *)(lVar36 + 0x58);
    fVar60 = *(float *)(lVar36 + 0x6c);
    fVar86 = *(float *)(lVar36 + 0x70);
    fVar81 = *(float *)(lVar36 + 0x74);
    fVar92 = *(float *)(lVar36 + 0x78);
    fVar77 = fVar58 + fVar82;
    uVar47 = (uint)uVar5;
    if ((int)uVar48 < 9) {
      switch(uVar48) {
      case 1:
        if ((char)unaff_x19[0x1d] == '\0') {
          fStack00000000000000c8 = fVar82 + 0.0;
        }
        else {
          fStack00000000000000c8 = 0.0 - fVar85;
        }
        break;
      case 2:
LAB_02496c1c:
        fStack00000000000000c8 = (fVar82 + fVar58 * 0.5) - fVar85 * 0.5;
        break;
      default:
        goto switchD_02496b58_caseD_3;
      case 4:
        fStack00000000000000c8 = fVar77 - fVar85;
        if ((char)unaff_x19[0x1d] != '\0') {
          fStack00000000000000c8 = fVar77;
        }
        break;
      case 8:
        goto switchD_02496b58_caseD_8;
      }
LAB_02496c90:
      uStack00000000000000c0 = 0;
    }
    else if (uVar48 == 0x10) {
switchD_02496b58_caseD_8:
      if (uVar5 < 0xad) {
        if ((uVar47 != 3) && (uVar47 != 10)) goto LAB_02496bac;
      }
      else if ((uVar47 != 0xad) && ((uVar47 != 0x200b && (uVar47 != 0x2060)))) {
LAB_02496bac:
        if (*(uint *)(lVar22 + 0x18) <= uVar39)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar6 = *(undefined2 *)(lVar22 + (long)(int)uVar39 * 0x178 + 0x20);
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar27 = FUN_016f9f84(uVar6,0);
        if ((uVar27 & 1) == 0) {
          bVar14 = (int)uVar33 < (int)unaff_x19[0x94];
        }
        else {
          bVar14 = false;
        }
        if ((fVar85 <= fVar58) && (!bVar14 && (uVar48 >> 4 & 1) == 0)) {
          fStack00000000000000c8 = fVar82;
          if ((char)unaff_x19[0x1d] != '\0') {
            fStack00000000000000c8 = fVar77;
          }
          goto LAB_02496c90;
        }
        if (((uVar42 == 1) || (uVar33 != uVar17)) || (uVar91 == *(uint *)((long)unaff_x19 + 0x31c)))
        {
          fStack00000000000000c8 = fVar82;
          if ((char)unaff_x19[0x1d] != '\0') {
            fStack00000000000000c8 = fVar77;
          }
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uStack0000000000000020 = FUN_016fa418(uVar5,0);
          uStack00000000000000c0 = 0;
        }
        else {
          cVar32 = (char)unaff_x19[0x1d];
          fVar77 = -fVar85;
          if (cVar32 != '\0') {
            fVar77 = fVar85;
          }
          if (*(uint *)(lVar22 + 0x18) <= uVar39)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          fVar85 = 1.0;
          iVar19 = (int)*(char *)(lVar22 + (long)(int)uVar39 * 0x178 + 0x194) +
                   (-iVar4 - (uStack0000000000000020 & 1)) + iVar19 + -1;
          if (0 < iVar19) {
            fVar85 = *(float *)((long)unaff_x19 + 0x2d4);
          }
          if (iVar19 < 1) {
            iVar19 = 1;
          }
          if (uVar47 == 9) {
LAB_02498bb8:
            fVar85 = 1.0 - fVar85;
          }
          else {
            if (uVar47 != 0xa0) {
              if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar27 = FUN_016fa418(uVar5,0);
              cVar32 = (char)unaff_x19[0x1d];
              if ((uVar27 & 1) != 0) goto LAB_02498bb8;
            }
            iVar19 = (iVar4 - (~uStack0000000000000020 & 1)) + iVar18;
          }
          fVar85 = ((fVar58 + fVar77) * fVar85) / (float)iVar19;
          if (cVar32 == '\0') {
            fStack00000000000000c8 = fStack00000000000000c8 + fVar85;
            uStack00000000000000c0 =
                 CONCAT44((float)((ulong)uStack00000000000000c0 >> 0x20) + 0.0,
                          (float)uStack00000000000000c0 + 0.0);
          }
          else {
            fStack00000000000000c8 = fStack00000000000000c8 - fVar85;
          }
        }
      }
    }
    else if (uVar48 == 0x20) {
      fVar85 = fVar60 + fVar81;
      goto LAB_02496c1c;
    }
switchD_02496b58_caseD_3:
    uVar48 = (uint)*(undefined8 *)(lVar22 + 0x18);
    if (uVar48 <= uVar91)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar36 = lVar22 + lVar26 * 0x178;
    fVar77 = fVar53 + fStack00000000000000c8;
    fVar85 = (float)uStack0000000000000090 + (float)uStack00000000000000c0;
    fVar58 = (float)((ulong)uStack0000000000000090 >> 0x20) +
             (float)((ulong)uStack00000000000000c0 >> 0x20);
    if (*(char *)(lVar36 + 0x194) == '\0') goto LAB_02497688;
    iVar18 = *(int *)(lVar22 + lVar26 * 0x178 + 0x2c);
    if (iVar18 != 0) goto LAB_02497374;
    fVar57 = fmodf(*(float *)((long)unaff_x19 + 0x30c) * (float)(int)uVar33,1.0);
    switch(*(undefined4 *)((long)unaff_x19 + 0x304)) {
    case 0:
      lVar35 = lVar22 + lVar26 * 0x178;
      *(undefined4 *)(lVar35 + 0x84) = 0;
      *(undefined4 *)(lVar35 + 0xac) = 0;
      *(undefined4 *)(lVar35 + 0xd4) = 0x3f800000;
      fVar57 = 1.0;
      break;
    case 1:
      fVar92 = *(float *)(lVar22 + lVar26 * 0x178 + 0x70);
      if (*(int *)((long)unaff_x19 + 0x26c) == 0x208) {
        lVar35 = lVar22 + lVar26 * 0x178;
        fVar81 = (fStack00000000000000c8 + fVar92) - *(float *)((long)unaff_x19 + 0x4d4);
        fVar92 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4d4);
        goto LAB_02496df8;
      }
      lVar35 = lVar22 + lVar26 * 0x178;
      fVar81 = fVar81 - fVar60;
      *(float *)(lVar35 + 0x84) = fVar57 + (fVar92 - fVar60) / fVar81;
      *(float *)(lVar35 + 0xac) = fVar57 + (*(float *)(lVar35 + 0x98) - fVar60) / fVar81;
      *(float *)(lVar35 + 0xd4) = fVar57 + (*(float *)(lVar35 + 0xc0) - fVar60) / fVar81;
      fVar57 = fVar57 + (*(float *)(lVar35 + 0xe8) - fVar60) / fVar81;
      break;
    case 2:
      lVar35 = lVar22 + lVar26 * 0x178;
      fVar92 = *(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4d4);
      fVar81 = (fStack00000000000000c8 + *(float *)(lVar35 + 0x70)) -
               *(float *)((long)unaff_x19 + 0x4d4);
LAB_02496df8:
      *(float *)(lVar35 + 0x84) = fVar57 + fVar81 / fVar92;
      *(float *)(lVar35 + 0xac) =
           fVar57 + ((fStack00000000000000c8 + *(float *)(lVar35 + 0x98)) -
                    *(float *)((long)unaff_x19 + 0x4d4)) /
                    (*(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4d4));
      *(float *)(lVar35 + 0xd4) =
           fVar57 + ((fStack00000000000000c8 + *(float *)(lVar35 + 0xc0)) -
                    *(float *)((long)unaff_x19 + 0x4d4)) /
                    (*(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4d4));
      fVar57 = fVar57 + ((fStack00000000000000c8 + *(float *)(lVar35 + 0xe8)) -
                        *(float *)((long)unaff_x19 + 0x4d4)) /
                        (*(float *)((long)unaff_x19 + 0x4dc) - *(float *)((long)unaff_x19 + 0x4d4));
      break;
    case 3:
      switch((int)unaff_x19[0x61]) {
      case 0:
        lVar35 = lVar22 + lVar26 * 0x178;
        *(undefined4 *)(lVar35 + 0x88) = 0;
        *(undefined4 *)(lVar35 + 0xb0) = 0x3f800000;
        *(undefined4 *)(lVar35 + 0xd8) = 0;
        *(undefined4 *)(lVar35 + 0x100) = 0x3f800000;
        break;
      case 1:
        lVar35 = lVar22 + lVar26 * 0x178;
        fVar92 = fVar92 - fVar86;
        fVar81 = fVar57 + (*(float *)(lVar35 + 0x74) - fVar86) / fVar92;
        fVar92 = fVar57 + (*(float *)(lVar35 + 0x9c) - fVar86) / fVar92;
        *(float *)(lVar35 + 0x88) = fVar81;
        *(float *)(lVar35 + 0xb0) = fVar92;
        *(float *)(lVar35 + 0xd8) = fVar81;
        *(float *)(lVar35 + 0x100) = fVar92;
        break;
      case 2:
        lVar35 = lVar22 + lVar26 * 0x178;
        fVar81 = fVar57 + (*(float *)(lVar35 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
                          (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
        *(float *)(lVar35 + 0x88) = fVar81;
        fVar92 = *(float *)(unaff_x19 + 0x9b);
        fVar86 = *(float *)(unaff_x19 + 0x9c);
        *(float *)(lVar35 + 0xd8) = fVar81;
        fVar81 = fVar57 + (*(float *)(lVar35 + 0x9c) - fVar92) / (fVar86 - fVar92);
        *(float *)(lVar35 + 0xb0) = fVar81;
        *(float *)(lVar35 + 0x100) = fVar81;
        break;
      case 3:
        if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02660dac(*(undefined8 *)Unity_Mathematics_uint2_TypeInfo,0);
        uVar48 = (uint)*(undefined8 *)(lVar22 + 0x18);
      }
      if (uVar48 <= uVar91)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar35 = lVar22 + lVar26 * 0x178;
      fVar81 = *(float *)(lVar35 + 0x15c);
      fVar92 = (1.0 - (*(float *)(lVar35 + 0x88) + *(float *)(lVar35 + 0xb0)) * fVar81) * 0.5;
      fVar86 = fVar57 + *(float *)(lVar35 + 0x88) * fVar81 + fVar92;
      fVar57 = fVar57 + fVar92 + *(float *)(lVar35 + 0xb0) * fVar81;
      *(float *)(lVar35 + 0x84) = fVar86;
      *(float *)(lVar35 + 0xac) = fVar86;
      *(float *)(lVar35 + 0xd4) = fVar57;
      break;
    default:
      goto switchD_02496d4c_default;
    }
    *(float *)(lVar22 + lVar26 * 0x178 + 0xfc) = fVar57;
switchD_02496d4c_default:
    switch((int)unaff_x19[0x61]) {
    case 0:
      if (uVar48 <= uVar91)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar35 = lVar22 + lVar26 * 0x178;
      *(undefined4 *)(lVar35 + 0x88) = 0;
      *(undefined4 *)(lVar35 + 0xb0) = 0x3f800000;
      *(undefined4 *)(lVar35 + 0xd8) = 0x3f800000;
      *(undefined4 *)(lVar35 + 0x100) = 0;
      break;
    case 1:
      if (uVar91 < uVar48) {
        lVar35 = lVar22 + lVar26 * 0x178;
        fVar72 = fVar72 - fVar71;
        fVar57 = (*(float *)(lVar35 + 0x74) - fVar71) / fVar72;
        fVar72 = (*(float *)(lVar35 + 0x9c) - fVar71) / fVar72;
        *(float *)(lVar35 + 0x88) = fVar57;
        goto LAB_02497174;
      }
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    case 2:
      if (uVar48 <= uVar91)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar35 = lVar22 + lVar26 * 0x178;
      fVar57 = (*(float *)(lVar35 + 0x74) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
      *(float *)(lVar35 + 0x88) = fVar57;
      fVar72 = (*(float *)(lVar35 + 0x9c) - *(float *)(unaff_x19 + 0x9b)) /
               (*(float *)(unaff_x19 + 0x9c) - *(float *)(unaff_x19 + 0x9b));
LAB_02497174:
      *(float *)(lVar35 + 0xb0) = fVar72;
      *(float *)(lVar35 + 0xd8) = fVar72;
      *(float *)(lVar35 + 0x100) = fVar57;
      break;
    case 3:
      if (uVar48 <= uVar91)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar35 = lVar22 + lVar26 * 0x178;
      fVar72 = *(float *)(lVar35 + 0x15c);
      fVar81 = (1.0 - (*(float *)(lVar35 + 0x84) + *(float *)(lVar35 + 0xd4)) / fVar72) * 0.5;
      fVar57 = *(float *)(lVar35 + 0x84) / fVar72 + fVar81;
      fVar81 = fVar81 + *(float *)(lVar35 + 0xd4) / fVar72;
      *(float *)(lVar35 + 0x88) = fVar57;
      *(float *)(lVar35 + 0xb0) = fVar81;
      *(float *)(lVar35 + 0x100) = fVar57;
      *(float *)(lVar35 + 0xd8) = fVar81;
    }
    if (uVar48 <= uVar91)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar35 = lVar22 + lVar26 * 0x178;
    fVar57 = *(float *)(lVar35 + 0x160) * (1.0 - *(float *)((long)unaff_x19 + 0x2cc));
    if ((*(char *)(lVar35 + 0x5c) == '\0') && ((*(byte *)(lVar22 + lVar26 * 0x178 + 400) & 1) != 0))
    {
      fVar57 = -fVar57;
    }
    fVar81 = fVar52;
    if (((iVar16 == 2) || (fVar81 = fVar88, iVar16 == 1)) || (fVar81 = fVar52 / fVar54, iVar16 == 0)
       ) {
      fVar57 = fVar81 * fVar57;
    }
    lVar35 = lVar22 + lVar26 * 0x178;
    fVar72 = *(float *)(lVar35 + 0x88);
    fVar92 = *(float *)(lVar35 + 0x84);
    fVar81 = -2.1474836e+09;
    if (fVar92 != INFINITY) {
      fVar81 = (float)(int)fVar92;
    }
    fVar86 = *(float *)(lVar35 + 0xd4);
    fVar60 = *(float *)(lVar35 + 0xd8);
    fVar71 = -2.1474836e+09;
    if (fVar72 != INFINITY) {
      fVar71 = (float)(int)fVar72;
    }
    uVar90 = FUN_024e0374(fVar92 - fVar81,fVar72 - fVar71);
    *(undefined4 *)(lVar35 + 0x84) = uVar90;
    if (*(uint *)(lVar22 + 0x18) <= uVar91)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar60 = fVar60 - fVar71;
    *(float *)(lVar35 + 0x88) = fVar57;
    uVar90 = FUN_024e0374(fVar92 - fVar81,fVar60);
    *(undefined4 *)(lVar22 + lVar26 * 0x178 + 0xac) = uVar90;
    if (*(uint *)(lVar22 + 0x18) <= uVar91)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    fVar86 = fVar86 - fVar81;
    *(float *)(lVar22 + lVar26 * 0x178 + 0xb0) = fVar57;
    fVar81 = (float)FUN_024e0374(fVar86,fVar60);
    *(float *)(lVar35 + 0xd4) = fVar81;
    if (*(uint *)(lVar22 + 0x18) <= uVar91)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar35 + 0xd8) = fVar57;
    uVar90 = FUN_024e0374(fVar86,fVar72 - fVar71);
    *(undefined4 *)(lVar22 + lVar26 * 0x178 + 0xfc) = uVar90;
    uVar48 = (uint)*(undefined8 *)(lVar22 + 0x18);
    if (uVar48 <= uVar91)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    *(float *)(lVar22 + lVar26 * 0x178 + 0x100) = fVar57;
LAB_02497374:
    if (((int)unaff_x19[100] <= (int)uVar91) ||
       (*(int *)((long)unaff_x19 + 0x324) <= iStack00000000000000ac)) goto LAB_02497490;
    if (((int)uVar33 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] != 5)) {
      if (uVar48 <= uVar91)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar36 = lVar22 + lVar26 * 0x178;
      *(ulong *)(lVar36 + 0x70) =
           CONCAT44(fVar85 + (float)((ulong)*(undefined8 *)(lVar36 + 0x70) >> 0x20),
                    fVar77 + (float)*(undefined8 *)(lVar36 + 0x70));
      *(float *)(lVar36 + 0x78) = fVar58 + *(float *)(lVar36 + 0x78);
      if (*(uint *)(lVar22 + 0x18) <= uVar91)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar36 = lVar22 + lVar26 * 0x178;
      *(ulong *)(lVar36 + 0x98) =
           CONCAT44(fVar85 + (float)((ulong)*(undefined8 *)(lVar36 + 0x98) >> 0x20),
                    fVar77 + (float)*(undefined8 *)(lVar36 + 0x98));
      *(float *)(lVar36 + 0xa0) = fVar58 + *(float *)(lVar36 + 0xa0);
      if (*(uint *)(lVar22 + 0x18) <= uVar91)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar36 = lVar22 + lVar26 * 0x178;
      *(ulong *)(lVar36 + 0xc0) =
           CONCAT44(fVar85 + (float)((ulong)*(undefined8 *)(lVar36 + 0xc0) >> 0x20),
                    fVar77 + (float)*(undefined8 *)(lVar36 + 0xc0));
      *(float *)(lVar36 + 200) = fVar58 + *(float *)(lVar36 + 200);
      if (*(uint *)(lVar22 + 0x18) <= uVar91)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar36 = lVar22 + lVar26 * 0x178;
      *(ulong *)(lVar36 + 0xe8) =
           CONCAT44(fVar85 + (float)((ulong)*(undefined8 *)(lVar36 + 0xe8) >> 0x20),
                    fVar77 + (float)*(undefined8 *)(lVar36 + 0xe8));
      *(float *)(lVar36 + 0xf0) = fVar58 + *(float *)(lVar36 + 0xf0);
      if (iVar18 == 0) goto LAB_02497668;
LAB_02497598:
      if (iVar18 == 1) {
        pcVar38 = *(code **)(*unaff_x19 + 0x8f8);
        goto LAB_02497674;
      }
    }
    else {
      if (((int)uVar33 < (int)unaff_x19[0x65]) && ((int)unaff_x19[0x5b] == 5)) {
        if (uVar48 <= uVar91)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (*(uint *)(lVar22 + lVar26 * 0x178 + 0x68) != uVar3) goto LAB_02497490;
        lVar36 = lVar22 + lVar26 * 0x178;
        *(ulong *)(lVar36 + 0x70) =
             CONCAT44(fVar85 + (float)((ulong)*(undefined8 *)(lVar36 + 0x70) >> 0x20),
                      fVar77 + (float)*(undefined8 *)(lVar36 + 0x70));
        *(float *)(lVar36 + 0x78) = fVar58 + *(float *)(lVar36 + 0x78);
        if (*(uint *)(lVar22 + 0x18) <= uVar91)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar36 = lVar22 + lVar26 * 0x178;
        *(ulong *)(lVar36 + 0x98) =
             CONCAT44(fVar85 + (float)((ulong)*(undefined8 *)(lVar36 + 0x98) >> 0x20),
                      fVar77 + (float)*(undefined8 *)(lVar36 + 0x98));
        *(float *)(lVar36 + 0xa0) = fVar58 + *(float *)(lVar36 + 0xa0);
        if (*(uint *)(lVar22 + 0x18) <= uVar91)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar36 = lVar22 + lVar26 * 0x178;
        *(ulong *)(lVar36 + 0xc0) =
             CONCAT44(fVar85 + (float)((ulong)*(undefined8 *)(lVar36 + 0xc0) >> 0x20),
                      fVar77 + (float)*(undefined8 *)(lVar36 + 0xc0));
        *(float *)(lVar36 + 200) = fVar58 + *(float *)(lVar36 + 200);
        if (*(uint *)(lVar22 + 0x18) <= uVar91)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar36 = lVar22 + lVar26 * 0x178;
        *(ulong *)(lVar36 + 0xe8) =
             CONCAT44(fVar85 + (float)((ulong)*(undefined8 *)(lVar36 + 0xe8) >> 0x20),
                      fVar77 + (float)*(undefined8 *)(lVar36 + 0xe8));
        *(float *)(lVar36 + 0xf0) = fVar58 + *(float *)(lVar36 + 0xf0);
      }
      else {
LAB_02497490:
        if (uVar48 <= uVar91)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (DAT_03774d76 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03774d76 = '\x01';
        }
        puVar10 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
        lVar35 = lVar22 + lVar26 * 0x178;
        uVar90 = *(undefined4 *)
                  (*(undefined8 **)
                    (*(long *)
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                    + 0xb8) + 1);
        *(undefined8 *)(lVar35 + 0x70) =
             **(undefined8 **)
               (*(long *)
                 Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__ +
               0xb8);
        *(undefined4 *)(lVar35 + 0x78) = uVar90;
        if (*(uint *)(lVar22 + 0x18) <= uVar91)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar35 = lVar22 + lVar26 * 0x178;
        uVar90 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar10 + 0xb8) + 1);
        *(undefined8 *)(lVar35 + 0x98) = **(undefined8 **)(*(long *)puVar10 + 0xb8);
        *(undefined4 *)(lVar35 + 0xa0) = uVar90;
        if (*(uint *)(lVar22 + 0x18) <= uVar91)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar35 = lVar22 + lVar26 * 0x178;
        uVar90 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar10 + 0xb8) + 1);
        *(undefined8 *)(lVar35 + 0xc0) = **(undefined8 **)(*(long *)puVar10 + 0xb8);
        *(undefined4 *)(lVar35 + 200) = uVar90;
        if (*(uint *)(lVar22 + 0x18) <= uVar91)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar35 = lVar22 + lVar26 * 0x178;
        uVar90 = *(undefined4 *)(*(undefined8 **)(*(long *)puVar10 + 0xb8) + 1);
        *(undefined8 *)(lVar35 + 0xe8) = **(undefined8 **)(*(long *)puVar10 + 0xb8);
        *(undefined4 *)(lVar35 + 0xf0) = uVar90;
        if (*(uint *)(lVar22 + 0x18) <= uVar91)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        *(undefined1 *)(lVar36 + 0x194) = 0;
      }
      if (iVar18 != 0) goto LAB_02497598;
LAB_02497668:
      pcVar38 = *(code **)(*unaff_x19 + 0x8d8);
LAB_02497674:
      (*pcVar38)();
    }
LAB_02497688:
    if ((*plVar2 == 0) || (lVar36 = *(long *)(*plVar2 + 0x38), lVar36 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar36 + 0x18) <= uVar91)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar36 = lVar36 + lVar26 * 0x178;
    uVar70 = *(undefined8 *)(lVar36 + 0x11c);
    *(undefined8 *)(lVar36 + 0x11c) =
         CONCAT44(fVar85 + (float)((ulong)uVar70 >> 0x20),fVar77 + (float)uVar70);
    *(float *)(lVar36 + 0x124) = fVar58 + *(float *)(lVar36 + 0x124);
    if ((*plVar2 == 0) || (lVar36 = *(long *)(*plVar2 + 0x38), lVar36 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar36 + 0x18) <= uVar91)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar36 = lVar36 + lVar26 * 0x178;
    *(ulong *)(lVar36 + 0x110) =
         CONCAT44(fVar85 + (float)((ulong)*(undefined8 *)(lVar36 + 0x110) >> 0x20),
                  fVar77 + (float)*(undefined8 *)(lVar36 + 0x110));
    *(float *)(lVar36 + 0x118) = fVar58 + *(float *)(lVar36 + 0x118);
    if ((*plVar2 == 0) || (lVar36 = *(long *)(*plVar2 + 0x38), lVar36 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar36 + 0x18) <= uVar91)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar36 = lVar36 + lVar26 * 0x178;
    *(ulong *)(lVar36 + 0x128) =
         CONCAT44(fVar85 + (float)((ulong)*(undefined8 *)(lVar36 + 0x128) >> 0x20),
                  fVar77 + (float)*(undefined8 *)(lVar36 + 0x128));
    *(float *)(lVar36 + 0x130) = fVar58 + *(float *)(lVar36 + 0x130);
    if ((*plVar2 == 0) || (lVar36 = *(long *)(*plVar2 + 0x38), lVar36 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar36 + 0x18) <= uVar91)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar36 = lVar36 + lVar26 * 0x178;
    *(float *)(lVar36 + 0x134) = fVar77 + *(float *)(lVar36 + 0x134);
    *(ulong *)(lVar36 + 0x138) =
         CONCAT44(fVar58 + (float)((ulong)*(undefined8 *)(lVar36 + 0x138) >> 0x20),
                  fVar85 + (float)*(undefined8 *)(lVar36 + 0x138));
    lVar36 = *plVar2;
    if ((lVar36 == 0) || (lVar35 = *(long *)(lVar36 + 0x38), lVar35 == 0)) goto LAB_0249920c;
    uVar48 = *(uint *)(lVar35 + 0x18);
    if (uVar48 <= uVar91)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    lVar44 = lVar35 + lVar26 * 0x178;
    uVar68 = CONCAT44(fVar77 + (float)((ulong)*(undefined8 *)(lVar44 + 0x140) >> 0x20),
                      fVar77 + (float)*(undefined8 *)(lVar44 + 0x140));
    fVar81 = fVar85 + *(float *)(lVar44 + 0x150);
    uVar25 = (ulong)(uint)fVar81;
    uVar29 = CONCAT44(fVar85 + (float)((ulong)*(undefined8 *)(lVar44 + 0x148) >> 0x20),
                      fVar85 + (float)*(undefined8 *)(lVar44 + 0x148));
    *(ulong *)(lVar44 + 0x140) = uVar68;
    *(ulong *)(lVar44 + 0x148) = uVar29;
    *(float *)(lVar44 + 0x150) = fVar81;
    if (uVar33 == uVar17) {
      uVar17 = *puVar1 - 1;
      if (uVar91 == uVar17) goto LAB_0249788c;
    }
    else {
      lVar36 = *(long *)(lVar36 + 0x50);
      if (lVar36 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar36 + 0x18) <= uVar17)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar44 = (long)(int)uVar17;
      lVar46 = lVar36 + lVar44 * 0x5c;
      uVar29 = (ulong)(uint)*(float *)(lVar46 + 0x58);
      fVar81 = fVar85 + *(float *)(lVar46 + 0x54);
      uVar68 = (ulong)(uint)fVar81;
      fVar72 = fVar77 + *(float *)(lVar46 + 0x58);
      uVar25 = (ulong)(uint)fVar72;
      *(ulong *)(lVar46 + 0x4c) =
           CONCAT44(fVar85 + (float)((ulong)*(undefined8 *)(lVar46 + 0x4c) >> 0x20),
                    fVar85 + (float)*(undefined8 *)(lVar46 + 0x4c));
      *(float *)(lVar46 + 0x54) = fVar81;
      *(float *)(lVar46 + 0x58) = fVar72;
      if (uVar48 <= *(uint *)(lVar46 + 0x34))
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      uVar90 = *(undefined4 *)(lVar35 + (long)(int)*(uint *)(lVar46 + 0x34) * 0x178 + 0x11c);
      lVar36 = lVar36 + lVar44 * 0x5c;
      *(float *)(lVar36 + 0x70) = fVar81;
      *(undefined4 *)(lVar36 + 0x6c) = uVar90;
      lVar36 = *plVar2;
      if ((lVar36 == 0) || (lVar35 = *(long *)(lVar36 + 0x50), lVar35 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar35 + 0x18) <= uVar17)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar36 = *(long *)(lVar36 + 0x38);
      if (lVar36 == 0) goto LAB_0249920c;
      uVar17 = *(uint *)(lVar35 + lVar44 * 0x5c + 0x40);
      if (*(uint *)(lVar36 + 0x18) <= uVar17)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar35 = lVar35 + lVar44 * 0x5c;
      *(undefined4 *)(lVar35 + 0x74) = *(undefined4 *)(lVar36 + (long)(int)uVar17 * 0x178 + 0x128);
      *(undefined4 *)(lVar35 + 0x78) = *(undefined4 *)(lVar35 + 0x4c);
      uVar17 = *puVar1 - 1;
LAB_0249788c:
      if (uVar91 == uVar17) {
        lVar36 = *plVar2;
        if ((lVar36 == 0) || (lVar35 = *(long *)(lVar36 + 0x50), lVar35 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar35 + 0x18) <= uVar33)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar44 = lVar35 + lVar45 * 0x5c;
        uVar29 = (ulong)(uint)*(float *)(lVar44 + 0x58);
        uVar68 = CONCAT44(fVar85 + (float)((ulong)*(undefined8 *)(lVar44 + 0x4c) >> 0x20),
                          fVar85 + (float)*(undefined8 *)(lVar44 + 0x4c));
        fVar81 = fVar85 + *(float *)(lVar44 + 0x54);
        fVar77 = fVar77 + *(float *)(lVar44 + 0x58);
        uVar25 = (ulong)(uint)fVar77;
        *(ulong *)(lVar44 + 0x4c) = uVar68;
        *(float *)(lVar44 + 0x54) = fVar81;
        *(float *)(lVar44 + 0x58) = fVar77;
        lVar36 = *(long *)(lVar36 + 0x38);
        if (lVar36 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar36 + 0x18) <= *(uint *)(lVar44 + 0x34))
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar90 = *(undefined4 *)(lVar36 + (long)(int)*(uint *)(lVar44 + 0x34) * 0x178 + 0x11c);
        lVar35 = lVar35 + lVar45 * 0x5c;
        *(float *)(lVar35 + 0x70) = fVar81;
        *(undefined4 *)(lVar35 + 0x6c) = uVar90;
        lVar36 = *plVar2;
        if ((lVar36 == 0) || (lVar35 = *(long *)(lVar36 + 0x50), lVar35 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar35 + 0x18) <= uVar33)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar36 = *(long *)(lVar36 + 0x38);
        if (lVar36 == 0) goto LAB_0249920c;
        uVar17 = *(uint *)(lVar35 + lVar45 * 0x5c + 0x40);
        if (*(uint *)(lVar36 + 0x18) <= uVar17)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar35 = lVar35 + lVar45 * 0x5c;
        *(undefined4 *)(lVar35 + 0x74) = *(undefined4 *)(lVar36 + (long)(int)uVar17 * 0x178 + 0x128)
        ;
        *(undefined4 *)(lVar35 + 0x78) = *(undefined4 *)(lVar35 + 0x4c);
      }
    }
    if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar27 = FUN_016f9468(uVar47,0);
    if (((((uVar27 & 1) == 0) && (1 < uVar47 - 0x2010)) && (uVar47 != 0xad)) && (uVar47 != 0x2d)) {
      if (bVar8) {
        if (((uVar42 != 1) && ((int)uVar91 < (int)(*(uint *)(lVar22 + 0x18) - 1))) &&
           (((int)uVar91 < (int)*puVar1 && ((uVar47 == 0x2019 || (uVar47 == 0x27)))))) {
          if (*(uint *)(lVar22 + 0x18) <= uVar42 - 2)
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          uVar6 = *(undefined2 *)(lVar22 + lVar23 + -0x438);
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar27 = FUN_016f9468(uVar6,0);
          if ((uVar27 & 1) != 0) {
            if (*(uint *)(lVar22 + 0x18) <= uVar42)
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
        if (uVar42 != 1) {
LAB_024985a0:
          bVar8 = false;
          goto LAB_02497aac;
        }
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar27 = FUN_016f93a0(uVar47,0);
        if ((uVar27 & 1) != 0) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar27 = FUN_016f68bc(uVar47,0);
          if (((uVar47 != 0x200b) && ((uVar27 & 1) == 0)) && (*puVar1 != 1)) goto LAB_024985a0;
        }
      }
      if (uVar91 == *puVar1 - 1) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar27 = FUN_016f9468(uVar47,0);
        iVar18 = iVar51;
        if ((uVar27 & 1) == 0) goto LAB_02497de0;
      }
      else {
LAB_02497de0:
        iVar18 = uVar42 - 2;
      }
      lVar36 = *plVar2;
      if (lVar36 == 0) goto LAB_0249920c;
      lVar35 = *(long *)(lVar36 + 0x40);
      if (lVar35 == 0) goto LAB_0249920c;
      uVar17 = *(uint *)(lVar36 + 0x24);
      iVar19 = *(int *)(lVar35 + 0x18);
      if (iVar19 < (int)(uVar17 + 1)) {
        if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01147b84((long *)(lVar36 + 0x40),iVar19 + 1,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
        lVar36 = *plVar2;
        if (lVar36 == 0) goto LAB_0249920c;
      }
      lVar35 = *(long *)(lVar36 + 0x40);
      if (lVar35 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar35 + 0x18) <= uVar17)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar35 = lVar35 + (long)(int)uVar17 * 0x18;
      *(uint *)(lVar35 + 0x28) = uVar15;
      *(int *)(lVar35 + 0x2c) = iVar18;
      *(uint *)(lVar35 + 0x30) = (iVar18 - uVar15) + 1;
      *(long **)(lVar35 + 0x20) = unaff_x19;
      lVar35 = *(long *)(lVar36 + 0x50);
      *(int *)(lVar36 + 0x24) = *(int *)(lVar36 + 0x24) + 1;
      if (lVar35 == 0) goto LAB_0249920c;
      if (*(uint *)(lVar35 + 0x18) <= uVar33)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar35 = lVar35 + lVar45 * 0x5c;
      bVar8 = false;
      iStack00000000000000ac = iStack00000000000000ac + 1;
      *(int *)(lVar35 + 0x30) = *(int *)(lVar35 + 0x30) + 1;
    }
    else {
      if (!bVar8) {
        uVar15 = uVar91;
      }
      if (uVar91 == *puVar1 - 1) {
        lVar36 = *plVar2;
        if (lVar36 == 0) goto LAB_0249920c;
        lVar35 = *(long *)(lVar36 + 0x40);
        if (lVar35 == 0) goto LAB_0249920c;
        uVar17 = *(uint *)(lVar36 + 0x24);
        iVar18 = *(int *)(lVar35 + 0x18);
        if (iVar18 < (int)(uVar17 + 1)) {
          if (*(int *)(*(long *)UnityEngine_Hash128___TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          FUN_01147b84((long *)(lVar36 + 0x40),iVar18 + 1,
                       *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayAlpha_TypeInfo);
          lVar36 = *plVar2;
          if (lVar36 == 0) goto LAB_0249920c;
        }
        lVar35 = *(long *)(lVar36 + 0x40);
        if (lVar35 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar35 + 0x18) <= uVar17)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar35 = lVar35 + (long)(int)uVar17 * 0x18;
        *(uint *)(lVar35 + 0x28) = uVar15;
        *(uint *)(lVar35 + 0x2c) = uVar91;
        *(long **)(lVar35 + 0x20) = unaff_x19;
        *(uint *)(lVar35 + 0x30) = uVar42 - uVar15;
        lVar35 = *(long *)(lVar36 + 0x50);
        *(int *)(lVar36 + 0x24) = *(int *)(lVar36 + 0x24) + 1;
        if (lVar35 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar35 + 0x18) <= uVar33)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar35 = lVar35 + lVar45 * 0x5c;
        iStack00000000000000ac = iStack00000000000000ac + 1;
        *(int *)(lVar35 + 0x30) = *(int *)(lVar35 + 0x30) + 1;
      }
LAB_02497aa4:
      bVar8 = true;
    }
LAB_02497aac:
    if ((*plVar2 == 0) || (lVar36 = *(long *)(*plVar2 + 0x38), lVar36 == 0)) goto LAB_0249920c;
    uVar17 = *(uint *)(lVar36 + 0x18);
    if (uVar17 <= uVar91)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar36 + lVar26 * 0x178 + 400) >> 2 & 1) == 0) {
      if (bVar12) {
LAB_02497adc:
        if (uVar17 <= uVar42 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar45 = *unaff_x19;
        uVar17 = *(uint *)(lVar36 + lVar23 + -0x330);
        uVar90 = *(undefined4 *)(lVar36 + lVar23 + -0x2f8);
LAB_0249805c:
        pcVar38 = *(code **)(lVar45 + 0x908);
LAB_02498064:
        uVar29 = (ulong)uVar17;
        uVar68 = (ulong)(uint)fStack0000000000000050;
        uVar25 = (ulong)(uint)fStack0000000000000054;
        (*pcVar38)(fStack0000000000000058,uVar68,uVar25,uVar29,fStack00000000000000d0,0,
                   fStack000000000000005c,uVar90);
        puVar10 = System_Threading_Mutex_TypeInfo;
        lVar36 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar36 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar36 = *(long *)puVar10;
        }
LAB_024980b4:
        bVar12 = false;
        fVar56 = 0.0;
        fStack00000000000000d0 = *(float *)(*(long *)(lVar36 + 0xb8) + 0x15a8);
        fStack00000000000000cc = 0.0;
      }
      else {
LAB_02497fc4:
        bVar12 = false;
      }
    }
    else {
      lVar36 = lVar36 + lVar26 * 0x178;
      iVar18 = *(int *)(lVar36 + 0x68);
      *(int *)(lVar36 + 0x16c) = iVar20;
      if ((((int)unaff_x19[100] < (int)uVar91) || ((int)unaff_x19[0x65] < (int)uVar33)) ||
         (((int)unaff_x19[0x5b] == 5 && (iVar18 + 1 != (int)unaff_x19[0x66])))) {
        bVar14 = false;
      }
      else {
        bVar14 = true;
      }
      if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uVar27 = FUN_016f68bc(uVar47,0);
      if ((uVar47 != 0x200b) && ((uVar27 & 1) == 0)) {
        lVar36 = *plVar2;
        if ((lVar36 == 0) || (lVar45 = *(long *)(lVar36 + 0x38), lVar45 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar45 + 0x18) <= uVar91)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        fVar81 = *(float *)(lVar45 + lVar26 * 0x178 + 0x160);
        if (fVar56 <= fVar81) {
          fVar56 = fVar81;
        }
        if (fStack00000000000000cc <= ABS(fVar57)) {
          fStack00000000000000cc = ABS(fVar57);
        }
        if (iVar18 != iStack000000000000004c) {
          if (*(int *)(*(long *)System_Threading_Mutex_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar36 = *plVar2;
            if (lVar36 == 0) goto LAB_0249920c;
            lVar45 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          else {
            lVar45 = *(long *)(*(long *)System_Threading_Mutex_TypeInfo + 0xb8);
          }
          fStack00000000000000d0 = *(float *)(lVar45 + 0x15a8);
        }
        lVar36 = *(long *)(lVar36 + 0x38);
        if (lVar36 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar36 + 0x18) <= uVar91)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        if (unaff_x19[0x1e] == 0) goto LAB_0249920c;
        fVar72 = *(float *)(lVar36 + lVar26 * 0x178 + 0x14c);
        fVar81 = (float)FUN_026fd1d0(unaff_x19[0x1e] + 0x50,0);
        fVar72 = fVar72 + fVar56 * fVar81;
        if (fVar72 <= fStack00000000000000d0) {
          fStack00000000000000d0 = fVar72;
        }
        uVar68 = (ulong)(uint)fStack00000000000000d0;
        iStack000000000000004c = iVar18;
      }
      if (!bVar12) {
        bVar12 = false;
        if ((((uVar47 == 0xd) || ((uVar47 | 1) == 0xb)) || ((int)uVar41 < (int)uVar91)) ||
           ((bool)(bVar14 ^ 1))) goto LAB_024980d0;
        if (uVar91 == uVar41) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar27 = FUN_016fa418(uVar47,0);
          if ((uVar27 & 1) != 0) goto LAB_02497fc4;
        }
        if ((*plVar2 == 0) || (lVar36 = *(long *)(*plVar2 + 0x38), lVar36 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar36 + 0x18) <= uVar91)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar36 = lVar36 + lVar26 * 0x178;
        fStack000000000000005c = *(float *)(lVar36 + 0x160);
        fStack0000000000000058 = *(float *)(lVar36 + 0x11c);
        bVar12 = fVar56 != 0.0;
        fVar81 = fStack000000000000005c;
        if (bVar12) {
          fVar81 = fVar56;
        }
        fVar56 = fVar81;
        uVar21 = *(uint *)(lVar36 + 0x168);
        fStack0000000000000054 = 0.0;
        fVar81 = fVar57;
        if (bVar12) {
          fVar81 = fStack00000000000000cc;
        }
        uVar68 = (ulong)(uint)fVar81;
        fStack0000000000000050 = fStack00000000000000d0;
        fStack00000000000000cc = fVar81;
      }
      if (*puVar1 == 1) {
        if ((*plVar2 != 0) && (lVar36 = *(long *)(*plVar2 + 0x38), lVar36 != 0)) {
          if (uVar91 < *(uint *)(lVar36 + 0x18)) {
            lVar36 = lVar36 + lVar26 * 0x178;
            lVar45 = *unaff_x19;
            uVar17 = *(uint *)(lVar36 + 0x128);
            uVar90 = *(undefined4 *)(lVar36 + 0x160);
            goto LAB_0249805c;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      if ((uVar91 == uVar39) || ((int)uVar41 <= (int)uVar91)) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar27 = FUN_016f68bc(uVar47,0);
        if ((*plVar2 != 0) && (lVar36 = *(long *)(*plVar2 + 0x38), lVar36 != 0)) {
          if (uVar47 == 0x200b || (uVar27 & 1) != 0) {
            lVar45 = lVar49;
            if (*(uint *)(lVar36 + 0x18) <= uVar41)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          else {
            lVar45 = lVar26;
            if (*(uint *)(lVar36 + 0x18) <= uVar91)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          lVar36 = lVar36 + lVar45 * 0x178;
          uVar17 = *(uint *)(lVar36 + 0x128);
          uVar90 = *(undefined4 *)(lVar36 + 0x160);
          pcVar38 = *(code **)(*unaff_x19 + 0x908);
          goto LAB_02498064;
        }
        goto LAB_0249920c;
      }
      if (!bVar14) {
        if ((*plVar2 != 0) && (lVar36 = *(long *)(*plVar2 + 0x38), lVar36 != 0)) {
          uVar17 = *(uint *)(lVar36 + 0x18);
          goto LAB_02497adc;
        }
        goto LAB_0249920c;
      }
      if ((int)uVar91 < (int)(*puVar1 - 1)) {
        if ((*plVar2 == 0) || (lVar36 = *(long *)(*plVar2 + 0x38), lVar36 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar36 + 0x18) <= uVar42)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar27 = FUN_024a9e4c(uVar21,*(undefined4 *)(lVar36 + lVar23),0);
        if ((uVar27 & 1) == 0) {
          if ((*plVar2 != 0) && (lVar36 = *(long *)(*plVar2 + 0x38), lVar36 != 0)) {
            if (uVar91 < *(uint *)(lVar36 + 0x18)) {
              lVar36 = lVar36 + lVar26 * 0x178;
              uVar29 = (ulong)*(uint *)(lVar36 + 0x128);
              uVar25 = (ulong)(uint)fStack0000000000000054;
              uVar68 = (ulong)(uint)fStack0000000000000050;
              (**(code **)(*unaff_x19 + 0x908))
                        (fStack0000000000000058,uVar68,uVar25,uVar29,fStack00000000000000d0,0,
                         fStack000000000000005c,*(undefined4 *)(lVar36 + 0x160));
              puVar10 = System_Threading_Mutex_TypeInfo;
              lVar36 = *(long *)System_Threading_Mutex_TypeInfo;
              if (*(int *)(lVar36 + 0xe0) == 0) {
                thunk_FUN_00d32864();
                lVar36 = *(long *)puVar10;
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
    if ((*plVar2 == 0) || (lVar36 = *(long *)(*plVar2 + 0x38), lVar36 == 0)) goto LAB_0249920c;
    if (*(uint *)(lVar36 + 0x18) <= uVar91)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if (lVar43 == 0) goto LAB_0249920c;
    uVar17 = *(uint *)(lVar36 + lVar26 * 0x178 + 400);
    fVar81 = (float)FUN_026fd1f0(lVar43 + 0x50,0);
    if ((uVar17 >> 6 & 1) == 0) {
      if (bVar7) {
        if ((*plVar2 == 0) || (lVar36 = *(long *)(*plVar2 + 0x38), lVar36 == 0)) goto LAB_0249920c;
        if (*(uint *)(lVar36 + 0x18) <= uVar42 - 2)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        uVar17 = *(uint *)(lVar36 + lVar23 + -0x330);
        pcVar38 = *(code **)(*unaff_x19 + 0x908);
        fVar85 = fVar55 * fVar81 + *(float *)(lVar36 + lVar23 + -0x30c);
LAB_02498648:
        uVar29 = (ulong)uVar17;
        uVar68 = (ulong)(uint)fStack000000000000007c;
        uVar25 = (ulong)uStack000000000000006c;
        (*pcVar38)(fStack0000000000000080,uVar68,uVar25,uVar29,fVar85,0,fVar55,fVar55);
      }
LAB_0249867c:
      bVar7 = false;
    }
    else {
      lVar36 = *plVar2;
      if ((lVar36 == 0) || (lVar45 = *(long *)(lVar36 + 0x38), lVar45 == 0)) goto LAB_0249920c;
      if (*(uint *)(lVar45 + 0x18) <= uVar91)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      *(int *)(lVar45 + lVar26 * 0x178 + 0x174) = iVar20;
      if ((((int)unaff_x19[100] < (int)uVar91) || ((int)unaff_x19[0x65] < (int)uVar33)) ||
         (((int)unaff_x19[0x5b] == 5 &&
          (*(int *)(lVar45 + lVar26 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
        bVar14 = false;
      }
      else {
        bVar14 = true;
      }
      if ((((uVar47 == 0xd) || ((uVar47 | 1) == 0xb)) || ((int)uVar41 < (int)uVar91)) ||
         (bVar7 || !bVar14)) {
LAB_02498228:
        if (!bVar7) goto LAB_0249867c;
      }
      else {
        if (uVar91 == uVar41) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar27 = FUN_016fa418(uVar47,0);
          if ((uVar27 & 1) != 0) goto LAB_02498228;
          lVar36 = *plVar2;
          if (lVar36 == 0) goto LAB_0249920c;
        }
        lVar36 = *(long *)(lVar36 + 0x38);
        if (lVar36 == 0) goto LAB_0249920c;
        if (*(uint *)(lVar36 + 0x18) <= uVar91)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar36 = lVar36 + lVar26 * 0x178;
        fStack0000000000000034 = *(float *)(lVar36 + 0x60);
        fVar55 = *(float *)(lVar36 + 0x160);
        fStack0000000000000030 = *(float *)(lVar36 + 0x14c);
        uVar68 = (ulong)(uint)fStack0000000000000030;
        fStack0000000000000080 = *(float *)(lVar36 + 0x11c);
        fStack000000000000007c = fVar81 * fVar55 + fStack0000000000000030;
        uStack000000000000006c = 0;
      }
      uVar17 = *puVar1;
      if (uVar17 == 1) {
LAB_024983ac:
        if ((*plVar2 != 0) && (lVar36 = *(long *)(*plVar2 + 0x38), lVar36 != 0)) {
          if (uVar91 < *(uint *)(lVar36 + 0x18)) {
            lVar36 = lVar36 + lVar26 * 0x178;
            lVar49 = *unaff_x19;
            uVar17 = *(uint *)(lVar36 + 0x128);
            fVar85 = *(float *)(lVar36 + 0x14c);
LAB_024983d8:
            pcVar38 = *(code **)(lVar49 + 0x908);
FUN_02498644:
            fVar85 = fVar81 * fVar55 + fVar85;
            goto LAB_02498648;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      if (uVar91 == uVar39) {
        if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        uVar27 = FUN_016f68bc(uVar47,0);
        if ((*plVar2 != 0) && (lVar36 = *(long *)(*plVar2 + 0x38), lVar36 != 0)) {
          uVar17 = *(uint *)(lVar36 + 0x18);
          if (uVar47 == 0x200b || (uVar27 & 1) != 0) {
            if (uVar17 <= uVar41)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
          else {
LAB_02498620:
            lVar49 = lVar26;
            if (uVar17 <= uVar91)
            goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
          }
LAB_02498628:
          lVar36 = lVar36 + lVar49 * 0x178;
          fVar85 = *(float *)(lVar36 + 0x14c);
          uVar17 = *(uint *)(lVar36 + 0x128);
          pcVar38 = *(code **)(*unaff_x19 + 0x908);
          goto FUN_02498644;
        }
        goto LAB_0249920c;
      }
      if ((int)uVar91 < (int)uVar17) {
        lVar36 = *plVar2;
        if ((lVar36 != 0) && (lVar45 = *(long *)(lVar36 + 0x38), lVar45 != 0)) {
          if (uVar42 < *(uint *)(lVar45 + 0x18)) {
            if (*(float *)(lVar45 + lVar23 + -0x108) == fStack0000000000000034) {
              fVar72 = *(float *)(lVar45 + lVar23 + -0x1c);
              if (*(int *)(*(long *)StringLiteral_6354 + 0xe0) == 0) {
                thunk_FUN_00d32864();
              }
              uVar68 = (ulong)(uint)fStack0000000000000030;
              uVar27 = FUN_024aa280(fVar85 + fVar72,uVar68,0);
              if ((uVar27 & 1) != 0) {
                uVar17 = *puVar1;
                goto 
                UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__UnityEngine_XR_Interaction_Toolkit_IXRSelectInteractor_OnSelectEntering
                ;
              }
              lVar36 = *plVar2;
              if (lVar36 == 0) goto LAB_0249920c;
            }
            lVar36 = *(long *)(lVar36 + 0x38);
            if (lVar36 != 0) {
              uVar17 = *(uint *)(lVar36 + 0x18);
              if ((int)uVar91 <= (int)uVar41) goto LAB_02498620;
              if (uVar41 < uVar17) goto LAB_02498628;
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
      if ((int)uVar91 < (int)uVar17) {
        iVar18 = FUN_02681c0c(lVar43,0);
        if (*(uint *)(lVar22 + 0x18) <= uVar42)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar36 = *(long *)(lVar22 + lVar23 + -0x130);
        if (lVar36 == 0) goto LAB_0249920c;
        iVar19 = FUN_02681c0c(lVar36,0);
        if (iVar18 != iVar19) goto LAB_024983ac;
      }
      if (!bVar14) {
        if ((*plVar2 != 0) && (lVar36 = *(long *)(*plVar2 + 0x38), lVar36 != 0)) {
          if (uVar42 - 2 < *(uint *)(lVar36 + 0x18)) {
            lVar49 = *unaff_x19;
            uVar17 = *(uint *)(lVar36 + lVar23 + -0x330);
            fVar85 = *(float *)(lVar36 + lVar23 + -0x30c);
            goto LAB_024983d8;
          }
          goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        }
        goto LAB_0249920c;
      }
      bVar7 = true;
    }
    if ((*plVar2 == 0) || (lVar36 = *(long *)(*plVar2 + 0x38), lVar36 == 0)) goto LAB_0249920c;
    uVar17 = (uint)*(undefined8 *)(lVar36 + 0x18);
    if (uVar17 <= uVar91)
    goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
    if ((*(byte *)(lVar36 + lVar26 * 0x178 + 0x191) >> 1 & 1) == 0) {
      if (bVar13) {
        uVar25 = (ulong)in_stack_000000a0;
        uVar29 = (ulong)(uint)fStack00000000000000a4;
        uVar68 = (ulong)(uint)fStack00000000000000b4;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar68,uVar25,uVar29,fStack00000000000000a8,uVar25);
      }
LAB_024986e8:
      bVar13 = false;
    }
    else {
      if ((((int)unaff_x19[100] < (int)uVar91) || ((int)unaff_x19[0x65] < (int)uVar33)) ||
         (((int)unaff_x19[0x5b] == 5 &&
          (*(int *)(lVar36 + lVar26 * 0x178 + 0x68) + 1 != (int)unaff_x19[0x66])))) {
        bVar14 = false;
      }
      else {
        bVar14 = true;
      }
      if (!bVar13) {
        if ((((uVar47 == 0xd) || ((uVar47 | 1) == 0xb)) || ((int)uVar41 < (int)uVar91)) || (!bVar14)
           ) goto LAB_024986e8;
        if (uVar91 == uVar41) {
          if (*(int *)(*(long *)Newtonsoft_Json_JsonReader_State_TypeInfo + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar27 = FUN_016fa418(uVar47,0);
          if ((uVar27 & 1) != 0) goto LAB_024986e8;
        }
        puVar10 = System_Threading_Mutex_TypeInfo;
        lVar49 = *(long *)System_Threading_Mutex_TypeInfo;
        if (*(int *)(lVar49 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar49 = *(long *)puVar10;
        }
        if ((*plVar2 == 0) || (lVar36 = *(long *)(*plVar2 + 0x38), lVar36 == 0)) goto LAB_0249920c;
        uVar17 = (uint)*(undefined8 *)(lVar36 + 0x18);
        if (uVar17 <= uVar91)
        goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
        lVar49 = *(long *)(lVar49 + 0xb8);
        lVar45 = lVar36 + lVar26 * 0x178;
        in_stack_00001798 = *(undefined8 *)(lVar45 + 0x184);
        in_stack_00001790 = *(undefined8 *)(lVar45 + 0x17c);
        fStack00000000000000b0 = *(float *)(lVar49 + 0x1598);
        in_stack_000017a0 = *(float *)(lVar45 + 0x18c);
        fStack00000000000000b4 = *(float *)(lVar49 + 0x159c);
        fStack00000000000000a4 = *(float *)(lVar49 + 0x15a0);
        fStack00000000000000a8 = *(float *)(lVar49 + 0x15a4);
        in_stack_000000a0 = 0;
      }
      if (uVar17 <= uVar91)
      goto UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited;
      lVar36 = lVar36 + lVar26 * 0x178;
      fVar71 = *(float *)(lVar36 + 0x188);
      uVar24 = *(undefined8 *)(lVar36 + 0x17c);
      fVar60 = *(float *)(lVar36 + 0x184);
      uVar70 = *(undefined8 *)(lVar36 + 0x184);
      fVar86 = *(float *)(lVar36 + 0x18c);
      fVar85 = *(float *)(lVar36 + 0x11c);
      fVar72 = *(float *)(lVar36 + 0x128);
      fVar92 = *(float *)(lVar36 + 0x148);
      fVar81 = *(float *)(lVar36 + 0x150);
      in_stack_00000158 = uVar24;
      fStack0000000000000160 = fVar60;
      fStack0000000000000164 = fVar71;
      in_stack_00000168 = fVar86;
      in_stack_00000170 = in_stack_00001790;
      in_stack_00000178 = in_stack_00001798;
      in_stack_00000180 = in_stack_000017a0;
      uVar27 = FUN_024ab330(&stack0x00000170,&stack0x00000158,0);
      lVar36 = *(long *)Unity_AI_Navigation_NavMeshLink_TypeInfo;
      if ((uVar27 & 1) == 0) {
        if (*(int *)(lVar36 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar36);
        }
        fVar85 = fVar85 - (float)((ulong)in_stack_00001790 >> 0x20);
        if (fVar85 <= fStack00000000000000b0) {
          fStack00000000000000b0 = fVar85;
        }
        fVar81 = fVar81 - in_stack_000017a0;
        uVar68 = (ulong)(uint)fVar81;
        fVar72 = fVar72 + (float)in_stack_00001798;
        uVar25 = (ulong)(uint)fVar72;
        if (fVar81 <= fStack00000000000000b4) {
          fStack00000000000000b4 = fVar81;
        }
        fVar92 = fVar92 + (float)((ulong)in_stack_00001798 >> 0x20);
        uVar29 = (ulong)(uint)fVar92;
        if (fStack00000000000000a4 <= fVar72) {
          fStack00000000000000a4 = fVar72;
        }
        if (fStack00000000000000a8 <= fVar92) {
          fStack00000000000000a8 = fVar92;
        }
      }
      else {
        if (*(int *)(lVar36 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar36);
        }
        fVar85 = (fVar85 + (fStack00000000000000a4 - (float)in_stack_00001798)) * 0.5;
        uVar29 = (ulong)(uint)fVar85;
        if (fVar81 <= fStack00000000000000b4) {
          fStack00000000000000b4 = fVar81;
        }
        uVar68 = (ulong)(uint)fStack00000000000000b4;
        uVar25 = (ulong)in_stack_000000a0;
        if (fStack00000000000000a8 <= fVar92) {
          fStack00000000000000a8 = fVar92;
        }
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar68,uVar25,uVar29,fStack00000000000000a8,uVar25);
        fStack00000000000000b4 = fVar81 - fVar86;
        fStack00000000000000a4 = fVar72 + fVar60;
        in_stack_000000a0 = 0;
        fStack00000000000000a8 = fVar92 + fVar71;
        fStack00000000000000b0 = fVar85;
        in_stack_00001790 = uVar24;
        in_stack_00001798 = uVar70;
        in_stack_000017a0 = fVar86;
      }
      if (((*puVar1 == 1) || (uVar91 == uVar39)) || (((int)uVar41 <= (int)uVar91 || (!bVar14)))) {
        uVar25 = (ulong)in_stack_000000a0;
        uVar29 = (ulong)(uint)fStack00000000000000a4;
        uVar68 = (ulong)(uint)fStack00000000000000b4;
        (**(code **)(*unaff_x19 + 0x918))
                  (fStack00000000000000b0,uVar68,uVar25,uVar29,fStack00000000000000a8,uVar25);
        bVar13 = false;
      }
      else {
        bVar13 = true;
      }
    }
    uVar91 = *puVar1;
    iVar51 = iVar51 + 1;
    lVar23 = lVar23 + 0x178;
    bVar14 = (int)uVar42 < (int)uVar91;
    uVar17 = uVar33;
    uVar42 = uVar42 + 1;
  } while (bVar14);
  lVar22 = *plVar2;
  if (lVar22 == 0) goto LAB_0249920c;
  iVar20 = uVar33 + 1;
LAB_02498c58:
  puVar11 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  puVar10 = PTR_DAT_033ed410;
  *(uint *)(lVar22 + 0x18) = uVar91;
  lVar23 = unaff_x19[0xd3];
  *(int *)(lVar22 + 0x2c) = iVar20;
  iVar20 = iStack00000000000000ac;
  if ((int)uVar91 < 1) {
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
    uVar91 = FUN_02859dc4(lVar22,0);
    FUN_02859e00(lVar22,uVar91 | 0x19,0);
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
                          uVar70 = FUN_02858bac(unaff_x19[0xe3],0);
                          if (unaff_x19[0xe3] != 0) {
                            uVar91 = FUN_02858a14(unaff_x19[0xe3],0);
                            lVar22 = *plVar2;
                            if (lVar22 != 0) {
                              lVar36 = 0;
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
                                FUN_024e7ecc(lVar22 + lVar36 + 0x70,0);
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
                                    FUN_024e8000(lVar22 + lVar36 + 0x70,1,0);
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
                                     (lVar49 = *(long *)(*plVar2 + 0x60), lVar49 == 0)) break;
                                  if (*(uint *)(lVar49 + 0x18) <= uVar27)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  if (lVar22 == 0) break;
                                  FUN_0266b9c4(lVar22,*(undefined8 *)(lVar49 + lVar36 + 0x80),0);
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
                                     (lVar49 = *(long *)(*plVar2 + 0x60), lVar49 == 0)) break;
                                  if (*(uint *)(lVar49 + 0x18) <= uVar27)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  if (lVar22 == 0) break;
                                  FUN_0266bbc8(lVar22,*(undefined8 *)(lVar49 + lVar36 + 0x98),0);
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
                                     (lVar49 = *(long *)(*plVar2 + 0x60), lVar49 == 0)) break;
                                  if (*(uint *)(lVar49 + 0x18) <= uVar27)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  if (lVar22 == 0) break;
                                  FUN_0266bc74(lVar22,*(undefined8 *)(lVar49 + lVar36 + 0xa0),0);
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
                                     (lVar49 = *(long *)(*plVar2 + 0x60), lVar49 == 0)) break;
                                  if (*(uint *)(lVar49 + 0x18) <= uVar27)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  if (lVar22 == 0) break;
                                  FUN_0266c1dc(lVar22,*(undefined8 *)(lVar49 + lVar36 + 0xa8),0);
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
                                  lVar49 = unaff_x19[0xe0];
                                  if (lVar49 == 0) break;
                                  if (*(uint *)(lVar49 + 0x18) <= uVar27)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  lVar49 = *(long *)(lVar49 + lVar23 * 8 + 0x28);
                                  if ((lVar49 == 0) ||
                                     (uVar24 = FUN_024f0144(lVar49,0), lVar22 == 0)) break;
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
                                  FUN_02858b14(uVar70,uVar68,uVar25,uVar29,lVar22,0);
                                  lVar22 = unaff_x19[0xe0];
                                  if (lVar22 == 0) break;
                                  if (*(uint *)(lVar22 + 0x18) <= uVar27)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  lVar22 = *(long *)(lVar22 + lVar23 * 8 + 0x28);
                                  if ((lVar22 == 0) ||
                                     (lVar22 = FUN_02738ef4(lVar22,0), lVar22 == 0)) break;
                                  FUN_02858a50(lVar22,uVar91 & 1,0);
                                  lVar22 = unaff_x19[0xe0];
                                  if (lVar22 == 0) break;
                                  if (*(uint *)(lVar22 + 0x18) <= uVar27)
                                  goto 
                                  UnityEngine_XR_Interaction_Toolkit_XRBaseInteractor__set_onHoverExited
                                  ;
                                  plVar50 = *(long **)(lVar22 + lVar23 * 8 + 0x28);
                                  uVar21 = (**(code **)(*unaff_x19 + 0x2b8))();
                                  if (plVar50 == (long *)0x0) break;
                                  (**(code **)(*plVar50 + 0x2c8))
                                            (plVar50,uVar21 & 1,*(undefined8 *)(*plVar50 + 0x2d0));
                                }
                                lVar22 = *plVar2;
                                lVar23 = lVar23 + 1;
                                lVar36 = lVar36 + 0x50;
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


