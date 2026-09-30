/*
FUNCTION_NAME: FUN_0222daa8
ENTRY_POINT: 0222daa8
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


void FUN_0222daa8(undefined8 param_1,uint param_2,void *param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_b8 [136];
  
                    /* try { // try from 0222daac to 0232daf7 has its CatchHandler @ 0222d950 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222da88 with catch @ 0222dac4
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222da78 with catch @ 0222dac8
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222da48 with catch @ 0222dacc
                        */
  if (*(long *)(param_4 + 0x38) == 0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222d9d0 with catch @ 0222dad0
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222daa0 with catch @ 0222dad4
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222d9f0 with catch @ 0222dad8
                        */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222d988 with catch @ 0222dadc
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222d9a0 with catch @ 0222dae0
                       catch(type#1 @ 042b3198) { ... } // from try @ 0222da18 with catch @ 0222dae0
                        */
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_01ecafa0(param_4);
    }
  }
  uVar1 = FUN_03582fa8(param_1,0);
                    /* try { // try from 0222daf8 to 0232db0f has its CatchHandler @ 0222db50 */
  if (uVar1 <= param_2) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
                    /* try { // try from 0222dbb4 to 0232dbd7 has its CatchHandler @ 0222dcf4 */
    uVar6 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                              );
    FUN_034f7db4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,param_4);
  }
                    /* try { // try from 0222db10 to 0232db3f has its CatchHandler @ 0222d950 */
  plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     );
  if (plVar2 == (long *)0x0) {
                    /* try { // try from 0222db9c to 0232dba3 has its CatchHandler @ 0222dcf0 */
    FUN_01f08848(param_1,param_2,param_3);
    return;
  }
  memcpy(auStack_b8,param_3,0x84);
  lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_4 + 0x38),auStack_b8);
                    /* try { // try from 0222db40 to 0232db4f has its CatchHandler @ 0222db50 */
                    /* catch() { ... } // from try @ 0222daf8 with catch @ 0222db50
                       catch() { ... } // from try @ 0222db40 with catch @ 0222db50 */
                    /* try { // try from 0222db54 to 0232db57 has its CatchHandler @ 0222db60 */
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
    uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,0);
  }
                    /* try { // try from 0222db58 to 0232db63 has its CatchHandler @ 0222d950 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0222db54 with catch @ 0222db60
                        */
  if (param_2 < *(uint *)(plVar2 + 3)) {
                    /* try { // try from 0222db64 to 0232db9b has its CatchHandler @ 0222db64
                       catch() { ... } // from try @ 0222db64 with catch @ 0222db64
                       catch() { ... } // from try @ 0222dc70 with catch @ 0222db64
                       catch() { ... } // from try @ 0222dcc0 with catch @ 0222db64
                       catch() { ... } // from try @ 0222dd24 with catch @ 0222db64
                       catch() { ... } // from try @ 0222dd6c with catch @ 0222db64 */
    plVar2[(long)(int)param_2 + 4] = lVar3;
    thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0222dbe4 to 0232dbfb has its CatchHandler @ 0222dce4 */
  FUN_01f08a44();
}


