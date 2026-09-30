/*
FUNCTION_NAME: FUN_02226d70
ENTRY_POINT: 02226d70
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


void FUN_02226d70(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4,long param_5
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
  
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02226d34 with catch @ 02226d70
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02226d24 with catch @ 02226d74
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02226cf4 with catch @ 02226d78
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02226c7c with catch @ 02226d7c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02226d4c with catch @ 02226d80
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02226c9c with catch @ 02226d84
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02226c34 with catch @ 02226d88
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02226c4c with catch @ 02226d8c
                       catch(type#1 @ 042b3198) { ... } // from try @ 02226cc4 with catch @ 02226d8c
                        */
  local_40 = param_3;
  uStack_38 = param_4;
  if (*(long *)(param_5 + 0x38) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
                    /* try { // try from 02226da4 to 02326dbb has its CatchHandler @ 02226dfc */
    if (*(long *)(param_5 + 0x38) == 0) {
      FUN_01ecafa0(param_5);
    }
  }
                    /* try { // try from 02226dbc to 02326deb has its CatchHandler @ 02226bfc */
  uVar1 = FUN_03582fa8(param_1,0);
  if (param_2 < uVar1) {
    plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                       );
    if (plVar2 == (long *)0x0) {
      FUN_01f08848(param_1,param_2,&local_40);
    }
    else {
                    /* try { // try from 02226dec to 02326dfb has its CatchHandler @ 02226dfc */
      uStack_48 = uStack_38;
      local_50 = local_40;
      lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_5 + 0x38),&local_50);
                    /* catch() { ... } // from try @ 02226da4 with catch @ 02226dfc
                       catch() { ... } // from try @ 02226dec with catch @ 02226dfc */
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


