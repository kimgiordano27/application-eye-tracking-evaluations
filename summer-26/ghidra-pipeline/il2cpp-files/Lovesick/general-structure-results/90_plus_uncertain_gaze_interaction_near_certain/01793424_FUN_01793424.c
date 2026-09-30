/*
FUNCTION_NAME: FUN_01793424
ENTRY_POINT: 01793424
PROGRAM: Lovesick-libil2cpp.so
SCORE: 158
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_1
*/


undefined8 FUN_01793424(uint param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  puVar2 = System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo;
  if ((DAT_03778ef0 & 1) == 0) {
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(PTR_DAT_033ee3d0);
    thunk_FUN_00d48444(StringLiteral_5980);
    thunk_FUN_00d48444(
                      Method_Oculus_Platform_Models_DeserializableList<ApplicationInvite>_get_NextUrl__
                      );
    thunk_FUN_00d48444(Method_System_Span<__Il2CppFullySharedGenericType>_GetHashCode__);
    thunk_FUN_00d48444(StringLiteral_2446);
    thunk_FUN_00d48444(StringLiteral_4337);
    thunk_FUN_00d48444(System_Collections_Generic_List<HashSet<Face>>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_InlinedArray<InputControl>_RemoveAtByMovingTailWithCapacity__
                      );
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ReadQNameRef__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Append<InputRemoting_RemoteInputDevice>__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<OVRPlugin_Result>_GetEnumerator__);
    thunk_FUN_00d48444(
                      DigitalOpus_MB_Core_MB3_TextureCombinerPackerMeshBakerHorizontalVertical_TypeInfo
                      );
    thunk_FUN_00d48444(PTR_DAT_033f24c0);
    thunk_FUN_00d48444(StringLiteral_10655);
    thunk_FUN_00d48444(Method_UnityEngine_GameObject_GetComponentInChildren<FreezeObiRope>__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Concurrent_ConcurrentDictionary<Type,_object>_TryGetValue__
                      );
    thunk_FUN_00d48444(UnityEngine_Rendering_DebugUpdater_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<NavMeshLink>_Remove__);
    thunk_FUN_00d48444(Method_Polenter_Serialization_Advanced_XmlPropertySerializer__ctor__);
    thunk_FUN_00d48444(
                      Method_Oculus_Platform_Models_DeserializableList<LeaderboardEntry>_get_NextUrl__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponentInChildren<SpriteRenderer>__);
    thunk_FUN_00d48444(StringLiteral_7169);
    thunk_FUN_00d48444(System_Collections_Generic_List<TextStyle>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<HandJointId>_Clear__);
    DAT_03778ef0 = 1;
  }
  ppuVar1 = &PTR_DAT_0328bff0 + (int)param_1;
  if (0x17 < param_1) {
    ppuVar1 = (undefined **)(*(long *)puVar2 + 0xb8);
  }
  return *(undefined8 *)*ppuVar1;
}


