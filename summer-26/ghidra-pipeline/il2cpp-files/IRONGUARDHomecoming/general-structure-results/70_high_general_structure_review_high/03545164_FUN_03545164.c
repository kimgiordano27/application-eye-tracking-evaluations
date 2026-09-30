/*
FUNCTION_NAME: FUN_03545164
ENTRY_POINT: 03545164
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_1
*/


void FUN_03545164(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  
  if ((DAT_0483312f & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    DAT_0483312f = 1;
  }
  if (param_2 < *(int *)(param_1 + 0x18)) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar2 = thunk_FUN_01f117cc();
    uVar3 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__
                              );
    uVar4 = thunk_FUN_01efb3a4(Method_System_Decimal_ToInt64__);
    FUN_034f3578(uVar2,uVar3,uVar4,0);
    uVar3 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmlsq_n_u16__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar2,uVar3);
  }
  plVar5 = (long *)(param_1 + 0x10);
  if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(int *)(*plVar5 + 0x18) == param_2) {
    return;
  }
  if (param_2 < 1) {
    lVar1 = FUN_01f08890(*(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                         ,4);
    *plVar5 = lVar1;
  }
  else {
    lVar1 = FUN_01f08890(*(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                         ,param_2);
    if (0 < *(int *)(param_1 + 0x18)) {
      FUN_0358d498(*plVar5,0,lVar1,0,*(int *)(param_1 + 0x18),0);
    }
    *plVar5 = lVar1;
  }
  thunk_FUN_01f51358(plVar5,lVar1);
  return;
}


