/*
FUNCTION_NAME: FUN_0234c520
ENTRY_POINT: 0234c520
PROGRAM: Lovesick-libil2cpp.so
SCORE: 107
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0234c520(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_64;
  undefined *puVar12;
  
  puVar12 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  if ((DAT_03781d21 & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<ValueTuple<Type,_int>,_Stack<object>>_TryGetValue__
                      );
    thunk_FUN_00d48444(Method_SaveData_<>c__DisplayClass127_0_<AddCharacterManagerData>b__1__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_MB_TexArrayForProperty>_MoveNext__
                      );
    thunk_FUN_00d48444(Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f5aa8);
    thunk_FUN_00d48444(StringLiteral_3715);
    thunk_FUN_00d48444(Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__);
    thunk_FUN_00d48444(StringLiteral_4747);
    thunk_FUN_00d48444(Method_TMPro_TMP_Dropdown_SetAlpha__);
    thunk_FUN_00d48444(OVRManager_XrApi_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f6e48);
    thunk_FUN_00d48444(StringLiteral_9754);
    thunk_FUN_00d48444(PTR_DAT_033ee588);
    thunk_FUN_00d48444(StringLiteral_11214);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                      );
    thunk_FUN_00d48444(UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo);
    thunk_FUN_00d48444(Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<GameObject,_MB3_MeshCombinerSingle_MB_DynamicGameObject>_Clear__
                      );
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    DAT_03781d21 = 1;
  }
  if (*(int *)(*(long *)puVar12 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar3 = FUN_0268b4e0(param_1,0,0);
  if ((uVar3 & 1) == 0) {
    if (param_2 != 0) {
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<GameObject,_MB3_MeshCombinerSingle_MB_DynamicGameObject>_Clear__
                                );
      if ((lVar4 != 0) &&
         (FUN_01320e50(lVar4,*(undefined8 *)StringLiteral_11214),
         puVar12 = Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo, param_1 != 0)) {
        uVar5 = FUN_0230bd48(param_1,0,0);
        lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar12);
        if (lVar6 != 0) {
          FUN_01320f6c(lVar6,uVar5,*(undefined8 *)StringLiteral_9754);
          lVar7 = FUN_0230fea8(param_1,0);
          puVar2 = 
          Method_System_Collections_Generic_Dictionary<ValueTuple<Type,_int>,_Stack<object>>_TryGetValue__
          ;
          puVar12 = Meta_WitAi_Configuration_WitEndpointConfig_TypeInfo;
          if (0 < (int)*(ulong *)(param_2 + 0x18)) {
            uVar3 = 0;
            uVar13 = *(ulong *)(param_2 + 0x18) & 0xffffffff;
            do {
              if (uVar13 <= uVar3) {
LAB_0234ca84:
                    /* WARNING: Subroutine does not return */
                FUN_00da5194();
              }
              lVar18 = *(long *)(param_2 + uVar3 * 8 + 0x20);
              lVar8 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_3715);
              if (lVar8 == 0) goto LAB_0234ca80;
              FUN_022fb2d8(lVar8,0);
              lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                                          Meta_XR_MRUtilityKit_SerializationHelpers_TypeInfo);
              if (lVar9 == 0) goto LAB_0234ca80;
              FUN_01320e50(lVar9,*(undefined8 *)PTR_DAT_033ee588);
              *(long *)(lVar8 + 0x18) = lVar9;
              lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                                          Method_Autohand_Demo_HandEventDebugger_<OnDisable>b__3_4__
                                        );
              if (lVar9 == 0) goto LAB_0234ca80;
              FUN_022f9928(lVar9,lVar18,0);
              *(long *)(lVar8 + 0x10) = lVar9;
              lVar9 = thunk_FUN_00d62348(*(undefined8 *)
                                          UnityEngine_InputSystem_UI_MultiplayerEventSystem_TypeInfo
                                        );
              if (lVar9 == 0) goto LAB_0234ca80;
              FUN_01320e50(lVar9,*(undefined8 *)PTR_DAT_033f6e48);
              *(long *)(lVar8 + 0x20) = lVar9;
              lVar9 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033f5aa8);
              if (lVar9 == 0) goto LAB_0234ca80;
              FUN_01298da0(lVar9,*(undefined8 *)
                                  Method_SaveData_<>c__DisplayClass127_0_<AddCharacterManagerData>b__1__
                          );
              if ((*(long *)(lVar8 + 0x10) == 0) ||
                 (lVar14 = *(long *)(*(long *)(lVar8 + 0x10) + 0x10), lVar14 == 0))
              goto LAB_0234ca80;
              uVar13 = *(ulong *)(lVar14 + 0x18);
              uVar16 = (uint)uVar13;
              if (0 < (int)uVar16) {
                if (lVar18 == 0) goto LAB_0234ca80;
                lVar14 = 8;
                do {
                  lVar15 = *(long *)(lVar18 + 0x10);
                  if (lVar15 == 0) goto LAB_0234ca80;
                  uVar17 = lVar14 - 8;
                  if (*(uint *)(lVar15 + 0x18) <= uVar17) goto LAB_0234ca84;
                  local_70 = *(undefined4 *)(lVar15 + lVar14 * 4);
                  uVar10 = FUN_0129aa60(lVar9,&local_70,*(undefined8 *)puVar2);
                  if ((uVar10 & 1) == 0) {
                    lVar15 = *(long *)(lVar18 + 0x10);
                    if (lVar15 == 0) goto LAB_0234ca80;
                    if (*(uint *)(lVar15 + 0x18) <= uVar17) goto LAB_0234ca84;
                    uVar1 = *(undefined4 *)(lVar15 + lVar14 * 4);
                    local_64 = GreenerGames_SecondaryKeyDictionary<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ContainsSecondaryKey
                                         (lVar9,*(undefined8 *)
                                                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_MB_TexArrayForProperty>_MoveNext__
                                         );
                    local_70 = uVar1;
                    FUN_0129a054(lVar9,&local_70,&local_64,
                                 *(undefined8 *)Method_OVRGLTFAnimatinonNode_CopyData<Vector3>__);
                    lVar15 = *(long *)(lVar18 + 0x10);
                    if (lVar15 == 0) goto LAB_0234ca80;
                    if (*(uint *)(lVar15 + 0x18) <= uVar17) goto LAB_0234ca84;
                    lVar19 = *(long *)(lVar8 + 0x18);
                    FUN_0132138c(lVar6,*(undefined4 *)(lVar15 + lVar14 * 4),&local_70,
                                 *(undefined8 *)
                                  Method_Oculus_Interaction_InteractableRegistry_InteractableSet<GrabInteractor,_GrabInteractable>_GetEnumerator__
                                );
                    if (lVar19 == 0) goto LAB_0234ca80;
                    FUN_00ca0af8(lVar19,CONCAT44(uStack_6c,local_70),
                                 *(undefined8 *)OVRManager_XrApi_TypeInfo);
                    lVar15 = *(long *)(lVar18 + 0x10);
                    if (lVar15 == 0) goto LAB_0234ca80;
                    if (*(uint *)(lVar15 + 0x18) <= uVar17) goto LAB_0234ca84;
                    if (lVar7 == 0) goto LAB_0234ca80;
                    local_70 = *(undefined4 *)(lVar15 + lVar14 * 4);
                    lVar15 = *(long *)(lVar8 + 0x20);
                    FUN_01299bc0(lVar7,&local_70,&local_64,*(undefined8 *)puVar12);
                    if (lVar15 == 0) goto LAB_0234ca80;
                    FUN_00ac20f0(lVar15,local_64,*(undefined8 *)StringLiteral_4747);
                  }
                  lVar14 = lVar14 + 1;
                } while (lVar14 - (uVar13 & 0xffffffff) != 8);
              }
              lVar18 = FUN_00da4fb8(*(undefined8 *)
                                     Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,uVar13);
              lVar14 = *(long *)(lVar8 + 0x10);
              if (lVar14 == 0) goto LAB_0234ca80;
              uVar13 = 0;
              lVar15 = (long)(int)uVar16;
              while (uVar16 = uVar16 - 1, (long)uVar13 < lVar15) {
                local_70 = FUN_022f96bc(lVar14,uVar13 & 0xffffffff,0);
                FUN_01299bc0(lVar9,&local_70,&local_64,*(undefined8 *)puVar12);
                if (lVar18 == 0) goto LAB_0234ca80;
                if (*(uint *)(lVar18 + 0x18) <= uVar16) goto LAB_0234ca84;
                uVar13 = uVar13 + 1;
                *(undefined4 *)(lVar18 + (long)(int)uVar16 * 4 + 0x20) = local_64;
                lVar14 = *(long *)(lVar8 + 0x10);
                if (lVar14 == 0) goto LAB_0234ca80;
              }
              FUN_022f9144(lVar14,lVar18,0);
              FUN_00ca11d0(lVar4,lVar8,*(undefined8 *)Method_TMPro_TMP_Dropdown_SetAlpha__);
              uVar13 = (ulong)*(uint *)(param_2 + 0x18);
              uVar3 = uVar3 + 1;
            } while ((long)uVar3 < (long)(int)*(uint *)(param_2 + 0x18));
          }
          FUN_022fabf0(lVar4,param_1,lVar6,0,0);
          return;
        }
      }
LAB_0234ca80:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar5 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar12 = MetaXRAcousticNativeInterface_UnityNativeInterface_TypeInfo;
  }
  else {
    thunk_FUN_00d48444(PTR_DAT_033f37c8);
    uVar5 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    puVar12 = Method_System_Collections_Generic_List<NotePrefabMapping_PrefabPoolEntry>_get_Count__;
  }
  uVar11 = thunk_FUN_00d48444(puVar12);
  FUN_016ec5b8(uVar5,uVar11,0);
  uVar11 = thunk_FUN_00d48444(StringLiteral_9515);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar5,uVar11);
}


