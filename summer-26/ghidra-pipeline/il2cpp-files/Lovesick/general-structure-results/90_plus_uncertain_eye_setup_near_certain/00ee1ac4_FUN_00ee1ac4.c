/*
FUNCTION_NAME: FUN_00ee1ac4
ENTRY_POINT: 00ee1ac4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_00ee1ac4(long param_1,long param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
                    /* try { // try from 00ee1ae0 to 00fe1aff has its CatchHandler @ 00ee1ba8 */
  if ((DAT_0377532f & 1) == 0) {
    thunk_FUN_00d48444(
                      Field_<PrivateImplementationDetails>_A199F717FBA4D1378A33D65E9660E45ADC176876A3450BACF2A80DA985FBDF14
                      );
    thunk_FUN_00d48444(System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo_TypeInfo);
                    /* try { // try from 00ee1b1c to 00fe1b2f has its CatchHandler @ 00ee1bac */
    thunk_FUN_00d48444(
                      UnityEngine_XR_ARFoundation_SubsystemLifecycleManager<XRCameraSubsystem,_XRCameraSubsystemDescriptor,_XRCameraSubsystem_Provider>_TypeInfo
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<MRUKAnchor,_EffectMesh_EffectMeshObject>_GetEnumerator__
                      );
                    /* try { // try from 00ee1b30 to 00fe1b8f has its CatchHandler @ 00ee1a28 */
    thunk_FUN_00d48444(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033f1c28);
    thunk_FUN_00d48444(
                      System_Collections_Generic_List<IDebugDisplaySettingsPanelDisposable>_TypeInfo
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<OVRAnchor,_OVRSceneManager_RoomLayoutUuids>_Dispose__
                      );
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_get_Count__
                      );
    thunk_FUN_00d48444(StringLiteral_1415);
    thunk_FUN_00d48444(StringLiteral_4997);
    thunk_FUN_00d48444(StringLiteral_635);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_Select<Edge,_EdgeLookup>__);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_PoseDetection_FeatureStateProvider<TransformFeature,_string>_InitializeThresholds__
                      );
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    DAT_0377532f = 1;
  }
  puVar9 = StringLiteral_1415;
  puVar8 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  puVar7 = 
  Method_Oculus_Interaction_PoseDetection_FeatureStateProvider<TransformFeature,_string>_InitializeThresholds__
  ;
  puVar6 = 
  Method_System_Collections_Generic_Dictionary<MRUKAnchor,_EffectMesh_EffectMeshObject>_GetEnumerator__
  ;
  puVar5 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
  puVar4 = 
  UnityEngine_XR_ARFoundation_SubsystemLifecycleManager<XRCameraSubsystem,_XRCameraSubsystemDescriptor,_XRCameraSubsystem_Provider>_TypeInfo
  ;
  puVar3 = System_Collections_Generic_List<IDebugDisplaySettingsPanelDisposable>_TypeInfo;
  puVar2 = PTR_DAT_033f1c28;
  uStack_78 = 0;
  local_70 = 0;
  local_80 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_a0 = 0;
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_01323390(*(long *)(param_1 + 0x98),&local_b8,*(undefined8 *)StringLiteral_635);
    uStack_78 = uStack_b0;
    local_80 = local_b8;
    local_70 = local_a8;
    while (uVar10 = FUN_012b894c(&local_80,*(undefined8 *)puVar6), (uVar10 & 1) != 0) {
      uVar11 = FUN_00ac2bf8(&local_80,*(undefined8 *)puVar2);
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_0268c114(uVar11,0);
    }
    FUN_012b8948(&local_80,
                 *(undefined8 *)
                  Field_<PrivateImplementationDetails>_A199F717FBA4D1378A33D65E9660E45ADC176876A3450BACF2A80DA985FBDF14
                );
    lVar14 = *(long *)(param_1 + 0x98);
    if (lVar14 != 0) {
      lVar13 = *(long *)StringLiteral_4997;
      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
      uVar10 = FUN_00da5b18(*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 200));
      if ((uVar10 & 1) == 0) {
        *(undefined4 *)(lVar14 + 0x18) = 0;
      }
      else {
        iVar1 = *(int *)(lVar14 + 0x18);
        *(undefined4 *)(lVar14 + 0x18) = 0;
        if (0 < iVar1) {
          FUN_0179519c(*(undefined8 *)(lVar14 + 0x10),0,iVar1,0);
        }
      }
      *(long *)(param_1 + 0x78) = param_2;
      if (param_2 != 0) {
        FUN_01323390(param_2,&local_b8,
                     *(undefined8 *)Method_System_Linq_Enumerable_Select<Edge,_EdgeLookup>__);
        uStack_98 = uStack_b0;
        local_a0 = local_b8;
        local_90 = local_a8;
        while (uVar10 = FUN_012b894c(&local_a0,*(undefined8 *)puVar4), (uVar10 & 1) != 0) {
          uVar11 = FUN_00ac91e8(&local_a0,*(undefined8 *)puVar8);
          if (*(long *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          uVar15 = *(undefined8 *)(param_1 + 0x68);
          uVar12 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                             (*(long *)(param_1 + 0x60),0);
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          lVar14 = FUN_0112fe80(uVar15,uVar12,*(undefined8 *)puVar7);
          if (*(long *)(param_1 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_00ac8520(*(long *)(param_1 + 0x98),lVar14,*(undefined8 *)puVar9);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          FUN_010e5b20(lVar14,&local_68,*(undefined8 *)puVar3);
          lVar14 = local_68;
          if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          *(undefined8 *)(local_68 + 0x100) = uVar11;
          FUN_02689f9c(local_68,0,0);
          FUN_02689f9c(lVar14,1,0);
        }
        FUN_012b8948(&local_a0,
                     *(undefined8 *)
                      System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo_TypeInfo);
        if ((param_3 & 1) != 0) {
          if (*(long *)(param_1 + 0x60) == 0) goto LAB_00ee1f08;
          uVar12 = *(undefined8 *)(param_1 + 0x70);
          uVar11 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                             (*(long *)(param_1 + 0x60),0);
          if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
            thunk_FUN_00d32864(*(long *)puVar5);
          }
          lVar14 = FUN_0112fe80(uVar12,uVar11,*(undefined8 *)puVar7);
          if ((*(long *)(param_1 + 0x98) == 0) ||
             (FUN_00ac8520(*(long *)(param_1 + 0x98),lVar14,*(undefined8 *)puVar9), lVar14 == 0))
          goto LAB_00ee1f08;
          FUN_010e5b20(lVar14,&local_b8,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<OVRAnchor,_OVRSceneManager_RoomLayoutUuids>_Dispose__
                      );
          *(undefined8 *)(param_1 + 0xb8) = local_b8;
          lVar14 = thunk_FUN_00d62348(*(undefined8 *)
                                       Method_System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_get_Count__
                                     );
          if (lVar14 == 0) goto LAB_00ee1f08;
          FUN_017b46ec(lVar14,0);
          lVar13 = *(long *)(param_1 + 0xb8);
          if (lVar13 == 0) goto LAB_00ee1f08;
          *(long *)(lVar13 + 0x100) = lVar14;
          FUN_02689f9c(lVar13,0,0);
          FUN_02689f9c(lVar13,1,0);
          if (*(long *)(param_1 + 0xb8) == 0) goto LAB_00ee1f08;
          *(undefined8 *)(*(long *)(param_1 + 0xb8) + 0x110) = param_4;
        }
        if ((*(long *)(param_1 + 0x88) != 0) &&
           (lVar14 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                               (*(long *)(param_1 + 0x88),0), lVar14 != 0)) {
          FUN_026a10b4(lVar14,0);
          return;
        }
      }
    }
  }
LAB_00ee1f08:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


