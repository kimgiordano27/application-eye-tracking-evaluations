/*
FUNCTION_NAME: OVRCameraRig$$get_leftEyeAnchor
ENTRY_POINT: 079cb9d8
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


void OVRCameraRig__get_leftEyeAnchor(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x21;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
                    /* try { // try from 079cb9d8 to 07acb9db has its CatchHandler @ 079cb9f4 */
                    /* try { // try from 079cb9dc to 07acba4b has its CatchHandler @ 079cb544 */
  if ((*(byte *)(unaff_x21 + 0xe32) & 1) == 0) {
    FUN_04077588(PTR_DAT_092babe0);
    FUN_04077588(PTR_DAT_092ee8a0);
    FUN_04077588(PTR_DAT_092babf0);
    *(undefined1 *)(unaff_x21 + 0xe32) = 1;
  }
  puVar1 = PTR_DAT_092ee8a0;
  if (*(char *)(param_1 + 0x80) != '\0') {
    plVar7 = *(long **)(param_1 + 0x20);
    uVar2 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092babe0);
    FUN_06e5c0a8(uVar2,param_1,*(undefined8 *)puVar1,0);
    if (plVar7 == (long *)0x0) goto LAB_079cbb40;
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_092babf0) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto OVRCameraRig__get_trackerAnchor;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092babf0,1);
OVRCameraRig__get_trackerAnchor:
    (*(code *)*puVar3)(plVar7,uVar2,puVar3[1]);
    *(undefined1 *)(param_1 + 0x80) = 0;
  }
  uVar2 = param_2[2];
  uVar9 = param_2[1];
  uVar8 = *param_2;
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 3);
  *(undefined8 *)(param_1 + 0x74) = uVar2;
  *(undefined8 *)(param_1 + 0x6c) = uVar9;
  *(undefined8 *)(param_1 + 100) = uVar8;
  if ((*(long *)(param_1 + 0x40) == 0) ||
     (uVar5 = FUN_079abb94(*(long *)(param_1 + 0x40),0), (uVar5 & 1) != 0)) {
    return;
  }
  FUN_079cbb44(param_1,0);
  FUN_079cbb44(param_1,2);
  lVar4 = *(long *)(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x28) = 1;
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x079cbb3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),param_1,*(undefined8 *)(lVar4 + 0x28))
    ;
    return;
  }
LAB_079cbb40:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


