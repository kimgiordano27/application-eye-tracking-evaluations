/*
FUNCTION_NAME: OVRPlugin$$UpdateNodePhysicsPoses
ENTRY_POINT: 07c7380c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__UpdateNodePhysicsPoses(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  
                    /* catch() { ... } // from try @ 07c73690 with catch @ 07c73810
                       catch() { ... } // from try @ 07c73748 with catch @ 07c73810
                       catch() { ... } // from try @ 07c73804 with catch @ 07c73810 */
  if ((*(byte *)(unaff_x20 + 0x740) & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f4e7b0);
    FUN_04447ba8(PTR_DAT_09f50670);
    *(undefined1 *)(unaff_x20 + 0x740) = 1;
  }
  puVar1 = PTR_DAT_09f4e7b0;
  plVar3 = (long *)(param_1 + 0x20);
  lVar2 = *plVar3;
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x18) == 0)) {
    lVar2 = *(long *)PTR_DAT_09f4e7b0;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      lVar2 = *(long *)puVar1;
    }
    if (**(long **)(lVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar2 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f50670,
                         *(undefined4 *)(**(long **)(lVar2 + 0xb8) + 0x18));
    *plVar3 = lVar2;
    thunk_FUN_044bb4b4(plVar3,lVar2);
    lVar2 = *plVar3;
  }
  return lVar2;
}


