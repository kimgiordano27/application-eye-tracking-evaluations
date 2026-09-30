/*
FUNCTION_NAME: FUN_05d50c00
ENTRY_POINT: 05d50c00
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_9;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8 FUN_05d50c00(long param_1,long param_2,undefined8 *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  undefined8 local_70;
  int local_64;
  
  if ((DAT_066db82d & 1) == 0) {
    FUN_02b3c81c(
                Method_DG_Tweening_TweenSettingsExtensions_SetTarget<TweenerCore<Quaternion,_Vector3,_QuaternionOptions>>__
                );
    FUN_02b3c81c(
                Method_Oculus_Interaction_PoseDetection_TransformFeatureStateProvider_HandDataAvailable__
                );
    FUN_02b3c81c(PTR_DAT_063223b8);
    FUN_02b3c81c(PTR_DAT_063223d8);
    FUN_02b3c81c(PTR_DAT_063223b0);
    FUN_02b3c81c(PTR_DAT_063223a8);
    FUN_02b3c81c(PTR_DAT_0631f050);
    FUN_02b3c81c(Method_System_Collections_Generic_List<Vector3>__ctor__);
    FUN_02b3c81c(Method_System_Collections_Generic_List<Vector2>_get_Count__);
    FUN_02b3c81c(Method_DG_Tweening_TweenSettingsExtensions_SetTarget<Tweener>__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_Clickable_OnPointerUp__);
    FUN_02b3c81c(
                Method_DG_Tweening_TweenSettingsExtensions_SetUpdate<TweenerCore<Vector3,_Path,_PathOptions>>__
                );
    FUN_02b3c81c(PTR_DAT_06312520);
    DAT_066db82d = 1;
  }
  local_64 = 0;
  local_70 = 0;
  *param_3 = 0;
  thunk_FUN_02bb0e9c(param_3,0);
  if ((*(long *)(param_1 + 0x130) == 0) && (FUN_05d4b4f4(param_1), *(long *)(param_1 + 0x130) == 0))
  {
    return 0;
  }
  lVar11 = *(long *)(param_1 + 0x1f0);
  if (lVar11 != 0) {
    local_64 = 0;
    *(undefined4 *)(lVar11 + 0x18) = 0;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    puVar5 = 
    Method_DG_Tweening_TweenSettingsExtensions_SetUpdate<TweenerCore<Vector3,_Path,_PathOptions>>__;
    puVar4 = 
    Method_Oculus_Interaction_PoseDetection_TransformFeatureStateProvider_HandDataAvailable__;
    puVar3 = PTR_DAT_063223b8;
    puVar2 = PTR_DAT_06312520;
    if (param_2 != 0) {
      if (0 < *(int *)(param_2 + 0x10)) {
        do {
          uVar6 = UnityEngine_UIElements_UIR_RenderTreeCompositor__ExecuteDrawOperation_PostOrder
                            (param_2,&local_64,0);
          if (*(long *)(param_1 + 0x130) == 0) goto LAB_05d5106c;
          uVar8 = FUN_045e12ac(*(long *)(param_1 + 0x130),uVar6,
                               *(undefined8 *)
                                Method_DG_Tweening_TweenSettingsExtensions_SetTarget<TweenerCore<Quaternion,_Vector3,_QuaternionOptions>>__
                              );
          if (((uVar8 & 1) == 0) &&
             ((((param_5 & 1) == 0 || (1 < *(int *)(param_1 + 0xa8) - 1U)) ||
              (uVar8 = FUN_05d5049c(param_1,uVar6,0,400,&local_70,1), (uVar8 & 1) == 0)))) {
            if ((param_4 & 1) != 0) {
              lVar11 = *(long *)puVar4;
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                lVar11 = *(long *)puVar4;
              }
              lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x68);
              if (lVar12 == 0) {
                uVar10 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_063223a8);
                FUN_04a53210(uVar10,*(undefined8 *)PTR_DAT_063223b0);
                lVar11 = *(long *)puVar4;
                if (*(int *)(lVar11 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                  lVar11 = *(long *)puVar4;
                }
                puVar9 = (undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x68);
                *puVar9 = uVar10;
                thunk_FUN_02bb0e9c(puVar9,uVar10);
              }
              else {
                if (*(int *)(lVar11 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                  lVar12 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x68);
                  if (lVar12 == 0) goto LAB_05d5106c;
                }
                FUN_04a538b4(lVar12,*(undefined8 *)PTR_DAT_063223d8);
              }
              lVar11 = *(long *)puVar4;
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                lVar11 = *(long *)puVar4;
              }
              lVar11 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x68);
              uVar7 = FUN_05c91f88(param_1,0);
              if (lVar11 == 0) goto LAB_05d5106c;
              FUN_04a54450(lVar11,uVar7,*(undefined8 *)puVar3);
              lVar11 = *(long *)(param_1 + 0x180);
              if ((lVar11 != 0) && (0 < *(int *)(lVar11 + 0x18))) {
                iVar14 = 0;
                while (iVar14 < *(int *)(lVar11 + 0x18)) {
                  uVar10 = FUN_037a6268(lVar11,iVar14,*(undefined8 *)puVar5);
                  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44(*(long *)puVar2);
                  }
                  uVar8 = FUN_05c8c45c(uVar10,0,0);
                  if ((uVar8 & 1) == 0) break;
                  if ((*(long *)(param_1 + 0x180) == 0) ||
                     (lVar11 = FUN_037a6268(*(long *)(param_1 + 0x180),iVar14,*(undefined8 *)puVar5)
                     , lVar11 == 0)) goto LAB_05d5106c;
                  uVar7 = FUN_05c91f88(lVar11,0);
                  lVar12 = *(long *)puVar4;
                  if (*(int *)(lVar12 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44(lVar12);
                    lVar12 = *(long *)puVar4;
                  }
                  lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x68);
                  if (lVar12 == 0) goto LAB_05d5106c;
                  uVar8 = FUN_04a54450(lVar12,uVar7,*(undefined8 *)puVar3);
                  if (((uVar8 & 1) != 0) &&
                     (uVar8 = FUN_05d50804(lVar11,uVar6,0,400,1,param_5 & 1), (uVar8 & 1) != 0))
                  goto LAB_05d50ff0;
                  lVar11 = *(long *)(param_1 + 0x180);
                  iVar14 = iVar14 + 1;
                  if (lVar11 == 0) goto LAB_05d5106c;
                }
              }
            }
            lVar11 = *(long *)(param_1 + 0x1f0);
            if (lVar11 == 0) goto LAB_05d5106c;
            lVar12 = *(long *)(lVar11 + 0x10);
            lVar13 = *(long *)PTR_DAT_0631f050;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            if (lVar12 == 0) goto LAB_05d5106c;
            uVar1 = *(uint *)(lVar11 + 0x18);
            if (uVar1 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar12 + (long)(int)uVar1 * 4 + 0x20) = uVar6;
            }
            else {
              FUN_038597b0(lVar11,uVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
          }
LAB_05d50ff0:
          local_64 = local_64 + 1;
        } while (local_64 < *(int *)(param_2 + 0x10));
      }
      lVar11 = *(long *)(param_1 + 0x1f0);
      if (lVar11 != 0) {
        if (0 < *(int *)(lVar11 + 0x18)) {
          uVar10 = FUN_0385b1fc(lVar11,*(undefined8 *)
                                        Method_System_Collections_Generic_List<Vector2>_get_Count__)
          ;
          *param_3 = uVar10;
          thunk_FUN_02bb0e9c(param_3,uVar10);
          return 0;
        }
        return 1;
      }
    }
  }
LAB_05d5106c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


