/*
FUNCTION_NAME: OVRPlugin$$SetInsightPassthroughStyle
ENTRY_POINT: 0321f020
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__SetInsightPassthroughStyle(undefined8 param_1)

{
  uint uVar1;
  int in_w8;
  int iVar2;
  uint in_w9;
  uint uVar3;
  int *unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  
  if (in_w9 < 10) {
    iVar2 = in_w9 + in_w8 * 10;
  }
  else {
    iVar2 = 0;
    uVar3 = 1;
    do {
      if ((9 < iVar2) || (uVar1 = *(ushort *)(unaff_x21 + (long)(int)uVar3 * 2) - 0x30, 9 < uVar1))
      {
        if (unaff_w20 != uVar3) {
          if (unaff_w20 <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_0160eebc();
          }
          if (*(short *)(unaff_x21 + (long)(int)uVar3 * 2) != 0) {
            *unaff_x19 = -1;
            if ((int)param_1 != 0) {
              return 0;
            }
            return 0x47;
          }
        }
        break;
      }
      uVar3 = uVar3 + 1;
      iVar2 = uVar1 + iVar2 * 10;
    } while (unaff_w20 != uVar3);
  }
  *unaff_x19 = iVar2;
  return param_1;
}


