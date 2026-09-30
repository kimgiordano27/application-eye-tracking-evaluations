/*
FUNCTION_NAME: FUN_01f958f8
ENTRY_POINT: 01f958f8
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool FUN_01f958f8(long *param_1,long *param_2)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  if ((DAT_0293df0a & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b5578);
    thunk_FUN_01279b34(PTR_DAT_027b3ec0);
    thunk_FUN_01279b34(PTR_DAT_027b32e0);
    thunk_FUN_01279b34(PTR_DAT_027b5580);
    DAT_0293df0a = 1;
  }
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  uVar5 = (**(code **)(*param_1 + 0x568))(param_1,*(undefined8 *)(*param_1 + 0x570));
  puVar1 = PTR_DAT_027b32e0;
  if ((uVar5 & 1) != 0) {
    return false;
  }
  if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  uVar3 = FUN_01f81de0(param_1,0);
  uVar4 = FUN_01f81de0(param_2,0);
  if ((uVar3 == uVar4) && (uVar5 = FUN_01f81644(param_1,0), (uVar5 & 1) != 0)) {
    return true;
  }
  switch(uVar4) {
  case 4:
    if (uVar3 == 6) {
      return true;
    }
    return uVar3 == 8;
  default:
    uVar6 = *(undefined8 *)PTR_DAT_027b5578;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    uVar6 = FUN_01f7d8a0(uVar6,0);
    uVar5 = FUN_01f7f404(param_2,uVar6,0);
    if ((uVar5 & 1) == 0) {
      uVar6 = *(undefined8 *)PTR_DAT_027b5580;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar6 = FUN_01f7d8a0(uVar6,0);
      uVar5 = FUN_01f7f404(param_2,uVar6,0);
      if ((uVar5 & 1) == 0) {
        return false;
      }
    }
    if (*(int *)(*(long *)PTR_DAT_027b3ec0 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    return param_1 == param_2;
  case 7:
    bVar2 = 1 < uVar3 - 5;
    break;
  case 8:
    return (uVar3 & 0xfffffffd) == 4;
  case 9:
    bVar2 = 4 < uVar3 - 4;
    break;
  case 10:
    if (4 < uVar3 - 4) {
      return false;
    }
    goto OVRPlugin_OVRP_1_1_0__ovrp_GetTrackingPositionSupported;
  case 0xb:
    bVar2 = 6 < uVar3 - 4;
    break;
  case 0xc:
    if (6 < uVar3 - 4) {
      return false;
    }
OVRPlugin_OVRP_1_1_0__ovrp_GetTrackingPositionSupported:
    return (uVar3 & 1) == 0;
  case 0xd:
    bVar2 = 8 < uVar3 - 4;
    break;
  case 0xe:
    bVar2 = 9 < uVar3 - 4;
  }
  return !bVar2;
}


