/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$OnAfterDeserialize
ENTRY_POINT: 076d2694
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_RuntimeSettings__OnAfterDeserialize(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000008;
  
  puVar1 = PTR_DAT_09f2e360;
  if ((DAT_0a522dfd & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f2e4f0);
    FUN_04447ba8(PTR_DAT_09f2e360);
    DAT_0a522dfd = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar2 = *(long *)puVar1;
  }
  if (**(char **)(lVar2 + 0xb8) == '\0') {
    uVar3 = FUN_076d1bd4(lVar2,param_2);
  }
  else {
    if (((param_2 != (long *)0x0) &&
        (lVar2 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180)),
        lVar2 != 0)) && (*(long *)(lVar2 + 0x20) != 0)) {
      lVar2 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
      if ((lVar2 == 0) || (*(long *)(lVar2 + 0x20) == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      if (0.0 < *(float *)(*(long *)(lVar2 + 0x20) + 0x10)) {
        in_stack_00000008 = 0;
        FUN_0613ca18(&stack0x00000008,1,*(undefined8 *)PTR_DAT_09f2e4f0);
        return in_stack_00000008;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}


