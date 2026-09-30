/*
FUNCTION_NAME: FUN_075c8ec0
ENTRY_POINT: 075c8ec0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_075c8ec0(long param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  plVar5 = (long *)OVRPlugin_OVRP_1_9_0_TypeInfo;
  puVar2 = PTR_DAT_07d882c0;
  puVar1 = PTR_DAT_07d86580;
  if ((DAT_0826ea79 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d882c0);
    FUN_0373b518(OVRPlugin_OverlayShape_TypeInfo);
    FUN_0373b518(PTR_DAT_07db66e8);
    FUN_0373b518(OVRPlugin_PoseStatef_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_9_0_TypeInfo);
    FUN_0373b518(PTR_DAT_07d86580);
    FUN_0373b518(PTR_DAT_07db66f8);
    DAT_0826ea79 = 1;
  }
  plVar3 = (long *)RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar2,1);
  if ((param_3 & 1) == 0) {
    plVar5 = (long *)puVar1;
  }
  if (plVar3 == (long *)0x0) {
LAB_075c90e0:
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar8 = *plVar5;
  uVar7 = *(undefined8 *)OVRPlugin_OverlayShape_TypeInfo;
  if ((lVar8 != 0) &&
     (lVar4 = thunk_FUN_037787d0(lVar8,*(undefined8 *)(*plVar3 + 0x40)), lVar4 == 0))
  goto LAB_075c90d4;
  if ((int)plVar3[3] == 0) goto LAB_075c90d0;
  plVar3[4] = lVar8;
  thunk_FUN_037aeb94(plVar3 + 4,lVar8);
  uVar7 = FUN_076583bc(uVar7,plVar3,0);
  plVar5 = (long *)RootMotion_FinalIK_Finger___ctor(*(undefined8 *)puVar2,3);
  if (plVar5 == (long *)0x0) goto LAB_075c90e0;
  if ((param_1 != 0) &&
     (lVar8 = thunk_FUN_037787d0(param_1,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0)) {
LAB_075c90d4:
    uVar7 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
    FUN_0373b680(uVar7,0);
  }
  if ((int)plVar5[3] != 0) {
    plVar5[4] = param_1;
    thunk_FUN_037aeb94(plVar5 + 4,param_1);
    if ((param_2 != 0) &&
       (lVar8 = thunk_FUN_037787d0(param_2,*(undefined8 *)(*plVar5 + 0x40)), lVar8 == 0))
    goto LAB_075c90d4;
    puVar2 = OVRPlugin_PoseStatef_TypeInfo;
    puVar1 = PTR_DAT_07db66f8;
    plVar3 = (long *)PTR_DAT_07db66e8;
    if (1 < *(uint *)(plVar5 + 3)) {
      plVar5[5] = param_2;
      thunk_FUN_037aeb94(plVar5 + 5,param_2);
      if ((param_3 & 1) == 0) {
        plVar3 = (long *)puVar1;
      }
      lVar8 = *plVar3;
      uVar6 = *(undefined8 *)puVar2;
      if ((lVar8 != 0) &&
         (lVar4 = thunk_FUN_037787d0(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
      goto LAB_075c90d4;
      if (2 < *(uint *)(plVar5 + 3)) {
        plVar5[6] = lVar8;
        thunk_FUN_037aeb94(plVar5 + 6,lVar8);
        uVar6 = FUN_076583bc(uVar6,plVar5,0);
        FUN_075c9630(uVar7,uVar6);
        return;
      }
    }
  }
LAB_075c90d0:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7bc();
}


