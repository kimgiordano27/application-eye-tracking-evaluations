/*
FUNCTION_NAME: FUN_022269b4
ENTRY_POINT: 022269b4
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


void FUN_022269b4(undefined8 param_1,uint param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_40;
  undefined8 local_38;
  
                    /* try { // try from 022269c4 to 023269d3 has its CatchHandler @ 022269d4 */
                    /* catch() { ... } // from try @ 0222697c with catch @ 022269d4
                       catch() { ... } // from try @ 022269c4 with catch @ 022269d4 */
                    /* try { // try from 022269d8 to 023269db has its CatchHandler @ 022269e4 */
                    /* try { // try from 022269dc to 023269e7 has its CatchHandler @ 022267d4 */
  local_38 = param_3;
  if (*(long *)(param_4 + 0x38) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 022269d8 with catch @ 022269e4
                        */
                    /* try { // try from 022269e8 to 02326a1f has its CatchHandler @ 022269e8
                       catch() { ... } // from try @ 022269e8 with catch @ 022269e8
                       catch() { ... } // from try @ 02226af4 with catch @ 022269e8
                       catch() { ... } // from try @ 02226b44 with catch @ 022269e8
                       catch() { ... } // from try @ 02226ba8 with catch @ 022269e8
                       catch() { ... } // from try @ 02226bf0 with catch @ 022269e8 */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_01ecafa0(param_4);
    }
  }
  uVar1 = FUN_03582fa8(param_1,0);
  if (param_2 < uVar1) {
                    /* try { // try from 02226a20 to 02326a27 has its CatchHandler @ 02226b74 */
    plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                       );
    if (plVar2 == (long *)0x0) {
      FUN_01f08848(param_1,param_2,&local_38);
    }
    else {
                    /* try { // try from 02226a38 to 02326a5b has its CatchHandler @ 02226b78 */
      local_40 = param_3;
      lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_4 + 0x38),&local_40);
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
                    /* try { // try from 02226ae0 to 02326af3 has its CatchHandler @ 02226b64 */
        uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar6,0);
      }
      if (*(uint *)(plVar2 + 3) <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
                    /* try { // try from 02226a68 to 02326a7f has its CatchHandler @ 02226b68 */
      plVar2[(long)(int)param_2 + 4] = lVar3;
      thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
    }
    return;
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar6 = thunk_FUN_01f117cc();
                    /* try { // try from 02226ab0 to 02326ad3 has its CatchHandler @ 02226b78 */
  uVar5 = thunk_FUN_01efb3a4(
                            Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                            );
  FUN_034f7db4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,param_4);
}


