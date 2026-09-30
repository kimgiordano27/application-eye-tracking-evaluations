/*
FUNCTION_NAME: OVRPlugin$$GetPassthroughCapabilityFlags
ENTRY_POINT: 01a1cd90
PROGRAM: Lovesick-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetPassthroughCapabilityFlags(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = Method_UnityEngine_Events_UnityEvent<XRBaseInteractor>_Invoke__;
  if ((DAT_0377a9d6 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_UIR_LinkedPoolItem<BestFitAllocator_Block>__ctor__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_Events_UnityEvent<XRBaseInteractor>_Invoke__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<TuneTarget>_Contains__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxv_u8__);
    DAT_0377a9d6 = 1;
  }
  FUN_01300efc(param_1,*(undefined8 *)puVar1);
  if (*(char *)(param_1 + 0x19) != '\0') {
    lVar3 = *(long *)(param_1 + 0x30);
    lVar2 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_UnityEngine_UIElements_UIR_LinkedPoolItem<BestFitAllocator_Block>__ctor__
                              );
    if ((lVar2 != 0) &&
       (FUN_011c181c(lVar2,param_1,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxv_u8__,
                     0), lVar3 != 0)) {
      FUN_01301a0c(lVar3,lVar2,
                   *(undefined8 *)Method_System_Collections_Generic_List<TuneTarget>_Contains__);
      FUN_01a1ce84(0,param_1);
      if (*(long *)(param_1 + 0x38) != 0) {
        FUN_0266622c(*(long *)(param_1 + 0x38),0,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  return;
}


