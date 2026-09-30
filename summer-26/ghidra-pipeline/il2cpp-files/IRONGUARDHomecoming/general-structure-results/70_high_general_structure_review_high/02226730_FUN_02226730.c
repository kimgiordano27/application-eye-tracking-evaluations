/*
FUNCTION_NAME: FUN_02226730
ENTRY_POINT: 02226730
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


void FUN_02226730(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4,long param_5
                 )

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
  undefined8 uStack_38;
  
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 022266f8 with catch @ 02226734
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 022266e8 with catch @ 02226738
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 022266b8 with catch @ 0222673c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02226640 with catch @ 02226740
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02226710 with catch @ 02226744
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02226660 with catch @ 02226748
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 022265f8 with catch @ 0222674c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02226610 with catch @ 02226750
                       catch(type#1 @ 042b3198) { ... } // from try @ 02226688 with catch @ 02226750
                        */
  local_40 = param_3;
  uStack_38 = param_4;
  if (*(long *)(param_5 + 0x38) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
                    /* try { // try from 02226768 to 0232677f has its CatchHandler @ 022267c0 */
    if (*(long *)(param_5 + 0x38) == 0) {
      FUN_01ecafa0(param_5);
    }
  }
  uVar1 = FUN_03582fa8(param_1,0);
                    /* try { // try from 02226780 to 023267af has its CatchHandler @ 022265c0 */
  if (param_2 < uVar1) {
    plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                       );
    if (plVar2 == (long *)0x0) {
      FUN_01f08848(param_1,param_2,&local_40);
    }
    else {
      uStack_48 = uStack_38;
      local_50 = local_40;
                    /* try { // try from 022267b0 to 023267bf has its CatchHandler @ 022267c0 */
      lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_5 + 0x38),&local_50);
                    /* catch() { ... } // from try @ 02226768 with catch @ 022267c0
                       catch() { ... } // from try @ 022267b0 with catch @ 022267c0 */
                    /* try { // try from 022267c4 to 023267c7 has its CatchHandler @ 022267d0 */
                    /* try { // try from 022267c8 to 023267d3 has its CatchHandler @ 022265c0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 022267c4 with catch @ 022267d0
                        */
                    /* try { // try from 022267d4 to 0232680b has its CatchHandler @ 022267d4
                       catch() { ... } // from try @ 022267d4 with catch @ 022267d4
                       catch() { ... } // from try @ 022268e0 with catch @ 022267d4
                       catch() { ... } // from try @ 02226930 with catch @ 022267d4
                       catch() { ... } // from try @ 02226994 with catch @ 022267d4
                       catch() { ... } // from try @ 022269dc with catch @ 022267d4 */
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
      plVar2[(long)(int)param_2 + 4] = lVar3;
      thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
    }
                    /* try { // try from 0222680c to 02326813 has its CatchHandler @ 02226960 */
    return;
  }
                    /* try { // try from 02226824 to 02326847 has its CatchHandler @ 02226964 */
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar6 = thunk_FUN_01f117cc();
  uVar5 = thunk_FUN_01efb3a4(
                            Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                            );
  FUN_034f7db4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02226854 to 0232686b has its CatchHandler @ 02226954 */
  FUN_01f08910(uVar6,param_5);
}


