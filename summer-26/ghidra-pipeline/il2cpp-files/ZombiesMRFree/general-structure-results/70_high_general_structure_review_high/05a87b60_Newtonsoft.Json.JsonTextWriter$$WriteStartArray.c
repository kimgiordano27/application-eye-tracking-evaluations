/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextWriter$$WriteStartArray
ENTRY_POINT: 05a87b60
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_4;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x05a87c18) */
/* WARNING: Removing unreachable block (ram,0x05a87c38) */

undefined8 Newtonsoft_Json_JsonTextWriter__WriteStartArray(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  if (*(int *)(**(long **)(param_1 + 3000) + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar3 = FUN_05ab3d10(uVar3,0);
  uVar1 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06fa3728);
  FUN_0595ac38(uVar1,uVar3,0);
  *unaff_x19 = uVar1;
  thunk_FUN_03048534();
  lVar2 = *unaff_x24;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar2 = *unaff_x24;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar2 != 0) {
    FUN_052bc618(lVar2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x30),
                 *(undefined8 *)PTR_DAT_06faa528);
    if (in_stack_00000008._4_1_ != '\0') {
      thunk_FUN_0301ce48();
    }
    return *unaff_x19;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


