/*
FUNCTION_NAME: Oculus.Skinning.GpuSkinning.OvrAvatarComputeSkinningVertexBuffer$$get_IsDataInClientSpace
ENTRY_POINT: 0717201c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Oculus_Skinning_GpuSkinning_OvrAvatarComputeSkinningVertexBuffer__get_IsDataInClientSpace
               (ulong param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 unaff_x20;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_03c8f898(PTR_DAT_08e6e330);
    FUN_03c8f898(PTR_DAT_08ea7e60);
    FUN_03c8f898(PTR_DAT_08ea7e40);
    FUN_03c8f898(PTR_DAT_08ea7e68);
    *(undefined1 *)(unaff_x21 + 0x666) = 1;
  }
  lVar5 = FUN_0717003c();
  puVar3 = PTR_DAT_08ea7e68;
  puVar2 = PTR_DAT_08ea7e40;
  puVar1 = PTR_DAT_08e6e330;
  if (lVar5 != 0) {
    uVar4 = FUN_07171afc();
    uVar6 = thunk_FUN_03cf5234(*(undefined8 *)puVar1);
    Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteStartArray(uVar6,uVar4,0);
    *(undefined8 *)(param_2 + 0x20) = uVar6;
    thunk_FUN_03d233cc((undefined8 *)(param_2 + 0x20),uVar6);
    FUN_07145224(param_2,0);
    *(undefined8 *)(param_2 + 0x10) = unaff_x20;
    thunk_FUN_03d233cc();
    uVar6 = thunk_FUN_03cf5234(*(undefined8 *)puVar3);
    FUN_07173b30();
    puVar7 = (undefined8 *)(param_2 + 0x18);
    *puVar7 = uVar6;
    thunk_FUN_03d233cc(puVar7,uVar6);
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar5 = *(long *)puVar2;
    }
    if (**(long **)(lVar5 + 0xb8) != 0) {
      FUN_05a8971c(**(long **)(lVar5 + 0xb8),*puVar7,*(undefined8 *)PTR_DAT_08ea7e60);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


