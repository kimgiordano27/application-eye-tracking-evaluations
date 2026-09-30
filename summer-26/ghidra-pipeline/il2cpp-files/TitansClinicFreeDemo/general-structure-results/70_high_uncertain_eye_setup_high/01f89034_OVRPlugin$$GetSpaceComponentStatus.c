/*
FUNCTION_NAME: OVRPlugin$$GetSpaceComponentStatus
ENTRY_POINT: 01f89034
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetSpaceComponentStatus(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  
  thunk_FUN_01279b34();
  thunk_FUN_01279b34(PTR_DAT_027b3710);
  *(undefined1 *)(unaff_x19 + 0xebe) = 1;
  lVar3 = *(long *)(unaff_x20 + 0x90);
  if (lVar3 != 0) {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x98);
    uVar5 = *(undefined8 *)PTR_DAT_027b3710;
    uVar4 = *(undefined8 *)PTR_DAT_027c17d0;
    if (*(long *)(unaff_x20 + 0xa0) == 0) {
      uVar1 = **(undefined8 **)(*(long *)PTR_DAT_027b3620 + 0xb8);
    }
    else {
      if (DAT_0293ddb9 == '\0') {
        thunk_FUN_01279b34(PTR_DAT_027b3620);
        DAT_0293ddb9 = '\x01';
      }
      uVar1 = FUN_01e5d260(*(undefined8 *)PTR_DAT_027b3b68,
                           **(undefined8 **)(*(long *)PTR_DAT_027b3620 + 0xb8),0);
    }
    uVar2 = FUN_01e68c74(lVar3,uVar5,uVar2,uVar1,0);
    FUN_01e59d2c(uVar4,uVar2,0);
    return;
  }
  FUN_01f9ca84();
  return;
}


