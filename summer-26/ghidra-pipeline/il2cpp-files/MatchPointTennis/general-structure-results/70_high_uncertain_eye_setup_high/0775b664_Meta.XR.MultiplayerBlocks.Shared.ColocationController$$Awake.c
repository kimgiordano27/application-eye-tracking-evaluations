/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationController$$Awake
ENTRY_POINT: 0775b664
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationController__Awake(long param_1)

{
  long lVar1;
  long *plVar2;
  long unaff_x19;
  int iVar3;
  long unaff_x21;
  undefined8 *puVar4;
  undefined8 *unaff_x22;
  
  puVar4 = *(undefined8 **)(unaff_x21 + 0x900);
  iVar3 = 0;
  while (iVar3 < *(int *)(param_1 + 0x18)) {
    lVar1 = FUN_05badb74(param_1,iVar3,*unaff_x22);
    if ((lVar1 == 0) || (plVar2 = *(long **)(lVar1 + 0x10), plVar2 == (long *)0x0))
    goto LAB_0775b708;
    (**(code **)(*plVar2 + 0x7c8))(plVar2,*(undefined8 *)(*plVar2 + 2000));
    param_1 = *(long *)(unaff_x19 + 0x98);
    iVar3 = iVar3 + 1;
    if (param_1 == 0) goto LAB_0775b708;
  }
  if (*(long *)(unaff_x19 + 0x90) != 0) {
    FUN_0731b15c(*(long *)(unaff_x19 + 0x90),*puVar4);
    lVar1 = *(long *)(unaff_x19 + 0x98);
    if (lVar1 != 0) {
      iVar3 = *(int *)(lVar1 + 0x18);
      *(undefined4 *)(lVar1 + 0x18) = 0;
      *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
      if (iVar3 < 1) {
        return;
      }
      FUN_07a61000(*(undefined8 *)(lVar1 + 0x10),0,iVar3,0);
      return;
    }
  }
LAB_0775b708:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


