/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationDebuggingOptions$$.ctor
ENTRY_POINT: 0775b654
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationDebuggingOptions___ctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long unaff_x19;
  int iVar5;
  
  puVar2 = PTR_DAT_09f32900;
  puVar1 = PTR_DAT_09f30d78;
  if (param_1 != 0) {
    iVar5 = 0;
    while (iVar5 < *(int *)(param_1 + 0x18)) {
      lVar3 = FUN_05badb74(param_1,iVar5,*(undefined8 *)puVar1);
      if ((lVar3 == 0) || (plVar4 = *(long **)(lVar3 + 0x10), plVar4 == (long *)0x0))
      goto LAB_0775b708;
      (**(code **)(*plVar4 + 0x7c8))(plVar4,*(undefined8 *)(*plVar4 + 2000));
      param_1 = *(long *)(unaff_x19 + 0x98);
      iVar5 = iVar5 + 1;
      if (param_1 == 0) goto LAB_0775b708;
    }
    if (*(long *)(unaff_x19 + 0x90) != 0) {
      FUN_0731b15c(*(long *)(unaff_x19 + 0x90),*(undefined8 *)puVar2);
      lVar3 = *(long *)(unaff_x19 + 0x98);
      if (lVar3 != 0) {
        iVar5 = *(int *)(lVar3 + 0x18);
        *(undefined4 *)(lVar3 + 0x18) = 0;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (iVar5 < 1) {
          return;
        }
        FUN_07a61000(*(undefined8 *)(lVar3 + 0x10),0,iVar5,0);
        return;
      }
    }
  }
LAB_0775b708:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


