/*
FUNCTION_NAME: FUN_02f1f56c
ENTRY_POINT: 02f1f56c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_10;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void FUN_02f1f56c(int *param_1,int param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int local_28;
  int local_24;
  
  if ((DAT_04831961 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_DG_Tweening_Core_Extensions_NoFrom<Vector3,_Vector3[],_Vector3ArrayOptions>__
                      );
    DAT_04831961 = 1;
  }
  puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if ((-1 < param_2) && (param_2 < *param_1)) {
    FUN_022732f0(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_1 + 4),param_1,param_2,
                 *(undefined8 *)
                  Method_DG_Tweening_Core_Extensions_NoFrom<Vector3,_Vector3[],_Vector3ArrayOptions>__
                );
    return;
  }
  local_24 = param_2;
  uVar2 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
  uVar2 = thunk_FUN_01f113fc(uVar2,&local_24);
  local_28 = *param_1;
  uVar3 = thunk_FUN_01efb3a4(puVar1);
  uVar3 = thunk_FUN_01f113fc(uVar3,&local_28);
  uVar4 = thunk_FUN_01efb3a4(
                            Method_DG_Tweening_Core_Extensions_SetSpecialStartupMode<TweenerCore<Quaternion,_Vector3,_QuaternionOptions>>__
                            );
  uVar2 = FUN_0340f2f0(uVar4,uVar2,uVar3,0);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar3 = thunk_FUN_01f117cc();
  uVar4 = thunk_FUN_01efb3a4(
                            Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                            );
  FUN_034f3578(uVar3,uVar4,uVar2,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar3,param_3);
}


