/*
FUNCTION_NAME: OVRPlugin.OVRP_1_98_0$$ovrp_RequestBoundaryVisibility
ENTRY_POINT: 05d520c8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_98_0__ovrp_RequestBoundaryVisibility(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  uint uVar5;
  long unaff_x22;
  undefined8 *puVar6;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  ulong in_stack_00000060;
  
  puVar1 = PTR_DAT_06fb9490;
  puVar6 = *(undefined8 **)(unaff_x22 + 0x480);
  uVar5 = 0;
  while( true ) {
    uVar3 = FUN_055db970(&stack0x00000050,*puVar6);
    uVar2 = in_stack_00000060;
    if ((uVar3 & 1) == 0) {
      FUN_055dba78(&stack0x00000050,*(undefined8 *)PTR_DAT_06fb9478);
      return;
    }
    in_stack_00000028 = *(undefined8 *)puVar1;
    in_stack_00000030 = 0xffffffffffffffff;
    in_stack_00000038 = CONCAT44(in_stack_00000038._4_4_,(int)in_stack_00000060);
    in_stack_00000028 = FUN_05b259a4(&stack0x00000028,0);
    in_stack_00000038 = 0;
    in_stack_00000030 = 0;
    in_stack_00000048 = 0;
    in_stack_00000040 = 0;
    thunk_FUN_03048534(&stack0x00000028);
    in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,1);
    in_stack_00000040 = CONCAT44(in_stack_00000040._4_4_,(uint)((uVar2 & 0xff00000000) != 0));
    in_stack_00000038 = 0;
    thunk_FUN_03048534(&stack0x00000038,0);
    in_stack_00000048 = 0;
    if (unaff_x19 == 0) break;
    if (*(uint *)(unaff_x19 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    lVar4 = unaff_x19 + (long)(int)uVar5 * 0x28;
    *(undefined8 *)(lVar4 + 0x40) = 0;
    *(undefined8 *)(lVar4 + 0x28) = in_stack_00000030;
    *(undefined8 *)(lVar4 + 0x20) = in_stack_00000028;
    *(undefined8 *)(lVar4 + 0x38) = in_stack_00000040;
    *(undefined8 *)(lVar4 + 0x30) = in_stack_00000038;
    thunk_FUN_03048534(lVar4 + 0x20,0);
    uVar5 = uVar5 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


