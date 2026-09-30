/*
FUNCTION_NAME: FUN_075c5b44
ENTRY_POINT: 075c5b44
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_075c5b44(int *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_28;
  
  if ((DAT_0826e860 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d88078);
    FUN_0373b518(System_Func<DataTable,_IEnumerable<Type>>_TypeInfo);
    FUN_0373b518(PTR_DAT_07d882c0);
    FUN_0373b518(PTR_DAT_07d9ed18);
    FUN_0373b518(PTR_DAT_07d94270);
    FUN_0373b518(OVRPlugin_OVRP_1_87_0_TypeInfo);
    DAT_0826e860 = 1;
  }
  puVar2 = System_Func<DataTable,_IEnumerable<Type>>_TypeInfo;
  local_28 = 0;
  uVar3 = FUN_060c08a0(param_2,0);
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    puVar1 = (undefined8 *)PTR_DAT_07d94270;
    if (-1 < *param_1) {
      puVar1 = (undefined8 *)PTR_DAT_07d9ed18;
    }
    param_2 = *puVar1;
  }
  if (param_3 == 0) {
    if (*(int *)(*(long *)PTR_DAT_07d88078 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    plVar4 = (long *)FUN_061d52c8(0);
    if (plVar4 == (long *)0x0) goto LAB_075c5cec;
    param_3 = (**(code **)(*plVar4 + 0x218))(plVar4,*(undefined8 *)(*plVar4 + 0x220));
  }
  plVar4 = (long *)RootMotion_FinalIK_Finger___ctor(*(undefined8 *)PTR_DAT_07d882c0,1);
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_03798b70(lVar7);
  }
  local_28 = FUN_075c5930(param_1);
  lVar7 = FUN_0622a6d0(&local_28,param_2,param_3,0);
  if (plVar4 != (long *)0x0) {
    if ((lVar7 != 0) &&
       (lVar5 = thunk_FUN_037787d0(lVar7,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
      uVar6 = thunk_FUN_037854c8();
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar6,0);
    }
    puVar2 = OVRPlugin_OVRP_1_87_0_TypeInfo;
    if ((int)plVar4[3] != 0) {
      plVar4[4] = lVar7;
      thunk_FUN_037aeb94(plVar4 + 4,lVar7);
      FUN_076583bc(*(undefined8 *)puVar2,plVar4,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0373b7bc();
  }
LAB_075c5cec:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


