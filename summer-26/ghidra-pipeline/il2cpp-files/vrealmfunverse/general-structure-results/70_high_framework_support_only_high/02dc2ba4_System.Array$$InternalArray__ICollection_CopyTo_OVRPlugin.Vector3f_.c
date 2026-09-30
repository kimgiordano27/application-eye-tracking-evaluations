/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.Vector3f>
ENTRY_POINT: 02dc2ba4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


float System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_Vector3f>
                (undefined1 param_1 [16],float param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  
  if ((DAT_066c299c & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312520);
    DAT_066c299c = 1;
  }
  if (*(long *)(param_3 + 0x20) != 0) {
    uVar3 = *(undefined8 *)(*(long *)(param_3 + 0x20) + 0x28);
    if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar1 = FUN_05c8e378(uVar3,0,0);
    if ((uVar1 & 1) != 0) {
      return *(float *)(param_3 + 0x30);
    }
    if (((*(long *)(param_3 + 0x20) != 0) &&
        (lVar2 = *(long *)(*(long *)(param_3 + 0x20) + 0x28), lVar2 != 0)) &&
       (lVar2 = FUN_05c89340(lVar2,0), lVar2 != 0)) {
      FUN_05c9bf94(lVar2,0);
      if (*(long *)(param_3 + 0x28) != 0) {
        fVar4 = param_2;
        FUN_05c9bf94(*(long *)(param_3 + 0x28),0);
        if (param_2 - fVar4 < 0.5) {
          return 0.5;
        }
        return param_2 - fVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


