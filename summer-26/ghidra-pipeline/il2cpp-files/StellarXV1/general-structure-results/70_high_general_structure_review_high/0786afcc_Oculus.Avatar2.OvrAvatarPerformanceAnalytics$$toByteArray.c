/*
FUNCTION_NAME: Oculus.Avatar2.OvrAvatarPerformanceAnalytics$$toByteArray
ENTRY_POINT: 0786afcc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Oculus_Avatar2_OvrAvatarPerformanceAnalytics__toByteArray(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long lVar3;
  long unaff_x24;
  
  if (param_1 != 0) {
    uVar1 = FUN_07693e44(param_1,0);
    if ((uVar1 & 1) == 0) {
      uVar2 = *unaff_x21;
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_092d5a60 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      if (unaff_x19 == (long *)0x0) goto LAB_0786b0a0;
      (**(code **)(*unaff_x19 + 0x268))();
      lVar3 = *(long *)(unaff_x24 + 0x10);
      if (*(int *)(*(long *)(unaff_x24 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar2 = FUN_0768890c(lVar3 + 0x20,0);
    }
    FUN_0786b0ec(uVar2,*unaff_x20);
    return;
  }
LAB_0786b0a0:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


