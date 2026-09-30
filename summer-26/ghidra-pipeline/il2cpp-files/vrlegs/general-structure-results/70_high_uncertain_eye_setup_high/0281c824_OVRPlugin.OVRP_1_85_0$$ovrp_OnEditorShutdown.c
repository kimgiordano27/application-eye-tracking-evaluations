/*
FUNCTION_NAME: OVRPlugin.OVRP_1_85_0$$ovrp_OnEditorShutdown
ENTRY_POINT: 0281c824
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_OVRP_1_85_0__ovrp_OnEditorShutdown(long param_1,uint param_2,int param_3,int *param_4)

{
  uint uVar1;
  bool in_ZR;
  int in_w8;
  uint in_w9;
  int in_w10;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (!in_ZR) {
LAB_0281c840:
    if ((int)param_2 < in_w10) {
      iVar2 = 0;
      uVar1 = param_2;
      if (param_2 <= in_w9) {
        uVar1 = in_w9;
      }
      do {
        if (uVar1 == param_2) goto LAB_0281c90c;
        uVar3 = (uint)*(ushort *)(param_1 + (long)(int)param_2 * 2 + 0x20);
        if (9 < uVar3 - 0x30) {
          return 3;
        }
        iVar4 = (iVar2 * 10 - uVar3) + 0x30;
        if (iVar2 < iVar4) goto LAB_0281c8dc;
        param_3 = param_3 + -1;
        param_2 = param_2 + 1;
        *param_4 = iVar4;
        iVar2 = iVar4;
      } while (param_3 != 0);
      if (in_w8 == 0x2d) {
        return 1;
      }
      if (iVar4 == -0x80000000) {
        return 2;
      }
    }
    else {
      if (in_w8 == 0x2d) {
        return 1;
      }
      iVar4 = 0;
    }
    *param_4 = -iVar4;
    return 1;
  }
  if (param_2 < in_w9) {
    if (*(ushort *)(param_1 + (long)(int)param_2 * 2 + 0x20) < 0x33) goto LAB_0281c840;
    if (in_w10 <= (int)param_2) {
      return 2;
    }
    uVar1 = param_2;
    if (param_2 <= in_w9) {
      uVar1 = in_w9;
    }
    while (uVar1 != param_2) {
      if (9 < *(ushort *)(param_1 + (long)(int)param_2 * 2 + 0x20) - 0x30) {
        return 3;
      }
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
      if (param_3 == 0) {
        return 2;
      }
    }
  }
  goto LAB_0281c90c;
LAB_0281c8dc:
  while( true ) {
    param_2 = param_2 + 1;
    if (in_w10 <= (int)param_2) {
      return 2;
    }
    if (in_w9 <= param_2) break;
    if (9 < *(ushort *)(param_1 + (long)(int)param_2 * 2 + 0x20) - 0x30) {
      return 3;
    }
  }
LAB_0281c90c:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


