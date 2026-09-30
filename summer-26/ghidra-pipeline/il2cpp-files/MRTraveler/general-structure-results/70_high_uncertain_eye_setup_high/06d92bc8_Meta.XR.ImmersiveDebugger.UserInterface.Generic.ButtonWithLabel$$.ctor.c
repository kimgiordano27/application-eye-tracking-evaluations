/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithLabel$$.ctor
ENTRY_POINT: 06d92bc8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithLabel___ctor(void)

{
  uint in_w8;
  long unaff_x19;
  long lVar1;
  uint uVar2;
  long unaff_x20;
  uint uVar3;
  
  uVar3 = 0;
  do {
    if (in_w8 <= uVar3) goto LAB_06d92c6c;
    if (*(long *)(unaff_x20 + (long)(int)uVar3 * 8 + 0x20) == 0)
    goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
    FUN_06d92fbc();
    in_w8 = *(uint *)(unaff_x20 + 0x18);
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < (int)in_w8);
  lVar1 = *(long *)(unaff_x19 + 0x50);
  if (lVar1 != 0) {
    uVar3 = *(uint *)(lVar1 + 0x18);
    if (0 < (int)uVar3) {
      uVar2 = 0;
      do {
        if (uVar3 <= uVar2) {
LAB_06d92c6c:
                    /* WARNING: Subroutine does not return */
          FUN_03c8fb38();
        }
        if (*(long *)(lVar1 + (long)(int)uVar2 * 8 + 0x20) == 0)
        goto Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value;
        FUN_06d93100();
        uVar3 = *(uint *)(lVar1 + 0x18);
        uVar2 = uVar2 + 1;
      } while ((int)uVar2 < (int)uVar3);
    }
    return;
  }
Meta_XR_ImmersiveDebugger_Manager_TweakEnum__set_Value:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


