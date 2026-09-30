/*
FUNCTION_NAME: FUN_0222f1a0
ENTRY_POINT: 0222f1a0
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


void FUN_0222f1a0(undefined8 param_1,uint param_2,undefined8 *param_3,long param_4)

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
  
                    /* try { // try from 0222f1a8 to 0232f1b3 has its CatchHandler @ 0222f1dc */
                    /* try { // try from 0222f1b4 to 0232f1ff has its CatchHandler @ 0222f058 */
  if (*(long *)(param_4 + 0x38) == 0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222f190 with catch @ 0222f1cc
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222f180 with catch @ 0222f1d0
                        */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222f150 with catch @ 0222f1d4
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222f0d8 with catch @ 0222f1d8
                        */
    if (*(long *)(param_4 + 0x38) == 0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222f1a8 with catch @ 0222f1dc
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222f0f8 with catch @ 0222f1e0
                        */
      FUN_01ecafa0(param_4);
    }
  }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222f090 with catch @ 0222f1e4
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222f0a8 with catch @ 0222f1e8
                       catch(type#1 @ 042b3198) { ... } // from try @ 0222f120 with catch @ 0222f1e8
                        */
  uVar1 = FUN_03582fa8(param_1,0);
  if (uVar1 <= param_2) {
                    /* try { // try from 0222f2a4 to 0232f2ab has its CatchHandler @ 0222f3f8 */
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar6 = thunk_FUN_01f117cc();
                    /* try { // try from 0222f2bc to 0232f2df has its CatchHandler @ 0222f3fc */
    uVar5 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                              );
    FUN_034f7db4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,param_4);
  }
                    /* try { // try from 0222f200 to 0232f217 has its CatchHandler @ 0222f258 */
  plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     );
  if (plVar2 == (long *)0x0) {
    FUN_01f08848(param_1,param_2,param_3);
    return;
  }
  local_40 = param_3[2];
  uStack_48 = param_3[1];
  local_50 = *param_3;
                    /* try { // try from 0222f218 to 0232f247 has its CatchHandler @ 0222f058 */
  lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_4 + 0x38),&local_50);
                    /* try { // try from 0222f248 to 0232f257 has its CatchHandler @ 0222f258 */
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
    uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,0);
  }
                    /* catch() { ... } // from try @ 0222f200 with catch @ 0222f258
                       catch() { ... } // from try @ 0222f248 with catch @ 0222f258 */
  if (param_2 < *(uint *)(plVar2 + 3)) {
                    /* try { // try from 0222f25c to 0232f25f has its CatchHandler @ 0222f268 */
                    /* try { // try from 0222f260 to 0232f26b has its CatchHandler @ 0222f058 */
    plVar2[(long)(int)param_2 + 4] = lVar3;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0222f25c with catch @ 0222f268
                        */
    thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
                    /* try { // try from 0222f26c to 0232f2a3 has its CatchHandler @ 0222f26c
                       catch() { ... } // from try @ 0222f26c with catch @ 0222f26c
                       catch() { ... } // from try @ 0222f378 with catch @ 0222f26c
                       catch() { ... } // from try @ 0222f3c8 with catch @ 0222f26c
                       catch() { ... } // from try @ 0222f42c with catch @ 0222f26c
                       catch() { ... } // from try @ 0222f474 with catch @ 0222f26c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


