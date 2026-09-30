/*
FUNCTION_NAME: FUN_02223a94
ENTRY_POINT: 02223a94
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void FUN_02223a94(undefined8 param_1,uint param_2,undefined8 ****param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  void *__dest;
  undefined8 ***local_60;
  long local_58;
  
                    /* try { // try from 02223a9c to 02323aa3 has its CatchHandler @ 02223bf0 */
  lVar2 = tpidr_el0;
                    /* try { // try from 02223ab4 to 02323ad7 has its CatchHandler @ 02223bf4 */
  local_58 = *(long *)(lVar2 + 0x28);
  plVar8 = *(long **)(param_4 + 0x38);
  local_60 = param_3;
  if (plVar8 == (long *)0x0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
                    /* try { // try from 02223ae4 to 02323afb has its CatchHandler @ 02223be4 */
    plVar8 = *(long **)(param_4 + 0x38);
    if (plVar8 == (long *)0x0) {
      FUN_01ecafa0(param_4);
      plVar8 = *(long **)(param_4 + 0x38);
    }
  }
  uVar1 = *(uint *)(*plVar8 + 0xfc);
                    /* try { // try from 02223b04 to 02323b13 has its CatchHandler @ 02223bec */
  __dest = (void *)((long)&local_60 - ((ulong)uVar1 + 0xf & 0x1fffffff0));
  uVar3 = FUN_03582fa8(param_1,0);
  if (param_2 < uVar3) {
                    /* try { // try from 02223b2c to 02323b4f has its CatchHandler @ 02223bf4 */
    plVar8 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                       );
    plVar9 = *(long **)(param_4 + 0x38);
    if (-1 < *(int *)(*plVar9 + 0x28)) {
      param_3 = &local_60;
    }
    if (plVar8 == (long *)0x0) {
      FUN_01f08848(param_1,param_2);
    }
    else {
      memcpy(__dest,param_3,(ulong)uVar1);
      lVar4 = thunk_FUN_01f113fc(*plVar9,__dest);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar8 + 0x40)), lVar5 == 0)) {
        uVar7 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar7,0);
      }
      if (*(uint *)(plVar8 + 3) <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar8[(long)(int)param_2 + 4] = lVar4;
      thunk_FUN_01f51358(plVar8 + (long)(int)param_2 + 4,lVar4);
    }
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar7 = thunk_FUN_01f117cc();
  uVar6 = thunk_FUN_01efb3a4(
                            Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                            );
  FUN_034f7db4(uVar7,uVar6,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar7,param_4);
}


