/*
FUNCTION_NAME: FUN_031ff6f8
ENTRY_POINT: 031ff6f8
PROGRAM: gunraiders-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_5
*/


void FUN_031ff6f8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((DAT_04532735 & 1) == 0) {
    FUN_01c5d288(OVRPlugin_Posef_TypeInfo);
    FUN_01c5d288(UnityEngine_UIElements_InlineStyleAccess_TypeInfo);
    FUN_01c5d288(OVRPlugin_Quatf_TypeInfo);
    DAT_04532735 = 1;
  }
  puVar2 = OVRPlugin_Posef_TypeInfo;
  puVar1 = UnityEngine_UIElements_InlineStyleAccess_TypeInfo;
  if (param_1 != 0) {
    uVar3 = thunk_FUN_01c496e0(*(undefined8 *)OVRPlugin_Quatf_TypeInfo);
    FUN_031ff7dc(uVar3,0,*(undefined8 *)puVar2);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_031ff478(param_1,uVar3);
    return;
  }
  thunk_FUN_01c273e8(PTR_DAT_0422fa20);
  uVar3 = thunk_FUN_01c496e0();
  uVar4 = thunk_FUN_01c273e8(PTR_DAT_04234b68);
  FUN_0323fc78(uVar3,uVar4,0);
  uVar4 = thunk_FUN_01c273e8(OVRPlugin_Result_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar3,uVar4);
}


