/*
FUNCTION_NAME: FUN_02227ecc
ENTRY_POINT: 02227ecc
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


void FUN_02227ecc(undefined8 param_1,uint param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_40;
  undefined8 local_38;
  
                    /* try { // try from 02227ed4 to 02327edb has its CatchHandler @ 02227ef8 */
                    /* try { // try from 02227edc to 02327f13 has its CatchHandler @ 02227e60 */
  local_38 = param_3;
  if (*(long *)(param_4 + 0x38) == 0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02227ed4 with catch @ 02227ef8
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02227ebc with catch @ 02227efc
                        */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_01ecafa0(param_4);
    }
  }
                    /* try { // try from 02227f14 to 02327f17 has its CatchHandler @ 02227f38 */
                    /* try { // try from 02227f18 to 02327f3b has its CatchHandler @ 02227e60 */
  uVar1 = FUN_03582fa8(param_1,0);
  if (param_2 < uVar1) {
                    /* catch() { ... } // from try @ 02227f14 with catch @ 02227f38 */
    plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                       );
                    /* try { // try from 02227f3c to 02327f47 has its CatchHandler @ 02227f5c */
    if (plVar2 == (long *)0x0) {
      FUN_01f08848(param_1,param_2,&local_38);
    }
    else {
                    /* try { // try from 02227f48 to 02327f53 has its CatchHandler @ 02227e60 */
      local_40 = param_3;
                    /* try { // try from 02227f54 to 02327f5b has its CatchHandler @ 02227f5c */
      lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_4 + 0x38),&local_40);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02227f3c with catch @ 02227f5c
                       catch(type#2 @ 00000000) { ... } // from try @ 02227f54 with catch @ 02227f5c
                        */
                    /* try { // try from 02227f60 to 02327fbb has its CatchHandler @ 02227f60
                       catch() { ... } // from try @ 02227f60 with catch @ 02227f60
                       catch() { ... } // from try @ 02227fdc with catch @ 02227f60
                       catch() { ... } // from try @ 02228018 with catch @ 02227f60
                       catch() { ... } // from try @ 02228048 with catch @ 02227f60 */
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02227fd4 with catch @ 02227ff8
                        */
        uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02227fbc with catch @ 02227ffc
                        */
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
    return;
  }
                    /* try { // try from 02227fbc to 02327fcb has its CatchHandler @ 02227ffc */
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar6 = thunk_FUN_01f117cc();
                    /* try { // try from 02227fd4 to 02327fdb has its CatchHandler @ 02227ff8 */
  uVar5 = thunk_FUN_01efb3a4(
                            Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                            );
                    /* try { // try from 02227fdc to 02328013 has its CatchHandler @ 02227f60 */
  FUN_034f7db4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,param_4);
}


