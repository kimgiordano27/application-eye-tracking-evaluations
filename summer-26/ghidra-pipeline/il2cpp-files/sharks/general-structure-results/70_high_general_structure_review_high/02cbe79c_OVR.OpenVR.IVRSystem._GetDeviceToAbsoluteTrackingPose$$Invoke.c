/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetDeviceToAbsoluteTrackingPose$$Invoke
ENTRY_POINT: 02cbe79c
PROGRAM: sharks-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


undefined8 OVR_OpenVR_IVRSystem__GetDeviceToAbsoluteTrackingPose__Invoke(void)

{
  long lVar1;
  long unaff_x21;
  long lVar2;
  ulong unaff_x22;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s8;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  while( true ) {
    unaff_x21 = unaff_x21 + 0x14;
    lVar1 = FUN_033dac08();
    if (lVar1 == 0) break;
    if ((long)*(int *)(lVar1 + 0x18) <= (long)unaff_x22) {
      lVar1 = FUN_033dac88();
      if (lVar1 != 0) {
        lVar2 = 0;
        uVar3 = 0;
        goto LAB_02cbe7c0;
      }
      break;
    }
    lVar1 = FUN_033dac08();
    if (lVar1 == 0) break;
    if (*(uint *)(lVar1 + 0x18) <= unaff_x22) goto LAB_02cbe868;
    lVar1 = lVar1 + unaff_x21;
    uVar9 = *(undefined8 *)(lVar1 + 0x20);
    uVar10 = *(undefined8 *)(lVar1 + 0x28);
    fVar8 = *(float *)(lVar1 + 0x30);
    lVar1 = FUN_033dac08();
    if (lVar1 == 0) break;
    if (*(uint *)(lVar1 + 0x18) <= unaff_x22) goto LAB_02cbe868;
    lVar1 = lVar1 + unaff_x21;
    fVar4 = (float)uVar9 - (float)*(undefined8 *)(lVar1 + 0x20);
    fVar5 = (float)((ulong)uVar9 >> 0x20) - (float)((ulong)*(undefined8 *)(lVar1 + 0x20) >> 0x20);
    fVar6 = (float)uVar10 - (float)*(undefined8 *)(lVar1 + 0x28);
    fVar7 = (float)((ulong)uVar10 >> 0x20) - (float)((ulong)*(undefined8 *)(lVar1 + 0x28) >> 0x20);
    if (unaff_s8 <= fVar7 * fVar7 + fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5) {
      return 0;
    }
    if (fVar8 != *(float *)(lVar1 + 0x30)) {
      return 0;
    }
    unaff_x22 = unaff_x22 + 1;
  }
  goto LAB_02cbe840;
LAB_02cbe7c0:
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
    fVar4 = *(float *)(lVar1 + lVar2 + 0x20);
    fVar8 = *(float *)(lVar1 + lVar2 + 0x24);
    lVar1 = FUN_033dac88();
    if (lVar1 == 0) break;
    if (*(uint *)(lVar1 + 0x18) <= uVar3) goto LAB_02cbe868;
    if ((fVar4 != *(float *)(lVar1 + lVar2 + 0x20)) || (fVar8 != *(float *)(lVar1 + lVar2 + 0x24)))
    {
      return 0;
    }
    uVar3 = uVar3 + 1;
    lVar2 = lVar2 + 8;
    lVar1 = FUN_033dac88();
  } while (lVar1 != 0);
LAB_02cbe840:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


