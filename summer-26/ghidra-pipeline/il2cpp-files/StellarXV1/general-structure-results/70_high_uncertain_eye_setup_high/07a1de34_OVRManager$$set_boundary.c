/*
FUNCTION_NAME: OVRManager$$set_boundary
ENTRY_POINT: 07a1de34
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


void OVRManager__set_boundary(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  
  puVar2 = PTR_DAT_092efe18;
  if ((DAT_0989515d & 1) == 0) {
    FUN_04077588(PTR_DAT_09294de0);
    FUN_04077588(PTR_DAT_092efe20);
    FUN_04077588(PTR_DAT_092efe28);
    FUN_04077588(PTR_DAT_092efe18);
    DAT_0989515d = 1;
  }
  lVar3 = *(long *)puVar2;
  iVar1 = *(int *)(lVar3 + 0xe4);
  *(undefined8 *)(param_1 + 0x50) = 0x3e4ccccd3e4ccccd;
  if (iVar1 == 0) {
    thunk_FUN_040d65a8();
    lVar3 = *(long *)puVar2;
  }
  puVar5 = *(undefined8 **)(lVar3 + 0xb8);
  lVar6 = puVar5[1];
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar7 = *puVar5;
    lVar6 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09294de0);
    FUN_056720ac(lVar6,uVar7,*(undefined8 *)PTR_DAT_092efe20,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar4 = lVar6;
    thunk_FUN_040ec700(plVar4,lVar6);
  }
  *(long *)(param_1 + 0x58) = lVar6;
  thunk_FUN_040ec700((long *)(param_1 + 0x58),lVar6);
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar3 = *(long *)puVar2;
  }
  puVar5 = *(undefined8 **)(lVar3 + 0xb8);
  lVar6 = puVar5[2];
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar5 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar7 = *puVar5;
    lVar6 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_09294de0);
    FUN_056720ac(lVar6,uVar7,*(undefined8 *)PTR_DAT_092efe28,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar4 = lVar6;
    thunk_FUN_040ec700(plVar4,lVar6);
  }
  *(long *)(param_1 + 0x60) = lVar6;
  thunk_FUN_040ec700((long *)(param_1 + 0x60),lVar6);
  if (DAT_098854f1 == '\0') {
    FUN_04077588(PTR_DAT_09285d60);
    DAT_098854f1 = '\x01';
  }
  uVar8 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_09285d60 + 0xb8) + 1);
  *(undefined8 *)(param_1 + 0x6c) = **(undefined8 **)(*(long *)PTR_DAT_09285d60 + 0xb8);
  *(undefined4 *)(param_1 + 0x74) = uVar8;
  thunk_FUN_089c6ea4(param_1,0);
  return;
}


