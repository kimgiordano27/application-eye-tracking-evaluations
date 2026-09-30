/*
FUNCTION_NAME: FUN_038977b4
ENTRY_POINT: 038977b4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 104
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;telemetry_or_network_hits_6;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_038977b4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_MoveNext__
  ;
  if ((DAT_0413823f & 1) == 0) {
    FUN_01ab69ac(
                Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_get_Current__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_Dispose__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_MoveNext__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_get_Current__
                );
    FUN_01ab69ac(
                Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_MoveNext__
                );
    DAT_0413823f = 1;
  }
  puVar4 = 
  Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_get_Current__
  ;
  puVar3 = 
  Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_MoveNext__
  ;
  puVar2 = 
  Method_System_Collections_Generic_List_Enumerator<OVRPassthroughLayer_SerializedSurfaceGeometry>_Dispose__
  ;
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar5 = *(long *)puVar1;
  }
  puVar1 = 
  Method_System_Collections_Generic_HashSet_Enumerator<OVRManager_EventListener>_get_Current__;
  uVar7 = **(undefined8 **)(lVar5 + 0xb8);
  uVar6 = thunk_FUN_01a89e68(*(undefined8 *)puVar3);
  FUN_021dd4e8(uVar6,uVar7,*(undefined8 *)puVar4,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_021c3368(uVar6,*(undefined8 *)puVar1);
  return;
}


