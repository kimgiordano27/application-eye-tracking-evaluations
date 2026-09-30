/*
FUNCTION_NAME: FUN_0222b23c
ENTRY_POINT: 0222b23c
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


void FUN_0222b23c(undefined8 param_1,uint param_2,void *param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [72];
  
                    /* try { // try from 0222b24c to 0232b263 has its CatchHandler @ 0222b34c */
  if (*(long *)(param_4 + 0x38) == 0) {
                    /* try { // try from 0222b26c to 0232b27b has its CatchHandler @ 0222b354 */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_01ecafa0(param_4);
    }
  }
  uVar1 = FUN_03582fa8(param_1,0);
  if (uVar1 <= param_2) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222b304 with catch @ 0222b340
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222b2f4 with catch @ 0222b344
                        */
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222b2c4 with catch @ 0222b348
                        */
    uVar6 = thunk_FUN_01f117cc();
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222b24c with catch @ 0222b34c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222b31c with catch @ 0222b350
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222b26c with catch @ 0222b354
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222b204 with catch @ 0222b358
                        */
    uVar5 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                              );
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222b21c with catch @ 0222b35c
                       catch(type#1 @ 042b3198) { ... } // from try @ 0222b294 with catch @ 0222b35c
                        */
    FUN_034f7db4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0222b374 to 0232b38b has its CatchHandler @ 0222b3cc */
    FUN_01f08910(uVar6,param_4);
  }
                    /* try { // try from 0222b294 to 0232b2b7 has its CatchHandler @ 0222b35c */
  plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     );
  if (plVar2 == (long *)0x0) {
                    /* try { // try from 0222b31c to 0232b327 has its CatchHandler @ 0222b350 */
                    /* try { // try from 0222b328 to 0232b373 has its CatchHandler @ 0222b1cc */
    FUN_01f08848(param_1,param_2,param_3);
    return;
  }
  memcpy(auStack_78,param_3,0x48);
                    /* try { // try from 0222b2c4 to 0232b2d7 has its CatchHandler @ 0222b348 */
  lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_4 + 0x38),auStack_78);
                    /* try { // try from 0222b2d8 to 0232b2f3 has its CatchHandler @ 0222b1cc */
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
    uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,0);
  }
                    /* try { // try from 0222b2f4 to 0232b2ff has its CatchHandler @ 0222b344 */
  if (param_2 < *(uint *)(plVar2 + 3)) {
    plVar2[(long)(int)param_2 + 4] = lVar3;
                    /* try { // try from 0222b304 to 0232b313 has its CatchHandler @ 0222b340 */
    thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


