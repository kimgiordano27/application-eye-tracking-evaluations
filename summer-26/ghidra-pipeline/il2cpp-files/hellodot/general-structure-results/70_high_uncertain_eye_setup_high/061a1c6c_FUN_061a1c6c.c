/*
FUNCTION_NAME: FUN_061a1c6c
ENTRY_POINT: 061a1c6c
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_061a1c6c(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((DAT_06a83d69 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dcda0);
    AkMIDIEventCallbackInfo__get_byProgramNum(OVRPlugin_Posef_TypeInfo);
    DAT_06a83d69 = 1;
  }
  FUN_061a1b78(param_1);
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar1 = FUN_03968754(*(long *)(param_1 + 0x10),param_2,*(undefined8 *)OVRPlugin_Posef_TypeInfo);
    FUN_0615c99c(~uVar1 & 1,0);
    lVar2 = *(long *)(param_1 + 0x10);
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + 0x10);
      lVar4 = *(long *)PTR_DAT_065dcda0;
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
      if (lVar3 != 0) {
        uVar1 = *(uint *)(lVar2 + 0x18);
        if (uVar1 < *(uint *)(lVar3 + 0x18)) {
          *(uint *)(lVar2 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = param_2;
          return;
        }
        FUN_039683cc(lVar2,param_2,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70)
                    );
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


