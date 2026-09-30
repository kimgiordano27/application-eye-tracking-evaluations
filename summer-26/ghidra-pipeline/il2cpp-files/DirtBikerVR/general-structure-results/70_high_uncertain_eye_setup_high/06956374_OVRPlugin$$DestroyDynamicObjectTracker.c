/*
FUNCTION_NAME: OVRPlugin$$DestroyDynamicObjectTracker
ENTRY_POINT: 06956374
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__DestroyDynamicObjectTracker(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  uint unaff_w19;
  long lVar6;
  
  if (*(long *)(param_1 + 0xc0) != 0) {
    lVar6 = *(long *)(*(long *)(param_1 + 0xc0) + 0x28);
    uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_084b6ab8);
    FUN_0693677c();
    if (lVar6 != 0) {
      lVar4 = *(long *)(lVar6 + 0x10);
      lVar5 = *(long *)PTR_DAT_084b6ac0;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar4 != 0) {
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          puVar3 = (undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
          *puVar3 = uVar2;
          thunk_FUN_03afed3c(puVar3,uVar2);
        }
        else {
          FUN_04de85b0(lVar6,uVar2,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                      );
        }
        return unaff_w19 & 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


