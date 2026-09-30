/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingSeatedZeroPoseToRawTrackingPose$$EndInvoke
ENTRY_POINT: 05d2b478
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose__EndInvoke
               (long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *in_x10;
  int *piVar7;
  long unaff_x19;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar6 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *in_x10) {
        puVar3 = (undefined8 *)(param_1 + (long)(*piVar7 + 6) * 0x10 + 0x138);
        goto LAB_05d2b4c4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_032937ac();
LAB_05d2b4c4:
  uVar1 = (*(code *)*puVar3)();
  switch(uVar1) {
  case 0:
    plVar4 = *(long **)(unaff_x19 + 0x38);
    if (plVar4 == (long *)0x0) goto LAB_05d2b5cc;
    lVar5 = *plVar4;
    uVar9 = *(undefined4 *)(unaff_x19 + 0x68);
    uVar10 = *(undefined4 *)(unaff_x19 + 0x6c);
    uVar1 = *(undefined4 *)(unaff_x19 + 0x60);
    uVar8 = *(undefined4 *)(unaff_x19 + 100);
    break;
  case 1:
    plVar4 = *(long **)(unaff_x19 + 0x38);
    if (plVar4 == (long *)0x0) goto LAB_05d2b5cc;
    lVar5 = *plVar4;
    uVar9 = *(undefined4 *)(unaff_x19 + 0x58);
    uVar10 = *(undefined4 *)(unaff_x19 + 0x5c);
    uVar1 = *(undefined4 *)(unaff_x19 + 0x50);
    uVar8 = *(undefined4 *)(unaff_x19 + 0x54);
    break;
  case 2:
    plVar4 = *(long **)(unaff_x19 + 0x38);
    if (plVar4 == (long *)0x0) goto LAB_05d2b5cc;
    lVar5 = *plVar4;
    uVar9 = *(undefined4 *)(unaff_x19 + 0x48);
    uVar10 = *(undefined4 *)(unaff_x19 + 0x4c);
    uVar1 = *(undefined4 *)(unaff_x19 + 0x40);
    uVar8 = *(undefined4 *)(unaff_x19 + 0x44);
    break;
  case 3:
    plVar4 = *(long **)(unaff_x19 + 0x38);
    if (plVar4 == (long *)0x0) goto LAB_05d2b5cc;
    lVar5 = *plVar4;
    uVar9 = *(undefined4 *)(unaff_x19 + 0x78);
    uVar10 = *(undefined4 *)(unaff_x19 + 0x7c);
    uVar1 = *(undefined4 *)(unaff_x19 + 0x70);
    uVar8 = *(undefined4 *)(unaff_x19 + 0x74);
    break;
  default:
    goto switchD_05d2b4f0_default;
  }
  (**(code **)(lVar5 + 0x2a8))(uVar1,uVar8,uVar9,uVar10,plVar4,*(undefined8 *)(lVar5 + 0x2b0));
switchD_05d2b4f0_default:
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    lVar5 = FUN_06be6b40(*(long *)(unaff_x19 + 0x20),0);
    if ((*(long *)(unaff_x19 + 0x20) != 0) &&
       (iVar2 = FUN_06bf612c(*(long *)(unaff_x19 + 0x20),0), lVar5 != 0)) {
      FUN_06be9a98(lVar5,0 < iVar2,0);
      if ((*(long *)(unaff_x19 + 0x28) != 0) &&
         (lVar5 = FUN_06be6b40(*(long *)(unaff_x19 + 0x28),0), lVar5 != 0)) {
        FUN_06be9a98(lVar5,*(char *)(unaff_x19 + 0x88) == '\0',0);
        return;
      }
    }
  }
LAB_05d2b5cc:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


