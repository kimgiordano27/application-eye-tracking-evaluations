/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetUserEyeHeight
ENTRY_POINT: 01f969cc
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


long OVRPlugin_OVRP_1_1_0__ovrp_GetUserEyeHeight(long param_1,uint param_2)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  
  if ((DAT_0293df07 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027c1390);
    DAT_0293df07 = 1;
  }
  puVar1 = PTR_DAT_027c1390;
  if ((int)param_2 < 1) {
    lVar6 = 0;
  }
  else {
    if (param_1 == 0) {
LAB_01f96ab0:
                    /* WARNING: Subroutine does not return */
      FUN_01230ca0();
    }
    iVar8 = 0;
    lVar6 = 0;
    uVar7 = 0;
    do {
      if (*(uint *)(param_1 + 0x18) <= uVar7) {
OVRPlugin_OVRP_1_1_0___cctor:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
      plVar9 = (long *)(param_1 + (long)(int)uVar7 * 8 + 0x20);
      plVar3 = (long *)*plVar9;
      if (plVar3 == (long *)0x0) goto LAB_01f96ab0;
      uVar4 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01220628(*(long *)puVar1);
      }
      iVar2 = FUN_01f96ef4(uVar4);
      if (iVar2 == iVar8) {
        uVar4 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
        thunk_FUN_01279b34(PTR_DAT_027bc458);
        uVar5 = thunk_FUN_0124bba8();
        FUN_01ee31d4(uVar5,uVar4,0);
        uVar4 = thunk_FUN_01279b34(PTR_DAT_027c1c68);
                    /* WARNING: Subroutine does not return */
        FUN_01230b78(uVar5,uVar4);
      }
      if (iVar8 < iVar2) {
        if (*(uint *)(param_1 + 0x18) <= uVar7) goto OVRPlugin_OVRP_1_1_0___cctor;
        lVar6 = *plVar9;
        iVar8 = iVar2;
      }
      uVar7 = uVar7 + 1;
    } while (param_2 != uVar7);
  }
  return lVar6;
}


