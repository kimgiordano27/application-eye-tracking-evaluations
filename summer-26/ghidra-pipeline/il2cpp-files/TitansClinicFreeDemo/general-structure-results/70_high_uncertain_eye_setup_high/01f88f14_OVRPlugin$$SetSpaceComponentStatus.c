/*
FUNCTION_NAME: OVRPlugin$$SetSpaceComponentStatus
ENTRY_POINT: 01f88f14
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


void OVRPlugin__SetSpaceComponentStatus(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  
  thunk_FUN_01279b34();
  thunk_FUN_01279b34(PTR_DAT_027b21f8);
  thunk_FUN_01279b34(PTR_DAT_027b3710);
  *(undefined1 *)(unaff_x20 + 0xeba) = 1;
  puVar1 = PTR_DAT_027b3710;
  lVar3 = *(long *)(unaff_x19 + 0x90);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)PTR_DAT_027c17c8;
    if (*(long *)(unaff_x19 + 0xa0) == 0) {
      uVar2 = *(undefined8 *)PTR_DAT_027b21f8;
    }
    else {
      if (DAT_0293ddb9 == '\0') {
        thunk_FUN_01279b34(PTR_DAT_027b3620);
        DAT_0293ddb9 = '\x01';
      }
      uVar2 = FUN_01e5d260(**(undefined8 **)(*(long *)PTR_DAT_027b3620 + 0xb8),
                           *(undefined8 *)PTR_DAT_027b3b68,0);
      lVar3 = *(long *)(unaff_x19 + 0x90);
    }
    uVar2 = FUN_01e68c74(uVar2,lVar3,*(undefined8 *)puVar1,*(undefined8 *)(unaff_x19 + 0x98),0);
    FUN_01e59d2c(uVar4,uVar2,0);
    return;
  }
  FUN_01f88ff8();
  return;
}


