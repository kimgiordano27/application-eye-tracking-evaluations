/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking$$HostOrJoinSessionAutomatically
ENTRY_POINT: 028ff950
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


void Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking__HostOrJoinSessionAutomatically(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  
                    /* try { // try from 028ff958 to 029ff95f has its CatchHandler @ 028ffa64 */
  FUN_017fc350(PTR_DAT_037fb6b0);
  *(undefined1 *)(unaff_x23 + 0x6bf) = 1;
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01843fdc();
    lVar1 = *unaff_x22;
  }
  in_stack_00000058 = unaff_x21[3];
  in_stack_00000050 = unaff_x21[2];
  in_stack_00000068 = unaff_x21[5];
  in_stack_00000060 = unaff_x21[4];
  in_stack_00000070 = unaff_x21[6];
  in_stack_00000048 = unaff_x21[1];
  in_stack_00000040 = *unaff_x21;
  lVar1 = **(long **)(lVar1 + 0xb8);
  uVar2 = thunk_FUN_018617ec(**(undefined8 **)(*(long *)(unaff_x19 + 0x20) + 0xc0),&stack0x00000040)
  ;
                    /* try { // try from 028ff9bc to 029ff9c3 has its CatchHandler @ 028ffa6c */
                    /* try { // try from 028ff9c4 to 029ffa43 has its CatchHandler @ 028ff758 */
  uVar3 = thunk_FUN_018617ec(**(undefined8 **)(*(long *)(unaff_x19 + 0x20) + 0xc0));
  if (lVar1 != 0) {
    FUN_02b9f22c(lVar1,uVar2,uVar3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


