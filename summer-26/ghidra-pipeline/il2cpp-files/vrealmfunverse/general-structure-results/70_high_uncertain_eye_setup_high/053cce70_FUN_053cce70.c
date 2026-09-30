/*
FUNCTION_NAME: FUN_053cce70
ENTRY_POINT: 053cce70
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_053cce70(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_066d09c1 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_0631e140);
    FUN_02b3c81c(PTR_DAT_06322478);
    DAT_066d09c1 = 1;
  }
  if (*(char *)(param_1 + 0x94) == '\0') {
    uVar4 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar1 = FUN_04d957a4(lVar3,0);
    uVar4 = 0;
    if ((uVar1 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_06322478 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar4 = FUN_053dfacc(0);
      uVar4 = FUN_04d95a58(lVar3,0x34,0,uVar4,0,0);
      if (*(int *)(*(long *)PTR_DAT_0631e140 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)PTR_DAT_0631e140);
      }
      uVar1 = FUN_04cb777c(uVar4,0,0);
      if ((uVar1 & 1) != 0) {
        uVar4 = thunk_FUN_02ba3594(PTR_DAT_06313048);
        uVar4 = FUN_02b3c908(uVar4,1);
        uVar2 = FUN_053d6158(lVar3,0);
        FUN_0275e13c(uVar4);
        FUN_0275a400(uVar4,uVar2);
        FUN_0275a434(uVar4,0,uVar2);
        uVar2 = thunk_FUN_02ba3594(OVRPlugin_BodyTrackingFidelity2_TypeInfo);
        uVar4 = FUN_0540ce80(uVar2,uVar4,0);
        thunk_FUN_02ba3594(UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo);
        uVar2 = thunk_FUN_02b79644();
        FUN_053f0c5c(uVar2,uVar4,0);
        uVar4 = FUN_0540c738(uVar2,0);
        uVar2 = thunk_FUN_02ba3594(OVRPlugin_EyeTextureFormat_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar4,uVar2);
      }
    }
  }
  return uVar4;
}


