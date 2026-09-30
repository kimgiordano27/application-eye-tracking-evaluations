/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceDiscoveryResult>$$get_IsEmpty
ENTRY_POINT: 07507974
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint System_Span<OVRPlugin_SpaceDiscoveryResult>__get_IsEmpty
               (long param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long *plVar4;
  long lVar5;
  
  if (param_2 != param_1) {
    if (*(int *)(unaff_x19 + 0x18) != *(int *)(unaff_x20 + 0x18)) {
      uVar1 = 0;
      goto FUN_07507a5c;
    }
    lVar2 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x18);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04980b34();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    lVar2 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x18);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_04980b34();
    }
    if (0 < *(int *)(unaff_x20 + 0x18)) {
      lVar5 = 4;
      plVar4 = (long *)**(undefined8 **)(lVar2 + 0xb8);
      do {
        lVar2 = *(long *)(unaff_x20 + 0x10);
        if (lVar2 == 0) {
LAB_07507a70:
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        if ((ulong)*(uint *)(lVar2 + 0x18) <= lVar5 - 4U) {
LAB_07507a74:
                    /* WARNING: Subroutine does not return */
          FUN_04948194();
        }
        lVar3 = *(long *)(unaff_x19 + 0x10);
        if (lVar3 == 0) goto LAB_07507a70;
        if ((ulong)*(uint *)(lVar3 + 0x18) <= lVar5 - 4U) goto LAB_07507a74;
        if (plVar4 == (long *)0x0) goto LAB_07507a70;
        uVar1 = (**(code **)(*plVar4 + 0x1b8))
                          (plVar4,*(undefined8 *)(lVar2 + lVar5 * 8),
                           *(undefined8 *)(lVar3 + lVar5 * 8),*(undefined8 *)(*plVar4 + 0x1c0));
      } while (((uVar1 & 1) != 0) &&
              (lVar2 = lVar5 + -3, lVar5 = lVar5 + 1, lVar2 < *(int *)(unaff_x20 + 0x18)));
      goto FUN_07507a5c;
    }
  }
  uVar1 = 1;
FUN_07507a5c:
  return uVar1 & 1;
}


