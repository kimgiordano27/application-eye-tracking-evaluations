/*
FUNCTION_NAME: LegTrackingModeSceneManager_StartGame_m841494A85AF95972F5660F4D4897E8D37D079253
ENTRY_POINT: 01f1db1c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void LegTrackingModeSceneManager_StartGame_m841494A85AF95972F5660F4D4897E8D37D079253
               (undefined4 param_1,long param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  
  if ((LegTrackingModeSceneManager_StartGame_m841494A85AF95972F5660F4D4897E8D37D079253::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_HashSet<OVRManager_EventListener>_GetEnumerator__);
    LegTrackingModeSceneManager_StartGame_m841494A85AF95972F5660F4D4897E8D37D079253::
    s_Il2CppMethodInitialized = 1;
  }
  *(undefined4 *)(param_2 + 0x40) = 2;
  MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB
            (0x40000000,param_2,
             *(undefined8 *)
              Method_System_Collections_Generic_HashSet<OVRManager_EventListener>_GetEnumerator__,0)
  ;
  if (*(long *)(param_2 + 0x90) != 0) {
    MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A
              (param_2,*(undefined8 *)(param_2 + 0x90),0);
  }
  uVar1 = LegTrackingModeSceneManager_LoadAvatar_m760B5415AB1044BE6CD0809828B8B9A9988F650F
                    (param_1,param_2);
  pvVar2 = (void *)MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812
                             (param_2,uVar1,0);
  *(void **)(param_2 + 0x90) = pvVar2;
  Il2CppCodeGenWriteBarrier((void **)(param_2 + 0x90),pvVar2);
  return;
}


