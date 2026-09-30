/*
FUNCTION_NAME: OVRPlugin.BodyJointLocation$$get_PositionValid
ENTRY_POINT: 07c9c074
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin_BodyJointLocation__get_PositionValid(void)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *plVar6;
  
  *(undefined1 *)(unaff_x20 + 0x992) = 1;
  plVar6 = *(long **)(unaff_x19 + 0x28);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_09f4d1c0) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 3) * 0x10 + 0x138);
        goto LAB_07c9c0dc;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_044822ac(plVar6,*(long *)PTR_DAT_09f4d1c0,3);
LAB_07c9c0dc:
  bVar1 = (*(code *)*puVar2)(plVar6,puVar2[1]);
  lVar3 = 0x28;
  if (*(byte *)(unaff_x19 + 0x40) != (bVar1 & 1)) {
    lVar3 = 0x38;
  }
  return *(undefined8 *)(unaff_x19 + lVar3);
}


