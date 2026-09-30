/*
FUNCTION_NAME: OVRPlugin$$set_cpuLevel
ENTRY_POINT: 06007d90
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin__set_cpuLevel(void)

{
  undefined8 *unaff_x19;
  undefined4 *unaff_x22;
  long unaff_x24;
  long unaff_x25;
  float unaff_s8;
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
  undefined4 in_stack_00000060;
  undefined8 uStack0000000000000064;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined4 uStack0000000000000080;
  undefined8 uStack0000000000000084;
  undefined4 uStack0000000000000090;
  undefined4 in_stack_00000098;
  
  if (unaff_x25 != 0) {
    if (unaff_s8 == 0.0) {
      (**(code **)(unaff_x25 + 0x18))(*(undefined8 *)(unaff_x25 + 0x40));
      uStack0000000000000030 = uStack0000000000000010;
      uStack0000000000000028 = uStack0000000000000008;
      in_stack_00000020 = in_stack_00000000;
      unaff_x19[1] = _uStack0000000000000008;
      *unaff_x19 = in_stack_00000000;
      *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000014;
      *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000010,uStack000000000000000c);
      in_stack_00000098 = 0;
      _uStack0000000000000090 = 0;
      FUN_06003794(*unaff_x22,&stack0x00000090);
    }
    else {
      (**(code **)(unaff_x25 + 0x18))(&stack0x00000020,*(undefined8 *)(unaff_x25 + 0x40));
      in_stack_00000078 = uStack0000000000000028;
      in_stack_00000070 = in_stack_00000020;
      uStack0000000000000084 = uStack0000000000000034;
      uStack0000000000000080 = uStack0000000000000030;
      if (unaff_x24 == 0) goto LAB_06007ec0;
      (**(code **)(unaff_x24 + 0x18))(&stack0x00000020,*(undefined8 *)(unaff_x24 + 0x40));
      in_stack_00000058 = uStack0000000000000028;
      in_stack_00000050 = in_stack_00000020;
      uStack0000000000000064 = uStack0000000000000034;
      in_stack_00000060 = uStack0000000000000030;
      FUN_06007ec4(&stack0x00000020,*unaff_x22,&stack0x00000050,&stack0x00000070);
      *(undefined8 *)((long)unaff_x19 + 0x14) = uStack0000000000000034;
      *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000030,uStack000000000000002c);
      unaff_x19[1] = CONCAT44(uStack000000000000002c,uStack0000000000000028);
      *unaff_x19 = in_stack_00000020;
      _uStack0000000000000090 = in_stack_00000040;
    }
    return uStack0000000000000090;
  }
LAB_06007ec0:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


