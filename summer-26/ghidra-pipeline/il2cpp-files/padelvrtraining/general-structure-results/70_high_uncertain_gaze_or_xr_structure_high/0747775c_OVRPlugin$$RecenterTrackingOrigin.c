/*
FUNCTION_NAME: OVRPlugin$$RecenterTrackingOrigin
ENTRY_POINT: 0747775c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


long * OVRPlugin__RecenterTrackingOrigin(ulong param_1,long param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_091f9680);
    FUN_03d2d2b0(PTR_DAT_09223478);
    *(undefined1 *)(unaff_x20 + 0x8f8) = 1;
  }
  plVar6 = *(long **)(param_2 + 0x40);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_09223478) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
        goto LAB_074777e4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_03d8f370(plVar6,*(long *)PTR_DAT_09223478,2);
LAB_074777e4:
  plVar6 = (long *)(*(code *)*puVar2)(plVar6,puVar2[1]);
  if (plVar6 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_091f9680 + 0x130);
    if (*(byte *)(*plVar6 + 0x130) < bVar1) {
      plVar6 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
             *(long *)PTR_DAT_091f9680) {
      plVar6 = (long *)0x0;
    }
  }
  return plVar6;
}


