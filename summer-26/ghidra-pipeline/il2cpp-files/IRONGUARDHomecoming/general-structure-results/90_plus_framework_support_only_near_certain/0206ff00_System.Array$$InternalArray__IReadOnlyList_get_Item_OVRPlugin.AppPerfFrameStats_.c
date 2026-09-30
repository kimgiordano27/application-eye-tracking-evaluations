/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.AppPerfFrameStats>
ENTRY_POINT: 0206ff00
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_AppPerfFrameStats>(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *unaff_x19;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_Serializer<uint>__ctor__);
    thunk_FUN_01efb3a4(Method_Sirenix_Serialization_Serializer<ulong>__ctor__);
    *(undefined1 *)(unaff_x20 + 0x5c2) = 1;
  }
  puVar2 = Method_Sirenix_Serialization_Serializer<ulong>__ctor__;
  puVar1 = Method_Sirenix_Serialization_Serializer<uint>__ctor__;
                    /* try { // try from 0206ff3c to 0216ff87 has its CatchHandler @ 020700d0 */
  if (*(int *)(*unaff_x19 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh(0,0,0);
  plVar3 = (long *)thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_02756464(plVar3,0,*(undefined8 *)puVar1);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x238))(plVar3,0,0,0,*(undefined8 *)(*plVar3 + 0x240));
                    /* WARNING: Could not recover jumptable at 0x0206ffb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x218))(plVar3,0,*(undefined8 *)(*plVar3 + 0x220));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


