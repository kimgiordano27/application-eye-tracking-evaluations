/*
FUNCTION_NAME: Newtonsoft.Json.JsonWriter$$WriteStartArray
ENTRY_POINT: 08e3fd14
PROGRAM: Hyper-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;frame_or_lifecycle_behavior
*/


void Newtonsoft_Json_JsonWriter__WriteStartArray(void)

{
  undefined *puVar1;
  undefined *puVar2;
  bool in_ZR;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  
  if (!in_ZR) {
    unaff_x20[5] = *unaff_x22;
    thunk_FUN_049ee3d8();
    in_stack_00000008._4_1_ = *(undefined1 *)(unaff_x19 + 0x10);
    lVar3 = thunk_FUN_04983b98(*(undefined8 *)(PTR_DAT_0ac09758 + 0x28),(long)&stack0x00000008 + 4);
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_04983e64(lVar3,*(undefined8 *)(*unaff_x20 + 0x40)), lVar4 == 0)) {
LAB_08e3fdf4:
      uVar5 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
      FUN_04948050(uVar5,0);
    }
    puVar1 = PTR_DAT_0ac0f430;
    if (2 < *(uint *)(unaff_x20 + 3)) {
      unaff_x20[6] = lVar3;
      thunk_FUN_049ee3d8(unaff_x20 + 6,lVar3);
      if ((*(long *)puVar1 != 0) &&
         (lVar3 = thunk_FUN_04983e64(*(long *)puVar1,*(undefined8 *)(*unaff_x20 + 0x40)), lVar3 == 0
         )) goto LAB_08e3fdf4;
      puVar2 = PTR_DAT_0ac6c400;
      if ((*(uint *)(unaff_x20 + 3) & 0xfffffffc) != 0) {
        unaff_x20[7] = *(long *)puVar1;
        thunk_FUN_049ee3d8();
        uVar5 = FUN_08bd9b60();
        FUN_08bda228(uVar5,*(undefined8 *)puVar2,*(undefined8 *)(unaff_x19 + 0x18),
                     *(undefined8 *)puVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


