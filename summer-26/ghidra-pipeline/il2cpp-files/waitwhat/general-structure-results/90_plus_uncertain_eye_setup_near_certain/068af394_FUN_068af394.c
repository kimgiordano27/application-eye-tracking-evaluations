/*
FUNCTION_NAME: FUN_068af394
ENTRY_POINT: 068af394
PROGRAM: waitwhat-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_18;weak_xr_or_state_hits_18;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_18
*/


void FUN_068af394(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 local_88;
  undefined8 *puStack_80;
  long local_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  long local_60;
  undefined8 local_50;
  undefined8 *puStack_48;
  long local_40;
  
  if ((DAT_0755913e & 1) == 0) {
    FUN_03188a78(PTR_DAT_070c2418);
    FUN_03188a78(OVRPlugin_OVRP_1_63_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_64_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_65_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_66_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_67_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_68_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_69_0_TypeInfo);
    FUN_03188a78(OVRPlugin_OVRP_1_6_0_TypeInfo);
    FUN_03188a78(PTR_DAT_070c1b68);
    FUN_03188a78(OVRPlugin_OVRP_1_70_0_TypeInfo);
    DAT_0755913e = 1;
  }
  local_50 = 0;
  puStack_48 = (undefined8 *)0x0;
  local_40 = 0;
  local_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_60 = 0;
  if ((*(int *)(param_1 + 0x1b4) != 0 || *(char *)(param_1 + 0x1c0) == '\0') &&
     (*(int *)(param_1 + 0x1b4) != 1)) {
    return;
  }
  if (*(long *)(param_1 + 0x160) == 0) {
LAB_068af680:
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  FUN_042e54fc(&local_88,*(long *)(param_1 + 0x160),*(undefined8 *)OVRPlugin_OVRP_1_69_0_TypeInfo);
  puVar2 = OVRPlugin_OVRP_1_66_0_TypeInfo;
  puVar1 = PTR_DAT_070c1b68;
  puStack_48 = puStack_80;
  local_50 = local_88;
  local_40 = local_78;
  local_88 = 0;
  puStack_80 = &local_50;
LAB_068af4b0:
  do {
    uVar4 = FUN_054518b4(&local_50,*(undefined8 *)puVar2);
    lVar3 = local_40;
    if ((uVar4 & 1) == 0) {
      FUN_054518b0(&local_50,*(undefined8 *)OVRPlugin_OVRP_1_63_0_TypeInfo);
      if (*(long *)(param_1 + 0x168) == 0) goto LAB_068af680;
      FUN_042e54fc(&local_88,*(long *)(param_1 + 0x168),*(undefined8 *)OVRPlugin_OVRP_1_6_0_TypeInfo
                  );
      puVar2 = OVRPlugin_OVRP_1_65_0_TypeInfo;
      puStack_68 = puStack_80;
      local_70 = local_88;
      local_60 = local_78;
      local_88 = 0;
      puStack_80 = &local_70;
      goto LAB_068af5c4;
    }
    if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    iVar6 = *(int *)(local_40 + 0x10);
    if (iVar6 == 2) {
      uVar8 = *(undefined8 *)(local_40 + 0x28);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar4 = FUN_069d69b8(uVar8,0,0);
      if ((uVar4 & 1) != 0) break;
      uVar8 = *(undefined8 *)(lVar3 + 0x30);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar4 = FUN_069d69b8(uVar8,0,0);
      if ((uVar4 & 1) != 0) break;
      iVar6 = *(int *)(lVar3 + 0x10);
      if (iVar6 == 2) goto LAB_068af4b0;
    }
  } while (iVar6 == 0);
  if (*(int *)(*(long *)PTR_DAT_070c2418 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  FUN_0698f53c(*(undefined8 *)OVRPlugin_OVRP_1_70_0_TypeInfo,param_1,0);
  puVar5 = &local_50;
  puVar7 = (undefined8 *)OVRPlugin_OVRP_1_63_0_TypeInfo;
  goto LAB_068af65c;
  while (iVar6 == 0) {
LAB_068af5c4:
    uVar4 = FUN_054518b4(&local_70,*(undefined8 *)puVar2);
    lVar3 = local_60;
    if ((uVar4 & 1) == 0) goto LAB_068af650;
    if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    iVar6 = *(int *)(local_60 + 0x10);
    if (iVar6 == 2) {
      uVar8 = *(undefined8 *)(local_60 + 0x20);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar4 = FUN_069d69b8(uVar8,0,0);
      if ((uVar4 & 1) != 0) break;
      iVar6 = *(int *)(lVar3 + 0x10);
      if (iVar6 == 2) goto LAB_068af5c4;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_070c2418 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  FUN_0698f53c(*(undefined8 *)OVRPlugin_OVRP_1_70_0_TypeInfo,param_1,0);
LAB_068af650:
  puVar5 = &local_70;
  puVar7 = (undefined8 *)OVRPlugin_OVRP_1_64_0_TypeInfo;
LAB_068af65c:
  FUN_054518b0(puVar5,*puVar7);
  return;
}


