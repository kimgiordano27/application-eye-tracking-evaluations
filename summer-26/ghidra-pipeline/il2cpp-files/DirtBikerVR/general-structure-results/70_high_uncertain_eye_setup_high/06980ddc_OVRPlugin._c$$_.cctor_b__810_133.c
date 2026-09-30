/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_133
ENTRY_POINT: 06980ddc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06980df8) */
/* WARNING: Removing unreachable block (ram,0x06980dfc) */
/* WARNING: Removing unreachable block (ram,0x06980e44) */
/* WARNING: Removing unreachable block (ram,0x06980e54) */
/* WARNING: Removing unreachable block (ram,0x06980e64) */
/* WARNING: Removing unreachable block (ram,0x06980e68) */
/* WARNING: Removing unreachable block (ram,0x06980f8c) */
/* WARNING: Removing unreachable block (ram,0x06980e74) */
/* WARNING: Removing unreachable block (ram,0x06980f88) */
/* WARNING: Removing unreachable block (ram,0x06980e84) */
/* WARNING: Removing unreachable block (ram,0x06980f90) */
/* WARNING: Removing unreachable block (ram,0x06980ea0) */
/* WARNING: Removing unreachable block (ram,0x06980eb0) */

void OVRPlugin_<>c__<_cctor>b__810_133(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  void *unaff_x20;
  void *__ptr;
  ulong uVar4;
  undefined8 *unaff_x23;
  long *unaff_x24;
  
  lVar2 = FUN_03a8a804(*unaff_x23,0);
  puVar1 = PTR_DAT_08490748;
  FUN_067aa750(0,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*unaff_x24);
  }
  FUN_06980ffc();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  System_Type__IsValueTypeImpl(unaff_x20);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
    uVar4 = 0;
    uVar3 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
    do {
      if (uVar3 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c8();
      }
      __ptr = *(void **)(lVar2 + 0x20 + uVar4 * 8);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      System_Type__IsValueTypeImpl(__ptr);
      uVar3 = (ulong)*(uint *)(lVar2 + 0x18);
      uVar4 = uVar4 + 1;
    } while ((long)uVar4 < (long)(int)*(uint *)(lVar2 + 0x18));
  }
  return;
}


