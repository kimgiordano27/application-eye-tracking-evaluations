/*
FUNCTION_NAME: OVRPlugin$$InitializeMixedReality
ENTRY_POINT: 03370d98
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__InitializeMixedReality(long param_1,uint param_2,int param_3,long *param_4)

{
  ushort uVar1;
  int in_w8;
  undefined8 in_x9;
  int in_w10;
  long lVar2;
  long lVar3;
  
  if (in_w10 <= (int)param_2) {
    if (in_w8 != 0x2d) {
      lVar2 = 0;
LAB_03370e50:
      *param_4 = -lVar2;
    }
    return 1;
  }
  if (param_2 < (uint)in_x9) {
    lVar3 = 0;
    do {
      param_3 = param_3 + -1;
      uVar1 = *(ushort *)(param_1 + (long)(int)param_2 * 2 + 0x20);
      if (9 < (ushort)(uVar1 - 0x30)) {
        return 3;
      }
      lVar2 = (lVar3 * 10 - (ulong)uVar1) + 0x30;
      if (lVar3 < lVar2) goto LAB_03370e60;
      *param_4 = lVar2;
      if (param_3 == 0) {
        if (in_w8 == 0x2d) {
          return 1;
        }
        if (lVar2 == -0x8000000000000000) {
          return 2;
        }
        goto LAB_03370e50;
      }
      in_x9 = *(undefined8 *)(param_1 + 0x18);
      param_2 = param_2 + 1;
      lVar3 = lVar2;
    } while (param_2 < (uint)in_x9);
  }
LAB_03370e00:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
LAB_03370e60:
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
  goto LAB_03370e00;
}


