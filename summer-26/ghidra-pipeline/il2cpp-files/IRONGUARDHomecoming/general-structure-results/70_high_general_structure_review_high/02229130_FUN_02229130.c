/*
FUNCTION_NAME: FUN_02229130
ENTRY_POINT: 02229130
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


void FUN_02229130(undefined8 param_1,uint param_2,undefined8 *param_3,long param_4)

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
  
                    /* try { // try from 02229144 to 0232914f has its CatchHandler @ 02229178 */
                    /* try { // try from 02229150 to 0232919b has its CatchHandler @ 02228fec */
  if (*(long *)(param_4 + 0x38) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222912c with catch @ 02229168
                        */
    if (*(long *)(param_4 + 0x38) == 0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222911c with catch @ 0222916c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 022290e4 with catch @ 02229170
                        */
      FUN_01ecafa0(param_4);
    }
  }
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222906c with catch @ 02229174
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02229144 with catch @ 02229178
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222908c with catch @ 0222917c
                        */
  uVar1 = FUN_03582fa8(param_1,0);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02229024 with catch @ 02229180
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222903c with catch @ 02229184
                       catch(type#1 @ 042b3198) { ... } // from try @ 022290b4 with catch @ 02229184
                        */
  if (uVar1 <= param_2) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar6 = thunk_FUN_01f117cc();
                    /* try { // try from 02229240 to 02329247 has its CatchHandler @ 02229394 */
    uVar5 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                              );
    FUN_034f7db4(uVar6,uVar5,0);
                    /* try { // try from 02229258 to 0232927b has its CatchHandler @ 02229398 */
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,param_4);
  }
  plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     );
                    /* try { // try from 0222919c to 023291b3 has its CatchHandler @ 022291f4 */
  if (plVar2 == (long *)0x0) {
                    /* try { // try from 02229208 to 0232923f has its CatchHandler @ 02229208
                       catch() { ... } // from try @ 02229208 with catch @ 02229208
                       catch() { ... } // from try @ 02229314 with catch @ 02229208
                       catch() { ... } // from try @ 02229364 with catch @ 02229208
                       catch() { ... } // from try @ 022293c8 with catch @ 02229208
                       catch() { ... } // from try @ 02229410 with catch @ 02229208 */
    FUN_01f08848(param_1,param_2,param_3);
    return;
  }
  uStack_48 = param_3[1];
  local_50 = *param_3;
  uStack_38 = param_3[3];
  uStack_40 = param_3[2];
                    /* try { // try from 022291b4 to 023291e3 has its CatchHandler @ 02228fec */
  lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_4 + 0x38),&local_50);
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


