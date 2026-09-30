/*
FUNCTION_NAME: OVRPlugin$$GetCurrentTrackingTransformPose
ENTRY_POINT: 0338130c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetCurrentTrackingTransformPose(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  thunk_FUN_01c273e8(
                    Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_ProbeVolumeAsset>_MoveNext__
                    );
  uVar1 = FUN_0336f2b8();
  thunk_FUN_01c273e8(PTR_DAT_04231770);
  uVar2 = thunk_FUN_01c496e0();
  FUN_03247aac(uVar2,uVar1);
  uVar1 = thunk_FUN_01c273e8(
                            Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_ProbeVolumeAsset>_Dispose__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar2,uVar1);
}


