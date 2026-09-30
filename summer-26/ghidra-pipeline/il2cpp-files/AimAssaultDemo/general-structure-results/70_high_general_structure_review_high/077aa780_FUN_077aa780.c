/*
FUNCTION_NAME: FUN_077aa780
ENTRY_POINT: 077aa780
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;ui_interaction;telemetry
EVIDENCE: strong_pose_or_ray_construction_hits_13;ui_or_gameplay_sink_hits_9;telemetry_or_network_hits_8
*/


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_077aa780(undefined4 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  if ((DAT_08271f7c & 1) == 0) {
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaElementDecl>_Remove__
                );
    FUN_0373b518(PTR_DAT_07d887b0);
    FUN_0373b518(PTR_DAT_07dba078);
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaElementDecl>_TryGetValue__
                );
    FUN_0373b518(PTR_DAT_07dbfae0);
    FUN_0373b518(PTR_DAT_07db5310);
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaElementDecl>_get_Values__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaEntity>__ctor__
                );
    FUN_0373b518(Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaEntity>_Add__)
    ;
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaEntity>_ContainsKey__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaEntity>_TryGetValue__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaEntity>_get_Values__
                );
    FUN_0373b518(Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_Type>__ctor__);
    FUN_0373b518(Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_Type>_Add__);
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlQualifiedName>__ctor__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlQualifiedName>_Add__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlQualifiedName>_ContainsKey__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>__ctor__
                );
    FUN_0373b518(PTR_DAT_07dd4b08);
    FUN_0373b518(PTR_DAT_07de5508);
    FUN_0373b518(PTR_DAT_07db1280);
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_Add__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_Clear__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_ContainsKey__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_Remove__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_TryGetValue__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_get_Count__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_set_Item__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<fsConfig,_Dictionary<Type,_fsMetaType>>__ctor__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<fsConfig,_Dictionary<Type,_fsMetaType>>_TryGetValue__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<fsConfig,_Dictionary<Type,_fsMetaType>>_set_Item__
                );
    FUN_0373b518(PTR_DAT_07dcb6e0);
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<BinaryOperatorHandler_OperatorQuery,_Func<object,_object,_object>>__ctor__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<BinaryOperatorHandler_OperatorQuery,_Func<object,_object,_object>>_Add__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<BinaryOperatorHandler_OperatorQuery,_Func<object,_object,_object>>_ContainsKey__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<BinaryOperatorHandler_OperatorQuery,_Func<object,_object,_object>>_get_Item__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<BinaryOperatorHandler_OperatorQuery,_IOptimizedInvoker>__ctor__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<BinaryOperatorHandler_OperatorQuery,_IOptimizedInvoker>_Add__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<BinaryOperatorHandler_OperatorQuery,_IOptimizedInvoker>_ContainsKey__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<BinaryOperatorHandler_OperatorQuery,_IOptimizedInvoker>_get_Item__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<BinaryOperatorHandler_OperatorQuery,_BinaryOperatorHandler_OperatorQuery>__ctor__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<BinaryOperatorHandler_OperatorQuery,_BinaryOperatorHandler_OperatorQuery>_Add__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<BinaryOperatorHandler_OperatorQuery,_BinaryOperatorHandler_OperatorQuery>_get_Item__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<ConversionRegistry_ConverterKey,_Delegate>__ctor__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<ConversionRegistry_ConverterKey,_Delegate>_TryGetValue__
                );
    FUN_0373b518(Method_System_Collections_Generic_Dictionary<int,_Rigidbody>_get_Item__);
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<ConversionRegistry_ConverterKey,_Delegate>_set_Item__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<ConversionUtility_ConversionQuery,_MethodInfo[]>__ctor__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<ConversionUtility_ConversionQuery,_MethodInfo[]>_Add__
                );
    FUN_0373b518(PTR_DAT_07d869f0);
    FUN_0373b518(PTR_DAT_07d887b8);
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<ConversionUtility_ConversionQuery,_MethodInfo[]>_ContainsKey__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<ConversionUtility_ConversionQuery,_MethodInfo[]>_get_Item__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<ConversionUtility_ConversionQuery,_ConversionUtility_ConversionType>__ctor__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<ConversionUtility_ConversionQuery,_ConversionUtility_ConversionType>_Add__
                );
    FUN_0373b518(PTR_DAT_07d9b1f8);
    FUN_0373b518(Method_System_Collections_Generic_Dictionary<int,_Scene>__ctor__);
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<ConversionUtility_ConversionQuery,_ConversionUtility_ConversionType>_TryGetValue__
                );
    FUN_0373b518(PTR_DAT_07db0988);
    FUN_0373b518(PTR_DAT_07de5408);
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<IDeferredNetworkMessageManager_TriggerType,_Dictionary<ulong,_DeferredMessageManager_TriggerInfo>>__ctor__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<IDeferredNetworkMessageManager_TriggerType,_Dictionary<ulong,_DeferredMessageManager_TriggerInfo>>_Clear__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<IDeferredNetworkMessageManager_TriggerType,_Dictionary<ulong,_DeferredMessageManager_TriggerInfo>>_GetEnumerator__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<IDeferredNetworkMessageManager_TriggerType,_Dictionary<ulong,_DeferredMessageManager_TriggerInfo>>_TryGetValue__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<IDeferredNetworkMessageManager_TriggerType,_Dictionary<ulong,_DeferredMessageManager_TriggerInfo>>_set_Item__
                );
    FUN_0373b518(PTR_DAT_07d86aa0);
    FUN_0373b518(PTR_DAT_07d9ab08);
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<MB3_MeshCombiner_MBBlendShapeKey,_MB3_MeshCombiner_MBBlendShapeValue>__ctor__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<MB3_MeshCombiner_MBBlendShapeKey,_MB3_MeshCombiner_MBBlendShapeValue>_Add__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<MB3_MeshCombinerSingle_BoneAndBindpose,_int>__ctor__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<MB3_MeshCombinerSingle_BoneAndBindpose,_int>_Add__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<MB3_MeshCombinerSingle_BoneAndBindpose,_int>_Clear__
                );
    FUN_0373b518(AlertViewHUD_TypeInfo);
    FUN_0373b518(PTR_DAT_07dca3c0);
    FUN_0373b518(System_Func<ILayoutElement,_float>_TypeInfo);
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<MB3_MeshCombinerSingle_BoneAndBindpose,_int>_TryGetValue__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<MB3_MeshCombinerSingle_BoneAndBindpose,_int>_get_Keys__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<MB3_MeshCombinerSingle_MB_DynamicGameObject,_int>__ctor__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<MB3_MeshCombinerSingle_MB_DynamicGameObject,_int>_Clear__
                );
    FUN_0373b518(PTR_DAT_07da0ad8);
    FUN_0373b518(PTR_DAT_07dbce60);
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<MB3_MeshCombinerSingle_MB_DynamicGameObject,_int>_get_Item__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<MB3_MeshCombinerSingle_MB_DynamicGameObject,_int>_set_Item__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<IXRSelectInteractable,_Pose>_set_Item__
                );
    FUN_0373b518(Oculus_Platform_Models_AchievementDefinitionList_TypeInfo);
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>__ctor__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_Clear__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TryGetValue__
                );
    FUN_0373b518(
                Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_set_Item__
                );
    DAT_08271f7c = 1;
  }
  *param_3 = 0;
  switch(param_1) {
  case 0:
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<IXRSelectInteractable,_Pose>_set_Item__
                         ,5,0);
    if ((uVar2 & 1) != 0) goto LAB_077ab53c;
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<MB3_MeshCombinerSingle_MB_DynamicGameObject,_int>_get_Item__
                         ,5,0);
    if ((uVar2 & 1) != 0) goto LAB_077ab424;
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                  Oculus_Platform_Models_AchievementDefinitionList_TypeInfo,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<BinaryOperatorHandler_OperatorQuery,_IOptimizedInvoker>_Add__
                           ,5,0);
      puVar1 = 
      Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_set_Item__;
joined_r0x077aad80:
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)puVar1,5,0);
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        goto LAB_077ab514;
      }
      goto LAB_077ab5a4;
    }
    break;
  case 1:
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)PTR_DAT_07d887b0,5,0);
    if ((uVar2 & 1) != 0) goto LAB_077ab53c;
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)PTR_DAT_07d887b8,5,0);
    puVar4 = (undefined8 *)PTR_DAT_07d9b1f8;
    goto joined_r0x077aadc4;
  case 2:
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                  Oculus_Platform_Models_AchievementDefinitionList_TypeInfo,5,0);
    if ((uVar2 & 1) != 0) goto LAB_077ab53c;
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)PTR_DAT_07db0988,5,0);
    if ((uVar2 & 1) != 0) goto LAB_077ab424;
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)PTR_DAT_07dbfae0,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)PTR_DAT_07d869f0,5,0);
      puVar1 = PTR_DAT_07d86aa0;
      goto joined_r0x077aad80;
    }
    break;
  case 3:
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<int,_Scene>__ctor__,5
                         ,0);
    puVar4 = (undefined8 *)Method_System_Collections_Generic_Dictionary<int,_Rigidbody>_get_Item__;
    goto joined_r0x077aadc4;
  case 4:
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)PTR_DAT_07da0ad8,5,0);
    puVar1 = PTR_DAT_07dba078;
    goto joined_r0x077aac1c;
  case 5:
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<MB3_MeshCombiner_MBBlendShapeKey,_MB3_MeshCombiner_MBBlendShapeValue>_Add__
                         ,5,0);
    if ((uVar2 & 1) != 0) goto LAB_077ab53c;
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<BinaryOperatorHandler_OperatorQuery,_BinaryOperatorHandler_OperatorQuery>_get_Item__
                         ,5,0);
    if ((uVar2 & 1) != 0) goto LAB_077ab424;
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<BinaryOperatorHandler_OperatorQuery,_BinaryOperatorHandler_OperatorQuery>_Add__
                         ,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<BinaryOperatorHandler_OperatorQuery,_IOptimizedInvoker>_get_Item__
                           ,5,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<ConversionUtility_ConversionQuery,_MethodInfo[]>_ContainsKey__
                             ,5,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<BinaryOperatorHandler_OperatorQuery,_IOptimizedInvoker>_ContainsKey__
                               ,5,0);
          if ((uVar2 & 1) != 0) goto LAB_077ab600;
          uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<MB3_MeshCombinerSingle_MB_DynamicGameObject,_int>__ctor__
                               ,5,0);
          if ((uVar2 & 1) != 0) {
LAB_077ab3b0:
            uVar3 = 6;
            goto FUN_077ab5d0;
          }
          uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<BinaryOperatorHandler_OperatorQuery,_BinaryOperatorHandler_OperatorQuery>__ctor__
                               ,5,0);
          if ((uVar2 & 1) != 0) {
LAB_077ab628:
            uVar3 = 7;
            goto FUN_077ab5d0;
          }
          uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_Remove__
                               ,5,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_set_Item__
                                 ,5,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                            Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_Clear__
                                   ,5,0);
              if ((uVar2 & 1) == 0) {
                uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                              Method_System_Collections_Generic_Dictionary<IDeferredNetworkMessageManager_TriggerType,_Dictionary<ulong,_DeferredMessageManager_TriggerInfo>>__ctor__
                                     ,5,0);
                if ((uVar2 & 1) == 0) {
                  uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                                Method_System_Collections_Generic_Dictionary<MB3_MeshCombinerSingle_BoneAndBindpose,_int>__ctor__
                                       ,5,0);
                  if ((uVar2 & 1) == 0) {
                    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                                  Method_System_Collections_Generic_Dictionary<ConversionUtility_ConversionQuery,_MethodInfo[]>_get_Item__
                                         ,5,0);
                    if ((uVar2 & 1) == 0) {
                      uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                                                                                        
                                                  Method_System_Collections_Generic_Dictionary<ConversionUtility_ConversionQuery,_ConversionUtility_ConversionType>_Add__
                                           ,5,0);
                      if ((uVar2 & 1) == 0) {
                        uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                                                                                            
                                                  Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaElementDecl>_TryGetValue__
                                             ,5,0);
                        if ((uVar2 & 1) == 0) {
                          uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                                                                                                
                                                  Method_System_Collections_Generic_Dictionary<BinaryOperatorHandler_OperatorQuery,_Func<object,_object,_object>>_Add__
                                               ,5,0);
                          if ((uVar2 & 1) == 0) {
                            uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_Dictionary<IDeferredNetworkMessageManager_TriggerType,_Dictionary<ulong,_DeferredMessageManager_TriggerInfo>>_GetEnumerator__
                                                 ,5,0);
                            if ((uVar2 & 1) == 0) {
                              uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                                                                                                        
                                                  Method_System_Collections_Generic_Dictionary<ConversionRegistry_ConverterKey,_Delegate>_TryGetValue__
                                                  ,5,0);
                              if ((uVar2 & 1) == 0) {
                                uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                                                                                                            
                                                  Method_System_Collections_Generic_Dictionary<fsConfig,_Dictionary<Type,_fsMetaType>>__ctor__
                                                  ,5,0);
                                if ((uVar2 & 1) == 0) {
                                  uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaElementDecl>_Remove__
                                                  ,5,0);
                                  if ((uVar2 & 1) == 0) {
                                    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                                                                                                                    
                                                  Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlQualifiedName>__ctor__
                                                  ,5,0);
                                    if ((uVar2 & 1) == 0) {
                                      uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                                                                                                                        
                                                  Method_System_Collections_Generic_Dictionary<ConversionUtility_ConversionQuery,_ConversionUtility_ConversionType>__ctor__
                                                  ,5,0);
                                      if ((uVar2 & 1) == 0) {
                                        return 0;
                                      }
                                      uVar3 = 0x16;
                                    }
                                    else {
                                      uVar3 = 0x15;
                                    }
                                  }
                                  else {
                                    uVar3 = 0x14;
                                  }
                                }
                                else {
                                  uVar3 = 0x13;
                                }
                              }
                              else {
                                uVar3 = 0x12;
                              }
                            }
                            else {
                              uVar3 = 0x11;
                            }
                          }
                          else {
                            uVar3 = 0x10;
                          }
                        }
                        else {
                          uVar3 = 0xf;
                        }
                      }
                      else {
                        uVar3 = 0xe;
                      }
                    }
                    else {
                      uVar3 = 0xd;
                    }
                  }
                  else {
                    uVar3 = 0xc;
                  }
                }
                else {
                  uVar3 = 0xb;
                }
              }
              else {
                uVar3 = 10;
              }
            }
            else {
              uVar3 = 9;
            }
            goto FUN_077ab5d0;
          }
LAB_077ab650:
          uVar3 = 8;
          goto FUN_077ab5d0;
        }
        goto LAB_077ab514;
      }
      goto LAB_077ab5a4;
    }
    break;
  case 6:
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<IDeferredNetworkMessageManager_TriggerType,_Dictionary<ulong,_DeferredMessageManager_TriggerInfo>>_set_Item__
                         ,5,0);
    puVar1 = 
    Method_System_Collections_Generic_Dictionary<BinaryOperatorHandler_OperatorQuery,_Func<object,_object,_object>>__ctor__
    ;
    goto joined_r0x077aac1c;
  case 7:
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)PTR_DAT_07dcb6e0,5,0);
    if ((uVar2 & 1) != 0) goto LAB_077ab53c;
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<MB3_MeshCombinerSingle_BoneAndBindpose,_int>_TryGetValue__
                         ,5,0);
    if ((uVar2 & 1) != 0) goto LAB_077ab424;
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)PTR_DAT_07dca3c0,5,0);
    puVar4 = (undefined8 *)
             Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_Clear__
    ;
    if ((uVar2 & 1) != 0) break;
    goto LAB_077ab58c;
  case 8:
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)AlertViewHUD_TypeInfo,5,0);
    if ((uVar2 & 1) != 0) goto LAB_077ab53c;
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaEntity>_Add__
                         ,5,0);
    if ((uVar2 & 1) != 0) goto LAB_077ab424;
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<MB3_MeshCombinerSingle_MB_DynamicGameObject,_int>_set_Item__
                         ,5,0);
    puVar4 = (undefined8 *)
             Method_System_Collections_Generic_Dictionary<BinaryOperatorHandler_OperatorQuery,_Func<object,_object,_object>>_ContainsKey__
    ;
    goto joined_r0x077ab580;
  case 9:
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<MB3_MeshCombinerSingle_MB_DynamicGameObject,_int>_get_Item__
                         ,5,0);
    if ((uVar2 & 1) != 0) goto LAB_077ab53c;
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                  Oculus_Platform_Models_AchievementDefinitionList_TypeInfo,5,0);
    if ((uVar2 & 1) != 0) goto LAB_077ab424;
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<BinaryOperatorHandler_OperatorQuery,_IOptimizedInvoker>_Add__
                         ,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<ConversionRegistry_ConverterKey,_Delegate>__ctor__
                           ,5,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>__ctor__
                             ,5,0);
        puVar1 = 
        Method_System_Collections_Generic_Dictionary<ConversionUtility_ConversionQuery,_MethodInfo[]>__ctor__
        ;
        goto joined_r0x077ab510;
      }
      goto LAB_077ab5a4;
    }
    break;
  case 10:
  case 0x16:
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)PTR_DAT_07d9ab08,5,0);
    puVar1 = PTR_DAT_07db5310;
    goto joined_r0x077aac1c;
  case 0xb:
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_TryGetValue__
                         ,5,0);
    puVar1 = 
    Method_System_Collections_Generic_Dictionary<ConversionUtility_ConversionQuery,_MethodInfo[]>_Add__
    ;
    goto joined_r0x077aac1c;
  case 0xc:
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)PTR_DAT_07d9ab08,5,0);
    if ((uVar2 & 1) != 0) goto LAB_077ab53c;
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)PTR_DAT_07db5310,5,0);
    puVar4 = (undefined8 *)PTR_DAT_07de5508;
    goto joined_r0x077aadc4;
  case 0xd:
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<BinaryOperatorHandler_OperatorQuery,_Func<object,_object,_object>>_get_Item__
                         ,5,0);
    puVar1 = 
    Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaEntity>_TryGetValue__;
    goto joined_r0x077aac1c;
  case 0xe:
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<MB3_MeshCombinerSingle_BoneAndBindpose,_int>_Clear__
                         ,5,0);
    if ((uVar2 & 1) != 0) goto LAB_077ab53c;
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_Type>_Add__
                         ,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)PTR_DAT_07dbce60,5,0);
      puVar4 = (undefined8 *)PTR_DAT_07dd4b08;
      goto joined_r0x077aadc4;
    }
    goto LAB_077ab5a4;
  case 0xf:
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_Add__
                         ,5,0);
    puVar1 = Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaEntity>__ctor__;
    goto joined_r0x077aac1c;
  case 0x10:
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaElementDecl>_get_Values__
                         ,5,0);
    if ((uVar2 & 1) != 0) goto LAB_077ab53c;
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<BinaryOperatorHandler_OperatorQuery,_IOptimizedInvoker>__ctor__
                         ,5,0);
    puVar4 = (undefined8 *)
             Method_System_Collections_Generic_Dictionary<MB3_MeshCombinerSingle_MB_DynamicGameObject,_int>_Clear__
    ;
joined_r0x077aadc4:
    if ((uVar2 & 1) != 0) goto LAB_077ab424;
LAB_077ab5b4:
    uVar2 = FUN_060bf6bc(param_2,*puVar4,5,0);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    break;
  case 0x11:
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_TryGetValue__
                         ,5,0);
    if ((uVar2 & 1) != 0) goto LAB_077ab53c;
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<ConversionUtility_ConversionQuery,_ConversionUtility_ConversionType>_TryGetValue__
                         ,5,0);
    if ((uVar2 & 1) != 0) goto LAB_077ab424;
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_ContainsKey__
                         ,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<fsConfig,_Dictionary<Type,_fsMetaType>>_TryGetValue__
                           ,5,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>__ctor__
                             ,5,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaEntity>_get_Values__
                               ,5,0);
          if ((uVar2 & 1) != 0) goto LAB_077ab600;
          uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<fsConfig,_Dictionary<Type,_fsMetaType>>_set_Item__
                               ,5,0);
          if ((uVar2 & 1) != 0) goto LAB_077ab3b0;
          uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<MB3_MeshCombiner_MBBlendShapeKey,_MB3_MeshCombiner_MBBlendShapeValue>__ctor__
                               ,5,0);
          if ((uVar2 & 1) != 0) goto LAB_077ab628;
          uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                        Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_Type>__ctor__
                               ,5,0);
          if ((uVar2 & 1) == 0) {
            return 0;
          }
          goto LAB_077ab650;
        }
        goto LAB_077ab514;
      }
      goto LAB_077ab5a4;
    }
    break;
  case 0x12:
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlQualifiedName>_ContainsKey__
                         ,5,0);
    puVar4 = (undefined8 *)
             Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaEntity>_ContainsKey__
    ;
    if ((uVar2 & 1) != 0) goto LAB_077ab424;
LAB_077ab478:
    uVar2 = FUN_060bf6bc(param_2,*puVar4,5,0);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    goto LAB_077ab53c;
  case 0x13:
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)System_Func<ILayoutElement,_float>_TypeInfo,5,0);
    puVar1 = Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlQualifiedName>_Add__;
joined_r0x077aac1c:
    if ((uVar2 & 1) != 0) {
LAB_077ab53c:
      *param_3 = 0;
      return 1;
    }
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)puVar1,5,0);
    if ((uVar2 & 1) == 0) {
switchD_077aabfc_default:
      return 0;
    }
LAB_077ab424:
    *param_3 = 1;
    return 1;
  case 0x14:
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)PTR_DAT_07db1280,5,0);
    if ((uVar2 & 1) != 0) goto LAB_077ab424;
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<IDeferredNetworkMessageManager_TriggerType,_Dictionary<ulong,_DeferredMessageManager_TriggerInfo>>_Clear__
                         ,5,0);
    puVar4 = (undefined8 *)PTR_DAT_07de5408;
    if ((uVar2 & 1) == 0) goto LAB_077ab478;
    break;
  case 0x15:
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)PTR_DAT_07d869f0,5,0);
    if ((uVar2 & 1) != 0) goto LAB_077ab424;
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)PTR_DAT_07d86aa0,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)PTR_DAT_07db0988,5,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)PTR_DAT_07dbfae0,5,0);
        puVar1 = Oculus_Platform_Models_AchievementDefinitionList_TypeInfo;
joined_r0x077ab510:
        if ((uVar2 & 1) == 0) {
          uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)puVar1,5,0);
          if ((uVar2 & 1) == 0) {
            return 0;
          }
LAB_077ab600:
          *param_3 = 5;
          return 1;
        }
LAB_077ab514:
        uVar3 = 4;
        goto FUN_077ab5d0;
      }
      goto LAB_077ab5a4;
    }
    break;
  case 0x17:
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)AlertViewHUD_TypeInfo,5,0);
    if ((uVar2 & 1) != 0) goto LAB_077ab53c;
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<MB3_MeshCombinerSingle_BoneAndBindpose,_int>_Add__
                         ,5,0);
    if ((uVar2 & 1) != 0) goto LAB_077ab424;
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<ConversionRegistry_ConverterKey,_Delegate>_set_Item__
                         ,5,0);
    puVar4 = (undefined8 *)
             Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_XmlSchemaObject>_get_Count__
    ;
joined_r0x077ab580:
    if ((uVar2 & 1) == 0) {
LAB_077ab58c:
      uVar2 = FUN_060bf6bc(param_2,*puVar4,5,0);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
LAB_077ab5a4:
      uVar3 = 3;
      goto FUN_077ab5d0;
    }
    break;
  case 0x18:
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<MB3_MeshCombinerSingle_BoneAndBindpose,_int>_Add__
                         ,5,0);
    if ((uVar2 & 1) != 0) goto LAB_077ab53c;
    uVar2 = FUN_060bf6bc(param_2,*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<MB3_MeshCombinerSingle_BoneAndBindpose,_int>_get_Keys__
                         ,5,0);
    puVar4 = (undefined8 *)
             Method_System_Collections_Generic_Dictionary<IDeferredNetworkMessageManager_TriggerType,_Dictionary<ulong,_DeferredMessageManager_TriggerInfo>>_TryGetValue__
    ;
    if ((uVar2 & 1) != 0) {
      uVar3 = 1;
      goto FUN_077ab5d0;
    }
    goto LAB_077ab5b4;
  default:
    goto switchD_077aabfc_default;
  }
  uVar3 = 2;
FUN_077ab5d0:
  *param_3 = uVar3;
  return 1;
}


