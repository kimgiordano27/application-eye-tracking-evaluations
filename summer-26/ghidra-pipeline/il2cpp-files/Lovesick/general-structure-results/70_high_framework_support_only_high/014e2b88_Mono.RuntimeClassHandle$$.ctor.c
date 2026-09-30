/*
FUNCTION_NAME: Mono.RuntimeClassHandle$$.ctor
ENTRY_POINT: 014e2b88
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;telemetry_or_network_hits_3;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_3
*/


undefined8 Mono_RuntimeClassHandle___ctor(ulong param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_PostDispatch__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<GetAvailableProfilerStats_StatInfo>_TypeInfo)
    ;
    thunk_FUN_00d48444(Method_System_Collections_Generic_HashSet<Edge>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<OVRTask<OVRPlugin_Result>>_Add__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<int,_LogEntry>_Add__);
    *(undefined1 *)(unaff_x21 + 0xf8a) = 1;
  }
  uVar1 = FUN_015ff8a0(param_2,0);
  puVar2 = (undefined8 *)Method_System_Collections_Generic_Dictionary<int,_LogEntry>_Add__;
  if (((uVar1 & 1) == 0) &&
     (puVar2 = (undefined8 *)Method_System_Collections_Generic_List<OVRTask<OVRPlugin_Result>>_Add__
     , param_3 != (long *)0x0)) {
    lVar4 = *param_3;
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
             FUN_00d59724(param_3,*(long *)
                                   Method_UnityEngine_UIElements_PointerEventBase<PointerMoveEvent>_PostDispatch__
                          ,8);
LAB_014e2c5c:
    uVar3 = (*(code *)*puVar2)(param_3,puVar2[1]);
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


