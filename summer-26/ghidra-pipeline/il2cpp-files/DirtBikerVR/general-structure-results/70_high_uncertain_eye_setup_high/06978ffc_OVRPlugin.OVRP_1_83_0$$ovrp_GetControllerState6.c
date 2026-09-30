/*
FUNCTION_NAME: OVRPlugin.OVRP_1_83_0$$ovrp_GetControllerState6
ENTRY_POINT: 06978ffc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_83_0__ovrp_GetControllerState6(long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined1 in_CY;
  uint uVar4;
  long in_x9;
  uint in_w10;
  int in_w11;
  int in_w12;
  long in_x13;
  long in_x14;
  int unaff_w19;
  long unaff_x20;
  long unaff_x22;
  int unaff_w23;
  
  while( true ) {
    iVar2 = in_w11 - in_w12 * unaff_w23;
    *(int *)(in_x14 + 0x20) = iVar2;
    if ((bool)in_CY) break;
    iVar3 = (int)param_1;
    *(undefined4 *)(unaff_x22 + (long)(int)in_x13 * 4 + 0x20) = 0;
    if (in_w10 <= iVar3 + 3U) break;
    *(int *)(unaff_x22 + (long)(int)(iVar3 + 3U) * 4 + 0x20) = unaff_w19 + in_w11;
    if (in_w10 <= iVar3 + 4U) break;
    *(int *)(unaff_x22 + (long)(int)(iVar3 + 4U) * 4 + 0x20) = iVar2 + unaff_w23;
    if (in_w10 <= iVar3 + 5U) break;
    lVar1 = param_1 + 6;
    *(int *)(unaff_x22 + (long)(int)(iVar3 + 5U) * 4 + 0x20) = unaff_w23;
    if (in_x9 == lVar1) {
      if (unaff_x20 != 0) {
        FUN_07c72230();
        FUN_07c73ad4();
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar4 = (uint)lVar1;
    if (in_w10 <= uVar4) break;
    *(int *)(unaff_x22 + (long)(int)uVar4 * 4 + 0x20) = in_w11;
    if (in_w10 <= uVar4 + 1) break;
    in_w12 = 0;
    if (unaff_w23 != 0) {
      in_w12 = (in_w11 + 1) / unaff_w23;
    }
    in_x14 = unaff_x22 + (long)(int)(uVar4 + 1) * 4;
    in_x13 = param_1 + 8;
    in_CY = in_w10 <= (uint)in_x13;
    param_1 = lVar1;
    in_w11 = in_w11 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


