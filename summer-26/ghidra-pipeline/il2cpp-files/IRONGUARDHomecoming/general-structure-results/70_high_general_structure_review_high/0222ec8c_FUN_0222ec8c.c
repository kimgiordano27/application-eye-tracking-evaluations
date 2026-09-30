/*
FUNCTION_NAME: FUN_0222ec8c
ENTRY_POINT: 0222ec8c
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


void FUN_0222ec8c(undefined8 param_1,uint param_2,undefined8 param_3,undefined4 param_4,long param_5
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
  
                    /* try { // try from 0222ecb0 to 0232ecc7 has its CatchHandler @ 0222edb0 */
  local_40 = param_3;
  local_38 = param_4;
  if (*(long *)(param_5 + 0x38) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    if (*(long *)(param_5 + 0x38) == 0) {
                    /* try { // try from 0222ecd0 to 0232ecdf has its CatchHandler @ 0222edb8 */
      FUN_01ecafa0(param_5);
    }
  }
  uVar1 = FUN_03582fa8(param_1,0);
  if (param_2 < uVar1) {
                    /* try { // try from 0222ecf8 to 0232ed1b has its CatchHandler @ 0222edc0 */
    plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                       );
    if (plVar2 == (long *)0x0) {
                    /* try { // try from 0222ed68 to 0232ed77 has its CatchHandler @ 0222eda4 */
      FUN_01f08848(param_1,param_2,&local_40);
    }
    else {
      local_50 = local_40;
      local_48 = local_38;
      lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_5 + 0x38),&local_50);
                    /* try { // try from 0222ed28 to 0232ed3b has its CatchHandler @ 0222edac */
                    /* try { // try from 0222ed3c to 0232ed57 has its CatchHandler @ 0222ec30 */
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
        uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar6,0);
      }
      if (*(uint *)(plVar2 + 3) <= param_2) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222ec80 with catch @ 0222edc0
                       catch(type#1 @ 042b3198) { ... } // from try @ 0222ecf8 with catch @ 0222edc0
                        */
        FUN_01f08a44();
      }
      plVar2[(long)(int)param_2 + 4] = lVar3;
                    /* try { // try from 0222ed58 to 0232ed63 has its CatchHandler @ 0222eda8 */
      thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
    }
                    /* try { // try from 0222ed80 to 0232ed8b has its CatchHandler @ 0222edb4 */
    return;
  }
                    /* try { // try from 0222ed8c to 0232edd7 has its CatchHandler @ 0222ec30 */
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar6 = thunk_FUN_01f117cc();
  uVar5 = thunk_FUN_01efb3a4(
                            Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                            );
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222ed68 with catch @ 0222eda4
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222ed58 with catch @ 0222eda8
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222ed28 with catch @ 0222edac
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222ecb0 with catch @ 0222edb0
                        */
  FUN_034f7db4(uVar6,uVar5,0);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222ed80 with catch @ 0222edb4
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222ecd0 with catch @ 0222edb8
                        */
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222ec68 with catch @ 0222edbc
                        */
  FUN_01f08910(uVar6,param_5);
}


