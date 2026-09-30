/*
FUNCTION_NAME: UnityEngine.InputSystem.InputActionMap.WriteActionJson$$FromAction
ENTRY_POINT: 05c4a8e0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;telemetry_or_network_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_InputSystem_InputActionMap_WriteActionJson__FromAction(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x22;
  long lVar10;
  long lStack0000000000000040;
  long lStack0000000000000048;
  long lStack0000000000000058;
  
  lStack0000000000000058 = param_1;
  if ((*(byte *)(unaff_x22 + 0x897) & 1) == 0) {
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_Add__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<Type,_MonoCustomAttrs_AttributeInfo>__ctor__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<IDeferredNetworkMessageManager_TriggerType,_Dictionary<ulong,_DeferredMessageManager_TriggerInfo>>_GetEnumerator__
                );
    *(undefined1 *)(unaff_x22 + 0x897) = 1;
  }
  FUN_05d01104(0);
  if (*(char *)(param_1 + 0x2c) != '\0') {
    plVar7 = (long *)thunk_FUN_02da6564(param_1,0);
    FUN_02979e58();
    uVar6 = (**(code **)(*plVar7 + 0x368))(plVar7,*(undefined8 *)(*plVar7 + 0x370));
    thunk_FUN_02dfd288(PTR_DAT_069fe0d8);
    uVar8 = thunk_FUN_02dd3144();
    FUN_054f71d0(uVar8,uVar6,0);
    uVar6 = thunk_FUN_02dfd288(
                              Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_Clear__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar8,uVar6);
  }
  if (unaff_x20 == 0) {
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar8 = thunk_FUN_02dd3144();
    uVar6 = thunk_FUN_02dfd288(
                              Method_System_Collections_Generic_Dictionary<IDeferredNetworkMessageManager_TriggerType,_Dictionary<ulong,_DeferredMessageManager_TriggerInfo>>_TryGetValue__
                              );
    FUN_0544bf54(uVar8,uVar6,0);
  }
  else {
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_Dictionary<IDeferredNetworkMessageManager_TriggerType,_Dictionary<ulong,_DeferredMessageManager_TriggerInfo>>_GetEnumerator__
                + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar4 = FUN_05ceb5a0(unaff_w19,0);
    if ((uVar4 & 1) == 0) {
      thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
      uVar8 = thunk_FUN_02dd3144();
      uVar6 = thunk_FUN_02dfd288(
                                Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2CompactSkinningDataId,_OvrAvatarComputeSkinnedPrimitive_VertexBufferInfo>_TryGetValue__
                                );
      FUN_05453f78(uVar8,uVar6,0);
    }
    else {
      if (*(char *)(param_1 + 0x18) == '\0') {
        lVar5 = FUN_05d0ba00();
        puVar1 = 
        Method_System_Collections_Generic_Dictionary<Type,_MonoCustomAttrs_AttributeInfo>__ctor__;
        lStack0000000000000048 = 0;
        lStack0000000000000040 = 0;
        if (*(long *)(param_1 + 0x10) == 0) {
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<Type,_MonoCustomAttrs_AttributeInfo>__ctor__
                      + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar4 = FUN_05c3e33c(0);
          if ((uVar4 & 1) != 0) {
            lStack0000000000000040 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
            FUN_05c3dca8(lStack0000000000000040,2,1,6,0);
          }
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar4 = FUN_05c3e3a0(0);
          if ((uVar4 & 1) != 0) {
            lStack0000000000000048 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
            FUN_05c3dca8(lStack0000000000000048,0x17,1,6,0);
          }
        }
        puVar1 = 
        Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_Add__;
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (0 < (int)*(ulong *)(lVar5 + 0x18)) {
          uVar4 = 0;
          uVar9 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
          do {
            if (uVar9 <= uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            lVar10 = *(long *)(lVar5 + 0x20 + uVar4 * 8);
            if (*(long *)(lStack0000000000000058 + 0x10) == 0) {
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              iVar2 = FUN_05cd75d4(lVar10,0);
              if ((iVar2 == 2) && (lStack0000000000000040 != 0)) {
                FUN_05c42038(lStack0000000000000040,lVar10,unaff_w19,0);
                *(long *)(lStack0000000000000058 + 0x10) = lStack0000000000000040;
                LeanTween__value();
                if (lStack0000000000000048 != 0) {
                  FUN_05c44d2c(lStack0000000000000048,0);
                }
              }
              else if (lStack0000000000000048 != 0) {
                FUN_05c42038(lStack0000000000000048,lVar10,unaff_w19,0);
                *(long *)(lStack0000000000000058 + 0x10) = lStack0000000000000048;
                LeanTween__value();
                if (lStack0000000000000040 != 0) {
                  FUN_05c44d2c(lStack0000000000000040,0);
                }
              }
              uVar3 = FUN_05cd75d4(lVar10,0);
              *(undefined4 *)(lStack0000000000000058 + 0x28) = uVar3;
LAB_05c4aca8:
              *(undefined1 *)(lStack0000000000000058 + 0x18) = 1;
              break;
            }
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            iVar2 = FUN_05cd75d4(lVar10,0);
            if (iVar2 == *(int *)(lStack0000000000000058 + 0x28)) {
              uVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
              FUN_05cd8830(uVar6,lVar10,unaff_w19,0);
              FUN_05c4b034(lStack0000000000000058,uVar6);
              goto LAB_05c4aca8;
            }
            uVar9 = (ulong)*(uint *)(lVar5 + 0x18);
            uVar4 = uVar4 + 1;
          } while ((long)uVar4 < (long)(int)*(uint *)(lVar5 + 0x18));
        }
        FUN_02d32478();
        FUN_05d01104(0);
        return;
      }
      thunk_FUN_02dfd288(Oculus_Platform_Models_LaunchUnblockFlowResult_TypeInfo);
      uVar8 = thunk_FUN_02dd3144();
      FUN_05c49a1c(uVar8,0x2748);
    }
  }
  uVar6 = thunk_FUN_02dfd288(
                            Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_Clear__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar8,uVar6);
}


