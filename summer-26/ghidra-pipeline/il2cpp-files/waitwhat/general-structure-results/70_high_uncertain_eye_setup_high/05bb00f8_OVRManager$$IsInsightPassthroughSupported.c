/*
FUNCTION_NAME: OVRManager$$IsInsightPassthroughSupported
ENTRY_POINT: 05bb00f8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
OVRManager__IsInsightPassthroughSupported(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  undefined4 uVar6;
  
  if ((DAT_0754e9f6 & 1) == 0) {
                    /* try { // try from 05bb010c to 05cb010f has its CatchHandler @ 05bb01e0 */
                    /* try { // try from 05bb0110 to 05cb01af has its CatchHandler @ 05baff1c */
    FUN_03188a78(PTR_DAT_07112498);
    DAT_0754e9f6 = 1;
  }
  plVar5 = *(long **)(param_3 + 0x28);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 05bb00b4 with catch @ 05bb01d8
                       try { // try from 05bb01d8 to 05cb022f has its CatchHandler @ 05baff1c */
    FUN_03188cd8();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_07112498) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_05bb017c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_031c0d08(plVar5,*(long *)PTR_DAT_07112498,0);
LAB_05bb017c:
  uVar6 = (*(code *)*puVar1)(plVar5,puVar1[1]);
  if (*(long *)(param_3 + 0x40) != 0) {
    uVar6 = FUN_0698550c(uVar6,*(long *)(param_3 + 0x40),0);
  }
  if (*(long *)(param_3 + 0x38) != 0) {
    FUN_0698550c(param_2,*(long *)(param_3 + 0x38),0);
  }
  return uVar6;
}


