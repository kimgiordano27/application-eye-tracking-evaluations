/*
FUNCTION_NAME: OVRPlugin_GetTrackingCalibratedOrigin_mC6723351933DF6147F564A229DDA9996BAA6C501
ENTRY_POINT: 02db4c74
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 73
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_9;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void OVRPlugin_GetTrackingCalibratedOrigin_mC6723351933DF6147F564A229DDA9996BAA6C501
               (undefined8 *param_1)

{
  undefined8 local_34;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined8 uStack_20;
  
  if ((OVRPlugin_GetTrackingCalibratedOrigin_mC6723351933DF6147F564A229DDA9996BAA6C501::
       s_Il2CppMethodInitialized & 1) == 0) {
                    /* try { // try from 02db4c9c to 02eb4cab has its CatchHandler @ 02db4cb8 */
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Field_<PrivateImplementationDetails>_C9FD760B3F2B89A0AB160309524106D2BC92202A97583BF0D885299B045F386E
              );
    OVRPlugin_GetTrackingCalibratedOrigin_mC6723351933DF6147F564A229DDA9996BAA6C501::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Field_<PrivateImplementationDetails>_C9FD760B3F2B89A0AB160309524106D2BC92202A97583BF0D885299B045F386E
            );
  OVRP_1_0_0_ovrp_GetTrackingCalibratedOrigin_m5F6C2FC17F115CAD4A25994407F638A5DBA03A4D(0);
  param_1[1] = uStack_2c;
  *param_1 = local_34;
  *(undefined8 *)((long)param_1 + 0x14) = uStack_20;
  *(ulong *)((long)param_1 + 0xc) = CONCAT44(uStack_24,uStack_2c._4_4_);
  return;
}


