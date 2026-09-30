/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Background$$set_RaycastTarget
ENTRY_POINT: 05ac89a8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint Meta_XR_ImmersiveDebugger_UserInterface_Generic_Background__set_RaycastTarget
               (long param_1,long *param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  ulong uVar1;
  uint unaff_w19;
  long unaff_x21;
  undefined8 *puVar2;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  param_1 = param_1 - param_5;
  puVar2 = (undefined8 *)(unaff_x21 + (long)(int)unaff_w19 * 0x40 + 0x20);
  while( true ) {
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    in_stack_00000048 = puVar2[1];
    in_stack_00000040 = *puVar2;
    in_stack_00000058 = puVar2[3];
    in_stack_00000050 = puVar2[2];
    in_stack_00000068 = puVar2[5];
    in_stack_00000060 = puVar2[4];
    in_stack_00000078 = puVar2[7];
    in_stack_00000070 = puVar2[6];
    uVar1 = (**(code **)(*param_2 + 0x1b8))(param_2,&stack0x00000040);
    if ((uVar1 & 1) != 0) break;
    param_1 = param_1 + -1;
    puVar2 = puVar2 + 8;
    unaff_w19 = unaff_w19 + 1;
    if (param_1 == 0) {
      return 0xffffffff;
    }
  }
  return unaff_w19;
}


