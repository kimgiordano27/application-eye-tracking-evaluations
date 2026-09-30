/*
FUNCTION_NAME: FUN_02232ce8
ENTRY_POINT: 02232ce8
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


void FUN_02232ce8(undefined8 param_1,uint param_2,undefined8 *param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if (*(long *)(param_4 + 0x38) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_01ecafa0(param_4);
    }
  }
  uVar1 = FUN_03582fa8(param_1,0);
                    /* try { // try from 02232d38 to 02332d3b has its CatchHandler @ 02232d54 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02232c08 with catch @ 02232d3c
                       try { // try from 02232d3c to 02332d6f has its CatchHandler @ 02232a8c */
  if (uVar1 <= param_2) {
                    /* try { // try from 02232dec to 02332df7 has its CatchHandler @ 02232a8c */
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar6 = thunk_FUN_01f117cc();
                    /* try { // try from 02232df8 to 02332dff has its CatchHandler @ 02232e00 */
    uVar5 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                              );
    FUN_034f7db4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,param_4);
  }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02232bc8 with catch @ 02232d40
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02232c4c with catch @ 02232d44
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02232c20 with catch @ 02232d48
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02232ba8 with catch @ 02232d4c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02232be8 with catch @ 02232d50
                       catch(type#1 @ 042b3198) { ... } // from try @ 02232c88 with catch @ 02232d50
                        */
  plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     );
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02232ca0 with catch @ 02232d54
                       catch(type#1 @ 042b3198) { ... } // from try @ 02232d38 with catch @ 02232d54
                        */
  if (plVar2 == (long *)0x0) {
    FUN_01f08848(param_1,param_2,param_3);
    return;
  }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02232b78 with catch @ 02232d58
                        */
  local_40 = param_3[2];
  uStack_48 = param_3[1];
  local_50 = *param_3;
                    /* try { // try from 02232d70 to 02332d73 has its CatchHandler @ 02232d84 */
  lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_4 + 0x38),&local_50);
                    /* catch() { ... } // from try @ 02232d70 with catch @ 02232d84 */
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
    uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,0);
  }
  if (param_2 < *(uint *)(plVar2 + 3)) {
    plVar2[(long)(int)param_2 + 4] = lVar3;
    thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
                    /* try { // try from 02232dc4 to 02332deb has its CatchHandler @ 02232e00 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


