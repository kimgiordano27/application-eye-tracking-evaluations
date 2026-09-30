/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetUseOverriddenExternalCameraStaticPose
ENTRY_POINT: 01f9b34c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_44_0__ovrp_GetUseOverriddenExternalCameraStaticPose
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_027b3108;
                    /* try { // try from 01f9b358 to 0209b35f has its CatchHandler @ 01f9b39c */
                    /* try { // try from 01f9b360 to 0209b38b has its CatchHandler @ 01f9b2c4 */
  if ((DAT_0293dfb5 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b3108);
    DAT_0293dfb5 = 1;
  }
                    /* try { // try from 01f9b38c to 0209b38f has its CatchHandler @ 01f9b3ac */
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* try { // try from 01f9b390 to 0209b397 has its CatchHandler @ 01f9b2c4 */
    thunk_FUN_01220628();
  }
                    /* try { // try from 01f9b398 to 0209b39b has its CatchHandler @ 01f9b39c */
  uVar2 = FUN_01f410f4(0);
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f9b358 with catch @ 01f9b39c
                       catch(type#1 @ 026574d8) { ... } // from try @ 01f9b398 with catch @ 01f9b39c
                       try { // try from 01f9b39c to 0209b3c7 has its CatchHandler @ 01f9b2c4 */
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f9b2dc with catch @ 01f9b3a0
                        */
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f9b340 with catch @ 01f9b3a4
                        */
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f9b324 with catch @ 01f9b3a8
                        */
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f9b38c with catch @ 01f9b3ac
                        */
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f9b300 with catch @ 01f9b3b0
                        */
  FUN_01e5aac0(uVar2,param_1,param_2,0);
  return;
}


