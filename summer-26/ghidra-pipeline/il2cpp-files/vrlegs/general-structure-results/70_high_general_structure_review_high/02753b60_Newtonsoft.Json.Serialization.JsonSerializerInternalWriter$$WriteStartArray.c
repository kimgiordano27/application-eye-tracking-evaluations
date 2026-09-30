/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteStartArray
ENTRY_POINT: 02753b60
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteStartArray(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar6;
  long *unaff_x26;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01a58e78(param_1);
  }
  uVar2 = FUN_02786594();
  if ((uVar2 & 1) != 0) {
    thunk_FUN_01a6ca08(PTR_DAT_03cea0a0);
    uVar5 = thunk_FUN_01a89e68();
    uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cf04f0);
    FUN_0273bfa0(uVar5,uVar6);
    uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cfa5c0);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar5,uVar6);
  }
  if (*unaff_x21 != 0) {
    plVar3 = (long *)FUN_026f4264(*unaff_x21,0);
    puVar1 = PTR_DAT_03cf6080;
    if (plVar3 == (long *)0x0) {
      *unaff_x21 = 0;
    }
    else {
      if (*plVar3 != *(long *)PTR_DAT_03cf6080) {
LAB_02753bc8:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar3);
      }
      *unaff_x21 = (long)plVar3;
      if (*plVar3 != *(long *)puVar1) goto LAB_02753bc8;
    }
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if ((*unaff_x21 != 0) && (lVar4 = *(long *)(*unaff_x21 + 0x78), lVar4 != 0)) {
      uVar5 = thunk_FUN_01a5dd74(lVar4,0);
      uVar6 = *(undefined8 *)PTR_DAT_03cfa5b8;
      if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
        thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe5e8);
      }
      uVar6 = FUN_0277b678(uVar6,0);
      uVar2 = FUN_02787b20(uVar5,uVar6,0);
      if ((uVar2 & 1) != 0) {
        lVar4 = *unaff_x21;
        if (*(int *)(*(long *)PTR_DAT_03cf7950 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar5 = FUN_026f3790(0);
        if (lVar4 == 0) goto LAB_02753ca8;
        FUN_026f3a34(lVar4,uVar5,0);
      }
      if (*(int *)(*(long *)PTR_DAT_03cbeeb0 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar5 = FUN_02746fb4();
      *unaff_x22 = uVar5;
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      FUN_0275368c();
      return;
    }
  }
LAB_02753ca8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


