/*
FUNCTION_NAME: OVRPlugin$$IsValidBone
ENTRY_POINT: 076ceba4
PROGRAM: m3ar-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__IsValidBone(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  
  lVar2 = *unaff_x19;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
                    /* try { // try from 076cebb8 to 077cebbb has its CatchHandler @ 076ceea4 */
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_08f6a1b8) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0x15) * 0x10 + 0x138);
        goto LAB_076cec08;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_0406ae20();
LAB_076cec08:
                    /* WARNING: Could not recover jumptable at 0x076cec1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)();
  return;
}


