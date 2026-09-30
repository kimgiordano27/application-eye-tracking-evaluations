/*
FUNCTION_NAME: FUN_022282dc
ENTRY_POINT: 022282dc
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


void FUN_022282dc(undefined8 param_1,uint param_2,void *param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_248 [512];
  long local_48;
  
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02228258 with catch @ 022282dc
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 022281e0 with catch @ 022282e0
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 022282b0 with catch @ 022282e4
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02228200 with catch @ 022282e8
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02228198 with catch @ 022282ec
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 022281b0 with catch @ 022282f0
                       catch(type#1 @ 042b3198) { ... } // from try @ 02228228 with catch @ 022282f0
                        */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 02228308 to 0232831f has its CatchHandler @ 02228360 */
  if (*(long *)(param_4 + 0x38) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
                    /* try { // try from 02228320 to 0232834f has its CatchHandler @ 02228160 */
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_01ecafa0(param_4);
    }
  }
  uVar2 = FUN_03582fa8(param_1,0);
  if (param_2 < uVar2) {
                    /* try { // try from 02228350 to 0232835f has its CatchHandler @ 02228360 */
    plVar3 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                       );
    if (plVar3 == (long *)0x0) {
      FUN_01f08848(param_1,param_2,param_3);
    }
    else {
                    /* catch() { ... } // from try @ 02228308 with catch @ 02228360
                       catch() { ... } // from try @ 02228350 with catch @ 02228360 */
                    /* try { // try from 02228364 to 02328367 has its CatchHandler @ 02228370 */
                    /* try { // try from 02228368 to 02328373 has its CatchHandler @ 02228160 */
      memcpy(auStack_248,param_3,0x200);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02228364 with catch @ 02228370
                        */
                    /* try { // try from 02228374 to 023283ab has its CatchHandler @ 02228374
                       catch() { ... } // from try @ 02228374 with catch @ 02228374
                       catch() { ... } // from try @ 02228480 with catch @ 02228374
                       catch() { ... } // from try @ 022284d0 with catch @ 02228374
                       catch() { ... } // from try @ 02228534 with catch @ 02228374
                       catch() { ... } // from try @ 0222857c with catch @ 02228374 */
      lVar4 = thunk_FUN_01f113fc(**(undefined8 **)(param_4 + 0x38),auStack_248);
      if ((lVar4 != 0) &&
         (lVar5 = thunk_FUN_01f116d0(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
        uVar7 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar7,0);
      }
      if (*(uint *)(plVar3 + 3) <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar3[(long)(int)param_2 + 4] = lVar4;
      thunk_FUN_01f51358(plVar3 + (long)(int)param_2 + 4,lVar4);
    }
    if (*(long *)(lVar1 + 0x28) == local_48) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
  uVar7 = thunk_FUN_01f117cc();
  uVar6 = thunk_FUN_01efb3a4(
                            Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                            );
  FUN_034f7db4(uVar7,uVar6,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar7,param_4);
}


