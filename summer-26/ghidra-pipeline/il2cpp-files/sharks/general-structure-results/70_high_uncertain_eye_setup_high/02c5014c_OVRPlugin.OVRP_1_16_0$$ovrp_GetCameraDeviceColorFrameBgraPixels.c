/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_GetCameraDeviceColorFrameBgraPixels
ENTRY_POINT: 02c5014c
PROGRAM: sharks-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined2
OVRPlugin_OVRP_1_16_0__ovrp_GetCameraDeviceColorFrameBgraPixels(long param_1,undefined8 param_2)

{
  ulong uVar1;
  uint in_w9;
  uint in_w11;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(ushort *)(param_1 + 0x20) <= in_w11) {
    if (in_w9 < 2) {
LAB_02c50240:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5b0(param_2);
    }
    if (in_w11 <= *(ushort *)
                   (param_1 + ((long)(((ulong)in_w9 << 0x20) + -0x200000000) >> 0x1f) + 0x20)) {
      uVar4 = in_w9;
      if ((int)in_w9 < 7) {
        uVar3 = 0;
      }
      else {
        uVar2 = 0;
        uVar5 = in_w9;
        do {
          uVar5 = uVar2 + (uVar5 >> 1) & 0xfffe;
          if (in_w9 <= uVar5) goto LAB_02c50240;
          uVar6 = (uint)*(ushort *)(param_1 + (ulong)uVar5 * 2 + 0x20);
          if (in_w11 == uVar6) {
            if (in_w9 <= (uVar5 | 1)) goto LAB_02c50240;
            uVar1 = (ulong)(uVar5 | 1);
            goto LAB_02c50234;
          }
          uVar3 = uVar5;
          if (in_w11 < uVar6) {
            uVar3 = uVar2;
            uVar4 = uVar5;
          }
          uVar5 = uVar4 - uVar3;
          uVar2 = uVar3;
        } while (6 < (int)uVar5);
      }
      if ((int)uVar3 < (int)uVar4) {
        while (uVar3 < in_w9) {
          if (*(ushort *)(param_1 + (long)(int)uVar3 * 2 + 0x20) == in_w11) {
            if (uVar3 + 1 < in_w9) {
              uVar1 = (ulong)(int)(uVar3 + 1);
LAB_02c50234:
              return *(undefined2 *)(param_1 + uVar1 * 2 + 0x20);
            }
            break;
          }
          uVar3 = uVar3 + 2;
          param_2 = 0;
          if ((int)uVar4 <= (int)uVar3) {
            return 0;
          }
        }
        goto LAB_02c50240;
      }
    }
  }
  return 0;
}


