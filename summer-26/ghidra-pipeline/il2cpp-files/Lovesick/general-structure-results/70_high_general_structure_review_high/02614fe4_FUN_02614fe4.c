/*
FUNCTION_NAME: FUN_02614fe4
ENTRY_POINT: 02614fe4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_3;strong_file_logging_hits_2
*/


void FUN_02614fe4(long param_1,long *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  
  if ((DAT_037833f2 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractor>_get_flushedCount__
                      );
    thunk_FUN_00d48444(DG_Tweening_Core_DOGetter<Vector2>_TypeInfo);
    thunk_FUN_00d48444(System_Linq_Expressions_MemberMemberBinding_TypeInfo);
    DAT_037833f2 = 1;
  }
  if (((param_3 == 0) && (*(char *)(param_1 + 0x1b0) != '\0')) && (param_2 != (long *)0x0)) {
    bVar1 = *(byte *)(*param_2 + 300);
    bVar2 = *(byte *)(*(long *)DG_Tweening_Core_DOGetter<Vector2>_TypeInfo + 300);
    if ((bVar2 <= bVar1) &&
       (lVar3 = *(long *)(*param_2 + 200),
       *(long *)(lVar3 + (ulong)bVar2 * 8 + -8) ==
       *(long *)DG_Tweening_Core_DOGetter<Vector2>_TypeInfo)) {
      bVar2 = *(byte *)(*(long *)System_Linq_Expressions_MemberMemberBinding_TypeInfo + 300);
      if ((bVar1 < bVar2) ||
         (*(long *)(lVar3 + (ulong)bVar2 * 8 + -8) !=
          *(long *)System_Linq_Expressions_MemberMemberBinding_TypeInfo)) {
        if (*(int *)(*(long *)
                      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractor>_get_flushedCount__
                    + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_021404c4(param_2,0);
        return;
      }
    }
  }
  return;
}


