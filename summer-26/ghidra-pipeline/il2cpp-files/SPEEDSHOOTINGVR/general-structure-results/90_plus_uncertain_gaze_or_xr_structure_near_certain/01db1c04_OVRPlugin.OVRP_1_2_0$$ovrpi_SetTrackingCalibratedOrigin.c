/*
FUNCTION_NAME: OVRPlugin.OVRP_1_2_0$$ovrpi_SetTrackingCalibratedOrigin
ENTRY_POINT: 01db1c04
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_2_0__ovrpi_SetTrackingCalibratedOrigin(void)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lVar7;
  long *unaff_x23;
  uint uVar8;
  int iVar9;
  long unaff_x24;
  long unaff_x25;
  
  while ((thunk_FUN_00ffe618(), unaff_x25 != 0 &&
         (uVar3 = FUN_01db21a8(unaff_x24), (uVar3 & 1) != 0))) {
    thunk_FUN_00ffe618();
    thunk_FUN_00ffe618();
    FUN_00ff754c();
    unaff_x24 = *unaff_x23;
    thunk_FUN_00ffe618();
    if (unaff_x24 == 0) goto LAB_01db1d34;
    uVar3 = FUN_01db2054(unaff_x24);
    if ((uVar3 & 1) != 0) break;
    unaff_x25 = *(long *)(unaff_x24 + 0x20);
  }
  puVar1 = PTR_DAT_0235a438;
  if (*unaff_x20 == 0) {
    lVar4 = *(long *)PTR_DAT_0235a438;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01022c14();
      lVar4 = *(long *)puVar1;
    }
    if (((**(long **)(lVar4 + 0xb8) == 0) ||
        (lVar4 = FUN_01a36cc4(**(long **)(lVar4 + 0xb8),*(undefined8 *)PTR_DAT_0235a468), lVar4 == 0
        )) || (plVar5 = *(long **)(unaff_x22 + 0x20), plVar5 == (long *)0x0)) {
LAB_01db1d34:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    iVar2 = (**(code **)(*plVar5 + 0x1a8))
                      (plVar5,*(undefined4 *)(lVar4 + 0x18),*(undefined8 *)(*plVar5 + 0x1b0));
    uVar3 = *(ulong *)(lVar4 + 0x18);
    uVar8 = (uint)uVar3;
    if (0 < (int)uVar8) {
      iVar9 = 0;
      if (uVar8 != 0) {
        iVar9 = iVar2 / (int)uVar8;
      }
      uVar6 = iVar2 - iVar9 * uVar8;
      if (uVar6 < uVar8) {
        do {
          iVar2 = iVar2 + 1;
          lVar7 = *(long *)(lVar4 + (long)(int)uVar6 * 8 + 0x20);
          thunk_FUN_00ffe618();
          iVar9 = (int)uVar3;
          if ((lVar7 == 0) || (lVar7 == unaff_x21)) {
            if (iVar9 < 2) {
              return;
            }
          }
          else {
            uVar3 = FUN_01db26f0(lVar7);
            if (iVar9 < 2) {
              return;
            }
            if ((uVar3 & 1) != 0) {
              return;
            }
          }
          uVar8 = *(uint *)(lVar4 + 0x18);
          uVar3 = (ulong)(iVar9 - 1);
          iVar9 = 0;
          if (uVar8 != 0) {
            iVar9 = iVar2 / (int)uVar8;
          }
          uVar6 = iVar2 - iVar9 * uVar8;
        } while (uVar6 < uVar8);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
  }
  return;
}


