/*
FUNCTION_NAME: OVRPlugin.OVRP_1_31_0$$.cctor
ENTRY_POINT: 01db5508
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01db560c) */

void OVRPlugin_OVRP_1_31_0___cctor(long param_1,long param_2,long param_3)

{
  bool bVar1;
  uint uVar2;
  undefined8 in_stack_00000008;
  
  if (param_2 == 0) goto LAB_01db5608;
  if (*(char *)(param_2 + 0x41) != '\0') {
    *(undefined1 *)(param_2 + 0x41) = 0;
  }
  in_stack_00000008._4_1_ = '\0';
  FUN_01da75d8(param_1,(long)&stack0x00000008 + 4);
  thunk_FUN_00ffe618();
  *(undefined1 *)(param_1 + 0x10) = 1;
  if (*(char *)(param_2 + 0x42) == '\0') {
    *(long *)(param_2 + 0x38) = param_3;
    FUN_01db5e68(param_1,param_2);
FUN_01db55b4:
    uVar2 = 4;
    bVar1 = param_3 < *(long *)(param_1 + 0x20);
  }
  else if (param_3 == 0x7fffffffffffffff) {
    *(undefined8 *)(param_2 + 0x38) = 0x7fffffffffffffff;
    *(undefined1 *)(param_2 + 0x41) = 1;
    thunk_FUN_00ffe618();
    bVar1 = false;
    *(undefined1 *)(param_1 + 0x10) = 1;
    uVar2 = 6;
  }
  else {
    if (*(char *)(param_2 + 0x40) == '\0') {
      *(long *)(param_2 + 0x38) = param_3;
      goto FUN_01db55b4;
    }
    bVar1 = false;
    uVar2 = 4;
  }
  if (in_stack_00000008._4_1_ != '\0') {
    FUN_0102a860(param_1);
  }
  if (((uVar2 | 4) == 4) && (bVar1)) {
    if (*(long *)(param_1 + 0x28) == 0) {
LAB_01db5608:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    FUN_01da75f8();
  }
  return;
}


