/*
FUNCTION_NAME: MagicaCloth.PhysicsManagerTeamData$$PostUpdateTeamData
ENTRY_POINT: 06270894
PROGRAM: Waifu-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void MagicaCloth_PhysicsManagerTeamData__PostUpdateTeamData(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar1 = *(undefined4 *)(unaff_x19 + 0x2c);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x24);
  iVar2 = FUN_05e85c90(param_2,uVar4,uVar1,
                       *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 0xc0) + 0x108));
  if (iVar2 < 0) {
    if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
      FUN_033b9870();
    }
    FUN_079ca0b0(DAT_08457690,0);
  }
  else {
    if ((*(long *)(unaff_x20 + 0x20) == 0) ||
       (lVar3 = FUN_05e854ac(*(long *)(unaff_x20 + 0x20),uVar4,uVar1,DAT_083e4d58), lVar3 == 0)) {
LAB_0627098c:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    FUN_04ab22a0();
    if (*(int *)(lVar3 + 0x18) == 0) {
      if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_0627098c;
      FUN_05e86c54(*(long *)(unaff_x20 + 0x20),uVar4,uVar1,DAT_083e4d50);
    }
  }
  if (DAT_086de462 == '\0') {
    FUN_0335b6c8(&DAT_083d2ca8,1);
    DataMemoryBarrier(2,3);
    DAT_086de462 = '\x01';
  }
  uVar1 = *(undefined4 *)(*(undefined8 **)(DAT_083d2ca8 + 0xb8) + 1);
  *(undefined8 *)(unaff_x19 + 0x24) = **(undefined8 **)(DAT_083d2ca8 + 0xb8);
  *(undefined4 *)(unaff_x19 + 0x2c) = uVar1;
  return;
}


