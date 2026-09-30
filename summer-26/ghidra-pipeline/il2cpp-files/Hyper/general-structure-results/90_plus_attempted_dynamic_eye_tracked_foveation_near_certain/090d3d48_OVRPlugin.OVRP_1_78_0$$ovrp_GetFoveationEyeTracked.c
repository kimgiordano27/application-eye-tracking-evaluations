/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFoveationEyeTracked
ENTRY_POINT: 090d3d48
PROGRAM: Hyper-libil2cpp.so
SCORE: 129
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_2;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


undefined4
OVRPlugin_OVRP_1_78_0__ovrp_GetFoveationEyeTracked
          (undefined1 param_1 [16],undefined4 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_4 == 1) {
    return param_2;
  }
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 090d3d60 with catch @ 090d3d78
                        */
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 090d3c54 with catch @ 090d3d7c
                        */
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 090d3bdc with catch @ 090d3d80
                        */
                    /* catch(type#1 @ 0a568bf8) { ... } // from try @ 090d3c24 with catch @ 090d3d84
                        */
  thunk_FUN_049ae08c(PTR_DAT_0ac20520);
  uVar1 = thunk_FUN_04983f60();
  uVar2 = thunk_FUN_049ae08c(PTR_DAT_0ac79868);
                    /* try { // try from 090d3da0 to 091d3da3 has its CatchHandler @ 090d3dbc */
                    /* try { // try from 090d3da4 to 091d3dbf has its CatchHandler @ 090d3af4 */
  FUN_08d7500c(uVar1,uVar2,0);
  uVar2 = thunk_FUN_049ae08c(PTR_DAT_0ac79870);
                    /* catch() { ... } // from try @ 090d3da0 with catch @ 090d3dbc */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 090d3dc0 to 091d3dc7 has its CatchHandler @ 090d3dd0 */
  FUN_04948050(uVar1,uVar2);
}


