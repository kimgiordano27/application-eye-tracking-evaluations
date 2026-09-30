/*
FUNCTION_NAME: FUN_03868e90
ENTRY_POINT: 03868e90
PROGRAM: gunraiders-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;pose_vector;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_16;frame_or_lifecycle_behavior
*/


void FUN_03868e90(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long *plVar10;
  
  puVar8 = Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SpaceQueryResultsData>__;
  puVar7 = Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SpaceQueryCompleteData>__;
  puVar6 = Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SpaceListSaveResultData>__;
  puVar3 = System_Runtime_Remoting_Activation_ConstructionLevelActivator_TypeInfo;
  puVar2 = PTR_DAT_0422fbe0;
  puVar1 = PTR_DAT_0422fb28;
  if ((DAT_04539389 & 1) == 0) {
    FUN_01c5d288(System_Runtime_Remoting_Activation_ConstructionLevelActivator_TypeInfo);
    FUN_01c5d288(
                Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SpaceListSaveResultData>__
                );
    FUN_01c5d288(PTR_DAT_0422fbe0);
    FUN_01c5d288(PTR_DAT_0422fb28);
    FUN_01c5d288(Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SpaceEraseCompleteData>__
                );
    FUN_01c5d288(Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SpaceQueryCompleteData>__
                );
    FUN_01c5d288(Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SpaceQueryResultsData>__)
    ;
    FUN_01c5d288(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<BatchCullingOutputDrawCommands>__
                );
    FUN_01c5d288(PTR_DAT_0423a830);
    FUN_01c5d288(Method_ListWithEvents<IUpdateReceiver>_add_OnElementAdded__);
    FUN_01c5d288(Method_System_Net_IPEndPoint__ctor__);
    FUN_01c5d288(Method_System_Linq_Enumerable_ToArray<Volume>__);
    FUN_01c5d288(
                VoxelBusters_EssentialKit_GameServicesCore_Android_NativeLoadLocalPlayerScoreListener_TypeInfo
                );
    FUN_01c5d288(Method_System_Security_Cryptography_DES_set_Key__);
    FUN_01c5d288(UnityEngine_Events_InvokableCall_TypeInfo);
    FUN_01c5d288(Method_UnityEngine_EventSystems_ExecuteEvents_ExecuteHierarchy<IScrollHandler>__);
    DAT_04539389 = 1;
  }
  *(undefined4 *)(param_1 + 0x40) = 1;
  puVar5 = Method_OVRDeserialize_ByteArrayToStructure<OVRDeserialize_SpaceEraseCompleteData>__;
  puVar4 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<BatchCullingOutputDrawCommands>__
  ;
  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
  FUN_032a7b98(uVar9,0);
  *(undefined8 *)(param_1 + 0x88) = uVar9;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  uVar9 = FUN_01c5d2fc(*(undefined8 *)puVar6,8);
  *(undefined8 *)(param_1 + 0x80) = uVar9;
  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar7);
  FUN_03804800(uVar9,param_1,*(undefined8 *)puVar8,0);
  *(undefined8 *)(param_1 + 0x48) = uVar9;
  uVar9 = *(undefined8 *)puVar2;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar9 = FUN_032e04b8(uVar9,0);
  thunk_FUN_01c21c38();
  **(undefined8 **)(*(long *)puVar4 + 0xb8) = uVar9;
  uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
  FUN_037f8ffc(uVar9,0);
  plVar10 = *(long **)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xa0) = uVar9;
  if (plVar10 != (long *)0x0) {
    uVar9 = (**(code **)(*plVar10 + 0x198))
                      (plVar10,*(undefined8 *)
                                Method_ListWithEvents<IUpdateReceiver>_add_OnElementAdded__,
                       *(undefined8 *)(*plVar10 + 0x1a0));
    plVar10 = *(long **)(param_1 + 0xb0);
    *(undefined8 *)(param_1 + 200) = uVar9;
    if (plVar10 != (long *)0x0) {
      uVar9 = (**(code **)(*plVar10 + 0x198))
                        (plVar10,*(undefined8 *)
                                  VoxelBusters_EssentialKit_GameServicesCore_Android_NativeLoadLocalPlayerScoreListener_TypeInfo
                         ,*(undefined8 *)(*plVar10 + 0x1a0));
      plVar10 = *(long **)(param_1 + 0xb0);
      *(undefined8 *)(param_1 + 0xd0) = uVar9;
      if (plVar10 != (long *)0x0) {
        uVar9 = (**(code **)(*plVar10 + 0x198))
                          (plVar10,*(undefined8 *)Method_System_Linq_Enumerable_ToArray<Volume>__,
                           *(undefined8 *)(*plVar10 + 0x1a0));
        plVar10 = *(long **)(param_1 + 0xb0);
        *(undefined8 *)(param_1 + 0xd8) = uVar9;
        if (plVar10 != (long *)0x0) {
          uVar9 = (**(code **)(*plVar10 + 0x198))
                            (plVar10,*(undefined8 *)UnityEngine_Events_InvokableCall_TypeInfo,
                             *(undefined8 *)(*plVar10 + 0x1a0));
          plVar10 = *(long **)(param_1 + 0xb0);
          *(undefined8 *)(param_1 + 0xe0) = uVar9;
          if (plVar10 != (long *)0x0) {
            uVar9 = (**(code **)(*plVar10 + 0x198))
                              (plVar10,*(undefined8 *)PTR_DAT_0423a830,
                               *(undefined8 *)(*plVar10 + 0x1a0));
            plVar10 = *(long **)(param_1 + 0xb0);
            *(undefined8 *)(param_1 + 0xe8) = uVar9;
            if (plVar10 != (long *)0x0) {
              uVar9 = (**(code **)(*plVar10 + 0x198))
                                (plVar10,*(undefined8 *)
                                          Method_UnityEngine_EventSystems_ExecuteEvents_ExecuteHierarchy<IScrollHandler>__
                                 ,*(undefined8 *)(*plVar10 + 0x1a0));
              plVar10 = *(long **)(param_1 + 0xb0);
              *(undefined8 *)(param_1 + 0xf8) = uVar9;
              if (plVar10 != (long *)0x0) {
                uVar9 = (**(code **)(*plVar10 + 0x198))
                                  (plVar10,*(undefined8 *)Method_System_Net_IPEndPoint__ctor__,
                                   *(undefined8 *)(*plVar10 + 0x1a0));
                plVar10 = *(long **)(param_1 + 0xb0);
                *(undefined8 *)(param_1 + 0x100) = uVar9;
                if (plVar10 != (long *)0x0) {
                  uVar9 = (**(code **)(*plVar10 + 0x198))
                                    (plVar10,*(undefined8 *)
                                              Method_System_Security_Cryptography_DES_set_Key__,
                                     *(undefined8 *)(*plVar10 + 0x1a0));
                  *(undefined8 *)(param_1 + 0xf0) = uVar9;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


