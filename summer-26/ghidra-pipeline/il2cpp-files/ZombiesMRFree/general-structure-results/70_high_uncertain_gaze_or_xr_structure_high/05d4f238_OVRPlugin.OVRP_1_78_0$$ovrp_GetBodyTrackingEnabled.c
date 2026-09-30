/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetBodyTrackingEnabled
ENTRY_POINT: 05d4f238
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_4;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetBodyTrackingEnabled(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  float fVar5;
  float unaff_s8;
  
  uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar4 + 1) * 0x10 + 0x138);
        goto LAB_05d4f2ac;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02feb5b8();
LAB_05d4f2ac:
  fVar5 = (float)(*(code *)*puVar1)();
  if (DAT_0738e666 == '\0') {
    FUN_02fe925c(PTR_DAT_06f6d5d8);
    DAT_0738e666 = '\x01';
  }
  if (param_2 != 0) {
    fVar5 = fVar5 / unaff_s8;
    lVar2 = *(long *)(*(long *)PTR_DAT_06f6d5d8 + 0xb8);
    FUN_06904aa4(fVar5 * *(float *)(lVar2 + 0xc),fVar5 * *(float *)(lVar2 + 0x10),
                 fVar5 * *(float *)(lVar2 + 0x14),param_2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


