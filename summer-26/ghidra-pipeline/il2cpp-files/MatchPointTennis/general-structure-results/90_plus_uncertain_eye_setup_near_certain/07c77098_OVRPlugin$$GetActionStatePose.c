/*
FUNCTION_NAME: OVRPlugin$$GetActionStatePose
ENTRY_POINT: 07c77098
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin__GetActionStatePose(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *unaff_x19;
  float *unaff_x22;
  long unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x27;
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
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 uStack000000000000005c;
  undefined4 in_stack_00000060;
  undefined4 uStack0000000000000064;
  undefined4 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined4 uStack000000000000007c;
  undefined4 in_stack_00000080;
  undefined4 uStack0000000000000084;
  undefined4 in_stack_00000088;
  undefined4 uStack0000000000000090;
  undefined4 in_stack_00000098;
  
  FUN_04447ba8(PTR_DAT_09f504d8);
  *(undefined1 *)(unaff_x27 + 0x76d) = 1;
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  uStack000000000000007c = 0;
  in_stack_00000088 = 0;
  in_stack_00000080 = 0;
  uStack0000000000000084 = 0;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  uStack000000000000005c = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  uStack0000000000000064 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  fVar3 = *unaff_x22;
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  if (fVar3 == 1.0) {
    if (unaff_x24 == 0) {
LAB_07c77244:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    pcVar2 = *(code **)(unaff_x24 + 0x18);
    uVar1 = *(undefined8 *)(unaff_x24 + 0x40);
  }
  else {
    fVar3 = *unaff_x22;
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    if (unaff_x25 == 0) goto LAB_07c77244;
    if (fVar3 != 0.0) {
      (**(code **)(unaff_x25 + 0x18))(&stack0x00000020,*(undefined8 *)(unaff_x25 + 0x40));
      in_stack_00000078 = uStack0000000000000028;
      in_stack_00000070 = in_stack_00000020;
      uStack0000000000000084 = (undefined4)uStack0000000000000034;
      in_stack_00000088 = SUB84(uStack0000000000000034,4);
      uStack000000000000007c = uStack000000000000002c;
      in_stack_00000080 = uStack0000000000000030;
      if (unaff_x24 == 0) goto LAB_07c77244;
      (**(code **)(unaff_x24 + 0x18))(&stack0x00000020,*(undefined8 *)(unaff_x24 + 0x40));
      in_stack_00000058 = uStack0000000000000028;
      in_stack_00000050 = in_stack_00000020;
      uStack0000000000000064 = (undefined4)uStack0000000000000034;
      in_stack_00000068 = SUB84(uStack0000000000000034,4);
      in_stack_00000060 = uStack0000000000000030;
      FUN_07c77248(&stack0x00000020,*unaff_x22,&stack0x00000050,&stack0x00000070);
      *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000034;
      *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      unaff_x19[1] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      *unaff_x19 = in_stack_00000020;
      _uStack0000000000000090 = in_stack_00000040;
      goto LAB_07c7717c;
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
  FUN_07c72a34(*unaff_x22,&stack0x00000090);
LAB_07c7717c:
  return uStack0000000000000090;
}


