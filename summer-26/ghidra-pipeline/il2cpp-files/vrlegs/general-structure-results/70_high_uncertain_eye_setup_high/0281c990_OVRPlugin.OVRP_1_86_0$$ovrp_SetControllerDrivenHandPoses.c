/*
FUNCTION_NAME: OVRPlugin.OVRP_1_86_0$$ovrp_SetControllerDrivenHandPoses
ENTRY_POINT: 0281c990
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_OVRP_1_86_0__ovrp_SetControllerDrivenHandPoses
          (long param_1,uint param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  ushort uVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  int in_w8;
  undefined8 in_x9;
  int in_w10;
  int in_w11;
  long in_x12;
  ulong in_x13;
  long in_x14;
  
  while( true ) {
    if ((bool)in_CY && !(bool)in_ZR) {
      return 3;
    }
    lVar1 = (in_x14 * in_x12 - in_x13) + 0x30;
    if (in_x14 < lVar1) break;
    *param_4 = lVar1;
    if (in_w11 == 0) {
      if (in_w8 != 0x2d) {
        if (lVar1 == -0x8000000000000000) {
          return 2;
        }
        *param_4 = -lVar1;
      }
      return 1;
    }
    in_x9 = *(undefined8 *)(param_1 + 0x18);
    param_2 = param_2 + 1;
    in_w11 = in_w11 + -1;
    if ((uint)in_x9 <= param_2) goto LAB_0281c9c8;
    uVar2 = *(ushort *)(param_1 + (long)(int)param_2 * 2 + 0x20);
    in_x13 = (ulong)uVar2;
    uVar2 = uVar2 - 0x30;
    in_CY = 8 < uVar2;
    in_ZR = uVar2 == 9;
    in_x14 = lVar1;
  }
  while( true ) {
    param_2 = param_2 + 1;
    if (in_w10 <= (int)param_2) {
      return 2;
    }
    if ((uint)in_x9 <= param_2) break;
    if (9 < *(ushort *)(param_1 + (long)(int)param_2 * 2 + 0x20) - 0x30) {
      return 3;
    }
  }
LAB_0281c9c8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


