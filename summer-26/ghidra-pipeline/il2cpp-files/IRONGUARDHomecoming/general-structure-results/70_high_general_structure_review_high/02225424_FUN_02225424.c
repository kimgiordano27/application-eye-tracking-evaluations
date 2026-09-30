/*
FUNCTION_NAME: FUN_02225424
ENTRY_POINT: 02225424
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


void FUN_02225424(undefined8 param_1,uint param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_40;
  undefined8 local_38;
  
                    /* try { // try from 0222542c to 0232543f has its CatchHandler @ 022254b0 */
                    /* try { // try from 02225440 to 0232545b has its CatchHandler @ 02225334 */
  local_38 = param_3;
  if (*(long *)(param_4 + 0x38) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
                    /* try { // try from 0222545c to 02325467 has its CatchHandler @ 022254ac */
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_01ecafa0(param_4);
    }
  }
                    /* try { // try from 0222546c to 0232547b has its CatchHandler @ 022254a8 */
  uVar1 = FUN_03582fa8(param_1,0);
  if (param_2 < uVar1) {
                    /* try { // try from 02225484 to 0232548f has its CatchHandler @ 022254b8 */
                    /* try { // try from 02225490 to 023254db has its CatchHandler @ 02225334 */
    plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                       );
    if (plVar2 == (long *)0x0) {
      FUN_01f08848(param_1,param_2,&local_38);
    }
    else {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222546c with catch @ 022254a8
                        */
      local_40 = param_3;
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222545c with catch @ 022254ac
                        */
      lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_4 + 0x38),&local_40);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222542c with catch @ 022254b0
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 022253b4 with catch @ 022254b4
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02225484 with catch @ 022254b8
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 022253d4 with catch @ 022254bc
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222536c with catch @ 022254c0
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02225384 with catch @ 022254c4
                       catch(type#1 @ 042b3198) { ... } // from try @ 022253fc with catch @ 022254c4
                        */
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
        uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar6,0);
      }
      if (*(uint *)(plVar2 + 3) <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
                    /* try { // try from 022254dc to 023254f3 has its CatchHandler @ 02225534 */
      plVar2[(long)(int)param_2 + 4] = lVar3;
      thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
    }
    return;
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar6 = thunk_FUN_01f117cc();
                    /* try { // try from 02225524 to 02325533 has its CatchHandler @ 02225534 */
  uVar5 = thunk_FUN_01efb3a4(
                            Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                            );
                    /* catch() { ... } // from try @ 022254dc with catch @ 02225534
                       catch() { ... } // from try @ 02225524 with catch @ 02225534 */
                    /* try { // try from 02225538 to 0232553b has its CatchHandler @ 02225544 */
                    /* try { // try from 0222553c to 02325547 has its CatchHandler @ 02225334 */
  FUN_034f7db4(uVar6,uVar5,0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02225538 with catch @ 02225544
                        */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02225548 to 023255a3 has its CatchHandler @ 02225548
                       catch() { ... } // from try @ 02225548 with catch @ 02225548
                       catch() { ... } // from try @ 022255c4 with catch @ 02225548
                       catch() { ... } // from try @ 02225600 with catch @ 02225548
                       catch() { ... } // from try @ 02225630 with catch @ 02225548 */
  FUN_01f08910(uVar6,param_4);
}


