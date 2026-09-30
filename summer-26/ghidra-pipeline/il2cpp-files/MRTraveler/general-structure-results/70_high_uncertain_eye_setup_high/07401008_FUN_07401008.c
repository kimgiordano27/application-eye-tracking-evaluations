/*
FUNCTION_NAME: FUN_07401008
ENTRY_POINT: 07401008
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_07401008(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 != 0) {
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      uVar5 = 0;
      do {
        if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        lVar3 = *(long *)(lVar4 + (long)(int)uVar5 * 8 + 0x20);
        if (lVar3 == 0) goto OVRPlugin_Quatf___ctor;
        uVar2 = FUN_07401140(lVar3);
        if ((uVar2 & 1) != 0) {
          FUN_07401090(param_1,lVar3);
          return;
        }
        uVar1 = *(uint *)(lVar4 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)uVar1);
    }
    return;
  }
OVRPlugin_Quatf___ctor:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


