/*
FUNCTION_NAME: FUN_0350608c
ENTRY_POINT: 0350608c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


undefined8 FUN_0350608c(long *param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ushort *puVar9;
  ulong uVar10;
  
  if ((DAT_04832f88 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_OptimizedReflection_GetMethodInvoker__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__);
    thunk_FUN_01efb3a4(Method_OVRTask_FromResult<OVRSpatialAnchor_UnboundAnchor[]>__);
    thunk_FUN_01efb3a4(Method_Oculus_Interaction_Input_OVRCameraRigRef_HandleInputDataDirtied__);
    DAT_04832f88 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar6 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_1__);
    FUN_034efd20(uVar6,uVar5,0);
  }
  else {
    if ((param_3 & 0xdfffffe0) == 0) {
      if (*(int *)(param_2 + 0x10) == 0) {
        lVar8 = *(long *)Method_Unity_VisualScripting_OptimizedReflection_GetMethodInvoker__;
        lVar4 = *(long *)(lVar8 + 0x38);
        if (lVar4 == 0) {
          FUN_01ecafa0(lVar8);
          lVar4 = *(long *)(lVar8 + 0x38);
        }
        lVar4 = *(long *)(lVar4 + 0x10);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01ecaf44();
        }
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        lVar4 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01ecaf44();
        }
        lVar4 = **(long **)(lVar4 + 0xb8);
      }
      else {
        lVar4 = FUN_01f08890(*(undefined8 *)
                              Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__,
                             *(int *)(param_2 + 0x10) << 1);
        iVar3 = thunk_FUN_01ed2e78(0);
        puVar1 = Method_OVRTask_FromResult<OVRSpatialAnchor_UnboundAnchor[]>__;
        if (lVar4 == 0) {
          if ((param_3 & 0x10000001) == 0) {
LAB_03506330:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          puVar9 = (ushort *)0x0;
        }
        else {
          puVar9 = (ushort *)0x0;
          if (*(int *)(lVar4 + 0x18) != 0) {
            puVar9 = (ushort *)(lVar4 + 0x20);
          }
          if ((param_3 & 0x10000001) == 0) {
            if (lVar4 == 0) goto LAB_03506330;
            FUN_03596d08(param_2 + iVar3,puVar9,(long)*(int *)(lVar4 + 0x18),
                         (long)*(int *)(lVar4 + 0x18),0);
            goto LAB_03506240;
          }
        }
        if (0 < *(int *)(param_2 + 0x10)) {
          uVar10 = 0;
          do {
            uVar2 = FUN_03409f80(param_2,uVar10 & 0xffffffff,0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c(*(long *)puVar1);
            }
            if (uVar2 - 0x61 < 0x1a) {
              uVar2 = uVar2 - 0x20;
            }
            *puVar9 = uVar2;
            uVar10 = uVar10 + 1;
            puVar9 = puVar9 + 1;
          } while ((long)uVar10 < (long)*(int *)(param_2 + 0x10));
        }
      }
LAB_03506240:
      puVar1 = Method_Oculus_Interaction_Input_OVRCameraRigRef_HandleInputDataDirtied__;
      uVar5 = (**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400));
      uVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
      FUN_03526f9c(uVar6,uVar5,param_2,param_3,lVar4,0);
      return uVar6;
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar6 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(
                              Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<string>__
                              );
    uVar7 = thunk_FUN_01efb3a4(
                              Method_Unity_Collections_LowLevel_Unsafe_UnsafeList_SetCapacity<AllocatorManager_AllocatorHandle>__
                              );
    FUN_034efd98(uVar6,uVar5,uVar7,0);
  }
  uVar5 = thunk_FUN_01efb3a4(
                            Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<TextAnchor>__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,uVar5);
}


