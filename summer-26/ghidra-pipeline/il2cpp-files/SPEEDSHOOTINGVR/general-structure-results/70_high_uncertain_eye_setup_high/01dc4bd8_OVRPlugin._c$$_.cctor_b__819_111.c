/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__819_111
ENTRY_POINT: 01dc4bd8
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_<>c__<_cctor>b__819_111(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)(param_1 + 0x28) + -1;
  iVar1 = *(int *)(param_1 + 0x2c) + 1;
  *(int *)(param_1 + 0x28) = iVar2;
  *(int *)(param_1 + 0x2c) = iVar1;
  if (-1 < iVar2) {
    if (iVar2 != 0x7fffffff) {
      if (*(long *)(param_1 + 0x20) != 0) {
        uVar3 = FUN_01c49538(*(long *)(param_1 + 0x20),iVar1,0);
        return uVar3;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  }
  return 0;
}


