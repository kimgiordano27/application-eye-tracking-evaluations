/*
FUNCTION_NAME: Unity.Services.Analytics.Internal.BufferX$$remove_EventsCleared
ENTRY_POINT: 05aba078
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_2
*/


void Unity_Services_Analytics_Internal_BufferX__remove_EventsCleared(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  if ((DAT_06b816fe & 1) == 0) {
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary<int,_Future_DocumentReference_Action>_Remove__
                );
    FUN_02d6084c(Method_System_Collections_Generic_Dictionary<MeshId,_MeshTransform>_set_Item__);
    FUN_02d6084c(Method_System_Collections_Generic_Dictionary<MethodInfo,_IOptimizedInvoker>__ctor__
                );
    FUN_02d6084c(Method_System_Collections_Generic_Dictionary<MethodInfo,_IOptimizedInvoker>_Add__);
    FUN_02d6084c(Method_System_Collections_Generic_Dictionary<MethodInfo,_IOptimizedInvoker>_Clear__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary<MethodInfo,_IOptimizedInvoker>_TryGetValue__
                );
    FUN_02d6084c(Method_System_Collections_Generic_Dictionary<MeshId,_MeshInfo>_Remove__);
    FUN_02d6084c(Method_System_Collections_Generic_Dictionary<OVRAnchor,_Transform>_GetEnumerator__)
    ;
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary<OVRAnchor,_OVRSceneManager_RoomLayoutUuids>_Add__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary<OVRAnchor,_OVRSceneManager_RoomLayoutUuids>_GetEnumerator__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary<OVRAnchor,_OVRSceneManager_RoomLayoutUuids>_get_Item__
                );
    FUN_02d6084c(
                Method_System_Collections_Generic_Dictionary<OVRAnchor,_OVRSceneManager_RoomLayoutUuids>_get_Values__
                );
    DAT_06b816fe = 1;
  }
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<int,_Future_DocumentReference_Action>_Remove__;
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_03d8a8ac((long *)(param_1 + 0x50),
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<int,_Future_DocumentReference_Action>_Remove__
                );
  }
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_03d8a8ac((long *)(param_1 + 0x48),*(undefined8 *)puVar1);
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_03d817d4((long *)(param_1 + 0x40),
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<MeshId,_MeshTransform>_set_Item__);
  }
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<OVRAnchor,_OVRSceneManager_RoomLayoutUuids>_get_Values__
  ;
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_03d80544((long *)(param_1 + 0x38),
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<MethodInfo,_IOptimizedInvoker>_Add__)
    ;
  }
  uVar2 = FUN_03daac6c(param_1 + 0x28,*(undefined8 *)puVar1);
  if ((uVar2 & 1) != 0) {
    FUN_03daac9c(param_1 + 0x28,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<OVRAnchor,_OVRSceneManager_RoomLayoutUuids>_GetEnumerator__
                );
  }
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<OVRAnchor,_OVRSceneManager_RoomLayoutUuids>_get_Item__
  ;
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_03d82a34((long *)(param_1 + 0x20),
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<MethodInfo,_IOptimizedInvoker>__ctor__
                );
  }
  uVar2 = FUN_03dad66c(param_1 + 0x10,*(undefined8 *)puVar1);
  if ((uVar2 & 1) != 0) {
    FUN_03dad69c(param_1 + 0x10,
                 *(undefined8 *)
                  Method_System_Collections_Generic_Dictionary<OVRAnchor,_OVRSceneManager_RoomLayoutUuids>_Add__
                );
    return;
  }
  return;
}


