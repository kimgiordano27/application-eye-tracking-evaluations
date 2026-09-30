/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_SetDefaultExternalCamera
ENTRY_POINT: 02c524a0
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined2
OVRPlugin_OVRP_1_44_0__ovrp_SetDefaultExternalCamera(long param_1,undefined8 param_2,ushort param_3)

{
  ulong uVar1;
  ushort uVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  uint in_w9;
  uint in_w10;
  uint uVar3;
  uint in_w11;
  uint in_w12;
  
  while (!(bool)in_ZR) {
    uVar3 = in_w12;
    if ((bool)in_CY) {
      uVar3 = in_w10;
      in_w11 = in_w12;
    }
    if ((int)(in_w11 - uVar3) < 7) goto LAB_02c524e4;
    in_w12 = uVar3 + (in_w11 - uVar3 >> 1) & 0xfffe;
    if (in_w9 <= in_w12) goto LAB_02c52524;
    uVar2 = *(ushort *)(param_1 + (ulong)in_w12 * 2 + 0x20);
    in_CY = param_3 <= uVar2;
    in_w10 = uVar3;
    in_ZR = uVar2 == param_3;
  }
  if (in_w9 <= (in_w12 | 1)) {
LAB_02c52524:
                    /* WARNING: Subroutine does not return */
    FUN_017fc5b0();
  }
  uVar1 = (ulong)(in_w12 | 1);
LAB_02c52518:
  return *(undefined2 *)(param_1 + uVar1 * 2 + 0x20);
LAB_02c524e4:
  if ((int)in_w11 <= (int)uVar3) {
    return 0;
  }
  if (in_w9 <= uVar3) goto LAB_02c52524;
  if (*(ushort *)(param_1 + (long)(int)uVar3 * 2 + 0x20) == param_3) {
    if (in_w9 <= uVar3 + 1) goto LAB_02c52524;
    uVar1 = (ulong)(int)(uVar3 + 1);
    goto LAB_02c52518;
  }
  uVar3 = uVar3 + 2;
  goto LAB_02c524e4;
}


