/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK$$SetTrackingSpacePose
ENTRY_POINT: 04a7afb0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


int Meta_XR_MRUtilityKit_MRUK__SetTrackingSpacePose(undefined8 param_1,long param_2)

{
  char in_NG;
  char in_OV;
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x21;
  int iVar4;
  long lVar5;
  ulong uVar6;
  
  if (in_NG == in_OV) {
    lVar5 = 0;
    uVar6 = 0;
    iVar4 = 0;
    do {
      lVar3 = *(long *)(unaff_x21 + 0x18);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      if ((-1 < *(int *)(lVar3 + lVar5 + 0x20)) &&
         (uVar2 = (**(code **)(param_2 + 0x18))
                            (*(undefined8 *)(param_2 + 0x40),*(undefined4 *)(lVar3 + lVar5 + 0x28),
                             *(undefined8 *)(param_2 + 0x28)), (uVar2 & 1) != 0)) {
        uVar1 = FUN_04a79498();
        iVar4 = iVar4 + (uVar1 & 1);
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0xc;
    } while ((long)uVar6 < (long)*(int *)(unaff_x21 + 0x24));
  }
  else {
    iVar4 = 0;
  }
  return iVar4;
}


