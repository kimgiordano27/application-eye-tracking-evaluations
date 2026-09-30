/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<XmlTextWriter.Namespace>
ENTRY_POINT: 021bbbec
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


void System_Array__InternalArray__set_Item<XmlTextWriter_Namespace>(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x19;
  undefined8 uVar6;
  
  lVar3 = thunk_FUN_01c495e4();
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d748();
  }
  if (*(long *)(unaff_x19 + 0x70) != 0) {
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x70) + 0x40);
    uVar4 = thunk_FUN_01c496e0(*(undefined8 *)RootMotion_FinalIK_IKMappingSpine_TypeInfo);
    FUN_0261ed48();
    puVar2 = PTR_DAT_042392c0;
    puVar1 = PTR_DAT_0422fad8;
    if (lVar3 != 0) {
      FUN_02620f40(lVar3,uVar4,*(undefined8 *)RootMotion_FinalIK_IKSolverCCD_TypeInfo);
      uVar6 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
      uVar4 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
      FUN_03245f44();
      plVar5 = (long *)FUN_033170a4(uVar6,uVar4,0);
      if (plVar5 != (long *)0x0) {
        lVar3 = *(long *)puVar1;
        if (*plVar5 == lVar3) {
          *(long **)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = plVar5;
          if (*plVar5 == lVar3) goto LAB_021bbcf4;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01c5d748();
      }
      *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) = 0;
LAB_021bbcf4:
      puVar1 = System_Collections_Generic_Dictionary<string,_GameObject>_TypeInfo;
      if (*(long *)(unaff_x19 + 0x108) != 0) {
        FUN_03d4b428();
      }
      **(undefined8 **)(*(long *)puVar1 + 0xb8) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


