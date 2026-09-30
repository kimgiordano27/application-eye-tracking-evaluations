/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<XmlTextWriter.Namespace>
ENTRY_POINT: 042a5690
PROGRAM: vrfs-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


undefined8 System_Array__InternalArray__ICollection_Add<XmlTextWriter_Namespace>(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  long lVar5;
  int iVar6;
  
  iVar1 = *param_1;
  uVar3 = 0;
  if ((iVar1 != 0) && (iVar1 < 5)) {
    iVar6 = param_1[1];
    if (iVar6 < 1) {
LAB_042a5728:
      uVar3 = 0;
    }
    else {
      if (1 < iVar1) {
        piVar4 = param_1 + 2;
        lVar5 = 1;
        while( true ) {
          FUN_03c72f04(lVar5 < iVar1,0);
          iVar1 = *piVar4;
          FUN_03c72f04(lVar5 < *param_1,0);
          iVar2 = 0;
          if (iVar1 != 0) {
            iVar2 = iVar6 / iVar1;
          }
          if (iVar6 != iVar2 * *piVar4) goto LAB_042a5728;
          iVar1 = *param_1;
          if (iVar1 <= (int)lVar5 + 1) break;
          iVar6 = param_1[1];
          lVar5 = lVar5 + 1;
          piVar4 = piVar4 + 1;
        }
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}


