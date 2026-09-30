/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingSeatedZeroPoseToRawTrackingPose$$Invoke
ENTRY_POINT: 06b8ad04
PROGRAM: Waifu-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose__Invoke(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x19;
  long unaff_x21;
  undefined1 unaff_w22;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  *(undefined1 *)(unaff_x21 + 0x6f3) = unaff_w22;
  uVar4 = DAT_083bcb88;
  if (*(int *)(DAT_083d23b8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  FUN_0683eca4(uVar4,0);
  if (*(int *)(DAT_083ce7b0 + 0xe0) == 0) {
    FUN_033b9870(DAT_083ce7b0);
  }
  plVar5 = (long *)FUN_033392e4();
  if (plVar5 != (long *)0x0) {
    if (*(long *)(*plVar5 + 0x40) == *(long *)(DAT_083cd418 + 0x40)) {
      lVar9 = plVar5[5];
      lVar8 = plVar5[4];
      lVar7 = plVar5[7];
      lVar6 = plVar5[6];
      lVar11 = plVar5[3];
      lVar10 = plVar5[2];
      *(long *)(unaff_x19 + 0x40) = plVar5[8];
      *(long *)(unaff_x19 + 0x28) = lVar9;
      *(long *)(unaff_x19 + 0x20) = lVar8;
      *(long *)(unaff_x19 + 0x38) = lVar7;
      *(long *)(unaff_x19 + 0x30) = lVar6;
      *(long *)(unaff_x19 + 0x18) = lVar11;
      *(long *)(unaff_x19 + 0x10) = lVar10;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + (unaff_x19 + 0x10U >> 0x12 & 0x7fff);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << (unaff_x19 + 0x10U >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_033d1fec();
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


