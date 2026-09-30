/*
FUNCTION_NAME: FUN_05d4eda8
ENTRY_POINT: 05d4eda8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_9;telemetry_or_network_hits_4
*/


void FUN_05d4eda8(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 local_d0;
  undefined8 *puStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulong local_98;
  undefined8 local_90;
  undefined8 *puStack_88;
  ulong local_80;
  long local_78;
  undefined8 local_70;
  
  puVar3 = Method_System_Collections_Generic_List<Vector2Tween>__ctor__;
  puVar2 = Method_System_Collections_Generic_List<Vector2>_get_Item__;
  if ((DAT_066db81b & 1) == 0) {
    FUN_02b3c81c(Method_DG_Tweening_TweenSettingsExtensions_SetEase<Tweener>__);
    FUN_02b3c81c(
                Method_DG_Tweening_TweenSettingsExtensions_SetLoops<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
    FUN_02b3c81c(Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Tweener>__);
    FUN_02b3c81c(
                Method_System_Collections_Generic_List<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>_set_Capacity__
                );
    FUN_02b3c81c(Method_DG_Tweening_TweenSettingsExtensions_SetRelative<Tweener>__);
    FUN_02b3c81c(
                Method_System_Collections_Generic_List<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>_set_Item__
                );
    FUN_02b3c81c(Method_System_Collections_Generic_List<Allocator2D_Area>__ctor__);
    FUN_02b3c81c(
                Method_DG_Tweening_TweenSettingsExtensions_SetSpeedBased<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
                );
    FUN_02b3c81c(
                Method_DG_Tweening_TweenSettingsExtensions_SetTarget<TweenerCore<Color,_Color,_ColorOptions>>__
                );
    FUN_02b3c81c(
                Method_DG_Tweening_TweenSettingsExtensions_SetTarget<TweenerCore<Color2,_Color2,_ColorOptions>>__
                );
    FUN_02b3c81c(PTR_DAT_0631f050);
    FUN_02b3c81c(Method_System_Collections_Generic_List<Allocator2D_Area>_Add__);
    FUN_02b3c81c(Method_System_Collections_Generic_List<Vector2>_get_Item__);
    FUN_02b3c81c(Method_System_Collections_Generic_List<Vector2Tween>__ctor__);
    FUN_02b3c81c(PTR_DAT_06312520);
    DAT_066db81b = 1;
  }
  local_70 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
  FUN_03858f20(lVar10,*(undefined8 *)puVar2);
  puVar8 = Method_DG_Tweening_TweenSettingsExtensions_SetRelative<Tweener>__;
  puVar7 = Method_DG_Tweening_TweenSettingsExtensions_SetLoops<Tweener>__;
  puVar6 = 
  Method_DG_Tweening_TweenSettingsExtensions_SetLoops<TweenerCore<Vector3,_Vector3,_VectorOptions>>__
  ;
  puVar5 = Method_System_Collections_Generic_List<Allocator2D_Area>_Add__;
  puVar4 = 
  Method_System_Collections_Generic_List<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>_set_Item__
  ;
  puVar3 = PTR_DAT_0631f050;
  puVar2 = PTR_DAT_06312520;
  if (*(long *)(param_1 + 0x130) != 0) {
    System_Array_EmptyInternalEnumerator<RANSACVelocity_TimedPose>__System_Collections_IEnumerator_get_Current
              (&local_d0,*(long *)(param_1 + 0x130),
               *(undefined8 *)Method_DG_Tweening_TweenSettingsExtensions_SetEase<Tweener>__);
    local_70 = local_b0;
    puStack_88 = puStack_c8;
    local_90 = local_d0;
    local_78 = lStack_b8;
    local_80 = uStack_c0;
    local_d0 = 0;
    puStack_c8 = &local_90;
LAB_05d4ef34:
    uVar11 = FUN_047f8b98(&local_90,*(undefined8 *)puVar8);
    uVar13 = local_80;
    if ((uVar11 & 1) != 0) {
      if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar9 = (undefined4)local_80;
      uVar12 = FUN_05d6eca8(local_78,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar11 = FUN_05c8c45c(uVar12,param_1,0);
      if ((uVar11 & 1) != 0) {
        if (lVar10 != 0) {
          lVar14 = *(long *)(lVar10 + 0x10);
          lVar15 = *(long *)puVar3;
          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
          if (lVar14 != 0) {
            uVar1 = *(uint *)(lVar10 + 0x18);
            if (uVar1 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar14 + (long)(int)uVar1 * 4 + 0x20) = uVar9;
            }
            else {
              FUN_038597b0(lVar10,uVar13 & 0xffffffff,
                           *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_05d4ef34;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      goto LAB_05d4ef34;
    }
    FUN_047f8cbc(&local_90,*(undefined8 *)puVar7);
    if (lVar10 != 0) {
      FUN_0385a22c(&local_a8,lVar10,*(undefined8 *)puVar5);
      local_d0 = 0;
      puStack_c8 = &local_a8;
      while( true ) {
        uVar13 = FUN_0474b16c(&local_a8,*(undefined8 *)puVar4);
        if ((uVar13 & 1) == 0) {
          FUN_0474b168(&local_a8,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List<AdditionalLightsShadowAtlasLayout_ShadowResolutionRequest>_set_Capacity__
                      );
          return;
        }
        if (*(long *)(param_1 + 0x130) == 0) break;
        FUN_045e2560(*(long *)(param_1 + 0x130),local_98 & 0xffffffff,*(undefined8 *)puVar6);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


