/*
FUNCTION_NAME: FUN_05d00508
ENTRY_POINT: 05d00508
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] FUN_05d00508(undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  
  if ((DAT_0739878c & 1) == 0) {
                    /* try { // try from 05d00528 to 05e0052f has its CatchHandler @ 05d0072c */
    FUN_02fe925c(PTR_DAT_06fb4d50);
    DAT_0739878c = 1;
  }
  plVar5 = *(long **)(param_3 + 0x28);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_06fb4d50) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto OVRManager__Initialize;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
                    /* try { // try from 05d0057c to 05e005a3 has its CatchHandler @ 05d00714 */
  puVar1 = (undefined8 *)FUN_02feb5b8(plVar5,*(long *)PTR_DAT_06fb4d50,0);
OVRManager__Initialize:
  auVar6 = (*(code *)*puVar1)(plVar5,puVar1[1]);
  if (*(long *)(param_3 + 0x40) != 0) {
    auVar6 = FUN_068b63c8(auVar6._0_8_,*(long *)(param_3 + 0x40),0);
  }
  uVar8 = auVar6._8_8_;
  if (*(long *)(param_3 + 0x38) != 0) {
    FUN_068b63c8(param_2,*(long *)(param_3 + 0x38),0);
  }
  auVar7._8_8_ = uVar8;
  auVar7._0_8_ = auVar6._0_8_;
  return auVar7;
}


