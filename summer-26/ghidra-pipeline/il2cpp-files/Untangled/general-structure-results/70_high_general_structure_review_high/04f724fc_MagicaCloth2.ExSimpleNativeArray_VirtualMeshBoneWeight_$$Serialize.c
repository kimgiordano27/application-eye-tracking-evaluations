/*
FUNCTION_NAME: MagicaCloth2.ExSimpleNativeArray<VirtualMeshBoneWeight>$$Serialize
ENTRY_POINT: 04f724fc
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


uint MagicaCloth2_ExSimpleNativeArray<VirtualMeshBoneWeight>__Serialize
               (undefined8 param_1,undefined1 param_2 [16])

{
  ulong uVar1;
  undefined8 in_x9;
  uint unaff_w19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  
  uStack0000000000000068 = param_2._8_8_;
  uStack0000000000000060 = param_2._0_8_;
  while( true ) {
    uStack0000000000000008 = unaff_x20[1];
    uStack0000000000000000 = *unaff_x20;
    uStack0000000000000010 = in_x9;
    uStack0000000000000040 = uStack0000000000000000;
    uStack0000000000000048 = uStack0000000000000008;
    uStack0000000000000050 = in_x9;
    uStack0000000000000070 = param_1;
    uVar1 = (**(code **)(*unaff_x22 + 0x1b8))();
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_w19 = unaff_w19 + 1;
    unaff_x24 = unaff_x24 + -1;
    if (unaff_x24 == 0) break;
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    param_1 = unaff_x23[5];
    uStack0000000000000068 = unaff_x23[4];
    uStack0000000000000060 = unaff_x23[3];
    in_x9 = unaff_x20[2];
    unaff_x23 = unaff_x23 + 3;
  }
  return 0xffffffff;
}


