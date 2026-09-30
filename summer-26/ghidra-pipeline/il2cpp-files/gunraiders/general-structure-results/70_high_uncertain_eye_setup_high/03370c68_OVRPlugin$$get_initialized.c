/*
FUNCTION_NAME: OVRPlugin$$get_initialized
ENTRY_POINT: 03370c68
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__get_initialized(long param_1,uint param_2,int param_3,int *param_4)

{
  uint uVar1;
  int in_w8;
  uint in_w9;
  int in_w10;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (0x32 < *(ushort *)(param_1 + (long)(int)param_2 * 2 + 0x20)) {
    if ((int)param_2 < in_w10) {
      uVar1 = param_2;
      if (param_2 <= in_w9) {
        uVar1 = in_w9;
      }
      do {
        if (uVar1 == param_2) goto LAB_03370d44;
        if (9 < *(ushort *)(param_1 + (long)(int)param_2 * 2 + 0x20) - 0x30) {
          return 3;
        }
        param_3 = param_3 + -1;
        param_2 = param_2 + 1;
      } while (param_3 != 0);
    }
    return 2;
  }
  if ((int)param_2 < in_w10) {
    iVar2 = 0;
    uVar1 = param_2;
    if (param_2 <= in_w9) {
      uVar1 = in_w9;
    }
    do {
      if (uVar1 == param_2) goto LAB_03370d44;
      uVar3 = (uint)*(ushort *)(param_1 + (long)(int)param_2 * 2 + 0x20);
      if (9 < uVar3 - 0x30) {
        return 3;
      }
      iVar4 = (iVar2 * 10 - uVar3) + 0x30;
      if (iVar2 < iVar4) goto LAB_03370d14;
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
LAB_03370d14:
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
LAB_03370d44:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


