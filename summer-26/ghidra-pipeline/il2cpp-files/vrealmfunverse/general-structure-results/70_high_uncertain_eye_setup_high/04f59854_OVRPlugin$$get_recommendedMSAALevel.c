/*
FUNCTION_NAME: OVRPlugin$$get_recommendedMSAALevel
ENTRY_POINT: 04f59854
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_recommendedMSAALevel(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long in_x9;
  ulong uVar3;
  int *piVar4;
  long *unaff_x19;
  long *unaff_x21;
  float fVar5;
  float fVar6;
  
  if (in_x9 != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
                    /* try { // try from 04f59860 to 05059867 has its CatchHandler @ 04f59a04 */
      if (*(long *)(piVar4 + -2) == param_3) {
                    /* try { // try from 04f59888 to 050599e3 has its CatchHandler @ 04f59644 */
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar4 + 2) * 0x10 + 0x138);
        goto LAB_04f59898;
      }
      in_x9 = in_x9 + -1;
                    /* try { // try from 04f59870 to 05059887 has its CatchHandler @ 04f59a14 */
      piVar4 = piVar4 + 4;
    } while (in_x9 != 0);
  }
  puVar1 = (undefined8 *)FUN_02b7654c();
LAB_04f59898:
  fVar5 = (float)(*(code *)*puVar1)();
  if (0.0 < fVar5) {
    fVar5 = (float)FUN_04f5dbc4();
    lVar2 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x21) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 2) * 0x10 + 0x138);
          goto LAB_04f59918;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02b7654c();
LAB_04f59918:
    fVar6 = (float)(*(code *)*puVar1)();
    if (fVar5 <= fVar6) {
      FUN_04f59e80();
    }
  }
  return;
}


