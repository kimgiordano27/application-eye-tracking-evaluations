/*
FUNCTION_NAME: Unity.Mathematics.uint4x2$$op_Division
ENTRY_POINT: 0214fb48
PROGRAM: Lovesick-libil2cpp.so
SCORE: 144
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_21;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1
*/


void Unity_Mathematics_uint4x2__op_Division(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint in_w8;
  long in_x9;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *plVar6;
  uint *unaff_x23;
  long lVar7;
  uint uVar8;
  
  plVar6 = *(long **)(unaff_x21 + 0x1f8);
  unaff_x20[0x11] = in_x9;
  lVar3 = *plVar6;
  if (lVar3 != 0) {
    lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
    if (lVar3 == 0) goto LAB_02151034;
    in_w8 = *unaff_x23;
  }
  puVar2 = 
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VRequestResponse<Dictionary<string,_string>>>_TypeInfo
  ;
  if (0xe < in_w8) {
    unaff_x20[0x12] = *plVar6;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar1 = Method_System_Dynamic_ExpandoObject_ValueCollection_Add__;
    if (in_w8 < 0x10) goto LAB_02151030;
    unaff_x20[0x13] = *(long *)puVar2;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar2 = PTR_DAT_033f6ce8;
    if (in_w8 < 0x11) goto LAB_02151030;
    unaff_x20[0x14] = *(long *)puVar1;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar1 = System_Func<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10,_TResult>_var;
    if (in_w8 < 0x12) goto LAB_02151030;
    unaff_x20[0x15] = *(long *)puVar2;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar2 = Method_Meta_XR_ImmersiveDebugger_UserInterface_Generic_Controller_Prepend<Switch>__;
    if (in_w8 < 0x13) goto LAB_02151030;
    unaff_x20[0x16] = *(long *)puVar1;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar1 = 
    Method_System_Collections_Generic_Dictionary<Type,_List<fsObjectProcessor>>_TryGetValue__;
    if (in_w8 < 0x14) goto LAB_02151030;
    unaff_x20[0x17] = *(long *)puVar2;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar2 = 
    Method_System_Collections_Generic_List_Enumerator<OVRVirtualKeyboard_IInputSource>_Dispose__;
    if (in_w8 < 0x15) goto LAB_02151030;
    unaff_x20[0x18] = *(long *)puVar1;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar1 = Method_Oculus_Platform_Message<PartyID>__ctor__;
    if (in_w8 < 0x16) goto LAB_02151030;
    unaff_x20[0x19] = *(long *)puVar2;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar2 = StringLiteral_6561;
    if (in_w8 < 0x17) goto LAB_02151030;
    unaff_x20[0x1a] = *(long *)puVar1;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar1 = Method_UnityEngine_XR_ARFoundation_ARTrackable<XRRaycast,_ARRaycast>_get_trackableId__;
    if (in_w8 < 0x18) goto LAB_02151030;
    unaff_x20[0x1b] = *(long *)puVar2;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar2 = Method_Sirenix_Utilities_TypeExtensions_GetCustomAttribute<GlobalConfigAttribute>__;
    if (in_w8 < 0x19) goto LAB_02151030;
    unaff_x20[0x1c] = *(long *)puVar1;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar1 = UnityEngine_Events_CachedInvokableCall<string>_TypeInfo;
    if (in_w8 < 0x1a) goto LAB_02151030;
    unaff_x20[0x1d] = *(long *)puVar2;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar2 = StringLiteral_9077;
    if (in_w8 < 0x1b) goto LAB_02151030;
    unaff_x20[0x1e] = *(long *)puVar1;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar1 = Method_OVRPlugin_<>c_<_cctor>b__796_68__;
    if (in_w8 < 0x1c) goto LAB_02151030;
    unaff_x20[0x1f] = *(long *)puVar2;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar2 = Method_UnityEngine_XR_ARFoundation_ARTrackable<XRRaycast,_ARRaycast>__ctor__;
    if (in_w8 < 0x1d) goto LAB_02151030;
    unaff_x20[0x20] = *(long *)puVar1;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar1 = StringLiteral_13443;
    if (in_w8 < 0x1e) goto LAB_02151030;
    unaff_x20[0x21] = *(long *)puVar2;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar2 = StringLiteral_6519;
    if (in_w8 < 0x1f) goto LAB_02151030;
    unaff_x20[0x22] = *(long *)puVar1;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar1 = Method_UnityEngine_Events_UnityEvent<MessageEventArgs>_RemoveListener__;
    if (in_w8 < 0x20) goto LAB_02151030;
    unaff_x20[0x23] = *(long *)puVar2;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar2 = Method_UnityEngine_UIElements_ChangeEvent<bool>_GetPooled__;
    if (in_w8 < 0x21) goto LAB_02151030;
    unaff_x20[0x24] = *(long *)puVar1;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar1 = PTR_DAT_033eac98;
    if (in_w8 < 0x22) goto LAB_02151030;
    unaff_x20[0x25] = *(long *)puVar2;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar2 = Method_System_Xml_Schema_XdrBuilder_XDR_BuildAttributeType_Required__;
    if (in_w8 < 0x23) goto LAB_02151030;
    unaff_x20[0x26] = *(long *)puVar1;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar1 = Method_System_Collections_Generic_List<XRTargetEvaluator>_GetEnumerator__;
    if (in_w8 < 0x24) goto LAB_02151030;
    unaff_x20[0x27] = *(long *)puVar2;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar2 = Method_System_Runtime_Serialization_Formatters_Binary_BinaryFormatter_Serialize__;
    if (in_w8 < 0x25) goto LAB_02151030;
    unaff_x20[0x28] = *(long *)puVar1;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar1 = StringLiteral_2090;
    if (in_w8 < 0x26) goto LAB_02151030;
    unaff_x20[0x29] = *(long *)puVar2;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar2 = System_Globalization_GregorianCalendarTypes_TypeInfo;
    if (in_w8 < 0x27) goto LAB_02151030;
    unaff_x20[0x2a] = *(long *)puVar1;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar1 = Method_Newtonsoft_Json_Schema_Extensions_<>c__DisplayClass1_0_<IsValid>b__0__;
    if (in_w8 < 0x28) goto LAB_02151030;
    unaff_x20[0x2b] = *(long *)puVar2;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar2 = PTR_DAT_033ef240;
    if (in_w8 < 0x29) goto LAB_02151030;
    unaff_x20[0x2c] = *(long *)puVar1;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar1 = Meta_XR_MRUtilityKit_SceneDecorator_PoolManagerComponent_TypeInfo;
    if (in_w8 < 0x2a) goto LAB_02151030;
    unaff_x20[0x2d] = *(long *)puVar2;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar2 = Method_Oculus_Platform_Message<ShareMediaResult>_get_Data__;
    if (in_w8 < 0x2b) goto LAB_02151030;
    unaff_x20[0x2e] = *(long *)puVar1;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar1 = UnityEngine_XR_Interaction_Toolkit_Transformers_IXRDropTransformer_TypeInfo;
    if (in_w8 < 0x2c) goto LAB_02151030;
    unaff_x20[0x2f] = *(long *)puVar2;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar2 = Mono_Security_Authenticode_AuthenticodeDeformatter_TypeInfo;
    if (in_w8 < 0x2d) goto LAB_02151030;
    unaff_x20[0x30] = *(long *)puVar1;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar1 = Method_System_Nullable<short>_get_HasValue__;
    if (in_w8 < 0x2e) goto LAB_02151030;
    unaff_x20[0x31] = *(long *)puVar2;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar2 = 
    Method_Meta_XR_MRUtilityKit_SceneDecorator_PoolManagerComponent_DefaultCallbacks_Create__;
    if (in_w8 < 0x2f) goto LAB_02151030;
    unaff_x20[0x32] = *(long *)puVar1;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar1 = StringLiteral_8892;
    if (in_w8 < 0x30) goto LAB_02151030;
    unaff_x20[0x33] = *(long *)puVar2;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar2 = Method_Newtonsoft_Json_Bson_BsonWriter_WriteComment__;
    if (in_w8 < 0x31) goto LAB_02151030;
    unaff_x20[0x34] = *(long *)puVar1;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar1 = Method_System_Data_Constraint_set_ConstraintName__;
    if (in_w8 < 0x32) goto LAB_02151030;
    unaff_x20[0x35] = *(long *)puVar2;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar2 = Newtonsoft_Json_Linq_JConstructor_TypeInfo;
    if (in_w8 < 0x33) goto LAB_02151030;
    unaff_x20[0x36] = *(long *)puVar1;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar1 = Method_System_Data_ExceptionBuilder__InvalidEnumArgumentException<DataRowState>__;
    if (in_w8 < 0x34) goto LAB_02151030;
    unaff_x20[0x37] = *(long *)puVar2;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar2 = Method_Meta_XR_Acoustics_Spectrum_<>c_<get_Item>b__11_0__;
    if (in_w8 < 0x35) goto LAB_02151030;
    unaff_x20[0x38] = *(long *)puVar1;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar1 = Method_System_Collections_Generic_HashSet<InternedString>__ctor__;
    if (in_w8 < 0x36) goto LAB_02151030;
    unaff_x20[0x39] = *(long *)puVar2;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar2 = StringLiteral_6987;
    if (in_w8 < 0x37) goto LAB_02151030;
    unaff_x20[0x3a] = *(long *)puVar1;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar1 = Meta_XR_MultiplayerBlocks_Colocation_Logger_TypeInfo;
    if (in_w8 < 0x38) goto LAB_02151030;
    unaff_x20[0x3b] = *(long *)puVar2;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar2 = Method_System_Data_RBTree_RBTreeEnumerator<__Il2CppFullySharedGenericType>_MoveNext__;
    if (in_w8 < 0x39) goto LAB_02151030;
    unaff_x20[0x3c] = *(long *)puVar1;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar1 = Method_System_Linq_Expressions_Expression_MultiplyAssignChecked__;
    if (in_w8 < 0x3a) goto LAB_02151030;
    unaff_x20[0x3d] = *(long *)puVar2;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar2 = System_Action<BaseVisualElementPanel>_TypeInfo;
    if (in_w8 < 0x3b) goto LAB_02151030;
    unaff_x20[0x3e] = *(long *)puVar1;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar1 = Method_System_Collections_Generic_List<MRUKTrackable>_Clear__;
    if (in_w8 < 0x3c) goto LAB_02151030;
    unaff_x20[0x3f] = *(long *)puVar2;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar2 = StringLiteral_11794;
    if (in_w8 < 0x3d) goto LAB_02151030;
    unaff_x20[0x40] = *(long *)puVar1;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar1 = StringLiteral_9790;
    if (in_w8 < 0x3e) goto LAB_02151030;
    unaff_x20[0x41] = *(long *)puVar2;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar2 = PTR_DAT_033f4460;
    if (in_w8 < 0x3f) goto LAB_02151030;
    unaff_x20[0x42] = *(long *)puVar1;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar1 = PTR_DAT_033ef318;
    if (in_w8 < 0x40) goto LAB_02151030;
    unaff_x20[0x43] = *(long *)puVar2;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar2 = Method_UnityEngine_XR_ARFoundation_ARAnchorManager_AttachAnchor__;
    if (in_w8 < 0x41) goto LAB_02151030;
    unaff_x20[0x44] = *(long *)puVar1;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar1 = Method_System_Collections_Generic_Dictionary<Face,_int>_Clear__;
    if (in_w8 < 0x42) goto LAB_02151030;
    unaff_x20[0x45] = *(long *)puVar2;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar2 = Method_Sirenix_Serialization_SerializationNodeDataReader_ReadInt32__;
    if (in_w8 < 0x43) goto LAB_02151030;
    unaff_x20[0x46] = *(long *)puVar1;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar1 = Method_System_Collections_Generic_Dictionary<string,_Type>_GetEnumerator__;
    if (in_w8 < 0x44) goto LAB_02151030;
    unaff_x20[0x47] = *(long *)puVar2;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar2 = StringLiteral_3794;
    if (in_w8 < 0x45) goto LAB_02151030;
    unaff_x20[0x48] = *(long *)puVar1;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar1 = StringLiteral_7611;
    if (in_w8 < 0x46) goto LAB_02151030;
    unaff_x20[0x49] = *(long *)puVar2;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar2 = 
    Field_<PrivateImplementationDetails>_9ACEFCC0C950280B64AB9E045E38C34ABF71EC70A0DC61B9C621C6BFB4F78047
    ;
    if (in_w8 < 0x47) goto LAB_02151030;
    unaff_x20[0x4a] = *(long *)puVar1;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar1 = PTR_DAT_033f4798;
    if (in_w8 < 0x48) goto LAB_02151030;
    unaff_x20[0x4b] = *(long *)puVar2;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar2 = Meta_WitAi_Lib_MicBase_<ReadRawAudio>d__44_TypeInfo;
    if (in_w8 < 0x49) goto LAB_02151030;
    unaff_x20[0x4c] = *(long *)puVar1;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar1 = Method_UnityEngine_InputSystem_InputControlList<InputDevice>_IndexOf__;
    if (in_w8 < 0x4a) goto LAB_02151030;
    unaff_x20[0x4d] = *(long *)puVar2;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar2 = StringLiteral_10467;
    if (in_w8 < 0x4b) goto LAB_02151030;
    unaff_x20[0x4e] = *(long *)puVar1;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar1 = Method_System_Reflection_Emit_TypeBuilder_get_AssemblyQualifiedName__;
    if (in_w8 < 0x4c) goto LAB_02151030;
    unaff_x20[0x4f] = *(long *)puVar2;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar2 = StringLiteral_9623;
    if (in_w8 < 0x4d) goto LAB_02151030;
    unaff_x20[0x50] = *(long *)puVar1;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar1 = PTR_DAT_033f6f38;
    if (in_w8 < 0x4e) goto LAB_02151030;
    unaff_x20[0x51] = *(long *)puVar2;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar2 = Method_System_Collections_Generic_Dictionary<MemberInfo,_WeakValueSetter>_TryGetValue__
    ;
    if (in_w8 < 0x4f) goto LAB_02151030;
    unaff_x20[0x52] = *(long *)puVar1;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar1 = Method_System_Collections_Generic_List_Enumerator<CanvasGroup>_MoveNext__;
    if (in_w8 < 0x50) goto LAB_02151030;
    unaff_x20[0x53] = *(long *)puVar2;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar2 = Method_Obi_ObiList<ObiList<ObiPathFrame>>__ctor__;
    if (in_w8 < 0x51) goto LAB_02151030;
    unaff_x20[0x54] = *(long *)puVar1;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar1 = Method_System_Collections_Generic_Dictionary<Hash128,_int[]>_Clear__;
    if (in_w8 < 0x52) goto LAB_02151030;
    unaff_x20[0x55] = *(long *)puVar2;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar2 = StringLiteral_10378;
    if (in_w8 < 0x53) goto LAB_02151030;
    unaff_x20[0x56] = *(long *)puVar1;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar1 = StringLiteral_6605;
    if (in_w8 < 0x54) goto LAB_02151030;
    unaff_x20[0x57] = *(long *)puVar2;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar2 = UnityEngine_EventSystems_ExecuteEvents_EventFunction<IPointerDownHandler>_TypeInfo;
    if (in_w8 < 0x55) goto LAB_02151030;
    unaff_x20[0x58] = *(long *)puVar1;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar1 = StringLiteral_8618;
    if (in_w8 < 0x56) goto LAB_02151030;
    unaff_x20[0x59] = *(long *)puVar2;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar2 = ContextMenuItemList_TypeInfo;
    if (in_w8 < 0x57) goto LAB_02151030;
    unaff_x20[0x5a] = *(long *)puVar1;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar1 = StringLiteral_13554;
    if (in_w8 < 0x58) goto LAB_02151030;
    unaff_x20[0x5b] = *(long *)puVar2;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar2 = TempoTarget_<>c__DisplayClass14_0_TypeInfo;
    if (in_w8 < 0x59) goto LAB_02151030;
    unaff_x20[0x5c] = *(long *)puVar1;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar1 = System_Collections_Generic_Dictionary<string,_EventDescriptor>_TypeInfo;
    if (in_w8 < 0x5a) goto LAB_02151030;
    unaff_x20[0x5d] = *(long *)puVar2;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar2 = 
    Method_System_Collections_Generic_List<OVRHaptics_OVRHapticsOutput_ClipPlaybackTracker>_get_Count__
    ;
    if (in_w8 < 0x5b) goto LAB_02151030;
    unaff_x20[0x5e] = *(long *)puVar1;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar1 = System_Collections_Generic_IEnumerator<ParameterExpression>_TypeInfo;
    if (in_w8 < 0x5c) goto LAB_02151030;
    unaff_x20[0x5f] = *(long *)puVar2;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar2 = StringLiteral_8709;
    if (in_w8 < 0x5d) goto LAB_02151030;
    unaff_x20[0x60] = *(long *)puVar1;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar1 = Method_System_Collections_Generic_List<RadioButton>_Add__;
    if (in_w8 < 0x5e) goto LAB_02151030;
    unaff_x20[0x61] = *(long *)puVar2;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar2 = 
    DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_108_var
    ;
    if (in_w8 < 0x5f) goto LAB_02151030;
    unaff_x20[0x62] = *(long *)puVar1;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar1 = Method_UnityEngine_ProBuilder_MeshUtility_GeneratePerTriangleMesh__;
    if (in_w8 < 0x60) goto LAB_02151030;
    unaff_x20[99] = *(long *)puVar2;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar2 = StringLiteral_12992;
    if (in_w8 < 0x61) goto LAB_02151030;
    unaff_x20[100] = *(long *)puVar1;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar1 = Method_System_Collections_Generic_HashSet<MaskableGraphic>_Clear__;
    if (in_w8 < 0x62) goto LAB_02151030;
    unaff_x20[0x65] = *(long *)puVar2;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar2 = 
    Method_System_Collections_Generic_LinkedList<__Il2CppFullySharedGenericType>_ValidateNode__;
    if (in_w8 < 99) goto LAB_02151030;
    unaff_x20[0x66] = *(long *)puVar1;
    lVar3 = *(long *)puVar2;
    if (lVar3 != 0) {
      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar3 == 0) goto LAB_02151034;
      in_w8 = *unaff_x23;
    }
    puVar1 = 
    Method_System_Collections_Generic_Dictionary<MemberInfo,_UnitySerializationUtility_CachedSerializationBackendResult>_set_Item__
    ;
    if (99 < in_w8) {
      unaff_x20[0x67] = *(long *)puVar2;
      lVar3 = *(long *)puVar1;
      if ((lVar3 != 0) &&
         (lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40)), lVar3 == 0)) {
LAB_02151034:
        uVar5 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
        FUN_00da5038(uVar5,0);
      }
      puVar2 = Method_System_Collections_Generic_HashSet<__Il2CppFullySharedGenericType>_Remove__;
      uVar8 = *unaff_x23;
      if (100 < uVar8) {
        unaff_x20[0x68] = *(long *)puVar1;
        lVar3 = *(long *)puVar2;
        if (lVar3 != 0) {
          lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
          if (lVar3 == 0) goto LAB_02151034;
          uVar8 = *unaff_x23;
        }
        puVar1 = Method_UnityEngine_Events_UnityEvent<HoverExitEventArgs>_Invoke__;
        if (0x65 < uVar8) {
          unaff_x20[0x69] = *(long *)puVar2;
          lVar3 = *(long *)puVar1;
          if (lVar3 != 0) {
            lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
            if (lVar3 == 0) goto LAB_02151034;
            uVar8 = *unaff_x23;
          }
          puVar2 = Method_Oculus_Interaction_PointableElement_HandlePointerEventRaised__;
          if (0x66 < uVar8) {
            unaff_x20[0x6a] = *(long *)puVar1;
            lVar3 = *(long *)puVar2;
            if (lVar3 != 0) {
              lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
              if (lVar3 == 0) goto LAB_02151034;
              uVar8 = *unaff_x23;
            }
            puVar1 = System_Func<StyleValues,_StyleValues,_float,_StyleValues>_TypeInfo;
            if (0x67 < uVar8) {
              unaff_x20[0x6b] = *(long *)puVar2;
              lVar3 = *(long *)puVar1;
              if (lVar3 != 0) {
                lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
                if (lVar3 == 0) goto LAB_02151034;
                uVar8 = *unaff_x23;
              }
              puVar2 = Method_System_Xml_XmlConvert_ToChar__;
              if (0x68 < uVar8) {
                unaff_x20[0x6c] = *(long *)puVar1;
                lVar3 = *(long *)puVar2;
                if (lVar3 != 0) {
                  lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
                  if (lVar3 == 0) goto LAB_02151034;
                  uVar8 = *unaff_x23;
                }
                puVar1 = Method_NaughtyAttributes_DropdownList<object>_Add__;
                if (0x69 < uVar8) {
                  unaff_x20[0x6d] = *(long *)puVar2;
                  lVar3 = *(long *)puVar1;
                  if (lVar3 != 0) {
                    lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
                    if (lVar3 == 0) goto LAB_02151034;
                    uVar8 = *unaff_x23;
                  }
                  puVar2 = STMTextContainer_TypeInfo;
                  if (0x6a < uVar8) {
                    unaff_x20[0x6e] = *(long *)puVar1;
                    lVar3 = *(long *)puVar2;
                    if (lVar3 != 0) {
                      lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
                      if (lVar3 == 0) goto LAB_02151034;
                      uVar8 = *unaff_x23;
                    }
                    puVar1 = Method_Newtonsoft_Json_Bson_BsonReader_Read__;
                    if (0x6b < uVar8) {
                      unaff_x20[0x6f] = *(long *)puVar2;
                      lVar3 = *(long *)puVar1;
                      if (lVar3 != 0) {
                        lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
                        if (lVar3 == 0) goto LAB_02151034;
                        uVar8 = *unaff_x23;
                      }
                      puVar2 = Meta_XR_ImmersiveDebugger_DebugInspector_var;
                      if (0x6c < uVar8) {
                        unaff_x20[0x70] = *(long *)puVar1;
                        lVar3 = *(long *)puVar2;
                        if (lVar3 != 0) {
                          lVar3 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
                          if (lVar3 == 0) goto LAB_02151034;
                          uVar8 = *unaff_x23;
                        }
                        puVar1 = StringLiteral_3654;
                        if (0x6d < uVar8) {
                          unaff_x20[0x71] = *(long *)puVar2;
                          plVar6 = (long *)FUN_00da4fb8(*(undefined8 *)puVar1);
                          *(long **)(unaff_x19 + 0x1b8) = plVar6;
                          lVar3 = unaff_x20[3];
                          if (0 < (int)lVar3) {
                            lVar7 = 4;
                            do {
                              uVar8 = (int)lVar7 - 4;
                              if ((uint)lVar3 <= uVar8) goto LAB_02151030;
                              lVar3 = FUN_010f00fc();
                              if (plVar6 == (long *)0x0) {
LAB_02151040:
                    /* WARNING: Subroutine does not return */
                                FUN_00da518c();
                              }
                              if ((lVar3 != 0) &&
                                 (lVar4 = thunk_FUN_00d6225c(lVar3,*(undefined8 *)(*plVar6 + 0x40)),
                                 lVar4 == 0)) goto LAB_02151034;
                              if (*(uint *)(plVar6 + 3) <= uVar8) goto LAB_02151030;
                              plVar6[lVar7] = lVar3;
                              plVar6 = *(long **)(unaff_x19 + 0x1b8);
                              if (plVar6 == (long *)0x0) goto LAB_02151040;
                              if (*(uint *)(plVar6 + 3) <= uVar8) goto LAB_02151030;
                              if (plVar6[lVar7] == 0) goto LAB_02151040;
                              *(int *)(plVar6[lVar7] + 0x130) = (int)lVar7 + -3;
                              lVar3 = *(long *)unaff_x23;
                              lVar7 = lVar7 + 1;
                            } while ((int)lVar7 + -4 < (int)lVar3);
                          }
                          uVar5 = FUN_010f00fc();
                          *(undefined8 *)(unaff_x19 + 0x170) = uVar5;
                          uVar5 = FUN_010f00fc();
                          *(undefined8 *)(unaff_x19 + 0x178) = uVar5;
                          uVar5 = FUN_010f00fc();
                          *(undefined8 *)(unaff_x19 + 0x180) = uVar5;
                          uVar5 = FUN_010f00fc();
                          *(undefined8 *)(unaff_x19 + 0x188) = uVar5;
                          uVar5 = FUN_010f00fc();
                          *(undefined8 *)(unaff_x19 + 400) = uVar5;
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
LAB_02151030:
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


