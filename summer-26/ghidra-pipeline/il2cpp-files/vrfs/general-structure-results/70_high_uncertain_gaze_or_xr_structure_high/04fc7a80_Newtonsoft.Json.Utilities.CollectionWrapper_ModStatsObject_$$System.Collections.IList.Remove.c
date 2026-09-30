/*
FUNCTION_NAME: Newtonsoft.Json.Utilities.CollectionWrapper<ModStatsObject>$$System.Collections.IList.Remove
ENTRY_POINT: 04fc7a80
PROGRAM: vrfs-libil2cpp.so
SCORE: 78
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_data_collection_or_telemetry_hits_1
*/


void Newtonsoft_Json_Utilities_CollectionWrapper<ModStatsObject>__System_Collections_IList_Remove
               (void)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long *unaff_x20;
  long lVar3;
  
  uVar1 = FUN_051d94d4();
  if ((uVar1 & 1) != 0) {
    lVar3 = *unaff_x20;
    uVar2 = FUN_051d85c4(0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__System_Collections_IEnumerable_GetEnumerator
              (lVar3,uVar2,0);
  }
  uVar2 = FUN_0431b09c();
  *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
  thunk_FUN_01656ef8((undefined8 *)(unaff_x19 + 0x20),uVar2);
  return;
}


