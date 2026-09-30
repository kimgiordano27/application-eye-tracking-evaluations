/*
FUNCTION_NAME: OVRManager$$get_headPoseRelativeOffsetRotation
ENTRY_POINT: 05d643fc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_headPoseRelativeOffsetRotation(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *plVar6;
  long unaff_x21;
  
  thunk_FUN_032e1da0(*(undefined8 *)(param_1 + 0xe10));
  thunk_FUN_032e1da0(PTR_DAT_072b1110);
  thunk_FUN_032e1da0(PTR_DAT_072b1108);
  *(undefined1 *)(unaff_x19 + 0x614) = 1;
  if (*(char *)(unaff_x21 + 0x5c) == '\0') {
    return;
  }
  plVar6 = *(long **)(unaff_x21 + 0x50);
  uVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727ee10);
  FUN_0589e07c();
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_072b1108) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0xb) * 0x10 + 0x138);
        goto LAB_05d644c4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_032937ac(plVar6,*(long *)PTR_DAT_072b1108,0xb);
LAB_05d644c4:
                    /* WARNING: Could not recover jumptable at 0x05d644d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar6,uVar1,puVar2[1]);
  return;
}


