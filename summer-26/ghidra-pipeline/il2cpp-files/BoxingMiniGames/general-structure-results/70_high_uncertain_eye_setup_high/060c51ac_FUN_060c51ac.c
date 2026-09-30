/*
FUNCTION_NAME: FUN_060c51ac
ENTRY_POINT: 060c51ac
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_060c51ac(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  puVar2 = PTR_DAT_07a24108;
  puVar1 = PTR_DAT_079f4e28;
  if ((DAT_07ee0a1d & 1) == 0) {
    FUN_03642964(PTR_DAT_07a24108);
    FUN_03642964(PTR_DAT_07a24100);
    FUN_03642964(PTR_DAT_07a240c8);
    FUN_03642964(PTR_DAT_079f4e28);
    DAT_07ee0a1d = 1;
  }
  FUN_042b46a0(param_1,*(undefined8 *)puVar2);
  uVar5 = *(undefined8 *)(param_1 + 0xd0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar4 = FUN_071c24dc(uVar5,0,0);
  if ((uVar4 & 1) == 0) {
    FUN_060c52c0(param_1,param_1 + 0x160);
    if (*(long *)(param_1 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    uVar6 = OVRManager__SetAppSpaceRotation();
    bVar3 = FUN_060c5034(param_1,*(undefined8 *)(param_1 + 200));
    *(byte *)(param_1 + 0x16a) = (bVar3 ^ 0xff) & 1;
    if ((*(char *)(param_1 + 0x168) != '\0') && ((bVar3 & 1) != 0)) {
      FUN_060c55a0(uVar6,param_1,param_1 + 0x160);
      return;
    }
  }
  return;
}


