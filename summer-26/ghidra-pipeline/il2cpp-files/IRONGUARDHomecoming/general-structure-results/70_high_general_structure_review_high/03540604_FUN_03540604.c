/*
FUNCTION_NAME: FUN_03540604
ENTRY_POINT: 03540604
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_1
*/


void FUN_03540604(long *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  
  if ((DAT_0483310f & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_TextCore_Text_TextProcessingStack<Color32>_Remove__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    DAT_0483310f = 1;
  }
  iVar3 = (**(code **)(*param_1 + 0x2a8))(param_1,*(undefined8 *)(*param_1 + 0x2b0));
  puVar2 = Method_UnityEngine_TextCore_Text_TextProcessingStack<Color32>_Remove__;
  puVar1 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__;
  if (param_2 < iVar3) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar6 = thunk_FUN_01f117cc();
    uVar7 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__
                              );
    uVar8 = thunk_FUN_01efb3a4(Method_System_Decimal_ToInt64__);
    FUN_034f3578(uVar6,uVar7,uVar8,0);
    uVar7 = thunk_FUN_01efb3a4(Method_Unity_Burst_Intrinsics_Arm_Neon_vmls_n_f32__);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,uVar7);
  }
  plVar9 = param_1 + 2;
  if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  if (*(int *)(*plVar9 + 0x18) == param_2) {
    return;
  }
  if (param_2 < 1) {
    lVar4 = *(long *)Method_UnityEngine_TextCore_Text_TextProcessingStack<Color32>_Remove__;
    lVar5 = *(long *)(lVar4 + 0x38);
    if (lVar5 == 0) {
      FUN_01ecafa0(lVar4);
      lVar5 = *(long *)(lVar4 + 0x38);
    }
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar5 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    *plVar9 = **(long **)(lVar5 + 0xb8);
    thunk_FUN_01f51358(plVar9);
    lVar4 = *(long *)puVar2;
    lVar5 = *(long *)(lVar4 + 0x38);
    if (lVar5 == 0) {
      FUN_01ecafa0(lVar4);
      lVar5 = *(long *)(lVar4 + 0x38);
    }
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar5 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01ecaf44();
    }
    lVar5 = **(long **)(lVar5 + 0xb8);
    param_1[3] = lVar5;
  }
  else {
    lVar4 = FUN_01f08890(*(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                         ,param_2);
    lVar5 = FUN_01f08890(*(undefined8 *)puVar1,param_2);
    if (0 < (int)param_1[4]) {
      FUN_0358d498(param_1[2],0,lVar4,0,(int)param_1[4],0);
      FUN_0358d498(param_1[3],0,lVar5,0,(int)param_1[4],0);
    }
    param_1[2] = lVar4;
    thunk_FUN_01f51358(plVar9,lVar4);
    param_1[3] = lVar5;
  }
  thunk_FUN_01f51358(param_1 + 3,lVar5);
  return;
}


