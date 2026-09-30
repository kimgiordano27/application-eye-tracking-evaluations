/*
FUNCTION_NAME: OVRPlugin$$GetSpaceContainer
ENTRY_POINT: 0322e5a0
PROGRAM: vrfs-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceContainer(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  long *unaff_x20;
  
  FUN_0322e4c0();
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar1 = FUN_0322dd70();
  if (((uVar1 & 1) == 0) || (*(char *)(unaff_x19 + 0x28) == '\0')) {
    return;
  }
  lVar2 = *unaff_x20;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_016466fc();
    lVar2 = *unaff_x20;
  }
  plVar5 = *(long **)(*(long *)(lVar2 + 0xb8) + 0x10);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  lVar2 = *plVar5;
  uVar1 = (ulong)*(ushort *)(lVar2 + 0x12a);
  if (uVar1 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_06e44fc8) {
        puVar3 = (undefined8 *)(lVar2 + (long)(*piVar4 + 2) * 0x10 + 0x138);
        goto LAB_0322e648;
      }
      uVar1 = uVar1 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar1 != 0);
  }
  puVar3 = (undefined8 *)FUN_015c2a80(plVar5,*(long *)PTR_DAT_06e44fc8,2);
LAB_0322e648:
                    /* WARNING: Could not recover jumptable at 0x0322e660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(plVar5,0,0,puVar3[1]);
  return;
}


