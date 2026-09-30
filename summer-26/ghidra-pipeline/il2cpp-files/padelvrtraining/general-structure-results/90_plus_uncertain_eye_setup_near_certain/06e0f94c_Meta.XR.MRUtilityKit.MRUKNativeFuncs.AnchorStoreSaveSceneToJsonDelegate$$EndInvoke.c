/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreSaveSceneToJsonDelegate$$EndInvoke
ENTRY_POINT: 06e0f94c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 100
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate__EndInvoke
               (long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x18);
  uVar2 = iVar1 - 1;
  *(uint *)(param_2 + 0xc) = uVar2;
  if (-1 < (int)uVar2) {
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    lVar3 = lVar3 + (ulong)uVar2 * 0x10;
    uVar4 = *(undefined8 *)(lVar3 + 0x20);
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(param_2 + 0x10) = uVar4;
    thunk_FUN_03d1023c((undefined8 *)(param_2 + 0x10),0);
  }
  return (uint)-iVar1 >> 0x1f;
}


