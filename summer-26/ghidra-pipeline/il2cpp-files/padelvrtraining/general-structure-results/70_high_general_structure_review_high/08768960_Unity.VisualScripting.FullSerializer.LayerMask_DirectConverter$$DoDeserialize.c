/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.LayerMask_DirectConverter$$DoDeserialize
ENTRY_POINT: 08768960
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_LayerMask_DirectConverter__DoDeserialize
               (undefined8 param_1,undefined1 param_2 [16])

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  FUN_08a0d940(&stack0x00000020,param_1,param_2,0);
  in_stack_00000048 = in_stack_00000028;
  in_stack_00000040 = in_stack_00000020;
  in_stack_00000050 = in_stack_00000030;
  lVar2 = FUN_04ec1b74();
  in_stack_00000028 = in_stack_00000048;
  in_stack_00000020 = in_stack_00000040;
  in_stack_00000030 = in_stack_00000050;
  if (lVar2 != 0) {
    uVar3 = FUN_08abf178(0x7f7fffff);
    if ((uVar3 & 1) != 0) {
      lVar2 = *(long *)(unaff_x19 + 0x30);
      uVar1 = FUN_0875fc50(*(undefined8 *)(unaff_x19 + 0x40));
      FUN_08abdcec(&stack0x00000060,0);
      if (lVar2 == 0) goto LAB_08768a10;
      FUN_08ca67c8(lVar2,uVar1,0);
    }
    return;
  }
LAB_08768a10:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


