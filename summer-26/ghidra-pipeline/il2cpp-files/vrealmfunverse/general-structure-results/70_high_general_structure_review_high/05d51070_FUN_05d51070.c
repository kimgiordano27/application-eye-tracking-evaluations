/*
FUNCTION_NAME: FUN_05d51070
ENTRY_POINT: 05d51070
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1
*/


uint FUN_05d51070(long param_1,long param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int local_24;
  
  if ((DAT_066db82e & 1) == 0) {
    FUN_02b3c81c(
                Method_DG_Tweening_TweenSettingsExtensions_SetTarget<TweenerCore<Quaternion,_Vector3,_QuaternionOptions>>__
                );
    DAT_066db82e = 1;
  }
  local_24 = 0;
  if ((*(long *)(param_1 + 0x130) == 0) && (FUN_05d4b4f4(param_1), *(long *)(param_1 + 0x130) == 0))
  {
    uVar3 = 0;
  }
  else {
    puVar1 = 
    Method_DG_Tweening_TweenSettingsExtensions_SetTarget<TweenerCore<Quaternion,_Vector3,_QuaternionOptions>>__
    ;
    local_24 = 0;
    if (param_2 == 0) {
LAB_05d51144:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (*(int *)(param_2 + 0x10) < 1) {
      uVar3 = 1;
    }
    else {
      do {
        uVar2 = UnityEngine_UIElements_UIR_RenderTreeCompositor__ExecuteDrawOperation_PostOrder
                          (param_2,&local_24,0);
        if (*(long *)(param_1 + 0x130) == 0) goto LAB_05d51144;
        uVar3 = FUN_045e12ac(*(long *)(param_1 + 0x130),uVar2,*(undefined8 *)puVar1);
      } while (((uVar3 & 1) != 0) && (local_24 = local_24 + 1, local_24 < *(int *)(param_2 + 0x10)))
      ;
    }
  }
  return uVar3 & 1;
}


