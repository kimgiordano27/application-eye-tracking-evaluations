/*
FUNCTION_NAME: FUN_0222e4d0
ENTRY_POINT: 0222e4d0
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


void FUN_0222e4d0(undefined8 param_1,uint param_2,undefined8 *param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
                    /* try { // try from 0222e4dc to 0232e4e7 has its CatchHandler @ 0222e52c */
                    /* try { // try from 0222e4ec to 0232e4fb has its CatchHandler @ 0222e528 */
  if (*(long *)(param_4 + 0x38) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
                    /* try { // try from 0222e504 to 0232e50f has its CatchHandler @ 0222e538 */
    if (*(long *)(param_4 + 0x38) == 0) {
                    /* try { // try from 0222e510 to 0232e55b has its CatchHandler @ 0222e3b4 */
      FUN_01ecafa0(param_4);
    }
  }
  uVar1 = FUN_03582fa8(param_1,0);
  if (uVar1 <= param_2) {
                    /* try { // try from 0222e5c8 to 0232e613 has its CatchHandler @ 0222e5c8
                       catch() { ... } // from try @ 0222e5c8 with catch @ 0222e5c8
                       catch() { ... } // from try @ 0222e6e8 with catch @ 0222e5c8
                       catch() { ... } // from try @ 0222e750 with catch @ 0222e5c8
                       catch() { ... } // from try @ 0222e7b4 with catch @ 0222e5c8
                       catch() { ... } // from try @ 0222e7fc with catch @ 0222e5c8 */
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar6 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                              );
    FUN_034f7db4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,param_4);
  }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222e4ec with catch @ 0222e528
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222e4dc with catch @ 0222e52c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222e4ac with catch @ 0222e530
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222e434 with catch @ 0222e534
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222e504 with catch @ 0222e538
                        */
  plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     );
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222e454 with catch @ 0222e53c
                        */
  if (plVar2 == (long *)0x0) {
                    /* catch() { ... } // from try @ 0222e55c with catch @ 0222e5b4
                       catch() { ... } // from try @ 0222e5a4 with catch @ 0222e5b4 */
                    /* try { // try from 0222e5b8 to 0232e5bb has its CatchHandler @ 0222e5c4 */
                    /* try { // try from 0222e5bc to 0232e5c7 has its CatchHandler @ 0222e3b4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0222e5b8 with catch @ 0222e5c4
                        */
    FUN_01f08848(param_1,param_2,param_3);
    return;
  }
  uStack_48 = param_3[1];
  local_50 = *param_3;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222e3ec with catch @ 0222e540
                        */
  uStack_38 = param_3[3];
  uStack_40 = param_3[2];
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222e404 with catch @ 0222e544
                       catch(type#1 @ 042b3198) { ... } // from try @ 0222e47c with catch @ 0222e544
                        */
  lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_4 + 0x38),&local_50);
                    /* try { // try from 0222e55c to 0232e573 has its CatchHandler @ 0222e5b4 */
                    /* try { // try from 0222e574 to 0232e5a3 has its CatchHandler @ 0222e3b4 */
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
    uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,0);
  }
  if (param_2 < *(uint *)(plVar2 + 3)) {
    plVar2[(long)(int)param_2 + 4] = lVar3;
    thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
                    /* try { // try from 0222e5a4 to 0232e5b3 has its CatchHandler @ 0222e5b4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


