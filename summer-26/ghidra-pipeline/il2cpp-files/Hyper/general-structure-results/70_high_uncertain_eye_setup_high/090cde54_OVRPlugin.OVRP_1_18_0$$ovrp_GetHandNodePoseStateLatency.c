/*
FUNCTION_NAME: OVRPlugin.OVRP_1_18_0$$ovrp_GetHandNodePoseStateLatency
ENTRY_POINT: 090cde54
PROGRAM: Hyper-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_18_0__ovrp_GetHandNodePoseStateLatency(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  
                    /* try { // try from 090cde54 to 091cde7b has its CatchHandler @ 090cdf94 */
  uVar2 = FUN_090cdc58();
  puVar1 = PTR_DAT_0ac77d70;
  if (((uVar2 & 1) != 0) && (*(long *)(unaff_x20 + 0x70) != 0)) {
    FUN_090cd6a0();
    if (*(long *)(unaff_x20 + 0x70) != 0) {
                    /* try { // try from 090cde80 to 091cdedf has its CatchHandler @ 090cdfa0 */
      uVar3 = FUN_090cdefc();
      return uVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  if (*(int *)(*(long *)PTR_DAT_0ac77d70 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if (DAT_0b330093 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac77d70);
    DAT_0b330093 = '\x01';
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar4 = *(long *)puVar1;
  }
  *unaff_x19 = **(undefined8 **)(lVar4 + 0xb8);
  thunk_FUN_049ee3d8();
  return 0;
}


