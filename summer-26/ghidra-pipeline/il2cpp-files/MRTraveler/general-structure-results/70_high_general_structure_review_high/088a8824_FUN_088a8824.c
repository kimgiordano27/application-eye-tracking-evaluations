/*
FUNCTION_NAME: FUN_088a8824
ENTRY_POINT: 088a8824
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;telemetry_or_network_hits_3
*/


void FUN_088a8824(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if ((DAT_0943e0cc & 1) == 0) {
    FUN_03c8f898(System_Collections_Generic_List<OVRInputModule_InputSource>_TypeInfo);
    FUN_03c8f898(
                System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo
                );
    FUN_03c8f898(
                System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>_TypeInfo
                );
    FUN_03c8f898(System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo);
    DAT_0943e0cc = 1;
  }
  puVar2 = 
  System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo;
  puVar1 = System_Collections_Generic_List<OVRInputModule_InputSource>_TypeInfo;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  if ((param_2 != 0) && (*(long *)(param_2 + 0x10) != 0)) {
    FUN_05213710(&local_38,*(long *)(param_2 + 0x10),
                 *(undefined8 *)
                  System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo);
    while (uVar3 = FUN_049dc4d0(&local_38,*(undefined8 *)puVar2), (uVar3 & 1) != 0) {
      FUN_088a86e0(param_1,local_28);
    }
    FUN_049dc4cc(&local_38,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


