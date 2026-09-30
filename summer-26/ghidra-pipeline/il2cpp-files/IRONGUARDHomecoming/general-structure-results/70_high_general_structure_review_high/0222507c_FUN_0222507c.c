/*
FUNCTION_NAME: FUN_0222507c
ENTRY_POINT: 0222507c
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


void FUN_0222507c(undefined8 param_1,uint param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_40;
  undefined8 local_38;
  
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02225044 with catch @ 02225080
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02225034 with catch @ 02225084
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02225004 with catch @ 02225088
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02224f8c with catch @ 0222508c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222505c with catch @ 02225090
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02224fac with catch @ 02225094
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02224f44 with catch @ 02225098
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02224f5c with catch @ 0222509c
                       catch(type#1 @ 042b3198) { ... } // from try @ 02224fd4 with catch @ 0222509c
                        */
  local_38 = param_3;
  if (*(long *)(param_4 + 0x38) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
                    /* try { // try from 022250b4 to 023250cb has its CatchHandler @ 0222510c */
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_01ecafa0(param_4);
    }
  }
                    /* try { // try from 022250cc to 023250fb has its CatchHandler @ 02224f0c */
  uVar1 = FUN_03582fa8(param_1,0);
  if (param_2 < uVar1) {
    plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                       );
    if (plVar2 == (long *)0x0) {
      FUN_01f08848(param_1,param_2,&local_38);
    }
    else {
      local_40 = param_3;
      lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_4 + 0x38),&local_40);
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
  FUN_01f08910(uVar6,param_4);
}


