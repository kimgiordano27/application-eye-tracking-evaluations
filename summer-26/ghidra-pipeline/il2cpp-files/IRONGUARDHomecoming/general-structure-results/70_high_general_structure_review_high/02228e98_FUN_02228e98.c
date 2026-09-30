/*
FUNCTION_NAME: FUN_02228e98
ENTRY_POINT: 02228e98
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


void FUN_02228e98(undefined8 param_1,uint param_2,undefined8 *param_3,long param_4)

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
  
                    /* try { // try from 02228ea0 to 02328ec3 has its CatchHandler @ 02228f68 */
  if (*(long *)(param_4 + 0x38) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
                    /* try { // try from 02228ed0 to 02328ee3 has its CatchHandler @ 02228f54 */
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_01ecafa0(param_4);
    }
  }
                    /* try { // try from 02228ee4 to 02328eff has its CatchHandler @ 02228dd8 */
  uVar1 = FUN_03582fa8(param_1,0);
  if (uVar1 <= param_2) {
                    /* try { // try from 02228f98 to 02328fc7 has its CatchHandler @ 02228dd8 */
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar6 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                              );
    FUN_034f7db4(uVar6,uVar5,0);
                    /* try { // try from 02228fc8 to 02328fd7 has its CatchHandler @ 02228fd8 */
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,param_4);
  }
                    /* try { // try from 02228f00 to 02328f0b has its CatchHandler @ 02228f50 */
  plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     );
  if (plVar2 == (long *)0x0) {
    FUN_01f08848(param_1,param_2,param_3);
    return;
  }
  local_40 = param_3[4];
  uStack_58 = param_3[1];
  local_60 = *param_3;
  uStack_48 = param_3[3];
  uStack_50 = param_3[2];
                    /* try { // try from 02228f10 to 02328f1f has its CatchHandler @ 02228f4c */
                    /* try { // try from 02228f28 to 02328f33 has its CatchHandler @ 02228f5c */
  lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_4 + 0x38),&local_60);
                    /* try { // try from 02228f34 to 02328f7f has its CatchHandler @ 02228dd8 */
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
                    /* catch() { ... } // from try @ 02228f80 with catch @ 02228fd8
                       catch() { ... } // from try @ 02228fc8 with catch @ 02228fd8 */
    uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* try { // try from 02228fdc to 02328fdf has its CatchHandler @ 02228fe8 */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02228fe0 to 02328feb has its CatchHandler @ 02228dd8 */
    FUN_01f08910(uVar6,0);
  }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02228f10 with catch @ 02228f4c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02228f00 with catch @ 02228f50
                        */
  if (param_2 < *(uint *)(plVar2 + 3)) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02228ed0 with catch @ 02228f54
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02228e58 with catch @ 02228f58
                        */
    plVar2[(long)(int)param_2 + 4] = lVar3;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02228f28 with catch @ 02228f5c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02228e78 with catch @ 02228f60
                        */
    thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02228e10 with catch @ 02228f64
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02228e28 with catch @ 02228f68
                       catch(type#1 @ 042b3198) { ... } // from try @ 02228ea0 with catch @ 02228f68
                        */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


