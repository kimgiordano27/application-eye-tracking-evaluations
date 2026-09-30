/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<XmlTextWriter.Namespace>
ENTRY_POINT: 021546e0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


undefined8 System_Array__InternalArray__IndexOf<XmlTextWriter_Namespace>(void)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  int unaff_w23;
  float fVar7;
  float fVar8;
  undefined8 in_stack_00000008;
  
  iVar1 = FUN_02151b1c();
  lVar6 = *(long *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x19 + 0x30);
  if (iVar1 < unaff_w23) {
    plVar2 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_042305b8,1);
    in_stack_00000008._4_4_ = *(undefined4 *)(unaff_x19 + 0x38);
    lVar3 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_04239598,(long)&stack0x00000008 + 4);
    if (plVar2 != (long *)0x0) {
      if ((lVar3 != 0) &&
         (lVar4 = thunk_FUN_01c495e4(lVar3,*(undefined8 *)(*plVar2 + 0x40)), lVar4 == 0)) {
        uVar5 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
        FUN_01c5d37c(uVar5,0);
      }
      if ((int)plVar2[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
      plVar2[4] = lVar3;
      if (lVar6 != 0) {
        FUN_0357c5cc(lVar6,*(undefined8 *)PTR_DAT_04239c28,uVar5,plVar2,0);
        *(undefined4 *)(unaff_x19 + 0x3c) = 0x3f800000;
        iVar1 = FUN_01f64e88(*(undefined8 *)(unaff_x19 + 0x30),0);
        if ((iVar1 != *(int *)(unaff_x19 + 0x38)) &&
           (fVar8 = *(float *)(unaff_x19 + 0x3c), 0.0 < fVar8)) {
          fVar7 = (float)FUN_03d52334(0);
          *(undefined8 *)(unaff_x19 + 0x18) = 0;
          *(float *)(unaff_x19 + 0x3c) = fVar8 - fVar7;
          *(undefined4 *)(unaff_x19 + 0x10) = 1;
          return 1;
        }
        if (unaff_x20 != 0) {
          FUN_02151fb4();
          return 0;
        }
      }
    }
  }
  else {
    lVar4 = *(long *)PTR_DAT_0422f958;
    lVar3 = *(long *)(lVar4 + 0x38);
    if (lVar3 == 0) {
      FUN_01c723f0(lVar4);
      lVar3 = *(long *)(lVar4 + 0x38);
    }
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01c72394();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar3 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01c72394();
    }
    if (lVar6 != 0) {
      FUN_0357c5cc(lVar6,*(undefined8 *)PTR_DAT_04239c68,uVar5,**(undefined8 **)(lVar3 + 0xb8),0);
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


