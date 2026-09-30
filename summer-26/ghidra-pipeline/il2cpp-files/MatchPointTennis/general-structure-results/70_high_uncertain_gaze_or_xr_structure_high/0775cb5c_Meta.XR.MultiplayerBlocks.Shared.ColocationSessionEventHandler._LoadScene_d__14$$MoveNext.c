/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<LoadScene>d__14$$MoveNext
ENTRY_POINT: 0775cb5c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<LoadScene>d__14__MoveNext(void)

{
  undefined8 uVar1;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *puVar2;
  long unaff_x21;
  undefined8 *puVar3;
  long unaff_x22;
  undefined8 *puVar4;
  long unaff_x23;
  undefined8 *puVar5;
  undefined8 *unaff_x24;
  long unaff_x25;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000048;
  
  puVar6 = *(undefined8 **)(unaff_x25 + 0xac8);
  puVar3 = *(undefined8 **)(unaff_x21 + 0xac0);
  puVar5 = *(undefined8 **)(unaff_x23 + 0xaa8);
  puVar4 = *(undefined8 **)(unaff_x22 + 0xab8);
  puVar2 = *(undefined8 **)(unaff_x20 + 0xab0);
  auVar7 = NEON_fmov(0xbfd0000000000000,8);
  auVar8 = NEON_fmov(0x3fe0000000000000,8);
  uStack0000000000000048 = 0;
  uStack0000000000000028 = auVar7._8_8_;
  uStack0000000000000020 = auVar7._0_8_;
  uStack0000000000000038 = auVar8._8_8_;
  uStack0000000000000030 = auVar8._0_8_;
  uVar1 = thunk_FUN_04484e3c(*unaff_x24,&stack0x00000020);
  if (*(int *)(*unaff_x19 + 0xe4) == 0) {
    thunk_FUN_044a54b4(*unaff_x19);
  }
  FUN_094c652c(uVar1,0);
  uVar1 = thunk_FUN_04484e3c(*unaff_x24);
  FUN_094c652c(uVar1,0);
  uStack0000000000000048 = NEON_fmov(0x40200000,4);
  uVar1 = FUN_0614c070(&stack0x00000048,0,0,0);
  uVar1 = FUN_078a7764(*puVar6,uVar1,0);
  FUN_094c652c(uVar1,0);
  uStack0000000000000048 = NEON_fmov(0x3e800000,4);
  uVar1 = FUN_0614c070(&stack0x00000048,*puVar3,0,0);
  uVar1 = FUN_078a7764(*puVar5,uVar1,0);
  FUN_094c652c(uVar1,0);
  uStack0000000000000048 = 0x3daaaaab3daaaaab;
  uVar1 = FUN_0614c070(&stack0x00000048,*puVar3,0,0);
  uVar1 = FUN_078a7764(*puVar4,uVar1,0);
  FUN_094c652c(uVar1,0);
  uStack0000000000000048 = NEON_fmov(0x3f400000,4);
  uVar1 = FUN_0614c070(&stack0x00000048,*puVar3,0,0);
  uVar1 = FUN_078a7764(*puVar2,uVar1,0);
  FUN_094c652c(uVar1,0);
  return;
}


