/*
FUNCTION_NAME: Newtonsoft.Json.JsonWriter$$WriteEndArray
ENTRY_POINT: 08e3fd20
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


void Newtonsoft_Json_JsonWriter__WriteEndArray(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  long *unaff_x20;
  undefined1 uStack000000000000000c;
  
                    /* try { // try from 08e3fd20 to 08f3fdc7 has its CatchHandler @ 08e3fd20
                       catch() { ... } // from try @ 08e3fd20 with catch @ 08e3fd20
                       catch() { ... } // from try @ 08e400e8 with catch @ 08e3fd20
                       catch() { ... } // from try @ 08e4024c with catch @ 08e3fd20
                       catch() { ... } // from try @ 08e40308 with catch @ 08e3fd20
                       catch() { ... } // from try @ 08e40340 with catch @ 08e3fd20
                       catch() { ... } // from try @ 08e403c0 with catch @ 08e3fd20 */
  *(undefined8 *)(param_1 + 0x28) = param_2;
  thunk_FUN_049ee3d8();
  uStack000000000000000c = *(undefined1 *)(unaff_x19 + 0x10);
  lVar3 = thunk_FUN_04983b98(*(undefined8 *)(PTR_DAT_0ac09758 + 0x28),&stack0x0000000c);
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
       (lVar3 = thunk_FUN_04983e64(*(long *)puVar1,*(undefined8 *)(*unaff_x20 + 0x40)), lVar3 == 0))
    goto LAB_08e3fdf4;
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
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


