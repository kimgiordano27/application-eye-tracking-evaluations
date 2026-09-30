/*
FUNCTION_NAME: UnityWebSocketSharp.Net.RequestStream$$set_Position
ENTRY_POINT: 07c5a198
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void UnityWebSocketSharp_Net_RequestStream__set_Position(undefined8 param_1)

{
  undefined4 in_w9;
  long unaff_x19;
  long *unaff_x25;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined8 uStack0000000000000030;
  undefined4 uStack0000000000000038;
  
  *(undefined8 *)(unaff_x19 + 0x458) = param_1;
  *(undefined4 *)(unaff_x19 + 0x460) = in_w9;
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  FUN_07c5a3ac();
  if (0x5b < *(uint *)(unaff_x19 + 0x18)) {
    *(undefined8 *)(unaff_x19 + 0x464) = uStack0000000000000030;
    *(undefined4 *)(unaff_x19 + 0x46c) = uStack0000000000000038;
    in_stack_00000028 = 0;
    in_stack_00000020 = 0;
    FUN_07c5a3ac(&stack0x00000020,0x24b6,0x24d0,1,0x1a,0);
    if (0x5c < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x470) = in_stack_00000020;
      *(undefined4 *)(unaff_x19 + 0x478) = in_stack_00000028;
      in_stack_00000018 = 0;
      in_stack_00000010 = 0;
      FUN_07c5a3ac(&stack0x00000010,0xff21,0xff3a,1,0x20,0);
      if (0x5d < *(uint *)(unaff_x19 + 0x18)) {
        *(undefined8 *)(unaff_x19 + 0x47c) = in_stack_00000010;
        *(undefined4 *)(unaff_x19 + 0x484) = in_stack_00000018;
        *(long *)(*(long *)(*unaff_x25 + 0xb8) + 0x68) = unaff_x19;
        thunk_FUN_03d1023c();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


