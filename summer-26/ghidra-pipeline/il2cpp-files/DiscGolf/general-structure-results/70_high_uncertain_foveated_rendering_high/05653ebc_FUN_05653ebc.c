/*
FUNCTION_NAME: FUN_05653ebc
ENTRY_POINT: 05653ebc
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;strong_foveation_hits_1;functionality_foveated_rendering
*/


undefined1  [16] FUN_05653ebc(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined8 local_40;
  uint local_38;
  
  puVar1 = PTR_DAT_06a0f1a0;
                    /* try { // try from 05653ec8 to 05753edf has its CatchHandler @ 05653f4c */
  if ((DAT_06dbc351 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a0f1a0);
    FUN_02d965b8(System_Collections_Generic_IReadOnlyCollection<ParameterExpression>_TypeInfo);
    DAT_06dbc351 = 1;
  }
  puVar2 = System_Collections_Generic_IReadOnlyCollection<ParameterExpression>_TypeInfo;
  local_38 = 0;
  local_40 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar3 = OVRManager__GetDynamicFoveatedRenderingEnabled(param_1,param_2,&local_40);
  uVar4 = FUN_055efebc(uVar3,*(undefined8 *)puVar2,0,0);
  uVar5 = (ulong)local_38;
  if ((uVar4 & 1) == 0) {
    local_40 = 0;
    uVar5 = 0;
  }
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = local_40;
  return auVar6;
}


