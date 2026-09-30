/*
FUNCTION_NAME: OVRManager$$SetDynamicFoveatedRenderingEnabled
ENTRY_POINT: 05654014
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined1  [16]
OVRManager__SetDynamicFoveatedRenderingEnabled(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_06a0f1a0;
  if ((DAT_06dbc352 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0f1a0);
    FUN_02d965b8(System_Collections_Generic_IReadOnlyCollection<SortColumnDescription>_TypeInfo);
    DAT_06dbc352 = 1;
  }
  puVar2 = System_Collections_Generic_IReadOnlyCollection<SortColumnDescription>_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar3 = FUN_056540b8(param_1,param_2);
  FUN_055efebc(uVar3,*(undefined8 *)puVar2,0,0);
  return ZEXT816(0) << 0x40;
}


