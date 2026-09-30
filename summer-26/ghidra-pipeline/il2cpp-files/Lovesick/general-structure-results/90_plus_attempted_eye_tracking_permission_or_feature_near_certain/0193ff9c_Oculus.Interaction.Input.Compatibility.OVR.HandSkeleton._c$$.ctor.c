/*
FUNCTION_NAME: Oculus.Interaction.Input.Compatibility.OVR.HandSkeleton.<>c$$.ctor
ENTRY_POINT: 0193ff9c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 160
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8 Oculus_Interaction_Input_Compatibility_OVR_HandSkeleton_<>c___ctor(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  uint uVar18;
  long unaff_x22;
  long unaff_x23;
  int iVar19;
  long unaff_x24;
  undefined8 *unaff_x26;
  undefined1 unaff_w27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  float fVar20;
  float unaff_s11;
  float unaff_s12;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 in_stack_00000050;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  ulong in_stack_00000060;
  ulong in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  float fStack00000000000000a0;
  undefined4 uStack00000000000000a4;
  undefined4 uStack00000000000000a8;
  undefined4 uStack00000000000000ac;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  
  *(undefined1 *)(unaff_x24 + 0x7b5) = unaff_w27;
  puVar3 = StringLiteral_2735;
  lVar15 = *(long *)(param_1 + 0xb8);
  fVar21 = *(float *)(lVar15 + 0x30);
  fVar22 = *(float *)(lVar15 + 0x34);
  fVar23 = *(float *)(lVar15 + 0x38);
  if (*(char *)(unaff_x23 + 0x438) == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    *(undefined1 *)(unaff_x23 + 0x438) = 1;
  }
  if (DAT_037750c4 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_037750c4 = '\x01';
  }
  puVar4 = StringLiteral_645;
  if (unaff_x22 != 0) {
    FUN_019449f0(uStack000000000000005c,uStack0000000000000058,in_stack_00000050._4_4_,
                 fVar21 * unaff_s12,fVar22 * unaff_s12,fVar23 * unaff_s12);
    lVar15 = unaff_x20[0x22];
    if (DAT_03775725 == '\0') {
      thunk_FUN_00d48444(System_Xml_Schema_Datatype_byte_TypeInfo);
      DAT_03775725 = '\x01';
    }
    puVar2 = Method_System_Collections_Generic_List_Enumerator<UsageHint>_get_Current__;
    fVar21 = DAT_028aa038;
    lVar16 = *(long *)(*(long *)System_Xml_Schema_Datatype_byte_TypeInfo + 0xb8);
    _uStack00000000000000a8 = *(ulong *)(lVar16 + 0x48);
    _fStack00000000000000a0 = *(ulong *)(lVar16 + 0x40);
    in_stack_000000b8 = *(undefined8 *)(lVar16 + 0x58);
    in_stack_000000b0 = *(undefined8 *)(lVar16 + 0x50);
    in_stack_000000c8 = *(undefined8 *)(lVar16 + 0x68);
    in_stack_000000c0 = *(undefined8 *)(lVar16 + 0x60);
    in_stack_000000d8 = *(undefined8 *)(lVar16 + 0x78);
    in_stack_000000d0 = *(undefined8 *)(lVar16 + 0x70);
    if (lVar15 != 0) {
      in_stack_00000060 = _fStack00000000000000a0;
      in_stack_00000068 = _uStack00000000000000a8;
      in_stack_00000070 = in_stack_000000b0;
      in_stack_00000078 = in_stack_000000b8;
      in_stack_00000080 = in_stack_000000c0;
      in_stack_00000088 = in_stack_000000c8;
      in_stack_00000090 = in_stack_000000d0;
      in_stack_00000098 = in_stack_000000d8;
      FUN_01944c6c(DAT_028aa038,lVar15,&stack0x00000060,7,0);
      lVar15 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      puVar5 = StringLiteral_79;
      if (lVar15 != 0) {
        FUN_01320e50(lVar15,*(undefined8 *)StringLiteral_79);
        *(long *)(unaff_x19 + 0x28) = lVar15;
        lVar15 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        puVar2 = StringLiteral_5473;
        if (lVar15 != 0) {
          FUN_01320e50(lVar15,*(undefined8 *)puVar5);
          *(long *)(unaff_x19 + 0x30) = lVar15;
          lVar15 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          puVar5 = Method_Sirenix_Serialization_Serializer<bool>__ctor__;
          if (lVar15 != 0) {
            FUN_01320e50(lVar15,*(undefined8 *)Method_Sirenix_Serialization_Serializer<bool>__ctor__
                        );
            *(long *)(unaff_x19 + 0x38) = lVar15;
            lVar15 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
            if (lVar15 != 0) {
              FUN_01320e50(lVar15,*(undefined8 *)puVar5);
              *(long *)(unaff_x19 + 0x40) = lVar15;
              lVar15 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
              puVar2 = UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo;
              if (lVar15 != 0) {
                FUN_01320e50(lVar15,*(undefined8 *)puVar5);
                *(long *)(unaff_x19 + 0x48) = lVar15;
                lVar15 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                puVar2 = StringLiteral_11796;
                if (lVar15 != 0) {
                  FUN_01320e50(lVar15,*(undefined8 *)PTR_DAT_033f6e48);
                  *(long *)(unaff_x19 + 0x50) = lVar15;
                  lVar15 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                  if (lVar15 != 0) {
                    FUN_01320e50(lVar15,*(undefined8 *)
                                         UnityEngine_AI_NavMesh_OnNavMeshPreUpdate_TypeInfo);
                    *(long *)(unaff_x19 + 0x58) = lVar15;
                    puVar2 = Method_Obi_ObiNativeList<Aabb>_Swap__;
                    lVar15 = unaff_x20[0x22];
                    if (lVar15 != 0) {
                      if (*(char *)(lVar15 + 0x50) == '\0') {
                        if (*(long *)(lVar15 + 0x18) == 0) goto LAB_01940870;
                        lVar16 = *(long *)(unaff_x19 + 0x28);
                        FUN_0194515c(0,*(long *)(lVar15 + 0x18),0,0);
                        if (lVar16 == 0) goto LAB_01940870;
                        FUN_00ac4f98(lVar16,*unaff_x28);
                        lVar15 = unaff_x20[0x22];
                        if ((lVar15 == 0) || (*(long *)(lVar15 + 0x20) == 0)) goto LAB_01940870;
                        lVar16 = *(long *)(unaff_x19 + 0x30);
                        FUN_01359cb4(0,*(long *)(lVar15 + 0x20),*(undefined1 *)(lVar15 + 0x50),
                                     &stack0x000000a0,*(undefined8 *)puVar3);
                        if (lVar16 == 0) goto LAB_01940870;
                        FUN_00ac4f98(_fStack00000000000000a0 & 0xffffffff,uStack00000000000000a4,
                                     _uStack00000000000000a8 & 0xffffffff,lVar16,*unaff_x28);
                        lVar15 = unaff_x20[0x22];
                        if ((lVar15 == 0) || (*(long *)(lVar15 + 0x30) == 0)) goto LAB_01940870;
                        lVar16 = *(long *)(unaff_x19 + 0x38);
                        FUN_01359cb4(0,*(long *)(lVar15 + 0x30),*(undefined1 *)(lVar15 + 0x50),
                                     &stack0x000000a0,*unaff_x21);
                        if (lVar16 == 0) goto LAB_01940870;
                        FUN_00ac1d04(_fStack00000000000000a0 & 0xffffffff,lVar16,*unaff_x29);
                        lVar15 = unaff_x20[0x22];
                        if ((lVar15 == 0) || (*(long *)(lVar15 + 0x38) == 0)) goto LAB_01940870;
                        lVar16 = *(long *)(unaff_x19 + 0x40);
                        FUN_01359cb4(0,*(long *)(lVar15 + 0x38),*(undefined1 *)(lVar15 + 0x50),
                                     &stack0x000000a0,*unaff_x21);
                        fVar22 = fStack00000000000000a0;
                        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                          thunk_FUN_00d32864();
                        }
                        if (lVar16 == 0) goto LAB_01940870;
                        if (fVar22 <= fVar21) {
                          fVar22 = fVar21;
                        }
                        FUN_00ac1d04(unaff_s11 / fVar22,lVar16,*unaff_x29);
                        lVar15 = unaff_x20[0x22];
                        if ((lVar15 == 0) || (*(long *)(lVar15 + 0x40) == 0)) goto LAB_01940870;
                        lVar16 = *(long *)(unaff_x19 + 0x48);
                        FUN_01359cb4(0,*(long *)(lVar15 + 0x40),*(undefined1 *)(lVar15 + 0x50),
                                     &stack0x000000a0,*unaff_x21);
                        if (lVar16 == 0) goto LAB_01940870;
                        fVar22 = fStack00000000000000a0;
                        if (fStack00000000000000a0 <= fVar21) {
                          fVar22 = fVar21;
                        }
                        FUN_00ac1d04(unaff_s11 / fVar22,lVar16,*unaff_x29);
                        lVar15 = unaff_x20[0x22];
                        if ((lVar15 == 0) || (*(long *)(lVar15 + 0x48) == 0)) goto LAB_01940870;
                        lVar16 = *(long *)(unaff_x19 + 0x50);
                        FUN_01359cb4(0,*(long *)(lVar15 + 0x48),*(undefined1 *)(lVar15 + 0x50),
                                     &stack0x000000a0,
                                     *(undefined8 *)
                                      Method_System_Collections_Generic_List<CharacterZone>_get_Item__
                                    );
                        if (lVar16 == 0) goto LAB_01940870;
                        FUN_00ac20f0(lVar16,_fStack00000000000000a0 & 0xffffffff,*unaff_x26);
                        lVar15 = unaff_x20[0x22];
                        if ((lVar15 == 0) || (*(long *)(lVar15 + 0x28) == 0)) goto LAB_01940870;
                        lVar16 = *(long *)(unaff_x19 + 0x58);
                        FUN_01359cb4(0,*(long *)(lVar15 + 0x28),*(undefined1 *)(lVar15 + 0x50),
                                     &stack0x000000a0,
                                     *(undefined8 *)
                                      Method_UnityEngine_ProBuilder_ArrayUtility_Add<SharedVertex>__
                                    );
                        if (lVar16 == 0) goto LAB_01940870;
                        FUN_00ad3d7c(_fStack00000000000000a0 & 0xffffffff,uStack00000000000000a4,
                                     _uStack00000000000000a8 & 0xffffffff,uStack00000000000000ac,
                                     lVar16,*(undefined8 *)
                                             Method_System_ReadOnlySpan<byte>_GetPinnableReference__
                                    );
                      }
                      if (((unaff_x20[0x21] != 0) &&
                          (FUN_0132138c(unaff_x20[0x21],0,&stack0x000000a0,*(undefined8 *)puVar2),
                          _fStack00000000000000a0 != 0)) &&
                         (lVar15 = *(long *)(_fStack00000000000000a0 + 0x18), lVar15 != 0)) {
                        lVar16 = *(long *)
                                  Method_UnityEngine_Playables_ScriptPlayable<ActivationControlPlayable>_op_Implicit__
                        ;
                        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                        uVar10 = FUN_00da5b18(*(undefined8 *)
                                               (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 200));
                        if ((uVar10 & 1) == 0) {
                          *(undefined4 *)(lVar15 + 0x18) = 0;
                        }
                        else {
                          iVar19 = *(int *)(lVar15 + 0x18);
                          *(undefined4 *)(lVar15 + 0x18) = 0;
                          if (0 < iVar19) {
                            FUN_0179519c(*(undefined8 *)(lVar15 + 0x10),0,iVar19,0);
                          }
                        }
                        if (((unaff_x20[0x21] != 0) &&
                            (FUN_0132138c(unaff_x20[0x21],0,&stack0x000000a0,*(undefined8 *)puVar2),
                            _fStack00000000000000a0 != 0)) &&
                           (*(long *)(_fStack00000000000000a0 + 0x18) != 0)) {
                          FUN_00ac20f0(*(long *)(_fStack00000000000000a0 + 0x18),0,*unaff_x26);
                          if (unaff_x20[0x22] != 0) {
                            uVar11 = FUN_01945330(unaff_x20[0x22],0);
                            *(undefined8 *)(unaff_x19 + 0x60) = uVar11;
                            if (unaff_x20[0x22] != 0) {
                              iVar8 = FUN_01945380(unaff_x20[0x22],0);
                              iVar19 = 0;
                              *(int *)(unaff_x19 + 0x68) = iVar8;
                              *(undefined4 *)(unaff_x19 + 0x88) = 0;
                              while (iVar19 < iVar8) {
                                if ((unaff_x20 == (long *)0x0) || (unaff_x20[0x22] == 0))
                                goto LAB_01940870;
                                iVar8 = FUN_019453d4(unaff_x20[0x22],0);
                                if (unaff_x20[0x22] == 0) goto LAB_01940870;
                                iVar1 = *(int *)(unaff_x19 + 0x88);
                                iVar9 = FUN_019453d4(unaff_x20[0x22],0);
                                puVar3 = 
                                Field_<PrivateImplementationDetails>_F2830F044682E33B39018B5912634835B641562914E192CA66C654F5E4492FA8
                                ;
                                if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_01940870;
                                FUN_01383784(*(long *)(unaff_x19 + 0x60),(iVar8 + 1) * iVar19,
                                             &stack0x000000a0,
                                             *(undefined8 *)
                                              Field_<PrivateImplementationDetails>_F2830F044682E33B39018B5912634835B641562914E192CA66C654F5E4492FA8
                                            );
                                if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_01940870;
                                fVar21 = fStack00000000000000a0;
                                FUN_01383784(*(long *)(unaff_x19 + 0x60),(iVar9 + 1) * (iVar1 + 1),
                                             &stack0x000000a0,*(undefined8 *)puVar3);
                                fVar22 = *(float *)(unaff_x20 + 0x23);
                                fVar20 = *(float *)((long)unaff_x20 + 0x11c);
                                fVar23 = fStack00000000000000a0 - fVar21;
                                if (DAT_03775509 == '\0') {
                                  thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
                                  DAT_03775509 = '\x01';
                                }
                                puVar4 = StringLiteral_2735;
                                puVar3 = StringLiteral_645;
                                fVar20 = (fVar23 / fVar22) * fVar20;
                                if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo
                                            + 0xe0) == 0) {
                                  thunk_FUN_00d32864();
                                }
                                fVar22 = DAT_028aa038;
                                lVar15 = unaff_x20[0x22];
                                iVar19 = -0x7fffffff;
                                if ((float)(int)fVar20 != INFINITY) {
                                  iVar19 = (int)fVar20 + 1;
                                }
                                if (lVar15 == 0) goto LAB_01940870;
                                iVar8 = 0;
                                while (puVar2 = Method_Obi_ObiNativeList<Aabb>_Swap__,
                                      iVar8 < iVar19) {
                                  iVar8 = iVar8 + 1;
                                  uVar11 = FUN_019453dc(fVar21 + (fVar23 / (float)iVar19) *
                                                                 (float)iVar8,lVar15,0);
                                  lVar15 = unaff_x20[0x22];
                                  if ((lVar15 == 0) || (*(long *)(lVar15 + 0x18) == 0))
                                  goto LAB_01940870;
                                  lVar16 = *(long *)(unaff_x19 + 0x28);
                                  FUN_0194515c(*(long *)(lVar15 + 0x18),
                                               *(undefined1 *)(lVar15 + 0x50),0);
                                  if (lVar16 == 0) goto LAB_01940870;
                                  FUN_00ac4f98(lVar16,*unaff_x28);
                                  lVar15 = unaff_x20[0x22];
                                  if ((lVar15 == 0) || (*(long *)(lVar15 + 0x20) == 0))
                                  goto LAB_01940870;
                                  lVar16 = *(long *)(unaff_x19 + 0x30);
                                  FUN_01359cb4(uVar11,*(long *)(lVar15 + 0x20),
                                               *(undefined1 *)(lVar15 + 0x50),&stack0x000000a0,
                                               *(undefined8 *)puVar4);
                                  if (lVar16 == 0) goto LAB_01940870;
                                  FUN_00ac4f98(_fStack00000000000000a0 & 0xffffffff,
                                               uStack00000000000000a4,
                                               _uStack00000000000000a8 & 0xffffffff,lVar16,
                                               *unaff_x28);
                                  lVar15 = unaff_x20[0x22];
                                  if ((lVar15 == 0) || (*(long *)(lVar15 + 0x30) == 0))
                                  goto LAB_01940870;
                                  lVar16 = *(long *)(unaff_x19 + 0x38);
                                  FUN_01359cb4(uVar11,*(long *)(lVar15 + 0x30),
                                               *(undefined1 *)(lVar15 + 0x50),&stack0x000000a0,
                                               *unaff_x21);
                                  if (lVar16 == 0) goto LAB_01940870;
                                  FUN_00ac1d04(_fStack00000000000000a0 & 0xffffffff,lVar16,
                                               *unaff_x29);
                                  lVar15 = unaff_x20[0x22];
                                  if ((lVar15 == 0) || (*(long *)(lVar15 + 0x38) == 0))
                                  goto LAB_01940870;
                                  lVar16 = *(long *)(unaff_x19 + 0x40);
                                  FUN_01359cb4(uVar11,*(long *)(lVar15 + 0x38),
                                               *(undefined1 *)(lVar15 + 0x50),&stack0x000000a0,
                                               *unaff_x21);
                                  fVar20 = fStack00000000000000a0;
                                  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  if (lVar16 == 0) goto LAB_01940870;
                                  if (fVar20 <= fVar22) {
                                    fVar20 = fVar22;
                                  }
                                  FUN_00ac1d04(unaff_s11 / fVar20,lVar16,*unaff_x29);
                                  lVar15 = unaff_x20[0x22];
                                  if ((lVar15 == 0) || (*(long *)(lVar15 + 0x40) == 0))
                                  goto LAB_01940870;
                                  lVar16 = *(long *)(unaff_x19 + 0x48);
                                  FUN_01359cb4(uVar11,*(long *)(lVar15 + 0x40),
                                               *(undefined1 *)(lVar15 + 0x50),&stack0x000000a0,
                                               *unaff_x21);
                                  if (lVar16 == 0) goto LAB_01940870;
                                  fVar20 = fStack00000000000000a0;
                                  if (fStack00000000000000a0 <= fVar22) {
                                    fVar20 = fVar22;
                                  }
                                  FUN_00ac1d04(unaff_s11 / fVar20,lVar16,*unaff_x29);
                                  lVar15 = unaff_x20[0x22];
                                  if ((lVar15 == 0) || (*(long *)(lVar15 + 0x48) == 0))
                                  goto LAB_01940870;
                                  lVar16 = *(long *)(unaff_x19 + 0x50);
                                  FUN_01359cb4(uVar11,*(long *)(lVar15 + 0x48),
                                               *(undefined1 *)(lVar15 + 0x50),&stack0x000000a0,
                                               *(undefined8 *)
                                                Method_System_Collections_Generic_List<CharacterZone>_get_Item__
                                              );
                                  if (lVar16 == 0) goto LAB_01940870;
                                  FUN_00ac20f0(lVar16,_fStack00000000000000a0 & 0xffffffff,
                                               *unaff_x26);
                                  lVar15 = unaff_x20[0x22];
                                  if ((lVar15 == 0) || (*(long *)(lVar15 + 0x28) == 0))
                                  goto LAB_01940870;
                                  lVar16 = *(long *)(unaff_x19 + 0x58);
                                  FUN_01359cb4(uVar11,*(long *)(lVar15 + 0x28),
                                               *(undefined1 *)(lVar15 + 0x50),&stack0x000000a0,
                                               *(undefined8 *)
                                                Method_UnityEngine_ProBuilder_ArrayUtility_Add<SharedVertex>__
                                              );
                                  if (lVar16 == 0) goto LAB_01940870;
                                  FUN_00ad3d7c(_fStack00000000000000a0 & 0xffffffff,
                                               uStack00000000000000a4,
                                               _uStack00000000000000a8 & 0xffffffff,
                                               uStack00000000000000ac,lVar16,
                                               *(undefined8 *)
                                                Method_System_ReadOnlySpan<byte>_GetPinnableReference__
                                              );
                                  lVar15 = unaff_x20[0x22];
                                  if (lVar15 == 0) goto LAB_01940870;
                                }
                                if ((*(char *)(lVar15 + 0x50) == '\0') ||
                                   (iVar19 = *(int *)(unaff_x19 + 0x88),
                                   iVar19 != *(int *)(unaff_x19 + 0x68) + -1)) {
                                  if ((unaff_x20[0x21] == 0) ||
                                     ((FUN_0132138c(unaff_x20[0x21],*(int *)(unaff_x19 + 0x88) + 1,
                                                    &stack0x000000a0,
                                                    *(undefined8 *)
                                                     Method_Obi_ObiNativeList<Aabb>_Swap__),
                                      _fStack00000000000000a0 == 0 ||
                                      (lVar15 = *(long *)(_fStack00000000000000a0 + 0x18),
                                      lVar15 == 0)))) goto LAB_01940870;
                                  lVar16 = *(long *)
                                            Method_UnityEngine_Playables_ScriptPlayable<ActivationControlPlayable>_op_Implicit__
                                  ;
                                  *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                                  uVar10 = FUN_00da5b18(*(undefined8 *)
                                                         (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0)
                                                         + 200));
                                  if ((uVar10 & 1) == 0) {
                                    *(undefined4 *)(lVar15 + 0x18) = 0;
                                  }
                                  else {
                                    iVar19 = *(int *)(lVar15 + 0x18);
                                    *(undefined4 *)(lVar15 + 0x18) = 0;
                                    if (0 < iVar19) {
                                      FUN_0179519c(*(undefined8 *)(lVar15 + 0x10),0,iVar19,0);
                                    }
                                  }
                                  if ((((unaff_x20[0x21] == 0) ||
                                       (FUN_0132138c(unaff_x20[0x21],*(int *)(unaff_x19 + 0x88) + 1,
                                                     &stack0x000000a0,*(undefined8 *)puVar2),
                                       _fStack00000000000000a0 == 0)) ||
                                      (*(long *)(unaff_x19 + 0x28) == 0)) ||
                                     (*(long *)(_fStack00000000000000a0 + 0x18) == 0))
                                  goto LAB_01940870;
                                  FUN_00ac20f0(*(long *)(_fStack00000000000000a0 + 0x18),
                                               *(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) + -1,
                                               *unaff_x26);
                                  iVar19 = *(int *)(unaff_x19 + 0x88);
                                }
                                if (iVar19 % 100 == 0) {
                                  iVar8 = *(int *)(unaff_x19 + 0x68);
                                  lVar15 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3e18);
                                  if (lVar15 != 0) {
                                    FUN_01919300((float)iVar19 / (float)iVar8,lVar15,
                                                 *(undefined8 *)
                                                  UnityEngine_UIElements_VisualTreeAsset_UsingEntry_TypeInfo
                                                 ,0);
                                    *(long *)(unaff_x19 + 0x18) = lVar15;
                                    *(undefined4 *)(unaff_x19 + 0x10) = 1;
                                    return 1;
                                  }
                                  goto LAB_01940870;
                                }
                                iVar8 = *(int *)(unaff_x19 + 0x68);
                                iVar19 = iVar19 + 1;
                                *(int *)(unaff_x19 + 0x88) = iVar19;
                              }
                              if ((*(long *)(unaff_x19 + 0x28) != 0) && (unaff_x20 != (long *)0x0))
                              {
                                iVar19 = *(int *)(*(long *)(unaff_x19 + 0x28) + 0x18);
                                lVar15 = unaff_x20[0x22];
                                *(int *)((long)unaff_x20 + 0x24) = iVar19;
                                *(int *)((long)unaff_x20 + 0x124) = iVar19;
                                puVar7 = StringLiteral_6246;
                                puVar6 = 
                                Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
                                ;
                                puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
                                puVar2 = 
                                Method_System_Collections_Generic_List<OVRScenePlane>_ToArray__;
                                puVar4 = 
                                Method_System_Collections_Generic_HashSet<RTHandle>_Contains__;
                                puVar3 = 
                                Method_System_Collections_Generic_List_Enumerator<TeleportPoint>_MoveNext__
                                ;
                                if (lVar15 != 0) {
                                  iVar19 = iVar19 - (*(byte *)(lVar15 + 0x50) ^ 1);
                                  *(int *)(unaff_x19 + 0x6c) = iVar19;
                                  if (iVar19 < 1) {
                                    fVar21 = 0.0;
                                  }
                                  else {
                                    fVar21 = *(float *)(lVar15 + 0x60) / (float)iVar19;
                                  }
                                  *(float *)(unaff_x20 + 0x24) = fVar21;
                                  lVar15 = FUN_00da4fb8(*(undefined8 *)puVar6);
                                  unaff_x20[9] = lVar15;
                                  lVar15 = FUN_00da4fb8(*(undefined8 *)puVar7,
                                                        *(undefined4 *)((long)unaff_x20 + 0x124));
                                  unaff_x20[0xb] = lVar15;
                                  lVar15 = FUN_00da4fb8(*(undefined8 *)puVar6,
                                                        *(undefined4 *)((long)unaff_x20 + 0x124));
                                  unaff_x20[0xd] = lVar15;
                                  lVar15 = FUN_00da4fb8(*(undefined8 *)puVar6,
                                                        *(undefined4 *)((long)unaff_x20 + 0x124));
                                  unaff_x20[0xe] = lVar15;
                                  lVar15 = FUN_00da4fb8(*(undefined8 *)puVar4,
                                                        *(undefined4 *)((long)unaff_x20 + 0x124));
                                  unaff_x20[0xf] = lVar15;
                                  lVar15 = FUN_00da4fb8(*(undefined8 *)puVar4,
                                                        *(undefined4 *)((long)unaff_x20 + 0x124));
                                  unaff_x20[0x10] = lVar15;
                                  lVar15 = FUN_00da4fb8(*(undefined8 *)puVar6,
                                                        *(undefined4 *)((long)unaff_x20 + 0x124));
                                  unaff_x20[0x12] = lVar15;
                                  lVar15 = FUN_00da4fb8(*(undefined8 *)puVar5,
                                                        *(undefined4 *)((long)unaff_x20 + 0x124));
                                  unaff_x20[0x11] = lVar15;
                                  lVar15 = FUN_00da4fb8(*(undefined8 *)puVar3,
                                                        *(undefined4 *)((long)unaff_x20 + 0x124));
                                  unaff_x20[10] = lVar15;
                                  lVar15 = FUN_00da4fb8(*(undefined8 *)puVar7,
                                                        *(undefined4 *)((long)unaff_x20 + 0x124));
                                  unaff_x20[0xc] = lVar15;
                                  lVar15 = FUN_00da4fb8(*(undefined8 *)puVar2,
                                                        *(undefined4 *)((long)unaff_x20 + 0x124));
                                  unaff_x20[0x13] = lVar15;
                                  lVar15 = FUN_00da4fb8(*(undefined8 *)puVar4,
                                                        *(undefined4 *)((long)unaff_x20 + 0x124));
                                  unaff_x20[0x26] = lVar15;
                                  *(undefined4 *)(unaff_x19 + 0x88) = 0;
                                  puVar3 = 
                                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                  ;
                                  uVar18 = 0;
                                  puVar13 = (undefined8 *)OVREyeGaze_TypeInfo;
                                  while (OVREyeGaze_TypeInfo = (undefined *)puVar13,
                                        unaff_x20 != (long *)0x0) {
                                    if (*(int *)((long)unaff_x20 + 0x24) <= (int)uVar18) {
                                      FUN_0194553c();
                                      plVar12 = (long *)(**(code **)(*unaff_x20 + 600))();
                                      *(long **)(unaff_x19 + 0x70) = plVar12;
                                      puVar3 = 
                                      Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                                      ;
                                      if (plVar12 != (long *)0x0) {
                                        lVar15 = *plVar12;
                                        uVar10 = (ulong)*(ushort *)(lVar15 + 0x12a);
                                        if (uVar10 == 0) goto LAB_01940e28;
                                        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                                        goto LAB_01940e10;
                                      }
                                      break;
                                    }
                                    if (*(long *)(unaff_x19 + 0x40) == 0) break;
                                    lVar15 = unaff_x20[0xf];
                                    FUN_0132138c(*(long *)(unaff_x19 + 0x40),uVar18,&stack0x000000a0
                                                 ,*puVar13);
                                    if (lVar15 == 0) break;
                                    if (*(uint *)(lVar15 + 0x18) <= uVar18) {
LAB_01941128:
                    /* WARNING: Subroutine does not return */
                                      FUN_00da5194();
                                    }
                                    *(float *)(lVar15 + (long)(int)uVar18 * 4 + 0x20) =
                                         fStack00000000000000a0;
                                    if (*(long *)(unaff_x19 + 0x48) == 0) break;
                                    uVar18 = *(uint *)(unaff_x19 + 0x88);
                                    lVar15 = unaff_x20[0x10];
                                    FUN_0132138c(*(long *)(unaff_x19 + 0x48),uVar18,&stack0x000000a0
                                                 ,*puVar13);
                                    if (lVar15 == 0) break;
                                    if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_01941128;
                                    *(float *)(lVar15 + (long)(int)uVar18 * 4 + 0x20) =
                                         fStack00000000000000a0;
                                    if (*(long *)(unaff_x19 + 0x28) == 0) break;
                                    uVar18 = *(uint *)(unaff_x19 + 0x88);
                                    lVar15 = unaff_x20[9];
                                    FUN_0132138c(*(long *)(unaff_x19 + 0x28),uVar18,&stack0x000000a0
                                                 ,*(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__
                                                );
                                    if (lVar15 == 0) break;
                                    if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_01941128;
                                    lVar15 = lVar15 + (long)(int)uVar18 * 0xc;
                                    *(ulong *)(lVar15 + 0x20) = _fStack00000000000000a0;
                                    *(undefined4 *)(lVar15 + 0x28) = uStack00000000000000a8;
                                    lVar15 = unaff_x20[9];
                                    if (lVar15 == 0) break;
                                    uVar18 = *(uint *)(unaff_x19 + 0x88);
                                    if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_01941128;
                                    lVar16 = unaff_x20[10];
                                    if (lVar16 == 0) break;
                                    if (*(uint *)(lVar16 + 0x18) <= uVar18) goto LAB_01941128;
                                    lVar15 = lVar15 + (long)(int)uVar18 * 0xc;
                                    uVar14 = *(undefined4 *)(lVar15 + 0x28);
                                    lVar16 = lVar16 + (long)(int)uVar18 * 0x10;
                                    *(undefined8 *)(lVar16 + 0x20) = *(undefined8 *)(lVar15 + 0x20);
                                    *(undefined4 *)(lVar16 + 0x28) = uVar14;
                                    *(undefined4 *)(lVar16 + 0x2c) = 0;
                                    lVar15 = unaff_x20[10];
                                    if (lVar15 == 0) break;
                                    uVar18 = *(uint *)(unaff_x19 + 0x88);
                                    if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_01941128;
                                    *(undefined4 *)(lVar15 + (long)(int)uVar18 * 0x10 + 0x2c) =
                                         0x3f800000;
                                    lVar15 = unaff_x20[0x12];
                                    if (DAT_03774e1c == '\0') {
                                      thunk_FUN_00d48444(
                                                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                                  );
                                      DAT_03774e1c = '\x01';
                                    }
                                    if (*(long *)(unaff_x19 + 0x38) == 0) break;
                                    uVar11 = *(undefined8 *)
                                              (*(long *)(*(long *)puVar3 + 0xb8) + 0xc);
                                    fVar21 = *(float *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x14);
                                    FUN_0132138c(*(long *)(unaff_x19 + 0x38),
                                                 *(undefined4 *)(unaff_x19 + 0x88),&stack0x000000a0,
                                                 *puVar13);
                                    if (lVar15 == 0) break;
                                    if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_01941128;
                                    fVar22 = *(float *)(unaff_x20 + 0x23);
                                    lVar15 = lVar15 + (long)(int)uVar18 * 0xc;
                                    *(ulong *)(lVar15 + 0x20) =
                                         CONCAT44((float)((ulong)uVar11 >> 0x20) *
                                                  fStack00000000000000a0 * fVar22,
                                                  (float)uVar11 * fStack00000000000000a0 * fVar22);
                                    *(float *)(lVar15 + 0x28) =
                                         fVar21 * fStack00000000000000a0 * fVar22;
                                    if (*(long *)(unaff_x19 + 0x50) == 0) break;
                                    uVar18 = *(uint *)(unaff_x19 + 0x88);
                                    lVar15 = unaff_x20[0x11];
                                    FUN_0132138c(*(long *)(unaff_x19 + 0x50),uVar18,&stack0x000000a0
                                                 ,*(undefined8 *)
                                                                                                      
                                                  Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                                                );
                                    if (lVar15 == 0) break;
                                    if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_01941128;
                                    *(float *)(lVar15 + (long)(int)uVar18 * 4 + 0x20) =
                                         fStack00000000000000a0;
                                    if (*(long *)(unaff_x19 + 0x58) == 0) break;
                                    uVar18 = *(uint *)(unaff_x19 + 0x88);
                                    lVar15 = unaff_x20[0x13];
                                    FUN_0132138c(*(long *)(unaff_x19 + 0x58),uVar18,&stack0x000000a0
                                                 ,*(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<ScrollViewMode>_set_defaultValue__
                                                );
                                    if (lVar15 == 0) break;
                                    if (*(uint *)(lVar15 + 0x18) <= uVar18) goto LAB_01941128;
                                    lVar15 = lVar15 + (long)(int)uVar18 * 0x10;
                                    *(ulong *)(lVar15 + 0x28) = _uStack00000000000000a8;
                                    *(ulong *)(lVar15 + 0x20) = _fStack00000000000000a0;
                                    iVar19 = *(int *)(unaff_x19 + 0x88);
                                    if (iVar19 % 100 == 0) {
                                      iVar8 = *(int *)((long)unaff_x20 + 0x24);
                                      lVar15 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3e18);
                                      if (lVar15 != 0) {
                                        FUN_01919300((float)iVar19 / (float)iVar8,lVar15,
                                                     *(undefined8 *)StringLiteral_13935,0);
                                        *(long *)(unaff_x19 + 0x18) = lVar15;
                                        uVar14 = 2;
                                        goto LAB_019410f0;
                                      }
                                      break;
                                    }
                                    uVar18 = iVar19 + 1;
                                    *(uint *)(unaff_x19 + 0x88) = uVar18;
                                    puVar13 = (undefined8 *)OVREyeGaze_TypeInfo;
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
    }
  }
  goto LAB_01940870;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar17 = piVar17 + 4;
    if (uVar10 == 0) break;
LAB_01940e10:
    if (*(long *)(piVar17 + -2) ==
        *(long *)Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__) {
      puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_01940e8c;
    }
  }
LAB_01940e28:
  puVar13 = (undefined8 *)
            FUN_00d59724(plVar12,*(long *)
                                  Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                         ,0);
LAB_01940e8c:
  uVar10 = (*(code *)*puVar13)(plVar12,puVar13[1]);
  if ((uVar10 & 1) == 0) {
    if (unaff_x20 != (long *)0x0) {
      plVar12 = (long *)(**(code **)(*unaff_x20 + 0x268))();
      *(long **)(unaff_x19 + 0x78) = plVar12;
      if (plVar12 != (long *)0x0) {
        lVar15 = *plVar12;
        uVar10 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar10 != 0) {
          piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
              puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_01940f54;
            }
            uVar10 = uVar10 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar10 != 0);
        }
        puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar3,0);
LAB_01940f54:
        uVar10 = (*(code *)*puVar13)(plVar12,puVar13[1]);
        if ((uVar10 & 1) == 0) {
          if (unaff_x20 != (long *)0x0) {
            plVar12 = (long *)(**(code **)(*unaff_x20 + 0x278))();
            *(long **)(unaff_x19 + 0x80) = plVar12;
            if (plVar12 != (long *)0x0) {
              lVar15 = *plVar12;
              uVar10 = (ulong)*(ushort *)(lVar15 + 0x12a);
              if (uVar10 != 0) {
                piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
                    puVar13 = (undefined8 *)(lVar15 + (long)*piVar17 * 0x10 + 0x138);
                    goto LAB_0194101c;
                  }
                  uVar10 = uVar10 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar10 != 0);
              }
              puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar3,0);
LAB_0194101c:
              uVar10 = (*(code *)*puVar13)(plVar12,puVar13[1]);
              if ((uVar10 & 1) == 0) {
                return 0;
              }
              plVar12 = *(long **)(unaff_x19 + 0x80);
              if (plVar12 != (long *)0x0) {
                lVar15 = *plVar12;
                uVar10 = (ulong)*(ushort *)(lVar15 + 0x12a);
                if (uVar10 != 0) {
                  piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
                      puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                      goto BufferedAudioStream__Stop;
                    }
                    uVar10 = uVar10 - 1;
                    piVar17 = piVar17 + 4;
                  } while (uVar10 != 0);
                }
                puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar3,1);
BufferedAudioStream__Stop:
                uVar11 = (*(code *)*puVar13)(plVar12,puVar13[1]);
                *(undefined8 *)(unaff_x19 + 0x18) = uVar11;
                uVar14 = 5;
                goto LAB_019410f0;
              }
            }
          }
        }
        else {
          plVar12 = *(long **)(unaff_x19 + 0x78);
          if (plVar12 != (long *)0x0) {
            lVar15 = *plVar12;
            uVar10 = (ulong)*(ushort *)(lVar15 + 0x12a);
            if (uVar10 != 0) {
              piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
                  puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                  goto LAB_019410b4;
                }
                uVar10 = uVar10 - 1;
                piVar17 = piVar17 + 4;
              } while (uVar10 != 0);
            }
            puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar3,1);
LAB_019410b4:
            uVar11 = (*(code *)*puVar13)(plVar12,puVar13[1]);
            *(undefined8 *)(unaff_x19 + 0x18) = uVar11;
            uVar14 = 4;
LAB_019410f0:
            *(undefined4 *)(unaff_x19 + 0x10) = uVar14;
            return 1;
          }
        }
      }
    }
  }
  else {
    plVar12 = *(long **)(unaff_x19 + 0x70);
    if (plVar12 != (long *)0x0) {
      lVar15 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar10 != 0) {
        piVar17 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
            puVar13 = (undefined8 *)(lVar15 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_0194108c;
          }
          uVar10 = uVar10 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar10 != 0);
      }
      puVar13 = (undefined8 *)FUN_00d59724(plVar12,*(long *)puVar3,1);
LAB_0194108c:
      uVar11 = (*(code *)*puVar13)(plVar12,puVar13[1]);
      uVar14 = 3;
      *(undefined8 *)(unaff_x19 + 0x18) = uVar11;
      goto LAB_019410f0;
    }
  }
LAB_01940870:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


