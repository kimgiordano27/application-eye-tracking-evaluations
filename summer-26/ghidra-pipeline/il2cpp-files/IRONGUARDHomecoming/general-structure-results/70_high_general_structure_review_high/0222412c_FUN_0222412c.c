/*
FUNCTION_NAME: FUN_0222412c
ENTRY_POINT: 0222412c
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


void FUN_0222412c(undefined8 param_1,uint param_2,undefined8 *param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
                    /* try { // try from 02224134 to 02324143 has its CatchHandler @ 0222421c */
  if (*(long *)(param_4 + 0x38) == 0) {
                    /* try { // try from 0222415c to 0232417f has its CatchHandler @ 02224224 */
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
                    /* try { // try from 0222423c to 02324253 has its CatchHandler @ 02224294 */
    uVar5 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                              );
                    /* try { // try from 02224254 to 02324283 has its CatchHandler @ 02224094 */
    FUN_034f7db4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,param_4);
  }
                    /* try { // try from 0222418c to 0232419f has its CatchHandler @ 02224210 */
  plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     );
  if (plVar2 == (long *)0x0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 022241bc with catch @ 0222420c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222418c with catch @ 02224210
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02224114 with catch @ 02224214
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 022241e4 with catch @ 02224218
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02224134 with catch @ 0222421c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 022240cc with catch @ 02224220
                        */
    FUN_01f08848(param_1,param_2,param_3);
    return;
  }
  uStack_48 = param_3[5];
  local_50 = param_3[4];
  uStack_38 = param_3[7];
  uStack_40 = param_3[6];
  uStack_68 = param_3[1];
  local_70 = *param_3;
                    /* try { // try from 022241a0 to 023241bb has its CatchHandler @ 02224094 */
  uStack_58 = param_3[3];
  uStack_60 = param_3[2];
                    /* try { // try from 022241bc to 023241c7 has its CatchHandler @ 0222420c */
  lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_4 + 0x38),&local_70);
                    /* try { // try from 022241cc to 023241db has its CatchHandler @ 02224208 */
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
    uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,0);
  }
                    /* try { // try from 022241e4 to 023241ef has its CatchHandler @ 02224218 */
  if (param_2 < *(uint *)(plVar2 + 3)) {
    plVar2[(long)(int)param_2 + 4] = lVar3;
                    /* try { // try from 022241f0 to 0232423b has its CatchHandler @ 02224094 */
    thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 022241cc with catch @ 02224208
                        */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


