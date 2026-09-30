/*
FUNCTION_NAME: OVRPlugin.OVRP_1_57_0$$ovrp_SetEyeFovPremultipliedAlphaMode
ENTRY_POINT: 02818800
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_OVRP_1_57_0__ovrp_SetEyeFovPremultipliedAlphaMode
          (long param_1,long param_2,uint param_3,int *param_4)

{
  long lVar1;
  int iVar2;
  uint in_w8;
  long in_x9;
  long in_x10;
  
  while (in_x10 != 0) {
    if (*(uint *)(in_x10 + 0x18) <= in_w8) {
LAB_02818860:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    lVar1 = (long)(int)param_3;
    param_3 = param_3 + 1;
    in_w8 = in_w8 + 1;
    *(undefined1 *)(in_x10 + in_x9) = *(undefined1 *)(param_2 + lVar1 + 0x20);
    in_x9 = in_x9 + 1;
    iVar2 = *param_4 + -1;
    *param_4 = iVar2;
    if (in_x9 == 0x23) {
      return 0;
    }
    if (iVar2 < 1) {
      if (iVar2 != 0) {
        return 0;
      }
      *(uint *)(param_1 + 0x28) = in_w8;
      return 1;
    }
    if (param_2 == 0) break;
    if (*(uint *)(param_2 + 0x18) <= param_3) goto LAB_02818860;
    in_x10 = *(long *)(param_1 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


