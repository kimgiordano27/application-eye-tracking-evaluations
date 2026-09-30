/*
FUNCTION_NAME: FUN_05f387d8
ENTRY_POINT: 05f387d8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_3
*/


undefined8 FUN_05f387d8(long param_1,long param_2)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 local_38;
  
  if ((DAT_06b8405c & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0675e660);
    FUN_02d6084c(Method_UnityEngine_UIElements_DefaultEventSystem_SendFocusBasedEvent<Event>__);
    FUN_02d6084c(
                Method_UnityEngine_UIElements_DefaultEventSystem_SendFocusBasedEvent<ValueTuple<NavigationMoveEvent_Direction,_EventModifiers,_DefaultEventSystem_LegacyInputProcessor_IInput>>__
                );
    FUN_02d6084c(PTR_DAT_06762928);
    FUN_02d6084c(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_BounceOutLerp_00000349_PostfixBurstDelegate>__
                );
    FUN_02d6084c(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_SingleBounceOutLerp_0000034C_PostfixBurstDelegate>__
                );
    FUN_02d6084c(PTR_DAT_0675e1b8);
    FUN_02d6084c(
                Method_UnityEngine_UIElements_DefaultEventSystem_SendFocusBasedEvent<DefaultEventSystem_LegacyInputProcessor>__
                );
    FUN_02d6084c(
                Method_UnityEngine_UIElements_DefaultEventSystem_SendPositionBasedEvent<ValueTuple<EventModifiers,_Nullable<int>>>__
                );
    DAT_06b8405c = 1;
  }
  local_38 = 0;
  lVar3 = FUN_05f32e38(param_1);
  puVar1 = PTR_DAT_0675e1b8;
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) < 2) {
      if (*(char *)(param_1 + 400) == '\0') goto LAB_05f389fc;
    }
    else {
      lVar3 = FUN_05f32e38(param_1);
      if (lVar3 == 0) goto LAB_05f38a4c;
      lVar3 = FUN_03aac1c4(lVar3,0,*(undefined8 *)
                                    Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_SingleBounceOutLerp_0000034C_PostfixBurstDelegate>__
                          );
      bVar2 = *(byte *)(param_1 + 400);
      if ((lVar3 != param_2) && (bVar2 == 0)) {
        uVar5 = *(undefined8 *)(param_1 + 0x188);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        bVar2 = UnityEngine_Font__add_textureRebuilt(uVar5,0,0);
        bVar2 = bVar2 & 1;
      }
      if (bVar2 == 0) {
        if (lVar3 != param_2) {
          return *(undefined8 *)(param_1 + 0x188);
        }
        goto LAB_05f389fc;
      }
    }
    lVar3 = thunk_FUN_02d9d438(param_2,*(undefined8 *)PTR_DAT_06762928);
    if (lVar3 != 0) {
      if (*(long *)(param_1 + 0x318) == 0) goto LAB_05f38a4c;
      uVar4 = FUN_0489720c(*(long *)(param_1 + 0x318),lVar3,&local_38,
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_DefaultEventSystem_SendFocusBasedEvent<ValueTuple<NavigationMoveEvent_Direction,_EventModifiers,_DefaultEventSystem_LegacyInputProcessor_IInput>>__
                          );
      uVar5 = local_38;
      if ((uVar4 & 1) != 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar4 = FUN_0606a004(uVar5,0,0);
        if ((uVar4 & 1) != 0) {
          return local_38;
        }
        if (*(long *)(param_1 + 0x318) == 0) goto LAB_05f38a4c;
        FUN_04896bd4(*(long *)(param_1 + 0x318),lVar3,
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_DefaultEventSystem_SendFocusBasedEvent<Event>__)
        ;
        uVar5 = FUN_04e8e6a4(*(undefined8 *)
                              Method_UnityEngine_UIElements_DefaultEventSystem_SendPositionBasedEvent<ValueTuple<EventModifiers,_Nullable<int>>>__
                             ,param_1,param_2,0);
        uVar5 = FUN_04e83184(uVar5,*(undefined8 *)
                                    Method_UnityEngine_UIElements_DefaultEventSystem_SendFocusBasedEvent<DefaultEventSystem_LegacyInputProcessor>__
                             ,0);
        if (*(int *)(*(long *)PTR_DAT_0675e660 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)PTR_DAT_0675e660);
        }
        FUN_0602283c(uVar5,param_1,0);
      }
    }
LAB_05f389fc:
    uVar5 = *(undefined8 *)(param_1 + 0x180);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar4 = FUN_0606a004(uVar5,0,0);
    if ((uVar4 & 1) == 0) {
      uVar5 = FUN_06066c74(param_1,0);
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x180);
    }
    return uVar5;
  }
LAB_05f38a4c:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


