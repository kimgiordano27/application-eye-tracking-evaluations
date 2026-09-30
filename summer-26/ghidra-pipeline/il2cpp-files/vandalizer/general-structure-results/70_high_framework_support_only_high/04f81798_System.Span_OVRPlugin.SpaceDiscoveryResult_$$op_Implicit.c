/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceDiscoveryResult>$$op_Implicit
ENTRY_POINT: 04f81798
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long System_Span<OVRPlugin_SpaceDiscoveryResult>__op_Implicit(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *unaff_x19;
  undefined8 uVar4;
  
  lVar2 = *(long *)(param_2 + 0x20);
  iVar1 = *(int *)(unaff_x19 + 1);
  if (iVar1 == 0) {
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0322bef4();
    }
    lVar3 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x80);
    lVar2 = *(long *)(lVar3 + 0x38);
    if (lVar2 == 0) {
      FUN_0322bf50(lVar3);
      lVar2 = *(long *)(lVar3 + 0x38);
    }
    lVar2 = *(long *)(lVar2 + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0322bef4();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    }
    lVar2 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0322bef4();
    }
    lVar2 = **(long **)(lVar2 + 0xb8);
  }
  else {
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0322bef4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x88);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0322bef4();
    }
    lVar2 = FUN_031f21dc(lVar2,iVar1);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    lVar3 = *(long *)(param_2 + 0x20);
    uVar4 = *unaff_x19;
    iVar1 = *(int *)(unaff_x19 + 1);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0322bef4();
    }
    FUN_03d6acbc(lVar2 + 0x20,uVar4,(long)iVar1,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x68));
  }
  return lVar2;
}


