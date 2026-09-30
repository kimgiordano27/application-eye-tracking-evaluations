/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingSeatedZeroPoseToRawTrackingPose$$EndInvoke
ENTRY_POINT: 0561e758
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose__EndInvoke
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if ((DAT_06dbba46 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fcea0);
    DAT_06dbba46 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + 0x10);
    lVar5 = *(long *)PTR_DAT_069fcea0;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        puVar2 = (undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
        *puVar2 = param_2;
        LeanTween__value(puVar2,param_2);
        return;
      }
      FUN_040101ec(lVar3,param_2,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


