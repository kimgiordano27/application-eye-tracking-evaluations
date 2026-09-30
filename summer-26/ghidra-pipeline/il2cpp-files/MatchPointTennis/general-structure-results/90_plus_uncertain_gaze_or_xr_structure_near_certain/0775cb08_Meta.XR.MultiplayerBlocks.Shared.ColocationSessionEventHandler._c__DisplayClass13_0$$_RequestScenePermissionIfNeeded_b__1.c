/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<>c__DisplayClass13_0$$<RequestScenePermissionIfNeeded>b__1
ENTRY_POINT: 0775cb08
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_4;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<>c__DisplayClass13_0__<RequestScenePermissionIfNeeded>b__1
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x24;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000048;
  
  FUN_04447ba8(*(undefined8 *)(param_1 + 0xaa8));
  FUN_04447ba8(PTR_DAT_09f32ab0);
  FUN_04447ba8(PTR_DAT_09f32ab8);
  FUN_04447ba8(PTR_DAT_09f32ac0);
  FUN_04447ba8(PTR_DAT_09f32ac8);
  *(undefined1 *)(unaff_x20 + 0x2a3) = 1;
  puVar5 = PTR_DAT_09f32ac8;
  puVar4 = PTR_DAT_09f32ac0;
  puVar3 = PTR_DAT_09f32ab8;
  puVar2 = PTR_DAT_09f32ab0;
  puVar1 = PTR_DAT_09f32aa8;
  auVar7 = NEON_fmov(0xbfd0000000000000,8);
  auVar8 = NEON_fmov(0x3fe0000000000000,8);
  in_stack_00000048 = 0;
  in_stack_00000028 = auVar7._8_8_;
  in_stack_00000020 = auVar7._0_8_;
  in_stack_00000038 = auVar8._8_8_;
  in_stack_00000030 = auVar8._0_8_;
  uVar6 = thunk_FUN_04484e3c(*unaff_x24,&stack0x00000020);
  if (*(int *)(*unaff_x19 + 0xe4) == 0) {
    thunk_FUN_044a54b4(*unaff_x19);
  }
  FUN_094c652c(uVar6,0);
  uVar6 = thunk_FUN_04484e3c(*unaff_x24);
  FUN_094c652c(uVar6,0);
  in_stack_00000048 = NEON_fmov(0x40200000,4);
  uVar6 = FUN_0614c070(&stack0x00000048,0,0,0);
  uVar6 = FUN_078a7764(*(undefined8 *)puVar5,uVar6,0);
  FUN_094c652c(uVar6,0);
  in_stack_00000048 = NEON_fmov(0x3e800000,4);
  uVar6 = FUN_0614c070(&stack0x00000048,*(undefined8 *)puVar4,0,0);
  uVar6 = FUN_078a7764(*(undefined8 *)puVar1,uVar6,0);
  FUN_094c652c(uVar6,0);
  in_stack_00000048 = 0x3daaaaab3daaaaab;
  uVar6 = FUN_0614c070(&stack0x00000048,*(undefined8 *)puVar4,0,0);
  uVar6 = FUN_078a7764(*(undefined8 *)puVar3,uVar6,0);
  FUN_094c652c(uVar6,0);
  in_stack_00000048 = NEON_fmov(0x3f400000,4);
  uVar6 = FUN_0614c070(&stack0x00000048,*(undefined8 *)puVar4,0,0);
  uVar6 = FUN_078a7764(*(undefined8 *)puVar2,uVar6,0);
  FUN_094c652c(uVar6,0);
  return;
}


