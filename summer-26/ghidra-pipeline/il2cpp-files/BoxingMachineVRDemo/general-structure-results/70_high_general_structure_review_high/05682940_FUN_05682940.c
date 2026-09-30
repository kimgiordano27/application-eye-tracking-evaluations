/*
FUNCTION_NAME: FUN_05682940
ENTRY_POINT: 05682940
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_2;telemetry_or_network_hits_6;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x05684b80) */

void FUN_05682940(void)

{
  long lVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  long *plVar21;
  long *plVar22;
  
  puVar10 = Oculus_Platform_Request<AvatarEditorResult>_TypeInfo;
  puVar3 = PTR_DAT_06762e38;
  if ((DAT_06b7f89f & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06766e70);
    FUN_02d6084c(PTR_DAT_06766e98);
    FUN_02d6084c(PTR_DAT_06774060);
    FUN_02d6084c(PTR_DAT_06764bc8);
    FUN_02d6084c(PTR_DAT_0677f228);
    FUN_02d6084c(PTR_DAT_06762e38);
    FUN_02d6084c(PTR_DAT_0675f3d0);
    FUN_02d6084c(PTR_DAT_06762e08);
    FUN_02d6084c(PTR_DAT_0675f3d8);
    FUN_02d6084c(Oculus_Platform_Request<LaunchUnblockFlowResult>_TypeInfo);
    FUN_02d6084c(Oculus_Platform_Request<AvatarEditorResult>_TypeInfo);
    FUN_02d6084c(PTR_DAT_06782670);
    FUN_02d6084c(PTR_DAT_06782678);
    FUN_02d6084c(System_Action<ARMeshesChangedEventArgs>_TypeInfo);
    FUN_02d6084c(UnityEngine_EventSystems_BaseInput_var);
    FUN_02d6084c(Newtonsoft_Json_Serialization_ErrorContext_var);
    FUN_02d6084c(UnityEngine_VFX_EventAttributes_var);
    FUN_02d6084c(UnityEngine_Color_var);
    FUN_02d6084c(
                System_Buffers_SpanAction<char,_ValueTuple<IntPtr,_int,_IntPtr,_int,_bool>>_TypeInfo
                );
    FUN_02d6084c(UnityEngine_UIElements_EventCategoryAttribute_var);
    FUN_02d6084c(UnityEngine_Color32_var);
    FUN_02d6084c(System_ComponentModel_EventDescriptor_var);
    FUN_02d6084c(UnityEngine_UIElements_EventDispatcherGate_var);
    FUN_02d6084c(UnityEngine_UIElements_EventInterestAttribute_var);
    FUN_02d6084c(UnityEngine_InputForUI_EventSanitizer_var);
    FUN_02d6084c(PTR_DAT_0676b518);
    FUN_02d6084c(PTR_DAT_067760f0);
    FUN_02d6084c(UnityEngine_CapsuleCollider_var);
    FUN_02d6084c(PTR_DAT_0677eee8);
    FUN_02d6084c(System_Action<Column,_int>_TypeInfo);
    FUN_02d6084c(UnityEngine_UIElements_BindingInfo_var);
    FUN_02d6084c(UnityEngine_EventSystems_EventSystem_var);
    FUN_02d6084c(System_WeakReference_var);
    FUN_02d6084c(PTR_DAT_06776c68);
    FUN_02d6084c(System_Exception_var);
    FUN_02d6084c(PTR_DAT_0676dc08);
    FUN_02d6084c(System_Reflection_ExceptionHandlingClause_var);
    FUN_02d6084c(PTR_DAT_06771af8);
    FUN_02d6084c(UnityEngine_ExecuteAlways_var);
    FUN_02d6084c(System_ComponentModel_BooleanConverter_var);
    FUN_02d6084c(UnityEngine_ExecuteInEditMode_var);
    FUN_02d6084c(System_Threading_ExecutionContextSwitcher_var);
    FUN_02d6084c(
                System_Buffers_SpanAction<char,_ValueTuple<IntPtr,_int,_IntPtr,_int,_IntPtr,_int,_bool,_ValueTuple<bool>>>_TypeInfo
                );
    FUN_02d6084c(System_Dynamic_ExpandoObject_var);
    FUN_02d6084c(System_Linq_Expressions_Expression_var);
    FUN_02d6084c(System_Linq_Expressions_Expression<TDelegate>_var);
    FUN_02d6084c(System_ComponentModel_ExtenderProvidedPropertyAttribute_var);
    FUN_02d6084c(System_Runtime_CompilerServices_ExtensionAttribute_var);
    FUN_02d6084c(System_Runtime_Serialization_ExtensionDataObject_var);
    FUN_02d6084c(Newtonsoft_Json_Utilities_FSharpUtils_var);
    FUN_02d6084c(PTR_DAT_06780d00);
    FUN_02d6084c(UnityEngine_XR_ARSubsystems_FaceSubsystemParams_var);
    FUN_02d6084c(Unity_Properties_FieldMember_var);
    FUN_02d6084c(System_Runtime_InteropServices_FieldOffsetAttribute_var);
    FUN_02d6084c(Firebase_Firestore_FieldValueProxy_var);
    FUN_02d6084c(Firebase_Platform_FirebaseAppPlatform_var);
    FUN_02d6084c(Firebase_Platform_FirebaseEditorDispatcher_var);
    FUN_02d6084c(Firebase_Platform_FirebaseHandler_var);
    FUN_02d6084c(Firebase_Firestore_FirestoreConverter<T>_var);
    FUN_02d6084c(UnityEngine_UIElements_ComputedStyle_var);
    FUN_02d6084c(Firebase_Firestore_FirestoreDataAttribute_var);
    FUN_02d6084c(System_Runtime_Serialization_ClassDataNode_var);
    FUN_02d6084c(
                System_Threading_ThreadPoolWorkQueue_SparseArray<ThreadPoolWorkQueue_WorkStealingQueue>_TypeInfo
                );
    FUN_02d6084c(PTR_DAT_06780d08);
    FUN_02d6084c(Firebase_Firestore_FirestoreDocumentIdAttribute_var);
    FUN_02d6084c(Firebase_Firestore_FirestorePropertyAttribute_var);
    FUN_02d6084c(System_Security_CodeAccessPermission_var);
    DAT_06b7f89f = 1;
  }
  puVar11 = Oculus_Platform_Request<LaunchUnblockFlowResult>_TypeInfo;
  puVar7 = PTR_DAT_06780d08;
  uVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
  FUN_04fb2710(uVar12,0);
  **(undefined8 **)(*(long *)puVar10 + 0xb8) = uVar12;
  thunk_FUN_02dd37b4(*(undefined8 *)(*(long *)puVar10 + 0xb8),uVar12);
  uVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
  FUN_04fb2710(uVar12,0);
  uVar12 = FUN_04fb42ec(uVar12,0);
  puVar17 = (undefined8 *)(*(long *)(*(long *)puVar10 + 0xb8) + 0x10);
  *puVar17 = uVar12;
  thunk_FUN_02dd37b4(puVar17,uVar12);
  uVar12 = FUN_04fb42ec(**(undefined8 **)(*(long *)puVar10 + 0xb8),0);
  **(undefined8 **)(*(long *)puVar10 + 0xb8) = uVar12;
  thunk_FUN_02dd37b4(*(undefined8 *)(*(long *)puVar10 + 0xb8),uVar12);
  puVar3 = PTR_DAT_0675e258;
  lVar18 = *(long *)(PTR_DAT_0675e258 + 0x28);
  plVar21 = (long *)**(undefined8 **)(*(long *)puVar10 + 0xb8);
  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar12 = FUN_05015c2c(lVar18 + 0x20,0);
  uVar13 = FUN_05015c2c(*(long *)(puVar3 + 0x28) + 0x20,0);
  uVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
  FUN_05680308(uVar14,uVar13,*(undefined8 *)puVar7,1,0,0);
  puVar7 = UnityEngine_UIElements_EventCategoryAttribute_var;
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 0x2a8))(plVar21,uVar12,uVar14,*(undefined8 *)(*plVar21 + 0x2b0));
    plVar21 = (long *)**(undefined8 **)(*(long *)puVar10 + 0xb8);
    uVar12 = FUN_05015c2c(*(long *)(puVar3 + 0x38) + 0x20,0);
    uVar13 = FUN_05015c2c(*(long *)(puVar3 + 0x38) + 0x20,0);
    uVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
    FUN_05680308(uVar14,uVar13,*(undefined8 *)puVar7,1,0,0);
    puVar7 = System_Linq_Expressions_Expression_var;
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 0x2a8))(plVar21,uVar12,uVar14,*(undefined8 *)(*plVar21 + 0x2b0));
      plVar21 = (long *)**(undefined8 **)(*(long *)puVar10 + 0xb8);
      uVar12 = FUN_05015c2c(*(long *)(puVar3 + 0x40) + 0x20,0);
      uVar13 = FUN_05015c2c(*(long *)(puVar3 + 0x40) + 0x20,0);
      uVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
      FUN_05680308(uVar14,uVar13,*(undefined8 *)puVar7,1,0,0);
      puVar7 = UnityEngine_Color_var;
      if (plVar21 != (long *)0x0) {
        (**(code **)(*plVar21 + 0x2a8))(plVar21,uVar12,uVar14,*(undefined8 *)(*plVar21 + 0x2b0));
        plVar21 = (long *)**(undefined8 **)(*(long *)puVar10 + 0xb8);
        uVar12 = FUN_05015c2c(*(long *)(puVar3 + 0x48) + 0x20,0);
        uVar13 = FUN_05015c2c(*(long *)(puVar3 + 0x48) + 0x20,0);
        uVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
        FUN_05680308(uVar14,uVar13,*(undefined8 *)puVar7,1,0,0);
        puVar7 = System_Linq_Expressions_Expression<TDelegate>_var;
        if (plVar21 != (long *)0x0) {
          (**(code **)(*plVar21 + 0x2a8))(plVar21,uVar12,uVar14,*(undefined8 *)(*plVar21 + 0x2b0));
          plVar21 = (long *)**(undefined8 **)(*(long *)puVar10 + 0xb8);
          uVar12 = FUN_05015c2c(*(long *)(puVar3 + 0x50) + 0x20,0);
          uVar13 = FUN_05015c2c(*(long *)(puVar3 + 0x50) + 0x20,0);
          uVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
          FUN_05680308(uVar14,uVar13,*(undefined8 *)puVar7,1,0,0);
          puVar7 = Firebase_Platform_FirebaseEditorDispatcher_var;
          if (plVar21 != (long *)0x0) {
            (**(code **)(*plVar21 + 0x2a8))(plVar21,uVar12,uVar14,*(undefined8 *)(*plVar21 + 0x2b0))
            ;
            plVar21 = (long *)**(undefined8 **)(*(long *)puVar10 + 0xb8);
            uVar12 = FUN_05015c2c(*(long *)(puVar3 + 0x68) + 0x20,0);
            uVar13 = FUN_05015c2c(*(long *)(puVar3 + 0x68) + 0x20,0);
            uVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
            FUN_05680308(uVar14,uVar13,*(undefined8 *)puVar7,1,0,0);
            puVar7 = UnityEngine_UIElements_EventInterestAttribute_var;
            if (plVar21 != (long *)0x0) {
              (**(code **)(*plVar21 + 0x2a8))
                        (plVar21,uVar12,uVar14,*(undefined8 *)(*plVar21 + 0x2b0));
              plVar21 = (long *)**(undefined8 **)(*(long *)puVar10 + 0xb8);
              uVar12 = FUN_05015c2c(*(long *)(puVar3 + 0x70) + 0x20,0);
              uVar13 = FUN_05015c2c(*(long *)(puVar3 + 0x70) + 0x20,0);
              uVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
              FUN_05680308(uVar14,uVar13,*(undefined8 *)puVar7,1,0,0);
              puVar7 = System_Runtime_Serialization_ClassDataNode_var;
              if (plVar21 != (long *)0x0) {
                (**(code **)(*plVar21 + 0x2a8))
                          (plVar21,uVar12,uVar14,*(undefined8 *)(*plVar21 + 0x2b0));
                plVar21 = (long *)**(undefined8 **)(*(long *)puVar10 + 0xb8);
                uVar12 = FUN_05015c2c(*(long *)(puVar3 + 0x78) + 0x20,0);
                uVar13 = FUN_05015c2c(*(long *)(puVar3 + 0x78) + 0x20,0);
                uVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
                FUN_05680308(uVar14,uVar13,*(undefined8 *)puVar7,1,0,0);
                puVar7 = Newtonsoft_Json_Serialization_ErrorContext_var;
                if (plVar21 != (long *)0x0) {
                  (**(code **)(*plVar21 + 0x2a8))
                            (plVar21,uVar12,uVar14,*(undefined8 *)(*plVar21 + 0x2b0));
                  plVar21 = (long *)**(undefined8 **)(*(long *)puVar10 + 0xb8);
                  uVar12 = FUN_05015c2c(*(long *)(puVar3 + 0x80) + 0x20,0);
                  uVar13 = FUN_05015c2c(*(long *)(puVar3 + 0x80) + 0x20,0);
                  uVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
                  FUN_05680308(uVar14,uVar13,*(undefined8 *)puVar7,1,0,0);
                  puVar6 = PTR_DAT_06776c68;
                  puVar7 = PTR_DAT_06766e98;
                  if (plVar21 != (long *)0x0) {
                    (**(code **)(*plVar21 + 0x2a8))
                              (plVar21,uVar12,uVar14,*(undefined8 *)(*plVar21 + 0x2b0));
                    plVar21 = (long *)**(undefined8 **)(*(long *)puVar10 + 0xb8);
                    uVar12 = FUN_05015c2c(*(undefined8 *)puVar7,0);
                    uVar13 = FUN_05015c2c(*(undefined8 *)puVar7,0);
                    uVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
                    FUN_05680308(uVar14,uVar13,*(undefined8 *)puVar6,1,0,0);
                    puVar8 = System_Reflection_ExceptionHandlingClause_var;
                    puVar6 = PTR_DAT_06774060;
                    if (plVar21 != (long *)0x0) {
                      (**(code **)(*plVar21 + 0x2a8))
                                (plVar21,uVar12,uVar14,*(undefined8 *)(*plVar21 + 0x2b0));
                      plVar21 = (long *)**(undefined8 **)(*(long *)puVar10 + 0xb8);
                      uVar12 = FUN_05015c2c(*(undefined8 *)puVar6,0);
                      uVar13 = FUN_05015c2c(*(undefined8 *)puVar6,0);
                      uVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
                      FUN_05680308(uVar14,uVar13,*(undefined8 *)puVar8,1,0,0);
                      puVar8 = System_Action<ARMeshesChangedEventArgs>_TypeInfo;
                      puVar6 = System_ComponentModel_ExtenderProvidedPropertyAttribute_var;
                      if (plVar21 != (long *)0x0) {
                        (**(code **)(*plVar21 + 0x2a8))
                                  (plVar21,uVar12,uVar14,*(undefined8 *)(*plVar21 + 0x2b0));
                        plVar21 = (long *)**(undefined8 **)(*(long *)puVar10 + 0xb8);
                        uVar12 = FUN_05015c2c(*(undefined8 *)puVar8,0);
                        uVar13 = FUN_05015c2c(*(undefined8 *)puVar8,0);
                        uVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
                        FUN_05680308(uVar14,uVar13,*(undefined8 *)puVar6,1,0,0);
                        puVar6 = PTR_DAT_0676b518;
                        if (plVar21 != (long *)0x0) {
                          (**(code **)(*plVar21 + 0x2a8))
                                    (plVar21,uVar12,uVar14,*(undefined8 *)(*plVar21 + 0x2b0));
                          plVar21 = (long *)**(undefined8 **)(*(long *)puVar10 + 0xb8);
                          uVar12 = FUN_05015c2c(*(long *)(puVar3 + 0x90) + 0x20,0);
                          uVar13 = FUN_05015c2c(*(long *)(puVar3 + 0x90) + 0x20,0);
                          uVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
                          FUN_05680308(uVar14,uVar13,*(undefined8 *)puVar6,1,0,0);
                          puVar6 = UnityEngine_EventSystems_BaseInput_var;
                          if (plVar21 != (long *)0x0) {
                            (**(code **)(*plVar21 + 0x2a8))
                                      (plVar21,uVar12,uVar14,*(undefined8 *)(*plVar21 + 0x2b0));
                            lVar18 = thunk_FUN_02d9d534(*(undefined8 *)puVar6);
                            FUN_055be424(lVar18,0);
                            puVar6 = PTR_DAT_0677f228;
                            if (lVar18 != 0) {
                              *(undefined8 *)(lVar18 + 0x50) =
                                   *(undefined8 *)
                                    System_Buffers_SpanAction<char,_ValueTuple<IntPtr,_int,_IntPtr,_int,_bool>>_TypeInfo
                              ;
                              thunk_FUN_02dd37b4();
                              plVar21 = (long *)**(undefined8 **)(*(long *)puVar10 + 0xb8);
                              uVar12 = FUN_05015c2c(*(undefined8 *)puVar6,0);
                              uVar13 = FUN_05015c2c(*(undefined8 *)puVar6,0);
                              plVar22 = (long *)**(undefined8 **)(*(long *)puVar10 + 0xb8);
                              uVar14 = FUN_05015c2c(*(long *)(puVar3 + 0x90) + 0x20,0);
                              puVar6 = System_WeakReference_var;
                              if (plVar22 != (long *)0x0) {
                                plVar22 = (long *)(**(code **)(*plVar22 + 0x308))
                                                            (plVar22,uVar14,
                                                             *(undefined8 *)(*plVar22 + 0x310));
                                uVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
                                if (plVar22 != (long *)0x0) {
                                  lVar16 = *(long *)puVar11;
                                  if ((*(byte *)(*plVar22 + 0x130) < *(byte *)(lVar16 + 0x130)) ||
                                     (*(long *)(*(long *)(*plVar22 + 200) +
                                                (ulong)*(byte *)(lVar16 + 0x130) * 8 + -8) != lVar16
                                     )) {
                    /* WARNING: Subroutine does not return */
                                    FUN_02d60e88(plVar22,lVar16,*(undefined8 *)puVar6);
                                  }
                                }
                                FUN_05680308(uVar14,uVar13,*(undefined8 *)puVar6,1,plVar22,lVar18);
                                puVar8 = Firebase_Firestore_FirestoreDataAttribute_var;
                                puVar6 = PTR_DAT_06762e38;
                                if (plVar21 != (long *)0x0) {
                                  (**(code **)(*plVar21 + 0x2a8))
                                            (plVar21,uVar12,uVar14,*(undefined8 *)(*plVar21 + 0x2b0)
                                            );
                                  plVar21 = (long *)**(undefined8 **)(*(long *)puVar10 + 0xb8);
                                  uVar12 = FUN_05015c2c(*(long *)(puVar3 + 0x18) + 0x20,0);
                                  uVar13 = FUN_05015c2c(*(long *)(puVar3 + 0x18) + 0x20,0);
                                  uVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
                                  FUN_05680308(uVar14,uVar13,*(undefined8 *)puVar8,1,0,0);
                                  puVar8 = UnityEngine_UIElements_ComputedStyle_var;
                                  if (plVar21 != (long *)0x0) {
                                    (**(code **)(*plVar21 + 0x2a8))
                                              (plVar21,uVar12,uVar14,
                                               *(undefined8 *)(*plVar21 + 0x2b0));
                                    plVar21 = (long *)**(undefined8 **)(*(long *)puVar10 + 0xb8);
                                    uVar12 = FUN_05015c2c(*(long *)(puVar3 + 0x30) + 0x20,0);
                                    uVar13 = FUN_05015c2c(*(long *)(puVar3 + 0x30) + 0x20,0);
                                    uVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
                                    FUN_05680308(uVar14,uVar13,*(undefined8 *)puVar8,1,0,0);
                                    if (plVar21 != (long *)0x0) {
                                      (**(code **)(*plVar21 + 0x2a8))
                                                (plVar21,uVar12,uVar14,
                                                 *(undefined8 *)(*plVar21 + 0x2b0));
                                      plVar21 = (long *)**(undefined8 **)(*(long *)puVar10 + 0xb8);
                                      uVar12 = FUN_05015c2c(*(long *)(puVar3 + 0x88) + 0x20,0);
                                      uVar13 = FUN_05015c2c(*(long *)(puVar3 + 0x88) + 0x20,0);
                                      plVar22 = (long *)**(undefined8 **)(*(long *)puVar10 + 0xb8);
                                      uVar14 = FUN_05015c2c(*(long *)(puVar3 + 0x40) + 0x20,0);
                                      puVar8 = UnityEngine_CapsuleCollider_var;
                                      if (plVar22 != (long *)0x0) {
                                        plVar22 = (long *)(**(code **)(*plVar22 + 0x308))
                                                                    (plVar22,uVar14,
                                                                     *(undefined8 *)
                                                                      (*plVar22 + 0x310));
                                        uVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
                                        if (plVar22 != (long *)0x0) {
                                          lVar18 = *(long *)puVar11;
                                          if ((*(byte *)(*plVar22 + 0x130) <
                                               *(byte *)(lVar18 + 0x130)) ||
                                             (*(long *)(*(long *)(*plVar22 + 200) +
                                                        (ulong)*(byte *)(lVar18 + 0x130) * 8 + -8)
                                              != lVar18)) {
                    /* WARNING: Subroutine does not return */
                                            FUN_02d60e88(plVar22,lVar18,*(undefined8 *)puVar8);
                                          }
                                        }
                                        FUN_05680308(uVar14,uVar13,*(undefined8 *)puVar8,1,plVar22,0
                                                    );
                                        puVar8 = 
                                        System_Runtime_CompilerServices_ExtensionAttribute_var;
                                        if (plVar21 != (long *)0x0) {
                                          (**(code **)(*plVar21 + 0x2a8))
                                                    (plVar21,uVar12,uVar14,
                                                     *(undefined8 *)(*plVar21 + 0x2b0));
                                          plVar21 = (long *)**(undefined8 **)
                                                              (*(long *)puVar10 + 0xb8);
                                          uVar12 = FUN_05015c2c(*(long *)(puVar3 + 0x10) + 0x20,0);
                                          uVar13 = FUN_05015c2c(*(long *)(puVar3 + 0x10) + 0x20,0);
                                          uVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
                                          FUN_05680308(uVar14,uVar13,*(undefined8 *)puVar8,0,0,0);
                                          puVar4 = System_ComponentModel_BooleanConverter_var;
                                          puVar8 = PTR_DAT_06766e70;
                                          if (plVar21 != (long *)0x0) {
                                            (**(code **)(*plVar21 + 0x2a8))
                                                      (plVar21,uVar12,uVar14,
                                                       *(undefined8 *)(*plVar21 + 0x2b0));
                                            plVar21 = (long *)**(undefined8 **)
                                                                (*(long *)puVar10 + 0xb8);
                                            uVar12 = FUN_05015c2c(*(undefined8 *)puVar8,0);
                                            uVar13 = FUN_05015c2c(*(undefined8 *)puVar8,0);
                                            uVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
                                            FUN_05680308(uVar14,uVar13,*(undefined8 *)puVar4,1,0,0);
                                            puVar5 = 
                                            System_Buffers_SpanAction<char,_ValueTuple<IntPtr,_int,_IntPtr,_int,_IntPtr,_int,_bool,_ValueTuple<bool>>>_TypeInfo
                                            ;
                                            puVar4 = PTR_DAT_06782678;
                                            if (plVar21 != (long *)0x0) {
                                              (**(code **)(*plVar21 + 0x2a8))
                                                        (plVar21,uVar12,uVar14,
                                                         *(undefined8 *)(*plVar21 + 0x2b0));
                                              plVar21 = (long *)**(undefined8 **)
                                                                  (*(long *)puVar10 + 0xb8);
                                              uVar12 = FUN_05015c2c(*(undefined8 *)puVar4,0);
                                              uVar13 = FUN_05015c2c(*(undefined8 *)puVar4,0);
                                              uVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
                                              FUN_05680308(uVar14,uVar13,*(undefined8 *)puVar5,0,0,0
                                                          );
                                              puVar5 = System_Action<Column,_int>_TypeInfo;
                                              puVar4 = PTR_DAT_06782670;
                                              if (plVar21 != (long *)0x0) {
                                                (**(code **)(*plVar21 + 0x2a8))
                                                          (plVar21,uVar12,uVar14,
                                                           *(undefined8 *)(*plVar21 + 0x2b0));
                                                plVar21 = (long *)**(undefined8 **)
                                                                    (*(long *)puVar10 + 0xb8);
                                                uVar12 = FUN_05015c2c(*(undefined8 *)puVar4,0);
                                                uVar13 = FUN_05015c2c(*(undefined8 *)puVar4,0);
                                                uVar14 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
                                                FUN_05680308(uVar14,uVar13,*(undefined8 *)puVar5,0,0
                                                             ,0);
                                                if (plVar21 != (long *)0x0) {
                                                  (**(code **)(*plVar21 + 0x2a8))
                                                            (plVar21,uVar12,uVar14,
                                                             *(undefined8 *)(*plVar21 + 0x2b0));
                                                  uVar12 = thunk_FUN_02d9d534(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_04fb2710(uVar12,0);
                                                  puVar17 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar10 + 0xb8) + 8)
                                                  ;
                                                  *puVar17 = uVar12;
                                                  thunk_FUN_02dd37b4(puVar17,uVar12);
                                                  plVar21 = (long *)**(long **)(*(long *)puVar10 +
                                                                               0xb8);
                                                  if ((plVar21 != (long *)0x0) &&
                                                     (plVar21 = (long *)(**(code **)(*plVar21 +
                                                                                    0x398))(plVar21,
                                                  *(undefined8 *)(*plVar21 + 0x3a0)),
                                                  plVar21 != (long *)0x0)) {
                                                    lVar18 = *plVar21;
                                                    uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
                                                    if (uVar19 != 0) {
                                                      piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8
                                                                       );
                                                      do {
                                                        if (*(long *)(piVar20 + -2) ==
                                                            *(long *)PTR_DAT_06762e08) {
                                                          puVar17 = (undefined8 *)
                                                                    (lVar18 + (long)*piVar20 * 0x10
                                                                    + 0x138);
                                                          goto LAB_05683a14;
                                                        }
                                                        uVar19 = uVar19 - 1;
                                                        piVar20 = piVar20 + 4;
                                                      } while (uVar19 != 0);
                                                    }
                                                    puVar17 = (undefined8 *)
                                                              FUN_02d9a5d4(plVar21,*(long *)
                                                  PTR_DAT_06762e08,0);
LAB_05683a14:
                                                  puVar4 = PTR_DAT_0675f3d0;
                                                  plVar21 = (long *)(*(code *)*puVar17)(plVar21,
                                                  puVar17[1]);
                                                  puVar5 = PTR_DAT_0675f3d8;
                                                  if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_02d60ae8();
                                                  }
                                                  do {
                                                    lVar16 = *plVar21;
                                                    lVar18 = *(long *)puVar5;
                                                    uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
                                                    if (uVar19 != 0) {
                                                      piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8
                                                                       );
                                                      do {
                                                        if (*(long *)(piVar20 + -2) == lVar18) {
                                                          puVar17 = (undefined8 *)
                                                                    (lVar16 + (long)*piVar20 * 0x10
                                                                    + 0x138);
                                                          goto LAB_05683a84;
                                                        }
                                                        uVar19 = uVar19 - 1;
                                                        piVar20 = piVar20 + 4;
                                                      } while (uVar19 != 0);
                                                    }
                                                    puVar17 = (undefined8 *)
                                                              FUN_02d9a5d4(plVar21,lVar18,0);
LAB_05683a84:
                                                    uVar19 = (*(code *)*puVar17)(plVar21,puVar17[1])
                                                    ;
                                                    if ((uVar19 & 1) == 0) {
                                                      plVar21 = (long *)thunk_FUN_02d9d438(plVar21,*
                                                  (undefined8 *)puVar4);
                                                  if (plVar21 == (long *)0x0) goto LAB_05683bbc;
                                                  lVar18 = *plVar21;
                                                  uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
                                                  if (uVar19 == 0) goto LAB_05683b94;
                                                  piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                                                  goto LAB_05683b7c;
                                                  }
                                                  lVar16 = *plVar21;
                                                  lVar18 = *(long *)puVar5;
                                                  uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
                                                  if (uVar19 != 0) {
                                                    piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                                                    do {
                                                      if (*(long *)(piVar20 + -2) == lVar18) {
                                                        puVar17 = (undefined8 *)
                                                                  (lVar16 + (long)(*piVar20 + 1) *
                                                                            0x10 + 0x138);
                                                        goto LAB_05683ae4;
                                                      }
                                                      uVar19 = uVar19 - 1;
                                                      piVar20 = piVar20 + 4;
                                                    } while (uVar19 != 0);
                                                  }
                                                  puVar17 = (undefined8 *)
                                                            FUN_02d9a5d4(plVar21,lVar18,1);
LAB_05683ae4:
                                                  plVar22 = (long *)(*(code *)*puVar17)(plVar21,
                                                  puVar17[1]);
                                                  if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_02d60ae8();
                                                  }
                                                  bVar2 = *(byte *)(*(long *)puVar11 + 0x130);
                                                  if ((*(byte *)(*plVar22 + 0x130) < bVar2) ||
                                                     (*(long *)(*(long *)(*plVar22 + 200) +
                                                                (ulong)bVar2 * 8 + -8) !=
                                                      *(long *)puVar11)) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_02d60e88(plVar22);
                                                  }
                                                  plVar15 = *(long **)(*(long *)(*(long *)puVar10 +
                                                                                0xb8) + 8);
                                                  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_02d60ae8();
                                                  }
                                                  (**(code **)(*plVar15 + 0x2a8))
                                                            (plVar15,plVar22[3],plVar22,
                                                             *(undefined8 *)(*plVar15 + 0x2b0));
                                                  } while( true );
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
                }
              }
            }
          }
        }
      }
    }
  }
  goto LAB_05684b60;
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
LAB_05684af0:
    if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
      puVar17 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_05684b24;
    }
  }
LAB_05684b08:
  puVar17 = (undefined8 *)FUN_02d9a5d4(plVar21,*(long *)puVar4,0);
LAB_05684b24:
  (*(code *)*puVar17)(plVar21,puVar17[1]);
  return;
  while( true ) {
    uVar19 = uVar19 - 1;
    piVar20 = piVar20 + 4;
    if (uVar19 == 0) break;
LAB_05683b7c:
    if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
      puVar17 = (undefined8 *)(lVar18 + (long)*piVar20 * 0x10 + 0x138);
      goto System_Net_WebRequest__SafeCaptureIdenity;
    }
  }
LAB_05683b94:
  puVar17 = (undefined8 *)FUN_02d9a5d4(plVar21,*(long *)puVar4,0);
System_Net_WebRequest__SafeCaptureIdenity:
  (*(code *)*puVar17)(plVar21,puVar17[1]);
LAB_05683bbc:
  puVar5 = UnityEngine_Color32_var;
  uVar12 = *(undefined8 *)puVar7;
  plVar21 = *(long **)(*(long *)(*(long *)puVar10 + 0xb8) + 8);
  if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar12 = FUN_05015c2c(uVar12,0);
  uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
  FUN_05680308(uVar13,uVar12,*(undefined8 *)puVar5,1,0,0);
  puVar9 = PTR_DAT_0676dc08;
  if (plVar21 != (long *)0x0) {
    (**(code **)(*plVar21 + 0x2a8))
              (plVar21,*(undefined8 *)puVar5,uVar13,*(undefined8 *)(*plVar21 + 0x2b0));
    plVar21 = *(long **)(*(long *)(*(long *)puVar10 + 0xb8) + 8);
    uVar12 = FUN_05015c2c(*(undefined8 *)puVar7,0);
    uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
    FUN_05680308(uVar13,uVar12,*(undefined8 *)puVar9,1,0,0);
    puVar5 = 
    System_Threading_ThreadPoolWorkQueue_SparseArray<ThreadPoolWorkQueue_WorkStealingQueue>_TypeInfo
    ;
    if (plVar21 != (long *)0x0) {
      (**(code **)(*plVar21 + 0x2a8))
                (plVar21,*(undefined8 *)puVar9,uVar13,*(undefined8 *)(*plVar21 + 0x2b0));
      plVar21 = *(long **)(*(long *)(*(long *)puVar10 + 0xb8) + 8);
      uVar12 = FUN_05015c2c(*(undefined8 *)puVar7,0);
      uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
      FUN_05680308(uVar13,uVar12,*(undefined8 *)puVar5,1,0,0);
      puVar9 = Newtonsoft_Json_Utilities_FSharpUtils_var;
      if (plVar21 != (long *)0x0) {
        (**(code **)(*plVar21 + 0x2a8))
                  (plVar21,*(undefined8 *)puVar5,uVar13,*(undefined8 *)(*plVar21 + 0x2b0));
        plVar21 = *(long **)(*(long *)(*(long *)puVar10 + 0xb8) + 8);
        uVar12 = FUN_05015c2c(*(long *)(puVar3 + 0x90) + 0x20,0);
        uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
        FUN_05680308(uVar13,uVar12,*(undefined8 *)puVar9,1,0,0);
        puVar5 = Firebase_Platform_FirebaseAppPlatform_var;
        if (plVar21 != (long *)0x0) {
          (**(code **)(*plVar21 + 0x2a8))
                    (plVar21,*(undefined8 *)puVar9,uVar13,*(undefined8 *)(*plVar21 + 0x2b0));
          plVar21 = *(long **)(*(long *)(*(long *)puVar10 + 0xb8) + 8);
          uVar12 = FUN_05015c2c(*(long *)(puVar3 + 0x90) + 0x20,0);
          uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
          FUN_05680308(uVar13,uVar12,*(undefined8 *)puVar5,1,0,0);
          puVar9 = System_Runtime_Serialization_ExtensionDataObject_var;
          if (plVar21 != (long *)0x0) {
            (**(code **)(*plVar21 + 0x2a8))
                      (plVar21,*(undefined8 *)puVar5,uVar13,*(undefined8 *)(*plVar21 + 0x2b0));
            plVar21 = *(long **)(*(long *)(*(long *)puVar10 + 0xb8) + 8);
            uVar12 = FUN_05015c2c(*(long *)(puVar3 + 0x90) + 0x20,0);
            uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
            FUN_05680308(uVar13,uVar12,*(undefined8 *)puVar9,1,0,0);
            puVar5 = Firebase_Firestore_FirestoreConverter<T>_var;
            if (plVar21 != (long *)0x0) {
              (**(code **)(*plVar21 + 0x2a8))
                        (plVar21,*(undefined8 *)puVar9,uVar13,*(undefined8 *)(*plVar21 + 0x2b0));
              plVar21 = *(long **)(*(long *)(*(long *)puVar10 + 0xb8) + 8);
              uVar12 = FUN_05015c2c(*(long *)(puVar3 + 0x90) + 0x20,0);
              uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
              FUN_05680308(uVar13,uVar12,*(undefined8 *)puVar5,1,0,0);
              puVar9 = PTR_DAT_067760f0;
              if (plVar21 != (long *)0x0) {
                (**(code **)(*plVar21 + 0x2a8))
                          (plVar21,*(undefined8 *)puVar5,uVar13,*(undefined8 *)(*plVar21 + 0x2b0));
                plVar21 = *(long **)(*(long *)(*(long *)puVar10 + 0xb8) + 8);
                uVar12 = FUN_05015c2c(*(undefined8 *)puVar7,0);
                uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
                FUN_05680308(uVar13,uVar12,*(undefined8 *)puVar9,1,0,0);
                puVar7 = UnityEngine_InputForUI_EventSanitizer_var;
                if (plVar21 != (long *)0x0) {
                  (**(code **)(*plVar21 + 0x2a8))
                            (plVar21,*(undefined8 *)puVar9,uVar13,*(undefined8 *)(*plVar21 + 0x2b0))
                  ;
                  plVar21 = *(long **)(*(long *)(*(long *)puVar10 + 0xb8) + 8);
                  uVar12 = FUN_05015c2c(*(long *)(puVar3 + 0x90) + 0x20,0);
                  uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
                  FUN_05680308(uVar13,uVar12,*(undefined8 *)puVar7,1,0,0);
                  puVar5 = Firebase_Platform_FirebaseHandler_var;
                  if (plVar21 != (long *)0x0) {
                    (**(code **)(*plVar21 + 0x2a8))
                              (plVar21,*(undefined8 *)puVar7,uVar13,
                               *(undefined8 *)(*plVar21 + 0x2b0));
                    plVar21 = *(long **)(*(long *)(*(long *)puVar10 + 0xb8) + 8);
                    uVar12 = FUN_05015c2c(*(long *)(puVar3 + 0x90) + 0x20,0);
                    uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
                    FUN_05680308(uVar13,uVar12,*(undefined8 *)puVar5,1,0,0);
                    puVar7 = PTR_DAT_06771af8;
                    if (plVar21 != (long *)0x0) {
                      (**(code **)(*plVar21 + 0x2a8))
                                (plVar21,*(undefined8 *)puVar5,uVar13,
                                 *(undefined8 *)(*plVar21 + 0x2b0));
                      plVar21 = *(long **)(*(long *)(*(long *)puVar10 + 0xb8) + 8);
                      uVar12 = FUN_05015c2c(*(long *)(puVar3 + 0x90) + 0x20,0);
                      uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
                      FUN_05680308(uVar13,uVar12,*(undefined8 *)puVar7,1,0,0);
                      puVar5 = System_Exception_var;
                      if (plVar21 != (long *)0x0) {
                        (**(code **)(*plVar21 + 0x2a8))
                                  (plVar21,*(undefined8 *)puVar7,uVar13,
                                   *(undefined8 *)(*plVar21 + 0x2b0));
                        plVar21 = *(long **)(*(long *)(*(long *)puVar10 + 0xb8) + 8);
                        uVar12 = FUN_05015c2c(*(long *)(puVar3 + 0x90) + 0x20,0);
                        uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
                        FUN_05680308(uVar13,uVar12,*(undefined8 *)puVar5,1,0,0);
                        puVar7 = Firebase_Firestore_FieldValueProxy_var;
                        if (plVar21 != (long *)0x0) {
                          (**(code **)(*plVar21 + 0x2a8))
                                    (plVar21,*(undefined8 *)puVar5,uVar13,
                                     *(undefined8 *)(*plVar21 + 0x2b0));
                          plVar21 = *(long **)(*(long *)(*(long *)puVar10 + 0xb8) + 8);
                          uVar12 = FUN_05015c2c(*(long *)(puVar3 + 0x90) + 0x20,0);
                          uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
                          FUN_05680308(uVar13,uVar12,*(undefined8 *)puVar7,1,0,0);
                          puVar5 = PTR_DAT_06780d00;
                          if (plVar21 != (long *)0x0) {
                            (**(code **)(*plVar21 + 0x2a8))
                                      (plVar21,*(undefined8 *)puVar7,uVar13,
                                       *(undefined8 *)(*plVar21 + 0x2b0));
                            plVar21 = *(long **)(*(long *)(*(long *)puVar10 + 0xb8) + 8);
                            uVar12 = FUN_05015c2c(*(long *)(puVar3 + 0x90) + 0x20,0);
                            uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
                            FUN_05680308(uVar13,uVar12,*(undefined8 *)puVar5,1,0,0);
                            puVar7 = UnityEngine_UIElements_EventDispatcherGate_var;
                            if (plVar21 != (long *)0x0) {
                              (**(code **)(*plVar21 + 0x2a8))
                                        (plVar21,*(undefined8 *)puVar5,uVar13,
                                         *(undefined8 *)(*plVar21 + 0x2b0));
                              plVar21 = *(long **)(*(long *)(*(long *)puVar10 + 0xb8) + 8);
                              uVar12 = FUN_05015c2c(*(long *)(puVar3 + 0x90) + 0x20,0);
                              uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
                              FUN_05680308(uVar13,uVar12,*(undefined8 *)puVar7,1,0,0);
                              puVar5 = System_ComponentModel_EventDescriptor_var;
                              if (plVar21 != (long *)0x0) {
                                (**(code **)(*plVar21 + 0x2a8))
                                          (plVar21,*(undefined8 *)puVar7,uVar13,
                                           *(undefined8 *)(*plVar21 + 0x2b0));
                                plVar21 = *(long **)(*(long *)(*(long *)puVar10 + 0xb8) + 8);
                                uVar12 = FUN_05015c2c(*(long *)(puVar3 + 0x90) + 0x20,0);
                                uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
                                FUN_05680308(uVar13,uVar12,*(undefined8 *)puVar5,1,0,0);
                                puVar7 = System_Runtime_InteropServices_FieldOffsetAttribute_var;
                                if (plVar21 != (long *)0x0) {
                                  (**(code **)(*plVar21 + 0x2a8))
                                            (plVar21,*(undefined8 *)puVar5,uVar13,
                                             *(undefined8 *)(*plVar21 + 0x2b0));
                                  plVar21 = *(long **)(*(long *)(*(long *)puVar10 + 0xb8) + 8);
                                  uVar12 = FUN_05015c2c(*(long *)(puVar3 + 0x90) + 0x20,0);
                                  uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
                                  FUN_05680308(uVar13,uVar12,*(undefined8 *)puVar7,1,0,0);
                                  puVar5 = UnityEngine_XR_ARSubsystems_FaceSubsystemParams_var;
                                  if (plVar21 != (long *)0x0) {
                                    (**(code **)(*plVar21 + 0x2a8))
                                              (plVar21,*(undefined8 *)puVar7,uVar13,
                                               *(undefined8 *)(*plVar21 + 0x2b0));
                                    plVar21 = *(long **)(*(long *)(*(long *)puVar10 + 0xb8) + 8);
                                    uVar12 = FUN_05015c2c(*(long *)(puVar3 + 0x90) + 0x20,0);
                                    uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
                                    FUN_05680308(uVar13,uVar12,*(undefined8 *)puVar5,1,0,0);
                                    puVar7 = Firebase_Firestore_FirestoreDocumentIdAttribute_var;
                                    if (plVar21 != (long *)0x0) {
                                      (**(code **)(*plVar21 + 0x2a8))
                                                (plVar21,*(undefined8 *)puVar5,uVar13,
                                                 *(undefined8 *)(*plVar21 + 0x2b0));
                                      plVar21 = *(long **)(*(long *)(*(long *)puVar10 + 0xb8) + 8);
                                      uVar12 = FUN_05015c2c(*(long *)(puVar3 + 0x90) + 0x20,0);
                                      uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
                                      FUN_05680308(uVar13,uVar12,*(undefined8 *)puVar7,1,0,0);
                                      puVar5 = UnityEngine_VFX_EventAttributes_var;
                                      if (plVar21 != (long *)0x0) {
                                        (**(code **)(*plVar21 + 0x2a8))
                                                  (plVar21,*(undefined8 *)puVar7,uVar13,
                                                   *(undefined8 *)(*plVar21 + 0x2b0));
                                        plVar21 = *(long **)(*(long *)(*(long *)puVar10 + 0xb8) + 8)
                                        ;
                                        uVar12 = FUN_05015c2c(*(long *)(puVar3 + 0x90) + 0x20,0);
                                        uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
                                        FUN_05680308(uVar13,uVar12,*(undefined8 *)puVar5,1,0,0);
                                        puVar7 = UnityEngine_ExecuteInEditMode_var;
                                        if (plVar21 != (long *)0x0) {
                                          (**(code **)(*plVar21 + 0x2a8))
                                                    (plVar21,*(undefined8 *)puVar5,uVar13,
                                                     *(undefined8 *)(*plVar21 + 0x2b0));
                                          plVar21 = *(long **)(*(long *)(*(long *)puVar10 + 0xb8) +
                                                              8);
                                          uVar12 = FUN_05015c2c(*(undefined8 *)puVar8,0);
                                          uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
                                          FUN_05680308(uVar13,uVar12,*(undefined8 *)puVar7,1,0,0);
                                          puVar5 = Firebase_Firestore_FirestorePropertyAttribute_var
                                          ;
                                          if (plVar21 != (long *)0x0) {
                                            (**(code **)(*plVar21 + 0x2a8))
                                                      (plVar21,*(undefined8 *)puVar7,uVar13,
                                                       *(undefined8 *)(*plVar21 + 0x2b0));
                                            plVar21 = *(long **)(*(long *)(*(long *)puVar10 + 0xb8)
                                                                + 8);
                                            uVar12 = FUN_05015c2c(*(long *)(puVar3 + 0x90) + 0x20,0)
                                            ;
                                            uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
                                            FUN_05680308(uVar13,uVar12,*(undefined8 *)puVar5,1,0,0);
                                            puVar7 = UnityEngine_EventSystems_EventSystem_var;
                                            if (plVar21 != (long *)0x0) {
                                              (**(code **)(*plVar21 + 0x2a8))
                                                        (plVar21,*(undefined8 *)puVar5,uVar13,
                                                         *(undefined8 *)(*plVar21 + 0x2b0));
                                              plVar21 = *(long **)(*(long *)(*(long *)puVar10 + 0xb8
                                                                            ) + 8);
                                              uVar12 = FUN_05015c2c(*(long *)(puVar3 + 0x90) + 0x20,
                                                                    0);
                                              uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
                                              FUN_05680308(uVar13,uVar12,*(undefined8 *)puVar7,1,0,0
                                                          );
                                              puVar5 = UnityEngine_ExecuteAlways_var;
                                              if (plVar21 != (long *)0x0) {
                                                (**(code **)(*plVar21 + 0x2a8))
                                                          (plVar21,*(undefined8 *)puVar7,uVar13,
                                                           *(undefined8 *)(*plVar21 + 0x2b0));
                                                plVar21 = *(long **)(*(long *)(*(long *)puVar10 +
                                                                              0xb8) + 8);
                                                uVar12 = FUN_05015c2c(*(long *)(puVar3 + 0x90) +
                                                                      0x20,0);
                                                uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar11);
                                                FUN_05680308(uVar13,uVar12,*(undefined8 *)puVar5,1,0
                                                             ,0);
                                                puVar7 = UnityEngine_UIElements_BindingInfo_var;
                                                if (plVar21 != (long *)0x0) {
                                                  (**(code **)(*plVar21 + 0x2a8))
                                                            (plVar21,*(undefined8 *)puVar5,uVar13,
                                                             *(undefined8 *)(*plVar21 + 0x2b0));
                                                  plVar21 = *(long **)(*(long *)(*(long *)puVar10 +
                                                                                0xb8) + 8);
                                                  uVar12 = FUN_05015c2c(*(long *)(puVar3 + 0x90) +
                                                                        0x20,0);
                                                  uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar11
                                                                             );
                                                  FUN_05680308(uVar13,uVar12,*(undefined8 *)puVar7,1
                                                               ,0,0);
                                                  puVar5 = PTR_DAT_0677eee8;
                                                  if (plVar21 != (long *)0x0) {
                                                    (**(code **)(*plVar21 + 0x2a8))
                                                              (plVar21,*(undefined8 *)puVar7,uVar13,
                                                               *(undefined8 *)(*plVar21 + 0x2b0));
                                                    plVar21 = *(long **)(*(long *)(*(long *)puVar10
                                                                                  + 0xb8) + 8);
                                                    uVar12 = FUN_05015c2c(*(long *)(puVar3 + 0x90) +
                                                                          0x20,0);
                                                    uVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                 puVar11);
                                                    FUN_05680308(uVar13,uVar12,*(undefined8 *)puVar5
                                                                 ,1,0,0);
                                                    puVar7 = 
                                                  System_Threading_ExecutionContextSwitcher_var;
                                                  if (plVar21 != (long *)0x0) {
                                                    (**(code **)(*plVar21 + 0x2a8))
                                                              (plVar21,*(undefined8 *)puVar5,uVar13,
                                                               *(undefined8 *)(*plVar21 + 0x2b0));
                                                    plVar21 = *(long **)(*(long *)(*(long *)puVar10
                                                                                  + 0xb8) + 8);
                                                    uVar12 = FUN_05015c2c(*(long *)(puVar3 + 0x90) +
                                                                          0x20,0);
                                                    uVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                 puVar11);
                                                    FUN_05680308(uVar13,uVar12,*(undefined8 *)puVar7
                                                                 ,1,0,0);
                                                    puVar5 = Unity_Properties_FieldMember_var;
                                                    if (plVar21 != (long *)0x0) {
                                                      (**(code **)(*plVar21 + 0x2a8))
                                                                (plVar21,*(undefined8 *)puVar7,
                                                                 uVar13,*(undefined8 *)
                                                                         (*plVar21 + 0x2b0));
                                                      plVar21 = *(long **)(*(long *)(*(long *)
                                                  puVar10 + 0xb8) + 8);
                                                  uVar12 = FUN_05015c2c(*(long *)(puVar3 + 0x90) +
                                                                        0x20,0);
                                                  uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar11
                                                                             );
                                                  FUN_05680308(uVar13,uVar12,*(undefined8 *)puVar5,1
                                                               ,0,0);
                                                  puVar7 = System_Security_CodeAccessPermission_var;
                                                  if (plVar21 != (long *)0x0) {
                                                    (**(code **)(*plVar21 + 0x2a8))
                                                              (plVar21,*(undefined8 *)puVar5,uVar13,
                                                               *(undefined8 *)(*plVar21 + 0x2b0));
                                                    plVar21 = *(long **)(*(long *)(*(long *)puVar10
                                                                                  + 0xb8) + 8);
                                                    uVar12 = FUN_05015c2c(*(undefined8 *)puVar8,0);
                                                    uVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                 puVar11);
                                                    FUN_05680308(uVar13,uVar12,*(undefined8 *)puVar7
                                                                 ,1,0,0);
                                                    puVar8 = System_Dynamic_ExpandoObject_var;
                                                    if (plVar21 != (long *)0x0) {
                                                      (**(code **)(*plVar21 + 0x2a8))
                                                                (plVar21,*(undefined8 *)puVar7,
                                                                 uVar13,*(undefined8 *)
                                                                         (*plVar21 + 0x2b0));
                                                      plVar21 = *(long **)(*(long *)(*(long *)
                                                  puVar10 + 0xb8) + 8);
                                                  uVar12 = FUN_05015c2c(*(long *)(puVar3 + 0x90) +
                                                                        0x20,0);
                                                  uVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar11
                                                                             );
                                                  FUN_05680308(uVar13,uVar12,*(undefined8 *)puVar8,1
                                                               ,0,0);
                                                  if (plVar21 != (long *)0x0) {
                                                    (**(code **)(*plVar21 + 0x2a8))
                                                              (plVar21,*(undefined8 *)puVar8,uVar13,
                                                               *(undefined8 *)(*plVar21 + 0x2b0));
                                                    uVar12 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                 puVar6);
                                                    FUN_04fb2710(uVar12,0);
                                                    uVar12 = FUN_04fb42ec(uVar12,0);
                                                    puVar17 = (undefined8 *)
                                                              (*(long *)(*(long *)puVar10 + 0xb8) +
                                                              0x18);
                                                    *puVar17 = uVar12;
                                                    thunk_FUN_02dd37b4(puVar17,uVar12);
                                                    plVar21 = *(long **)(*(long *)(*(long *)puVar10
                                                                                  + 0xb8) + 8);
                                                    if (plVar21 != (long *)0x0) {
                                                      plVar21 = (long *)(**(code **)(*plVar21 +
                                                                                    0x328))(plVar21,
                                                  *(undefined8 *)(*plVar21 + 0x330));
                                                  puVar7 = PTR_DAT_06764bc8;
                                                  puVar3 = PTR_DAT_0675f3d8;
                                                  if (plVar21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_02d60ae8();
                                                  }
                                                  do {
                                                    lVar16 = *plVar21;
                                                    lVar18 = *(long *)puVar3;
                                                    uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
                                                    if (uVar19 != 0) {
                                                      piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8
                                                                       );
                                                      do {
                                                        if (*(long *)(piVar20 + -2) == lVar18) {
                                                          puVar17 = (undefined8 *)
                                                                    (lVar16 + (long)*piVar20 * 0x10
                                                                    + 0x138);
                                                          goto LAB_0568499c;
                                                        }
                                                        uVar19 = uVar19 - 1;
                                                        piVar20 = piVar20 + 4;
                                                      } while (uVar19 != 0);
                                                    }
                                                    puVar17 = (undefined8 *)
                                                              FUN_02d9a5d4(plVar21,lVar18,0);
LAB_0568499c:
                                                    uVar19 = (*(code *)*puVar17)(plVar21,puVar17[1])
                                                    ;
                                                    if ((uVar19 & 1) == 0) {
                                                      plVar21 = (long *)thunk_FUN_02d9d438(plVar21,*
                                                  (undefined8 *)puVar4);
                                                  if (plVar21 == (long *)0x0) {
                                                    return;
                                                  }
                                                  lVar18 = *plVar21;
                                                  uVar19 = (ulong)*(ushort *)(lVar18 + 0x12e);
                                                  if (uVar19 == 0) goto LAB_05684b08;
                                                  piVar20 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
                                                  goto LAB_05684af0;
                                                  }
                                                  lVar16 = *plVar21;
                                                  lVar18 = *(long *)puVar3;
                                                  uVar19 = (ulong)*(ushort *)(lVar16 + 0x12e);
                                                  if (uVar19 != 0) {
                                                    piVar20 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                                                    do {
                                                      if (*(long *)(piVar20 + -2) == lVar18) {
                                                        puVar17 = (undefined8 *)
                                                                  (lVar16 + (long)(*piVar20 + 1) *
                                                                            0x10 + 0x138);
                                                        goto LAB_056849fc;
                                                      }
                                                      uVar19 = uVar19 - 1;
                                                      piVar20 = piVar20 + 4;
                                                    } while (uVar19 != 0);
                                                  }
                                                  puVar17 = (undefined8 *)
                                                            FUN_02d9a5d4(plVar21,lVar18,1);
LAB_056849fc:
                                                  plVar22 = (long *)(*(code *)*puVar17)(plVar21,
                                                  puVar17[1]);
                                                  if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_02d60ae8();
                                                  }
                                                  if (*(long *)(*plVar22 + 0x40) !=
                                                      *(long *)(*(long *)puVar7 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_02d60e88();
                                                  }
                                                  puVar17 = (undefined8 *)thunk_FUN_02d9d688();
                                                  plVar22 = (long *)puVar17[1];
                                                  if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_02d60ae8();
                                                  }
                                                  lVar18 = *(long *)puVar11;
                                                  if ((*(byte *)(*plVar22 + 0x130) <
                                                       *(byte *)(lVar18 + 0x130)) ||
                                                     (*(long *)(*(long *)(*plVar22 + 200) +
                                                                (ulong)*(byte *)(lVar18 + 0x130) * 8
                                                               + -8) != lVar18)) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_02d60e88();
                                                  }
                                                  uVar12 = *puVar17;
                                                  lVar16 = plVar22[2];
                                                  lVar1 = plVar22[3];
                                                  lVar18 = thunk_FUN_02d9d534(lVar18);
                                                  FUN_05680308(lVar18,lVar16,lVar1,1,0,0);
                                                  if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_02d60ae8();
                                                  }
                                                  *(undefined1 *)(lVar18 + 0x61) = 1;
                                                  plVar22 = *(long **)(*(long *)(*(long *)puVar10 +
                                                                                0xb8) + 0x18);
                                                  if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                    FUN_02d60ae8();
                                                  }
                                                  (**(code **)(*plVar22 + 0x2a8))
                                                            (plVar22,uVar12,lVar18,
                                                             *(undefined8 *)(*plVar22 + 0x2b0));
                                                  } while( true );
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
LAB_05684b60:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


