/*
FUNCTION_NAME: FUN_02365cf8
ENTRY_POINT: 02365cf8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_5;functionality_eye_api_context_without_clear_sink_hits_3
*/


long * FUN_02365cf8(float param_1,ulong param_2,ulong param_3,long param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  uint uVar25;
  undefined4 *puVar26;
  ulong uVar27;
  long lVar28;
  undefined8 *puVar29;
  float fVar30;
  ulong uVar31;
  float fVar32;
  float fVar33;
  int local_170;
  int local_114;
  undefined8 local_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  long local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if ((DAT_03781d7a & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
    thunk_FUN_00d48444(StringLiteral_6798);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<ValueTuple<Type,_int>,_Stack<object>>_TryGetValue__
                      );
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vaba_s8__);
    thunk_FUN_00d48444(Method_SaveData_<>c__DisplayClass127_0_<AddCharacterManagerData>b__1__);
    thunk_FUN_00d48444(Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
    thunk_FUN_00d48444(
                      System_Func<ShowPromptWhenTeleportPadsUsed_TeleportTransformCombo,_bool>_TypeInfo
                      );
    thunk_FUN_00d48444(PTR_DAT_033f5aa8);
    thunk_FUN_00d48444(System_Threading_Tasks_Task<int>_TypeInfo);
    thunk_FUN_00d48444(Method_Oculus_Platform_Packet_ReadBytes__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_StyleDataRef<TransitionData>_CopyFrom__);
    thunk_FUN_00d48444(PTR_DAT_033ecab8);
    thunk_FUN_00d48444(Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__);
    thunk_FUN_00d48444(PTR_DAT_033f1058);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__);
    thunk_FUN_00d48444(OVRManager_XrApi_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_9754);
    thunk_FUN_00d48444(PTR_DAT_033ef0a8);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                      );
    thunk_FUN_00d48444(Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f0e40);
    thunk_FUN_00d48444(PTR_DAT_033f7248);
    thunk_FUN_00d48444(UnityEngine_Texture2D_var);
    DAT_03781d7a = 1;
  }
  puVar6 = System_Threading_Tasks_Task<int>_TypeInfo;
  lVar10 = thunk_FUN_00d6225c(param_5,*(undefined8 *)PTR_DAT_033ecab8);
  if (lVar10 == 0) {
    lVar10 = FUN_010df6b8(param_5,*(undefined8 *)
                                   Method_UnityEngine_UIElements_StyleDataRef<TransitionData>_CopyFrom__
                         );
  }
  uVar11 = FUN_010d7a34(lVar10,*(undefined8 *)puVar6);
  puVar6 = Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo;
  if ((uVar11 & 1) == 0) {
    return (long *)0x0;
  }
  if (param_4 != 0) {
    uVar12 = FUN_0230bd48(param_4,0,0);
    lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
    if (lVar13 != 0) {
      FUN_01320f6c(lVar13,uVar12,*(undefined8 *)StringLiteral_9754);
      puVar6 = PTR_DAT_033f5aa8;
      if (*(long *)(param_4 + 0x28) != 0) {
        iVar9 = *(int *)(*(long *)(param_4 + 0x28) + 0x18);
        lVar14 = FUN_0230fea8(param_4,0);
        lVar15 = FUN_0230ffd0(param_4,0);
        lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
        puVar6 = PTR_DAT_033f7248;
        if (lVar16 != 0) {
          FUN_01298da0(lVar16,*(undefined8 *)
                               Method_SaveData_<>c__DisplayClass127_0_<AddCharacterManagerData>b__1__
                      );
          lVar17 = *(long *)puVar6;
          if (*(int *)(lVar17 + 0xe0) == 0) {
            thunk_FUN_00d32864();
            lVar17 = *(long *)puVar6;
          }
          puVar5 = PTR_DAT_033f1058;
          lVar28 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x10);
          if (lVar28 == 0) {
            if (*(int *)(lVar17 + 0xe0) == 0) {
              thunk_FUN_00d32864();
              lVar17 = *(long *)puVar6;
            }
            uVar12 = **(undefined8 **)(lVar17 + 0xb8);
            lVar28 = thunk_FUN_00d62348(*(undefined8 *)puVar5);
            if (lVar28 == 0) goto LAB_023667fc;
            FUN_012d239c(lVar28,uVar12,*(undefined8 *)PTR_DAT_033f0e40,0);
            *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x10) = lVar28;
          }
          uVar8 = FUN_010df44c(lVar10,lVar28,
                               *(undefined8 *)Method_Oculus_Platform_Packet_ReadBytes__);
          plVar18 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ecab8,uVar8);
          if (lVar10 != 0) {
            uVar23 = *(uint *)(lVar10 + 0x18);
            if (0 < (int)uVar23) {
              uVar25 = 0;
              local_170 = 0;
              local_114 = 0;
              do {
                if (uVar23 <= uVar25) {
LAB_02366800:
                    /* WARNING: Subroutine does not return */
                  FUN_00da5194();
                }
                lVar17 = *(long *)(lVar10 + (long)(int)uVar25 * 8 + 0x20);
                if (lVar17 == 0) goto LAB_023667fc;
                *(undefined4 *)(lVar17 + 0x18) = 0;
                *(undefined4 *)(lVar17 + 0x54) = 0xffffffff;
                fVar30 = (float)FUN_02302c7c(param_4,lVar17,0);
                uVar11 = param_2;
                uVar31 = param_3;
                lVar28 = FUN_022f8edc(lVar17,0);
                FUN_0129a9f4(lVar16,*(undefined8 *)StringLiteral_6798);
                if (lVar28 == 0) goto LAB_023667fc;
                fVar30 = fVar30 * param_1;
                fVar33 = (float)param_2 * param_1;
                fVar32 = (float)param_3 * param_1;
                if (0 < (int)*(ulong *)(lVar28 + 0x18)) {
                  uVar27 = 0;
                  uVar24 = *(ulong *)(lVar28 + 0x18) & 0xffffffff;
                  puVar26 = (undefined4 *)(lVar28 + 0x24);
                  puVar29 = (undefined8 *)Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo;
                  do {
                    if (uVar24 <= uVar27) goto LAB_02366800;
                    uVar8 = puVar26[-1];
                    uVar3 = *puVar26;
                    iVar4 = *(int *)(lVar13 + 0x18);
                    local_a0 = CONCAT44(local_a0._4_4_,uVar8);
                    uVar11 = FUN_0129aa60(lVar16,&local_a0,
                                          *(undefined8 *)
                                           Method_System_Collections_Generic_Dictionary<ValueTuple<Type,_int>,_Stack<object>>_TryGetValue__
                                         );
                    if ((uVar11 & 1) == 0) {
                      if (lVar14 == 0) goto LAB_023667fc;
                      local_a0._0_4_ = uVar8;
                      FUN_01299bc0(lVar14,&local_a0,&local_c0,*puVar29);
                      local_a0._0_4_ = uVar8;
                      FUN_0129a054(lVar16,&local_a0,&local_c0,
                                   *(undefined8 *)Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
                      local_a0 = CONCAT44(local_a0._4_4_,uVar8);
                      local_c0 = CONCAT44(local_c0._4_4_,local_114 + iVar9);
                      FUN_01299e64(lVar14,&local_a0,&local_c0,
                                   *(undefined8 *)
                                    System_Func<ShowPromptWhenTeleportPadsUsed_TeleportTransformCombo,_bool>_TypeInfo
                                  );
                      local_114 = local_114 + 1;
                    }
                    local_a0 = CONCAT44(local_a0._4_4_,uVar3);
                    uVar11 = FUN_0129aa60(lVar16,&local_a0,
                                          *(undefined8 *)
                                           Method_System_Collections_Generic_Dictionary<ValueTuple<Type,_int>,_Stack<object>>_TryGetValue__
                                         );
                    if ((uVar11 & 1) == 0) {
                      if (lVar14 == 0) goto LAB_023667fc;
                      local_a0._0_4_ = uVar3;
                      FUN_01299bc0(lVar14,&local_a0,&local_c0,*puVar29);
                      local_a0._0_4_ = uVar3;
                      FUN_0129a054(lVar16,&local_a0,&local_c0,
                                   *(undefined8 *)Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
                      local_a0 = CONCAT44(local_a0._4_4_,uVar3);
                      local_c0 = CONCAT44(local_c0._4_4_,local_114 + iVar9);
                      FUN_01299e64(lVar14,&local_a0,&local_c0,
                                   *(undefined8 *)
                                    System_Func<ShowPromptWhenTeleportPadsUsed_TeleportTransformCombo,_bool>_TypeInfo
                                  );
                      local_114 = local_114 + 1;
                    }
                    local_a0 = CONCAT44(local_a0._4_4_,uVar8);
                    FUN_01299bc0(lVar16,&local_a0,&local_c0,*puVar29);
                    puVar6 = Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__;
                    if (lVar14 == 0) goto LAB_023667fc;
                    local_a0._0_4_ = iVar4;
                    FUN_0129a054(lVar14,&local_a0,&local_c0,
                                 *(undefined8 *)Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
                    local_a0._0_4_ = uVar3;
                    FUN_01299bc0(lVar16,&local_a0,&local_c0,*puVar29);
                    iVar1 = iVar4 + 1;
                    local_a0._0_4_ = iVar1;
                    FUN_0129a054(lVar14,&local_a0,&local_c0,*(undefined8 *)puVar6);
                    local_a0._0_4_ = uVar8;
                    FUN_01299bc0(lVar14,&local_a0,&local_c0,*puVar29);
                    iVar2 = iVar4 + 2;
                    local_a0._0_4_ = iVar2;
                    FUN_0129a054(lVar14,&local_a0,&local_c0,*(undefined8 *)puVar6);
                    local_a0._0_4_ = uVar3;
                    FUN_01299bc0(lVar14,&local_a0,&local_c0,*puVar29);
                    local_a0 = CONCAT44(local_a0._4_4_,iVar4 + 3);
                    FUN_0129a054(lVar14,&local_a0,&local_c0,*(undefined8 *)puVar6);
                    puVar5 = 
                    Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                    ;
                    FUN_0132138c(lVar13,uVar8,&local_a0,
                                 *(undefined8 *)
                                  Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                                );
                    lVar22 = local_a0;
                    puVar6 = UnityEngine_Texture2D_var;
                    lVar19 = thunk_FUN_00d62348(*(undefined8 *)UnityEngine_Texture2D_var);
                    if (lVar19 == 0) goto LAB_023667fc;
                    FUN_02339644(lVar19,lVar22,0);
                    FUN_0132138c(lVar13,uVar3,&local_a0,*(undefined8 *)puVar5);
                    lVar22 = local_a0;
                    lVar20 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
                    if (lVar20 == 0) goto LAB_023667fc;
                    FUN_02339644(lVar20,lVar22,0);
                    FUN_02338f44(fVar30 + *(float *)(lVar19 + 0x10),
                                 fVar33 + *(float *)(lVar19 + 0x14),
                                 fVar32 + *(float *)(lVar19 + 0x18),lVar19,0);
                    FUN_02338f44(fVar30 + *(float *)(lVar20 + 0x10),
                                 fVar33 + *(float *)(lVar20 + 0x14),
                                 fVar32 + *(float *)(lVar20 + 0x18),lVar20,0);
                    FUN_0132138c(lVar13,uVar8,&local_a0,*(undefined8 *)puVar5);
                    lVar22 = local_a0;
                    lVar21 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
                    if (lVar21 == 0) goto LAB_023667fc;
                    FUN_02339644(lVar21,lVar22,0);
                    puVar7 = OVRManager_XrApi_TypeInfo;
                    FUN_00ca0af8(lVar13,lVar21,*(undefined8 *)OVRManager_XrApi_TypeInfo);
                    FUN_0132138c(lVar13,uVar3,&local_a0,*(undefined8 *)puVar5);
                    lVar22 = local_a0;
                    lVar21 = thunk_FUN_00d62348(*(undefined8 *)puVar6);
                    if (lVar21 == 0) goto LAB_023667fc;
                    FUN_02339644(lVar21,lVar22,0);
                    FUN_00ca0af8(lVar13,lVar21,*(undefined8 *)puVar7);
                    FUN_00ca0af8(lVar13,lVar19,*(undefined8 *)puVar7);
                    FUN_00ca0af8(lVar13,lVar20,*(undefined8 *)puVar7);
                    lVar22 = FUN_00da4fb8(*(undefined8 *)
                                           Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,6);
                    if (lVar22 == 0) goto LAB_023667fc;
                    uVar23 = *(uint *)(lVar22 + 0x18);
                    if ((((uVar23 == 0) || (*(int *)(lVar22 + 0x20) = iVar4, uVar23 == 1)) ||
                        (*(int *)(lVar22 + 0x24) = iVar1, uVar23 < 3)) ||
                       (((*(int *)(lVar22 + 0x28) = iVar2, uVar23 == 3 ||
                         (*(int *)(lVar22 + 0x2c) = iVar1, uVar23 < 5)) ||
                        (*(int *)(lVar22 + 0x30) = iVar4 + 3, uVar23 == 5)))) goto LAB_02366800;
                    *(int *)(lVar22 + 0x34) = iVar2;
                    uVar8 = *(undefined4 *)(lVar17 + 0x48);
                    uVar31 = 0;
                    uStack_d8 = *(undefined8 *)(lVar17 + 0x24);
                    local_e0 = *(long *)(lVar17 + 0x1c);
                    uStack_c8 = *(undefined8 *)(lVar17 + 0x34);
                    uStack_d0 = *(undefined8 *)(lVar17 + 0x2c);
                    uStack_b8 = 0;
                    local_c0 = 0;
                    uStack_a8 = 0;
                    uStack_b0 = 0;
                    local_a0 = local_e0;
                    uStack_98 = uStack_d8;
                    uStack_90 = uStack_d0;
                    uStack_88 = uStack_c8;
                    FUN_022eff30(&local_c0,&local_e0,0);
                    uVar3 = *(undefined4 *)(lVar17 + 0x18);
                    lVar19 = thunk_FUN_00d62348(*(undefined8 *)
                                                 Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__
                                               );
                    puVar29 = (undefined8 *)Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo;
                    if (lVar19 == 0) goto LAB_023667fc;
                    uStack_f8 = uStack_b8;
                    local_100 = local_c0;
                    uStack_e8 = uStack_a8;
                    uStack_f0 = uStack_b0;
                    uVar11 = uStack_b0;
                    FUN_022f986c(lVar19,lVar22,uVar8,&local_100,uVar3,0xffffffff,0xffffffff,0,0);
                    if (plVar18 == (long *)0x0) goto LAB_023667fc;
                    lVar22 = thunk_FUN_00d6225c(lVar19,*(undefined8 *)(*plVar18 + 0x40));
                    if (lVar22 == 0) {
                      uVar12 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
                      FUN_00da5038(uVar12,0);
                    }
                    uVar23 = local_170 + (int)uVar27;
                    if (*(uint *)(plVar18 + 3) <= uVar23) goto LAB_02366800;
                    plVar18[(long)(int)uVar23 + 4] = lVar19;
                    uVar27 = uVar27 + 1;
                    uVar24 = (ulong)*(uint *)(lVar28 + 0x18);
                    puVar26 = puVar26 + 2;
                  } while ((long)uVar27 < (long)(int)*(uint *)(lVar28 + 0x18));
                  local_170 = local_170 + (int)uVar27;
                }
                lVar28 = FUN_022f8990(lVar17,0);
                if (lVar28 == 0) goto LAB_023667fc;
                lVar22 = 8;
                while (uVar27 = lVar22 - 8, (long)uVar27 < (long)*(int *)(lVar28 + 0x18)) {
                  lVar28 = FUN_022f8990(lVar17,0);
                  if (lVar28 == 0) goto LAB_023667fc;
                  if (*(uint *)(lVar28 + 0x18) <= uVar27) goto LAB_02366800;
                  FUN_0132138c(lVar13,*(undefined4 *)(lVar28 + lVar22 * 4),&local_a0,
                               *(undefined8 *)
                                Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                              );
                  if (local_a0 == 0) goto LAB_023667fc;
                  uVar11 = (ulong)(uint)(fVar33 + *(float *)(local_a0 + 0x14));
                  uVar31 = (ulong)(uint)(fVar32 + *(float *)(local_a0 + 0x18));
                  FUN_02338f44(fVar30 + *(float *)(local_a0 + 0x10),uVar11,uVar31,local_a0,0);
                  if (lVar15 != 0) {
                    lVar28 = FUN_022f8990(lVar17,0);
                    if (lVar28 == 0) goto LAB_023667fc;
                    if (*(uint *)(lVar28 + 0x18) <= uVar27) goto LAB_02366800;
                    local_a0 = CONCAT44(local_a0._4_4_,*(undefined4 *)(lVar28 + lVar22 * 4));
                    uVar24 = FUN_0129aa60(lVar15,&local_a0,
                                          *(undefined8 *)
                                           Method_System_Collections_Generic_Dictionary<ValueTuple<Type,_int>,_Stack<object>>_TryGetValue__
                                         );
                    if ((uVar24 & 1) != 0) {
                      lVar28 = FUN_022f8990(lVar17,0);
                      if (lVar28 == 0) goto LAB_023667fc;
                      if (*(uint *)(lVar28 + 0x18) <= uVar27) goto LAB_02366800;
                      local_a0 = CONCAT44(local_a0._4_4_,*(undefined4 *)(lVar28 + lVar22 * 4));
                      FUN_0129de0c(lVar15,&local_a0,
                                   *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vaba_s8__);
                    }
                  }
                  lVar28 = FUN_022f8990(lVar17,0);
                  lVar22 = lVar22 + 1;
                  if (lVar28 == 0) goto LAB_023667fc;
                }
                uVar23 = *(uint *)(lVar10 + 0x18);
                uVar25 = uVar25 + 1;
                param_2 = uVar11;
                param_3 = uVar31;
              } while ((int)uVar25 < (int)uVar23);
            }
            FUN_02310a38(param_4,lVar13,0,0);
            iVar9 = FUN_0230dd30(param_4,0);
            if (plVar18 != (long *)0x0) {
              lVar10 = plVar18[3];
              uVar12 = FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ecab8,iVar9 + (int)lVar10);
              FUN_01795470(*(undefined8 *)(param_4 + 0x20),0,uVar12,0,iVar9,0);
              FUN_01795470(plVar18,0,uVar12,iVar9,(int)lVar10,0);
              FUN_0230f6a8(param_4,uVar12,0);
              FUN_0230ff4c(param_4,lVar14,0);
              FUN_02310070(param_4,lVar15,0);
              return plVar18;
            }
          }
        }
      }
    }
  }
LAB_023667fc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


