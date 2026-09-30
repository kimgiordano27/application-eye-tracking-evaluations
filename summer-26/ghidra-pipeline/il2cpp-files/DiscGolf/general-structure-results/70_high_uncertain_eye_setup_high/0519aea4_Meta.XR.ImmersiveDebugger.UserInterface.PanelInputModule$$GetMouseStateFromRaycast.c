/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelInputModule$$GetMouseStateFromRaycast
ENTRY_POINT: 0519aea4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule__GetMouseStateFromRaycast
          (undefined8 param_1,long param_2)

{
  bool in_CY;
  undefined8 uVar1;
  uint in_w8;
  long in_x9;
  long lVar2;
  long unaff_x19;
  undefined8 uVar3;
  
  if (in_CY) {
    if ((*(ushort *)(*(long *)(param_2 + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18();
    }
    FUN_0519af24();
    uVar1 = 0;
  }
  else {
    lVar2 = *(long *)(in_x9 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(uint *)(lVar2 + 0x18) <= in_w8) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    lVar2 = lVar2 + (long)(int)in_w8 * 0x18;
    uVar3 = *(undefined8 *)(lVar2 + 0x28);
    uVar1 = *(undefined8 *)(lVar2 + 0x20);
    *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(lVar2 + 0x30);
    *(undefined8 *)(unaff_x19 + 0x18) = uVar3;
    *(undefined8 *)(unaff_x19 + 0x10) = uVar1;
    LeanTween__value(unaff_x19 + 0x18,0);
    uVar1 = 1;
    *(int *)(unaff_x19 + 8) = *(int *)(unaff_x19 + 8) + 1;
  }
  return uVar1;
}


