/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$SetPropertyValue
ENTRY_POINT: 0177f46c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetPropertyValue(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  uint uVar14;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>__ctor__);
  thunk_FUN_00d48444(Method_System_Data_SqlTypes_SqlMoney_CompareTo__);
  thunk_FUN_00d48444(Method_UnityEngine_Playables_ScriptPlayable<SubtitleBehavior>_Create__);
  thunk_FUN_00d48444(StringLiteral_5882);
  thunk_FUN_00d48444(StringLiteral_13524);
  thunk_FUN_00d48444(StringLiteral_12076);
  thunk_FUN_00d48444(StringLiteral_5732);
  thunk_FUN_00d48444(Method_System_Array_Empty<Exception>__);
  thunk_FUN_00d48444(Method_System_ReadOnlyMemory<char>__ctor__);
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqrshl_u8__);
  thunk_FUN_00d48444(Method_Meta_Voice_Audio_Decoding_AudioDecoderWav_SubArrayEquals<byte>__);
  thunk_FUN_00d48444(
                    Method_Unity_XR_CoreUtils_Datums_DatumProperty<Vector4AffordanceTheme,_Vector4AffordanceThemeDatum>__ctor__
                    );
  thunk_FUN_00d48444(PTR_DAT_033f3130);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<XmlSchemaElement>__ctor__);
  thunk_FUN_00d48444(StringLiteral_7823);
  thunk_FUN_00d48444(Method_System_Collections_Generic_KeyValuePair<int,_Panel>_get_Value__);
  thunk_FUN_00d48444(Method_Unity_Collections_NativeArray_Enumerator<MeshTransform>_get_Current__);
  thunk_FUN_00d48444(StringLiteral_13435);
  thunk_FUN_00d48444(Method_STMRubyText_Event__);
  thunk_FUN_00d48444(
                    Method_Oculus_Interaction_Interactor<RayInteractor,_RayInteractable>_set_Selector__
                    );
  thunk_FUN_00d48444(StringLiteral_13298);
  thunk_FUN_00d48444(StringLiteral_12159);
  thunk_FUN_00d48444(PTR_DAT_033f6468);
  thunk_FUN_00d48444(Mono_Security_Cryptography_PKCS8_EncryptedPrivateKeyInfo_TypeInfo);
  thunk_FUN_00d48444(System_Collections_Generic_HashSet<int>_TypeInfo);
  thunk_FUN_00d48444(PTR_DAT_033f1ae0);
  thunk_FUN_00d48444(PTR_DAT_033ee480);
  thunk_FUN_00d48444(
                    Method_UnityEngine_XR_ARSubsystems_SerializableDictionary<string,_byte[]>_Serialize__
                    );
  thunk_FUN_00d48444(TMPro_TMP_CharacterInfo___TypeInfo);
  thunk_FUN_00d48444(TMPro_TMP_FontAsset_<>c_TypeInfo);
  thunk_FUN_00d48444(StringLiteral_4062);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<SimpleTuple<int,_int>>_Add__);
  thunk_FUN_00d48444(System_Resources_ResourceManager_TypeInfo);
  thunk_FUN_00d48444(StringLiteral_3923);
  *(undefined1 *)(unaff_x19 + 0xdca) = 1;
  plVar11 = (long *)FUN_00da4fb8(*unaff_x20,4);
  puVar5 = System_Resources_ResourceManager_TypeInfo;
  if (plVar11 == (long *)0x0) {
LAB_01780034:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
                    /* try { // try from 0177f62c to 0187f687 has its CatchHandler @ 0177f62c
                       catch() { ... } // from try @ 0177f62c with catch @ 0177f62c
                       catch() { ... } // from try @ 0177f738 with catch @ 0177f62c
                       catch() { ... } // from try @ 0177f824 with catch @ 0177f62c
                       catch() { ... } // from try @ 0177f874 with catch @ 0177f62c
                       catch() { ... } // from try @ 0177f8a8 with catch @ 0177f62c */
  if ((*(long *)System_Resources_ResourceManager_TypeInfo != 0) &&
     (lVar12 = thunk_FUN_00d6225c(*(long *)System_Resources_ResourceManager_TypeInfo,
                                  *(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0))
  goto LAB_01780028;
  puVar2 = PTR_DAT_033f3130;
  uVar14 = *(uint *)(plVar11 + 3);
  if (uVar14 != 0) {
    plVar11[4] = *(long *)puVar5;
    lVar12 = *(long *)puVar2;
    if (lVar12 != 0) {
      lVar12 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar11 + 0x40));
      if (lVar12 == 0) goto LAB_01780028;
      uVar14 = *(uint *)(plVar11 + 3);
    }
    puVar5 = Method_System_Data_SqlTypes_SqlMoney_CompareTo__;
    if (1 < uVar14) {
                    /* try { // try from 0177f688 to 0187f693 has its CatchHandler @ 0177f840 */
      plVar11[5] = *(long *)puVar2;
      lVar12 = *(long *)puVar5;
      if (lVar12 != 0) {
                    /* try { // try from 0177f69c to 0187f71f has its CatchHandler @ 0177f844 */
        lVar12 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar11 + 0x40));
        if (lVar12 == 0) goto LAB_01780028;
        uVar14 = *(uint *)(plVar11 + 3);
      }
      puVar2 = TMPro_TMP_CharacterInfo___TypeInfo;
      if (2 < uVar14) {
        plVar11[6] = *(long *)puVar5;
        lVar12 = *(long *)puVar2;
        if (lVar12 != 0) {
          lVar12 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar11 + 0x40));
          if (lVar12 == 0) goto LAB_01780028;
          uVar14 = *(uint *)(plVar11 + 3);
        }
        puVar5 = Method_System_Linq_Expressions_Interpreter_LightCompiler_CompileMember__;
        if (3 < uVar14) {
          plVar11[7] = *(long *)puVar2;
          **(long **)(*(long *)puVar5 + 0xb8) = (long)plVar11;
          plVar11 = (long *)FUN_00da4fb8(*unaff_x20,0x10);
          puVar2 = PTR_DAT_033f1ae0;
          if (plVar11 == (long *)0x0) goto LAB_01780034;
                    /* try { // try from 0177f734 to 0187f737 has its CatchHandler @ 0177f83c */
          if ((*(long *)PTR_DAT_033f1ae0 != 0) &&
             (lVar12 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033f1ae0,*(undefined8 *)(*plVar11 + 0x40)
                                         ), lVar12 == 0)) goto LAB_01780028;
          puVar1 = StringLiteral_8867;
                    /* try { // try from 0177f738 to 0187f76f has its CatchHandler @ 0177f62c */
          uVar14 = *(uint *)(plVar11 + 3);
          if (uVar14 != 0) {
            plVar11[4] = *(long *)puVar2;
            lVar12 = *(long *)puVar1;
            if (lVar12 != 0) {
              lVar12 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar11 + 0x40));
              if (lVar12 == 0) goto LAB_01780028;
              uVar14 = *(uint *)(plVar11 + 3);
            }
            puVar2 = TMPro_TMP_FontAsset_<>c_TypeInfo;
                    /* try { // try from 0177f770 to 0187f77f has its CatchHandler @ 0177f838 */
            if (1 < uVar14) {
              plVar11[5] = *(long *)puVar1;
              lVar12 = *(long *)puVar2;
              if (lVar12 != 0) {
                lVar12 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar11 + 0x40));
                if (lVar12 == 0) goto LAB_01780028;
                    /* try { // try from 0177f79c to 0187f7af has its CatchHandler @ 0177f830 */
                uVar14 = *(uint *)(plVar11 + 3);
              }
              puVar1 = 
              Method_Unity_XR_CoreUtils_Datums_DatumProperty<Vector4AffordanceTheme,_Vector4AffordanceThemeDatum>__ctor__
              ;
              if (2 < uVar14) {
                    /* try { // try from 0177f7b4 to 0187f7cf has its CatchHandler @ 0177f834 */
                plVar11[6] = *(long *)puVar2;
                lVar12 = *(long *)puVar1;
                if (lVar12 != 0) {
                  lVar12 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar11 + 0x40));
                  if (lVar12 == 0) goto LAB_01780028;
                    /* try { // try from 0177f7d0 to 0187f7df has its CatchHandler @ 0177f82c */
                  uVar14 = *(uint *)(plVar11 + 3);
                }
                puVar2 = Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>__ctor__;
                if (3 < uVar14) {
                    /* try { // try from 0177f7e0 to 0187f7eb has its CatchHandler @ 0177f828 */
                  plVar11[7] = *(long *)puVar1;
                    /* try { // try from 0177f7ec to 0187f81f has its CatchHandler @ 0177f834 */
                  lVar12 = *(long *)puVar2;
                  if (lVar12 != 0) {
                    lVar12 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar11 + 0x40));
                    if (lVar12 == 0) goto LAB_01780028;
                    uVar14 = *(uint *)(plVar11 + 3);
                  }
                  puVar1 = StringLiteral_13298;
                  if (4 < uVar14) {
                    plVar11[8] = *(long *)puVar2;
                    /* try { // try from 0177f820 to 0187f823 has its CatchHandler @ 0177f824 */
                    lVar12 = *(long *)puVar1;
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0177f820 with catch @ 0177f824
                       try { // try from 0177f824 to 0187f85b has its CatchHandler @ 0177f62c */
                    if (lVar12 != 0) {
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0177f7e0 with catch @ 0177f828
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0177f7d0 with catch @ 0177f82c
                        */
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0177f79c with catch @ 0177f830
                        */
                      lVar12 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar11 + 0x40));
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0177f7b4 with catch @ 0177f834
                       catch(type#1 @ 03274860) { ... } // from try @ 0177f7ec with catch @ 0177f834
                        */
                      if (lVar12 == 0) goto LAB_01780028;
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0177f770 with catch @ 0177f838
                        */
                      uVar14 = *(uint *)(plVar11 + 3);
                    }
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0177f734 with catch @ 0177f83c
                        */
                    puVar2 = StringLiteral_5732;
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0177f688 with catch @ 0177f840
                        */
                    if (5 < uVar14) {
                    /* catch(type#1 @ 03274860) { ... } // from try @ 0177f69c with catch @ 0177f844
                        */
                      plVar11[9] = *(long *)puVar1;
                      lVar12 = *(long *)puVar2;
                      if (lVar12 != 0) {
                    /* try { // try from 0177f85c to 0187f873 has its CatchHandler @ 0177f8a0 */
                        lVar12 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar11 + 0x40));
                        if (lVar12 == 0) goto LAB_01780028;
                        uVar14 = *(uint *)(plVar11 + 3);
                      }
                      puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqrshl_u8__;
                    /* try { // try from 0177f874 to 0187f88f has its CatchHandler @ 0177f62c */
                      if (6 < uVar14) {
                        plVar11[10] = *(long *)puVar2;
                        lVar12 = *(long *)puVar1;
                        if (lVar12 != 0) {
                    /* try { // try from 0177f890 to 0187f89f has its CatchHandler @ 0177f8a0 */
                          lVar12 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar11 + 0x40));
                          if (lVar12 == 0) goto LAB_01780028;
                    /* catch() { ... } // from try @ 0177f85c with catch @ 0177f8a0
                       catch() { ... } // from try @ 0177f890 with catch @ 0177f8a0 */
                          uVar14 = *(uint *)(plVar11 + 3);
                        }
                    /* try { // try from 0177f8a4 to 0187f8a7 has its CatchHandler @ 0177f8b0 */
                        puVar2 = System_Collections_Generic_HashSet<int>_TypeInfo;
                    /* try { // try from 0177f8a8 to 0187f8b3 has its CatchHandler @ 0177f62c */
                        if (7 < uVar14) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0177f8a4 with catch @ 0177f8b0
                        */
                          plVar11[0xb] = *(long *)puVar1;
                          lVar12 = *(long *)puVar2;
                          if (lVar12 != 0) {
                            lVar12 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar11 + 0x40));
                            if (lVar12 == 0) goto LAB_01780028;
                            uVar14 = *(uint *)(plVar11 + 3);
                          }
                          puVar1 = PTR_DAT_033ee480;
                          if (8 < uVar14) {
                            plVar11[0xc] = *(long *)puVar2;
                            lVar12 = *(long *)puVar1;
                            if (lVar12 != 0) {
                              lVar12 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar11 + 0x40));
                              if (lVar12 == 0) goto LAB_01780028;
                              uVar14 = *(uint *)(plVar11 + 3);
                            }
                            puVar2 = StringLiteral_4062;
                            if (9 < uVar14) {
                              plVar11[0xd] = *(long *)puVar1;
                              lVar12 = *(long *)puVar2;
                              if (lVar12 != 0) {
                                lVar12 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)(*plVar11 + 0x40))
                                ;
                                if (lVar12 == 0) goto LAB_01780028;
                                uVar14 = *(uint *)(plVar11 + 3);
                              }
                              puVar1 = StringLiteral_13524;
                              if (10 < uVar14) {
                                plVar11[0xe] = *(long *)puVar2;
                                lVar12 = *(long *)puVar1;
                                if (lVar12 != 0) {
                                  lVar12 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)
                                                                      (*plVar11 + 0x40));
                                  if (lVar12 == 0) goto LAB_01780028;
                                  uVar14 = *(uint *)(plVar11 + 3);
                                }
                                puVar2 = 
                                Method_System_Collections_Generic_List<XmlSchemaElement>__ctor__;
                                if (0xb < uVar14) {
                                  plVar11[0xf] = *(long *)puVar1;
                                  lVar12 = *(long *)puVar2;
                                  if (lVar12 != 0) {
                                    lVar12 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)
                                                                        (*plVar11 + 0x40));
                                    if (lVar12 == 0) goto LAB_01780028;
                                    uVar14 = *(uint *)(plVar11 + 3);
                                  }
                                  puVar1 = Method_System_Net_HttpWebRequest_GetResponse__;
                                  if (0xc < uVar14) {
                                    plVar11[0x10] = *(long *)puVar2;
                                    lVar12 = *(long *)puVar1;
                                    if (lVar12 != 0) {
                                      lVar12 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)
                                                                          (*plVar11 + 0x40));
                                      if (lVar12 == 0) goto LAB_01780028;
                                      uVar14 = *(uint *)(plVar11 + 3);
                                    }
                                    puVar2 = 
                                    Method_Meta_Voice_Audio_Decoding_AudioDecoderWav_SubArrayEquals<byte>__
                                    ;
                                    if (0xd < uVar14) {
                                      plVar11[0x11] = *(long *)puVar1;
                                      lVar12 = *(long *)puVar2;
                                      if (lVar12 != 0) {
                                        lVar12 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)
                                                                            (*plVar11 + 0x40));
                                        if (lVar12 == 0) goto LAB_01780028;
                                        uVar14 = *(uint *)(plVar11 + 3);
                                      }
                                      puVar1 = 
                                      Method_UnityEngine_XR_ARSubsystems_SerializableDictionary<string,_byte[]>_Serialize__
                                      ;
                                      if (0xe < uVar14) {
                                        plVar11[0x12] = *(long *)puVar2;
                                        lVar12 = *(long *)puVar1;
                                        if (lVar12 != 0) {
                                          lVar12 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)
                                                                              (*plVar11 + 0x40));
                                          if (lVar12 == 0) goto LAB_01780028;
                                          uVar14 = *(uint *)(plVar11 + 3);
                                        }
                                        if (0xf < uVar14) {
                                          plVar11[0x13] = *(long *)puVar1;
                                          *(long **)(*(long *)(*(long *)puVar5 + 0xb8) + 8) =
                                               plVar11;
                                          plVar11 = (long *)FUN_00da4fb8(*unaff_x20,4);
                                          puVar2 = 
                                          Mono_Security_Cryptography_PKCS8_EncryptedPrivateKeyInfo_TypeInfo
                                          ;
                                          if (plVar11 == (long *)0x0) goto LAB_01780034;
                                          if ((*(long *)
                                                Mono_Security_Cryptography_PKCS8_EncryptedPrivateKeyInfo_TypeInfo
                                               != 0) &&
                                             (lVar12 = thunk_FUN_00d6225c(*(long *)
                                                  Mono_Security_Cryptography_PKCS8_EncryptedPrivateKeyInfo_TypeInfo
                                                  ,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0))
                                          goto LAB_01780028;
                                          puVar1 = 
                                          Method_UnityEngine_Playables_ScriptPlayable<SubtitleBehavior>_Create__
                                          ;
                                          uVar14 = *(uint *)(plVar11 + 3);
                                          if (uVar14 != 0) {
                                            plVar11[4] = *(long *)puVar2;
                                            lVar12 = *(long *)puVar1;
                                            if (lVar12 != 0) {
                                              lVar12 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)
                                                                                  (*plVar11 + 0x40))
                                              ;
                                              if (lVar12 == 0) goto LAB_01780028;
                                              uVar14 = *(uint *)(plVar11 + 3);
                                            }
                                            puVar2 = 
                                            Method_UnityEngine_Component_GetComponentInParent<IXRInteractable>__
                                            ;
                                            if (1 < uVar14) {
                                              plVar11[5] = *(long *)puVar1;
                                              lVar12 = *(long *)puVar2;
                                              if (lVar12 != 0) {
                                                lVar12 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)
                                                                                    (*plVar11 + 0x40
                                                                                    ));
                                                if (lVar12 == 0) goto LAB_01780028;
                                                uVar14 = *(uint *)(plVar11 + 3);
                                              }
                                              puVar1 = StringLiteral_7823;
                                              if (2 < uVar14) {
                                                plVar11[6] = *(long *)puVar2;
                                                lVar12 = *(long *)puVar1;
                                                if (lVar12 != 0) {
                                                  lVar12 = thunk_FUN_00d6225c(lVar12,*(undefined8 *)
                                                                                      (*plVar11 +
                                                                                      0x40));
                                                  if (lVar12 == 0) goto LAB_01780028;
                                                  uVar14 = *(uint *)(plVar11 + 3);
                                                }
                                                if (3 < uVar14) {
                                                  plVar11[7] = *(long *)puVar1;
                                                  *(long **)(*(long *)(*(long *)puVar5 + 0xb8) +
                                                            0x10) = plVar11;
                                                  plVar11 = (long *)FUN_00da4fb8(*unaff_x20,0xc);
                                                  puVar2 = PTR_DAT_033f6468;
                                                  if (plVar11 == (long *)0x0) goto LAB_01780034;
                                                  if ((*(long *)PTR_DAT_033f6468 != 0) &&
                                                     (lVar12 = thunk_FUN_00d6225c(*(long *)
                                                  PTR_DAT_033f6468,*(undefined8 *)(*plVar11 + 0x40))
                                                  , lVar12 == 0)) goto LAB_01780028;
                                                  puVar1 = 
                                                  Method_System_Collections_Generic_List<SimpleTuple<int,_int>>_Add__
                                                  ;
                                                  uVar14 = *(uint *)(plVar11 + 3);
                                                  if (uVar14 != 0) {
                                                    plVar11[4] = *(long *)puVar2;
                                                    lVar12 = *(long *)puVar1;
                                                    if (lVar12 != 0) {
                                                      lVar12 = thunk_FUN_00d6225c(lVar12,*(
                                                  undefined8 *)(*plVar11 + 0x40));
                                                  if (lVar12 == 0) goto LAB_01780028;
                                                  uVar14 = *(uint *)(plVar11 + 3);
                                                  }
                                                  puVar2 = StringLiteral_5882;
                                                  if (1 < uVar14) {
                                                    plVar11[5] = *(long *)puVar1;
                                                    lVar12 = *(long *)puVar2;
                                                    if (lVar12 != 0) {
                                                      lVar12 = thunk_FUN_00d6225c(lVar12,*(
                                                  undefined8 *)(*plVar11 + 0x40));
                                                  if (lVar12 == 0) goto LAB_01780028;
                                                  uVar14 = *(uint *)(plVar11 + 3);
                                                  }
                                                  puVar1 = 
                                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOf<InputBinding>__
                                                  ;
                                                  if (2 < uVar14) {
                                                    plVar11[6] = *(long *)puVar2;
                                                    lVar12 = *(long *)puVar1;
                                                    if (lVar12 != 0) {
                                                      lVar12 = thunk_FUN_00d6225c(lVar12,*(
                                                  undefined8 *)(*plVar11 + 0x40));
                                                  if (lVar12 == 0) goto LAB_01780028;
                                                  uVar14 = *(uint *)(plVar11 + 3);
                                                  }
                                                  puVar2 = 
                                                  Method_OVRNativeList<OVRLocatable>_get_Count__;
                                                  if (3 < uVar14) {
                                                    plVar11[7] = *(long *)puVar1;
                                                    lVar12 = *(long *)puVar2;
                                                    if (lVar12 != 0) {
                                                      lVar12 = thunk_FUN_00d6225c(lVar12,*(
                                                  undefined8 *)(*plVar11 + 0x40));
                                                  if (lVar12 == 0) goto LAB_01780028;
                                                  uVar14 = *(uint *)(plVar11 + 3);
                                                  }
                                                  puVar1 = StringLiteral_12159;
                                                  if (4 < uVar14) {
                                                    plVar11[8] = *(long *)puVar2;
                                                    lVar12 = *(long *)puVar1;
                                                    if (lVar12 != 0) {
                                                      lVar12 = thunk_FUN_00d6225c(lVar12,*(
                                                  undefined8 *)(*plVar11 + 0x40));
                                                  if (lVar12 == 0) goto LAB_01780028;
                                                  uVar14 = *(uint *)(plVar11 + 3);
                                                  }
                                                  puVar2 = 
                                                  Method_System_Collections_Generic_KeyValuePair<int,_Panel>_get_Value__
                                                  ;
                                                  if (5 < uVar14) {
                                                    plVar11[9] = *(long *)puVar1;
                                                    lVar12 = *(long *)puVar2;
                                                    if (lVar12 != 0) {
                                                      lVar12 = thunk_FUN_00d6225c(lVar12,*(
                                                  undefined8 *)(*plVar11 + 0x40));
                                                  if (lVar12 == 0) goto LAB_01780028;
                                                  uVar14 = *(uint *)(plVar11 + 3);
                                                  }
                                                  puVar1 = 
                                                  Method_Oculus_Interaction_Interactor<RayInteractor,_RayInteractable>_set_Selector__
                                                  ;
                                                  if (6 < uVar14) {
                                                    plVar11[10] = *(long *)puVar2;
                                                    lVar12 = *(long *)puVar1;
                                                    if (lVar12 != 0) {
                                                      lVar12 = thunk_FUN_00d6225c(lVar12,*(
                                                  undefined8 *)(*plVar11 + 0x40));
                                                  if (lVar12 == 0) goto LAB_01780028;
                                                  uVar14 = *(uint *)(plVar11 + 3);
                                                  }
                                                  puVar2 = StringLiteral_13435;
                                                  if (7 < uVar14) {
                                                    plVar11[0xb] = *(long *)puVar1;
                                                    lVar12 = *(long *)puVar2;
                                                    if (lVar12 != 0) {
                                                      lVar12 = thunk_FUN_00d6225c(lVar12,*(
                                                  undefined8 *)(*plVar11 + 0x40));
                                                  if (lVar12 == 0) goto LAB_01780028;
                                                  uVar14 = *(uint *)(plVar11 + 3);
                                                  }
                                                  puVar1 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_Start<VRequest_<DecodeFile>d__107>__
                                                  ;
                                                  if (8 < uVar14) {
                                                    plVar11[0xc] = *(long *)puVar2;
                                                    lVar12 = *(long *)puVar1;
                                                    if (lVar12 != 0) {
                                                      lVar12 = thunk_FUN_00d6225c(lVar12,*(
                                                  undefined8 *)(*plVar11 + 0x40));
                                                  if (lVar12 == 0) goto LAB_01780028;
                                                  uVar14 = *(uint *)(plVar11 + 3);
                                                  }
                                                  puVar2 = 
                                                  Method_System_ReadOnlyMemory<char>__ctor__;
                                                  if (9 < uVar14) {
                                                    plVar11[0xd] = *(long *)puVar1;
                                                    lVar12 = *(long *)puVar2;
                                                    if (lVar12 != 0) {
                                                      lVar12 = thunk_FUN_00d6225c(lVar12,*(
                                                  undefined8 *)(*plVar11 + 0x40));
                                                  if (lVar12 == 0) goto LAB_01780028;
                                                  uVar14 = *(uint *)(plVar11 + 3);
                                                  }
                                                  puVar1 = StringLiteral_12076;
                                                  if (10 < uVar14) {
                                                    plVar11[0xe] = *(long *)puVar2;
                                                    lVar12 = *(long *)puVar1;
                                                    if (lVar12 != 0) {
                                                      lVar12 = thunk_FUN_00d6225c(lVar12,*(
                                                  undefined8 *)(*plVar11 + 0x40));
                                                  if (lVar12 == 0) goto LAB_01780028;
                                                  uVar14 = *(uint *)(plVar11 + 3);
                                                  }
                                                  if (0xb < uVar14) {
                                                    plVar11[0xf] = *(long *)puVar1;
                                                    *(long **)(*(long *)(*(long *)puVar5 + 0xb8) +
                                                              0x18) = plVar11;
                                                    plVar11 = (long *)FUN_00da4fb8(*unaff_x20,5);
                                                    puVar2 = StringLiteral_3923;
                                                    if (plVar11 == (long *)0x0) goto LAB_01780034;
                                                    if ((*(long *)StringLiteral_3923 != 0) &&
                                                       (lVar12 = thunk_FUN_00d6225c(*(long *)
                                                  StringLiteral_3923,
                                                  *(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0)) {
LAB_01780028:
                                                    uVar13 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                                                    FUN_00da5038(uVar13,0);
                                                  }
                                                  puVar1 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<CryptoStream_<ReadAsyncInternal>d__37>__
                                                  ;
                                                  uVar14 = *(uint *)(plVar11 + 3);
                                                  if (uVar14 != 0) {
                                                    plVar11[4] = *(long *)puVar2;
                                                    lVar12 = *(long *)puVar1;
                                                    if (lVar12 != 0) {
                                                      lVar12 = thunk_FUN_00d6225c(lVar12,*(
                                                  undefined8 *)(*plVar11 + 0x40));
                                                  if (lVar12 == 0) goto LAB_01780028;
                                                  uVar14 = *(uint *)(plVar11 + 3);
                                                  }
                                                  puVar2 = 
                                                  Method_Unity_Collections_NativeArray_Enumerator<MeshTransform>_get_Current__
                                                  ;
                                                  if (1 < uVar14) {
                                                    plVar11[5] = *(long *)puVar1;
                                                    lVar12 = *(long *)puVar2;
                                                    if (lVar12 != 0) {
                                                      lVar12 = thunk_FUN_00d6225c(lVar12,*(
                                                  undefined8 *)(*plVar11 + 0x40));
                                                  if (lVar12 == 0) goto LAB_01780028;
                                                  uVar14 = *(uint *)(plVar11 + 3);
                                                  }
                                                  puVar1 = Method_System_Array_Empty<Exception>__;
                                                  if (2 < uVar14) {
                                                    plVar11[6] = *(long *)puVar2;
                                                    lVar12 = *(long *)puVar1;
                                                    if (lVar12 != 0) {
                                                      lVar12 = thunk_FUN_00d6225c(lVar12,*(
                                                  undefined8 *)(*plVar11 + 0x40));
                                                  if (lVar12 == 0) goto LAB_01780028;
                                                  uVar14 = *(uint *)(plVar11 + 3);
                                                  }
                                                  puVar2 = Method_STMRubyText_Event__;
                                                  if (3 < uVar14) {
                                                    plVar11[7] = *(long *)puVar1;
                                                    lVar12 = *(long *)puVar2;
                                                    if (lVar12 != 0) {
                                                      lVar12 = thunk_FUN_00d6225c(lVar12,*(
                                                  undefined8 *)(*plVar11 + 0x40));
                                                  if (lVar12 == 0) goto LAB_01780028;
                                                  uVar14 = *(uint *)(plVar11 + 3);
                                                  }
                                                  if (4 < uVar14) {
                                                    plVar11[8] = *(long *)puVar2;
                                                    puVar10 = StringLiteral_10051;
                                                    puVar9 = StringLiteral_8260;
                                                    puVar8 = 
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__
                                                  ;
                                                  puVar4 = 
                                                  UnityEngine_Rendering_AtlasAllocator_TypeInfo;
                                                  puVar1 = 
                                                  System_Action<VisualElement,_int>_TypeInfo;
                                                  puVar2 = PTR_DAT_033f7460;
                                                  *(long **)(*(long *)(*(long *)puVar5 + 0xb8) +
                                                            0x20) = plVar11;
                                                  puVar7 = 
                                                  Method_System_Collections_Generic_List<MedleySmackAJackClown>_Contains__
                                                  ;
                                                  puVar6 = 
                                                  System_Net_ServicePointScheduler_ConnectionGroup_TypeInfo
                                                  ;
                                                  puVar3 = 
                                                  System_Collections_Generic_IEnumerator<InputEventPtr>_TypeInfo
                                                  ;
                                                  uVar13 = FUN_00da4fb8(*(undefined8 *)puVar8,0x100)
                                                  ;
                                                  FUN_016a34e8(uVar13,*(undefined8 *)puVar1,0);
                                                  *(undefined8 *)
                                                   (*(long *)(*(long *)puVar5 + 0xb8) + 0x28) =
                                                       uVar13;
                                                  uVar13 = FUN_00da4fb8(*(undefined8 *)puVar4,0x1e);
                                                  FUN_016a34e8(uVar13,*(undefined8 *)puVar10,0);
                                                  *(undefined8 *)
                                                   (*(long *)(*(long *)puVar5 + 0xb8) + 0x30) =
                                                       uVar13;
                                                  uVar13 = FUN_00da4fb8(*(undefined8 *)puVar9,0xf);
                                                  FUN_016a34e8(uVar13,*(undefined8 *)puVar2,0);
                                                  *(undefined8 *)
                                                   (*(long *)(*(long *)puVar5 + 0xb8) + 0x38) =
                                                       uVar13;
                                                  uVar13 = FUN_00da4fb8(*(undefined8 *)puVar4,0x2a);
                                                  FUN_016a34e8(uVar13,*(undefined8 *)puVar7,0);
                                                  *(undefined8 *)
                                                   (*(long *)(*(long *)puVar5 + 0xb8) + 0x40) =
                                                       uVar13;
                                                  uVar13 = FUN_00da4fb8(*(undefined8 *)puVar6,0x15);
                                                  FUN_016a34e8(uVar13,*(undefined8 *)puVar3,0);
                                                  *(undefined8 *)
                                                   (*(long *)(*(long *)puVar5 + 0xb8) + 0x48) =
                                                       uVar13;
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
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


