/*
FUNCTION_NAME: FUN_0554ba84
ENTRY_POINT: 0554ba84
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;telemetry_or_network_hits_5;frame_or_lifecycle_behavior
*/


void FUN_0554ba84(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar1 = PTR_DAT_06313630;
  if ((DAT_066d14ea & 1) == 0) {
    FUN_02b3c81c(Method_Oculus_Platform_Models_DeserializableList<User>_get_NextUrl__);
    FUN_02b3c81c(PTR_DAT_06313630);
    FUN_02b3c81c(Method_Oculus_Platform_Models_DeserializableList<UserCapability>__ctor__);
    FUN_02b3c81c(Method_Oculus_Platform_Models_DeserializableList<UserCapability>_get_HasNextPage__)
    ;
    FUN_02b3c81c(Method_Oculus_Platform_Models_DeserializableList<UserCapability>_get_NextUrl__);
    FUN_02b3c81c(Method_Firebase_Firestore_Converters_DictionaryConverter<bool>__ctor__);
    FUN_02b3c81c(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909_PostfixBurstDelegate_TypeInfo
                );
    FUN_02b3c81c(Method_Firebase_Firestore_Converters_DictionaryConverter<byte>__ctor__);
    FUN_02b3c81c(Method_Firebase_Firestore_Converters_DictionaryConverter<double>__ctor__);
    FUN_02b3c81c(RootMotion_FinalIK_GenericPoser_Map_TypeInfo);
    FUN_02b3c81c(Method_Firebase_Firestore_Converters_DictionaryConverter<short>__ctor__);
    FUN_02b3c81c(Method_Firebase_Firestore_Converters_DictionaryConverter<int>__ctor__);
    FUN_02b3c81c(Method_Firebase_Firestore_Converters_DictionaryConverter<long>__ctor__);
    FUN_02b3c81c(Method_Meta_XR_ImmersiveDebugger_Manager_DebugManagerAddon<Manager>__ctor__);
    FUN_02b3c81c(Method_Meta_XR_ImmersiveDebugger_Manager_DebugManagerAddon<Manager>_get_Instance__)
    ;
    FUN_02b3c81c(Method_Oculus_Interaction_DebugTree_DebugTreeUI<IActiveState>__ctor__);
    FUN_02b3c81c(Method_Firebase_Firestore_Converters_DictionaryConverter<object>__ctor__);
    FUN_02b3c81c(Method_Firebase_Firestore_Converters_DictionaryConverter<sbyte>__ctor__);
    FUN_02b3c81c(Method_Firebase_Firestore_Converters_DictionaryConverter<float>__ctor__);
    FUN_02b3c81c(Method_Oculus_Interaction_Input_DataModifier<HmdDataAsset>__ctor__);
    FUN_02b3c81c(Method_UnityEngine_Rendering_UI_DebugUIHandlerField<DebugUI_EnumField>__ctor__);
    FUN_02b3c81c(Method_Firebase_Firestore_Converters_DictionaryConverter<ushort>__ctor__);
    FUN_02b3c81c(Method_Oculus_Interaction_Input_DataModifier<HandDataAsset>_Start__);
    FUN_02b3c81c(Method_UnityEngine_Rendering_UI_DebugUIHandlerField<DebugUI_EnumField>_SetWidget__)
    ;
    FUN_02b3c81c(Method_Firebase_Firestore_Converters_DictionaryConverter<uint>__ctor__);
    FUN_02b3c81c(DG_Tweening_ShortcutExtensions_<>c__DisplayClass2_0_TypeInfo);
    FUN_02b3c81c(UnityEngine_Rendering_BitArray16_TypeInfo);
    FUN_02b3c81c(Method_Firebase_Firestore_Converters_DictionaryConverter<ulong>__ctor__);
    FUN_02b3c81c(Method_OVRObjectPool_DictionaryScope<Guid,_OVRAnchor>__ctor__);
    FUN_02b3c81c(PTR_DAT_063296d0);
    FUN_02b3c81c(Method_OVRObjectPool_DictionaryScope<Guid,_OVRAnchor>_Dispose__);
    FUN_02b3c81c(Unity_Properties_ContainerPropertyBag<Version>_TypeInfo);
    FUN_02b3c81c(PTR_DAT_063234c0);
    FUN_02b3c81c(
                Method_OVRObjectPool_DictionaryScope<OVRAnchor,_OVRSceneManager_RoomLayoutUuids>__ctor__
                );
    FUN_02b3c81c(
                Method_OVRObjectPool_DictionaryScope<OVRAnchor,_OVRSceneManager_RoomLayoutUuids>_Dispose__
                );
    FUN_02b3c81c(
                Method_UnityEngine_Rendering_UI_DebugUIHandlerField<DebugUI_ObjectPopupField>_SetLabelText__
                );
    FUN_02b3c81c(
                Method_System_Collections_Generic_Dictionary<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>__ctor__
                );
    DAT_066d14ea = 1;
  }
  lVar7 = FUN_02b3c908(*(undefined8 *)puVar1,0x11);
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x18) != 0) {
      *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)UnityEngine_Rendering_BitArray16_TypeInfo;
      thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x20));
      if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar7 + 0x28) =
             *(undefined8 *)
              Method_OVRObjectPool_DictionaryScope<OVRAnchor,_OVRSceneManager_RoomLayoutUuids>_Dispose__
        ;
        thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x28));
        if (2 < *(uint *)(lVar7 + 0x18)) {
          *(undefined8 *)(lVar7 + 0x30) =
               *(undefined8 *)Method_Firebase_Firestore_Converters_DictionaryConverter<int>__ctor__;
          thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x30));
          if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar7 + 0x38) =
                 *(undefined8 *)
                  Method_Firebase_Firestore_Converters_DictionaryConverter<ulong>__ctor__;
            thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x38));
            puVar2 = 
            Method_System_Collections_Generic_Dictionary<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>__ctor__
            ;
            if (4 < *(uint *)(lVar7 + 0x18)) {
              *(undefined8 *)(lVar7 + 0x40) =
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>__ctor__
              ;
              thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x40));
              if (5 < *(uint *)(lVar7 + 0x18)) {
                *(undefined8 *)(lVar7 + 0x48) = *(undefined8 *)puVar2;
                thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x48));
                puVar2 = RootMotion_FinalIK_GenericPoser_Map_TypeInfo;
                if (6 < *(uint *)(lVar7 + 0x18)) {
                  *(undefined8 *)(lVar7 + 0x50) =
                       *(undefined8 *)RootMotion_FinalIK_GenericPoser_Map_TypeInfo;
                  thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x50));
                  if ((*(uint *)(lVar7 + 0x18) & 0xfffffff8) != 0) {
                    *(undefined8 *)(lVar7 + 0x58) =
                         *(undefined8 *)
                          Method_Firebase_Firestore_Converters_DictionaryConverter<byte>__ctor__;
                    thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x58));
                    if (8 < *(uint *)(lVar7 + 0x18)) {
                      *(undefined8 *)(lVar7 + 0x60) = *(undefined8 *)puVar2;
                      thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x60));
                      if (9 < *(uint *)(lVar7 + 0x18)) {
                        *(undefined8 *)(lVar7 + 0x68) =
                             *(undefined8 *)
                              Method_OVRObjectPool_DictionaryScope<Guid,_OVRAnchor>_Dispose__;
                        thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x68));
                        if (10 < *(uint *)(lVar7 + 0x18)) {
                          *(undefined8 *)(lVar7 + 0x70) =
                               *(undefined8 *)
                                Method_OVRObjectPool_DictionaryScope<Guid,_OVRAnchor>__ctor__;
                          thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x70));
                          if (0xb < *(uint *)(lVar7 + 0x18)) {
                            *(undefined8 *)(lVar7 + 0x78) =
                                 *(undefined8 *)
                                  Method_Firebase_Firestore_Converters_DictionaryConverter<sbyte>__ctor__
                            ;
                            thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x78));
                            if (0xc < *(uint *)(lVar7 + 0x18)) {
                              *(undefined8 *)(lVar7 + 0x80) =
                                   *(undefined8 *)
                                    Method_OVRObjectPool_DictionaryScope<OVRAnchor,_OVRSceneManager_RoomLayoutUuids>__ctor__
                              ;
                              thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x80));
                              if (0xd < *(uint *)(lVar7 + 0x18)) {
                                *(undefined8 *)(lVar7 + 0x88) =
                                     *(undefined8 *)
                                      Method_Firebase_Firestore_Converters_DictionaryConverter<double>__ctor__
                                ;
                                thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x88));
                                if (0xe < *(uint *)(lVar7 + 0x18)) {
                                  *(undefined8 *)(lVar7 + 0x90) =
                                       *(undefined8 *)
                                        Method_Firebase_Firestore_Converters_DictionaryConverter<float>__ctor__
                                  ;
                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x90));
                                  if ((*(uint *)(lVar7 + 0x18) & 0xfffffff0) != 0) {
                    /* try { // try from 0554bed8 to 0564c0ef has its CatchHandler @ 0554bed8
                       catch() { ... } // from try @ 0554bed8 with catch @ 0554bed8
                       catch() { ... } // from try @ 0554c114 with catch @ 0554bed8
                       catch() { ... } // from try @ 0554c184 with catch @ 0554bed8
                       catch() { ... } // from try @ 0554c1b0 with catch @ 0554bed8
                       catch() { ... } // from try @ 0554c1dc with catch @ 0554bed8 */
                                    *(undefined8 *)(lVar7 + 0x98) =
                                         *(undefined8 *)
                                          Unity_Properties_ContainerPropertyBag<Version>_TypeInfo;
                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x98));
                                    puVar2 = 
                                    UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909_PostfixBurstDelegate_TypeInfo
                                    ;
                                    if (0x10 < *(uint *)(lVar7 + 0x18)) {
                                      *(undefined8 *)(lVar7 + 0xa0) =
                                           *(undefined8 *)PTR_DAT_063234c0;
                                      thunk_FUN_02bb0e9c();
                                      **(long **)(*(long *)puVar2 + 0xb8) = lVar7;
                                      thunk_FUN_02bb0e9c(*(undefined8 *)(*(long *)puVar2 + 0xb8),
                                                         lVar7);
                                      lVar7 = FUN_02b3c908(*(undefined8 *)puVar1,0xf);
                                      if (lVar7 == 0) goto LAB_0554c278;
                                      if (*(int *)(lVar7 + 0x18) != 0) {
                                        *(undefined8 *)(lVar7 + 0x20) =
                                             *(undefined8 *)
                                              Method_Firebase_Firestore_Converters_DictionaryConverter<uint>__ctor__
                                        ;
                                        thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x20));
                                        if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) != 0) {
                                          *(undefined8 *)(lVar7 + 0x28) =
                                               *(undefined8 *)
                                                Method_Firebase_Firestore_Converters_DictionaryConverter<ushort>__ctor__
                                          ;
                                          thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x28));
                                          if (2 < *(uint *)(lVar7 + 0x18)) {
                                            *(undefined8 *)(lVar7 + 0x30) =
                                                 *(undefined8 *)
                                                  Method_Oculus_Interaction_Input_DataModifier<HandDataAsset>_Start__
                                            ;
                                            thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x30));
                                            if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) != 0) {
                                              *(undefined8 *)(lVar7 + 0x38) =
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_Oculus_Interaction_Input_DataModifier<HmdDataAsset>__ctor__
                                              ;
                                              thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x38));
                                              if (4 < *(uint *)(lVar7 + 0x18)) {
                                                *(undefined8 *)(lVar7 + 0x40) =
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_Firebase_Firestore_Converters_DictionaryConverter<short>__ctor__
                                                ;
                                                thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x40));
                                                if (5 < *(uint *)(lVar7 + 0x18)) {
                                                  *(undefined8 *)(lVar7 + 0x48) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_UnityEngine_Rendering_UI_DebugUIHandlerField<DebugUI_EnumField>_SetWidget__
                                                  ;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x48));
                                                  if (6 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x50) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  DG_Tweening_ShortcutExtensions_<>c__DisplayClass2_0_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x50));
                                                  if ((*(uint *)(lVar7 + 0x18) & 0xfffffff8) != 0) {
                                                    *(undefined8 *)(lVar7 + 0x58) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_DebugTree_DebugTreeUI<IActiveState>__ctor__
                                                  ;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x58));
                                                  if (8 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x60) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Meta_XR_ImmersiveDebugger_Manager_DebugManagerAddon<Manager>_get_Instance__
                                                  ;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x60));
                                                  if (9 < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x68) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Firebase_Firestore_Converters_DictionaryConverter<long>__ctor__
                                                  ;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x68));
                                                  if (10 < *(uint *)(lVar7 + 0x18)) {
                    /* try { // try from 0554c0f0 to 0564c0f7 has its CatchHandler @ 0554c190 */
                                                    *(undefined8 *)(lVar7 + 0x70) =
                                                         *(undefined8 *)PTR_DAT_063296d0;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x70))
                                                    ;
                                                    if (0xb < *(uint *)(lVar7 + 0x18)) {
                    /* try { // try from 0554c10c to 0564c113 has its CatchHandler @ 0554c18c */
                    /* try { // try from 0554c114 to 0564c17f has its CatchHandler @ 0554bed8 */
                                                      *(undefined8 *)(lVar7 + 0x78) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  Method_Firebase_Firestore_Converters_DictionaryConverter<object>__ctor__
                                                  ;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x78));
                                                  if (0xc < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x80) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Rendering_UI_DebugUIHandlerField<DebugUI_EnumField>__ctor__
                                                  ;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x80));
                                                  if (0xd < *(uint *)(lVar7 + 0x18)) {
                                                    *(undefined8 *)(lVar7 + 0x88) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Rendering_UI_DebugUIHandlerField<DebugUI_ObjectPopupField>_SetLabelText__
                                                  ;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x88));
                                                  puVar6 = 
                                                  Method_Firebase_Firestore_Converters_DictionaryConverter<bool>__ctor__
                                                  ;
                                                  puVar5 = 
                                                  Method_Oculus_Platform_Models_DeserializableList<UserCapability>_get_NextUrl__
                                                  ;
                                                  puVar4 = 
                                                  Method_Oculus_Platform_Models_DeserializableList<UserCapability>_get_HasNextPage__
                                                  ;
                                                  puVar3 = 
                                                  Method_Oculus_Platform_Models_DeserializableList<UserCapability>__ctor__
                                                  ;
                                                  puVar1 = 
                                                  Method_Oculus_Platform_Models_DeserializableList<User>_get_NextUrl__
                                                  ;
                                                  if (0xe < *(uint *)(lVar7 + 0x18)) {
                    /* try { // try from 0554c180 to 0564c183 has its CatchHandler @ 0554c188 */
                    /* try { // try from 0554c184 to 0564c1ab has its CatchHandler @ 0554bed8 */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 0554c180 with catch @ 0554c188
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 0554c10c with catch @ 0554c18c
                        */
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 0554c0f0 with catch @ 0554c190
                        */
                    /* try { // try from 0554c1ac to 0564c1af has its CatchHandler @ 0554c1d0 */
                    /* try { // try from 0554c1b0 to 0564c1d3 has its CatchHandler @ 0554bed8 */
                                                    *(undefined8 *)(lVar7 + 0x90) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Meta_XR_ImmersiveDebugger_Manager_DebugManagerAddon<Manager>__ctor__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  plVar8 = (long *)(*(long *)(*(long *)puVar2 + 0xb8
                                                                             ) + 8);
                                                  *plVar8 = lVar7;
                    /* catch() { ... } // from try @ 0554c1ac with catch @ 0554c1d0 */
                                                  thunk_FUN_02bb0e9c(plVar8,lVar7);
                    /* try { // try from 0554c1d4 to 0564c1db has its CatchHandler @ 0554c1e4 */
                    /* try { // try from 0554c1dc to 0564c1e7 has its CatchHandler @ 0554bed8 */
                                                  uVar9 = FUN_02b3c908(*(undefined8 *)puVar6,0x11);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0554c1d4 with catch @ 0554c1e4
                        */
                                                  FUN_04cac0f0(uVar9,*(undefined8 *)puVar4,0);
                                                  puVar10 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar2 + 0xb8) +
                                                            0x10);
                                                  *puVar10 = uVar9;
                                                  thunk_FUN_02bb0e9c(puVar10,uVar9);
                                                  uVar9 = FUN_02b3c908(*(undefined8 *)puVar1,0xf0);
                                                  FUN_04cac0f0(uVar9,*(undefined8 *)puVar5,0);
                                                  puVar10 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar2 + 0xb8) +
                                                            0x18);
                                                  *puVar10 = uVar9;
                                                  thunk_FUN_02bb0e9c(puVar10,uVar9);
                                                  uVar9 = FUN_02b3c908(*(undefined8 *)puVar1,0xf0);
                                                  FUN_04cac0f0(uVar9,*(undefined8 *)puVar3,0);
                                                  puVar10 = (undefined8 *)
                                                            (*(long *)(*(long *)puVar2 + 0xb8) +
                                                            0x20);
                                                  *puVar10 = uVar9;
                                                  thunk_FUN_02bb0e9c(puVar10,uVar9);
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
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
LAB_0554c278:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


