/*
FUNCTION_NAME: FUN_06afb364
ENTRY_POINT: 06afb364
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_06afb364(long param_1,int param_2,int param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_06f98fe0;
  if ((DAT_073ab367 & 1) == 0) {
    FUN_02fe925c(OVRPlugin_OVRP_1_123_0_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f98fe0);
    FUN_02fe925c(OVRPlugin_OVRP_1_125_0_TypeInfo);
    FUN_02fe925c(PTR_DAT_06f9bab0);
    DAT_073ab367 = 1;
  }
  FUN_05b32c00(param_1,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f9bab0;
  FUN_0692ad6c(0 < param_2 && param_2 <= param_3,0);
  iVar4 = FUN_068edda0(param_2,0);
  FUN_0692ad6c(iVar4 == param_2,0);
  iVar4 = FUN_068edda0(param_3,0);
  FUN_0692ad6c(iVar4 == param_3,0);
  *(int *)(param_1 + 0x40) = param_4;
  *(int *)(param_1 + 0x44) = param_4 * 2;
  *(int *)(param_1 + 0x10) = param_3;
  *(int *)(param_1 + 0x14) = param_3;
  if (param_2 == param_3) {
    iVar4 = param_2;
    if (param_2 < 0) {
      iVar4 = param_2 + 1;
    }
    iVar4 = iVar4 >> 1;
  }
  else {
    iVar4 = param_3 + 3;
    if (-1 < param_3) {
      iVar4 = param_3;
    }
    iVar4 = iVar4 >> 2;
  }
  *(int *)(param_1 + 0x18) = iVar4 + param_4 * 2;
  *(int *)(param_1 + 0x1c) = param_2;
  *(int *)(param_1 + 0x20) = param_2;
  puVar3 = OVRPlugin_OVRP_1_125_0_TypeInfo;
  puVar2 = OVRPlugin_OVRP_1_123_0_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  iVar4 = FUN_06afb234(param_3);
  uVar5 = FUN_02fe9340(*(undefined8 *)puVar3,iVar4 + 1);
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  thunk_FUN_03048534();
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar5 = FUN_06afb520(0,CONCAT44(param_2,param_2));
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  thunk_FUN_03048534();
  FUN_06afb5d8(param_1);
  return;
}


