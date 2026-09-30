/*
FUNCTION_NAME: MagicaCloth2.ExSimpleNativeArray<float4x4>$$Serialize
ENTRY_POINT: 04f77264
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


long MagicaCloth2_ExSimpleNativeArray<float4x4>__Serialize(long param_1)

{
  long lVar1;
  long unaff_x19;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_02eea768();
  }
  lVar2 = **(long **)(param_1 + 0xb8);
  thunk_FUN_02eb57a8();
  if (lVar2 == 0) {
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02eea768();
    }
    lVar2 = FUN_04f77310(*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x18));
    thunk_FUN_02eb57a8();
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02eea768();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02eea768();
    }
    **(long **)(lVar1 + 0xb8) = lVar2;
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02eea768();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02eea768();
    }
    thunk_FUN_02f411dc(*(undefined8 *)(lVar1 + 0xb8),lVar2);
  }
  return lVar2;
}


