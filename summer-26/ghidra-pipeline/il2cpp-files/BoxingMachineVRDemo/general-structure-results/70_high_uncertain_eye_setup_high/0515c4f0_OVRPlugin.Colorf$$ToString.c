/*
FUNCTION_NAME: OVRPlugin.Colorf$$ToString
ENTRY_POINT: 0515c4f0
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_Colorf__ToString(void)

{
  byte bVar1;
  long in_x9;
  long *unaff_x19;
  long *unaff_x20;
  
  bVar1 = *(byte *)(**(long **)(in_x9 + 0x5c0) + 0x130);
  if ((*(byte *)(*unaff_x20 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) != **(long **)(in_x9 + 0x5c0)))
  {
                    /* WARNING: Subroutine does not return */
    FUN_02d60e88();
  }
  if (unaff_x19 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_06782048 + 0x130);
    if ((bVar1 <= *(byte *)(*unaff_x19 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06782048)
       ) {
      FUN_0515c5c0();
      return;
    }
  }
  OVRPlugin_FovfPair__get_Item();
  return;
}


