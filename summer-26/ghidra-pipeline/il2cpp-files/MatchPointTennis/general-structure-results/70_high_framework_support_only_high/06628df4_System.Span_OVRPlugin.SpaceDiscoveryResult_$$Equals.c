/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceDiscoveryResult>$$Equals
ENTRY_POINT: 06628df4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Span<OVRPlugin_SpaceDiscoveryResult>__Equals(long param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  long *plVar6;
  
  plVar6 = *(long **)(unaff_x22 + 0xbc8);
  if (param_1 == 0) {
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04481fb8();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04481fb8();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    param_1 = FUN_06628ae4();
  }
  bVar1 = *(byte *)(*plVar6 + 0x130);
  if ((*(byte *)(*unaff_x20 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) != *plVar6)) {
    if (param_1 == 0) goto LAB_06628f30;
    uVar3 = FUN_07ab4c48();
  }
  else {
    if (param_1 == 0) {
LAB_06628f30:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar3 = FUN_07ab42e8(param_1,unaff_x20[0x12]);
  }
  if ((uVar3 & 1) != 0) {
    return;
  }
  uVar4 = thunk_FUN_044adef4(PTR_DAT_09f298e8);
  uVar4 = FUN_07a80dec(uVar4,0);
  thunk_FUN_044adef4(PTR_DAT_09f20bb0);
  uVar5 = thunk_FUN_0448520c();
  FUN_07a3e070(uVar5,uVar4,0);
                    /* WARNING: Subroutine does not return */
  FUN_04447d10(uVar5);
}


