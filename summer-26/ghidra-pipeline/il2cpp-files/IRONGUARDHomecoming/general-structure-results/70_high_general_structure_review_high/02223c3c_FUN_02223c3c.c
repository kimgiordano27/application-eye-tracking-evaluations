/*
FUNCTION_NAME: FUN_02223c3c
ENTRY_POINT: 02223c3c
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


void FUN_02223c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,long param_5
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
  
                    /* try { // try from 02223c54 to 02323c63 has its CatchHandler @ 02223c64 */
  local_40 = param_1;
  uStack_38 = param_2;
  if (*(long *)(param_5 + 0x38) == 0) {
                    /* catch() { ... } // from try @ 02223c0c with catch @ 02223c64
                       catch() { ... } // from try @ 02223c54 with catch @ 02223c64 */
                    /* try { // try from 02223c68 to 02323c6b has its CatchHandler @ 02223c74 */
                    /* try { // try from 02223c6c to 02323c77 has its CatchHandler @ 02223a64 */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02223c68 with catch @ 02223c74
                        */
    if (*(long *)(param_5 + 0x38) == 0) {
                    /* try { // try from 02223c78 to 02323cd3 has its CatchHandler @ 02223c78
                       catch() { ... } // from try @ 02223c78 with catch @ 02223c78
                       catch() { ... } // from try @ 02223cf4 with catch @ 02223c78
                       catch() { ... } // from try @ 02223d30 with catch @ 02223c78
                       catch() { ... } // from try @ 02223d60 with catch @ 02223c78 */
      FUN_01ecafa0(param_5);
    }
  }
  uVar1 = FUN_03582fa8(param_3,0);
  if (param_4 < uVar1) {
    plVar2 = (long *)thunk_FUN_01f116d0(param_3,*(undefined8 *)
                                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                       );
    if (plVar2 == (long *)0x0) {
      FUN_01f08848(param_3,param_4,&local_40);
    }
    else {
      uStack_48 = uStack_38;
      local_50 = local_40;
      lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_5 + 0x38),&local_50);
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
    }
    return;
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar6 = thunk_FUN_01f117cc();
  uVar5 = thunk_FUN_01efb3a4(
                            Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                            );
  FUN_034f7db4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,param_5);
}


