/*
FUNCTION_NAME: OVRPlugin$$set_HandSkeletonVersion
ENTRY_POINT: 06011efc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__set_HandSkeletonVersion(ulong param_1)

{
  undefined *puVar1;
  char in_NG;
  char in_OV;
  long unaff_x19;
  long unaff_x20;
  ulong uVar2;
  undefined4 *puVar3;
  
  puVar1 = PTR_DAT_075de760;
  if (in_NG == in_OV) {
    uVar2 = 0;
    param_1 = param_1 & 0xffffffff;
    puVar3 = (undefined4 *)(unaff_x20 + 0x28);
    do {
      if (param_1 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2398();
      }
      if (*(long *)(unaff_x19 + 0x80) == 0) goto LAB_06011f88;
      FUN_0487db24(puVar3[-2],puVar3[-1],*puVar3,*(undefined4 *)(unaff_x19 + 0x78),
                   *(long *)(unaff_x19 + 0x80),uVar2 & 0xffffffff,*(undefined8 *)puVar1);
      param_1 = (ulong)*(uint *)(unaff_x20 + 0x18);
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 3;
    } while ((long)uVar2 < (long)(int)*(uint *)(unaff_x20 + 0x18));
  }
  if (*(long *)(unaff_x19 + 0x90) != 0) {
    FUN_05f9b6dc(*(undefined4 *)(unaff_x19 + 0x68),*(undefined4 *)(unaff_x19 + 0x6c),
                 *(undefined4 *)(unaff_x19 + 0x70),*(undefined4 *)(unaff_x19 + 0x74),
                 *(long *)(unaff_x19 + 0x90),*(undefined8 *)(unaff_x19 + 0x80),0);
    if (*(long *)(unaff_x19 + 0x90) != 0) {
      FUN_05f99384(*(long *)(unaff_x19 + 0x90),0);
      return;
    }
  }
LAB_06011f88:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


