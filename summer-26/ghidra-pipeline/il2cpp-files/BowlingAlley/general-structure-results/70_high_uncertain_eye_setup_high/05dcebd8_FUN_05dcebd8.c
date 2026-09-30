/*
FUNCTION_NAME: FUN_05dcebd8
ENTRY_POINT: 05dcebd8
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_05dcebd8(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  
  if ((DAT_076da992 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072798f8);
    thunk_FUN_032e1da0(PTR_DAT_072b2dd8);
    thunk_FUN_032e1da0(PTR_DAT_072b2de0);
    DAT_076da992 = 1;
  }
  puVar1 = PTR_DAT_072798f8;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  uVar2 = OVRPlugin_OVRP_1_58_0___cctor(param_2,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)puVar1);
  }
  if ((uVar2 & 1) == 0) {
    FUN_06bb23f0(*(undefined8 *)PTR_DAT_072b2de0,0);
    lVar3 = *(long *)(param_1 + 0x30);
  }
  else {
    FUN_06bb2a00(*(undefined8 *)PTR_DAT_072b2dd8,0);
    lVar3 = *(long *)(param_1 + 0x28);
  }
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x05dcec7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
  return;
}


