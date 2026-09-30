/*
FUNCTION_NAME: Newtonsoft.Json.JsonReader$$Dispose
ENTRY_POINT: 05a7e010
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_JsonReader__Dispose(void)

{
  uint uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  
  uVar2 = FUN_0302f42c();
  *(undefined2 *)(*(long *)(*unaff_x20 + 0xb8) + 0xc) = uVar2;
  uVar3 = FUN_05a7de64();
  **(undefined8 **)(*unaff_x20 + 0xb8) = uVar3;
  thunk_FUN_03048534(*(undefined8 *)(*unaff_x20 + 0xb8),uVar3);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar3 = FUN_05a5a548(*(long *)(*unaff_x20 + 0xb8) + 10,0);
  puVar6 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
  *puVar6 = uVar3;
  thunk_FUN_03048534(puVar6,uVar3);
  lVar4 = FUN_02fe9340(*unaff_x21,3);
  if (lVar4 != 0) {
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar1 != 0) {
      lVar5 = *(long *)(*unaff_x20 + 0xb8);
      *(undefined2 *)(lVar4 + 0x20) = *(undefined2 *)(lVar5 + 10);
      if ((uVar1 != 1) && (*(undefined2 *)(lVar4 + 0x22) = *(undefined2 *)(lVar5 + 8), 2 < uVar1)) {
        *(undefined2 *)(lVar4 + 0x24) = *(undefined2 *)(lVar5 + 0x18);
        *(long *)(lVar5 + 0x20) = lVar4;
        thunk_FUN_03048534();
        lVar4 = *(long *)(*unaff_x20 + 0xb8);
        *(bool *)(lVar4 + 0x28) = *(short *)(lVar4 + 10) == *(short *)(lVar4 + 0x18);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02fe94f0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


