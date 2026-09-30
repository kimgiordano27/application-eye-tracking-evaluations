/*
FUNCTION_NAME: OVRPlugin.OVRP_1_70_0$$ovrp_SetLogCallback2
ENTRY_POINT: 0516d388
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_70_0__ovrp_SetLogCallback2(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 unaff_x19;
  long unaff_x20;
  
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    if (lVar2 != 0) {
      uVar1 = *(uint *)(param_1 + 0x18);
      if (uVar1 < *(uint *)(lVar2 + 0x18)) {
        *(uint *)(param_1 + 0x18) = uVar1 + 1;
        puVar3 = (undefined8 *)(lVar2 + (long)(int)uVar1 * 8 + 0x20);
        *puVar3 = unaff_x19;
        thunk_FUN_02dd37b4(puVar3);
      }
      else {
        FUN_03aac494();
      }
      *(undefined8 *)(unaff_x20 + 0xa0) = unaff_x19;
      thunk_FUN_02dd37b4((undefined8 *)(unaff_x20 + 0xa0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


