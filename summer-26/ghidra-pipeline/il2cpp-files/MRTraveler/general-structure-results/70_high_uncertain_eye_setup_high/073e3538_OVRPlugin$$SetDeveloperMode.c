/*
FUNCTION_NAME: OVRPlugin$$SetDeveloperMode
ENTRY_POINT: 073e3538
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetDeveloperMode
               (long param_1,undefined8 *param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  uint unaff_w19;
  long unaff_x21;
  ulong unaff_x22;
  int unaff_w23;
  int unaff_w24;
  uint uStack0000000000000008;
  int iStack000000000000000c;
  
  while( true ) {
    FUN_073f8ae4(param_1,param_2,param_3,param_4,param_5);
    unaff_x22 = unaff_x22 + 1;
    if (unaff_x22 == 5) {
      return;
    }
    lVar1 = FUN_073d5784();
    if (lVar1 == 0) break;
    if (*(uint *)(lVar1 + 0x18) <= unaff_x22) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb38();
    }
    iStack000000000000000c = *(int *)(lVar1 + unaff_x22 * 4 + 0x20);
    uStack0000000000000008 = (uint)unaff_x22;
    if (iStack000000000000000c == 1 &&
        (unaff_w23 << (ulong)(uStack0000000000000008 & 0x1f) & unaff_w19) != 0) {
      iStack000000000000000c = unaff_w24;
    }
    param_1 = *(long *)(unaff_x21 + 0x48);
    if (param_1 == 0) break;
    param_2 = (undefined8 *)&stack0x00000008;
    param_3 = (long)&stack0x00000008 + 4;
    param_4 = 0;
    param_5 = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


