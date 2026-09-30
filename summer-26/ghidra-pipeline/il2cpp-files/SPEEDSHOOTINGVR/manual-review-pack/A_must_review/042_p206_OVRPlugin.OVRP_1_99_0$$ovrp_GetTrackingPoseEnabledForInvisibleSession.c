/*
FUNCTION_NAME: OVRPlugin.OVRP_1_99_0$$ovrp_GetTrackingPoseEnabledForInvisibleSession
ENTRY_POINT: 01dbec68
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_7;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01dbee04) */
/* WARNING: Removing unreachable block (ram,0x01dbee80) */
/* WARNING: Removing unreachable block (ram,0x01dbee1c) */
/* WARNING: Removing unreachable block (ram,0x01dbee20) */
/* WARNING: Removing unreachable block (ram,0x01dbeee0) */

void OVRPlugin_OVRP_1_99_0__ovrp_GetTrackingPoseEnabledForInvisibleSession(code *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x21;
  
  plVar3 = (long *)(*param_1)();
  puVar2 = PTR_DAT_0235a998;
  puVar1 = PTR_DAT_0234bef8;
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  do {
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_01dbecdc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_0103c348(plVar3,*(long *)puVar1,0);
LAB_01dbecdc:
    uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar3 == (long *)0x0) goto LAB_01dbedfc;
      lVar6 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_01dbeda8;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_01dbed38;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_0103c348(plVar3,*(long *)puVar2,0);
LAB_01dbed38:
    uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    uVar5 = FUN_01cbc26c(uVar5,0);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534(uVar5,uVar5);
    }
    FUN_018986f0();
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0234bef0) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_01dbedf0;
    }
  }
LAB_01dbeda8:
  puVar4 = (undefined8 *)FUN_0103c348(plVar3,*(long *)PTR_DAT_0234bef0,0);
LAB_01dbedf0:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
LAB_01dbedfc:
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  if (0 < *(int *)(unaff_x21 + 0x18)) {
    FUN_01dbf024();
    return;
  }
  return;
}


