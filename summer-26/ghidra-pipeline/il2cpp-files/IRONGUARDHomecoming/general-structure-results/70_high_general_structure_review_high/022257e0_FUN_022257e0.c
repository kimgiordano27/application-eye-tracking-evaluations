/*
FUNCTION_NAME: FUN_022257e0
ENTRY_POINT: 022257e0
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


void FUN_022257e0(undefined8 param_1,uint param_2,undefined8 *param_3,long param_4)

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
  
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 022257bc with catch @ 022257e0
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 022257a4 with catch @ 022257e4
                        */
                    /* try { // try from 022257fc to 023257ff has its CatchHandler @ 02225820 */
                    /* try { // try from 02225800 to 02325823 has its CatchHandler @ 02225748 */
  if (*(long *)(param_4 + 0x38) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    if (*(long *)(param_4 + 0x38) == 0) {
                    /* catch() { ... } // from try @ 022257fc with catch @ 02225820 */
      FUN_01ecafa0(param_4);
    }
  }
                    /* try { // try from 02225824 to 0232582f has its CatchHandler @ 02225844 */
  uVar1 = FUN_03582fa8(param_1,0);
                    /* try { // try from 02225830 to 0232583b has its CatchHandler @ 02225748 */
  if (uVar1 <= param_2) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 022258bc with catch @ 022258e0
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 022258a4 with catch @ 022258e4
                        */
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar6 = thunk_FUN_01f117cc();
                    /* try { // try from 022258fc to 023258ff has its CatchHandler @ 02225920 */
    uVar5 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                              );
                    /* try { // try from 02225900 to 02325923 has its CatchHandler @ 02225848 */
    FUN_034f7db4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,param_4);
  }
                    /* try { // try from 0222583c to 02325843 has its CatchHandler @ 02225844 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02225824 with catch @ 02225844
                       catch(type#2 @ 00000000) { ... } // from try @ 0222583c with catch @ 02225844
                        */
                    /* try { // try from 02225848 to 023258a3 has its CatchHandler @ 02225848
                       catch() { ... } // from try @ 02225848 with catch @ 02225848
                       catch() { ... } // from try @ 022258c4 with catch @ 02225848
                       catch() { ... } // from try @ 02225900 with catch @ 02225848
                       catch() { ... } // from try @ 02225930 with catch @ 02225848 */
  plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     );
  if (plVar2 == (long *)0x0) {
                    /* try { // try from 022258c4 to 023258fb has its CatchHandler @ 02225848 */
    FUN_01f08848(param_1,param_2,param_3);
    return;
  }
  local_40 = param_3[4];
  uStack_58 = param_3[1];
  local_60 = *param_3;
  uStack_48 = param_3[3];
  uStack_50 = param_3[2];
  lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_4 + 0x38),&local_60);
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
                    /* catch() { ... } // from try @ 022258fc with catch @ 02225920 */
    uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* try { // try from 02225924 to 0232592f has its CatchHandler @ 02225944 */
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,0);
  }
  if (param_2 < *(uint *)(plVar2 + 3)) {
    plVar2[(long)(int)param_2 + 4] = lVar3;
                    /* try { // try from 022258a4 to 023258b3 has its CatchHandler @ 022258e4 */
    thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
                    /* try { // try from 022258bc to 023258c3 has its CatchHandler @ 022258e0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


