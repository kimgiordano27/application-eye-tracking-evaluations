/*
FUNCTION_NAME: MagicaCloth.PhysicsManagerTeamData.PostProcessTeamDataJob$$Execute
ENTRY_POINT: 062718f4
PROGRAM: Waifu-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


void MagicaCloth_PhysicsManagerTeamData_PostProcessTeamDataJob__Execute(void)

{
  ulong uVar1;
  int extraout_w1;
  long unaff_x19;
  long unaff_x20;
  
  uVar1 = FUN_06376438();
  if ((uVar1 & 1) != 0) {
    if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar1 = FUN_07a11b14();
    if ((uVar1 & 1) != 0) {
      if (unaff_x19 != 0) {
        FUN_06372920();
        if (extraout_w1 < 1) {
          return;
        }
        if (*(long *)(unaff_x20 + 0x40) != 0) {
          FUN_063769c0();
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
  }
  return;
}


