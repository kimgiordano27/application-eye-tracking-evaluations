/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StartBodyTracking
ENTRY_POINT: 063bb34c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_StartBodyTracking(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_07db7330;
  if ((DAT_0825c7df & 1) == 0) {
    FUN_0373b518(PTR_DAT_07db7330);
    DAT_0825c7df = 1;
  }
  uVar3 = FUN_054d36c8(*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x30),param_1,
                       param_2,*(undefined8 *)puVar1);
  *(undefined4 *)(param_2 + 0x40) = uVar3;
  uVar3 = FUN_054d36c8(*(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_2 + 0x34),param_1,
                       param_2,*(undefined8 *)puVar1);
  *(undefined4 *)(param_2 + 0x44) = uVar3;
  uVar3 = FUN_054d36c8(*(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x38),param_1,
                       param_2,*(undefined8 *)puVar1);
  *(undefined4 *)(param_2 + 0x48) = uVar3;
  uVar4 = FUN_054d36c8(*(undefined4 *)(param_2 + 0x2c),*(undefined4 *)(param_2 + 0x3c),param_1,
                       param_2,*(undefined8 *)puVar1);
  *(int *)(param_2 + 0x4c) = (int)uVar4;
  if (*(char *)(param_2 + 0xc0) != '\0') {
    lVar2 = *(long *)(param_2 + 0xb8);
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x063bb428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 0x18))
                (*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44),
                 *(undefined4 *)(param_2 + 0x48),uVar4,*(undefined8 *)(lVar2 + 0x40),
                 *(undefined8 *)(lVar2 + 0x28));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  return;
}


