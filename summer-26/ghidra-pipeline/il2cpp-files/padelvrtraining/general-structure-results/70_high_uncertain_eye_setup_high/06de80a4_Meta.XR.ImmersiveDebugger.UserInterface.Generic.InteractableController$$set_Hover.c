/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.InteractableController$$set_Hover
ENTRY_POINT: 06de80a4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_InteractableController__set_Hover
               (undefined8 param_1,uint param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_2 < *(uint *)(unaff_x19 + 0x18)) {
    lVar1 = unaff_x19 + (long)(int)param_2 * 0x18;
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    uVar6 = *(undefined8 *)(lVar1 + 0x28);
    uVar4 = *(undefined8 *)(lVar1 + 0x20);
    if (param_3 < *(uint *)(unaff_x19 + 0x18)) {
      puVar3 = (undefined8 *)(unaff_x19 + 0x20 + (long)(int)param_3 * 0x18);
      uVar7 = puVar3[1];
      uVar5 = *puVar3;
      *(undefined8 *)(lVar1 + 0x30) = puVar3[2];
      *(undefined8 *)(lVar1 + 0x28) = uVar7;
      *(undefined8 *)(lVar1 + 0x20) = uVar5;
      thunk_FUN_03d1023c(unaff_x19 + 0x20 + (long)(int)param_2 * 0x18,0);
      if (param_3 < *(uint *)(unaff_x19 + 0x18)) {
        puVar3[2] = uVar2;
        puVar3[1] = uVar6;
        *puVar3 = uVar4;
        thunk_FUN_03d1023c(unaff_x19 + (long)(int)param_3 * 0x18 + 0x20,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


