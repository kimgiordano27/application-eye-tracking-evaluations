/*
FUNCTION_NAME: Unity.Mathematics.uint2x3$$Equals
ENTRY_POINT: 058d6988
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


long Unity_Mathematics_uint2x3__Equals(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000430;
  long in_stack_00000838;
  
  FUN_02d6084c(*(undefined8 *)(param_1 + 0xb0));
  FUN_02d6084c(OVRPlugin_OVRP_1_0_0_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0xafb) = 1;
  memset(&stack0x00000428,0,0x410);
  FUN_058f3e10(&stack0x00000018,0);
  memcpy(&stack0x00000428,&stack0x00000018,0x410);
  if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar2 = FUN_0345c524();
  if ((lVar2 == -1) || (((uint)lVar2 >> 1 & 1) == 0)) {
    *unaff_x22 = 0;
    unaff_x22[1] = 0;
    unaff_x22[2] = 0;
    *unaff_x20 = 0;
    thunk_FUN_02dd37b4();
    *unaff_x19 = 0;
  }
  else {
    in_stack_00000008 = 0;
    in_stack_00000010 = 0;
    lVar1 = *(long *)OVRPlugin_OVRP_1_0_0_TypeInfo;
    if (*(long *)(unaff_x23 + 0xf0) != 0) {
      lVar1 = *(long *)(unaff_x23 + 0xf0);
    }
    FUN_058d7f14(&stack0x00000008,lVar1,in_stack_00000430,0);
    in_stack_00000018 = 0;
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    FUN_03dcd8ac(&stack0x00000018,in_stack_00000008,in_stack_00000010,
                 *(undefined8 *)OVRPlugin_OVRP_0_5_0_TypeInfo);
    unaff_x22[2] = in_stack_00000028;
    unaff_x22[1] = in_stack_00000020;
    *unaff_x22 = in_stack_00000018;
    thunk_FUN_02dd37b4(unaff_x22 + 1,0);
    uVar3 = FUN_058f3cc0(&stack0x00000428,0);
    *unaff_x20 = uVar3;
    thunk_FUN_02dd37b4();
    uVar3 = FUN_058f3ba0(&stack0x00000428,0);
    *unaff_x19 = uVar3;
  }
  thunk_FUN_02dd37b4();
  if (*(long *)(unaff_x24 + 0x28) == in_stack_00000838) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


