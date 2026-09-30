/*
FUNCTION_NAME: OVRPlugin$$IsInsightPassthroughInitialized
ENTRY_POINT: 0321e940
PROGRAM: vrfs-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__IsInsightPassthroughInitialized(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  
  thunk_FUN_0159f088();
  thunk_FUN_0159f088(PTR_DAT_06e57ad0);
  thunk_FUN_0159f088(PTR_DAT_06e1ff48);
  thunk_FUN_0159f088(PTR_DAT_06e21b78);
  *(undefined1 *)(unaff_x19 + 0xe5e) = 1;
  puVar2 = PTR_DAT_06e57ad0;
  puVar1 = PTR_DAT_06e0b310;
  lVar5 = *(long *)(unaff_x20 + 0x90);
  if (lVar5 != 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x98);
    uVar7 = *(undefined8 *)PTR_DAT_06e21b78;
    uVar6 = *(undefined8 *)PTR_DAT_06e1ff48;
    if (*(long *)(unaff_x20 + 0xa0) == 0) {
      uVar3 = **(undefined8 **)(*(long *)PTR_DAT_06e0b310 + 0xb8);
    }
    else {
      if (DAT_07237bcb == '\0') {
        thunk_FUN_0159f088(PTR_DAT_06e0b310);
        DAT_07237bcb = '\x01';
      }
      uVar3 = FUN_02519a6c(*(undefined8 *)puVar2,**(undefined8 **)(*(long *)puVar1 + 0xb8),0);
    }
    uVar4 = FUN_02526f2c(lVar5,uVar7,uVar4,uVar3,0);
    FUN_02d8df60(uVar6,uVar4,0);
    return;
  }
  FUN_031dcb40();
  return;
}


