/*
FUNCTION_NAME: FUN_0222555c
ENTRY_POINT: 0222555c
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


void FUN_0222555c(undefined4 param_1,undefined4 param_2,undefined8 param_3,uint param_4,long param_5
                 )

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_28 = param_1;
  uStack_24 = param_2;
  if (*(long *)(param_5 + 0x38) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    if (*(long *)(param_5 + 0x38) == 0) {
      FUN_01ecafa0(param_5);
    }
  }
                    /* try { // try from 022255a4 to 023255b3 has its CatchHandler @ 022255e4 */
  uVar1 = FUN_03582fa8(param_3,0);
  if (param_4 < uVar1) {
                    /* try { // try from 022255bc to 023255c3 has its CatchHandler @ 022255e0 */
                    /* try { // try from 022255c4 to 023255fb has its CatchHandler @ 02225548 */
    plVar2 = (long *)thunk_FUN_01f116d0(param_3,*(undefined8 *)
                                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                       );
    if (plVar2 == (long *)0x0) {
                    /* try { // try from 02225624 to 0232562f has its CatchHandler @ 02225644 */
                    /* try { // try from 02225630 to 0232563b has its CatchHandler @ 02225548 */
      FUN_01f08848(param_3,param_4,&local_28);
    }
    else {
      local_38 = CONCAT44(uStack_24,local_28);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 022255bc with catch @ 022255e0
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 022255a4 with catch @ 022255e4
                        */
      lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_5 + 0x38),&local_38);
                    /* try { // try from 022255fc to 023255ff has its CatchHandler @ 02225620 */
                    /* try { // try from 02225600 to 02325623 has its CatchHandler @ 02225548 */
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
        uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar6,0);
      }
      if (*(uint *)(plVar2 + 3) <= param_4) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar2[(long)(int)param_4 + 4] = lVar3;
      thunk_FUN_01f51358(plVar2 + (long)(int)param_4 + 4,lVar3);
                    /* catch() { ... } // from try @ 022255fc with catch @ 02225620 */
    }
                    /* try { // try from 0222563c to 02325643 has its CatchHandler @ 02225644 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02225624 with catch @ 02225644
                       catch(type#2 @ 00000000) { ... } // from try @ 0222563c with catch @ 02225644
                        */
    return;
  }
                    /* try { // try from 02225648 to 023256a3 has its CatchHandler @ 02225648
                       catch() { ... } // from try @ 02225648 with catch @ 02225648
                       catch() { ... } // from try @ 022256c4 with catch @ 02225648
                       catch() { ... } // from try @ 02225700 with catch @ 02225648
                       catch() { ... } // from try @ 02225730 with catch @ 02225648 */
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar6 = thunk_FUN_01f117cc();
  uVar5 = thunk_FUN_01efb3a4(
                            Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                            );
  FUN_034f7db4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,param_5);
}


