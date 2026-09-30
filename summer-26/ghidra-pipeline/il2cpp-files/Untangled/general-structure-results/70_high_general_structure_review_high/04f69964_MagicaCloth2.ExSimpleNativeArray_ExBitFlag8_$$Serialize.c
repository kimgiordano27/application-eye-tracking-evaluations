/*
FUNCTION_NAME: MagicaCloth2.ExSimpleNativeArray<ExBitFlag8>$$Serialize
ENTRY_POINT: 04f69964
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


undefined8
MagicaCloth2_ExSimpleNativeArray<ExBitFlag8>__Serialize(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_02eea768(param_2);
  lVar1 = thunk_FUN_02ef170c();
  if (lVar1 == 0) {
    FUN_05622cbc(2,0);
    uVar2 = 0;
  }
  else {
    lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02eea768(lVar1);
    }
    if (*(long *)(*unaff_x20 + 0x40) != *(long *)(lVar1 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440();
    }
    thunk_FUN_02ef195c();
    uVar2 = (**(code **)(*unaff_x19 + 0x1c8))();
  }
  return uVar2;
}


