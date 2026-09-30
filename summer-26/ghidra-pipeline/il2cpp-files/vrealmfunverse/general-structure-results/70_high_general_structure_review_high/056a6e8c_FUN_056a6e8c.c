/*
FUNCTION_NAME: FUN_056a6e8c
ENTRY_POINT: 056a6e8c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_21
*/


/* WARNING: Removing unreachable block (ram,0x056a7ac0) */
/* WARNING: Removing unreachable block (ram,0x056a7428) */
/* WARNING: Removing unreachable block (ram,0x056a7a68) */
/* WARNING: Removing unreachable block (ram,0x056a722c) */

void FUN_056a6e8c(uint *param_1)

{
  byte bVar1;
  byte bVar2;
  char *pcVar3;
  undefined8 *puVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  uint *puVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  char *local_c8;
  undefined8 *local_c0;
  undefined4 local_a8;
  undefined1 local_a0 [16];
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  char local_54 [4];
  undefined8 local_50;
  uint local_44;
  
  if ((DAT_066d1f43 & 1) == 0) {
    FUN_02b3c81c(
                Method_Unity_Burst_FunctionPointer<XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C_PostfixBurstDelegate>_get_Value__
                );
    FUN_02b3c81c(
                Method_Unity_Burst_FunctionPointer<XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D_PostfixBurstDelegate>_get_Value__
                );
    FUN_02b3c81c(
                Method_Unity_Burst_FunctionPointer<XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E_PostfixBurstDelegate>_get_Value__
                );
    FUN_02b3c81c(
                Method_Unity_Burst_FunctionPointer<XRPokeLogic_CalculateInteractionPoint_00001083_PostfixBurstDelegate>_get_Value__
                );
    FUN_02b3c81c(
                Method_Unity_Burst_FunctionPointer<XRPokeLogic_CalculatePokeParams_00001082_PostfixBurstDelegate>_get_Value__
                );
    FUN_02b3c81c(
                Method_Unity_Burst_FunctionPointer<BurstMathUtility_Scale_0000035B_PostfixBurstDelegate>_get_Value__
                );
    FUN_02b3c81c(PTR_DAT_063200f0);
    FUN_02b3c81c(
                Method_System_Collections_Generic_Dictionary<int,_TMP_ResourceManager_FontAssetRef>_Add__
                );
    FUN_02b3c81c(
                Method_Unity_Burst_FunctionPointer<XRPokeLogic_IsVelocitySufficient_00001085_PostfixBurstDelegate>_get_Value__
                );
    FUN_02b3c81c(
                Method_Unity_Burst_FunctionPointer<XRSocketGrabTransformer_CalculateScaleToFit_00000931_PostfixBurstDelegate>_get_Value__
                );
    FUN_02b3c81c(
                Method_System_Collections_Generic_Dictionary<int,_TMP_ResourceManager_FontAssetRef>_ContainsKey__
                );
    FUN_02b3c81c(
                Method_Unity_Burst_FunctionPointer<XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E_PostfixBurstDelegate>_get_Value__
                );
    FUN_02b3c81c(
                Method_System_Collections_Generic_Dictionary<int,_TMP_ResourceManager_FontAssetRef>_GetEnumerator__
                );
    FUN_02b3c81c(
                Method_Unity_Burst_FunctionPointer<XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F_PostfixBurstDelegate>_get_Value__
                );
    FUN_02b3c81c(
                Method_Unity_Burst_FunctionPointer<XRSocketGrabTransformer_IsWithinRadius_00000930_PostfixBurstDelegate>_get_Value__
                );
    FUN_02b3c81c(
                Method_Unity_Burst_FunctionPointer<XRTransformStabilizer_CalculateRotationParams_000011DE_PostfixBurstDelegate>_get_Value__
                );
    FUN_02b3c81c(
                Method_System_Collections_Generic_Dictionary<int,_TMP_ResourceManager_FontAssetRef>_Remove__
                );
    FUN_02b3c81c(
                Method_Unity_Burst_FunctionPointer<XRTransformStabilizer_CalculateStabilizedLerp_000011DD_PostfixBurstDelegate>_get_Value__
                );
    FUN_02b3c81c(
                Method_Unity_Burst_FunctionPointer<XRTransformStabilizer_StabilizeOptimalRotation_000011DC_PostfixBurstDelegate>_get_Value__
                );
    FUN_02b3c81c(Method_System_Collections_Generic_Dictionary<IntPtr,_FirebaseApp>_TryGetValue__);
    FUN_02b3c81c(
                Method_Unity_Burst_FunctionPointer<XRTransformStabilizer_StabilizePosition_000011DB_PostfixBurstDelegate>_get_Value__
                );
    FUN_02b3c81c(Method_System_Collections_Generic_Dictionary<long,_FontAsset>_Add__);
    DAT_066d1f43 = 1;
  }
  local_44 = *param_1;
  lVar10 = *(long *)(param_1 + 8);
  local_50 = 0;
  local_54[0] = '\0';
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  local_88 = 0;
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  auVar14 = ZEXT816(0);
  local_a8 = 0;
  if (local_44 < 4) {
    uVar11 = 0;
    local_80 = ZEXT816(0);
    local_70 = ZEXT816(0);
    goto LAB_056a74d4;
  }
  if (local_44 == 4) {
    uVar11 = 0;
    local_a0 = ZEXT816(0);
    local_80 = ZEXT816(0);
    local_70 = ZEXT816(0);
    do {
      if (local_44 == 4) {
        local_80 = *(undefined1 (*) [16])(param_1 + 0x20);
        param_1[0x20] = 0;
        param_1[0x21] = 0;
        param_1[0x22] = 0;
        param_1[0x23] = 0;
        local_44 = 0xffffffff;
        *param_1 = 0xffffffff;
LAB_056a7338:
        FUN_04caa4cc(local_80,0);
      }
      else if (*(char *)((long)param_1 + 0x59) != '\0') {
        bVar5 = true;
        if ((char)param_1[0x16] == '\0') {
          bVar5 = *(long *)(param_1 + 0x18) != 0;
        }
        if (*(long *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4(0,bVar5);
        }
        lVar13 = FUN_055dae88(*(long *)(param_1 + 0x14),bVar5,*(undefined8 *)(param_1 + 10),0);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        auVar14 = FUN_04def550(lVar13,0,0);
        local_80 = auVar14;
        uVar8 = FUN_04caa4b4(local_80,0);
        if ((uVar8 & 1) == 0) {
          local_44 = 4;
          *param_1 = 4;
          *(undefined1 (*) [16])(param_1 + 0x20) = local_80;
          thunk_FUN_02bb0e9c(param_1 + 0x20,0);
          if (*(int *)(*(long *)
                        Method_Unity_Burst_FunctionPointer<BurstMathUtility_Scale_0000035B_PostfixBurstDelegate>_get_Value__
                      + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          System_Array__InternalArray__IndexOf<StylePropertyAnimationSystem_Values_EmptyData<TextShadow>>
                    (param_1 + 2,local_80,param_1,
                     *(undefined8 *)
                      Method_Unity_Burst_FunctionPointer<XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D_PostfixBurstDelegate>_get_Value__
                    );
          return;
        }
        goto LAB_056a7338;
      }
      if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_056a8050(*(long *)(param_1 + 0xe),1,0);
      plVar7 = *(long **)(param_1 + 0x12);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      local_50 = *(undefined8 *)(lVar10 + 0x128);
      local_d0 = &local_44;
      local_c0 = &local_50;
      local_d8 = 0;
      local_c8 = local_54;
      local_54[0] = '\0';
      FUN_04ddecfc(local_50,local_54,0);
      lVar13 = *(long *)(param_1 + 0x10);
      if (lVar13 != 0) {
        *(undefined1 *)(lVar10 + 0x88) = 1;
        plVar7 = *(long **)(param_1 + 0x14);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x268))(plVar7,*(undefined8 *)(*plVar7 + 0x270));
          lVar13 = *(long *)(param_1 + 0x10);
        }
        lVar10 = *(long *)(param_1 + 0xc);
        if (lVar10 != 0) {
          uVar11 = thunk_FUN_02ba3594(
                                     Method_System_Collections_Generic_Dictionary<IntPtr,_FirebaseAuth>__ctor__
                                     );
          FUN_0424ef48(lVar10,lVar13,uVar11);
          uVar9 = *(undefined8 *)(param_1 + 0x10);
          uVar11 = thunk_FUN_02ba3594(
                                     Method_Unity_Burst_FunctionPointer<BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000145_PostfixBurstDelegate>_get_Value__
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_02b3c988(uVar9,uVar11);
        }
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar9 = FUN_056a3a78(lVar10,1,*(undefined8 *)(param_1 + 0x1a),*(undefined8 *)(param_1 + 10))
        ;
        *(undefined8 *)(param_1 + 0xe) = uVar9;
        thunk_FUN_02bb0e9c();
      }
      else {
        *(long *)(param_1 + 0xe) = *(long *)(param_1 + 0x18);
        thunk_FUN_02bb0e9c();
      }
      if (((int)local_44 < 0) && (*local_c8 != '\0')) {
        thunk_FUN_02b4a54c(*local_c0,0);
      }
      puVar12 = param_1 + 0x10;
      puVar12[0] = 0;
      puVar12[1] = 0;
      thunk_FUN_02bb0e9c(puVar12,0);
      puVar12 = param_1 + 0x12;
      puVar12[0] = 0;
      puVar12[1] = 0;
      thunk_FUN_02bb0e9c(puVar12,0);
      puVar12 = param_1 + 0x14;
      puVar12[0] = 0;
      puVar12[1] = 0;
      thunk_FUN_02bb0e9c(puVar12,0);
      puVar12 = param_1 + 0x18;
      puVar12[0] = 0;
      puVar12[1] = 0;
      thunk_FUN_02bb0e9c(puVar12,0);
      puVar12 = param_1 + 0x1a;
      puVar12[0] = 0;
      puVar12[1] = 0;
      thunk_FUN_02bb0e9c(puVar12,0);
LAB_056a747c:
      puVar12 = param_1 + 0x10;
      puVar12[0] = 0;
      puVar12[1] = 0;
      thunk_FUN_02bb0e9c(puVar12,0);
      puVar12 = param_1 + 0x12;
      puVar12[0] = 0;
      puVar12[1] = 0;
      thunk_FUN_02bb0e9c(puVar12,0);
      puVar12 = param_1 + 0x14;
      puVar12[0] = 0;
      puVar12[1] = 0;
      thunk_FUN_02bb0e9c(puVar12,0);
      puVar12 = param_1 + 0x18;
      puVar12[0] = 0;
      puVar12[1] = 0;
      *(undefined2 *)(param_1 + 0x16) = 0;
      thunk_FUN_02bb0e9c(puVar12,0);
      puVar12 = param_1 + 0x1a;
      puVar12[0] = 0;
      puVar12[1] = 0;
      thunk_FUN_02bb0e9c(puVar12,0);
      auVar14 = local_a0;
LAB_056a74d4:
      local_a0 = auVar14;
      if ((int)local_44 < 2) {
        if (local_44 == 0) {
          local_70 = *(undefined1 (*) [16])(param_1 + 0x1c);
          param_1[0x1c] = 0;
          param_1[0x1d] = 0;
          param_1[0x1e] = 0;
          param_1[0x1f] = 0;
          local_44 = 0xffffffff;
          *param_1 = 0xffffffff;
LAB_056a7604:
          local_a0 = auVar14;
          lVar13 = FUN_0430c744(local_70,*(undefined8 *)
                                          Method_System_Collections_Generic_Dictionary<int,_TMP_ResourceManager_FontAssetRef>_ContainsKey__
                               );
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          plVar7 = (long *)(lVar10 + 0xf8);
          *plVar7 = lVar13;
          thunk_FUN_02bb0e9c(plVar7);
          if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar13 = FUN_055d6e98(*plVar7,*(undefined8 *)(param_1 + 10),0);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          auVar14 = FUN_04def550(lVar13,0,0);
          local_80 = auVar14;
          uVar8 = FUN_04caa4b4(local_80,0);
          if ((uVar8 & 1) == 0) {
            local_44 = 1;
            *param_1 = 1;
            *(undefined1 (*) [16])(param_1 + 0x20) = local_80;
            thunk_FUN_02bb0e9c(param_1 + 0x20,0);
            if (*(int *)(*(long *)
                          Method_Unity_Burst_FunctionPointer<BurstMathUtility_Scale_0000035B_PostfixBurstDelegate>_get_Value__
                        + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            System_Array__InternalArray__IndexOf<StylePropertyAnimationSystem_Values_EmptyData<TextShadow>>
                      (param_1 + 2,local_80,param_1,
                       *(undefined8 *)
                        Method_Unity_Burst_FunctionPointer<XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D_PostfixBurstDelegate>_get_Value__
                      );
            return;
          }
        }
        else {
          if (local_44 != 1) {
LAB_056a7530:
            if (*(int *)(*(long *)PTR_DAT_063200f0 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            FUN_04dde2b0(param_1 + 10,0);
            if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            lVar13 = FUN_056a7fb0();
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            auVar14 = FUN_03f4047c(lVar13,0,*(undefined8 *)
                                             Method_System_Collections_Generic_Dictionary<int,_TMP_ResourceManager_FontAssetRef>_Remove__
                                  );
            local_70 = auVar14;
            uVar8 = FUN_0430c6fc(local_70,*(undefined8 *)
                                           Method_System_Collections_Generic_Dictionary<int,_TMP_ResourceManager_FontAssetRef>_GetEnumerator__
                                );
            auVar14 = local_a0;
            if ((uVar8 & 1) == 0) {
              local_44 = 0;
              *param_1 = 0;
              *(undefined1 (*) [16])(param_1 + 0x1c) = local_70;
              thunk_FUN_02bb0e9c(param_1 + 0x1c,0);
              if (*(int *)(*(long *)
                            Method_Unity_Burst_FunctionPointer<BurstMathUtility_Scale_0000035B_PostfixBurstDelegate>_get_Value__
                          + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              FUN_02e50624(param_1 + 2,local_70,param_1,
                           *(undefined8 *)
                            Method_Unity_Burst_FunctionPointer<XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C_PostfixBurstDelegate>_get_Value__
                          );
              return;
            }
            goto LAB_056a7604;
          }
          local_80 = *(undefined1 (*) [16])(param_1 + 0x20);
          param_1[0x20] = 0;
          param_1[0x21] = 0;
          param_1[0x22] = 0;
          param_1[0x23] = 0;
          local_44 = 0xffffffff;
          *param_1 = 0xffffffff;
        }
        FUN_04caa4cc(local_80,0);
        if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar13 = FUN_056a8000();
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        local_88 = FUN_03f40460(lVar13,*(undefined8 *)
                                        Method_Unity_Burst_FunctionPointer<XRTransformStabilizer_CalculateStabilizedLerp_000011DD_PostfixBurstDelegate>_get_Value__
                               );
        uVar8 = FUN_03f2079c(&local_88,
                             *(undefined8 *)
                              Method_Unity_Burst_FunctionPointer<XRSocketGrabTransformer_IsWithinRadius_00000930_PostfixBurstDelegate>_get_Value__
                            );
        auVar14 = local_a0;
        if ((uVar8 & 1) == 0) {
          local_44 = 2;
          *param_1 = 2;
          *(undefined8 *)(param_1 + 0x24) = local_88;
          thunk_FUN_02bb0e9c(param_1 + 0x24,0);
          if (*(int *)(*(long *)
                        Method_Unity_Burst_FunctionPointer<BurstMathUtility_Scale_0000035B_PostfixBurstDelegate>_get_Value__
                      + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          FUN_02e51cd4(param_1 + 2,&local_88,param_1,
                       *(undefined8 *)
                        Method_Unity_Burst_FunctionPointer<XRPokeLogic_CalculateInteractionPoint_00001083_PostfixBurstDelegate>_get_Value__
                      );
          return;
        }
LAB_056a7720:
        local_a0 = auVar14;
        uVar9 = FUN_03f207dc(&local_88,
                             *(undefined8 *)
                              Method_Unity_Burst_FunctionPointer<XRSocketGrabTransformer_FastComputeNewTrackedPose_0000092F_PostfixBurstDelegate>_get_Value__
                            );
        *(undefined8 *)(param_1 + 0x14) = uVar9;
        thunk_FUN_02bb0e9c();
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar13 = FUN_056a4138(lVar10,*(undefined8 *)(param_1 + 0x14),*(undefined8 *)(param_1 + 10));
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        auVar14 = FUN_03f3b170(lVar13,0,*(undefined8 *)
                                         Method_Unity_Burst_FunctionPointer<XRTransformStabilizer_CalculateRotationParams_000011DE_PostfixBurstDelegate>_get_Value__
                              );
        local_a0 = auVar14;
        uVar8 = FUN_0430c1c0(local_a0,*(undefined8 *)
                                       Method_Unity_Burst_FunctionPointer<XRSocketGrabTransformer_FastCalculateRadiusOffset_0000092E_PostfixBurstDelegate>_get_Value__
                            );
        if ((uVar8 & 1) == 0) {
          local_44 = 3;
          *param_1 = 3;
          *(undefined1 (*) [16])(param_1 + 0x26) = local_a0;
          thunk_FUN_02bb0e9c(param_1 + 0x26,0);
          if (*(int *)(*(long *)
                        Method_Unity_Burst_FunctionPointer<BurstMathUtility_Scale_0000035B_PostfixBurstDelegate>_get_Value__
                      + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          FUN_02e4fab4(param_1 + 2,local_a0,param_1,
                       *(undefined8 *)
                        Method_Unity_Burst_FunctionPointer<XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E_PostfixBurstDelegate>_get_Value__
                      );
          return;
        }
      }
      else {
        if (local_44 == 2) {
          local_88 = *(undefined8 *)(param_1 + 0x24);
          param_1[0x24] = 0;
          param_1[0x25] = 0;
          local_44 = 0xffffffff;
          *param_1 = 0xffffffff;
          goto LAB_056a7720;
        }
        if (local_44 != 3) goto LAB_056a7530;
        local_a0 = *(undefined1 (*) [16])(param_1 + 0x26);
        param_1[0x26] = 0;
        param_1[0x27] = 0;
        param_1[0x28] = 0;
        param_1[0x29] = 0;
        local_44 = 0xffffffff;
        *param_1 = 0xffffffff;
      }
      FUN_0430c208(&local_d8,local_a0,
                   *(undefined8 *)
                    Method_Unity_Burst_FunctionPointer<XRSocketGrabTransformer_CalculateScaleToFit_00000931_PostfixBurstDelegate>_get_Value__
                  );
      puVar4 = local_c0;
      pcVar3 = local_c8;
      bVar1 = (byte)local_d0;
      bVar2 = local_d0._1_1_;
      *(undefined8 *)(param_1 + 0x12) = local_d8;
      thunk_FUN_02bb0e9c();
      *(char **)(param_1 + 0x1a) = pcVar3;
      *(byte *)(param_1 + 0x16) = bVar1 & 1;
      *(byte *)((long)param_1 + 0x59) = bVar2 & 1;
      thunk_FUN_02bb0e9c(param_1 + 0x1a,pcVar3);
      *(undefined8 **)(param_1 + 0x18) = puVar4;
      thunk_FUN_02bb0e9c(param_1 + 0x18,puVar4);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      local_50 = *(undefined8 *)(lVar10 + 0x128);
      local_d0 = &local_44;
      local_c0 = &local_50;
      local_d8 = 0;
      local_c8 = local_54;
      local_54[0] = '\0';
      FUN_04ddecfc(local_50,local_54,0);
      lVar13 = *(long *)(param_1 + 0x10);
      if (lVar13 != 0) {
        *(undefined1 *)(lVar10 + 0x88) = 1;
        lVar10 = *(long *)(param_1 + 0xc);
        if (lVar10 != 0) {
          uVar11 = thunk_FUN_02ba3594(
                                     Method_System_Collections_Generic_Dictionary<IntPtr,_FirebaseAuth>__ctor__
                                     );
          FUN_0424ef48(lVar10,lVar13,uVar11);
          uVar9 = *(undefined8 *)(param_1 + 0x10);
          uVar11 = thunk_FUN_02ba3594(
                                     Method_Unity_Burst_FunctionPointer<BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000145_PostfixBurstDelegate>_get_Value__
                                     );
                    /* WARNING: Subroutine does not return */
          FUN_02b3c988(uVar9,uVar11);
        }
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if ((char)param_1[0x16] == '\0') {
        *(undefined1 *)(lVar10 + 0x88) = 1;
        *(undefined8 *)(lVar10 + 0x100) = *(undefined8 *)(param_1 + 0x12);
        thunk_FUN_02bb0e9c(lVar10 + 0x100);
        if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        FUN_0424ed70(*(long *)(param_1 + 0xc),
                     *(undefined8 *)
                      Method_System_Collections_Generic_Dictionary<IntPtr,_FirebaseApp>_TryGetValue__
                    );
        uVar11 = *(undefined8 *)(param_1 + 0x12);
        iVar6 = 9;
      }
      else {
        *(undefined1 *)(lVar10 + 0x130) = 0;
        *(undefined1 *)(lVar10 + 0x88) = 0;
        *(undefined8 *)(lVar10 + 0x100) = 0;
        thunk_FUN_02bb0e9c(lVar10 + 0x100,0);
        iVar6 = 3;
        *(undefined8 *)(lVar10 + 0x110) = *(undefined8 *)(param_1 + 0x18);
        thunk_FUN_02bb0e9c(lVar10 + 0x110);
      }
      if (((int)local_44 < 0) && (*local_c8 != '\0')) {
        thunk_FUN_02b4a54c(*local_c0,0);
      }
    } while ((iVar6 == 0) || (iVar6 == 3));
    auVar14 = local_80;
    if (iVar6 != 9) {
      return;
    }
  }
  else {
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    iVar6 = thunk_FUN_02b75cb0(lVar10 + 0x118,0,0,0);
    if (iVar6 == 1) {
      lVar10 = thunk_FUN_02ba3594(PTR_DAT_0631f428);
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      uVar11 = FUN_056a4590();
      uVar9 = thunk_FUN_02ba3594(
                                Method_Unity_Burst_FunctionPointer<BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000145_PostfixBurstDelegate>_get_Value__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar11,uVar9);
    }
    uVar11 = thunk_FUN_02b79644(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<long,_FontAsset>_Add__
                               );
    FUN_056a7f4c();
    puVar12 = param_1 + 0xc;
    *(undefined8 *)puVar12 = uVar11;
    thunk_FUN_02bb0e9c(puVar12,uVar11);
    local_50 = *(undefined8 *)(lVar10 + 0x128);
    local_d0 = &local_44;
    local_c0 = &local_50;
    local_d8 = 0;
    local_c8 = local_54;
    local_54[0] = '\0';
    FUN_04ddecfc(local_50,local_54,0);
    *(undefined1 *)(lVar10 + 0x125) = 1;
    lVar13 = FUN_02b75c08(lVar10 + 0x108,*(undefined8 *)puVar12,0);
    if (lVar13 == 0) {
      puVar12 = param_1 + 0xe;
      *(undefined8 *)puVar12 = *(undefined8 *)(lVar10 + 0x110);
      thunk_FUN_02bb0e9c(puVar12);
      lVar13 = *(long *)(lVar10 + 0x110);
      if (lVar13 != 0) {
        FUN_056b6508(lVar13);
        *(undefined8 *)(lVar10 + 0xf8) = *(undefined8 *)(lVar13 + 0x60);
        thunk_FUN_02bb0e9c();
      }
      *(undefined8 *)(lVar10 + 0xb0) = *(undefined8 *)(lVar10 + 0xa8);
      thunk_FUN_02bb0e9c();
      uVar11 = FUN_056a3a78(lVar10,0,0,*(undefined8 *)(param_1 + 10));
      *(undefined8 *)puVar12 = uVar11;
      thunk_FUN_02bb0e9c(puVar12);
      uVar11 = 0;
      iVar6 = 0xd;
    }
    else {
      FUN_0424f008(lVar13,*(undefined8 *)
                           Method_Unity_Burst_FunctionPointer<XRTransformStabilizer_StabilizeOptimalRotation_000011DC_PostfixBurstDelegate>_get_Value__
                  );
      if (*(char *)(lVar10 + 0x88) == '\0') {
LAB_056a71a8:
        thunk_FUN_02ba3594(PTR_DAT_0631cb60);
        uVar11 = thunk_FUN_02b79644();
        uVar9 = thunk_FUN_02ba3594(
                                  Method_Unity_Burst_FunctionPointer<XRTransformStabilizer_StabilizeTransform_000011DA_PostfixBurstDelegate>_get_Value__
                                  );
        FUN_04d7b3f4(uVar11,uVar9,0);
        uVar9 = thunk_FUN_02ba3594(
                                  Method_Unity_Burst_FunctionPointer<BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000145_PostfixBurstDelegate>_get_Value__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar11,uVar9);
      }
      lVar13 = FUN_0424eca8(lVar13,*(undefined8 *)
                                    Method_Unity_Burst_FunctionPointer<XRTransformStabilizer_StabilizePosition_000011DB_PostfixBurstDelegate>_get_Value__
                           );
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar8 = Oculus_Interaction_HandDebugGizmos__set_ForceOffVisibility(lVar13,0);
      if ((uVar8 & 1) == 0) goto LAB_056a71a8;
      uVar11 = *(undefined8 *)(lVar10 + 0x100);
      iVar6 = 9;
    }
    if (((int)local_44 < 0) && (*local_c8 != '\0')) {
      thunk_FUN_02b4a54c(*local_c0,0);
    }
    auVar14._8_8_ = local_80._8_8_;
    auVar14._0_8_ = local_80._0_8_;
    if (iVar6 == 0xd) goto LAB_056a747c;
    if (iVar6 != 9) {
      local_80 = auVar14;
      if (iVar6 == 0) goto LAB_056a747c;
      return;
    }
  }
  *param_1 = 0xfffffffe;
  puVar12 = param_1 + 0xc;
  puVar12[0] = 0;
  puVar12[1] = 0;
  local_80 = auVar14;
  thunk_FUN_02bb0e9c(puVar12,0);
  puVar12 = param_1 + 0xe;
  puVar12[0] = 0;
  puVar12[1] = 0;
  thunk_FUN_02bb0e9c(puVar12,0);
  if (*(int *)(*(long *)
                Method_Unity_Burst_FunctionPointer<BurstMathUtility_Scale_0000035B_PostfixBurstDelegate>_get_Value__
              + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_03a2f864(param_1 + 2,uVar11,
               *(undefined8 *)
                Method_Unity_Burst_FunctionPointer<XRPokeLogic_CalculatePokeParams_00001082_PostfixBurstDelegate>_get_Value__
              );
  return;
}


