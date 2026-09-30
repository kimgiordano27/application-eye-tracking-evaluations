/*
FUNCTION_NAME: FUN_05e7fb7c
ENTRY_POINT: 05e7fb7c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_20;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_3;ray_or_cast_sink_hits_1;telemetry_or_network_hits_10;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


void FUN_05e7fb7c(long param_1,long param_2,undefined4 param_3,ulong param_4,undefined8 *param_5,
                 undefined8 *param_6,undefined2 *param_7,undefined8 *param_8,undefined1 param_9)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  ulong local_1d0;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  ulong uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  int local_180;
  undefined4 uStack_17c;
  long lStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  ulong local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  byte local_68;
  
  puVar6 = PTR_DAT_06312d90;
  param_4 = param_4 & 0xffffffff;
  if ((DAT_066dc73a & 1) == 0) {
    FUN_02b3c81c(
                Method_RootMotion_FinalIK_OffsetModifierVRIK_<Initiate>d__7_System_Collections_IEnumerator_Reset__
                );
    FUN_02b3c81c(Method_Internal_Cryptography_OidLookup_<>c_<_cctor>b__10_0__);
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(Method_System_Collections_Queue_QueueEnumerator_MoveNext__);
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
    FUN_02b3c81c(Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_2__);
    FUN_02b3c81c(Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_3__);
    DAT_066dc73a = 1;
  }
  local_190 = 0;
  local_1d0 = 0;
  _local_180 = CONCAT44(*(undefined4 *)(param_1 + 0x68),*(int *)(param_1 + 0x6c));
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
  uStack_1e8 = 0;
  local_1f0 = 0;
  local_1d8 = 0;
  local_1e0 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  local_150 = 0;
  local_138 = 0;
  uStack_140 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  lStack_178 = param_2;
  thunk_FUN_02bb0e9c((ulong)&local_180 | 8,param_2);
  local_138 = CONCAT71(local_138._1_7_,param_9) & 0xffffffffffffff01;
  memcpy(param_8,&local_180,0x50);
  thunk_FUN_02bb0e9c(param_8 + 1,0);
  iVar1 = *(int *)(param_1 + 0x6c);
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_05c45700(iVar1 != 0,0);
  puVar12 = (undefined8 *)
            Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_1__;
  if (param_2 == 0) goto LAB_05e802bc;
  iVar1 = *(int *)(param_2 + 0x5c);
  if (iVar1 == 0) {
    uVar13 = *(undefined8 *)(param_2 + 0x20);
    uVar8 = *(undefined8 *)(param_2 + 0x18);
    param_8[4] = *(undefined8 *)(param_2 + 0x28);
    param_8[3] = uVar13;
    param_8[2] = uVar8;
    thunk_FUN_02bb0e9c(param_8 + 3,0);
    uVar13 = *(undefined8 *)(param_2 + 0x38);
    uVar8 = *(undefined8 *)(param_2 + 0x30);
    param_8[7] = *(undefined8 *)(param_2 + 0x40);
    param_8[6] = uVar13;
    param_8[5] = uVar8;
    thunk_FUN_02bb0e9c(param_8 + 6,0);
    param_8[8] = *(undefined8 *)(param_2 + 0x50);
    uVar8 = thunk_FUN_02bb0e9c();
  }
  else {
    lVar7 = *(long *)(param_1 + 0x40);
    if (lVar7 == 0) goto LAB_05e802bc;
    iVar2 = *(int *)(lVar7 + 0x18);
    iVar4 = 0;
    if (iVar2 != 0) {
      iVar4 = *(int *)(param_2 + 0x58) / iVar2;
    }
    lVar7 = FUN_037a6268(lVar7,*(int *)(param_2 + 0x58) - iVar4 * iVar2,
                         *(undefined8 *)
                          Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_1__
                        );
    if (lVar7 == 0) goto LAB_05e802bc;
    iVar1 = iVar1 + -1;
    FUN_0397f8ec(&local_b0,lVar7,iVar1,
                 *(undefined8 *)
                  Method_Platinio_TweenEngine_PlatinioTween_<>c__DisplayClass45_0_<SetFloatProperty>b__0__
                );
    iVar2 = *(int *)(param_2 + 0x5c);
    uStack_1b8 = uStack_a0;
    local_1c0 = uStack_a8;
    uStack_1a8 = uStack_90;
    local_1b0 = local_98;
    uStack_198 = uStack_80;
    local_1a0 = local_88;
    local_190 = local_78;
    if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05c45700((int)local_b0 == iVar2,0);
    uStack_f8 = uStack_1b8;
    local_100 = local_1c0;
    local_e8 = uStack_1a8;
    uStack_f0 = local_1b0;
    local_d0 = local_190;
    uStack_d8 = uStack_198;
    local_e0 = local_1a0;
    *(byte *)(param_8 + 9) = *(byte *)(param_8 + 9) | local_68 & 1;
    param_8[3] = local_1b0;
    param_8[2] = uStack_1b8;
    param_8[4] = uStack_1a8;
    thunk_FUN_02bb0e9c(param_8 + 3,0);
    param_8[6] = uStack_198;
    param_8[5] = local_1a0;
    param_8[7] = local_190;
    thunk_FUN_02bb0e9c(param_8 + 6,0);
    param_8[8] = local_70;
    thunk_FUN_02bb0e9c(param_8 + 8,local_70);
    uStack_a0 = uStack_1b8;
    uStack_a8 = local_1c0;
    uStack_90 = uStack_1a8;
    local_98 = local_1b0;
    uStack_80 = uStack_198;
    local_88 = local_1a0;
    local_b0 = CONCAT44(0xffffffff,(int)local_b0);
    local_78 = local_190;
    FUN_0397f950(lVar7,iVar1,&local_b0,
                 *(undefined8 *)
                  Method_Platinio_TweenEngine_PlatinioTween_<>c__DisplayClass51_0_<Fade>b__0__);
    lVar7 = *(long *)(param_1 + 0x38);
    if (lVar7 == 0) goto LAB_05e802bc;
    uVar3 = *(uint *)(lVar7 + 0x18);
    uVar5 = 0;
    if (uVar3 != 0) {
      uVar5 = *(uint *)(param_1 + 0x68) / uVar3;
    }
    lVar7 = FUN_037a6268(lVar7,*(uint *)(param_1 + 0x68) - uVar5 * uVar3,
                         *(undefined8 *)
                          Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_0__
                        );
    uStack_1e8 = *(undefined8 *)(param_2 + 0x20);
    local_1f0 = *(undefined8 *)(param_2 + 0x18);
    local_1e0 = *(undefined8 *)(param_2 + 0x28);
    local_1d8 = 0;
    local_1d0 = 0;
    thunk_FUN_02bb0e9c((ulong)&local_1f0 | 8,0);
    local_1d8 = *(undefined8 *)(param_2 + 0x50);
    thunk_FUN_02bb0e9c(&local_1d8);
    puVar12 = (undefined8 *)
              Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_1__;
    puVar6 = Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateVector2>b__16_1__;
    local_1d0 = CONCAT71(local_1d0._1_7_,1);
    if (lVar7 == 0) goto LAB_05e802bc;
    lVar10 = *(long *)(lVar7 + 0x10);
    lVar11 = *(long *)Method_Oculus_Interaction_Input_OneEuroFilter_<>c_<CreateVector2>b__16_1__;
    uStack_128 = uStack_1e8;
    local_130 = local_1f0;
    uStack_118 = local_1d8;
    uStack_120 = local_1e0;
    local_110 = local_1d0;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar10 == 0) goto LAB_05e802bc;
    uVar3 = *(uint *)(lVar7 + 0x18);
    if (uVar3 < *(uint *)(lVar10 + 0x18)) {
      lVar10 = lVar10 + (long)(int)uVar3 * 0x28;
      *(uint *)(lVar7 + 0x18) = uVar3 + 1;
      *(undefined8 *)(lVar10 + 0x28) = uStack_1e8;
      *(undefined8 *)(lVar10 + 0x20) = local_1f0;
      *(undefined8 *)(lVar10 + 0x38) = local_1d8;
      *(undefined8 *)(lVar10 + 0x30) = local_1e0;
      *(ulong *)(lVar10 + 0x40) = local_1d0;
      thunk_FUN_02bb0e9c(lVar10 + 0x28,0);
    }
    else {
      uStack_a8 = uStack_1e8;
      local_b0 = local_1f0;
      local_98 = local_1d8;
      uStack_a0 = local_1e0;
      uStack_90 = local_1d0;
      FUN_0397cecc(lVar7,&local_b0,
                   *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    }
    uStack_1e8 = *(undefined8 *)(param_2 + 0x38);
    local_1f0 = *(undefined8 *)(param_2 + 0x30);
    local_1e0 = *(undefined8 *)(param_2 + 0x40);
    local_1d8 = 0;
    local_1d0 = 0;
    thunk_FUN_02bb0e9c((ulong)&local_1f0 | 8,0);
    local_1d8 = *(undefined8 *)(param_2 + 0x50);
    thunk_FUN_02bb0e9c(&local_1d8);
    local_1d0 = local_1d0 & 0xffffffffffffff00;
    lVar10 = *(long *)(lVar7 + 0x10);
    lVar11 = *(long *)puVar6;
    uStack_128 = uStack_1e8;
    local_130 = local_1f0;
    uStack_118 = local_1d8;
    uStack_120 = local_1e0;
    local_110 = local_1d0;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar10 == 0) goto LAB_05e802bc;
    uVar3 = *(uint *)(lVar7 + 0x18);
    if (uVar3 < *(uint *)(lVar10 + 0x18)) {
      lVar10 = lVar10 + (long)(int)uVar3 * 0x28;
      *(uint *)(lVar7 + 0x18) = uVar3 + 1;
      *(undefined8 *)(lVar10 + 0x28) = uStack_1e8;
      *(undefined8 *)(lVar10 + 0x20) = local_1f0;
      *(undefined8 *)(lVar10 + 0x38) = local_1d8;
      *(undefined8 *)(lVar10 + 0x30) = local_1e0;
      *(ulong *)(lVar10 + 0x40) = local_1d0;
      uVar8 = thunk_FUN_02bb0e9c(lVar10 + 0x28,0);
    }
    else {
      uStack_a8 = uStack_1e8;
      local_b0 = local_1f0;
      local_98 = local_1d8;
      uStack_a0 = local_1e0;
      uStack_90 = local_1d0;
      uVar8 = FUN_0397cecc(lVar7,&local_b0,
                           *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    }
  }
  uVar9 = FUN_05e805f8(uVar8,*(undefined8 *)(param_2 + 0x50),param_3,param_4,param_2 + 0x18,
                       param_2 + 0x30,1);
  if ((uVar9 & 1) == 0) {
    FUN_05e7f498(param_1,param_2,param_3,param_4,param_5,param_6,1);
  }
  else {
    if ((*(long *)(param_2 + 0x50) == 0) ||
       (lVar7 = *(long *)(*(long *)(param_2 + 0x50) + 0x18), lVar7 == 0)) goto LAB_05e802bc;
    FUN_04331084(lVar7,*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
                 *(undefined8 *)
                  Method_RootMotion_FinalIK_OffsetModifierVRIK_<Initiate>d__7_System_Collections_IEnumerator_Reset__
                );
    if ((*(long *)(param_2 + 0x50) == 0) ||
       (lVar7 = *(long *)(*(long *)(param_2 + 0x50) + 0x20), lVar7 == 0)) goto LAB_05e802bc;
    FUN_04330908(lVar7,*(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34),
                 *(undefined8 *)Method_Internal_Cryptography_OidLookup_<>c_<_cctor>b__10_0__);
  }
  *(int *)(param_2 + 0x48) = (int)(param_4 / 3);
  uVar8 = NEON_rev64(*param_8,4);
  *(undefined8 *)(param_2 + 0x58) = uVar8;
  lVar7 = *(long *)(param_1 + 0x40);
  if (lVar7 != 0) {
    iVar1 = *(int *)(lVar7 + 0x18);
    iVar2 = 0;
    if ((long)iVar1 != 0) {
      iVar2 = (int)((long)(ulong)*(uint *)(param_1 + 0x68) / (long)iVar1);
    }
    lVar7 = FUN_037a6268(lVar7,*(uint *)(param_1 + 0x68) - iVar2 * iVar1,*puVar12);
    puVar6 = Method_System_Collections_Queue_QueueEnumerator_MoveNext__;
    if (lVar7 != 0) {
      memcpy(&local_100,param_8,0x50);
      lVar10 = *(long *)(lVar7 + 0x10);
      lVar11 = *(long *)puVar6;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar10 != 0) {
        uVar3 = *(uint *)(lVar7 + 0x18);
        if (uVar3 < *(uint *)(lVar10 + 0x18)) {
          lVar10 = lVar10 + (long)(int)uVar3 * 0x50;
          *(uint *)(lVar7 + 0x18) = uVar3 + 1;
          memcpy((void *)(lVar10 + 0x20),&local_100,0x50);
          thunk_FUN_02bb0e9c(lVar10 + 0x28,0);
        }
        else {
          uVar8 = *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70);
          memcpy(&local_b0,&local_100,0x50);
          FUN_0397fc7c(lVar7,&local_b0,uVar8);
        }
        if ((*(long *)(param_2 + 0x50) != 0) &&
           (lVar7 = *(long *)(*(long *)(param_2 + 0x50) + 0x18), lVar7 != 0)) {
          local_b0 = 0;
          uStack_a8 = 0;
          FUN_03ac7494(&local_b0,*(undefined8 *)(lVar7 + 0x20),*(undefined8 *)(lVar7 + 0x28),
                       *(undefined4 *)(param_2 + 0x18),param_3,
                       *(undefined8 *)
                        Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_2__
                      );
          param_5[1] = uStack_a8;
          *param_5 = local_b0;
          if ((*(long *)(param_2 + 0x50) != 0) &&
             (lVar7 = *(long *)(*(long *)(param_2 + 0x50) + 0x20), lVar7 != 0)) {
            local_100 = 0;
            uStack_f8 = 0;
            FUN_03ac6f14(&local_100,*(undefined8 *)(lVar7 + 0x20),*(undefined8 *)(lVar7 + 0x28),
                         *(undefined4 *)(param_2 + 0x30),param_4,
                         *(undefined8 *)
                          Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__9_3__
                        );
            param_6[1] = uStack_f8;
            *param_6 = local_100;
            *param_7 = (short)*(undefined4 *)(param_2 + 0x18);
            return;
          }
        }
      }
    }
  }
LAB_05e802bc:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


