/*
FUNCTION_NAME: FUN_05d1887c
ENTRY_POINT: 05d1887c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_2;functionality_gaze_interaction_hits_2
*/


undefined8 FUN_05d1887c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar3 = Method_UnityEngine_InputSystem_Utilities_InlinedArray<Action<char>>_Append__;
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 05d18828 with catch @ 05d18884
                        */
                    /* try { // try from 05d1889c to 05e188b3 has its CatchHandler @ 05d188f4 */
  if ((DAT_06dc2eea & 1) == 0) {
    FUN_02d965b8(Method_UnityEngine_InputSystem_Utilities_InlinedArray<Action<char>>_Append__);
                    /* try { // try from 05d188b4 to 05e188e3 has its CatchHandler @ 05d187e8 */
    FUN_02d965b8(Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule_RaycastComparer_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_119_0_TypeInfo);
    DAT_06dc2eea = 1;
  }
  puVar2 = Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule_RaycastComparer_TypeInfo;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    /* try { // try from 05d188e4 to 05e188f3 has its CatchHandler @ 05d188f4 */
    thunk_FUN_02df485c();
  }
                    /* catch() { ... } // from try @ 05d1889c with catch @ 05d188f4
                       catch() { ... } // from try @ 05d188e4 with catch @ 05d188f4 */
                    /* try { // try from 05d188f8 to 05e188fb has its CatchHandler @ 05d18904 */
  uVar4 = FUN_05d164d0(param_1,*(undefined8 *)puVar2,param_2,5);
  puVar1 = OVRPlugin_OVRP_1_119_0_TypeInfo;
                    /* try { // try from 05d188fc to 05e18907 has its CatchHandler @ 05d187e8 */
  if ((uVar4 & 1) != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05d188f8 with catch @ 05d18904
                        */
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar5 = FUN_05d164d0(param_1,*(undefined8 *)puVar1,*(undefined8 *)puVar2,5);
    return uVar5;
  }
  return 0;
}


