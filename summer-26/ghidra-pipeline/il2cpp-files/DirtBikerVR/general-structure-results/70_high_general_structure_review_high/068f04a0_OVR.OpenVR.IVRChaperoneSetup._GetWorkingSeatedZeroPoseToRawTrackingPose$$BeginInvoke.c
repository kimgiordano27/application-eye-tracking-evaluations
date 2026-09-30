/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingSeatedZeroPoseToRawTrackingPose$$BeginInvoke
ENTRY_POINT: 068f04a0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure
*/


/* WARNING: Removing unreachable block (ram,0x068f06b0) */

void OVR_OpenVR_IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose__BeginInvoke
               (undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined1 (*pauVar10) [16];
  long lVar11;
  int *piVar12;
  long *unaff_x19;
  undefined1 auVar13 [16];
  
  plVar5 = (long *)(*(code *)*param_1)();
  puVar4 = PTR_DAT_084b3a18;
  puVar3 = PTR_DAT_084b3a10;
  puVar2 = PTR_DAT_08488568;
  do {
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_068f0534;
        }
        uVar8 = uVar8 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_03ac43c4(plVar5,*(long *)puVar2,0);
LAB_068f0534:
    uVar8 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar7 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 == 0) goto LAB_068f0664;
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_068f0598;
        }
        uVar8 = uVar8 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_03ac43c4(plVar5,*(long *)puVar3,0);
LAB_068f0598:
    auVar13 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    lVar7 = *unaff_x19;
    if (lVar7 == 0) {
OVR_OpenVR_IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose__EndInvoke:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar9 = *(long *)(lVar7 + 0x10);
    lVar11 = *(long *)puVar4;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar9 == 0)
    goto OVR_OpenVR_IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose__EndInvoke;
    uVar1 = *(uint *)(lVar7 + 0x18);
    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
      pauVar10 = (undefined1 (*) [16])(lVar9 + (long)(int)uVar1 * 0x10 + 0x20);
      *pauVar10 = auVar13;
      thunk_FUN_03afed3c(pauVar10,0);
    }
    else {
      FUN_04fdf748(lVar7,auVar13._0_8_,auVar13._8_8_,
                   *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar12 = piVar12 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_08488550) {
      puVar6 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_068f0680;
    }
  }
LAB_068f0664:
  puVar6 = (undefined8 *)FUN_03ac43c4(plVar5,*(long *)PTR_DAT_08488550,0);
LAB_068f0680:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}


