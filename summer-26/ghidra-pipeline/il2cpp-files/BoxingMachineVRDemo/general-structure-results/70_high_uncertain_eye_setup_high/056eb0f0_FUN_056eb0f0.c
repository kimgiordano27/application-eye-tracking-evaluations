/*
FUNCTION_NAME: FUN_056eb0f0
ENTRY_POINT: 056eb0f0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


uint FUN_056eb0f0(undefined4 param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  
  puVar1 = PTR_DAT_06764580;
  if ((DAT_06b7fb86 & 1) == 0) {
    FUN_02d6084c(Unity_Properties_TypeConverter<uint,_short>_TypeInfo);
    FUN_02d6084c(PTR_DAT_06764580);
    FUN_02d6084c(OVRPlugin_Vector3f___TypeInfo);
    FUN_02d6084c(OVRPlugin_Vector4f___TypeInfo);
    DAT_06b7fb86 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar3 = FUN_056c3010(param_1,0);
  if ((uVar3 & 1) == 0) {
    if (*(int *)(*(long *)Unity_Properties_TypeConverter<uint,_short>_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar3 = FUN_056ebd6c();
    plVar4 = (long *)OVRPlugin_Vector4f___TypeInfo;
    if ((uVar3 & 1) != 0) {
      plVar4 = (long *)OVRPlugin_Vector3f___TypeInfo;
    }
    if (*plVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar2 = FUN_04e921f4(*plVar4,param_1,0);
    uVar2 = ~uVar2 >> 0x1f;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


