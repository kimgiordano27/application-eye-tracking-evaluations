/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_135
ENTRY_POINT: 06980eb8
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


void OVRPlugin_<>c__<_cctor>b__810_135(void)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x19;
  void *unaff_x20;
  void *__ptr;
  int unaff_w21;
  ulong uVar3;
  long *unaff_x24;
  
  FUN_06290de0();
  puVar1 = PTR_DAT_08490748;
  FUN_067aa750((long)unaff_w21,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*unaff_x24);
  }
  FUN_06980ffc();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  System_Type__IsValueTypeImpl(unaff_x20);
  if (unaff_x19 != 0) {
    if (0 < (int)*(ulong *)(unaff_x19 + 0x18)) {
      uVar3 = 0;
      uVar2 = *(ulong *)(unaff_x19 + 0x18) & 0xffffffff;
      do {
        if (uVar2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        __ptr = *(void **)(unaff_x19 + 0x20 + uVar3 * 8);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        System_Type__IsValueTypeImpl(__ptr);
        uVar2 = (ulong)*(uint *)(unaff_x19 + 0x18);
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)(int)*(uint *)(unaff_x19 + 0x18));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


