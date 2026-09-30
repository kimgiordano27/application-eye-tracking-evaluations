/*
FUNCTION_NAME: FUN_035085cc
ENTRY_POINT: 035085cc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_9;telemetry_or_network_hits_14
*/


ulong FUN_035085cc(undefined8 param_1,long param_2,long param_3,uint param_4,int param_5,
                  uint param_6)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  uVar2 = param_1;
  if ((DAT_04832f97 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_OVRTask_FromResult<OVRSpatialAnchor_UnboundAnchor[]>__);
    uVar2 = thunk_FUN_01efb3a4(
                              Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                              );
    DAT_04832f97 = 1;
  }
  puVar7 = Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__;
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar2 = thunk_FUN_01f117cc();
    puVar7 = Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_1__;
  }
  else {
    if (param_3 != 0) {
      if (((0x1f < param_6) && (param_6 != 0x10000000)) && (param_6 != 0x40000000)) {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar2 = thunk_FUN_01f117cc();
        uVar5 = thunk_FUN_01efb3a4(
                                  Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<string>__
                                  );
        uVar6 = thunk_FUN_01efb3a4(
                                  Method_Unity_Collections_LowLevel_Unsafe_UnsafeList_SetCapacity<AllocatorManager_AllocatorHandle>__
                                  );
        FUN_034efd98(uVar2,uVar5,uVar6,0);
        goto LAB_035088b0;
      }
      uVar1 = *(uint *)(param_2 + 0x10);
      if ((uVar1 == 0) && (param_4 + 1 < 2)) {
        param_4 = -(uint)(*(int *)(param_3 + 0x10) != 0);
LAB_035086f4:
        return (ulong)param_4;
      }
      if (((int)param_4 < 0) || ((int)uVar1 < (int)param_4)) {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
        uVar2 = thunk_FUN_01f117cc();
        uVar5 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_0__);
        puVar7 = 
        Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseMoveEvent>__;
      }
      else {
        if (uVar1 == param_4) {
          param_5 = param_5 - (uint)(0 < param_5);
          param_4 = param_4 - 1;
          if ((param_5 < 0) || (*(int *)(param_3 + 0x10) != 0)) goto LAB_03508694;
          if (-2 < (int)(param_4 - param_5)) goto LAB_035086f4;
LAB_03508698:
          if (-1 < (int)((param_4 - param_5) + 1)) {
            if (param_6 == 0x10000000) {
              uVar3 = FUN_03508910(uVar2,param_2,param_3,param_4,param_5,1);
              return uVar3;
            }
            if (*(int *)(*(long *)
                          Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                        + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            if (DAT_04833019 == '\0') {
              thunk_FUN_01efb3a4(
                                Method_Unity_VisualScripting_FullSerializer_fsBaseConverter_SerializeMember<Texture2D>__
                                );
              DAT_04833019 = '\x01';
            }
            lVar4 = *(long *)puVar7;
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar4 = *(long *)puVar7;
            }
            if (**(char **)(lVar4 + 0xb8) == '\0') {
              uVar3 = FUN_035099d4(param_1,param_2,param_4,param_5,param_3,param_6,0);
              return uVar3;
            }
            if (*(int *)(*(long *)Method_OVRTask_FromResult<OVRSpatialAnchor_UnboundAnchor[]>__ +
                        0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar3 = FUN_03505fa8(param_2,param_3,param_4,param_5,(param_6 & 0x10000001) != 0);
            return uVar3;
          }
        }
        else {
LAB_03508694:
          if (-1 < param_5) goto LAB_03508698;
        }
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
        uVar2 = thunk_FUN_01f117cc();
        uVar5 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsField_<_ctor>b__10_1__);
        puVar7 = 
        Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseDownEvent>__;
      }
      uVar6 = thunk_FUN_01efb3a4(puVar7);
      FUN_034f3578(uVar2,uVar5,uVar6,0);
      goto LAB_035088b0;
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar2 = thunk_FUN_01f117cc();
    puVar7 = Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__;
  }
  uVar5 = thunk_FUN_01efb3a4(puVar7);
  FUN_034efd20(uVar2,uVar5,0);
LAB_035088b0:
  uVar5 = thunk_FUN_01efb3a4(
                            Method_Unity_VisualScripting_FullSerializer_fsDateConverter_TrySerialize__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar2,uVar5);
}


