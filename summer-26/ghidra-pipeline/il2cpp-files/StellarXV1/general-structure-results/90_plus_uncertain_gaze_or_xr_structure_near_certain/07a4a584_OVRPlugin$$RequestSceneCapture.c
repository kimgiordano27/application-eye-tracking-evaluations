/*
FUNCTION_NAME: OVRPlugin$$RequestSceneCapture
ENTRY_POINT: 07a4a584
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__RequestSceneCapture(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long in_x9;
  ulong uVar3;
  int *piVar4;
  long *unaff_x20;
  long *unaff_x22;
  
  if (in_x9 != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar4 + 9) * 0x10 + 0x138);
        goto LAB_07a4a5c8;
      }
      in_x9 = in_x9 + -1;
      piVar4 = piVar4 + 4;
    } while (in_x9 != 0);
  }
  puVar1 = (undefined8 *)FUN_040b1e00();
LAB_07a4a5c8:
  (*(code *)*puVar1)();
  lVar2 = *unaff_x20;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *unaff_x22) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_07a4a62c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
                    /* try { // try from 07a4a60c to 07b4a613 has its CatchHandler @ 07a4a778 */
    } while (uVar3 != 0);
  }
                    /* try { // try from 07a4a614 to 07b4a673 has its CatchHandler @ 07a4a54c */
  puVar1 = (undefined8 *)FUN_040b1e00();
LAB_07a4a62c:
  (*(code *)*puVar1)();
  FUN_07a4a674();
  return;
}


