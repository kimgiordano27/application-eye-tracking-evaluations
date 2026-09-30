/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelRaycaster$$get_IsValid
ENTRY_POINT: 028ddf30
PROGRAM: sharks-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_gaze_retrieval_or_extraction
*/


void Meta_XR_ImmersiveDebugger_UserInterface_PanelRaycaster__get_IsValid(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long in_x9;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  if (*(long *)(param_1 + 0x40) == in_x9) {
    puVar3 = (undefined8 *)thunk_FUN_01861d10();
    lVar4 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *puVar3;
    uVar2 = puVar3[1];
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0185daa4();
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    FUN_02bca234(*unaff_x19,unaff_x19[1],uVar1,uVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc944();
}


