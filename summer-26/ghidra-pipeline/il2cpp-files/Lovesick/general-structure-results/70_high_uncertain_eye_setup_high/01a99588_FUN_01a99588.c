/*
FUNCTION_NAME: FUN_01a99588
ENTRY_POINT: 01a99588
PROGRAM: Lovesick-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint FUN_01a99588(uint param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  ulong local_40;
  undefined8 uStack_38;
  
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>__ctor__
  ;
  if ((DAT_0377cd61 & 1) == 0) {
    thunk_FUN_00d48444(System_Predicate<OVRPlugin_BoneCapsule>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>__ctor__
                      );
    DAT_0377cd61 = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar3 = *(long *)puVar1;
  }
  if (**(long **)(lVar3 + 0xb8) != 0) {
    local_40 = (ulong)param_1;
    uStack_38 = param_2;
    uVar2 = FUN_0129eff4(**(long **)(lVar3 + 0xb8),&local_40,param_3,
                         *(undefined8 *)System_Predicate<OVRPlugin_BoneCapsule>_TypeInfo);
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


