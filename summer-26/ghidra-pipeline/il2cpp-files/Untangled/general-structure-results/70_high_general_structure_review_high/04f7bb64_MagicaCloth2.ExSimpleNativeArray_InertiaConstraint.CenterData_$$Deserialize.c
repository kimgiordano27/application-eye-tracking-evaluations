/*
FUNCTION_NAME: MagicaCloth2.ExSimpleNativeArray<InertiaConstraint.CenterData>$$Deserialize
ENTRY_POINT: 04f7bb64
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
MagicaCloth2_ExSimpleNativeArray<InertiaConstraint_CenterData>__Deserialize
          (undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  
  if ((*(byte *)(param_2 + 0x135) & 1) == 0) {
    FUN_02eea768(param_2);
  }
  lVar1 = thunk_FUN_02ef170c();
  if (lVar1 == 0) {
    FUN_05622cbc(2,0);
    return 0;
  }
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02eea768(lVar1);
  }
  if (*(long *)(*unaff_x22 + 0x40) == *(long *)(lVar1 + 0x40)) {
    thunk_FUN_02ef195c();
    lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02eea768(lVar1);
    }
    if (*(long *)(*unaff_x20 + 0x40) == *(long *)(lVar1 + 0x40)) {
      thunk_FUN_02ef195c();
                    /* WARNING: Could not recover jumptable at 0x04f7bc24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*unaff_x19 + 0x1b8))();
      return uVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f08440();
}


