/*
FUNCTION_NAME: OVRPlugin.OVRP_1_99_0$$ovrp_SetTrackingPoseEnabledForInvisibleSession
ENTRY_POINT: 01dbece4
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01dbee04) */
/* WARNING: Removing unreachable block (ram,0x01dbee80) */
/* WARNING: Removing unreachable block (ram,0x01dbee1c) */
/* WARNING: Removing unreachable block (ram,0x01dbee20) */
/* WARNING: Removing unreachable block (ram,0x01dbeee0) */

void OVRPlugin_OVRP_1_99_0__ovrp_SetTrackingPoseEnabledForInvisibleSession(code *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x24;
  
  while (uVar1 = (*param_1)(), (uVar1 & 1) != 0) {
    lVar4 = *unaff_x22;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_01dbed38;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_0103c348();
LAB_01dbed38:
    uVar3 = (*(code *)*puVar2)();
    uVar3 = FUN_01cbc26c(uVar3,0);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534(uVar3,uVar3);
    }
    FUN_018986f0();
    lVar4 = *unaff_x22;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_01dbecdc;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_0103c348();
LAB_01dbecdc:
    param_1 = (code *)*puVar2;
  }
  if (unaff_x22 != (long *)0x0) {
    lVar4 = *unaff_x22;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0234bef0) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_01dbedf0;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_0103c348();
LAB_01dbedf0:
    (*(code *)*puVar2)();
  }
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  if (*(int *)(unaff_x21 + 0x18) < 1) {
    return;
  }
  FUN_01dbf024();
  return;
}


