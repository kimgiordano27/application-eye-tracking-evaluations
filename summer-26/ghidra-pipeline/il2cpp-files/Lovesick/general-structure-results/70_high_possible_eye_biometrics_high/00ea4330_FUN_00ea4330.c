/*
FUNCTION_NAME: FUN_00ea4330
ENTRY_POINT: 00ea4330
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: possible_eye_biometrics_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;active_gaze_retrieval;active_gaze_interaction;possible_biometrics
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;active_gaze_state_retrieval_with_validity_and_pose;active_gaze_values_flow_to_interaction_sink;possible_biometric_feature_from_active_eye_context;negative_known_unity_or_il2cpp_false_positive_family;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x00ea4c44) */
/* WARNING: Removing unreachable block (ram,0x00ea4970) */
/* WARNING: Removing unreachable block (ram,0x00ea4974) */
/* WARNING: Removing unreachable block (ram,0x00ea4880) */
/* WARNING: Removing unreachable block (ram,0x00ea4884) */
/* WARNING: Removing unreachable block (ram,0x00ea4c30) */
/* WARNING: Removing unreachable block (ram,0x00ea45f8) */
/* WARNING: Removing unreachable block (ram,0x00ea45fc) */
/* WARNING: Removing unreachable block (ram,0x00ea4704) */

void FUN_00ea4330(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  long local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  long local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  
  if ((DAT_037750c2 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_9588);
    thunk_FUN_00d48444(
                      Method_System_Threading_ReaderWriterLockSlim_TryEnterUpgradeableReadLockCore__
                      );
    thunk_FUN_00d48444(
                      Method_System_Threading_ThreadPool_UnsafeQueueUserWorkItem<__Il2CppFullySharedGenericType>__
                      );
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_ToList<PlayableDirector>__);
    thunk_FUN_00d48444(Method_RCG_Lovesick_UI_Inventory_HideAnimationComplete__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Stack<TextureId>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<NavMeshLink>__ctor__);
    thunk_FUN_00d48444(ToggledScriptData_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_HashSet_Enumerator<MB3_MeshCombinerSingle_BoneAndBindpose>_MoveNext__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f3ad8);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vaddvq_s8__);
    thunk_FUN_00d48444(Method_OVRFaceExpressions_OnPermissionGranted__);
    thunk_FUN_00d48444(PTR_DAT_033f75b8);
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<XRHumanBodyPose2DJoint>__ctor__);
    DAT_037750c2 = 1;
  }
  uStack_a8 = 0;
  local_a0 = 0;
  local_b0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  local_d0 = 0;
  lVar10 = FUN_0268fd10(param_4,0);
  if (lVar10 == 0) goto LAB_00ea4c2c;
  fVar12 = (float)FUN_0269f578(lVar10,0);
  if (*(long *)(param_4 + 0x28) == 0) goto LAB_00ea4c2c;
  fVar14 = param_2;
  fVar15 = param_3;
  fVar13 = (float)FUN_0269f578(*(long *)(param_4 + 0x28),0);
  if (DAT_03774e1a == '\0') {
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    DAT_03774e1a = '\x01';
  }
  puVar5 = 
  Method_System_Threading_ThreadPool_UnsafeQueueUserWorkItem<__Il2CppFullySharedGenericType>__;
  if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar8 = Method_Unity_Burst_Intrinsics_Arm_Neon_vaddvq_s8__;
  puVar7 = Method_System_Linq_Enumerable_ToList<PlayableDirector>__;
  puVar6 = Method_System_Collections_Generic_Stack<TextureId>__ctor__;
  puVar4 = Method_System_Collections_Generic_List<NavMeshLink>__ctor__;
  puVar3 = 
  Method_System_Collections_Generic_HashSet_Enumerator<MB3_MeshCombinerSingle_BoneAndBindpose>_MoveNext__
  ;
  puVar2 = ToggledScriptData_TypeInfo;
  puVar1 = PTR_DAT_033f3ad8;
  fVar12 = SQRT((param_3 - fVar15) * (param_3 - fVar15) +
                (fVar12 - fVar13) * (fVar12 - fVar13) + (param_2 - fVar14) * (param_2 - fVar14));
  FUN_010db7b0(*(undefined8 *)(param_4 + 0x18),&local_e8,*(undefined8 *)puVar5);
  if (local_e8 == 0) {
LAB_00ea4764:
    puVar5 = Method_System_Threading_ReaderWriterLockSlim_TryEnterUpgradeableReadLockCore__;
    FUN_010d9fe8(*(undefined8 *)(param_4 + 0x18),&local_e8,
                 *(undefined8 *)
                  Method_System_Threading_ReaderWriterLockSlim_TryEnterUpgradeableReadLockCore__);
    if (local_e8 != 0) {
      FUN_010d9fe8(*(undefined8 *)(param_4 + 0x18),&local_e8,*(undefined8 *)puVar5);
      if (local_e8 == 0) goto LAB_00ea4c2c;
      if (fVar12 <= *(float *)(local_e8 + 0x18)) {
        if (*(long *)(param_4 + 0x18) == 0) goto LAB_00ea4c2c;
        FUN_01323390(*(long *)(param_4 + 0x18),&local_e8,*(undefined8 *)puVar1);
        uStack_a8 = uStack_e0;
        local_b0 = local_e8;
        local_a0 = local_d8;
        while (uVar11 = FUN_012b894c(&local_b0,*(undefined8 *)puVar4), (uVar11 & 1) != 0) {
          lVar10 = FUN_00ac77c8(&local_b0,*(undefined8 *)puVar3);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_01323390(*(long *)(lVar10 + 0x10),&local_e8,*(undefined8 *)puVar8);
          uStack_c8 = uStack_e0;
          local_d0 = local_e8;
          local_c0 = local_d8;
          while (uVar11 = FUN_012b894c(&local_d0,*(undefined8 *)puVar6), (uVar11 & 1) != 0) {
            lVar10 = FUN_00ac3018(&local_d0,*(undefined8 *)puVar2);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_0266622c(lVar10,0,0);
          }
          FUN_012b8948(&local_d0,*(undefined8 *)puVar7);
        }
        FUN_012b8948(&local_b0,
                     *(undefined8 *)Method_RCG_Lovesick_UI_Inventory_HideAnimationComplete__);
        FUN_010d9fe8(*(undefined8 *)(param_4 + 0x18),&local_e8,*(undefined8 *)puVar5);
        if ((local_e8 == 0) || (*(long *)(local_e8 + 0x10) == 0)) goto LAB_00ea4c2c;
        if (*(int *)(*(long *)(local_e8 + 0x10) + 0x18) < 1) {
          return;
        }
        FUN_010d9fe8(*(undefined8 *)(param_4 + 0x18),&local_e8,*(undefined8 *)puVar5);
        if ((local_e8 == 0) || (*(long *)(local_e8 + 0x10) == 0)) goto LAB_00ea4c2c;
        FUN_01323390(*(long *)(local_e8 + 0x10),&local_e8,*(undefined8 *)puVar8);
        uStack_c8 = uStack_e0;
        local_d0 = local_e8;
        local_c0 = local_d8;
        while (uVar11 = FUN_012b894c(&local_d0,*(undefined8 *)puVar6), (uVar11 & 1) != 0) {
          lVar10 = FUN_00ac3018(&local_d0,*(undefined8 *)puVar2);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_0266622c(lVar10,1,0);
        }
        goto LAB_00ea4bb4;
      }
    }
    iVar9 = FUN_010d8df8(*(undefined8 *)(param_4 + 0x18),*(undefined8 *)StringLiteral_9588);
    puVar5 = Method_Unity_Collections_NativeArray<XRHumanBodyPose2DJoint>__ctor__;
    if (iVar9 != 0) {
      if (*(long *)(param_4 + 0x18) != 0) {
        FUN_01323390(*(long *)(param_4 + 0x18),&local_e8,*(undefined8 *)puVar1);
        uStack_a8 = uStack_e0;
        local_b0 = local_e8;
        local_a0 = local_d8;
        while (uVar11 = FUN_012b894c(&local_b0,*(undefined8 *)puVar4), (uVar11 & 1) != 0) {
          lVar10 = FUN_00ac77c8(&local_b0,*(undefined8 *)puVar3);
          if (lVar10 != 0) {
            if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00da518c();
            }
            FUN_01323390(*(long *)(lVar10 + 0x10),&local_e8,*(undefined8 *)puVar8);
            uStack_c8 = uStack_e0;
            local_d0 = local_e8;
            local_c0 = local_d8;
            while (uVar11 = FUN_012b894c(&local_d0,*(undefined8 *)puVar6), (uVar11 & 1) != 0) {
              lVar10 = FUN_00ac3018(&local_d0,*(undefined8 *)puVar2);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
              FUN_0266622c(lVar10,0,0);
            }
            FUN_012b8948(&local_d0,*(undefined8 *)puVar7);
          }
        }
        FUN_012b8948(&local_b0,
                     *(undefined8 *)Method_RCG_Lovesick_UI_Inventory_HideAnimationComplete__);
        lVar10 = *(long *)(param_4 + 0x18);
        if (lVar10 != 0) {
          iVar9 = 1;
          do {
            if (*(int *)(lVar10 + 0x18) <= iVar9) {
              return;
            }
            FUN_0132138c(lVar10,iVar9 + -1,&local_e8,*(undefined8 *)puVar5);
            if (local_e8 == 0) break;
            if (*(float *)(local_e8 + 0x18) < fVar12) {
              if ((*(long *)(param_4 + 0x18) == 0) ||
                 (FUN_0132138c(*(long *)(param_4 + 0x18),iVar9,&local_e8,*(undefined8 *)puVar5),
                 local_e8 == 0)) break;
              if (fVar12 <= *(float *)(local_e8 + 0x18)) {
                if (((*(long *)(param_4 + 0x18) == 0) ||
                    (FUN_0132138c(*(long *)(param_4 + 0x18),iVar9,&local_e8,*(undefined8 *)puVar5),
                    local_e8 == 0)) || (*(long *)(local_e8 + 0x10) == 0)) break;
                FUN_01323390(*(long *)(local_e8 + 0x10),&local_e8,*(undefined8 *)puVar8);
                uStack_c8 = uStack_e0;
                local_d0 = local_e8;
                local_c0 = local_d8;
                while (uVar11 = FUN_012b894c(&local_d0,*(undefined8 *)puVar6), (uVar11 & 1) != 0) {
                  lVar10 = FUN_00ac3018(&local_d0,*(undefined8 *)puVar2);
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00da518c();
                  }
                  FUN_0266622c(lVar10,1,0);
                }
                FUN_012b8948(&local_d0,*(undefined8 *)puVar7);
              }
            }
            lVar10 = *(long *)(param_4 + 0x18);
            iVar9 = iVar9 + 1;
          } while (lVar10 != 0);
        }
      }
LAB_00ea4c2c:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
  }
  else {
    FUN_010db7b0(*(undefined8 *)(param_4 + 0x18),&local_e8,*(undefined8 *)puVar5);
    if (local_e8 == 0) goto LAB_00ea4c2c;
    if (fVar12 <= *(float *)(local_e8 + 0x18)) goto LAB_00ea4764;
    if (*(long *)(param_4 + 0x18) == 0) goto LAB_00ea4c2c;
    FUN_01323390(*(long *)(param_4 + 0x18),&local_e8,*(undefined8 *)puVar1);
    uStack_a8 = uStack_e0;
    local_b0 = local_e8;
    local_a0 = local_d8;
    while (uVar11 = FUN_012b894c(&local_b0,*(undefined8 *)puVar4), (uVar11 & 1) != 0) {
      lVar10 = FUN_00ac77c8(&local_b0,*(undefined8 *)puVar3);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_01323390(*(long *)(lVar10 + 0x10),&local_e8,*(undefined8 *)puVar8);
      uStack_c8 = uStack_e0;
      local_d0 = local_e8;
      local_c0 = local_d8;
      while (uVar11 = FUN_012b894c(&local_d0,*(undefined8 *)puVar6), (uVar11 & 1) != 0) {
        lVar10 = FUN_00ac3018(&local_d0,*(undefined8 *)puVar2);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        FUN_0266622c(lVar10,0,0);
      }
      FUN_012b8948(&local_d0,*(undefined8 *)puVar7);
    }
    FUN_012b8948(&local_b0,*(undefined8 *)Method_RCG_Lovesick_UI_Inventory_HideAnimationComplete__);
    if (*(char *)(param_4 + 0x20) != '\0') {
      return;
    }
    FUN_010db7b0(*(undefined8 *)(param_4 + 0x18),&local_e8,*(undefined8 *)puVar5);
    if ((local_e8 == 0) || (*(long *)(local_e8 + 0x10) == 0)) goto LAB_00ea4c2c;
    if (*(int *)(*(long *)(local_e8 + 0x10) + 0x18) < 1) {
      return;
    }
    FUN_010db7b0(*(undefined8 *)(param_4 + 0x18),&local_e8,*(undefined8 *)puVar5);
    if ((local_e8 == 0) || (*(long *)(local_e8 + 0x10) == 0)) goto LAB_00ea4c2c;
    FUN_01323390(*(long *)(local_e8 + 0x10),&local_e8,*(undefined8 *)puVar8);
    uStack_c8 = uStack_e0;
    local_d0 = local_e8;
    local_c0 = local_d8;
    while (uVar11 = FUN_012b894c(&local_d0,*(undefined8 *)puVar6), (uVar11 & 1) != 0) {
      lVar10 = FUN_00ac3018(&local_d0,*(undefined8 *)puVar2);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0266622c(lVar10,1,0);
    }
LAB_00ea4bb4:
    FUN_012b8948(&local_d0,*(undefined8 *)puVar7);
  }
  return;
}


