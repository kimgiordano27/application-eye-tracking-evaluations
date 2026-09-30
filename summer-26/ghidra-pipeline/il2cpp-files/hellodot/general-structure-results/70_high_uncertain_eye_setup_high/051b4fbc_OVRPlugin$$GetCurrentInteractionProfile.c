/*
FUNCTION_NAME: OVRPlugin$$GetCurrentInteractionProfile
ENTRY_POINT: 051b4fbc
PROGRAM: hellodot-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetCurrentInteractionProfile(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  long lVar3;
  undefined8 *unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  
  uVar1 = thunk_FUN_02cea894(*unaff_x24);
  FUN_051b22d8();
  *(undefined8 *)(unaff_x19 + 0x150) = uVar1;
  uVar1 = FUN_02ce7ad4(*unaff_x23,5);
  *(undefined8 *)(unaff_x19 + 0x160) = uVar1;
  uVar1 = thunk_FUN_02cea894(*unaff_x21);
  FUN_051acefc();
  *(undefined8 *)(unaff_x19 + 0x170) = uVar1;
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar2 = *unaff_x22;
  }
  lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar3 == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar2 = *unaff_x22;
    }
    uVar1 = **(undefined8 **)(lVar2 + 0xb8);
    lVar3 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_06608aa8);
    FUN_047b3b70(lVar3,uVar1,*(undefined8 *)PTR_DAT_06608ab8,0);
    lVar2 = *unaff_x22;
    *(long *)(*(long *)(lVar2 + 0xb8) + 8) = lVar3;
  }
  *(long *)(unaff_x19 + 0x178) = lVar3;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar2 = *unaff_x22;
  }
  lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  if (lVar3 == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
      lVar2 = *unaff_x22;
    }
    uVar1 = **(undefined8 **)(lVar2 + 0xb8);
    lVar3 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_06608aa8);
    FUN_047b3b70(lVar3,uVar1,*(undefined8 *)PTR_DAT_06608ac0,0);
    *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10) = lVar3;
  }
  *(long *)(unaff_x19 + 0x180) = lVar3;
  FUN_036c5774();
  return;
}


