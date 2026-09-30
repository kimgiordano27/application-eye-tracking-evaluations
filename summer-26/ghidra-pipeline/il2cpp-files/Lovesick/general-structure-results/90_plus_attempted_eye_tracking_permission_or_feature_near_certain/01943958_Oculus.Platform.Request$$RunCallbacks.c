/*
FUNCTION_NAME: Oculus.Platform.Request$$RunCallbacks
ENTRY_POINT: 01943958
PROGRAM: Lovesick-libil2cpp.so
SCORE: 165
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Oculus_Platform_Request__RunCallbacks(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  int iVar11;
  long lVar12;
  int *piVar13;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  uint uVar14;
  long lVar15;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  char unaff_w26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  char cVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float unaff_s11;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uStack0000000000000064;
  ulong in_stack_00000070;
  ulong in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  float fStack00000000000000b0;
  undefined4 uStack00000000000000b4;
  undefined4 uStack00000000000000b8;
  undefined4 uStack00000000000000bc;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  
  lVar15 = unaff_x20[0x22];
  if (*(char *)(param_1 + 0x7b5) == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_037757b5 = unaff_w26;
  }
  uStack0000000000000064 =
       *(undefined4 *)
        (*(long *)(*(long *)
                    Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                  + 0xb8) + 0x34);
  if (DAT_03775438 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_03775438 = '\x01';
  }
  if (DAT_037750c4 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_037750c4 = '\x01';
  }
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (lVar15 != 0) {
    FUN_019449f0(lVar15,0,0xffff0002,*(undefined8 *)PTR_DAT_033f4510);
    lVar15 = unaff_x20[0x22];
    if (DAT_03775438 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03775438 = '\x01';
    }
    puVar1 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
    lVar12 = *(long *)(*(long *)
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      + 0xb8);
    uStack0000000000000064 = *(undefined4 *)(lVar12 + 0x3c);
    uVar17 = *(undefined4 *)(lVar12 + 0x40);
    uVar18 = *(undefined4 *)(lVar12 + 0x44);
    cVar16 = '\x01';
    if (DAT_037757b5 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_037757b5 = '\x01';
      lVar12 = *(long *)(*(long *)puVar1 + 0xb8);
      cVar16 = DAT_03775438;
    }
    fVar20 = *(float *)(lVar12 + 0x30);
    fVar21 = *(float *)(lVar12 + 0x34);
    fVar22 = *(float *)(lVar12 + 0x38);
    if (cVar16 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_03775438 = '\x01';
    }
    if (DAT_037750c4 == '\0') {
      thunk_FUN_00d48444(
                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                        );
      DAT_037750c4 = '\x01';
    }
    if (lVar15 != 0) {
      FUN_019449f0(uStack0000000000000064,uVar17,uVar18,fVar20 * 0.25,fVar21 * 0.25,fVar22 * 0.25,
                   lVar15,1,0xffff0002,*(undefined8 *)PTR_DAT_033f4510);
      lVar15 = unaff_x20[0x22];
      if (DAT_03775725 == '\0') {
        thunk_FUN_00d48444(System_Xml_Schema_Datatype_byte_TypeInfo);
        DAT_03775725 = '\x01';
      }
      puVar1 = Method_System_Collections_Generic_List_Enumerator<UsageHint>_get_Current__;
      fVar20 = DAT_028aa038;
      lVar12 = *(long *)(*(long *)System_Xml_Schema_Datatype_byte_TypeInfo + 0xb8);
      _uStack00000000000000b8 = *(ulong *)(lVar12 + 0x48);
      _fStack00000000000000b0 = *(ulong *)(lVar12 + 0x40);
      in_stack_000000c8 = *(undefined8 *)(lVar12 + 0x58);
      in_stack_000000c0 = *(undefined8 *)(lVar12 + 0x50);
      in_stack_000000d8 = *(undefined8 *)(lVar12 + 0x68);
      in_stack_000000d0 = *(undefined8 *)(lVar12 + 0x60);
      in_stack_000000e8 = *(undefined8 *)(lVar12 + 0x78);
      in_stack_000000e0 = *(undefined8 *)(lVar12 + 0x70);
      if (lVar15 != 0) {
        in_stack_00000070 = _fStack00000000000000b0;
        in_stack_00000078 = _uStack00000000000000b8;
        in_stack_00000080 = in_stack_000000c0;
        in_stack_00000088 = in_stack_000000c8;
        in_stack_00000090 = in_stack_000000d0;
        in_stack_00000098 = in_stack_000000d8;
        in_stack_000000a0 = in_stack_000000e0;
        in_stack_000000a8 = in_stack_000000e8;
        FUN_01944c6c(DAT_028aa038,lVar15,&stack0x00000070,7);
        lVar15 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        puVar1 = StringLiteral_5473;
        if (lVar15 != 0) {
          FUN_01320e50(lVar15,*(undefined8 *)StringLiteral_79);
          *(long *)(unaff_x19 + 0x28) = lVar15;
          lVar15 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
          puVar2 = Method_Sirenix_Serialization_Serializer<bool>__ctor__;
          if (lVar15 != 0) {
            FUN_01320e50(lVar15,*(undefined8 *)Method_Sirenix_Serialization_Serializer<bool>__ctor__
                        );
            *(long *)(unaff_x19 + 0x30) = lVar15;
            lVar15 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
            puVar1 = UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo;
            if (lVar15 != 0) {
              FUN_01320e50(lVar15,*(undefined8 *)puVar2);
              *(long *)(unaff_x19 + 0x38) = lVar15;
              lVar15 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
              puVar1 = StringLiteral_11796;
              if (lVar15 != 0) {
                FUN_01320e50(lVar15,*(undefined8 *)PTR_DAT_033f6e48);
                *(long *)(unaff_x19 + 0x40) = lVar15;
                lVar15 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                if (lVar15 != 0) {
                  FUN_01320e50(lVar15,*(undefined8 *)
                                       UnityEngine_AI_NavMesh_OnNavMeshPreUpdate_TypeInfo);
                  *(long *)(unaff_x19 + 0x48) = lVar15;
                  puVar1 = Method_Obi_ObiNativeList<Aabb>_Swap__;
                  lVar15 = unaff_x20[0x22];
                  if (lVar15 != 0) {
                    if (*(char *)(lVar15 + 0x50) == '\0') {
                      if (*(long *)(lVar15 + 0x18) == 0) goto LAB_01944208;
                      lVar12 = *(long *)(unaff_x19 + 0x28);
                      FUN_0194515c(0,*(long *)(lVar15 + 0x18),0);
                      if (lVar12 == 0) goto LAB_01944208;
                      FUN_00ac4f98(lVar12,*unaff_x24);
                      lVar15 = unaff_x20[0x22];
                      if ((lVar15 == 0) || (*(long *)(lVar15 + 0x30) == 0)) goto LAB_01944208;
                      lVar12 = *(long *)(unaff_x19 + 0x30);
                      FUN_01359cb4(0,*(long *)(lVar15 + 0x30),*(undefined1 *)(lVar15 + 0x50),
                                   &stack0x000000b0,*unaff_x28);
                      if (lVar12 == 0) goto LAB_01944208;
                      FUN_00ac1d04(_fStack00000000000000b0 & 0xffffffff,lVar12,*unaff_x21);
                      lVar15 = unaff_x20[0x22];
                      if ((lVar15 == 0) || (*(long *)(lVar15 + 0x38) == 0)) goto LAB_01944208;
                      lVar12 = *(long *)(unaff_x19 + 0x38);
                      FUN_01359cb4(0,*(long *)(lVar15 + 0x38),*(undefined1 *)(lVar15 + 0x50),
                                   &stack0x000000b0,*unaff_x28);
                      fVar21 = fStack00000000000000b0;
                      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      if (lVar12 == 0) goto LAB_01944208;
                      if (fVar21 <= fVar20) {
                        fVar21 = fVar20;
                      }
                      FUN_00ac1d04(unaff_s11 / fVar21,lVar12,*unaff_x21);
                      lVar15 = unaff_x20[0x22];
                      if ((lVar15 == 0) || (*(long *)(lVar15 + 0x48) == 0)) goto LAB_01944208;
                      lVar12 = *(long *)(unaff_x19 + 0x40);
                      FUN_01359cb4(0,*(long *)(lVar15 + 0x48),*(undefined1 *)(lVar15 + 0x50),
                                   &stack0x000000b0,
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_List<CharacterZone>_get_Item__
                                  );
                      if (lVar12 == 0) goto LAB_01944208;
                      FUN_00ac20f0(lVar12,_fStack00000000000000b0 & 0xffffffff,*unaff_x27);
                      lVar15 = unaff_x20[0x22];
                      if ((lVar15 == 0) || (*(long *)(lVar15 + 0x28) == 0)) goto LAB_01944208;
                      lVar12 = *(long *)(unaff_x19 + 0x48);
                      FUN_01359cb4(0,*(long *)(lVar15 + 0x28),*(undefined1 *)(lVar15 + 0x50),
                                   &stack0x000000b0,*unaff_x25);
                      if (lVar12 == 0) goto LAB_01944208;
                      FUN_00ad3d7c(_fStack00000000000000b0 & 0xffffffff,uStack00000000000000b4,
                                   _uStack00000000000000b8 & 0xffffffff,uStack00000000000000bc,
                                   lVar12,*(undefined8 *)
                                           Method_System_ReadOnlySpan<byte>_GetPinnableReference__);
                    }
                    if (((unaff_x20[0x21] != 0) &&
                        (FUN_0132138c(unaff_x20[0x21],0,&stack0x000000b0,*(undefined8 *)puVar1),
                        _fStack00000000000000b0 != 0)) &&
                       (lVar15 = *(long *)(_fStack00000000000000b0 + 0x18), lVar15 != 0)) {
                      lVar12 = *(long *)
                                Method_UnityEngine_Playables_ScriptPlayable<ActivationControlPlayable>_op_Implicit__
                      ;
                      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                      uVar7 = FUN_00da5b18(*(undefined8 *)
                                            (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 200));
                      if ((uVar7 & 1) == 0) {
                        *(undefined4 *)(lVar15 + 0x18) = 0;
                      }
                      else {
                        iVar11 = *(int *)(lVar15 + 0x18);
                        *(undefined4 *)(lVar15 + 0x18) = 0;
                        if (0 < iVar11) {
                          FUN_0179519c(*(undefined8 *)(lVar15 + 0x10),0,iVar11,0);
                        }
                      }
                      if (((unaff_x20[0x21] != 0) &&
                          (FUN_0132138c(unaff_x20[0x21],0,&stack0x000000b0,*(undefined8 *)puVar1),
                          _fStack00000000000000b0 != 0)) &&
                         ((*(long *)(_fStack00000000000000b0 + 0x18) != 0 &&
                          (FUN_00ac20f0(*(long *)(_fStack00000000000000b0 + 0x18),0,*unaff_x27),
                          unaff_x20[0x22] != 0)))) {
                        uVar8 = FUN_01945330();
                        *(undefined8 *)(unaff_x19 + 0x50) = uVar8;
                        if (unaff_x20[0x22] != 0) {
                          iVar6 = FUN_01945380();
                          iVar11 = 0;
                          *(int *)(unaff_x19 + 0x58) = iVar6;
                          *(undefined4 *)(unaff_x19 + 0x70) = 0;
                          while (puVar1 = 
                                 Field_<PrivateImplementationDetails>_F2830F044682E33B39018B5912634835B641562914E192CA66C654F5E4492FA8
                                , iVar11 < iVar6) {
                            if (((unaff_x20 == (long *)0x0) || (unaff_x20[0x22] == 0)) ||
                               (*(long *)(unaff_x19 + 0x50) == 0)) goto LAB_01944208;
                            FUN_01383784(*(long *)(unaff_x19 + 0x50),iVar11 * 0x15,&stack0x000000b0,
                                         *(undefined8 *)
                                          Field_<PrivateImplementationDetails>_F2830F044682E33B39018B5912634835B641562914E192CA66C654F5E4492FA8
                                        );
                            if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_01944208;
                            fVar20 = fStack00000000000000b0;
                            FUN_01383784(*(long *)(unaff_x19 + 0x50),iVar11 * 0x15 + 0x15,
                                         &stack0x000000b0,*(undefined8 *)puVar1);
                            fVar21 = *(float *)(unaff_x20 + 0x23);
                            fVar19 = *(float *)((long)unaff_x20 + 0x11c);
                            fVar22 = fStack00000000000000b0 - fVar20;
                            if (DAT_03775509 == '\0') {
                              thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
                              DAT_03775509 = '\x01';
                            }
                            fVar19 = (fVar22 / fVar21) * fVar19;
                            if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo +
                                        0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            fVar21 = DAT_028aa038;
                            lVar15 = unaff_x20[0x22];
                            iVar11 = -0x7fffffff;
                            if ((float)(int)fVar19 != INFINITY) {
                              iVar11 = (int)fVar19 + 1;
                            }
                            if (lVar15 == 0) goto LAB_01944208;
                            iVar6 = 0;
                            while (puVar1 = Method_Obi_ObiNativeList<Aabb>_Swap__, iVar6 < iVar11) {
                              iVar6 = iVar6 + 1;
                              uVar8 = FUN_019453dc(fVar20 + (fVar22 / (float)iVar11) * (float)iVar6)
                              ;
                              lVar15 = unaff_x20[0x22];
                              if ((lVar15 == 0) || (*(long *)(lVar15 + 0x18) == 0))
                              goto LAB_01944208;
                              lVar12 = *(long *)(unaff_x19 + 0x28);
                              FUN_0194515c(*(long *)(lVar15 + 0x18),*(undefined1 *)(lVar15 + 0x50));
                              if (lVar12 == 0) goto LAB_01944208;
                              FUN_00ac4f98(lVar12,*unaff_x24);
                              lVar15 = unaff_x20[0x22];
                              if ((lVar15 == 0) || (*(long *)(lVar15 + 0x30) == 0))
                              goto LAB_01944208;
                              lVar12 = *(long *)(unaff_x19 + 0x30);
                              FUN_01359cb4(uVar8,*(long *)(lVar15 + 0x30),
                                           *(undefined1 *)(lVar15 + 0x50),&stack0x000000b0,
                                           *unaff_x28);
                              if (lVar12 == 0) goto LAB_01944208;
                              FUN_00ac1d04(_fStack00000000000000b0 & 0xffffffff,lVar12,*unaff_x21);
                              lVar15 = unaff_x20[0x22];
                              if ((lVar15 == 0) || (*(long *)(lVar15 + 0x38) == 0))
                              goto LAB_01944208;
                              lVar12 = *(long *)(unaff_x19 + 0x38);
                              FUN_01359cb4(uVar8,*(long *)(lVar15 + 0x38),
                                           *(undefined1 *)(lVar15 + 0x50),&stack0x000000b0,
                                           *unaff_x28);
                              fVar19 = fStack00000000000000b0;
                              if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                              }
                              if (lVar12 == 0) goto LAB_01944208;
                              if (fVar19 <= fVar21) {
                                fVar19 = fVar21;
                              }
                              FUN_00ac1d04(unaff_s11 / fVar19,lVar12,*unaff_x21);
                              lVar15 = unaff_x20[0x22];
                              if ((lVar15 == 0) || (*(long *)(lVar15 + 0x48) == 0))
                              goto LAB_01944208;
                              lVar12 = *(long *)(unaff_x19 + 0x40);
                              FUN_01359cb4(uVar8,*(long *)(lVar15 + 0x48),
                                           *(undefined1 *)(lVar15 + 0x50),&stack0x000000b0,
                                           *(undefined8 *)
                                            Method_System_Collections_Generic_List<CharacterZone>_get_Item__
                                          );
                              if (lVar12 == 0) goto LAB_01944208;
                              FUN_00ac20f0(lVar12,_fStack00000000000000b0 & 0xffffffff,*unaff_x27);
                              lVar15 = unaff_x20[0x22];
                              if ((lVar15 == 0) || (*(long *)(lVar15 + 0x28) == 0))
                              goto LAB_01944208;
                              lVar12 = *(long *)(unaff_x19 + 0x48);
                              FUN_01359cb4(uVar8,*(long *)(lVar15 + 0x28),
                                           *(undefined1 *)(lVar15 + 0x50),&stack0x000000b0,
                                           *unaff_x25);
                              if (lVar12 == 0) goto LAB_01944208;
                              FUN_00ad3d7c(_fStack00000000000000b0 & 0xffffffff,
                                           uStack00000000000000b4,
                                           _uStack00000000000000b8 & 0xffffffff,
                                           uStack00000000000000bc,lVar12,
                                           *(undefined8 *)
                                            Method_System_ReadOnlySpan<byte>_GetPinnableReference__)
                              ;
                              lVar15 = unaff_x20[0x22];
                              if (lVar15 == 0) goto LAB_01944208;
                            }
                            if ((*(char *)(lVar15 + 0x50) == '\0') ||
                               (iVar11 = *(int *)(unaff_x19 + 0x70),
                               iVar11 != *(int *)(unaff_x19 + 0x58) + -1)) {
                              if ((unaff_x20[0x21] == 0) ||
                                 ((FUN_0132138c(unaff_x20[0x21],*(int *)(unaff_x19 + 0x70) + 1,
                                                &stack0x000000b0,
                                                *(undefined8 *)Method_Obi_ObiNativeList<Aabb>_Swap__
                                               ), _fStack00000000000000b0 == 0 ||
                                  (lVar15 = *(long *)(_fStack00000000000000b0 + 0x18), lVar15 == 0))
                                 )) goto LAB_01944208;
                              lVar12 = *(long *)
                                        Method_UnityEngine_Playables_ScriptPlayable<ActivationControlPlayable>_op_Implicit__
                              ;
                              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                              uVar7 = FUN_00da5b18(*(undefined8 *)
                                                    (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) +
                                                    200));
                              if ((uVar7 & 1) == 0) {
                                *(undefined4 *)(lVar15 + 0x18) = 0;
                              }
                              else {
                                iVar11 = *(int *)(lVar15 + 0x18);
                                *(undefined4 *)(lVar15 + 0x18) = 0;
                                if (0 < iVar11) {
                                  FUN_0179519c(*(undefined8 *)(lVar15 + 0x10),0,iVar11,0);
                                }
                              }
                              if ((((unaff_x20[0x21] == 0) ||
                                   (FUN_0132138c(unaff_x20[0x21],*(int *)(unaff_x19 + 0x70) + 1,
                                                 &stack0x000000b0,*(undefined8 *)puVar1),
                                   _fStack00000000000000b0 == 0)) ||
                                  (*(long *)(unaff_x19 + 0x28) == 0)) ||
                                 (*(long *)(_fStack00000000000000b0 + 0x18) == 0))
                              goto LAB_01944208;
                              FUN_00ac20f0(*(long *)(_fStack00000000000000b0 + 0x18),
                                           *(int *)(*(long *)(unaff_x19 + 0x28) + 0x18) + -1,
                                           *unaff_x27);
                              iVar11 = *(int *)(unaff_x19 + 0x70);
                            }
                            if (iVar11 % 100 == 0) {
                              iVar6 = *(int *)(unaff_x19 + 0x58);
                              lVar15 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3e18);
                              if (lVar15 != 0) {
                                FUN_01919300((float)iVar11 / (float)iVar6,lVar15,
                                             *(undefined8 *)
                                              UnityEngine_UIElements_VisualTreeAsset_UsingEntry_TypeInfo
                                             ,0);
                                *(long *)(unaff_x19 + 0x18) = lVar15;
                                *(undefined4 *)(unaff_x19 + 0x10) = 1;
                                return 1;
                              }
                              goto LAB_01944208;
                            }
                            iVar6 = *(int *)(unaff_x19 + 0x58);
                            iVar11 = iVar11 + 1;
                            *(int *)(unaff_x19 + 0x70) = iVar11;
                          }
                          if ((*(long *)(unaff_x19 + 0x28) != 0) && (unaff_x20 != (long *)0x0)) {
                            iVar11 = *(int *)(*(long *)(unaff_x19 + 0x28) + 0x18);
                            lVar15 = unaff_x20[0x22];
                            *(int *)((long)unaff_x20 + 0x24) = iVar11;
                            *(int *)((long)unaff_x20 + 0x124) = (int)unaff_x20[0x27] + iVar11;
                            puVar5 = 
                            Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
                            ;
                            puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
                            puVar3 = Method_System_Collections_Generic_List<OVRScenePlane>_ToArray__
                            ;
                            puVar2 = Method_System_Collections_Generic_HashSet<RTHandle>_Contains__;
                            puVar1 = 
                            Method_System_Collections_Generic_List_Enumerator<TeleportPoint>_MoveNext__
                            ;
                            if (lVar15 != 0) {
                              iVar11 = iVar11 - (*(byte *)(lVar15 + 0x50) ^ 1);
                              *(int *)(unaff_x19 + 0x5c) = iVar11;
                              if (iVar11 < 1) {
                                fVar20 = 0.0;
                              }
                              else {
                                fVar20 = *(float *)(lVar15 + 0x60) / (float)iVar11;
                              }
                              *(float *)(unaff_x20 + 0x24) = fVar20;
                              lVar15 = FUN_00da4fb8(*(undefined8 *)puVar5);
                              unaff_x20[9] = lVar15;
                              lVar15 = FUN_00da4fb8(*(undefined8 *)puVar1,
                                                    *(undefined4 *)((long)unaff_x20 + 0x124));
                              unaff_x20[10] = lVar15;
                              lVar15 = FUN_00da4fb8(*(undefined8 *)puVar5,
                                                    *(undefined4 *)((long)unaff_x20 + 0x124));
                              unaff_x20[0xd] = lVar15;
                              lVar15 = FUN_00da4fb8(*(undefined8 *)puVar2,
                                                    *(undefined4 *)((long)unaff_x20 + 0x124));
                              unaff_x20[0xf] = lVar15;
                              lVar15 = FUN_00da4fb8(*(undefined8 *)puVar5,
                                                    *(undefined4 *)((long)unaff_x20 + 0x124));
                              unaff_x20[0x12] = lVar15;
                              lVar15 = FUN_00da4fb8(*(undefined8 *)puVar4,
                                                    *(undefined4 *)((long)unaff_x20 + 0x124));
                              unaff_x20[0x11] = lVar15;
                              lVar15 = FUN_00da4fb8(*(undefined8 *)puVar3,
                                                    *(undefined4 *)((long)unaff_x20 + 0x124));
                              unaff_x20[0x13] = lVar15;
                              lVar15 = FUN_00da4fb8(*(undefined8 *)puVar2,
                                                    *(undefined4 *)((long)unaff_x20 + 0x124));
                              unaff_x20[0x26] = lVar15;
                              *(undefined4 *)(unaff_x19 + 0x70) = 0;
                              puVar1 = 
                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              ;
                              uVar14 = 0;
                              puVar10 = (undefined8 *)OVREyeGaze_TypeInfo;
                              while (OVREyeGaze_TypeInfo = (undefined *)puVar10,
                                    unaff_x20 != (long *)0x0) {
                                if (*(int *)((long)unaff_x20 + 0x24) <= (int)uVar14) {
                                  FUN_0194553c();
                                  plVar9 = (long *)(**(code **)(*unaff_x20 + 600))();
                                  *(long **)(unaff_x19 + 0x60) = plVar9;
                                  puVar1 = 
                                  Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                                  ;
                                  if (plVar9 != (long *)0x0) {
                                    lVar15 = *plVar9;
                                    uVar7 = (ulong)*(ushort *)(lVar15 + 0x12a);
                                    if (uVar7 == 0) goto LAB_0194476c;
                                    piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
                                    goto LAB_01944754;
                                  }
                                  break;
                                }
                                if (*(long *)(unaff_x19 + 0x38) == 0) break;
                                lVar15 = unaff_x20[0xf];
                                FUN_0132138c(*(long *)(unaff_x19 + 0x38),uVar14,&stack0x000000b0,
                                             *puVar10);
                                if (lVar15 == 0) break;
                                if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_0194499c;
                                *(float *)(lVar15 + (long)(int)uVar14 * 4 + 0x20) =
                                     fStack00000000000000b0;
                                if (*(long *)(unaff_x19 + 0x28) == 0) break;
                                uVar14 = *(uint *)(unaff_x19 + 0x70);
                                lVar15 = unaff_x20[9];
                                FUN_0132138c(*(long *)(unaff_x19 + 0x28),uVar14,&stack0x000000b0,
                                             *(undefined8 *)
                                              Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__
                                            );
                                if (lVar15 == 0) break;
                                if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_0194499c;
                                lVar15 = lVar15 + (long)(int)uVar14 * 0xc;
                                *(ulong *)(lVar15 + 0x20) = _fStack00000000000000b0;
                                *(undefined4 *)(lVar15 + 0x28) = uStack00000000000000b8;
                                lVar15 = unaff_x20[9];
                                if (lVar15 == 0) break;
                                uVar14 = *(uint *)(unaff_x19 + 0x70);
                                if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_0194499c;
                                lVar12 = unaff_x20[10];
                                if (lVar12 == 0) break;
                                if (*(uint *)(lVar12 + 0x18) <= uVar14) goto LAB_0194499c;
                                lVar15 = lVar15 + (long)(int)uVar14 * 0xc;
                                uVar17 = *(undefined4 *)(lVar15 + 0x28);
                                lVar12 = lVar12 + (long)(int)uVar14 * 0x10;
                                *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)(lVar15 + 0x20);
                                *(undefined4 *)(lVar12 + 0x28) = uVar17;
                                *(undefined4 *)(lVar12 + 0x2c) = 0;
                                lVar15 = unaff_x20[10];
                                if (lVar15 == 0) break;
                                uVar14 = *(uint *)(unaff_x19 + 0x70);
                                if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_0194499c;
                                *(undefined4 *)(lVar15 + (long)(int)uVar14 * 0x10 + 0x2c) =
                                     0x3f800000;
                                lVar15 = unaff_x20[0x12];
                                if (DAT_03774e1c == '\0') {
                                  thunk_FUN_00d48444(
                                                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                                  );
                                  DAT_03774e1c = '\x01';
                                }
                                if (*(long *)(unaff_x19 + 0x30) == 0) break;
                                uVar8 = *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0xc);
                                fVar20 = *(float *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x14);
                                FUN_0132138c(*(long *)(unaff_x19 + 0x30),
                                             *(undefined4 *)(unaff_x19 + 0x70),&stack0x000000b0,
                                             *puVar10);
                                if (lVar15 == 0) break;
                                if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_0194499c;
                                fVar21 = *(float *)(unaff_x20 + 0x23);
                                lVar15 = lVar15 + (long)(int)uVar14 * 0xc;
                                *(ulong *)(lVar15 + 0x20) =
                                     CONCAT44((float)((ulong)uVar8 >> 0x20) * fStack00000000000000b0
                                              * fVar21,(float)uVar8 * fStack00000000000000b0 *
                                                       fVar21);
                                *(float *)(lVar15 + 0x28) = fVar20 * fStack00000000000000b0 * fVar21
                                ;
                                if (*(long *)(unaff_x19 + 0x40) == 0) break;
                                uVar14 = *(uint *)(unaff_x19 + 0x70);
                                lVar15 = unaff_x20[0x11];
                                FUN_0132138c(*(long *)(unaff_x19 + 0x40),uVar14,&stack0x000000b0,
                                             *(undefined8 *)
                                              Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                                            );
                                if (lVar15 == 0) break;
                                if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_0194499c;
                                *(float *)(lVar15 + (long)(int)uVar14 * 4 + 0x20) =
                                     fStack00000000000000b0;
                                if (*(long *)(unaff_x19 + 0x48) == 0) break;
                                uVar14 = *(uint *)(unaff_x19 + 0x70);
                                lVar15 = unaff_x20[0x13];
                                FUN_0132138c(*(long *)(unaff_x19 + 0x48),uVar14,&stack0x000000b0,
                                             *(undefined8 *)
                                              Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<ScrollViewMode>_set_defaultValue__
                                            );
                                if (lVar15 == 0) break;
                                if (*(uint *)(lVar15 + 0x18) <= uVar14) goto LAB_0194499c;
                                lVar15 = lVar15 + (long)(int)uVar14 * 0x10;
                                *(ulong *)(lVar15 + 0x28) = _uStack00000000000000b8;
                                *(ulong *)(lVar15 + 0x20) = _fStack00000000000000b0;
                                iVar11 = *(int *)(unaff_x19 + 0x70);
                                if (iVar11 % 100 == 0) {
                                  iVar6 = *(int *)((long)unaff_x20 + 0x24);
                                  lVar15 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3e18);
                                  if (lVar15 != 0) {
                                    FUN_01919300((float)iVar11 / (float)iVar6,lVar15,
                                                 *(undefined8 *)
                                                  UnityEngine_UIElements_VisualTreeAsset_UsingEntry_TypeInfo
                                                 ,0);
                                    *(long *)(unaff_x19 + 0x18) = lVar15;
                                    uVar17 = 2;
                                    goto LAB_01944990;
                                  }
                                  break;
                                }
                                uVar14 = iVar11 + 1;
                                *(uint *)(unaff_x19 + 0x70) = uVar14;
                                puVar10 = (undefined8 *)OVREyeGaze_TypeInfo;
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
  goto LAB_01944208;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar13 = piVar13 + 4;
    if (uVar7 == 0) break;
LAB_01944754:
    if (*(long *)(piVar13 + -2) ==
        *(long *)Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__) {
      puVar10 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_019447d0;
    }
  }
LAB_0194476c:
  puVar10 = (undefined8 *)
            FUN_00d59724(plVar9,*(long *)
                                 Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                         ,0);
LAB_019447d0:
  uVar7 = (*(code *)*puVar10)(plVar9,puVar10[1]);
  if ((uVar7 & 1) == 0) {
    if (unaff_x20 != (long *)0x0) {
      plVar9 = (long *)(**(code **)(*unaff_x20 + 0x268))();
      *(long **)(unaff_x19 + 0x68) = plVar9;
      if (plVar9 != (long *)0x0) {
        lVar15 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar15 + 0x12a);
        if (uVar7 != 0) {
          piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
              puVar10 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_01944898;
            }
            uVar7 = uVar7 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar7 != 0);
        }
        puVar10 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar1,0);
LAB_01944898:
        uVar7 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if ((uVar7 & 1) == 0) {
          if (unaff_x20 != (long *)0x0) {
            lVar15 = unaff_x20[0x26];
            *(undefined4 *)(unaff_x20 + 0x25) = 0;
            if (lVar15 != 0) {
              uVar14 = *(uint *)(lVar15 + 0x18);
              if (0 < (long)((ulong)uVar14 << 0x20)) {
                uVar7 = 0;
                fVar20 = 0.0;
                do {
                  if (uVar14 == uVar7) {
LAB_0194499c:
                    /* WARNING: Subroutine does not return */
                    FUN_00da5194();
                  }
                  lVar12 = uVar7 * 4;
                  uVar7 = uVar7 + 1;
                  fVar20 = *(float *)(lVar15 + 0x20 + lVar12) + fVar20;
                  *(float *)(unaff_x20 + 0x25) = fVar20;
                } while ((long)uVar7 < (long)(int)uVar14);
              }
              return 0;
            }
          }
        }
        else {
          plVar9 = *(long **)(unaff_x19 + 0x68);
          if (plVar9 != (long *)0x0) {
            lVar15 = *plVar9;
            uVar7 = (ulong)*(ushort *)(lVar15 + 0x12a);
            if (uVar7 != 0) {
              piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                  puVar10 = (undefined8 *)(lVar15 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                  goto LAB_0194497c;
                }
                uVar7 = uVar7 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar7 != 0);
            }
            puVar10 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar1,1);
LAB_0194497c:
            uVar8 = (*(code *)*puVar10)(plVar9,puVar10[1]);
            *(undefined8 *)(unaff_x19 + 0x18) = uVar8;
            uVar17 = 4;
            goto LAB_01944990;
          }
        }
      }
    }
  }
  else {
    plVar9 = *(long **)(unaff_x19 + 0x60);
    if (plVar9 != (long *)0x0) {
      lVar15 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar15 + 0x12a);
      if (uVar7 != 0) {
        piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
            puVar10 = (undefined8 *)(lVar15 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_01944954;
          }
          uVar7 = uVar7 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar7 != 0);
      }
      puVar10 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar1,1);
LAB_01944954:
      uVar8 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      uVar17 = 3;
      *(undefined8 *)(unaff_x19 + 0x18) = uVar8;
LAB_01944990:
      *(undefined4 *)(unaff_x19 + 0x10) = uVar17;
      return 1;
    }
  }
LAB_01944208:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


