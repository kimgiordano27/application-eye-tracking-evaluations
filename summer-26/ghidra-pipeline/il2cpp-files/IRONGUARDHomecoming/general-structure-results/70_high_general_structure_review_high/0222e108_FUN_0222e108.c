/*
FUNCTION_NAME: FUN_0222e108
ENTRY_POINT: 0222e108
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


void FUN_0222e108(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4,long param_5
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
  
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222e084 with catch @ 0222e108
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222e00c with catch @ 0222e10c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222e0dc with catch @ 0222e110
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222e02c with catch @ 0222e114
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222dfc4 with catch @ 0222e118
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222dfdc with catch @ 0222e11c
                       catch(type#1 @ 042b3198) { ... } // from try @ 0222e054 with catch @ 0222e11c
                        */
  local_40 = param_3;
  uStack_38 = param_4;
  if (*(long *)(param_5 + 0x38) == 0) {
                    /* try { // try from 0222e134 to 0232e14b has its CatchHandler @ 0222e18c */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    if (*(long *)(param_5 + 0x38) == 0) {
      FUN_01ecafa0(param_5);
    }
  }
                    /* try { // try from 0222e14c to 0232e17b has its CatchHandler @ 0222df8c */
  uVar1 = FUN_03582fa8(param_1,0);
  if (param_2 < uVar1) {
    plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                       );
    if (plVar2 == (long *)0x0) {
                    /* try { // try from 0222e1d8 to 0232e1df has its CatchHandler @ 0222e32c */
      FUN_01f08848(param_1,param_2,&local_40);
    }
    else {
                    /* try { // try from 0222e17c to 0232e18b has its CatchHandler @ 0222e18c */
      uStack_48 = uStack_38;
      local_50 = local_40;
                    /* catch() { ... } // from try @ 0222e134 with catch @ 0222e18c
                       catch() { ... } // from try @ 0222e17c with catch @ 0222e18c */
                    /* try { // try from 0222e190 to 0232e193 has its CatchHandler @ 0222e19c */
      lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_5 + 0x38),&local_50);
                    /* try { // try from 0222e194 to 0232e19f has its CatchHandler @ 0222df8c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0222e190 with catch @ 0222e19c
                        */
                    /* try { // try from 0222e1a0 to 0232e1d7 has its CatchHandler @ 0222e1a0
                       catch() { ... } // from try @ 0222e1a0 with catch @ 0222e1a0
                       catch() { ... } // from try @ 0222e2ac with catch @ 0222e1a0
                       catch() { ... } // from try @ 0222e2fc with catch @ 0222e1a0
                       catch() { ... } // from try @ 0222e360 with catch @ 0222e1a0
                       catch() { ... } // from try @ 0222e3a8 with catch @ 0222e1a0 */
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
                    /* try { // try from 0222e1f0 to 0232e213 has its CatchHandler @ 0222e330 */
    return;
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar6 = thunk_FUN_01f117cc();
  uVar5 = thunk_FUN_01efb3a4(
                            Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                            );
                    /* try { // try from 0222e220 to 0232e237 has its CatchHandler @ 0222e320 */
  FUN_034f7db4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,param_5);
}


