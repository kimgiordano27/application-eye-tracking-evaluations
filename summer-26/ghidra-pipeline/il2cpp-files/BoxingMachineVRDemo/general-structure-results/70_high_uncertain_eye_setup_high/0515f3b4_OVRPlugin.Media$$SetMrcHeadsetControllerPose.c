/*
FUNCTION_NAME: OVRPlugin.Media$$SetMrcHeadsetControllerPose
ENTRY_POINT: 0515f3b4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_Media__SetMrcHeadsetControllerPose(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long in_x9;
  int *in_x10;
  undefined8 *unaff_x19;
  long unaff_x21;
  
  do {
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)FUN_02d9a5d4();
LAB_0515f3d8:
                    /* try { // try from 0515f3e0 to 0525f3e3 has its CatchHandler @ 0515f3f8 */
      (*(code *)*puVar1)();
                    /* try { // try from 0515f3e4 to 0525f3e7 has its CatchHandler @ 0515f3f0 */
      if (unaff_x21 == 0) {
                    /* try { // try from 0515f3e8 to 0525f3eb has its CatchHandler @ 0515f3ec */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0515f3e8 with catch @ 0515f3ec
                       try { // try from 0515f3ec to 0525f41b has its CatchHandler @ 0515f024 */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0515f3e4 with catch @ 0515f3f0
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0515f1b0 with catch @ 0515f3f4
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0515f3e0 with catch @ 0515f3f8
                        */
                    /* catch(type#1 @ 0638da48) { ... } // from try @ 0515f228 with catch @ 0515f3fc
                        */
        return *unaff_x19;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae0();
    }
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)in_x10[4] * 0x10 + 0x138);
      goto LAB_0515f3d8;
    }
    in_x9 = in_x9 + -1;
    in_ZR = in_x9 == 0;
    in_x10 = in_x10 + 4;
  } while( true );
}


