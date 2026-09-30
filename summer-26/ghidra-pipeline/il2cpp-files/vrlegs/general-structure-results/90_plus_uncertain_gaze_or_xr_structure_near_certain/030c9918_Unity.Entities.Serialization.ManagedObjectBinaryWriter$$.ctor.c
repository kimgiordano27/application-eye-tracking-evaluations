/*
FUNCTION_NAME: Unity.Entities.Serialization.ManagedObjectBinaryWriter$$.ctor
ENTRY_POINT: 030c9918
PROGRAM: vrlegs-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x030c9b28) */
/* WARNING: Removing unreachable block (ram,0x030c9aa8) */
/* WARNING: Removing unreachable block (ram,0x030c9ae4) */
/* WARNING: Removing unreachable block (ram,0x030c9b30) */

bool Unity_Entities_Serialization_ManagedObjectBinaryWriter___ctor(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  int unaff_w19;
  long *plVar5;
  long unaff_x21;
  long *plVar6;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  char cStack000000000000004c;
  
  plVar5 = (long *)(unaff_x21 + 0x20);
  if (*plVar5 == 0) {
    uVar2 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cbfd60);
    FUN_027b3d9c(uVar2,0);
    FUN_027e6fe4(plVar5,uVar2,0,0);
  }
  uVar2 = thunk_FUN_01a4b274(plVar5,0);
  cStack000000000000004c = '\0';
  FUN_027e0bd8(uVar2,&stack0x0000004c,0);
  plVar5 = (long *)(unaff_x21 + 0x28);
  lVar4 = *plVar5;
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x18))
              (*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(unaff_x21 + 0x30),
               *(undefined8 *)(lVar4 + 0x28));
  }
  plVar6 = (long *)(unaff_x21 + 0x38);
  if (*plVar6 != 0) {
    Animancer_FadeGroup__get_TargetWeight();
    puVar1 = System_Collections_Generic_Dictionary<BlendShapeBinding,_Action<float>>_TypeInfo;
    in_stack_00000028 = in_stack_00000008;
    in_stack_00000020 = in_stack_00000000;
    in_stack_00000038 = in_stack_00000018;
    in_stack_00000030 = in_stack_00000010;
    while (uVar3 = FUN_021b51c8(&stack0x00000020,*(undefined8 *)puVar1), (uVar3 & 1) != 0) {
      FUN_01b7a454(&stack0x00000020);
      if (in_stack_00000000 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      (**(code **)(in_stack_00000000 + 0x18))
                (*(undefined8 *)(in_stack_00000000 + 0x40),in_stack_00000008,
                 *(undefined8 *)(in_stack_00000000 + 0x28));
    }
    FUN_021b51c4(&stack0x00000020,
                 *(undefined8 *)
                  System_Collections_Generic_Dictionary<BehaviourType,_IPrimitiveData>_TypeInfo);
  }
  *plVar5 = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar5,0);
  *(undefined8 *)(unaff_x21 + 0x30) = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists
            ((undefined8 *)(unaff_x21 + 0x30),0);
  *plVar6 = 0;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar6,0);
  if (cStack000000000000004c != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(uVar2,0);
  }
  return unaff_w19 == 0;
}


