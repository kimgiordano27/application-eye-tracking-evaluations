/*
FUNCTION_NAME: FUN_01027560
ENTRY_POINT: 01027560
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_01027560(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = System_Threading_Tasks_TaskScheduler_TypeInfo;
  if ((DAT_03775ec4 & 1) == 0) {
    thunk_FUN_00d48444(System_Threading_Tasks_TaskScheduler_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__);
    thunk_FUN_00d48444(Method_SmackAJack_SpawnedTicketsGrabbed__);
    thunk_FUN_00d48444(PTR_DAT_033eb428);
    thunk_FUN_00d48444(Newtonsoft_Json_JsonExtensionDataAttribute_var);
    thunk_FUN_00d48444(OVRPermissionsRequester_TypeInfo);
    DAT_03775ec4 = 1;
  }
  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar3 = Method_UnityEngine_Events_UnityEvent<MRUKTrackable>_Invoke__;
  puVar2 = OVRPermissionsRequester_TypeInfo;
  puVar1 = Newtonsoft_Json_JsonExtensionDataAttribute_var;
  if (lVar4 != 0) {
    FUN_011c181c(lVar4,param_1,*(undefined8 *)Method_SmackAJack_SpawnedTicketsGrabbed__,0);
    FUN_0132e0e8(*(undefined8 *)puVar2,lVar4,*(undefined8 *)puVar1);
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
    if (lVar4 != 0) {
      FUN_016f27fc(lVar4,param_1,*(undefined8 *)PTR_DAT_033eb428,0);
      FUN_00fe0700(uVar5,lVar4,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


