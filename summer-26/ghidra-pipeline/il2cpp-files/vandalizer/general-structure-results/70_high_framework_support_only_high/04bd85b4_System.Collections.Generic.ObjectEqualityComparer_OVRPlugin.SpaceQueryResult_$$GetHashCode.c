/*
FUNCTION_NAME: System.Collections.Generic.ObjectEqualityComparer<OVRPlugin.SpaceQueryResult>$$GetHashCode
ENTRY_POINT: 04bd85b4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 78
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Collections_Generic_ObjectEqualityComparer<OVRPlugin_SpaceQueryResult>__GetHashCode
               (long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0322bef4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0322bef4();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x20);
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x19 + 0x20);
    uVar4 = *unaff_x20;
    uVar5 = unaff_x20[1];
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0322bef4();
    }
    uVar3 = FUN_056d34dc(lVar1,uVar4,uVar5,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x2a8));
    if ((uVar3 & 1) == 0) {
      return;
    }
    thunk_FUN_03257e30(PTR_DAT_075a41b8);
    uVar4 = thunk_FUN_0322ed78();
    uVar5 = thunk_FUN_03257e30(PTR_DAT_075d96f0);
    uVar4 = FUN_05c7ecc4(uVar5,uVar4,0);
    thunk_FUN_03257e30(PTR_DAT_0759bb58);
    uVar5 = thunk_FUN_0322f148();
    FUN_05e01578(uVar5,uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_031f225c(uVar5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


