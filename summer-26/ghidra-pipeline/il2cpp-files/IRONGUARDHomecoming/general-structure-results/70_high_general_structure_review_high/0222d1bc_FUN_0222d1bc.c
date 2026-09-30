/*
FUNCTION_NAME: FUN_0222d1bc
ENTRY_POINT: 0222d1bc
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


void FUN_0222d1bc(undefined8 param_1,uint param_2,undefined8 *param_3,long param_4)

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
  
                    /* try { // try from 0222d1c0 to 0232d1e3 has its CatchHandler @ 0222d288 */
  if (*(long *)(param_4 + 0x38) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
                    /* try { // try from 0222d1f0 to 0232d203 has its CatchHandler @ 0222d274 */
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_01ecafa0(param_4);
    }
  }
                    /* try { // try from 0222d204 to 0232d21f has its CatchHandler @ 0222d0f8 */
  uVar1 = FUN_03582fa8(param_1,0);
  if (uVar1 <= param_2) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar6 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                              );
                    /* try { // try from 0222d2e8 to 0232d2f7 has its CatchHandler @ 0222d2f8 */
    FUN_034f7db4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,param_4);
  }
                    /* try { // try from 0222d220 to 0232d22b has its CatchHandler @ 0222d270 */
  plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     );
  if (plVar2 == (long *)0x0) {
                    /* try { // try from 0222d2a0 to 0232d2b7 has its CatchHandler @ 0222d2f8 */
                    /* try { // try from 0222d2b8 to 0232d2e7 has its CatchHandler @ 0222d0f8 */
    FUN_01f08848(param_1,param_2,param_3);
    return;
  }
  local_40 = param_3[2];
                    /* try { // try from 0222d230 to 0232d23f has its CatchHandler @ 0222d26c */
  uStack_48 = param_3[1];
  local_50 = *param_3;
                    /* try { // try from 0222d248 to 0232d253 has its CatchHandler @ 0222d27c */
  lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_4 + 0x38),&local_50);
                    /* try { // try from 0222d254 to 0232d29f has its CatchHandler @ 0222d0f8 */
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
                    /* try { // try from 0222d2fc to 0232d2ff has its CatchHandler @ 0222d308 */
    uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* try { // try from 0222d300 to 0232d30b has its CatchHandler @ 0222d0f8 */
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,0);
  }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222d230 with catch @ 0222d26c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222d220 with catch @ 0222d270
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222d1f0 with catch @ 0222d274
                        */
  if (param_2 < *(uint *)(plVar2 + 3)) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222d178 with catch @ 0222d278
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222d248 with catch @ 0222d27c
                        */
    plVar2[(long)(int)param_2 + 4] = lVar3;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222d198 with catch @ 0222d280
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222d130 with catch @ 0222d284
                        */
    thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222d148 with catch @ 0222d288
                       catch(type#1 @ 042b3198) { ... } // from try @ 0222d1c0 with catch @ 0222d288
                        */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0222d2a0 with catch @ 0222d2f8
                       catch() { ... } // from try @ 0222d2e8 with catch @ 0222d2f8 */
  FUN_01f08a44();
}


