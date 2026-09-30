/*
FUNCTION_NAME: Oculus.Platform.Callback$$.cctor
ENTRY_POINT: 019436ec
PROGRAM: Lovesick-libil2cpp.so
SCORE: 173
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8 Oculus_Platform_Callback___cctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int *piVar16;
  long *plVar17;
  long *plVar18;
  uint uVar19;
  long *plVar20;
  char cVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  ulong local_120;
  ulong uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
  if ((DAT_0377a165 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<OVRScenePlane>_ToArray__);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__);
    thunk_FUN_00d48444(StringLiteral_4747);
    thunk_FUN_00d48444(Method_System_Numerics_Vector<ushort>_get_Zero__);
    thunk_FUN_00d48444(Method_System_ReadOnlySpan<byte>_GetPinnableReference__);
    thunk_FUN_00d48444(StringLiteral_1006);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Playables_ScriptPlayable<ActivationControlPlayable>_op_Implicit__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f6e48);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_Serializer<bool>__ctor__);
    thunk_FUN_00d48444(StringLiteral_79);
    thunk_FUN_00d48444(UnityEngine_AI_NavMesh_OnNavMeshPreUpdate_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ef670);
    thunk_FUN_00d48444(Method_Obi_ObiNativeList<Aabb>_Swap__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<ScrollViewMode>_set_defaultValue__
                      );
    thunk_FUN_00d48444(OVREyeGaze_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_5473);
    thunk_FUN_00d48444(StringLiteral_11796);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<UsageHint>_get_Current__);
    thunk_FUN_00d48444(Method_UnityEngine_ProBuilder_ArrayUtility_Add<SharedVertex>__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<CharacterZone>_get_Item__);
    thunk_FUN_00d48444(StringLiteral_3821);
    thunk_FUN_00d48444(StringLiteral_645);
    thunk_FUN_00d48444(PTR_DAT_033f3e18);
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_F2830F044682E33B39018B5912634835B641562914E192CA66C654F5E4492FA8
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<RTHandle>_Contains__);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<TeleportPoint>_MoveNext__);
    thunk_FUN_00d48444(UnityEngine_UIElements_VisualTreeAsset_UsingEntry_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f4510);
    DAT_0377a165 = 1;
  }
  puVar8 = StringLiteral_4747;
  puVar7 = StringLiteral_3821;
  puVar6 = StringLiteral_1006;
  puVar4 = StringLiteral_645;
  plVar20 = (long *)Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
  puVar3 = Method_UnityEngine_ProBuilder_ArrayUtility_Add<SharedVertex>__;
  puVar2 = Method_System_Numerics_Vector<ushort>_get_Zero__;
  if (*(uint *)(param_1 + 0x10) < 5) {
    plVar17 = *(long **)(param_1 + 0x20);
    switch(*(uint *)(param_1 + 0x10)) {
    case 0:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if ((plVar17 == (long *)0x0) || (plVar17[0x22] == 0)) goto LAB_01944208;
      iVar9 = FUN_019449a0();
      if (iVar9 < 2) {
        FUN_01903eac(plVar17,1,0);
        lVar13 = plVar17[0x22];
        if (DAT_037757b5 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_037757b5 = '\x01';
        }
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
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (lVar13 == 0) goto LAB_01944208;
        FUN_019449f0(lVar13,0,0xffff0002,*(undefined8 *)PTR_DAT_033f4510);
        lVar13 = plVar17[0x22];
        if (DAT_03775438 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03775438 = '\x01';
        }
        puVar1 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
        lVar15 = *(long *)(*(long *)
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          + 0xb8);
        uVar22 = *(undefined4 *)(lVar15 + 0x3c);
        uVar23 = *(undefined4 *)(lVar15 + 0x40);
        uVar24 = *(undefined4 *)(lVar15 + 0x44);
        cVar21 = '\x01';
        if (DAT_037757b5 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_037757b5 = '\x01';
          lVar15 = *(long *)(*(long *)puVar1 + 0xb8);
          cVar21 = DAT_03775438;
        }
        fVar25 = *(float *)(lVar15 + 0x30);
        fVar26 = *(float *)(lVar15 + 0x34);
        fVar27 = *(float *)(lVar15 + 0x38);
        if (cVar21 == '\0') {
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
        if (lVar13 == 0) goto LAB_01944208;
        FUN_019449f0(uVar22,uVar23,uVar24,fVar25 * 0.25,fVar26 * 0.25,fVar27 * 0.25,lVar13,1,
                     0xffff0002,*(undefined8 *)PTR_DAT_033f4510);
      }
      lVar13 = plVar17[0x22];
      if (DAT_03775725 == '\0') {
        thunk_FUN_00d48444(System_Xml_Schema_Datatype_byte_TypeInfo);
        DAT_03775725 = '\x01';
      }
      puVar1 = Method_System_Collections_Generic_List_Enumerator<UsageHint>_get_Current__;
      fVar25 = DAT_028aa038;
      lVar15 = *(long *)(*(long *)System_Xml_Schema_Datatype_byte_TypeInfo + 0xb8);
      uStack_d8 = *(ulong *)(lVar15 + 0x48);
      local_e0 = *(ulong *)(lVar15 + 0x40);
      uStack_c8 = *(undefined8 *)(lVar15 + 0x58);
      local_d0 = *(undefined8 *)(lVar15 + 0x50);
      uStack_b8 = *(undefined8 *)(lVar15 + 0x68);
      local_c0 = *(undefined8 *)(lVar15 + 0x60);
      uStack_a8 = *(undefined8 *)(lVar15 + 0x78);
      local_b0 = *(undefined8 *)(lVar15 + 0x70);
      if (lVar13 != 0) {
        local_120 = local_e0;
        uStack_118 = uStack_d8;
        local_110 = local_d0;
        uStack_108 = uStack_c8;
        uStack_100 = local_c0;
        uStack_f8 = uStack_b8;
        local_f0 = local_b0;
        uStack_e8 = uStack_a8;
        FUN_01944c6c(DAT_028aa038,lVar13,&local_120,7);
        lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        puVar1 = StringLiteral_5473;
        if (lVar13 != 0) {
          FUN_01320e50(lVar13,*(undefined8 *)StringLiteral_79);
          *(long *)(param_1 + 0x28) = lVar13;
          lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
          puVar5 = Method_Sirenix_Serialization_Serializer<bool>__ctor__;
          if (lVar13 != 0) {
            FUN_01320e50(lVar13,*(undefined8 *)Method_Sirenix_Serialization_Serializer<bool>__ctor__
                        );
            *(long *)(param_1 + 0x30) = lVar13;
            lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
            puVar1 = UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo;
            if (lVar13 != 0) {
              FUN_01320e50(lVar13,*(undefined8 *)puVar5);
              *(long *)(param_1 + 0x38) = lVar13;
              lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
              puVar1 = StringLiteral_11796;
              if (lVar13 != 0) {
                FUN_01320e50(lVar13,*(undefined8 *)PTR_DAT_033f6e48);
                *(long *)(param_1 + 0x40) = lVar13;
                lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                if (lVar13 != 0) {
                  FUN_01320e50(lVar13,*(undefined8 *)
                                       UnityEngine_AI_NavMesh_OnNavMeshPreUpdate_TypeInfo);
                  *(long *)(param_1 + 0x48) = lVar13;
                  puVar1 = Method_Obi_ObiNativeList<Aabb>_Swap__;
                  lVar13 = plVar17[0x22];
                  if (lVar13 != 0) {
                    if (*(char *)(lVar13 + 0x50) == '\0') {
                      if (*(long *)(lVar13 + 0x18) == 0) goto LAB_01944208;
                      lVar15 = *(long *)(param_1 + 0x28);
                      FUN_0194515c(0,*(long *)(lVar13 + 0x18),0);
                      if (lVar15 == 0) goto LAB_01944208;
                      FUN_00ac4f98(lVar15,*(undefined8 *)puVar6);
                      lVar13 = plVar17[0x22];
                      if ((lVar13 == 0) || (*(long *)(lVar13 + 0x30) == 0)) goto LAB_01944208;
                      lVar15 = *(long *)(param_1 + 0x30);
                      FUN_01359cb4(0,*(long *)(lVar13 + 0x30),*(undefined1 *)(lVar13 + 0x50),
                                   &local_e0,*(undefined8 *)puVar7);
                      if (lVar15 == 0) goto LAB_01944208;
                      FUN_00ac1d04(local_e0 & 0xffffffff,lVar15,*(undefined8 *)puVar2);
                      lVar13 = plVar17[0x22];
                      if ((lVar13 == 0) || (*(long *)(lVar13 + 0x38) == 0)) goto LAB_01944208;
                      lVar15 = *(long *)(param_1 + 0x38);
                      FUN_01359cb4(0,*(long *)(lVar13 + 0x38),*(undefined1 *)(lVar13 + 0x50),
                                   &local_e0,*(undefined8 *)puVar7);
                      fVar26 = (float)local_e0;
                      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                        thunk_FUN_00d32864();
                      }
                      if (lVar15 == 0) goto LAB_01944208;
                      if (fVar26 <= fVar25) {
                        fVar26 = fVar25;
                      }
                      FUN_00ac1d04(1.0 / fVar26,lVar15,*(undefined8 *)puVar2);
                      lVar13 = plVar17[0x22];
                      if ((lVar13 == 0) || (*(long *)(lVar13 + 0x48) == 0)) goto LAB_01944208;
                      lVar15 = *(long *)(param_1 + 0x40);
                      FUN_01359cb4(0,*(long *)(lVar13 + 0x48),*(undefined1 *)(lVar13 + 0x50),
                                   &local_e0,
                                   *(undefined8 *)
                                    Method_System_Collections_Generic_List<CharacterZone>_get_Item__
                                  );
                      if (lVar15 == 0) goto LAB_01944208;
                      FUN_00ac20f0(lVar15,local_e0 & 0xffffffff,*(undefined8 *)puVar8);
                      lVar13 = plVar17[0x22];
                      if ((lVar13 == 0) || (*(long *)(lVar13 + 0x28) == 0)) goto LAB_01944208;
                      lVar15 = *(long *)(param_1 + 0x48);
                      FUN_01359cb4(0,*(long *)(lVar13 + 0x28),*(undefined1 *)(lVar13 + 0x50),
                                   &local_e0,*(undefined8 *)puVar3);
                      if (lVar15 == 0) goto LAB_01944208;
                      FUN_00ad3d7c(local_e0 & 0xffffffff,local_e0._4_4_,uStack_d8 & 0xffffffff,
                                   uStack_d8._4_4_,lVar15,
                                   *(undefined8 *)
                                    Method_System_ReadOnlySpan<byte>_GetPinnableReference__);
                    }
                    if (((plVar17[0x21] != 0) &&
                        (FUN_0132138c(plVar17[0x21],0,&local_e0,*(undefined8 *)puVar1),
                        local_e0 != 0)) && (lVar13 = *(long *)(local_e0 + 0x18), lVar13 != 0)) {
                      lVar15 = *(long *)
                                Method_UnityEngine_Playables_ScriptPlayable<ActivationControlPlayable>_op_Implicit__
                      ;
                      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                      uVar14 = FUN_00da5b18(*(undefined8 *)
                                             (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 200));
                      if ((uVar14 & 1) == 0) {
                        *(undefined4 *)(lVar13 + 0x18) = 0;
                      }
                      else {
                        iVar9 = *(int *)(lVar13 + 0x18);
                        *(undefined4 *)(lVar13 + 0x18) = 0;
                        if (0 < iVar9) {
                          FUN_0179519c(*(undefined8 *)(lVar13 + 0x10),0,iVar9,0);
                        }
                      }
                      if (((plVar17[0x21] != 0) &&
                          (FUN_0132138c(plVar17[0x21],0,&local_e0,*(undefined8 *)puVar1),
                          local_e0 != 0)) &&
                         ((*(long *)(local_e0 + 0x18) != 0 &&
                          (FUN_00ac20f0(*(long *)(local_e0 + 0x18),0,*(undefined8 *)puVar8),
                          plVar17[0x22] != 0)))) {
                        uVar11 = FUN_01945330();
                        *(undefined8 *)(param_1 + 0x50) = uVar11;
                        if (plVar17[0x22] != 0) {
                          iVar10 = FUN_01945380();
                          iVar9 = 0;
                          *(int *)(param_1 + 0x58) = iVar10;
                          *(undefined4 *)(param_1 + 0x70) = 0;
                          while (puVar1 = 
                                 Field_<PrivateImplementationDetails>_F2830F044682E33B39018B5912634835B641562914E192CA66C654F5E4492FA8
                                , iVar9 < iVar10) {
                            if (((plVar17 == (long *)0x0) || (plVar17[0x22] == 0)) ||
                               (*(long *)(param_1 + 0x50) == 0)) goto LAB_01944208;
                            FUN_01383784(*(long *)(param_1 + 0x50),iVar9 * 0x15,&local_e0,
                                         *(undefined8 *)
                                          Field_<PrivateImplementationDetails>_F2830F044682E33B39018B5912634835B641562914E192CA66C654F5E4492FA8
                                        );
                            if (*(long *)(param_1 + 0x50) == 0) goto LAB_01944208;
                            fVar25 = (float)local_e0;
                            FUN_01383784(*(long *)(param_1 + 0x50),iVar9 * 0x15 + 0x15,&local_e0,
                                         *(undefined8 *)puVar1);
                            fVar26 = *(float *)(plVar17 + 0x23);
                            fVar28 = *(float *)((long)plVar17 + 0x11c);
                            fVar27 = (float)local_e0 - fVar25;
                            if (DAT_03775509 == '\0') {
                              thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
                              DAT_03775509 = '\x01';
                            }
                            fVar28 = (fVar27 / fVar26) * fVar28;
                            if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo +
                                        0xe0) == 0) {
                              thunk_FUN_00d32864();
                            }
                            fVar26 = DAT_028aa038;
                            lVar13 = plVar17[0x22];
                            iVar9 = -0x7fffffff;
                            if ((float)(int)fVar28 != INFINITY) {
                              iVar9 = (int)fVar28 + 1;
                            }
                            if (lVar13 == 0) goto LAB_01944208;
                            iVar10 = 0;
                            while (puVar1 = Method_Obi_ObiNativeList<Aabb>_Swap__, iVar10 < iVar9) {
                              iVar10 = iVar10 + 1;
                              uVar11 = FUN_019453dc(fVar25 + (fVar27 / (float)iVar9) * (float)iVar10
                                                   );
                              lVar13 = plVar17[0x22];
                              if ((lVar13 == 0) || (*(long *)(lVar13 + 0x18) == 0))
                              goto LAB_01944208;
                              lVar15 = *(long *)(param_1 + 0x28);
                              FUN_0194515c(*(long *)(lVar13 + 0x18),*(undefined1 *)(lVar13 + 0x50));
                              if (lVar15 == 0) goto LAB_01944208;
                              FUN_00ac4f98(lVar15,*(undefined8 *)puVar6);
                              lVar13 = plVar17[0x22];
                              if ((lVar13 == 0) || (*(long *)(lVar13 + 0x30) == 0))
                              goto LAB_01944208;
                              lVar15 = *(long *)(param_1 + 0x30);
                              FUN_01359cb4(uVar11,*(long *)(lVar13 + 0x30),
                                           *(undefined1 *)(lVar13 + 0x50),&local_e0,
                                           *(undefined8 *)puVar7);
                              if (lVar15 == 0) goto LAB_01944208;
                              FUN_00ac1d04(local_e0 & 0xffffffff,lVar15,*(undefined8 *)puVar2);
                              lVar13 = plVar17[0x22];
                              if ((lVar13 == 0) || (*(long *)(lVar13 + 0x38) == 0))
                              goto LAB_01944208;
                              lVar15 = *(long *)(param_1 + 0x38);
                              FUN_01359cb4(uVar11,*(long *)(lVar13 + 0x38),
                                           *(undefined1 *)(lVar13 + 0x50),&local_e0,
                                           *(undefined8 *)puVar7);
                              fVar28 = (float)local_e0;
                              if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
                                thunk_FUN_00d32864();
                              }
                              if (lVar15 == 0) goto LAB_01944208;
                              if (fVar28 <= fVar26) {
                                fVar28 = fVar26;
                              }
                              FUN_00ac1d04(1.0 / fVar28,lVar15,*(undefined8 *)puVar2);
                              lVar13 = plVar17[0x22];
                              if ((lVar13 == 0) || (*(long *)(lVar13 + 0x48) == 0))
                              goto LAB_01944208;
                              lVar15 = *(long *)(param_1 + 0x40);
                              FUN_01359cb4(uVar11,*(long *)(lVar13 + 0x48),
                                           *(undefined1 *)(lVar13 + 0x50),&local_e0,
                                           *(undefined8 *)
                                            Method_System_Collections_Generic_List<CharacterZone>_get_Item__
                                          );
                              if (lVar15 == 0) goto LAB_01944208;
                              FUN_00ac20f0(lVar15,local_e0 & 0xffffffff,*(undefined8 *)puVar8);
                              lVar13 = plVar17[0x22];
                              if ((lVar13 == 0) || (*(long *)(lVar13 + 0x28) == 0))
                              goto LAB_01944208;
                              lVar15 = *(long *)(param_1 + 0x48);
                              FUN_01359cb4(uVar11,*(long *)(lVar13 + 0x28),
                                           *(undefined1 *)(lVar13 + 0x50),&local_e0,
                                           *(undefined8 *)puVar3);
                              if (lVar15 == 0) goto LAB_01944208;
                              FUN_00ad3d7c(local_e0 & 0xffffffff,local_e0._4_4_,
                                           uStack_d8 & 0xffffffff,uStack_d8._4_4_,lVar15,
                                           *(undefined8 *)
                                            Method_System_ReadOnlySpan<byte>_GetPinnableReference__)
                              ;
                              lVar13 = plVar17[0x22];
                              if (lVar13 == 0) goto LAB_01944208;
                            }
                            if ((*(char *)(lVar13 + 0x50) == '\0') ||
                               (iVar9 = *(int *)(param_1 + 0x70),
                               iVar9 != *(int *)(param_1 + 0x58) + -1)) {
                              if ((plVar17[0x21] == 0) ||
                                 ((FUN_0132138c(plVar17[0x21],*(int *)(param_1 + 0x70) + 1,&local_e0
                                                ,*(undefined8 *)
                                                  Method_Obi_ObiNativeList<Aabb>_Swap__),
                                  local_e0 == 0 ||
                                  (lVar13 = *(long *)(local_e0 + 0x18), lVar13 == 0))))
                              goto LAB_01944208;
                              lVar15 = *(long *)
                                        Method_UnityEngine_Playables_ScriptPlayable<ActivationControlPlayable>_op_Implicit__
                              ;
                              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                              uVar14 = FUN_00da5b18(*(undefined8 *)
                                                     (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) +
                                                     200));
                              if ((uVar14 & 1) == 0) {
                                *(undefined4 *)(lVar13 + 0x18) = 0;
                              }
                              else {
                                iVar9 = *(int *)(lVar13 + 0x18);
                                *(undefined4 *)(lVar13 + 0x18) = 0;
                                if (0 < iVar9) {
                                  FUN_0179519c(*(undefined8 *)(lVar13 + 0x10),0,iVar9,0);
                                }
                              }
                              if ((((plVar17[0x21] == 0) ||
                                   (FUN_0132138c(plVar17[0x21],*(int *)(param_1 + 0x70) + 1,
                                                 &local_e0,*(undefined8 *)puVar1), local_e0 == 0))
                                  || (*(long *)(param_1 + 0x28) == 0)) ||
                                 (*(long *)(local_e0 + 0x18) == 0)) goto LAB_01944208;
                              FUN_00ac20f0(*(long *)(local_e0 + 0x18),
                                           *(int *)(*(long *)(param_1 + 0x28) + 0x18) + -1,
                                           *(undefined8 *)puVar8);
                              iVar9 = *(int *)(param_1 + 0x70);
                            }
                            if (iVar9 % 100 == 0) {
                              iVar10 = *(int *)(param_1 + 0x58);
                              lVar13 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3e18);
                              if (lVar13 != 0) {
                                FUN_01919300((float)iVar9 / (float)iVar10,lVar13,
                                             *(undefined8 *)
                                              UnityEngine_UIElements_VisualTreeAsset_UsingEntry_TypeInfo
                                             ,0);
                                *(long *)(param_1 + 0x18) = lVar13;
                                *(undefined4 *)(param_1 + 0x10) = 1;
                                return 1;
                              }
                              goto LAB_01944208;
                            }
LAB_0194431c:
                            iVar10 = *(int *)(param_1 + 0x58);
                            iVar9 = iVar9 + 1;
                            *(int *)(param_1 + 0x70) = iVar9;
                          }
                          if ((*(long *)(param_1 + 0x28) != 0) && (plVar17 != (long *)0x0)) {
                            iVar9 = *(int *)(*(long *)(param_1 + 0x28) + 0x18);
                            lVar13 = plVar17[0x22];
                            *(int *)((long)plVar17 + 0x24) = iVar9;
                            *(int *)((long)plVar17 + 0x124) = (int)plVar17[0x27] + iVar9;
                            puVar7 = 
                            Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
                            ;
                            puVar6 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
                            puVar4 = Method_System_Collections_Generic_List<OVRScenePlane>_ToArray__
                            ;
                            puVar3 = Method_System_Collections_Generic_HashSet<RTHandle>_Contains__;
                            puVar2 = 
                            Method_System_Collections_Generic_List_Enumerator<TeleportPoint>_MoveNext__
                            ;
                            if (lVar13 != 0) {
                              iVar9 = iVar9 - (*(byte *)(lVar13 + 0x50) ^ 1);
                              *(int *)(param_1 + 0x5c) = iVar9;
                              if (iVar9 < 1) {
                                fVar25 = 0.0;
                              }
                              else {
                                fVar25 = *(float *)(lVar13 + 0x60) / (float)iVar9;
                              }
                              *(float *)(plVar17 + 0x24) = fVar25;
                              lVar13 = FUN_00da4fb8(*(undefined8 *)puVar7);
                              plVar17[9] = lVar13;
                              lVar13 = FUN_00da4fb8(*(undefined8 *)puVar2,
                                                    *(undefined4 *)((long)plVar17 + 0x124));
                              plVar17[10] = lVar13;
                              lVar13 = FUN_00da4fb8(*(undefined8 *)puVar7,
                                                    *(undefined4 *)((long)plVar17 + 0x124));
                              plVar17[0xd] = lVar13;
                              lVar13 = FUN_00da4fb8(*(undefined8 *)puVar3,
                                                    *(undefined4 *)((long)plVar17 + 0x124));
                              plVar17[0xf] = lVar13;
                              lVar13 = FUN_00da4fb8(*(undefined8 *)puVar7,
                                                    *(undefined4 *)((long)plVar17 + 0x124));
                              plVar17[0x12] = lVar13;
                              lVar13 = FUN_00da4fb8(*(undefined8 *)puVar6,
                                                    *(undefined4 *)((long)plVar17 + 0x124));
                              plVar17[0x11] = lVar13;
                              lVar13 = FUN_00da4fb8(*(undefined8 *)puVar4,
                                                    *(undefined4 *)((long)plVar17 + 0x124));
                              plVar17[0x13] = lVar13;
                              lVar13 = FUN_00da4fb8(*(undefined8 *)puVar3,
                                                    *(undefined4 *)((long)plVar17 + 0x124));
                              plVar17[0x26] = lVar13;
                              *(undefined4 *)(param_1 + 0x70) = 0;
                              uVar19 = 0;
                              puVar12 = (undefined8 *)OVREyeGaze_TypeInfo;
                              plVar20 = (long *)
                                        Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                              ;
                              while (OVREyeGaze_TypeInfo = (undefined *)puVar12,
                                    plVar17 != (long *)0x0) {
                                if (*(int *)((long)plVar17 + 0x24) <= (int)uVar19) {
                                  FUN_0194553c(plVar17,*(undefined4 *)(param_1 + 0x5c));
                                  plVar18 = (long *)(**(code **)(*plVar17 + 600))
                                                              (plVar17,*(undefined8 *)
                                                                        (*plVar17 + 0x260));
                                  *(long **)(param_1 + 0x60) = plVar18;
                                  plVar20 = (long *)
                                            Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                                  ;
                                  if (plVar18 != (long *)0x0) goto LAB_0194473c;
                                  break;
                                }
                                if (*(long *)(param_1 + 0x38) == 0) break;
                                lVar13 = plVar17[0xf];
                                FUN_0132138c(*(long *)(param_1 + 0x38),uVar19,&local_e0,*puVar12);
                                if (lVar13 == 0) break;
                                if (*(uint *)(lVar13 + 0x18) <= uVar19) goto LAB_0194499c;
                                *(float *)(lVar13 + (long)(int)uVar19 * 4 + 0x20) = (float)local_e0;
                                if (*(long *)(param_1 + 0x28) == 0) break;
                                uVar19 = *(uint *)(param_1 + 0x70);
                                lVar13 = plVar17[9];
                                FUN_0132138c(*(long *)(param_1 + 0x28),uVar19,&local_e0,
                                             *(undefined8 *)
                                              Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__
                                            );
                                if (lVar13 == 0) break;
                                if (*(uint *)(lVar13 + 0x18) <= uVar19) goto LAB_0194499c;
                                lVar13 = lVar13 + (long)(int)uVar19 * 0xc;
                                *(ulong *)(lVar13 + 0x20) = local_e0;
                                *(undefined4 *)(lVar13 + 0x28) = (undefined4)uStack_d8;
                                lVar13 = plVar17[9];
                                if (lVar13 == 0) break;
                                uVar19 = *(uint *)(param_1 + 0x70);
                                if (*(uint *)(lVar13 + 0x18) <= uVar19) goto LAB_0194499c;
                                lVar15 = plVar17[10];
                                if (lVar15 == 0) break;
                                if (*(uint *)(lVar15 + 0x18) <= uVar19) goto LAB_0194499c;
                                lVar13 = lVar13 + (long)(int)uVar19 * 0xc;
                                uVar22 = *(undefined4 *)(lVar13 + 0x28);
                                lVar15 = lVar15 + (long)(int)uVar19 * 0x10;
                                *(undefined8 *)(lVar15 + 0x20) = *(undefined8 *)(lVar13 + 0x20);
                                *(undefined4 *)(lVar15 + 0x28) = uVar22;
                                *(undefined4 *)(lVar15 + 0x2c) = 0;
                                lVar13 = plVar17[10];
                                if (lVar13 == 0) break;
                                uVar19 = *(uint *)(param_1 + 0x70);
                                if (*(uint *)(lVar13 + 0x18) <= uVar19) goto LAB_0194499c;
                                *(undefined4 *)(lVar13 + (long)(int)uVar19 * 0x10 + 0x2c) =
                                     0x3f800000;
                                lVar13 = plVar17[0x12];
                                if (DAT_03774e1c == '\0') {
                                  thunk_FUN_00d48444(
                                                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                                  );
                                  DAT_03774e1c = '\x01';
                                }
                                if (*(long *)(param_1 + 0x30) == 0) break;
                                uVar11 = *(undefined8 *)(*(long *)(*plVar20 + 0xb8) + 0xc);
                                fVar25 = *(float *)(*(long *)(*plVar20 + 0xb8) + 0x14);
                                FUN_0132138c(*(long *)(param_1 + 0x30),
                                             *(undefined4 *)(param_1 + 0x70),&local_e0,*puVar12);
                                if (lVar13 == 0) break;
                                if (*(uint *)(lVar13 + 0x18) <= uVar19) goto LAB_0194499c;
                                fVar26 = *(float *)(plVar17 + 0x23);
                                lVar13 = lVar13 + (long)(int)uVar19 * 0xc;
                                *(ulong *)(lVar13 + 0x20) =
                                     CONCAT44((float)((ulong)uVar11 >> 0x20) * (float)local_e0 *
                                              fVar26,(float)uVar11 * (float)local_e0 * fVar26);
                                *(float *)(lVar13 + 0x28) = fVar25 * (float)local_e0 * fVar26;
                                if (*(long *)(param_1 + 0x40) == 0) break;
                                uVar19 = *(uint *)(param_1 + 0x70);
                                lVar13 = plVar17[0x11];
                                FUN_0132138c(*(long *)(param_1 + 0x40),uVar19,&local_e0,
                                             *(undefined8 *)
                                              Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                                            );
                                if (lVar13 == 0) break;
                                if (*(uint *)(lVar13 + 0x18) <= uVar19) goto LAB_0194499c;
                                *(float *)(lVar13 + (long)(int)uVar19 * 4 + 0x20) = (float)local_e0;
                                if (*(long *)(param_1 + 0x48) == 0) break;
                                uVar19 = *(uint *)(param_1 + 0x70);
                                lVar13 = plVar17[0x13];
                                FUN_0132138c(*(long *)(param_1 + 0x48),uVar19,&local_e0,
                                             *(undefined8 *)
                                              Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<ScrollViewMode>_set_defaultValue__
                                            );
                                if (lVar13 == 0) break;
                                if (*(uint *)(lVar13 + 0x18) <= uVar19) goto LAB_0194499c;
                                lVar13 = lVar13 + (long)(int)uVar19 * 0x10;
                                *(ulong *)(lVar13 + 0x28) = uStack_d8;
                                *(ulong *)(lVar13 + 0x20) = local_e0;
                                iVar9 = *(int *)(param_1 + 0x70);
                                if (iVar9 % 100 == 0) {
                                  iVar10 = *(int *)((long)plVar17 + 0x24);
                                  lVar13 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3e18);
                                  if (lVar13 != 0) {
                                    FUN_01919300((float)iVar9 / (float)iVar10,lVar13,
                                                 *(undefined8 *)
                                                  UnityEngine_UIElements_VisualTreeAsset_UsingEntry_TypeInfo
                                                 ,0);
                                    *(long *)(param_1 + 0x18) = lVar13;
                                    uVar22 = 2;
                                    goto LAB_01944990;
                                  }
                                  break;
                                }
LAB_019446f0:
                                uVar19 = iVar9 + 1;
                                *(uint *)(param_1 + 0x70) = uVar19;
                                puVar12 = (undefined8 *)OVREyeGaze_TypeInfo;
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
    case 1:
      iVar9 = *(int *)(param_1 + 0x70);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      goto LAB_0194431c;
    case 2:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      iVar9 = *(int *)(param_1 + 0x70);
      plVar20 = (long *)
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
      goto LAB_019446f0;
    case 3:
      plVar18 = *(long **)(param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (plVar18 == (long *)0x0) goto LAB_01944208;
LAB_0194473c:
      lVar13 = *plVar18;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *plVar20) {
            puVar12 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_019447d0;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar12 = (undefined8 *)FUN_00d59724(plVar18,*plVar20,0);
LAB_019447d0:
      uVar14 = (*(code *)*puVar12)(plVar18,puVar12[1]);
      if ((uVar14 & 1) == 0) {
        if (plVar17 == (long *)0x0) goto LAB_01944208;
        plVar18 = (long *)(**(code **)(*plVar17 + 0x268))(plVar17,*(undefined8 *)(*plVar17 + 0x270))
        ;
        *(long **)(param_1 + 0x68) = plVar18;
        goto joined_r0x01943f4c;
      }
      plVar17 = *(long **)(param_1 + 0x60);
      if (plVar17 == (long *)0x0) goto LAB_01944208;
      lVar13 = *plVar17;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *plVar20) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_01944954;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar12 = (undefined8 *)FUN_00d59724(plVar17,*plVar20,1);
LAB_01944954:
      uVar11 = (*(code *)*puVar12)(plVar17,puVar12[1]);
      uVar22 = 3;
      *(undefined8 *)(param_1 + 0x18) = uVar11;
      break;
    case 4:
      plVar18 = *(long **)(param_1 + 0x68);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
joined_r0x01943f4c:
      if (plVar18 == (long *)0x0) goto LAB_01944208;
      lVar13 = *plVar18;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *plVar20) {
            puVar12 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_01944898;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar12 = (undefined8 *)FUN_00d59724(plVar18,*plVar20,0);
LAB_01944898:
      uVar14 = (*(code *)*puVar12)(plVar18,puVar12[1]);
      if ((uVar14 & 1) == 0) {
        if (plVar17 == (long *)0x0) {
LAB_01944208:
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        lVar13 = plVar17[0x26];
        *(undefined4 *)(plVar17 + 0x25) = 0;
        if (lVar13 == 0) goto LAB_01944208;
        uVar19 = *(uint *)(lVar13 + 0x18);
        if (0 < (long)((ulong)uVar19 << 0x20)) {
          uVar14 = 0;
          fVar25 = 0.0;
          do {
            if (uVar19 == uVar14) {
LAB_0194499c:
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            lVar15 = uVar14 * 4;
            uVar14 = uVar14 + 1;
            fVar25 = *(float *)(lVar13 + 0x20 + lVar15) + fVar25;
            *(float *)(plVar17 + 0x25) = fVar25;
          } while ((long)uVar14 < (long)(int)uVar19);
        }
        goto LAB_01943fb8;
      }
      plVar17 = *(long **)(param_1 + 0x68);
      if (plVar17 == (long *)0x0) goto LAB_01944208;
      lVar13 = *plVar17;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12a);
      if (uVar14 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *plVar20) {
            puVar12 = (undefined8 *)(lVar13 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_0194497c;
          }
          uVar14 = uVar14 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar14 != 0);
      }
      puVar12 = (undefined8 *)FUN_00d59724(plVar17,*plVar20,1);
LAB_0194497c:
      uVar11 = (*(code *)*puVar12)(plVar17,puVar12[1]);
      *(undefined8 *)(param_1 + 0x18) = uVar11;
      uVar22 = 4;
    }
LAB_01944990:
    *(undefined4 *)(param_1 + 0x10) = uVar22;
    uVar11 = 1;
  }
  else {
LAB_01943fb8:
    uVar11 = 0;
  }
  return uVar11;
}


