/*
FUNCTION_NAME: FUN_088b469c
ENTRY_POINT: 088b469c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_7;telemetry_or_network_hits_3
*/


undefined8 FUN_088b469c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  puVar1 = PTR_DAT_08e69d30;
  if ((DAT_0943e135 & 1) == 0) {
    FUN_03c8f898(System_Collections_Generic_List<OVRInputModule_InputSource>_TypeInfo);
    FUN_03c8f898(
                System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo
                );
    FUN_03c8f898(
                System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>_TypeInfo
                );
    FUN_03c8f898(
                Unity_Services_Core_Scheduler_Internal_MinimumBinaryHeap<ScheduledInvocation>_TypeInfo
                );
    FUN_03c8f898(PTR_DAT_08e69d30);
    FUN_03c8f898(System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo);
    FUN_03c8f898(System_Collections_Generic_List<MB3_AgglomerativeClustering_item_s>_TypeInfo);
    DAT_0943e135 = 1;
  }
  puVar2 = Unity_Services_Core_Scheduler_Internal_MinimumBinaryHeap<ScheduledInvocation>_TypeInfo;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uVar5 = FUN_088b489c(param_1,param_2);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_03cd7500(*(long *)puVar1);
  }
  lVar6 = FUN_0465ca6c(uVar5,*(undefined8 *)puVar2);
  puVar2 = System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo;
  puVar1 = 
  System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo;
  if (lVar6 == 0) {
LAB_088b481c:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (*(int *)(lVar6 + 0x18) != 0) {
    if (param_2 == 0) goto LAB_088b481c;
    iVar3 = FUN_088a5ec0(param_2,0);
    FUN_05213710(&local_48,lVar6,*(undefined8 *)puVar2);
    do {
      uVar7 = FUN_049dc4d0(&local_48,*(undefined8 *)puVar1);
      if ((uVar7 & 1) == 0) {
        FUN_049dc4cc(&local_48,
                     *(undefined8 *)
                      System_Collections_Generic_List<OVRInputModule_InputSource>_TypeInfo);
        return 0;
      }
      if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      iVar4 = FUN_088a5ec0(local_38,0);
    } while (iVar4 != iVar3);
    FUN_049dc4cc(&local_48,
                 *(undefined8 *)System_Collections_Generic_List<OVRInputModule_InputSource>_TypeInfo
                );
  }
  return 1;
}


