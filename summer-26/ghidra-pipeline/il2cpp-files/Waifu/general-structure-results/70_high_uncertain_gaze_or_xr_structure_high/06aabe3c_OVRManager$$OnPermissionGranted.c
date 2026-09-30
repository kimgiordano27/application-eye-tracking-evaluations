/*
FUNCTION_NAME: OVRManager$$OnPermissionGranted
ENTRY_POINT: 06aabe3c
PROGRAM: Waifu-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_permission_setup
*/


void OVRManager__OnPermissionGranted
               (undefined4 *param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
               undefined4 param_5,long param_6,undefined4 *param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if ((DAT_086e2133 & 1) == 0) {
    FUN_0335b6c8(&DAT_083cf7d8,1);
    DataMemoryBarrier(2,3);
    DAT_086e2133 = 1;
  }
  uVar3 = *param_7;
  uVar4 = param_7[1];
  uVar5 = param_7[2];
  uVar6 = param_7[3];
  uVar7 = param_7[4];
  uVar8 = param_7[5];
  uVar9 = param_7[6];
  uVar2 = *(undefined8 *)(param_6 + 0xd8);
  if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar1 = FUN_07a0d2c4(uVar2,0,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_6 + 0xd8) != 0) {
      uVar5 = param_4;
      uVar4 = param_3;
      uVar9 = param_5;
      uVar3 = FUN_07a18d2c(*(long *)(param_6 + 0xd8),0);
      if (*(long *)(param_6 + 0xd8) != 0) {
        uVar7 = uVar4;
        uVar8 = uVar5;
        uVar6 = FUN_07a172b0(*(long *)(param_6 + 0xd8),0);
        goto LAB_06aabef4;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
LAB_06aabef4:
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  param_1[4] = uVar7;
  param_1[5] = uVar8;
  param_1[6] = uVar9;
  return;
}


