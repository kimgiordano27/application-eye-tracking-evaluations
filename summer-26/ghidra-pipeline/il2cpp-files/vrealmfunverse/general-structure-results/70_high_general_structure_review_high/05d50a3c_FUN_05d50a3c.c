/*
FUNCTION_NAME: FUN_05d50a3c
ENTRY_POINT: 05d50a3c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1
*/


bool FUN_05d50a3c(long param_1,long param_2,long *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int local_34;
  
  if ((DAT_066db82c & 1) == 0) {
    FUN_02b3c81c(
                Method_DG_Tweening_TweenSettingsExtensions_SetTarget<TweenerCore<Quaternion,_Vector3,_QuaternionOptions>>__
                );
    FUN_02b3c81c(PTR_DAT_0631c578);
    FUN_02b3c81c(PTR_DAT_0631c5c8);
    FUN_02b3c81c(PTR_DAT_0631c590);
    FUN_02b3c81c(PTR_DAT_0631c5c0);
    DAT_066db82c = 1;
  }
  local_34 = 0;
  if ((*(long *)(param_1 + 0x130) == 0) && (FUN_05d4b4f4(param_1), *(long *)(param_1 + 0x130) == 0))
  {
    *param_3 = 0;
    thunk_FUN_02bb0e9c(param_3,0);
    return false;
  }
  puVar2 = PTR_DAT_0631c5c8;
  lVar5 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_0631c5c0);
  FUN_0370761c(lVar5,*(undefined8 *)puVar2);
  *param_3 = lVar5;
  thunk_FUN_02bb0e9c(param_3,lVar5);
  puVar3 = 
  Method_DG_Tweening_TweenSettingsExtensions_SetTarget<TweenerCore<Quaternion,_Vector3,_QuaternionOptions>>__
  ;
  puVar2 = PTR_DAT_0631c578;
  local_34 = 0;
  if (param_2 != 0) {
    if (0 < *(int *)(param_2 + 0x10)) {
      do {
        uVar4 = UnityEngine_UIElements_UIR_RenderTreeCompositor__ExecuteDrawOperation_PostOrder
                          (param_2,&local_34,0);
        if (*(long *)(param_1 + 0x130) == 0) goto LAB_05d50bfc;
        uVar6 = FUN_045e12ac(*(long *)(param_1 + 0x130),uVar4,*(undefined8 *)puVar3);
        if ((uVar6 & 1) == 0) {
          lVar5 = *param_3;
          if (lVar5 == 0) goto LAB_05d50bfc;
          lVar7 = *(long *)(lVar5 + 0x10);
          lVar8 = *(long *)puVar2;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar7 == 0) goto LAB_05d50bfc;
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            *(short *)(lVar7 + (long)(int)uVar1 * 2 + 0x20) = (short)uVar4;
          }
          else {
            FUN_03707eac(lVar5,uVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
        }
        local_34 = local_34 + 1;
      } while (local_34 < *(int *)(param_2 + 0x10));
    }
    if (*param_3 != 0) {
      return *(int *)(*param_3 + 0x18) == 0;
    }
  }
LAB_05d50bfc:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


