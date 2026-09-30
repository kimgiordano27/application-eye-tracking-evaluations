/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingSeatedZeroPoseToRawTrackingPose$$EndInvoke
ENTRY_POINT: 068f052c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure
*/


/* WARNING: Removing unreachable block (ram,0x068f06b0) */

void OVR_OpenVR_IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose__EndInvoke
               (long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long in_x9;
  long lVar5;
  undefined1 (*pauVar6) [16];
  int *piVar7;
  long lVar8;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined1 auVar9 [16];
  long *in_stack_00000018;
  
code_r0x068f052c:
  puVar3 = (undefined8 *)(param_1 + in_x9 * 0x10 + 0x138);
  while (uVar2 = (*(code *)*puVar3)(unaff_x20,puVar3[1]), (uVar2 & 1) != 0) {
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar4 = *in_stack_00000018;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x22) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_068f0598;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_03ac43c4(in_stack_00000018,*unaff_x22,0);
LAB_068f0598:
    auVar9 = (*(code *)*puVar3)(in_stack_00000018,puVar3[1]);
    lVar4 = *unaff_x19;
    if (lVar4 == 0) {
OVR_OpenVR_IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose__EndInvoke:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar5 = *(long *)(lVar4 + 0x10);
    lVar8 = *unaff_x23;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar5 == 0)
    goto OVR_OpenVR_IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose__EndInvoke;
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
      pauVar6 = (undefined1 (*) [16])(lVar5 + (long)(int)uVar1 * 0x10 + 0x20);
      *pauVar6 = auVar9;
      thunk_FUN_03afed3c(pauVar6,0);
    }
    else {
      FUN_04fdf748(lVar4,auVar9._0_8_,auVar9._8_8_,
                   *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    param_1 = *in_stack_00000018;
    uVar2 = (ulong)*(ushort *)(param_1 + 0x12e);
    unaff_x20 = in_stack_00000018;
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x21) {
          in_x9 = (long)*piVar7;
          goto code_r0x068f052c;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_03ac43c4(in_stack_00000018,*unaff_x21,0);
  }
  if (in_stack_00000018 != (long *)0x0) {
    lVar4 = *in_stack_00000018;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08488550) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_068f0680;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_03ac43c4(in_stack_00000018,*(long *)PTR_DAT_08488550,0);
LAB_068f0680:
    (*(code *)*puVar3)(in_stack_00000018,puVar3[1]);
  }
  return;
}


