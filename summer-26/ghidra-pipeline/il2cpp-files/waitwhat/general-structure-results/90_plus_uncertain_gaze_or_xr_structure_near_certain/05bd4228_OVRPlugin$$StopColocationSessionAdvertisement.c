/*
FUNCTION_NAME: OVRPlugin$$StopColocationSessionAdvertisement
ENTRY_POINT: 05bd4228
PROGRAM: waitwhat-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__StopColocationSessionAdvertisement
               (long param_1,undefined1 param_2 [16],float param_3,float param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  long lVar5;
  long *unaff_x21;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_s8;
  ulong uStack0000000000000020;
  undefined8 uStack0000000000000028;
  float in_stack_00000030;
  float in_stack_00000040;
  undefined8 in_stack_00000078;
  float in_stack_00000080;
  
  uStack0000000000000020 = (ulong)*(uint *)(unaff_x19 + 6);
  uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
  uStack0000000000000028 = 0;
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *unaff_x21) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar4 + 1) * 0x10 + 0x138);
        goto LAB_05bd4284;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_031c0d08();
LAB_05bd4284:
  (*(code *)*puVar1)();
  fVar6 = (float)FUN_05bd4578();
  if (DAT_075457b7 == '\0') {
    FUN_03188a78(PTR_DAT_070c22f8);
    DAT_075457b7 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_070c22f8 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  if (0 < (int)unaff_x19[10]) {
    lVar5 = 0;
    uVar3 = 0;
    fVar9 = (float)uStack0000000000000020;
    fVar11 = (float)in_stack_00000078 + in_stack_00000040 * fVar9;
    fVar12 = (float)((ulong)in_stack_00000078 >> 0x20) + in_stack_00000030 * fVar9;
    in_stack_00000080 = in_stack_00000080 + unaff_s8 * fVar9;
    fVar6 = SQRT((in_stack_00000080 - param_4) * (in_stack_00000080 - param_4) +
                 (fVar11 - fVar6) * (fVar11 - fVar6) + (fVar12 - param_3) * (fVar12 - param_3));
    fVar9 = fVar12 + in_stack_00000030 * fVar6 * 0.5;
    do {
      fVar8 = fVar12;
      fVar10 = in_stack_00000080;
      uVar7 = FUN_05bd479c(CONCAT44(fVar12,fVar11),fVar12,in_stack_00000080,
                           CONCAT44(fVar9,fVar11 + in_stack_00000040 * fVar6 * 0.5),fVar9,
                           in_stack_00000080 + unaff_s8 * fVar6 * 0.5);
      lVar2 = unaff_x19[7];
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      if (*(uint *)(lVar2 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      lVar2 = lVar2 + lVar5;
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + 0xc;
      *(undefined4 *)(lVar2 + 0x20) = uVar7;
      *(float *)(lVar2 + 0x24) = fVar8;
      *(float *)(lVar2 + 0x28) = fVar10;
    } while ((long)uVar3 < (long)(int)unaff_x19[10]);
  }
  (**(code **)(*unaff_x19 + 0x1c8))();
  return;
}


