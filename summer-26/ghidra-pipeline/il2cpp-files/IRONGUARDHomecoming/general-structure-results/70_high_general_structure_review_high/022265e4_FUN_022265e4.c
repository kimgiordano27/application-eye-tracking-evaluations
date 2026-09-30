/*
FUNCTION_NAME: FUN_022265e4
ENTRY_POINT: 022265e4
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


void FUN_022265e4(undefined8 param_1,uint param_2,void *param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_c8 [152];
  
                    /* try { // try from 022265f8 to 023265ff has its CatchHandler @ 0222674c */
  if (*(long *)(param_4 + 0x38) == 0) {
                    /* try { // try from 02226610 to 02326633 has its CatchHandler @ 02226750 */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_01ecafa0(param_4);
    }
  }
  uVar1 = FUN_03582fa8(param_1,0);
  if (uVar1 <= param_2) {
                    /* try { // try from 022266e8 to 023266f3 has its CatchHandler @ 02226738 */
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar6 = thunk_FUN_01f117cc();
                    /* try { // try from 022266f8 to 02326707 has its CatchHandler @ 02226734 */
    uVar5 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                              );
                    /* try { // try from 02226710 to 0232671b has its CatchHandler @ 02226744 */
    FUN_034f7db4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0222671c to 02326767 has its CatchHandler @ 022265c0 */
    FUN_01f08910(uVar6,param_4);
  }
                    /* try { // try from 02226640 to 02326657 has its CatchHandler @ 02226740 */
  plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     );
  if (plVar2 == (long *)0x0) {
                    /* try { // try from 022266cc to 023266e7 has its CatchHandler @ 022265c0 */
    FUN_01f08848(param_1,param_2,param_3);
    return;
  }
                    /* try { // try from 02226660 to 0232666f has its CatchHandler @ 02226748 */
  memcpy(auStack_c8,param_3,0x98);
  lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_4 + 0x38),auStack_c8);
                    /* try { // try from 02226688 to 023266ab has its CatchHandler @ 02226750 */
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
    uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,0);
  }
  if (param_2 < *(uint *)(plVar2 + 3)) {
    plVar2[(long)(int)param_2 + 4] = lVar3;
    thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
                    /* try { // try from 022266b8 to 023266cb has its CatchHandler @ 0222673c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


