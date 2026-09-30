/*
FUNCTION_NAME: FUN_0222e74c
ENTRY_POINT: 0222e74c
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


void FUN_0222e74c(undefined8 param_1,uint param_2,undefined8 *param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
                    /* try { // try from 0222e750 to 0232e79b has its CatchHandler @ 0222e5c8 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222e714 with catch @ 0222e768
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222e704 with catch @ 0222e76c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222e6d4 with catch @ 0222e770
                        */
  if (*(long *)(param_4 + 0x38) == 0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222e65c with catch @ 0222e774
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222e67c with catch @ 0222e778
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222e614 with catch @ 0222e77c
                        */
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                      );
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222e62c with catch @ 0222e780
                       catch(type#1 @ 042b3198) { ... } // from try @ 0222e6a4 with catch @ 0222e780
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 0222e738 with catch @ 0222e784
                        */
    if (*(long *)(param_4 + 0x38) == 0) {
      FUN_01ecafa0(param_4);
    }
  }
  uVar1 = FUN_03582fa8(param_1,0);
                    /* try { // try from 0222e79c to 0232e7b3 has its CatchHandler @ 0222e7f4 */
  if (uVar1 <= param_2) {
                    /* try { // try from 0222e858 to 0232e87b has its CatchHandler @ 0222e998 */
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar6 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(
                              Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__
                              );
    FUN_034f7db4(uVar6,uVar5,0);
                    /* try { // try from 0222e888 to 0232e89f has its CatchHandler @ 0222e988 */
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,param_4);
  }
                    /* try { // try from 0222e7b4 to 0232e7e3 has its CatchHandler @ 0222e5c8 */
  plVar2 = (long *)thunk_FUN_01f116d0(param_1,*(undefined8 *)
                                               Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputBinding>_get_Item__
                                     );
  if (plVar2 == (long *)0x0) {
                    /* try { // try from 0222e840 to 0232e847 has its CatchHandler @ 0222e994 */
    FUN_01f08848(param_1,param_2,param_3);
    return;
  }
  local_40 = param_3[6];
  uStack_58 = param_3[3];
  local_60 = param_3[2];
  uStack_48 = param_3[5];
  uStack_50 = param_3[4];
  uStack_68 = param_3[1];
  local_70 = *param_3;
                    /* try { // try from 0222e7e4 to 0232e7f3 has its CatchHandler @ 0222e7f4 */
  lVar3 = thunk_FUN_01f113fc(**(undefined8 **)(param_4 + 0x38),&local_70);
                    /* catch() { ... } // from try @ 0222e79c with catch @ 0222e7f4
                       catch() { ... } // from try @ 0222e7e4 with catch @ 0222e7f4 */
                    /* try { // try from 0222e7f8 to 0232e7fb has its CatchHandler @ 0222e804 */
                    /* try { // try from 0222e7fc to 0232e807 has its CatchHandler @ 0222e5c8 */
  if ((lVar3 != 0) &&
     (lVar4 = thunk_FUN_01f116d0(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
    uVar6 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar6,0);
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0222e7f8 with catch @ 0222e804
                        */
                    /* try { // try from 0222e808 to 0232e83f has its CatchHandler @ 0222e808
                       catch() { ... } // from try @ 0222e808 with catch @ 0222e808
                       catch() { ... } // from try @ 0222e914 with catch @ 0222e808
                       catch() { ... } // from try @ 0222e964 with catch @ 0222e808
                       catch() { ... } // from try @ 0222e9c8 with catch @ 0222e808
                       catch() { ... } // from try @ 0222ea10 with catch @ 0222e808 */
  if (param_2 < *(uint *)(plVar2 + 3)) {
    plVar2[(long)(int)param_2 + 4] = lVar3;
    thunk_FUN_01f51358(plVar2 + (long)(int)param_2 + 4,lVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
}


