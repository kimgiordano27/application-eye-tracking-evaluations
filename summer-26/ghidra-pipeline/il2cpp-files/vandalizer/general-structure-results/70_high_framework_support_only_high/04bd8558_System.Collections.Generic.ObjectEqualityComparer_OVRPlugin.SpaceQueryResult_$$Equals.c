/*
FUNCTION_NAME: System.Collections.Generic.ObjectEqualityComparer<OVRPlugin.SpaceQueryResult>$$Equals
ENTRY_POINT: 04bd8558
PROGRAM: vandalizer-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Collections_Generic_ObjectEqualityComparer<OVRPlugin_SpaceQueryResult>__Equals
               (long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar6;
  undefined *puVar5;
  
  lVar6 = *(long *)(param_1 + 0x18);
  if (lVar6 != 0) {
    lVar1 = *(long *)(unaff_x19 + 0x20);
    uVar3 = *unaff_x20;
    uVar4 = unaff_x20[1];
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_0322bef4();
    }
    uVar2 = FUN_056d34dc(lVar6,uVar3,uVar4,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x2a0));
    if ((uVar2 & 1) == 0) {
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0322bef4();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0322bef4();
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      }
      lVar6 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0322bef4();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 8);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_0322bef4();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x20);
      if (lVar6 == 0) goto LAB_04bd8634;
      lVar1 = *(long *)(unaff_x19 + 0x20);
      uVar3 = *unaff_x20;
      uVar4 = unaff_x20[1];
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_0322bef4();
      }
      uVar2 = FUN_056d34dc(lVar6,uVar3,uVar4,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x2a8));
      if ((uVar2 & 1) == 0) {
        return;
      }
      thunk_FUN_03257e30(PTR_DAT_075a41b8);
      uVar3 = thunk_FUN_0322ed78();
      puVar5 = PTR_DAT_075d96f0;
    }
    else {
      thunk_FUN_03257e30(PTR_DAT_075a41b8);
      uVar3 = thunk_FUN_0322ed78();
      puVar5 = PTR_DAT_075d96e8;
    }
    uVar4 = thunk_FUN_03257e30(puVar5);
    uVar3 = FUN_05c7ecc4(uVar4,uVar3,0);
    thunk_FUN_03257e30(PTR_DAT_0759bb58);
    uVar4 = thunk_FUN_0322f148();
    FUN_05e01578(uVar4,uVar3,0);
                    /* WARNING: Subroutine does not return */
    FUN_031f225c(uVar4);
  }
LAB_04bd8634:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


