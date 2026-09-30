/*
FUNCTION_NAME: FUN_02226498
ENTRY_POINT: 02226498
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


void FUN_02226498(undefined8 param_1,uint param_2,undefined8 *param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
                    /* try { // try from 022264a4 to 023264b7 has its CatchHandler @ 02226528 */
                    /* try { // try from 022264b8 to 023264d3 has its CatchHandler @ 022263ac */
  if (*(long *)(param_4 + 0x38) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    if (*(long *)(param_4 + 0x38) == 0) {
                    /* try { // try from 022264d4 to 023264df has its CatchHandler @ 02226524 */
      FUN_01ecafa0(param_4);
    }
  }
                    /* try { // try from 022264e4 to 023264f3 has its CatchHandler @ 02226520 */
  uVar1 = FUN_03582fa8(param_1,0);
  if (uVar1 <= param_2) {
                    /* try { // try from 0222659c to 023265ab has its CatchHandler @ 022265ac */
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar6 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                              );
    FUN_034f7db4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,param_4);
  }
                    /* try { // try from 022264fc to 02326507 has its CatchHandler @ 02226530 */
  plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     );
  if (plVar2 == (long *)0x0) {
    FUN_01f08848(param_1,param_2,param_3);
    return;
  }
                    /* try { // try from 02226508 to 02326553 has its CatchHandler @ 022263ac */
  local_40 = param_3[4];
  uStack_58 = param_3[1];
  local_60 = *param_3;
  uStack_48 = param_3[3];
  uStack_50 = param_3[2];
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 022264e4 with catch @ 02226520
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 022264d4 with catch @ 02226524
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 022264a4 with catch @ 02226528
                        */
  lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_4 + 0x38),&local_60);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222642c with catch @ 0222652c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 022264fc with catch @ 02226530
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222644c with catch @ 02226534
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 022263e4 with catch @ 02226538
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 022263fc with catch @ 0222653c
                       catch(type#1 @ 042b3198) { ... } // from try @ 02226474 with catch @ 0222653c
                        */
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
    uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,0);
  }
  if (param_2 < *(uint *)(plVar2 + 3)) {
                    /* try { // try from 02226554 to 0232656b has its CatchHandler @ 022265ac */
    plVar2[(long)(int)param_2 + 4] = lVar3;
    thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
                    /* try { // try from 0222656c to 0232659b has its CatchHandler @ 022263ac */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


