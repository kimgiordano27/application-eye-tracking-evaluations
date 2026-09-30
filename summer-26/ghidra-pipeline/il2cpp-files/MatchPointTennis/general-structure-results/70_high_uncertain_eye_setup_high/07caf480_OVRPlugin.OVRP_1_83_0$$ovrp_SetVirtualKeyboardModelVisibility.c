/*
FUNCTION_NAME: OVRPlugin.OVRP_1_83_0$$ovrp_SetVirtualKeyboardModelVisibility
ENTRY_POINT: 07caf480
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_83_0__ovrp_SetVirtualKeyboardModelVisibility(void)

{
  ulong uVar1;
  uint in_w8;
  long lVar2;
  long unaff_x19;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x19 + 0x28);
  if (lVar2 == 0) {
LAB_07caf474:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if ((int)in_w8 < (int)*(uint *)(lVar2 + 0x18)) {
    if (*(uint *)(lVar2 + 0x18) <= in_w8) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    uVar3 = *(undefined8 *)(lVar2 + (long)(int)in_w8 * 8 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_09f1e538 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar1 = FUN_09531730(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        FUN_094e9b40(*(long *)(unaff_x19 + 0x20),*(undefined8 *)PTR_DAT_09f32a58,uVar3,0);
        return;
      }
      goto LAB_07caf474;
    }
  }
  return;
}


