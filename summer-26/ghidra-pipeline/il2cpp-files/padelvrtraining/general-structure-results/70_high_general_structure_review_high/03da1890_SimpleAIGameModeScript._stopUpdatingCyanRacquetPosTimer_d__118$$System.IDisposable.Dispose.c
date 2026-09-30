/*
FUNCTION_NAME: SimpleAIGameModeScript.<stopUpdatingCyanRacquetPosTimer>d__118$$System.IDisposable.Dispose
ENTRY_POINT: 03da1890
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


long SimpleAIGameModeScript_<stopUpdatingCyanRacquetPosTimer>d__118__System_IDisposable_Dispose
               (void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x25;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  
  FUN_03db119c(unaff_x20 + 0x10);
  FUN_03db119c(unaff_x20 + 0x28,in_stack_00000008);
  if (in_stack_00000010 != 0) {
    FUN_03d1bc58();
    uVar1 = FUN_03db7ea4();
    FUN_03db119c(unaff_x20 + 0x18,uVar1);
    FUN_03db119c(unaff_x20 + 0x20,in_stack_00000010);
  }
  lVar2 = thunk_FUN_03d2ef40(*(undefined8 *)(unaff_x25 + 0xb8));
  FUN_03db119c(lVar2 + 0x20);
  FUN_03db119c(lVar2 + 0x30);
  uVar1 = FUN_03db119c(lVar2 + 0x10,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_03da12a8(uVar1,lVar2);
  return lVar2;
}


