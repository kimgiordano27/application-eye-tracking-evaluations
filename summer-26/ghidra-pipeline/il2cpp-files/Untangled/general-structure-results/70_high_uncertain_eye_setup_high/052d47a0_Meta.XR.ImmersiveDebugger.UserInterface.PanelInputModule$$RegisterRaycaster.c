/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelInputModule$$RegisterRaycaster
ENTRY_POINT: 052d47a0
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule__RegisterRaycaster(void)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *unaff_x19;
  long lVar4;
  long *unaff_x22;
  
  uVar2 = FUN_066cd30c();
  if ((uVar2 & 1) == 0) {
    return;
  }
  plVar1 = unaff_x19 + 0x3f;
  uVar3 = (**(code **)(*unaff_x19 + 0x5c8))();
  if (((*(char *)((long)unaff_x19 + 0x72) == '\0') && (uVar2 = FUN_052d489c(), (uVar2 & 1) == 0)) &&
     (uVar2 = (**(code **)(*unaff_x19 + 0x5a8))(), (uVar2 & 1) != 0)) {
    lVar4 = *plVar1;
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar2 = FUN_066c971c(uVar3,lVar4,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
  }
  if (*plVar1 != 0) {
    FUN_052df584(*plVar1,0);
    *plVar1 = 0;
    thunk_FUN_02f411dc(plVar1,0);
    lVar4 = FUN_0528cb7c(0);
    if (lVar4 != 0) {
      if (*(char *)(lVar4 + 0xc9) == '\0') {
        return;
      }
      if (*(int *)(*(long *)PTR_DAT_06d02708 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
      }
      FUN_06693690(*(undefined8 *)PTR_DAT_06d3d718,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


