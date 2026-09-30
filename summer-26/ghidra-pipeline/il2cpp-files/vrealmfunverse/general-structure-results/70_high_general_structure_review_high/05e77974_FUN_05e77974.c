/*
FUNCTION_NAME: FUN_05e77974
ENTRY_POINT: 05e77974
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_1;telemetry_or_network_hits_5;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05e77974(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  ulong local_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong local_1b0;
  ulong uStack_1a8;
  ulong local_1a0;
  ulong local_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong local_178;
  ulong local_170;
  ulong uStack_168;
  ulong local_160;
  ulong local_150;
  ulong uStack_148;
  ulong local_140;
  ulong local_138;
  ulong local_130;
  ulong local_120;
  ulong uStack_118;
  ulong local_110;
  ulong uStack_108;
  ulong local_100;
  ulong uStack_f8;
  ulong local_f0;
  ulong local_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong local_c0;
  undefined8 local_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong local_98;
  ulong uStack_90;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  ulong uStack_70;
  
  if ((DAT_066dc73b & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(Method_Platinio_TweenEngine_PlatinioTween_<>c__DisplayClass42_0_<Fade>b__0__);
    FUN_02b3c81c(Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateVector2>b__16_1__);
    FUN_02b3c81c(Method_Platinio_TweenEngine_PlatinioTween_<>c__DisplayClass44_0_<Fade>b__0__);
    FUN_02b3c81c(
                Method_Oculus_Interaction_OneGrabPhysicsJointTransformer_<>c_<GetGrabRigidbody>b__20_0__
                );
    FUN_02b3c81c(Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_0__);
    FUN_02b3c81c(Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_1__);
    FUN_02b3c81c(
                Method_Platinio_TweenEngine_PlatinioTween_<>c__DisplayClass45_0_<SetFloatProperty>b__0__
                );
    FUN_02b3c81c(Method_Platinio_TweenEngine_PlatinioTween_<>c__DisplayClass51_0_<Fade>b__0__);
    DAT_066dc73b = 1;
  }
  puVar9 = Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_0__;
  puVar8 = Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateVector2>b__16_1__;
  local_f0 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_148 = 0;
  local_150 = 0;
  local_138 = 0;
  local_140 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  if (param_2 == 0) goto LAB_05e7817c;
  iVar1 = *(int *)(param_2 + 0x5c);
  if (iVar1 == 0) {
    uVar3 = *(uint *)(param_1 + 0x68);
    if (*(uint *)(param_2 + 0x58) == uVar3) {
      if (((*(long *)(param_2 + 0x50) == 0) ||
          (lVar10 = *(long *)(*(long *)(param_2 + 0x50) + 0x18), lVar10 == 0)) ||
         (lVar10 = *(long *)(lVar10 + 0x40), lVar10 == 0)) goto LAB_05e7817c;
      uStack_1e8 = *(undefined8 *)(param_2 + 0x20);
      local_1f0 = *(undefined8 *)(param_2 + 0x18);
      local_1e0 = *(undefined8 *)(param_2 + 0x28);
      UnityEngine_UI_MaskUtilities__IsDescendantOrSelf(lVar10,&local_1f0,0);
      if (((*(long *)(param_2 + 0x50) == 0) ||
          (lVar10 = *(long *)(*(long *)(param_2 + 0x50) + 0x20), lVar10 == 0)) ||
         (lVar10 = *(long *)(lVar10 + 0x40), lVar10 == 0)) goto LAB_05e7817c;
      uStack_208 = *(undefined8 *)(param_2 + 0x38);
      local_210 = *(undefined8 *)(param_2 + 0x30);
      local_200 = *(undefined8 *)(param_2 + 0x40);
      UnityEngine_UI_MaskUtilities__IsDescendantOrSelf(lVar10,&local_210,0);
    }
    else {
      lVar10 = *(long *)(param_1 + 0x38);
      if (lVar10 == 0) goto LAB_05e7817c;
      uVar5 = *(uint *)(lVar10 + 0x18);
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = uVar3 / uVar5;
      }
      iVar1 = uVar3 - uVar6 * uVar5;
      lVar10 = FUN_037a6268(lVar10,iVar1,
                            *(undefined8 *)
                             Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_0__
                           );
      uStack_148 = *(ulong *)(param_2 + 0x20);
      local_150 = *(ulong *)(param_2 + 0x18);
      local_140 = *(ulong *)(param_2 + 0x28);
      local_138 = 0;
      local_130 = 0;
      thunk_FUN_02bb0e9c((ulong)&local_150 | 8,0);
      local_138 = *(ulong *)(param_2 + 0x50);
      thunk_FUN_02bb0e9c(&local_138);
      local_130 = CONCAT71(local_130._1_7_,1);
      if (lVar10 == 0) goto LAB_05e7817c;
      lVar11 = *(long *)(lVar10 + 0x10);
      lVar12 = *(long *)puVar8;
      uStack_188 = uStack_148;
      local_190 = local_150;
      local_178 = local_138;
      uStack_180 = local_140;
      local_170 = local_130;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar11 == 0) goto LAB_05e7817c;
      uVar3 = *(uint *)(lVar10 + 0x18);
      if (uVar3 < *(uint *)(lVar11 + 0x18)) {
        lVar11 = lVar11 + (long)(int)uVar3 * 0x28;
        *(uint *)(lVar10 + 0x18) = uVar3 + 1;
        *(ulong *)(lVar11 + 0x28) = uStack_148;
        *(ulong *)(lVar11 + 0x20) = local_150;
        *(ulong *)(lVar11 + 0x38) = local_138;
        *(ulong *)(lVar11 + 0x30) = local_140;
        *(ulong *)(lVar11 + 0x40) = local_130;
        thunk_FUN_02bb0e9c(lVar11 + 0x28,0);
      }
      else {
        uStack_a8 = uStack_148;
        local_b0 = local_150;
        local_98 = local_138;
        uStack_a0 = local_140;
        uStack_90 = local_130;
        FUN_0397cecc(lVar10,&local_b0,
                     *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      }
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_05e7817c;
      lVar10 = FUN_037a6268(*(long *)(param_1 + 0x38),iVar1,*(undefined8 *)puVar9);
      uStack_148 = *(ulong *)(param_2 + 0x38);
      local_150 = *(ulong *)(param_2 + 0x30);
      local_140 = *(ulong *)(param_2 + 0x40);
      local_138 = 0;
      local_130 = 0;
      thunk_FUN_02bb0e9c((ulong)&local_150 | 8,0);
      local_138 = *(ulong *)(param_2 + 0x50);
      thunk_FUN_02bb0e9c(&local_138);
      local_130 = local_130 & 0xffffffffffffff00;
      if (lVar10 == 0) goto LAB_05e7817c;
      lVar11 = *(long *)(lVar10 + 0x10);
      lVar12 = *(long *)puVar8;
      uStack_188 = uStack_148;
      local_190 = local_150;
      local_178 = local_138;
      uStack_180 = local_140;
      local_170 = local_130;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (lVar11 == 0) goto LAB_05e7817c;
      uVar3 = *(uint *)(lVar10 + 0x18);
      if (uVar3 < *(uint *)(lVar11 + 0x18)) {
        lVar11 = lVar11 + (long)(int)uVar3 * 0x28;
        *(uint *)(lVar10 + 0x18) = uVar3 + 1;
        *(ulong *)(lVar11 + 0x28) = uStack_148;
        *(ulong *)(lVar11 + 0x20) = local_150;
        *(ulong *)(lVar11 + 0x38) = local_138;
        *(ulong *)(lVar11 + 0x30) = local_140;
        *(ulong *)(lVar11 + 0x40) = local_130;
        thunk_FUN_02bb0e9c(lVar11 + 0x28,0);
      }
      else {
        uStack_a8 = uStack_148;
        local_b0 = local_150;
        local_98 = local_138;
        uStack_a0 = local_140;
        uStack_90 = local_130;
        FUN_0397cecc(lVar10,&local_b0,
                     *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
  else {
    lVar10 = *(long *)(param_1 + 0x40);
    if (lVar10 == 0) goto LAB_05e7817c;
    iVar2 = *(int *)(lVar10 + 0x18);
    iVar4 = 0;
    if (iVar2 != 0) {
      iVar4 = *(int *)(param_2 + 0x58) / iVar2;
    }
    lVar10 = FUN_037a6268(lVar10,*(int *)(param_2 + 0x58) - iVar4 * iVar2,
                          *(undefined8 *)
                           Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_1__
                         );
    puVar7 = PTR_DAT_06312d90;
    if (lVar10 == 0) goto LAB_05e7817c;
    iVar1 = iVar1 + -1;
    FUN_0397f8ec(&local_b0,lVar10,iVar1,
                 *(undefined8 *)
                  Method_Platinio_TweenEngine_PlatinioTween_<>c__DisplayClass45_0_<SetFloatProperty>b__0__
                );
    iVar4 = (int)local_b0;
    iVar2 = *(int *)(param_2 + 0x5c);
    uStack_118 = uStack_a0;
    local_120 = uStack_a8;
    uStack_108 = uStack_90;
    local_110 = local_98;
    uStack_f8 = uStack_80;
    local_100 = local_88;
    local_f0 = local_78;
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05c45700(iVar4 == iVar2,0);
    lVar11 = *(long *)(param_1 + 0x38);
    if (lVar11 == 0) goto LAB_05e7817c;
    uVar3 = *(uint *)(lVar11 + 0x18);
    uVar5 = 0;
    if (uVar3 != 0) {
      uVar5 = *(uint *)(param_1 + 0x68) / uVar3;
    }
    lVar11 = FUN_037a6268(lVar11,*(uint *)(param_1 + 0x68) - uVar5 * uVar3,*(undefined8 *)puVar9);
    local_138 = 0;
    local_130 = 0;
    uStack_188 = uStack_118;
    local_190 = local_120;
    local_178 = uStack_108;
    uStack_180 = local_110;
    uStack_168 = uStack_f8;
    local_170 = local_100;
    local_160 = local_f0;
    local_140 = uStack_108;
    uStack_148 = local_110;
    local_150 = uStack_118;
    thunk_FUN_02bb0e9c((ulong)&local_150 | 8,0);
    local_138 = uStack_70;
    thunk_FUN_02bb0e9c(&local_138,uStack_70);
    local_130 = CONCAT71(local_130._1_7_,1);
    if (lVar11 == 0) goto LAB_05e7817c;
    lVar12 = *(long *)(lVar11 + 0x10);
    lVar13 = *(long *)puVar8;
    uStack_1c8 = uStack_148;
    local_1d0 = local_150;
    uStack_1b8 = local_138;
    uStack_1c0 = local_140;
    local_1b0 = local_130;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_05e7817c;
    uVar3 = *(uint *)(lVar11 + 0x18);
    if (uVar3 < *(uint *)(lVar12 + 0x18)) {
      lVar12 = lVar12 + (long)(int)uVar3 * 0x28;
      *(uint *)(lVar11 + 0x18) = uVar3 + 1;
      *(ulong *)(lVar12 + 0x28) = uStack_148;
      *(ulong *)(lVar12 + 0x20) = local_150;
      *(ulong *)(lVar12 + 0x38) = local_138;
      *(ulong *)(lVar12 + 0x30) = local_140;
      *(ulong *)(lVar12 + 0x40) = local_130;
      thunk_FUN_02bb0e9c(lVar12 + 0x28,0);
    }
    else {
      uStack_a8 = uStack_148;
      local_b0 = local_150;
      local_98 = local_138;
      uStack_a0 = local_140;
      uStack_90 = local_130;
      FUN_0397cecc(lVar11,&local_b0,
                   *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
    local_138 = 0;
    local_130 = 0;
    uStack_1c8 = uStack_118;
    local_1d0 = local_120;
    uStack_1b8 = uStack_108;
    uStack_1c0 = local_110;
    uStack_1a8 = uStack_f8;
    local_1b0 = local_100;
    local_1a0 = local_f0;
    uStack_148 = uStack_f8;
    local_150 = local_100;
    local_140 = local_f0;
    thunk_FUN_02bb0e9c((ulong)&local_150 | 8,0);
    local_138 = uStack_70;
    thunk_FUN_02bb0e9c(&local_138,uStack_70);
    local_130 = local_130 & 0xffffffffffffff00;
    lVar12 = *(long *)(lVar11 + 0x10);
    lVar13 = *(long *)puVar8;
    uStack_d8 = uStack_148;
    local_e0 = local_150;
    uStack_c8 = local_138;
    uStack_d0 = local_140;
    local_c0 = local_130;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_05e7817c;
    uVar3 = *(uint *)(lVar11 + 0x18);
    if (uVar3 < *(uint *)(lVar12 + 0x18)) {
      lVar12 = lVar12 + (long)(int)uVar3 * 0x28;
      *(uint *)(lVar11 + 0x18) = uVar3 + 1;
      *(ulong *)(lVar12 + 0x28) = uStack_148;
      *(ulong *)(lVar12 + 0x20) = local_150;
      *(ulong *)(lVar12 + 0x38) = local_138;
      *(ulong *)(lVar12 + 0x30) = local_140;
      *(ulong *)(lVar12 + 0x40) = local_130;
      thunk_FUN_02bb0e9c(lVar12 + 0x28,0);
    }
    else {
      uStack_a8 = uStack_148;
      local_b0 = local_150;
      local_98 = local_138;
      uStack_a0 = local_140;
      uStack_90 = local_130;
      FUN_0397cecc(lVar11,&local_b0,
                   *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
    uStack_148 = *(ulong *)(param_2 + 0x20);
    local_150 = *(ulong *)(param_2 + 0x18);
    local_140 = *(ulong *)(param_2 + 0x28);
    local_138 = 0;
    local_130 = 0;
    thunk_FUN_02bb0e9c((ulong)&local_150 | 8,0);
    local_138 = *(ulong *)(param_2 + 0x50);
    thunk_FUN_02bb0e9c(&local_138);
    local_130 = CONCAT71(local_130._1_7_,1);
    lVar12 = *(long *)(lVar11 + 0x10);
    uStack_d8 = uStack_148;
    local_e0 = local_150;
    uStack_c8 = local_138;
    uStack_d0 = local_140;
    local_c0 = local_130;
    lVar13 = *(long *)puVar8;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_05e7817c;
    uVar3 = *(uint *)(lVar11 + 0x18);
    if (uVar3 < *(uint *)(lVar12 + 0x18)) {
      lVar12 = lVar12 + (long)(int)uVar3 * 0x28;
      *(uint *)(lVar11 + 0x18) = uVar3 + 1;
      *(ulong *)(lVar12 + 0x28) = uStack_148;
      *(ulong *)(lVar12 + 0x20) = local_150;
      *(ulong *)(lVar12 + 0x38) = local_138;
      *(ulong *)(lVar12 + 0x30) = local_140;
      *(ulong *)(lVar12 + 0x40) = local_130;
      thunk_FUN_02bb0e9c(lVar12 + 0x28,0);
    }
    else {
      uStack_a8 = uStack_148;
      local_b0 = local_150;
      local_98 = local_138;
      uStack_a0 = local_140;
      uStack_90 = local_130;
      FUN_0397cecc(lVar11,&local_b0,
                   *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
    uStack_148 = *(ulong *)(param_2 + 0x38);
    local_150 = *(ulong *)(param_2 + 0x30);
    local_140 = *(ulong *)(param_2 + 0x40);
    local_138 = 0;
    local_130 = 0;
    thunk_FUN_02bb0e9c((ulong)&local_150 | 8,0);
    local_138 = *(ulong *)(param_2 + 0x50);
    thunk_FUN_02bb0e9c(&local_138);
    local_130 = local_130 & 0xffffffffffffff00;
    lVar12 = *(long *)(lVar11 + 0x10);
    local_c0 = local_130;
    lVar13 = *(long *)puVar8;
    uStack_d8 = uStack_148;
    local_e0 = local_150;
    uStack_c8 = local_138;
    uStack_d0 = local_140;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    puVar8 = Method_Platinio_TweenEngine_PlatinioTween_<>c__DisplayClass51_0_<Fade>b__0__;
    if (lVar12 == 0) goto LAB_05e7817c;
    uVar3 = *(uint *)(lVar11 + 0x18);
    if (uVar3 < *(uint *)(lVar12 + 0x18)) {
      lVar12 = lVar12 + (long)(int)uVar3 * 0x28;
      *(uint *)(lVar11 + 0x18) = uVar3 + 1;
      *(ulong *)(lVar12 + 0x28) = uStack_148;
      *(ulong *)(lVar12 + 0x20) = local_150;
      *(ulong *)(lVar12 + 0x38) = local_138;
      *(ulong *)(lVar12 + 0x30) = local_140;
      *(ulong *)(lVar12 + 0x40) = local_130;
      thunk_FUN_02bb0e9c(lVar12 + 0x28,0);
    }
    else {
      uStack_a8 = uStack_148;
      local_b0 = local_150;
      local_98 = local_138;
      uStack_a0 = local_140;
      uStack_90 = local_130;
      FUN_0397cecc(lVar11,&local_b0,
                   *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
    uStack_a0 = uStack_118;
    uStack_a8 = local_120;
    uStack_90 = uStack_108;
    local_98 = local_110;
    uStack_80 = uStack_f8;
    local_88 = local_100;
    local_b0 = CONCAT44(0xffffffff,iVar4);
    local_78 = local_f0;
    FUN_0397f950(lVar10,iVar1,&local_b0,*(undefined8 *)puVar8);
  }
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  thunk_FUN_02bb0e9c((undefined8 *)(param_2 + 0x50),0);
  *(undefined4 *)(param_2 + 0x5c) = 0;
  if (*(long *)(param_1 + 0xa0) != 0) {
    FUN_036309cc(*(long *)(param_1 + 0xa0),param_2,
                 *(undefined8 *)
                  Method_Platinio_TweenEngine_PlatinioTween_<>c__DisplayClass42_0_<Fade>b__0__);
    return;
  }
LAB_05e7817c:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


