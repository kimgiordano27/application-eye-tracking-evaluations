/*
FUNCTION_NAME: FUN_0222bd90
ENTRY_POINT: 0222bd90
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


void FUN_0222bd90(undefined8 param_1,uint param_2,undefined8 *param_3,long param_4)

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
  
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222bd68 with catch @ 0222bda4
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222bd58 with catch @ 0222bda8
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222bd28 with catch @ 0222bdac
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222bcb0 with catch @ 0222bdb0
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222bd80 with catch @ 0222bdb4
                        */
  if (*(long *)(param_4 + 0x38) == 0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222bcd0 with catch @ 0222bdb8
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222bc68 with catch @ 0222bdbc
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222bc80 with catch @ 0222bdc0
                       catch(type#1 @ 042b3198) { ... } // from try @ 0222bcf8 with catch @ 0222bdc0
                        */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_01ecafa0(param_4);
    }
  }
                    /* try { // try from 0222bdd8 to 0232bdef has its CatchHandler @ 0222be30 */
  uVar1 = FUN_03582fa8(param_1,0);
  if (uVar1 <= param_2) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
                    /* try { // try from 0222be94 to 0232beb7 has its CatchHandler @ 0222bfd4 */
    uVar6 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                              );
    FUN_034f7db4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,param_4);
  }
                    /* try { // try from 0222bdf0 to 0232be1f has its CatchHandler @ 0222bc30 */
  plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     );
  if (plVar2 == (long *)0x0) {
                    /* try { // try from 0222be7c to 0232be83 has its CatchHandler @ 0222bfd0 */
    FUN_01f08848(param_1,param_2,param_3);
    return;
  }
  uStack_48 = param_3[1];
  local_50 = *param_3;
  uStack_38 = param_3[3];
  uStack_40 = param_3[2];
  lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_4 + 0x38),&local_50);
                    /* try { // try from 0222be20 to 0232be2f has its CatchHandler @ 0222be30 */
                    /* catch() { ... } // from try @ 0222bdd8 with catch @ 0222be30
                       catch() { ... } // from try @ 0222be20 with catch @ 0222be30 */
                    /* try { // try from 0222be34 to 0232be37 has its CatchHandler @ 0222be40 */
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
    uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,0);
  }
                    /* try { // try from 0222be38 to 0232be43 has its CatchHandler @ 0222bc30 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0222be34 with catch @ 0222be40
                        */
  if (param_2 < *(uint *)(plVar2 + 3)) {
                    /* try { // try from 0222be44 to 0232be7b has its CatchHandler @ 0222be44
                       catch() { ... } // from try @ 0222be44 with catch @ 0222be44
                       catch() { ... } // from try @ 0222bf50 with catch @ 0222be44
                       catch() { ... } // from try @ 0222bfa0 with catch @ 0222be44
                       catch() { ... } // from try @ 0222c004 with catch @ 0222be44
                       catch() { ... } // from try @ 0222c04c with catch @ 0222be44 */
    plVar2[(long)(int)param_2 + 4] = lVar3;
    thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0222bec4 to 0232bedb has its CatchHandler @ 0222bfc4 */
  FUN_01f08a44();
}


