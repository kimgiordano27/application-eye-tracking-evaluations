/*
FUNCTION_NAME: FUN_0222bc44
ENTRY_POINT: 0222bc44
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


void FUN_0222bc44(undefined8 param_1,uint param_2,void *param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_98 [104];
  
                    /* try { // try from 0222bc68 to 0232bc6f has its CatchHandler @ 0222bdbc */
  if (*(long *)(param_4 + 0x38) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    if (*(long *)(param_4 + 0x38) == 0) {
                    /* try { // try from 0222bc80 to 0232bca3 has its CatchHandler @ 0222bdc0 */
      FUN_01ecafa0(param_4);
    }
  }
  uVar1 = FUN_03582fa8(param_1,0);
  if (uVar1 <= param_2) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar6 = thunk_FUN_01f117cc();
                    /* try { // try from 0222bd58 to 0232bd63 has its CatchHandler @ 0222bda8 */
    uVar5 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                              );
                    /* try { // try from 0222bd68 to 0232bd77 has its CatchHandler @ 0222bda4 */
    FUN_034f7db4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,param_4);
  }
  plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     );
                    /* try { // try from 0222bcb0 to 0232bcc7 has its CatchHandler @ 0222bdb0 */
  if (plVar2 == (long *)0x0) {
                    /* try { // try from 0222bd28 to 0232bd3b has its CatchHandler @ 0222bdac */
                    /* try { // try from 0222bd3c to 0232bd57 has its CatchHandler @ 0222bc30 */
    FUN_01f08848(param_1,param_2,param_3);
    return;
  }
  memcpy(auStack_98,param_3,0x68);
                    /* try { // try from 0222bcd0 to 0232bcdf has its CatchHandler @ 0222bdb8 */
  lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_4 + 0x38),auStack_98);
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
    uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0222bd8c to 0232bdd7 has its CatchHandler @ 0222bc30 */
    FUN_01f08910(uVar6,0);
  }
                    /* try { // try from 0222bcf8 to 0232bd1b has its CatchHandler @ 0222bdc0 */
  if (param_2 < *(uint *)(plVar2 + 3)) {
    plVar2[(long)(int)param_2 + 4] = lVar3;
    thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0222bd80 to 0232bd8b has its CatchHandler @ 0222bdb4 */
  FUN_01f08a44();
}


