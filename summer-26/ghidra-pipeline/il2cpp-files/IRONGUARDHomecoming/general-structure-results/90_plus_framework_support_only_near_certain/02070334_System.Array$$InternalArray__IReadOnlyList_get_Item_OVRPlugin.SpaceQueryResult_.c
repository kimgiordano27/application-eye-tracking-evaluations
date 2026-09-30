/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 02070334
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 112
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_SpaceQueryResult>(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *unaff_x19;
  long unaff_x20;
  
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
  thunk_FUN_01efb3a4(Method_Sirenix_Serialization_Serializer<string>__ctor__);
  thunk_FUN_01efb3a4(Method_Sirenix_Serialization_Serializer<ushort>__ctor__);
  *(undefined1 *)(unaff_x20 + 0x5c7) = 1;
  puVar2 = Method_Sirenix_Serialization_Serializer<ushort>__ctor__;
  puVar1 = Method_Sirenix_Serialization_Serializer<string>__ctor__;
                    /* try { // try from 02070364 to 0217043f has its CatchHandler @ 0207045c */
  if (*(int *)(*unaff_x19 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_04076670(0,0);
  plVar3 = (long *)thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_0274d58c(plVar3,0,*(undefined8 *)puVar1);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x228))(plVar3,0,0,*(undefined8 *)(*plVar3 + 0x230));
                    /* WARNING: Could not recover jumptable at 0x020703e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x218))(plVar3,0,*(undefined8 *)(*plVar3 + 0x220));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


