/*
FUNCTION_NAME: OVRPlugin.OVRP_1_97_0$$ovrp_RetrieveSpaceDiscoveryResults
ENTRY_POINT: 01dbe89c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01dbe938) */

void OVRPlugin_OVRP_1_97_0__ovrp_RetrieveSpaceDiscoveryResults(long param_1)

{
  long lVar1;
  int in_w8;
  long lVar2;
  long *unaff_x22;
  long in_stack_00000008;
  
  if (in_w8 == 0) {
    thunk_FUN_01022c14();
    param_1 = *unaff_x22;
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0xb8) + 0x20);
  if (lVar2 != 0) {
    FUN_01daa194(lVar2,0);
    in_stack_00000008 = lVar2;
    thunk_FUN_0106e12c(&stack0x00000008,lVar2);
    lVar2 = in_stack_00000008;
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01022c14();
      lVar1 = *unaff_x22;
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x18);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40));
    }
    if (lVar2 != 0) {
      FUN_01daa1b8(lVar2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


