/*
FUNCTION_NAME: System.ArraySegment<OVRPlugin.SpaceDiscoveryResult>$$ThrowInvalidOperationIfDefault
ENTRY_POINT: 040f0b4c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


void System_ArraySegment<OVRPlugin_SpaceDiscoveryResult>__ThrowInvalidOperationIfDefault(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = FUN_0367c9fc();
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x28);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0367c9fc();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
    FUN_0367c9fc();
  }
  FUN_040f0a84();
  if (0 < *(int *)(unaff_x21 + 0x18)) {
    uVar2 = 0;
    puVar3 = (undefined8 *)(unaff_x20 + 0x20);
    puVar4 = unaff_x21;
    do {
      lVar1 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0367c9fc();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0367c9fc();
      }
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_0367c9fc();
      }
      if (*(uint *)(unaff_x20 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
      uVar6 = puVar3[1];
      uVar5 = *puVar3;
      uVar2 = uVar2 + 1;
      puVar4[2] = puVar3[2];
      puVar4[1] = uVar6;
      *puVar4 = uVar5;
      puVar3 = puVar3 + 3;
      puVar4 = puVar4 + 3;
    } while ((long)uVar2 < (long)*(int *)(unaff_x21 + 0x18));
  }
  return;
}


