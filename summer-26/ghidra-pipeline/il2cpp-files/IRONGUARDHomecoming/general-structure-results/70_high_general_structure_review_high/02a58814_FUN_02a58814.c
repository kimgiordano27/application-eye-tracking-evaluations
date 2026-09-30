/*
FUNCTION_NAME: FUN_02a58814
ENTRY_POINT: 02a58814
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_02a58814(long param_1,long param_2,int param_3,long param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined4 local_44;
  
  if ((DAT_04830f21 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Select<ParameterInfo,_string>__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    DAT_04830f21 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
    uVar3 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              );
    FUN_034efd20(uVar4,uVar3,0);
  }
  else {
    if (-1 < param_3) {
      local_44 = 0;
      System_Collections_Generic_Dictionary<object,_Color32>___ctor
                (param_1,&local_44,
                 *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x158));
      lVar7 = *(long *)(param_1 + 0x10);
      thunk_FUN_01f3e6f0();
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar6 = *(long *)(lVar7 + 0x18);
      if (lVar6 != 0) {
        iVar8 = 0;
        uVar9 = 0;
        do {
          if ((iVar8 < 0) || ((long)*(int *)(lVar6 + 0x18) <= (long)uVar9)) {
            iVar2 = FUN_03582fa8(param_2,0);
            if ((-1 < iVar8) && (param_3 <= iVar2 - iVar8)) {
              lVar7 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x168);
              if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
                lVar7 = FUN_01ecaf44(lVar7);
              }
              lVar7 = thunk_FUN_01f116d0(param_2,lVar7);
              if (lVar7 == 0) {
                lVar7 = thunk_FUN_01f116d0(param_2,*(undefined8 *)
                                                                                                        
                                                  Method_System_Linq_Enumerable_Select<ParameterInfo,_string>__
                                          );
                if (lVar7 == 0) {
                  lVar7 = thunk_FUN_01f116d0(param_2,*(undefined8 *)
                                                                                                            
                                                  Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                            );
                  if (lVar7 == 0) {
                    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__)
                    ;
                    uVar3 = thunk_FUN_01f117cc();
                    uVar4 = thunk_FUN_01efb3a4(
                                              Method_System_Linq_Enumerable_Select<ParameterInfo,_Type>__
                                              );
                    uVar5 = thunk_FUN_01efb3a4(
                                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                                              );
                    FUN_034efd98(uVar3,uVar4,uVar5,0);
                    /* WARNING: Subroutine does not return */
                    FUN_01f08910(uVar3,param_4);
                  }
                  FUN_02a57028(param_1,lVar7,param_3,
                               *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x248))
                  ;
                }
                else {
                  FUN_02a56f5c(param_1,lVar7,param_3);
                }
              }
              else {
                System_Collections_Generic_Dictionary<object,_Bounds>__GetObjectData
                          (param_1,lVar7,param_3,
                           *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x170));
              }
              FUN_02a595d4(param_1,0,local_44);
              return;
            }
            thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
            uVar3 = thunk_FUN_01f117cc();
            uVar4 = thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Select<MemberInfo,_Member>__);
            FUN_034f6754(uVar3,uVar4,0);
                    /* WARNING: Subroutine does not return */
            FUN_01f08910(uVar3,param_4);
          }
          lVar10 = *(long *)(lVar7 + 0x20);
          thunk_FUN_01f3e6f0();
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          if (*(uint *)(lVar10 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          lVar1 = uVar9 * 4;
          lVar6 = *(long *)(lVar7 + 0x18);
          uVar9 = uVar9 + 1;
          iVar8 = *(int *)(lVar10 + lVar1 + 0x20) + iVar8;
        } while (lVar6 != 0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar4 = thunk_FUN_01f117cc();
    uVar3 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                              );
    uVar5 = thunk_FUN_01efb3a4(
                              Method_System_Linq_Enumerable_Select<LeaderboardEntry,_LeaderboardEntry>__
                              );
    FUN_034f3578(uVar4,uVar3,uVar5,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar4,param_4);
}


