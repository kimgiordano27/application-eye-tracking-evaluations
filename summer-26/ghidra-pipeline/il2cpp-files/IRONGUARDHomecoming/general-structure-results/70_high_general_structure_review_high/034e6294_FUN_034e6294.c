/*
FUNCTION_NAME: FUN_034e6294
ENTRY_POINT: 034e6294
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_8;telemetry_or_network_hits_8;frame_or_lifecycle_behavior
*/


int FUN_034e6294(undefined8 param_1,long param_2,int param_3,int param_4)

{
  int iVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  
  if ((DAT_04832def & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Sirenix_Serialization_WeakDictionaryFormatter_SerializeImplementation__
                      );
    DAT_04832def = 1;
  }
  puVar5 = Method_Sirenix_Serialization_WeakDictionaryFormatter_SerializeImplementation__;
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar7 = thunk_FUN_01f117cc();
    uVar8 = thunk_FUN_01efb3a4(
                              Method_Sirenix_Serialization_WeakDoubleLookupDictionaryFormatter_DeserializeImplementation__
                              );
    FUN_034efd20(uVar7,uVar8,0);
  }
  else {
    if (param_3 < 0) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar7 = thunk_FUN_01f117cc();
      puVar5 = Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__;
    }
    else {
      if (-1 < param_4) {
        if (param_3 <= *(int *)(param_2 + 0x18) - param_4) {
          lVar3 = *(long *)
                   Method_Sirenix_Serialization_WeakDictionaryFormatter_SerializeImplementation__;
          if (*(int *)(lVar3 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar3 = *(long *)puVar5;
          }
          if (param_4 < 1) {
            param_4 = 0;
          }
          else {
            uVar2 = *(ushort *)(*(long *)(lVar3 + 0xb8) + 8);
            iVar9 = 0;
            do {
              uVar4 = FUN_034cb7f0(param_1,0);
              if ((int)(uint)uVar4 < 0) {
                return iVar9;
              }
              iVar1 = iVar9 + 1;
              if (*(uint *)(param_2 + 0x18) <= (uint)(param_3 + iVar9)) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a44();
              }
              *(short *)(param_2 + (long)(param_3 + iVar9) * 2 + 0x20) = (short)uVar4;
              uVar10 = (uint)uVar2;
              if (uVar10 == 0) {
                uVar4 = FUN_034e651c(uVar4,uVar4 & 0xffffffff);
                if ((uVar4 & 1) != 0) {
                  return iVar1;
                }
              }
              else if (uVar10 == ((uint)uVar4 & 0xffff)) {
                return iVar9 + 1;
              }
              iVar9 = iVar1;
            } while (param_4 != iVar1);
          }
          return param_4;
        }
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
        uVar7 = thunk_FUN_01f117cc();
        uVar8 = thunk_FUN_01efb3a4(
                                  Method_Sirenix_Serialization_WeakDoubleLookupDictionaryFormatter_SerializeImplementation__
                                  );
        FUN_034f6754(uVar7,uVar8,0);
        goto LAB_034e647c;
      }
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar7 = thunk_FUN_01f117cc();
      puVar5 = Method_UnityEngine_UIElements_BoundsField_<_ctor>b__10_1__;
    }
    uVar8 = thunk_FUN_01efb3a4(puVar5);
    uVar6 = thunk_FUN_01efb3a4(Method_OVRPermissionsRequester_GetPermissionId__);
    FUN_034f3578(uVar7,uVar8,uVar6,0);
  }
LAB_034e647c:
  uVar8 = thunk_FUN_01efb3a4(Method_Sirenix_Serialization_WeakGenericCollectionFormatter__ctor__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar7,uVar8);
}


