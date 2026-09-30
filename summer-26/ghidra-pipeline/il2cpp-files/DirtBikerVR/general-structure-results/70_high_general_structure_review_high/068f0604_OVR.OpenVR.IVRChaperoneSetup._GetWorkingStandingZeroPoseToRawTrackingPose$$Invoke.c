/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingStandingZeroPoseToRawTrackingPose$$Invoke
ENTRY_POINT: 068f0604
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

void OVR_OpenVR_IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose__Invoke
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined1 (*pauVar5) [16];
  long in_x9;
  long lVar6;
  int *piVar7;
  long *unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined1 auVar8 [16];
  long *in_stack_00000018;
  
  auVar8._8_8_ = param_4;
  auVar8._0_8_ = param_1;
code_r0x068f0604:
  FUN_04fdf748(param_2,auVar8._0_8_,auVar8._8_8_,*(undefined8 *)(in_x9 + 0x70));
  do {
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar3 = *in_stack_00000018;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x21) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_068f0534;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03ac43c4(in_stack_00000018,*unaff_x21,0);
LAB_068f0534:
    uVar4 = (*(code *)*puVar2)(in_stack_00000018,puVar2[1]);
    if ((uVar4 & 1) == 0) {
      if (in_stack_00000018 == (long *)0x0) {
        return;
      }
      lVar3 = *in_stack_00000018;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 == 0) goto LAB_068f0664;
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      goto LAB_068f064c;
    }
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar3 = *in_stack_00000018;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x22) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_068f0598;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_03ac43c4(in_stack_00000018,*unaff_x22,0);
LAB_068f0598:
    auVar8 = (*(code *)*puVar2)(in_stack_00000018,puVar2[1]);
    param_2 = *unaff_x19;
    if (param_2 == 0) {
OVR_OpenVR_IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose__EndInvoke:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar3 = *(long *)(param_2 + 0x10);
    lVar6 = *unaff_x23;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    if (lVar3 == 0)
    goto OVR_OpenVR_IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose__EndInvoke;
    uVar1 = *(uint *)(param_2 + 0x18);
    if (*(uint *)(lVar3 + 0x18) <= uVar1) break;
    *(uint *)(param_2 + 0x18) = uVar1 + 1;
    pauVar5 = (undefined1 (*) [16])(lVar3 + (long)(int)uVar1 * 0x10 + 0x20);
    *pauVar5 = auVar8;
    thunk_FUN_03afed3c(pauVar5,0);
  } while( true );
  in_x9 = *(long *)(*(long *)(lVar6 + 0x20) + 0xc0);
  goto code_r0x068f0604;
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar7 = piVar7 + 4;
    if (uVar4 == 0) break;
LAB_068f064c:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_08488550) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_068f0680;
    }
  }
LAB_068f0664:
  puVar2 = (undefined8 *)FUN_03ac43c4(in_stack_00000018,*(long *)PTR_DAT_08488550,0);
LAB_068f0680:
  (*(code *)*puVar2)(in_stack_00000018,puVar2[1]);
  return;
}


