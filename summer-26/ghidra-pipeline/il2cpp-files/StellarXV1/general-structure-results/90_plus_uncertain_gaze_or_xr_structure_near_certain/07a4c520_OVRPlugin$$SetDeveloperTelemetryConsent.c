/*
FUNCTION_NAME: OVRPlugin$$SetDeveloperTelemetryConsent
ENTRY_POINT: 07a4c520
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


float OVRPlugin__SetDeveloperTelemetryConsent(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  long *unaff_x21;
  float fVar6;
  float fVar7;
  float in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  
  fVar6 = (float)FUN_089b9694(in_stack_00000008._4_4_,uStack0000000000000010,uStack0000000000000014,
                              in_stack_00000018,0);
  plVar5 = *(long **)(unaff_x19 + 0x28);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
                    /* try { // try from 07a4c568 to 07b4c56b has its CatchHandler @ 07a4c644 */
      if (*(long *)(piVar4 + -2) == *unaff_x21) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 4) * 0x10 + 0x138);
        goto LAB_07a4c5e8;
      }
      uVar3 = uVar3 - 1;
                    /* try { // try from 07a4c578 to 07b4c57f has its CatchHandler @ 07a4c64c */
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_040b1e00(plVar5,*unaff_x21,4);
LAB_07a4c5e8:
  fVar7 = (float)(*(code *)*puVar1)(plVar5,puVar1[1]);
  return in_stack_00000000 + fVar6 * fVar7;
}


