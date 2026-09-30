/*
FUNCTION_NAME: FUN_05c4a8b8
ENTRY_POINT: 05c4a8b8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Type propagation algorithm not settling */

void FUN_05c4a8b8(long param_1,long param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 local_c0;
  long *plStack_b8;
  long *local_b0;
  long *plStack_a8;
  long *local_a0;
  undefined4 local_88;
  long local_80;
  long local_78 [3];
  
  local_78[2] = param_1;
  if ((DAT_06dc2897 & 1) == 0) {
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<Type,_OVRPlugin_SpaceComponentType>_Add__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<Type,_MonoCustomAttrs_AttributeInfo>__ctor__
                );
    FUN_02d965b8(
                Method_System_Collections_Generic_Dictionary<IDeferredNetworkMessageManager_TriggerType,_Dictionary<ulong,_DeferredMessageManager_TriggerInfo>>_GetEnumerator__
                );
    DAT_06dc2897 = 1;
  }
  local_78[0] = 0;
  local_78[1] = 0;
  local_80 = 0;
  local_88 = 0;
  FUN_05d01104(0);
  if (*(char *)(param_1 + 0x2c) != '\0') {
    plVar8 = (long *)thunk_FUN_02da6564(param_1,0);
    FUN_02979e58();
    uVar7 = (**(code **)(*plVar8 + 0x368))(plVar8,*(undefined8 *)(*plVar8 + 0x370));
    thunk_FUN_02dfd288(PTR_DAT_069fe0d8);
    uVar9 = thunk_FUN_02dd3144();
    FUN_054f71d0(uVar9,uVar7,0);
    uVar7 = thunk_FUN_02dfd288(
                              Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_Clear__
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar9,uVar7);
  }
  if (param_2 == 0) {
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar9 = thunk_FUN_02dd3144();
    uVar7 = thunk_FUN_02dfd288(
                              Method_System_Collections_Generic_Dictionary<IDeferredNetworkMessageManager_TriggerType,_Dictionary<ulong,_DeferredMessageManager_TriggerInfo>>_TryGetValue__
                              );
    FUN_0544bf54(uVar9,uVar7,0);
  }
  else {
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_Dictionary<IDeferredNetworkMessageManager_TriggerType,_Dictionary<ulong,_DeferredMessageManager_TriggerInfo>>_GetEnumerator__
                + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar4 = FUN_05ceb5a0(param_3,0);
    if ((uVar4 & 1) == 0) {
      thunk_FUN_02dfd288(PTR_DAT_06a0d1c8);
      uVar9 = thunk_FUN_02dd3144();
      uVar7 = thunk_FUN_02dfd288(
                                Method_System_Collections_Generic_Dictionary<CAPI_ovrAvatar2CompactSkinningDataId,_OvrAvatarComputeSkinnedPrimitive_VertexBufferInfo>_TryGetValue__
                                );
      FUN_05453f78(uVar9,uVar7,0);
    }
    else {
      if (*(char *)(param_1 + 0x18) == '\0') {
        lVar5 = FUN_05d0ba00(param_2,0);
        puVar1 = 
        Method_System_Collections_Generic_Dictionary<Type,_MonoCustomAttrs_AttributeInfo>__ctor__;
        plStack_b8 = local_78 + 2;
        plStack_a8 = &local_80;
        local_c0 = 0;
        local_b0 = local_78;
        local_a0 = local_78 + 1;
        local_78[0] = 0;
        local_78[1] = 0;
        local_80 = 0;
        if (*(long *)(param_1 + 0x10) == 0) {
          if (*(int *)(*(long *)
                        Method_System_Collections_Generic_Dictionary<Type,_MonoCustomAttrs_AttributeInfo>__ctor__
                      + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar4 = FUN_05c3e33c(0);
          if ((uVar4 & 1) != 0) {
            lVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
            FUN_05c3dca8(lVar6,2,1,6,0);
            local_80 = lVar6;
          }
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar4 = FUN_05c3e3a0(0);
          if ((uVar4 & 1) != 0) {
            lVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
            FUN_05c3dca8(lVar6,0x17,1,6,0);
            local_78[0] = lVar6;
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
          uVar10 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
          do {
            if (uVar10 <= uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            lVar6 = *(long *)(lVar5 + 0x20 + uVar4 * 8);
            if (*(long *)(local_78[2] + 0x10) == 0) {
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              iVar2 = FUN_05cd75d4(lVar6,0);
              if ((iVar2 == 2) && (local_80 != 0)) {
                FUN_05c42038(local_80,lVar6,param_3,0);
                *(long *)(local_78[2] + 0x10) = local_80;
                LeanTween__value();
                if (local_78[0] != 0) {
                  FUN_05c44d2c(local_78[0],0);
                }
              }
              else if (local_78[0] != 0) {
                FUN_05c42038(local_78[0],lVar6,param_3,0);
                *(long *)(local_78[2] + 0x10) = local_78[0];
                LeanTween__value();
                if (local_80 != 0) {
                  FUN_05c44d2c(local_80,0);
                }
              }
              uVar3 = FUN_05cd75d4(lVar6,0);
              *(undefined4 *)(local_78[2] + 0x28) = uVar3;
LAB_05c4aca8:
              *(undefined1 *)(local_78[2] + 0x18) = 1;
              break;
            }
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            iVar2 = FUN_05cd75d4(lVar6,0);
            if (iVar2 == *(int *)(local_78[2] + 0x28)) {
              uVar7 = thunk_FUN_02dd3144(*(undefined8 *)puVar1);
              FUN_05cd8830(uVar7,lVar6,param_3,0);
              FUN_05c4b034(local_78[2],uVar7);
              goto LAB_05c4aca8;
            }
            uVar10 = (ulong)*(uint *)(lVar5 + 0x18);
            uVar4 = uVar4 + 1;
          } while ((long)uVar4 < (long)(int)*(uint *)(lVar5 + 0x18));
        }
        FUN_02d32478(&local_c0);
        FUN_05d01104(0);
        return;
      }
      thunk_FUN_02dfd288(Oculus_Platform_Models_LaunchUnblockFlowResult_TypeInfo);
      uVar9 = thunk_FUN_02dd3144();
      FUN_05c49a1c(uVar9,0x2748);
    }
  }
  uVar7 = thunk_FUN_02dfd288(
                            Method_System_Collections_Generic_Dictionary<Message_MessageType,_Callback_RequestCallback>_Clear__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02d96724(uVar9,uVar7);
}


