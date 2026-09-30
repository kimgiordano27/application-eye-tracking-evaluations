/*
FUNCTION_NAME: FUN_035b0f5c
ENTRY_POINT: 035b0f5c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 170
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_1
*/


long FUN_035b0f5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  
  if ((DAT_04833563 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<sbyte>__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    thunk_FUN_01efb3a4(Method_Oculus_Interaction_BestSelectInteractorGroup_<>c_<_cctor>b__34_3__);
    thunk_FUN_01efb3a4(Method_Oculus_Interaction_BestSelectInteractorGroup_<>c_<Preprocess>b__18_0__
                      );
    thunk_FUN_01efb3a4(
                      Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_get_Count__
                      );
    DAT_04833563 = 1;
  }
  lVar1 = FUN_035b08ac(param_3);
  if ((lVar1 != 0) &&
     (uVar2 = FUN_0340e600(lVar1,**(undefined8 **)
                                   (*(long *)
                                     Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__
                                   + 0xb8),0), (uVar2 & 1) != 0)) {
    return lVar1;
  }
  lVar1 = FUN_042af88c(*(undefined4 *)
                        (*(long *)
                          Method_Unity_VisualScripting_StaticFunctionInvoker<Quaternion,_Quaternion,_bool>__ctor__
                        + 0xe0));
  return lVar1;
}


