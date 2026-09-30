/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetBoundaryDimensions
ENTRY_POINT: 069702b4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_8_0__ovrp_GetBoundaryDimensions
               (undefined8 param_1,long param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_0897d0f3 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084890a0);
    DAT_0897d0f3 = 1;
  }
  if (param_2 != 0) {
    iVar1 = param_3 - *(int *)(param_2 + 0x10);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 1;
    }
    lVar3 = FUN_065cf45c(param_2,*(int *)(param_2 + 0x10) + (iVar1 >> 1),param_4,0);
    puVar2 = PTR_DAT_084890a0;
    if (lVar3 != 0) {
      uVar4 = FUN_065cf654(lVar3,param_3,param_4,0);
      FUN_065c0764(uVar4,*(undefined8 *)puVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


