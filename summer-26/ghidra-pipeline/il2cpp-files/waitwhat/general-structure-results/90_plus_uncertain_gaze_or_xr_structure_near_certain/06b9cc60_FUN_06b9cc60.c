/*
FUNCTION_NAME: FUN_06b9cc60
ENTRY_POINT: 06b9cc60
PROGRAM: waitwhat-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_5;telemetry_or_network_hits_2;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_06b9cc60(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar3 = Method_System_Collections_Generic_HashSet<OVRPlugin_SpaceComponentType>_Add__;
  puVar2 = Method_System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_Add__;
  if ((DAT_075602bc & 1) == 0) {
    FUN_03188a78(Method_System_Collections_Generic_HashSet<OVRPlugin_SpaceComponentType>_Add__);
    FUN_03188a78(
                Method_System_Collections_Generic_HashSet<OVRPlugin_SpaceComponentType>_GetEnumerator__
                );
    FUN_03188a78(
                Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>__ctor__
                );
    FUN_03188a78(Method_System_Collections_Generic_HashSet<OVRPermissionsRequester_Permission>_Add__
                );
    FUN_03188a78(UnityEngine_Events_UnityAction<SelectExitEventArgs>_TypeInfo);
    DAT_075602bc = 1;
  }
  uVar5 = *(undefined8 *)puVar2;
  *param_1 = param_2;
  lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar5);
  FUN_043c3b0c(lVar6,1,*(undefined8 *)puVar3);
  *(long *)(param_1 + 2) = lVar6;
  puVar3 = Method_System_Collections_Generic_HashSet<OVRPlugin_SpaceComponentType>_GetEnumerator__;
  puVar2 = UnityEngine_Events_UnityAction<SelectExitEventArgs>_TypeInfo;
  if (lVar6 != 0) {
    iVar1 = *param_1;
    iVar4 = FUN_043c3e30(lVar6,*(undefined8 *)
                                Method_System_Collections_Generic_HashSet<OvrAvatarShaderNameUtils_KnownShader>__ctor__
                        );
    uVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar2);
    FUN_04395ffc(uVar5,iVar4 * iVar1,*(undefined8 *)puVar3);
    *(undefined8 *)(param_1 + 4) = uVar5;
    param_1[6] = param_3;
    param_1[7] = param_4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


