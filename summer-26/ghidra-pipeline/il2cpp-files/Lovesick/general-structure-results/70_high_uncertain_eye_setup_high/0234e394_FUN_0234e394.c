/*
FUNCTION_NAME: FUN_0234e394
ENTRY_POINT: 0234e394
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_0234e394(long param_1,long param_2,long param_3,uint param_4)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined4 *puVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  long lVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  long local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long local_a8;
  undefined4 local_98;
  undefined4 local_94;
  undefined *puVar19;
  
  puVar19 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_03781d23 & 1) == 0) {
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vclzq_s8__);
    thunk_FUN_00d48444(Method_SaveData_<>c__DisplayClass127_0_<AddCharacterManagerData>b__1__);
    thunk_FUN_00d48444(Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f5aa8);
    thunk_FUN_00d48444(StringLiteral_2362);
    thunk_FUN_00d48444(StringLiteral_3715);
    thunk_FUN_00d48444(Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__);
    thunk_FUN_00d48444(StringLiteral_4747);
    thunk_FUN_00d48444(Method_TMPro_TMP_Dropdown_SetAlpha__);
    thunk_FUN_00d48444(OVRManager_XrApi_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Layouts_InputDeviceMatcher_WithCapability<AndroidSensorType>__
                      );
    thunk_FUN_00d48444(
                      Method_System_Threading_Tasks_TaskCompletionSource<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_TrySetResult__
                      );
    thunk_FUN_00d48444(StringLiteral_10837);
    thunk_FUN_00d48444(PTR_DAT_033f6e48);
    thunk_FUN_00d48444(System_Runtime_Remoting_Messaging_IInternalMessage_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ee588);
    thunk_FUN_00d48444(StringLiteral_11214);
    thunk_FUN_00d48444(PTR_DAT_033ef0a8);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_JsonDataWriter_EnsureBufferSpace__);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Grabbable>_Contains__);
    thunk_FUN_00d48444(UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
    thunk_FUN_00d48444(Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<GameObject,_MB3_MeshCombinerSingle_MB_DynamicGameObject>_Clear__
                      );
    thunk_FUN_00d48444(Oculus_Interaction_TouchHandGrabInteractor_FingerStatus_TypeInfo);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_Texture2D_var);
    thunk_FUN_00d48444(Method_System_Decimal_DecCalc_VarDecFromR4__);
    DAT_03781d23 = 1;
  }
  local_a8 = 0;
  local_98 = 0;
  if (*(int *)(*(long *)puVar19 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar7 = FUN_0268b4e0(param_1,0,0);
  puVar3 = StringLiteral_2362;
  puVar19 = Oculus_Interaction_TouchHandGrabInteractor_FingerStatus_TypeInfo;
  if ((uVar7 & 1) == 0) {
    if (param_2 == 0) {
      thunk_FUN_00d48444(PTR_DAT_033f37c8);
      uVar8 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      puVar19 = Method_System_Collections_Generic_List<MetaXRAcousticGeometry_MeshMaterial>_Add__;
    }
    else {
      if (param_3 != 0) {
        if (param_1 != 0) {
          uVar8 = FUN_0230bd48(param_1,0,0);
          lVar9 = FUN_010dfe04(uVar8,*(undefined8 *)puVar3);
          uVar8 = *(undefined8 *)(param_1 + 0x20);
          lVar10 = thunk_FUN_00d62348(*(undefined8 *)puVar19);
          if (lVar10 != 0) {
            FUN_01320f6c(lVar10,uVar8,
                         *(undefined8 *)System_Runtime_Remoting_Messaging_IInternalMessage_TypeInfo)
            ;
            lVar11 = FUN_0230fea8(param_1,0);
            if (*(long *)(param_1 + 0x40) == 0) {
              lVar12 = 0;
            }
            else {
              lVar12 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f5aa8);
              if (lVar12 == 0) goto LAB_0234ecf4;
              FUN_01298da0(lVar12,*(undefined8 *)
                                   Method_SaveData_<>c__DisplayClass127_0_<AddCharacterManagerData>b__1__
                          );
              FUN_0232f164(*(undefined8 *)(param_1 + 0x40),lVar12,0);
            }
            puVar19 = Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo;
            if (*(int *)(*(long *)Method_System_Decimal_DecCalc_VarDecFromR4__ + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            lVar13 = FUN_0233dbd8(param_2,0);
            lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar19);
            puVar19 = UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo;
            if (lVar14 != 0) {
              FUN_01320e50(lVar14,*(undefined8 *)PTR_DAT_033ee588);
              lVar15 = thunk_FUN_00d62348(*(undefined8 *)puVar19);
              puVar3 = PTR_DAT_033f6e48;
              if (lVar15 != 0) {
                FUN_01320e50(lVar15,*(undefined8 *)PTR_DAT_033f6e48);
                lVar16 = 0;
                if (lVar12 != 0) {
                  lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar19);
                  if (lVar16 == 0) goto LAB_0234ecf4;
                  FUN_01320e50(lVar16,*(undefined8 *)puVar3);
                }
                puVar6 = StringLiteral_4747;
                puVar5 = Method_System_Collections_Generic_List<Grabbable>_Contains__;
                puVar4 = 
                Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                ;
                puVar3 = OVRManager_XrApi_TypeInfo;
                puVar19 = Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo;
                if (lVar13 != 0) {
                  if (0 < *(int *)(lVar13 + 0x18)) {
                    iVar21 = 0;
                    do {
                      FUN_0132138c(lVar13,iVar21,&local_d0,*(undefined8 *)puVar5);
                      if (lVar9 == 0) goto LAB_0234ecf4;
                      FUN_0132138c(lVar9,local_d0,&local_d0,*(undefined8 *)puVar4);
                      FUN_00ca0af8(lVar14,local_d0,*(undefined8 *)puVar3);
                      FUN_0132138c(lVar13,iVar21,&local_d0,*(undefined8 *)puVar5);
                      if (lVar11 == 0) goto LAB_0234ecf4;
                      FUN_01299bc0(lVar11,&local_d0,&local_94,*(undefined8 *)puVar19);
                      FUN_00ac20f0(lVar15,local_94,*(undefined8 *)puVar6);
                      if (lVar12 != 0) {
                        FUN_0132138c(lVar13,iVar21,&local_d0,*(undefined8 *)puVar5);
                        uVar7 = FUN_0129eff4(lVar12,&local_d0,&local_98,
                                             *(undefined8 *)
                                              Method_Unity_Burst_Intrinsics_Arm_Neon_vclzq_s8__);
                        if ((uVar7 & 1) == 0) {
                          if (lVar16 == 0) goto LAB_0234ecf4;
                          uVar33 = 0xffffffff;
                        }
                        else {
                          uVar33 = local_98;
                          if (lVar16 == 0) goto LAB_0234ecf4;
                        }
                        FUN_00ac20f0(lVar16,uVar33,*(undefined8 *)puVar6);
                      }
                      iVar21 = iVar21 + 1;
                    } while (iVar21 < *(int *)(lVar13 + 0x18));
                  }
                  puVar3 = 
                  Method_System_Threading_Tasks_TaskCompletionSource<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_TrySetResult__
                  ;
                  puVar19 = UnityEngine_Texture2D_var;
                  uVar7 = *(ulong *)(param_3 + 0x18) & 0xffffffff;
                  iVar21 = (int)*(ulong *)(param_3 + 0x18);
                  if ((param_4 & 1) == 0) {
                    if (0 < iVar21) {
                      uVar20 = 0;
                      puVar24 = (undefined4 *)(param_3 + 0x28);
                      do {
                        if (uVar7 <= uVar20) goto LAB_0234ecf8;
                        uVar33 = puVar24[-2];
                        uVar34 = puVar24[-1];
                        uVar35 = *puVar24;
                        lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar19);
                        if (lVar13 == 0) goto LAB_0234ecf4;
                        FUN_023392a0(lVar13,0);
                        FUN_02338f44(uVar33,uVar34,uVar35,lVar13,0);
                        FUN_01323a14(lVar14,0,lVar13,
                                     *(undefined8 *)
                                      Method_UnityEngine_InputSystem_Layouts_InputDeviceMatcher_WithCapability<AndroidSensorType>__
                                    );
                        local_d0 = CONCAT44(local_d0._4_4_,0xffffffff);
                        FUN_01323a14(lVar15,0,&local_d0,*(undefined8 *)puVar3);
                        if (lVar16 != 0) {
                          local_d0 = CONCAT44(local_d0._4_4_,0xffffffff);
                          FUN_01323a14(lVar16,0,&local_d0,*(undefined8 *)puVar3);
                        }
                        uVar7 = (ulong)*(uint *)(param_3 + 0x18);
                        uVar20 = uVar20 + 1;
                        puVar24 = puVar24 + 3;
                      } while ((long)uVar20 < (long)(int)*(uint *)(param_3 + 0x18));
                    }
                  }
                  else if (0 < iVar21) {
                    uVar20 = 0;
                    do {
                      if (uVar7 <= uVar20) {
LAB_0234ecf8:
                    /* WARNING: Subroutine does not return */
                        FUN_00da5194();
                      }
                      lVar13 = param_3 + uVar20 * 0xc;
                      iVar21 = *(int *)(lVar14 + 0x18);
                      fVar32 = *(float *)(lVar13 + 0x20);
                      fVar31 = *(float *)(lVar13 + 0x24);
                      fVar30 = *(float *)(lVar13 + 0x28);
                      uVar8 = *(undefined8 *)puVar4;
                      if (iVar21 < 1) {
                        iVar23 = -1;
                      }
                      else {
                        fVar27 = INFINITY;
                        iVar25 = 0;
                        iVar22 = -1;
                        do {
                          FUN_0132138c(lVar14,iVar25,&local_d0,uVar8);
                          if (local_d0 == 0) goto LAB_0234ecf4;
                          uVar33 = *(undefined4 *)(local_d0 + 0x10);
                          uVar34 = *(undefined4 *)(local_d0 + 0x14);
                          uVar35 = *(undefined4 *)(local_d0 + 0x18);
                          iVar1 = iVar25 + 1;
                          iVar23 = 0;
                          if (iVar1 != iVar21) {
                            iVar23 = iVar25 + 1;
                          }
                          FUN_0132138c(lVar14,iVar23,&local_d0,*(undefined8 *)puVar4);
                          if (local_d0 == 0) goto LAB_0234ecf4;
                          fVar26 = (float)FUN_023018b8(fVar32,fVar31,fVar30,uVar33,uVar34,uVar35,0);
                          uVar8 = *(undefined8 *)puVar4;
                          iVar23 = iVar25;
                          if (fVar27 <= fVar26) {
                            iVar23 = iVar22;
                            fVar26 = fVar27;
                          }
                          fVar27 = fVar26;
                          iVar25 = iVar1;
                          iVar22 = iVar23;
                        } while (iVar1 != iVar21);
                      }
                      FUN_0132138c(lVar14,iVar23,&local_d0,uVar8);
                      lVar13 = local_d0;
                      iVar25 = 0;
                      if (iVar21 != 0) {
                        iVar25 = (iVar23 + 1) / iVar21;
                      }
                      iVar21 = (iVar23 + 1) - iVar25 * iVar21;
                      FUN_0132138c(lVar14,iVar21,&local_d0,*(undefined8 *)puVar4);
                      if ((lVar13 == 0) || (local_d0 == 0)) goto LAB_0234ecf4;
                      fVar27 = fVar32 - *(float *)(lVar13 + 0x10);
                      fVar32 = fVar32 - *(float *)(local_d0 + 0x10);
                      fVar26 = fVar31 - *(float *)(lVar13 + 0x14);
                      fVar31 = fVar31 - *(float *)(local_d0 + 0x14);
                      fVar29 = fVar30 - *(float *)(lVar13 + 0x18);
                      fVar30 = fVar30 - *(float *)(local_d0 + 0x18);
                      fVar27 = fVar27 * fVar27 + fVar26 * fVar26 + fVar29 * fVar29;
                      uVar8 = FUN_0233bc34(fVar27 / (fVar27 + fVar32 * fVar32 + fVar31 * fVar31 +
                                                              fVar30 * fVar30),lVar13,local_d0,0);
                      FUN_01323a14(lVar14,iVar21,uVar8,
                                   *(undefined8 *)
                                    Method_UnityEngine_InputSystem_Layouts_InputDeviceMatcher_WithCapability<AndroidSensorType>__
                                  );
                      local_d0 = CONCAT44(local_d0._4_4_,0xffffffff);
                      FUN_01323a14(lVar15,iVar21,&local_d0,*(undefined8 *)puVar3);
                      if (lVar16 != 0) {
                        local_d0 = CONCAT44(local_d0._4_4_,0xffffffff);
                        FUN_01323a14(lVar16,iVar21,&local_d0,*(undefined8 *)puVar3);
                      }
                      uVar20 = uVar20 + 1;
                      uVar7 = (ulong)*(uint *)(param_3 + 0x18);
                    } while ((long)uVar20 < (long)(int)*(uint *)(param_3 + 0x18));
                  }
                  FUN_0237620c(lVar14,&local_a8,1,0,0);
                  lVar13 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3715);
                  if ((lVar13 != 0) &&
                     (FUN_022fb2d8(lVar13,0),
                     puVar19 = Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__,
                     local_a8 != 0)) {
                    uVar8 = FUN_01325140(local_a8,*(undefined8 *)StringLiteral_10837);
                    fVar32 = 0.0;
                    uStack_d8 = *(undefined8 *)(param_2 + 0x34);
                    uStack_e0 = *(undefined8 *)(param_2 + 0x2c);
                    uStack_e8 = *(undefined8 *)(param_2 + 0x24);
                    local_f0 = *(undefined8 *)(param_2 + 0x1c);
                    uVar33 = *(undefined4 *)(param_2 + 0x48);
                    uStack_c8 = 0;
                    local_d0 = 0;
                    uStack_b8 = 0;
                    uStack_c0 = 0;
                    FUN_022eff30(&local_d0,&local_f0,0);
                    uVar34 = *(undefined4 *)(param_2 + 0x18);
                    uVar35 = *(undefined4 *)(param_2 + 0x54);
                    cVar2 = *(char *)(param_2 + 0x4c);
                    lVar17 = thunk_FUN_00d62348(*(undefined8 *)puVar19);
                    puVar19 = 
                    Method_System_Collections_Generic_Dictionary<GameObject,_MB3_MeshCombinerSingle_MB_DynamicGameObject>_Clear__
                    ;
                    if (lVar17 != 0) {
                      uStack_108 = uStack_c8;
                      local_110 = local_d0;
                      uStack_f8 = uStack_b8;
                      uStack_100 = uStack_c0;
                      lVar28 = local_d0;
                      FUN_022f986c(lVar17,uVar8,uVar33,&local_110,uVar34,uVar35,0xffffffff,
                                   cVar2 != '\0',0);
                      fVar31 = (float)lVar28;
                      *(long *)(lVar13 + 0x10) = lVar17;
                      *(long *)(lVar13 + 0x18) = lVar14;
                      *(long *)(lVar13 + 0x20) = lVar15;
                      *(long *)(lVar13 + 0x28) = lVar16;
                      lVar14 = thunk_FUN_00d62348(*(undefined8 *)puVar19);
                      puVar19 = Method_TMPro_TMP_Dropdown_SetAlpha__;
                      if (lVar14 != 0) {
                        FUN_01320e50(lVar14,*(undefined8 *)StringLiteral_11214);
                        FUN_00ca11d0(lVar14,lVar13,*(undefined8 *)puVar19);
                        FUN_022fad74(lVar14,lVar9,lVar10,lVar11,lVar12,0);
                        lVar13 = *(long *)(lVar13 + 0x10);
                        FUN_02310a38(param_1,lVar9,0,0);
                        FUN_0230f6a8(param_1,lVar10,0);
                        FUN_0230ff4c(param_1,lVar11,0);
                        FUN_02310070(param_1,lVar12,0);
                        fVar26 = (float)FUN_02302c7c(param_1,param_2,0);
                        fVar30 = fVar31;
                        fVar27 = fVar32;
                        fVar29 = (float)FUN_02302c7c(param_1,lVar13,0);
                        if (fVar32 * fVar27 + fVar26 * fVar29 + fVar31 * fVar30 < 0.0) {
                          if (lVar13 == 0) goto LAB_0234ecf4;
                          FUN_022fa1b4(lVar13,0);
                        }
                        FUN_0234ee30(param_1,param_2);
                        return lVar13;
                      }
                    }
                  }
                }
              }
            }
          }
        }
LAB_0234ecf4:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      thunk_FUN_00d48444(PTR_DAT_033f37c8);
      uVar8 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      puVar19 = System_IComparable<T>_var;
    }
  }
  else {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar8 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar19 = Method_System_Collections_Generic_List<NotePrefabMapping_PrefabPoolEntry>_get_Count__;
  }
  uVar18 = thunk_FUN_00d48444(puVar19);
  FUN_016ec5b8(uVar8,uVar18,0);
  uVar18 = thunk_FUN_00d48444(System_Action<string,_float>_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar8,uVar18);
}


