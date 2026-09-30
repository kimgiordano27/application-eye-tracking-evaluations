/*
FUNCTION_NAME: FUN_017dfbcc
ENTRY_POINT: 017dfbcc
PROGRAM: Lovesick-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_017dfbcc(long param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  
  if ((DAT_037791cb & 1) == 0) {
    thunk_FUN_00d48444(Oculus_Platform_Models_AssetFileDownloadUpdate_TypeInfo);
    thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_BodyState>__ctor__);
    DAT_037791cb = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar3 = *(long **)(*(long *)(param_1 + 0x28) + 0x20);
    lVar2 = *(long *)Oculus_Platform_Models_AssetFileDownloadUpdate_TypeInfo;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      lVar2 = thunk_FUN_00d32864();
    }
    lVar2 = FUN_017de164(lVar2,1);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    bVar1 = *(byte *)(*(long *)Method_System_Nullable<OVRPlugin_BodyState>__ctor__ + 300);
    if ((*(byte *)(*plVar3 + 300) < bVar1) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)Method_System_Nullable<OVRPlugin_BodyState>__ctor__)) {
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(plVar3);
    }
    plVar3[4] = lVar2;
  }
  FUN_017dfd58(param_1);
  return;
}


