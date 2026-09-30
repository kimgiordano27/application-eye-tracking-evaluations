/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingSeatedZeroPoseToRawTrackingPose$$Invoke
ENTRY_POINT: 05cc4be4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


float OVR_OpenVR_IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose__Invoke
                (ulong param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  long unaff_x20;
  float unaff_s8;
  float fStack0000000000000004;
  undefined4 uStack000000000000000c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  
  fStack0000000000000020 = param_2;
  fStack0000000000000024 = param_3;
  fStack0000000000000028 = param_4;
  if ((param_1 & 1) == 0) {
    FUN_02fe925c(PTR_DAT_06fb59f8);
    *(undefined1 *)(unaff_x20 + 0x59a) = 1;
  }
  fStack0000000000000004 = 0.0;
  uStack000000000000000c = 0;
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  lVar6 = *unaff_x19;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_06fb59f8) {
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
        goto LAB_05cc4c6c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_02feb5b8();
LAB_05cc4c6c:
  (*(code *)*puVar5)(0);
  fVar4 = fStack0000000000000028;
  fVar3 = fStack0000000000000024;
  fVar2 = fStack0000000000000020;
  fVar1 = fStack0000000000000004;
  if (DAT_0738e6c8 == '\0') {
    FUN_02fe925c(PTR_DAT_06f6d508);
    DAT_0738e6c8 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_06f6d508 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  return SQRT((fVar2 - 0.0) * (fVar2 - 0.0) + (fVar3 - fVar1) * (fVar3 - fVar1) +
              (fVar4 - 0.0) * (fVar4 - 0.0)) - unaff_s8;
}


