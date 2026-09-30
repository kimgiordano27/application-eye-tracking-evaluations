/*
FUNCTION_NAME: MagicaCloth2.ExSimpleNativeArray<FixedList64Bytes<short>>$$Serialize
ENTRY_POINT: 04f66058
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


uint MagicaCloth2_ExSimpleNativeArray<FixedList64Bytes<short>>__Serialize(void)

{
  ulong uVar1;
  uint unaff_w19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  
  while( true ) {
    uStack0000000000000050 = unaff_x23[4];
    uStack0000000000000038 = unaff_x23[1];
    uStack0000000000000030 = *unaff_x23;
    uStack0000000000000048 = unaff_x23[3];
    uStack0000000000000040 = unaff_x23[2];
    uStack0000000000000020 = unaff_x20[4];
    uStack0000000000000008 = unaff_x20[1];
    uStack0000000000000000 = *unaff_x20;
    uStack0000000000000018 = unaff_x20[3];
    uStack0000000000000010 = unaff_x20[2];
    uStack0000000000000060 = uStack0000000000000000;
    uStack0000000000000068 = uStack0000000000000008;
    uStack0000000000000070 = uStack0000000000000010;
    uStack0000000000000078 = uStack0000000000000018;
    uStack0000000000000080 = uStack0000000000000020;
    uStack0000000000000090 = uStack0000000000000030;
    uStack0000000000000098 = uStack0000000000000038;
    uStack00000000000000a0 = uStack0000000000000040;
    uStack00000000000000a8 = uStack0000000000000048;
    uStack00000000000000b0 = uStack0000000000000050;
    uVar1 = (**(code **)(*unaff_x22 + 0x1b8))();
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 + 1;
    unaff_x24 = unaff_x24 + -1;
    unaff_x23 = unaff_x23 + 5;
    if (unaff_x24 == 0) break;
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
  }
  return 0xffffffff;
}


