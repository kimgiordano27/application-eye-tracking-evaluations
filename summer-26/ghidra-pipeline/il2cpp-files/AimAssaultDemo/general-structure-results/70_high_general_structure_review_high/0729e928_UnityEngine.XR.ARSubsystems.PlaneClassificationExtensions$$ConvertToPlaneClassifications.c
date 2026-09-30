/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.PlaneClassificationExtensions$$ConvertToPlaneClassifications
ENTRY_POINT: 0729e928
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_XR_ARSubsystems_PlaneClassificationExtensions__ConvertToPlaneClassifications
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x24;
  undefined8 *unaff_x27;
  undefined8 *unaff_x29;
  
  puVar9 = *(undefined8 **)(param_1 + 0x7e8);
  FUN_05b0f700();
  FUN_05b0f700();
  FUN_05b0f700();
  **(undefined8 **)(*unaff_x20 + 0xb8) = unaff_x19;
  thunk_FUN_037aeb94(*(undefined8 *)(*unaff_x20 + 0xb8));
  lVar6 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07da8278);
  FUN_05b07988(lVar6,*(undefined8 *)PTR_DAT_07da8270);
  puVar5 = System_Net_WebCompletionSource<ValueTuple<bool,_WebOperation>>_TypeInfo;
  puVar4 = System_WeakReference<Camera>_TypeInfo;
  puVar3 = UnityEngine_Rendering_VolumeDebugSettings<UniversalAdditionalCameraData>_TypeInfo;
  puVar2 = System_Numerics_Vector<ushort>_TypeInfo;
  puVar1 = PTR_DAT_07da82a8;
  if (lVar6 != 0) {
    FUN_05b0873c(lVar6,*(undefined8 *)PTR_DAT_07dc6338,2,*(undefined8 *)PTR_DAT_07da82a8);
    FUN_05b0873c(lVar6,*(undefined8 *)PTR_DAT_07dc6340,2,*(undefined8 *)puVar1);
    FUN_05b0873c(lVar6,*(undefined8 *)PTR_DAT_07dc6348,2,*(undefined8 *)puVar1);
    FUN_05b0873c(lVar6,*(undefined8 *)PTR_DAT_07dc6350,2,*(undefined8 *)puVar1);
    FUN_05b0873c(lVar6,*(undefined8 *)PTR_DAT_07dc6358,2,*(undefined8 *)puVar1);
    FUN_05b0873c(lVar6,*(undefined8 *)PTR_DAT_07dc63c0,2,*(undefined8 *)puVar1);
    FUN_05b0873c(lVar6,*(undefined8 *)PTR_DAT_07dc6378,2,*(undefined8 *)puVar1);
    FUN_05b0873c(lVar6,*(undefined8 *)PTR_DAT_07dc6388,2,*(undefined8 *)puVar1);
    FUN_05b0873c(lVar6,*(undefined8 *)
                        UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<int>_TypeInfo
                 ,2,*(undefined8 *)puVar1);
    FUN_05b0873c(lVar6,*(undefined8 *)
                        Unity_Multiplayer_Tools_NetStats_EventMetric<NamedMessageEvent>___TypeInfo,2
                 ,*(undefined8 *)puVar1);
    FUN_05b0873c(lVar6,*(undefined8 *)
                        System_Collections_Generic_Dictionary<RFShatter_Kortez<int,_int,_int>,_List<int>>___TypeInfo
                 ,2,*(undefined8 *)puVar1);
    FUN_05b0873c(lVar6,*(undefined8 *)PTR_DAT_07dc63e8,2,*(undefined8 *)puVar1);
    FUN_05b0873c(lVar6,*(undefined8 *)PTR_DAT_07dc63e0,2,*(undefined8 *)puVar1);
    FUN_05b0873c(lVar6,*(undefined8 *)PTR_DAT_07dc6188,2,*(undefined8 *)puVar1);
    FUN_05b0873c(lVar6,*(undefined8 *)PTR_DAT_07dc63a8,2,*(undefined8 *)puVar1);
    FUN_05b0873c(lVar6,*(undefined8 *)PTR_DAT_07dc6398,2,*(undefined8 *)puVar1);
    FUN_05b0873c(lVar6,*(undefined8 *)PTR_DAT_07dc63b8,2,*(undefined8 *)puVar1);
    FUN_05b0873c(lVar6,*(undefined8 *)PTR_DAT_07dc63b0,2,*(undefined8 *)puVar1);
    FUN_05b0873c(lVar6,*(undefined8 *)PTR_DAT_07dc63a0,2,*(undefined8 *)puVar1);
    FUN_05b0873c(lVar6,*(undefined8 *)
                        System_Collections_Generic_Dictionary<XmlQualifiedName,_DataContract>___TypeInfo
                 ,2,*(undefined8 *)puVar1);
    FUN_05b0873c(lVar6,*(undefined8 *)UnityEngine_Rendering_DynamicArray<Name>___TypeInfo,2,
                 *(undefined8 *)puVar1);
    FUN_05b0873c(lVar6,*(undefined8 *)
                        UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<Vector2>_TypeInfo
                 ,2,*(undefined8 *)puVar1);
    FUN_05b0873c(lVar6,*(undefined8 *)
                        Unity_Multiplayer_Tools_NetStats_EventMetric<ObjectDestroyedEvent>___TypeInfo
                 ,2,*(undefined8 *)puVar1);
    FUN_05b0873c(lVar6,*(undefined8 *)
                        System_Collections_Generic_Dictionary<string,_StyleComplexSelector>___TypeInfo
                 ,2,*(undefined8 *)puVar1);
    FUN_05b0873c(lVar6,*(undefined8 *)
                        UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputValueReader<float>_TypeInfo
                 ,2,*(undefined8 *)puVar1);
    FUN_05b0873c(lVar6,*(undefined8 *)
                        Unity_Multiplayer_Tools_NetStats_EventMetric<NetworkVariableEvent>___TypeInfo
                 ,2,*(undefined8 *)puVar1);
    FUN_05b0873c(lVar6,*(undefined8 *)
                        Unity_Multiplayer_Tools_NetStats_EventMetric<NetworkMessageEvent>___TypeInfo
                 ,2,*(undefined8 *)puVar1);
    FUN_05b0873c(lVar6,*(undefined8 *)
                        Unity_VisualScripting_FullSerializer_Internal_fsOption<fsVersionedType>_TypeInfo
                 ,2,*(undefined8 *)puVar1);
    FUN_05b0873c(lVar6,*(undefined8 *)
                        UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledResourceInfo>___TypeInfo
                 ,2,*(undefined8 *)puVar1);
    FUN_05b0873c(lVar6,*unaff_x24,1,*(undefined8 *)puVar1);
    FUN_05b0873c(lVar6,*(undefined8 *)PTR_DAT_07dc6830,1,*(undefined8 *)puVar1);
    FUN_05b0873c(lVar6,*puVar9,1,*(undefined8 *)puVar1);
    FUN_05b0873c(lVar6,*unaff_x29,1,*(undefined8 *)puVar1);
    FUN_05b0873c(lVar6,*unaff_x27,1,*(undefined8 *)puVar1);
    plVar7 = (long *)(*(long *)(*unaff_x20 + 0xb8) + 8);
    *plVar7 = lVar6;
    thunk_FUN_037aeb94(plVar7,lVar6);
    uVar8 = thunk_FUN_037788cc(*(undefined8 *)puVar3);
    FUN_05a81844(uVar8,*(undefined8 *)puVar2);
    puVar9 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
    *puVar9 = uVar8;
    thunk_FUN_037aeb94(puVar9,uVar8);
    uVar8 = thunk_FUN_037788cc(*(undefined8 *)System_Numerics_Vector<ulong>_TypeInfo);
    FUN_05a81844(uVar8,*(undefined8 *)System_ValueTuple<Rect,_Rect,_object>_TypeInfo);
    puVar9 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
    *puVar9 = uVar8;
    thunk_FUN_037aeb94(puVar9,uVar8);
    uVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<RectInt,_IntegerField,_int>_TypeInfo
                              );
    FUN_0728ed6c();
    puVar9 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x20);
    *puVar9 = uVar8;
    thunk_FUN_037aeb94(puVar9,uVar8);
    uVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Vector3,_FloatField,_float>_TypeInfo
                              );
    FUN_0729d3c0();
    puVar9 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x28);
    *puVar9 = uVar8;
    thunk_FUN_037aeb94(puVar9,uVar8);
    uVar8 = thunk_FUN_037788cc(*(undefined8 *)System_WeakReference<VisualElement>_TypeInfo);
    FUN_072771e0(uVar8,0);
    puVar9 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x30);
    *puVar9 = uVar8;
    thunk_FUN_037aeb94(puVar9,uVar8);
    uVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                System_ValueTuple<VisualEffectControlTrackController_Event,_int>_TypeInfo
                              );
    FUN_07257bd4(uVar8,0);
    puVar9 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x38);
    *puVar9 = uVar8;
    thunk_FUN_037aeb94(puVar9,uVar8);
    uVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Vector4,_FloatField,_float>_TypeInfo
                              );
    FUN_0729f488();
    puVar9 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x40);
    *puVar9 = uVar8;
    thunk_FUN_037aeb94(puVar9,uVar8);
    uVar8 = thunk_FUN_037788cc(*(undefined8 *)System_ValueTuple<object,_object>_TypeInfo);
    FUN_0724cbf0(uVar8,0);
    puVar9 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x48);
    *puVar9 = uVar8;
    thunk_FUN_037aeb94(puVar9,uVar8);
    uVar8 = thunk_FUN_037788cc(*(undefined8 *)System_Xml_Linq_XHashtable<XName>_TypeInfo);
    FUN_072a6a8c(uVar8,0);
    puVar9 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x50);
    *puVar9 = uVar8;
    thunk_FUN_037aeb94(puVar9,uVar8);
    uVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Vector2Int,_IntegerField,_int>_TypeInfo
                              );
    UnityEngine_XR_ARSubsystems_XRHumanBodyPose2DJoint__Equals();
    puVar9 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x58);
    *puVar9 = uVar8;
    thunk_FUN_037aeb94(puVar9,uVar8);
    uVar8 = thunk_FUN_037788cc(*(undefined8 *)puVar4);
    FUN_072586ec(uVar8,0);
    puVar9 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x60);
    *puVar9 = uVar8;
    thunk_FUN_037aeb94(puVar9,uVar8);
    uVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Vector2,_FloatField,_float>_TypeInfo
                              );
    FUN_0728f66c();
    puVar9 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x68);
    *puVar9 = uVar8;
    thunk_FUN_037aeb94(puVar9,uVar8);
    uVar8 = thunk_FUN_037788cc(*(undefined8 *)System_ValueTuple<TextureHandle,_int>_TypeInfo);
    FUN_07253d68(uVar8,0);
    puVar9 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x70);
    *puVar9 = uVar8;
    thunk_FUN_037aeb94(puVar9,uVar8);
    uVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Vector3Int,_IntegerField,_int>_TypeInfo
                              );
    FUN_0729fcf0();
    puVar9 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x78);
    *puVar9 = uVar8;
    thunk_FUN_037aeb94(puVar9,uVar8);
    uVar8 = thunk_FUN_037788cc(*(undefined8 *)System_WeakReference<RegexReplacement>_TypeInfo);
    FUN_07266314(uVar8,0);
    puVar9 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x80);
    *puVar9 = uVar8;
    thunk_FUN_037aeb94(puVar9,uVar8);
    uVar8 = thunk_FUN_037788cc(*(undefined8 *)System_WeakReference<FontAsset>_TypeInfo);
    FUN_0725f518(uVar8,0);
    puVar9 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x88);
    *puVar9 = uVar8;
    thunk_FUN_037aeb94(puVar9,uVar8);
    uVar8 = thunk_FUN_037788cc(*(undefined8 *)puVar5);
    FUN_07277cf8(uVar8,0);
    puVar9 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x90);
    *puVar9 = uVar8;
    thunk_FUN_037aeb94(puVar9,uVar8);
    uVar8 = thunk_FUN_037788cc(*(undefined8 *)System_WeakReference<SslStream>_TypeInfo);
    FUN_07269794(uVar8,0);
    puVar9 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x98);
    *puVar9 = uVar8;
    thunk_FUN_037aeb94(puVar9,uVar8);
    uVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Net_WebCompletionSource<WebResponseStream>_TypeInfo);
    UnityEngine_XR_ARFoundation_ARFacesChangedEventArgs__get_updated(uVar8,0);
    puVar9 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0xa0);
    *puVar9 = uVar8;
    thunk_FUN_037aeb94(puVar9,uVar8);
    uVar8 = thunk_FUN_037788cc(*(undefined8 *)System_WeakReference<TMP_FontAsset>_TypeInfo);
    FUN_07270474(uVar8,0);
    puVar9 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0xa8);
    *puVar9 = uVar8;
    thunk_FUN_037aeb94(puVar9,uVar8);
    uVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                UnityEngine_UIElements_BaseCompositeField_FieldDescription_WriteDelegate<Rect,_FloatField,_float>_TypeInfo
                              );
    FUN_07288000();
    puVar9 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0xb0);
    *puVar9 = uVar8;
    thunk_FUN_037aeb94(puVar9,uVar8);
    uVar8 = thunk_FUN_037788cc(*(undefined8 *)
                                System_Net_WebCompletionSource<WebRequestStream>_TypeInfo);
    FUN_0727ee90(uVar8,0);
    puVar9 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0xb8);
    *puVar9 = uVar8;
    thunk_FUN_037aeb94(puVar9,uVar8);
    uVar8 = thunk_FUN_037788cc(*(undefined8 *)System_Xml_Linq_XHashtable<WeakReference>_TypeInfo);
    FUN_072a26fc();
    puVar9 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0xc0);
    *puVar9 = uVar8;
    thunk_FUN_037aeb94(puVar9,uVar8);
    puVar1 = System_ValueTuple<int,_Int32Enum,_object>_TypeInfo;
    lVar6 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
    if (lVar6 != 0) {
      FUN_05a82618(lVar6,0,*(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x20),
                   *(undefined8 *)System_ValueTuple<int,_Int32Enum,_object>_TypeInfo);
      lVar6 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
      if (lVar6 != 0) {
        FUN_05a82618(lVar6,1,*(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x28),
                     *(undefined8 *)puVar1);
        lVar6 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
        if (lVar6 != 0) {
          FUN_05a82618(lVar6,2,*(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x30),
                       *(undefined8 *)puVar1);
          lVar6 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
          if (lVar6 != 0) {
            FUN_05a82618(lVar6,3,*(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x38),
                         *(undefined8 *)puVar1);
            lVar6 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
            if (lVar6 != 0) {
              FUN_05a82618(lVar6,4,*(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x40),
                           *(undefined8 *)puVar1);
              puVar1 = System_ValueTuple<object,_object,_Int32Enum>_TypeInfo;
              lVar6 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
              if (lVar6 != 0) {
                FUN_05a82618(lVar6,0,*(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x48),
                             *(undefined8 *)System_ValueTuple<object,_object,_Int32Enum>_TypeInfo);
                lVar6 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
                if (lVar6 != 0) {
                  FUN_05a82618(lVar6,1,*(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x50),
                               *(undefined8 *)puVar1);
                  lVar6 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
                  if (lVar6 != 0) {
                    FUN_05a82618(lVar6,2,*(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x58),
                                 *(undefined8 *)puVar1);
                    lVar6 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
                    if (lVar6 != 0) {
                      FUN_05a82618(lVar6,3,*(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x60),
                                   *(undefined8 *)puVar1);
                      lVar6 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
                      if (lVar6 != 0) {
                        FUN_05a82618(lVar6,4,*(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x68),
                                     *(undefined8 *)puVar1);
                        lVar6 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
                        if (lVar6 != 0) {
                          FUN_05a82618(lVar6,5,*(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x70),
                                       *(undefined8 *)puVar1);
                          lVar6 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
                          if (lVar6 != 0) {
                            FUN_05a82618(lVar6,6,*(undefined8 *)
                                                  (*(long *)(*unaff_x20 + 0xb8) + 0x78),
                                         *(undefined8 *)puVar1);
                            lVar6 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
                            if (lVar6 != 0) {
                              FUN_05a82618(lVar6,7,*(undefined8 *)
                                                    (*(long *)(*unaff_x20 + 0xb8) + 0x80),
                                           *(undefined8 *)puVar1);
                              lVar6 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
                              if (lVar6 != 0) {
                                FUN_05a82618(lVar6,8,*(undefined8 *)
                                                      (*(long *)(*unaff_x20 + 0xb8) + 0x88),
                                             *(undefined8 *)puVar1);
                                lVar6 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
                                if (lVar6 != 0) {
                                  FUN_05a82618(lVar6,9,*(undefined8 *)
                                                        (*(long *)(*unaff_x20 + 0xb8) + 0x90),
                                               *(undefined8 *)puVar1);
                                  lVar6 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
                                  if (lVar6 != 0) {
                                    FUN_05a82618(lVar6,10,*(undefined8 *)
                                                           (*(long *)(*unaff_x20 + 0xb8) + 0x98),
                                                 *(undefined8 *)puVar1);
                                    lVar6 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
                                    if (lVar6 != 0) {
                                      FUN_05a82618(lVar6,0xb,
                                                   *(undefined8 *)
                                                    (*(long *)(*unaff_x20 + 0xb8) + 0xa0),
                                                   *(undefined8 *)puVar1);
                                      lVar6 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
                                      if (lVar6 != 0) {
                                        FUN_05a82618(lVar6,0xc,
                                                     *(undefined8 *)
                                                      (*(long *)(*unaff_x20 + 0xb8) + 0xa8),
                                                     *(undefined8 *)puVar1);
                                        lVar6 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
                                        if (lVar6 != 0) {
                                          FUN_05a82618(lVar6,0xd,
                                                       *(undefined8 *)
                                                        (*(long *)(*unaff_x20 + 0xb8) + 0xb0),
                                                       *(undefined8 *)puVar1);
                                          lVar6 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
                                          if (lVar6 != 0) {
                                            FUN_05a82618(lVar6,0xe,
                                                         *(undefined8 *)
                                                          (*(long *)(*unaff_x20 + 0xb8) + 0xb8),
                                                         *(undefined8 *)puVar1);
                                            lVar6 = *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
                                            if (lVar6 != 0) {
                                              FUN_05a82618(lVar6,0xf,
                                                           *(undefined8 *)
                                                            (*(long *)(*unaff_x20 + 0xb8) + 0xc0),
                                                           *(undefined8 *)puVar1);
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
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


