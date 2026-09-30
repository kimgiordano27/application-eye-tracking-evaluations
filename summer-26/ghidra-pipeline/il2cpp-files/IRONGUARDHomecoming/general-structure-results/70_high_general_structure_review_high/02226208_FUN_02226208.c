/*
FUNCTION_NAME: FUN_02226208
ENTRY_POINT: 02226208
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


void FUN_02226208(undefined8 param_1,uint param_2,undefined8 param_3,undefined4 param_4,long param_5
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
  
                    /* try { // try from 02226218 to 0232622f has its CatchHandler @ 02226318 */
  local_40 = param_3;
  local_38 = param_4;
  if (*(long *)(param_5 + 0x38) == 0) {
                    /* try { // try from 02226238 to 02326247 has its CatchHandler @ 02226320 */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    if (*(long *)(param_5 + 0x38) == 0) {
      FUN_01ecafa0(param_5);
    }
  }
  uVar1 = FUN_03582fa8(param_1,0);
                    /* try { // try from 02226260 to 02326283 has its CatchHandler @ 02226328 */
  if (param_2 < uVar1) {
    plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                                 Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                       );
    if (plVar2 == (long *)0x0) {
                    /* try { // try from 022262e8 to 023262f3 has its CatchHandler @ 0222631c */
      FUN_01f08848(param_1,param_2,&local_40);
    }
    else {
      local_50 = local_40;
                    /* try { // try from 02226290 to 023262a3 has its CatchHandler @ 02226314 */
      local_48 = local_38;
      lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_5 + 0x38),&local_50);
                    /* try { // try from 022262a4 to 023262bf has its CatchHandler @ 02226198 */
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
                    /* try { // try from 02226340 to 02326357 has its CatchHandler @ 02226398 */
        uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
        FUN_01f08910(uVar6,0);
      }
                    /* try { // try from 022262c0 to 023262cb has its CatchHandler @ 02226310 */
      if (*(uint *)(plVar2 + 3) <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      plVar2[(long)(int)param_2 + 4] = lVar3;
                    /* try { // try from 022262d0 to 023262df has its CatchHandler @ 0222630c */
      thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
    }
                    /* try { // try from 022262f4 to 0232633f has its CatchHandler @ 02226198 */
    return;
  }
  thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 022262d0 with catch @ 0222630c
                        */
  uVar6 = thunk_FUN_01f117cc();
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 022262c0 with catch @ 02226310
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02226290 with catch @ 02226314
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02226218 with catch @ 02226318
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 022262e8 with catch @ 0222631c
                        */
  uVar5 = thunk_FUN_01efb3a4(
                            Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                            );
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02226238 with catch @ 02226320
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 022261d0 with catch @ 02226324
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 022261e8 with catch @ 02226328
                       catch(type#1 @ 042b3198) { ... } // from try @ 02226260 with catch @ 02226328
                        */
  FUN_034f7db4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar6,param_5);
}


