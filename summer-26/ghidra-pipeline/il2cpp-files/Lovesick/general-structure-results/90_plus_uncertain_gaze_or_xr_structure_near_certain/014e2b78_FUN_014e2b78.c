/*
FUNCTION_NAME: FUN_014e2b78
ENTRY_POINT: 014e2b78
PROGRAM: Lovesick-libil2cpp.so
SCORE: 105
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;telemetry_or_network_hits_3;functionality_data_collection_or_telemetry_hits_3
*/


undefined8 FUN_014e2b78(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  
  if ((DAT_03776f8a & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_PostDispatch__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<Edge>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<OVRTask<OVRPlugin_Result>>_Add__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<int,_LogEntry>_Add__);
    DAT_03776f8a = 1;
  }
  uVar1 = FUN_015ff8a0(param_1,0);
  puVar2 = (undefined8 *)Method_System_Collections_Generic_Dictionary<int,_LogEntry>_Add__;
  if (((uVar1 & 1) == 0) &&
     (puVar2 = (undefined8 *)Method_System_Collections_Generic_List<OVRTask<OVRPlugin_Result>>_Add__
     , param_2 != (long *)0x0)) {
    lVar4 = *param_2;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12a);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_PostDispatch__
           ) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 8) * 0x10 + 0x138);
          goto LAB_014e2c5c;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_00d59724(param_2,*(long *)
                                   Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_PostDispatch__
                          ,8);
LAB_014e2c5c:
    uVar3 = (*(code *)*puVar2)(param_2,puVar2[1]);
    uVar1 = FUN_015ff8a0(uVar3,0);
    puVar2 = (undefined8 *)Method_System_Collections_Generic_HashSet<Edge>__ctor__;
    if ((uVar1 & 1) == 0) {
      puVar2 = *(undefined8 **)
                (*(long *)
                  System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo +
                0xb8);
    }
  }
  return *puVar2;
}


