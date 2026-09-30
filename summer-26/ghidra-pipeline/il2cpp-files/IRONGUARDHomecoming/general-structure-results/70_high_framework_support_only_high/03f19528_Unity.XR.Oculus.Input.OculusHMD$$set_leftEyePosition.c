/*
FUNCTION_NAME: Unity.XR.Oculus.Input.OculusHMD$$set_leftEyePosition
ENTRY_POINT: 03f19528
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;pose_vector;telemetry
EVIDENCE: strong_eye_source_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_1;functionality_possible_biometrics_hits_2
*/


void Unity_XR_Oculus_Input_OculusHMD__set_leftEyePosition(void)

{
  char unaff_w19;
  ulong unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined1 uStack000000000000000c;
  
  thunk_FUN_01efb3a4(
                    Method_System_Collections_Generic_Queue<TTSSpeaker_TTSSpeakerRequestData>_Dequeue__
                    );
  *(undefined1 *)(unaff_x22 + 0xe5) = 1;
  uStack000000000000000c = (long)(unaff_x20 & 0xffffffff) < (long)unaff_w19;
  thunk_FUN_01f113fc(*unaff_x21,&stack0x0000000c);
  return;
}


