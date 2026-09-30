/*
FUNCTION_NAME: FUN_05f383f4
ENTRY_POINT: 05f383f4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_data_collection_or_telemetry_hits_4
*/


void FUN_05f383f4(undefined8 param_1,long *param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  long local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 local_38;
  
  if ((DAT_06b8406e & 1) == 0) {
    FUN_02d6084c(
                Method_UnityEngine_UIElements_DefaultEventSystem_SendFocusBasedEvent<ValueTuple<NavigationMoveEvent_Direction,_EventModifiers,_DefaultEventSystem_LegacyInputProcessor_IInput>>__
                );
    FUN_02d6084c(
                Method_UnityEngine_UIElements_DefaultEventSystem_SendFocusBasedEvent<ValueTuple<NavigationMoveEvent_Direction,_NavigationDeviceType,_EventModifiers>>__
                );
    FUN_02d6084c(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_BounceOutLerp_00000349_PostfixBurstDelegate>__
                );
    FUN_02d6084c(
                Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_SingleBounceOutLerp_0000034C_PostfixBurstDelegate>__
                );
    DAT_06b8406e = 1;
  }
  local_38 = 0;
  local_60 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  local_68 = 0;
  local_70 = 0;
  if (((*(char *)((long)param_2 + 0x194) != '\0') && ((char)param_2[0x45] != '\0')) &&
     ((int)param_2[0x46] < *(int *)((long)param_2 + 0x22c))) {
    lVar3 = FUN_05f32e38(param_2);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x18) != 1) goto LAB_05f3855c;
      if (param_2[99] != 0) {
        iVar2 = FUN_048953c0(param_2[99],
                             *(undefined8 *)
                              Method_UnityEngine_UIElements_DefaultEventSystem_SendFocusBasedEvent<ValueTuple<NavigationMoveEvent_Direction,_NavigationDeviceType,_EventModifiers>>__
                            );
        if (iVar2 < 1) goto LAB_05f3855c;
        lVar7 = param_2[99];
        lVar3 = FUN_05f32e38(param_2);
        puVar1 = 
        Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_SingleBounceOutLerp_0000034C_PostfixBurstDelegate>__
        ;
        if (lVar3 != 0) {
          uVar4 = FUN_03aac1c4(lVar3,0,*(undefined8 *)
                                        Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<BurstLerpUtility_SingleBounceOutLerp_0000034C_PostfixBurstDelegate>__
                              );
          if (lVar7 != 0) {
            uVar5 = FUN_0489720c(lVar7,uVar4,&local_38,
                                 *(undefined8 *)
                                  Method_UnityEngine_UIElements_DefaultEventSystem_SendFocusBasedEvent<ValueTuple<NavigationMoveEvent_Direction,_EventModifiers,_DefaultEventSystem_LegacyInputProcessor_IInput>>__
                                );
            if ((uVar5 & 1) != 0) {
              lVar3 = FUN_05f32e38(param_2);
              if (lVar3 == 0) goto LAB_05f3861c;
              uVar6 = FUN_03aac1c4(lVar3,0,*(undefined8 *)puVar1);
              uVar4 = local_38;
              FUN_05f3c08c(param_2,uVar6,local_38);
              (**(code **)(*param_2 + 0x8c8))(param_2,uVar6,uVar4,*(undefined8 *)(*param_2 + 0x8d0))
              ;
            }
            goto LAB_05f3855c;
          }
        }
      }
    }
LAB_05f3861c:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
LAB_05f3855c:
  local_60 = *(undefined8 *)((long)param_2 + 0x23c);
  uStack_4c = (undefined4)param_2[0x4a];
  uStack_48 = (undefined4)((ulong)param_2[0x4a] >> 0x20);
  uStack_50 = (undefined4)((ulong)param_2[0x49] >> 0x20);
  uStack_58 = (undefined4)*(undefined8 *)((long)param_2 + 0x244);
  uStack_54 = (undefined4)((ulong)*(undefined8 *)((long)param_2 + 0x244) >> 0x20);
  local_68 = (undefined4)param_2[0x4c];
  local_70 = param_2[0x4b];
  FUN_05f39af0(param_2,param_3,&local_60,&local_70);
  uVar5 = FUN_05f239a8(param_2);
  if ((uVar5 & 1) == 0) {
    param_2[0x4a] = CONCAT44(uStack_48,uStack_4c);
    param_2[0x49] = CONCAT44(uStack_50,uStack_54);
    *(ulong *)((long)param_2 + 0x244) = CONCAT44(uStack_54,uStack_58);
    *(undefined8 *)((long)param_2 + 0x23c) = local_60;
    *(undefined4 *)(param_2 + 0x4c) = local_68;
    param_2[0x4b] = local_70;
  }
  else {
    if (param_3 == 1) {
      uStack_7c = CONCAT44(uStack_48,uStack_4c);
      uStack_88 = uStack_58;
      local_90 = local_60;
      uStack_84 = uStack_54;
      uStack_80 = uStack_50;
      FUN_05f3b0cc(param_1,param_2,&local_90);
    }
    FUN_05f3b37c(param_1,param_2,&local_60,&local_70);
  }
  return;
}


