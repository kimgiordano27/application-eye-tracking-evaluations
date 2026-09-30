/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetDeviceToAbsoluteTrackingPose$$EndInvoke
ENTRY_POINT: 02cbe8a8
PROGRAM: sharks-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetDeviceToAbsoluteTrackingPose__EndInvoke(void)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  *(undefined1 *)(unaff_x21 + 0x396) = 1;
  if (((unaff_x20 != 0) && (lVar3 = FUN_033dac08(), lVar3 != 0)) &&
     (lVar3 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_0380f440,*(undefined4 *)(lVar3 + 0x18)),
     lVar3 != 0)) {
    if (0 < *(int *)(lVar3 + 0x18)) {
      lVar5 = 0;
      uVar6 = 0;
      do {
        lVar4 = FUN_033dac08();
        if (lVar4 == 0) goto LAB_02cbea68;
        if ((*(uint *)(lVar4 + 0x18) <= uVar6) || (*(uint *)(lVar3 + 0x18) <= uVar6))
        goto LAB_02cbea64;
        uVar7 = *(undefined8 *)(lVar4 + lVar5 + 0x20);
        *(undefined8 *)(lVar3 + lVar5 + 0x28) = *(undefined8 *)(lVar4 + lVar5 + 0x28);
        *(undefined8 *)(lVar3 + lVar5 + 0x20) = uVar7;
        lVar4 = FUN_033dac08();
        if (lVar4 == 0) goto LAB_02cbea68;
        if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_02cbea64;
        uVar2 = *(uint *)(lVar3 + 0x18);
        if (uVar2 <= uVar6) goto LAB_02cbea64;
        lVar4 = lVar4 + lVar5;
        uVar6 = uVar6 + 1;
        lVar1 = lVar3 + lVar5;
        lVar5 = lVar5 + 0x14;
        *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)(lVar4 + 0x30);
      } while ((long)uVar6 < (long)(int)uVar2);
    }
    lVar3 = FUN_033dac88();
    if ((lVar3 != 0) &&
       (lVar3 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_0380f438,*(undefined4 *)(lVar3 + 0x18)),
       lVar3 != 0)) {
      if (0 < *(int *)(lVar3 + 0x18)) {
        lVar5 = 0;
        uVar6 = 0;
        do {
          lVar4 = FUN_033dac88();
          if (lVar4 == 0) goto LAB_02cbea68;
          if ((*(uint *)(lVar4 + 0x18) <= uVar6) || (*(uint *)(lVar3 + 0x18) <= uVar6)) {
LAB_02cbea64:
                    /* WARNING: Subroutine does not return */
            FUN_017fc5b0();
          }
          *(undefined4 *)(lVar3 + lVar5 + 0x20) = *(undefined4 *)(lVar4 + lVar5 + 0x20);
          lVar4 = FUN_033dac88();
          if (lVar4 == 0) goto LAB_02cbea68;
          if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_02cbea64;
          uVar2 = *(uint *)(lVar3 + 0x18);
          if (uVar2 <= uVar6) goto LAB_02cbea64;
          lVar4 = lVar4 + lVar5;
          uVar6 = uVar6 + 1;
          lVar1 = lVar3 + lVar5;
          lVar5 = lVar5 + 8;
          *(undefined4 *)(lVar1 + 0x24) = *(undefined4 *)(lVar4 + 0x24);
        } while ((long)uVar6 < (long)(int)uVar2);
      }
      if (unaff_x19 != 0) {
        FUN_033dad08();
        return;
      }
    }
  }
LAB_02cbea68:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


