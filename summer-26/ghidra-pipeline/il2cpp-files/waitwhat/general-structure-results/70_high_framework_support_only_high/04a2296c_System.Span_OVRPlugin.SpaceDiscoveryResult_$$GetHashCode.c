/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceDiscoveryResult>$$GetHashCode
ENTRY_POINT: 04a2296c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long System_Span<OVRPlugin_SpaceDiscoveryResult>__GetHashCode(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
                    /* try { // try from 04a2296c to 04b229fb has its CatchHandler @ 04a22bb4 */
  lVar2 = *(long *)(param_2 + 0x20);
  iVar1 = *(int *)(param_1 + 1);
  if (iVar1 == 0) {
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_031c09d4();
    }
    lVar3 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x80);
    lVar2 = *(long *)(lVar3 + 0x38);
    if (lVar2 == 0) {
      FUN_031c0a30(lVar3);
      lVar2 = *(long *)(lVar3 + 0x38);
    }
    lVar2 = *(long *)(lVar2 + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_031c09d4();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar2 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_031c09d4();
    }
    lVar2 = **(long **)(lVar2 + 0xb8);
  }
  else {
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_031c09d4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x88);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_031c09d4();
    }
    lVar2 = FUN_03188b1c(lVar2,iVar1);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    lVar3 = *(long *)(param_2 + 0x20);
    uVar4 = *param_1;
    iVar1 = *(int *)(param_1 + 1);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_031c09d4();
    }
    FUN_03a1f9f4(lVar2 + 0x20,uVar4,(long)iVar1,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x68));
  }
  return lVar2;
}


