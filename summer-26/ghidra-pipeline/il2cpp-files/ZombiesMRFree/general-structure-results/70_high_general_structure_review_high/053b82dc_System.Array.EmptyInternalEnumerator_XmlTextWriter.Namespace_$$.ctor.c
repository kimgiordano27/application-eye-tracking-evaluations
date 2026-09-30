/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<XmlTextWriter.Namespace>$$.ctor
ENTRY_POINT: 053b82dc
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void System_Array_EmptyInternalEnumerator<XmlTextWriter_Namespace>___ctor(void)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *unaff_x26;
  long *unaff_x27;
  long in_stack_00000008;
  
                    /* try { // try from 053b82dc to 054b8353 has its CatchHandler @ 053b8360 */
  FUN_053b7b1c();
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x180);
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar3 = FUN_05afde1c(uVar3,0);
  if (in_stack_00000008 != 0) {
    lVar1 = FUN_059f8194(in_stack_00000008,*(undefined8 *)PTR_DAT_06f9ca90,uVar3,0);
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02feb2c4(lVar4);
    }
    if (lVar1 == 0) {
      FUN_05b1040c(0x10,0);
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    lVar2 = thunk_FUN_03010710(lVar1,lVar4);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe9884(lVar1,lVar4);
    }
    if (0 < *(int *)(lVar2 + 0x18)) {
      uVar5 = 0;
      puVar6 = (undefined8 *)(lVar2 + 0x38);
      do {
        if (*(uint *)(lVar2 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        FUN_053b7bfc(puVar6[-2],puVar6[-1],*puVar6);
        uVar5 = uVar5 + 1;
        puVar6 = puVar6 + 4;
      } while ((long)uVar5 < (long)*(int *)(lVar2 + 0x18));
    }
    *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    lVar1 = FUN_05abbc78(0);
    if (lVar1 != 0) {
      FUN_050e29b8();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


