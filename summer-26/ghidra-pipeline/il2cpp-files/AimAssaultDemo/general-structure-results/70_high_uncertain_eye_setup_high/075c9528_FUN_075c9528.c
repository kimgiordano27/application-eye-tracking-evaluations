/*
FUNCTION_NAME: FUN_075c9528
ENTRY_POINT: 075c9528
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_075c9528(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_07d882c0;
  if ((DAT_0826ea77 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d882c0);
    FUN_0373b518(OVRPlugin_Result_TypeInfo);
    FUN_0373b518(PTR_DAT_07d9ce90);
    DAT_0826ea77 = 1;
  }
  plVar2 = (long *)RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar1,2);
  puVar1 = OVRPlugin_Result_TypeInfo;
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if (*(long *)OVRPlugin_Result_TypeInfo == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = thunk_FUN_037787d0(*(long *)OVRPlugin_Result_TypeInfo,*(undefined8 *)(*plVar2 + 0x40));
    if (lVar3 == 0) goto LAB_075c9620;
    lVar3 = *(long *)puVar1;
  }
  if ((int)plVar2[3] != 0) {
    plVar2[4] = lVar3;
    thunk_FUN_037aeb94();
    if ((param_1 != 0) &&
       (lVar3 = thunk_FUN_037787d0(param_1,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
LAB_075c9620:
      uVar4 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar4,0);
    }
    puVar1 = PTR_DAT_07d9ce90;
    if (1 < *(uint *)(plVar2 + 3)) {
      plVar2[5] = param_1;
      thunk_FUN_037aeb94(plVar2 + 5,param_1);
      FUN_076583bc(*(undefined8 *)puVar1,plVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7bc();
}


