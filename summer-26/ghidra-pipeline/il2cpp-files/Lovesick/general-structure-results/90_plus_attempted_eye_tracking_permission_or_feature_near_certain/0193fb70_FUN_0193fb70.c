/*
FUNCTION_NAME: FUN_0193fb70
ENTRY_POINT: 0193fb70
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


undefined8 FUN_0193fb70(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  long *plVar18;
  long *plVar19;
  uint uVar20;
  long *plVar21;
  char cVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
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
  
  if ((DAT_0377a15e & 1) == 0) {
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
    thunk_FUN_00d48444(StringLiteral_2735);
    thunk_FUN_00d48444(StringLiteral_3821);
    thunk_FUN_00d48444(StringLiteral_645);
    thunk_FUN_00d48444(PTR_DAT_033f3e18);
    thunk_FUN_00d48444(StringLiteral_6246);
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_F2830F044682E33B39018B5912634835B641562914E192CA66C654F5E4492FA8
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<RTHandle>_Contains__);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<TeleportPoint>_MoveNext__);
    thunk_FUN_00d48444(UnityEngine_UIElements_VisualTreeAsset_UsingEntry_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_13935);
    thunk_FUN_00d48444(PTR_DAT_033f4510);
    DAT_0377a15e = 1;
  }
  puVar8 = StringLiteral_4747;
  puVar5 = StringLiteral_3821;
  puVar12 = (undefined8 *)StringLiteral_2735;
  puVar4 = StringLiteral_1006;
  plVar19 = (long *)StringLiteral_645;
  plVar21 = (long *)Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
  puVar3 = Method_System_Numerics_Vector<ushort>_get_Zero__;
  if (*(uint *)(param_1 + 0x10) < 6) {
    plVar18 = *(long **)(param_1 + 0x20);
    switch(*(uint *)(param_1 + 0x10)) {
    case 0:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if ((plVar18 == (long *)0x0) || (plVar18[0x22] == 0)) goto LAB_01940870;
      iVar9 = FUN_019449a0(plVar18[0x22],0);
      if (iVar9 < 2) {
        FUN_01903eac(plVar18,1,0);
        lVar14 = plVar18[0x22];
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
        if (*(int *)(*plVar19 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (lVar14 == 0) goto LAB_01940870;
        FUN_019449f0(lVar14,0,0xffff0002,*(undefined8 *)PTR_DAT_033f4510,0);
        lVar14 = plVar18[0x22];
        if (DAT_03775438 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_03775438 = '\x01';
        }
        puVar2 = Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
        lVar16 = *(long *)(*(long *)
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                          + 0xb8);
        uVar23 = *(undefined4 *)(lVar16 + 0x3c);
        uVar24 = *(undefined4 *)(lVar16 + 0x40);
        uVar25 = *(undefined4 *)(lVar16 + 0x44);
        cVar22 = '\x01';
        if (DAT_037757b5 == '\0') {
          thunk_FUN_00d48444(
                            Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                            );
          DAT_037757b5 = '\x01';
          lVar16 = *(long *)(*(long *)puVar2 + 0xb8);
          cVar22 = DAT_03775438;
        }
        puVar12 = (undefined8 *)StringLiteral_2735;
        fVar28 = *(float *)(lVar16 + 0x30);
        fVar26 = *(float *)(lVar16 + 0x34);
        fVar27 = *(float *)(lVar16 + 0x38);
        if (cVar22 == '\0') {
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
        plVar19 = (long *)StringLiteral_645;
        if (lVar14 == 0) goto LAB_01940870;
        FUN_019449f0(uVar23,uVar24,uVar25,fVar28 * 0.25,fVar26 * 0.25,fVar27 * 0.25,lVar14,1,
                     0xffff0002,*(undefined8 *)PTR_DAT_033f4510,0);
      }
      lVar14 = plVar18[0x22];
      if (DAT_03775725 == '\0') {
        thunk_FUN_00d48444(System_Xml_Schema_Datatype_byte_TypeInfo);
        DAT_03775725 = '\x01';
      }
      puVar2 = Method_System_Collections_Generic_List_Enumerator<UsageHint>_get_Current__;
      fVar28 = DAT_028aa038;
      lVar16 = *(long *)(*(long *)System_Xml_Schema_Datatype_byte_TypeInfo + 0xb8);
      uStack_d8 = *(ulong *)(lVar16 + 0x48);
      local_e0 = *(ulong *)(lVar16 + 0x40);
      uStack_c8 = *(undefined8 *)(lVar16 + 0x58);
      local_d0 = *(undefined8 *)(lVar16 + 0x50);
      uStack_b8 = *(undefined8 *)(lVar16 + 0x68);
      local_c0 = *(undefined8 *)(lVar16 + 0x60);
      uStack_a8 = *(undefined8 *)(lVar16 + 0x78);
      local_b0 = *(undefined8 *)(lVar16 + 0x70);
      if (lVar14 != 0) {
        local_120 = local_e0;
        uStack_118 = uStack_d8;
        local_110 = local_d0;
        uStack_108 = uStack_c8;
        uStack_100 = local_c0;
        uStack_f8 = uStack_b8;
        local_f0 = local_b0;
        uStack_e8 = uStack_a8;
        FUN_01944c6c(DAT_028aa038,lVar14,&local_120,7,0);
        lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        puVar7 = StringLiteral_79;
        if (lVar14 != 0) {
          FUN_01320e50(lVar14,*(undefined8 *)StringLiteral_79);
          *(long *)(param_1 + 0x28) = lVar14;
          lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          puVar2 = StringLiteral_5473;
          if (lVar14 != 0) {
            FUN_01320e50(lVar14,*(undefined8 *)puVar7);
            *(long *)(param_1 + 0x30) = lVar14;
            lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
            puVar7 = Method_Sirenix_Serialization_Serializer<bool>__ctor__;
            if (lVar14 != 0) {
              FUN_01320e50(lVar14,*(undefined8 *)
                                   Method_Sirenix_Serialization_Serializer<bool>__ctor__);
              *(long *)(param_1 + 0x38) = lVar14;
              lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
              if (lVar14 != 0) {
                FUN_01320e50(lVar14,*(undefined8 *)puVar7);
                *(long *)(param_1 + 0x40) = lVar14;
                lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                puVar2 = UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo;
                if (lVar14 != 0) {
                  FUN_01320e50(lVar14,*(undefined8 *)puVar7);
                  *(long *)(param_1 + 0x48) = lVar14;
                  lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                  puVar2 = StringLiteral_11796;
                  if (lVar14 != 0) {
                    FUN_01320e50(lVar14,*(undefined8 *)PTR_DAT_033f6e48);
                    *(long *)(param_1 + 0x50) = lVar14;
                    lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                    if (lVar14 != 0) {
                      FUN_01320e50(lVar14,*(undefined8 *)
                                           UnityEngine_AI_NavMesh_OnNavMeshPreUpdate_TypeInfo);
                      *(long *)(param_1 + 0x58) = lVar14;
                      puVar2 = Method_Obi_ObiNativeList<Aabb>_Swap__;
                      lVar14 = plVar18[0x22];
                      if (lVar14 != 0) {
                        if (*(char *)(lVar14 + 0x50) == '\0') {
                          if (*(long *)(lVar14 + 0x18) == 0) goto LAB_01940870;
                          lVar16 = *(long *)(param_1 + 0x28);
                          FUN_0194515c(0,*(long *)(lVar14 + 0x18),0,0);
                          if (lVar16 == 0) goto LAB_01940870;
                          FUN_00ac4f98(lVar16,*(undefined8 *)puVar4);
                          lVar14 = plVar18[0x22];
                          if ((lVar14 == 0) || (*(long *)(lVar14 + 0x20) == 0)) goto LAB_01940870;
                          lVar16 = *(long *)(param_1 + 0x30);
                          FUN_01359cb4(0,*(long *)(lVar14 + 0x20),*(undefined1 *)(lVar14 + 0x50),
                                       &local_e0,*puVar12);
                          if (lVar16 == 0) goto LAB_01940870;
                          FUN_00ac4f98(local_e0 & 0xffffffff,local_e0._4_4_,uStack_d8 & 0xffffffff,
                                       lVar16,*(undefined8 *)puVar4);
                          lVar14 = plVar18[0x22];
                          if ((lVar14 == 0) || (*(long *)(lVar14 + 0x30) == 0)) goto LAB_01940870;
                          lVar16 = *(long *)(param_1 + 0x38);
                          FUN_01359cb4(0,*(long *)(lVar14 + 0x30),*(undefined1 *)(lVar14 + 0x50),
                                       &local_e0,*(undefined8 *)puVar5);
                          if (lVar16 == 0) goto LAB_01940870;
                          FUN_00ac1d04(local_e0 & 0xffffffff,lVar16,*(undefined8 *)puVar3);
                          lVar14 = plVar18[0x22];
                          if ((lVar14 == 0) || (*(long *)(lVar14 + 0x38) == 0)) goto LAB_01940870;
                          lVar16 = *(long *)(param_1 + 0x40);
                          FUN_01359cb4(0,*(long *)(lVar14 + 0x38),*(undefined1 *)(lVar14 + 0x50),
                                       &local_e0,*(undefined8 *)puVar5);
                          fVar26 = (float)local_e0;
                          if (*(int *)(*plVar19 + 0xe0) == 0) {
                            thunk_FUN_00d32864();
                          }
                          if (lVar16 == 0) goto LAB_01940870;
                          if (fVar26 <= fVar28) {
                            fVar26 = fVar28;
                          }
                          FUN_00ac1d04(1.0 / fVar26,lVar16,*(undefined8 *)puVar3);
                          lVar14 = plVar18[0x22];
                          if ((lVar14 == 0) || (*(long *)(lVar14 + 0x40) == 0)) goto LAB_01940870;
                          lVar16 = *(long *)(param_1 + 0x48);
                          FUN_01359cb4(0,*(long *)(lVar14 + 0x40),*(undefined1 *)(lVar14 + 0x50),
                                       &local_e0,*(undefined8 *)puVar5);
                          if (lVar16 == 0) goto LAB_01940870;
                          fVar26 = (float)local_e0;
                          if ((float)local_e0 <= fVar28) {
                            fVar26 = fVar28;
                          }
                          FUN_00ac1d04(1.0 / fVar26,lVar16,*(undefined8 *)puVar3);
                          lVar14 = plVar18[0x22];
                          if ((lVar14 == 0) || (*(long *)(lVar14 + 0x48) == 0)) goto LAB_01940870;
                          lVar16 = *(long *)(param_1 + 0x50);
                          FUN_01359cb4(0,*(long *)(lVar14 + 0x48),*(undefined1 *)(lVar14 + 0x50),
                                       &local_e0,
                                       *(undefined8 *)
                                        Method_System_Collections_Generic_List<CharacterZone>_get_Item__
                                      );
                          if (lVar16 == 0) goto LAB_01940870;
                          FUN_00ac20f0(lVar16,local_e0 & 0xffffffff,*(undefined8 *)puVar8);
                          lVar14 = plVar18[0x22];
                          if ((lVar14 == 0) || (*(long *)(lVar14 + 0x28) == 0)) goto LAB_01940870;
                          lVar16 = *(long *)(param_1 + 0x58);
                          FUN_01359cb4(0,*(long *)(lVar14 + 0x28),*(undefined1 *)(lVar14 + 0x50),
                                       &local_e0,
                                       *(undefined8 *)
                                        Method_UnityEngine_ProBuilder_ArrayUtility_Add<SharedVertex>__
                                      );
                          if (lVar16 == 0) goto LAB_01940870;
                          FUN_00ad3d7c(local_e0 & 0xffffffff,local_e0._4_4_,uStack_d8 & 0xffffffff,
                                       uStack_d8._4_4_,lVar16,
                                       *(undefined8 *)
                                        Method_System_ReadOnlySpan<byte>_GetPinnableReference__);
                        }
                        if (((plVar18[0x21] != 0) &&
                            (FUN_0132138c(plVar18[0x21],0,&local_e0,*(undefined8 *)puVar2),
                            local_e0 != 0)) && (lVar14 = *(long *)(local_e0 + 0x18), lVar14 != 0)) {
                          lVar16 = *(long *)
                                    Method_UnityEngine_Playables_ScriptPlayable<ActivationControlPlayable>_op_Implicit__
                          ;
                          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                          uVar15 = FUN_00da5b18(*(undefined8 *)
                                                 (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 200))
                          ;
                          if ((uVar15 & 1) == 0) {
                            *(undefined4 *)(lVar14 + 0x18) = 0;
                          }
                          else {
                            iVar9 = *(int *)(lVar14 + 0x18);
                            *(undefined4 *)(lVar14 + 0x18) = 0;
                            if (0 < iVar9) {
                              FUN_0179519c(*(undefined8 *)(lVar14 + 0x10),0,iVar9,0);
                            }
                          }
                          if (((plVar18[0x21] != 0) &&
                              (FUN_0132138c(plVar18[0x21],0,&local_e0,*(undefined8 *)puVar2),
                              local_e0 != 0)) && (*(long *)(local_e0 + 0x18) != 0)) {
                            FUN_00ac20f0(*(long *)(local_e0 + 0x18),0,*(undefined8 *)puVar8);
                            if (plVar18[0x22] != 0) {
                              uVar13 = FUN_01945330(plVar18[0x22],0);
                              *(undefined8 *)(param_1 + 0x60) = uVar13;
                              if (plVar18[0x22] != 0) {
                                iVar10 = FUN_01945380(plVar18[0x22],0);
                                iVar9 = 0;
                                *(int *)(param_1 + 0x68) = iVar10;
                                *(undefined4 *)(param_1 + 0x88) = 0;
                                while (iVar9 < iVar10) {
                                  if ((plVar18 == (long *)0x0) || (plVar18[0x22] == 0))
                                  goto LAB_01940870;
                                  iVar10 = FUN_019453d4(plVar18[0x22],0);
                                  if (plVar18[0x22] == 0) goto LAB_01940870;
                                  iVar1 = *(int *)(param_1 + 0x88);
                                  iVar11 = FUN_019453d4(plVar18[0x22],0);
                                  puVar2 = 
                                  Field_<PrivateImplementationDetails>_F2830F044682E33B39018B5912634835B641562914E192CA66C654F5E4492FA8
                                  ;
                                  if (*(long *)(param_1 + 0x60) == 0) goto LAB_01940870;
                                  FUN_01383784(*(long *)(param_1 + 0x60),(iVar10 + 1) * iVar9,
                                               &local_e0,
                                               *(undefined8 *)
                                                Field_<PrivateImplementationDetails>_F2830F044682E33B39018B5912634835B641562914E192CA66C654F5E4492FA8
                                              );
                                  if (*(long *)(param_1 + 0x60) == 0) goto LAB_01940870;
                                  fVar28 = (float)local_e0;
                                  FUN_01383784(*(long *)(param_1 + 0x60),(iVar11 + 1) * (iVar1 + 1),
                                               &local_e0,*(undefined8 *)puVar2);
                                  fVar26 = *(float *)(plVar18 + 0x23);
                                  fVar29 = *(float *)((long)plVar18 + 0x11c);
                                  fVar27 = (float)local_e0 - fVar28;
                                  if (DAT_03775509 == '\0') {
                                    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo
                                                      );
                                    DAT_03775509 = '\x01';
                                  }
                                  puVar7 = StringLiteral_2735;
                                  puVar2 = StringLiteral_645;
                                  fVar29 = (fVar27 / fVar26) * fVar29;
                                  if (*(int *)(*(long *)
                                                System_Threading_Timer_TimerComparer_TypeInfo + 0xe0
                                              ) == 0) {
                                    thunk_FUN_00d32864();
                                  }
                                  fVar26 = DAT_028aa038;
                                  lVar14 = plVar18[0x22];
                                  iVar9 = -0x7fffffff;
                                  if ((float)(int)fVar29 != INFINITY) {
                                    iVar9 = (int)fVar29 + 1;
                                  }
                                  if (lVar14 == 0) goto LAB_01940870;
                                  iVar10 = 0;
                                  while (puVar6 = Method_Obi_ObiNativeList<Aabb>_Swap__,
                                        iVar10 < iVar9) {
                                    iVar10 = iVar10 + 1;
                                    uVar13 = FUN_019453dc(fVar28 + (fVar27 / (float)iVar9) *
                                                                   (float)iVar10,lVar14,0);
                                    lVar14 = plVar18[0x22];
                                    if ((lVar14 == 0) || (*(long *)(lVar14 + 0x18) == 0))
                                    goto LAB_01940870;
                                    lVar16 = *(long *)(param_1 + 0x28);
                                    FUN_0194515c(*(long *)(lVar14 + 0x18),
                                                 *(undefined1 *)(lVar14 + 0x50),0);
                                    if (lVar16 == 0) goto LAB_01940870;
                                    FUN_00ac4f98(lVar16,*(undefined8 *)puVar4);
                                    lVar14 = plVar18[0x22];
                                    if ((lVar14 == 0) || (*(long *)(lVar14 + 0x20) == 0))
                                    goto LAB_01940870;
                                    lVar16 = *(long *)(param_1 + 0x30);
                                    FUN_01359cb4(uVar13,*(long *)(lVar14 + 0x20),
                                                 *(undefined1 *)(lVar14 + 0x50),&local_e0,
                                                 *(undefined8 *)puVar7);
                                    if (lVar16 == 0) goto LAB_01940870;
                                    FUN_00ac4f98(local_e0 & 0xffffffff,local_e0._4_4_,
                                                 uStack_d8 & 0xffffffff,lVar16,*(undefined8 *)puVar4
                                                );
                                    lVar14 = plVar18[0x22];
                                    if ((lVar14 == 0) || (*(long *)(lVar14 + 0x30) == 0))
                                    goto LAB_01940870;
                                    lVar16 = *(long *)(param_1 + 0x38);
                                    FUN_01359cb4(uVar13,*(long *)(lVar14 + 0x30),
                                                 *(undefined1 *)(lVar14 + 0x50),&local_e0,
                                                 *(undefined8 *)puVar5);
                                    if (lVar16 == 0) goto LAB_01940870;
                                    FUN_00ac1d04(local_e0 & 0xffffffff,lVar16,*(undefined8 *)puVar3)
                                    ;
                                    lVar14 = plVar18[0x22];
                                    if ((lVar14 == 0) || (*(long *)(lVar14 + 0x38) == 0))
                                    goto LAB_01940870;
                                    lVar16 = *(long *)(param_1 + 0x40);
                                    FUN_01359cb4(uVar13,*(long *)(lVar14 + 0x38),
                                                 *(undefined1 *)(lVar14 + 0x50),&local_e0,
                                                 *(undefined8 *)puVar5);
                                    fVar29 = (float)local_e0;
                                    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                                      thunk_FUN_00d32864();
                                    }
                                    if (lVar16 == 0) goto LAB_01940870;
                                    if (fVar29 <= fVar26) {
                                      fVar29 = fVar26;
                                    }
                                    FUN_00ac1d04(1.0 / fVar29,lVar16,*(undefined8 *)puVar3);
                                    lVar14 = plVar18[0x22];
                                    if ((lVar14 == 0) || (*(long *)(lVar14 + 0x40) == 0))
                                    goto LAB_01940870;
                                    lVar16 = *(long *)(param_1 + 0x48);
                                    FUN_01359cb4(uVar13,*(long *)(lVar14 + 0x40),
                                                 *(undefined1 *)(lVar14 + 0x50),&local_e0,
                                                 *(undefined8 *)puVar5);
                                    if (lVar16 == 0) goto LAB_01940870;
                                    fVar29 = (float)local_e0;
                                    if ((float)local_e0 <= fVar26) {
                                      fVar29 = fVar26;
                                    }
                                    FUN_00ac1d04(1.0 / fVar29,lVar16,*(undefined8 *)puVar3);
                                    lVar14 = plVar18[0x22];
                                    if ((lVar14 == 0) || (*(long *)(lVar14 + 0x48) == 0))
                                    goto LAB_01940870;
                                    lVar16 = *(long *)(param_1 + 0x50);
                                    FUN_01359cb4(uVar13,*(long *)(lVar14 + 0x48),
                                                 *(undefined1 *)(lVar14 + 0x50),&local_e0,
                                                 *(undefined8 *)
                                                  Method_System_Collections_Generic_List<CharacterZone>_get_Item__
                                                );
                                    if (lVar16 == 0) goto LAB_01940870;
                                    FUN_00ac20f0(lVar16,local_e0 & 0xffffffff,*(undefined8 *)puVar8)
                                    ;
                                    lVar14 = plVar18[0x22];
                                    if ((lVar14 == 0) || (*(long *)(lVar14 + 0x28) == 0))
                                    goto LAB_01940870;
                                    lVar16 = *(long *)(param_1 + 0x58);
                                    FUN_01359cb4(uVar13,*(long *)(lVar14 + 0x28),
                                                 *(undefined1 *)(lVar14 + 0x50),&local_e0,
                                                 *(undefined8 *)
                                                  Method_UnityEngine_ProBuilder_ArrayUtility_Add<SharedVertex>__
                                                );
                                    if (lVar16 == 0) goto LAB_01940870;
                                    FUN_00ad3d7c(local_e0 & 0xffffffff,local_e0._4_4_,
                                                 uStack_d8 & 0xffffffff,uStack_d8._4_4_,lVar16,
                                                 *(undefined8 *)
                                                  Method_System_ReadOnlySpan<byte>_GetPinnableReference__
                                                );
                                    lVar14 = plVar18[0x22];
                                    if (lVar14 == 0) goto LAB_01940870;
                                  }
                                  if ((*(char *)(lVar14 + 0x50) == '\0') ||
                                     (iVar9 = *(int *)(param_1 + 0x88),
                                     iVar9 != *(int *)(param_1 + 0x68) + -1)) {
                                    if ((plVar18[0x21] == 0) ||
                                       ((FUN_0132138c(plVar18[0x21],*(int *)(param_1 + 0x88) + 1,
                                                      &local_e0,
                                                      *(undefined8 *)
                                                       Method_Obi_ObiNativeList<Aabb>_Swap__),
                                        local_e0 == 0 ||
                                        (lVar14 = *(long *)(local_e0 + 0x18), lVar14 == 0))))
                                    goto LAB_01940870;
                                    lVar16 = *(long *)
                                              Method_UnityEngine_Playables_ScriptPlayable<ActivationControlPlayable>_op_Implicit__
                                    ;
                                    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                                    uVar15 = FUN_00da5b18(*(undefined8 *)
                                                           (*(long *)(*(long *)(lVar16 + 0x20) +
                                                                     0xc0) + 200));
                                    if ((uVar15 & 1) == 0) {
                                      *(undefined4 *)(lVar14 + 0x18) = 0;
                                    }
                                    else {
                                      iVar9 = *(int *)(lVar14 + 0x18);
                                      *(undefined4 *)(lVar14 + 0x18) = 0;
                                      if (0 < iVar9) {
                                        FUN_0179519c(*(undefined8 *)(lVar14 + 0x10),0,iVar9,0);
                                      }
                                    }
                                    if ((((plVar18[0x21] == 0) ||
                                         (FUN_0132138c(plVar18[0x21],*(int *)(param_1 + 0x88) + 1,
                                                       &local_e0,*(undefined8 *)puVar6),
                                         local_e0 == 0)) || (*(long *)(param_1 + 0x28) == 0)) ||
                                       (*(long *)(local_e0 + 0x18) == 0)) goto LAB_01940870;
                                    FUN_00ac20f0(*(long *)(local_e0 + 0x18),
                                                 *(int *)(*(long *)(param_1 + 0x28) + 0x18) + -1,
                                                 *(undefined8 *)puVar8);
                                    iVar9 = *(int *)(param_1 + 0x88);
                                  }
                                  if (iVar9 % 100 == 0) {
                                    iVar10 = *(int *)(param_1 + 0x68);
                                    lVar14 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3e18);
                                    if (lVar14 != 0) {
                                      FUN_01919300((float)iVar9 / (float)iVar10,lVar14,
                                                   *(undefined8 *)
                                                                                                        
                                                  UnityEngine_UIElements_VisualTreeAsset_UsingEntry_TypeInfo
                                                  ,0);
                                      *(long *)(param_1 + 0x18) = lVar14;
                                      *(undefined4 *)(param_1 + 0x10) = 1;
                                      return 1;
                                    }
                                    goto LAB_01940870;
                                  }
LAB_01940984:
                                  iVar10 = *(int *)(param_1 + 0x68);
                                  iVar9 = iVar9 + 1;
                                  *(int *)(param_1 + 0x88) = iVar9;
                                }
                                if ((*(long *)(param_1 + 0x28) != 0) && (plVar18 != (long *)0x0)) {
                                  iVar9 = *(int *)(*(long *)(param_1 + 0x28) + 0x18);
                                  lVar14 = plVar18[0x22];
                                  *(int *)((long)plVar18 + 0x24) = iVar9;
                                  *(int *)((long)plVar18 + 0x124) = iVar9;
                                  puVar7 = StringLiteral_6246;
                                  puVar2 = 
                                  Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass31_0_<DOHorizontalNormalizedPos>b__1__
                                  ;
                                  puVar8 = Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__;
                                  puVar5 = 
                                  Method_System_Collections_Generic_List<OVRScenePlane>_ToArray__;
                                  puVar4 = 
                                  Method_System_Collections_Generic_HashSet<RTHandle>_Contains__;
                                  puVar3 = 
                                  Method_System_Collections_Generic_List_Enumerator<TeleportPoint>_MoveNext__
                                  ;
                                  if (lVar14 != 0) {
                                    iVar9 = iVar9 - (*(byte *)(lVar14 + 0x50) ^ 1);
                                    *(int *)(param_1 + 0x6c) = iVar9;
                                    if (iVar9 < 1) {
                                      fVar28 = 0.0;
                                    }
                                    else {
                                      fVar28 = *(float *)(lVar14 + 0x60) / (float)iVar9;
                                    }
                                    *(float *)(plVar18 + 0x24) = fVar28;
                                    lVar14 = FUN_00da4fb8(*(undefined8 *)puVar2);
                                    plVar18[9] = lVar14;
                                    lVar14 = FUN_00da4fb8(*(undefined8 *)puVar7,
                                                          *(undefined4 *)((long)plVar18 + 0x124));
                                    plVar18[0xb] = lVar14;
                                    lVar14 = FUN_00da4fb8(*(undefined8 *)puVar2,
                                                          *(undefined4 *)((long)plVar18 + 0x124));
                                    plVar18[0xd] = lVar14;
                                    lVar14 = FUN_00da4fb8(*(undefined8 *)puVar2,
                                                          *(undefined4 *)((long)plVar18 + 0x124));
                                    plVar18[0xe] = lVar14;
                                    lVar14 = FUN_00da4fb8(*(undefined8 *)puVar4,
                                                          *(undefined4 *)((long)plVar18 + 0x124));
                                    plVar18[0xf] = lVar14;
                                    lVar14 = FUN_00da4fb8(*(undefined8 *)puVar4,
                                                          *(undefined4 *)((long)plVar18 + 0x124));
                                    plVar18[0x10] = lVar14;
                                    lVar14 = FUN_00da4fb8(*(undefined8 *)puVar2,
                                                          *(undefined4 *)((long)plVar18 + 0x124));
                                    plVar18[0x12] = lVar14;
                                    lVar14 = FUN_00da4fb8(*(undefined8 *)puVar8,
                                                          *(undefined4 *)((long)plVar18 + 0x124));
                                    plVar18[0x11] = lVar14;
                                    lVar14 = FUN_00da4fb8(*(undefined8 *)puVar3,
                                                          *(undefined4 *)((long)plVar18 + 0x124));
                                    plVar18[10] = lVar14;
                                    lVar14 = FUN_00da4fb8(*(undefined8 *)puVar7,
                                                          *(undefined4 *)((long)plVar18 + 0x124));
                                    plVar18[0xc] = lVar14;
                                    lVar14 = FUN_00da4fb8(*(undefined8 *)puVar5,
                                                          *(undefined4 *)((long)plVar18 + 0x124));
                                    plVar18[0x13] = lVar14;
                                    lVar14 = FUN_00da4fb8(*(undefined8 *)puVar4,
                                                          *(undefined4 *)((long)plVar18 + 0x124));
                                    plVar18[0x26] = lVar14;
                                    *(undefined4 *)(param_1 + 0x88) = 0;
                                    uVar20 = 0;
                                    puVar12 = (undefined8 *)OVREyeGaze_TypeInfo;
                                    plVar21 = (long *)
                                              Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                    ;
                                    while (OVREyeGaze_TypeInfo = (undefined *)puVar12,
                                          plVar18 != (long *)0x0) {
                                      if (*(int *)((long)plVar18 + 0x24) <= (int)uVar20) {
                                        FUN_0194553c(plVar18,*(undefined4 *)(param_1 + 0x6c),0);
                                        plVar19 = (long *)(**(code **)(*plVar18 + 600))
                                                                    (plVar18,*(undefined8 *)
                                                                              (param_1 + 0x30),
                                                                     *(undefined8 *)
                                                                      (*plVar18 + 0x260));
                                        *(long **)(param_1 + 0x70) = plVar19;
                                        plVar21 = (long *)
                                                  Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__
                                        ;
                                        if (plVar19 != (long *)0x0) goto LAB_01940df8;
                                        break;
                                      }
                                      if (*(long *)(param_1 + 0x40) == 0) break;
                                      lVar14 = plVar18[0xf];
                                      FUN_0132138c(*(long *)(param_1 + 0x40),uVar20,&local_e0,
                                                   *puVar12);
                                      if (lVar14 == 0) break;
                                      if (*(uint *)(lVar14 + 0x18) <= uVar20) {
LAB_01941128:
                    /* WARNING: Subroutine does not return */
                                        FUN_00da5194();
                                      }
                                      *(float *)(lVar14 + (long)(int)uVar20 * 4 + 0x20) =
                                           (float)local_e0;
                                      if (*(long *)(param_1 + 0x48) == 0) break;
                                      uVar20 = *(uint *)(param_1 + 0x88);
                                      lVar14 = plVar18[0x10];
                                      FUN_0132138c(*(long *)(param_1 + 0x48),uVar20,&local_e0,
                                                   *puVar12);
                                      if (lVar14 == 0) break;
                                      if (*(uint *)(lVar14 + 0x18) <= uVar20) goto LAB_01941128;
                                      *(float *)(lVar14 + (long)(int)uVar20 * 4 + 0x20) =
                                           (float)local_e0;
                                      if (*(long *)(param_1 + 0x28) == 0) break;
                                      uVar20 = *(uint *)(param_1 + 0x88);
                                      lVar14 = plVar18[9];
                                      FUN_0132138c(*(long *)(param_1 + 0x28),uVar20,&local_e0,
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_InputSystem_Layouts_InputDeviceBuilder_ComputeStateLayout__
                                                  );
                                      if (lVar14 == 0) break;
                                      if (*(uint *)(lVar14 + 0x18) <= uVar20) goto LAB_01941128;
                                      lVar14 = lVar14 + (long)(int)uVar20 * 0xc;
                                      *(ulong *)(lVar14 + 0x20) = local_e0;
                                      *(undefined4 *)(lVar14 + 0x28) = (undefined4)uStack_d8;
                                      lVar14 = plVar18[9];
                                      if (lVar14 == 0) break;
                                      uVar20 = *(uint *)(param_1 + 0x88);
                                      if (*(uint *)(lVar14 + 0x18) <= uVar20) goto LAB_01941128;
                                      lVar16 = plVar18[10];
                                      if (lVar16 == 0) break;
                                      if (*(uint *)(lVar16 + 0x18) <= uVar20) goto LAB_01941128;
                                      lVar14 = lVar14 + (long)(int)uVar20 * 0xc;
                                      uVar23 = *(undefined4 *)(lVar14 + 0x28);
                                      lVar16 = lVar16 + (long)(int)uVar20 * 0x10;
                                      *(undefined8 *)(lVar16 + 0x20) =
                                           *(undefined8 *)(lVar14 + 0x20);
                                      *(undefined4 *)(lVar16 + 0x28) = uVar23;
                                      *(undefined4 *)(lVar16 + 0x2c) = 0;
                                      lVar14 = plVar18[10];
                                      if (lVar14 == 0) break;
                                      uVar20 = *(uint *)(param_1 + 0x88);
                                      if (*(uint *)(lVar14 + 0x18) <= uVar20) goto LAB_01941128;
                                      *(undefined4 *)(lVar14 + (long)(int)uVar20 * 0x10 + 0x2c) =
                                           0x3f800000;
                                      lVar14 = plVar18[0x12];
                                      if (DAT_03774e1c == '\0') {
                                        thunk_FUN_00d48444(
                                                  Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                                                  );
                                        DAT_03774e1c = '\x01';
                                      }
                                      if (*(long *)(param_1 + 0x38) == 0) break;
                                      uVar13 = *(undefined8 *)(*(long *)(*plVar21 + 0xb8) + 0xc);
                                      fVar28 = *(float *)(*(long *)(*plVar21 + 0xb8) + 0x14);
                                      FUN_0132138c(*(long *)(param_1 + 0x38),
                                                   *(undefined4 *)(param_1 + 0x88),&local_e0,
                                                   *puVar12);
                                      if (lVar14 == 0) break;
                                      if (*(uint *)(lVar14 + 0x18) <= uVar20) goto LAB_01941128;
                                      fVar26 = *(float *)(plVar18 + 0x23);
                                      lVar14 = lVar14 + (long)(int)uVar20 * 0xc;
                                      *(ulong *)(lVar14 + 0x20) =
                                           CONCAT44((float)((ulong)uVar13 >> 0x20) * (float)local_e0
                                                    * fVar26,(float)uVar13 * (float)local_e0 *
                                                             fVar26);
                                      *(float *)(lVar14 + 0x28) = fVar28 * (float)local_e0 * fVar26;
                                      if (*(long *)(param_1 + 0x50) == 0) break;
                                      uVar20 = *(uint *)(param_1 + 0x88);
                                      lVar14 = plVar18[0x11];
                                      FUN_0132138c(*(long *)(param_1 + 0x50),uVar20,&local_e0,
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                                                  );
                                      if (lVar14 == 0) break;
                                      if (*(uint *)(lVar14 + 0x18) <= uVar20) goto LAB_01941128;
                                      *(float *)(lVar14 + (long)(int)uVar20 * 4 + 0x20) =
                                           (float)local_e0;
                                      if (*(long *)(param_1 + 0x58) == 0) break;
                                      uVar20 = *(uint *)(param_1 + 0x88);
                                      lVar14 = plVar18[0x13];
                                      FUN_0132138c(*(long *)(param_1 + 0x58),uVar20,&local_e0,
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_UIElements_TypedUxmlAttributeDescription<ScrollViewMode>_set_defaultValue__
                                                  );
                                      if (lVar14 == 0) break;
                                      if (*(uint *)(lVar14 + 0x18) <= uVar20) goto LAB_01941128;
                                      lVar14 = lVar14 + (long)(int)uVar20 * 0x10;
                                      *(ulong *)(lVar14 + 0x28) = uStack_d8;
                                      *(ulong *)(lVar14 + 0x20) = local_e0;
                                      iVar9 = *(int *)(param_1 + 0x88);
                                      if (iVar9 % 100 == 0) {
                                        iVar10 = *(int *)((long)plVar18 + 0x24);
                                        lVar14 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f3e18)
                                        ;
                                        if (lVar14 != 0) {
                                          FUN_01919300((float)iVar9 / (float)iVar10,lVar14,
                                                       *(undefined8 *)StringLiteral_13935,0);
                                          *(long *)(param_1 + 0x18) = lVar14;
                                          uVar23 = 2;
                                          goto LAB_019410f0;
                                        }
                                        break;
                                      }
LAB_01940da4:
                                      uVar20 = iVar9 + 1;
                                      *(uint *)(param_1 + 0x88) = uVar20;
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
          }
        }
      }
      goto LAB_01940870;
    case 1:
      iVar9 = *(int *)(param_1 + 0x88);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      goto LAB_01940984;
    case 2:
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      iVar9 = *(int *)(param_1 + 0x88);
      plVar21 = (long *)
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__;
      goto LAB_01940da4;
    case 3:
      plVar19 = *(long **)(param_1 + 0x70);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (plVar19 == (long *)0x0) goto LAB_01940870;
LAB_01940df8:
      lVar14 = *plVar19;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *plVar21) {
            puVar12 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_01940e8c;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar12 = (undefined8 *)FUN_00d59724(plVar19,*plVar21,0);
LAB_01940e8c:
      uVar15 = (*(code *)*puVar12)(plVar19,puVar12[1]);
      if ((uVar15 & 1) == 0) {
        if (plVar18 == (long *)0x0) goto LAB_01940870;
        plVar19 = (long *)(**(code **)(*plVar18 + 0x268))(plVar18,*(undefined8 *)(*plVar18 + 0x270))
        ;
        *(long **)(param_1 + 0x78) = plVar19;
        goto joined_r0x019404cc;
      }
      plVar19 = *(long **)(param_1 + 0x70);
      if (plVar19 == (long *)0x0) goto LAB_01940870;
      lVar14 = *plVar19;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *plVar21) {
            puVar12 = (undefined8 *)(lVar14 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_0194108c;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar12 = (undefined8 *)FUN_00d59724(plVar19,*plVar21,1);
LAB_0194108c:
      uVar13 = (*(code *)*puVar12)(plVar19,puVar12[1]);
      uVar23 = 3;
      *(undefined8 *)(param_1 + 0x18) = uVar13;
      break;
    case 4:
      plVar19 = *(long **)(param_1 + 0x78);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
joined_r0x019404cc:
      if (plVar19 == (long *)0x0) goto LAB_01940870;
      lVar14 = *plVar19;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *plVar21) {
            puVar12 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_01940f54;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar12 = (undefined8 *)FUN_00d59724(plVar19,*plVar21,0);
LAB_01940f54:
      uVar15 = (*(code *)*puVar12)(plVar19,puVar12[1]);
      if ((uVar15 & 1) == 0) {
        if (plVar18 == (long *)0x0) goto LAB_01940870;
        plVar19 = (long *)(**(code **)(*plVar18 + 0x278))(plVar18,*(undefined8 *)(*plVar18 + 0x280))
        ;
        *(long **)(param_1 + 0x80) = plVar19;
        goto joined_r0x019404e0;
      }
      plVar19 = *(long **)(param_1 + 0x78);
      if (plVar19 == (long *)0x0) goto LAB_01940870;
      lVar14 = *plVar19;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *plVar21) {
            puVar12 = (undefined8 *)(lVar14 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_019410b4;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar12 = (undefined8 *)FUN_00d59724(plVar19,*plVar21,1);
LAB_019410b4:
      uVar13 = (*(code *)*puVar12)(plVar19,puVar12[1]);
      *(undefined8 *)(param_1 + 0x18) = uVar13;
      uVar23 = 4;
      break;
    case 5:
      plVar19 = *(long **)(param_1 + 0x80);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
joined_r0x019404e0:
      if (plVar19 == (long *)0x0) {
LAB_01940870:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar14 = *plVar19;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *plVar21) {
            puVar12 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_0194101c;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar12 = (undefined8 *)FUN_00d59724(plVar19,*plVar21,0);
LAB_0194101c:
      uVar15 = (*(code *)*puVar12)(plVar19,puVar12[1]);
      if ((uVar15 & 1) == 0) goto LAB_01941074;
      plVar19 = *(long **)(param_1 + 0x80);
      if (plVar19 == (long *)0x0) goto LAB_01940870;
      lVar14 = *plVar19;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12a);
      if (uVar15 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) == *plVar21) {
            puVar12 = (undefined8 *)(lVar14 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto BufferedAudioStream__Stop;
          }
          uVar15 = uVar15 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar15 != 0);
      }
      puVar12 = (undefined8 *)FUN_00d59724(plVar19,*plVar21,1);
BufferedAudioStream__Stop:
      uVar13 = (*(code *)*puVar12)(plVar19,puVar12[1]);
      *(undefined8 *)(param_1 + 0x18) = uVar13;
      uVar23 = 5;
    }
LAB_019410f0:
    *(undefined4 *)(param_1 + 0x10) = uVar23;
    uVar13 = 1;
  }
  else {
LAB_01941074:
    uVar13 = 0;
  }
  return uVar13;
}


