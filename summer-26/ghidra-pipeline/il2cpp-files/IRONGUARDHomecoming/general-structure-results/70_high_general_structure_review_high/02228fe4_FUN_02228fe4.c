/*
FUNCTION_NAME: FUN_02228fe4
ENTRY_POINT: 02228fe4
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


void FUN_02228fe4(undefined8 param_1,uint param_2,void *param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [72];
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02228fdc with catch @ 02228fe8
                        */
                    /* try { // try from 02228fec to 02329023 has its CatchHandler @ 02228fec
                       catch() { ... } // from try @ 02228fec with catch @ 02228fec
                       catch() { ... } // from try @ 02229150 with catch @ 02228fec
                       catch() { ... } // from try @ 022291b4 with catch @ 02228fec
                       catch() { ... } // from try @ 022291fc with catch @ 02228fec */
  if (*(long *)(param_4 + 0x38) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
    if (*(long *)(param_4 + 0x38) == 0) {
                    /* try { // try from 02229024 to 0232902b has its CatchHandler @ 02229180 */
      FUN_01ecafa0(param_4);
    }
  }
  uVar1 = FUN_03582fa8(param_1,0);
  if (uVar1 <= param_2) {
                    /* try { // try from 022290e4 to 023290f7 has its CatchHandler @ 02229170 */
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar6 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                              );
    FUN_034f7db4(uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0222911c to 02329127 has its CatchHandler @ 0222916c */
    FUN_01f08910(uVar6,param_4);
  }
                    /* try { // try from 0222903c to 0232905f has its CatchHandler @ 02229184 */
  plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     );
  if (plVar2 == (long *)0x0) {
    FUN_01f08848(param_1,param_2,param_3);
    return;
  }
  memcpy(auStack_78,param_3,0x48);
                    /* try { // try from 0222906c to 02329083 has its CatchHandler @ 02229174 */
  lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_4 + 0x38),auStack_78);
                    /* try { // try from 0222908c to 0232909b has its CatchHandler @ 0222917c */
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
    uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0222912c to 0232913b has its CatchHandler @ 02229168 */
    FUN_01f08910(uVar6,0);
  }
  if (param_2 < *(uint *)(plVar2 + 3)) {
    plVar2[(long)(int)param_2 + 4] = lVar3;
    thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
                    /* try { // try from 022290b4 to 023290d7 has its CatchHandler @ 02229184 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


