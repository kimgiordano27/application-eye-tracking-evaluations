/*
FUNCTION_NAME: OVRManager$$set_fixedFoveatedRenderingLevel
ENTRY_POINT: 05653ecc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;strong_foveation_hits_3;functionality_foveated_rendering
*/


undefined1  [16] OVRManager__set_fixedFoveatedRenderingLevel(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_06a0f1a0;
                    /* try { // try from 05653ee0 to 05753f3b has its CatchHandler @ 05653d7c */
  if ((DAT_06dbc351 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0f1a0);
    FUN_02d965b8(System_Collections_Generic_IReadOnlyCollection<ParameterExpression>_TypeInfo);
    DAT_06dbc351 = 1;
  }
  puVar2 = System_Collections_Generic_IReadOnlyCollection<ParameterExpression>_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar3 = OVRManager__GetDynamicFoveatedRenderingEnabled(param_1,param_2);
  FUN_055efebc(uVar3,*(undefined8 *)puVar2,0,0);
  return ZEXT816(0) << 0x40;
}


