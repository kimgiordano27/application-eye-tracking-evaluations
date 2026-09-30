/*
FUNCTION_NAME: Game.Views.Network.SessionInfoExtensions$$UpdateSessionCloseState
ENTRY_POINT: 033f1998
PROGRAM: beastcraft-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;data_collection;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void Game_Views_Network_SessionInfoExtensions__UpdateSessionCloseState(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x22;
  long *unaff_x24;
  undefined8 *unaff_x27;
  
  uVar1 = FUN_039cf0a0();
  uVar2 = FUN_054114e0();
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02e9a04c(*unaff_x22);
  }
  FUN_05c23ca0(&stack0x00000008,uVar1,uVar2,0);
  uVar1 = thunk_FUN_02e78ab8(*unaff_x27);
  FUN_0621dec8();
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  FUN_0621c2e4(uVar1,0);
  return;
}


