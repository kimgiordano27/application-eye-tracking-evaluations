/*
FUNCTION_NAME: FUN_02225f6c
ENTRY_POINT: 02225f6c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void FUN_02225f6c(undefined8 param_1,uint param_2,void *param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_108 [200];
  
                    /* catch() { ... } // from try @ 02225f18 with catch @ 02225f70
                       catch() { ... } // from try @ 02225f60 with catch @ 02225f70 */
                    /* try { // try from 02225f74 to 02325f77 has its CatchHandler @ 02225f80 */
                    /* try { // try from 02225f78 to 02325f83 has its CatchHandler @ 02225d70 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02225f74 with catch @ 02225f80
                        */
                    /* try { // try from 02225f84 to 02325fbb has its CatchHandler @ 02225f84
                       catch() { ... } // from try @ 02225f84 with catch @ 02225f84
                       catch() { ... } // from try @ 02226090 with catch @ 02225f84
                       catch() { ... } // from try @ 022260e0 with catch @ 02225f84
                       catch() { ... } // from try @ 02226144 with catch @ 02225f84
                       catch() { ... } // from try @ 0222618c with catch @ 02225f84 */
  if (*(long *)(param_4 + 0x38) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_01ecafa0(param_4);
    }
  }
  uVar1 = FUN_03582fa8(param_1,0);
  if (uVar1 <= param_2) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar6 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                              );
    FUN_034f7db4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,param_4);
  }
  plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     );
  if (plVar2 == (long *)0x0) {
    FUN_01f08848(param_1,param_2,param_3);
    return;
  }
  memcpy(auStack_108,param_3,200);
  lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_4 + 0x38),auStack_108);
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
    uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,0);
  }
  if (param_2 < *(uint *)(plVar2 + 3)) {
    plVar2[(long)(int)param_2 + 4] = lVar3;
    thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


