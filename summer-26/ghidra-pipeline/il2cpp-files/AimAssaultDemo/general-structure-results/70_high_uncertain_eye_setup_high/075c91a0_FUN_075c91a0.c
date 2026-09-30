/*
FUNCTION_NAME: FUN_075c91a0
ENTRY_POINT: 075c91a0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_5
*/


void FUN_075c91a0(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  puVar3 = OVRPlugin_OVRP_1_9_0_TypeInfo;
  puVar2 = PTR_DAT_07d882c0;
  plVar1 = (long *)PTR_DAT_07d86580;
  if ((DAT_0826ea7a & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d882c0);
    FUN_0373b518(OVRPlugin_Posef_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_9_0_TypeInfo);
    FUN_0373b518(PTR_DAT_07d86580);
    DAT_0826ea7a = 1;
  }
  plVar5 = (long *)RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar2,1);
  puVar4 = OVRPlugin_Posef_TypeInfo;
  plVar7 = (long *)puVar3;
  if ((param_2 & 1) == 0) {
    plVar7 = plVar1;
  }
  if (plVar5 != (long *)0x0) {
    lVar10 = *plVar7;
    uVar9 = *(undefined8 *)OVRPlugin_Posef_TypeInfo;
    if ((lVar10 != 0) &&
       (lVar6 = thunk_FUN_037787d0(lVar10,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
LAB_075c9314:
      uVar9 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar9,0);
    }
    if ((int)plVar5[3] != 0) {
      plVar5[4] = lVar10;
      thunk_FUN_037aeb94(plVar5 + 4,lVar10);
      uVar9 = FUN_076583bc(uVar9,plVar5,0);
      plVar7 = (long *)RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar2,1);
      if ((param_2 & 1) == 0) {
        plVar1 = (long *)puVar3;
      }
      if (plVar7 == (long *)0x0) goto LAB_075c930c;
      lVar10 = *plVar1;
      uVar8 = *(undefined8 *)puVar4;
      if ((lVar10 != 0) &&
         (lVar6 = thunk_FUN_037787d0(lVar10,*(undefined8 *)(*plVar7 + 0x40)), lVar6 == 0))
      goto LAB_075c9314;
      if ((int)plVar7[3] != 0) {
        plVar7[4] = lVar10;
        thunk_FUN_037aeb94(plVar7 + 4,lVar10);
        uVar8 = FUN_076583bc(uVar8,plVar7,0);
        FUN_075c9630(uVar9,uVar8);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0373b7bc();
  }
LAB_075c930c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


