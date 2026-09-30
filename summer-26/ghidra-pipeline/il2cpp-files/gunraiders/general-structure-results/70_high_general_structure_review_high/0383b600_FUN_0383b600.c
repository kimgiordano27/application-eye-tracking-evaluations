/*
FUNCTION_NAME: FUN_0383b600
ENTRY_POINT: 0383b600
PROGRAM: gunraiders-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void FUN_0383b600(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if ((DAT_04539252 & 1) == 0) {
    FUN_01c5d288(Method_UnityEngine_JsonUtility_FromJson<JsonResponseGeneralArray<ExitData>>__);
    FUN_01c5d288(PTR_DAT_042367c0);
    FUN_01c5d288(Method_System_Configuration_IgnoreSection_SerializeSection__);
    FUN_01c5d288(PTR_DAT_04230940);
    FUN_01c5d288(Method_UnityEngine_Rendering_ListPool<GUIContent>_Get__);
    FUN_01c5d288(
                Method_Unity_Services_Core_Internal_CoreRegistry_RegisterPackage<Ua2CoreInitializeCallback>__
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
    DAT_04539252 = 1;
  }
  puVar5 = Method_UnityEngine_JsonUtility_FromJson<JsonResponseGeneralArray<ExitData>>__;
  puVar4 = Method_System_Configuration_IgnoreSection_SerializeSection__;
  puVar3 = 
  Method_Unity_Services_Core_Internal_CoreRegistry_RegisterPackage<Ua2CoreInitializeCallback>__;
  puVar2 = PTR_DAT_042367c0;
  puVar1 = PTR_DAT_04230940;
  plVar6 = *(long **)(param_1 + 0x50);
  if (plVar6 != (long *)0x0) {
    lVar7 = (**(code **)(*plVar6 + 0x468))(plVar6,*(undefined8 *)(*plVar6 + 0x470));
    *(long *)(param_1 + 0x90) = lVar7;
    if (lVar7 == 0) {
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      uVar8 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_UnityEngine_Rendering_ListPool<GUIContent>_Get__);
      FUN_0389ba48(uVar8,uVar9,0);
      *(undefined8 *)(param_1 + 0x90) = uVar8;
      *(undefined1 *)(param_1 + 0x98) = 1;
    }
    uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
    FUN_03884424(uVar8,10,0);
    *(undefined8 *)(param_1 + 0x80) = uVar8;
    uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
    FUN_03160a50(uVar8,0);
    *(undefined8 *)(param_1 + 0x68) = uVar8;
    uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
    FUN_032ab88c(uVar8,0);
    *(undefined8 *)(param_1 + 0x88) = uVar8;
    uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
    FUN_037ccc98(uVar8,0);
    *(undefined8 *)(param_1 + 0x48) = uVar8;
    *(undefined1 *)(param_1 + 0x79) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 3;
    lVar7 = *(long *)puVar3;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar7 = *(long *)puVar3;
    }
    FUN_0383b95c(param_1,*(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8));
    plVar6 = *(long **)(param_1 + 0x20);
    if (plVar6 != (long *)0x0) {
      uVar8 = (**(code **)(*plVar6 + 0x198))
                        (plVar6,*(undefined8 *)
                                 Method_ListWithEvents<IUpdateReceiver>_add_OnElementAdded__,
                         *(undefined8 *)(*plVar6 + 0x1a0));
      plVar6 = *(long **)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0xc0) = uVar8;
      if (plVar6 != (long *)0x0) {
        uVar8 = (**(code **)(*plVar6 + 0x198))
                          (plVar6,*(undefined8 *)
                                   VoxelBusters_EssentialKit_GameServicesCore_Android_NativeLoadLocalPlayerScoreListener_TypeInfo
                           ,*(undefined8 *)(*plVar6 + 0x1a0));
        plVar6 = *(long **)(param_1 + 0x20);
        *(undefined8 *)(param_1 + 200) = uVar8;
        if (plVar6 != (long *)0x0) {
          uVar8 = (**(code **)(*plVar6 + 0x198))
                            (plVar6,*(undefined8 *)Method_System_Linq_Enumerable_ToArray<Volume>__,
                             *(undefined8 *)(*plVar6 + 0x1a0));
          plVar6 = *(long **)(param_1 + 0x20);
          *(undefined8 *)(param_1 + 0xd0) = uVar8;
          if (plVar6 != (long *)0x0) {
            uVar8 = (**(code **)(*plVar6 + 0x198))
                              (plVar6,*(undefined8 *)UnityEngine_Events_InvokableCall_TypeInfo,
                               *(undefined8 *)(*plVar6 + 0x1a0));
            plVar6 = *(long **)(param_1 + 0x20);
            *(undefined8 *)(param_1 + 0xd8) = uVar8;
            if (plVar6 != (long *)0x0) {
              uVar8 = (**(code **)(*plVar6 + 0x198))
                                (plVar6,*(undefined8 *)PTR_DAT_0423a830,
                                 *(undefined8 *)(*plVar6 + 0x1a0));
              plVar6 = *(long **)(param_1 + 0x20);
              *(undefined8 *)(param_1 + 0xe0) = uVar8;
              if (plVar6 != (long *)0x0) {
                uVar8 = (**(code **)(*plVar6 + 0x198))
                                  (plVar6,*(undefined8 *)
                                           Method_UnityEngine_EventSystems_ExecuteEvents_ExecuteHierarchy<IScrollHandler>__
                                   ,*(undefined8 *)(*plVar6 + 0x1a0));
                plVar6 = *(long **)(param_1 + 0x20);
                *(undefined8 *)(param_1 + 0xe8) = uVar8;
                if (plVar6 != (long *)0x0) {
                  uVar8 = (**(code **)(*plVar6 + 0x198))
                                    (plVar6,*(undefined8 *)Method_System_Net_IPEndPoint__ctor__,
                                     *(undefined8 *)(*plVar6 + 0x1a0));
                  plVar6 = *(long **)(param_1 + 0x20);
                  *(undefined8 *)(param_1 + 0xf0) = uVar8;
                  if (plVar6 != (long *)0x0) {
                    uVar8 = (**(code **)(*plVar6 + 0x198))
                                      (plVar6,*(undefined8 *)
                                               Method_System_Security_Cryptography_DES_set_Key__,
                                       *(undefined8 *)(*plVar6 + 0x1a0));
                    *(undefined8 *)(param_1 + 0xf8) = uVar8;
                    return;
                  }
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


