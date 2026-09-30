/*
FUNCTION_NAME: Unity.Entities.Serialization.ManagedObjectBinaryWriter$$Unity.Serialization.Binary.IContravariantBinaryAdapter<UnityEngine.Object>.Deserialize
ENTRY_POINT: 030c9f0c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 126
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x030c9fa0) */

void Unity_Entities_Serialization_ManagedObjectBinaryWriter__Unity_Serialization_Binary_IContravariantBinaryAdapter<UnityEngine_Object>_Deserialize
               (void)

{
  long unaff_x23;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  uStack0000000000000008 = 0;
  uStack0000000000000010 = 0;
  FUN_020f03e8(&stack0x00000008);
  if (unaff_x23 != 0) {
    in_stack_00000020 = uStack0000000000000008;
    in_stack_00000028 = uStack0000000000000010;
    FUN_01b5f01c();
    if (in_stack_00000018._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


