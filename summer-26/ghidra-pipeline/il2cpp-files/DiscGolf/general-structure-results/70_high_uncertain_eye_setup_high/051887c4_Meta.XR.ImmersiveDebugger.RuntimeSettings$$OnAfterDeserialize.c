/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$OnAfterDeserialize
ENTRY_POINT: 051887c4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_RuntimeSettings__OnAfterDeserialize(long param_1,long param_2)

{
  uint uVar1;
  long in_x9;
  long lVar2;
  
  if ((*(int *)(param_1 + 0xc) != *(int *)(in_x9 + 0x1c)) ||
     (uVar1 = *(uint *)(param_1 + 8), *(uint *)(in_x9 + 0x18) <= uVar1)) {
    if ((*(ushort *)(*(long *)(param_2 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    FUN_05188864(param_1);
    return 0;
  }
  lVar2 = *(long *)(in_x9 + 0x10);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  if (uVar1 < *(uint *)(lVar2 + 0x18)) {
    memmove((void *)(param_1 + 0x10),(void *)(lVar2 + (long)(int)uVar1 * 0x50 + 0x20),0x50);
    LeanTween__value(param_1 + 0x10,0);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


