/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetControllerSampleRateHz
ENTRY_POINT: 033f7e38
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_OVRP_1_78_0__ovrp_GetControllerSampleRateHz
          (long param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000008 = param_4;
  if ((DAT_044a6bd0 & 1) == 0) {
    FUN_01d7d918(StringLiteral_1718);
    DAT_044a6bd0 = 1;
  }
  puVar2 = StringLiteral_1718;
  iVar3 = -1;
  do {
    iVar1 = *(int *)(param_1 + 0x10);
    thunk_FUN_01da0934();
    if (iVar1 != 0) {
      return 1;
    }
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033f3e58(&stack0x00000008);
    if (param_2 != -1) {
      iVar3 = thunk_FUN_01dc9540(0);
      if (iVar3 - param_3 < 0) {
        return 0;
      }
      iVar3 = param_2 - (iVar3 - param_3);
      if (iVar3 < 1) {
        return 0;
      }
    }
    uVar4 = FUN_033fb87c(*(undefined8 *)(param_1 + 0x20),iVar3,0);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
  } while( true );
}


