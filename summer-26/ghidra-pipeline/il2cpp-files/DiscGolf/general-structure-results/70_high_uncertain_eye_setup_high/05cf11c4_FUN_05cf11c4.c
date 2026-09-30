/*
FUNCTION_NAME: FUN_05cf11c4
ENTRY_POINT: 05cf11c4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05cf1340) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_05cf11c4(void)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  char local_24 [4];
  
  puVar2 = OVRPlugin_OVRP_1_102_0_TypeInfo;
  if ((DAT_06dc2dc9 & 1) == 0) {
    FUN_02d965b8(OVRPlugin_OVRP_1_102_0_TypeInfo);
    DAT_06dc2dc9 = 1;
  }
  lVar3 = *(long *)puVar2;
  local_24[0] = '\0';
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar3 = *(long *)puVar2;
  }
  cVar1 = *(char *)(*(long *)(lVar3 + 0xb8) + 0x28);
  thunk_FUN_02da4860();
  lVar3 = *(long *)puVar2;
  if (cVar1 == '\0') {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar4 = FUN_05ceff0c();
    local_24[0] = '\0';
    FUN_0554bf68(uVar4,local_24,0);
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar3 = *(long *)puVar2;
    }
    cVar1 = *(char *)(*(long *)(lVar3 + 0xb8) + 0x28);
    thunk_FUN_02da4860();
    if (cVar1 == '\0') {
      lVar3 = FUN_05c38a80(0);
      if (lVar3 != 0) {
        uVar6 = *(undefined8 *)(lVar3 + 0x10);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)puVar2);
        }
        thunk_FUN_02da4860();
        puVar5 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
        *puVar5 = uVar6;
        LeanTween__value(puVar5,uVar6);
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      thunk_FUN_02da4860();
      *(undefined1 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28) = 1;
    }
    if (local_24[0] != '\0') {
      thunk_FUN_02da42ec(uVar4,0);
    }
    lVar3 = *(long *)puVar2;
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar3 = *(long *)puVar2;
  }
  uVar4 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x20);
  thunk_FUN_02da4860();
  return uVar4;
}


