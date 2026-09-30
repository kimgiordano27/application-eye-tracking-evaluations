/*
FUNCTION_NAME: FUN_069d302c
ENTRY_POINT: 069d302c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_5;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_16;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 FUN_069d302c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_DAT_071273c0;
  if ((DAT_0755c6a3 & 1) == 0) {
    FUN_03188a78(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputEventPtr,_InputDevice>>_RemoveCallback__
                );
    FUN_03188a78(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputEventPtr,_InputDevice>>_get_length__
                );
    FUN_03188a78(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<object,_InputActionChange>>_AddCallback__
                );
    FUN_03188a78(
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<object,_InputActionChange>>_Clear__
                );
    FUN_03188a78(PTR_DAT_071273c0);
    DAT_0755c6a3 = 1;
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_031e5338();
    lVar4 = *(long *)puVar1;
  }
  puVar3 = 
  Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<object,_InputActionChange>>_AddCallback__
  ;
  puVar2 = 
  Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputEventPtr,_InputDevice>>_get_length__
  ;
  puVar5 = *(undefined8 **)(lVar4 + 0xb8);
  lVar6 = puVar5[2];
  if (lVar6 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      puVar5 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
    }
    uVar7 = *puVar5;
    lVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)
                        Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<InputEventPtr,_InputDevice>>_RemoveCallback__
                      );
    FUN_0570ec28(lVar6,uVar7,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<object,_InputActionChange>>_Clear__
                 ,0);
    *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = lVar6;
  }
  uVar7 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar3);
  Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector2f>__get_Length
            (uVar7,lVar6,0,0,0,0,10,10000,*(undefined8 *)puVar2);
  return uVar7;
}


