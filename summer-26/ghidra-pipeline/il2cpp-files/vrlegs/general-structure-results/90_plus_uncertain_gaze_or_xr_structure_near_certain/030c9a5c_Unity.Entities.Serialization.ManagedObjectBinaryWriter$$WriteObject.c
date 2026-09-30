/*
FUNCTION_NAME: Unity.Entities.Serialization.ManagedObjectBinaryWriter$$WriteObject
ENTRY_POINT: 030c9a5c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x030c9b28) */
/* WARNING: Removing unreachable block (ram,0x030c9aa8) */
/* WARNING: Removing unreachable block (ram,0x030c9ae4) */
/* WARNING: Removing unreachable block (ram,0x030c9b30) */

bool Unity_Entities_Serialization_ManagedObjectBinaryWriter__WriteObject(void)

{
  ulong uVar1;
  long lVar2;
  int unaff_w19;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x28;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000048;
  
  __cxa_end_catch();
  lVar2 = thunk_FUN_01a6ca08();
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_030c6f6c();
  while( true ) {
    uVar1 = FUN_021b51c8(&stack0x00000020,*unaff_x28);
    if ((uVar1 & 1) == 0) {
      FUN_021b51c4(&stack0x00000020,
                   *(undefined8 *)
                    System_Collections_Generic_Dictionary<BehaviourType,_IPrimitiveData>_TypeInfo);
      *unaff_x22 = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      *(undefined8 *)(unaff_x21 + 0x30) = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(unaff_x21 + 0x30),0);
      *unaff_x23 = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      if (in_stack_00000048._4_1_ != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0();
      }
      return unaff_w19 == 0;
    }
    FUN_01b7a454(&stack0x00000020);
    if (in_stack_00000000 == 0) break;
    (**(code **)(in_stack_00000000 + 0x18))
              (*(undefined8 *)(in_stack_00000000 + 0x40),in_stack_00000008,
               *(undefined8 *)(in_stack_00000000 + 0x28));
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


