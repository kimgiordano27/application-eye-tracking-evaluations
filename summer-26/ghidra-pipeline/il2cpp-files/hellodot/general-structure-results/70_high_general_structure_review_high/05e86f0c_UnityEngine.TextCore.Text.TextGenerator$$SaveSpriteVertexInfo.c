/*
FUNCTION_NAME: UnityEngine.TextCore.Text.TextGenerator$$SaveSpriteVertexInfo
ENTRY_POINT: 05e86f0c
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_TextCore_Text_TextGenerator__SaveSpriteVertexInfo(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *unaff_x19;
  undefined8 *unaff_x20;
  int *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  uint *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 unaff_x29;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
                    /* catch() { ... } // from try @ 05e86c5c with catch @ 05e86f0c */
                    /* catch() { ... } // from try @ 05e86e9c with catch @ 05e86f10 */
  lVar5 = *(long *)(unaff_x23 + 0x10);
                    /* catch() { ... } // from try @ 05e86e98 with catch @ 05e86f14 */
                    /* catch() { ... } // from try @ 05e86d5c with catch @ 05e86f18 */
                    /* catch() { ... } // from try @ 05e86d84 with catch @ 05e86f1c */
  *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
                    /* catch() { ... } // from try @ 05e86dc0 with catch @ 05e86f20 */
  if (lVar5 != 0) {
                    /* catch() { ... } // from try @ 05e86de0 with catch @ 05e86f24 */
    uVar1 = *(uint *)(unaff_x23 + 0x18);
                    /* catch() { ... } // from try @ 05e86c88 with catch @ 05e86f28 */
                    /* catch() { ... } // from try @ 05e86bd0 with catch @ 05e86f2c */
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                    /* try { // try from 05e86f3c to 05f86f3f has its CatchHandler @ 05e86f54 */
      *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = unaff_x24;
    }
    else {
                    /* catch() { ... } // from try @ 05e86f3c with catch @ 05e86f54 */
                    /* try { // try from 05e86f58 to 05f86f77 has its CatchHandler @ 05e86f8c */
      FUN_039683cc();
    }
    *(long *)(unaff_x22 + 0x28) = unaff_x23;
    *unaff_x21 = *unaff_x21 + 1;
    lVar5 = *unaff_x19;
                    /* try { // try from 05e86f78 to 05f86f83 has its CatchHandler @ 05e86a78 */
    if (lVar5 != 0) {
      uVar1 = *unaff_x25;
                    /* try { // try from 05e86f84 to 05f86f8b has its CatchHandler @ 05e86f8c */
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                    /* catch() { ... } // from try @ 05e86f58 with catch @ 05e86f8c
                       catch() { ... } // from try @ 05e86f84 with catch @ 05e86f8c */
        *unaff_x25 = uVar1 + 1;
        *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
      }
      else {
        FUN_039683cc();
      }
      lVar5 = thunk_FUN_02cea894(*(undefined8 *)
                                  System_Collections_Generic_Stack<JsonValidatingReader_SchemaScope>_TypeInfo
                                );
      FUN_05e661fc(lVar5,0);
      puVar2 = UnityEngine_Events_UnityAction<PerformanceChangeNotification>_TypeInfo;
      if (lVar5 != 0) {
        *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)PTR_DAT_0662d530;
        uVar6 = *(undefined8 *)puVar2;
        *(undefined4 *)(lVar5 + 0x18) = 0;
        *(undefined8 *)(lVar5 + 0x20) = uVar6;
        lVar4 = thunk_FUN_02cea894(*unaff_x26);
        System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                  (lVar4,*(undefined8 *)PTR_DAT_065c9440);
        if (lVar4 != 0) {
          uVar6 = *(undefined8 *)
                   System_Collections_Generic_IReadOnlyCollection<ParameterExpression>_TypeInfo;
          lVar7 = *(long *)(lVar4 + 0x10);
          lVar8 = *(long *)PTR_DAT_065c9448;
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar7 != 0) {
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
            }
            else {
              FUN_039683cc(lVar4,uVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            }
            *(long *)(lVar5 + 0x30) = lVar4;
            lVar4 = thunk_FUN_02cea894(*(undefined8 *)
                                        Zenject_StaticMemoryPool<DisposeBlock>_TypeInfo);
            System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                      (lVar4,*(undefined8 *)
                              Google_Cloud_Storage_V1_UrlSigner_StartsWith<UrlSigner_ISupportsStartsWith>_TypeInfo
                      );
            lVar7 = thunk_FUN_02cea894(*(undefined8 *)
                                        System_Collections_Generic_Stack<JsonTokenizer_ContainerType>_TypeInfo
                                      );
            FUN_05e661f4(lVar7,0);
            if (lVar7 != 0) {
              uVar6 = *(undefined8 *)UnityEngine_Events_UnityAction<Scene>_TypeInfo;
              *(undefined8 *)(lVar7 + 0x10) = *unaff_x20;
              *(undefined8 *)(lVar7 + 0x18) = uVar6;
              if (lVar4 != 0) {
                lVar8 = *(long *)(lVar4 + 0x10);
                lVar9 = *unaff_x27;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                if (lVar8 != 0) {
                  uVar1 = *(uint *)(lVar4 + 0x18);
                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                    *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = lVar7;
                  }
                  else {
                    FUN_039683cc(lVar4,lVar7,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                  }
                  *(long *)(lVar5 + 0x28) = lVar4;
                  *unaff_x21 = *unaff_x21 + 1;
                  lVar4 = *unaff_x19;
                  if (lVar4 != 0) {
                    uVar1 = *unaff_x25;
                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                      *unaff_x25 = uVar1 + 1;
                      *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = lVar5;
                    }
                    else {
                      FUN_039683cc();
                    }
                    lVar5 = thunk_FUN_02cea894(*(undefined8 *)
                                                System_Collections_Generic_Stack<JsonValidatingReader_SchemaScope>_TypeInfo
                                              );
                    FUN_05e661fc(lVar5,0);
                    puVar2 = Google_Protobuf_ValueWriter<bool>_TypeInfo;
                    if (lVar5 != 0) {
                      *(undefined8 *)(lVar5 + 0x10) =
                           *(undefined8 *)
                            UnityEngine_XR_Interaction_Toolkit_Utilities_RegistrationList<IXRInteractionGroup>_TypeInfo
                      ;
                      uVar6 = *(undefined8 *)puVar2;
                      *(undefined4 *)(lVar5 + 0x18) = 0;
                      *(undefined8 *)(lVar5 + 0x20) = uVar6;
                      lVar4 = thunk_FUN_02cea894(*unaff_x26);
                      System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                                (lVar4,*(undefined8 *)PTR_DAT_065c9440);
                      if (lVar4 != 0) {
                        uVar6 = *(undefined8 *)
                                 System_Collections_Generic_IReadOnlyCollection<HandJointId>_TypeInfo
                        ;
                        lVar7 = *(long *)(lVar4 + 0x10);
                        lVar8 = *(long *)PTR_DAT_065c9448;
                        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                        if (lVar7 != 0) {
                          uVar1 = *(uint *)(lVar4 + 0x18);
                          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                            *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                          }
                          else {
                            FUN_039683cc(lVar4,uVar6,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                          }
                          *(long *)(lVar5 + 0x30) = lVar4;
                          lVar4 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                            
                                                  Zenject_StaticMemoryPool<DisposeBlock>_TypeInfo);
                          System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                                    (lVar4,*(undefined8 *)
                                            Google_Cloud_Storage_V1_UrlSigner_StartsWith<UrlSigner_ISupportsStartsWith>_TypeInfo
                                    );
                          lVar7 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                            
                                                  System_Collections_Generic_Stack<JsonTokenizer_ContainerType>_TypeInfo
                                                  );
                          FUN_05e661f4(lVar7,0);
                          if (lVar7 != 0) {
                            uVar6 = *(undefined8 *)System_ValueTuple<Vector2,_Vector2>_TypeInfo;
                            *(undefined8 *)(lVar7 + 0x10) = *unaff_x20;
                            *(undefined8 *)(lVar7 + 0x18) = uVar6;
                            if (lVar4 != 0) {
                              lVar8 = *(long *)(lVar4 + 0x10);
                              lVar9 = *unaff_x27;
                              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                              if (lVar8 != 0) {
                                uVar1 = *(uint *)(lVar4 + 0x18);
                                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                  *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                  *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = lVar7;
                                }
                                else {
                                  FUN_039683cc(lVar4,lVar7,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                                }
                                *(long *)(lVar5 + 0x28) = lVar4;
                                *unaff_x21 = *unaff_x21 + 1;
                                lVar4 = *unaff_x19;
                                if (lVar4 != 0) {
                                  uVar1 = *unaff_x25;
                                  if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                    *unaff_x25 = uVar1 + 1;
                                    *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = lVar5;
                                  }
                                  else {
                                    FUN_039683cc();
                                  }
                                  lVar5 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                            
                                                  System_Collections_Generic_Stack<JsonValidatingReader_SchemaScope>_TypeInfo
                                                  );
                                  FUN_05e661fc(lVar5,0);
                                  puVar2 = PTR_DAT_06610a88;
                                  if (lVar5 != 0) {
                                    *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)PTR_DAT_0662d4f8;
                                    uVar6 = *(undefined8 *)puVar2;
                                    *(undefined4 *)(lVar5 + 0x18) = 1;
                                    *(undefined8 *)(lVar5 + 0x20) = uVar6;
                                    lVar4 = thunk_FUN_02cea894(*unaff_x26);
                                    System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                                              (lVar4,*(undefined8 *)PTR_DAT_065c9440);
                                    if (lVar4 != 0) {
                                      uVar6 = *(undefined8 *)puVar2;
                                      lVar7 = *(long *)(lVar4 + 0x10);
                                      lVar8 = *(long *)PTR_DAT_065c9448;
                                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                      if (lVar7 != 0) {
                                        uVar1 = *(uint *)(lVar4 + 0x18);
                                        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                          *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) =
                                               uVar6;
                                        }
                                        else {
                                          FUN_039683cc(lVar4,uVar6,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) +
                                                        0x70));
                                        }
                                        *(long *)(lVar5 + 0x30) = lVar4;
                                        lVar4 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                        
                                                  Zenject_StaticMemoryPool<DisposeBlock>_TypeInfo);
                                        System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                                                  (lVar4,*(undefined8 *)
                                                                                                                    
                                                  Google_Cloud_Storage_V1_UrlSigner_StartsWith<UrlSigner_ISupportsStartsWith>_TypeInfo
                                                  );
                                        lVar7 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                        
                                                  System_Collections_Generic_Stack<JsonTokenizer_ContainerType>_TypeInfo
                                                  );
                                        FUN_05e661f4(lVar7,0);
                                        puVar2 = 
                                        UnityEngine_Events_UnityAction<FocusExitEventArgs>_TypeInfo;
                                        if (lVar7 != 0) {
                                          *(undefined8 *)(lVar7 + 0x18) =
                                               *(undefined8 *)
                                                UnityEngine_Events_UnityAction<FocusExitEventArgs>_TypeInfo
                                          ;
                                          *(undefined8 *)(lVar7 + 0x10) =
                                               *(undefined8 *)
                                                System_Reflection_CustomAttributeData___TypeInfo;
                                          if (lVar4 != 0) {
                                            lVar8 = *(long *)(lVar4 + 0x10);
                                            lVar9 = *unaff_x27;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                            if (lVar8 != 0) {
                                              uVar1 = *(uint *)(lVar4 + 0x18);
                                              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) =
                                                     lVar7;
                                              }
                                              else {
                                                FUN_039683cc(lVar4,lVar7,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar9 + 0x20) +
                                                                        0xc0) + 0x70));
                                              }
                                              *(long *)(lVar5 + 0x28) = lVar4;
                                              *unaff_x21 = *unaff_x21 + 1;
                                              lVar4 = *unaff_x19;
                                              if (lVar4 != 0) {
                                                uVar1 = *unaff_x25;
                                                if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                  *unaff_x25 = uVar1 + 1;
                                                  *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) =
                                                       lVar5;
                                                }
                                                else {
                                                  FUN_039683cc();
                                                }
                                                lVar5 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                                        
                                                  System_Collections_Generic_Stack<JsonValidatingReader_SchemaScope>_TypeInfo
                                                  );
                                                FUN_05e661fc(lVar5,0);
                                                puVar3 = 
                                                UnityEngine_Events_UnityAction<PointerEvent>_TypeInfo
                                                ;
                                                if (lVar5 != 0) {
                                                  *(undefined8 *)(lVar5 + 0x10) =
                                                       *(undefined8 *)PTR_DAT_0662d4d8;
                                                  uVar6 = *(undefined8 *)puVar3;
                                                  *(undefined4 *)(lVar5 + 0x18) = 0;
                                                  *(undefined8 *)(lVar5 + 0x20) = uVar6;
                                                  lVar4 = thunk_FUN_02cea894(*unaff_x26);
                                                  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                                                            (lVar4,*(undefined8 *)PTR_DAT_065c9440);
                                                  if (lVar4 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  System_Collections_Generic_IReadOnlyCollection<IInteractor>_TypeInfo
                                                  ;
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  lVar8 = *(long *)PTR_DAT_065c9448;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                    }
                                                    else {
                                                      FUN_039683cc(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar4;
                                                  lVar4 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                                            
                                                  Zenject_StaticMemoryPool<DisposeBlock>_TypeInfo);
                                                  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                                                            (lVar4,*(undefined8 *)
                                                                                                                                        
                                                  Google_Cloud_Storage_V1_UrlSigner_StartsWith<UrlSigner_ISupportsStartsWith>_TypeInfo
                                                  );
                                                  lVar7 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                                            
                                                  System_Collections_Generic_Stack<JsonTokenizer_ContainerType>_TypeInfo
                                                  );
                                                  FUN_05e661f4(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)puVar2;
                                                    puVar2 = 
                                                  System_Reflection_CustomAttributeData___TypeInfo;
                                                  *(undefined8 *)(lVar7 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  System_Reflection_CustomAttributeData___TypeInfo;
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x27;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar8 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar7;
                                                      }
                                                      else {
                                                        FUN_039683cc(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar4;
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x19;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x25;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x25 = uVar1 + 1;
                                                      *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar5;
                                                    }
                                                    else {
                                                      FUN_039683cc();
                                                    }
                                                    lVar5 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                                                
                                                  System_Collections_Generic_Stack<JsonValidatingReader_SchemaScope>_TypeInfo
                                                  );
                                                  FUN_05e661fc(lVar5,0);
                                                  puVar3 = System_Data_Constraint___TypeInfo;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                          UnityEngine_Component___TypeInfo;
                                                    uVar6 = *(undefined8 *)puVar3;
                                                    *(undefined4 *)(lVar5 + 0x18) = 1;
                                                    *(undefined8 *)(lVar5 + 0x20) = uVar6;
                                                    lVar4 = thunk_FUN_02cea894(*unaff_x26);
                                                                                                        
                                                  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                                                            (lVar4,*(undefined8 *)PTR_DAT_065c9440);
                                                  if (lVar4 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_ComputedTransitionProperty___TypeInfo
                                                  ;
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  lVar8 = *(long *)PTR_DAT_065c9448;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                    }
                                                    else {
                                                      FUN_039683cc(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar4;
                                                  lVar4 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                                            
                                                  Zenject_StaticMemoryPool<DisposeBlock>_TypeInfo);
                                                  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                                                            (lVar4,*(undefined8 *)
                                                                                                                                        
                                                  Google_Cloud_Storage_V1_UrlSigner_StartsWith<UrlSigner_ISupportsStartsWith>_TypeInfo
                                                  );
                                                  lVar7 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                                            
                                                  System_Collections_Generic_Stack<JsonTokenizer_ContainerType>_TypeInfo
                                                  );
                                                  FUN_05e661f4(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  System_Reflection_CustomAttributeNamedArgument___TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar7 + 0x10) =
                                                       *(undefined8 *)puVar2;
                                                  *(undefined8 *)(lVar7 + 0x18) = uVar6;
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x27;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar8 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar7;
                                                      }
                                                      else {
                                                        FUN_039683cc(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar4;
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x19;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x25;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x25 = uVar1 + 1;
                                                      *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar5;
                                                    }
                                                    else {
                                                      FUN_039683cc();
                                                    }
                                                    lVar5 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                                                
                                                  System_Collections_Generic_Stack<JsonValidatingReader_SchemaScope>_TypeInfo
                                                  );
                                                  FUN_05e661fc(lVar5,0);
                                                  puVar2 = PTR_DAT_065c87d8;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_065c87c8;
                                                    uVar6 = *(undefined8 *)puVar2;
                                                    *(undefined4 *)(lVar5 + 0x18) = 1;
                                                    *(undefined8 *)(lVar5 + 0x20) = uVar6;
                                                    lVar4 = thunk_FUN_02cea894(*unaff_x26);
                                                                                                        
                                                  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                                                            (lVar4,*(undefined8 *)PTR_DAT_065c9440);
                                                  if (lVar4 != 0) {
                                                    uVar6 = *(undefined8 *)puVar2;
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    lVar8 = *(long *)PTR_DAT_065c9448;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    puVar2 = 
                                                  System_Reflection_CustomAttributeData___TypeInfo;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                    }
                                                    else {
                                                      FUN_039683cc(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar4;
                                                  lVar4 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                                            
                                                  Zenject_StaticMemoryPool<DisposeBlock>_TypeInfo);
                                                  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                                                            (lVar4,*(undefined8 *)
                                                                                                                                        
                                                  Google_Cloud_Storage_V1_UrlSigner_StartsWith<UrlSigner_ISupportsStartsWith>_TypeInfo
                                                  );
                                                  lVar7 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                                            
                                                  System_Collections_Generic_Stack<JsonTokenizer_ContainerType>_TypeInfo
                                                  );
                                                  FUN_05e661f4(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Events_UnityAction<float>_TypeInfo;
                                                  *(undefined8 *)(lVar7 + 0x10) =
                                                       *(undefined8 *)puVar2;
                                                  *(undefined8 *)(lVar7 + 0x18) = uVar6;
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x27;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar8 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar7;
                                                      }
                                                      else {
                                                        FUN_039683cc(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar4;
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x19;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x25;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x25 = uVar1 + 1;
                                                      *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar5;
                                                    }
                                                    else {
                                                      FUN_039683cc();
                                                    }
                                                    lVar5 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                                                
                                                  System_Collections_Generic_Stack<JsonValidatingReader_SchemaScope>_TypeInfo
                                                  );
                                                  FUN_05e661fc(lVar5,0);
                                                  puVar3 = 
                                                  Niantic_Peridot_Api_CurrencyAmount___TypeInfo;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_0662d508;
                                                    uVar6 = *(undefined8 *)puVar3;
                                                    *(undefined4 *)(lVar5 + 0x18) = 0;
                                                    *(undefined8 *)(lVar5 + 0x20) = uVar6;
                                                    lVar4 = thunk_FUN_02cea894(*unaff_x26);
                                                                                                        
                                                  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                                                            (lVar4,*(undefined8 *)PTR_DAT_065c9440);
                                                  if (lVar4 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  System_Collections_Generic_IReadOnlyCollection<ICylinderClipper>_TypeInfo
                                                  ;
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  lVar8 = *(long *)PTR_DAT_065c9448;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                    }
                                                    else {
                                                      FUN_039683cc(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar4;
                                                  lVar4 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                                            
                                                  Zenject_StaticMemoryPool<DisposeBlock>_TypeInfo);
                                                  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                                                            (lVar4,*(undefined8 *)
                                                                                                                                        
                                                  Google_Cloud_Storage_V1_UrlSigner_StartsWith<UrlSigner_ISupportsStartsWith>_TypeInfo
                                                  );
                                                  lVar7 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                                            
                                                  System_Collections_Generic_Stack<JsonTokenizer_ContainerType>_TypeInfo
                                                  );
                                                  FUN_05e661f4(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_UxmlEnumAttributeDescription<HelpBoxMessageType>_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar7 + 0x10) =
                                                       *(undefined8 *)puVar2;
                                                  *(undefined8 *)(lVar7 + 0x18) = uVar6;
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x27;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar8 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar7;
                                                      }
                                                      else {
                                                        FUN_039683cc(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar4;
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x19;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x25;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x25 = uVar1 + 1;
                                                      *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar5;
                                                    }
                                                    else {
                                                      FUN_039683cc();
                                                    }
                                                    lVar5 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                                                
                                                  System_Collections_Generic_Stack<JsonValidatingReader_SchemaScope>_TypeInfo
                                                  );
                                                  FUN_05e661fc(lVar5,0);
                                                  puVar3 = 
                                                  Google_Protobuf_ValueWriter<uint>_TypeInfo;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_RegistrationList<IXRInteractable>_TypeInfo
                                                  ;
                                                  uVar6 = *(undefined8 *)puVar3;
                                                  *(undefined4 *)(lVar5 + 0x18) = 0;
                                                  *(undefined8 *)(lVar5 + 0x20) = uVar6;
                                                  lVar4 = thunk_FUN_02cea894(*unaff_x26);
                                                  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                                                            (lVar4,*(undefined8 *)PTR_DAT_065c9440);
                                                  if (lVar4 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_SortColumnDescriptions_UxmlObjectFactory<SortColumnDescriptions>_TypeInfo
                                                  ;
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  lVar8 = *(long *)PTR_DAT_065c9448;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                    }
                                                    else {
                                                      FUN_039683cc(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar4;
                                                  lVar4 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                                            
                                                  Zenject_StaticMemoryPool<DisposeBlock>_TypeInfo);
                                                  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                                                            (lVar4,*(undefined8 *)
                                                                                                                                        
                                                  Google_Cloud_Storage_V1_UrlSigner_StartsWith<UrlSigner_ISupportsStartsWith>_TypeInfo
                                                  );
                                                  lVar7 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                                            
                                                  System_Collections_Generic_Stack<JsonTokenizer_ContainerType>_TypeInfo
                                                  );
                                                  FUN_05e661f4(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_UxmlObjectListAttributeDescription<Column>_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar7 + 0x10) =
                                                       *(undefined8 *)puVar2;
                                                  *(undefined8 *)(lVar7 + 0x18) = uVar6;
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x27;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar8 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar7;
                                                      }
                                                      else {
                                                        FUN_039683cc(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar4;
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x19;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x25;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x25 = uVar1 + 1;
                                                      *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar5;
                                                    }
                                                    else {
                                                      FUN_039683cc();
                                                    }
                                                    lVar5 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                                                
                                                  System_Collections_Generic_Stack<JsonValidatingReader_SchemaScope>_TypeInfo
                                                  );
                                                  FUN_05e661fc(lVar5,0);
                                                  puVar3 = 
                                                  UnityEngine_Events_UnityAction<UIHoverEventArgs>_TypeInfo
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_0660d4f0;
                                                    uVar6 = *(undefined8 *)puVar3;
                                                    *(undefined4 *)(lVar5 + 0x18) = 2;
                                                    *(undefined8 *)(lVar5 + 0x20) = uVar6;
                                                    lVar4 = thunk_FUN_02cea894(*unaff_x26);
                                                                                                        
                                                  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                                                            (lVar4,*(undefined8 *)PTR_DAT_065c9440);
                                                  if (lVar4 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  System_Collections_Generic_IReadOnlyCollection<IBoundsClipper>_TypeInfo
                                                  ;
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  lVar8 = *(long *)PTR_DAT_065c9448;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                    }
                                                    else {
                                                      FUN_039683cc(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar4;
                                                  lVar4 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                                            
                                                  Zenject_StaticMemoryPool<DisposeBlock>_TypeInfo);
                                                  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                                                            (lVar4,*(undefined8 *)
                                                                                                                                        
                                                  Google_Cloud_Storage_V1_UrlSigner_StartsWith<UrlSigner_ISupportsStartsWith>_TypeInfo
                                                  );
                                                  lVar7 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                                            
                                                  System_Collections_Generic_Stack<JsonTokenizer_ContainerType>_TypeInfo
                                                  );
                                                  FUN_05e661f4(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Events_UnityAction<MRUKRoom>_TypeInfo;
                                                  *(undefined8 *)(lVar7 + 0x10) =
                                                       *(undefined8 *)puVar2;
                                                  *(undefined8 *)(lVar7 + 0x18) = uVar6;
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x27;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar8 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar7;
                                                      }
                                                      else {
                                                        FUN_039683cc(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar4;
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x19;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x25;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x25 = uVar1 + 1;
                                                      *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar5;
                                                    }
                                                    else {
                                                      FUN_039683cc();
                                                    }
                                                    lVar5 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                                                
                                                  System_Collections_Generic_Stack<JsonValidatingReader_SchemaScope>_TypeInfo
                                                  );
                                                  FUN_05e661fc(lVar5,0);
                                                  puVar3 = 
                                                  UnityEngine_Events_UnityAction<HoverExitEventArgs>_TypeInfo
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_0662d540;
                                                    uVar6 = *(undefined8 *)puVar3;
                                                    *(undefined4 *)(lVar5 + 0x18) = 0;
                                                    *(undefined8 *)(lVar5 + 0x20) = uVar6;
                                                    lVar4 = thunk_FUN_02cea894(*unaff_x26);
                                                                                                        
                                                  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                                                            (lVar4,*(undefined8 *)PTR_DAT_065c9440);
                                                  if (lVar4 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  System_Collections_Generic_IReadOnlyCollection<int>_TypeInfo
                                                  ;
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  lVar8 = *(long *)PTR_DAT_065c9448;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                    }
                                                    else {
                                                      FUN_039683cc(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar4;
                                                  lVar4 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                                            
                                                  Zenject_StaticMemoryPool<DisposeBlock>_TypeInfo);
                                                  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                                                            (lVar4,*(undefined8 *)
                                                                                                                                        
                                                  Google_Cloud_Storage_V1_UrlSigner_StartsWith<UrlSigner_ISupportsStartsWith>_TypeInfo
                                                  );
                                                  lVar7 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                                            
                                                  System_Collections_Generic_Stack<JsonTokenizer_ContainerType>_TypeInfo
                                                  );
                                                  FUN_05e661f4(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Events_UnityAction<int>_TypeInfo;
                                                  *(undefined8 *)(lVar7 + 0x10) =
                                                       *(undefined8 *)puVar2;
                                                  *(undefined8 *)(lVar7 + 0x18) = uVar6;
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x27;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar8 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar7;
                                                      }
                                                      else {
                                                        FUN_039683cc(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar4;
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x19;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x25;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x25 = uVar1 + 1;
                                                      *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar5;
                                                    }
                                                    else {
                                                      FUN_039683cc();
                                                    }
                                                    lVar5 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                                                
                                                  System_Collections_Generic_Stack<JsonValidatingReader_SchemaScope>_TypeInfo
                                                  );
                                                  FUN_05e661fc(lVar5,0);
                                                  puVar3 = Google_Protobuf_ValueReader<int>_TypeInfo
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_0662d538;
                                                    uVar6 = *(undefined8 *)puVar3;
                                                    *(undefined4 *)(lVar5 + 0x18) = 0;
                                                    *(undefined8 *)(lVar5 + 0x20) = uVar6;
                                                    lVar4 = thunk_FUN_02cea894(*unaff_x26);
                                                                                                        
                                                  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                                                            (lVar4,*(undefined8 *)PTR_DAT_065c9440);
                                                  if (lVar4 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  System_Collections_Generic_IReadOnlyCollection<OVRSpaceUser>_TypeInfo
                                                  ;
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  lVar8 = *(long *)PTR_DAT_065c9448;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                    }
                                                    else {
                                                      FUN_039683cc(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar4;
                                                  lVar4 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                                            
                                                  Zenject_StaticMemoryPool<DisposeBlock>_TypeInfo);
                                                  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                                                            (lVar4,*(undefined8 *)
                                                                                                                                        
                                                  Google_Cloud_Storage_V1_UrlSigner_StartsWith<UrlSigner_ISupportsStartsWith>_TypeInfo
                                                  );
                                                  lVar7 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                                            
                                                  System_Collections_Generic_Stack<JsonTokenizer_ContainerType>_TypeInfo
                                                  );
                                                  FUN_05e661f4(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_UxmlTypeAttributeDescription<Enum>_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar7 + 0x10) =
                                                       *(undefined8 *)puVar2;
                                                  *(undefined8 *)(lVar7 + 0x18) = uVar6;
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x27;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar8 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar7;
                                                      }
                                                      else {
                                                        FUN_039683cc(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar4;
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x19;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x25;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x25 = uVar1 + 1;
                                                      *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar5;
                                                    }
                                                    else {
                                                      FUN_039683cc();
                                                    }
                                                    lVar5 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                                                
                                                  System_Collections_Generic_Stack<JsonValidatingReader_SchemaScope>_TypeInfo
                                                  );
                                                  FUN_05e661fc(lVar5,0);
                                                  puVar3 = 
                                                  UnityEngine_UIElements_UxmlEnumAttributeDescription<CollectionVirtualizationMethod>_TypeInfo
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_0662d520;
                                                    uVar6 = *(undefined8 *)puVar3;
                                                    *(undefined4 *)(lVar5 + 0x18) = 2;
                                                    *(undefined8 *)(lVar5 + 0x20) = uVar6;
                                                    lVar4 = thunk_FUN_02cea894(*unaff_x26);
                                                                                                        
                                                  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                                                            (lVar4,*(undefined8 *)PTR_DAT_065c9440);
                                                  if (lVar4 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  System_Collections_Generic_IReadOnlyCollection<InputDevice>_TypeInfo
                                                  ;
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  lVar8 = *(long *)PTR_DAT_065c9448;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                    }
                                                    else {
                                                      FUN_039683cc(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar4;
                                                  lVar4 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                                            
                                                  Zenject_StaticMemoryPool<DisposeBlock>_TypeInfo);
                                                  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                                                            (lVar4,*(undefined8 *)
                                                                                                                                        
                                                  Google_Cloud_Storage_V1_UrlSigner_StartsWith<UrlSigner_ISupportsStartsWith>_TypeInfo
                                                  );
                                                  lVar7 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                                            
                                                  System_Collections_Generic_Stack<JsonTokenizer_ContainerType>_TypeInfo
                                                  );
                                                  FUN_05e661f4(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Events_UnityEvent<MRUKRoom>_TypeInfo;
                                                  *(undefined8 *)(lVar7 + 0x10) =
                                                       *(undefined8 *)puVar2;
                                                  *(undefined8 *)(lVar7 + 0x18) = uVar6;
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x27;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar8 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar7;
                                                      }
                                                      else {
                                                        FUN_039683cc(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar4;
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x19;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x25;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x25 = uVar1 + 1;
                                                      *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar5;
                                                    }
                                                    else {
                                                      FUN_039683cc();
                                                    }
                                                    lVar5 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                                                
                                                  System_Collections_Generic_Stack<JsonValidatingReader_SchemaScope>_TypeInfo
                                                  );
                                                  FUN_05e661fc(lVar5,0);
                                                  puVar3 = UnityEngine_ContactPoint2D___TypeInfo;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Reflection_ConstructorInfo___TypeInfo;
                                                  uVar6 = *(undefined8 *)puVar3;
                                                  *(undefined4 *)(lVar5 + 0x18) = 1;
                                                  *(undefined8 *)(lVar5 + 0x20) = uVar6;
                                                  lVar4 = thunk_FUN_02cea894(*unaff_x26);
                                                  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                                                            (lVar4,*(undefined8 *)PTR_DAT_065c9440);
                                                  if (lVar4 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                             UnityEngine_CubemapFace___TypeInfo;
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    lVar8 = *(long *)PTR_DAT_065c9448;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar7 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar7 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar6;
                                                      }
                                                      else {
                                                        FUN_039683cc(lVar4,uVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar4;
                                                  lVar4 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                                            
                                                  Zenject_StaticMemoryPool<DisposeBlock>_TypeInfo);
                                                  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                                                            (lVar4,*(undefined8 *)
                                                                                                                                        
                                                  Google_Cloud_Storage_V1_UrlSigner_StartsWith<UrlSigner_ISupportsStartsWith>_TypeInfo
                                                  );
                                                  lVar7 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                                            
                                                  System_Collections_Generic_Stack<JsonTokenizer_ContainerType>_TypeInfo
                                                  );
                                                  FUN_05e661f4(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                             System_Data_DataColumn___TypeInfo;
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)puVar2;
                                                    *(undefined8 *)(lVar7 + 0x18) = uVar6;
                                                    if (lVar4 != 0) {
                                                      lVar8 = *(long *)(lVar4 + 0x10);
                                                      lVar9 = *unaff_x27;
                                                      *(int *)(lVar4 + 0x1c) =
                                                           *(int *)(lVar4 + 0x1c) + 1;
                                                      if (lVar8 != 0) {
                                                        uVar1 = *(uint *)(lVar4 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                          *(long *)(lVar8 + (long)(int)uVar1 * 8 +
                                                                   0x20) = lVar7;
                                                        }
                                                        else {
                                                          FUN_039683cc(lVar4,lVar7,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar9 +
                                                                                            0x20) +
                                                                                  0xc0) + 0x70));
                                                        }
                                                        *(long *)(lVar5 + 0x28) = lVar4;
                                                        *unaff_x21 = *unaff_x21 + 1;
                                                        lVar4 = *unaff_x19;
                                                        if (lVar4 != 0) {
                                                          uVar1 = *unaff_x25;
                                                          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                            *unaff_x25 = uVar1 + 1;
                                                            *(long *)(lVar4 + (long)(int)uVar1 * 8 +
                                                                     0x20) = lVar5;
                                                          }
                                                          else {
                                                            FUN_039683cc();
                                                          }
                                                          lVar5 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                                                            
                                                  System_Collections_Generic_Stack<JsonValidatingReader_SchemaScope>_TypeInfo
                                                  );
                                                  FUN_05e661fc(lVar5,0);
                                                  puVar3 = 
                                                  UnityEngine_Events_UnityEvent<MRUKAnchor>_TypeInfo
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_0662d518;
                                                    uVar6 = *(undefined8 *)puVar3;
                                                    *(undefined4 *)(lVar5 + 0x18) = 0;
                                                    *(undefined8 *)(lVar5 + 0x20) = uVar6;
                                                    lVar4 = thunk_FUN_02cea894(*unaff_x26);
                                                                                                        
                                                  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                                                            (lVar4,*(undefined8 *)PTR_DAT_065c9440);
                                                  if (lVar4 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  System_Collections_Generic_IReadOnlyCollection<Guid>_TypeInfo
                                                  ;
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  lVar8 = *(long *)PTR_DAT_065c9448;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                    }
                                                    else {
                                                      FUN_039683cc(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar4;
                                                  lVar4 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                                            
                                                  Zenject_StaticMemoryPool<DisposeBlock>_TypeInfo);
                                                  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                                                            (lVar4,*(undefined8 *)
                                                                                                                                        
                                                  Google_Cloud_Storage_V1_UrlSigner_StartsWith<UrlSigner_ISupportsStartsWith>_TypeInfo
                                                  );
                                                  lVar7 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                                            
                                                  System_Collections_Generic_Stack<JsonTokenizer_ContainerType>_TypeInfo
                                                  );
                                                  FUN_05e661f4(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_UIElements_UxmlEnumAttributeDescription<PickingMode>_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar7 + 0x10) =
                                                       *(undefined8 *)puVar2;
                                                  *(undefined8 *)(lVar7 + 0x18) = uVar6;
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x27;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar8 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar7;
                                                      }
                                                      else {
                                                        FUN_039683cc(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar4;
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x19;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x25;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x25 = uVar1 + 1;
                                                      *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar5;
                                                    }
                                                    else {
                                                      FUN_039683cc();
                                                    }
                                                    lVar5 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                                                
                                                  System_Collections_Generic_Stack<JsonValidatingReader_SchemaScope>_TypeInfo
                                                  );
                                                  FUN_05e661fc(lVar5,0);
                                                  puVar3 = 
                                                  System_Net_Http_Headers_TryParseListDelegate<WarningHeaderValue>_TypeInfo
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Net_Http_Headers_TryParseListDelegate<StringWithQualityHeaderValue>_TypeInfo
                                                  ;
                                                  uVar6 = *(undefined8 *)puVar3;
                                                  *(undefined4 *)(lVar5 + 0x18) = 3;
                                                  *(undefined8 *)(lVar5 + 0x20) = uVar6;
                                                  lVar4 = thunk_FUN_02cea894(*unaff_x26);
                                                  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                                                            (lVar4,*(undefined8 *)PTR_DAT_065c9440);
                                                  if (lVar4 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  System_Net_Http_Headers_TryParseDelegate<MediaTypeHeaderValue>_TypeInfo
                                                  ;
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  lVar8 = *(long *)PTR_DAT_065c9448;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                    }
                                                    else {
                                                      FUN_039683cc(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar4;
                                                  lVar4 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                                            
                                                  Zenject_StaticMemoryPool<DisposeBlock>_TypeInfo);
                                                  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                                                            (lVar4,*(undefined8 *)
                                                                                                                                        
                                                  Google_Cloud_Storage_V1_UrlSigner_StartsWith<UrlSigner_ISupportsStartsWith>_TypeInfo
                                                  );
                                                  lVar7 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                                            
                                                  System_Collections_Generic_Stack<JsonTokenizer_ContainerType>_TypeInfo
                                                  );
                                                  FUN_05e661f4(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                             System_Tuple<Guid,_string>_TypeInfo;
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)puVar2;
                                                    *(undefined8 *)(lVar7 + 0x18) = uVar6;
                                                    if (lVar4 != 0) {
                                                      lVar8 = *(long *)(lVar4 + 0x10);
                                                      lVar9 = *unaff_x27;
                                                      *(int *)(lVar4 + 0x1c) =
                                                           *(int *)(lVar4 + 0x1c) + 1;
                                                      if (lVar8 != 0) {
                                                        uVar1 = *(uint *)(lVar4 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                          *(long *)(lVar8 + (long)(int)uVar1 * 8 +
                                                                   0x20) = lVar7;
                                                        }
                                                        else {
                                                          FUN_039683cc(lVar4,lVar7,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar9 +
                                                                                            0x20) +
                                                                                  0xc0) + 0x70));
                                                        }
                                                        *(long *)(lVar5 + 0x28) = lVar4;
                                                        *unaff_x21 = *unaff_x21 + 1;
                                                        lVar4 = *unaff_x19;
                                                        if (lVar4 != 0) {
                                                          uVar1 = *unaff_x25;
                                                          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                            *unaff_x25 = uVar1 + 1;
                                                            *(long *)(lVar4 + (long)(int)uVar1 * 8 +
                                                                     0x20) = lVar5;
                                                          }
                                                          else {
                                                            FUN_039683cc();
                                                          }
                                                          lVar5 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                                                            
                                                  System_Collections_Generic_Stack<JsonValidatingReader_SchemaScope>_TypeInfo
                                                  );
                                                  FUN_05e661fc(lVar5,0);
                                                  puVar3 = 
                                                  System_Net_Http_Headers_TryParseListDelegate<ProductHeaderValue>_TypeInfo
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_065f6950;
                                                    uVar6 = *(undefined8 *)puVar3;
                                                    *(undefined4 *)(lVar5 + 0x18) = 3;
                                                    *(undefined8 *)(lVar5 + 0x20) = uVar6;
                                                    lVar4 = thunk_FUN_02cea894(*unaff_x26);
                                                                                                        
                                                  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                                                            (lVar4,*(undefined8 *)PTR_DAT_065c9440);
                                                  if (lVar4 != 0) {
                                                    uVar6 = *(undefined8 *)PTR_DAT_06630e48;
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    lVar8 = *(long *)PTR_DAT_065c9448;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar7 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar7 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar6;
                                                      }
                                                      else {
                                                        FUN_039683cc(lVar4,uVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar4;
                                                  lVar4 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                                            
                                                  Zenject_StaticMemoryPool<DisposeBlock>_TypeInfo);
                                                  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                                                            (lVar4,*(undefined8 *)
                                                                                                                                        
                                                  Google_Cloud_Storage_V1_UrlSigner_StartsWith<UrlSigner_ISupportsStartsWith>_TypeInfo
                                                  );
                                                  lVar7 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                                            
                                                  System_Collections_Generic_Stack<JsonTokenizer_ContainerType>_TypeInfo
                                                  );
                                                  FUN_05e661f4(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  System_Net_Http_Headers_TryParseListDelegate<TransferCodingWithQualityHeaderValue>_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar7 + 0x10) =
                                                       *(undefined8 *)puVar2;
                                                  *(undefined8 *)(lVar7 + 0x18) = uVar6;
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x27;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar8 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar7;
                                                      }
                                                      else {
                                                        FUN_039683cc(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar4;
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x19;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x25;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x25 = uVar1 + 1;
                                                      *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar5;
                                                    }
                                                    else {
                                                      FUN_039683cc();
                                                    }
                                                    lVar5 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                                                
                                                  System_Collections_Generic_Stack<JsonValidatingReader_SchemaScope>_TypeInfo
                                                  );
                                                  FUN_05e661fc(lVar5,0);
                                                  puVar3 = 
                                                  UnityEngine_Events_UnityAction<MessageEventArgs>_TypeInfo
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Events_UnityAction<AtlasAllocator_AtlasNode>_TypeInfo
                                                  ;
                                                  uVar6 = *(undefined8 *)puVar3;
                                                  *(undefined4 *)(lVar5 + 0x18) = 4;
                                                  *(undefined8 *)(lVar5 + 0x20) = uVar6;
                                                  lVar4 = thunk_FUN_02cea894(*unaff_x26);
                                                  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                                                            (lVar4,*(undefined8 *)PTR_DAT_065c9440);
                                                  if (lVar4 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Google_Protobuf_Collections_RepeatedField<TelemetryValue>_TypeInfo
                                                  ;
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  lVar8 = *(long *)PTR_DAT_065c9448;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                    }
                                                    else {
                                                      FUN_039683cc(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar4;
                                                  lVar4 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                                            
                                                  Zenject_StaticMemoryPool<DisposeBlock>_TypeInfo);
                                                  System_Collections_Generic_List<FingerFeatureStateProvider_FingerStateThresholds>__BinarySearch
                                                            (lVar4,*(undefined8 *)
                                                                                                                                        
                                                  Google_Cloud_Storage_V1_UrlSigner_StartsWith<UrlSigner_ISupportsStartsWith>_TypeInfo
                                                  );
                                                  lVar7 = thunk_FUN_02cea894(*(undefined8 *)
                                                                                                                                                            
                                                  System_Collections_Generic_Stack<JsonTokenizer_ContainerType>_TypeInfo
                                                  );
                                                  FUN_05e661f4(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  UnityEngine_Events_UnityAction<HoverEnterEventArgs>_TypeInfo
                                                  ;
                                                  *(undefined8 *)(lVar7 + 0x10) =
                                                       *(undefined8 *)puVar2;
                                                  *(undefined8 *)(lVar7 + 0x18) = uVar6;
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x27;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        *(long *)(lVar8 + (long)(int)uVar1 * 8 +
                                                                 0x20) = lVar7;
                                                      }
                                                      else {
                                                        FUN_039683cc(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar4;
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar4 = *unaff_x19;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *unaff_x25;
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *unaff_x25 = uVar1 + 1;
                                                      *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20)
                                                           = lVar5;
                                                    }
                                                    else {
                                                      FUN_039683cc();
                                                    }
                                                    *(undefined8 *)(in_stack_00000000 + 0x28) =
                                                         unaff_x29;
                                                    FUN_05e65fdc(in_stack_00000008,in_stack_00000000
                                                                 ,0);
                                                    return;
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
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


