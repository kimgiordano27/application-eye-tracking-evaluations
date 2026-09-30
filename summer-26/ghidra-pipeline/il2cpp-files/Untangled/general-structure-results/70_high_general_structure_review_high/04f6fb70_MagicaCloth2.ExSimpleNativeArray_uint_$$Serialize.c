/*
FUNCTION_NAME: MagicaCloth2.ExSimpleNativeArray<uint>$$Serialize
ENTRY_POINT: 04f6fb70
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


uint MagicaCloth2_ExSimpleNativeArray<uint>__Serialize(void)

{
  long lVar1;
  ulong uVar2;
  uint in_w8;
  uint unaff_w19;
  long unaff_x20;
  long *unaff_x21;
  int unaff_w22;
  
  while( true ) {
    if (in_w8 <= unaff_w19) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    lVar1 = unaff_x20 + (long)(int)unaff_w19 * 0x10;
    uVar2 = (**(code **)(*unaff_x21 + 0x1b8))
                      (*(undefined4 *)(lVar1 + 0x20),*(undefined4 *)(lVar1 + 0x24),
                       *(undefined4 *)(lVar1 + 0x28),*(undefined4 *)(lVar1 + 0x2c));
    if ((uVar2 & 1) != 0) break;
    unaff_w19 = unaff_w19 - 1;
    if ((int)unaff_w19 < unaff_w22) {
      return 0xffffffff;
    }
    in_w8 = *(uint *)(unaff_x20 + 0x18);
  }
  return unaff_w19;
}


