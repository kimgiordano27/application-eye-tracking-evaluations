/*
FUNCTION_NAME: FUN_05cf026c
ENTRY_POINT: 05cf026c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05cf03b8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_05cf026c(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char local_24 [4];
  
  puVar1 = OVRPlugin_OVRP_1_102_0_TypeInfo;
  if ((DAT_06dc2dc2 & 1) == 0) {
    FUN_02d965b8(OVRPlugin_OVRP_1_102_0_TypeInfo);
    DAT_06dc2dc2 = 1;
  }
  lVar2 = *(long *)puVar1;
  local_24[0] = '\0';
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = **(long **)(lVar2 + 0xb8);
  thunk_FUN_02da4860();
  if (lVar2 == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar3 = FUN_05ceff0c();
    local_24[0] = '\0';
    FUN_0554bf68(uVar3,local_24,0);
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar2 = *(long *)puVar1;
    }
    lVar2 = **(long **)(lVar2 + 0xb8);
    thunk_FUN_02da4860();
    if (lVar2 == 0) {
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar4 = FUN_05cf05b4();
      thunk_FUN_02da4860();
      **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar4;
      LeanTween__value(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar4);
    }
    if (local_24[0] != '\0') {
      thunk_FUN_02da42ec(uVar3,0);
    }
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar2 = *(long *)puVar1;
  }
  uVar3 = **(undefined8 **)(lVar2 + 0xb8);
  thunk_FUN_02da4860();
  return uVar3;
}


