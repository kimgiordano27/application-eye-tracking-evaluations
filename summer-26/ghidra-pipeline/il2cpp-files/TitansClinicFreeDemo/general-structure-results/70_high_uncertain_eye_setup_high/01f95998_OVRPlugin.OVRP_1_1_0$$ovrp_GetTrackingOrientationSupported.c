/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetTrackingOrientationSupported
ENTRY_POINT: 01f95998
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_12;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


bool OVRPlugin_OVRP_1_1_0__ovrp_GetTrackingOrientationSupported(uint param_1)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x23;
  
  uVar2 = FUN_01f81de0();
  if ((param_1 == uVar2) && (uVar3 = FUN_01f81644(), (uVar3 & 1) != 0)) {
    return true;
  }
  switch(uVar2) {
  case 4:
    if (param_1 == 6) {
      return true;
    }
    return param_1 == 8;
  default:
    uVar4 = *(undefined8 *)PTR_DAT_027b5578;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    FUN_01f7d8a0(uVar4,0);
    uVar3 = FUN_01f7f404();
    if ((uVar3 & 1) == 0) {
      uVar4 = *(undefined8 *)PTR_DAT_027b5580;
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      FUN_01f7d8a0(uVar4,0);
      uVar3 = FUN_01f7f404();
      if ((uVar3 & 1) == 0) {
        return false;
      }
    }
    if (*(int *)(*(long *)PTR_DAT_027b3ec0 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    return unaff_x20 == unaff_x19;
  case 7:
    bVar1 = 1 < param_1 - 5;
    break;
  case 8:
    return (param_1 & 0xfffffffd) == 4;
  case 9:
    bVar1 = 4 < param_1 - 4;
    break;
  case 10:
    if (4 < param_1 - 4) {
      return false;
    }
    goto OVRPlugin_OVRP_1_1_0__ovrp_GetTrackingPositionSupported;
  case 0xb:
    bVar1 = 6 < param_1 - 4;
    break;
  case 0xc:
    if (6 < param_1 - 4) {
      return false;
    }
OVRPlugin_OVRP_1_1_0__ovrp_GetTrackingPositionSupported:
    return (param_1 & 1) == 0;
  case 0xd:
    bVar1 = 8 < param_1 - 4;
    break;
  case 0xe:
    bVar1 = 9 < param_1 - 4;
  }
  return !bVar1;
}


