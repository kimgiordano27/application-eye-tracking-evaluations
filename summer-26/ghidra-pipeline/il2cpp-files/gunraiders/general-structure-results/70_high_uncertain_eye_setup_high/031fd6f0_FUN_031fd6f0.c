/*
FUNCTION_NAME: FUN_031fd6f0
ENTRY_POINT: 031fd6f0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_6
*/


undefined8 FUN_031fd6f0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 local_34;
  
  if ((DAT_04532719 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_042305b0);
    FUN_01c5d288(OVRPlugin_OVRP_1_62_0_TypeInfo);
    FUN_01c5d288(PTR_DAT_04230aa8);
    FUN_01c5d288(OVRPlugin_OVRP_1_63_0_TypeInfo);
    FUN_01c5d288(OVRPlugin_OVRP_1_64_0_TypeInfo);
    FUN_01c5d288(PTR_DAT_042317a0);
    DAT_04532719 = 1;
  }
  lVar5 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
  plVar6 = (long *)FUN_033091c4(param_1,0);
  puVar4 = OVRPlugin_OVRP_1_64_0_TypeInfo;
  puVar3 = OVRPlugin_OVRP_1_63_0_TypeInfo;
  puVar2 = PTR_DAT_042317a0;
  puVar1 = PTR_DAT_042305b0;
  if (plVar6 != (long *)0x0) {
    uVar7 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    local_34 = (undefined4)param_1[0xc];
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar1);
    }
    uVar8 = FUN_03295500(0);
    uVar8 = FUN_032cf4e4(&local_34,*(undefined8 *)puVar3,uVar8,0);
    uVar7 = FUN_031532c4(uVar7,*(undefined8 *)puVar4,uVar8,*(undefined8 *)puVar2,0);
    if ((lVar5 != 0) && (0 < *(int *)(lVar5 + 0x10))) {
      uVar7 = FUN_03152fb8(uVar7,*(undefined8 *)PTR_DAT_04230aa8,lVar5,0);
    }
    puVar1 = OVRPlugin_OVRP_1_62_0_TypeInfo;
    plVar6 = (long *)param_1[5];
    if (plVar6 != (long *)0x0) {
      uVar8 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      uVar7 = FUN_03152fb8(uVar7,*(undefined8 *)puVar1,uVar8,0);
    }
    lVar5 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
    if (lVar5 != 0) {
      uVar8 = FUN_03317620(0);
      uVar9 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
      uVar7 = FUN_03152fb8(uVar7,uVar8,uVar9,0);
    }
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


