/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetDeviceToAbsoluteTrackingPose$$BeginInvoke
ENTRY_POINT: 02cbe7b0
PROGRAM: sharks-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8 OVR_OpenVR_IVRSystem__GetDeviceToAbsoluteTrackingPose__BeginInvoke(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_033dac88();
  if (lVar1 != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      if ((long)*(int *)(lVar1 + 0x18) <= (long)uVar3) {
        return 1;
      }
      lVar1 = FUN_033dac88();
      if (lVar1 == 0) break;
      if (*(uint *)(lVar1 + 0x18) <= uVar3) {
LAB_02cbe868:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      fVar5 = *(float *)(lVar1 + lVar2 + 0x20);
      fVar4 = *(float *)(lVar1 + lVar2 + 0x24);
      lVar1 = FUN_033dac88();
      if (lVar1 == 0) break;
      if (*(uint *)(lVar1 + 0x18) <= uVar3) goto LAB_02cbe868;
      if ((fVar5 != *(float *)(lVar1 + lVar2 + 0x20)) || (fVar4 != *(float *)(lVar1 + lVar2 + 0x24))
         ) {
        return 0;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 8;
      lVar1 = FUN_033dac88();
    } while (lVar1 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


