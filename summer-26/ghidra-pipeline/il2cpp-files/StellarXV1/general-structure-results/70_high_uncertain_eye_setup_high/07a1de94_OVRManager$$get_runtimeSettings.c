/*
FUNCTION_NAME: OVRManager$$get_runtimeSettings
ENTRY_POINT: 07a1de94
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_runtimeSettings(undefined8 param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long unaff_x19;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x22;
  undefined4 uVar7;
  
  iVar1 = *(int *)(param_2 + 0xe4);
  *(undefined8 *)(unaff_x19 + 0x50) = param_1;
  if (iVar1 == 0) {
    thunk_FUN_040d65a8();
    param_2 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(param_2 + 0xb8);
  lVar4 = puVar3[1];
  if (lVar4 == 0) {
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar6 = *puVar3;
    lVar4 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09294de0);
    FUN_056720ac(lVar4,uVar6,*(undefined8 *)PTR_DAT_092efe20,0);
    plVar2 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *plVar2 = lVar4;
    thunk_FUN_040ec700(plVar2,lVar4);
  }
  *(long *)(unaff_x19 + 0x58) = lVar4;
  thunk_FUN_040ec700((long *)(unaff_x19 + 0x58),lVar4);
  lVar4 = *unaff_x22;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar4 = *unaff_x22;
  }
  puVar3 = *(undefined8 **)(lVar4 + 0xb8);
  lVar5 = puVar3[2];
  if (lVar5 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar3 = *(undefined8 **)(*unaff_x22 + 0xb8);
    }
    uVar6 = *puVar3;
    lVar5 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09294de0);
    FUN_056720ac(lVar5,uVar6,*(undefined8 *)PTR_DAT_092efe28,0);
    plVar2 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
    *plVar2 = lVar5;
    thunk_FUN_040ec700(plVar2,lVar5);
  }
  *(long *)(unaff_x19 + 0x60) = lVar5;
  thunk_FUN_040ec700((long *)(unaff_x19 + 0x60),lVar5);
  if (DAT_098854f1 == '\0') {
    FUN_04077588(PTR_DAT_09285d60);
    DAT_098854f1 = '\x01';
  }
  uVar7 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_09285d60 + 0xb8) + 1);
  *(undefined8 *)(unaff_x19 + 0x6c) = **(undefined8 **)(*(long *)PTR_DAT_09285d60 + 0xb8);
  *(undefined4 *)(unaff_x19 + 0x74) = uVar7;
  thunk_FUN_089c6ea4();
  return;
}


