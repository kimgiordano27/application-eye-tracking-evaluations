/*
FUNCTION_NAME: OVRCameraRig$$set_leftEyeAnchor
ENTRY_POINT: 079cb9e0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_possible_biometrics_hits_2
*/


void OVRCameraRig__set_leftEyeAnchor(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((*(byte *)(unaff_x21 + 0xe32) & 1) == 0) {
    FUN_04077588(PTR_DAT_092babe0);
    FUN_04077588(PTR_DAT_092ee8a0);
    FUN_04077588(PTR_DAT_092babf0);
    *(undefined1 *)(unaff_x21 + 0xe32) = 1;
  }
  if (*(char *)(unaff_x19 + 0x80) != '\0') {
    plVar6 = *(long **)(unaff_x19 + 0x20);
    uVar1 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092babe0);
    FUN_06e5c0a8();
    if (plVar6 == (long *)0x0) goto LAB_079cbb40;
    lVar3 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_092babf0) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto OVRCameraRig__get_trackerAnchor;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_040b1e00(plVar6,*(long *)PTR_DAT_092babf0,1);
OVRCameraRig__get_trackerAnchor:
    (*(code *)*puVar2)(plVar6,uVar1,puVar2[1]);
    *(undefined1 *)(unaff_x19 + 0x80) = 0;
  }
  uVar1 = unaff_x20[2];
  uVar8 = unaff_x20[1];
  uVar7 = *unaff_x20;
  *(undefined4 *)(unaff_x19 + 0x7c) = *(undefined4 *)(unaff_x20 + 3);
  *(undefined8 *)(unaff_x19 + 0x74) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x6c) = uVar8;
  *(undefined8 *)(unaff_x19 + 100) = uVar7;
  if ((*(long *)(unaff_x19 + 0x40) == 0) ||
     (uVar4 = FUN_079abb94(*(long *)(unaff_x19 + 0x40),0), (uVar4 & 1) != 0)) {
    return;
  }
  FUN_079cbb44();
  FUN_079cbb44();
  lVar3 = *(long *)(unaff_x19 + 0x30);
  *(undefined1 *)(unaff_x19 + 0x28) = 1;
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x079cbb3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40));
    return;
  }
LAB_079cbb40:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


