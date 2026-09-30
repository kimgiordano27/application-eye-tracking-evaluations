/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<XmlTextWriter.Namespace>$$Dispose
ENTRY_POINT: 053b8270
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


void System_Array_EmptyInternalEnumerator<XmlTextWriter_Namespace>__Dispose(undefined8 param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  int unaff_w22;
  long unaff_x23;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x24;
  undefined8 *puVar5;
  long lVar6;
  long *unaff_x26;
  long *unaff_x27;
  long in_stack_00000008;
  
  *(undefined8 *)(unaff_x24 + 0x30) = param_1;
  lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    FUN_02feb2c4(lVar6);
  }
  if (unaff_x23 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = thunk_FUN_03010710();
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe9884();
    }
  }
  thunk_FUN_03048534((undefined8 *)(unaff_x24 + 0x30),lVar6);
  if (unaff_w22 == 0) {
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0x10),0);
  }
  else {
    FUN_053b7b1c();
    uVar2 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x180);
    if (*(int *)(*unaff_x27 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    uVar2 = FUN_05afde1c(uVar2,0);
    if (in_stack_00000008 == 0) goto LAB_053b8430;
    lVar6 = FUN_059f8194(in_stack_00000008,*(undefined8 *)PTR_DAT_06f9ca90,uVar2,0);
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02feb2c4(lVar3);
    }
    if (lVar6 == 0) {
      FUN_05b1040c(0x10,0);
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    lVar1 = thunk_FUN_03010710(lVar6,lVar3);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe9884(lVar6,lVar3);
    }
    if (0 < *(int *)(lVar1 + 0x18)) {
      uVar4 = 0;
      puVar5 = (undefined8 *)(lVar1 + 0x38);
      do {
        if (*(uint *)(lVar1 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94f0();
        }
        FUN_053b7bfc(puVar5[-2],puVar5[-1],*puVar5);
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 4;
      } while ((long)uVar4 < (long)*(int *)(lVar1 + 0x18));
    }
  }
  *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  lVar6 = FUN_05abbc78(0);
  if (lVar6 != 0) {
    FUN_050e29b8();
    return;
  }
LAB_053b8430:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


