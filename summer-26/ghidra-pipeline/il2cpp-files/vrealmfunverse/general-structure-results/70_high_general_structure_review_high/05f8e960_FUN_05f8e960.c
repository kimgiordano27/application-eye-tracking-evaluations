/*
FUNCTION_NAME: FUN_05f8e960
ENTRY_POINT: 05f8e960
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_15;ray_or_cast_sink_hits_7;telemetry_or_network_hits_6
*/


long FUN_05f8e960(long param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined1 local_7c [4];
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  
  if ((DAT_066dd545 & 1) == 0) {
    FUN_02b3c81c(StringLiteral_793);
    FUN_02b3c81c(StringLiteral_794);
    FUN_02b3c81c(StringLiteral_795);
    FUN_02b3c81c(StringLiteral_796);
    FUN_02b3c81c(StringLiteral_797);
    FUN_02b3c81c(StringLiteral_798);
    FUN_02b3c81c(PTR_DAT_06313778);
    FUN_02b3c81c(PTR_DAT_06313048);
    FUN_02b3c81c(PTR_DAT_06312520);
    FUN_02b3c81c(Method_System_Char_System_IConvertible_ToDecimal__);
    FUN_02b3c81c(StringLiteral_799);
    FUN_02b3c81c(Method_UnityEngine_Component_GetComponentsInChildren<PlacePoint>__);
    FUN_02b3c81c(StringLiteral_800);
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WebRequestStream_<Initialize>d__36>__
                );
    FUN_02b3c81c(Method_UnityEngine_Component_GetComponentsInChildren<TrackSlot>__);
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WebRequestStream_<WriteAsyncInner>d__33>__
                );
    FUN_02b3c81c(StringLiteral_801);
    FUN_02b3c81c(UnityEngine_Rendering_Universal_DebugLightingFeatureFlags_TypeInfo);
    FUN_02b3c81c(StringLiteral_802);
    FUN_02b3c81c(StringLiteral_803);
    FUN_02b3c81c(StringLiteral_804);
    FUN_02b3c81c(StringLiteral_805);
    FUN_02b3c81c(StringLiteral_806);
    FUN_02b3c81c(StringLiteral_807);
    FUN_02b3c81c(Meta_XR_ImmersiveDebugger_Manager_DebugManager_TypeInfo);
    FUN_02b3c81c(StringLiteral_808);
    FUN_02b3c81c(StringLiteral_809);
    DAT_066dd545 = 1;
  }
  puVar2 = PTR_DAT_06312520;
  if ((0 < param_2) || (param_5 != 0xf)) {
    if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar3 = FUN_05c8e378(param_1,0,0);
    if ((uVar3 & 1) == 0) {
      if (param_1 == 0) goto LAB_05f8f220;
      uVar3 = FUN_05c5a0bc(param_1,*(undefined8 *)
                                    Method_UnityEngine_Component_GetComponentsInChildren<TrackSlot>__
                           ,0);
      if ((uVar3 & 1) == 0) {
        uVar10 = thunk_FUN_05c92238(param_1,0);
        puVar6 = (undefined8 *)StringLiteral_800;
      }
      else {
        uVar3 = FUN_05c5a0bc(param_1,*(undefined8 *)
                                      UnityEngine_Rendering_Universal_DebugLightingFeatureFlags_TypeInfo
                             ,0);
        if ((uVar3 & 1) == 0) {
          uVar10 = thunk_FUN_05c92238(param_1,0);
          puVar6 = (undefined8 *)StringLiteral_807;
        }
        else {
          uVar3 = FUN_05c5a0bc(param_1,*(undefined8 *)
                                        Method_UnityEngine_Component_GetComponentsInChildren<PlacePoint>__
                               ,0);
          if ((uVar3 & 1) == 0) {
            uVar10 = thunk_FUN_05c92238(param_1,0);
            puVar6 = (undefined8 *)StringLiteral_808;
          }
          else {
            uVar3 = FUN_05c5a0bc(param_1,*(undefined8 *)
                                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WebRequestStream_<Initialize>d__36>__
                                 ,0);
            if ((uVar3 & 1) == 0) {
              uVar10 = thunk_FUN_05c92238(param_1,0);
              puVar6 = (undefined8 *)StringLiteral_805;
            }
            else {
              uVar3 = FUN_05c5a0bc(param_1,*(undefined8 *)
                                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WebRequestStream_<WriteAsyncInner>d__33>__
                                   ,0);
              if ((uVar3 & 1) == 0) {
                uVar10 = thunk_FUN_05c92238(param_1,0);
                puVar6 = (undefined8 *)StringLiteral_801;
              }
              else {
                uVar3 = FUN_05c5a0bc(param_1,*(undefined8 *)
                                              Meta_XR_ImmersiveDebugger_Manager_DebugManager_TypeInfo
                                     ,0);
                plVar9 = (long *)Method_System_Char_System_IConvertible_ToDecimal__;
                if ((uVar3 & 1) != 0) {
                  lVar4 = *(long *)Method_System_Char_System_IConvertible_ToDecimal__;
                  if (*(int *)(lVar4 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                    lVar4 = *plVar9;
                  }
                  if (**(long **)(lVar4 + 0xb8) != 0) {
                    iVar1 = *(int *)(**(long **)(lVar4 + 0xb8) + 0x18);
                    if (0 < iVar1) {
                      iVar8 = 0;
                      do {
                        lVar4 = *plVar9;
                        if (*(int *)(lVar4 + 0xe4) == 0) {
                          thunk_FUN_02b9ad44();
                          lVar4 = *plVar9;
                        }
                        if ((**(long **)(lVar4 + 0xb8) == 0) ||
                           (lVar4 = FUN_037a6268(**(long **)(lVar4 + 0xb8),iVar8,
                                                 *(undefined8 *)StringLiteral_797), lVar4 == 0))
                        goto LAB_05f8f220;
                        uVar10 = *(undefined8 *)(lVar4 + 0x10);
                        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                          thunk_FUN_02b9ad44();
                        }
                        uVar3 = FUN_05c8e378(uVar10,param_1,0);
                        if (((((uVar3 & 1) != 0) && (*(int *)(lVar4 + 0x24) == param_2)) &&
                            (*(int *)(lVar4 + 0x28) == param_3)) &&
                           (((*(int *)(lVar4 + 0x2c) == param_4 &&
                             (*(int *)(lVar4 + 0x30) == param_6)) &&
                            ((*(int *)(lVar4 + 0x34) == param_7 &&
                             (*(int *)(lVar4 + 0x3c) == param_5)))))) {
                          *(int *)(lVar4 + 0x20) = *(int *)(lVar4 + 0x20) + 1;
                          return *(long *)(lVar4 + 0x18);
                        }
                        iVar8 = iVar8 + 1;
                        plVar9 = (long *)Method_System_Char_System_IConvertible_ToDecimal__;
                      } while (iVar1 != iVar8);
                    }
                    lVar4 = thunk_FUN_02b79644(*(undefined8 *)StringLiteral_798);
                    *(undefined4 *)(lVar4 + 0x2c) = 8;
                    FUN_04dbdb8c(lVar4,0);
                    *(undefined4 *)(lVar4 + 0x20) = 1;
                    *(long *)(lVar4 + 0x10) = param_1;
                    thunk_FUN_02bb0e9c((long *)(lVar4 + 0x10),param_1);
                    lVar5 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06313778);
                    FUN_05c59798(lVar5,param_1,0);
                    plVar9 = (long *)(lVar4 + 0x18);
                    *plVar9 = lVar5;
                    thunk_FUN_02bb0e9c(plVar9,lVar5);
                    if (*plVar9 != 0) {
                      FUN_05c9364c(*plVar9,0x3d,0);
                      *(int *)(lVar4 + 0x24) = param_2;
                      *(int *)(lVar4 + 0x28) = param_3;
                      *(int *)(lVar4 + 0x2c) = param_4;
                      *(int *)(lVar4 + 0x30) = param_6;
                      puVar2 = PTR_DAT_06313048;
                      lVar7 = *(long *)(lVar4 + 0x18);
                      *(int *)(lVar4 + 0x34) = param_7;
                      uVar10 = *(undefined8 *)puVar2;
                      *(int *)(lVar4 + 0x3c) = param_5;
                      *(bool *)(lVar4 + 0x38) =
                           (param_3 != 0 && param_7 != 0) && (param_3 == 0 || -1 < param_7);
                      lVar5 = FUN_02b3c908(uVar10,8);
                      puVar2 = PTR_DAT_06312310;
                      local_64 = param_2;
                      uVar10 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                         (*(undefined8 *)(PTR_DAT_06312310 + 0x48),&local_64);
                      if (lVar5 != 0) {
                        FUN_0275a400(lVar5,uVar10);
                        FUN_0275a434(lVar5,0,uVar10);
                        local_68 = param_3;
                        uVar10 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                           (*(undefined8 *)StringLiteral_799,&local_68);
                        FUN_0275a400(lVar5,uVar10);
                        FUN_0275a434(lVar5,1,uVar10);
                        local_6c = param_4;
                        uVar10 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                           (*(undefined8 *)StringLiteral_794,&local_6c);
                        FUN_0275a400(lVar5,uVar10);
                        FUN_0275a434(lVar5,2,uVar10);
                        local_70 = param_7;
                        uVar10 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                           (*(undefined8 *)(puVar2 + 0x48),&local_70);
                        FUN_0275a400(lVar5,uVar10);
                        FUN_0275a434(lVar5,3,uVar10);
                        local_74 = param_6;
                        uVar10 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                           (*(undefined8 *)(puVar2 + 0x48),&local_74);
                        FUN_0275a400(lVar5,uVar10);
                        FUN_0275a434(lVar5,4,uVar10);
                        local_78 = param_5;
                        uVar10 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                           (*(undefined8 *)StringLiteral_793,&local_78);
                        FUN_0275a400(lVar5,uVar10);
                        FUN_0275a434(lVar5,5,uVar10);
                        local_7c[0] = *(undefined1 *)(lVar4 + 0x38);
                        uVar10 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                                           (*(undefined8 *)(puVar2 + 0x28),local_7c);
                        FUN_0275a400(lVar5,uVar10);
                        FUN_0275a434(lVar5,6,uVar10);
                        uVar10 = thunk_FUN_05c92238(param_1,0);
                        FUN_0275a400(lVar5,uVar10);
                        FUN_0275a434(lVar5,7,uVar10);
                        uVar10 = FUN_04c0afb0(*(undefined8 *)StringLiteral_809,lVar5,0);
                        if (lVar7 != 0) {
                          thunk_FUN_05c9238c(lVar7,uVar10,0);
                          puVar2 = Method_System_Char_System_IConvertible_ToDecimal__;
                          if (*plVar9 != 0) {
                            FUN_05c5ce90((float)param_2,*plVar9,
                                         *(undefined8 *)
                                          Method_UnityEngine_Component_GetComponentsInChildren<TrackSlot>__
                                         ,0);
                            if (*plVar9 != 0) {
                              FUN_05c5ce90((float)param_3,*plVar9,
                                           *(undefined8 *)
                                            UnityEngine_Rendering_Universal_DebugLightingFeatureFlags_TypeInfo
                                           ,0);
                              if (*plVar9 != 0) {
                                FUN_05c5ce90((float)param_4,*plVar9,
                                             *(undefined8 *)
                                              Method_UnityEngine_Component_GetComponentsInChildren<PlacePoint>__
                                             ,0);
                                if (*plVar9 != 0) {
                                  FUN_05c5ce90((float)param_6,*plVar9,
                                               *(undefined8 *)
                                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WebRequestStream_<Initialize>d__36>__
                                               ,0);
                                  if (*plVar9 != 0) {
                                    FUN_05c5ce90((float)param_7,*plVar9,
                                                 *(undefined8 *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_WebRequestStream_<WriteAsyncInner>d__33>__
                                                 ,0);
                                    if (*plVar9 != 0) {
                                      FUN_05c5ce90((float)param_5,*plVar9,
                                                   *(undefined8 *)
                                                                                                        
                                                  Meta_XR_ImmersiveDebugger_Manager_DebugManager_TypeInfo
                                                  ,0);
                                      if (*(long *)(lVar4 + 0x18) != 0) {
                                        uVar11 = 0;
                                        if (*(char *)(lVar4 + 0x38) != '\0') {
                                          uVar11 = 0x3f800000;
                                        }
                                        FUN_05c5ce90(uVar11,*(long *)(lVar4 + 0x18),
                                                     *(undefined8 *)StringLiteral_806,0);
                                        lVar5 = *(long *)(lVar4 + 0x18);
                                        if (*(char *)(lVar4 + 0x38) == '\0') {
                                          if (lVar5 == 0) goto LAB_05f8f220;
                                          FUN_05c5a4c4(lVar5,*(undefined8 *)StringLiteral_802,0);
                                        }
                                        else {
                                          if (lVar5 == 0) goto LAB_05f8f220;
                                          FUN_05c5a2c0(lVar5,*(undefined8 *)StringLiteral_802,0);
                                        }
                                        lVar5 = *(long *)puVar2;
                                        if (*(int *)(lVar5 + 0xe4) == 0) {
                                          thunk_FUN_02b9ad44();
                                          lVar5 = *(long *)puVar2;
                                        }
                                        if (**(long **)(lVar5 + 0xb8) != 0) {
                                          FUN_0275a748(**(long **)(lVar5 + 0xb8),lVar4,
                                                       *(undefined8 *)StringLiteral_795);
                                          return *(long *)(lVar4 + 0x18);
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
LAB_05f8f220:
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                uVar10 = thunk_FUN_05c92238(param_1,0);
                puVar6 = (undefined8 *)StringLiteral_804;
              }
            }
          }
        }
      }
      uVar10 = FUN_04c0a5c4(*(undefined8 *)StringLiteral_803,uVar10,*puVar6,0);
      if (*(int *)(*(long *)Method_System_Char_System_IConvertible_ToDecimal__ + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)Method_System_Char_System_IConvertible_ToDecimal__);
      }
      FUN_05f8f224(uVar10,param_1);
    }
  }
  return param_1;
}


