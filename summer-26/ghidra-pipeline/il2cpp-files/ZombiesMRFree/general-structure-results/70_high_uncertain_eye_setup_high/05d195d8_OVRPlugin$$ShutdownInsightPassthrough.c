/*
FUNCTION_NAME: OVRPlugin$$ShutdownInsightPassthrough
ENTRY_POINT: 05d195d8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__ShutdownInsightPassthrough(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x20;
  
  if (param_1 != 0) {
    FUN_068f5d7c(param_1,0);
    FUN_05d18d90(param_2);
    lVar2 = *(long *)(unaff_x20 + 0x130);
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + 0x10);
      lVar5 = *(long *)PTR_DAT_06fb8958;
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
      if (lVar3 != 0) {
        uVar1 = *(uint *)(lVar2 + 0x18);
        if (uVar1 < *(uint *)(lVar3 + 0x18)) {
          *(uint *)(lVar2 + 0x18) = uVar1 + 1;
          puVar4 = (undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
          *puVar4 = param_2;
          thunk_FUN_03048534(puVar4,param_2);
        }
        else {
          FUN_044302e8(lVar2,param_2,
                       *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        return param_2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


