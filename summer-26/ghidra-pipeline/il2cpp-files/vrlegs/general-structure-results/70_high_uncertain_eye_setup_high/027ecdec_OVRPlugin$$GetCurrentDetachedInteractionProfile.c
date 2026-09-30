/*
FUNCTION_NAME: OVRPlugin$$GetCurrentDetachedInteractionProfile
ENTRY_POINT: 027ecdec
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x027eced8) */

void OVRPlugin__GetCurrentDetachedInteractionProfile(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  char local_28 [4];
  undefined4 local_24;
  
  if ((DAT_0412511f & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cd7350);
    FUN_01ab69ac(PTR_DAT_03cfd458);
    DAT_0412511f = 1;
  }
  puVar1 = PTR_DAT_03cd7350;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar2 = OVRPlugin__SetControllerLocalizedVibration(param_1);
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar3);
    lVar3 = *(long *)puVar1;
  }
  uVar4 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8);
  local_28[0] = '\0';
  FUN_027e0bd8(uVar4,local_28);
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar3 = *(long *)puVar1;
  }
  if (**(long **)(lVar3 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  local_24 = uVar2;
  FUN_0221e214(**(long **)(lVar3 + 0xb8),&local_24,param_1,*(undefined8 *)PTR_DAT_03cfd458);
  if (local_28[0] != '\0') {
    FUN_01a4adbc(uVar4);
  }
  return;
}


