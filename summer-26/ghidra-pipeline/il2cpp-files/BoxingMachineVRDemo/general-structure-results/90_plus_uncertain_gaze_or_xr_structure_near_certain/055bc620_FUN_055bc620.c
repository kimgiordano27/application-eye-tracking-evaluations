/*
FUNCTION_NAME: FUN_055bc620
ENTRY_POINT: 055bc620
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_4
*/


undefined8 FUN_055bc620(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  if ((DAT_06b7f2d8 & 1) == 0) {
    FUN_02d6084c(System_Collections_Generic_HashSet<string>_TypeInfo);
    FUN_02d6084c(PTR_DAT_06773fa8);
    FUN_02d6084c(System_Collections_Generic_HashSet<StylePropertyId>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_HashSet<StyleSheet>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_HashSet<TeleportationMultiAnchorVolume>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_HashSet<Text>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_HashSet<TrackableId>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_HashSet<Type>_TypeInfo);
    FUN_02d6084c(PTR_DAT_0677f038);
    FUN_02d6084c(System_Collections_Generic_HashSet<uint>_TypeInfo);
    FUN_02d6084c(PTR_DAT_06773fc0);
    FUN_02d6084c(System_Collections_Generic_HashSet<VisualElement>_TypeInfo);
    FUN_02d6084c(System_Exception_var);
    FUN_02d6084c(PTR_DAT_0678b8d0);
    FUN_02d6084c(PTR_DAT_0676d7f8);
    FUN_02d6084c(System_Collections_Generic_HashSet<VisualTreeAsset>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_HashSet<XRLoader>_TypeInfo);
    FUN_02d6084c(PTR_DAT_06773fc8);
    FUN_02d6084c(PTR_DAT_06771af8);
    FUN_02d6084c(System_Collections_Generic_HashSet<Event_Type>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo);
    FUN_02d6084c(Unity_Hierarchy_HierarchyPropertyUnmanaged<int>_TypeInfo);
    FUN_02d6084c(
                System_Linq_Expressions_Interpreter_HybridReferenceDictionary<LabelTarget,_LabelInfo>_TypeInfo
                );
    FUN_02d6084c(PTR_DAT_06773fd0);
    FUN_02d6084c(
                System_Linq_Expressions_Interpreter_HybridReferenceDictionary<ParameterExpression,_LocalVariables_VariableScope>_TypeInfo
                );
    FUN_02d6084c(PTR_DAT_0678b8b0);
    FUN_02d6084c(Newtonsoft_Json_IArrayPool<char>_TypeInfo);
    FUN_02d6084c(System_ComponentModel_ExtenderProvidedPropertyAttribute_var);
    FUN_02d6084c(System_Collections_Generic_ICollection<ArraySegment<byte>>_TypeInfo);
    FUN_02d6084c(
                System_Collections_Generic_ICollection<KeyValuePair<string,_FieldValueProxy>>_TypeInfo
                );
    FUN_02d6084c(System_Collections_Generic_ICollection<KeyValuePair<string,_JToken>>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_ICollection<KeyValuePair<string,_object>>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_ICollection<Tuple<string,_string>>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_ICollection<char>_TypeInfo);
    FUN_02d6084c(PTR_DAT_06774438);
    FUN_02d6084c(PTR_DAT_06776cc0);
    FUN_02d6084c(System_Collections_Generic_ICollection<Column>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_ICollection<ControlInput>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_ICollection<ControlOutput>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_ICollection<CustomAttributeData>_TypeInfo);
    FUN_02d6084c(System_Collections_Generic_ICollection<CustomAttributeNamedArgument>_TypeInfo);
    FUN_02d6084c(PTR_DAT_06774018);
    FUN_02d6084c(System_Collections_Generic_ICollection<CustomAttributeTypedArgument>_TypeInfo);
    DAT_06b7f2d8 = 1;
  }
  switch(param_2) {
  case 0:
    puVar2 = (undefined8 *)PTR_DAT_0676d7f8;
    break;
  case 1:
    puVar2 = (undefined8 *)
             System_Linq_Expressions_Interpreter_HybridReferenceDictionary<ParameterExpression,_LocalVariables_VariableScope>_TypeInfo
    ;
    break;
  default:
    local_38 = *(undefined8 *)System_Collections_Generic_HashSet<string>_TypeInfo;
    uStack_30 = 0xffffffffffffffff;
    local_28 = param_2;
    uVar1 = FUN_0503c914(&local_38,0);
    return uVar1;
  case 10:
    puVar2 = (undefined8 *)
             System_Collections_Generic_ICollection<KeyValuePair<string,_JToken>>_TypeInfo;
    break;
  case 0xc:
    puVar2 = (undefined8 *)PTR_DAT_06774438;
    break;
  case 0xd:
    puVar2 = (undefined8 *)PTR_DAT_06773fd0;
    break;
  case 0xe:
    puVar2 = (undefined8 *)PTR_DAT_06773fc8;
    break;
  case 0xf:
    puVar2 = (undefined8 *)PTR_DAT_0678b8b0;
    break;
  case 0x10:
    puVar2 = (undefined8 *)PTR_DAT_06774018;
    break;
  case 0x11:
    puVar2 = (undefined8 *)System_Collections_Generic_HashSet<Event_Type>_TypeInfo;
    break;
  case 0x12:
    puVar2 = (undefined8 *)PTR_DAT_06773fc0;
    break;
  case 0x13:
    puVar2 = (undefined8 *)
             System_Collections_Generic_HashSet<OVRFaceExpressions_FaceExpression>_TypeInfo;
    break;
  case 0x14:
    puVar2 = (undefined8 *)PTR_DAT_0677f038;
    break;
  case 0x15:
    puVar2 = (undefined8 *)System_Collections_Generic_ICollection<Column>_TypeInfo;
    break;
  case 0x16:
    puVar2 = (undefined8 *)System_Collections_Generic_HashSet<StylePropertyId>_TypeInfo;
    break;
  case 0x17:
    puVar2 = (undefined8 *)System_Collections_Generic_HashSet<OVRManager_EventListener>_TypeInfo;
    break;
  case 0x18:
    puVar2 = (undefined8 *)System_Collections_Generic_HashSet<Text>_TypeInfo;
    break;
  case 0x19:
    puVar2 = (undefined8 *)System_Collections_Generic_HashSet<VisualElement>_TypeInfo;
    break;
  case 0x1a:
    puVar2 = (undefined8 *)System_Collections_Generic_HashSet<StyleSheet>_TypeInfo;
    break;
  case 0x1b:
    puVar2 = (undefined8 *)System_Collections_Generic_ICollection<char>_TypeInfo;
    break;
  case 0x1c:
    puVar2 = (undefined8 *)Unity_Hierarchy_HierarchyPropertyUnmanaged<int>_TypeInfo;
    break;
  case 0x1d:
    puVar2 = (undefined8 *)System_ComponentModel_ExtenderProvidedPropertyAttribute_var;
    break;
  case 0x1e:
    puVar2 = (undefined8 *)System_Collections_Generic_HashSet<VisualTreeAsset>_TypeInfo;
    break;
  case 0x1f:
    puVar2 = (undefined8 *)System_Collections_Generic_HashSet<Type>_TypeInfo;
    break;
  case 0x20:
    puVar2 = (undefined8 *)System_Collections_Generic_ICollection<ControlInput>_TypeInfo;
    break;
  case 0x21:
    puVar2 = (undefined8 *)
             System_Collections_Generic_HashSet<TeleportationMultiAnchorVolume>_TypeInfo;
    break;
  case 0x22:
    puVar2 = (undefined8 *)
             System_Linq_Expressions_Interpreter_HybridReferenceDictionary<LabelTarget,_LabelInfo>_TypeInfo
    ;
    break;
  case 0x23:
    puVar2 = (undefined8 *)PTR_DAT_06771af8;
    break;
  case 0x24:
    puVar2 = (undefined8 *)System_Exception_var;
    break;
  case 0x25:
    puVar2 = (undefined8 *)PTR_DAT_06776cc0;
    break;
  case 0x26:
    puVar2 = (undefined8 *)System_Collections_Generic_HashSet<TrackableId>_TypeInfo;
    break;
  case 0x27:
    puVar2 = (undefined8 *)System_Collections_Generic_ICollection<ControlOutput>_TypeInfo;
    break;
  case 0x28:
    puVar2 = (undefined8 *)System_Collections_Generic_ICollection<CustomAttributeData>_TypeInfo;
    break;
  case 0x29:
    puVar2 = (undefined8 *)
             System_Collections_Generic_ICollection<CustomAttributeTypedArgument>_TypeInfo;
    break;
  case 0x2a:
    puVar2 = (undefined8 *)System_Collections_Generic_ICollection<Tuple<string,_string>>_TypeInfo;
    break;
  case 0x2b:
    puVar2 = (undefined8 *)
             System_Collections_Generic_ICollection<KeyValuePair<string,_FieldValueProxy>>_TypeInfo;
    break;
  case 0x2c:
    puVar2 = (undefined8 *)PTR_DAT_0678b8d0;
    break;
  case 0x2d:
    puVar2 = (undefined8 *)
             System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_TypeInfo;
    break;
  case 0x2e:
    puVar2 = (undefined8 *)PTR_DAT_06773fa8;
    break;
  case 0x2f:
    puVar2 = (undefined8 *)System_Collections_Generic_HashSet<XRLoader>_TypeInfo;
    break;
  case 0x30:
    puVar2 = (undefined8 *)System_Collections_Generic_HashSet<uint>_TypeInfo;
    break;
  case 0x31:
    puVar2 = (undefined8 *)System_Collections_Generic_ICollection<ArraySegment<byte>>_TypeInfo;
    break;
  case 0x32:
    puVar2 = (undefined8 *)
             System_Collections_Generic_ICollection<KeyValuePair<string,_object>>_TypeInfo;
    break;
  case 0x33:
    puVar2 = (undefined8 *)Newtonsoft_Json_IArrayPool<char>_TypeInfo;
    break;
  case 0x34:
    puVar2 = (undefined8 *)
             System_Collections_Generic_ICollection<CustomAttributeNamedArgument>_TypeInfo;
  }
  return *puVar2;
}


