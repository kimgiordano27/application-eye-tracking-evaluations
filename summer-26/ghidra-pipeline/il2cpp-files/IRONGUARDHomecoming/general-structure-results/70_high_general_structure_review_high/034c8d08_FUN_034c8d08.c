/*
FUNCTION_NAME: FUN_034c8d08
ENTRY_POINT: 034c8d08
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long FUN_034c8d08(long param_1,long param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  
  FUN_034c7be4();
  if (0x7fffffff < param_2) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar3 = thunk_FUN_01f117cc();
    uVar4 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Message<NetSyncSessionsChangedNotification>_get_Data__
                              );
    uVar2 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_Unit_ValueOutput<float>__);
    FUN_034f3578(uVar3,uVar4,uVar2,0);
    goto LAB_034c8e3c;
  }
  if (param_3 == 2) {
    iVar1 = *(int *)(param_1 + 0x38);
LAB_034c8d64:
    iVar5 = iVar1 + (int)param_2;
    if ((*(int *)(param_1 + 0x30) <= iVar5) && ((long)*(int *)(param_1 + 0x30) <= iVar1 + param_2))
    {
LAB_034c8d80:
      *(int *)(param_1 + 0x34) = iVar5;
      return (long)iVar5;
    }
  }
  else {
    if (param_3 == 1) {
      iVar1 = *(int *)(param_1 + 0x34);
      goto LAB_034c8d64;
    }
    if (param_3 != 0) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar3 = thunk_FUN_01f117cc();
      uVar4 = thunk_FUN_01efb3a4(
                                Method_Unity_VisualScripting_UnityMessageListener_<AddGUIListeners>b__1_0__
                                );
      FUN_034f6754(uVar3,uVar4,0);
      goto LAB_034c8e3c;
    }
    if ((-1 < param_2) &&
       (iVar5 = *(int *)(param_1 + 0x30) + (int)param_2, *(int *)(param_1 + 0x30) <= iVar5))
    goto LAB_034c8d80;
  }
  thunk_FUN_01efb3a4(Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__);
  uVar3 = thunk_FUN_01f117cc();
  uVar4 = thunk_FUN_01efb3a4(Method_Sirenix_Utilities_UnityExtensions_SafeIsUnityNull__);
  FUN_034c6a10(uVar3,uVar4);
LAB_034c8e3c:
  uVar4 = thunk_FUN_01efb3a4(
                            Method_Unity_VisualScripting_UnityMessageListener_<AddGUIListeners>b__1_1__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar3,uVar4);
}


