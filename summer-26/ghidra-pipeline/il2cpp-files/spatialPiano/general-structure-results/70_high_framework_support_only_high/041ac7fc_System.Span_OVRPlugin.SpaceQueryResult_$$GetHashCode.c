/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceQueryResult>$$GetHashCode
ENTRY_POINT: 041ac7fc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long System_Span<OVRPlugin_SpaceQueryResult>__GetHashCode(ushort *param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *unaff_x19;
  undefined8 uVar4;
  int unaff_w21;
  
  if (unaff_w21 == 0) {
    if ((*param_1 & 1) == 0) {
      param_2 = FUN_02f41e9c();
    }
    lVar3 = *(long *)(*(long *)(param_2 + 0xc0) + 0x80);
    lVar2 = *(long *)(lVar3 + 0x38);
    if (lVar2 == 0) {
      FUN_02f41ef8(lVar3);
      lVar2 = *(long *)(lVar3 + 0x38);
    }
    lVar2 = *(long *)(lVar2 + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar2 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c();
    }
    lVar2 = **(long **)(lVar2 + 0xb8);
  }
  else {
    if ((*param_1 & 1) == 0) {
      param_2 = FUN_02f41e9c();
    }
    lVar2 = *(long *)(*(long *)(param_2 + 0xc0) + 0x88);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02f41e9c();
    }
    lVar2 = FUN_02f0880c(lVar2,unaff_w21);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar3 = *(long *)(param_3 + 0x20);
    uVar4 = *unaff_x19;
    iVar1 = *(int *)(unaff_x19 + 1);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02f41e9c();
    }
    FUN_03348270(lVar2 + 0x20,uVar4,(long)iVar1,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x68));
  }
  return lVar2;
}


