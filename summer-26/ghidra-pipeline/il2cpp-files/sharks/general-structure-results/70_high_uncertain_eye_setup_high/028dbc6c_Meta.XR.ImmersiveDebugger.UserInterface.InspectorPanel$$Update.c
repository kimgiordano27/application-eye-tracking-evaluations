/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.InspectorPanel$$Update
ENTRY_POINT: 028dbc6c
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_InspectorPanel__Update(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  uVar1 = FUN_02171fa4();
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    lVar2 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
                    /* try { // try from 028dbcdc to 029dbd27 has its CatchHandler @ 028dbcdc
                       catch() { ... } // from try @ 028dbcdc with catch @ 028dbcdc
                       catch() { ... } // from try @ 028dbda8 with catch @ 028dbcdc
                       catch() { ... } // from try @ 028dbdd8 with catch @ 028dbcdc
                       catch() { ... } // from try @ 028dbe58 with catch @ 028dbcdc */
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0185daa4();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
    if (lVar2 != 0) {
      FUN_02170834(lVar2,*unaff_x21,unaff_x21[1]);
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_0185daa4();
      }
      Meta_XR_ImmersiveDebugger_UserInterface_LogEntry__set_Count();
                    /* try { // try from 028dbd28 to 029dbda7 has its CatchHandler @ 028dbda8 */
      return;
    }
  }
  else {
    lVar2 = FUN_02afcf34();
    if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02afcff4(lVar2,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


