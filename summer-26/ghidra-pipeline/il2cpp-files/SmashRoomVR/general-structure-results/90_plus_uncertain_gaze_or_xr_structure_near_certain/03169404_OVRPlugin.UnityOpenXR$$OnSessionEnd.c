/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionEnd
ENTRY_POINT: 03169404
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 114
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_8;validity_or_gating_hits_4;telemetry_or_network_hits_4;functionality_permission_setup;functionality_data_collection_or_telemetry_hits_4
*/


void OVRPlugin_UnityOpenXR__OnSessionEnd(ulong param_1,long param_2)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  long *unaff_x19;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    *(undefined1 *)(unaff_x21 + 0x90) = 1;
  }
  if (unaff_x19 == (long *)0x0) {
                    /* try { // try from 03169454 to 0326945f has its CatchHandler @ 03169b24 */
    *(undefined8 *)(param_2 + 0x40) = 0;
    plVar2 = (long *)0x0;
  }
  else {
    lVar3 = *(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
                    /* try { // try from 03169434 to 03269437 has its CatchHandler @ 03169b10 */
                    /* try { // try from 03169438 to 0326943f has its CatchHandler @ 03169b1c */
    bVar1 = *(byte *)(lVar3 + 0x130);
    if (*(byte *)(*unaff_x19 + 0x130) < bVar1) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = unaff_x19;
      if (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != lVar3) {
        plVar2 = (long *)0x0;
      }
    }
                    /* try { // try from 03169474 to 03269483 has its CatchHandler @ 03169b04 */
    *(long **)(param_2 + 0x40) = plVar2;
    if (*(byte *)(*unaff_x19 + 0x130) < bVar1) {
      plVar2 = (long *)0x0;
    }
    else {
                    /* try { // try from 03169494 to 0326949f has its CatchHandler @ 03169bd4 */
      plVar2 = unaff_x19;
      if (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != lVar3) {
        plVar2 = (long *)0x0;
      }
    }
  }
  thunk_FUN_01b4f09c(param_2 + 0x40,plVar2);
  *(undefined8 *)(param_2 + 0x48) = unaff_x19;
                    /* try { // try from 031694b4 to 032694cf has its CatchHandler @ 03169be4 */
  thunk_FUN_01b4f09c((undefined8 *)(param_2 + 0x48));
  return;
}


