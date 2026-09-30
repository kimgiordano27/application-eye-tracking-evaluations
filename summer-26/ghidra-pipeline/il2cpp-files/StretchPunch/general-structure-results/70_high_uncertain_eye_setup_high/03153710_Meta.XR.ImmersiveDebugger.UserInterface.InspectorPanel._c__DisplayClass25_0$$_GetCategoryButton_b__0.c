/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel.<>c__DisplayClass25_0$$<GetCategoryButton>b__0
ENTRY_POINT: 03153710
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel_<>c__DisplayClass25_0__<GetCategoryButton>b__0
               (void)

{
  int in_w8;
  long lVar1;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  ulong unaff_x23;
  
  while( true ) {
    unaff_x22 = unaff_x22 + 0x10;
    if ((in_x9 <= (long)unaff_x23) || (unaff_w21 != in_w8)) {
      if (unaff_w21 == in_w8) {
        return;
      }
      FUN_033b33b0(0);
      return;
    }
    lVar1 = *(long *)(unaff_x20 + 0x10);
    if (lVar1 == 0) break;
    if (*(uint *)(lVar1 + 0x18) <= unaff_x23) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    if (unaff_x19 == 0) break;
    (**(code **)(unaff_x19 + 0x18))
              (*(undefined8 *)(unaff_x19 + 0x40),*(undefined8 *)(lVar1 + unaff_x22 + 0x20),
               *(undefined8 *)(lVar1 + unaff_x22 + 0x28),*(undefined8 *)(unaff_x19 + 0x28));
    in_w8 = *(int *)(unaff_x20 + 0x1c);
    unaff_x23 = unaff_x23 + 1;
    in_x9 = (long)*(int *)(unaff_x20 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


