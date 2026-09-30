/*
FUNCTION_NAME: FUN_0271e048
ENTRY_POINT: 0271e048
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void FUN_0271e048(long param_1,int param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  int local_24;
  
  plVar7 = (long *)(param_1 + 0x10);
  if (*plVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(int *)(*plVar7 + 0x18) == param_2) {
    return;
  }
  if (*(int *)(param_1 + 0x20) <= param_2) {
    puVar6 = *(undefined8 **)(*(long *)(param_3 + 0x20) + 0xc0);
    if (param_2 < 1) {
      uVar3 = (**(code **)*puVar6)();
      *(undefined8 *)(param_1 + 0x10) = uVar3;
      thunk_FUN_01f51358(plVar7,uVar3);
      uVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x18))();
      *(undefined8 *)(param_1 + 0x18) = uVar3;
    }
    else {
      lVar1 = puVar6[9];
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01ecaf44();
      }
      uVar2 = FUN_01f08890(lVar1,param_2);
      lVar1 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x50);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01ecaf44(lVar1);
      }
      uVar3 = FUN_01f08890(lVar1,param_2);
      if (0 < *(int *)(param_1 + 0x20)) {
        FUN_0358d498(*(undefined8 *)(param_1 + 0x10),0,uVar2,0,*(int *)(param_1 + 0x20),0);
        FUN_0358d498(*(undefined8 *)(param_1 + 0x18),0,uVar3,0,*(undefined4 *)(param_1 + 0x20),0);
      }
      *(undefined8 *)(param_1 + 0x10) = uVar2;
      thunk_FUN_01f51358(plVar7,uVar2);
      *(undefined8 *)(param_1 + 0x18) = uVar3;
    }
    thunk_FUN_01f51358(param_1 + 0x18,uVar3);
    return;
  }
  local_24 = param_2;
  uVar3 = thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<GfxUpdateBufferRange>_Dispose__);
  uVar3 = thunk_FUN_01f113fc(uVar3,&local_24);
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar2 = thunk_FUN_01f117cc();
  uVar4 = thunk_FUN_01efb3a4(
                            Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__
                            );
  uVar5 = thunk_FUN_01efb3a4(Method_System_Decimal_ToInt64__);
  FUN_034f48f0(uVar2,uVar4,uVar3,uVar5,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar2,param_3);
}


