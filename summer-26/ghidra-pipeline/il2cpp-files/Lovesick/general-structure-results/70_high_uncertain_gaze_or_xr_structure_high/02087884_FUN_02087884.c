/*
FUNCTION_NAME: FUN_02087884
ENTRY_POINT: 02087884
PROGRAM: Lovesick-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void FUN_02087884(long *param_1)

{
  byte bVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((DAT_03780cd6 & 1) == 0) {
    thunk_FUN_00d48444(OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_ValueTuple<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericStructType>_System_Collections_IStructuralComparable_CompareTo__
                      );
    DAT_03780cd6 = 1;
  }
  if (param_1 == (long *)0x0) {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar3 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar4 = thunk_FUN_00d48444(
                              UnityEngine_XR_ARSubsystems_XRCpuImage_Api_OnImageRequestCompleteDelegate_TypeInfo
                              );
    FUN_016ec5b8(uVar3,uVar4,0);
    uVar4 = thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<int>_get_Current__)
    ;
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar3,uVar4);
  }
  lVar5 = *param_1;
  bVar1 = *(byte *)(*(long *)OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo + 300);
  if ((*(byte *)(lVar5 + 300) < bVar1) ||
     (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
      *(long *)OVRTask<OVRResult<ulong,_OVRPlugin_Result>>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
    FUN_00da544c(param_1);
  }
  plVar2 = (long *)(**(code **)(lVar5 + 0x238))(param_1,*(undefined8 *)(lVar5 + 0x240));
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*plVar2 ==
      *(long *)
       Method_System_ValueTuple<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericStructType>_System_Collections_IStructuralComparable_CompareTo__
     ) {
    thunk_FUN_00d3590c(param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da544c();
}


