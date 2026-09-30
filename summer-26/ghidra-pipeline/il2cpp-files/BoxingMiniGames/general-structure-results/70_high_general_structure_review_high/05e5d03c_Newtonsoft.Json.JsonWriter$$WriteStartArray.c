/*
FUNCTION_NAME: Newtonsoft.Json.JsonWriter$$WriteStartArray
ENTRY_POINT: 05e5d03c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;frame_or_lifecycle_behavior
*/


undefined8 Newtonsoft_Json_JsonWriter__WriteStartArray(void)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  
  uVar1 = FUN_05d493dc();
  if ((uVar1 & 1) == 0) {
    plVar2 = *(long **)(unaff_x19 + 0x28);
    if (plVar2 != (long *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 0x458))(plVar2,*(undefined8 *)(*plVar2 + 0x460));
      if (lVar3 != 0) {
        if (*(uint *)(unaff_x19 + 0x20) < *(uint *)(lVar3 + 0x18)) {
          uVar4 = FUN_05e5c00c();
          return uVar4;
        }
        goto LAB_05e5d1a8;
      }
    }
  }
  else {
    plVar2 = *(long **)(unaff_x19 + 0x30);
    if (plVar2 != (long *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 0x318))(plVar2,*(undefined8 *)(*plVar2 + 800));
      if (lVar3 != 0) {
        if (*(uint *)(unaff_x19 + 0x20) < *(uint *)(lVar3 + 0x18)) {
          return *(undefined8 *)(lVar3 + (long)(int)*(uint *)(unaff_x19 + 0x20) * 8 + 0x20);
        }
LAB_05e5d1a8:
                    /* WARNING: Subroutine does not return */
        FUN_03642c20();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


