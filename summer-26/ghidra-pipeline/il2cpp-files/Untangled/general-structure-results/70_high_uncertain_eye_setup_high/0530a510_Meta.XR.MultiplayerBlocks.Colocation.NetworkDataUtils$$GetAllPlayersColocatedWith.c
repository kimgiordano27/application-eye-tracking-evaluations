/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.NetworkDataUtils$$GetAllPlayersColocatedWith
ENTRY_POINT: 0530a510
PROGRAM: Untangled-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Meta_XR_MultiplayerBlocks_Colocation_NetworkDataUtils__GetAllPlayersColocatedWith
               (code *param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long in_x9;
  long unaff_x19;
  int *unaff_x20;
  
  (*param_1)(param_2,*(undefined8 *)(in_x9 + 0x2b0));
  if (*(int *)(unaff_x19 + 0x38) != *(int *)(unaff_x19 + 0x30)) {
    iVar1 = *(int *)(unaff_x19 + 0x3c) + *(int *)(unaff_x19 + 0x38);
    *(int *)(unaff_x19 + 0x38) = iVar1;
    if (iVar1 == *(int *)(unaff_x19 + 0x30)) {
      plVar2 = *(long **)(unaff_x19 + 0x58);
      if (plVar2 == (long *)0x0) goto LAB_0530a6fc;
      (**(code **)(*plVar2 + 0x558))
                (plVar2,*(undefined8 *)PTR_DAT_06d3e7e8,*(undefined8 *)(*plVar2 + 0x560));
      lVar4 = *(long *)(unaff_x19 + 0x28);
      if (((lVar4 == 0) || (*(long *)(unaff_x19 + 0x40) == 0)) ||
         (plVar2 = *(long **)(*(long *)(unaff_x19 + 0x40) + 0x50), plVar2 == (long *)0x0))
      goto LAB_0530a6fc;
      (**(code **)(*plVar2 + 0x2a8))
                (*(undefined4 *)(lVar4 + 0x58),*(undefined4 *)(lVar4 + 0x5c),
                 *(undefined4 *)(lVar4 + 0x60),*(undefined4 *)(lVar4 + 100),plVar2,
                 *(undefined8 *)(*plVar2 + 0x2b0));
    }
    else {
      uVar3 = FUN_055ff450();
      plVar2 = *(long **)(unaff_x19 + 0x58);
      if (plVar2 == (long *)0x0) goto LAB_0530a6fc;
      (**(code **)(*plVar2 + 0x558))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 0x560));
    }
  }
  lVar4 = *(long *)(unaff_x19 + 0x50);
  FUN_066bd9f4(0,_UNK_013f6aa4,0,0);
  if (lVar4 != 0) {
    FUN_066d4bec(lVar4,0);
    if (*(long *)(unaff_x19 + 0x60) != 0) {
      FUN_06686b40(*(long *)(unaff_x19 + 0x60),*(undefined8 *)(unaff_x19 + 0x68),0);
      lVar4 = *(long *)(unaff_x19 + 0x20);
      if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0530a6ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar4 + 0x18))
                  ((float)*unaff_x20,*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
        return;
      }
      return;
    }
  }
LAB_0530a6fc:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


