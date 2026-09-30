/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingStandingZeroPoseToRawTrackingPose$$EndInvoke
ENTRY_POINT: 05fbb9f4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose__EndInvoke(void)

{
  undefined4 uVar1;
  byte bVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *plVar7;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  
  uStack0000000000000030 = 0;
  uStack0000000000000034 = 0;
  plVar7 = *(long **)(unaff_x19 + 0x28);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  lVar4 = *plVar7;
  uVar1 = *(undefined4 *)(unaff_x19 + 0x40);
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_075f2fc8) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 9) * 0x10 + 0x138);
        goto LAB_05fbba5c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_0322c1e8(plVar7,*(long *)PTR_DAT_075f2fc8,9);
LAB_05fbba5c:
  uVar5 = (*(code *)*puVar3)(plVar7,uVar1,&stack0x00000020,puVar3[1]);
  if ((uVar5 & 1) == 0) {
    bVar2 = 0;
  }
  else {
    uStack0000000000000014 = CONCAT44(in_stack_00000038,uStack0000000000000034);
    bVar2 = FUN_05fbbab4();
    bVar2 = bVar2 & 1;
  }
  *(byte *)(unaff_x19 + 0x44) = bVar2;
  return;
}


