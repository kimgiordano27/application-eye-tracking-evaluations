/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$ClosestPointOnFirstRay
ENTRY_POINT: 04c2eaa4
PROGRAM: hellodot-libil2cpp.so
SCORE: 114
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;pose_vector;ray_interaction;data_collection
EVIDENCE: strong_eye_source_hits_1;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_2;strong_file_logging_hits_2;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Meta_XR_EnvironmentDepthRaycaster__ClosestPointOnFirstRay(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04c2ea94 with catch @ 04c2eaa4
                        */
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04c2ea90 with catch @ 04c2eaa8
                        */
  AkMIDIEventCallbackInfo__get_byProgramNum(*(undefined8 *)(param_1 + 0x1d0));
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04c2e964 with catch @ 04c2eaac
                        */
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04c2e94c with catch @ 04c2eab0
                        */
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04c2e8a0 with catch @ 04c2eab4
                        */
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e61d8);
                    /* catch(type#1 @ 0620d888) { ... } // from try @ 04c2e8e0 with catch @ 04c2eab8
                        */
  *(undefined1 *)(unaff_x21 + 0x6fe) = 1;
  uVar1 = FUN_04c2ea00();
                    /* try { // try from 04c2eac8 to 04d2eacb has its CatchHandler @ 04c2eadc */
  *unaff_x20 = uVar1;
  uVar2 = thunk_FUN_02cea894(*unaff_x23);
                    /* catch() { ... } // from try @ 04c2eac8 with catch @ 04c2eadc */
  FUN_04c2eb18();
  uVar3 = thunk_FUN_02cea894(*unaff_x22);
  FUN_054e1934(uVar3,uVar2,0x10000,0);
                    /* try { // try from 04c2eb14 to 04d2eb3b has its CatchHandler @ 04c2eb50 */
  return uVar3;
}


