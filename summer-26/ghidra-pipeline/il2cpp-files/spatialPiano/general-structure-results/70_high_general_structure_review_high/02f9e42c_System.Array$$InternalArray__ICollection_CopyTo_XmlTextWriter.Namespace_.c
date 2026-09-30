/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<XmlTextWriter.Namespace>
ENTRY_POINT: 02f9e42c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2
*/


long System_Array__InternalArray__ICollection_CopyTo<XmlTextWriter_Namespace>
               (long *param_1,undefined4 *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  void *__dest;
  long lVar3;
  long lVar4;
  
  if (param_3 < 1) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    do {
      while( true ) {
        __dest = (void *)param_1[6];
        if ((void *)param_1[7] <= __dest) break;
        lVar3 = param_1[7] - (long)__dest >> 2;
        lVar1 = param_3 - lVar4;
        if (lVar3 <= param_3 - lVar4) {
          lVar1 = lVar3;
        }
        if (lVar1 != 0) {
          memmove(__dest,param_2,lVar1 * 4);
          __dest = (void *)param_1[6];
        }
        param_2 = param_2 + lVar1;
        lVar4 = lVar1 + lVar4;
        param_1[6] = (long)((long)__dest + lVar1 * 4);
        if (param_3 <= lVar4) {
          return lVar4;
        }
      }
      iVar2 = (**(code **)(*param_1 + 0x68))(param_1,*param_2);
      if (iVar2 == -1) {
        return lVar4;
      }
      param_2 = param_2 + 1;
      lVar4 = lVar4 + 1;
    } while (lVar4 < param_3);
  }
  return lVar4;
}


