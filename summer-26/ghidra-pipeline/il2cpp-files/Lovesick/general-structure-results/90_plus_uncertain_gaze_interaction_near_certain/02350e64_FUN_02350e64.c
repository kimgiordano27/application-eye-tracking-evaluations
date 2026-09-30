/*
FUNCTION_NAME: FUN_02350e64
ENTRY_POINT: 02350e64
PROGRAM: Lovesick-libil2cpp.so
SCORE: 123
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_5;paired_field_refs_with_eye_source;functionality_gaze_interaction_hits_1
*/


undefined8
FUN_02350e64(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined4 uVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  long local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulong local_90;
  long local_88;
  undefined4 local_78;
  undefined4 local_74;
  undefined *puVar22;
  
  puVar22 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_03781d26 & 1) == 0) {
    thunk_FUN_00d48444(StringLiteral_6798);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vclzq_s8__);
    thunk_FUN_00d48444(Method_SaveData_<>c__DisplayClass127_0_<AddCharacterManagerData>b__1__);
    thunk_FUN_00d48444(Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f5aa8);
    thunk_FUN_00d48444(
                      Method_MedleyBossPhase3_<FireCoroutine>d__42_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_StyleDataRef<TransitionData>_CopyFrom__);
    thunk_FUN_00d48444(StringLiteral_2362);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<Touch>_MoveNext__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f5998);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpminq_u16__);
    thunk_FUN_00d48444(StringLiteral_3715);
    thunk_FUN_00d48444(Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__);
    thunk_FUN_00d48444(StringLiteral_5105);
    thunk_FUN_00d48444(StringLiteral_4747);
    thunk_FUN_00d48444(Method_TMPro_TMP_Dropdown_SetAlpha__);
    thunk_FUN_00d48444(OVRManager_XrApi_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<object,_InputActionChange>>_AddCallback__
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
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_LastOrDefault<__Il2CppFullySharedGenericType>__
                      );
    thunk_FUN_00d48444(PTR_DAT_033f3268);
    thunk_FUN_00d48444(UnityEngine_Texture2D_var);
    thunk_FUN_00d48444(Method_System_Decimal_DecCalc_VarDecFromR4__);
    DAT_03781d26 = 1;
  }
  local_90 = 0;
  local_88 = 0;
  local_78 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  if (*(int *)(*(long *)puVar22 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar8 = FUN_0268b4e0(param_4,0,0);
  puVar4 = StringLiteral_2362;
  puVar22 = Oculus_Interaction_TouchHandGrabInteractor_FingerStatus_TypeInfo;
  if ((uVar8 & 1) == 0) {
    if (param_5 != 0) {
      if (param_4 != 0) {
        uVar9 = FUN_0230bd48(param_4,0,0);
        lVar10 = FUN_010dfe04(uVar9,*(undefined8 *)puVar4);
        uVar9 = *(undefined8 *)(param_4 + 0x20);
        lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar22);
        if (lVar11 != 0) {
          FUN_01320f6c(lVar11,uVar9,
                       *(undefined8 *)System_Runtime_Remoting_Messaging_IInternalMessage_TypeInfo);
          lVar12 = FUN_0230fea8(param_4,0);
          if (*(long *)(param_4 + 0x40) == 0) {
            lVar13 = 0;
          }
          else {
            lVar13 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f5aa8);
            if (lVar13 == 0) goto LAB_02351814;
            FUN_01298da0(lVar13,*(undefined8 *)
                                 Method_SaveData_<>c__DisplayClass127_0_<AddCharacterManagerData>b__1__
                        );
            FUN_0232f164(*(undefined8 *)(param_4 + 0x40),lVar13,0);
          }
          puVar22 = 
          Method_System_Collections_Generic_Dictionary<GameObject,_MB3_MeshCombinerSingle_MB_DynamicGameObject>_Clear__
          ;
          if (*(int *)(*(long *)Method_System_Decimal_DecCalc_VarDecFromR4__ + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar14 = FUN_0233dbd8(param_5,0);
          lVar15 = thunk_FUN_00d62348(*(undefined8 *)puVar22);
          puVar22 = UnityEngine_Texture2D_var;
          if (lVar15 != 0) {
            FUN_01320e50(lVar15,*(undefined8 *)StringLiteral_11214);
            lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar22);
            if (lVar16 != 0) {
              FUN_023392a0(lVar16,0);
              FUN_02338f44(param_1,lVar16,0);
              if (lVar14 != 0) {
                if (0 < *(int *)(lVar14 + 0x18)) {
                  iVar24 = 0;
                  do {
                    puVar22 = Method_System_Collections_Generic_List<Grabbable>_Contains__;
                    lVar17 = thunk_FUN_00d62348(*(undefined8 *)
                                                 Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo)
                    ;
                    if (lVar17 == 0) goto LAB_02351814;
                    FUN_01320e50(lVar17,*(undefined8 *)PTR_DAT_033ee588);
                    lVar18 = thunk_FUN_00d62348(*(undefined8 *)
                                                 UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo
                                               );
                    if (lVar18 == 0) goto LAB_02351814;
                    FUN_01320e50(lVar18,*(undefined8 *)PTR_DAT_033f6e48);
                    if (lVar13 == 0) {
                      local_110 = 0;
                    }
                    else {
                      local_110 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                            
                                                  UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo
                                                  );
                      if (local_110 == 0) goto LAB_02351814;
                      FUN_01320e50(local_110,*(undefined8 *)PTR_DAT_033f6e48);
                    }
                    FUN_0132138c(lVar14,iVar24,&local_c0,*(undefined8 *)puVar22);
                    puVar4 = 
                    Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                    ;
                    if (lVar10 == 0) goto LAB_02351814;
                    FUN_0132138c(lVar10,local_c0,&local_c0,
                                 *(undefined8 *)
                                  Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                                );
                    puVar5 = OVRManager_XrApi_TypeInfo;
                    FUN_00ca0af8(lVar17,local_c0,*(undefined8 *)OVRManager_XrApi_TypeInfo);
                    FUN_0132138c(lVar14,iVar24,&local_c0,*(undefined8 *)puVar22);
                    FUN_0132138c(lVar10,local_c0._4_4_,&local_c0,*(undefined8 *)puVar4);
                    FUN_00ca0af8(lVar17,local_c0,*(undefined8 *)puVar5);
                    FUN_00ca0af8(lVar17,lVar16,*(undefined8 *)puVar5);
                    FUN_0132138c(lVar14,iVar24,&local_c0,*(undefined8 *)puVar22);
                    puVar4 = Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo;
                    if (lVar12 == 0) goto LAB_02351814;
                    FUN_01299bc0(lVar12,&local_c0,&local_74,
                                 *(undefined8 *)Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo)
                    ;
                    puVar5 = StringLiteral_4747;
                    FUN_00ac20f0(lVar18,local_74,*(undefined8 *)StringLiteral_4747);
                    FUN_0132138c(lVar14,iVar24,&local_c0,*(undefined8 *)puVar22);
                    local_c0 = CONCAT44(local_c0._4_4_,local_c0._4_4_);
                    FUN_01299bc0(lVar12,&local_c0,&local_74,*(undefined8 *)puVar4);
                    FUN_00ac20f0(lVar18,local_74,*(undefined8 *)puVar5);
                    FUN_00ac20f0(lVar18,*(undefined4 *)(lVar10 + 0x18),*(undefined8 *)puVar5);
                    if (lVar13 != 0) {
                      FUN_0129a9f4(lVar13,*(undefined8 *)StringLiteral_6798);
                      FUN_0132138c(lVar14,iVar24,&local_c0,*(undefined8 *)puVar22);
                      uVar8 = FUN_0129eff4(lVar13,&local_c0,&local_78,
                                           *(undefined8 *)
                                            Method_Unity_Burst_Intrinsics_Arm_Neon_vclzq_s8__);
                      puVar4 = StringLiteral_4747;
                      if ((uVar8 & 1) == 0) {
                        if (local_110 == 0) goto LAB_02351814;
                        uVar23 = 0xffffffff;
                      }
                      else {
                        uVar23 = local_78;
                        if (local_110 == 0) goto LAB_02351814;
                      }
                      FUN_00ac20f0(local_110,uVar23,*(undefined8 *)StringLiteral_4747);
                      FUN_0132138c(lVar14,iVar24,&local_c0,*(undefined8 *)puVar22);
                      local_c0 = CONCAT44(local_c0._4_4_,local_c0._4_4_);
                      uVar8 = FUN_0129eff4(lVar13,&local_c0,&local_78,
                                           *(undefined8 *)
                                            Method_Unity_Burst_Intrinsics_Arm_Neon_vclzq_s8__);
                      uVar23 = local_78;
                      if ((uVar8 & 1) == 0) {
                        uVar23 = 0xffffffff;
                      }
                      FUN_00ac20f0(local_110,uVar23,*(undefined8 *)puVar4);
                      FUN_00ac20f0(local_110,*(undefined4 *)(lVar10 + 0x18),*(undefined8 *)puVar4);
                    }
                    FUN_0237620c(lVar17,&local_88,1,0,0);
                    lVar19 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3715);
                    if ((lVar19 == 0) || (FUN_022fb2d8(lVar19,0), local_88 == 0)) goto LAB_02351814;
                    uVar9 = FUN_01325140(local_88,*(undefined8 *)StringLiteral_10837);
                    uStack_d8 = *(undefined8 *)(param_5 + 0x24);
                    local_e0 = *(undefined8 *)(param_5 + 0x1c);
                    uStack_c8 = *(undefined8 *)(param_5 + 0x34);
                    uStack_d0 = *(undefined8 *)(param_5 + 0x2c);
                    uVar23 = *(undefined4 *)(param_5 + 0x48);
                    uStack_b8 = 0;
                    local_c0 = 0;
                    uStack_a8 = 0;
                    local_b0 = 0;
                    FUN_022eff30(&local_c0,&local_e0,0);
                    uVar1 = *(undefined4 *)(param_5 + 0x18);
                    uVar2 = *(undefined4 *)(param_5 + 0x54);
                    cVar3 = *(char *)(param_5 + 0x4c);
                    lVar20 = thunk_FUN_00d62348(*(undefined8 *)
                                                 Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__
                                               );
                    if (lVar20 == 0) goto LAB_02351814;
                    uStack_f8 = uStack_b8;
                    local_100 = local_c0;
                    uStack_e8 = uStack_a8;
                    uStack_f0 = local_b0;
                    param_2 = local_b0;
                    FUN_022f986c(lVar20,uVar9,uVar23,&local_100,uVar1,uVar2,0xffffffff,cVar3 != '\0'
                                 ,0);
                    *(long *)(lVar19 + 0x10) = lVar20;
                    *(long *)(lVar19 + 0x18) = lVar17;
                    *(long *)(lVar19 + 0x20) = lVar18;
                    *(long *)(lVar19 + 0x28) = local_110;
                    FUN_00ca11d0(lVar15,lVar19,*(undefined8 *)Method_TMPro_TMP_Dropdown_SetAlpha__);
                    iVar24 = iVar24 + 1;
                  } while (iVar24 < *(int *)(lVar14 + 0x18));
                }
                puVar22 = PTR_DAT_033f3268;
                FUN_022fad74(lVar15,lVar10,lVar11,lVar12,lVar13,0);
                FUN_02310a38(param_4,lVar10,0,0);
                FUN_0230f6a8(param_4,lVar11,0);
                FUN_0230ff4c(param_4,lVar12,0);
                FUN_02310070(param_4,lVar13,0);
                lVar10 = *(long *)puVar22;
                if (*(int *)(lVar10 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar10 = *(long *)puVar22;
                }
                puVar4 = StringLiteral_5105;
                lVar11 = *(long *)(*(long *)(lVar10 + 0xb8) + 0x20);
                if (lVar11 == 0) {
                  if (*(int *)(lVar10 + 0xe0) == 0) {
                    thunk_FUN_00d32864();
                    lVar10 = *(long *)puVar22;
                  }
                  uVar9 = **(undefined8 **)(lVar10 + 0xb8);
                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
                  if (lVar11 == 0) goto LAB_02351814;
                  FUN_012d239c(lVar11,uVar9,
                               *(undefined8 *)
                                Method_System_Linq_Enumerable_LastOrDefault<__Il2CppFullySharedGenericType>__
                               ,0);
                  *(long *)(*(long *)(*(long *)puVar22 + 0xb8) + 0x20) = lVar11;
                }
                puVar7 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpminq_u16__;
                puVar6 = Method_UnityEngine_UIElements_StyleDataRef<TransitionData>_CopyFrom__;
                puVar5 = 
                Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray_Enumerator<Touch>_MoveNext__;
                puVar4 = 
                Method_UnityEngine_InputSystem_Utilities_CallbackArray<Action<object,_InputActionChange>>_AddCallback__
                ;
                puVar22 = PTR_DAT_033f5998;
                uVar9 = FUN_010dcdb8(lVar15,lVar11,
                                     *(undefined8 *)
                                      Method_MedleyBossPhase3_<FireCoroutine>d__42_System_Collections_IEnumerator_Reset__
                                    );
                uVar9 = FUN_010df6b8(uVar9,*(undefined8 *)puVar6);
                FUN_01323390(lVar15,&local_c0,*(undefined8 *)puVar4);
                uStack_98 = uStack_b8;
                local_a0 = local_c0;
                local_90 = local_b0;
                while( true ) {
                  fVar27 = (float)param_2;
                  uVar8 = FUN_012b894c(&local_a0,*(undefined8 *)puVar22);
                  if ((uVar8 & 1) == 0) {
                    FUN_012b8948(&local_a0,*(undefined8 *)puVar5);
                    FUN_0234ee30(param_4,param_5);
                    return uVar9;
                  }
                  lVar10 = FUN_00ca18d0(&local_a0,*(undefined8 *)puVar7);
                  if (lVar10 == 0) break;
                  lVar10 = *(long *)(lVar10 + 0x10);
                  fVar25 = (float)FUN_02302c7c(param_4,param_5,0);
                  uVar21 = param_3;
                  fVar28 = fVar27;
                  fVar26 = (float)FUN_02302c7c(param_4,lVar10,0);
                  fVar29 = (float)param_3 * (float)uVar21;
                  param_2 = (ulong)(uint)fVar29;
                  param_3 = uVar21;
                  if (fVar29 + fVar25 * fVar26 + fVar27 * fVar28 < 0.0) {
                    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00da518c();
                    }
                    FUN_022fa1b4(lVar10,0);
                    param_3 = uVar21;
                  }
                }
                    /* WARNING: Subroutine does not return */
                FUN_00da518c();
              }
            }
          }
        }
      }
LAB_02351814:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar9 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar22 = Method_System_Collections_Generic_List<MetaXRAcousticGeometry_MeshMaterial>_Add__;
  }
  else {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar9 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar22 = Method_System_Collections_Generic_List<NotePrefabMapping_PrefabPoolEntry>_get_Count__;
  }
  uVar21 = thunk_FUN_00d48444(puVar22);
  FUN_016ec5b8(uVar9,uVar21,0);
  uVar21 = thunk_FUN_00d48444(
                             Method_DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_NativeSliceCopy<Vector2>__
                             );
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar9,uVar21);
}


