/*
FUNCTION_NAME: FUN_02f1e6dc
ENTRY_POINT: 02f1e6dc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void FUN_02f1e6dc(int *param_1,uint param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  int local_28;
  uint local_24;
  
  puVar1 = Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__;
  if ((-1 < (int)param_2) && ((int)param_2 < *param_1)) {
    lVar4 = *(long *)(param_3 + 0x20);
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)param_2 * 8);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ecaf44(lVar4);
    }
    FUN_02f1fed4(uVar5,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 8));
    return;
  }
  local_24 = param_2;
  uVar5 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
  uVar5 = thunk_FUN_01f113fc(uVar5,&local_24);
  local_28 = *param_1;
  uVar2 = thunk_FUN_01efb3a4(puVar1);
  uVar2 = thunk_FUN_01f113fc(uVar2,&local_28);
  uVar3 = thunk_FUN_01efb3a4(
                            Method_DG_Tweening_Core_Extensions_Blendable<Color,_Color,_ColorOptions>__
                            );
  uVar5 = FUN_0340f2f0(uVar3,uVar5,uVar2,0);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar2 = thunk_FUN_01f117cc();
  uVar3 = thunk_FUN_01efb3a4(
                            Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                            );
  FUN_034f3578(uVar2,uVar3,uVar5,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar2,param_3);
}


