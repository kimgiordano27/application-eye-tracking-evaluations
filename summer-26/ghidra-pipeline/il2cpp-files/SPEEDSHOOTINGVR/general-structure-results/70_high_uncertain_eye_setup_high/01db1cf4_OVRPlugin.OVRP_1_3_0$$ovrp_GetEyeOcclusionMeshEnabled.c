/*
FUNCTION_NAME: OVRPlugin.OVRP_1_3_0$$ovrp_GetEyeOcclusionMeshEnabled
ENTRY_POINT: 01db1cf4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_3_0__ovrp_GetEyeOcclusionMeshEnabled(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long unaff_x21;
  long unaff_x23;
  int unaff_w24;
  int unaff_w25;
  
  do {
    uVar4 = FUN_01db26f0(param_1);
    if ((unaff_w24 < 2) || ((uVar4 & 1) != 0)) {
      return;
    }
    while( true ) {
      uVar1 = *(uint *)(unaff_x23 + 0x18);
      unaff_w24 = unaff_w24 + -1;
      iVar3 = 0;
      if (uVar1 != 0) {
        iVar3 = unaff_w25 / (int)uVar1;
      }
      uVar2 = unaff_w25 - iVar3 * uVar1;
      unaff_w25 = unaff_w25 + 1;
      if (uVar1 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      param_1 = *(long *)(unaff_x23 + (long)(int)uVar2 * 8 + 0x20);
      thunk_FUN_00ffe618();
      if ((param_1 != 0) && (param_1 != unaff_x21)) break;
      if (unaff_w24 < 2) {
        return;
      }
    }
  } while( true );
}


