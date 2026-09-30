/*
FUNCTION_NAME: ExitGames.Client.Photon.Protocol16$$DeserializeStringArray
ENTRY_POINT: 060ec4b8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void ExitGames_Client_Photon_Protocol16__DeserializeStringArray(long param_1)

{
  uint in_w9;
  undefined4 *unaff_x19;
  undefined4 unaff_w21;
  ulong unaff_x22;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined4 unaff_s12;
  undefined4 unaff_s13;
  undefined4 unaff_s14;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined8 uStack0000000000000044;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  if (in_w9 < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2398();
  }
  if ((*(long *)(param_1 + 200) == 3) && (unaff_s8 = 0, (unaff_x22 & 4) != 0)) {
    unaff_s8 = 0x3f800000;
  }
  *unaff_x19 = 0;
  unaff_x19[1] = unaff_w21;
  unaff_x19[4] = unaff_s9;
  unaff_x19[5] = unaff_s12;
  unaff_x19[8] = unaff_s10;
  unaff_x19[9] = unaff_s11;
  unaff_x19[10] = unaff_s13;
  unaff_x19[0xb] = unaff_s14;
  *(undefined8 *)(unaff_x19 + 2) = in_stack_00000058;
  unaff_x19[6] = in_stack_00000050._4_4_;
  unaff_x19[7] = unaff_s8;
  *(undefined8 *)(unaff_x19 + 0x19) = uStack0000000000000044;
  *(ulong *)(unaff_x19 + 0x17) = CONCAT44(uStack0000000000000040,in_stack_00000038._4_4_);
  *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
  *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000020;
  *(undefined8 *)(unaff_x19 + 0x16) = in_stack_00000038;
  *(undefined8 *)(unaff_x19 + 0x14) = in_stack_00000030;
  *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000018;
  *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000010;
  return;
}


