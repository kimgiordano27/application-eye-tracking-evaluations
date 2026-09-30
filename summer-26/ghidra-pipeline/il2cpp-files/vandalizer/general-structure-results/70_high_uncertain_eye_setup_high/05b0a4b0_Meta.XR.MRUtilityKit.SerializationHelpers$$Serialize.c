/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SerializationHelpers$$Serialize
ENTRY_POINT: 05b0a4b0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_SerializationHelpers__Serialize(long param_1)

{
  long lVar1;
  int in_w9;
  long in_x10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  uint unaff_w22;
  uint unaff_w23;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  
  while( true ) {
    *(uint *)(unaff_x19 + 0xc) = unaff_w23 + 1;
    if (in_x10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if (*(uint *)(in_x10 + 0x18) <= unaff_w23) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    uVar3 = unaff_w23 + 1;
    if (-1 < *(int *)(in_x10 + (long)(int)unaff_w23 * (long)in_w9 + 0x20)) break;
    if (unaff_w22 <= uVar3) {
      *(uint *)(unaff_x19 + 0xc) = unaff_w22 + 1;
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      *(undefined8 *)(unaff_x19 + 0x28) = 0;
      *(undefined8 *)(unaff_x19 + 0x20) = 0;
      *(undefined8 *)(unaff_x19 + 0x30) = 0;
      goto LAB_05b0a564;
    }
    in_x10 = *(long *)(param_1 + 0x18);
    unaff_w23 = uVar3;
  }
  lVar1 = in_x10 + (long)(int)unaff_w23 * 0x30;
  uVar5 = *(undefined8 *)(lVar1 + 0x38);
  uVar4 = *(undefined8 *)(lVar1 + 0x30);
  uVar7 = *(undefined8 *)(lVar1 + 0x48);
  uVar6 = *(undefined8 *)(lVar1 + 0x40);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  in_stack_00000040 = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0322bef4();
  }
  in_stack_00000050 = uVar4;
  in_stack_00000058 = uVar5;
  in_stack_00000060 = uVar6;
  in_stack_00000068 = uVar7;
  FUN_045e2944(&stack0x00000020,uVar2,&stack0x00000050,
               *(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x38));
  *(undefined8 *)(unaff_x19 + 0x30) = in_stack_00000040;
  *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000028;
  *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000020;
  *(undefined8 *)(unaff_x19 + 0x28) = in_stack_00000038;
  *(undefined8 *)(unaff_x19 + 0x20) = in_stack_00000030;
  thunk_FUN_0329bf60(unaff_x19 + 0x10,0);
  uVar3 = unaff_w23;
LAB_05b0a564:
  return uVar3 < unaff_w22;
}


