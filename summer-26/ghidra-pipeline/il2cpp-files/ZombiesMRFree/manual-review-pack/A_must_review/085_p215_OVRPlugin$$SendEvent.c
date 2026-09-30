/*
FUNCTION_NAME: OVRPlugin$$SendEvent
ENTRY_POINT: 05d1c594
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 115
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined4 OVRPlugin__SendEvent(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *unaff_x19;
  float *unaff_x22;
  long unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  float fVar3;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 uStack0000000000000040;
  undefined4 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined4 uStack0000000000000058;
  undefined4 uStack000000000000005c;
  undefined4 uStack0000000000000060;
  undefined4 uStack0000000000000064;
  undefined4 uStack0000000000000068;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 uStack0000000000000088;
  undefined4 uStack0000000000000090;
  undefined4 in_stack_00000098;
  
  uStack0000000000000088 = 0;
  uStack0000000000000080 = 0;
  uStack0000000000000084 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  uStack000000000000005c = 0;
  uStack0000000000000068 = 0;
  uStack0000000000000060 = 0;
  uStack0000000000000064 = 0;
  uStack0000000000000048 = 0;
  uStack0000000000000040 = 0;
  fVar3 = *unaff_x22;
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  if (fVar3 == 1.0) {
    if (unaff_x24 == 0) {
LAB_05d1c724:
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    pcVar2 = *(code **)(unaff_x24 + 0x18);
    uVar1 = *(undefined8 *)(unaff_x24 + 0x40);
  }
  else {
    fVar3 = *unaff_x22;
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    if (unaff_x25 == 0) goto LAB_05d1c724;
    if (fVar3 != 0.0) {
      (**(code **)(unaff_x25 + 0x18))(&stack0x00000020,*(undefined8 *)(unaff_x25 + 0x40));
      in_stack_00000078 = uStack0000000000000028;
      in_stack_00000070 = in_stack_00000020;
      uStack0000000000000084 = (undefined4)uStack0000000000000034;
      uStack0000000000000088 = SUB84(uStack0000000000000034,4);
      uStack0000000000000080 = uStack0000000000000030;
      if (unaff_x24 == 0) goto LAB_05d1c724;
      (**(code **)(unaff_x24 + 0x18))(&stack0x00000020,*(undefined8 *)(unaff_x24 + 0x40));
      uStack0000000000000058 = uStack0000000000000028;
      uStack0000000000000050 = in_stack_00000020;
      uStack0000000000000064 = (undefined4)uStack0000000000000034;
      uStack0000000000000068 = SUB84(uStack0000000000000034,4);
      uStack0000000000000060 = uStack0000000000000030;
      OVRPlugin__SendUnifiedEvent(&stack0x00000020,*unaff_x22,&stack0x00000050,&stack0x00000070);
      *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000034;
      *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      unaff_x19[1] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      *unaff_x19 = in_stack_00000020;
      _uStack0000000000000090 = uStack0000000000000040;
      goto LAB_05d1c65c;
    }
    pcVar2 = *(code **)(unaff_x25 + 0x18);
    uVar1 = *(undefined8 *)(unaff_x25 + 0x40);
  }
  (*pcVar2)(uVar1);
  uStack0000000000000030 = uStack0000000000000010;
  uStack0000000000000028 = uStack0000000000000008;
  in_stack_00000020 = in_stack_00000000;
  unaff_x19[1] = _uStack0000000000000008;
  *unaff_x19 = in_stack_00000000;
  *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000014;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000010,uStack000000000000000c);
  in_stack_00000098 = 0;
  _uStack0000000000000090 = 0;
  FUN_05d18018(*unaff_x22,&stack0x00000090);
LAB_05d1c65c:
  return uStack0000000000000090;
}


