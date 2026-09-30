/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.BodyJointLocation>
ENTRY_POINT: 0206ffc4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_BodyJointLocation>(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  
  puVar1 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
                    /* try { // try from 0206ffcc to 021700ab has its CatchHandler @ 020700c8 */
  if ((DAT_0482f5c3 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_Serializer<uint>__ctor__);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_Serializer<ulong>__ctor__);
    DAT_0482f5c3 = 1;
  }
  puVar3 = Method_Sirenix_Serialization_Serializer<ulong>__ctor__;
  puVar2 = Method_Sirenix_Serialization_Serializer<uint>__ctor__;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_04073094(0,0,0);
  plVar4 = (long *)thunk_FUN_01f117cc(*(undefined8 *)puVar3);
  FUN_02756464(plVar4,0,*(undefined8 *)puVar2);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x238))(plVar4,0,0,0,*(undefined8 *)(*plVar4 + 0x240));
                    /* WARNING: Could not recover jumptable at 0x02070090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x218))(plVar4,0,*(undefined8 *)(*plVar4 + 0x220));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


