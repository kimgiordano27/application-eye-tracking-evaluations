/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.Vector2f>
ENTRY_POINT: 0379c56c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


float System_Array__InternalArray__ICollection_Contains<OVRPlugin_Vector2f>(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  long unaff_x20;
  float fVar5;
  float fVar6;
  
  uVar2 = FUN_068f8810();
  if ((uVar2 & 1) == 0) {
    lVar3 = FUN_068f8a88();
    if (lVar3 != 0) {
      iVar4 = 0;
      fVar6 = 0.0;
      do {
        iVar1 = FUN_06905cd8(lVar3,0);
        if (iVar1 <= iVar4) {
          return fVar6;
        }
        lVar3 = FUN_068f8a88();
        if ((lVar3 == 0) || (lVar3 = FUN_06906070(lVar3,iVar4,0), lVar3 == 0)) break;
        FUN_068f5db8(lVar3,0);
        fVar5 = (float)FUN_0379c600();
        fVar6 = fVar6 + fVar5;
        iVar4 = iVar4 + 1;
        lVar3 = FUN_068f8a88();
      } while (lVar3 != 0);
    }
  }
  else if (unaff_x20 != 0) {
    return *(float *)(unaff_x20 + 0x24);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


