/*
FUNCTION_NAME: FUN_0271ba7c
ENTRY_POINT: 0271ba7c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void FUN_0271ba7c(long param_1,int param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
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
    plVar6 = *(long **)(*(long *)(param_3 + 0x20) + 0xc0);
    if (param_2 < 1) {
                    /* try { // try from 0271bb84 to 0281bc27 has its CatchHandler @ 0271bb84
                       catch() { ... } // from try @ 0271bb84 with catch @ 0271bb84
                       catch() { ... } // from try @ 0271bc78 with catch @ 0271bb84
                       catch() { ... } // from try @ 0271bcf0 with catch @ 0271bb84
                       catch() { ... } // from try @ 0271bd74 with catch @ 0271bb84 */
      lVar8 = *plVar6;
      lVar1 = *(long *)(lVar8 + 0x38);
      if (lVar1 == 0) {
        FUN_01ecafa0(lVar8);
        lVar1 = *(long *)(lVar8 + 0x38);
      }
      lVar1 = *(long *)(lVar1 + 0x10);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01ecaf44();
      }
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar1 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01ecaf44();
      }
      *plVar7 = **(long **)(lVar1 + 0xb8);
      thunk_FUN_01f51358(plVar7);
      lVar8 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x18);
      lVar1 = *(long *)(lVar8 + 0x38);
      if (lVar1 == 0) {
        FUN_01ecafa0(lVar8);
        lVar1 = *(long *)(lVar8 + 0x38);
      }
      lVar1 = *(long *)(lVar1 + 0x10);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01ecaf44();
      }
      if (*(int *)(lVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar1 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01ecaf44();
      }
      uVar3 = **(undefined8 **)(lVar1 + 0xb8);
      *(undefined8 *)(param_1 + 0x18) = uVar3;
    }
    else {
      lVar1 = plVar6[9];
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
                    /* try { // try from 0271bc78 to 0281bcd7 has its CatchHandler @ 0271bb84 */
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar2 = thunk_FUN_01f117cc();
  uVar4 = thunk_FUN_01efb3a4(
                            Method_UnityEngine_Component_GetComponentsInChildren<DebugUIHandlerWidget>__
                            );
  uVar5 = thunk_FUN_01efb3a4(Method_System_Decimal_ToInt64__);
  FUN_034f48f0(uVar2,uVar4,uVar3,uVar5,0);
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0271bc28 with catch @ 0271bcc0
                        */
  FUN_01f08910(uVar2,param_3);
}


