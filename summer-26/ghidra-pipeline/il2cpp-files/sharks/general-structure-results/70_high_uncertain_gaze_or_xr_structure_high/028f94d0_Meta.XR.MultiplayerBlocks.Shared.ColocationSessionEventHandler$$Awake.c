/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler$$Awake
ENTRY_POINT: 028f94d0
PROGRAM: sharks-libil2cpp.so
SCORE: 83
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler__Awake(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if ((param_1 & 1) == 0) {
    FUN_017fc350(PTR_DAT_037fb6b0);
    *(undefined1 *)(unaff_x23 + 0x67c) = 1;
  }
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
    lVar1 = *unaff_x22;
  }
  in_stack_00000030 = unaff_x21[2];
  in_stack_00000028 = unaff_x21[1];
  in_stack_00000020 = *unaff_x21;
  lVar1 = **(long **)(lVar1 + 0xb8);
  uVar2 = thunk_FUN_018617ec(**(undefined8 **)(*(long *)(unaff_x19 + 0x20) + 0xc0),&stack0x00000020)
  ;
                    /* try { // try from 028f9544 to 029f958b has its CatchHandler @ 028f9544
                       catch() { ... } // from try @ 028f9544 with catch @ 028f9544
                       catch() { ... } // from try @ 028f95f0 with catch @ 028f9544
                       catch() { ... } // from try @ 028f9620 with catch @ 028f9544
                       catch() { ... } // from try @ 028f969c with catch @ 028f9544 */
  uVar3 = thunk_FUN_018617ec(**(undefined8 **)(*(long *)(unaff_x19 + 0x20) + 0xc0));
  if (lVar1 != 0) {
    FUN_02b9f22c(lVar1,uVar2,uVar3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


