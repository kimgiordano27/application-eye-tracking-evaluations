/*
FUNCTION_NAME: OVRManager$$StaticUpdateMixedRealityCapture
ENTRY_POINT: 057397c8
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__StaticUpdateMixedRealityCapture(long param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  FUN_02f07e70(*(undefined8 *)(param_1 + 0xc10));
  FUN_02f07e70(PTR_DAT_06d37b78);
  FUN_02f07e70(PTR_DAT_06d37b60);
  *(undefined1 *)(unaff_x22 + 0x920) = 1;
  if (unaff_x21 == (long *)0x0) {
    return;
  }
  bVar1 = *(byte *)(*(long *)PTR_DAT_06d57c10 + 0x130);
  if (*(byte *)(*unaff_x21 + 0x130) < bVar1) {
    return;
  }
  if (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_06d57c10) {
    return;
  }
  if (unaff_x19 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06d37b78 + 0x130);
    if ((bVar1 <= *(byte *)(*unaff_x19 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06d37b78)
       ) goto LAB_05739898;
  }
  unaff_x19 = (long *)thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d37b60);
  FUN_057497d8();
LAB_05739898:
  uVar2 = (**(code **)(*unaff_x20 + 0x1d8))();
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_05734b4c(unaff_x21,uVar2,unaff_x19);
  return;
}


