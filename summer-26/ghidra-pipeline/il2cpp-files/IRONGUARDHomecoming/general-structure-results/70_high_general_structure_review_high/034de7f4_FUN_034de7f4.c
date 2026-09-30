/*
FUNCTION_NAME: FUN_034de7f4
ENTRY_POINT: 034de7f4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_034de7f4(long param_1,long *param_2,int param_3,byte param_4,int param_5,byte param_6,
                 uint param_7)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  int local_44;
  
  if ((DAT_04832dac & 1) == 0) {
    thunk_FUN_01efb3a4(Method_OVRTask_FromGuid<bool>__);
    DAT_04832dac = 1;
  }
  local_44 = 0;
  if ((param_7 & 1) == 0) {
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar4 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
    if ((uVar4 & 1) != 0) {
      uVar5 = thunk_FUN_01efb3a4(Method_System_Version__ctor__);
      uVar7 = FUN_035ac8e0(uVar5,0);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
      uVar5 = thunk_FUN_01f117cc();
      uVar6 = thunk_FUN_01efb3a4(Method_UnityEngine_Vector4_get_Item__);
      FUN_034efd98(uVar5,uVar7,uVar6,0);
      goto LAB_034dea78;
    }
  }
  puVar2 = Method_OVRTask_FromGuid<bool>__;
  if (param_3 - 1U < 3) {
    if ((param_5 < 1) && ((param_7 & 1) == 0)) {
      uVar5 = thunk_FUN_01efb3a4(
                                Method_Sirenix_Serialization_UnitySerializationUtility_GetCachedUnityReader__
                                );
      uVar7 = FUN_035ac8e0(uVar5,0);
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar5 = thunk_FUN_01f117cc();
      uVar6 = thunk_FUN_01efb3a4(
                                Method_System_Linq_Expressions_ExpressionVisitor_VisitAndConvert<ParameterExpression>__
                                );
      FUN_034f3578(uVar5,uVar6,uVar7,0);
LAB_034dea78:
      uVar7 = thunk_FUN_01efb3a4(Method_System_Version__ctor__);
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar5,uVar7);
    }
    if (*(int *)(*(long *)Method_OVRTask_FromGuid<bool>__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    iVar3 = FUN_034e0264(param_2,&local_44);
    iVar1 = local_44;
    if (local_44 == 0) {
      uVar8 = 1;
      if (iVar3 != 1) {
        if (iVar3 == 0) {
          thunk_FUN_01efb3a4(Method_Sirenix_Serialization_IDataReader_ReadPrimitiveArray<int>__);
          uVar7 = thunk_FUN_01f117cc();
          uVar5 = thunk_FUN_01efb3a4(Method_System_Version__ctor__);
          FUN_034c6a10(uVar7,uVar5,0);
          goto LAB_034deac0;
        }
        uVar8 = 0;
      }
      *(undefined1 *)(param_1 + 0x56) = uVar8;
      *(long *)(param_1 + 0x38) = (long)param_2;
      thunk_FUN_01f51358((long *)(param_1 + 0x38),param_2);
      *(undefined1 *)(param_1 + 0x40) = 1;
      FUN_034e0cd8(param_1);
      FUN_034e039c(param_1,0,1);
      *(int *)(param_1 + 0x50) = param_3;
      *(byte *)(param_1 + 0x54) = param_4 & 1;
      *(byte *)(param_1 + 0x55) = param_6 & 1;
      *(undefined1 *)(param_1 + 0x57) = 0;
      if (*(char *)(param_1 + 0x56) == '\0') {
System_Threading_Tasks_ValueTask__AsTask:
        *(undefined8 *)(param_1 + 0x48) = 0;
        return;
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar5 = FUN_034e0684(param_2,0,1,&local_44);
      iVar1 = local_44;
      *(undefined8 *)(param_1 + 0x68) = uVar5;
      if (local_44 == 0) goto System_Threading_Tasks_ValueTask__AsTask;
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      thunk_FUN_01efb3a4(Method_OVRTask_FromGuid<bool>__);
      FUN_01bc4c70();
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      thunk_FUN_01efb3a4(Method_OVRTask_FromGuid<bool>__);
      FUN_01bc4c70();
    }
    uVar7 = FUN_034dfb20(uVar5,iVar1);
  }
  else {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar7 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(
                              Method_Unity_VisualScripting_UnityOnScrollbarValueChangedMessageListener_<Start>b__0_0__
                              );
    FUN_034f7db4(uVar7,uVar5,0);
  }
LAB_034deac0:
  uVar5 = thunk_FUN_01efb3a4(Method_System_Version__ctor__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar7,uVar5);
}


