/*
FUNCTION_NAME: FUN_022244fc
ENTRY_POINT: 022244fc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void FUN_022244fc(undefined8 param_1,uint param_2,undefined8 param_3,undefined4 param_4,long param_5
                 )

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  
                    /* try { // try from 02224504 to 0232454f has its CatchHandler @ 022243a8 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 022244e0 with catch @ 0222451c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 022244d0 with catch @ 02224520
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 022244a0 with catch @ 02224524
                        */
  local_40 = param_3;
  local_38 = param_4;
  if (*(long *)(param_5 + 0x38) == 0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02224428 with catch @ 02224528
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 022244f8 with catch @ 0222452c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02224448 with catch @ 02224530
                        */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 022243e0 with catch @ 02224534
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 022243f8 with catch @ 02224538
                       catch(type#1 @ 042b3198) { ... } // from try @ 02224470 with catch @ 02224538
                        */
    if (*(long *)(param_5 + 0x38) == 0) {
      FUN_01ecafa0(param_5);
    }
  }
  uVar1 = FUN_03582fa8(param_1,0);
                    /* try { // try from 02224550 to 02324567 has its CatchHandler @ 022245a8 */
  if (param_2 < uVar1) {
                    /* try { // try from 02224568 to 02324597 has its CatchHandler @ 022243a8 */
    plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                       );
    if (plVar2 == (long *)0x0) {
      FUN_01f08848(param_1,param_2,&local_40);
    }
    else {
      local_50 = local_40;
      local_48 = local_38;
      lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_5 + 0x38),&local_50);
                    /* try { // try from 02224598 to 023245a7 has its CatchHandler @ 022245a8 */
                    /* catch() { ... } // from try @ 02224550 with catch @ 022245a8
                       catch() { ... } // from try @ 02224598 with catch @ 022245a8 */
                    /* try { // try from 022245ac to 023245af has its CatchHandler @ 022245b8 */
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
        uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0222463c to 02324653 has its CatchHandler @ 0222473c */
        FUN_01f08910(uVar6,0);
      }
                    /* try { // try from 022245b0 to 023245bb has its CatchHandler @ 022243a8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 022245ac with catch @ 022245b8
                        */
      if (*(uint *)(plVar2 + 3) <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
                    /* try { // try from 022245bc to 023245f3 has its CatchHandler @ 022245bc
                       catch() { ... } // from try @ 022245bc with catch @ 022245bc
                       catch() { ... } // from try @ 022246c8 with catch @ 022245bc
                       catch() { ... } // from try @ 02224718 with catch @ 022245bc
                       catch() { ... } // from try @ 0222477c with catch @ 022245bc
                       catch() { ... } // from try @ 022247c4 with catch @ 022245bc */
      plVar2[(long)(int)param_2 + 4] = lVar3;
      thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
    }
    return;
  }
                    /* try { // try from 022245f4 to 023245fb has its CatchHandler @ 02224748 */
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar6 = thunk_FUN_01f117cc();
                    /* try { // try from 0222460c to 0232462f has its CatchHandler @ 0222474c */
  uVar5 = thunk_FUN_01efb3a4(
                            Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                            );
  FUN_034f7db4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,param_5);
}


